// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 149356c76 FUN_149356c76 body=435 status=ok
// SIG undefined FUN_149356c76(void)

longlong FUN_149356c76(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ushort uVar2;
  ushort uVar3;
  void *_Src;
  byte bVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = (void *)0x0;
  local_58 = (int)param_2[1];
  lVar8 = (longlong)local_58;
  _Src = (void *)*param_2;
  if (lVar8 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,local_58,0);
    memcpy(local_60,_Src,lVar8 * 2);
  }
  plVar7 = *(longlong **)(param_1 + 0x50);
  if ((longlong)*(int *)(param_1 + 0x58) == 0) {
    bVar4 = 1;
  }
  else {
    plVar1 = plVar7 + *(int *)(param_1 + 0x58);
    plVar9 = plVar7;
    do {
      lVar8 = *plVar9;
      local_50 = *(longlong **)(lVar8 + 0x48);
      if (local_50 != (longlong *)0x0) {
        (**(code **)(*local_50 + 8))();
      }
      local_48 = *(undefined4 *)(lVar8 + 0x50);
      plVar7 = (longlong *)FUN_1447a1f4a(&local_50);
      iVar6 = (int)plVar7[1];
      if (iVar6 == local_58) {
        bVar11 = true;
        if (1 < iVar6) {
          lVar8 = 0;
          while( true ) {
            uVar2 = *(ushort *)(*plVar7 + lVar8);
            uVar5 = (uint)uVar2;
            uVar3 = *(ushort *)((longlong)local_60 + lVar8);
            uVar10 = (uint)uVar3;
            if (uVar2 != uVar3) {
              if ((uVar3 | uVar2) < 0x80) {
                uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_149356d55;
              }
              iVar6 = uVar5 - uVar10;
              goto LAB_149356db1;
            }
            if (uVar2 == 0) break;
LAB_149356d55:
            lVar8 = lVar8 + 2;
          }
          iVar6 = 0;
LAB_149356db1:
          bVar11 = iVar6 == 0;
        }
      }
      else {
        bVar11 = local_58 + iVar6 == 1;
      }
      if (local_50 != (longlong *)0x0) {
        (**(code **)(*local_50 + 0x10))();
      }
      plVar7 = plVar9;
    } while ((!bVar11) && (plVar9 = plVar9 + 1, plVar7 = plVar1, plVar9 != plVar1));
    bVar4 = bVar11 ^ 1;
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((bool)(bVar4 | plVar7 == (longlong *)0x0)) {
    lVar8 = 0;
  }
  else {
    lVar8 = *plVar7;
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar8;
}



// FUNCTION 149356e2a FUN_149356e2a body=246 status=ok
// SIG undefined FUN_149356e2a(void)

void FUN_149356e2a(longlong param_1,longlong param_2)

{
  longlong **pplVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong **pplVar4;
  undefined1 auStack_58 [32];
  longlong *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(local_38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  pplVar1 = *(longlong ***)(param_2 + 0x38);
  pplVar4 = pplVar1;
  if (pplVar1 == (longlong **)0x0) {
    pplVar4 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar2 = *pplVar4;
  plVar3 = *(longlong **)(param_1 + 0x38);
  if (plVar3 != plVar2) {
    *(longlong **)(param_1 + 0x38) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  pplVar4 = local_38;
  if (pplVar1 != (longlong **)0x0) {
    pplVar4 = pplVar1;
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(pplVar4 + 1);
  if (local_38[0] != (longlong *)0x0) {
    (**(code **)(*local_38[0] + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149356f22 FUN_149356f22 body=617 status=ok
// SIG undefined FUN_149356f22(void)

void FUN_149356f22(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar2 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  local_8c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  local_90 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_94 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_94);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_94);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = local_94;
  lVar1 = FUN_1444ca112(local_28,puVar2,local_8c,local_90);
  if (lVar1 != 0) {
    FUN_14935757e(param_1,lVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935719e FUN_14935719e body=249 status=ok
// SIG undefined FUN_14935719e(void)

void FUN_14935719e(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  _Src = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_30;
  local_40 = (int)uStack_30;
  if (lVar1 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,uStack_30 & 0xffffffff,0);
    memcpy(local_48,_Src,lVar1 * 2);
  }
  FUN_149357298(param_1,&local_48);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149357298 FUN_149357298 body=177 status=ok
// SIG undefined FUN_149357298(void)

void FUN_149357298(undefined8 param_1,longlong *param_2)

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
  lVar1 = FUN_14935571d(&local_40);
  if (lVar1 != 0) {
    FUN_14935757e(param_1,lVar1);
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



// FUNCTION 14935734a FUN_14935734a body=156 status=ok
// SIG undefined FUN_14935734a(void)

void FUN_14935734a(undefined8 param_1,longlong param_2)

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
  FUN_1493573e8(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493573e8 FUN_1493573e8 body=69 status=ok
// SIG undefined FUN_1493573e8(void)

void FUN_1493573e8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x60) = 0;
    FUN_149359518(param_1);
    return;
  }
  lVar1 = FUN_1444c9d72(param_2);
  if (lVar1 == 0) {
    return;
  }
  FUN_14935757e(param_1,lVar1);
  return;
}



// FUNCTION 149357442 FUN_149357442 body=293 status=ok
// SIG undefined FUN_149357442(void)

void FUN_149357442(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined1 auStack_1d8 [40];
  undefined **local_1b0;
  longlong *local_1a8;
  undefined ***local_1a0;
  undefined ****local_198;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_198 = &local_1a0;
  local_1b0 = &PTR_FUN_149e37810;
  local_1a0 = &local_1b0;
  local_1a8 = param_2;
  switchD_143c3d4dc::caseD_20();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14bc59450);
  iVar4 = FUN_1448332aa(param_2,&DAT_14bc59450);
  if (1 < iVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_1d8);
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    cVar3 = FUN_144a7c5f6(param_1 + 0x28);
    if (cVar3 == '\0') {
      plVar1 = *(longlong **)(param_1 + 0x28);
      plVar2 = *(longlong **)(param_1 + 0x38);
      if (plVar2 != plVar1) {
        *(longlong **)(param_1 + 0x38) = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x30);
      FUN_144a5dc74(&local_1b0);
      FUN_140008f88(param_1 + 0x28,&local_1b0);
      if (local_1b0 != (undefined **)0x0) {
        (**(code **)(*local_1b0 + 0x10))();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935757e FUN_14935757e body=80 status=ok
// SIG undefined FUN_14935757e(void)

void FUN_14935757e(longlong param_1,longlong *param_2)

{
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
  *(longlong **)(param_1 + 0x60) = param_2;
  (**(code **)(*param_2 + 0x170))(param_2,0,param_1,0);
  FUN_14472eae2(param_2,0x42);
  FUN_149359518(param_1);
  return;
}



// FUNCTION 14935763a FUN_14935763a body=59 status=ok
// SIG undefined FUN_14935763a(void)

undefined8 FUN_14935763a(longlong *param_1)

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



// FUNCTION 149357708 FUN_149357708 body=47 status=ok
// SIG undefined FUN_149357708(void)

void FUN_149357708(undefined8 param_1,longlong *param_2)

{
  if (param_2[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14935774e FUN_14935774e body=73 status=ok
// SIG undefined FUN_14935774e(void)

undefined8 FUN_14935774e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    FUN_144a787a6(param_2 + 0x18,param_3 + 0x18);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 1493577c0 FUN_1493577c0 body=59 status=ok
// SIG undefined FUN_1493577c0(void)

undefined8 FUN_1493577c0(longlong *param_1)

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



// FUNCTION 14935785e FUN_14935785e body=51 status=ok
// SIG undefined FUN_14935785e(void)

void FUN_14935785e(longlong *param_1)

{
  if ((char)param_1[5] == '\x01') {
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 1493578d2 FUN_1493578d2 body=48 status=ok
// SIG undefined FUN_1493578d2(void)

void FUN_1493578d2(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149357918 FUN_149357918 body=146 status=ok
// SIG undefined FUN_149357918(void)

undefined8 FUN_149357918(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined8 *)(lVar2 + 0x10) = puVar1[5];
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x34);
      uVar4 = *(undefined4 *)(puVar1 + 7);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x3c);
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(puVar1 + 6);
      *(undefined4 *)(lVar2 + 0x1c) = uVar3;
      *(undefined4 *)(lVar2 + 0x20) = uVar4;
      *(undefined4 *)(lVar2 + 0x24) = uVar5;
      lVar2 = param_3 + 0x40 + lVar6;
      FUN_144a787a6(param_2 + lVar6 + 0x40,lVar2);
      *(undefined1 *)(param_2 + lVar6 + 0x50) = *(undefined1 *)(lVar2 + 0x10);
      lVar6 = lVar6 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1493579d2 FUN_1493579d2 body=59 status=ok
// SIG undefined FUN_1493579d2(void)

undefined8 FUN_1493579d2(longlong *param_1)

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



// FUNCTION 149357a70 FUN_149357a70 body=52 status=ok
// SIG undefined FUN_149357a70(void)

void FUN_149357a70(longlong param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  return;
}



// FUNCTION 149357aa4 FUN_149357aa4 body=132 status=ok
// SIG undefined FUN_149357aa4(void)

void FUN_149357aa4(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x10) == param_2) {
          FUN_149358014(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x10 + *param_1 + 8);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 149357b28 FUN_149357b28 body=312 status=ok
// SIG undefined FUN_149357b28(void)

undefined4 * FUN_149357b28(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_149357c62(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_149357d48(param_1,uVar3,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
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
      FUN_149357e36(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149357c62 FUN_149357c62 body=229 status=ok
// SIG undefined FUN_149357c62(void)

int * FUN_149357c62(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 149357d48 FUN_149357d48 body=124 status=ok
// SIG undefined FUN_149357d48(void)

undefined8 FUN_149357d48(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_149357dc4(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 149357dc4 FUN_149357dc4 body=114 status=ok
// SIG undefined FUN_149357dc4(void)

void FUN_149357dc4(longlong *param_1,int param_2)

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



// FUNCTION 149357e36 FUN_149357e36 body=477 status=ok
// SIG undefined FUN_149357e36(void)

void FUN_149357e36(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
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



// FUNCTION 149358014 FUN_149358014 body=90 status=ok
// SIG undefined FUN_149358014(void)

void FUN_149358014(longlong *param_1,int param_2)

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
  FUN_149357dc4();
  return;
}



// FUNCTION 14935806e FUN_14935806e body=207 status=ok
// SIG undefined FUN_14935806e(void)

int FUN_14935806e(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x10 + (longlong)iVar1 * 0x18)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x18);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 14935813e FUN_14935813e body=351 status=ok
// SIG undefined FUN_14935813e(void)

undefined4 * FUN_14935813e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14935829e(param_1,local_48);
  FUN_149358428(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  if ((uVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar5);
  }
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_149358384(param_1,uVar3,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_1493584f2(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935829e FUN_14935829e body=230 status=ok
// SIG undefined FUN_14935829e(void)

int * FUN_14935829e(longlong *param_1,int *param_2)

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



// FUNCTION 149358384 FUN_149358384 body=162 status=ok
// SIG undefined FUN_149358384(void)

undefined8 FUN_149358384(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar5 = FUN_14935806e(param_1,param_2,&local_30);
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      lVar4 = param_3[1];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
      *puVar1 = (int)*param_3;
      puVar1[1] = uVar2;
      puVar1[2] = (int)lVar4;
      puVar1[3] = uVar3;
      FUN_149358480(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_1493583a8;
    }
  }
  uVar6 = 0;
LAB_1493583a8:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149358428 FUN_149358428 body=87 status=ok
// SIG undefined FUN_149358428(void)

longlong * FUN_149358428(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = *param_3;
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 149358480 FUN_149358480 body=114 status=ok
// SIG undefined FUN_149358480(void)

void FUN_149358480(longlong *param_1,int param_2)

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



// FUNCTION 1493584f2 FUN_1493584f2 body=510 status=ok
// SIG undefined FUN_1493584f2(void)

void FUN_1493584f2(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
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
  uVar5 = *(uint *)(param_1 + 9);
  uVar3 = local_70;
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      do {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
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
    uVar3 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar9 = local_70._4_4_;
      local_70 = uVar3;
      do {
        lVar2 = *local_88;
        uVar7 = *(ulonglong *)(lVar2 + (longlong)iVar9 * 0x18);
        if ((DAT_14c950c29 == '\x01') && (uVar7 != 0)) {
          FUN_1456cec3c(uVar7);
        }
        lVar2 = lVar2 + (longlong)iVar9 * 0x18;
        uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar7 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x14) = iVar6;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10) =
             *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(int *)((longlong)plVar4 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar9 = local_70._4_4_;
        uVar3 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493586f2 FUN_1493586f2 body=230 status=ok
// SIG undefined FUN_1493586f2(void)

undefined8 * FUN_1493586f2(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1493587e8 FUN_1493587e8 body=326 status=ok
// SIG undefined FUN_1493587e8(void)

undefined4 * FUN_1493587e8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_149358930(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_149358a16(param_1,uVar4,local_40,&local_4c);
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
      FUN_149358b4c(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149358930 FUN_149358930 body=230 status=ok
// SIG undefined FUN_149358930(void)

int * FUN_149358930(longlong *param_1,int *param_2)

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



// FUNCTION 149358a16 FUN_149358a16 body=128 status=ok
// SIG undefined FUN_149358a16(void)

undefined8 FUN_149358a16(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_149358a96((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 149358a96 FUN_149358a96 body=114 status=ok
// SIG undefined FUN_149358a96(void)

void FUN_149358a96(longlong *param_1,int param_2)

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



// FUNCTION 149358b08 FUN_149358b08 body=68 status=ok
// SIG undefined FUN_149358b08(void)

void FUN_149358b08(longlong param_1,uint param_2)

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
  FUN_149358b4c(param_1);
  return;
}



// FUNCTION 149358b4c FUN_149358b4c body=474 status=ok
// SIG undefined FUN_149358b4c(void)

void FUN_149358b4c(longlong *param_1)

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



// FUNCTION 149358d28 FUN_149358d28 body=87 status=ok
// SIG undefined FUN_149358d28(void)

void FUN_149358d28(longlong *param_1,int param_2)

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
  FUN_149358a96();
  return;
}



// FUNCTION 149358d80 FUN_149358d80 body=112 status=ok
// SIG undefined FUN_149358d80(void)

void FUN_149358d80(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 149358df0 FUN_149358df0 body=147 status=ok
// SIG undefined FUN_149358df0(void)

void FUN_149358df0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149358e84 FUN_149358e84 body=48 status=ok
// SIG undefined FUN_149358e84(void)

void FUN_149358e84(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 149358eb4 FUN_149358eb4 body=101 status=ok
// SIG undefined FUN_149358eb4(void)

void FUN_149358eb4(longlong *param_1,uint param_2)

{
  longlong *_Dst;
  int iVar1;
  
  _Dst = (longlong *)(*param_1 + (longlong)(int)param_2 * 0x28);
  if (_Dst[3] != 0) {
    FUN_1400020a8();
  }
  if (*_Dst != 0) {
    FUN_1400020a8();
  }
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,_Dst + 5,(longlong)(int)(~param_2 + iVar1) * 0x28);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  return;
}



// FUNCTION 149358f1a FUN_149358f1a body=62 status=ok
// SIG undefined FUN_149358f1a(void)

void FUN_149358f1a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_149358f58(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 149358f58 FUN_149358f58 body=112 status=ok
// SIG undefined FUN_149358f58(void)

ulonglong FUN_149358f58(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x28) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_149358f92;
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
LAB_149358f92:
  return param_2 & 0xffffffff;
}



// FUNCTION 149358fc8 FUN_149358fc8 body=164 status=ok
// SIG undefined FUN_149358fc8(void)

void FUN_149358fc8(longlong *param_1,undefined8 param_2)

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
        goto LAB_149359048;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_149359048:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14935906c FUN_14935906c body=132 status=ok
// SIG undefined FUN_14935906c(void)

void FUN_14935906c(longlong param_1,int param_2)

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



// FUNCTION 1493590f2 FUN_1493590f2 body=52 status=ok
// SIG undefined FUN_1493590f2(void)

void FUN_1493590f2(longlong *param_1)

{
  FUN_149359126();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149359126 FUN_149359126 body=89 status=ok
// SIG undefined FUN_149359126(void)

void FUN_149359126(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
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



// FUNCTION 149359180 FUN_149359180 body=206 status=ok
// SIG undefined FUN_149359180(void)

undefined8 * FUN_149359180(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = *param_2;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 2);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 2) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[5] = param_2[5];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar4 = *(undefined4 *)(param_2 + 7);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 7) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar5;
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  pvVar2 = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  return param_1;
}



// FUNCTION 14935924e FUN_14935924e body=143 status=ok
// SIG undefined FUN_14935924e(void)

void FUN_14935924e(longlong param_1,int param_2)

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



// FUNCTION 1493592de FUN_1493592de body=98 status=ok
// SIG undefined FUN_1493592de(void)

void FUN_1493592de(longlong *param_1,uint param_2)

{
  void *_Dst;
  int iVar1;
  
  _Dst = (void *)(*param_1 + (ulonglong)param_2 * 0x58);
  if (*(longlong *)(*param_1 + 0x40 + (ulonglong)param_2 * 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)((longlong)_Dst + 0x18) != 0) {
    FUN_1400020a8();
  }
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x58),(longlong)(int)(~param_2 + iVar1) * 0x58);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  return;
}



// FUNCTION 149359340 FUN_149359340 body=62 status=ok
// SIG undefined FUN_149359340(void)

void FUN_149359340(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14935937e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x58,8);
  }
  return;
}



// FUNCTION 14935937e FUN_14935937e body=104 status=ok
// SIG undefined FUN_14935937e(void)

ulonglong FUN_14935937e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x58) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1493593b4;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x58,8);
      param_2 = param_2 / 0x58;
    }
  }
LAB_1493593b4:
  return param_2 & 0xffffffff;
}



// FUNCTION 1493593e6 FUN_1493593e6 body=31 status=ok
// SIG undefined FUN_1493593e6(void)

undefined8 FUN_1493593e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149359422 FUN_149359422 body=93 status=ok
// SIG undefined FUN_149359422(void)

void FUN_149359422(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bc5de20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149359480 FUN_149359480 body=126 status=ok
// SIG undefined FUN_149359480(void)

void FUN_149359480(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bc5de20;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001493594ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1493594fe FUN_1493594fe body=21 status=ok
// SIG undefined FUN_1493594fe(void)

undefined8 FUN_1493594fe(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 149359518 FUN_149359518 body=182 status=ok
// SIG undefined FUN_149359518(void)

void FUN_149359518(undefined8 param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14cc0dc28;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar6 = false;
  DAT_14cc0dc34 = DAT_14cc0dc34 + 1;
  do {
    lVar5 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14cc0dc20 + lVar5) != 0 &&
            (plVar1 = *(longlong **)(DAT_14cc0dc20 + -8 + lVar5), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1), cVar3 != '\0'))) {
      lVar5 = lVar5 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14cc0dc34 = DAT_14cc0dc34 + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1493595a7;
      }
    }
    uVar4 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  DAT_14cc0dc34 = DAT_14cc0dc34 + -1;
LAB_1493595a7:
  FUN_14474d06a(&DAT_14cc0dc20,0);
  return;
}



// FUNCTION 1493595e0 FUN_1493595e0 body=111 status=ok
// SIG undefined FUN_1493595e0(void)

undefined1 * FUN_1493595e0(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_1 = *param_2;
  plVar1 = *(longlong **)(param_2 + 8);
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 8) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  param_1[0x28] = param_2[0x28];
  FUN_140bee9ec(param_1 + 0x30,param_2 + 0x30);
  return param_1;
}



// FUNCTION 149359656 FUN_149359656 body=436 status=ok
// SIG undefined FUN_149359656(void)

void FUN_149359656(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined1 auStack_b8 [32];
  longlong local_98;
  ulonglong uStack_90;
  undefined1 local_80 [24];
  undefined1 local_68 [16];
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_39 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  local_80[0] = 0;
  FUN_144a5dc74();
  FUN_140056680(local_68,&DAT_149dfb77a);
  local_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
  }
  puVar3 = local_80;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  local_98 = 0;
  uStack_90 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = &local_98;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2a0))(param_1,local_39,puVar3,plVar2);
  *param_3 = uVar1;
  FUN_1447a1747(local_98,uStack_90 & 0xffffffff);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_14935980c(local_80);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935980c FUN_14935980c body=76 status=ok
// SIG undefined FUN_14935980c(void)

void FUN_14935980c(longlong param_1)

{
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014935984d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14935985e FUN_14935985e body=436 status=ok
// SIG undefined FUN_14935985e(void)

void FUN_14935985e(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined1 auStack_b8 [32];
  longlong local_98;
  ulonglong uStack_90;
  undefined1 local_80 [24];
  undefined1 local_68 [16];
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_39 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  local_80[0] = 0;
  FUN_144a5dc74();
  FUN_140056680(local_68,&DAT_149dfb77a);
  local_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
  }
  puVar3 = local_80;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  local_98 = 0;
  uStack_90 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = &local_98;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2a8))(param_1,local_39,puVar3,plVar2);
  *param_3 = uVar1;
  FUN_1447a1747(local_98,uStack_90 & 0xffffffff);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_14935980c(local_80);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149359a16 FUN_149359a16 body=88 status=ok
// SIG undefined FUN_149359a16(void)

undefined8 * FUN_149359a16(undefined8 *param_1,undefined8 *param_2)

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
      FUN_149365bfe(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 149359a6e FUN_149359a6e body=196 status=ok
// SIG undefined FUN_149359a6e(void)

void FUN_149359a6e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = 0;
  FUN_14485c47a(&local_50,param_6);
  local_58 = 0;
  FUN_14485c47a(&local_58,param_5);
  local_60 = 0;
  FUN_14485c47a(&local_60,param_4);
  local_70 = local_50;
  local_78 = local_58;
  (**(code **)(*param_1 + 0x2a0))(param_1,param_2,param_3,local_60);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149359b34 FUN_149359b34 body=563 status=ok
// SIG undefined FUN_149359b34(void)

void FUN_149359b34(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58[2] = 0;
  local_58[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  plVar2 = local_58 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar3 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_70 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = local_70;
  local_88 = local_68;
  uVar1 = FUN_149359a6e(param_1,plVar2,plVar3,local_60);
  *param_3 = uVar1;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  FUN_149365bce(local_58[2],local_58[3] & 0xffffffff);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149359d68 FUN_149359d68 body=237 status=ok
// SIG undefined FUN_149359d68(void)

void FUN_149359d68(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50 = 0;
  local_70 = param_3;
  FUN_14485c47a(&local_50,param_7);
  local_58 = 0;
  FUN_14485c47a(&local_58,param_6);
  local_60 = 0;
  FUN_14485c47a(&local_60,param_5);
  local_68 = 0;
  FUN_14485c47a(&local_68,param_4);
  local_78 = local_50;
  local_80 = local_58;
  local_88 = local_60;
  (**(code **)(*param_1 + 0x2b0))(param_1,param_2,local_70,local_68);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149359e56 FUN_149359e56 body=650 status=ok
// SIG undefined FUN_149359e56(void)

void FUN_149359e56(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[2] = 0;
  local_58[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  plVar2 = local_58 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar3 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_70 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_78 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = local_78;
  local_90 = local_70;
  local_98 = local_68;
  uVar1 = FUN_149359d68(param_1,plVar2,plVar3,local_60);
  *param_3 = uVar1;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  FUN_149365bce(local_58[2],local_58[3] & 0xffffffff);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935a0e2 FUN_14935a0e2 body=196 status=ok
// SIG undefined FUN_14935a0e2(void)

void FUN_14935a0e2(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = 0;
  FUN_14485c47a(&local_50,param_6);
  local_58 = 0;
  FUN_14485c47a(&local_58,param_5);
  local_60 = 0;
  FUN_14485c47a(&local_60,param_4);
  local_70 = local_50;
  local_78 = local_58;
  (**(code **)(*param_1 + 0x2a8))(param_1,param_2,param_3,local_60);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935a1a8 FUN_14935a1a8 body=563 status=ok
// SIG undefined FUN_14935a1a8(void)

void FUN_14935a1a8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58[2] = 0;
  local_58[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  plVar2 = local_58 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar3 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_70 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_80 = local_70;
  local_88 = local_68;
  uVar1 = FUN_14935a0e2(param_1,plVar2,plVar3,local_60);
  *param_3 = uVar1;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  FUN_149365bce(local_58[2],local_58[3] & 0xffffffff);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935a404 FUN_14935a404 body=139 status=ok
// SIG undefined FUN_14935a404(void)

void FUN_14935a404(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149363408(&local_28);
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



// FUNCTION 14935a4a8 FUN_14935a4a8 body=176 status=ok
// SIG undefined FUN_14935a4a8(void)

void FUN_14935a4a8(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  puVar1 = &local_20;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined8 *)(param_1 + 0x3c) = *puVar1;
  FUN_1493634b8(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935a56e FUN_14935a56e body=47 status=ok
// SIG undefined FUN_14935a56e(void)

void FUN_14935a56e(longlong param_1,longlong param_2,undefined8 *param_3)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14935bc96();
  *param_3 = *(undefined8 *)(param_1 + 0x70);
  return;
}



// FUNCTION 14935a59e FUN_14935a59e body=48 status=ok
// SIG undefined FUN_14935a59e(void)

void FUN_14935a59e(longlong param_1,longlong param_2,undefined4 *param_3)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14935c194();
  *param_3 = *(undefined4 *)(param_1 + 0x80);
  return;
}



// FUNCTION 14935a5ce FUN_14935a5ce body=139 status=ok
// SIG undefined FUN_14935a5ce(void)

void FUN_14935a5ce(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14935a65a(param_1,&local_28);
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



// FUNCTION 14935a65a FUN_14935a65a body=120 status=ok
// SIG undefined FUN_14935a65a(void)

longlong * FUN_14935a65a(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_14935c194();
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x80);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x78);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar5);
      if (lVar4 != 0) {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1447f76d2(param_2,iVar2);
        }
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar4;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return param_2;
}



// FUNCTION 14935a6d2 FUN_14935a6d2 body=196 status=ok
// SIG undefined FUN_14935a6d2(void)

void FUN_14935a6d2(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_14935bc96(param_1);
  if (*(longlong *)(param_1 + 0x70) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1492f2702(*(longlong *)(param_1 + 0x70),local_38);
  }
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935a798 FUN_14935a798 body=196 status=ok
// SIG undefined FUN_14935a798(void)

void FUN_14935a798(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_14935bc96(param_1);
  if (*(longlong *)(param_1 + 0x70) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1492f2ba8(*(longlong *)(param_1 + 0x70),local_38);
  }
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935a85e FUN_14935a85e body=50 status=ok
// SIG undefined FUN_14935a85e(void)

void FUN_14935a85e(longlong param_1,longlong param_2,undefined8 *param_3)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14935bd86();
  *param_3 = *(undefined8 *)(param_1 + 0x88);
  return;
}



// FUNCTION 14935a890 FUN_14935a890 body=110 status=ok
// SIG undefined FUN_14935a890(void)

void FUN_14935a890(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = 0;
  uStack_20 = 0;
  FUN_1410e5bda(param_3,&local_28);
  FUN_1447a1747(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935a900 FUN_14935a900 body=110 status=ok
// SIG undefined FUN_14935a900(void)

void FUN_14935a900(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = 0;
  uStack_20 = 0;
  FUN_1410e5bda(param_3,&local_28);
  FUN_1447a1747(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935a970 FUN_14935a970 body=49 status=ok
// SIG undefined FUN_14935a970(void)

void FUN_14935a970(undefined8 param_1,longlong param_2,longlong *param_3)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  *param_3 = 0;
  param_3[1] = 0;
  return;
}



// FUNCTION 14935a9a2 FUN_14935a9a2 body=156 status=ok
// SIG undefined FUN_14935a9a2(void)

void FUN_14935a9a2(undefined8 param_1,longlong param_2)

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
  FUN_14935aa40(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935aa40 FUN_14935aa40 body=424 status=ok
// SIG undefined FUN_14935aa40(void)

void FUN_14935aa40(longlong param_1,longlong param_2)

{
  void *_Src;
  undefined1 auStack_128 [40];
  void *local_100;
  size_t local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [160];
  size_t local_48;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x70) = param_2;
    if (param_2 == 0) {
      if (*(longlong *)(param_1 + 0xa0) < 0) {
        *(undefined8 *)(param_1 + 0x98) = 0;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_128);
      }
      *(undefined8 *)(param_1 + 0x98) = 0;
      goto LAB_14935ab36;
    }
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 0x70) = param_2;
  }
  FUN_146825b50(local_e8,0,0,0);
  FUN_1492f421e(*(undefined8 *)(param_1 + 0x70),local_e8);
  _Src = (void *)FUN_142790102(local_e8);
  local_100 = (void *)0x0;
  if ((longlong)local_48 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_48);
  }
  local_f8 = local_48;
  if (local_48 == 0) {
    local_f0 = 0;
  }
  else {
    FUN_145ad9f5c(&local_100,local_48,0);
    memcpy(local_100,_Src,local_48);
  }
  if ((void **)(param_1 + 0x90) == &local_100) {
    if (local_100 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x90) != 0) {
      FUN_1400020a8();
    }
    *(void **)(param_1 + 0x90) = local_100;
    local_100 = (void *)0x0;
    *(size_t *)(param_1 + 0x98) = local_f8;
    *(undefined8 *)(param_1 + 0xa0) = local_f0;
  }
  FUN_146825c36(local_e8);
LAB_14935ab36:
  if ((local_28 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935ac00 FUN_14935ac00 body=180 status=ok
// SIG undefined FUN_14935ac00(void)

void FUN_14935ac00(undefined8 param_1,longlong param_2)

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
  FUN_14935acb6(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935acb6 FUN_14935acb6 body=441 status=ok
// SIG undefined FUN_14935acb6(void)

void FUN_14935acb6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) < 0) {
    FUN_140c6998c(plVar1,0);
  }
  lVar5 = param_2[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar6 = *param_2;
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(lVar6 + lVar7);
      if (lVar4 != 0) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar4);
        }
        iVar2 = *(int *)(param_1 + 0x80);
        *(uint *)(param_1 + 0x80) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x84) < iVar2 + 1U) {
          FUN_140845902(plVar1,iVar2);
        }
        *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar4;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar4);
        }
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar5 * 8 != lVar7);
  }
  plVar1 = (longlong *)(param_1 + 0xa8);
  FUN_14935c156(plVar1,*(undefined4 *)(param_1 + 0x80));
  iVar2 = *(int *)(param_1 + 0x80);
  if ((longlong)iVar2 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x78);
    lVar6 = 0;
    do {
      lVar7 = *(longlong *)(lVar5 + lVar6);
      if (lVar7 != 0) {
        FUN_14935b941(local_58,lVar7);
        FUN_144750a86(*(undefined8 *)(lVar7 + 0x10),local_68,0,0);
        iVar3 = *(int *)(param_1 + 0xb0);
        *(uint *)(param_1 + 0xb0) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0xb4) < iVar3 + 1U) {
          FUN_146272134(plVar1,iVar3);
        }
        FUN_149365e7c((longlong)iVar3 * 0x20 + *plVar1,0);
        if (local_68[0] != 0) {
          FUN_1400020a8();
        }
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 * 8 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14935ae70 FUN_14935ae70 body=156 status=ok
// SIG undefined FUN_14935ae70(void)

void FUN_14935ae70(undefined8 param_1,longlong param_2)

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
  FUN_14935af0e(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935af0e FUN_14935af0e body=310 status=ok
// SIG undefined FUN_14935af0e(void)

void FUN_14935af0e(longlong param_1,longlong param_2)

{
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [5];
  
  local_48[4] = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x88) = param_2;
  FUN_144757f48(param_2,2);
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_146b2164e(param_1 + 0xb8,local_48);
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_14935b38b(local_58,param_2);
    FUN_144750a86(*(undefined8 *)(param_2 + 0x10),local_68,0,0);
    FUN_149365e7c(local_48,0,local_68,local_58);
    FUN_146b2164e(param_1 + 0xb8,local_48);
    if (local_48[2] != 0) {
      FUN_1400020a8();
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48[4] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935b048 FUN_14935b048 body=75 status=ok
// SIG undefined FUN_14935b048(void)

void FUN_14935b048(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_14935b094(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935b094 FUN_14935b094 body=103 status=ok
// SIG undefined FUN_14935b094(void)

void FUN_14935b094(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  switchD_143c3d4dc::caseD_21();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14cc0bb7c);
  iVar1 = FUN_1448332aa(param_2,&DAT_14cc0bb7c);
  if (iVar1 < 1) {
    return;
  }
  FUN_145ad9e74(param_2,param_1 + 0x90);
  FUN_149365c60(param_2,param_1 + 0xa8);
  return;
}



// FUNCTION 14935b100 FUN_14935b100 body=474 status=ok
// SIG undefined FUN_14935b100(void)

longlong FUN_14935b100(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *local_70;
  wchar_t *local_68;
  undefined4 local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar7 = FUN_14935b2db(DAT_14c951640);
  uVar4 = *(uint *)(lVar7 + 0xc);
  if ((int)uVar4 < DAT_14c9647dc) {
    lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
  }
  else {
    lVar9 = 0;
  }
  FUN_14482b126(lVar9,0x4000000);
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  FUN_14047afda(&local_58,param_1);
  cVar6 = FUN_14047b282(local_58,&local_48,0);
  if (cVar6 != '\0') {
    local_68 = L"GeneratedTranslatorSettings";
    local_60 = 0x1b;
    puVar8 = (undefined8 *)FUN_14047df14(local_48);
    local_78 = *puVar8;
    plVar5 = (longlong *)puVar8[1];
    if (plVar5 == (longlong *)0x0) {
      local_70 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      local_70 = plVar5;
    }
    local_88 = 0;
    uStack_80 = 0;
    local_90 = 0;
    local_98 = 0;
    FUN_146264b74(&local_78,param_2,lVar7,0);
    plVar3 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
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
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_50 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  plVar5 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935b2db FUN_14935b2db body=175 status=ok
// SIG undefined FUN_14935b2db(void)

undefined8 FUN_14935b2db(undefined8 param_1,undefined8 param_2)

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



// FUNCTION 14935b38b FUN_14935b38b body=851 status=ok
// SIG undefined FUN_14935b38b(void)

longlong * FUN_14935b38b(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  longlong local_a0 [2];
  undefined8 *local_90;
  longlong *local_88;
  undefined8 *local_80;
  longlong *local_78;
  undefined8 *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar4 = *(longlong *)(param_2 + 0x10);
  if (lVar4 != 0) {
    puVar7 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    puVar7[4] = 0;
    *(undefined4 *)(puVar7 + 5) = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar7 + 0x34) = 0;
    puVar7[8] = 0;
    *(undefined4 *)(puVar7 + 9) = 0;
    local_70 = puVar7;
    local_68 = (longlong *)FUN_14001cc68(0x18,0x10);
    local_68[1] = (longlong)&DAT_100000001;
    *local_68 = (longlong)&PTR_FUN_149e49100;
    local_68[2] = (longlong)puVar7;
    puVar7 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    puVar7[4] = 0;
    *(undefined4 *)(puVar7 + 5) = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar7 + 0x34) = 0;
    puVar7[8] = 0;
    *(undefined4 *)(puVar7 + 9) = 0;
    plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar8[1] = (longlong)&DAT_100000001;
    *plVar8 = (longlong)&PTR_FUN_149e49100;
    plVar8[2] = (longlong)puVar7;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    local_80 = puVar7;
    local_78 = plVar8;
    cVar6 = FUN_146f02e98(lVar4,param_2,&local_80,0);
    puVar5 = local_70;
    if (cVar6 != '\0') {
      puVar9 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      *puVar9 = &PTR_FUN_149e440f0;
      puVar9[2] = puVar7;
      puVar9[3] = plVar8;
      *(undefined4 *)(puVar9 + 1) = 6;
      local_90 = puVar9;
      local_88 = (longlong *)FUN_14001cc68(0x18,0x10);
      local_88[1] = (longlong)&DAT_100000001;
      *local_88 = (longlong)&PTR_FUN_149e49120;
      local_88[2] = (longlong)puVar9;
      FUN_140056680(local_a0,L"GeneratedTranslatorSettings");
      FUN_146839350(puVar5,local_a0,&local_90);
      if (local_a0[0] != 0) {
        FUN_1400020a8();
      }
      plVar3 = local_88;
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_88 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_88)(local_88);
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
    *param_1 = 0;
    param_1[1] = 0;
    FUN_14619f8aa(&local_90,param_1,0);
    cVar6 = FUN_145d35994(&local_70,local_90,1);
    plVar3 = local_88;
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_88 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (cVar6 != '\0') {
      if (plVar8 != (longlong *)0x0) {
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
      plVar8 = local_68;
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_68 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      goto LAB_14935b3d0;
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    if (plVar8 != (longlong *)0x0) {
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
    plVar8 = local_68;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_68 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  FUN_140056680(param_1,&DAT_149dfb77a);
LAB_14935b3d0:
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935b6df FUN_14935b6df body=433 status=ok
// SIG undefined FUN_14935b6df(void)

undefined8 FUN_14935b6df(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *local_70;
  wchar_t *local_68;
  undefined4 local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar6 = FUN_14935b891(DAT_14c951640);
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  FUN_14047afda(&local_58,param_1);
  cVar5 = FUN_14047b282(local_58,&local_48,0);
  if (cVar5 != '\0') {
    local_68 = L"GeneratedPipeline";
    local_60 = 0x11;
    puVar7 = (undefined8 *)FUN_14047df14(local_48);
    local_78 = *puVar7;
    plVar4 = (longlong *)puVar7[1];
    if (plVar4 == (longlong *)0x0) {
      local_70 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      local_70 = plVar4;
    }
    local_88 = 0;
    uStack_80 = 0;
    local_90 = 0;
    local_98 = 0;
    FUN_146264b74(&local_78,param_2,uVar6,0);
    plVar3 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  FUN_1492ec3ac(uVar6);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_50 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  plVar4 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935b891 FUN_14935b891 body=175 status=ok
// SIG undefined FUN_14935b891(void)

undefined8 FUN_14935b891(undefined8 param_1,undefined8 param_2)

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



// FUNCTION 14935b941 FUN_14935b941 body=851 status=ok
// SIG undefined FUN_14935b941(void)

longlong * FUN_14935b941(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  longlong local_a0 [2];
  undefined8 *local_90;
  longlong *local_88;
  undefined8 *local_80;
  longlong *local_78;
  undefined8 *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar4 = *(longlong *)(param_2 + 0x10);
  if (lVar4 != 0) {
    puVar7 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    puVar7[4] = 0;
    *(undefined4 *)(puVar7 + 5) = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar7 + 0x34) = 0;
    puVar7[8] = 0;
    *(undefined4 *)(puVar7 + 9) = 0;
    local_70 = puVar7;
    local_68 = (longlong *)FUN_14001cc68(0x18,0x10);
    local_68[1] = (longlong)&DAT_100000001;
    *local_68 = (longlong)&PTR_FUN_149e49100;
    local_68[2] = (longlong)puVar7;
    puVar7 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    puVar7[4] = 0;
    *(undefined4 *)(puVar7 + 5) = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar7 + 0x34) = 0;
    puVar7[8] = 0;
    *(undefined4 *)(puVar7 + 9) = 0;
    plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar8[1] = (longlong)&DAT_100000001;
    *plVar8 = (longlong)&PTR_FUN_149e49100;
    plVar8[2] = (longlong)puVar7;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    local_80 = puVar7;
    local_78 = plVar8;
    cVar6 = FUN_146f02e98(lVar4,param_2,&local_80,0);
    puVar5 = local_70;
    if (cVar6 != '\0') {
      puVar9 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      *puVar9 = &PTR_FUN_149e440f0;
      puVar9[2] = puVar7;
      puVar9[3] = plVar8;
      *(undefined4 *)(puVar9 + 1) = 6;
      local_90 = puVar9;
      local_88 = (longlong *)FUN_14001cc68(0x18,0x10);
      local_88[1] = (longlong)&DAT_100000001;
      *local_88 = (longlong)&PTR_FUN_149e49120;
      local_88[2] = (longlong)puVar9;
      FUN_140056680(local_a0,L"GeneratedPipeline");
      FUN_146839350(puVar5,local_a0,&local_90);
      if (local_a0[0] != 0) {
        FUN_1400020a8();
      }
      plVar3 = local_88;
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_88 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_88)(local_88);
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
    *param_1 = 0;
    param_1[1] = 0;
    FUN_14619f8aa(&local_90,param_1,0);
    cVar6 = FUN_145d35994(&local_70,local_90,1);
    plVar3 = local_88;
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_88 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (cVar6 != '\0') {
      if (plVar8 != (longlong *)0x0) {
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
      plVar8 = local_68;
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_68 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      goto LAB_14935b986;
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    if (plVar8 != (longlong *)0x0) {
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
    plVar8 = local_68;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_68 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  FUN_140056680(param_1,&DAT_149dfb77a);
LAB_14935b986:
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935bc96 FUN_14935bc96 body=221 status=ok
// SIG undefined FUN_14935bc96(void)

void FUN_14935bc96(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined1 local_d0 [184];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  cVar1 = (**(code **)(*DAT_14cc0dff8 + 0xa8))();
  if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x70) == 0)) {
    if (*(longlong *)(param_1 + 0x98) < 1) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_f8);
    }
    local_d8 = 0;
    FUN_1460d8db6(local_d0,*(undefined8 *)(param_1 + 0x90),*(longlong *)(param_1 + 0x98),0);
    lVar2 = FUN_14935c5c3(DAT_14c951640);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x70) = lVar2;
    FUN_1492f421e(lVar2,local_d0);
    FUN_1460d8d80(local_d0);
  }
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935bd86 FUN_14935bd86 body=975 status=ok
// SIG undefined FUN_14935bd86(void)

void FUN_14935bd86(longlong param_1)

{
  void *_Src;
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 ****ppppuVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined8 ***local_f8;
  undefined8 local_f0;
  undefined8 ***local_e0;
  int local_d8;
  undefined4 local_d4;
  longlong local_d0;
  longlong local_c8 [2];
  longlong *local_b8;
  undefined1 local_9c [4];
  longlong local_98 [4];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  cVar1 = (**(code **)(*DAT_14cc0dff8 + 0xa8))();
  if (cVar1 != '\0') {
    if (*(longlong *)(param_1 + 0x88) != 0) {
      if ((DAT_14c951760 == '\0') && ((*(uint *)(*(longlong *)(param_1 + 0x88) + 8) & 0x18000) == 0)
         ) goto LAB_14935bdf5;
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    if (1 < *(int *)(param_1 + 0xc0)) {
      local_78 = 0;
      local_70 = 0;
      local_98[0] = 0;
      local_98[1] = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      uVar4 = FUN_144a797b2();
      local_108 = 0;
      FUN_146123bc0(local_c8,uVar4,0,0);
      if (local_b8 != (longlong *)0x0) {
        do {
          lVar8 = *local_b8;
          if (lVar8 == 0) {
LAB_14935bf1b:
            lVar8 = 0;
          }
          else {
            lVar5 = FUN_144a797b2();
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) goto LAB_14935bf1b;
          }
          local_d0 = lVar8;
          lVar5 = FUN_14589388c();
          if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar8 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30)) {
            FUN_144750a86(local_d0,&local_e0,0,0);
            local_f8 = &local_e0;
            local_f0 = &local_d0;
            FUN_149304480(local_98,local_9c);
            if ((undefined8 ****)local_e0 != (undefined8 ****)0x0) {
              FUN_1400020a8();
            }
          }
          FUN_1427b9a5c(local_c8);
        } while (local_b8 != (longlong *)0x0);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(local_c8[0] + 0x30));
      local_e0 = (undefined8 ****)0x0;
      local_d8 = *(int *)(param_1 + 0xc0);
      lVar8 = (longlong)local_d8;
      _Src = *(void **)(param_1 + 0xb8);
      if (lVar8 == 0) {
        local_d4 = 0;
      }
      else {
        FUN_1446dd670(&local_e0,local_d8,0);
        memcpy(local_e0,_Src,lVar8 * 2);
      }
      FUN_140133bee(&local_f8,&local_e0);
      FUN_144867a42(local_c8,2,&local_f8,0);
      if (local_b8 != (longlong *)0x0 || local_c8[0] != 0) {
        FUN_14103acde(local_c8,&local_f8);
        if ((undefined8 ****)local_e0 != (undefined8 ****)0x0) {
          FUN_1400020a8();
        }
        local_e0 = local_f8;
        local_d8 = (int)local_f0;
        local_d4 = local_f0._4_4_;
      }
      ppppuVar7 = (undefined8 ****)local_e0;
      if (local_d8 == 0) {
        ppppuVar7 = (undefined8 ****)&DAT_149dfb77a;
      }
      iVar3 = local_d8 + -1;
      if (local_d8 == 0) {
        iVar3 = 0;
      }
      uVar2 = FUN_144a49b4a(iVar3,ppppuVar7);
      iVar3 = FUN_149304762(local_98,uVar2,&local_e0);
      if (iVar3 != -1) {
        ppppuVar7 = (undefined8 ****)&DAT_149dfb77a;
        if (local_d8 != 0) {
          ppppuVar7 = (undefined8 ****)local_e0;
        }
        uVar9 = 0;
        uVar6 = (ulonglong)(local_d8 - 1);
        if (local_d8 == 0) {
          uVar6 = uVar9;
        }
        uVar2 = FUN_144a49b4a(uVar6,ppppuVar7);
        iVar3 = FUN_149304762(local_98,uVar2,&local_e0);
        uVar6 = (longlong)iVar3 * 0x20 + local_98[0];
        if (iVar3 == -1) {
          uVar6 = uVar9;
        }
        uVar6 = FUN_14935b100(param_1 + 200,*(undefined8 *)(uVar6 + 0x10));
        if (uVar6 != 0) {
          lVar8 = FUN_14589388c();
          if ((*(int *)(*(longlong *)(uVar6 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30)) {
            uVar9 = 0;
          }
          else {
            uVar9 = uVar6;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(uVar6);
            }
          }
        }
        *(ulonglong *)(param_1 + 0x88) = uVar9;
        FUN_144757f48(uVar9,2);
      }
      if ((undefined8 ****)local_e0 != (undefined8 ****)0x0) {
        FUN_1400020a8();
      }
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_149300c7c(local_98);
    }
  }
LAB_14935bdf5:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14935c156 FUN_14935c156 body=61 status=ok
// SIG undefined FUN_14935c156(void)

void FUN_14935c156(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)((longlong)param_1 + 0xc)) {
    FUN_141535be2(*param_1,*(undefined4 *)(param_1 + 1));
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  FUN_149365e02(param_1);
  return;
}



// FUNCTION 14935c194 FUN_14935c194 body=1043 status=ok
// SIG undefined FUN_14935c194(void)

void FUN_14935c194(longlong param_1)

{
  longlong *plVar1;
  void *_Src;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 ****ppppuVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined8 ***local_f8;
  undefined8 local_f0;
  undefined8 ***local_e0;
  int local_d8;
  undefined4 local_d4;
  longlong local_d0;
  longlong local_c8 [2];
  longlong *local_b8;
  undefined1 local_9c [4];
  longlong local_98 [4];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  cVar2 = (**(code **)(*DAT_14cc0dff8 + 0xa8))();
  if ((cVar2 != '\0') && (*(int *)(param_1 + 0x80) == 0)) {
    if (*(int *)(param_1 + 0xb0) < 1) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_128);
    }
    plVar1 = (longlong *)(param_1 + 0x78);
    FUN_147f77d6e(plVar1);
    local_78 = 0;
    local_70 = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    uVar5 = FUN_144a797b2();
    local_108 = 0;
    FUN_146123bc0(local_c8,uVar5,0,0);
    if (local_b8 != (longlong *)0x0) {
      do {
        lVar7 = *local_b8;
        if (lVar7 == 0) {
LAB_14935c34d:
          lVar7 = 0;
        }
        else {
          lVar9 = FUN_144a797b2();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar9 + 0x38) * 8) != lVar9 + 0x30)) goto LAB_14935c34d;
        }
        local_d0 = lVar7;
        lVar9 = FUN_14117aa32();
        if (((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
            lVar9 + 0x30)) {
          FUN_144750a86(local_d0,&local_e0,0,0);
          local_f0 = &local_d0;
          local_f8 = &local_e0;
          FUN_149304480(local_98,local_9c);
          if ((undefined8 ****)local_e0 != (undefined8 ****)0x0) {
            FUN_1400020a8();
          }
        }
        FUN_1427b9a5c(local_c8);
      } while (local_b8 != (longlong *)0x0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(local_c8[0] + 0x30));
    if ((longlong)*(int *)(param_1 + 0xb0) != 0) {
      lVar9 = (longlong)*(int *)(param_1 + 0xb0) << 5;
      lVar7 = *(longlong *)(param_1 + 0xa8) + 0x10;
      do {
        local_e0 = (undefined8 ****)0x0;
        local_d8 = *(int *)(lVar7 + -8);
        lVar8 = (longlong)local_d8;
        _Src = *(void **)(lVar7 + -0x10);
        if (lVar8 == 0) {
          local_d4 = 0;
        }
        else {
          FUN_1446dd670(&local_e0,local_d8,0);
          memcpy(local_e0,_Src,lVar8 * 2);
        }
        FUN_140133bee(&local_f8,&local_e0);
        FUN_144867a42(local_c8,2,&local_f8,0);
        if (local_b8 != (longlong *)0x0 || local_c8[0] != 0) {
          FUN_14103acde(local_c8,&local_f8);
          if ((undefined8 ****)local_e0 != (undefined8 ****)0x0) {
            FUN_1400020a8();
          }
          local_e0 = local_f8;
          local_d8 = (int)local_f0;
          local_d4 = local_f0._4_4_;
        }
        ppppuVar6 = (undefined8 ****)local_e0;
        if (local_d8 == 0) {
          ppppuVar6 = (undefined8 ****)&DAT_149dfb77a;
        }
        iVar4 = local_d8 + -1;
        if (local_d8 == 0) {
          iVar4 = 0;
        }
        uVar3 = FUN_144a49b4a(iVar4,ppppuVar6);
        iVar4 = FUN_149304762(local_98,uVar3,&local_e0);
        if (iVar4 == -1) {
          if ((undefined8 ****)local_e0 != (undefined8 ****)0x0) {
            FUN_1400020a8();
          }
          break;
        }
        ppppuVar6 = (undefined8 ****)&DAT_149dfb77a;
        if (local_d8 != 0) {
          ppppuVar6 = (undefined8 ****)local_e0;
        }
        iVar4 = local_d8 + -1;
        if (local_d8 == 0) {
          iVar4 = 0;
        }
        uVar3 = FUN_144a49b4a(iVar4,ppppuVar6);
        iVar4 = FUN_149304762(local_98,uVar3);
        lVar8 = 0;
        if (iVar4 != -1) {
          lVar8 = (longlong)iVar4 * 0x20 + local_98[0];
        }
        lVar8 = FUN_14935b6df(lVar7,*(undefined8 *)(lVar8 + 0x10));
        if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar8);
        }
        iVar4 = *(int *)(param_1 + 0x80);
        *(uint *)(param_1 + 0x80) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x84) < iVar4 + 1U) {
          FUN_140845902(plVar1,iVar4);
        }
        *(longlong *)(*plVar1 + (longlong)iVar4 * 8) = lVar8;
        if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar8);
        }
        if ((undefined8 ****)local_e0 != (undefined8 ****)0x0) {
          FUN_1400020a8();
        }
        lVar7 = lVar7 + 0x20;
        lVar9 = lVar9 + -0x20;
      } while (lVar9 != 0);
    }
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_149300c7c(local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14935c5c3 FUN_14935c5c3 body=148 status=ok
// SIG undefined FUN_14935c5c3(void)

undefined8 FUN_14935c5c3(undefined8 param_1)

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
  uVar1 = FUN_141092c54();
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



// FUNCTION 14935c74b FUN_14935c74b body=129 status=ok
// SIG undefined FUN_14935c74b(void)

void FUN_14935c74b(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144affaec(local_38);
  plVar1 = (longlong *)FUN_14479d2ce(param_1);
  uVar2 = FUN_14477b072(plVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935c7ce FUN_14935c7ce body=156 status=ok
// SIG undefined FUN_14935c7ce(void)

void FUN_14935c7ce(undefined8 param_1,longlong param_2)

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
  FUN_14935c86c(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935c86c FUN_14935c86c body=168 status=ok
// SIG undefined FUN_14935c86c(void)

/* WARNING: Removing unreachable block (ram,0x00014935c8f1) */

void FUN_14935c86c(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400bbfc4();
  iVar2 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar2 + 1U) {
    FUN_1406f071e((longlong *)(param_1 + 0x28),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  lVar4 = (longlong)iVar2 * 0x20;
  puVar1 = (undefined4 *)(lVar3 + lVar4);
  *puVar1 = local_40;
  puVar1[1] = uStack_3c;
  puVar1[2] = uStack_38;
  puVar1[3] = uStack_34;
  *(undefined8 *)(lVar3 + 0x10 + lVar4) = 0;
  *(undefined8 *)(lVar3 + 0x10 + lVar4) = local_30;
  *(undefined4 *)(lVar3 + 0x18 + lVar4) = (undefined4)local_28;
  *(undefined4 *)(lVar3 + 0x1c + lVar4) = local_28._4_4_;
  local_28 = 0;
  local_30 = 0;
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14935c916 FUN_14935c916 body=156 status=ok
// SIG undefined FUN_14935c916(void)

void FUN_14935c916(undefined8 param_1,longlong param_2)

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
  FUN_14935c9b4(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935c9b4 FUN_14935c9b4 body=168 status=ok
// SIG undefined FUN_14935c9b4(void)

/* WARNING: Removing unreachable block (ram,0x00014935ca39) */

void FUN_14935c9b4(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400bbfc4();
  iVar2 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar2 + 1U) {
    FUN_1406f071e((longlong *)(param_1 + 0x28),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  lVar4 = (longlong)iVar2 * 0x20;
  puVar1 = (undefined4 *)(lVar3 + lVar4);
  *puVar1 = local_40;
  puVar1[1] = uStack_3c;
  puVar1[2] = uStack_38;
  puVar1[3] = uStack_34;
  *(undefined8 *)(lVar3 + 0x10 + lVar4) = 0;
  *(undefined8 *)(lVar3 + 0x10 + lVar4) = local_30;
  *(undefined4 *)(lVar3 + 0x18 + lVar4) = (undefined4)local_28;
  *(undefined4 *)(lVar3 + 0x1c + lVar4) = local_28._4_4_;
  local_28 = 0;
  local_30 = 0;
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14935ca5e FUN_14935ca5e body=156 status=ok
// SIG undefined FUN_14935ca5e(void)

void FUN_14935ca5e(undefined8 param_1,longlong param_2)

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
  FUN_14935cafc(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935cafc FUN_14935cafc body=168 status=ok
// SIG undefined FUN_14935cafc(void)

/* WARNING: Removing unreachable block (ram,0x00014935cb81) */

void FUN_14935cafc(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400bbfc4();
  iVar2 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar2 + 1U) {
    FUN_1406f071e((longlong *)(param_1 + 0x28),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  lVar4 = (longlong)iVar2 * 0x20;
  puVar1 = (undefined4 *)(lVar3 + lVar4);
  *puVar1 = local_40;
  puVar1[1] = uStack_3c;
  puVar1[2] = uStack_38;
  puVar1[3] = uStack_34;
  *(undefined8 *)(lVar3 + 0x10 + lVar4) = 0;
  *(undefined8 *)(lVar3 + 0x10 + lVar4) = local_30;
  *(undefined4 *)(lVar3 + 0x18 + lVar4) = (undefined4)local_28;
  *(undefined4 *)(lVar3 + 0x1c + lVar4) = local_28._4_4_;
  local_28 = 0;
  local_30 = 0;
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14935cbc0 FUN_14935cbc0 body=171 status=ok
// SIG undefined FUN_14935cbc0(void)

void FUN_14935cbc0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_14935cc6c(local_28);
  *param_3 = uVar1;
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935cc6c FUN_14935cc6c body=176 status=ok
// SIG undefined FUN_14935cc6c(void)

longlong FUN_14935cc6c(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_149362cea(DAT_14c951640);
  if ((lVar1 != 0) && (1 < *(int *)(param_1 + 8))) {
    FUN_1401aea18(&local_30,param_1);
    if ((longlong *)(lVar1 + 0x28) == &local_30) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar1 + 0x28) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar1 + 0x28) = local_30;
      *(undefined4 *)(lVar1 + 0x30) = local_28;
      *(undefined4 *)(lVar1 + 0x34) = local_24;
    }
    if (*(char *)(lVar1 + 0x49) == '\x01') {
      *(undefined1 *)(lVar1 + 0x49) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935cd2a FUN_14935cd2a body=216 status=ok
// SIG undefined FUN_14935cd2a(void)

void FUN_14935cd2a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
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
  *param_3 = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935ce10 FUN_14935ce10 body=216 status=ok
// SIG undefined FUN_14935ce10(void)

void FUN_14935ce10(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
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
  *param_3 = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935ceea FUN_14935ceea body=38 status=ok
// SIG undefined FUN_14935ceea(void)

void FUN_14935ceea(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_146153af4();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14935cf10 FUN_14935cf10 body=164 status=ok
// SIG undefined FUN_14935cf10(void)

void FUN_14935cf10(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14935cfb6(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935cfb6 FUN_14935cfb6 body=366 status=ok
// SIG undefined FUN_14935cfb6(void)

undefined8 FUN_14935cfb6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x260);
  lVar2 = param_1 + 0x270;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x288) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = *(int *)(param_1 + 0x288);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c == iVar5) && (uStack_58 == lVar2)) {
    uVar6 = 0;
  }
  else {
    lVar7 = 0;
    uVar6 = 0;
    do {
      lVar4 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x18);
      if (lVar4 != 0) {
        iVar3 = *(int *)(lVar4 + 0x38);
        if (((iVar3 <= *(int *)(param_2 + 0x38)) &&
            (*(longlong **)(*(longlong *)(param_2 + 0x30) + (longlong)iVar3 * 8) ==
             (longlong *)(lVar4 + 0x30))) &&
           ((lVar7 == 0 ||
            ((*(int *)(lVar7 + 0x38) <= iVar3 &&
             (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30)))))) {
          uVar6 = *(undefined8 *)(*local_88 + (longlong)iStack_6c * 0x18 + 8);
          lVar7 = lVar4;
        }
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar5));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 14935d12e FUN_14935d12e body=615 status=ok
// SIG undefined FUN_14935d12e(void)

void FUN_14935d12e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_158 [32];
  longlong *local_138;
  longlong local_128 [3];
  undefined4 local_110;
  undefined2 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined8 uStack_a4;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_84;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  undefined8 local_50;
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_128[2] = 0;
  local_110 = 0xffffffff;
  local_10c = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  local_e0 = 1;
  local_c8 = 0;
  local_c0 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_128 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_128 + 2);
  }
  plVar2 = local_128 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_128[0] = 0;
  local_128[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_128);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_128);
  }
  local_138 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    local_138 = local_128;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14935d396(param_1,local_48,local_50,plVar2);
  *param_3 = uVar1;
  if (local_128[0] != 0) {
    FUN_1400020a8();
  }
  FUN_14935d474(local_128 + 2);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935d396 FUN_14935d396 body=221 status=ok
// SIG undefined FUN_14935d396(void)

bool FUN_14935d396(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined1 local_60;
  longlong local_50;
  longlong *local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined1 *)(param_4 + 0xc0) = 1;
  local_60 = 1;
  local_68 = param_4;
  FUN_1444ccb44(param_1,&local_50,param_2,param_3);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  FUN_149361f62(&local_50);
  FUN_149361960(local_50);
  AcquireSRWLockShared((PSRWLOCK)(local_50 + 0x68));
  ReleaseSRWLockShared((PSRWLOCK)(local_50 + 0x68));
  FUN_144affaec(param_5,local_50 + 0x58);
  iVar3 = *(int *)(local_50 + 0x50);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return iVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935d474 FUN_14935d474 body=102 status=ok
// SIG undefined FUN_14935d474(void)

void FUN_14935d474(longlong param_1)

{
  FUN_1449db362(param_1 + 0xb0);
  FUN_1449db362(param_1 + 0x90);
  FUN_1449db362(param_1 + 0x70);
  FUN_1449db362(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_140861e20(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14935d4e2 FUN_14935d4e2 body=491 status=ok
// SIG undefined FUN_14935d4e2(void)

void FUN_14935d4e2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined4 local_100;
  undefined2 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_94;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  undefined8 local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_128;
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_108 = 0;
  local_100 = 0xffffffff;
  local_fc = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_d0 = 1;
  local_b8 = 0;
  local_b0 = 0;
  local_cc = 0;
  uStack_c4 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_108);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar2 = &local_108;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14935d6ce(param_1,local_38,local_40,puVar2);
  *param_3 = uVar1;
  FUN_14935d474(&local_108);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935d6ce FUN_14935d6ce body=145 status=ok
// SIG undefined FUN_14935d6ce(void)

ulonglong FUN_14935d6ce(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 local_40;
  longlong local_38 [2];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_4 + 0xc0) = 1;
  local_40 = 2;
  local_48 = param_4;
  FUN_1444ccb44(param_1,local_38,param_2,param_3);
  FUN_149361960(local_38[0]);
  FUN_149361960(local_28);
  if (*(int *)(local_38[0] + 0x50) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)local_38 >> 8),*(int *)(local_28 + 0x50) != 0);
  }
  FUN_149361f62(local_38);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935d768 FUN_14935d768 body=491 status=ok
// SIG undefined FUN_14935d768(void)

void FUN_14935d768(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined4 local_100;
  undefined2 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_94;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  undefined8 local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_128;
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_108 = 0;
  local_100 = 0xffffffff;
  local_fc = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_d0 = 1;
  local_b8 = 0;
  local_b0 = 0;
  local_cc = 0;
  uStack_c4 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_108);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar2 = &local_108;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14935d954(param_1,local_38,local_40,puVar2);
  *param_3 = uVar1;
  FUN_14935d474(&local_108);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935d954 FUN_14935d954 body=126 status=ok
// SIG undefined FUN_14935d954(void)

bool FUN_14935d954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_4;
  FUN_149361fc6(param_1,&local_28,param_2,param_3);
  iVar3 = *(int *)(local_28 + 0x50);
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
    return iVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935d9dc FUN_14935d9dc body=491 status=ok
// SIG undefined FUN_14935d9dc(void)

void FUN_14935d9dc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined4 local_100;
  undefined2 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_94;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  undefined8 local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_128;
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_108 = 0;
  local_100 = 0xffffffff;
  local_fc = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_d0 = 1;
  local_b8 = 0;
  local_b0 = 0;
  local_cc = 0;
  uStack_c4 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_108);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar2 = &local_108;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14935dbc8(param_1,local_38,local_40,puVar2);
  *param_3 = uVar1;
  FUN_14935d474(&local_108);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935dbc8 FUN_14935dbc8 body=126 status=ok
// SIG undefined FUN_14935dbc8(void)

ulonglong FUN_14935dbc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 local_40;
  longlong local_30 [2];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_4 + 0xc0) = 0;
  local_40 = 2;
  local_48 = param_4;
  FUN_1444ccb44(param_1,local_30,param_2,param_3);
  if (*(int *)(local_30[0] + 0x50) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)local_30 >> 8),*(int *)(local_20 + 0x50) != 0);
  }
  FUN_149361f62(local_30);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935dc4a FUN_14935dc4a body=2915 status=ok
// SIG undefined FUN_14935dc4a(void)

/* WARNING: Removing unreachable block (ram,0x00014935e3d1) */
/* WARNING: Removing unreachable block (ram,0x00014935de0f) */
/* WARNING: Removing unreachable block (ram,0x00014935df39) */
/* WARNING: Removing unreachable block (ram,0x00014935e695) */
/* WARNING: Removing unreachable block (ram,0x00014935e6a7) */
/* WARNING: Removing unreachable block (ram,0x00014935de21) */
/* WARNING: Removing unreachable block (ram,0x00014935df4b) */
/* WARNING: Removing unreachable block (ram,0x00014935e3e8) */

void FUN_14935dc4a(ulonglong param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  byte bVar2;
  void *_Src;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined2 *puVar17;
  ulonglong *puVar18;
  bool bVar19;
  undefined1 auStack_1a8 [32];
  ulonglong local_188;
  ulonglong local_180;
  ulonglong local_178;
  undefined8 local_170;
  ulonglong local_160;
  undefined1 local_158 [16];
  longlong local_148 [4];
  undefined1 local_128 [16];
  undefined2 *local_118;
  ulonglong uStack_110;
  void *local_108;
  uint local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined4 local_8c;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78 [2];
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_64 = param_2;
  if (DAT_14cad8288 != (longlong *)0x0) {
    lVar12 = *(longlong *)(param_1 + 0x10);
    local_160 = param_1;
    if (*(int *)(param_3 + 8) < 2) {
      local_b8 = *(longlong *)(param_1 + 0x18);
      FUN_1400021e4(&local_b8,local_78);
    }
    else {
      local_78[0] = *(longlong *)(param_1 + 0x18);
      FUN_1400021e4(local_78,&local_b8);
      FUN_1449b8608(&local_88,param_3,&DAT_149e0635c);
      FUN_1401c7f3e(local_78,&local_88,&local_b8);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
    }
    local_88 = 0;
    uStack_80 = 0;
    FUN_140056680(local_c8,L"UniqueId");
    FUN_146b28a8a(&local_b8,local_c8,&local_64);
    lVar14 = (longlong)(int)(uint)uStack_80;
    uVar9 = (uint)uStack_80 + 1;
    uStack_80._0_4_ = uVar9;
    if (uStack_80._4_4_ < uVar9) {
      FUN_146b17dba(&local_88);
    }
    lVar14 = lVar14 * 0x30;
    *(undefined8 *)(local_88 + lVar14) = 0;
    *(longlong *)(local_88 + lVar14) = local_b8;
    *(int *)(local_88 + 8 + lVar14) = (int)local_b0;
    *(undefined4 *)(local_88 + 0xc + lVar14) = local_b0._4_4_;
    *(undefined8 *)(local_88 + 0x10 + lVar14) = 0;
    *(undefined8 *)(local_88 + 0x10 + lVar14) = local_a8;
    *(undefined4 *)(local_88 + 0x18 + lVar14) = (undefined4)local_a0;
    *(undefined4 *)(local_88 + 0x1c + lVar14) = local_a0._4_4_;
    *(undefined8 *)(local_88 + 0x20 + lVar14) = local_98;
    *(undefined1 *)(local_88 + 0x28 + lVar14) = local_90;
    *(undefined4 *)(local_88 + 0x2c + lVar14) = local_8c;
    local_a0 = 0;
    local_a8 = 0;
    local_b0 = 0;
    local_b8 = 0;
    FUN_140056680(local_d8,L"Name");
    FUN_146b175b8(&local_b8,local_d8,local_78);
    lVar14 = (longlong)(int)(uint)uStack_80;
    uStack_80._0_4_ = (uint)uStack_80 + 1;
    if (uStack_80._4_4_ < (uint)uStack_80) {
      FUN_146b17dba(&local_88);
    }
    lVar14 = lVar14 * 0x30;
    *(undefined8 *)(local_88 + lVar14) = 0;
    *(longlong *)(local_88 + lVar14) = local_b8;
    *(int *)(local_88 + 8 + lVar14) = (int)local_b0;
    *(undefined4 *)(local_88 + 0xc + lVar14) = local_b0._4_4_;
    *(undefined8 *)(local_88 + 0x10 + lVar14) = 0;
    *(undefined8 *)(local_88 + 0x10 + lVar14) = local_a8;
    *(undefined4 *)(local_88 + 0x18 + lVar14) = (undefined4)local_a0;
    *(undefined4 *)(local_88 + 0x1c + lVar14) = local_a0._4_4_;
    *(undefined8 *)(local_88 + 0x20 + lVar14) = local_98;
    *(undefined1 *)(local_88 + 0x28 + lVar14) = local_90;
    *(undefined4 *)(local_88 + 0x2c + lVar14) = local_8c;
    local_a0 = 0;
    local_a8 = 0;
    local_b0 = 0;
    local_b8 = 0;
    local_108 = *(void **)(lVar12 + 0x18);
    FUN_1400021e4(&local_108,&local_b8);
    FUN_140056680(&local_e8,L"Class");
    uVar11 = uStack_80;
    lVar14 = local_b8;
    uVar3 = local_e8;
    local_e8 = 0;
    uVar4 = (undefined4)local_e0;
    uVar5 = local_e0._4_4_;
    local_e0 = 0;
    local_b8 = 0;
    uVar6 = (int)local_b0;
    uVar7 = local_b0._4_4_;
    local_b0 = 0;
    lVar15 = (longlong)(int)(uint)uStack_80;
    uVar9 = (uint)uStack_80 + 1;
    uStack_80 = CONCAT44(uStack_80._4_4_,uVar9);
    if (uStack_80._4_4_ < uVar9) {
      FUN_146b17dba(&local_88,uVar11 & 0xffffffff);
    }
    lVar15 = lVar15 * 0x30;
    *(undefined8 *)(local_88 + lVar15) = uVar3;
    *(undefined4 *)(local_88 + 8 + lVar15) = uVar4;
    *(undefined4 *)(local_88 + 0xc + lVar15) = uVar5;
    *(longlong *)(local_88 + 0x10 + lVar15) = lVar14;
    *(undefined4 *)(local_88 + 0x18 + lVar15) = uVar6;
    *(undefined4 *)(local_88 + 0x1c + lVar15) = uVar7;
    *(undefined8 *)(local_88 + 0x20 + lVar15) = 0;
    *(undefined1 *)(local_88 + 0x28 + lVar15) = 0;
    *(undefined4 *)(local_88 + 0x2c + lVar15) = 0;
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    plVar16 = *(longlong **)(lVar12 + 0x70);
    if (plVar16 != (longlong *)0x0) {
      do {
        if (((*(byte *)((longlong)plVar16 + 0x39) & 0x20) == 0) &&
           (lVar12 = plVar16[4], FUN_1492ebee0(&local_f0), lVar12 != local_f0)) {
          lVar12 = plVar16[4];
          FUN_1492ebf04(&local_f8);
          if (lVar12 != local_f8) {
            FUN_1400021e4(plVar16 + 4,&local_108);
            lVar12 = plVar16[1];
            lVar14 = FUN_144a810c6();
            uVar11 = local_160;
            if (*(ulonglong *)(lVar14 + 8) == 0) {
              bVar19 = lVar12 != 0;
              if (lVar12 != lVar14 && bVar19) {
                do {
                  lVar12 = *(longlong *)(lVar12 + 0x30);
                  bVar19 = lVar12 != 0;
                  if (lVar12 == lVar14) break;
                } while (lVar12 != 0);
              }
              if (bVar19) goto LAB_14935e1df;
LAB_14935e219:
              lVar12 = 0;
            }
            else {
              if ((*(ulonglong *)(lVar12 + 0x18) & *(ulonglong *)(lVar14 + 8)) == 0)
              goto LAB_14935e219;
LAB_14935e1df:
              lVar12 = (**(code **)(*plVar16 + 0x220))(plVar16,local_160,0);
              if (lVar12 == 0) goto LAB_14935e219;
              lVar14 = FUN_14117aa32();
              if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(lVar14 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar14 + 0x38) * 8) != lVar14 + 0x30)) goto LAB_14935e219;
            }
            lVar14 = plVar16[1];
            lVar15 = FUN_1446e6bbc();
            if (*(ulonglong *)(lVar15 + 8) == 0) {
              bVar19 = lVar14 != 0;
              if (lVar14 != lVar15 && bVar19) {
                do {
                  lVar14 = *(longlong *)(lVar14 + 0x30);
                  bVar19 = lVar14 != 0;
                  if (lVar14 == lVar15) break;
                } while (lVar14 != 0);
              }
              if (!bVar19) goto LAB_14935e473;
LAB_14935e23b:
              iVar10 = *(int *)((longlong)plVar16 + 0x44);
              bVar2 = *(byte *)(plVar16 + 0xe);
              (**(code **)(*(longlong *)plVar16[0xf] + 0x178))();
              if (0 < *(int *)(uVar11 + 8 + (longlong)iVar10)) {
                puVar18 = (ulonglong *)((longlong)iVar10 + uVar11);
                iVar10 = *(int *)(plVar16[0xf] + 0x34);
                lVar12 = 0;
                lVar14 = 0;
                do {
                  local_118 = (undefined2 *)0x0;
                  uStack_110 = 0;
                  if ((bVar2 & 1) == 0) {
                    local_188 = *puVar18;
                  }
                  else {
                    local_188 = *puVar18;
                    if ((local_188 & 1) != 0) {
                      local_188 = ((longlong)local_188 >> 0x18) + (longlong)puVar18;
                    }
                  }
                  local_188 = local_188 + lVar12;
                  local_170 = 0;
                  local_178 = local_178 & 0xffffffff00000000;
                  local_180 = uVar11;
                  (**(code **)(*(longlong *)plVar16[0xf] + 0xf0))
                            ((longlong *)plVar16[0xf],&local_118,local_188,0);
                  FUN_140002266(local_128,L"Property%s.%s");
                  FUN_146b175b8(&local_b8,local_128);
                  uVar11 = uStack_80;
                  lVar15 = (longlong)(int)(uint)uStack_80;
                  uVar9 = (uint)uStack_80 + 1;
                  uStack_80 = CONCAT44(uStack_80._4_4_,uVar9);
                  if (uStack_80._4_4_ < uVar9) {
                    FUN_146b17dba(&local_88,uVar11 & 0xffffffff);
                  }
                  uVar11 = local_160;
                  lVar15 = lVar15 * 0x30;
                  *(undefined8 *)(local_88 + lVar15) = 0;
                  *(longlong *)(local_88 + lVar15) = local_b8;
                  *(int *)(local_88 + 8 + lVar15) = (int)local_b0;
                  *(undefined4 *)(local_88 + 0xc + lVar15) = local_b0._4_4_;
                  *(undefined8 *)(local_88 + 0x10 + lVar15) = 0;
                  *(undefined8 *)(local_88 + 0x10 + lVar15) = local_a8;
                  *(undefined4 *)(local_88 + 0x18 + lVar15) = (undefined4)local_a0;
                  *(undefined4 *)(local_88 + 0x1c + lVar15) = local_a0._4_4_;
                  *(undefined8 *)(local_88 + 0x20 + lVar15) = local_98;
                  *(undefined1 *)(local_88 + 0x28 + lVar15) = local_90;
                  *(undefined4 *)(local_88 + 0x2c + lVar15) = local_8c;
                  local_a0 = 0;
                  local_a8 = 0;
                  local_b0 = 0;
                  local_b8 = 0;
                  if (local_118 != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                  lVar14 = lVar14 + 1;
                  lVar12 = lVar12 + iVar10;
                } while (lVar14 < (int)puVar18[1]);
              }
            }
            else {
              if ((*(ulonglong *)(lVar14 + 0x18) & *(ulonglong *)(lVar15 + 8)) != 0)
              goto LAB_14935e23b;
LAB_14935e473:
              if (lVar12 == 0) {
                uVar11 = (ulonglong)*(uint *)(plVar16 + 6);
                if (0 < (int)*(uint *)(plVar16 + 6)) {
                  uVar13 = 0;
                  do {
                    _Src = local_108;
                    iVar10 = (int)uVar11;
                    local_118 = (undefined2 *)0x0;
                    lVar12 = (longlong)(int)local_100;
                    uStack_110 = CONCAT44(uStack_110._4_4_,local_100);
                    if (lVar12 == 0) {
                      uStack_110 = (ulonglong)local_100;
                    }
                    else {
                      FUN_1446dd670(&local_118,local_100,0);
                      memcpy(local_118,_Src,lVar12 * 2);
                      iVar10 = (int)plVar16[6];
                    }
                    uVar11 = local_160;
                    plVar1 = local_148 + 2;
                    if (iVar10 != 1) {
                      local_148[0] = 0;
                      local_148[1] = 0;
                      FUN_144a83b10(local_148,uVar13 & 0xffffffff);
                      FUN_140ba7826(plVar1,&DAT_149e2b508,local_148);
                      FUN_144a882a8(&local_b8,plVar1,&DAT_149e2b50c);
                      iVar10 = (int)local_b0 + -1;
                      if ((int)local_b0 == 0) {
                        iVar10 = 0;
                      }
                      FUN_1400020e8(&local_118,local_b8,iVar10);
                      if (local_b8 != 0) {
                        FUN_1400020a8();
                      }
                      if (local_148[2] != 0) {
                        FUN_1400020a8();
                      }
                      if (local_148[0] != 0) {
                        FUN_1400020a8();
                      }
                    }
                    local_148[2] = 0;
                    local_148[3] = 0;
                    lVar14 = (longlong)*(int *)((longlong)plVar16 + 0x44) + uVar11 +
                             (longlong)*(int *)((longlong)plVar16 + 0x34) * uVar13;
                    lVar12 = lVar14;
                    if (uVar11 == 0) {
                      lVar12 = 0;
                    }
                    local_188 = uVar11;
                    local_178 = 0;
                    local_180 = local_180 & 0xffffffff00000000;
                    FUN_14280c87e(plVar16,plVar1,lVar14,lVar12);
                    puVar17 = &DAT_149dfb77a;
                    if ((int)uStack_110 != 0) {
                      puVar17 = local_118;
                    }
                    FUN_140002266(local_158,L"Property%s.%s",&DAT_149dfb77a,puVar17);
                    FUN_146b175b8(&local_b8,local_158);
                    uVar11 = uStack_80;
                    lVar12 = (longlong)(int)(uint)uStack_80;
                    uVar9 = (uint)uStack_80 + 1;
                    uStack_80 = CONCAT44(uStack_80._4_4_,uVar9);
                    if (uStack_80._4_4_ < uVar9) {
                      FUN_146b17dba(&local_88,uVar11 & 0xffffffff);
                    }
                    lVar12 = lVar12 * 0x30;
                    *(undefined8 *)(local_88 + lVar12) = 0;
                    *(longlong *)(local_88 + lVar12) = local_b8;
                    *(int *)(local_88 + 8 + lVar12) = (int)local_b0;
                    *(undefined4 *)(local_88 + 0xc + lVar12) = local_b0._4_4_;
                    *(undefined8 *)(local_88 + 0x10 + lVar12) = 0;
                    *(undefined8 *)(local_88 + 0x10 + lVar12) = local_a8;
                    *(undefined4 *)(local_88 + 0x18 + lVar12) = (undefined4)local_a0;
                    *(undefined4 *)(local_88 + 0x1c + lVar12) = local_a0._4_4_;
                    *(undefined8 *)(local_88 + 0x20 + lVar12) = local_98;
                    *(undefined1 *)(local_88 + 0x28 + lVar12) = local_90;
                    *(undefined4 *)(local_88 + 0x2c + lVar12) = local_8c;
                    local_a0 = 0;
                    local_a8 = 0;
                    local_b0 = 0;
                    local_b8 = 0;
                    if (local_148[2] != 0) {
                      FUN_1400020a8();
                    }
                    if (local_118 != (undefined2 *)0x0) {
                      FUN_1400020a8();
                    }
                    uVar13 = uVar13 + 1;
                    uVar11 = (ulonglong)(int)plVar16[6];
                  } while ((longlong)uVar13 < (longlong)uVar11);
                }
              }
              else {
                cVar8 = FUN_1468ff1d8(lVar12,uVar11);
                if (cVar8 != '\0') {
                  FUN_14935dc4a(lVar12,local_64);
                }
              }
            }
            if (local_108 != (void *)0x0) {
              FUN_1400020a8();
            }
          }
        }
        plVar16 = (longlong *)plVar16[9];
      } while (plVar16 != (longlong *)0x0);
    }
    FUN_140056680(&local_b8,L"Interchange.Usage.Import.Pipeline");
    (**(code **)(*DAT_14cad8288 + 0x78))(DAT_14cad8288,&local_b8,&local_88);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    FUN_146b17e4e(local_88,uStack_80 & 0xffffffff);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935e7ae FUN_14935e7ae body=695 status=ok
// SIG undefined FUN_14935e7ae(void)

longlong * FUN_14935e7ae(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  void *_Src;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_128 [40];
  longlong *local_100;
  longlong *local_f8;
  void *local_f0;
  int local_e8;
  undefined4 local_e4;
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined **local_b8;
  longlong *local_b0;
  undefined1 local_a8 [8];
  int local_a0;
  undefined4 local_98;
  int local_94;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_78 = 0;
  uStack_70 = 0;
  iVar4 = 0;
  local_f8 = param_1;
  FUN_145fe072c(&local_b8,&local_78,0);
  local_b8 = &PTR_FUN_14bc67fd0;
  FUN_14683e51e(&local_b8);
  local_100 = param_2 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  local_60 = local_100;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_68);
    iVar4 = (int)param_2[5];
  }
  local_c8 = local_58;
  iStack_c4 = iStack_54;
  local_c0 = local_50;
  local_bc = local_4c;
  local_d8 = local_68;
  local_d0 = local_60;
  local_e0 = param_2;
  if ((iStack_54 != iVar4) || (local_60 != local_100)) {
    do {
      lVar1 = *local_e0;
      lVar5 = (longlong)iStack_c4 * 0x20;
      FUN_145928344(&local_b8);
      local_f0 = (void *)0x0;
      local_e8 = *(int *)(lVar1 + 8 + lVar5);
      lVar3 = (longlong)local_e8;
      _Src = *(void **)(lVar1 + lVar5);
      if (lVar3 == 0) {
        local_e4 = 0;
      }
      else {
        FUN_1446dd670(&local_f0,local_e8,0);
        memcpy(local_f0,_Src,lVar3 * 2);
      }
      FUN_146b395f0(&local_b8,L"MessageKey",&local_f0);
      FUN_14935ea66(&local_b8,*(undefined4 *)(lVar1 + lVar5 + 0x10));
      local_94 = local_94 + -1;
      local_68 = CONCAT62(local_68._2_6_,0x7d);
      (**(code **)(*local_b0 + 0x170))(local_b0,&local_68,2);
      local_a0 = local_a0 + -1;
      FUN_14047c610(local_a8);
      local_98 = 3;
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (local_e0 != param_2 || (local_d0 != local_100 || iStack_c4 != iVar4));
  }
  FUN_1459282dc(&local_b8);
  FUN_141360b74(&local_b8);
  plVar2 = local_f8;
  *local_f8 = local_78;
  local_78 = 0;
  *(undefined4 *)(local_f8 + 1) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)local_f8 + 0xc) = uStack_70._4_4_;
  uStack_70 = 0;
  FUN_145a10eee(&local_b8);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return plVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935ea66 FUN_14935ea66 body=189 status=ok
// SIG undefined FUN_14935ea66(void)

void FUN_14935ea66(longlong param_1,int param_2)

{
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined4 local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  ulonglong *local_68;
  char local_60;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_146b551be(param_1,L"MessageCount");
  local_78 = local_58;
  local_60 = '\0';
  local_68 = &local_18;
  local_70 = local_78;
  FUN_140212e80(&local_78,L"%lld",(longlong)param_2);
  local_88 = local_78;
  local_80 = (undefined4)((ulonglong)((longlong)local_70 - (longlong)local_78) >> 1);
  FUN_145d3640c(*(undefined8 *)(param_1 + 8));
  if (local_60 == '\x01') {
    FUN_1400020a8(local_78);
  }
  *(undefined4 *)(param_1 + 0x20) = 8;
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935eb24 FUN_14935eb24 body=457 status=ok
// SIG undefined FUN_14935eb24(void)

ulonglong FUN_14935eb24(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  bool bVar3;
  bool bVar4;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68;
  ulonglong uStack_60;
  longlong *local_58;
  undefined4 local_50;
  undefined2 *local_48;
  int local_40;
  int local_3c;
  longlong *local_38;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = (longlong *)*param_1;
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 8))();
  }
  local_50 = (undefined4)param_1[1];
  local_68 = 0;
  uStack_60 = 0;
  FUN_1467cf0a2(param_1,&local_68);
  if (0 < (int)uStack_60) {
    FUN_1467d4dd8(local_68 + 0x10,&local_38);
    FUN_140008f88(&local_58,&local_38);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  FUN_1467ceeb6(&local_38,&local_58);
  FUN_1467cef72(&local_48,&local_58);
  bVar3 = local_2c != -1;
  bVar4 = local_3c != -1;
  if (bVar4 && bVar3) {
    puVar2 = &DAT_149dfb77a;
    if (local_40 != 0) {
      puVar2 = local_48;
    }
    plVar1 = (longlong *)&DAT_149dfb77a;
    if (local_30 != 0) {
      plVar1 = local_38;
    }
    FUN_140002266(&local_78,L"%s_%s",plVar1,puVar2);
  }
  else {
    FUN_140056680(&local_78,L"UnknownError");
  }
  if (&local_78 == param_2) {
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_78;
    local_78 = 0;
    *(undefined4 *)(param_2 + 1) = local_70;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_6c;
  }
  if ((local_3c != -1) && (local_48 != (undefined2 *)0x0)) {
    FUN_1400020a8();
  }
  if ((local_2c != -1) && (local_38 != (longlong *)0x0)) {
    FUN_1400020a8();
  }
  FUN_149366099(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)&local_58 >> 8),bVar4 && bVar3) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935ecee FUN_14935ecee body=86 status=ok
// SIG undefined FUN_14935ecee(void)

longlong * FUN_14935ecee(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_1 = 0;
  uVar1 = FUN_146153af4();
  lVar2 = FUN_14935ed44(uVar1,param_2);
  if (lVar2 != 0) {
    FUN_1401924dc(lVar2);
  }
  if ((*param_1 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  *param_1 = lVar2;
  return param_1;
}



// FUNCTION 14935ed44 FUN_14935ed44 body=436 status=ok
// SIG undefined FUN_14935ed44(void)

longlong FUN_14935ed44(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x210);
  lVar2 = param_1 + 0x220;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x238) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar7 = *(int *)(param_1 + 0x238);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c == iVar7) && (uStack_58 == lVar2)) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(*local_88 + (longlong)iStack_6c * 0x10);
      plVar6 = (longlong *)plVar3[0x22];
      if (plVar6 == (longlong *)0x0) {
        (**(code **)(*plVar3 + 1000))(plVar3);
        plVar6 = (longlong *)plVar3[0x22];
      }
      cVar4 = (**(code **)(*plVar6 + 0x2a0))(plVar6,param_2);
      if (cVar4 != '\0') {
        local_98 = 0;
        uStack_90 = 0;
        local_a0 = 0;
        local_a8 = 0;
        lVar5 = FUN_149362e2d(DAT_14c951640,plVar3,0,0);
        if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(param_2);
        }
        *(longlong *)(lVar5 + 0x30) = param_2;
        break;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar7));
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 14935eefa FUN_14935eefa body=774 status=ok
// SIG undefined FUN_14935eefa(void)

undefined8 * FUN_14935eefa(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 1) = 0;
  FUN_1405bceb4();
  *param_1 = &PTR_FUN_14bc66590;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined1 *)((longlong)param_1 + 0x122) = 0;
  memset(param_1 + 3,0,0xa0);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x29) = 1;
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14bc68170;
  FUN_14936154e(puVar1 + 2);
  param_1[0x2a] = puVar1 + 2;
  param_1[0x2b] = puVar1;
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14bc68170;
  FUN_14936154e(puVar1 + 2);
  param_1[0x2c] = puVar1 + 2;
  param_1[0x2d] = puVar1;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x2f),4000);
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x48),4000);
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x57));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x57),4000);
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x66));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x66),4000);
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  *(undefined8 *)((longlong)param_1 + 900) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x38c) = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x75));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x75),4000);
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x404) = 0;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  LOCK();
  *(undefined1 *)(param_1 + 0x2e) = 0;
  UNLOCK();
  if (DAT_14cc0e118 == 0) {
    lVar2 = FUN_146153af4();
    FUN_1447f69b6(lVar2 + 0x70);
  }
  LOCK();
  DAT_14cc0e118 = DAT_14cc0e118 + 1;
  UNLOCK();
  return param_1;
}



// FUNCTION 14935f200 FUN_14935f200 body=760 status=ok
// SIG undefined FUN_14935f200(void)

void FUN_14935f200(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_14bc66590;
  FUN_14935f4f8();
  LOCK();
  DAT_14cc0e118 = DAT_14cc0e118 + -1;
  UNLOCK();
  if (DAT_14cc0e118 == 0) {
    lVar4 = FUN_146153af4();
    FUN_1447f69b6(lVar4 + 0x88);
    FUN_146153af4();
    LOCK();
    DAT_14c765120 = 0xff;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x83) = 0;
  if (param_1[0x82] != 0) {
    FUN_1400020a8();
  }
  FUN_1493651ba(param_1 + 0x7a);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x75));
  *(undefined4 *)(param_1 + 0x74) = 0;
  if (param_1[0x73] != 0) {
    FUN_1400020a8();
  }
  FUN_1493651ba(param_1 + 0x6b);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x66));
  *(undefined4 *)(param_1 + 0x65) = 0;
  if (param_1[100] != 0) {
    FUN_1400020a8();
  }
  FUN_149365328(param_1 + 0x5c);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x57));
  *(undefined4 *)(param_1 + 0x56) = 0;
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  FUN_149365496(param_1 + 0x4d);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x47) = 0;
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_140a119f4(param_1 + 0x3e);
  *(undefined4 *)(param_1 + 0x3d) = 0;
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  FUN_140a119f4(param_1 + 0x34);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f));
  plVar3 = (longlong *)param_1[0x2d];
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
  plVar3 = (longlong *)param_1[0x2b];
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
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1493661d4(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1);
  return;
}



// FUNCTION 14935f4f8 FUN_14935f4f8 body=1117 status=ok
// SIG undefined FUN_14935f4f8(void)

void FUN_14935f4f8(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  longlong local_90;
  uint local_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 *local_78;
  longlong **local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar7 = *(longlong *)(param_1 + 0x28);
  iVar6 = *(int *)(param_1 + 0x30);
  uVar5 = 0;
  if ((longlong)iVar6 != 0) {
    lVar9 = 0;
    do {
      local_78 = &LAB_1444d0746;
      local_70 = &local_a0;
      FUN_1492f3f94(*(undefined8 *)(lVar7 + lVar9),&local_78);
      uVar1 = *(uint *)(*(longlong *)(lVar7 + lVar9) + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      FUN_14482b126(lVar3,0x4000000);
      FUN_14472eae2(*(undefined8 *)(lVar7 + lVar9),2);
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar6 * 8 != lVar9);
    uVar5 = *(undefined4 *)(param_1 + 0x30);
    lVar7 = *(longlong *)(param_1 + 0x28);
  }
  FUN_1493661d4(lVar7,uVar5);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_14936749a(param_1 + 0x28);
  }
  iVar6 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar6 != 0) {
    lVar7 = *(longlong *)(param_1 + 0x38);
    lVar9 = 0;
    do {
      lVar3 = *(longlong *)(lVar7 + lVar9);
      if (lVar3 != 0) {
        uVar1 = *(uint *)(lVar3 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        FUN_14482b126(lVar4,0x40000000);
        FUN_14472eae2(lVar3,2);
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar6 * 8 != lVar9);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_1493674ca(param_1 + 0x38);
  }
  iVar6 = *(int *)(param_1 + 0x50);
  if ((longlong)iVar6 != 0) {
    lVar7 = *(longlong *)(param_1 + 0x48);
    lVar9 = 0;
    do {
      plVar2 = *(longlong **)(lVar7 + lVar9);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x2d8))(plVar2);
        uVar1 = *(uint *)((longlong)plVar2 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar3 = 0;
        }
        FUN_14482b126(lVar3,0x40000000);
        FUN_14472eae2(plVar2,2);
        uVar1 = *(uint *)((longlong)plVar2 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar3 = 0;
        }
        FUN_14482b126(lVar3,0x4000000);
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar6 * 8 != lVar9);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_1493674fa(param_1 + 0x48);
  }
  iVar6 = *(int *)(param_1 + 0x60);
  if ((longlong)iVar6 != 0) {
    lVar7 = *(longlong *)(param_1 + 0x58);
    lVar9 = 0;
    do {
      lVar3 = *(longlong *)(lVar7 + lVar9);
      if (lVar3 != 0) {
        uVar1 = *(uint *)(lVar3 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        FUN_14482b126(lVar4,0x40000000);
        FUN_14472eae2(lVar3,2);
        uVar1 = *(uint *)(lVar3 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar3 = 0;
        }
        FUN_14482b126(lVar3,0x4000000);
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar6 * 8 != lVar9);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 100) != 0) {
    FUN_14936752a(param_1 + 0x58);
  }
  plVar2 = (longlong *)(param_1 + 0x2e0);
  lVar7 = param_1 + 0x2f0;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar6 = 0;
  local_60 = lVar7;
  if (*(int *)(param_1 + 0x308) != 0) {
    FUN_1449c0562(&local_68);
    iVar6 = *(int *)(param_1 + 0x308);
  }
  local_88 = local_58;
  iStack_84 = iStack_54;
  local_80 = local_50;
  local_7c = local_4c;
  local_98 = local_68;
  local_90 = local_60;
  local_a0 = plVar2;
  if ((iStack_54 != iVar6) || (local_60 != lVar7)) {
    do {
      lVar9 = *(longlong *)(*local_a0 + 0x10 + (longlong)iStack_84 * 0x20);
      if (lVar9 != 0) {
        uVar1 = *(uint *)(lVar9 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        plVar8 = (longlong *)(*local_a0 + (longlong)iStack_84 * 0x20 + 0x10);
        FUN_14482b126(lVar9,0x40000000);
        FUN_14472eae2(*plVar8,2);
        uVar1 = *(uint *)(*plVar8 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        FUN_14482b126(lVar9,0x4000000);
      }
      local_88 = local_88 & ~local_98._4_4_;
      FUN_1449c0562(&local_98);
    } while (local_a0 != plVar2 || (local_90 != lVar7 || iStack_84 != iVar6));
  }
  FUN_14936755a(plVar2);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935f956 FUN_14935f956 body=124 status=ok
// SIG undefined FUN_14935f956(void)

void FUN_14935f956(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x90))
            (param_2,*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40),0,0);
  (**(code **)(*param_2 + 0x90))
            (param_2,*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50),0,0);
  (**(code **)(*param_2 + 0x90))
            (param_2,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60),0,0);
  FUN_14935f9d2(param_2,param_1 + 0x2e0);
  return;
}



// FUNCTION 14935f9d2 FUN_14935f9d2 body=269 status=ok
// SIG undefined FUN_14935f9d2(void)

void FUN_14935f9d2(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_2 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar2 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar2 = (int)param_2[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_2;
  if ((iStack_3c != iVar2) || (uStack_48 != plVar1)) {
    do {
      (**(code **)(*param_1 + 0x88))(param_1,*local_78 + (longlong)iStack_5c * 0x20 + 0x10,0,0);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_2 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar2));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935fae0 FUN_14935fae0 body=141 status=ok
// SIG undefined FUN_14935fae0(void)

ulonglong FUN_14935fae0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x240));
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  uVar7 = 0;
  uVar5 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar5 = uVar7;
  }
  uVar1 = FUN_144a49b4a(uVar5,puVar6);
  iVar2 = FUN_149366214((longlong *)(param_1 + 0x268),uVar1,param_2);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x268);
    puVar4 = (ulonglong *)(lVar3 + 0x10);
    if (puVar4 == (ulonglong *)0x0 || lVar3 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *puVar4;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x240));
  return uVar7;
}



// FUNCTION 14935fb6e FUN_14935fb6e body=180 status=ok
// SIG undefined FUN_14935fb6e(void)

void FUN_14935fb6e(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_3;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x240));
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
  iVar3 = FUN_149366214(param_1 + 0x268,uVar2,param_2);
  if (iVar3 == -1) {
    local_30 = &local_40;
    local_38 = param_2;
    FUN_1493662e0(param_1 + 0x268,local_24,&local_38,0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x240));
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935fc24 FUN_14935fc24 body=141 status=ok
// SIG undefined FUN_14935fc24(void)

ulonglong FUN_14935fc24(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b8));
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  uVar7 = 0;
  uVar5 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar5 = uVar7;
  }
  uVar1 = FUN_144a49b4a(uVar5,puVar6);
  iVar2 = FUN_14936684a((longlong *)(param_1 + 0x2e0),uVar1,param_2);
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x2e0);
    puVar4 = (ulonglong *)(lVar3 + 0x10);
    if (puVar4 == (ulonglong *)0x0 || lVar3 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *puVar4;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b8));
  return uVar7;
}



// FUNCTION 14935fcb2 FUN_14935fcb2 body=209 status=ok
// SIG undefined FUN_14935fcb2(void)

void FUN_14935fcb2(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 *local_40;
  longlong *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b8));
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
  iVar3 = FUN_14936684a(param_1 + 0x2e0,uVar2,param_2);
  if (iVar3 == -1) {
    local_48 = param_3;
    if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_3);
    }
    local_38 = &local_48;
    local_40 = param_2;
    FUN_149366916(param_1 + 0x2e0,local_2c,&local_40,0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b8));
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935fd84 FUN_14935fd84 body=127 status=ok
// SIG undefined FUN_14935fd84(void)

undefined8 FUN_14935fd84(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x330));
  uVar1 = FUN_149366e98(param_1 + 0x358,param_2,&local_2c);
  uVar1 = FUN_14935fe04(uVar1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x330));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14935fe04 FUN_14935fe04 body=59 status=ok
// SIG undefined FUN_14935fe04(void)

longlong FUN_14935fe04(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_149367414(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_149367401(lVar2);
  return lVar2;
}



// FUNCTION 14935fe40 FUN_14935fe40 body=294 status=ok
// SIG undefined FUN_14935fe40(void)

longlong FUN_14935fe40(longlong param_1,uint param_2,longlong *param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x330));
  if (*(int *)(param_1 + 0x360) != *(int *)(param_1 + 0x38c)) {
    lVar9 = param_1 + 0x390;
    if (*(longlong *)(param_1 + 0x398) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x398);
    }
    iVar4 = *(int *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0x3a0) - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x358);
      lVar8 = 0;
      iVar7 = iVar4;
      do {
        if (*(uint *)(lVar9 + (longlong)iVar7 * 0x20) == param_2) goto LAB_14935ff05;
        iVar7 = *(int *)((longlong)iVar7 * 0x20 + lVar9 + 0x18);
      } while (iVar7 != -1);
      goto LAB_14935fe76;
    }
  }
  goto LAB_14935fe74;
  while (iVar4 = *(int *)(lVar5 + 0x18), iVar4 != -1) {
LAB_14935ff05:
    lVar5 = lVar9 + (longlong)iVar4 * 0x20;
    if (*(uint *)(lVar9 + (longlong)iVar4 * 0x20) == param_2) goto LAB_14935ff19;
  }
  lVar5 = 0;
LAB_14935ff19:
  if ((longlong)*(int *)(lVar5 + 0x10) != 0) {
    lVar8 = *(longlong *)(lVar5 + 8);
    lVar9 = (longlong)*(int *)(lVar5 + 0x10) << 5;
    do {
      pcVar1 = (code *)*param_3;
      plVar6 = (longlong *)param_3[2];
      if ((longlong *)param_3[2] == (longlong *)0x0) {
        plVar6 = param_3 + 4;
      }
      uVar3 = (**(code **)(*plVar6 + 8))();
      cVar2 = (*pcVar1)(uVar3,lVar8);
      if (cVar2 != '\0') goto LAB_14935fe76;
      lVar8 = lVar8 + 0x20;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
LAB_14935fe74:
  lVar8 = 0;
LAB_14935fe76:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x330));
  if (*param_3 != 0) {
    plVar6 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  return lVar8;
}



// FUNCTION 14935ff66 FUN_14935ff66 body=257 status=ok
// SIG undefined FUN_14935ff66(void)

void FUN_14935ff66(longlong param_1,uint param_2,longlong *param_3)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x330));
  if (*(int *)(param_1 + 0x360) != *(int *)(param_1 + 0x38c)) {
    lVar2 = param_1 + 0x390;
    if (*(longlong *)(param_1 + 0x398) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x398);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x3a0) - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x358);
      iVar6 = iVar4;
      do {
        if (*(uint *)(lVar2 + (longlong)iVar6 * 0x20) == param_2) goto LAB_14936001f;
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + lVar2 + 0x18);
      } while (iVar6 != -1);
    }
  }
  goto LAB_14935ff97;
  while (iVar4 = *(int *)(lVar7 + 0x18), iVar4 != -1) {
LAB_14936001f:
    lVar7 = lVar2 + (longlong)iVar4 * 0x20;
    if (*(uint *)(lVar2 + (longlong)iVar4 * 0x20) == param_2) goto LAB_14936003e;
  }
  lVar7 = 0;
LAB_14936003e:
  pcVar1 = (code *)*param_3;
  plVar5 = param_3 + 4;
  if ((longlong *)param_3[2] != (longlong *)0x0) {
    plVar5 = (longlong *)param_3[2];
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar3,lVar7 + 8);
LAB_14935ff97:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x330));
  if (*param_3 == 0) {
    return;
  }
  plVar5 = param_3 + 4;
  if ((longlong *)param_3[2] != (longlong *)0x0) {
    plVar5 = (longlong *)param_3[2];
  }
                    /* WARNING: Could not recover jumptable at 0x00014935ffc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x10))(plVar5);
  return;
}



// FUNCTION 149360068 FUN_149360068 body=388 status=ok
// SIG undefined FUN_149360068(void)

void FUN_149360068(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = (LPCRITICAL_SECTION)(param_1 + 0x330);
  EnterCriticalSection(local_98);
  plVar7 = (longlong *)(param_1 + 0x358);
  lVar1 = param_1 + 0x368;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar1;
  if (*(int *)(param_1 + 0x380) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar6 = *(int *)(param_1 + 0x380);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar7;
  if ((iStack_54 != iVar6) || (uStack_60 != lVar1)) {
    do {
      puVar2 = (undefined4 *)(*local_90 + (longlong)iStack_74 * 0x20);
      local_68 = CONCAT44(local_68._4_4_,*puVar2);
      pcVar3 = (code *)*param_2;
      plVar5 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar5 = param_2 + 4;
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar3)(uVar4,&local_68,puVar2 + 2);
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar7 || (CONCAT44(uStack_7c,uStack_80) != lVar1 || iStack_74 != iVar6));
  }
  LeaveCriticalSection(local_98);
  if (*param_2 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493601ee FUN_1493601ee body=127 status=ok
// SIG undefined FUN_1493601ee(void)

undefined8 FUN_1493601ee(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a8));
  uVar1 = FUN_149366e98(param_1 + 0x3d0,param_2,&local_2c);
  uVar1 = FUN_14935fe04(uVar1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a8));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14936026e FUN_14936026e body=294 status=ok
// SIG undefined FUN_14936026e(void)

longlong FUN_14936026e(longlong param_1,uint param_2,longlong *param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a8));
  if (*(int *)(param_1 + 0x3d8) != *(int *)(param_1 + 0x404)) {
    lVar9 = param_1 + 0x408;
    if (*(longlong *)(param_1 + 0x410) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x410);
    }
    iVar4 = *(int *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0x418) - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x3d0);
      lVar8 = 0;
      iVar7 = iVar4;
      do {
        if (*(uint *)(lVar9 + (longlong)iVar7 * 0x20) == param_2) goto LAB_149360333;
        iVar7 = *(int *)((longlong)iVar7 * 0x20 + lVar9 + 0x18);
      } while (iVar7 != -1);
      goto LAB_1493602a4;
    }
  }
  goto LAB_1493602a2;
  while (iVar4 = *(int *)(lVar5 + 0x18), iVar4 != -1) {
LAB_149360333:
    lVar5 = lVar9 + (longlong)iVar4 * 0x20;
    if (*(uint *)(lVar9 + (longlong)iVar4 * 0x20) == param_2) goto LAB_149360347;
  }
  lVar5 = 0;
LAB_149360347:
  if ((longlong)*(int *)(lVar5 + 0x10) != 0) {
    lVar8 = *(longlong *)(lVar5 + 8);
    lVar9 = (longlong)*(int *)(lVar5 + 0x10) << 5;
    do {
      pcVar1 = (code *)*param_3;
      plVar6 = (longlong *)param_3[2];
      if ((longlong *)param_3[2] == (longlong *)0x0) {
        plVar6 = param_3 + 4;
      }
      uVar3 = (**(code **)(*plVar6 + 8))();
      cVar2 = (*pcVar1)(uVar3,lVar8);
      if (cVar2 != '\0') goto LAB_1493602a4;
      lVar8 = lVar8 + 0x20;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
LAB_1493602a2:
  lVar8 = 0;
LAB_1493602a4:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a8));
  if (*param_3 != 0) {
    plVar6 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  return lVar8;
}



// FUNCTION 149360394 FUN_149360394 body=257 status=ok
// SIG undefined FUN_149360394(void)

void FUN_149360394(longlong param_1,uint param_2,longlong *param_3)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a8));
  if (*(int *)(param_1 + 0x3d8) != *(int *)(param_1 + 0x404)) {
    lVar2 = param_1 + 0x408;
    if (*(longlong *)(param_1 + 0x410) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x410);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x418) - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x3d0);
      iVar6 = iVar4;
      do {
        if (*(uint *)(lVar2 + (longlong)iVar6 * 0x20) == param_2) goto LAB_14936044d;
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + lVar2 + 0x18);
      } while (iVar6 != -1);
    }
  }
  goto LAB_1493603c5;
  while (iVar4 = *(int *)(lVar7 + 0x18), iVar4 != -1) {
LAB_14936044d:
    lVar7 = lVar2 + (longlong)iVar4 * 0x20;
    if (*(uint *)(lVar2 + (longlong)iVar4 * 0x20) == param_2) goto LAB_14936046c;
  }
  lVar7 = 0;
LAB_14936046c:
  pcVar1 = (code *)*param_3;
  plVar5 = param_3 + 4;
  if ((longlong *)param_3[2] != (longlong *)0x0) {
    plVar5 = (longlong *)param_3[2];
  }
  uVar3 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar3,lVar7 + 8);
LAB_1493603c5:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a8));
  if (*param_3 == 0) {
    return;
  }
  plVar5 = param_3 + 4;
  if ((longlong *)param_3[2] != (longlong *)0x0) {
    plVar5 = (longlong *)param_3[2];
  }
                    /* WARNING: Could not recover jumptable at 0x0001493603f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x10))(plVar5);
  return;
}



// FUNCTION 149360496 FUN_149360496 body=388 status=ok
// SIG undefined FUN_149360496(void)

void FUN_149360496(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = (LPCRITICAL_SECTION)(param_1 + 0x3a8);
  EnterCriticalSection(local_98);
  plVar7 = (longlong *)(param_1 + 0x3d0);
  lVar1 = param_1 + 0x3e0;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar1;
  if (*(int *)(param_1 + 0x3f8) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar6 = *(int *)(param_1 + 0x3f8);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar7;
  if ((iStack_54 != iVar6) || (uStack_60 != lVar1)) {
    do {
      puVar2 = (undefined4 *)(*local_90 + (longlong)iStack_74 * 0x20);
      local_68 = CONCAT44(local_68._4_4_,*puVar2);
      pcVar3 = (code *)*param_2;
      plVar5 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar5 = param_2 + 4;
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar3)(uVar4,&local_68,puVar2 + 2);
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar7 || (CONCAT44(uStack_7c,uStack_80) != lVar1 || iStack_74 != iVar6));
  }
  LeaveCriticalSection(local_98);
  if (*param_2 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14936061c FUN_14936061c body=194 status=ok
// SIG undefined FUN_14936061c(void)

ulonglong FUN_14936061c(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_e8 [47];
  char local_b9;
  undefined1 *local_b8;
  undefined8 local_a8;
  undefined **local_98;
  char *local_90;
  longlong local_88;
  undefined1 *local_78;
  undefined8 local_68;
  undefined **local_58;
  char *local_50;
  longlong local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    local_b9 = '\0';
    local_68 = 0;
    local_58 = &PTR_LAB_14bc68190;
    local_78 = &LAB_1444d06ca;
    local_50 = &local_b9;
    local_48 = param_2;
    uVar1 = FUN_149360068();
    uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
    if (local_b9 == '\0') {
      local_a8 = 0;
      local_98 = &PTR_LAB_14bc68190;
      local_b8 = &LAB_1444d06ca;
      local_90 = &local_b9;
      local_88 = param_2;
      uVar1 = FUN_149360496(param_1);
      uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),local_b9);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar2 & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493606e0 FUN_1493606e0 body=2469 status=ok
// SIG undefined FUN_1493606e0(void)

/* WARNING: Removing unreachable block (ram,0x000149360e8b) */
/* WARNING: Removing unreachable block (ram,0x000149360981) */
/* WARNING: Removing unreachable block (ram,0x000149360855) */
/* WARNING: Removing unreachable block (ram,0x000149360ccd) */
/* WARNING: Removing unreachable block (ram,0x000149360fa7) */
/* WARNING: Removing unreachable block (ram,0x000149360e9a) */
/* WARNING: Removing unreachable block (ram,0x000149360993) */
/* WARNING: Removing unreachable block (ram,0x000149360867) */
/* WARNING: Removing unreachable block (ram,0x000149360cdf) */
/* WARNING: Removing unreachable block (ram,0x000149360fb6) */

void FUN_1493606e0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_1b8 [40];
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  longlong local_170 [2];
  longlong local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined1 local_138;
  undefined4 local_134;
  longlong **local_130;
  undefined8 *local_128;
  undefined1 local_120 [20];
  int local_10c;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  longlong lStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  longlong *local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (DAT_14cad8288 != (longlong *)0x0) {
    local_e8 = 0;
    uStack_e0 = 0;
    FUN_140056680(local_f8,L"UniqueId");
    FUN_146b172be(&local_88,local_f8,param_1 + 0x14);
    lVar6 = (longlong)(int)(uint)uStack_e0;
    uVar3 = (uint)uStack_e0 + 1;
    uStack_e0._0_4_ = uVar3;
    if (uStack_e0._4_4_ < uVar3) {
      FUN_146b17dba(&local_e8);
    }
    lVar6 = lVar6 * 0x30;
    *(undefined8 *)(local_e8 + lVar6) = 0;
    *(longlong **)(local_e8 + lVar6) = local_88;
    *(undefined4 *)(local_e8 + 8 + lVar6) = (undefined4)uStack_80;
    *(uint *)(local_e8 + 0xc + lVar6) = uStack_80._4_4_;
    *(undefined8 *)(local_e8 + 0x10 + lVar6) = 0;
    *(longlong *)(local_e8 + 0x10 + lVar6) = local_78;
    *(uint *)(local_e8 + 0x18 + lVar6) = (uint)local_70;
    *(int *)(local_e8 + 0x1c + lVar6) = local_70._4_4_;
    *(undefined8 *)(local_e8 + 0x20 + lVar6) = local_68;
    *(undefined1 *)(local_e8 + 0x28 + lVar6) = (undefined1)local_60;
    *(undefined4 *)(local_e8 + 0x2c + lVar6) = (undefined4)local_5c;
    local_70 = 0;
    local_78 = 0;
    uStack_80 = 0;
    local_88 = (longlong *)0x0;
    FUN_140056680(local_108,L"IsCanceled");
    FUN_149361086(&local_88,local_108,(byte *)(param_1 + 0x170));
    lVar6 = (longlong)(int)(uint)uStack_e0;
    uStack_e0._0_4_ = (uint)uStack_e0 + 1;
    if (uStack_e0._4_4_ < (uint)uStack_e0) {
      FUN_146b17dba(&local_e8);
    }
    lVar6 = lVar6 * 0x30;
    *(undefined8 *)(local_e8 + lVar6) = 0;
    *(longlong **)(local_e8 + lVar6) = local_88;
    *(undefined4 *)(local_e8 + 8 + lVar6) = (undefined4)uStack_80;
    *(uint *)(local_e8 + 0xc + lVar6) = uStack_80._4_4_;
    *(undefined8 *)(local_e8 + 0x10 + lVar6) = 0;
    *(longlong *)(local_e8 + 0x10 + lVar6) = local_78;
    *(uint *)(local_e8 + 0x18 + lVar6) = (uint)local_70;
    *(int *)(local_e8 + 0x1c + lVar6) = local_70._4_4_;
    *(undefined8 *)(local_e8 + 0x20 + lVar6) = local_68;
    *(undefined1 *)(local_e8 + 0x28 + lVar6) = (undefined1)local_60;
    *(undefined4 *)(local_e8 + 0x2c + lVar6) = (undefined4)local_5c;
    local_70 = 0;
    local_78 = 0;
    uStack_80 = 0;
    local_88 = (longlong *)0x0;
    if ((*(byte *)(param_1 + 0x170) & 1) == 0) {
      iVar5 = 0;
      local_10c = 0;
      plVar1 = (longlong *)(param_1 + 0x358);
      lVar6 = param_1 + 0x368;
      local_d8 = 0x100000000;
      local_c8._0_4_ = 0xffffffff;
      local_c8._4_4_ = 0;
      local_c0 = 0;
      lStack_d0 = lVar6;
      if (*(int *)(param_1 + 0x380) != 0) {
        FUN_1449c0562(&local_d8);
        iVar5 = *(int *)(param_1 + 0x380);
      }
      local_70._0_4_ = (uint)local_c8;
      local_70._4_4_ = local_c8._4_4_;
      local_68 = CONCAT44(local_bc,local_c0);
      uStack_80 = local_d8;
      local_78 = lStack_d0;
      local_88 = plVar1;
      if ((local_c8._4_4_ != iVar5) || (lStack_d0 != lVar6)) {
        do {
          local_10c = local_10c + *(int *)(*local_88 + 0x10 + (longlong)local_70._4_4_ * 0x20);
          local_70._0_4_ = (uint)local_70 & ~uStack_80._4_4_;
          FUN_1449c0562(&uStack_80);
        } while (local_88 != plVar1 || (local_78 != lVar6 || local_70._4_4_ != iVar5));
      }
      plVar1 = (longlong *)(param_1 + 0x3d0);
      lVar6 = param_1 + 0x3e0;
      local_d8 = 0x100000000;
      local_c8 = 0xffffffff;
      local_c0 = 0;
      iVar5 = 0;
      lStack_d0 = lVar6;
      if (*(int *)(param_1 + 0x3f8) != 0) {
        FUN_1449c0562(&local_d8);
        iVar5 = *(int *)(param_1 + 0x3f8);
      }
      local_70 = local_c8;
      uVar2 = local_70;
      local_68 = CONCAT44(local_bc,local_c0);
      uStack_80 = local_d8;
      local_78 = lStack_d0;
      local_70._4_4_ = (int)((ulonglong)local_c8 >> 0x20);
      iVar4 = local_70._4_4_;
      local_88 = plVar1;
      if ((local_70._4_4_ != iVar5) || (local_70 = uVar2, lStack_d0 != lVar6)) {
        do {
          local_70 = uVar2;
          local_10c = local_10c + *(int *)(*local_88 + 0x10 + (longlong)iVar4 * 0x20);
          local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_80._4_4_);
          FUN_1449c0562(&uStack_80);
          iVar4 = local_70._4_4_;
          uVar2 = local_70;
        } while (local_88 != plVar1 || (local_78 != lVar6 || local_70._4_4_ != iVar5));
      }
      FUN_140056680(local_120,L"ImportObjectCount");
      FUN_146b172be(&local_88,local_120,&local_10c);
      lVar6 = (longlong)(int)(uint)uStack_e0;
      uVar3 = (uint)uStack_e0 + 1;
      uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar3);
      if (uStack_e0._4_4_ < uVar3) {
        FUN_146b17dba(&local_e8);
      }
      lVar6 = lVar6 * 0x30;
      *(undefined8 *)(local_e8 + lVar6) = 0;
      *(longlong **)(local_e8 + lVar6) = local_88;
      *(undefined4 *)(local_e8 + 8 + lVar6) = (undefined4)uStack_80;
      *(uint *)(local_e8 + 0xc + lVar6) = uStack_80._4_4_;
      *(undefined8 *)(local_e8 + 0x10 + lVar6) = 0;
      *(longlong *)(local_e8 + 0x10 + lVar6) = local_78;
      *(uint *)(local_e8 + 0x18 + lVar6) = (uint)local_70;
      *(int *)(local_e8 + 0x1c + lVar6) = local_70._4_4_;
      *(undefined8 *)(local_e8 + 0x20 + lVar6) = local_68;
      *(undefined1 *)(local_e8 + 0x28 + lVar6) = (undefined1)local_60;
      *(undefined4 *)(local_e8 + 0x2c + lVar6) = (undefined4)local_5c;
      local_70 = 0;
      local_78 = 0;
      local_68 = 0;
      local_60 = 0;
      local_88 = (longlong *)0x0;
      uStack_80 = 0;
      local_5c = 0xffffffff00000080;
      local_54 = 0;
      local_48 = 0;
      local_40 = 0;
      local_128 = &local_d8;
      local_b8 = 0;
      local_b0 = 0;
      local_d8 = 0;
      lStack_d0 = 0;
      local_ac = 0xffffffff00000080;
      local_a4 = 0;
      local_98 = 0;
      local_90 = 0;
      local_130 = &local_88;
      if (*(longlong *)(*(longlong *)(param_1 + 0x150) + 0x70) != 0) {
        FUN_1444cb9f6(&local_130);
      }
      if (*(longlong *)(*(longlong *)(param_1 + 0x160) + 0x70) != 0) {
        FUN_1444cb9f6(&local_130);
      }
      FUN_14935e7ae(local_170,&local_88);
      FUN_140056680(local_180,L"WarningMessages");
      FUN_1478dd1f8(&local_160,local_180,local_170);
      lVar6 = (longlong)(int)(uint)uStack_e0;
      uVar3 = (uint)uStack_e0 + 1;
      uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar3);
      if (uStack_e0._4_4_ < uVar3) {
        FUN_146b17dba(&local_e8);
      }
      lVar6 = lVar6 * 0x30;
      *(undefined8 *)(local_e8 + lVar6) = 0;
      *(longlong *)(local_e8 + lVar6) = local_160;
      *(undefined4 *)(local_e8 + 8 + lVar6) = (undefined4)local_158;
      *(undefined4 *)(local_e8 + 0xc + lVar6) = local_158._4_4_;
      *(undefined8 *)(local_e8 + 0x10 + lVar6) = 0;
      *(undefined8 *)(local_e8 + 0x10 + lVar6) = local_150;
      *(undefined4 *)(local_e8 + 0x18 + lVar6) = (undefined4)local_148;
      *(undefined4 *)(local_e8 + 0x1c + lVar6) = local_148._4_4_;
      *(undefined8 *)(local_e8 + 0x20 + lVar6) = local_140;
      *(undefined1 *)(local_e8 + 0x28 + lVar6) = local_138;
      *(undefined4 *)(local_e8 + 0x2c + lVar6) = local_134;
      local_148 = 0;
      local_150 = 0;
      local_158 = 0;
      local_160 = 0;
      if (local_170[0] != 0) {
        FUN_1400020a8();
      }
      FUN_14935e7ae(local_170,&local_d8);
      FUN_140056680(local_190,L"ErrorMessages");
      FUN_1478dd1f8(&local_160,local_190,local_170);
      lVar6 = (longlong)(int)(uint)uStack_e0;
      uVar3 = (uint)uStack_e0 + 1;
      uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar3);
      if (uStack_e0._4_4_ < uVar3) {
        FUN_146b17dba(&local_e8);
      }
      lVar6 = lVar6 * 0x30;
      *(undefined8 *)(local_e8 + lVar6) = 0;
      *(longlong *)(local_e8 + lVar6) = local_160;
      *(undefined4 *)(local_e8 + 8 + lVar6) = (undefined4)local_158;
      *(undefined4 *)(local_e8 + 0xc + lVar6) = local_158._4_4_;
      *(undefined8 *)(local_e8 + 0x10 + lVar6) = 0;
      *(undefined8 *)(local_e8 + 0x10 + lVar6) = local_150;
      *(undefined4 *)(local_e8 + 0x18 + lVar6) = (undefined4)local_148;
      *(undefined4 *)(local_e8 + 0x1c + lVar6) = local_148._4_4_;
      *(undefined8 *)(local_e8 + 0x20 + lVar6) = local_140;
      *(undefined1 *)(local_e8 + 0x28 + lVar6) = local_138;
      *(undefined4 *)(local_e8 + 0x2c + lVar6) = local_134;
      local_148 = 0;
      local_150 = 0;
      local_158 = 0;
      local_160 = 0;
      if (local_170[0] != 0) {
        FUN_1400020a8();
      }
      FUN_140056680(&local_160,L"Interchange.Usage.ImportResult");
      (**(code **)(*DAT_14cad8288 + 0x78))(DAT_14cad8288,&local_160,&local_e8);
      if (local_160 != 0) {
        FUN_1400020a8();
      }
      local_90 = 0;
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      FUN_14062c7dc(&local_d8);
      local_40 = 0;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      FUN_14062c7dc(&local_88);
    }
    FUN_146b17e4e(local_e8,uStack_e0 & 0xffffffff);
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149361086 FUN_149361086 body=113 status=ok
// SIG undefined FUN_149361086(void)

longlong * FUN_149361086(longlong *param_1,longlong *param_2,byte *param_3)

{
  wchar_t *pwVar1;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  pwVar1 = L"false";
  if ((*param_3 & 1) != 0) {
    pwVar1 = L"true";
  }
  FUN_140056680(param_1 + 2,pwVar1);
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1493610f8 FUN_1493610f8 body=251 status=ok
// SIG undefined FUN_1493610f8(void)

void FUN_1493610f8(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0x50);
  if (0 < (longlong)iVar1) {
    lVar5 = 0;
    do {
      uVar6 = 0xffffffffffffffff;
      if (lVar5 < *(int *)(param_1 + 0x80)) {
        uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + lVar5 * 8);
      }
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x48) + lVar5 * 8);
      if (plVar2 != (longlong *)0x0) {
        uVar4 = FUN_146153ef6();
        cVar3 = FUN_1492ecd1a(uVar4,uVar6);
        if (cVar3 == '\x01') {
          uVar4 = FUN_146153ef6();
          local_50 = (undefined8 *)0x0;
          local_48 = 1;
          FUN_1468f8d30(&local_50,1,0);
          *local_50 = uVar6;
          FUN_1492ecac8(uVar4,&local_50);
          if (local_50 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        (**(code **)(*plVar2 + 0x2d0))(plVar2);
      }
      lVar5 = lVar5 + 1;
    } while (iVar1 != lVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1493611f4 FUN_1493611f4 body=857 status=ok
// SIG undefined FUN_1493611f4(void)

longlong * FUN_1493611f4(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x80);
  if ((longlong)iVar1 != 0) {
    *(int *)(param_2 + 1) = iVar1;
    FUN_14479d316(param_2,0);
    memcpy((void *)*param_2,*(void **)(param_1 + 0x78),(longlong)iVar1 << 3);
  }
  uVar2 = *(uint *)(param_1 + 0x90);
  if ((longlong)(int)uVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + uVar2;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar1) < uVar2) {
      FUN_14479d316(param_2,iVar1);
    }
    memcpy((void *)((longlong)iVar1 * 8 + *param_2),*(void **)(param_1 + 0x88),
           (longlong)(int)uVar2 << 3);
  }
  lVar4 = *(longlong *)(param_1 + 0xb8);
  if (lVar4 != -1) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_14479d316(param_2,iVar1);
      lVar4 = *(longlong *)(param_1 + 0xb8);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
  }
  uVar3 = FUN_146153ef6();
  FUN_1492ecac8(uVar3,param_2);
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1448f21ac(param_2,0);
  }
  uVar2 = *(uint *)(param_1 + 200);
  if ((longlong)(int)uVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + uVar2;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar1) < uVar2) {
      FUN_14479d316(param_2,iVar1);
    }
    memcpy((void *)((longlong)iVar1 * 8 + *param_2),*(void **)(param_1 + 0xc0),
           (longlong)(int)uVar2 << 3);
  }
  uVar2 = *(uint *)(param_1 + 0xd8);
  if ((longlong)(int)uVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + uVar2;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar1) < uVar2) {
      FUN_14479d316(param_2,iVar1);
    }
    memcpy((void *)((longlong)iVar1 * 8 + *param_2),*(void **)(param_1 + 0xd0),
           (longlong)(int)uVar2 << 3);
  }
  uVar2 = *(uint *)(param_1 + 0xe8);
  if ((longlong)(int)uVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + uVar2;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar1) < uVar2) {
      FUN_14479d316(param_2,iVar1);
    }
    memcpy((void *)((longlong)iVar1 * 8 + *param_2),*(void **)(param_1 + 0xe0),
           (longlong)(int)uVar2 << 3);
  }
  uVar2 = *(uint *)(param_1 + 0xf8);
  if ((longlong)(int)uVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + uVar2;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar1) < uVar2) {
      FUN_14479d316(param_2,iVar1);
    }
    memcpy((void *)((longlong)iVar1 * 8 + *param_2),*(void **)(param_1 + 0xf0),
           (longlong)(int)uVar2 << 3);
  }
  uVar2 = *(uint *)(param_1 + 0x108);
  if ((longlong)(int)uVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + uVar2;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar1) < uVar2) {
      FUN_14479d316(param_2,iVar1);
    }
    memcpy((void *)((longlong)iVar1 * 8 + *param_2),*(void **)(param_1 + 0x100),
           (longlong)(int)uVar2 << 3);
  }
  uVar2 = *(uint *)(param_1 + 0xa0);
  if ((longlong)(int)uVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + uVar2;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar1) < uVar2) {
      FUN_14479d316(param_2,iVar1);
    }
    memcpy((void *)((longlong)iVar1 * 8 + *param_2),*(void **)(param_1 + 0x98),
           (longlong)(int)uVar2 << 3);
  }
  uVar2 = *(uint *)(param_1 + 0xb0);
  if ((longlong)(int)uVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + uVar2;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar1) < uVar2) {
      FUN_14479d316(param_2,iVar1);
    }
    memcpy((void *)((longlong)iVar1 * 8 + *param_2),*(void **)(param_1 + 0xa8),
           (longlong)(int)uVar2 << 3);
  }
  lVar4 = *(longlong *)(param_1 + 0x110);
  if (lVar4 != -1) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_14479d316(param_2,iVar1);
      lVar4 = *(longlong *)(param_1 + 0x110);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
  }
  lVar4 = *(longlong *)(param_1 + 0x118);
  if (lVar4 != -1) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_14479d316(param_2,iVar1);
      lVar4 = *(longlong *)(param_1 + 0x118);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
  }
  return param_2;
}



// FUNCTION 14936154e FUN_14936154e body=169 status=ok
// SIG undefined FUN_14936154e(void)

undefined8 * FUN_14936154e(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 1) = 0;
  FUN_1405bceb4();
  *param_1 = &PTR_FUN_14bc66670;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0xd));
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  lVar1 = FUN_1493615f7(DAT_14c951640);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0xe] = lVar1;
  return param_1;
}



// FUNCTION 1493615f7 FUN_1493615f7 body=148 status=ok
// SIG undefined FUN_1493615f7(void)

undefined8 FUN_1493615f7(undefined8 param_1)

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
  uVar1 = FUN_1458e774c();
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



// FUNCTION 14936168c FUN_14936168c body=721 status=ok
// SIG undefined FUN_14936168c(void)

ulonglong FUN_14936168c(longlong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  void *pvVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  LOCK();
  if (*(int *)(param_1 + 0x50) == 0) {
    *(int *)(param_1 + 0x50) = 1;
  }
  UNLOCK();
  uVar6 = 1;
  LOCK();
  uVar5 = *(uint *)(param_1 + 0x50);
  if (uVar5 == 1) {
    *(uint *)(param_1 + 0x50) = 2;
  }
  else {
    uVar6 = (ulonglong)uVar5;
  }
  UNLOCK();
  if (uVar5 == 1) {
    pcVar2 = *(code **)(param_1 + 0x90);
    if (pcVar2 != (code *)0x0) {
      plVar9 = (longlong *)(param_1 + 0xb0);
      if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
        plVar9 = *(longlong **)(param_1 + 0xa0);
      }
      uVar7 = (**(code **)(*plVar9 + 8))();
      (*pcVar2)(uVar7,param_1);
    }
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x68));
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x68));
    local_50 = (void *)0x0;
    local_48 = *(int *)(param_1 + 0x60);
    lVar11 = (longlong)local_48;
    pvVar3 = *(void **)(param_1 + 0x58);
    if (lVar11 == 0) {
      local_44 = 0;
    }
    else {
      FUN_14010590e(&local_50,local_48,0);
      memcpy(local_50,pvVar3,lVar11 << 3);
    }
    cVar4 = FUN_144a61b4f();
    if (cVar4 == '\0') {
      local_68 = 0;
      uStack_60 = 0;
      iVar10 = local_48;
      if (local_48 < 0) {
LAB_149361956:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar10);
      }
      if (local_48 != 0) {
        FUN_147bf1112(&local_68);
        pvVar3 = local_50;
        lVar11 = (longlong)local_48;
        if (lVar11 != 0) {
          lVar12 = 0;
          do {
            uVar6 = uStack_60;
            uVar7 = *(undefined8 *)((longlong)pvVar3 + lVar12);
            lVar8 = (longlong)(int)uStack_60;
            uVar5 = (int)uStack_60 + 1;
            uStack_60 = CONCAT44(uStack_60._4_4_,uVar5);
            if (uStack_60._4_4_ < uVar5) {
              FUN_1409d3082(&local_68,uVar6 & 0xffffffff);
            }
            puVar1 = (undefined8 *)(local_68 + lVar8 * 8);
            *puVar1 = 0;
            FUN_14485c47a(puVar1,uVar7);
            lVar12 = lVar12 + 8;
          } while (lVar11 * 8 != lVar12);
        }
      }
      uVar6 = FUN_144a61b4f();
      if ((char)uVar6 != '\0') {
        local_78 = 0;
        uStack_70 = 0;
        iVar10 = (int)uStack_60;
        if ((int)uStack_60 < 0) goto LAB_149361956;
        if ((int)uStack_60 != 0) {
          FUN_14079e7a6(&local_78);
          if ((longlong)(int)uStack_60 != 0) {
            lVar12 = (longlong)(int)uStack_60 << 3;
            lVar11 = local_68;
            do {
              lVar8 = FUN_14479d2ce(lVar11);
              uVar6 = uStack_70;
              if (lVar8 != 0) {
                lVar13 = (longlong)(int)uStack_70;
                uVar5 = (int)uStack_70 + 1;
                uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
                if (uStack_70._4_4_ < uVar5) {
                  FUN_1447f76d2(&local_78,uVar6 & 0xffffffff);
                }
                *(longlong *)(local_78 + lVar13 * 8) = lVar8;
              }
              lVar11 = lVar11 + 8;
              lVar12 = lVar12 + -8;
            } while (lVar12 != 0);
          }
        }
        if ((*(int *)(param_1 + 0x48) != 0) &&
           (plVar9 = *(longlong **)(param_1 + 0x40), plVar9 != (longlong *)0x0)) {
          (**(code **)(*plVar9 + 0x60))(plVar9,&local_78);
        }
        uVar6 = FUN_14113f0c0(param_1 + 0x30);
        if ((char)uVar6 != '\0') {
          uVar6 = FUN_14935c74b(param_1 + 0x30,&local_78);
        }
        if (local_78 != 0) {
          uVar6 = FUN_1400020a8();
        }
      }
      if (local_68 != 0) {
        uVar6 = FUN_1400020a8();
      }
    }
    else {
      if ((*(int *)(param_1 + 0x48) != 0) &&
         (plVar9 = *(longlong **)(param_1 + 0x40), plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x60))(plVar9,&local_50);
      }
      uVar6 = FUN_14113f0c0(param_1 + 0x30);
      if ((char)uVar6 != '\0') {
        uVar6 = FUN_14935c74b(param_1 + 0x30,&local_50);
      }
    }
    if (local_50 != (void *)0x0) {
      uVar6 = FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 149361960 FUN_149361960 body=205 status=ok
// SIG undefined FUN_149361960(void)

void FUN_149361960(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x50) == 1) {
    local_28 = 0;
    uStack_20 = 0;
    plVar3 = *(longlong **)(param_1 + 0x80);
    if (plVar3 != (longlong *)0x0) {
      iVar5 = (int)plVar3[1];
      do {
        if (iVar5 == 0) goto LAB_1493619c7;
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
      if (*(longlong *)(param_1 + 0x78) != 0) {
        FUN_1493611f4(*(longlong *)(param_1 + 0x78),&local_38);
        if (local_28 != 0) {
          FUN_1400020a8();
        }
        local_28 = CONCAT44(uStack_34,local_38);
        uStack_20 = CONCAT44(uStack_2c,uStack_30);
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
LAB_1493619c7:
    uVar6 = FUN_146153ef6();
    FUN_1492ecac8(uVar6,&local_28);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149361a2e FUN_149361a2e body=117 status=ok
// SIG undefined FUN_149361a2e(void)

void FUN_149361a2e(longlong param_1,undefined8 param_2)

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



// FUNCTION 149361aa4 FUN_149361aa4 body=100 status=ok
// SIG undefined FUN_149361aa4(void)

void FUN_149361aa4(longlong param_1,longlong *param_2)

{
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x68));
  (**(code **)(*param_2 + 0x90))
            (param_2,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60),0,0);
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x70,0,0);
                    /* WARNING: Could not recover jumptable at 0x000149361b01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x68));
  return;
}



// FUNCTION 149361b08 FUN_149361b08 body=97 status=ok
// SIG undefined FUN_149361b08(void)

void FUN_149361b08(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  uVar2 = *param_2;
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  *(longlong *)(param_1 + 0x80) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000149361b5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 149361b6a FUN_149361b6a body=330 status=ok
// SIG undefined FUN_149361b6a(void)

void FUN_149361b6a(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar3 = local_70;
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x300);
    plVar2 = (longlong *)(param_1 + 0x310);
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_58 = plVar2;
    if (*(int *)(param_1 + 0x328) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar6 = *(int *)(param_1 + 0x328);
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_70 = local_50;
    uVar3 = local_70;
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = plVar1;
    if ((local_70._4_4_ != iVar6) || (uStack_58 != plVar2)) {
      iVar5 = local_70._4_4_;
      local_70 = uVar3;
      do {
        FUN_149365604(&local_60,(longlong)iVar5 * 0x18 + *local_88);
        cVar4 = (**(code **)(*uStack_58 + 0x2b0))(uStack_58,param_2,param_3);
        uVar3 = local_70;
        if (cVar4 != '\0') break;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar3 = local_70;
      } while (local_88 != plVar1 ||
               ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar2 || local_70._4_4_ != iVar6));
    }
  }
  local_70 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149361cb6 FUN_149361cb6 body=228 status=ok
// SIG undefined FUN_149361cb6(void)

bool FUN_149361cb6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = **(longlong **)(param_1 + 8);
  if (lVar3 != 0) {
    FUN_1493677e4(param_2,lVar3 + 8);
    lVar4 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar3;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    local_38 = 0;
    FUN_1493677e4(lVar3 + 8,&local_48);
    plVar5 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    if (lVar4 != 0) {
      plVar5 = *(longlong **)(lVar4 + 0x10);
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
      FUN_1400020a8(lVar4);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar3 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149361d9c FUN_149361d9c body=432 status=ok
// SIG undefined FUN_149361d9c(void)

void FUN_149361d9c(longlong param_1,byte param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  undefined1 auStack_b8 [32];
  code **local_98;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  longlong *local_70;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(int *)(param_1 + 0x358) != 0) != (bool)param_2) {
    LOCK();
    *(uint *)(param_1 + 0x358) = (uint)param_2;
    UNLOCK();
    if (*(int *)(param_1 + 0x358) == 0) {
      FUN_1401cb356();
      local_88 = *(undefined8 *)(param_1 + 0x200);
      local_80 = *(longlong *)(param_1 + 0x208);
      if (local_80 != 0) {
        LOCK();
        *(int *)(local_80 + 0xc) = *(int *)(local_80 + 0xc) + 1;
        UNLOCK();
      }
      FUN_140d61352(&local_88);
      lVar3 = *(longlong *)(param_1 + 0x208);
      *(undefined8 *)(param_1 + 0x200) = 0;
      *(undefined8 *)(param_1 + 0x208) = 0;
      if (lVar3 != 0) {
        LOCK();
        piVar1 = (int *)(lVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_b8);
        }
      }
    }
    else {
      uVar4 = FUN_1401cb356();
      local_98 = local_68;
      local_58 = (undefined ***)0x0;
      local_48 = &PTR_LAB_14bc68370;
      local_68[0] = FUN_1444d0ea6;
      local_40 = param_1;
      FUN_1401cbba4(uVar4,&local_78,L"InterchangeManagerTickHandle",0x3dcccccd);
      if ((undefined8 *)(param_1 + 0x200) != &local_78) {
        *(undefined8 *)(param_1 + 0x200) = local_78;
        local_78 = 0;
        plVar2 = *(longlong **)(param_1 + 0x208);
        *(longlong **)(param_1 + 0x208) = local_70;
        local_70 = (longlong *)0x0;
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
      if (local_70 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_70 + 0x10))();
        }
      }
      if (local_68[0] != (code *)0x0) {
        pppuVar5 = local_58;
        if (local_58 == (undefined ***)0x0) {
          pppuVar5 = &local_48;
        }
        (*(code *)(*pppuVar5)[2])();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149361f62 FUN_149361f62 body=100 status=ok
// SIG undefined FUN_149361f62(void)

void FUN_149361f62(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000149361fba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149361fc6 FUN_149361fc6 body=127 status=ok
// SIG undefined FUN_149361fc6(void)

undefined8 *
FUN_149361fc6(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined1 *)(param_5 + 0xc0) = 0;
  local_48 = param_5;
  local_40 = 1;
  FUN_1444ccb44(param_1,&local_38);
  *param_2 = local_38;
  param_2[1] = local_30;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_149361f62(&local_38);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149362046 FUN_149362046 body=94 status=ok
// SIG undefined FUN_149362046(void)

longlong * FUN_149362046(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_140056680(param_1 + 2,param_3);
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1493620a4 FUN_1493620a4 body=241 status=ok
// SIG undefined FUN_1493620a4(void)

void FUN_1493620a4(longlong param_1,undefined8 param_2,uint param_3)

{
  wchar_t wVar1;
  short sVar2;
  byte bVar3;
  wchar_t *pwVar4;
  short *psVar5;
  
  bVar3 = (byte)param_3 & 1;
  if ((param_3 & 1) != 0) {
    wVar1 = L'\"';
    pwVar4 = L"\' ,\n\r\t";
    do {
      FUN_144afd20c(param_2,wVar1,0x5f);
      wVar1 = *pwVar4;
      pwVar4 = pwVar4 + 1;
    } while (wVar1 != L'\0');
  }
  if ((param_3 & 2) != 0) {
    wVar1 = L'\"';
    pwVar4 = L"\' ,/.:|&!~\n\r\t@#(){}[]=;^%$`";
    do {
      FUN_144afd20c(param_2,wVar1,0x5f);
      wVar1 = *pwVar4;
      pwVar4 = pwVar4 + 1;
    } while (wVar1 != L'\0');
    bVar3 = 1;
  }
  if ((param_3 & 4) != 0) {
    wVar1 = L'\"';
    pwVar4 = L"\' ,|&!~\n\r\t@#(){}[]=;^%$`";
    do {
      FUN_144afd20c(param_2,wVar1,0x5f);
      wVar1 = *pwVar4;
      pwVar4 = pwVar4 + 1;
    } while (wVar1 != L'\0');
  }
  if ((param_3 & 8) != 0) {
    sVar2 = 0x5c;
    psVar5 = &DAT_149e35232;
    do {
      FUN_144afd20c(param_2,sVar2,0x5f);
      sVar2 = *psVar5;
      psVar5 = psVar5 + 1;
    } while (sVar2 != 0);
  }
  if (bVar3 == 0) {
    return;
  }
  FUN_149368d44(param_1 + 0xa0,param_2,param_3);
  return;
}



// FUNCTION 149362196 FUN_149362196 body=86 status=ok
// SIG undefined FUN_149362196(void)

undefined4 FUN_149362196(void)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  uVar1 = FUN_149365684(0,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493621ee FUN_1493621ee body=205 status=ok
// SIG undefined FUN_1493621ee(void)

longlong * FUN_1493621ee(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != 0) {
    plVar5 = &local_38;
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    bVar1 = true;
    FUN_14086ecde(0,plVar5,1,0);
    lVar2 = local_38;
    lVar6 = (longlong)(int)uStack_30;
    if (lVar6 != 0) {
      lVar4 = 0;
      do {
        plVar5 = *(longlong **)(lVar2 + lVar4);
        if (plVar5 != (longlong *)0x0) {
          lVar3 = FUN_145a93fc0();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar5[2] + 0x38)) &&
             (*(longlong *)(*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
              == lVar3 + 0x30)) {
            bVar1 = false;
            goto LAB_149362283;
          }
        }
        lVar4 = lVar4 + 8;
      } while (lVar6 * 8 != lVar4);
      bVar1 = true;
    }
LAB_149362283:
    if (local_38 != 0) {
      FUN_1400020a8(local_38);
    }
    if (!bVar1) goto LAB_149362296;
  }
  plVar5 = (longlong *)0x0;
LAB_149362296:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar5;
}



// FUNCTION 1493622bc FUN_1493622bc body=760 status=ok
// SIG undefined FUN_1493622bc(void)

void FUN_1493622bc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1402191ca(param_2,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar7 != 0) {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar7);
    }
    FUN_144732142(&local_98,uVar7);
    iVar5 = 1;
    if (3 < uVar7) {
      uVar7 = (uVar7 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar5)) {
      local_50 = iVar5;
      FUN_144869b4a();
    }
  }
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
    FUN_1402191ca(param_2);
  }
  local_b0 = param_1 + 2;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_b8);
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = param_1;
  if (iStack_a4 < (int)local_b0[3]) {
    do {
      lVar1 = *local_e0;
      lVar3 = (longlong)iStack_c4;
      if ((int)uStack_90 != local_64) {
        lVar2 = *(longlong *)(lVar1 + lVar3 * 0x30);
        uVar7 = (uint)((ulonglong)lVar2 >> 0x10);
        uVar6 = (uint)lVar2 & 0xffff;
        puVar4 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar4 = local_60;
        }
        for (iVar5 = *(int *)(puVar4 + (ulonglong)
                                       (local_50 - 1U &
                                       (int)((ulonglong)lVar2 >> 0x20) +
                                       ((uint)lVar2 << 0x10 | uVar6) +
                                       (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar6 >> 4)) * 4);
            iVar5 != -1; iVar5 = *(int *)((longlong)iVar5 * 0x10 + local_98 + 8)) {
          if (*(longlong *)(local_98 + (longlong)iVar5 * 0x10) == lVar2) goto LAB_149362465;
        }
      }
      iVar5 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
        FUN_1446f84a2(param_2,iVar5);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar5 * 8) = *(undefined8 *)(lVar1 + lVar3 * 0x30);
      FUN_144a13f80(&local_98,&local_b8,(longlong)iStack_c4 * 0x30 + *local_e0,0);
LAB_149362465:
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (iStack_c4 < (int)local_d0[3]);
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(&local_98);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493625b6 FUN_1493625b6 body=486 status=ok
// SIG undefined FUN_1493625b6(void)

longlong * FUN_1493625b6(longlong param_1,longlong *param_2,undefined4 *param_3,longlong param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar8 = (undefined8 *)FUN_14001cc68(0x430,0x10);
  puVar8[1] = &DAT_100000001;
  *puVar8 = &PTR_LAB_14bc68350;
  puVar1 = puVar8 + 2;
  FUN_14935eefa(puVar1);
  *param_2 = (longlong)puVar1;
  param_2[1] = (longlong)puVar8;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(undefined4 *)(puVar8 + 0x26) = *param_3;
  *(undefined4 *)((longlong)puVar8 + 0x134) = uVar4;
  *(undefined4 *)(puVar8 + 0x27) = uVar5;
  *(undefined4 *)((longlong)puVar8 + 0x13c) = uVar6;
  puVar8[0x28] = *(undefined8 *)(param_3 + 4);
  FUN_144a787a6(puVar8 + 0x29,param_3 + 6);
  *(undefined1 *)(puVar8 + 0x2b) = *(undefined1 *)(param_3 + 10);
  lVar9 = puVar8[0x2c];
  uVar4 = *(undefined4 *)(param_4 + 0x40);
  uVar5 = *(undefined4 *)(param_4 + 0x44);
  uVar6 = *(undefined4 *)(param_4 + 0x48);
  *(undefined4 *)(lVar9 + 0x10) = *(undefined4 *)(param_4 + 0x3c);
  *(undefined4 *)(lVar9 + 0x14) = uVar4;
  *(undefined4 *)(lVar9 + 0x18) = uVar5;
  *(undefined4 *)(lVar9 + 0x1c) = uVar6;
  FUN_146229de2(puVar8[0x2c] + 0x20,param_4 + 0x50);
  lVar9 = puVar8[0x2c];
  uVar4 = *(undefined4 *)(param_4 + 100);
  uVar5 = *(undefined4 *)(param_4 + 0x68);
  uVar6 = *(undefined4 *)(param_4 + 0x6c);
  *(undefined4 *)(lVar9 + 0x30) = *(undefined4 *)(param_4 + 0x60);
  *(undefined4 *)(lVar9 + 0x34) = uVar4;
  *(undefined4 *)(lVar9 + 0x38) = uVar5;
  *(undefined4 *)(lVar9 + 0x3c) = uVar6;
  FUN_149368e34(puVar8[0x2c] + 0x40,param_4 + 0x70);
  if (puVar8 == (undefined8 *)0x0) {
    lVar11 = 0;
    lVar9 = 0x10;
  }
  else {
    LOCK();
    *(int *)((longlong)puVar8 + 0xc) = *(int *)((longlong)puVar8 + 0xc) + 1;
    UNLOCK();
    lVar9 = *param_2;
    lVar11 = param_2[1];
  }
  local_48 = puVar1;
  local_40 = puVar8;
  FUN_149361b08(puVar8[0x2c],&local_48);
  lVar10 = *(longlong *)(lVar9 + 0x160);
  uVar4 = *(undefined4 *)(param_4 + 0x84);
  uVar5 = *(undefined4 *)(param_4 + 0x88);
  uVar6 = *(undefined4 *)(param_4 + 0x8c);
  *(undefined4 *)(lVar10 + 0x10) = *(undefined4 *)(param_4 + 0x80);
  *(undefined4 *)(lVar10 + 0x14) = uVar4;
  *(undefined4 *)(lVar10 + 0x18) = uVar5;
  *(undefined4 *)(lVar10 + 0x1c) = uVar6;
  FUN_146229de2(*(longlong *)(lVar9 + 0x160) + 0x20,param_4 + 0x90);
  lVar10 = *(longlong *)(lVar9 + 0x160);
  uVar4 = *(undefined4 *)(param_4 + 0xa4);
  uVar5 = *(undefined4 *)(param_4 + 0xa8);
  uVar6 = *(undefined4 *)(param_4 + 0xac);
  *(undefined4 *)(lVar10 + 0x30) = *(undefined4 *)(param_4 + 0xa0);
  *(undefined4 *)(lVar10 + 0x34) = uVar4;
  *(undefined4 *)(lVar10 + 0x38) = uVar5;
  *(undefined4 *)(lVar10 + 0x3c) = uVar6;
  FUN_149368e34(*(longlong *)(lVar9 + 0x160) + 0x40,param_4 + 0xb0);
  uVar3 = *(undefined8 *)(lVar9 + 0x160);
  lVar10 = lVar9;
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 0xc) = *(int *)(lVar11 + 0xc) + 1;
    UNLOCK();
    lVar10 = *param_2;
  }
  local_58 = lVar9;
  local_50 = lVar11;
  FUN_149361b08(uVar3,&local_58);
  piVar2 = (int *)(*(longlong *)(lVar10 + 0x150) + 0x50);
  LOCK();
  if (*piVar2 == 0) {
    *piVar2 = 1;
  }
  UNLOCK();
  uVar7 = 0;
  if (*(longlong **)(param_1 + 0x350) != (longlong *)0x0) {
    uVar7 = (**(code **)(**(longlong **)(param_1 + 0x350) + 0x2a8))();
  }
  *(undefined1 *)(*param_2 + 0x11) = uVar7;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14936279d FUN_14936279d body=174 status=ok
// SIG undefined FUN_14936279d(void)

undefined8 FUN_14936279d(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_141092c54();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
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



// FUNCTION 14936284c FUN_14936284c body=148 status=ok
// SIG undefined FUN_14936284c(void)

undefined8 * FUN_14936284c(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14bc68460;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 1),4000);
  param_1[6] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_14bc68070;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  param_1[0xd] = *param_3;
  lVar2 = param_3[1];
  param_1[0xe] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_3[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  return param_1;
}



// FUNCTION 1493628e0 FUN_1493628e0 body=63 status=ok
// SIG undefined FUN_1493628e0(void)

longlong FUN_1493628e0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_149368610(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_149368601(lVar2);
  return lVar2;
}



// FUNCTION 149362920 FUN_149362920 body=100 status=ok
// SIG undefined FUN_149362920(void)

longlong FUN_149362920(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_144a797b2();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) && (lVar2 = FUN_1411c54d6(), lVar2 != 0)) &&
       (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30) {
        return 0;
      }
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 149362984 FUN_149362984 body=549 status=ok
// SIG undefined FUN_149362984(void)

undefined8 * FUN_149362984(undefined8 *param_1,char param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong *local_70;
  char local_61;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar5 = (longlong *)FUN_145ba091a();
  lVar6 = plVar5[0x22];
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 1000))(plVar5);
    lVar6 = plVar5[0x22];
  }
  lVar7 = lVar6 + 0x160;
  if (param_2 == '\0') {
    lVar7 = lVar6 + 0x38;
  }
  lVar6 = FUN_1493631e8(&local_61);
  puVar8 = (undefined8 *)(lVar7 + 0x50);
  if (local_61 == '\x01') {
    puVar8 = (undefined8 *)(lVar6 + 0x18);
  }
  *param_1 = *puVar8;
  if ((param_2 == '\0') && (FUN_14935ecee(&local_70,param_3), local_70 != (longlong *)0x0)) {
    bVar3 = (**(code **)(*local_70 + 0x2b8))();
    if (local_61 == '\x01') {
      plVar5 = (longlong *)(lVar6 + 0x20);
    }
    else {
      plVar5 = (longlong *)FUN_145ba091a();
      lVar6 = plVar5[0x22];
      if (lVar6 == 0) {
        (**(code **)(*plVar5 + 1000))(plVar5);
        lVar6 = plVar5[0x22];
      }
      plVar5 = (longlong *)(lVar6 + 0xc0);
    }
    local_58 = plVar5 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)plVar5[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_50;
    uVar2 = local_80;
    local_78 = local_48;
    local_74 = local_44;
    local_90 = local_60;
    local_88 = local_58;
    local_80._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_98 = plVar5;
    if (local_80._4_4_ < (int)local_58[3]) {
      iVar4 = local_80._4_4_;
      local_80 = uVar2;
      do {
        bVar1 = *(byte *)(*local_98 + (longlong)iVar4 * 0x14);
        if ((bVar1 ^ bVar3) < bVar1) {
          *param_1 = *(undefined8 *)(*local_98 + (longlong)iVar4 * 0x14 + 4);
          uVar2 = local_80;
          break;
        }
        local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~local_90._4_4_);
        FUN_1449c0562(&local_90);
        iVar4 = local_80._4_4_;
        uVar2 = local_80;
      } while (local_80._4_4_ < (int)local_88[3]);
    }
    local_80 = uVar2;
    if (((local_70 != (longlong *)0x0) &&
        ((**(code **)(*local_70 + 0x2d0))(), local_70 != (longlong *)0x0)) &&
       (DAT_14c872a72 == '\0')) {
      FUN_140113f48();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 149362baa FUN_149362baa body=74 status=ok
// SIG undefined FUN_149362baa(void)

undefined8 * FUN_149362baa(undefined8 *param_1,undefined8 *param_2)

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
    FUN_149363a52(param_1,iVar1);
    FUN_1493686a4(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 149362bf4 FUN_149362bf4 body=148 status=ok
// SIG undefined FUN_149362bf4(void)

undefined8 FUN_149362bf4(undefined8 param_1)

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
  uVar1 = FUN_145b148b4();
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



// FUNCTION 149362c8a FUN_149362c8a body=96 status=ok
// SIG undefined FUN_149362c8a(void)

undefined8 FUN_149362c8a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  
  cVar3 = FUN_144a61b4f();
  if ((cVar3 == '\0') || (iVar1 = *(int *)(param_1 + 0x1e8), (longlong)iVar1 == 0)) {
    uVar4 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x1e0);
    lVar5 = 0;
    do {
      uVar4 = FUN_14936061c(*(undefined8 *)(lVar2 + lVar5),param_2);
      if ((char)uVar4 != '\0') {
        return uVar4;
      }
      bVar6 = (longlong)iVar1 * 0x10 + -0x10 != lVar5;
      lVar5 = lVar5 + 0x10;
    } while (bVar6);
  }
  return uVar4;
}



// FUNCTION 149362cea FUN_149362cea body=174 status=ok
// SIG undefined FUN_149362cea(void)

undefined8 FUN_149362cea(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1411829b8();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
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



// FUNCTION 149362d9a FUN_149362d9a body=147 status=ok
// SIG undefined FUN_149362d9a(void)

void FUN_149362d9a(longlong *param_1,longlong *param_2)

{
  void *_Dst;
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar1 = *param_1;
    iVar3 = 1;
    lVar2 = 0;
    lVar4 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar2) == *param_2) {
        if (iVar3 == 0) {
          return;
        }
        lVar2 = (lVar4 >> 0x20) * 0x10;
        _Dst = (void *)(lVar1 + lVar2);
        FUN_145aed68c(_Dst,1);
        memmove(_Dst,(void *)(lVar1 + lVar2 + 0x10),(longlong)((int)param_1[1] - iVar3) << 4);
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        return;
      }
      lVar4 = lVar4 + 0x100000000;
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 0x10;
    } while ((longlong)(int)param_1[1] * 0x10 != lVar2);
  }
  return;
}



// FUNCTION 149362e2d FUN_149362e2d body=236 status=ok
// SIG undefined FUN_149362e2d(void)

undefined8
FUN_149362e2d(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
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



// FUNCTION 149362f20 FUN_149362f20 body=376 status=ok
// SIG undefined FUN_149362f20(void)

void FUN_149362f20(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined8 local_30;
  undefined4 local_24;
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
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
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
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14936309a();
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14936309a FUN_14936309a body=140 status=ok
// SIG undefined FUN_14936309a(void)

ulonglong FUN_14936309a(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined8 unaff_RBX;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14936312a(&local_28);
  while ((*(byte *)(local_28 + 0x78) & 1) == 0) {
    (**(code **)(**(longlong **)(local_28 + 0x70) + 0x20))
              (*(longlong **)(local_28 + 0x70),0xffffffff,0);
  }
  uVar3 = *(undefined1 *)(local_28 + 0x80);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar3) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14936312a FUN_14936312a body=190 status=ok
// SIG undefined FUN_14936312a(void)

longlong * FUN_14936312a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_14001cc68(0x28,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14bc68390;
  FUN_147129da6(plVar4 + 2);
  *(undefined1 *)(plVar4 + 4) = 0;
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
  *(undefined1 *)(plVar4[2] + 0x80) = 0;
  FUN_140b576f0();
  *(undefined1 *)(plVar4 + 4) = 1;
  *param_1 = plVar4[2];
  lVar3 = plVar4[3];
  param_1[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
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



// FUNCTION 1493631e8 FUN_1493631e8 body=334 status=ok
// SIG undefined FUN_1493631e8(void)

undefined * FUN_1493631e8(undefined1 *param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc0e110) && (FUN_144b3d300(&DAT_14cc0e110), DAT_14cc0e110 == -1)) {
    FUN_149363336(&DAT_14cc0e048);
    atexit((_func_5014 *)&LAB_1444d0616);
    _Init_thread_footer(&DAT_14cc0e110);
  }
  *param_1 = 0;
  plVar1 = (longlong *)FUN_145a93ed4();
  lVar4 = plVar1[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar4 = plVar1[0x22];
    if (lVar4 == 0) goto LAB_149363239;
  }
  if (((*(int *)(lVar4 + 0x48) != 0 || *(int *)(lVar4 + 0x44) != 0) || *(int *)(lVar4 + 0x4c) != 0)
      || *(int *)(lVar4 + 0x50) != 0) {
    plVar1 = (longlong *)FUN_145ba091a();
    lVar5 = plVar1[0x22];
    if (lVar5 == 0) {
      (**(code **)(*plVar1 + 1000))(plVar1);
      lVar5 = plVar1[0x22];
    }
    uVar3 = 2;
    if ((longlong)*(int *)(lVar5 + 0x268) != 0) {
      puVar2 = *(undefined **)(lVar5 + 0x260);
      lVar5 = (longlong)*(int *)(lVar5 + 0x268) * 200;
      do {
        if ((((*(int *)(puVar2 + 8) == *(int *)(lVar4 + 0x44)) &&
             (*(int *)(puVar2 + 0xc) == *(int *)(lVar4 + 0x48))) &&
            (*(int *)(puVar2 + 0x10) == *(int *)(lVar4 + 0x4c))) &&
           (*(int *)(puVar2 + 0x14) == *(int *)(lVar4 + 0x50))) {
          uVar3 = 1;
          goto LAB_1493632e9;
        }
        puVar2 = puVar2 + 200;
        lVar5 = lVar5 + -200;
      } while (lVar5 != 0);
    }
    puVar2 = &DAT_14cc0e048;
LAB_1493632e9:
    *param_1 = uVar3;
    return puVar2;
  }
LAB_149363239:
  return &DAT_14cc0e048;
}



// FUNCTION 149363336 FUN_149363336 body=122 status=ok
// SIG undefined FUN_149363336(void)

undefined8 * FUN_149363336(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_1412e3d1e(param_1 + 1);
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 1;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 1493633b0 FUN_1493633b0 body=87 status=ok
// SIG undefined FUN_1493633b0(void)

void FUN_1493633b0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  FUN_145c75e1a(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_145c75e52(param_1 + 0x20);
  return;
}



// FUNCTION 149363408 FUN_149363408 body=175 status=ok
// SIG undefined FUN_149363408(void)

longlong * FUN_149363408(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_1446f84a2(0,0);
  *(undefined8 *)*param_1 = 0;
  plVar3 = (longlong *)FUN_145ba091a();
  lVar4 = plVar3[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 1000))(plVar3);
    lVar4 = plVar3[0x22];
  }
  iVar1 = *(int *)(lVar4 + 0x268);
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(lVar4 + 0x260);
    lVar5 = 0;
    do {
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_1446f84a2(param_1,iVar2);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar4 + lVar5);
      lVar5 = lVar5 + 200;
    } while ((longlong)iVar1 * 200 - lVar5 != 0);
  }
  return param_1;
}



// FUNCTION 1493634b8 FUN_1493634b8 body=137 status=ok
// SIG undefined FUN_1493634b8(void)

void FUN_1493634b8(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  plVar6 = (longlong *)FUN_145ba091a();
  lVar7 = plVar6[0x22];
  if (lVar7 == 0) {
    (**(code **)(*plVar6 + 1000))(plVar6);
    lVar7 = plVar6[0x22];
  }
  iVar2 = *(int *)(lVar7 + 0x268);
  if ((longlong)iVar2 != 0) {
    lVar7 = *(longlong *)(lVar7 + 0x260);
    lVar8 = 0;
    do {
      if (*(longlong *)(lVar7 + lVar8) == *(longlong *)(param_1 + 0x3c)) {
        puVar1 = (undefined4 *)(lVar7 + 8 + lVar8);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *(undefined4 *)(param_1 + 0x44) = *puVar1;
        *(undefined4 *)(param_1 + 0x48) = uVar3;
        *(undefined4 *)(param_1 + 0x4c) = uVar4;
        *(undefined4 *)(param_1 + 0x50) = uVar5;
      }
      lVar8 = lVar8 + 200;
    } while ((longlong)iVar2 * 200 - lVar8 != 0);
  }
  FUN_149363542(param_1);
  return;
}



// FUNCTION 149363542 FUN_149363542 body=131 status=ok
// SIG undefined FUN_149363542(void)

void FUN_149363542(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)FUN_1493631e8(&local_19);
  if (local_19 == '\x02') {
    FUN_1446ddc76(&local_28,"Invalid Group Used, Defaulting to No Group usage.",1);
  }
  else {
    if (local_19 != '\x01') {
      if (local_19 == '\0') {
        *(undefined8 *)(param_1 + 0x3c) = 0;
      }
      goto LAB_1493635a8;
    }
    local_28 = *puVar1;
  }
  *(undefined8 *)(param_1 + 0x3c) = local_28;
LAB_1493635a8:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1493635c6 FUN_1493635c6 body=45 status=ok
// SIG undefined FUN_1493635c6(void)

longlong FUN_1493635c6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  FUN_145898044(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149363610 FUN_149363610 body=45 status=ok
// SIG undefined FUN_149363610(void)

longlong FUN_149363610(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149363650 FUN_149363650 body=38 status=ok
// SIG undefined FUN_149363650(void)

undefined8 FUN_149363650(undefined8 param_1,int param_2)

{
  FUN_14935f200();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149363676 FUN_149363676 body=32 status=ok
// SIG undefined FUN_149363676(void)

undefined8 FUN_149363676(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"UE::Interchange::FImportAsyncHelper");
  return param_2;
}



// FUNCTION 149363696 FUN_149363696 body=38 status=ok
// SIG undefined FUN_149363696(void)

undefined8 FUN_149363696(undefined8 param_1,int param_2)

{
  FUN_14936614e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1493636bc FUN_1493636bc body=32 status=ok
// SIG undefined FUN_1493636bc(void)

undefined8 FUN_1493636bc(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"UE::Interchange::FImportResult");
  return param_2;
}



// FUNCTION 1493636dc FUN_1493636dc body=75 status=ok
// SIG undefined FUN_1493636dc(void)

void FUN_1493636dc(undefined8 param_1,undefined8 *param_2)

{
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_144a5dc74(param_2 + 1);
  FUN_140056680(param_2 + 3,&DAT_149dfb77a);
  *(undefined1 *)(param_2 + 5) = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  return;
}



// FUNCTION 149363728 FUN_149363728 body=57 status=ok
// SIG undefined FUN_149363728(void)

void FUN_149363728(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  FUN_144a5dc74(param_2 + 8);
  FUN_140056680(param_2 + 0x18,&DAT_149dfb77a);
  param_2[0x28] = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  return;
}



// FUNCTION 149363780 FUN_149363780 body=54 status=ok
// SIG undefined FUN_149363780(void)

undefined1 FUN_149363780(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1493595e0(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 1493637de FUN_1493637de body=59 status=ok
// SIG undefined FUN_1493637de(void)

undefined8 FUN_1493637de(longlong *param_1)

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



// FUNCTION 149363824 FUN_149363824 body=34 status=ok
// SIG undefined FUN_149363824(void)

void FUN_149363824(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_14935980c(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1493638da FUN_1493638da body=70 status=ok
// SIG undefined FUN_1493638da(void)

undefined8 FUN_1493638da(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_149363a02(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149363948 FUN_149363948 body=59 status=ok
// SIG undefined FUN_149363948(void)

undefined8 FUN_149363948(longlong *param_1)

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



// FUNCTION 14936398e FUN_14936398e body=38 status=ok
// SIG undefined FUN_14936398e(void)

void FUN_14936398e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 149363a02 FUN_149363a02 body=79 status=ok
// SIG undefined FUN_149363a02(void)

undefined8 * FUN_149363a02(undefined8 *param_1,undefined8 *param_2)

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
      FUN_149363a52(param_1,iVar1);
      FUN_149363ab4(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 149363a52 FUN_149363a52 body=98 status=ok
// SIG undefined FUN_149363a52(void)

void FUN_149363a52(longlong param_1,int param_2,int param_3)

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



// FUNCTION 149363ab4 FUN_149363ab4 body=82 status=ok
// SIG undefined FUN_149363ab4(void)

void FUN_149363ab4(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 149363b56 FUN_149363b56 body=101 status=ok
// SIG undefined FUN_149363b56(void)

undefined8 FUN_149363b56(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_144a787a6();
      FUN_14591fc3c(param_2 + lVar6 + 0x28,param_3 + lVar6 + 0x28);
      lVar6 = lVar6 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149363be4 FUN_149363be4 body=59 status=ok
// SIG undefined FUN_149363be4(void)

undefined8 FUN_149363be4(longlong *param_1)

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



// FUNCTION 149363c2a FUN_149363c2a body=34 status=ok
// SIG undefined FUN_149363c2a(void)

void FUN_149363c2a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1457f57e2(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 149363cf2 FUN_149363cf2 body=59 status=ok
// SIG undefined FUN_149363cf2(void)

undefined8 FUN_149363cf2(longlong *param_1)

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



// FUNCTION 149363d38 FUN_149363d38 body=34 status=ok
// SIG undefined FUN_149363d38(void)

void FUN_149363d38(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_1457f5776(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 149363daa FUN_149363daa body=74 status=ok
// SIG undefined FUN_149363daa(void)

void FUN_149363daa(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x88);
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined1 *)((longlong)param_2 + 0x80) = 1;
  return;
}



// FUNCTION 149363e4e FUN_149363e4e body=127 status=ok
// SIG undefined FUN_149363e4e(void)

undefined8 FUN_149363e4e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149363fb8(param_2,param_3);
    *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(param_3 + 0x50);
    *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_3 + 0x58);
    uVar1 = *(undefined4 *)(param_3 + 100);
    uVar2 = *(undefined4 *)(param_3 + 0x68);
    uVar3 = *(undefined4 *)(param_3 + 0x6c);
    *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_3 + 0x60);
    *(undefined4 *)(param_2 + 100) = uVar1;
    *(undefined4 *)(param_2 + 0x68) = uVar2;
    *(undefined4 *)(param_2 + 0x6c) = uVar3;
    FUN_144a787a6(param_2 + 0x70,param_3 + 0x70);
    *(undefined1 *)(param_2 + 0x80) = *(undefined1 *)(param_3 + 0x80);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 149363ef6 FUN_149363ef6 body=59 status=ok
// SIG undefined FUN_149363ef6(void)

undefined8 FUN_149363ef6(longlong *param_1)

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



// FUNCTION 149363f42 FUN_149363f42 body=40 status=ok
// SIG undefined FUN_149363f42(void)

void FUN_149363f42(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_145c75d10(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 149363fb8 FUN_149363fb8 body=122 status=ok
// SIG undefined FUN_149363fb8(void)

longlong FUN_149363fb8(longlong param_1,longlong param_2)

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
    FUN_149364032(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 149364032 FUN_149364032 body=250 status=ok
// SIG undefined FUN_149364032(void)

longlong * FUN_149364032(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145c75f04(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_140044672(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar6 = 0;
      uVar5 = 0;
      do {
        plVar4 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar4 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar6) = *(undefined4 *)(lVar2 + lVar6);
          *(undefined4 *)(lVar3 + 4 + lVar6) = *(undefined4 *)(lVar2 + 4 + lVar6);
        }
        else {
          *(undefined8 *)(lVar3 + lVar6) = *(undefined8 *)(lVar2 + lVar6);
          FUN_14936412c(lVar3 + 8 + lVar6,lVar2 + 8 + lVar6);
          *(undefined8 *)(lVar3 + 0x28 + lVar6) = *(undefined8 *)(lVar2 + 0x28 + lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x30;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 14936412c FUN_14936412c body=146 status=ok
// SIG undefined FUN_14936412c(void)

undefined8 * FUN_14936412c(undefined8 *param_1,undefined8 *param_2)

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
    FUN_140a1e386(param_1,iVar1,0);
    FUN_140a1e307(*param_1,uVar2,iVar1);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar2 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_14591fddc(param_1 + 2,iVar1,0);
    FUN_14591fcf7(param_1[2],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 149364210 FUN_149364210 body=104 status=ok
// SIG undefined FUN_149364210(void)

undefined8 FUN_149364210(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined1 *)(lVar2 + 0x10) = *(undefined1 *)(puVar1 + 5);
      lVar6 = lVar6 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1493642a0 FUN_1493642a0 body=59 status=ok
// SIG undefined FUN_1493642a0(void)

undefined8 FUN_1493642a0(longlong *param_1)

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



// FUNCTION 1493642e6 FUN_1493642e6 body=38 status=ok
// SIG undefined FUN_1493642e6(void)

void FUN_1493642e6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1493643b6 FUN_1493643b6 body=59 status=ok
// SIG undefined FUN_1493643b6(void)

undefined8 FUN_1493643b6(longlong *param_1)

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



// FUNCTION 149364452 FUN_149364452 body=115 status=ok
// SIG undefined FUN_149364452(void)

void FUN_149364452(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1493644c5 FUN_1493644c5 body=52 status=ok
// SIG undefined FUN_1493644c5(void)

void FUN_1493644c5(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1493644fa(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 1493644fa FUN_1493644fa body=119 status=ok
// SIG undefined FUN_1493644fa(void)

undefined8 * FUN_1493644fa(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 2);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  _Src = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



// FUNCTION 149364572 FUN_149364572 body=52 status=ok
// SIG undefined FUN_149364572(void)

void FUN_149364572(longlong param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_1459408f7(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1493645a6 FUN_1493645a6 body=133 status=ok
// SIG undefined FUN_1493645a6(void)

void FUN_1493645a6(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x128);
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined1 *)((longlong)param_2 + 0x80) = 1;
  *(undefined4 *)((longlong)param_2 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb4) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_2 + 200) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_2 + 0x104) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_2 + 0x118) = 0;
  return;
}



// FUNCTION 1493646e2 FUN_1493646e2 body=63 status=ok
// SIG undefined FUN_1493646e2(void)

undefined1 FUN_1493646e2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14936480c(param_2,param_3);
    param_3 = param_3 + 0x128;
    param_2 = param_2 + 0x128;
  }
  return 1;
}



// FUNCTION 14936474a FUN_14936474a body=59 status=ok
// SIG undefined FUN_14936474a(void)

undefined8 FUN_14936474a(longlong *param_1)

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



// FUNCTION 149364796 FUN_149364796 body=40 status=ok
// SIG undefined FUN_149364796(void)

void FUN_149364796(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x128) == '\x01') {
    FUN_145c75dae(param_2);
    *(undefined1 *)(param_2 + 0x128) = 0;
  }
  return;
}



// FUNCTION 14936480c FUN_14936480c body=113 status=ok
// SIG undefined FUN_14936480c(void)

longlong FUN_14936480c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_149363fb8();
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  uVar1 = *(undefined4 *)(param_2 + 100);
  uVar2 = *(undefined4 *)(param_2 + 0x68);
  uVar3 = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  FUN_144a787a6(param_1 + 0x70,param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  FUN_14936487e(param_1 + 0x88,param_2 + 0x88);
  FUN_149364972(param_1 + 0xd8,param_2 + 0xd8);
  return param_1;
}



// FUNCTION 14936487e FUN_14936487e body=122 status=ok
// SIG undefined FUN_14936487e(void)

longlong FUN_14936487e(longlong param_1,longlong param_2)

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
    FUN_1493648f8(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1493648f8 FUN_1493648f8 body=121 status=ok
// SIG undefined FUN_1493648f8(void)

undefined8 * FUN_1493648f8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145c75e8a(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140171ad2(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x14);
    }
  }
  return param_1;
}



// FUNCTION 149364972 FUN_149364972 body=122 status=ok
// SIG undefined FUN_149364972(void)

longlong FUN_149364972(longlong param_1,longlong param_2)

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
    FUN_1493649ec(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1493649ec FUN_1493649ec body=250 status=ok
// SIG undefined FUN_1493649ec(void)

longlong * FUN_1493649ec(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145c76068(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar6 = 0;
      uVar5 = 0;
      do {
        plVar4 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar4 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar6) = *(undefined4 *)(lVar2 + lVar6);
          *(undefined4 *)(lVar3 + 4 + lVar6) = *(undefined4 *)(lVar2 + 4 + lVar6);
        }
        else {
          *(undefined1 *)(lVar3 + lVar6) = *(undefined1 *)(lVar2 + lVar6);
          FUN_149364ae6(lVar3 + 8 + lVar6,lVar2 + 8 + lVar6);
          *(undefined8 *)(lVar3 + 0x20 + lVar6) = *(undefined8 *)(lVar2 + 0x20 + lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x28;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 149364ae6 FUN_149364ae6 body=91 status=ok
// SIG undefined FUN_149364ae6(void)

undefined1 * FUN_149364ae6(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    FUN_149364452(param_1 + 8,iVar1,0);
    FUN_1493644c5(*(undefined8 *)(param_1 + 8),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 149364b42 FUN_149364b42 body=37 status=ok
// SIG undefined FUN_149364b42(void)

void FUN_149364b42(undefined8 param_1,void *param_2)

{
  memset(param_2,0,200);
  FUN_149363336(param_2);
  return;
}



// FUNCTION 149364b8e FUN_149364b8e body=105 status=ok
// SIG undefined FUN_149364b8e(void)

undefined1 FUN_149364b8e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x78);
      uVar2 = *(undefined4 *)(param_3 + -0x74);
      uVar3 = *(undefined4 *)(param_3 + -0x70);
      uVar4 = *(undefined4 *)(param_3 + -0x6c);
      uVar5 = *(undefined4 *)(param_3 + -100);
      uVar6 = *(undefined4 *)(param_3 + -0x60);
      uVar7 = *(undefined4 *)(param_3 + -0x5c);
      *(undefined4 *)(param_2 + -0x68) = *(undefined4 *)(param_3 + -0x68);
      *(undefined4 *)(param_2 + -100) = uVar5;
      *(undefined4 *)(param_2 + -0x60) = uVar6;
      *(undefined4 *)(param_2 + -0x5c) = uVar7;
      *(undefined4 *)(param_2 + -0x78) = uVar1;
      *(undefined4 *)(param_2 + -0x74) = uVar2;
      *(undefined4 *)(param_2 + -0x70) = uVar3;
      *(undefined4 *)(param_2 + -0x6c) = uVar4;
      FUN_14936487e(param_2 + -0x58,param_3 + -0x58);
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_149364972(param_2,param_3);
      param_3 = param_3 + 200;
      param_2 = param_2 + 200;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149364c20 FUN_149364c20 body=59 status=ok
// SIG undefined FUN_149364c20(void)

undefined8 FUN_149364c20(longlong *param_1)

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



// FUNCTION 149364c6c FUN_149364c6c body=40 status=ok
// SIG undefined FUN_149364c6c(void)

void FUN_149364c6c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_1493633b0(param_2);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  return;
}



// FUNCTION 149364d24 FUN_149364d24 body=60 status=ok
// SIG undefined FUN_149364d24(void)

undefined1 FUN_149364d24(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 149364d88 FUN_149364d88 body=59 status=ok
// SIG undefined FUN_149364d88(void)

undefined8 FUN_149364d88(longlong *param_1)

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



// FUNCTION 149364dce FUN_149364dce body=37 status=ok
// SIG undefined FUN_149364dce(void)

void FUN_149364dce(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 149364e44 FUN_149364e44 body=100 status=ok
// SIG undefined FUN_149364e44(void)

void FUN_149364e44(undefined8 param_1,void *param_2)

{
  memset(param_2,0,200);
  *(undefined4 *)((longlong)param_2 + 8) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined1 *)((longlong)param_2 + 0x38) = 1;
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  *(undefined8 *)((longlong)param_2 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x94) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xac) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb4) = 0;
  return;
}



// FUNCTION 149364f22 FUN_149364f22 body=63 status=ok
// SIG undefined FUN_149364f22(void)

undefined1 FUN_149364f22(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14936504c(param_2,param_3);
    param_3 = param_3 + 200;
    param_2 = param_2 + 200;
  }
  return 1;
}



// FUNCTION 149364f8a FUN_149364f8a body=59 status=ok
// SIG undefined FUN_149364f8a(void)

undefined8 FUN_149364f8a(longlong *param_1)

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



// FUNCTION 149364fd6 FUN_149364fd6 body=40 status=ok
// SIG undefined FUN_149364fd6(void)

void FUN_149364fd6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_14935d474(param_2);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  return;
}


