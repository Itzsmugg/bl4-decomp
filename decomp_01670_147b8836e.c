// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147b8836e FUN_147b8836e body=274 status=ok
// SIG undefined FUN_147b8836e(void)

void FUN_147b8836e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [5];
  
  local_38[4] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[2] = 0;
  local_38[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14626c1be(local_38 + 2,local_38);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[4] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b88482 FUN_147b88482 body=139 status=ok
// SIG undefined FUN_147b88482(void)

void FUN_147b88482(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14598c0be(&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b88514 FUN_147b88514 body=491 status=ok
// SIG undefined FUN_147b88514(void)

void FUN_147b88514(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  void **ppvVar5;
  undefined2 *puVar6;
  void **ppvVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  void *local_58;
  undefined8 uStack_50;
  undefined2 *local_48;
  undefined8 uStack_40;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_58 = (void *)0x0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  uVar3 = uStack_30;
  _Src = local_38;
  ppvVar1 = *(void ***)(param_2 + 0x38);
  ppvVar7 = ppvVar1;
  if (ppvVar1 == (void **)0x0) {
    ppvVar7 = &local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (ppvVar7 != &local_38) {
    ppvVar5 = &local_58;
    if (ppvVar1 != (void **)0x0) {
      ppvVar5 = ppvVar1;
    }
    iVar2 = (int)uStack_30;
    lVar8 = (longlong)(int)uStack_30;
    *(int *)(ppvVar5 + 1) = (int)uStack_30;
    if (iVar2 == 0 && *(int *)((longlong)ppvVar5 + 0xc) == 0) {
      *(undefined4 *)((longlong)ppvVar5 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(ppvVar7,uVar3 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar7,_Src,lVar8 * 2);
      }
    }
  }
  puVar6 = local_48;
  if ((int)uStack_40 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  uVar4 = FUN_14107002a(ppvVar7,puVar6);
  *param_3 = uVar4;
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b88700 FUN_147b88700 body=369 status=ok
// SIG undefined FUN_147b88700(void)

void FUN_147b88700(undefined8 param_1,longlong param_2)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  ulonglong uVar3;
  void **ppvVar4;
  longlong lVar5;
  void **ppvVar6;
  undefined1 auStack_68 [32];
  void *local_48;
  undefined8 uStack_40;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = (void *)0x0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  uVar3 = uStack_30;
  _Src = local_38;
  ppvVar1 = *(void ***)(param_2 + 0x38);
  ppvVar6 = ppvVar1;
  if (ppvVar1 == (void **)0x0) {
    ppvVar6 = &local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (ppvVar6 != &local_38) {
    ppvVar4 = &local_48;
    if (ppvVar1 != (void **)0x0) {
      ppvVar4 = ppvVar1;
    }
    iVar2 = (int)uStack_30;
    lVar5 = (longlong)(int)uStack_30;
    *(int *)(ppvVar4 + 1) = (int)uStack_30;
    if (iVar2 == 0 && *(int *)((longlong)ppvVar4 + 0xc) == 0) {
      *(undefined4 *)((longlong)ppvVar4 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(ppvVar6,uVar3 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar6,_Src,lVar5 * 2);
      }
    }
  }
  FUN_145a3c032(ppvVar6);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b88872 FUN_147b88872 body=369 status=ok
// SIG undefined FUN_147b88872(void)

void FUN_147b88872(undefined8 param_1,longlong param_2)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  ulonglong uVar3;
  void **ppvVar4;
  longlong lVar5;
  void **ppvVar6;
  undefined1 auStack_68 [32];
  void *local_48;
  undefined8 uStack_40;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = (void *)0x0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  uVar3 = uStack_30;
  _Src = local_38;
  ppvVar1 = *(void ***)(param_2 + 0x38);
  ppvVar6 = ppvVar1;
  if (ppvVar1 == (void **)0x0) {
    ppvVar6 = &local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (ppvVar6 != &local_38) {
    ppvVar4 = &local_48;
    if (ppvVar1 != (void **)0x0) {
      ppvVar4 = ppvVar1;
    }
    iVar2 = (int)uStack_30;
    lVar5 = (longlong)(int)uStack_30;
    *(int *)(ppvVar4 + 1) = (int)uStack_30;
    if (iVar2 == 0 && *(int *)((longlong)ppvVar4 + 0xc) == 0) {
      *(undefined4 *)((longlong)ppvVar4 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(ppvVar6,uVar3 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar6,_Src,lVar5 * 2);
      }
    }
  }
  FUN_1401ae5e4(ppvVar6);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b889e4 FUN_147b889e4 body=379 status=ok
// SIG undefined FUN_147b889e4(void)

void FUN_147b889e4(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined2 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 *local_38;
  undefined8 uStack_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((int)uStack_30 - 2U < 0x7fffffff) {
    uVar1 = *local_38;
  }
  else {
    uVar1 = 0;
  }
  FUN_14681725a(&local_48,local_28,uVar1);
  if (&local_48 == param_3) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_48;
    local_48 = 0;
    *(undefined4 *)(param_3 + 1) = local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_3c;
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b88b60 FUN_147b88b60 body=369 status=ok
// SIG undefined FUN_147b88b60(void)

void FUN_147b88b60(undefined8 param_1,longlong param_2)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  ulonglong uVar3;
  void **ppvVar4;
  longlong lVar5;
  void **ppvVar6;
  undefined1 auStack_68 [32];
  void *local_48;
  undefined8 uStack_40;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = (void *)0x0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  uVar3 = uStack_30;
  _Src = local_38;
  ppvVar1 = *(void ***)(param_2 + 0x38);
  ppvVar6 = ppvVar1;
  if (ppvVar1 == (void **)0x0) {
    ppvVar6 = &local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (ppvVar6 != &local_38) {
    ppvVar4 = &local_48;
    if (ppvVar1 != (void **)0x0) {
      ppvVar4 = ppvVar1;
    }
    iVar2 = (int)uStack_30;
    lVar5 = (longlong)(int)uStack_30;
    *(int *)(ppvVar4 + 1) = (int)uStack_30;
    if (iVar2 == 0 && *(int *)((longlong)ppvVar4 + 0xc) == 0) {
      *(undefined4 *)((longlong)ppvVar4 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(ppvVar6,uVar3 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar6,_Src,lVar5 * 2);
      }
    }
  }
  FUN_140e4328c(ppvVar6);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b88cd2 FUN_147b88cd2 body=369 status=ok
// SIG undefined FUN_147b88cd2(void)

void FUN_147b88cd2(undefined8 param_1,longlong param_2)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  ulonglong uVar3;
  void **ppvVar4;
  longlong lVar5;
  void **ppvVar6;
  undefined1 auStack_68 [32];
  void *local_48;
  undefined8 uStack_40;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = (void *)0x0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  uVar3 = uStack_30;
  _Src = local_38;
  ppvVar1 = *(void ***)(param_2 + 0x38);
  ppvVar6 = ppvVar1;
  if (ppvVar1 == (void **)0x0) {
    ppvVar6 = &local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (ppvVar6 != &local_38) {
    ppvVar4 = &local_48;
    if (ppvVar1 != (void **)0x0) {
      ppvVar4 = ppvVar1;
    }
    iVar2 = (int)uStack_30;
    lVar5 = (longlong)(int)uStack_30;
    *(int *)(ppvVar4 + 1) = (int)uStack_30;
    if (iVar2 == 0 && *(int *)((longlong)ppvVar4 + 0xc) == 0) {
      *(undefined4 *)((longlong)ppvVar4 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(ppvVar6,uVar3 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar6,_Src,lVar5 * 2);
      }
    }
  }
  FUN_140d6dd3e(ppvVar6);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b88e44 FUN_147b88e44 body=139 status=ok
// SIG undefined FUN_147b88e44(void)

void FUN_147b88e44(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145eefa7e(&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b88ed0 FUN_147b88ed0 body=139 status=ok
// SIG undefined FUN_147b88ed0(void)

void FUN_147b88ed0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14626c0de(&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b88f5c FUN_147b88f5c body=139 status=ok
// SIG undefined FUN_147b88f5c(void)

void FUN_147b88f5c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1410f2562(&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b88fe8 FUN_147b88fe8 body=139 status=ok
// SIG undefined FUN_147b88fe8(void)

void FUN_147b88fe8(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140f7cd62(&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b89074 FUN_147b89074 body=139 status=ok
// SIG undefined FUN_147b89074(void)

void FUN_147b89074(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145c838ee(&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b89100 FUN_147b89100 body=139 status=ok
// SIG undefined FUN_147b89100(void)

void FUN_147b89100(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_146011dcc(&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8918c FUN_147b8918c body=139 status=ok
// SIG undefined FUN_147b8918c(void)

void FUN_147b8918c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14626c14e(&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b89218 FUN_147b89218 body=139 status=ok
// SIG undefined FUN_147b89218(void)

void FUN_147b89218(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140b74e96(&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b892a4 FUN_147b892a4 body=139 status=ok
// SIG undefined FUN_147b892a4(void)

void FUN_147b892a4(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145ef8e44(&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b89330 FUN_147b89330 body=139 status=ok
// SIG undefined FUN_147b89330(void)

void FUN_147b89330(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b893bc(&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b893bc FUN_147b893bc body=87 status=ok
// SIG undefined FUN_147b893bc(void)

undefined8 * FUN_147b893bc(undefined8 *param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14047ac8c();
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



// FUNCTION 147b89414 FUN_147b89414 body=139 status=ok
// SIG undefined FUN_147b89414(void)

void FUN_147b89414(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145c839de(&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b894a0 FUN_147b894a0 body=369 status=ok
// SIG undefined FUN_147b894a0(void)

void FUN_147b894a0(undefined8 param_1,longlong param_2)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  ulonglong uVar3;
  void **ppvVar4;
  longlong lVar5;
  void **ppvVar6;
  undefined1 auStack_68 [32];
  void *local_48;
  undefined8 uStack_40;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = (void *)0x0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  uVar3 = uStack_30;
  _Src = local_38;
  ppvVar1 = *(void ***)(param_2 + 0x38);
  ppvVar6 = ppvVar1;
  if (ppvVar1 == (void **)0x0) {
    ppvVar6 = &local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (ppvVar6 != &local_38) {
    ppvVar4 = &local_48;
    if (ppvVar1 != (void **)0x0) {
      ppvVar4 = ppvVar1;
    }
    iVar2 = (int)uStack_30;
    lVar5 = (longlong)(int)uStack_30;
    *(int *)(ppvVar4 + 1) = (int)uStack_30;
    if (iVar2 == 0 && *(int *)((longlong)ppvVar4 + 0xc) == 0) {
      *(undefined4 *)((longlong)ppvVar4 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(ppvVar6,uVar3 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar6,_Src,lVar5 * 2);
      }
    }
  }
  FUN_1401ae99a(ppvVar6);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b89612 FUN_147b89612 body=139 status=ok
// SIG undefined FUN_147b89612(void)

void FUN_147b89612(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140d6b9b4(&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8969e FUN_147b8969e body=139 status=ok
// SIG undefined FUN_147b8969e(void)

void FUN_147b8969e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_146817640(&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8972a FUN_147b8972a body=139 status=ok
// SIG undefined FUN_147b8972a(void)

void FUN_147b8972a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1456d7a74(&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b897b6 FUN_147b897b6 body=356 status=ok
// SIG undefined FUN_147b897b6(void)

void FUN_147b897b6(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_38 [5];
  
  local_38[4] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[2] = 0;
  local_38[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1468181c8(&local_48,local_38 + 2,local_38);
  if (&local_48 == param_3) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_48;
    local_48 = 0;
    *(undefined4 *)(param_3 + 1) = local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_3c;
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[4] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8991c FUN_147b8991c body=163 status=ok
// SIG undefined FUN_147b8991c(void)

void FUN_147b8991c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1461de488(local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b899c0 FUN_147b899c0 body=139 status=ok
// SIG undefined FUN_147b899c0(void)

void FUN_147b899c0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1468173e6(&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b89a50 FUN_147b89a50 body=37 status=ok
// SIG undefined FUN_147b89a50(void)

void FUN_147b89a50(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145c83bac();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147b89a76 FUN_147b89a76 body=139 status=ok
// SIG undefined FUN_147b89a76(void)

void FUN_147b89a76(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140d6aad2(&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b89b02 FUN_147b89b02 body=506 status=ok
// SIG undefined FUN_147b89b02(void)

void FUN_147b89b02(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [9];
  
  local_68[8] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[6] = 0;
  local_68[7] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 6);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 6);
  }
  local_68[4] = 0;
  local_68[5] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 4);
  }
  plVar2 = local_68 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_68[2] = 0;
  local_68[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 2);
  }
  plVar1 = local_68 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = local_68;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1457bae9a(local_68 + 6,plVar2,plVar1,plVar3);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
  if (local_68[4] != 0) {
    FUN_1400020a8();
  }
  if (local_68[6] != 0) {
    FUN_1400020a8();
  }
  if ((local_68[8] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b89d04 FUN_147b89d04 body=389 status=ok
// SIG undefined FUN_147b89d04(void)

void FUN_147b89d04(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  longlong **pplVar3;
  undefined1 auStack_78 [40];
  longlong *local_50 [2];
  undefined1 local_39;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  puVar2 = &local_39;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  FUN_144a5dc74(local_50);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  pplVar3 = local_50;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar3 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_146817020(local_38,pplVar3);
  *puVar2 = uVar1;
  if (local_50[0] != (longlong *)0x0) {
    (**(code **)(*local_50[0] + 0x10))();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b89e8a FUN_147b89e8a body=139 status=ok
// SIG undefined FUN_147b89e8a(void)

void FUN_147b89e8a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145a3c074(&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b89f1a FUN_147b89f1a body=107 status=ok
// SIG undefined FUN_147b89f1a(void)

void FUN_147b89f1a(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140bee9ec(&local_28);
  FUN_1447cd2ec(param_1,&local_28);
  FUN_1447a1747(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b89f86 FUN_147b89f86 body=96 status=ok
// SIG undefined FUN_147b89f86(void)

void FUN_147b89f86(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_1447a122a(local_28);
  FUN_1447cd2ec(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b89fe8 FUN_147b89fe8 body=96 status=ok
// SIG undefined FUN_147b89fe8(void)

void FUN_147b89fe8(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a787a6(local_28);
  FUN_1447cd2ec(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8a04a FUN_147b8a04a body=105 status=ok
// SIG undefined FUN_147b8a04a(void)

void FUN_147b8a04a(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a787a6(local_38);
  local_28 = param_3;
  FUN_1447cd2ec(param_1,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8a0b4 FUN_147b8a0b4 body=117 status=ok
// SIG undefined FUN_147b8a0b4(void)

void FUN_147b8a0b4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  local_38 = param_3;
  local_34 = param_4;
  FUN_1447cd2ec(param_1,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8a12e FUN_147b8a12e body=51 status=ok
// SIG undefined FUN_147b8a12e(void)

void FUN_147b8a12e(undefined8 param_1,longlong param_2,char *param_3)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_1467b7cba();
  if (8 < (byte)(cVar1 - 1U)) {
    cVar1 = '\0';
  }
  *param_3 = cVar1;
  return;
}



// FUNCTION 147b8a162 FUN_147b8a162 body=51 status=ok
// SIG undefined FUN_147b8a162(void)

void FUN_147b8a162(undefined8 param_1,longlong param_2,char *param_3)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_1467b7cae();
  if (8 < (byte)(cVar1 - 1U)) {
    cVar1 = '\0';
  }
  *param_3 = cVar1;
  return;
}



// FUNCTION 147b8a1a6 FUN_147b8a1a6 body=155 status=ok
// SIG undefined FUN_147b8a1a6(void)

void FUN_147b8a1a6(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_38 [39];
  char local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_11 = '\0';
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_11);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_11);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = '\0';
  if ((byte)(local_11 - 1U) < 9) {
    cVar1 = local_11;
  }
  FUN_1467b7cb2(cVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8a298 FUN_147b8a298 body=45 status=ok
// SIG undefined FUN_147b8a298(void)

void FUN_147b8a298(longlong param_1,longlong *param_2)

{
  FUN_147b89f86(param_1 + 0x230);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147b8a2c6 FUN_147b8a2c6 body=68 status=ok
// SIG undefined FUN_147b8a2c6(void)

void FUN_147b8a2c6(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_1447cd2ec(param_1 + 0x240,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8a30c FUN_147b8a30c body=185 status=ok
// SIG undefined FUN_147b8a30c(void)

void FUN_147b8a30c(longlong param_1,longlong *param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (void *)0x0;
  local_38 = (int)param_2[1];
  lVar1 = (longlong)local_38;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar1 * 2);
  }
  FUN_147b89fe8(param_1 + 0x250,&local_40);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8a3c6 FUN_147b8a3c6 body=198 status=ok
// SIG undefined FUN_147b8a3c6(void)

void FUN_147b8a3c6(longlong param_1,longlong *param_2,undefined4 param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (void *)0x0;
  local_40 = (int)param_2[1];
  lVar1 = (longlong)local_40;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar1 * 2);
  }
  FUN_147b8a04a(param_1 + 0x260,&local_48,param_3);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8a48e FUN_147b8a48e body=208 status=ok
// SIG undefined FUN_147b8a48e(void)

void FUN_147b8a48e(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (void *)0x0;
  local_48 = (int)param_2[1];
  lVar1 = (longlong)local_48;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar1 * 2);
  }
  FUN_147b8a0b4(param_1 + 0x270,&local_50,param_3,param_4);
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8a560 FUN_147b8a560 body=68 status=ok
// SIG undefined FUN_147b8a560(void)

void FUN_147b8a560(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1447cd2ec(param_1 + 0x280,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8a5a6 FUN_147b8a5a6 body=394 status=ok
// SIG undefined FUN_147b8a5a6(void)

void FUN_147b8a5a6(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  code *pcVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_88 [40];
  longlong local_60;
  ulonglong *local_58;
  int local_50;
  undefined4 local_4c;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar11 = *(longlong *)(param_2 + 0x30);
  puVar5 = *(ulonglong **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  puVar6 = *(ulonglong **)(param_2 + 0x38);
  lVar12 = *(longlong *)(param_2 + 0x30);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  bVar1 = *(byte *)(lVar12 + 0x70);
  (**(code **)(**(longlong **)(lVar12 + 0x78) + 0x178))();
  iVar3 = *(int *)(*(longlong *)(lVar12 + 0x78) + 0x34);
  bVar2 = *(byte *)(lVar11 + 0x70);
  local_4c = (**(code **)(**(longlong **)(lVar11 + 0x78) + 0x178))();
  local_60 = *(longlong *)(lVar11 + 0x78);
  local_50 = *(int *)(local_60 + 0x34);
  iVar4 = (int)puVar6[1];
  local_58 = puVar5;
  local_48 = bVar2;
  FUN_144a8a902(&local_60,iVar4);
  pcVar7 = (code *)FUN_147b8b67a(*(undefined8 *)(lVar12 + 0x78),*(undefined8 *)(lVar11 + 0x78));
  if (0 < (longlong)iVar4) {
    lVar12 = 0;
    lVar11 = 0;
    do {
      if ((int)puVar6[1] == 0) {
        lVar9 = 0;
      }
      else {
        if ((bVar1 & 1) == 0) {
          uVar8 = *puVar6;
        }
        else {
          uVar8 = *puVar6;
          if ((uVar8 & 1) != 0) {
            uVar8 = ((longlong)uVar8 >> 0x18) + (longlong)puVar6;
          }
        }
        lVar9 = uVar8 + lVar12;
      }
      if ((int)local_58[1] == 0) {
        lVar10 = 0;
      }
      else {
        if ((local_48 & 1) == 0) {
          uVar8 = *local_58;
        }
        else {
          uVar8 = *local_58;
          if ((uVar8 & 1) != 0) {
            uVar8 = (longlong)local_58 + ((longlong)uVar8 >> 0x18);
          }
        }
        lVar10 = local_50 * lVar11 + uVar8;
      }
      (*pcVar7)(lVar9,lVar10);
      lVar11 = lVar11 + 1;
      lVar12 = lVar12 + iVar3;
    } while (iVar4 != lVar11);
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b8a732 FUN_147b8a732 body=144 status=ok
// SIG undefined FUN_147b8a732(void)

void FUN_147b8a732(undefined8 param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 uVar4;
  float *pfVar5;
  double *pdVar6;
  
  pfVar5 = *(float **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  pdVar6 = *(double **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = pdVar6[1];
  dVar2 = pdVar6[3];
  dVar3 = pdVar6[2];
  uVar4 = *(undefined1 *)(pdVar6 + 4);
  *pfVar5 = (float)*pdVar6;
  pfVar5[1] = (float)dVar1;
  pfVar5[2] = (float)dVar3;
  pfVar5[3] = (float)dVar2;
  *(undefined1 *)(pfVar5 + 4) = uVar4;
  return;
}



// FUNCTION 147b8a7c2 FUN_147b8a7c2 body=144 status=ok
// SIG undefined FUN_147b8a7c2(void)

void FUN_147b8a7c2(undefined8 param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 uVar4;
  double *pdVar5;
  float *pfVar6;
  
  pdVar5 = *(double **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  pfVar6 = *(float **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  fVar1 = pfVar6[1];
  fVar2 = pfVar6[3];
  fVar3 = pfVar6[2];
  uVar4 = *(undefined1 *)(pfVar6 + 4);
  *pdVar5 = (double)*pfVar6;
  pdVar5[1] = (double)fVar1;
  pdVar5[2] = (double)fVar3;
  pdVar5[3] = (double)fVar2;
  *(undefined1 *)(pdVar5 + 4) = uVar4;
  return;
}



// FUNCTION 147b8a852 FUN_147b8a852 body=180 status=ok
// SIG undefined FUN_147b8a852(void)

void FUN_147b8a852(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144a928e2(&local_58,*(undefined8 *)(param_2 + 0x38));
  *puVar1 = local_58;
  puVar1[1] = uStack_54;
  puVar1[2] = uStack_50;
  puVar1[3] = uStack_4c;
  puVar1[4] = local_48;
  puVar1[5] = uStack_44;
  puVar1[6] = uStack_40;
  puVar1[7] = uStack_3c;
  puVar1[8] = local_38;
  puVar1[9] = uStack_34;
  puVar1[10] = uStack_30;
  puVar1[0xb] = uStack_2c;
  puVar1[0xc] = local_28;
  puVar1[0xd] = uStack_24;
  puVar1[0xe] = uStack_20;
  puVar1[0xf] = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8a908 FUN_147b8a908 body=170 status=ok
// SIG undefined FUN_147b8a908(void)

void FUN_147b8a908(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144b10ee8(local_98,*(undefined8 *)(param_2 + 0x38));
  puVar2 = local_98;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8a9b4 FUN_147b8a9b4 body=138 status=ok
// SIG undefined FUN_147b8a9b4(void)

void FUN_147b8a9b4(undefined8 param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float *pfVar4;
  double *pdVar5;
  
  pfVar4 = *(float **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  pdVar5 = *(double **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = pdVar5[3];
  dVar2 = pdVar5[2];
  dVar3 = pdVar5[1];
  *pfVar4 = (float)*pdVar5;
  pfVar4[1] = (float)dVar3;
  pfVar4[2] = (float)dVar2;
  pfVar4[3] = (float)dVar1;
  return;
}



// FUNCTION 147b8aa3e FUN_147b8aa3e body=138 status=ok
// SIG undefined FUN_147b8aa3e(void)

void FUN_147b8aa3e(undefined8 param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double *pdVar4;
  float *pfVar5;
  
  pdVar4 = *(double **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  pfVar5 = *(float **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  fVar1 = pfVar5[3];
  fVar2 = pfVar5[2];
  fVar3 = pfVar5[1];
  *pdVar4 = (double)*pfVar5;
  pdVar4[1] = (double)fVar3;
  pdVar4[2] = (double)fVar2;
  pdVar4[3] = (double)fVar1;
  return;
}



// FUNCTION 147b8aac8 FUN_147b8aac8 body=138 status=ok
// SIG undefined FUN_147b8aac8(void)

void FUN_147b8aac8(undefined8 param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float *pfVar4;
  double *pdVar5;
  
  pfVar4 = *(float **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  pdVar5 = *(double **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = pdVar5[3];
  dVar2 = pdVar5[2];
  dVar3 = pdVar5[1];
  *pfVar4 = (float)*pdVar5;
  pfVar4[1] = (float)dVar3;
  pfVar4[2] = (float)dVar2;
  pfVar4[3] = (float)dVar1;
  return;
}



// FUNCTION 147b8ab52 FUN_147b8ab52 body=138 status=ok
// SIG undefined FUN_147b8ab52(void)

void FUN_147b8ab52(undefined8 param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double *pdVar4;
  float *pfVar5;
  
  pdVar4 = *(double **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  pfVar5 = *(float **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  fVar1 = pfVar5[3];
  fVar2 = pfVar5[2];
  fVar3 = pfVar5[1];
  *pdVar4 = (double)*pfVar5;
  pdVar4[1] = (double)fVar3;
  pdVar4[2] = (double)fVar2;
  pdVar4[3] = (double)fVar1;
  return;
}



// FUNCTION 147b8abdc FUN_147b8abdc body=128 status=ok
// SIG undefined FUN_147b8abdc(void)

void FUN_147b8abdc(undefined8 param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  float *pfVar3;
  double *pdVar4;
  
  pfVar3 = *(float **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  pdVar4 = *(double **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = pdVar4[2];
  dVar2 = pdVar4[1];
  *pfVar3 = (float)*pdVar4;
  pfVar3[1] = (float)dVar2;
  pfVar3[2] = (float)dVar1;
  return;
}



// FUNCTION 147b8ac5c FUN_147b8ac5c body=128 status=ok
// SIG undefined FUN_147b8ac5c(void)

void FUN_147b8ac5c(undefined8 param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  double *pdVar3;
  float *pfVar4;
  
  pdVar3 = *(double **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  pfVar4 = *(float **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  fVar1 = pfVar4[2];
  fVar2 = pfVar4[1];
  *pdVar3 = (double)*pfVar4;
  pdVar3[1] = (double)fVar2;
  pdVar3[2] = (double)fVar1;
  return;
}



// FUNCTION 147b8acdc FUN_147b8acdc body=155 status=ok
// SIG undefined FUN_147b8acdc(void)

void FUN_147b8acdc(undefined8 param_1,longlong param_2)

{
  float *pfVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  pfVar1 = *(float **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  pdVar2 = *(double **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar3 = pdVar2[10];
  dVar4 = pdVar2[0xb];
  dVar5 = pdVar2[8];
  dVar6 = pdVar2[9];
  dVar7 = pdVar2[6];
  dVar8 = pdVar2[7];
  dVar9 = pdVar2[4];
  dVar10 = pdVar2[5];
  dVar11 = pdVar2[2];
  dVar12 = pdVar2[3];
  dVar13 = pdVar2[1];
  *pfVar1 = (float)*pdVar2;
  pfVar1[1] = (float)dVar13;
  pfVar1[2] = (float)dVar11;
  pfVar1[3] = (float)dVar12;
  pfVar1[4] = (float)dVar9;
  pfVar1[5] = (float)dVar10;
  pfVar1[6] = (float)dVar7;
  pfVar1[7] = (float)dVar8;
  pfVar1[8] = (float)dVar5;
  pfVar1[9] = (float)dVar6;
  pfVar1[10] = (float)dVar3;
  pfVar1[0xb] = (float)dVar4;
  return;
}



// FUNCTION 147b8ad78 FUN_147b8ad78 body=158 status=ok
// SIG undefined FUN_147b8ad78(void)

void FUN_147b8ad78(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double *pdVar7;
  undefined8 *puVar8;
  
  pdVar7 = *(double **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  puVar8 = *(undefined8 **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = puVar8[4];
  uVar2 = puVar8[5];
  uVar3 = puVar8[2];
  uVar4 = puVar8[3];
  uVar5 = *puVar8;
  uVar6 = puVar8[1];
  *pdVar7 = (double)(float)uVar5;
  pdVar7[1] = (double)(float)((ulonglong)uVar5 >> 0x20);
  pdVar7[2] = (double)(float)uVar6;
  pdVar7[3] = (double)(float)((ulonglong)uVar6 >> 0x20);
  pdVar7[4] = (double)(float)uVar3;
  pdVar7[5] = (double)(float)((ulonglong)uVar3 >> 0x20);
  pdVar7[6] = (double)(float)uVar4;
  pdVar7[7] = (double)(float)((ulonglong)uVar4 >> 0x20);
  pdVar7[8] = (double)(float)uVar1;
  pdVar7[9] = (double)(float)((ulonglong)uVar1 >> 0x20);
  pdVar7[10] = (double)(float)uVar2;
  pdVar7[0xb] = (double)(float)((ulonglong)uVar2 >> 0x20);
  return;
}



// FUNCTION 147b8ae16 FUN_147b8ae16 body=118 status=ok
// SIG undefined FUN_147b8ae16(void)

void FUN_147b8ae16(undefined8 param_1,longlong param_2)

{
  double dVar1;
  float *pfVar2;
  
  pfVar2 = *(float **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = (*(double **)(param_2 + 0x38))[1];
  *pfVar2 = (float)**(double **)(param_2 + 0x38);
  pfVar2[1] = (float)dVar1;
  return;
}



// FUNCTION 147b8ae8c FUN_147b8ae8c body=118 status=ok
// SIG undefined FUN_147b8ae8c(void)

void FUN_147b8ae8c(undefined8 param_1,longlong param_2)

{
  float fVar1;
  double *pdVar2;
  
  pdVar2 = *(double **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  fVar1 = (*(float **)(param_2 + 0x38))[1];
  *pdVar2 = (double)**(float **)(param_2 + 0x38);
  pdVar2[1] = (double)fVar1;
  return;
}



// FUNCTION 147b8af02 FUN_147b8af02 body=128 status=ok
// SIG undefined FUN_147b8af02(void)

void FUN_147b8af02(undefined8 param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  float *pfVar3;
  double *pdVar4;
  
  pfVar3 = *(float **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  pdVar4 = *(double **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = pdVar4[2];
  dVar2 = pdVar4[1];
  *pfVar3 = (float)*pdVar4;
  pfVar3[1] = (float)dVar2;
  pfVar3[2] = (float)dVar1;
  return;
}



// FUNCTION 147b8af82 FUN_147b8af82 body=128 status=ok
// SIG undefined FUN_147b8af82(void)

void FUN_147b8af82(undefined8 param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  double *pdVar3;
  float *pfVar4;
  
  pdVar3 = *(double **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  pfVar4 = *(float **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  fVar1 = pfVar4[2];
  fVar2 = pfVar4[1];
  *pdVar3 = (double)*pfVar4;
  pdVar3[1] = (double)fVar2;
  pdVar3[2] = (double)fVar1;
  return;
}



// FUNCTION 147b8b002 FUN_147b8b002 body=138 status=ok
// SIG undefined FUN_147b8b002(void)

void FUN_147b8b002(undefined8 param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float *pfVar4;
  double *pdVar5;
  
  pfVar4 = *(float **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  pdVar5 = *(double **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = pdVar5[3];
  dVar2 = pdVar5[2];
  dVar3 = pdVar5[1];
  *pfVar4 = (float)*pdVar5;
  pfVar4[1] = (float)dVar3;
  pfVar4[2] = (float)dVar2;
  pfVar4[3] = (float)dVar1;
  return;
}



// FUNCTION 147b8b08c FUN_147b8b08c body=138 status=ok
// SIG undefined FUN_147b8b08c(void)

void FUN_147b8b08c(undefined8 param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double *pdVar4;
  float *pfVar5;
  
  pdVar4 = *(double **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  pfVar5 = *(float **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  fVar1 = pfVar5[3];
  fVar2 = pfVar5[2];
  fVar3 = pfVar5[1];
  *pdVar4 = (double)*pfVar5;
  pdVar4[1] = (double)fVar3;
  pdVar4[2] = (double)fVar2;
  pdVar4[3] = (double)fVar1;
  return;
}



// FUNCTION 147b8b116 FUN_147b8b116 body=924 status=ok
// SIG undefined FUN_147b8b116(void)

void FUN_147b8b116(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  char cVar8;
  undefined4 uVar9;
  code *pcVar10;
  void *pvVar11;
  ulonglong uVar12;
  int iVar13;
  void *pvVar14;
  int iVar15;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulonglong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  byte local_60;
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar2 = *(longlong *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_1446ebfd4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  puVar4 = *(ulonglong **)(param_2 + 0x38);
  lVar5 = *(longlong *)(param_2 + 0x30);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = *(byte *)(lVar5 + 0x98);
  local_90 = *(undefined8 *)(lVar5 + 0x70);
  uStack_88 = *(undefined8 *)(lVar5 + 0x78);
  local_78 = *(undefined8 *)(lVar5 + 0x80);
  uStack_70 = *(undefined8 *)(lVar5 + 0x88);
  local_68 = *(undefined8 *)(lVar5 + 0x90);
  local_98 = *(undefined1 *)(lVar2 + 0x98);
  local_c8 = *(undefined8 *)(lVar2 + 0x70);
  uStack_c0 = *(undefined8 *)(lVar2 + 0x78);
  local_b0 = *(undefined4 *)(lVar2 + 0x80);
  uStack_ac = *(undefined4 *)(lVar2 + 0x84);
  uStack_a8 = *(undefined4 *)(lVar2 + 0x88);
  uStack_a4 = *(undefined4 *)(lVar2 + 0x8c);
  local_a0 = *(undefined8 *)(lVar2 + 0x90);
  local_b8 = uVar3;
  local_80 = puVar4;
  FUN_140458a4e(&local_c8,
                (int)puVar4[1] -
                *(int *)((longlong)puVar4 + (ulonglong)((local_60 & 1) == 0) * 0x10 + 0x24));
  local_d0 = (code *)FUN_147b8b67a(*(undefined8 *)(lVar5 + 0x70),*(undefined8 *)(lVar2 + 0x70));
  local_d8 = lVar5;
  pcVar10 = (code *)FUN_147b8b67a(*(undefined8 *)(lVar5 + 0x78),*(undefined8 *)(lVar2 + 0x78));
  iVar1 = (int)puVar4[1];
  iVar15 = 0;
  iVar13 = iVar15;
  if (0 < iVar1) {
    do {
      local_58 = (undefined8 *)CONCAT44(local_58._4_4_,iVar15);
      cVar8 = FUN_1446ec082(&local_90,&local_58);
      iVar13 = iVar15;
      if (cVar8 != '\0') break;
      iVar15 = iVar15 + 1;
      iVar13 = iVar1;
    } while (iVar1 != iVar15);
  }
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,iVar13);
  cVar8 = FUN_1446ec082(&local_90);
  if (cVar8 != '\0') {
    do {
      local_58 = &local_c8;
      uVar9 = FUN_140007ec8(&local_c8,&local_58);
      if ((local_60 & 1) == 0) {
        uVar12 = *local_80;
      }
      else {
        uVar7 = *local_80;
        uVar12 = ((longlong)uVar7 >> 0x18) + (longlong)local_80;
        if ((uVar7 & 1) == 0) {
          uVar12 = uVar7;
        }
      }
      pvVar14 = (void *)((longlong)local_68._4_4_ * (longlong)iVar13 + uVar12);
      local_58 = &local_c8;
      local_50 = uVar9;
      pvVar11 = (void *)FUN_144aff4d2(&local_c8,&local_58);
      if (local_d0 == (code *)0x0) {
        if (pvVar11 != pvVar14) {
          plVar6 = *(longlong **)(local_d8 + 0x70);
          if ((*(byte *)((longlong)plVar6 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar6 + 0x100))(plVar6,pvVar11,pvVar14,1);
          }
          else {
            memcpy(pvVar11,pvVar14,(longlong)*(int *)((longlong)plVar6 + 0x34));
          }
        }
      }
      else {
        (*local_d0)(pvVar14,pvVar11);
      }
      if ((local_60 & 1) == 0) {
        uVar12 = *local_80;
      }
      else {
        uVar7 = *local_80;
        uVar12 = ((longlong)uVar7 >> 0x18) + (longlong)local_80;
        if ((uVar7 & 1) == 0) {
          uVar12 = uVar7;
        }
      }
      pvVar14 = (void *)((longlong)(int)local_78 + (longlong)local_68._4_4_ * (longlong)iVar13 +
                        uVar12);
      local_58 = &local_c8;
      local_50 = uVar9;
      pvVar11 = (void *)FUN_1446ec24c(&local_c8,&local_58);
      if (pcVar10 == (code *)0x0) {
        if (pvVar11 != pvVar14) {
          plVar6 = *(longlong **)(local_d8 + 0x78);
          if ((*(byte *)((longlong)plVar6 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar6 + 0x100))(plVar6,pvVar11,pvVar14,1);
          }
          else {
            memcpy(pvVar11,pvVar14,(longlong)*(int *)((longlong)plVar6 + 0x34));
          }
        }
      }
      else {
        (*pcVar10)(pvVar14,pvVar11);
      }
      uVar7 = local_80[1];
      do {
        iVar13 = iVar13 + 1;
        if ((int)uVar7 <= iVar13) break;
        local_58 = (undefined8 *)CONCAT44(local_58._4_4_,iVar13);
        cVar8 = FUN_1446ec082(&local_90,&local_58);
      } while (cVar8 == '\0');
      local_58 = (undefined8 *)CONCAT44(local_58._4_4_,iVar13);
      cVar8 = FUN_1446ec082(&local_90,&local_58);
    } while (cVar8 != '\0');
  }
  FUN_140458c30(&local_c8);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b8b4b4 FUN_147b8b4b4 body=450 status=ok
// SIG undefined FUN_147b8b4b4(void)

void FUN_147b8b4b4(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(param_2 + 0x30);
  plVar2 = *(longlong **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x30) = 0;
  FUN_144a7e162();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  local_50 = *(longlong **)(param_2 + 0x38);
  lVar5 = *(longlong *)(param_2 + 0x30);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = *(undefined8 *)(lVar5 + 0x70);
  local_48 = *(undefined8 *)(lVar5 + 0x78);
  uStack_40 = *(undefined8 *)(lVar5 + 0x80);
  local_38 = *(int *)(lVar5 + 0x88);
  local_80 = *(undefined8 *)(lVar1 + 0x70);
  local_70 = *(undefined4 *)(lVar1 + 0x78);
  uStack_6c = *(undefined4 *)(lVar1 + 0x7c);
  uStack_68 = *(undefined4 *)(lVar1 + 0x80);
  uStack_64 = *(undefined4 *)(lVar1 + 0x84);
  local_60 = *(int *)(lVar1 + 0x88);
  local_78 = plVar2;
  FUN_1402608fa(&local_80,(int)local_50[1] - *(int *)((longlong)local_50 + 0x34));
  pcVar4 = (code *)FUN_147b8b67a(*(undefined8 *)(lVar5 + 0x70),*(undefined8 *)(lVar1 + 0x70));
  local_88 = 0xffffffffffffffff;
  local_90 = &local_58;
  FUN_14000a0a0(&local_90);
  if (-1 < (int)(uint)local_88) {
    do {
      lVar1 = local_90[1];
      if (*(int *)(lVar1 + 0x28) <= (int)(uint)local_88) break;
      lVar5 = lVar1 + 0x10;
      if (*(longlong *)(lVar1 + 0x20) != 0) {
        lVar5 = *(longlong *)(lVar1 + 0x20);
      }
      if ((*(uint *)(lVar5 + (ulonglong)((uint)local_88 >> 5) * 4) >> ((uint)local_88 & 0x1f) & 1)
          == 0) break;
      lVar5 = (longlong)local_38;
      lVar7 = (longlong)(int)(uint)local_88;
      lVar1 = *local_50;
      iVar3 = FUN_14026089e(&local_80);
      if ((int)local_78[1] == *(int *)((longlong)local_78 + 0x34)) {
        lVar6 = 0;
      }
      else {
        lVar6 = (longlong)iVar3 * (longlong)local_60 + *local_78;
      }
      (*pcVar4)(lVar7 * lVar5 + lVar1,lVar6);
      FUN_14000a0a0(&local_90);
    } while (-1 < (int)(uint)local_88);
  }
  FUN_14171a698(&local_80);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8b67a FUN_147b8b67a body=642 status=ok
// SIG undefined FUN_147b8b67a(void)

undefined1 * FUN_147b8b67a(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_68 [40];
  undefined1 *local_40 [2];
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(param_1 + 8);
  lVar3 = FUN_144a64e42();
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar5 = lVar4 != 0;
    if (lVar4 != lVar3 && bVar5) {
      do {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        bVar5 = lVar4 != 0;
        if (lVar4 == lVar3) break;
      } while (lVar4 != 0);
    }
    if (bVar5) goto LAB_147b8b6b0;
  }
  else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_147b8b6b0:
    lVar4 = *(longlong *)(param_2 + 8);
    lVar3 = FUN_144a49fc8();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar3 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar3) break;
        } while (lVar4 != 0);
      }
      if (bVar5) goto LAB_147b8b6cc;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_147b8b6cc:
      local_40[0] = &LAB_147b8b8fd;
      goto LAB_147b8b7a9;
    }
  }
  lVar4 = *(longlong *)(param_1 + 8);
  lVar3 = FUN_144a49fc8();
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar5 = lVar4 != 0;
    if (lVar4 != lVar3 && bVar5) {
      do {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        bVar5 = lVar4 != 0;
        if (lVar4 == lVar3) break;
      } while (lVar4 != 0);
    }
    if (bVar5) goto LAB_147b8b71d;
  }
  else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_147b8b71d:
    lVar4 = *(longlong *)(param_2 + 8);
    lVar3 = FUN_144a64e42();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar3 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar3) break;
        } while (lVar4 != 0);
      }
      if (bVar5) goto LAB_147b8b739;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_147b8b739:
      local_40[0] = &LAB_147b8b906;
      goto LAB_147b8b7a9;
    }
  }
  lVar4 = *(longlong *)(param_1 + 8);
  lVar3 = FUN_1446dcc8c();
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar5 = lVar4 != 0;
    if (lVar4 != lVar3 && bVar5) {
      do {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        bVar5 = lVar4 != 0;
        if (lVar4 == lVar3) break;
      } while (lVar4 != 0);
    }
    if (bVar5) goto LAB_147b8b787;
  }
  else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_147b8b787:
    lVar4 = *(longlong *)(param_2 + 8);
    lVar3 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar3 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar3) break;
        } while (lVar4 != 0);
      }
      if (bVar5) goto LAB_147b8b89d;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_147b8b89d:
      uVar1 = *(undefined8 *)(param_1 + 0x70);
      uVar2 = *(undefined8 *)(param_2 + 0x70);
      if (DAT_14cae85b0 == 0) {
        lVar4 = FUN_14001cc68(0xa0,0x10);
        FUN_147b8ba6a(lVar4);
        DAT_14cae85b0 = lVar4;
      }
      FUN_147b8b910(DAT_14cae85b0,local_40,uVar1,uVar2);
      if (local_30 != '\0') goto LAB_147b8b7a9;
    }
  }
  local_40[0] = (undefined1 *)0x0;
LAB_147b8b7a9:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_40[0];
}



// FUNCTION 147b8b910 FUN_147b8b910 body=345 status=ok
// SIG undefined FUN_147b8b910(void)

ulonglong * FUN_147b8b910(longlong *param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_2 + 2) = 0;
  FUN_147b8bc78();
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = ((uint)(local_20 >> 0x14) & 0xffff ^ (uint)(local_20 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    uVar6 = ((uint)(local_28 >> 0x14) & 0xffff ^ (uint)(local_28 >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    uVar6 = uVar6 >> 0x10 ^ uVar6;
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar9 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (uVar6 * 0x40 + (uVar5 >> 0x10 ^ uVar5) + (uVar6 >> 2) + 0x9e3779b9 ^ uVar6)) *
                    4);
    if (iVar7 != -1) {
      do {
        puVar8 = (ulonglong *)(*param_1 + (longlong)iVar7 * 0x28);
        if ((*puVar8 == local_28) &&
           (*(ulonglong *)(*param_1 + 8 + (longlong)iVar7 * 0x28) == local_20)) goto LAB_147b8b943;
        iVar7 = (int)puVar8[4];
      } while (iVar7 != -1);
    }
  }
  puVar8 = (ulonglong *)0x0;
LAB_147b8b943:
  puVar4 = puVar8 + 2;
  if (puVar8 == (ulonglong *)0x0) {
    puVar4 = (ulonglong *)0x0;
  }
  if (puVar4 != param_2 && puVar4 != (ulonglong *)0x0) {
    uVar1 = *(undefined4 *)((longlong)puVar4 + 4);
    uVar3 = puVar4[1];
    uVar2 = *(undefined4 *)((longlong)puVar4 + 0xc);
    *(int *)param_2 = (int)*puVar4;
    *(undefined4 *)((longlong)param_2 + 4) = uVar1;
    *(int *)(param_2 + 1) = (int)uVar3;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
    *(undefined1 *)(param_2 + 2) = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147b8ba6a FUN_147b8ba6a body=525 status=ok
// SIG undefined FUN_147b8ba6a(void)

undefined8 * FUN_147b8ba6a(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  uVar1 = FUN_145a53f00();
  if (DAT_14cae8c60 != (undefined8 *)0x0) {
    local_c8 = param_1 + 10;
    puVar4 = DAT_14cae8c60;
    do {
      local_68 = (*(code *)*puVar4)();
      local_70 = (*(code *)puVar4[1])();
      lVar2 = (*(code *)puVar4[2])();
      lVar3 = (*(code *)puVar4[3])();
      if (local_70 != 0) {
        local_60 = &local_68;
        local_58 = &local_70;
        FUN_147b93ad0(local_c8,&local_80,&local_60);
      }
      if (lVar2 == 0) {
        lVar2 = local_68;
      }
      local_80 = lVar2;
      local_78 = lVar3;
      FUN_1446f470e(&local_98,puVar4[4],1);
      local_88 = FUN_1400796d0(uVar1,local_98,1);
      local_90 = puVar4[6];
      local_a8 = lVar3;
      local_a0 = lVar2;
      FUN_1446f470e(&local_c0,puVar4[5],1);
      local_b0 = FUN_1400796d0(uVar1,local_c0,1);
      local_b8 = puVar4[7];
      local_58 = &local_90;
      local_60 = &local_80;
      FUN_147b93fcc(param_1,local_4c,&local_60);
      local_60 = &local_a8;
      local_58 = &local_b8;
      FUN_147b93fcc(param_1,local_4c,&local_60);
      puVar4 = (undefined8 *)puVar4[8];
    } while (puVar4 != (undefined8 *)0x0);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8bc78 FUN_147b8bc78 body=315 status=ok
// SIG undefined FUN_147b8bc78(void)

void FUN_147b8bc78(longlong param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x58) == *(int *)(param_1 + 0x84)) {
    *param_2 = param_3;
  }
  else {
    uVar2 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar3 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x90);
    }
    uVar4 = *(int *)(param_1 + 0x98) - 1;
    iVar5 = *(int *)(lVar3 + (ulonglong)((uVar2 >> 0x10 ^ uVar2) & uVar4) * 4);
    if (iVar5 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar5 * 0x18);
        if (*puVar1 == param_3) {
          if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
            param_3 = puVar1[1];
          }
          break;
        }
        iVar5 = (int)puVar1[2];
      } while (iVar5 != -1);
    }
    *param_2 = param_3;
    uVar2 = ((uint)(param_4 >> 0x14) & 0xffff ^ (uint)(param_4 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    iVar5 = *(int *)(lVar3 + (ulonglong)(uVar4 & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar5 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar5 * 0x18);
        if (*puVar1 == param_4) {
          if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
            param_4 = puVar1[1];
          }
          break;
        }
        iVar5 = (int)puVar1[2];
      } while (iVar5 != -1);
    }
  }
  param_2[1] = param_4;
  return;
}



// FUNCTION 147b8bf84 FUN_147b8bf84 body=99 status=ok
// SIG undefined FUN_147b8bf84(void)

void FUN_147b8bf84(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144a928e2(&local_58,param_1);
  *param_2 = local_58;
  param_2[1] = uStack_54;
  param_2[2] = uStack_50;
  param_2[3] = uStack_4c;
  param_2[4] = local_48;
  param_2[5] = uStack_44;
  param_2[6] = uStack_40;
  param_2[7] = uStack_3c;
  param_2[8] = local_38;
  param_2[9] = uStack_34;
  param_2[10] = uStack_30;
  param_2[0xb] = uStack_2c;
  param_2[0xc] = local_28;
  param_2[0xd] = uStack_24;
  param_2[0xe] = uStack_20;
  param_2[0xf] = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8bfe8 FUN_147b8bfe8 body=89 status=ok
// SIG undefined FUN_147b8bfe8(void)

void FUN_147b8bfe8(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_144b10ee8(local_98,param_1);
  puVar2 = local_98;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8c0c6 FUN_147b8c0c6 body=429 status=ok
// SIG undefined FUN_147b8c0c6(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_147b8c0c6(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_a8 [39];
  undefined1 local_81;
  longlong local_80 [2];
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  undefined1 local_38;
  undefined8 uStack_37;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80[1] = 0;
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_3f = 0;
  local_38 = 0;
  uStack_37 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80 + 1);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  local_80[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
  }
  plVar5 = local_80;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_2 + 0x38);
  }
  local_81 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_81);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_81);
  }
  puVar3 = &local_81;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar4 = local_80 + 1;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  lVar2 = FUN_14479d2ce(plVar4 + 8);
  *plVar5 = lVar2;
  *puVar3 = (char)plVar4[9];
  if ((DAT_14c950c29 == '\x01') && (*plVar5 != 0)) {
    FUN_1456cec3c();
  }
  FUN_147b8c274(local_80 + 1);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8c274 FUN_147b8c274 body=62 status=ok
// SIG undefined FUN_147b8c274(void)

void FUN_147b8c274(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147b8c2b2 FUN_147b8c2b2 body=845 status=ok
// SIG undefined FUN_147b8c2b2(void)

void FUN_147b8c2b2(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined4 *local_e8;
  undefined4 *local_e0;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_90 = 0;
  local_88 = 0;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_57 = 0;
  uStack_50 = 0;
  uStack_4f = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  puVar6 = *(undefined8 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a0);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_a4 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a4);
  }
  local_a8 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  puVar5 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c8);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  local_cc = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_cc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_cc);
  }
  puVar4 = *(undefined4 **)(param_2 + 0x38);
  local_d0 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
  local_e8 = &local_cc;
  if (puVar4 != (undefined4 *)0x0) {
    local_e8 = puVar4;
  }
  local_f0 = local_c8;
  if (puVar3 != (undefined1 *)0x0) {
    local_f0 = puVar3;
  }
  local_f8 = local_b8;
  if (puVar5 != (undefined1 *)0x0) {
    local_f8 = puVar5;
  }
  puVar5 = local_a0;
  if (puVar2 != (undefined1 *)0x0) {
    puVar5 = puVar2;
  }
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = &local_90;
  }
  local_e0 = &local_d0;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    local_e0 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b8ddde(puVar6,puVar5,local_a4,local_a8);
  FUN_147b8c274(&local_90);
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8c600 FUN_147b8c600 body=287 status=ok
// SIG undefined FUN_147b8c600(void)

void FUN_147b8c600(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_21;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_21 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_147b8dabe(local_78,local_20,local_21);
  FUN_147b8c720(param_3,local_78);
  FUN_147b8c274(local_78);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8c720 FUN_147b8c720 body=189 status=ok
// SIG undefined FUN_147b8c720(void)

undefined8 * FUN_147b8c720(undefined8 *param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  if (param_1 != param_2) {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = param_2[6];
    param_2[6] = 0;
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
    param_2[7] = 0;
  }
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  return param_1;
}



// FUNCTION 147b8c7de FUN_147b8c7de body=316 status=ok
// SIG undefined FUN_147b8c7de(void)

void FUN_147b8c7de(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a7452c();
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
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_30;
  uStack_54 = uStack_2c;
  uStack_50 = uStack_28;
  uStack_4c = uStack_24;
  FUN_147b8c91c(&local_40,local_1c,local_20);
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8c91c FUN_147b8c91c body=211 status=ok
// SIG undefined FUN_147b8c91c(void)

undefined8 FUN_147b8c91c(undefined8 param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = (param_3 + (uint)(param_3 == 0)) - 1;
  if (uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = uVar2 >> 0x10;
    if (0xffff >= uVar2) {
      uVar3 = uVar2;
    }
    iVar1 = (uint)(0xffff < uVar2) * 0x10;
    iVar4 = iVar1 + 8;
    uVar2 = uVar3 >> 8;
    if (uVar3 < 0x100) {
      iVar4 = iVar1;
      uVar2 = uVar3;
    }
    iVar1 = iVar4 + 4;
    uVar3 = uVar2 >> 4;
    if (uVar2 < 0x10) {
      iVar1 = iVar4;
      uVar3 = uVar2;
    }
    iVar4 = iVar1 + 2;
    uVar2 = uVar3 >> 2;
    if (uVar3 < 4) {
      iVar4 = iVar1;
      uVar2 = uVar3;
    }
    uVar2 = (iVar4 - (uint)(uVar2 < 2)) + 2;
  }
  uVar3 = 0xf;
  if (uVar2 < 0xf) {
    uVar3 = uVar2;
  }
  local_28 = *param_4;
  uStack_24 = param_4[1];
  uStack_20 = param_4[2];
  uStack_1c = param_4[3];
  FUN_1467f5900(param_1,param_2,uVar3);
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147b8c9f0 FUN_147b8c9f0 body=333 status=ok
// SIG undefined FUN_147b8c9f0(void)

void FUN_147b8c9f0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a7452c();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_38;
  uStack_64 = uStack_34;
  uStack_60 = uStack_30;
  uStack_5c = uStack_2c;
  local_58 = local_28;
  FUN_147b8cb3e(&local_50,local_1c,local_20);
  *(undefined8 *)(param_3 + 4) = local_40;
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8cb3e FUN_147b8cb3e body=221 status=ok
// SIG undefined FUN_147b8cb3e(void)

undefined8 FUN_147b8cb3e(undefined8 param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = (param_3 + (uint)(param_3 == 0)) - 1;
  if (uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = uVar2 >> 0x10;
    if (0xffff >= uVar2) {
      uVar3 = uVar2;
    }
    iVar1 = (uint)(0xffff < uVar2) * 0x10;
    iVar4 = iVar1 + 8;
    uVar2 = uVar3 >> 8;
    if (uVar3 < 0x100) {
      iVar4 = iVar1;
      uVar2 = uVar3;
    }
    iVar1 = iVar4 + 4;
    uVar3 = uVar2 >> 4;
    if (uVar2 < 0x10) {
      iVar1 = iVar4;
      uVar3 = uVar2;
    }
    iVar4 = iVar1 + 2;
    uVar2 = uVar3 >> 2;
    if (uVar3 < 4) {
      iVar4 = iVar1;
      uVar2 = uVar3;
    }
    uVar2 = (iVar4 - (uint)(uVar2 < 2)) + 2;
  }
  uVar3 = 10;
  if (uVar2 < 10) {
    uVar3 = uVar2;
  }
  local_18 = *(undefined8 *)(param_4 + 4);
  local_28 = *param_4;
  uStack_24 = param_4[1];
  uStack_20 = param_4[2];
  uStack_1c = param_4[3];
  FUN_1467f5bf6(param_1,param_2,uVar3,&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147b8cc1c FUN_147b8cc1c body=348 status=ok
// SIG undefined FUN_147b8cc1c(void)

void FUN_147b8cc1c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar2 = 0xf;
  if (local_20 < 0xf) {
    iVar2 = local_20;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  uVar3 = FUN_1467f5706(local_1c,iVar1,local_24);
  *param_3 = uVar3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8cd7a FUN_147b8cd7a body=432 status=ok
// SIG undefined FUN_147b8cd7a(void)

void FUN_147b8cd7a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a7452c();
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
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = &local_68;
  local_68 = local_40;
  uStack_60 = uStack_38;
  local_78 = local_30;
  uStack_74 = uStack_2c;
  uStack_70 = uStack_28;
  uStack_6c = uStack_24;
  FUN_147b8cf2c(&local_50,local_1c,local_20);
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8cf2c FUN_147b8cf2c body=305 status=ok
// SIG undefined FUN_147b8cf2c(void)

undefined8
FUN_147b8cf2c(undefined8 param_1,undefined8 param_2,int param_3,double *param_4,double *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  
  uVar1 = (param_3 + (uint)(param_3 == 0)) - 1;
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = uVar1 >> 0x10;
    if (0xffff >= uVar1) {
      uVar2 = uVar1;
    }
    iVar3 = (uint)(0xffff < uVar1) * 0x10;
    iVar4 = iVar3 + 8;
    uVar1 = uVar2 >> 8;
    if (uVar2 < 0x100) {
      iVar4 = iVar3;
      uVar1 = uVar2;
    }
    iVar3 = iVar4 + 4;
    uVar2 = uVar1 >> 4;
    if (uVar1 < 0x10) {
      iVar3 = iVar4;
      uVar2 = uVar1;
    }
    iVar4 = iVar3 + 2;
    uVar1 = uVar2 >> 2;
    if (uVar2 < 4) {
      iVar4 = iVar3;
      uVar1 = uVar2;
    }
    uVar1 = (iVar4 - (uint)(uVar1 < 2)) + 2;
  }
  uVar2 = 0xf;
  if (uVar1 < 0xf) {
    uVar2 = uVar1;
  }
  dVar5 = param_4[1] + param_4[1] + 0.5;
  FUN_1467f5754(param_1,dVar5,uVar2,
                (ulonglong)(longlong)ROUND(*param_4 + *param_4 + 0.5) >> 1 & 0xffffffff |
                ((longlong)ROUND(dVar5) & 0xfffffffffffffffeU) << 0x1f,
                (ulonglong)(longlong)ROUND(*param_5 * 16777216.0 + *param_5 * 16777216.0 + 0.5) >> 1
                & 0xffffffff |
                ((longlong)ROUND(param_5[1] * 16777216.0 + param_5[1] * 16777216.0 + 0.5) &
                0xfffffffffffffffeU) << 0x1f);
  return param_1;
}



// FUNCTION 147b8d05e FUN_147b8d05e body=482 status=ok
// SIG undefined FUN_147b8d05e(void)

void FUN_147b8d05e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a7452c();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b8 = &local_88;
  local_88 = local_50;
  uStack_80 = uStack_48;
  local_78 = local_40;
  local_a8 = local_38;
  uStack_a4 = uStack_34;
  uStack_a0 = uStack_30;
  uStack_9c = uStack_2c;
  local_98 = local_28;
  FUN_147b8d242(&local_68,local_1c,local_20);
  *(undefined8 *)(param_3 + 4) = local_58;
  *param_3 = local_68;
  param_3[1] = uStack_64;
  param_3[2] = uStack_60;
  param_3[3] = uStack_5c;
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8d242 FUN_147b8d242 body=312 status=ok
// SIG undefined FUN_147b8d242(void)

undefined8
FUN_147b8d242(undefined8 param_1,undefined8 param_2,int param_3,double *param_4,double *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  int *local_48;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = (param_3 + (uint)(param_3 == 0)) - 1;
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = uVar1 >> 0x10;
    if (0xffff >= uVar1) {
      uVar2 = uVar1;
    }
    iVar3 = (uint)(0xffff < uVar1) * 0x10;
    iVar4 = iVar3 + 8;
    uVar1 = uVar2 >> 8;
    if (uVar2 < 0x100) {
      iVar4 = iVar3;
      uVar1 = uVar2;
    }
    iVar3 = iVar4 + 4;
    uVar2 = uVar1 >> 4;
    if (uVar1 < 0x10) {
      iVar3 = iVar4;
      uVar2 = uVar1;
    }
    iVar4 = iVar3 + 2;
    uVar1 = uVar2 >> 2;
    if (uVar2 < 4) {
      iVar4 = iVar3;
      uVar1 = uVar2;
    }
    uVar1 = (iVar4 - (uint)(uVar1 < 2)) + 2;
  }
  uVar2 = 10;
  if (uVar1 < 10) {
    uVar2 = uVar1;
  }
  local_30 = (int)param_4[2];
  local_34 = (int)param_4[1];
  local_38 = (int)*param_4;
  local_24 = (int)(param_5[2] * 16777216.0);
  local_28 = (int)(param_5[1] * 16777216.0);
  local_2c = (int)(*param_5 * 16777216.0);
  local_48 = &local_2c;
  FUN_1467f599a(param_1,param_5[1] * 16777216.0,uVar2);
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147b8d37c FUN_147b8d37c body=361 status=ok
// SIG undefined FUN_147b8d37c(void)

void FUN_147b8d37c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [36];
  float local_24;
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar2 = 0xf;
  if (local_20 < 0xf) {
    iVar2 = local_20;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  uVar3 = FUN_1467f56c0(local_1c,iVar1,(int)(local_24 * 16777216.0));
  *param_3 = uVar3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8d4ea FUN_147b8d4ea body=323 status=ok
// SIG undefined FUN_147b8d4ea(void)

float * FUN_147b8d4ea(undefined8 param_1,float *param_2,undefined4 *param_3,float param_4)

{
  float fVar1;
  undefined1 unaff_XMM7 [16];
  undefined1 auVar2 [16];
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  auVar2 = roundps(unaff_XMM7,ZEXT416((uint)param_4),1);
  fVar1 = auVar2._0_4_;
  param_4 = param_4 - fVar1;
  local_88 = *param_3;
  uStack_84 = param_3[1];
  uStack_80 = param_3[2];
  uStack_7c = param_3[3];
  FUN_147b8d62e(local_88,&local_70,&local_88,(int)fVar1);
  local_a8 = *param_3;
  uStack_a4 = param_3[1];
  uStack_a0 = param_3[2];
  uStack_9c = param_3[3];
  FUN_147b8d62e(param_1,&local_98,&local_a8,(int)(fVar1 + 1.0));
  *param_2 = (local_98 - local_70) * param_4 + local_70;
  param_2[1] = (local_94 - local_6c) * param_4 + local_6c;
  param_2[2] = (local_90 - local_68) * param_4 + local_68;
  param_2[3] = (local_8c - local_64) * param_4 + local_64;
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8d62e FUN_147b8d62e body=831 status=ok
// SIG undefined FUN_147b8d62e(void)

void FUN_147b8d62e(int *param_1,float *param_2,double *param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  uVar8 = param_1[2] - 1U;
  if ((int)param_4 < (int)(param_1[2] - 1U)) {
    uVar8 = param_4;
  }
  uVar4 = 0;
  uVar6 = (ulonglong)uVar8;
  if ((int)uVar8 < 1) {
    uVar6 = uVar4;
  }
  uVar8 = param_1[1] + -1 >> ((byte)uVar6 & 0x1f);
  iVar11 = *param_1 + -1 >> ((byte)uVar6 & 0x1f);
  iVar1 = iVar11 + 1;
  dVar13 = (double)(int)uVar8 * param_3[1];
  dVar15 = (double)iVar11 * *param_3;
  uVar6 = (longlong)ROUND(dVar13 + dVar13 + -0.5) >> 1;
  if ((longlong)(int)uVar8 <= (longlong)uVar6) {
    uVar6 = (longlong)(int)uVar8;
  }
  if ((longlong)uVar6 < 1) {
    uVar6 = uVar4;
  }
  uVar5 = (longlong)ROUND(dVar15 + dVar15 + -0.5) >> 1;
  if ((longlong)iVar11 <= (longlong)uVar5) {
    uVar5 = (longlong)iVar11;
  }
  if ((longlong)uVar5 < 1) {
    uVar5 = uVar4;
  }
  lVar10 = (uint)((int)((~uVar8 * iVar1 + *param_1 * param_1[1]) * 4) / 3) + uVar5 +
           (ulonglong)(uint)(iVar1 * (int)uVar6);
  lVar2 = *(longlong *)(param_1 + 0xc);
  lVar7 = lVar10 << 0x20;
  lVar9 = lVar7 >> 0x1e;
  fVar17 = (float)(&DAT_14c758c60)[*(byte *)(lVar2 + 2 + lVar9)];
  fVar18 = (float)(&DAT_14c758c60)[*(byte *)(lVar2 + 1 + lVar9)];
  fVar20 = (float)(&DAT_14c758c60)[*(byte *)(lVar2 + lVar9)];
  fVar16 = (float)*(byte *)(lVar2 + 3 + lVar9) * 0.003921569;
  if (uVar8 != 0 && iVar11 != 0) {
    iVar3 = (int)lVar10;
    lVar10 = (longlong)(iVar1 + iVar3);
    fVar19 = (float)*(byte *)(lVar2 + 3 + lVar10 * 4) * 0.003921569;
    lVar7 = lVar7 + 0x100000000 >> 0x1e;
    lVar9 = (longlong)(iVar11 + 2 + iVar3);
    fVar14 = (float)(dVar15 - (double)(int)uVar5);
    fVar16 = ((float)*(byte *)(lVar2 + 3 + lVar7) * 0.003921569 - fVar16) * fVar14 + fVar16;
    fVar17 = ((float)(&DAT_14c758c60)[*(byte *)(lVar2 + 2 + lVar7)] - fVar17) * fVar14 + fVar17;
    fVar18 = ((float)(&DAT_14c758c60)[*(byte *)(lVar2 + 1 + lVar7)] - fVar18) * fVar14 + fVar18;
    fVar20 = ((float)(&DAT_14c758c60)[*(byte *)(lVar2 + lVar7)] - fVar20) * fVar14 + fVar20;
    fVar12 = (float)(dVar13 - (double)(int)uVar6);
    fVar16 = ((((float)*(byte *)(lVar2 + 3 + lVar9 * 4) * 0.003921569 - fVar19) * fVar14 + fVar19) -
             fVar16) * fVar12 + fVar16;
    fVar20 = ((((float)(&DAT_14c758c60)[*(byte *)(lVar2 + lVar9 * 4)] -
               (float)(&DAT_14c758c60)[*(byte *)(lVar2 + lVar10 * 4)]) * fVar14 +
              (float)(&DAT_14c758c60)[*(byte *)(lVar2 + lVar10 * 4)]) - fVar20) * fVar12 + fVar20;
    fVar18 = ((((float)(&DAT_14c758c60)[*(byte *)(lVar2 + 1 + lVar9 * 4)] -
               (float)(&DAT_14c758c60)[*(byte *)(lVar2 + 1 + lVar10 * 4)]) * fVar14 +
              (float)(&DAT_14c758c60)[*(byte *)(lVar2 + 1 + lVar10 * 4)]) - fVar18) * fVar12 +
             fVar18;
    fVar17 = ((((float)(&DAT_14c758c60)[*(byte *)(lVar2 + 2 + lVar9 * 4)] -
               (float)(&DAT_14c758c60)[*(byte *)(lVar2 + 2 + lVar10 * 4)]) * fVar14 +
              (float)(&DAT_14c758c60)[*(byte *)(lVar2 + 2 + lVar10 * 4)]) - fVar17) * fVar12 +
             fVar17;
  }
  *param_2 = fVar17;
  param_2[1] = fVar18;
  param_2[2] = fVar20;
  param_2[3] = fVar16;
  return;
}



// FUNCTION 147b8d96e FUN_147b8d96e body=334 status=ok
// SIG undefined FUN_147b8d96e(void)

void FUN_147b8d96e(longlong param_1,uint param_2,undefined1 param_3)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auStack_68 [32];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144729dda(param_1 + 0x40);
  if ((cVar1 == '\0') || (lVar2 = FUN_14479d2ce(param_1 + 0x40), (*(byte *)(lVar2 + 0xfe) & 1) == 0)
     ) {
    local_40 = (float)(param_2 & 0xff) * 0.003921569;
    local_44 = (float)(param_2 >> 8 & 0xff) * 0.003921569;
    local_48 = (float)(param_2 >> 0x10 & 0xff) * 0.003921569;
  }
  else {
    local_48 = (float)(&DAT_14c758c60)[param_2 >> 0x10 & 0xff];
    local_44 = (float)(&DAT_14c758c60)[param_2 >> 8 & 0xff];
    local_40 = (float)(&DAT_14c758c60)[param_2 & 0xff];
  }
  local_3c = (float)(param_2 >> 0x18) * 0.003921569;
  fVar3 = local_48;
  switch(param_3) {
  case 0:
    fVar3 = (float)FUN_14064fe5c(&local_48);
    break;
  case 1:
    break;
  case 2:
    fVar3 = local_44;
    break;
  case 3:
    fVar3 = local_40;
    break;
  case 4:
    fVar3 = local_3c;
    break;
  default:
    fVar3 = 1.0;
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(fVar3);
  }
  return;
}



// FUNCTION 147b8dabe FUN_147b8dabe body=764 status=ok
// SIG undefined FUN_147b8dabe(void)

void FUN_147b8dabe(int *param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  byte bVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_a8 [47];
  undefined1 local_79;
  longlong *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_79 = param_3;
  if ((param_2 == 0) || (cVar5 = FUN_147d6e2de(param_2,0), cVar5 != '\x02')) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_a8);
  }
  FUN_14485c47a(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x12) = local_79;
  local_78 = (longlong *)0x0;
  uStack_70 = 0;
  iVar6 = FUN_144b2b4be();
  iVar12 = 0xb;
  if (0xb < iVar6) {
    iVar12 = iVar6;
  }
  iVar12 = iVar12 + -0xb;
  iVar6 = iVar6 - iVar12;
  param_1[2] = iVar6;
  uStack_70 = CONCAT44(uStack_70._4_4_,iVar6);
  if (iVar6 == 0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    FUN_147b9456e(&local_78);
    plVar10 = local_78;
  }
  memset(plVar10,0,(longlong)iVar6 << 3);
  FUN_147d6f788(param_2,iVar12,local_78);
  iVar6 = FUN_144a92d14(param_2);
  iVar7 = FUN_144a92d02(param_2);
  iVar15 = iVar6 + -1 >> ((byte)iVar12 & 0x1f);
  iVar7 = iVar7 + -1 >> ((byte)iVar12 & 0x1f);
  iVar12 = iVar15 + 1;
  iVar6 = iVar7 + 1;
  *(ulonglong *)param_1 = CONCAT44(iVar12,iVar6);
  bVar9 = (char)param_1[2] - 1;
  FUN_14735b34c(param_1 + 0xc,
                (((iVar7 >> (bVar9 & 0x1f)) + 1) * ~(iVar15 >> (bVar9 & 0x1f)) + iVar12 * iVar6 * 4)
                / 3,CONCAT71((uint7)(uint3)((uint)iVar6 >> 8),1));
  if (0 < param_1[2]) {
    lVar13 = 0;
    do {
      iVar12 = ((*param_1 + -1 >> ((byte)lVar13 & 0x1f)) + 1) *
               ((param_1[1] + -1 >> ((byte)lVar13 & 0x1f)) + 1);
      memcpy((void *)((longlong)(((*param_1 * param_1[1] - iVar12) * 4) / 3) * 4 +
                     *(longlong *)(param_1 + 0xc)),(void *)local_78[lVar13],(longlong)iVar12 << 2);
      lVar13 = lVar13 + 1;
    } while (lVar13 < param_1[2]);
  }
  FUN_144a12820(param_1 + 4,param_1[1] + 1,1);
  FUN_144a12820(param_1 + 8,(*param_1 + 1) * param_1[1],1);
  **(undefined4 **)(param_1 + 4) = 0;
  if (0 < param_1[1]) {
    lVar14 = 0;
    lVar13 = 1;
    do {
      lVar2 = *local_78;
      iVar12 = *param_1;
      lVar1 = (longlong)iVar12 + 1;
      lVar16 = (lVar13 + -1) * lVar1;
      lVar3 = *(longlong *)(param_1 + 8);
      *(undefined4 *)(lVar3 + lVar16 * 4) = 0;
      lVar8 = (longlong)*param_1;
      if (0 < lVar8) {
        fVar18 = 0.0;
        lVar11 = 0;
        do {
          fVar17 = (float)FUN_147b8d96e(param_1,*(undefined4 *)
                                                 (lVar2 + iVar12 * lVar14 + lVar11 * 4),local_79);
          fVar18 = fVar18 + fVar17;
          *(float *)(lVar1 * lVar14 + lVar3 + 4 + lVar11 * 4) = fVar18;
          lVar8 = (longlong)*param_1;
          lVar11 = lVar11 + 1;
        } while (lVar11 < lVar8);
      }
      *(float *)(*(longlong *)(param_1 + 4) + lVar13 * 4) =
           *(float *)(*(longlong *)(param_1 + 4) + -4 + lVar13 * 4) +
           *(float *)(lVar16 * 4 + lVar3 + lVar8 * 4);
      lVar14 = lVar14 + 4;
      bVar4 = lVar13 < param_1[1];
      lVar13 = lVar13 + 1;
    } while (bVar4);
  }
  plVar10 = local_78;
  lVar13 = (longlong)(int)uStack_70;
  if (lVar13 != 0) {
    lVar14 = 0;
    do {
      FUN_1400020a8(*(undefined8 *)((longlong)plVar10 + lVar14));
      lVar14 = lVar14 + 8;
    } while (lVar13 * 8 != lVar14);
  }
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8(local_78);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b8ddde FUN_147b8ddde body=860 status=ok
// SIG undefined FUN_147b8ddde(void)

void FUN_147b8ddde(uint *param_1,double *param_2,int param_3,undefined8 param_4,double *param_5,
                  undefined4 *param_6,float *param_7,float *param_8)

{
  longlong lVar1;
  float *pfVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  undefined1 in_XMM2 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  double dVar22;
  undefined1 in_XMM3 [16];
  double dVar23;
  float fVar24;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  ulonglong local_80;
  
  fVar21 = in_XMM3._0_4_;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar5 = FUN_144729dda(param_1 + 0x10);
  if (cVar5 != '\0') {
    uVar11 = param_1[1];
    uVar12 = (ulonglong)(int)uVar11;
    lVar3 = *(longlong *)(param_1 + 4);
    uVar9 = 0;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = param_2[1];
    auVar19 = roundsd(in_XMM2,auVar19,9);
    fVar16 = (float)((param_2[1] - auVar19._0_8_) * (double)*(float *)(lVar3 + uVar12 * 4));
    if (0x40 < (longlong)uVar12) {
      uVar9 = 0;
      do {
        uVar10 = ((uint)(uVar12 >> 1) & 0x7fffffff) + (int)uVar9;
        pfVar2 = (float *)(lVar3 + (ulonglong)uVar10 * 4);
        if (*pfVar2 <= fVar16 && fVar16 != *pfVar2) {
          uVar9 = (ulonglong)uVar10;
          uVar10 = uVar11;
        }
        uVar11 = uVar10;
        uVar10 = uVar11 - (int)uVar9;
        uVar12 = (ulonglong)uVar10;
      } while (0x40 < (int)uVar10);
    }
    uVar12 = (ulonglong)uVar11;
    if ((int)uVar11 <= (int)uVar9) {
      uVar12 = uVar9;
    }
    lVar13 = 0;
    do {
      if (uVar12 - uVar9 == lVar13) goto LAB_147b8deff;
      lVar14 = lVar13 + 1;
      pfVar2 = (float *)(lVar3 + uVar9 * 4 + 4 + lVar13 * 4);
      lVar13 = lVar14;
    } while (*pfVar2 <= fVar16 && fVar16 != *pfVar2);
    uVar12 = (ulonglong)(((int)uVar9 + (int)lVar14) - 1);
LAB_147b8deff:
    uVar11 = *param_1;
    uVar9 = (ulonglong)(int)uVar11;
    iVar6 = (int)uVar12;
    lVar14 = (longlong)(int)((uVar11 + 1) * iVar6);
    lVar13 = *(longlong *)(param_1 + 8) + lVar14 * 4;
    uVar10 = 0;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = *param_2;
    auVar19 = roundsd(in_XMM3,auVar20,9);
    fVar17 = (float)((*param_2 - auVar19._0_8_) * (double)*(float *)(lVar13 + uVar9 * 4));
    if (0x40 < (longlong)uVar9) {
      uVar10 = 0;
      do {
        uVar8 = ((uint)(uVar9 >> 1) & 0x7fffffff) + uVar10;
        pfVar2 = (float *)(lVar13 + (ulonglong)uVar8 * 4);
        if (*pfVar2 <= fVar17 && fVar17 != *pfVar2) {
          uVar10 = uVar8;
          uVar8 = uVar11;
        }
        uVar11 = uVar8;
        uVar9 = (ulonglong)(uVar11 - uVar10);
      } while (0x40 < (int)(uVar11 - uVar10));
    }
    if ((int)uVar11 <= (int)uVar10) {
      uVar11 = uVar10;
    }
    uVar12 = (ulonglong)uVar11;
    uVar9 = (ulonglong)uVar10;
    lVar7 = (uVar9 << 0x20) + -0x100000000;
    lVar15 = 0;
    do {
      if (uVar12 - uVar9 == lVar15) goto LAB_147b8dfd0;
      lVar1 = lVar15 + 1;
      lVar7 = lVar7 + 0x100000000;
      pfVar2 = (float *)(*(longlong *)(param_1 + 8) + uVar9 * 4 + lVar14 * 4 + 4 + lVar15 * 4);
      lVar15 = lVar1;
    } while (*pfVar2 <= fVar17 && fVar17 != *pfVar2);
    uVar11 = (uVar10 + (int)lVar1) - 1;
    uVar12 = lVar7 >> 0x20;
LAB_147b8dfd0:
    dVar22 = (double)*(float *)(lVar3 + (longlong)iVar6 * 4);
    dVar23 = (double)*(float *)(lVar13 + uVar12 * 4);
    fVar24 = *(float *)(lVar3 + 4 + (longlong)iVar6 * 4);
    dVar18 = (double)*(float *)(lVar13 + 4 + uVar12 * 4) - dVar23;
    uVar4 = *(undefined8 *)param_1;
    *param_5 = ((double)(int)uVar11 + ((double)fVar17 - dVar23) / dVar18) / (double)(int)uVar4;
    param_5[1] = ((double)iVar6 + ((double)fVar16 - dVar22) / ((double)fVar24 - dVar22)) /
                 (double)(int)((ulonglong)uVar4 >> 0x20);
    fVar17 = (float)(int)(*param_1 * param_1[1]) /
             *(float *)(*(longlong *)(param_1 + 4) + (longlong)(int)param_1[1] * 4);
    fVar24 = 1.0 / ((float)param_3 * (float)((double)fVar17 * dVar18));
    fVar16 = fVar24 * 0.5;
    if (fVar16 < 0.0) {
      fVar16 = sqrtf(fVar16);
    }
    else {
      fVar16 = SQRT(fVar16);
    }
    *param_8 = fVar16 * 4.0;
    logf((float)(int)(param_1[1] * *param_1) * fVar24);
    local_a8 = *(undefined4 *)param_5;
    uStack_a4 = *(undefined4 *)((longlong)param_5 + 4);
    uStack_a0 = *(undefined4 *)(param_5 + 1);
    uStack_9c = *(undefined4 *)((longlong)param_5 + 0xc);
    FUN_147b8d4ea(param_1,&local_90);
    *param_6 = local_90;
    param_6[1] = uStack_8c;
    param_6[2] = uStack_88;
    param_6[3] = uStack_84;
    *param_7 = fVar17 * fVar21 * fVar24;
  }
  if ((local_80 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b8e1a4 FUN_147b8e1a4 body=57 status=ok
// SIG undefined FUN_147b8e1a4(void)

void FUN_147b8e1a4(undefined8 *param_1,int param_2)

{
  FUN_1403cd0ec(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_147b9461c(param_1,param_2);
  return;
}



// FUNCTION 147b8e1de FUN_147b8e1de body=135 status=ok
// SIG undefined FUN_147b8e1de(void)

void FUN_147b8e1de(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  double *pdVar4;
  
  dVar1 = param_2[1];
  *param_1 = *param_1 - *param_2;
  param_1[1] = param_1[1] - dVar1;
  if ((longlong)*(int *)(param_1 + 6) != 0) {
    dVar2 = param_1[5];
    dVar1 = (double)((longlong)dVar2 + (longlong)*(int *)(param_1 + 6) * 0x28);
    do {
      if ((longlong)*(int *)((longlong)dVar2 + 0x10) != 0) {
        pdVar4 = *(double **)((longlong)dVar2 + 8);
        pdVar3 = pdVar4 + (longlong)*(int *)((longlong)dVar2 + 0x10) * 4;
        do {
          *pdVar4 = *param_2 + *pdVar4;
          pdVar4[1] = param_2[1] + pdVar4[1];
          pdVar4[2] = param_2[2] + pdVar4[2];
          pdVar4 = pdVar4 + 4;
        } while (pdVar4 != pdVar3);
      }
      dVar2 = (double)((longlong)dVar2 + 0x28);
    } while (dVar2 != dVar1);
  }
  return;
}



// FUNCTION 147b8e26c FUN_147b8e26c body=68 status=ok
// SIG undefined FUN_147b8e26c(void)

void FUN_147b8e26c(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_1468be722();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8e2b1 FUN_147b8e2b1 body=202 status=ok
// SIG undefined FUN_147b8e2b1(void)

undefined8 FUN_147b8e2b1(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
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
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_b8 = FUN_1459d58a4();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_98 = 0;
  local_80 = 0;
  lStack_78 = 0;
  uStack_a0 = 0x40;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
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



// FUNCTION 147b8e37c FUN_147b8e37c body=74 status=ok
// SIG undefined FUN_147b8e37c(void)

undefined8 * FUN_147b8e37c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1407f2096(param_1,iVar1);
    FUN_147ad1dcf(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 147b8e3c8 FUN_147b8e3c8 body=266 status=ok
// SIG undefined FUN_147b8e3c8(void)

undefined8 FUN_147b8e3c8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = *(int *)(param_1 + 0x248);
  if (iVar2 < *(int *)(param_1 + 0xa8)) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar2 * 8);
      *(int *)(param_1 + 0x248) = iVar2 + 1;
      if ((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) {
        FUN_1433bae26();
      }
      if (*(longlong *)(param_2 + 0x10) != -1) {
        if (*(longlong *)(param_2 + 0x10) == 0) break;
        QueryPerformanceCounter(&local_30);
        if ((ulonglong)(*(longlong *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) <
            (ulonglong)local_30) break;
      }
      iVar2 = *(int *)(param_1 + 0x248);
    } while (iVar2 < *(int *)(param_1 + 0xa8));
  }
  iVar2 = *(int *)(param_1 + 0x350);
  iVar4 = *(int *)(param_1 + 0x37c);
  if ((iVar4 < iVar2) && (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x260), lVar1 != 0))
  {
    FUN_147c69b6c(lVar1,0);
    iVar2 = *(int *)(param_1 + 0x350);
    iVar4 = *(int *)(param_1 + 0x37c);
  }
  if ((iVar4 < iVar2) || (iVar2 = *(int *)(param_1 + 0x248), iVar2 < *(int *)(param_1 + 0xa8))) {
    uVar3 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x248) = 0;
    uVar3 = CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8e4d4 FUN_147b8e4d4 body=266 status=ok
// SIG undefined FUN_147b8e4d4(void)

undefined8 FUN_147b8e4d4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = *(int *)(param_1 + 0x24c);
  if (iVar2 < *(int *)(param_1 + 0xa8)) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar2 * 8);
      *(int *)(param_1 + 0x24c) = iVar2 + 1;
      if ((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) {
        FUN_1433bab4a();
      }
      if (*(longlong *)(param_2 + 0x10) != -1) {
        if (*(longlong *)(param_2 + 0x10) == 0) break;
        QueryPerformanceCounter(&local_30);
        if ((ulonglong)(*(longlong *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) <
            (ulonglong)local_30) break;
      }
      iVar2 = *(int *)(param_1 + 0x24c);
    } while (iVar2 < *(int *)(param_1 + 0xa8));
  }
  iVar2 = *(int *)(param_1 + 0x300);
  iVar4 = *(int *)(param_1 + 0x32c);
  if ((iVar4 < iVar2) && (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x260), lVar1 != 0))
  {
    FUN_147c69b6c(lVar1,0);
    iVar2 = *(int *)(param_1 + 0x300);
    iVar4 = *(int *)(param_1 + 0x32c);
  }
  if ((iVar4 < iVar2) || (iVar2 = *(int *)(param_1 + 0x24c), iVar2 < *(int *)(param_1 + 0xa8))) {
    uVar3 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x24c) = 0;
    uVar3 = CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8e5e0 FUN_147b8e5e0 body=616 status=ok
// SIG undefined FUN_147b8e5e0(void)

void FUN_147b8e5e0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 200);
  if (*(char *)(lVar5 + 0x210) == '\x01') {
    if (*(char *)(lVar5 + 0x211) == '\0') {
      iVar4 = *(int *)(param_1 + 0xd8);
      if (0 < iVar4) {
        lVar5 = 0;
        do {
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + lVar5 * 8);
          if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x9c) & 1) != 0)) {
            FUN_1401bf202();
            iVar4 = *(int *)(param_1 + 0xd8);
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < iVar4);
        lVar5 = *(longlong *)(param_1 + 200);
      }
    }
    FUN_1406b1ae4(lVar5);
    FUN_14080c2b4();
    FUN_147b9713e(*(longlong *)(param_1 + 200) + 0x88);
    FUN_1408e16e8(*(undefined8 *)(param_1 + 200));
    iVar4 = *(int *)(param_1 + 0xd8);
    if (0 < iVar4) {
      lVar5 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0xd0) + lVar5 * 8) != 0) {
          FUN_1479e6f92();
          iVar4 = *(int *)(param_1 + 0xd8);
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar4);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 200) + 0x210) = 0;
    lVar5 = *(longlong *)(param_1 + 200);
    plVar1 = (longlong *)(lVar5 + 0x88);
    local_30 = lVar5 + 0x98;
    local_38 = 0x100000000;
    local_28 = 0xffffffff;
    local_20 = 0;
    if (*(int *)(lVar5 + 0xb0) != 0) {
      FUN_1449c0562(&local_38);
    }
    local_60 = local_28;
    uVar3 = local_60;
    local_58 = local_20;
    local_54 = local_1c;
    local_70 = local_38;
    local_68 = local_30;
    local_40 = 0;
    local_60._4_4_ = (int)((ulonglong)local_28 >> 0x20);
    local_78 = plVar1;
    local_50 = plVar1;
    local_48 = plVar1;
    if (local_60._4_4_ < *(int *)(local_30 + 0x18)) {
      iVar4 = local_60._4_4_;
      local_60 = uVar3;
      do {
        FUN_140308182(*(undefined8 *)(*local_78 + 8 + (longlong)iVar4 * 0x18),0);
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
      } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
      uVar3 = local_60;
      if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
        FUN_147b970ee(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
        uVar3 = local_60;
      }
    }
    local_60 = uVar3;
    if (0 < *(int *)(param_1 + 0xd8)) {
      lVar5 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + lVar5 * 8);
        if (lVar2 != 0) {
          if (*(char *)(*(longlong *)(param_1 + 200) + 0x211) == '\x01') {
            FUN_1400ed49e();
          }
          else {
            FUN_140b506dc(lVar2,*(undefined8 *)(param_1 + 0xc0),0);
          }
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(param_1 + 0xd8));
    }
    *(undefined1 *)(*(longlong *)(param_1 + 200) + 0x211) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8e84a FUN_147b8e84a body=101 status=ok
// SIG undefined FUN_147b8e84a(void)

void FUN_147b8e84a(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar1 + 1) {
    FUN_140b51998(param_1,(ulonglong)uVar1);
  }
  memmove((void *)((longlong)*param_1 + 8),(void *)*param_1,(ulonglong)uVar1 << 3);
  lVar2 = *param_2;
  *(longlong *)*param_1 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 147b8e8b8 FUN_147b8e8b8 body=246 status=ok
// SIG undefined FUN_147b8e8b8(void)

undefined8
FUN_147b8e8b8(undefined8 param_1,longlong param_2,uint param_3,undefined8 param_4,byte param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  ushort local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_d8 = FUN_145b05226();
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  uStack_c0 = (ulonglong)param_3;
  local_b8 = (ushort)param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(&local_d8);
  if (lStack_98 != 0) {
    plVar2 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar2 = local_78;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8e9b0 FUN_147b8e9b0 body=153 status=ok
// SIG undefined FUN_147b8e9b0(void)

void FUN_147b8e9b0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [36];
  undefined8 local_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  FUN_14485c47a(&local_34);
  iVar1 = *(int *)(param_1 + 0x3b0);
  *(uint *)(param_1 + 0x3b0) = iVar1 + 1U;
  local_2c = param_3;
  if (*(uint *)(param_1 + 0x3b4) < iVar1 + 1U) {
    FUN_147b973a6((longlong *)(param_1 + 0x3a8),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x3a8);
  *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = local_2c;
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0xc) = local_34;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8ea4a FUN_147b8ea4a body=269 status=ok
// SIG undefined FUN_147b8ea4a(void)

void FUN_147b8ea4a(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    local_38 = *(longlong *)(param_2 + 0x10);
    if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    lVar2 = (**(code **)(*param_1 + 0x18))(param_1,&local_38);
    if (lVar2 != 0) {
      local_40 = lVar2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar2);
      }
      local_30 = &local_40;
      FUN_1474be378(param_1 + 0x6e);
    }
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    iVar1 = (int)param_1[0x6f];
    *(uint *)(param_1 + 0x6f) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x37c) < iVar1 + 1U) {
      FUN_140730f78(param_1 + 0x6e,iVar1);
    }
    *(longlong *)(param_1[0x6e] + (longlong)iVar1 * 8) = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8eb58 FUN_147b8eb58 body=181 status=ok
// SIG undefined FUN_147b8eb58(void)

longlong FUN_147b8eb58(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < *(int *)(param_1 + 0x378)) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x370) + lVar4 * 8);
      if (lVar1 != 0) {
        lVar3 = *param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
LAB_147b8eba1:
          lVar2 = FUN_144ae113c();
          if (((lVar2 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
              lVar2 + 0x30)) goto LAB_147b8ebc3;
        }
        else {
          if (lVar3 != 0) goto LAB_147b8eba1;
LAB_147b8ebc3:
          lVar3 = 0;
        }
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          return lVar1;
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x378));
  }
  return 0;
}



// FUNCTION 147b8ec0e FUN_147b8ec0e body=281 status=ok
// SIG undefined FUN_147b8ec0e(void)

void FUN_147b8ec0e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar3 = *(int *)(param_1 + 0x378);
  if (0 < iVar3) {
    lVar6 = 1;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x370) + -8 + lVar6 * 8);
      if (lVar1 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar5);
LAB_147b8ec61:
          lVar4 = FUN_144ae113c();
          if (((lVar4 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
              lVar4 + 0x30)) goto LAB_147b8ec83;
        }
        else {
          if (lVar5 != 0) goto LAB_147b8ec61;
LAB_147b8ec83:
          lVar5 = 0;
        }
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if (*(int *)(lVar1 + 0x38) < *(int *)(lVar5 + 0x38)) {
          iVar3 = *(int *)(param_1 + 0x378);
        }
        else {
          iVar3 = *(int *)(param_1 + 0x378);
          if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30) {
            if (iVar3 != (int)lVar6) {
              memmove((void *)(*(longlong *)(param_1 + 0x370) + lVar6 * 8 + -8),
                      (void *)(*(longlong *)(param_1 + 0x370) + lVar6 * 8),
                      (longlong)(iVar3 - (int)lVar6) << 3);
              iVar3 = *(int *)(param_1 + 0x378);
            }
            *(int *)(param_1 + 0x378) = iVar3 + -1;
            FUN_1474be4b6((longlong *)(param_1 + 0x370));
            return;
          }
        }
      }
      bVar2 = lVar6 < iVar3;
      lVar6 = lVar6 + 1;
    } while (bVar2);
  }
  return;
}



// FUNCTION 147b8ed28 FUN_147b8ed28 body=333 status=ok
// SIG undefined FUN_147b8ed28(void)

void FUN_147b8ed28(void)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined2 local_40 [4];
  undefined2 *local_38;
  int local_30;
  uint *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  FUN_14021300e(&DAT_14cae8c00,0x7e4,1,1);
  DAT_14cae8c10 = 0;
  FUN_14682f5d4(&local_28);
  if (local_20 == 6) {
    DAT_14cae8c0c = (undefined2)local_28[1];
    DAT_14cae8c08 = *local_28;
  }
  else if (DAT_14c872bf0 == '\x01') {
    DAT_14cae8c0c = 0;
    DAT_14cae8c08 = 0;
  }
  else {
    FUN_14606d686(&local_38);
    puVar4 = local_38;
    if (local_30 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    iVar1 = local_30 + -1;
    if (local_30 == 0) {
      iVar1 = 0;
    }
    uVar2 = FUN_144a49b4a(iVar1,puVar4);
    DVar3 = GetCurrentProcessId();
    FUN_1402160b8(local_40);
    DAT_14cae8c0c = local_40[0];
    DAT_14cae8c08 = DVar3 ^ uVar2;
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_28 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b8ee76 FUN_147b8ee76 body=657 status=ok
// SIG undefined FUN_147b8ee76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_147b8ee76(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  ushort *puVar4;
  longlong lVar5;
  byte bVar6;
  double dVar7;
  undefined1 auStack_8a8 [32];
  longlong local_888;
  int local_880;
  undefined1 local_878 [8];
  undefined8 local_870;
  undefined8 *local_868;
  ushort *local_860;
  ushort *local_858;
  char local_850;
  undefined8 local_848 [256];
  ushort local_48 [2];
  undefined4 local_44;
  undefined2 local_40;
  undefined2 local_3e;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_8a8;
  local_870 = param_2;
  FUN_1402160b8(local_878);
  FUN_1402160b8(&local_868);
  dVar7 = (double)((longlong)local_868 - _DAT_14cae8c00) / 10000.0;
  uVar3 = (ulonglong)dVar7;
  uVar3 = (ulonglong)(DAT_14cae8c10 % 1000) +
          ((longlong)(dVar7 - 9.223372036854776e+18) & (longlong)uVar3 >> 0x3f | uVar3) * 1000;
  local_44 = DAT_14cae8c08;
  local_40 = DAT_14cae8c0c;
  local_3e = (undefined2)(uVar3 >> 0x1e);
  local_3c = (undefined1)(uVar3 >> 0x2e);
  local_868 = local_848;
  local_850 = '\0';
  local_858 = local_48;
  DAT_14cae8c10 = DAT_14cae8c10 + 1;
  local_860 = (ushort *)local_868;
  FUN_1400021e4(&local_870,&local_888);
  iVar1 = local_880 + -1;
  if (local_880 == 0) {
    iVar1 = 0;
  }
  FUN_1449668a2(&local_868,local_888,iVar1);
  if (local_888 != 0) {
    FUN_1400020a8();
  }
  if (local_858 <= (ushort *)((longlong)local_860 + 0xc)) {
    FUN_140213274(&local_868,6);
  }
  *(undefined8 *)local_860 = 0x4900410055005f;
  *(undefined4 *)((longlong)local_860 + 8) = 0x5f0044;
  lVar5 = 0;
  local_860 = (ushort *)((longlong)local_860 + 0xc);
  do {
    bVar6 = *(byte *)((longlong)&local_44 + lVar5);
    bVar2 = bVar6 >> 4 | 0x30;
    if (0x9f < bVar6) {
      bVar2 = (bVar6 >> 4) + 0x37;
    }
    puVar4 = local_860;
    if (local_858 <= local_860 + 1) {
      FUN_140213274(&local_868,1);
      puVar4 = local_860;
    }
    local_860 = puVar4 + 1;
    *puVar4 = (ushort)bVar2;
    bVar6 = bVar6 & 0xf;
    bVar2 = bVar6 + 0x30;
    if (9 < bVar6) {
      bVar2 = bVar6 + 0x37;
    }
    if (local_858 <= puVar4 + 2) {
      FUN_140213274(&local_868,1);
    }
    puVar4 = local_860 + 1;
    *local_860 = (ushort)bVar2;
    lVar5 = lVar5 + 1;
    local_860 = puVar4;
  } while (lVar5 != 9);
  *puVar4 = 0;
  FUN_14495448a(param_1,local_868,(uint)uVar3 & 0x3fffffff | 0x40000000);
  if (local_850 == '\x01') {
    FUN_1400020a8(local_868);
  }
  if ((local_38 ^ (ulonglong)auStack_8a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8f108 FUN_147b8f108 body=45 status=ok
// SIG undefined FUN_147b8f108(void)

longlong FUN_147b8f108(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14615fde8(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b8f15e FUN_147b8f15e body=90 status=ok
// SIG undefined FUN_147b8f15e(void)

undefined1 FUN_147b8f15e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 147b8f1e0 FUN_147b8f1e0 body=59 status=ok
// SIG undefined FUN_147b8f1e0(void)

undefined8 FUN_147b8f1e0(longlong *param_1)

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



// FUNCTION 147b8f2ee FUN_147b8f2ee body=59 status=ok
// SIG undefined FUN_147b8f2ee(void)

undefined8 FUN_147b8f2ee(longlong *param_1)

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



// FUNCTION 147b8f390 FUN_147b8f390 body=29 status=ok
// SIG undefined FUN_147b8f390(void)

undefined8 FUN_147b8f390(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b8f3ae FUN_147b8f3ae body=1864 status=ok
// SIG undefined FUN_147b8f3ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147b8f3ae(longlong param_1,longlong param_2)

{
  float fVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  float fVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  undefined1 auVar32 [16];
  double dVar35;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar38 [16];
  float fVar39;
  double dVar40;
  undefined1 auVar41 [16];
  double dVar43;
  undefined1 auVar42 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auStack_188 [32];
  ulonglong local_168;
  undefined1 local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double dStack_120;
  undefined1 local_118 [16];
  double local_108;
  double local_100;
  double local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  fVar39 = *(float *)(param_2 + 100) + *(float *)(param_1 + 0xc);
  *(float *)(param_1 + 0xc) = fVar39;
  fVar1 = *(float *)(param_1 + 8);
  lVar12 = param_1 + 0x28;
  cVar8 = FUN_144729dda(lVar12);
  if ((cVar8 != '\0') && (*(char *)(param_1 + 0x10) == '\x01')) {
    fVar13 = *(float *)(param_1 + 0xc) / *(float *)(param_1 + 8);
    if (*(char *)(param_1 + 0xa0) == '\x01') {
      if (*(char *)(param_1 + 0xa1) == '\0') {
        fVar13 = fVar13 * fVar13;
      }
      else {
        if (0.5 <= fVar13) {
          fVar13 = 1.0 - (fVar13 + fVar13 + -1.0);
          fVar13 = (1.0 - fVar13 * fVar13) * 0.5 + 0.5;
        }
        else {
          fVar13 = (fVar13 + fVar13) * (fVar13 + fVar13) * 0.5;
        }
LAB_147b8f4a6:
        fVar13 = fVar13 + 0.0;
      }
    }
    else {
      if (*(char *)(param_1 + 0xa1) != '\0') {
        fVar13 = powf(fVar13,0.5);
        goto LAB_147b8f4a6;
      }
      fVar13 = fVar13 + 0.0;
    }
    if (*(char *)(param_1 + 0x68) == '\x01') {
      if (fVar39 < fVar1) {
        dVar31 = (double)fVar13;
        dVar14 = (*(double *)(param_1 + 0x98) - *(double *)(param_1 + 0x80)) * dVar31 +
                 *(double *)(param_1 + 0x80);
        dVar35 = (*(double *)(param_1 + 0x90) - *(double *)(param_1 + 0x78)) * dVar31 +
                 *(double *)(param_1 + 0x78);
        dVar31 = (*(double *)(param_1 + 0x88) - *(double *)(param_1 + 0x70)) * dVar31 +
                 *(double *)(param_1 + 0x70);
      }
      else {
        dVar31 = *(double *)(param_1 + 0x88);
        dVar35 = *(double *)(param_1 + 0x90);
        dVar14 = *(double *)(param_1 + 0x98);
      }
      lVar9 = FUN_14479d2ce(lVar12);
      auVar15 = *(undefined1 (*) [16])(lVar9 + 0x1b0);
      dVar40 = auVar15._0_8_;
      dVar43 = auVar15._8_8_;
      dVar25 = *(double *)(lVar9 + 0x1c0);
      puVar11 = *(undefined8 **)(lVar9 + 0x230);
      if (puVar11 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)FUN_14001cc68(0x40,0x10);
        uVar10 = DAT_14c8463d8;
        *puVar11 = DAT_14c8463d0;
        puVar11[1] = uVar10;
        uVar10 = DAT_14c8463e8;
        puVar11[2] = DAT_14c8463e0;
        puVar11[3] = uVar10;
        uVar10 = DAT_14c846500;
        puVar11[4] = DAT_14c8464f8;
        puVar11[5] = uVar10;
        puVar11[6] = DAT_14c846508;
        *(undefined8 **)(lVar9 + 0x230) = puVar11;
      }
      if (((((double)puVar11[4] != dVar40) || (NAN((double)puVar11[4]) || NAN(dVar40))) ||
          ((double)puVar11[5] != dVar43)) || (NAN((double)puVar11[5]) || NAN(dVar43))) {
LAB_147b8f5b7:
        auVar36._8_8_ = 0;
        auVar36._0_8_ = dVar25;
        dVar6 = (double)DAT_1499387d0;
        dVar7 = DAT_1499387d0._8_8_;
        auVar15 = divpd(auVar15,_DAT_1499387d0);
        auVar26 = divpd(auVar36,_DAT_1499387d0);
        auVar15 = roundpd(auVar15,auVar15,3);
        auVar26 = roundpd(auVar26,auVar26,3);
        dVar40 = dVar40 - auVar15._0_8_ * dVar6;
        dVar43 = dVar43 - auVar15._8_8_ * dVar7;
        auVar37._0_8_ = dVar25 - auVar26._0_8_ * dVar6;
        auVar37._8_8_ = 0.0 - auVar26._8_8_ * dVar7;
        auVar32._0_8_ = dVar40 + dVar6;
        auVar32._8_8_ = dVar43 + dVar7;
        auVar30._0_8_ = dVar6 + auVar37._0_8_;
        auVar30._8_8_ = dVar7 + auVar37._8_8_;
        auVar26._8_8_ = -(ulonglong)(0.0 <= dVar43);
        auVar26._0_8_ = -(ulonglong)(0.0 <= dVar40);
        auVar15._8_4_ = SUB84(dVar43,0);
        auVar15._0_8_ = dVar40;
        auVar15._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
        auVar26 = blendvpd(auVar32,auVar15,auVar26);
        auVar16._8_8_ = -(ulonglong)(0.0 <= auVar37._8_8_);
        auVar16._0_8_ = -(ulonglong)(0.0 <= auVar37._0_8_);
        auVar15 = blendvpd(auVar30,auVar37,auVar16);
        auVar27._0_8_ = auVar26._0_8_ + -360.0;
        auVar27._8_8_ = auVar26._8_8_ + -360.0;
        auVar17._8_8_ = -(ulonglong)(180.0 < auVar26._8_8_);
        auVar17._0_8_ = -(ulonglong)(180.0 < auVar26._0_8_);
        auVar26 = blendvpd(auVar26,auVar27,auVar17);
        dVar25 = auVar15._0_8_;
        *(undefined1 (*) [16])(puVar11 + 4) = auVar26;
        puVar11[6] = ~-(ulonglong)(180.0 < dVar25) & (ulonglong)dVar25 |
                     (ulonglong)(dVar25 + -360.0) & -(ulonglong)(180.0 < dVar25);
        FUN_144a7484c(puVar11 + 4,&local_e8);
        puVar11[2] = local_d8;
        puVar11[3] = uStack_d0;
        *puVar11 = local_e8;
        puVar11[1] = uStack_e0;
      }
      else if (((double)puVar11[6] != dVar25) || (NAN((double)puVar11[6]) || NAN(dVar25)))
      goto LAB_147b8f5b7;
      local_e8 = *puVar11;
      uStack_e0 = puVar11[1];
      local_d8 = puVar11[2];
      uStack_d0 = puVar11[3];
      local_160 = 0;
      local_168 = 0;
      local_108 = dVar31;
      local_100 = dVar35;
      local_f8 = dVar14;
      FUN_144927ad4(lVar9,&local_108,&local_e8,0);
    }
    if ((*(char *)(param_1 + 0x30) == '\x01') && (cVar8 = FUN_144729dda(lVar12), cVar8 != '\0')) {
      if (fVar39 < fVar1) {
        if (*(char *)(param_1 + 0xa2) == '\x01') {
          FUN_144a7484c(param_1 + 0x38,&local_e8);
          FUN_144a7484c(param_1 + 0x50,&local_108);
          FUN_144a44da6(&local_128,&local_e8,&local_108,(double)fVar13);
          dVar31 = (double)local_118._0_8_ * (double)local_118._0_8_ + local_128 * local_128;
          dVar35 = (double)local_118._8_8_ * (double)local_118._8_8_ + dStack_120 * dStack_120;
          auVar33._0_8_ = dVar31 + dVar35;
          auVar33._8_8_ = dVar31 + dVar35;
          auVar18._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_);
          auVar18._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_);
          auVar15 = sqrtpd(in_XMM5,auVar33);
          auVar15 = divpd(_DAT_149934d80,auVar15);
          auVar41._0_8_ = auVar15._0_8_ * (double)local_118._0_8_;
          auVar41._8_8_ = auVar15._8_8_ * (double)local_118._8_8_;
          dVar31 = (double)((ulonglong)(local_128 * auVar15._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_));
          dVar35 = (double)((ulonglong)(dStack_120 * auVar15._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_));
          auVar15 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar41,auVar18);
          auVar19._0_8_ = dVar31 * dVar31;
          auVar19._8_8_ = dVar35 * dVar35;
          dVar14 = auVar15._0_8_;
          dVar25 = auVar15._8_8_;
          dVar40 = dVar14 * dVar14 + auVar19._0_8_;
          dVar43 = dVar25 * dVar25 + auVar19._8_8_;
          auVar42._0_8_ = dVar40 + dVar43;
          auVar42._8_8_ = dVar40 + dVar43;
          auVar15 = sqrtpd(auVar19,auVar42);
          auVar15 = divpd(_DAT_149934d80,auVar15);
          auVar34._0_8_ = auVar15._0_8_ * dVar14;
          auVar34._8_8_ = auVar15._8_8_ * dVar25;
          local_128 = (double)((ulonglong)(dVar31 * auVar15._0_8_) &
                              -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_));
          dStack_120 = (double)((ulonglong)(dVar35 * auVar15._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_));
          auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_);
          auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_);
          local_118 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar34,auVar20);
          FUN_1448052ee(&local_128,&local_140);
          local_158 = local_140;
          local_150 = local_138;
          local_148 = local_130;
        }
        else {
          dVar14 = *(double *)(param_1 + 0x60) - *(double *)(param_1 + 0x48);
          dVar25 = *(double *)(param_1 + 0x58) - *(double *)(param_1 + 0x40);
          dVar40 = *(double *)(param_1 + 0x50) - *(double *)(param_1 + 0x38);
          dVar31 = (double)DAT_1499387d0;
          dVar35 = DAT_1499387d0._8_8_;
          auVar28._8_8_ = dVar25;
          auVar28._0_8_ = dVar40;
          auVar15 = divpd(auVar28,_DAT_1499387d0);
          auVar21._0_8_ = dVar14 / 360.0;
          auVar21._8_8_ = 0;
          auVar26 = roundpd(auVar15,auVar15,3);
          auVar15 = roundpd(auVar21,auVar21,3);
          auVar46._0_8_ = dVar14 - auVar15._0_8_ * dVar31;
          auVar46._8_8_ = 0.0 - auVar15._8_8_ * dVar35;
          auVar45._0_8_ = dVar40 - auVar26._0_8_ * dVar31;
          auVar45._8_8_ = dVar25 - auVar26._8_8_ * dVar35;
          auVar44._0_8_ = auVar45._0_8_ + dVar31;
          auVar44._8_8_ = auVar45._8_8_ + dVar35;
          auVar38._0_8_ = dVar31 + auVar46._0_8_;
          auVar38._8_8_ = dVar35 + auVar46._8_8_;
          auVar22._8_8_ = -(ulonglong)(0.0 <= auVar45._8_8_);
          auVar22._0_8_ = -(ulonglong)(0.0 <= auVar45._0_8_);
          auVar26 = blendvpd(auVar44,auVar45,auVar22);
          auVar23._8_8_ = -(ulonglong)(0.0 <= auVar46._8_8_);
          auVar23._0_8_ = -(ulonglong)(0.0 <= auVar46._0_8_);
          auVar15 = blendvpd(auVar38,auVar46,auVar23);
          auVar29._0_8_ = auVar26._0_8_ + -360.0;
          auVar29._8_8_ = auVar26._8_8_ + -360.0;
          auVar24._8_8_ = -(ulonglong)(180.0 < auVar26._8_8_);
          auVar24._0_8_ = -(ulonglong)(180.0 < auVar26._0_8_);
          auVar26 = blendvpd(auVar26,auVar29,auVar24);
          dVar35 = auVar15._0_8_;
          dVar31 = (double)fVar13;
          local_148 = (double)(~-(ulonglong)(180.0 < dVar35) & (ulonglong)dVar35 |
                              (ulonglong)(dVar35 + -360.0) & -(ulonglong)(180.0 < dVar35)) * dVar31
                      + *(double *)(param_1 + 0x48);
          local_150 = auVar26._8_8_ * dVar31 + *(double *)(param_1 + 0x40);
          local_158 = auVar26._0_8_ * dVar31 + *(double *)(param_1 + 0x38);
        }
      }
      else {
        local_158 = *(double *)(param_1 + 0x50);
        local_150 = *(double *)(param_1 + 0x58);
        local_148 = *(double *)(param_1 + 0x60);
      }
      uVar10 = FUN_14479d2ce(lVar12);
      local_168 = local_168 & 0xffffffffffffff00;
      FUN_14020f75c(uVar10,&local_158,0,0);
    }
  }
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  uVar5 = *(undefined8 *)(param_1 + 0x14);
  if (fVar39 < fVar1) {
    bVar2 = *(byte *)(param_1 + 0x10);
    *(byte *)(param_2 + 0x60) = bVar2 ^ 1;
    if (bVar2 != 0) goto LAB_147b8f78d;
  }
  else {
    *(undefined1 *)(param_2 + 0x60) = 1;
  }
  iVar4 = *(int *)(param_2 + 0x58);
  lVar12 = (longlong)iVar4;
  *(uint *)(param_2 + 0x58) = iVar4 + 1U;
  if (*(uint *)(param_2 + 0x5c) < iVar4 + 1U) {
    FUN_14579eadc(param_2,iVar4);
  }
  lVar9 = *(longlong *)(param_2 + 0x50);
  if (*(longlong *)(param_2 + 0x50) == 0) {
    lVar9 = param_2;
  }
  *(undefined8 *)(lVar9 + lVar12 * 0x14) = uVar5;
  *(undefined4 *)(lVar9 + 8 + lVar12 * 0x14) = uVar3;
  *(undefined8 *)(lVar9 + 0xc + lVar12 * 0x14) = uVar10;
LAB_147b8f78d:
  if ((local_c0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b8faf8 FUN_147b8faf8 body=453 status=ok
// SIG undefined FUN_147b8faf8(void)

undefined8 * FUN_147b8faf8(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_61;
  undefined8 local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = &PTR_FUN_14a9b08a0;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  *(undefined4 *)(param_1 + 1) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
  *(undefined4 *)(param_1 + 2) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar7;
  param_1[3] = 0;
  iVar3 = param_2[6];
  _Src = *(void **)(param_2 + 4);
  *(int *)(param_1 + 4) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar3,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar3 * 2);
  }
  FUN_1413e28b0(param_1 + 5);
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = *(undefined8 *)(param_3 + 2);
  *(undefined4 *)(param_1 + 0x27) = *param_3;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  FUN_14485c47a((longlong)param_1 + 0x13c,*(undefined8 *)(param_3 + 4));
  local_78 = 0;
  uStack_70 = 0;
  local_80 = &local_61;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  FUN_147b8fd50(param_1 + 5,&local_60,param_1 + 1);
  plVar1 = local_58;
  if (param_1 + 0x24 != &local_60) {
    param_1[0x24] = local_60;
    local_60 = 0;
    plVar4 = (longlong *)param_1[0x25];
    if (local_58 != plVar4) {
      local_58 = (longlong *)0x0;
      param_1[0x25] = plVar1;
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
  plVar1 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_58 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  FUN_1449db362(&local_78);
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8fcbe FUN_147b8fcbe body=145 status=ok
// SIG undefined FUN_147b8fcbe(void)

void FUN_147b8fcbe(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar2 = param_1[0x24];
  if (((lVar2 == 0) || (*(char *)(lVar2 + 0x10) != '\0')) || (*(char *)(lVar2 + 0x12) != '\0')) {
    (**(code **)(*param_1 + 0x20))(param_1);
    uVar3 = *(undefined8 *)((longlong)param_1 + 0x13c);
    lVar4 = param_1[0x27];
    lVar2 = param_1[0x26];
    *(undefined1 *)(param_2 + 0x60) = 1;
    iVar1 = *(int *)(param_2 + 0x58);
    lVar6 = (longlong)iVar1;
    *(uint *)(param_2 + 0x58) = iVar1 + 1U;
    if (*(uint *)(param_2 + 0x5c) < iVar1 + 1U) {
      FUN_14579eadc(param_2,iVar1);
    }
    lVar5 = *(longlong *)(param_2 + 0x50);
    if (*(longlong *)(param_2 + 0x50) == 0) {
      lVar5 = param_2;
    }
    *(longlong *)(lVar5 + lVar6 * 0x14) = lVar2;
    *(int *)(lVar5 + 8 + lVar6 * 0x14) = (int)lVar4;
    *(undefined8 *)(lVar5 + 0xc + lVar6 * 0x14) = uVar3;
  }
  else {
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 147b8fd50 FUN_147b8fd50 body=440 status=ok
// SIG undefined FUN_147b8fd50(void)

undefined8
FUN_147b8fd50(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined4 param_5,undefined1 param_6,undefined1 param_7)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined1 local_c0;
  undefined1 local_b8;
  longlong *local_b0;
  undefined8 *local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  longlong local_88 [3];
  undefined4 local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_88[2] = 0;
  local_70 = 0;
  local_68 = *param_4;
  *param_4 = 0;
  uStack_60 = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)(param_4 + 1) = 0;
  FUN_144a450dc(local_88 + 2,&local_68);
  FUN_1449db362(&local_68);
  FUN_140d01986();
  local_88[0] = 0;
  local_88[1] = 0;
  local_68 = *param_3;
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_58 = (void *)0x0;
  local_50 = *(int *)(param_3 + 3);
  lVar1 = (longlong)local_50;
  _Src = (void *)param_3[2];
  if (lVar1 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar1 * 2);
  }
  local_a0 = &local_48;
  local_a8 = &local_68;
  FUN_140a1e2b2(&local_98);
  local_b0 = local_88;
  local_b8 = param_7;
  local_c0 = param_6;
  local_c8 = param_5;
  FUN_140421d62(param_1,param_2,&local_98,local_88 + 2);
  FUN_140861e20(local_98,local_90);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(local_88 + 2);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8ff0a FUN_147b8ff0a body=38 status=ok
// SIG undefined FUN_147b8ff0a(void)

undefined8 FUN_147b8ff0a(undefined8 param_1,int param_2)

{
  FUN_147b8ffd0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b8ff30 FUN_147b8ff30 body=41 status=ok
// SIG undefined FUN_147b8ff30(void)

void FUN_147b8ff30(void)

{
  FUN_140033559(".\\Runtime/Engine/Private/KismetSystemLibrary.cpp",0xbc9,
                L"Pure virtual not implemented (%s)",L"FLoadAssetActionBase::OnLoaded");
  return;
}



// FUNCTION 147b8ff5a FUN_147b8ff5a body=117 status=ok
// SIG undefined FUN_147b8ff5a(void)

void FUN_147b8ff5a(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_14113f0c0();
  if (cVar1 != '\0') {
    local_28 = param_2;
    plVar2 = (longlong *)FUN_14479d2ce(param_1);
    uVar3 = FUN_14477b072(plVar2,*(undefined8 *)(param_1 + 8));
    (**(code **)(*plVar2 + 0x248))(plVar2,uVar3,&local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b8ffd0 FUN_147b8ffd0 body=114 status=ok
// SIG undefined FUN_147b8ffd0(void)

void FUN_147b8ffd0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a9b08a0;
  if (param_1[0x24] != 0) {
    FUN_1401a5e92();
  }
  plVar3 = (longlong *)param_1[0x25];
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
  FUN_140f77756(param_1 + 5);
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147b90042 FUN_147b90042 body=109 status=ok
// SIG undefined FUN_147b90042(void)

void FUN_147b90042(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_14113f0c0();
  if (cVar1 != '\0') {
    local_20 = *param_2;
    if ((local_20 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_147b6342e(param_1,&local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b90112 FUN_147b90112 body=150 status=ok
// SIG undefined FUN_147b90112(void)

undefined8 FUN_147b90112(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      lVar2 = param_2 + 0x10 + lVar3;
      *(undefined4 *)(lVar2 + -8) = *(undefined4 *)((undefined8 *)(param_3 + lVar3) + 1);
      *(undefined8 *)(lVar2 + -0x10) = *(undefined8 *)(param_3 + lVar3);
      FUN_144a67f5c();
      FUN_144a67f5c(param_2 + lVar3 + 0x20,param_3 + lVar3 + 0x20);
      lVar2 = param_2 + lVar3;
      lVar1 = param_3 + lVar3;
      FUN_147888ab0(lVar2 + 0x30,lVar1 + 0x30);
      *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)(lVar1 + 0x40);
      *(undefined1 *)(lVar2 + 0x48) = *(undefined1 *)(lVar1 + 0x48);
      lVar3 = lVar3 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147b901d0 FUN_147b901d0 body=59 status=ok
// SIG undefined FUN_147b901d0(void)

undefined8 FUN_147b901d0(longlong *param_1)

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



// FUNCTION 147b90216 FUN_147b90216 body=34 status=ok
// SIG undefined FUN_147b90216(void)

void FUN_147b90216(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_147b8c274(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 147b902c0 FUN_147b902c0 body=109 status=ok
// SIG undefined FUN_147b902c0(void)

undefined1 FUN_147b902c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
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
      puVar2 = (undefined4 *)(param_3 + lVar8);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      puVar1 = (undefined4 *)(param_2 + lVar8);
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      lVar7 = *(longlong *)(param_3 + 0x10 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(param_3 + 0x10 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar8 + 0x10) = lVar7;
      lVar8 = lVar8 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147b90356 FUN_147b90356 body=59 status=ok
// SIG undefined FUN_147b90356(void)

undefined8 FUN_147b90356(longlong *param_1)

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



// FUNCTION 147b9046c FUN_147b9046c body=87 status=ok
// SIG undefined FUN_147b9046c(void)

undefined1 FUN_147b9046c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147b905fe(param_2,param_3);
    FUN_147b905a0(param_2 + 0x50,param_3 + 0x50);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 147b904ec FUN_147b904ec body=59 status=ok
// SIG undefined FUN_147b904ec(void)

undefined8 FUN_147b904ec(longlong *param_1)

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



// FUNCTION 147b90532 FUN_147b90532 body=32 status=ok
// SIG undefined FUN_147b90532(void)

void FUN_147b90532(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_1407909d0(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 147b905a0 FUN_147b905a0 body=93 status=ok
// SIG undefined FUN_147b905a0(void)

undefined8 * FUN_147b905a0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140790c69(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147b9075e(param_1,iVar1);
      FUN_147b907d1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147b905fe FUN_147b905fe body=122 status=ok
// SIG undefined FUN_147b905fe(void)

longlong FUN_147b905fe(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_147b90678(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147b90678 FUN_147b90678 body=229 status=ok
// SIG undefined FUN_147b90678(void)

longlong * FUN_147b90678(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140790ce4(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar2 = *param_2;
      lVar5 = 0;
      uVar6 = 0;
      do {
        plVar7 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar7 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar7 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar5) = *(undefined4 *)(lVar2 + lVar5);
          *(undefined4 *)(lVar4 + 4 + lVar5) = *(undefined4 *)(lVar2 + 4 + lVar5);
        }
        else {
          *(undefined8 *)(lVar4 + lVar5) = *(undefined8 *)(lVar2 + lVar5);
          *(undefined8 *)(lVar4 + 8 + lVar5) = *(undefined8 *)(lVar2 + 8 + lVar5);
          lVar3 = *(longlong *)(lVar2 + 0x10 + lVar5);
          *(longlong *)(lVar4 + 0x10 + lVar5) = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          *(undefined8 *)(lVar4 + 0x18 + lVar5) = *(undefined8 *)(lVar2 + 0x18 + lVar5);
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x20;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 147b9075e FUN_147b9075e body=115 status=ok
// SIG undefined FUN_147b9075e(void)

void FUN_147b9075e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147b907d1 FUN_147b907d1 body=55 status=ok
// SIG undefined FUN_147b907d1(void)

void FUN_147b907d1(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      *(undefined8 *)(param_1 + 8 + lVar2) = *(undefined8 *)(param_2 + 8 + lVar2);
      lVar1 = *(longlong *)(param_2 + 0x10 + lVar2);
      *(longlong *)(param_1 + 0x10 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147b90842 FUN_147b90842 body=100 status=ok
// SIG undefined FUN_147b90842(void)

undefined1 FUN_147b90842(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 147b908ce FUN_147b908ce body=59 status=ok
// SIG undefined FUN_147b908ce(void)

undefined8 FUN_147b908ce(longlong *param_1)

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



// FUNCTION 147b909be FUN_147b909be body=42 status=ok
// SIG undefined FUN_147b909be(void)

void FUN_147b909be(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_147b90b28(param_2);
  return;
}



// FUNCTION 147b909fe FUN_147b909fe body=54 status=ok
// SIG undefined FUN_147b909fe(void)

undefined1 FUN_147b909fe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147b90be0(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 147b90a5c FUN_147b90a5c body=59 status=ok
// SIG undefined FUN_147b90a5c(void)

undefined8 FUN_147b90a5c(longlong *param_1)

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



// FUNCTION 147b90aa2 FUN_147b90aa2 body=55 status=ok
// SIG undefined FUN_147b90aa2(void)

void FUN_147b90aa2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_147b90b28(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 147b90b28 FUN_147b90b28 body=54 status=ok
// SIG undefined FUN_147b90b28(void)

void FUN_147b90b28(longlong *param_1)

{
  FUN_147b90b5e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147b90b5e FUN_147b90b5e body=128 status=ok
// SIG undefined FUN_147b90b5e(void)

void FUN_147b90b5e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
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



// FUNCTION 147b90be0 FUN_147b90be0 body=122 status=ok
// SIG undefined FUN_147b90be0(void)

longlong FUN_147b90be0(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_147b90c5a(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147b90c5a FUN_147b90c5a body=231 status=ok
// SIG undefined FUN_147b90c5a(void)

longlong * FUN_147b90c5a(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_147b90b5e(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_1446efaca(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar2 = *param_2;
      lVar7 = 0;
      uVar6 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar5 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar7) = *(undefined4 *)(lVar2 + lVar7);
          *(undefined4 *)(lVar4 + 4 + lVar7) = *(undefined4 *)(lVar2 + 4 + lVar7);
        }
        else {
          lVar3 = *(longlong *)(lVar2 + lVar7);
          *(longlong *)(lVar4 + lVar7) = lVar3;
          if ((lVar3 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          *(undefined8 *)(lVar4 + 8 + lVar7) = *(undefined8 *)(lVar2 + 8 + lVar7);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x10;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 147b90da4 FUN_147b90da4 body=59 status=ok
// SIG undefined FUN_147b90da4(void)

undefined8 FUN_147b90da4(longlong *param_1)

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



// FUNCTION 147b90e92 FUN_147b90e92 body=144 status=ok
// SIG undefined FUN_147b90e92(void)

undefined8 FUN_147b90e92(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar3 = param_3 + 0x50 + lVar7;
      puVar1 = (undefined8 *)(param_2 + lVar7);
      puVar5 = (undefined8 *)(lVar3 + -0x50);
      puVar6 = puVar1;
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      lVar3 = *(longlong *)(lVar3 + -8);
      if ((bVar4 & 1) != 0) {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar3 = *(longlong *)(param_3 + 0x48 + lVar7);
          bVar4 = DAT_14c950c29;
        }
      }
      puVar1[9] = lVar3;
      puVar1[10] = *(undefined8 *)(param_3 + 0x50 + lVar7);
      lVar7 = lVar7 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147b90f4a FUN_147b90f4a body=59 status=ok
// SIG undefined FUN_147b90f4a(void)

undefined8 FUN_147b90f4a(longlong *param_1)

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



// FUNCTION 147b90fec FUN_147b90fec body=71 status=ok
// SIG undefined FUN_147b90fec(void)

void FUN_147b90fec(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 1;
  *(undefined4 *)(param_2 + 4) = 0x428c0000;
  FUN_145c71fb8(param_2 + 8);
  param_2[0xa8] = 0;
  *(undefined4 *)(param_2 + 0xac) = 7;
  FUN_145c71fb8(param_2 + 0xb0);
  *(undefined2 *)(param_2 + 0x150) = 0;
  return;
}



// FUNCTION 147b91034 FUN_147b91034 body=71 status=ok
// SIG undefined FUN_147b91034(void)

void FUN_147b91034(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 1;
  *(undefined4 *)(param_2 + 4) = 0x428c0000;
  FUN_145c71fb8(param_2 + 8);
  param_2[0xa8] = 0;
  *(undefined4 *)(param_2 + 0xac) = 7;
  FUN_145c71fb8(param_2 + 0xb0);
  *(undefined2 *)(param_2 + 0x150) = 0;
  return;
}



// FUNCTION 147b91094 FUN_147b91094 body=68 status=ok
// SIG undefined FUN_147b91094(void)

undefined8 FUN_147b91094(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x158);
      lVar1 = lVar1 + 0x158;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147b91100 FUN_147b91100 body=59 status=ok
// SIG undefined FUN_147b91100(void)

undefined8 FUN_147b91100(longlong *param_1)

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



// FUNCTION 147b911fa FUN_147b911fa body=54 status=ok
// SIG undefined FUN_147b911fa(void)

undefined1 FUN_147b911fa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147b91312(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 147b91258 FUN_147b91258 body=59 status=ok
// SIG undefined FUN_147b91258(void)

undefined8 FUN_147b91258(longlong *param_1)

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



// FUNCTION 147b9129e FUN_147b9129e body=38 status=ok
// SIG undefined FUN_147b9129e(void)

void FUN_147b9129e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147b91312 FUN_147b91312 body=92 status=ok
// SIG undefined FUN_147b91312(void)

undefined8 * FUN_147b91312(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  *param_1 = *param_2;
  FUN_144a787a6(param_1 + 1,param_2 + 1);
  uVar1 = *(undefined4 *)(param_2 + 3);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 4);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar6 = *(undefined4 *)(param_2 + 6);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 6) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar7;
  *(undefined4 *)(param_1 + 3) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  lVar8 = param_2[7];
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = param_2[7];
    }
  }
  param_1[7] = lVar8;
  return param_1;
}



// FUNCTION 147b91370 FUN_147b91370 body=60 status=ok
// SIG undefined FUN_147b91370(void)

void FUN_147b91370(longlong param_1)

{
  FUN_147b913ac(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147b913ac FUN_147b913ac body=47 status=ok
// SIG undefined FUN_147b913ac(void)

void FUN_147b913ac(longlong param_1,int param_2)

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



// FUNCTION 147b913dc FUN_147b913dc body=54 status=ok
// SIG undefined FUN_147b913dc(void)

void FUN_147b913dc(longlong *param_1)

{
  FUN_147b91412(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147b91412 FUN_147b91412 body=128 status=ok
// SIG undefined FUN_147b91412(void)

void FUN_147b91412(longlong param_1,int param_2)

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



// FUNCTION 147b91494 FUN_147b91494 body=54 status=ok
// SIG undefined FUN_147b91494(void)

void FUN_147b91494(longlong *param_1)

{
  FUN_147b914ca(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147b914ca FUN_147b914ca body=356 status=ok
// SIG undefined FUN_147b914ca(void)

void FUN_147b914ca(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1446f4a44(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
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



// FUNCTION 147b91630 FUN_147b91630 body=54 status=ok
// SIG undefined FUN_147b91630(void)

void FUN_147b91630(longlong *param_1)

{
  FUN_147b91666(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147b91666 FUN_147b91666 body=356 status=ok
// SIG undefined FUN_147b91666(void)

void FUN_147b91666(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1446f4a44(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
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



// FUNCTION 147b917cc FUN_147b917cc body=110 status=ok
// SIG undefined FUN_147b917cc(void)

void FUN_147b917cc(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x58);
  if (param_2 <= (int)uVar1) {
    iVar5 = 10;
    if (10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (10 < *(uint *)(param_1 + 0x5c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x5c) = iVar5;
    FUN_147b9183c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147b9183c FUN_147b9183c body=132 status=ok
// SIG undefined FUN_147b9183c(void)

void FUN_147b9183c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x50);
  if ((uint)param_3 < 0xb) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x50,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x50),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x50,param_2,param_3,8);
  return;
}



// FUNCTION 147b918c0 FUN_147b918c0 body=138 status=ok
// SIG undefined FUN_147b918c0(void)

void FUN_147b918c0(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 147b9194a FUN_147b9194a body=75 status=ok
// SIG undefined FUN_147b9194a(void)

void FUN_147b9194a(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x5c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
    if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x50),
              (longlong)*(int *)((longlong)param_1 + 0x58) << 3);
      FUN_1446efa72((longlong)param_1 + 0x50,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 147b91996 FUN_147b91996 body=114 status=ok
// SIG undefined FUN_147b91996(void)

void FUN_147b91996(longlong *param_1,int param_2)

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



// FUNCTION 147b91a08 FUN_147b91a08 body=146 status=ok
// SIG undefined FUN_147b91a08(void)

void FUN_147b91a08(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_158 [32];
  undefined1 *local_138;
  undefined1 *local_130;
  ulonglong *local_128;
  char local_120;
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = local_118;
  local_120 = '\0';
  local_128 = &local_18;
  local_130 = local_138;
  FUN_147b91a9c(param_1,&local_138);
  FUN_1400020e8(param_2,local_138,(ulonglong)((longlong)local_130 - (longlong)local_138) >> 1);
  if (local_120 == '\x01') {
    FUN_1400020a8(local_138);
  }
  if ((local_18 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b91a9c FUN_147b91a9c body=116 status=ok
// SIG undefined FUN_147b91a9c(void)

void FUN_147b91a9c(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142840e70(param_2,&DAT_14a9b1ab8);
  uVar1 = FUN_140212e80(uVar1,&DAT_149e063bc,*param_1);
  uVar1 = FUN_1468c3a7e(uVar1,&DAT_14a9b1abb);
  uVar1 = FUN_140212e80(uVar1,&DAT_149e063bc,param_1[1]);
  uVar1 = FUN_1468c3a7e(uVar1,&DAT_14a9b1abf);
  FUN_140212e80(uVar1,&DAT_149e063bc,param_1[2]);
  return;
}



// FUNCTION 147b91b10 FUN_147b91b10 body=175 status=ok
// SIG undefined FUN_147b91b10(void)

void FUN_147b91b10(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  lVar4 = param_1[1];
  if (plVar2 != (longlong *)0x0) {
LAB_147b91b24:
    do {
      for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
        if (((~*(uint *)(*(longlong *)(lVar4 + 8) + 0x18) & 0x1008081) == 0) &&
           ((*(char *)((longlong)param_1 + 0x15) != '\0' || ((*(byte *)(lVar4 + 0x3b) & 0x20) == 0))
           )) goto LAB_147b91b85;
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
          goto LAB_147b91b24;
        }
      }
      if (*(char *)((longlong)param_1 + 0x14) != '\x01') goto LAB_147b91bbb;
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))();
      if (plVar2 == (longlong *)0x0) goto LAB_147b91bb9;
      lVar4 = plVar2[10];
      *(undefined4 *)(param_1 + 2) = 0xffffffff;
    } while( true );
  }
  plVar2 = (longlong *)0x0;
LAB_147b91b85:
  *param_1 = (longlong)plVar2;
  param_1[1] = lVar4;
  return;
LAB_147b91bb9:
  plVar2 = (longlong *)0x0;
LAB_147b91bbb:
  lVar4 = 0;
  goto LAB_147b91b85;
}



// FUNCTION 147b91bc0 FUN_147b91bc0 body=175 status=ok
// SIG undefined FUN_147b91bc0(void)

void FUN_147b91bc0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  lVar4 = param_1[1];
  if (plVar2 != (longlong *)0x0) {
LAB_147b91bd4:
    do {
      for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
        if (((~*(uint *)(*(longlong *)(lVar4 + 8) + 0x18) & 0x1408001) == 0) &&
           ((*(char *)((longlong)param_1 + 0x15) != '\0' || ((*(byte *)(lVar4 + 0x3b) & 0x20) == 0))
           )) goto LAB_147b91c35;
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
          goto LAB_147b91bd4;
        }
      }
      if (*(char *)((longlong)param_1 + 0x14) != '\x01') goto LAB_147b91c6b;
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))();
      if (plVar2 == (longlong *)0x0) goto LAB_147b91c69;
      lVar4 = plVar2[10];
      *(undefined4 *)(param_1 + 2) = 0xffffffff;
    } while( true );
  }
  plVar2 = (longlong *)0x0;
LAB_147b91c35:
  *param_1 = (longlong)plVar2;
  param_1[1] = lVar4;
  return;
LAB_147b91c69:
  plVar2 = (longlong *)0x0;
LAB_147b91c6b:
  lVar4 = 0;
  goto LAB_147b91c35;
}



// FUNCTION 147b91c70 FUN_147b91c70 body=132 status=ok
// SIG undefined FUN_147b91c70(void)

longlong * FUN_147b91c70(longlong *param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  bool bVar2;
  
  *param_1 = param_2;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x50);
  }
  param_1[1] = lVar1;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x14) = param_3 & 1;
  *(byte *)((longlong)param_1 + 0x15) = param_3 >> 1 & 1;
  if ((param_3 & 4) != 0 && param_2 != 0) {
    lVar1 = FUN_144a797b2();
    if (*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) {
      bVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30;
      goto LAB_147b91cce;
    }
  }
  bVar2 = false;
LAB_147b91cce:
  *(bool *)((longlong)param_1 + 0x16) = bVar2;
  FUN_147b91cf4(param_1);
  return param_1;
}



// FUNCTION 147b91cf4 FUN_147b91cf4 body=186 status=ok
// SIG undefined FUN_147b91cf4(void)

void FUN_147b91cf4(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  lVar4 = param_1[1];
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
LAB_147b91d13:
    for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
      if (((~*(ulonglong *)(*(longlong *)(lVar4 + 8) + 0x18) & 0x1000000008001) == 0) &&
         ((*(char *)((longlong)param_1 + 0x15) != '\0' || ((*(byte *)(lVar4 + 0x3b) & 0x20) == 0))))
      goto LAB_147b91d73;
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
        goto LAB_147b91d13;
      }
    }
    if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))();
      if (plVar2 != (longlong *)0x0) {
        lVar4 = plVar2[10];
        *(undefined4 *)(param_1 + 2) = 0xffffffff;
        goto LAB_147b91d13;
      }
      plVar2 = (longlong *)0x0;
    }
    lVar4 = 0;
  }
LAB_147b91d73:
  *param_1 = (longlong)plVar2;
  param_1[1] = lVar4;
  return;
}



// FUNCTION 147b91dae FUN_147b91dae body=186 status=ok
// SIG undefined FUN_147b91dae(void)

void FUN_147b91dae(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  lVar4 = param_1[1];
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
LAB_147b91dcd:
    for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
      if (((~*(ulonglong *)(*(longlong *)(lVar4 + 8) + 0x18) & 0x101008001) == 0) &&
         ((*(char *)((longlong)param_1 + 0x15) != '\0' || ((*(byte *)(lVar4 + 0x3b) & 0x20) == 0))))
      goto LAB_147b91e2d;
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
        goto LAB_147b91dcd;
      }
    }
    if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))();
      if (plVar2 != (longlong *)0x0) {
        lVar4 = plVar2[10];
        *(undefined4 *)(param_1 + 2) = 0xffffffff;
        goto LAB_147b91dcd;
      }
      plVar2 = (longlong *)0x0;
    }
    lVar4 = 0;
  }
LAB_147b91e2d:
  *param_1 = (longlong)plVar2;
  param_1[1] = lVar4;
  return;
}



// FUNCTION 147b91e68 FUN_147b91e68 body=175 status=ok
// SIG undefined FUN_147b91e68(void)

void FUN_147b91e68(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  lVar4 = param_1[1];
  if (plVar2 != (longlong *)0x0) {
LAB_147b91e7c:
    do {
      for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
        if (((~*(uint *)(*(longlong *)(lVar4 + 8) + 0x18) & 0x28001) == 0) &&
           ((*(char *)((longlong)param_1 + 0x15) != '\0' || ((*(byte *)(lVar4 + 0x3b) & 0x20) == 0))
           )) goto LAB_147b91edd;
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
          goto LAB_147b91e7c;
        }
      }
      if (*(char *)((longlong)param_1 + 0x14) != '\x01') goto LAB_147b91f13;
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))();
      if (plVar2 == (longlong *)0x0) goto LAB_147b91f11;
      lVar4 = plVar2[10];
      *(undefined4 *)(param_1 + 2) = 0xffffffff;
    } while( true );
  }
  plVar2 = (longlong *)0x0;
LAB_147b91edd:
  *param_1 = (longlong)plVar2;
  param_1[1] = lVar4;
  return;
LAB_147b91f11:
  plVar2 = (longlong *)0x0;
LAB_147b91f13:
  lVar4 = 0;
  goto LAB_147b91edd;
}



// FUNCTION 147b91f18 FUN_147b91f18 body=175 status=ok
// SIG undefined FUN_147b91f18(void)

void FUN_147b91f18(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  lVar4 = param_1[1];
  if (plVar2 != (longlong *)0x0) {
LAB_147b91f2c:
    do {
      for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
        if (((~*(uint *)(*(longlong *)(lVar4 + 8) + 0x18) & 0x4018401) == 0) &&
           ((*(char *)((longlong)param_1 + 0x15) != '\0' || ((*(byte *)(lVar4 + 0x3b) & 0x20) == 0))
           )) goto LAB_147b91f8d;
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
          goto LAB_147b91f2c;
        }
      }
      if (*(char *)((longlong)param_1 + 0x14) != '\x01') goto LAB_147b91fc3;
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))();
      if (plVar2 == (longlong *)0x0) goto LAB_147b91fc1;
      lVar4 = plVar2[10];
      *(undefined4 *)(param_1 + 2) = 0xffffffff;
    } while( true );
  }
  plVar2 = (longlong *)0x0;
LAB_147b91f8d:
  *param_1 = (longlong)plVar2;
  param_1[1] = lVar4;
  return;
LAB_147b91fc1:
  plVar2 = (longlong *)0x0;
LAB_147b91fc3:
  lVar4 = 0;
  goto LAB_147b91f8d;
}



// FUNCTION 147b91fc8 FUN_147b91fc8 body=175 status=ok
// SIG undefined FUN_147b91fc8(void)

void FUN_147b91fc8(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  lVar4 = param_1[1];
  if (plVar2 != (longlong *)0x0) {
LAB_147b91fdc:
    do {
      for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
        if (((~*(uint *)(*(longlong *)(lVar4 + 8) + 0x18) & 0x9001) == 0) &&
           ((*(char *)((longlong)param_1 + 0x15) != '\0' || ((*(byte *)(lVar4 + 0x3b) & 0x20) == 0))
           )) goto LAB_147b9203d;
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
          goto LAB_147b91fdc;
        }
      }
      if (*(char *)((longlong)param_1 + 0x14) != '\x01') goto LAB_147b92073;
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))();
      if (plVar2 == (longlong *)0x0) goto LAB_147b92071;
      lVar4 = plVar2[10];
      *(undefined4 *)(param_1 + 2) = 0xffffffff;
    } while( true );
  }
  plVar2 = (longlong *)0x0;
LAB_147b9203d:
  *param_1 = (longlong)plVar2;
  param_1[1] = lVar4;
  return;
LAB_147b92071:
  plVar2 = (longlong *)0x0;
LAB_147b92073:
  lVar4 = 0;
  goto LAB_147b9203d;
}



// FUNCTION 147b92078 FUN_147b92078 body=175 status=ok
// SIG undefined FUN_147b92078(void)

void FUN_147b92078(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  lVar4 = param_1[1];
  if (plVar2 != (longlong *)0x0) {
LAB_147b9208c:
    do {
      for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
        if (((~*(uint *)(*(longlong *)(lVar4 + 8) + 0x18) & 0xc001) == 0) &&
           ((*(char *)((longlong)param_1 + 0x15) != '\0' || ((*(byte *)(lVar4 + 0x3b) & 0x20) == 0))
           )) goto LAB_147b920ed;
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
          goto LAB_147b9208c;
        }
      }
      if (*(char *)((longlong)param_1 + 0x14) != '\x01') goto LAB_147b92123;
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))();
      if (plVar2 == (longlong *)0x0) goto LAB_147b92121;
      lVar4 = plVar2[10];
      *(undefined4 *)(param_1 + 2) = 0xffffffff;
    } while( true );
  }
  plVar2 = (longlong *)0x0;
LAB_147b920ed:
  *param_1 = (longlong)plVar2;
  param_1[1] = lVar4;
  return;
LAB_147b92121:
  plVar2 = (longlong *)0x0;
LAB_147b92123:
  lVar4 = 0;
  goto LAB_147b920ed;
}



// FUNCTION 147b92128 FUN_147b92128 body=175 status=ok
// SIG undefined FUN_147b92128(void)

void FUN_147b92128(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  lVar4 = param_1[1];
  if (plVar2 != (longlong *)0x0) {
LAB_147b9213c:
    do {
      for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
        if (((~*(uint *)(*(longlong *)(lVar4 + 8) + 0x18) & 0xa001) == 0) &&
           ((*(char *)((longlong)param_1 + 0x15) != '\0' || ((*(byte *)(lVar4 + 0x3b) & 0x20) == 0))
           )) goto LAB_147b9219d;
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
          goto LAB_147b9213c;
        }
      }
      if (*(char *)((longlong)param_1 + 0x14) != '\x01') goto LAB_147b921d3;
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))();
      if (plVar2 == (longlong *)0x0) goto LAB_147b921d1;
      lVar4 = plVar2[10];
      *(undefined4 *)(param_1 + 2) = 0xffffffff;
    } while( true );
  }
  plVar2 = (longlong *)0x0;
LAB_147b9219d:
  *param_1 = (longlong)plVar2;
  param_1[1] = lVar4;
  return;
LAB_147b921d1:
  plVar2 = (longlong *)0x0;
LAB_147b921d3:
  lVar4 = 0;
  goto LAB_147b9219d;
}



// FUNCTION 147b921d8 FUN_147b921d8 body=175 status=ok
// SIG undefined FUN_147b921d8(void)

void FUN_147b921d8(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  lVar4 = param_1[1];
  if (plVar2 != (longlong *)0x0) {
LAB_147b921ec:
    do {
      for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
        if (((~*(uint *)(*(longlong *)(lVar4 + 8) + 0x18) & 0x24008001) == 0) &&
           ((*(char *)((longlong)param_1 + 0x15) != '\0' || ((*(byte *)(lVar4 + 0x3b) & 0x20) == 0))
           )) goto LAB_147b9224d;
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
          goto LAB_147b921ec;
        }
      }
      if (*(char *)((longlong)param_1 + 0x14) != '\x01') goto LAB_147b92283;
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))();
      if (plVar2 == (longlong *)0x0) goto LAB_147b92281;
      lVar4 = plVar2[10];
      *(undefined4 *)(param_1 + 2) = 0xffffffff;
    } while( true );
  }
  plVar2 = (longlong *)0x0;
LAB_147b9224d:
  *param_1 = (longlong)plVar2;
  param_1[1] = lVar4;
  return;
LAB_147b92281:
  plVar2 = (longlong *)0x0;
LAB_147b92283:
  lVar4 = 0;
  goto LAB_147b9224d;
}



// FUNCTION 147b92288 FUN_147b92288 body=186 status=ok
// SIG undefined FUN_147b92288(void)

void FUN_147b92288(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  lVar4 = param_1[1];
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
LAB_147b922a7:
    for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
      if (((~*(ulonglong *)(*(longlong *)(lVar4 + 8) + 0x18) & 0x10000000008001) == 0) &&
         ((*(char *)((longlong)param_1 + 0x15) != '\0' || ((*(byte *)(lVar4 + 0x3b) & 0x20) == 0))))
      goto LAB_147b92307;
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
        goto LAB_147b922a7;
      }
    }
    if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))();
      if (plVar2 != (longlong *)0x0) {
        lVar4 = plVar2[10];
        *(undefined4 *)(param_1 + 2) = 0xffffffff;
        goto LAB_147b922a7;
      }
      plVar2 = (longlong *)0x0;
    }
    lVar4 = 0;
  }
LAB_147b92307:
  *param_1 = (longlong)plVar2;
  param_1[1] = lVar4;
  return;
}



// FUNCTION 147b92342 FUN_147b92342 body=186 status=ok
// SIG undefined FUN_147b92342(void)

void FUN_147b92342(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  lVar4 = param_1[1];
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
LAB_147b92361:
    for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
      if (((~*(ulonglong *)(*(longlong *)(lVar4 + 8) + 0x18) & 0x224008001) == 0) &&
         ((*(char *)((longlong)param_1 + 0x15) != '\0' || ((*(byte *)(lVar4 + 0x3b) & 0x20) == 0))))
      goto LAB_147b923c1;
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
        goto LAB_147b92361;
      }
    }
    if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))();
      if (plVar2 != (longlong *)0x0) {
        lVar4 = plVar2[10];
        *(undefined4 *)(param_1 + 2) = 0xffffffff;
        goto LAB_147b92361;
      }
      plVar2 = (longlong *)0x0;
    }
    lVar4 = 0;
  }
LAB_147b923c1:
  *param_1 = (longlong)plVar2;
  param_1[1] = lVar4;
  return;
}



// FUNCTION 147b923fc FUN_147b923fc body=175 status=ok
// SIG undefined FUN_147b923fc(void)

void FUN_147b923fc(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  lVar4 = param_1[1];
  if (plVar2 != (longlong *)0x0) {
LAB_147b92410:
    do {
      for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
        if (((~*(uint *)(*(longlong *)(lVar4 + 8) + 0x18) & 0x40008001) == 0) &&
           ((*(char *)((longlong)param_1 + 0x15) != '\0' || ((*(byte *)(lVar4 + 0x3b) & 0x20) == 0))
           )) goto LAB_147b92471;
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
          goto LAB_147b92410;
        }
      }
      if (*(char *)((longlong)param_1 + 0x14) != '\x01') goto LAB_147b924a7;
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))();
      if (plVar2 == (longlong *)0x0) goto LAB_147b924a5;
      lVar4 = plVar2[10];
      *(undefined4 *)(param_1 + 2) = 0xffffffff;
    } while( true );
  }
  plVar2 = (longlong *)0x0;
LAB_147b92471:
  *param_1 = (longlong)plVar2;
  param_1[1] = lVar4;
  return;
LAB_147b924a5:
  plVar2 = (longlong *)0x0;
LAB_147b924a7:
  lVar4 = 0;
  goto LAB_147b92471;
}



// FUNCTION 147b924ac FUN_147b924ac body=186 status=ok
// SIG undefined FUN_147b924ac(void)

undefined8 FUN_147b924ac(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  uint *puVar7;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_14485c47a(&local_28);
  plVar3 = (longlong *)FUN_140633c48(param_1,&local_28);
  if (plVar3 != (longlong *)0x0) {
    iVar2 = FUN_140b132ac(plVar3,param_3);
    if ((0 < iVar2) && ((int)plVar3[9] != 0)) {
      plVar5 = plVar3 + 7;
      if ((longlong *)plVar3[8] != (longlong *)0x0) {
        plVar5 = (longlong *)plVar3[8];
      }
      puVar7 = (uint *)((longlong)plVar5 + (longlong)(int)((int)plVar3[9] - 1U & param_3) * 4);
      uVar4 = 0;
      do {
        lVar6 = (longlong)(int)*puVar7;
        if (lVar6 == -1) goto LAB_147b92548;
        puVar1 = (uint *)(*plVar3 + lVar6 * 0x18);
        puVar7 = puVar1 + 4;
      } while (*puVar1 != param_3);
      uVar4 = *(undefined8 *)(*plVar3 + 8 + lVar6 * 0x18);
      goto LAB_147b92548;
    }
  }
  uVar4 = 0;
LAB_147b92548:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b92568 FUN_147b92568 body=334 status=ok
// SIG undefined FUN_147b92568(void)

undefined4 * FUN_147b92568(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_146820b84(param_1,local_48);
  FUN_147b926b8(local_40,*param_3,param_3[1]);
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
  cVar2 = FUN_146820c6a(param_1,uVar3,local_40,&local_4c);
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
      FUN_14682082e(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b926b8 FUN_147b926b8 body=101 status=ok
// SIG undefined FUN_147b926b8(void)

undefined8 * FUN_147b926b8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

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
  FUN_147b9271e(param_1 + 2,param_3);
  return param_1;
}



// FUNCTION 147b9271e FUN_147b9271e body=77 status=ok
// SIG undefined FUN_147b9271e(void)

undefined8 * FUN_147b9271e(undefined8 *param_1,undefined8 *param_2)

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
    FUN_140b856de(param_1,iVar1,0);
    FUN_140b8566a(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 147b9276c FUN_147b9276c body=175 status=ok
// SIG undefined FUN_147b9276c(void)

void FUN_147b9276c(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  lVar4 = param_1[1];
  if (plVar2 != (longlong *)0x0) {
LAB_147b92780:
    do {
      for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
        if (((~*(uint *)(*(longlong *)(lVar4 + 8) + 0x18) & 0x8001) == 0) &&
           ((*(char *)((longlong)param_1 + 0x15) != '\0' || ((*(byte *)(lVar4 + 0x3b) & 0x20) == 0))
           )) goto LAB_147b927e1;
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
          goto LAB_147b92780;
        }
      }
      if (*(char *)((longlong)param_1 + 0x14) != '\x01') goto LAB_147b92817;
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))();
      if (plVar2 == (longlong *)0x0) goto LAB_147b92815;
      lVar4 = plVar2[10];
      *(undefined4 *)(param_1 + 2) = 0xffffffff;
    } while( true );
  }
  plVar2 = (longlong *)0x0;
LAB_147b927e1:
  *param_1 = (longlong)plVar2;
  param_1[1] = lVar4;
  return;
LAB_147b92815:
  plVar2 = (longlong *)0x0;
LAB_147b92817:
  lVar4 = 0;
  goto LAB_147b927e1;
}



// FUNCTION 147b9281c FUN_147b9281c body=175 status=ok
// SIG undefined FUN_147b9281c(void)

void FUN_147b9281c(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  lVar4 = param_1[1];
  if (plVar2 != (longlong *)0x0) {
LAB_147b92830:
    do {
      for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
        if (((~*(uint *)(*(longlong *)(lVar4 + 8) + 0x18) & 0x8001) == 0) &&
           ((*(char *)((longlong)param_1 + 0x15) != '\0' || ((*(byte *)(lVar4 + 0x3b) & 0x20) == 0))
           )) goto LAB_147b92891;
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
          goto LAB_147b92830;
        }
      }
      if (*(char *)((longlong)param_1 + 0x14) != '\x01') goto LAB_147b928c7;
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))();
      if (plVar2 == (longlong *)0x0) goto LAB_147b928c5;
      lVar4 = plVar2[10];
      *(undefined4 *)(param_1 + 2) = 0xffffffff;
    } while( true );
  }
  plVar2 = (longlong *)0x0;
LAB_147b92891:
  *param_1 = (longlong)plVar2;
  param_1[1] = lVar4;
  return;
LAB_147b928c5:
  plVar2 = (longlong *)0x0;
LAB_147b928c7:
  lVar4 = 0;
  goto LAB_147b92891;
}



// FUNCTION 147b928cc FUN_147b928cc body=31 status=ok
// SIG undefined FUN_147b928cc(void)

undefined8 FUN_147b928cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b92906 FUN_147b92906 body=68 status=ok
// SIG undefined FUN_147b92906(void)

void FUN_147b92906(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a9b1b10;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 147b9294a FUN_147b9294a body=68 status=ok
// SIG undefined FUN_147b9294a(void)

void FUN_147b9294a(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a9b1b10;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 147b9298e FUN_147b9298e body=108 status=ok
// SIG undefined FUN_147b9298e(void)

void FUN_147b9298e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x30,param_2 + 1);
  *puVar4 = &PTR_LAB_149e020b0;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_14a9b1b10;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147b929eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147b929fa FUN_147b929fa body=39 status=ok
// SIG undefined FUN_147b929fa(void)

void FUN_147b929fa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147b92a1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 147b92a22 FUN_147b92a22 body=146 status=ok
// SIG undefined FUN_147b92a22(void)

bool FUN_147b92a22(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
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



// FUNCTION 147b92ab6 FUN_147b92ab6 body=31 status=ok
// SIG undefined FUN_147b92ab6(void)

undefined8 FUN_147b92ab6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b92af0 FUN_147b92af0 body=68 status=ok
// SIG undefined FUN_147b92af0(void)

void FUN_147b92af0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_149e065d0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a9b1b80;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 147b92b34 FUN_147b92b34 body=68 status=ok
// SIG undefined FUN_147b92b34(void)

void FUN_147b92b34(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_149e065d0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a9b1b80;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 147b92b78 FUN_147b92b78 body=108 status=ok
// SIG undefined FUN_147b92b78(void)

void FUN_147b92b78(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x30,param_2 + 1);
  *puVar4 = &PTR_LAB_149e065d0;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_14a9b1b80;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147b92bd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147b92be4 FUN_147b92be4 body=39 status=ok
// SIG undefined FUN_147b92be4(void)

void FUN_147b92be4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147b92c07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 147b92c0c FUN_147b92c0c body=146 status=ok
// SIG undefined FUN_147b92c0c(void)

bool FUN_147b92c0c(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
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



// FUNCTION 147b92ca0 FUN_147b92ca0 body=31 status=ok
// SIG undefined FUN_147b92ca0(void)

undefined8 FUN_147b92ca0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b92cda FUN_147b92cda body=68 status=ok
// SIG undefined FUN_147b92cda(void)

void FUN_147b92cda(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_149e001f0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a9b1bf0;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 147b92d1e FUN_147b92d1e body=68 status=ok
// SIG undefined FUN_147b92d1e(void)

void FUN_147b92d1e(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_149e001f0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a9b1bf0;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 147b92d62 FUN_147b92d62 body=108 status=ok
// SIG undefined FUN_147b92d62(void)

void FUN_147b92d62(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x30,param_2 + 1);
  *puVar4 = &PTR_LAB_149e001f0;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_14a9b1bf0;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147b92dbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147b92dce FUN_147b92dce body=44 status=ok
// SIG undefined FUN_147b92dce(void)

void FUN_147b92dce(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147b92df7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 147b92dfa FUN_147b92dfa body=156 status=ok
// SIG undefined FUN_147b92dfa(void)

bool FUN_147b92dfa(longlong param_1,undefined8 param_2)

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



// FUNCTION 147b92e98 FUN_147b92e98 body=31 status=ok
// SIG undefined FUN_147b92e98(void)

undefined8 FUN_147b92e98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b92ed2 FUN_147b92ed2 body=68 status=ok
// SIG undefined FUN_147b92ed2(void)

void FUN_147b92ed2(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_14a9b1cd0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a9b1c60;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 147b92f16 FUN_147b92f16 body=68 status=ok
// SIG undefined FUN_147b92f16(void)

void FUN_147b92f16(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_14a9b1cd0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a9b1c60;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 147b92f5a FUN_147b92f5a body=108 status=ok
// SIG undefined FUN_147b92f5a(void)

void FUN_147b92f5a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x30,param_2 + 1);
  *puVar4 = &PTR_LAB_14a9b1cd0;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_14a9b1c60;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147b92fb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147b92fc6 FUN_147b92fc6 body=128 status=ok
// SIG undefined FUN_147b92fc6(void)

void FUN_147b92fc6(longlong param_1,longlong *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = FUN_14479d2ce(param_1 + 0x18);
  pcVar2 = *(code **)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x28);
  local_28 = *param_2;
  *param_2 = 0;
  local_20 = (undefined4)param_2[1];
  local_1c = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  (*pcVar2)(iVar1 + lVar3);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b93048 FUN_147b93048 body=206 status=ok
// SIG undefined FUN_147b93048(void)

bool FUN_147b93048(longlong param_1,longlong *param_2)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = FUN_144a61b4f();
  if (cVar3 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar5 = local_38;
  }
  else {
    lVar5 = 0;
  }
  lVar4 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar4 != 0) {
    pcVar2 = *(code **)(param_1 + 0x20);
    iVar1 = *(int *)(param_1 + 0x28);
    local_38 = *param_2;
    *param_2 = 0;
    local_30 = (undefined4)param_2[1];
    local_2c = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    (*pcVar2)(iVar1 + lVar4);
  }
  if ((lVar5 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar5);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b9311a FUN_147b9311a body=31 status=ok
// SIG undefined FUN_147b9311a(void)

undefined8 FUN_147b9311a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b93154 FUN_147b93154 body=68 status=ok
// SIG undefined FUN_147b93154(void)

void FUN_147b93154(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_149e35290;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a9b1d40;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 147b93198 FUN_147b93198 body=68 status=ok
// SIG undefined FUN_147b93198(void)

void FUN_147b93198(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_149e35290;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a9b1d40;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 147b931dc FUN_147b931dc body=108 status=ok
// SIG undefined FUN_147b931dc(void)

void FUN_147b931dc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x30,param_2 + 1);
  *puVar4 = &PTR_LAB_149e35290;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_14a9b1d40;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147b93239. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147b93248 FUN_147b93248 body=42 status=ok
// SIG undefined FUN_147b93248(void)

void FUN_147b93248(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147b9326f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 147b93272 FUN_147b93272 body=154 status=ok
// SIG undefined FUN_147b93272(void)

bool FUN_147b93272(longlong param_1,undefined4 param_2)

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



// FUNCTION 147b9330e FUN_147b9330e body=31 status=ok
// SIG undefined FUN_147b9330e(void)

undefined8 FUN_147b9330e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b93348 FUN_147b93348 body=68 status=ok
// SIG undefined FUN_147b93348(void)

void FUN_147b93348(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_14a9b20d0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a9b1db0;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 147b9338c FUN_147b9338c body=68 status=ok
// SIG undefined FUN_147b9338c(void)

void FUN_147b9338c(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_14a9b20d0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a9b1db0;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 147b933d0 FUN_147b933d0 body=108 status=ok
// SIG undefined FUN_147b933d0(void)

void FUN_147b933d0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x30,param_2 + 1);
  *puVar4 = &PTR_LAB_14a9b20d0;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_14a9b1db0;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147b9342d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147b9343c FUN_147b9343c body=128 status=ok
// SIG undefined FUN_147b9343c(void)

void FUN_147b9343c(longlong param_1,longlong *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = FUN_14479d2ce(param_1 + 0x18);
  pcVar2 = *(code **)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x28);
  local_28 = *param_2;
  *param_2 = 0;
  local_20 = (undefined4)param_2[1];
  local_1c = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  (*pcVar2)(iVar1 + lVar3);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b934be FUN_147b934be body=206 status=ok
// SIG undefined FUN_147b934be(void)

bool FUN_147b934be(longlong param_1,longlong *param_2)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = FUN_144a61b4f();
  if (cVar3 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar5 = local_38;
  }
  else {
    lVar5 = 0;
  }
  lVar4 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar4 != 0) {
    pcVar2 = *(code **)(param_1 + 0x20);
    iVar1 = *(int *)(param_1 + 0x28);
    local_38 = *param_2;
    *param_2 = 0;
    local_30 = (undefined4)param_2[1];
    local_2c = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    (*pcVar2)(iVar1 + lVar4);
  }
  if ((lVar5 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar5);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b93590 FUN_147b93590 body=31 status=ok
// SIG undefined FUN_147b93590(void)

undefined8 FUN_147b93590(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b935ca FUN_147b935ca body=68 status=ok
// SIG undefined FUN_147b935ca(void)

void FUN_147b935ca(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_14a9b1e90;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a9b1e20;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 147b9360e FUN_147b9360e body=68 status=ok
// SIG undefined FUN_147b9360e(void)

void FUN_147b9360e(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_14a9b1e90;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a9b1e20;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 147b93652 FUN_147b93652 body=108 status=ok
// SIG undefined FUN_147b93652(void)

void FUN_147b93652(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x30,param_2 + 1);
  *puVar4 = &PTR_LAB_14a9b1e90;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_14a9b1e20;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147b936af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147b936be FUN_147b936be body=136 status=ok
// SIG undefined FUN_147b936be(void)

void FUN_147b936be(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_14479d2ce(param_1 + 0x18);
  pcVar2 = *(code **)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x28);
  local_30 = *param_2;
  *param_2 = 0;
  local_28 = (undefined4)param_2[1];
  local_24 = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  (*pcVar2)(iVar1 + lVar3,&local_30,param_3);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b93748 FUN_147b93748 body=217 status=ok
// SIG undefined FUN_147b93748(void)

bool FUN_147b93748(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = FUN_144a61b4f();
  if (cVar3 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar5 = local_40;
  }
  else {
    lVar5 = 0;
  }
  lVar4 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar4 != 0) {
    pcVar2 = *(code **)(param_1 + 0x20);
    iVar1 = *(int *)(param_1 + 0x28);
    local_40 = *param_2;
    *param_2 = 0;
    local_38 = (undefined4)param_2[1];
    local_34 = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    (*pcVar2)(iVar1 + lVar4,&local_40,param_3);
  }
  if ((lVar5 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar5);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b93824 FUN_147b93824 body=31 status=ok
// SIG undefined FUN_147b93824(void)

undefined8 FUN_147b93824(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b9385e FUN_147b9385e body=68 status=ok
// SIG undefined FUN_147b9385e(void)

void FUN_147b9385e(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_14a9b1f70;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a9b1f00;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 147b938a2 FUN_147b938a2 body=68 status=ok
// SIG undefined FUN_147b938a2(void)

void FUN_147b938a2(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x30);
  *puVar2 = &PTR_LAB_14a9b1f70;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14a9b1f00;
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 147b938e6 FUN_147b938e6 body=108 status=ok
// SIG undefined FUN_147b938e6(void)

void FUN_147b938e6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x30,param_2 + 1);
  *puVar4 = &PTR_LAB_14a9b1f70;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_14a9b1f00;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147b93943. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147b93952 FUN_147b93952 body=146 status=ok
// SIG undefined FUN_147b93952(void)

void FUN_147b93952(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_14479d2ce(param_1 + 0x18);
  pcVar2 = *(code **)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x28);
  local_38 = *param_2;
  *param_2 = 0;
  local_30 = (undefined4)param_2[1];
  local_2c = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  (*pcVar2)(iVar1 + lVar3,&local_38,param_3,param_4);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b939e6 FUN_147b939e6 body=231 status=ok
// SIG undefined FUN_147b939e6(void)

bool FUN_147b939e6(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = FUN_144a61b4f();
  if (cVar3 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_48,0);
    lVar5 = local_48;
  }
  else {
    lVar5 = 0;
  }
  lVar4 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar4 != 0) {
    pcVar2 = *(code **)(param_1 + 0x20);
    iVar1 = *(int *)(param_1 + 0x28);
    local_48 = *param_2;
    *param_2 = 0;
    local_40 = (undefined4)param_2[1];
    local_3c = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    (*pcVar2)(iVar1 + lVar4,&local_48,param_3,param_4);
  }
  if ((lVar5 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar5);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b93ad0 FUN_147b93ad0 body=326 status=ok
// SIG undefined FUN_147b93ad0(void)

undefined4 * FUN_147b93ad0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147b93c18(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_147b93cfe(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147b93df0(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b93c18 FUN_147b93c18 body=230 status=ok
// SIG undefined FUN_147b93c18(void)

int * FUN_147b93c18(longlong *param_1,int *param_2)

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



// FUNCTION 147b93cfe FUN_147b93cfe body=128 status=ok
// SIG undefined FUN_147b93cfe(void)

undefined8 FUN_147b93cfe(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_147b93d7e((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 147b93d7e FUN_147b93d7e body=114 status=ok
// SIG undefined FUN_147b93d7e(void)

void FUN_147b93d7e(longlong *param_1,int param_2)

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



// FUNCTION 147b93df0 FUN_147b93df0 body=474 status=ok
// SIG undefined FUN_147b93df0(void)

void FUN_147b93df0(longlong *param_1)

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



// FUNCTION 147b93fcc FUN_147b93fcc body=393 status=ok
// SIG undefined FUN_147b93fcc(void)

undefined4 * FUN_147b93fcc(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147b94156(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar8 = ((ulonglong *)*param_3)[1];
  *local_40 = *(ulonglong *)*param_3;
  local_40[1] = uVar8;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)(local_40 + 2) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar2;
  *(undefined4 *)(local_40 + 3) = uVar3;
  *(undefined4 *)((longlong)local_40 + 0x1c) = uVar4;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar6 = ((uint)(*local_40 >> 0x14) & 0xffff ^ (uint)(*local_40 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  uVar7 = ((uint)(local_40[1] >> 0x14) & 0xffff ^ (uint)(local_40[1] >> 4)) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar6 = (uVar6 >> 2) + uVar6 * 0x40 + (uVar7 >> 0x10 ^ uVar7) + 0x9e3779b9 ^ uVar6;
  cVar5 = FUN_147b9423c(param_1,uVar6,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar5 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_40 + 0x24) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_147b94340(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b94156 FUN_147b94156 body=230 status=ok
// SIG undefined FUN_147b94156(void)

int * FUN_147b94156(longlong *param_1,int *param_2)

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



// FUNCTION 147b9423c FUN_147b9423c body=146 status=ok
// SIG undefined FUN_147b9423c(void)

undefined8 FUN_147b9423c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_147b942ce((int)lVar5,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = (int)plVar8[4];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 147b942ce FUN_147b942ce body=114 status=ok
// SIG undefined FUN_147b942ce(void)

void FUN_147b942ce(longlong *param_1,int param_2)

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



// FUNCTION 147b94340 FUN_147b94340 body=557 status=ok
// SIG undefined FUN_147b94340(void)

void FUN_147b94340(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
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
  uVar9 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar9 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar9,4);
    if (0 < (int)uVar9) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar9 != uVar8);
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
        lVar2 = *local_70;
        lVar6 = (longlong)iVar5;
        uVar11 = *(ulonglong *)(lVar2 + lVar6 * 0x28);
        uVar3 = *(ulonglong *)(lVar2 + 8 + lVar6 * 0x28);
        uVar9 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        uVar9 = uVar9 >> 0x10 ^ uVar9;
        uVar8 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar11 = (longlong)
                 (int)(uVar9 * 0x40 + (uVar8 >> 0x10 ^ uVar8) + (uVar9 >> 2) + 0x9e3779b9 ^ uVar9) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar2 + 0x24 + lVar6 * 0x28) = iVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20 + lVar6 * 0x28) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5
        ;
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


