// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1469f96b4 FUN_1469f96b4 body=169 status=ok
// SIG undefined FUN_1469f96b4(void)

longlong FUN_1469f96b4(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_1469fbb64(local_48,param_2,&local_38);
  local_38 = CONCAT62(local_38._2_6_,0x100);
  local_30 = 0;
  local_28 = 0;
  FUN_1469eaea6(&local_30,local_48);
  *(undefined2 *)(param_1 + 0x1d8) = (undefined2)local_38;
  FUN_144a450dc(param_1 + 0x1e0,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469f975e FUN_1469f975e body=89 status=ok
// SIG undefined FUN_1469f975e(void)

void FUN_1469f975e(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(param_1 + 0x268);
  local_10 = *(longlong *)(param_1 + 0x270);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_1428f9e74(&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469f97b8 FUN_1469f97b8 body=103 status=ok
// SIG undefined FUN_1469f97b8(void)

void FUN_1469f97b8(longlong param_1,char param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(param_1 + 0x268);
  local_10 = *(longlong *)(param_1 + 0x270);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_1469fc54e(param_1 + 0x2e8,&local_18,param_2 == '\x01');
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469f9820 FUN_1469f9820 body=178 status=ok
// SIG undefined FUN_1469f9820(void)

longlong FUN_1469f9820(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *(undefined4 *)(param_3 + 1);
  local_40 = *param_3;
  FUN_1469fc5dc(local_50,param_2,&local_40);
  local_40 = 0;
  local_38 = CONCAT31(local_38._1_3_,1);
  local_30 = 0;
  local_28 = 0;
  FUN_140a5c3e8(&local_30,local_50);
  *(undefined1 *)(param_1 + 0x1b0) = (undefined1)local_38;
  *(undefined8 *)(param_1 + 0x1a8) = local_40;
  FUN_144a450dc(param_1 + 0x1b8,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_50);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469f98d4 FUN_1469f98d4 body=188 status=ok
// SIG undefined FUN_1469f98d4(void)

void FUN_1469f98d4(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  char *pcVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = *(undefined8 *)(param_1 + 0x268);
  local_28 = *(longlong *)(param_1 + 0x270);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  cVar1 = FUN_1428f9e74(&local_30);
  plVar2 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  plVar5 = DAT_14c96b350;
  if (cVar1 == '\0') {
    pcVar3 = "Icons.Unpinned";
    puVar4 = &local_40;
  }
  else {
    pcVar3 = "Icons.Pinned";
    puVar4 = &local_38;
  }
  FUN_1446ddc76(puVar4,pcVar3,1);
  if (plVar2 != (longlong *)0x0) {
    plVar5 = plVar2;
  }
  (**(code **)(*plVar5 + 0x50))(plVar5,*puVar4,0,0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469f9992 FUN_1469f9992 body=115 status=ok
// SIG undefined FUN_1469f9992(void)

longlong * FUN_1469f9992(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146a5f0a4(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 1469f9a06 FUN_1469f9a06 body=170 status=ok
// SIG undefined FUN_1469f9a06(void)

longlong FUN_1469f9a06(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined2 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined1 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 1;
  *(undefined1 *)(param_1 + 0x1e8) = 0;
  *(undefined1 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  local_30 = CONCAT11(1,DAT_14c96b23c);
  local_28 = 0;
  uStack_20 = 0;
  *(undefined2 *)(param_1 + 0x70) = local_30;
  FUN_144a450dc(param_1 + 0x78,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469f9ab2 FUN_1469f9ab2 body=115 status=ok
// SIG undefined FUN_1469f9ab2(void)

longlong FUN_1469f9ab2(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  
  if ((undefined4 *)(param_1 + 0x1d8) != param_2) {
    if (*(char *)(param_2 + 4) == '\x01') {
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      *(undefined4 *)(param_1 + 0x1d8) = *param_2;
      *(undefined4 *)(param_1 + 0x1dc) = uVar1;
      *(undefined4 *)(param_1 + 0x1e0) = uVar2;
      *(undefined4 *)(param_1 + 0x1e4) = uVar3;
      uVar4 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x1e8) != '\x01') goto LAB_1469f9adf;
      uVar4 = 0;
    }
    *(undefined1 *)(param_1 + 0x1e8) = uVar4;
  }
LAB_1469f9adf:
  *(undefined1 *)(param_1 + 0x1f0) = *(undefined1 *)(param_2 + 6);
  FUN_144a450dc(param_1 + 0x1f8,param_2 + 8);
  FUN_1449db362(param_2 + 8);
  if (*(char *)(param_2 + 4) == '\x01') {
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return param_1;
}



// FUNCTION 1469f9b26 FUN_1469f9b26 body=56 status=ok
// SIG undefined FUN_1469f9b26(void)

longlong FUN_1469f9b26(longlong param_1,longlong *param_2)

{
  FUN_1469fcd04(param_1 + 0x1a8);
  FUN_1449db362(param_2 + 3);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1469f9b5e FUN_1469f9b5e body=94 status=ok
// SIG undefined FUN_1469f9b5e(void)

undefined8 * FUN_1469f9b5e(undefined8 *param_1,undefined8 *param_2)

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
    FUN_14479fa02(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
  }
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 1469f9bbc FUN_1469f9bbc body=163 status=ok
// SIG undefined FUN_1469f9bbc(void)

longlong FUN_1469f9bbc(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_1469fb124(local_48,param_2,&local_38);
  local_38 = CONCAT62(local_38._2_6_,0x119);
  local_30 = 0;
  local_28 = 0;
  FUN_140fe25fc(&local_30,local_48);
  *(undefined2 *)(param_1 + 0x70) = (undefined2)local_38;
  FUN_144a450dc(param_1 + 0x78,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469f9c60 FUN_1469f9c60 body=53 status=ok
// SIG undefined FUN_1469f9c60(void)

undefined1 * FUN_1469f9c60(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  
  cVar1 = FUN_146a57ad6(*(undefined8 *)(param_1 + 0x268));
  puVar2 = &DAT_14c96b1e1;
  if (cVar1 != '\0') {
    puVar2 = &DAT_14c96b23a;
  }
  *param_2 = *puVar2;
  return param_2;
}



// FUNCTION 1469f9c96 FUN_1469f9c96 body=134 status=ok
// SIG undefined FUN_1469f9c96(void)

undefined8 * FUN_1469f9c96(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_1;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    plVar5 = (longlong *)param_2[1];
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    plVar5 = (longlong *)param_2[1];
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 != 0) {
        return param_1;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      goto joined_r0x0001469f9ced;
    }
    param_2[1] = plVar4;
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
  }
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 != 0) {
    return param_1;
  }
  (**(code **)*plVar5)(plVar5);
  LOCK();
  piVar1 = (int *)((longlong)plVar5 + 0xc);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  UNLOCK();
  plVar4 = plVar5;
joined_r0x0001469f9ced:
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 1469f9d1c FUN_1469f9d1c body=115 status=ok
// SIG undefined FUN_1469f9d1c(void)

longlong * FUN_1469f9d1c(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146a55d60(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 1469f9d90 FUN_1469f9d90 body=78 status=ok
// SIG undefined FUN_1469f9d90(void)

void FUN_1469f9d90(longlong param_1)

{
  FUN_1449db362(param_1 + 0x1f8);
  if (*(char *)(param_1 + 0x1e8) == '\x01') {
    *(undefined1 *)(param_1 + 0x1e8) = 0;
  }
  FUN_1449db362(param_1 + 0x1c0);
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1400020a8();
  }
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 1469f9dde FUN_1469f9dde body=200 status=ok
// SIG undefined FUN_1469f9dde(void)

void FUN_1469f9dde(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x2f8) == '\x01') {
    *(undefined1 *)(param_1 + 0x2f8) = 0;
  }
  if (*(char *)(param_1 + 0x2d8) == '\x01') {
    *(undefined1 *)(param_1 + 0x2d8) = 0;
  }
  if (*(char *)(param_1 + 0x2b8) == '\x01') {
    *(undefined1 *)(param_1 + 0x2b8) = 0;
  }
  FUN_1449db362(param_1 + 0x290);
  FUN_1449db362(param_1 + 0x278);
  FUN_1449db362(param_1 + 0x250);
  FUN_1449db362(param_1 + 0x218);
  FUN_1449db362(param_1 + 0x1e0);
  FUN_1449db362(param_1 + 0x1c8);
  if (*(char *)(param_1 + 0x1c4) == '\x01') {
    *(undefined1 *)(param_1 + 0x1c4) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x1b0);
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
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 1469f9ea6 FUN_1469f9ea6 body=79 status=ok
// SIG undefined FUN_1469f9ea6(void)

void FUN_1469f9ea6(longlong param_1)

{
  if (*(char *)(param_1 + 0x1f1) == '\x01') {
    *(undefined1 *)(param_1 + 0x1f1) = 0;
  }
  FUN_1449db362(param_1 + 0x1e0);
  FUN_1449db362(param_1 + 0x1c0);
  if (*(longlong **)(param_1 + 0x1a8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x10))();
  }
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 1469f9ef6 FUN_1469f9ef6 body=64 status=ok
// SIG undefined FUN_1469f9ef6(void)

undefined8 * FUN_1469f9ef6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f041c0;
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



// FUNCTION 1469f9f3a FUN_1469f9f3a body=81 status=ok
// SIG undefined FUN_1469f9f3a(void)

undefined8 FUN_1469f9f3a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 1469f9f92 FUN_1469f9f92 body=89 status=ok
// SIG undefined FUN_1469f9f92(void)

bool FUN_1469f9f92(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1469f9fdd;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1469f9fdd:
  return lVar6 == param_2;
}



// FUNCTION 1469fa008 FUN_1469fa008 body=118 status=ok
// SIG undefined FUN_1469fa008(void)

void FUN_1469fa008(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f03f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f041c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1469fa07e FUN_1469fa07e body=118 status=ok
// SIG undefined FUN_1469fa07e(void)

void FUN_1469fa07e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f03f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f041c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1469fa0f4 FUN_1469fa0f4 body=156 status=ok
// SIG undefined FUN_1469fa0f4(void)

void FUN_1469fa0f4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f03f80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f041c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469fa180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1469fa190 FUN_1469fa190 body=230 status=ok
// SIG undefined FUN_1469fa190(void)

void FUN_1469fa190(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar7 = *(longlong **)(param_1 + 0x20);
  bVar4 = true;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    iVar6 = (int)plVar7[1];
    lVar8 = 0;
    do {
      if (iVar6 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_1469fa1d9;
      }
      LOCK();
      iVar5 = (int)plVar7[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar8 = *(longlong *)(param_1 + 0x18);
    bVar4 = false;
  }
LAB_1469fa1d9:
  iVar6 = *(int *)(param_1 + 0x30);
  pcVar3 = *(code **)(param_1 + 0x28);
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  (*pcVar3)(lVar8 + iVar6,&local_30);
  if (!bVar4) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469fa278 FUN_1469fa278 body=253 status=ok
// SIG undefined FUN_1469fa278(void)

ulonglong FUN_1469fa278(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined8 unaff_RDI;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_1469fa32d;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar9 = iVar7 == iVar6;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + 0x18);
    if (lVar4 != 0) {
      iVar7 = *(int *)(param_1 + 0x30);
      pcVar5 = *(code **)(param_1 + 0x28);
      local_30 = *param_2;
      local_28 = param_2[1];
      if (local_28 != 0) {
        LOCK();
        *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
        UNLOCK();
      }
      (*pcVar5)(lVar4 + iVar7,&local_30);
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      uVar8 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
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
      goto LAB_1469fa32f;
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
LAB_1469fa32d:
  uVar8 = 0;
LAB_1469fa32f:
  plVar3 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1469fa376 FUN_1469fa376 body=130 status=ok
// SIG undefined FUN_1469fa376(void)

void FUN_1469fa376(longlong *param_1,longlong *param_2)

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



// FUNCTION 1469fa3fa FUN_1469fa3fa body=130 status=ok
// SIG undefined FUN_1469fa3fa(void)

void FUN_1469fa3fa(longlong *param_1,longlong *param_2)

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



// FUNCTION 1469fa47e FUN_1469fa47e body=130 status=ok
// SIG undefined FUN_1469fa47e(void)

void FUN_1469fa47e(longlong *param_1,longlong *param_2)

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



// FUNCTION 1469fa502 FUN_1469fa502 body=29 status=ok
// SIG undefined FUN_1469fa502(void)

undefined8 FUN_1469fa502(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469fa534 FUN_1469fa534 body=93 status=ok
// SIG undefined FUN_1469fa534(void)

void FUN_1469fa534(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f04230;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1469fa592 FUN_1469fa592 body=93 status=ok
// SIG undefined FUN_1469fa592(void)

void FUN_1469fa592(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f04230;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1469fa5f0 FUN_1469fa5f0 body=126 status=ok
// SIG undefined FUN_1469fa5f0(void)

void FUN_1469fa5f0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f04230;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469fa65f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1469fa66e FUN_1469fa66e body=100 status=ok
// SIG undefined FUN_1469fa66e(void)

void FUN_1469fa66e(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x18);
  local_18 = *(undefined8 *)(lVar1 + 0x268);
  local_10 = *(longlong *)(lVar1 + 0x270);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_1469fa73c(lVar1 + 0x2d8,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469fa6d4 FUN_1469fa6d4 body=102 status=ok
// SIG undefined FUN_1469fa6d4(void)

undefined8 FUN_1469fa6d4(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x18);
  local_18 = *(undefined8 *)(lVar1 + 0x268);
  local_10 = *(longlong *)(lVar1 + 0x270);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_1469fa73c(lVar1 + 0x2d8,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469fa73c FUN_1469fa73c body=158 status=ok
// SIG undefined FUN_1469fa73c(void)

ulonglong FUN_1469fa73c(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte unaff_BL;
  byte bVar4;
  undefined8 unaff_RDI;
  undefined7 uVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((int)param_1[1] == 0) || (param_1 = (longlong *)*param_1, param_1 == (longlong *)0x0)) {
    bVar4 = 0;
    uVar5 = 0;
  }
  else {
    local_30 = *param_2;
    local_28 = param_2[1];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
    }
    unaff_BL = (**(code **)(*param_1 + 0x60))(param_1,&local_30);
    uVar5 = (undefined7)((ulonglong)unaff_RDI >> 8);
    bVar4 = 1;
  }
  plVar3 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71(uVar5,bVar4 & unaff_BL) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469fa7dc FUN_1469fa7dc body=340 status=ok
// SIG undefined FUN_1469fa7dc(void)

undefined8 * FUN_1469fa7dc(undefined8 *param_1,undefined8 param_2)

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
  plVar3 = (longlong *)FUN_14001cc68(0x520);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149f042a0;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0x510);
  FUN_1469fa932(plVar4);
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_1469fae80(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_1469fa8c3;
    param_1[1] = 0;
LAB_1469fa88d:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_1469fa8c3;
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
    *param_1 = plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_1469fa8c3;
      goto LAB_1469fa88d;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1469fa8c3;
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
LAB_1469fa8c3:
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
  local_38 = 0x510;
  FUN_140a52e78(*param_1,"STabDrawerTextBlock",
                ".\\Runtime/Slate/Private/Framework/Docking/STabSidebar.cpp",0xcb);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469fa932 FUN_1469fa932 body=126 status=ok
// SIG undefined FUN_1469fa932(void)

undefined8 * FUN_1469fa932(undefined8 *param_1)

{
  FUN_140a560dc();
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfd;
  *param_1 = &PTR_FUN_149f042c0;
  FUN_144a5dc74(param_1 + 0x3c);
  *(undefined1 *)(param_1 + 0x3e) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  FUN_140a581a0(param_1 + 0x42);
  *(undefined4 *)(param_1 + 0x9e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4f4) = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  return param_1;
}



// FUNCTION 1469fa9b0 FUN_1469fa9b0 body=9 status=ok
// SIG undefined FUN_1469fa9b0(void)

void FUN_1469fa9b0(longlong param_1)

{
  FUN_1469fae0c(param_1 + 0x10);
  return;
}



// FUNCTION 1469fa9ba FUN_1469fa9ba body=29 status=ok
// SIG undefined FUN_1469fa9ba(void)

undefined8 FUN_1469fa9ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469fa9d8 FUN_1469fa9d8 body=38 status=ok
// SIG undefined FUN_1469fa9d8(void)

undefined8 FUN_1469fa9d8(undefined8 param_1,int param_2)

{
  FUN_1469fae0c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469fa9fe FUN_1469fa9fe body=344 status=ok
// SIG undefined FUN_1469fa9fe(void)

undefined8 * FUN_1469fa9fe(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined4 local_90;
  longlong *local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined1 local_5e;
  undefined4 local_5c;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar1 = *(undefined8 *)(param_1 + 0x508);
  FUN_144a5dc74(&local_a8);
  plVar2 = (longlong *)FUN_14142e2d2(param_1 + 0x1e0);
  local_98 = (longlong *)*plVar2;
  if (local_98 != (longlong *)0x0) {
    (**(code **)(*local_98 + 8))();
  }
  local_90 = (undefined4)plVar2[1];
  local_88 = local_a8;
  if (local_a8 != (longlong *)0x0) {
    (**(code **)(*local_a8 + 8))();
  }
  local_80 = local_a0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0x3f80000000000000;
  local_60 = 1;
  local_5e = 0;
  local_5c = 0;
  local_58 = 0;
  local_b8 = param_1 + 0x210;
  FUN_146ae4872(uVar1,&local_50,&local_98,param_3);
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x10))();
  }
  if (local_98 != (longlong *)0x0) {
    (**(code **)(*local_98 + 0x10))();
  }
  if (local_a8 != (longlong *)0x0) {
    (**(code **)(*local_a8 + 0x10))();
  }
  *param_2 = local_48;
  param_2[1] = local_50;
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469fab58 FUN_1469fab58 body=690 status=ok
// SIG undefined FUN_1469fab58(void)

void FUN_1469fab58(longlong param_1,undefined8 param_2,float *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,char param_8)

{
  float fVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  float fVar8;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  float *local_160;
  float *local_158;
  undefined1 local_150;
  float local_13c;
  float local_138;
  undefined4 local_134;
  float local_130;
  float local_12c;
  undefined8 local_128;
  double local_120;
  double local_118;
  float local_10c;
  undefined8 local_108;
  undefined1 local_100 [56];
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  undefined8 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  fVar8 = param_3[1];
  fVar1 = *param_3;
  FUN_146ae6dac(*(undefined8 *)(param_1 + 0x508),&local_120);
  dVar2 = local_120;
  if ((double)fVar8 <= local_120) {
    dVar2 = (double)fVar8;
  }
  dVar3 = local_118;
  if ((double)fVar1 <= local_118) {
    dVar3 = (double)fVar1;
  }
  if ((*(int *)(param_1 + 0x500) != 0) && (*(longlong **)(param_1 + 0x4f8) != (longlong *)0x0)) {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x4f8) + 0x30))();
    if (cVar4 != '\0') {
      if (*(int *)(param_1 + 0x500) == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)(param_1 + 0x4f8);
      }
      uVar5 = (**(code **)(*plVar7 + 0x58))();
      *(undefined4 *)(param_1 + 0x4f0) = uVar5;
    }
  }
  iVar6 = -0x5a;
  if (*(int *)(param_1 + 0x4f0) == 0) {
    iVar6 = 0x5a;
  }
  fVar8 = sinf((float)iVar6 * 0.017453292);
  local_c8 = cosf((float)iVar6 * 0.017453292);
  local_c0 = -fVar8;
  local_b8 = 0;
  local_168 = &local_128;
  local_12c = (float)(dVar2 * 0.5 - dVar3 * 0.5);
  local_128 = 0x3f0000003f000000;
  local_130 = (float)(dVar3 * 0.5 - dVar2 * 0.5);
  local_134 = 0x3f800000;
  local_138 = (float)dVar3;
  local_13c = (float)dVar2;
  local_158 = param_3 + 7;
  local_108 = *(undefined8 *)(param_3 + 3);
  local_10c = param_3[2];
  local_160 = &local_10c;
  local_c4 = fVar8;
  local_bc = local_c8;
  FUN_146978c22(local_100);
  if (param_8 == '\0') {
    local_150 = 0;
  }
  else {
    local_150 = *(undefined1 *)(param_1 + 0x3a);
  }
  local_158 = (float *)param_7;
  local_160 = (float *)CONCAT44(local_160._4_4_,param_6);
  local_168 = (undefined8 *)param_5;
  FUN_140a8ee82(*(undefined8 *)(param_1 + 0x508),param_2,local_100,param_4);
  if ((local_b0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469fae0c FUN_1469fae0c body=115 status=ok
// SIG undefined FUN_1469fae0c(void)

void FUN_1469fae0c(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149f042c0;
  lVar1 = param_1[0xa1];
  if (lVar1 != 0) {
    FUN_140f1f828(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_1449db362(param_1 + 0x9f);
  FUN_140e9e952(param_1 + 0x42);
  FUN_1449db362(param_1 + 0x3f);
  if ((longlong *)param_1[0x3c] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x3c] + 0x10))();
  }
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 1469fae80 FUN_1469fae80 body=167 status=ok
// SIG undefined FUN_1469fae80(void)

void FUN_1469fae80(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1469faefb;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1469faefb;
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
LAB_1469faefb:
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
                    /* WARNING: Could not recover jumptable at 0x0001469faf1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1469faf28 FUN_1469faf28 body=507 status=ok
// SIG undefined FUN_1469faf28(void)

void FUN_1469faf28(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 auStack_3c8 [32];
  undefined1 *local_3a8;
  undefined8 *local_3a0;
  undefined8 *local_398;
  undefined8 *local_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  longlong *local_370;
  undefined8 local_368;
  longlong *local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined1 local_33e;
  char local_33d;
  undefined1 local_33c;
  undefined1 local_33b;
  undefined1 local_33a;
  undefined1 local_339;
  undefined1 local_338 [744];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  FUN_14133824c(param_1 + 0x1e0,param_2 + 0x1a8);
  FUN_140a5e6b8(param_1 + 0x210,*(undefined8 *)(param_2 + 0x1d0));
  *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(param_2 + 0x1d8);
  *(undefined1 *)(param_1 + 0x4f4) = *(undefined1 *)(param_2 + 0x1dc);
  FUN_1469e5a6c(param_1 + 0x4f8,param_2 + 0x1e0);
  FUN_140a5c830(&local_378);
  local_388 = 0;
  uStack_380 = 0;
  uVar4 = FUN_140a5e2a8();
  uVar5 = FUN_14001cc68(0x70,0x10);
  local_358 = 0;
  uStack_350 = 0;
  local_368 = local_378;
  local_360 = local_370;
  if (local_370 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_370 + 1) = (int)local_370[1] + 1;
    UNLOCK();
  }
  local_339 = 0;
  local_33b = 0;
  FUN_140e9ea3a(local_338,uVar4);
  local_390 = &local_358;
  local_398 = &local_368;
  local_3a0 = &local_388;
  local_3a8 = &local_33a;
  FUN_140a5eb46(uVar5,param_1,local_338,&local_33c);
  lVar3 = *(longlong *)(param_1 + 0x508);
  *(undefined8 *)(param_1 + 0x508) = uVar5;
  if (lVar3 != 0) {
    FUN_140f1f828(lVar3);
    FUN_1400020a8(lVar3);
  }
  FUN_1449db362(&local_388);
  if (local_370 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_370 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_370)(local_370);
      LOCK();
      piVar2 = (int *)((longlong)local_370 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_370 + 0x10))(local_370);
      }
    }
  }
  puVar6 = (undefined1 *)(param_1 + 0x4e1);
  local_33d = '\x01';
  if (*(char *)(param_2 + 0x1f1) != '\0') {
    puVar6 = (undefined1 *)(param_2 + 0x1f0);
    local_33d = *(char *)(param_2 + 0x1f1);
  }
  local_33e = *puVar6;
  FUN_146adddde(*(undefined8 *)(param_1 + 0x508));
  if ((local_50 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469fb124 FUN_1469fb124 body=386 status=ok
// SIG undefined FUN_1469fb124(void)

longlong * FUN_1469fb124(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1469fb235:
    *puVar5 = &PTR_LAB_149f055c0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_149f04500;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1469fb235;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f055c0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_149f04500;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 1469fb2a6 FUN_1469fb2a6 body=64 status=ok
// SIG undefined FUN_1469fb2a6(void)

undefined8 * FUN_1469fb2a6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f04500;
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



// FUNCTION 1469fb2ea FUN_1469fb2ea body=81 status=ok
// SIG undefined FUN_1469fb2ea(void)

undefined8 FUN_1469fb2ea(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 1469fb342 FUN_1469fb342 body=89 status=ok
// SIG undefined FUN_1469fb342(void)

bool FUN_1469fb342(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1469fb38d;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1469fb38d:
  return lVar6 == param_2;
}



// FUNCTION 1469fb3b8 FUN_1469fb3b8 body=118 status=ok
// SIG undefined FUN_1469fb3b8(void)

void FUN_1469fb3b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f055c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f04500;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1469fb42e FUN_1469fb42e body=118 status=ok
// SIG undefined FUN_1469fb42e(void)

void FUN_1469fb42e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f055c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f04500;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1469fb4a4 FUN_1469fb4a4 body=156 status=ok
// SIG undefined FUN_1469fb4a4(void)

void FUN_1469fb4a4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f055c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f04500;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469fb530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1469fb540 FUN_1469fb540 body=105 status=ok
// SIG undefined FUN_1469fb540(void)

undefined8 FUN_1469fb540(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1469fb594:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1469fb594;
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



// FUNCTION 1469fb5aa FUN_1469fb5aa body=143 status=ok
// SIG undefined FUN_1469fb5aa(void)

ulonglong FUN_1469fb5aa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1469fb618:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1469fb618;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),&local_19);
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1469fb63a FUN_1469fb63a body=386 status=ok
// SIG undefined FUN_1469fb63a(void)

longlong * FUN_1469fb63a(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1469fb74b:
    *puVar5 = &PTR_LAB_149f05a70;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_149f04570;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1469fb74b;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f05a70;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_149f04570;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 1469fb7bc FUN_1469fb7bc body=64 status=ok
// SIG undefined FUN_1469fb7bc(void)

undefined8 * FUN_1469fb7bc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f04570;
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



// FUNCTION 1469fb800 FUN_1469fb800 body=81 status=ok
// SIG undefined FUN_1469fb800(void)

undefined8 FUN_1469fb800(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 1469fb858 FUN_1469fb858 body=89 status=ok
// SIG undefined FUN_1469fb858(void)

bool FUN_1469fb858(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1469fb8a3;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1469fb8a3:
  return lVar6 == param_2;
}



// FUNCTION 1469fb8ce FUN_1469fb8ce body=118 status=ok
// SIG undefined FUN_1469fb8ce(void)

void FUN_1469fb8ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f04570;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1469fb944 FUN_1469fb944 body=118 status=ok
// SIG undefined FUN_1469fb944(void)

void FUN_1469fb944(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f04570;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1469fb9ba FUN_1469fb9ba body=156 status=ok
// SIG undefined FUN_1469fb9ba(void)

void FUN_1469fb9ba(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f05a70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f04570;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469fba46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1469fba56 FUN_1469fba56 body=105 status=ok
// SIG undefined FUN_1469fba56(void)

undefined8 FUN_1469fba56(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1469fbaaa:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1469fbaaa;
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



// FUNCTION 1469fbac0 FUN_1469fbac0 body=162 status=ok
// SIG undefined FUN_1469fbac0(void)

ulonglong FUN_1469fbac0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1469fbb40:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1469fbb40;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if ((lVar4 != 0) &&
       ((**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_30),
       local_30[0] != (longlong *)0x0)) {
      (**(code **)(*local_30[0] + 0x10))();
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1469fbb64 FUN_1469fbb64 body=386 status=ok
// SIG undefined FUN_1469fbb64(void)

longlong * FUN_1469fbb64(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1469fbc75:
    *puVar5 = &PTR_LAB_149f05ae0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_149f04640;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1469fbc75;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f05ae0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_149f04640;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 1469fbce6 FUN_1469fbce6 body=64 status=ok
// SIG undefined FUN_1469fbce6(void)

undefined8 * FUN_1469fbce6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f04640;
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



// FUNCTION 1469fbd2a FUN_1469fbd2a body=81 status=ok
// SIG undefined FUN_1469fbd2a(void)

undefined8 FUN_1469fbd2a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 1469fbd82 FUN_1469fbd82 body=89 status=ok
// SIG undefined FUN_1469fbd82(void)

bool FUN_1469fbd82(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1469fbdcd;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1469fbdcd:
  return lVar6 == param_2;
}



// FUNCTION 1469fbe04 FUN_1469fbe04 body=118 status=ok
// SIG undefined FUN_1469fbe04(void)

void FUN_1469fbe04(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05ae0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f04640;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1469fbe7a FUN_1469fbe7a body=118 status=ok
// SIG undefined FUN_1469fbe7a(void)

void FUN_1469fbe7a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05ae0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f04640;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1469fbef0 FUN_1469fbef0 body=156 status=ok
// SIG undefined FUN_1469fbef0(void)

void FUN_1469fbef0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f05ae0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f04640;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469fbf7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1469fbf8c FUN_1469fbf8c body=100 status=ok
// SIG undefined FUN_1469fbf8c(void)

ulonglong FUN_1469fbf8c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar8) {
        uVar6 = (**(code **)(param_1 + 0x28))
                          ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
        return (ulonglong)uVar6;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001469fbfec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar7;
}



// FUNCTION 1469fbff0 FUN_1469fbff0 body=100 status=ok
// SIG undefined FUN_1469fbff0(void)

ulonglong FUN_1469fbff0(longlong param_1)

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
LAB_1469fc049:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1469fc049;
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



// FUNCTION 1469fc056 FUN_1469fc056 body=386 status=ok
// SIG undefined FUN_1469fc056(void)

longlong * FUN_1469fc056(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1469fc167:
    *puVar5 = &PTR_LAB_149f04bf0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_149f046b0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1469fc167;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f04bf0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_149f046b0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 1469fc1d8 FUN_1469fc1d8 body=64 status=ok
// SIG undefined FUN_1469fc1d8(void)

undefined8 * FUN_1469fc1d8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f046b0;
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



// FUNCTION 1469fc21c FUN_1469fc21c body=81 status=ok
// SIG undefined FUN_1469fc21c(void)

undefined8 FUN_1469fc21c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 1469fc274 FUN_1469fc274 body=89 status=ok
// SIG undefined FUN_1469fc274(void)

bool FUN_1469fc274(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1469fc2bf;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1469fc2bf:
  return lVar6 == param_2;
}



// FUNCTION 1469fc2f6 FUN_1469fc2f6 body=118 status=ok
// SIG undefined FUN_1469fc2f6(void)

void FUN_1469fc2f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f04bf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f046b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1469fc36c FUN_1469fc36c body=118 status=ok
// SIG undefined FUN_1469fc36c(void)

void FUN_1469fc36c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f04bf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f046b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1469fc3e2 FUN_1469fc3e2 body=156 status=ok
// SIG undefined FUN_1469fc3e2(void)

void FUN_1469fc3e2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f04bf0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f046b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469fc46e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1469fc47e FUN_1469fc47e body=104 status=ok
// SIG undefined FUN_1469fc47e(void)

void FUN_1469fc47e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x0001469fc4cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001469fc4dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1469fc4e6 FUN_1469fc4e6 body=101 status=ok
// SIG undefined FUN_1469fc4e6(void)

ulonglong FUN_1469fc4e6(longlong param_1)

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
LAB_1469fc540:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1469fc540;
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



// FUNCTION 1469fc54e FUN_1469fc54e body=140 status=ok
// SIG undefined FUN_1469fc54e(void)

void FUN_1469fc54e(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    local_20 = *param_2;
    local_18 = param_2[1];
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*param_1 + 0x60))(param_1,&local_20);
  }
  plVar3 = (longlong *)param_2[1];
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469fc5dc FUN_1469fc5dc body=386 status=ok
// SIG undefined FUN_1469fc5dc(void)

longlong * FUN_1469fc5dc(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1469fc6ed:
    *puVar5 = &PTR_LAB_149f056a0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_149f04720;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1469fc6ed;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f056a0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_149f04720;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 1469fc75e FUN_1469fc75e body=64 status=ok
// SIG undefined FUN_1469fc75e(void)

undefined8 * FUN_1469fc75e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f04720;
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



// FUNCTION 1469fc7a2 FUN_1469fc7a2 body=81 status=ok
// SIG undefined FUN_1469fc7a2(void)

undefined8 FUN_1469fc7a2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 1469fc7fa FUN_1469fc7fa body=89 status=ok
// SIG undefined FUN_1469fc7fa(void)

bool FUN_1469fc7fa(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1469fc845;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1469fc845:
  return lVar6 == param_2;
}



// FUNCTION 1469fc870 FUN_1469fc870 body=118 status=ok
// SIG undefined FUN_1469fc870(void)

void FUN_1469fc870(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f056a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f04720;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1469fc8e6 FUN_1469fc8e6 body=118 status=ok
// SIG undefined FUN_1469fc8e6(void)

void FUN_1469fc8e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f056a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f04720;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1469fc95c FUN_1469fc95c body=156 status=ok
// SIG undefined FUN_1469fc95c(void)

void FUN_1469fc95c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f056a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f04720;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469fc9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1469fc9f8 FUN_1469fc9f8 body=102 status=ok
// SIG undefined FUN_1469fc9f8(void)

undefined8 FUN_1469fc9f8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar7) {
        uVar6 = (**(code **)(param_1 + 0x28))
                          ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
        return uVar6;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001469fca5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar6;
}



// FUNCTION 1469fca5e FUN_1469fca5e body=100 status=ok
// SIG undefined FUN_1469fca5e(void)

ulonglong FUN_1469fca5e(longlong param_1)

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
LAB_1469fcab7:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1469fcab7;
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



// FUNCTION 1469fcac2 FUN_1469fcac2 body=369 status=ok
// SIG undefined FUN_1469fcac2(void)

longlong *
FUN_1469fcac2(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar4 = (longlong *)FUN_14001cc68(0x410,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149f050b0;
  plVar1 = plVar4 + 2;
  FUN_146a5ef18(plVar1);
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_1469fcc5c(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_1469fcbc7;
    param_1[1] = 0;
LAB_1469fcb8a:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1469fcbc7;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (local_48 != plVar4) {
      param_1[1] = (longlong)local_48;
      if (plVar4 == (longlong *)0x0) goto LAB_1469fcbc7;
      goto LAB_1469fcb8a;
    }
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1469fcbc7;
    (**(code **)*local_48)(local_48);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_1469fcbc7:
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_58 = 0x400;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469fcc34 FUN_1469fcc34 body=9 status=ok
// SIG undefined FUN_1469fcc34(void)

void FUN_1469fcc34(longlong param_1)

{
  FUN_146a5efec(param_1 + 0x10);
  return;
}



// FUNCTION 1469fcc3e FUN_1469fcc3e body=29 status=ok
// SIG undefined FUN_1469fcc3e(void)

undefined8 FUN_1469fcc3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469fcc5c FUN_1469fcc5c body=167 status=ok
// SIG undefined FUN_1469fcc5c(void)

void FUN_1469fcc5c(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1469fccd7;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1469fccd7;
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
LAB_1469fccd7:
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
                    /* WARNING: Could not recover jumptable at 0x0001469fccf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1469fcd04 FUN_1469fcd04 body=89 status=ok
// SIG undefined FUN_1469fcd04(void)

longlong * FUN_1469fcd04(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  *(char *)(param_1 + 2) = (char)param_2[2];
  FUN_144a450dc(param_1 + 3,param_2 + 3);
  return param_1;
}



// FUNCTION 1469fcd5e FUN_1469fcd5e body=369 status=ok
// SIG undefined FUN_1469fcd5e(void)

longlong *
FUN_1469fcd5e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar4 = (longlong *)FUN_14001cc68(0x2a8,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149f04ef0;
  plVar1 = plVar4 + 2;
  FUN_146a55cbe(plVar1);
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_1469fcef8(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_1469fce63;
    param_1[1] = 0;
LAB_1469fce26:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1469fce63;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_50;
    plVar4 = (longlong *)param_1[1];
    if (local_48 != plVar4) {
      param_1[1] = (longlong)local_48;
      if (plVar4 == (longlong *)0x0) goto LAB_1469fce63;
      goto LAB_1469fce26;
    }
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1469fce63;
    (**(code **)*local_48)(local_48);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_1469fce63:
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_58 = 0x298;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469fced0 FUN_1469fced0 body=9 status=ok
// SIG undefined FUN_1469fced0(void)

void FUN_1469fced0(longlong param_1)

{
  FUN_146a55d0a(param_1 + 0x10);
  return;
}



// FUNCTION 1469fceda FUN_1469fceda body=29 status=ok
// SIG undefined FUN_1469fceda(void)

undefined8 FUN_1469fceda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469fcef8 FUN_1469fcef8 body=167 status=ok
// SIG undefined FUN_1469fcef8(void)

void FUN_1469fcef8(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1469fcf73;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1469fcf73;
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
LAB_1469fcf73:
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
                    /* WARNING: Could not recover jumptable at 0x0001469fcf93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1469fcfa0 FUN_1469fcfa0 body=132 status=ok
// SIG undefined FUN_1469fcfa0(void)

void FUN_1469fcfa0(longlong param_1,int param_2)

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



// FUNCTION 1469fd026 FUN_1469fd026 body=62 status=ok
// SIG undefined FUN_1469fd026(void)

void FUN_1469fd026(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1469fd064(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 1469fd064 FUN_1469fd064 body=93 status=ok
// SIG undefined FUN_1469fd064(void)

ulonglong FUN_1469fd064(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 1469fd0c2 FUN_1469fd0c2 body=132 status=ok
// SIG undefined FUN_1469fd0c2(void)

void FUN_1469fd0c2(longlong param_1,int param_2)

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



// FUNCTION 1469fd148 FUN_1469fd148 body=38 status=ok
// SIG undefined FUN_1469fd148(void)

undefined8 FUN_1469fd148(undefined8 param_1,int param_2)

{
  FUN_1469fd590();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469fd172 FUN_1469fd172 body=81 status=ok
// SIG undefined FUN_1469fd172(void)

undefined8 FUN_1469fd172(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x20);
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
  return uVar6;
}



// FUNCTION 1469fd1ca FUN_1469fd1ca body=89 status=ok
// SIG undefined FUN_1469fd1ca(void)

bool FUN_1469fd1ca(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1469fd215;
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
    lVar6 = *(longlong *)(param_1 + 0x20);
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
LAB_1469fd215:
  return lVar6 == param_2;
}



// FUNCTION 1469fd24c FUN_1469fd24c body=143 status=ok
// SIG undefined FUN_1469fd24c(void)

void FUN_1469fd24c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f04820;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  puVar1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_149f047b0;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[7] = uVar3;
  return;
}



// FUNCTION 1469fd2dc FUN_1469fd2dc body=143 status=ok
// SIG undefined FUN_1469fd2dc(void)

void FUN_1469fd2dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f04820;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  puVar1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_149f047b0;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[7] = uVar3;
  return;
}



// FUNCTION 1469fd36c FUN_1469fd36c body=181 status=ok
// SIG undefined FUN_1469fd36c(void)

void FUN_1469fd36c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  _LIST_ENTRY *p_Var2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f04820;
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  p_Var2 = *(_LIST_ENTRY **)(param_1 + 0x10);
  (p_Var1->ProcessLocksList).Flink = p_Var2;
  if (p_Var2 != (_LIST_ENTRY *)0x0) {
    LOCK();
    *(int *)&p_Var2->Blink = *(int *)&p_Var2->Blink + 1;
    UNLOCK();
  }
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined ***)p_Var1 = &PTR_FUN_149f047b0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar3;
  p_Var1->ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  lVar4 = *(longlong *)(param_1 + 0x28);
  p_Var1->Flags = (int)lVar4;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar4 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)lVar4 >> 0x30);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  uVar5 = *(undefined4 *)(param_1 + 0x30);
  uVar6 = *(undefined4 *)(param_1 + 0x34);
  uVar7 = *(undefined4 *)(param_1 + 0x38);
  uVar8 = *(undefined4 *)(param_1 + 0x3c);
  p_Var1[1].Type = (short)uVar5;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar5 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar6;
  *(undefined4 *)&p_Var1[1].CriticalSection = uVar7;
  *(undefined4 *)((longlong)&p_Var1[1].CriticalSection + 4) = uVar8;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469fd411. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1469fd422 FUN_1469fd422 body=187 status=ok
// SIG undefined FUN_1469fd422(void)

void FUN_1469fd422(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar7 = *(longlong **)(param_1 + 0x28);
  bVar4 = true;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    iVar6 = (int)plVar7[1];
    lVar8 = 0;
    do {
      if (iVar6 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_1469fd468;
      }
      LOCK();
      iVar5 = (int)plVar7[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar8 = *(longlong *)(param_1 + 0x20);
    bVar4 = false;
  }
LAB_1469fd468:
  iVar6 = *(int *)(param_1 + 0x38);
  pcVar3 = *(code **)(param_1 + 0x30);
  local_28 = *(undefined8 *)(param_1 + 8);
  local_20 = *(longlong *)(param_1 + 0x10);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  (*pcVar3)(lVar8 + iVar6,&local_28);
  if (!bVar4) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469fd4de FUN_1469fd4de body=175 status=ok
// SIG undefined FUN_1469fd4de(void)

ulonglong FUN_1469fd4de(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
LAB_1469fd56c:
    uVar8 = 0;
  }
  else {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_1469fd56c;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar9 = iVar7 == iVar6;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + 0x20);
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      iVar7 = *(int *)(param_1 + 0x38);
      pcVar5 = *(code **)(param_1 + 0x30);
      local_28 = *(undefined8 *)(param_1 + 8);
      local_20 = *(longlong *)(param_1 + 0x10);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
        UNLOCK();
      }
      (*pcVar5)(lVar4 + iVar7,&local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1469fd590 FUN_1469fd590 body=100 status=ok
// SIG undefined FUN_1469fd590(void)

void FUN_1469fd590(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f047b0;
  plVar3 = (longlong *)param_1[5];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *param_1 = &PTR_LAB_149f04820;
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x0001469fd5e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1469fd5f4 FUN_1469fd5f4 body=263 status=ok
// SIG undefined FUN_1469fd5f4(void)

void FUN_1469fd5f4(longlong *param_1,undefined8 *param_2)

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
        FUN_1469f55de(plVar2 + lVar10 * 2,iVar8);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar6;
    } while (lVar11 < lVar13);
    *(int *)(param_1 + 1) = iVar12;
  }
  return;
}



// FUNCTION 1469fd6fc FUN_1469fd6fc body=88 status=ok
// SIG undefined FUN_1469fd6fc(void)

void FUN_1469fd6fc(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1469fd754 FUN_1469fd754 body=40 status=ok
// SIG undefined FUN_1469fd754(void)

void FUN_1469fd754(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
    lVar1 = *(longlong *)(param_2 + 8 + lVar2);
    *(longlong *)(param_1 + 8 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar2 = lVar2 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1469fd77c FUN_1469fd77c body=64 status=ok
// SIG undefined FUN_1469fd77c(void)

undefined8 * FUN_1469fd77c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f04890;
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



// FUNCTION 1469fd7c0 FUN_1469fd7c0 body=81 status=ok
// SIG undefined FUN_1469fd7c0(void)

undefined8 FUN_1469fd7c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 1469fd818 FUN_1469fd818 body=89 status=ok
// SIG undefined FUN_1469fd818(void)

bool FUN_1469fd818(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1469fd863;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1469fd863:
  return lVar6 == param_2;
}



// FUNCTION 1469fd88e FUN_1469fd88e body=118 status=ok
// SIG undefined FUN_1469fd88e(void)

void FUN_1469fd88e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ed0600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f04890;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1469fd904 FUN_1469fd904 body=118 status=ok
// SIG undefined FUN_1469fd904(void)

void FUN_1469fd904(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ed0600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f04890;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1469fd97a FUN_1469fd97a body=156 status=ok
// SIG undefined FUN_1469fd97a(void)

void FUN_1469fd97a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149ed0600;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f04890;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469fda06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1469fda16 FUN_1469fda16 body=103 status=ok
// SIG undefined FUN_1469fda16(void)

ulonglong FUN_1469fda16(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar8) {
        uVar6 = (**(code **)(param_1 + 0x28))
                          ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
        return (ulonglong)uVar6;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001469fda7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar7;
}



// FUNCTION 1469fda7e FUN_1469fda7e body=100 status=ok
// SIG undefined FUN_1469fda7e(void)

ulonglong FUN_1469fda7e(longlong param_1)

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
LAB_1469fdad7:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1469fdad7;
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



// FUNCTION 1469fdae2 FUN_1469fdae2 body=340 status=ok
// SIG undefined FUN_1469fdae2(void)

undefined8 * FUN_1469fdae2(undefined8 *param_1,undefined8 param_2)

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
  plVar3 = (longlong *)FUN_14001cc68(0x3e0);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149f04900;
  plVar4 = plVar3 + 2;
  memset(plVar4,0,0x3d0);
  FUN_1469fdc38(plVar4);
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_1469fdce4(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_1469fdbc9;
    param_1[1] = 0;
LAB_1469fdb93:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_1469fdbc9;
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
    *param_1 = plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_1469fdbc9;
      goto LAB_1469fdb93;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1469fdbc9;
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
LAB_1469fdbc9:
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
  local_38 = 0x3d0;
  FUN_140a52e78(*param_1,"STabDrawer",".\\Runtime/Slate/Private/Framework/Docking/STabSidebar.cpp",
                0x318);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469fdc38 FUN_1469fdc38 body=132 status=ok
// SIG undefined FUN_1469fdc38(void)

undefined8 * FUN_1469fdc38(undefined8 *param_1)

{
  FUN_140a55f88();
  *param_1 = &PTR_FUN_149f00a00;
  FUN_14570e3a0(param_1 + 0x4d);
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0xffffffffffffffff;
  FUN_14285ff5a(param_1 + 0x61);
  return param_1;
}



// FUNCTION 1469fdcbc FUN_1469fdcbc body=9 status=ok
// SIG undefined FUN_1469fdcbc(void)

void FUN_1469fdcbc(longlong param_1)

{
  FUN_1469d71b0(param_1 + 0x10);
  return;
}



// FUNCTION 1469fdcc6 FUN_1469fdcc6 body=29 status=ok
// SIG undefined FUN_1469fdcc6(void)

undefined8 FUN_1469fdcc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469fdce4 FUN_1469fdce4 body=167 status=ok
// SIG undefined FUN_1469fdce4(void)

void FUN_1469fdce4(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1469fdd5f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1469fdd5f;
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
LAB_1469fdd5f:
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
                    /* WARNING: Could not recover jumptable at 0x0001469fdd7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1469fdd8c FUN_1469fdd8c body=386 status=ok
// SIG undefined FUN_1469fdd8c(void)

longlong * FUN_1469fdd8c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1469fde9d:
    *puVar5 = &PTR_LAB_149f04990;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_149f04920;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1469fde9d;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f04990;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_149f04920;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 1469fdf0e FUN_1469fdf0e body=64 status=ok
// SIG undefined FUN_1469fdf0e(void)

undefined8 * FUN_1469fdf0e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f04920;
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



// FUNCTION 1469fdf52 FUN_1469fdf52 body=81 status=ok
// SIG undefined FUN_1469fdf52(void)

undefined8 FUN_1469fdf52(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 1469fdfaa FUN_1469fdfaa body=89 status=ok
// SIG undefined FUN_1469fdfaa(void)

bool FUN_1469fdfaa(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1469fdff5;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1469fdff5:
  return lVar6 == param_2;
}



// FUNCTION 1469fe02c FUN_1469fe02c body=118 status=ok
// SIG undefined FUN_1469fe02c(void)

void FUN_1469fe02c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f04990;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f04920;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1469fe0a2 FUN_1469fe0a2 body=118 status=ok
// SIG undefined FUN_1469fe0a2(void)

void FUN_1469fe0a2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f04990;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f04920;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1469fe118 FUN_1469fe118 body=156 status=ok
// SIG undefined FUN_1469fe118(void)

void FUN_1469fe118(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f04990;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f04920;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469fe1a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1469fe1b4 FUN_1469fe1b4 body=230 status=ok
// SIG undefined FUN_1469fe1b4(void)

void FUN_1469fe1b4(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar7 = *(longlong **)(param_1 + 0x20);
  bVar4 = true;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    iVar6 = (int)plVar7[1];
    lVar8 = 0;
    do {
      if (iVar6 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_1469fe1fd;
      }
      LOCK();
      iVar5 = (int)plVar7[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar8 = *(longlong *)(param_1 + 0x18);
    bVar4 = false;
  }
LAB_1469fe1fd:
  iVar6 = *(int *)(param_1 + 0x30);
  pcVar3 = *(code **)(param_1 + 0x28);
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  (*pcVar3)(lVar8 + iVar6,&local_30);
  if (!bVar4) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469fe29c FUN_1469fe29c body=253 status=ok
// SIG undefined FUN_1469fe29c(void)

ulonglong FUN_1469fe29c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined8 unaff_RDI;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_1469fe351;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar9 = iVar7 == iVar6;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + 0x18);
    if (lVar4 != 0) {
      iVar7 = *(int *)(param_1 + 0x30);
      pcVar5 = *(code **)(param_1 + 0x28);
      local_30 = *param_2;
      local_28 = param_2[1];
      if (local_28 != 0) {
        LOCK();
        *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
        UNLOCK();
      }
      (*pcVar5)(lVar4 + iVar7,&local_30);
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      uVar8 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
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
      goto LAB_1469fe353;
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
LAB_1469fe351:
  uVar8 = 0;
LAB_1469fe353:
  plVar3 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1469fe39c FUN_1469fe39c body=386 status=ok
// SIG undefined FUN_1469fe39c(void)

longlong * FUN_1469fe39c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1469fe4ad:
    *puVar5 = &PTR_LAB_149f04a70;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_149f04a00;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1469fe4ad;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f04a70;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_149f04a00;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 1469fe51e FUN_1469fe51e body=64 status=ok
// SIG undefined FUN_1469fe51e(void)

undefined8 * FUN_1469fe51e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f04a00;
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



// FUNCTION 1469fe562 FUN_1469fe562 body=81 status=ok
// SIG undefined FUN_1469fe562(void)

undefined8 FUN_1469fe562(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 1469fe5ba FUN_1469fe5ba body=89 status=ok
// SIG undefined FUN_1469fe5ba(void)

bool FUN_1469fe5ba(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1469fe605;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1469fe605:
  return lVar6 == param_2;
}



// FUNCTION 1469fe63c FUN_1469fe63c body=118 status=ok
// SIG undefined FUN_1469fe63c(void)

void FUN_1469fe63c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f04a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f04a00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1469fe6b2 FUN_1469fe6b2 body=118 status=ok
// SIG undefined FUN_1469fe6b2(void)

void FUN_1469fe6b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f04a70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f04a00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1469fe728 FUN_1469fe728 body=156 status=ok
// SIG undefined FUN_1469fe728(void)

void FUN_1469fe728(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f04a70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f04a00;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469fe7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1469fe7c4 FUN_1469fe7c4 body=230 status=ok
// SIG undefined FUN_1469fe7c4(void)

void FUN_1469fe7c4(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar7 = *(longlong **)(param_1 + 0x20);
  bVar4 = true;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    iVar6 = (int)plVar7[1];
    lVar8 = 0;
    do {
      if (iVar6 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_1469fe80d;
      }
      LOCK();
      iVar5 = (int)plVar7[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar8 = *(longlong *)(param_1 + 0x18);
    bVar4 = false;
  }
LAB_1469fe80d:
  iVar6 = *(int *)(param_1 + 0x30);
  pcVar3 = *(code **)(param_1 + 0x28);
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  (*pcVar3)(lVar8 + iVar6,&local_30);
  if (!bVar4) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469fe8ac FUN_1469fe8ac body=252 status=ok
// SIG undefined FUN_1469fe8ac(void)

ulonglong FUN_1469fe8ac(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_1469fe960;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar9 = iVar7 == iVar6;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + 0x18);
    if (lVar4 != 0) {
      iVar7 = *(int *)(param_1 + 0x30);
      pcVar5 = *(code **)(param_1 + 0x28);
      local_30 = *param_2;
      local_28 = param_2[1];
      if (local_28 != 0) {
        LOCK();
        *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
        UNLOCK();
      }
      (*pcVar5)(lVar4 + iVar7,&local_30);
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      uVar8 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
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
      goto LAB_1469fe962;
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
LAB_1469fe960:
  uVar8 = 0;
LAB_1469fe962:
  plVar3 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1469fe9ac FUN_1469fe9ac body=142 status=ok
// SIG undefined FUN_1469fe9ac(void)

void FUN_1469fe9ac(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined1 *)param_1[2];
  local_18 = *(undefined8 *)param_1[1];
  local_10 = ((undefined8 *)param_1[1])[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 0xc) = *(int *)(local_10 + 0xc) + 1;
    UNLOCK();
  }
  local_28 = *(undefined8 *)*param_1;
  local_20 = ((undefined8 *)*param_1)[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_1469d72aa(param_2,param_3,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469fea3c FUN_1469fea3c body=132 status=ok
// SIG undefined FUN_1469fea3c(void)

void FUN_1469fea3c(longlong param_1,int param_2)

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



// FUNCTION 1469feac2 FUN_1469feac2 body=95 status=ok
// SIG undefined FUN_1469feac2(void)

undefined8 * FUN_1469feac2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1469feba7(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1469febde(param_1,iVar1);
      FUN_1469fec40(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1469feb22 FUN_1469feb22 body=132 status=ok
// SIG undefined FUN_1469feb22(void)

void FUN_1469feb22(longlong param_1,int param_2)

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



// FUNCTION 1469feba7 FUN_1469feba7 body=54 status=ok
// SIG undefined FUN_1469feba7(void)

void FUN_1469feba7(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1469febde FUN_1469febde body=98 status=ok
// SIG undefined FUN_1469febde(void)

void FUN_1469febde(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1469fec40 FUN_1469fec40 body=45 status=ok
// SIG undefined FUN_1469fec40(void)

void FUN_1469fec40(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1469fec6e FUN_1469fec6e body=263 status=ok
// SIG undefined FUN_1469fec6e(void)

void FUN_1469fec6e(longlong *param_1,undefined8 *param_2)

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
        FUN_145af15fc(plVar2 + lVar10 * 2,iVar8);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar6;
    } while (lVar11 < lVar13);
    *(int *)(param_1 + 1) = iVar12;
  }
  return;
}



// FUNCTION 1469fed92 FUN_1469fed92 body=29 status=ok
// SIG undefined FUN_1469fed92(void)

undefined8 FUN_1469fed92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469fedb0 FUN_1469fedb0 body=24 status=ok
// SIG undefined FUN_1469fedb0(void)

void FUN_1469fedb0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469fedc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1469fedc8 FUN_1469fedc8 body=29 status=ok
// SIG undefined FUN_1469fedc8(void)

undefined8 FUN_1469fedc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469fede5 FUN_1469fede5 body=54 status=ok
// SIG undefined FUN_1469fede5(void)

void FUN_1469fede5(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1469fee1c FUN_1469fee1c body=48 status=ok
// SIG undefined FUN_1469fee1c(void)

void FUN_1469fee1c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1469fee4c FUN_1469fee4c body=132 status=ok
// SIG undefined FUN_1469fee4c(void)

void FUN_1469fee4c(longlong param_1,int param_2)

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



// FUNCTION 1469feed2 FUN_1469feed2 body=324 status=ok
// SIG undefined FUN_1469feed2(void)

longlong * FUN_1469feed2(longlong *param_1,longlong param_2)

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
  plVar3 = (longlong *)FUN_14001cc68(0x610,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149f04b90;
  plVar4 = plVar3 + 2;
  FUN_146a589be(plVar4);
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_1469ff342(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_1469fefa9;
    param_1[1] = 0;
LAB_1469fef73:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_1469fefa9;
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
      if (plVar4 == (longlong *)0x0) goto LAB_1469fefa9;
      goto LAB_1469fef73;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1469fefa9;
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
LAB_1469fefa9:
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
  local_38 = 0x600;
  FUN_140a52e78(*param_1,"SDockTab",".\\Runtime/Slate/Private/Framework/Docking/TabManager.cpp",
                0x83b);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469ff018 FUN_1469ff018 body=9 status=ok
// SIG undefined FUN_1469ff018(void)

void FUN_1469ff018(longlong param_1)

{
  FUN_1469ff040(param_1 + 0x10);
  return;
}



// FUNCTION 1469ff022 FUN_1469ff022 body=29 status=ok
// SIG undefined FUN_1469ff022(void)

undefined8 FUN_1469ff022(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469ff040 FUN_1469ff040 body=731 status=ok
// SIG undefined FUN_1469ff040(void)

void FUN_1469ff040(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f04c60;
  plVar3 = (longlong *)param_1[0xbe];
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
  plVar3 = (longlong *)param_1[0xbc];
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
  plVar3 = (longlong *)param_1[0xba];
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
  plVar3 = (longlong *)param_1[0xb8];
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
  FUN_1402bc42a(param_1 + 0xa9);
  FUN_1402bc42a(param_1 + 0x9b);
  FUN_1449db362(param_1 + 0x99);
  FUN_1449db362(param_1 + 0x94);
  FUN_1449db362(param_1 + 0x8e);
  FUN_1449db362(param_1 + 0x87);
  FUN_1449db362(param_1 + 0x85);
  FUN_1449db362(param_1 + 0x83);
  FUN_1449db362(param_1 + 0x81);
  FUN_1449db362(param_1 + 0x7f);
  FUN_1449db362(param_1 + 0x7d);
  FUN_1449db362(param_1 + 0x7b);
  FUN_1449db362(param_1 + 0x79);
  FUN_1449db362(param_1 + 0x77);
  FUN_1449db362(param_1 + 0x75);
  FUN_1449db362(param_1 + 0x73);
  FUN_1449db362(param_1 + 0x6f);
  if ((longlong *)param_1[0x6c] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x6c] + 0x10))();
  }
  FUN_1449db362(param_1 + 0x6a);
  if ((longlong *)param_1[0x67] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x67] + 0x10))();
  }
  plVar3 = (longlong *)param_1[0x66];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x61];
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
  plVar3 = (longlong *)param_1[0x5f];
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
  plVar3 = (longlong *)param_1[0x5d];
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
  plVar3 = (longlong *)param_1[0x5b];
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
  plVar3 = (longlong *)param_1[0x59];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x57];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0x55];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 1469ff31c FUN_1469ff31c body=38 status=ok
// SIG undefined FUN_1469ff31c(void)

undefined8 FUN_1469ff31c(undefined8 param_1,int param_2)

{
  FUN_1469ff040();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469ff342 FUN_1469ff342 body=167 status=ok
// SIG undefined FUN_1469ff342(void)

void FUN_1469ff342(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1469ff3bd;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1469ff3bd;
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
LAB_1469ff3bd:
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
                    /* WARNING: Could not recover jumptable at 0x0001469ff3dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1469ff3e9 FUN_1469ff3e9 body=73 status=ok
// SIG undefined FUN_1469ff3e9(void)

void FUN_1469ff3e9(longlong param_1,int param_2)

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



// FUNCTION 1469ff432 FUN_1469ff432 body=122 status=ok
// SIG undefined FUN_1469ff432(void)

int FUN_1469ff432(uint param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  longlong lVar4;
  
  if (DAT_14c98e938 != DAT_14c98e964) {
    puVar3 = &DAT_14c98e968;
    if (DAT_14c98e970 != (undefined *)0x0) {
      puVar3 = DAT_14c98e970;
    }
    iVar1 = *(int *)(puVar3 + (ulonglong)(DAT_14c98e978 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        lVar4 = (longlong)iVar1;
        if (*(longlong *)(DAT_14c98e930 + lVar4 * 0x28) == *param_2) {
          iVar2 = *(int *)(DAT_14c98e930 + lVar4 * 0x28 + 8);
          if (iVar2 == -1) {
            return iVar1;
          }
          if ((int)param_2[1] == -1) {
            return iVar1;
          }
          if (iVar2 == (int)param_2[1]) {
            return iVar1;
          }
        }
        iVar1 = *(int *)(DAT_14c98e930 + 0x20 + lVar4 * 0x28);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1469ff4ac FUN_1469ff4ac body=228 status=ok
// SIG undefined FUN_1469ff4ac(void)

int FUN_1469ff4ac(longlong *param_1,uint param_2,longlong *param_3)

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



// FUNCTION 1469ff590 FUN_1469ff590 body=132 status=ok
// SIG undefined FUN_1469ff590(void)

void FUN_1469ff590(longlong param_1,int param_2)

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



// FUNCTION 1469ff616 FUN_1469ff616 body=128 status=ok
// SIG undefined FUN_1469ff616(void)

void FUN_1469ff616(longlong *param_1,longlong *param_2)

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
    FUN_1469b5e90(param_1,iVar1);
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



// FUNCTION 1469ff696 FUN_1469ff696 body=230 status=ok
// SIG undefined FUN_1469ff696(void)

undefined8 * FUN_1469ff696(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1469ff77e FUN_1469ff77e body=130 status=ok
// SIG undefined FUN_1469ff77e(void)

void FUN_1469ff77e(longlong *param_1,longlong *param_2)

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



// FUNCTION 1469ff802 FUN_1469ff802 body=356 status=ok
// SIG undefined FUN_1469ff802(void)

void FUN_1469ff802(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  ulonglong uVar7;
  bool bVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar3 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar3 + 1;
  uVar7 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar7 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar3;
  }
  else {
    bVar8 = false;
    do {
      lVar9 = uVar7 * 0x10 + -8;
      uVar10 = uVar7;
      while ((*(int *)(*param_1 + lVar9) != 0 &&
             (plVar4 = *(longlong **)(*param_1 + -8 + lVar9), plVar4 != (longlong *)0x0))) {
        local_58 = *param_3;
        local_50 = param_3[1];
        if (local_50 != 0) {
          LOCK();
          *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
          UNLOCK();
        }
        local_68 = *param_2;
        local_60 = param_2[1];
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
          UNLOCK();
        }
        cVar6 = (**(code **)(*plVar4 + 0x60))(plVar4,&local_68,&local_58);
        if (cVar6 == '\0') break;
        lVar9 = lVar9 + -0x10;
        bVar5 = uVar10 < 2;
        uVar10 = uVar10 - 1;
        if (bVar5) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if (bVar8) goto LAB_1469ff8e4;
          goto LAB_1469ff8f3;
        }
      }
      uVar7 = uVar10 - 1;
      bVar8 = true;
    } while (1 < uVar10);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1469ff8e4:
    FUN_14474d06a(param_1,0);
  }
LAB_1469ff8f3:
  plVar4 = (longlong *)param_2[1];
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
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469ff968 FUN_1469ff968 body=152 status=ok
// SIG undefined FUN_1469ff968(void)

bool FUN_1469ff968(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  
  if ((param_2[2] != 0) && (plVar6 = (longlong *)param_2[3], plVar6 != (longlong *)0x0)) {
    if ((int)plVar6[1] < 1) {
      return false;
    }
    if (*param_2 == 0) {
      return false;
    }
    if ((param_2[1] != 0) && (0 < *(int *)(param_2[1] + 8))) {
      plVar2 = (longlong *)*param_1;
      iVar4 = (int)plVar6[1];
      do {
        if (iVar4 == 0) {
          plVar6 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)plVar6[1];
        bVar7 = iVar4 == iVar3;
        if (bVar7) {
          *(int *)(plVar6 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
      } while (!bVar7);
      lVar5 = 0;
      if (plVar6 != (longlong *)0x0) {
        lVar5 = param_2[2];
      }
      bVar7 = lVar5 == *plVar2 && lVar5 != 0;
      if (plVar6 == (longlong *)0x0) {
        return bVar7;
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 != 0) {
        return bVar7;
      }
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) {
        return bVar7;
      }
      (**(code **)(*plVar6 + 0x10))(plVar6);
      return bVar7;
    }
  }
  return false;
}



// FUNCTION 1469ffa00 FUN_1469ffa00 body=151 status=ok
// SIG undefined FUN_1469ffa00(void)

bool FUN_1469ffa00(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  
  if ((param_2[2] != 0) && (param_2[3] != 0)) {
    if (*(int *)(param_2[3] + 8) < 1) {
      return false;
    }
    if (*param_2 == 0) {
      return false;
    }
    plVar6 = (longlong *)param_2[1];
    if ((plVar6 != (longlong *)0x0) && (0 < (int)plVar6[1])) {
      plVar2 = (longlong *)*param_1;
      iVar4 = (int)plVar6[1];
      do {
        if (iVar4 == 0) {
          plVar6 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)plVar6[1];
        bVar7 = iVar4 == iVar3;
        if (bVar7) {
          *(int *)(plVar6 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
      } while (!bVar7);
      lVar5 = 0;
      if (plVar6 != (longlong *)0x0) {
        lVar5 = *param_2;
      }
      bVar7 = lVar5 == *plVar2 && lVar5 != 0;
      if (plVar6 == (longlong *)0x0) {
        return bVar7;
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 != 0) {
        return bVar7;
      }
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) {
        return bVar7;
      }
      (**(code **)(*plVar6 + 0x10))(plVar6);
      return bVar7;
    }
  }
  return false;
}



// FUNCTION 1469ffa98 FUN_1469ffa98 body=225 status=ok
// SIG undefined FUN_1469ffa98(void)

void FUN_1469ffa98(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    bVar6 = false;
    do {
      lVar8 = uVar5 * 0x10 + -8;
      uVar7 = uVar5;
      while ((*(int *)(*param_1 + lVar8) != 0 &&
             (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0))) {
        local_58 = *param_2;
        uStack_54 = param_2[1];
        uStack_50 = param_2[2];
        uStack_4c = param_2[3];
        cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,&local_58,param_3);
        if (cVar4 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar3 = uVar7 < 2;
        uVar7 = uVar7 - 1;
        if (bVar3) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if (bVar6) goto LAB_1469ffb45;
          goto LAB_1469ffb54;
        }
      }
      uVar5 = uVar7 - 1;
      bVar6 = true;
    } while (1 < uVar7);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1469ffb45:
    FUN_14474d06a(param_1,0);
  }
LAB_1469ffb54:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469ffb7a FUN_1469ffb7a body=23 status=ok
// SIG undefined FUN_1469ffb7a(void)

undefined8 * FUN_1469ffb7a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd) = 0;
  param_1[3] = param_2;
  return param_1;
}



// FUNCTION 1469ffb92 FUN_1469ffb92 body=379 status=ok
// SIG undefined FUN_1469ffb92(void)

void FUN_1469ffb92(longlong *param_1,undefined4 param_2,double param_3)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_146a26908(param_1,iVar4);
  }
  lVar6 = *param_1;
  *(double *)(lVar6 + (longlong)iVar4 * 0x10) = param_3;
  *(undefined4 *)(lVar6 + 8 + (longlong)iVar4 * 0x10) = param_2;
  uVar5 = (ulonglong)(int)param_1[1];
  dVar9 = 0.0;
  dVar7 = 0.0;
  if (0 < (longlong)uVar5) {
    iVar4 = -(int)param_1[1];
    lVar6 = uVar5 << 4;
    fVar10 = 0.0;
    dVar9 = 0.0;
    do {
      lVar6 = lVar6 + -0x10;
      lVar1 = *param_1;
      dVar7 = *(double *)(lVar1 + lVar6);
      if ((double)param_1[3] <= param_3 - dVar7 && param_3 - dVar7 != (double)param_1[3]) {
        uVar3 = *(uint *)(param_1 + 1);
        if (uVar5 != uVar3) {
          memmove((void *)(lVar1 + lVar6),(void *)(lVar1 + lVar6 + 0x10),
                  (longlong)(int)(uVar3 + iVar4) << 4);
          uVar3 = *(uint *)(param_1 + 1);
        }
        *(uint *)(param_1 + 1) = uVar3 - 1;
        FUN_146a2698e(param_1);
      }
      else {
        dVar8 = dVar7;
        if (dVar9 <= dVar7) {
          dVar8 = dVar9;
        }
        dVar9 = (double)(-(ulonglong)(dVar9 == 0.0) & (ulonglong)dVar7 |
                        ~-(ulonglong)(dVar9 == 0.0) & (ulonglong)dVar8);
        fVar10 = fVar10 + *(float *)(lVar1 + 8 + lVar6);
      }
      iVar4 = iVar4 + 1;
      bVar2 = 1 < uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar2);
    dVar7 = (double)fVar10;
  }
  dVar9 = (double)(-(ulonglong)(0.0 < dVar9) & (ulonglong)(param_3 - dVar9));
  if (0.0 < dVar9) {
    fVar10 = (float)(dVar7 / dVar9);
  }
  else {
    fVar10 = 0.0;
  }
  *(float *)(param_1 + 2) = fVar10;
  return;
}



// FUNCTION 1469ffd0e FUN_1469ffd0e body=74 status=ok
// SIG undefined FUN_1469ffd0e(void)

void FUN_1469ffd0e(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_1 + 0x10);
  fVar2 = param_2 * *(float *)(&DAT_149f05c30 + (ulonglong)(0.0 < fVar1) * 4) +
          (fVar1 + fVar1) * param_2;
  fVar3 = 0.0;
  if (fVar1 <= 0.0) {
    if (0.0 <= fVar1) {
      return;
    }
    fVar1 = fVar1 - fVar2;
    if (fVar1 <= 0.0) {
      fVar3 = fVar1;
    }
  }
  else {
    fVar1 = fVar1 - fVar2;
    if (0.0 <= fVar1) {
      fVar3 = fVar1;
    }
  }
  *(float *)(param_1 + 0x10) = fVar3;
  return;
}



// FUNCTION 1469ffd58 FUN_1469ffd58 body=32 status=ok
// SIG undefined FUN_1469ffd58(void)

void FUN_1469ffd58(longlong param_1,byte param_2)

{
  *(byte *)(param_1 + 0x14) = *(float *)(param_1 + 0x10) != 0.0 & param_2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 1469ffd78 FUN_1469ffd78 body=10 status=ok
// SIG undefined FUN_1469ffd78(void)

undefined4 * FUN_1469ffd78(undefined4 *param_1)

{
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1469ffd82 FUN_1469ffd82 body=151 status=ok
// SIG undefined FUN_1469ffd82(void)

float FUN_1469ffd82(float *param_1,longlong param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_1;
  fVar2 = param_3 / *(float *)(param_2 + 8) + fVar1;
  fVar2 = (float)(~-(uint)(fVar1 != 0.0) & (uint)fVar2 |
                 ~-(uint)((float)(-(uint)(0.0 < fVar2) & 0x3f800000 |
                                 ~-(uint)(0.0 < fVar2) & -(uint)(fVar2 < 0.0) & 0xbf800000) !=
                         (float)(-(uint)(0.0 < fVar1) & 0x3f800000 |
                                ~-(uint)(0.0 < fVar1) & -(uint)(fVar1 < 0.0) & 0xbf800000)) &
                 (uint)fVar2 & -(uint)(fVar1 != 0.0));
  *param_1 = fVar2;
  return fVar1 - fVar2;
}



// FUNCTION 1469ffe1a FUN_1469ffe1a body=127 status=ok
// SIG undefined FUN_1469ffe1a(void)

float FUN_1469ffe1a(float *param_1,longlong param_2)

{
  uint uVar1;
  float fVar2;
  
  fVar2 = logf(ABS(*param_1) + 50.0);
  uVar1 = -(uint)(0.0 < *param_1);
  return (fVar2 * 50.0 + -195.60115) *
         (float)(uVar1 & 0x3f800000 | ~uVar1 & -(uint)(*param_1 < 0.0) & 0xbf800000) *
         *(float *)(param_2 + 8);
}



// FUNCTION 1469ffe9a FUN_1469ffe9a body=81 status=ok
// SIG undefined FUN_1469ffe9a(void)

void FUN_1469ffe9a(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_1;
  fVar3 = (ABS(fVar1) + 1.0) / 100.0;
  fVar2 = 1.0;
  if (1.0 <= fVar3) {
    fVar2 = fVar3;
  }
  fVar2 = fVar2 * param_2 * 1500.0;
  fVar3 = 0.0;
  if (fVar1 <= 0.0) {
    fVar1 = fVar1 + fVar2;
    if (fVar1 <= 0.0) {
      fVar3 = fVar1;
    }
  }
  else {
    fVar1 = fVar1 - fVar2;
    if (0.0 <= fVar1) {
      fVar3 = fVar1;
    }
  }
  *param_1 = fVar3;
  return;
}



// FUNCTION 1469ffeec FUN_1469ffeec body=65 status=ok
// SIG undefined FUN_1469ffeec(void)

ulonglong FUN_1469ffeec(float *param_1,byte param_2,byte param_3,float param_4)

{
  undefined8 in_RAX;
  ulonglong uVar1;
  
  uVar1 = CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  if ((((param_4 < 0.0 & param_2) == 0) && ((0.0 < param_4 & param_3) == 0)) &&
     ((0.0 <= param_4 || (*param_1 <= 0.0)))) {
    uVar1 = (ulonglong)-(uint)(0.0 < param_4 && *param_1 < 0.0);
  }
  return uVar1 & 0xffffffffffffff01;
}



// FUNCTION 1469fff2e FUN_1469fff2e body=7 status=ok
// SIG undefined FUN_1469fff2e(void)

void FUN_1469fff2e(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}



// FUNCTION 1469fff36 FUN_1469fff36 body=930 status=ok
// SIG undefined FUN_1469fff36(void)

undefined8 FUN_1469fff36(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_398 [32];
  undefined8 **local_378;
  undefined1 local_361;
  undefined8 *local_360;
  undefined4 local_358;
  undefined4 uStack_354;
  longlong *local_348;
  undefined4 local_340;
  undefined1 local_338;
  undefined8 local_330;
  undefined4 local_328;
  longlong *local_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined1 local_310;
  undefined8 local_308;
  undefined4 local_300;
  longlong *local_2f8 [2];
  undefined1 local_2e8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  longlong local_128;
  longlong *local_120;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_398;
  if (*param_3 == 0) {
    local_320 = (longlong *)*param_2;
    if (local_320 != (longlong *)0x0) {
      (**(code **)(*local_320 + 8))();
    }
    local_318 = (undefined4)param_2[1];
    local_310 = (undefined1)param_2[2];
    local_308 = 0;
    local_300 = 0;
    FUN_1413a4324(&local_308,param_2 + 3);
    if (*param_4 != 0) {
      local_360 = (undefined8 *)0x0;
      local_358 = 0;
      FUN_1446efa72(&local_360,0,5,0x10);
      puVar4 = local_360;
      local_358 = 5;
      *local_360 = &PTR_LAB_149f09740;
      FUN_146a26f38(local_360 + 1,param_2,param_4);
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 1;
      lVar6 = DAT_14c758608 + 1;
      if (lVar9 == 0) {
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 2;
        lVar6 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar6;
      puVar4[8] = lVar9;
      *puVar4 = &PTR_FUN_149f096d0;
      puVar4[9] = FUN_1428fc880;
      FUN_144a5dc74(local_2f8);
      local_2e8 = 1;
      local_2e0 = 0;
      local_2d8 = 0;
      FUN_1413a4324(&local_2e0,&local_360);
      FUN_140008f88(&local_320,local_2f8);
      local_310 = local_2e8;
      FUN_144a450dc(&local_308,&local_2e0);
      FUN_1449db362(&local_2e0);
      if (local_2f8[0] != (longlong *)0x0) {
        (**(code **)(*local_2f8[0] + 0x10))();
      }
      FUN_1449db362(&local_360);
    }
    FUN_145c895fc(local_2f8);
    local_348 = local_320;
    if (local_320 != (longlong *)0x0) {
      (**(code **)(*local_320 + 8))();
    }
    local_340 = local_318;
    local_338 = local_310;
    local_330 = 0;
    local_328 = 0;
    FUN_1413a4324(&local_330,&local_308);
    uVar8 = FUN_145c88ffe(local_2f8,&local_348);
    local_378 = (undefined8 **)&local_361;
    FUN_145c892fc(&local_360,"SToolTip",".\\Runtime/Slate/Private/Framework/MultiBox/MultiBox.cpp",
                  0x87);
    FUN_145c89054(&local_360,param_1,uVar8);
    plVar3 = (longlong *)CONCAT44(uStack_354,local_358);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar3 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    FUN_145c890ca(local_2f8);
    FUN_1449db362(&local_308);
    if (local_320 != (longlong *)0x0) {
      (**(code **)(*local_320 + 0x10))();
    }
  }
  else {
    FUN_145c895fc(local_2f8);
    plVar5 = local_120;
    local_128 = *param_3;
    plVar3 = (longlong *)param_3[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    plVar7 = plVar3;
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_120 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        puVar4 = (undefined8 *)*local_120;
        local_120 = plVar3;
        (*(code *)*puVar4)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar7 = local_120;
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          plVar7 = local_120;
        }
      }
    }
    local_120 = plVar7;
    local_378 = &local_360;
    FUN_145c892fc(&local_320,"SToolTip",".\\Runtime/Slate/Private/Framework/MultiBox/MultiBox.cpp",
                  0x7b);
    FUN_145c89054(&local_320,param_1,local_2f8);
    plVar5 = (longlong *)CONCAT44(uStack_314,local_318);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar5 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar3 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    FUN_145c890ca(local_2f8);
  }
  if ((local_30 ^ (ulonglong)auStack_398) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a00352 FUN_146a00352 body=134 status=ok
// SIG undefined FUN_146a00352(void)

void FUN_146a00352(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x270) = *param_2;
  plVar3 = (longlong *)param_2[1];
  plVar2 = *(longlong **)(param_1 + 0x278);
  if (plVar2 != plVar3) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar2 = *(longlong **)(param_1 + 0x278);
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x278) = plVar3;
    plVar3 = (longlong *)param_2[1];
  }
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
                    /* WARNING: Could not recover jumptable at 0x000146a003cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146a003d8 FUN_146a003d8 body=198 status=ok
// SIG undefined FUN_146a003d8(void)

void FUN_146a003d8(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x280) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x288);
    if (plVar5 == (longlong *)0x0) goto LAB_146a00467;
    *(undefined8 *)(param_1 + 0x288) = 0;
LAB_146a00431:
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146a00467;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x280) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x288);
    if (plVar4 != plVar5) {
      *(longlong **)(param_1 + 0x288) = plVar4;
      if (plVar5 == (longlong *)0x0) goto LAB_146a00467;
      goto LAB_146a00431;
    }
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_146a00467;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_146a00467:
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146a00491. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146a0049e FUN_146a0049e body=133 status=ok
// SIG undefined FUN_146a0049e(void)

void FUN_146a0049e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x298);
  *(undefined8 *)(param_1 + 0x290) = uVar3;
  *(longlong *)(param_1 + 0x298) = lVar4;
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
                    /* WARNING: Could not recover jumptable at 0x000146a00517. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146a0053a FUN_146a0053a body=330 status=ok
// SIG undefined FUN_146a0053a(void)

void FUN_146a0053a(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = *(longlong **)(param_3 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    uVar9 = FUN_1469e4aec();
    cVar7 = (**(code **)(*plVar4 + 0x50))(plVar4,uVar9);
    if (cVar7 != '\0') {
      lVar5 = *(longlong *)(param_3 + 0x78);
      plVar4 = *(longlong **)(param_3 + 0x80);
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
      if (lVar5 != 0) {
        puVar10 = *(undefined8 **)(param_1 + 0x270);
        bVar6 = true;
        if (puVar10 == (undefined8 *)0x0) {
          puVar10 = (undefined8 *)0x0;
          uVar9 = 0;
        }
        else {
          iVar8 = *(int *)(puVar10 + 1);
          uVar9 = 0;
          do {
            if (iVar8 == 0) {
              puVar10 = (undefined8 *)0x0;
              goto LAB_146a005f2;
            }
            LOCK();
            iVar3 = *(int *)(puVar10 + 1);
            bVar11 = iVar8 == iVar3;
            if (bVar11) {
              *(int *)(puVar10 + 1) = iVar8 + 1;
              iVar3 = iVar8;
            }
            iVar8 = iVar3;
            UNLOCK();
          } while (!bVar11);
          uVar9 = *(undefined8 *)(param_1 + 0x268);
          bVar6 = false;
        }
LAB_146a005f2:
        local_48 = *(undefined8 *)(param_1 + 0x278);
        local_40 = *(longlong *)(param_1 + 0x280);
        if (local_40 != 0) {
          LOCK();
          *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
          UNLOCK();
        }
        FUN_146a0069c(uVar9,&local_48,param_2,param_3);
        if (!bVar6) {
          LOCK();
          piVar2 = (int *)(puVar10 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar10)(puVar10);
            LOCK();
            piVar2 = (int *)((longlong)puVar10 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
            }
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a0069c FUN_146a0069c body=386 status=ok
// SIG undefined FUN_146a0069c(void)

void FUN_146a0069c(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char cVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  double *local_78;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  longlong *local_50;
  double local_48;
  double local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(longlong *)(param_1 + 0x2f8) == 0) || (*(longlong *)(param_1 + 0x2f8) != *param_2)) {
    plVar6 = (longlong *)FUN_14479d2ce(*(longlong *)(param_1 + 0x278) + 0x28);
    if (plVar6 != (longlong *)0x0) {
      cVar5 = (**(code **)(*plVar6 + 0x2a0))(plVar6);
      if (cVar5 != '\0') {
        uVar4 = *(undefined8 *)(param_4 + 0x78);
        plVar6 = *(longlong **)(param_4 + 0x80);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar6 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        local_40 = (double)*(float *)(param_4 + 0x24);
        local_48 = (double)*(float *)(param_4 + 0x20);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        local_68 = *param_2;
        local_60 = param_2[1];
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
          UNLOCK();
        }
        local_78 = &local_48;
        local_58 = uVar4;
        local_50 = plVar6;
        FUN_146a0a3e6(param_1,&local_68,&local_58,param_3);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar6 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
      }
    }
  }
  puVar3 = (undefined8 *)param_2[1];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar1 = (int *)((longlong)puVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a00836 FUN_146a00836 body=393 status=ok
// SIG undefined FUN_146a00836(void)

undefined1 * FUN_146a00836(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar10 = *(longlong **)(param_4 + 0x78);
  if (plVar10 != (longlong *)0x0) {
    FUN_1469e4aec();
    cVar6 = (**(code **)(*plVar10 + 0x50))(plVar10);
    if (cVar6 != '\0') {
      lVar3 = *(longlong *)(param_4 + 0x78);
      plVar10 = *(longlong **)(param_4 + 0x80);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
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
      if (lVar3 != 0) {
        plVar10 = *(longlong **)(param_1 + 0x270);
        bVar4 = true;
        if (plVar10 == (longlong *)0x0) {
          plVar10 = (longlong *)0x0;
          uVar8 = 0;
        }
        else {
          iVar7 = (int)plVar10[1];
          uVar8 = 0;
          do {
            if (iVar7 == 0) {
              plVar10 = (longlong *)0x0;
              goto LAB_146a0092c;
            }
            LOCK();
            iVar5 = (int)plVar10[1];
            bVar11 = iVar7 == iVar5;
            if (bVar11) {
              *(int *)(plVar10 + 1) = iVar7 + 1;
              iVar5 = iVar7;
            }
            iVar7 = iVar5;
            UNLOCK();
          } while (!bVar11);
          uVar8 = *(undefined8 *)(param_1 + 0x268);
          bVar4 = false;
        }
LAB_146a0092c:
        local_50 = *(undefined8 *)(param_1 + 0x278);
        local_48 = *(longlong *)(param_1 + 0x280);
        if (local_48 != 0) {
          LOCK();
          *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
          UNLOCK();
        }
        FUN_146a009c0(uVar8,&local_50,param_3,param_4);
        uVar9 = 1;
        if (!bVar4) {
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
        goto LAB_146a00861;
      }
    }
  }
  uVar9 = 0;
LAB_146a00861:
  *param_2 = uVar9;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a009c0 FUN_146a009c0 body=386 status=ok
// SIG undefined FUN_146a009c0(void)

void FUN_146a009c0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  char cVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  double *local_78;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  longlong *local_50;
  double local_48;
  double local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(longlong *)(param_1 + 0x2f8) == 0) || (*(longlong *)(param_1 + 0x2f8) != *param_2)) {
    plVar6 = (longlong *)FUN_14479d2ce(*(longlong *)(param_1 + 0x278) + 0x28);
    if (plVar6 != (longlong *)0x0) {
      cVar5 = (**(code **)(*plVar6 + 0x2a0))(plVar6);
      if (cVar5 != '\0') {
        uVar4 = *(undefined8 *)(param_4 + 0x78);
        plVar6 = *(longlong **)(param_4 + 0x80);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar6 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        local_40 = (double)*(float *)(param_4 + 0x24);
        local_48 = (double)*(float *)(param_4 + 0x20);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        local_68 = *param_2;
        local_60 = param_2[1];
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
          UNLOCK();
        }
        local_78 = &local_48;
        local_58 = uVar4;
        local_50 = plVar6;
        FUN_146a0a3e6(param_1,&local_68,&local_58,param_3);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar6 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
      }
    }
  }
  puVar3 = (undefined8 *)param_2[1];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar1 = (int *)((longlong)puVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a00b5a FUN_146a00b5a body=273 status=ok
// SIG undefined FUN_146a00b5a(void)

undefined1 * FUN_146a00b5a(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined1 uVar8;
  bool bVar9;
  
  plVar3 = *(longlong **)(param_4 + 0x78);
  if (plVar3 != (longlong *)0x0) {
    FUN_1469e4aec();
    cVar6 = (**(code **)(*plVar3 + 0x50))(plVar3);
    if (cVar6 != '\0') {
      lVar4 = *(longlong *)(param_4 + 0x78);
      plVar3 = *(longlong **)(param_4 + 0x80);
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
      if (lVar4 != 0) {
        plVar3 = *(longlong **)(param_1 + 0x270);
        if (plVar3 == (longlong *)0x0) {
LAB_146a00c12:
          FUN_146a00c6c(0);
          uVar8 = 1;
        }
        else {
          iVar7 = (int)plVar3[1];
          do {
            if (iVar7 == 0) goto LAB_146a00c12;
            LOCK();
            iVar5 = (int)plVar3[1];
            bVar9 = iVar7 == iVar5;
            if (bVar9) {
              *(int *)(plVar3 + 1) = iVar7 + 1;
              iVar5 = iVar7;
            }
            iVar7 = iVar5;
            UNLOCK();
          } while (!bVar9);
          FUN_146a00c6c(*(undefined8 *)(param_1 + 0x268));
          LOCK();
          plVar1 = plVar3 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          uVar8 = 1;
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
        goto LAB_146a00b71;
      }
    }
  }
  uVar8 = 0;
LAB_146a00b71:
  *param_2 = uVar8;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 146a00c6c FUN_146a00c6c body=551 status=ok
// SIG undefined FUN_146a00c6c(void)

void FUN_146a00c6c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((*(longlong *)(param_1 + 0x2e8) == 0) || (*(char *)(param_1 + 0x2f0) == '\0')) ||
      (*(longlong *)(param_1 + 0x2f8) == 0)) || (*(int *)(param_1 + 0x308) == -1))
  goto LAB_146a00cb2;
  lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x278) + 0x50);
  if (lVar9 == 0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x278) + 0x48);
    plVar7 = (longlong *)0x0;
    lVar10 = 0;
    do {
      lVar11 = *(longlong *)(lVar3 + lVar10);
      if ((*(longlong *)(lVar11 + 0x80) == *(longlong *)(param_1 + 0x2e8)) &&
         (*(char *)(lVar11 + 0x88) == *(char *)(param_1 + 0x2f0))) {
        plVar7 = *(longlong **)(lVar3 + 8 + lVar10);
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        if (lVar11 != 0) {
          if ((*(char *)(lVar11 + 0x88) != '\x05') || (*(char *)(lVar11 + 0x9d) != '\x01'))
          goto LAB_146a00da5;
          lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x278) + 0x50);
          if (lVar9 == 0) goto LAB_146a00da5;
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x278) + 0x48);
          lVar10 = 0;
          goto LAB_146a00deb;
        }
        break;
      }
      lVar10 = lVar10 + 0x10;
    } while (lVar9 * 0x10 != lVar10);
  }
  goto LAB_146a00cee;
  while (lVar10 = lVar10 + 0x10, lVar9 * 0x10 != lVar10) {
LAB_146a00deb:
    lVar4 = *(longlong *)(lVar3 + lVar10);
    if ((*(longlong *)(lVar4 + 0x80) == *(longlong *)(param_1 + 0x2e8)) &&
       (*(char *)(lVar4 + 0x88) == '\x03')) {
      plVar5 = *(longlong **)(lVar3 + 8 + lVar10);
      if (plVar5 == (longlong *)0x0) {
        if (lVar4 == 0) break;
LAB_146a00e32:
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar7 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
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
        plVar7 = plVar5;
        lVar11 = lVar4;
        if (plVar5 == (longlong *)0x0) {
          uVar6 = *(undefined8 *)(param_1 + 0x278);
          uVar8 = *(undefined4 *)(param_1 + 0x308);
          local_38 = (longlong *)0x0;
          local_40 = lVar4;
          goto LAB_146a00dc2;
        }
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        if (lVar4 != 0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          goto LAB_146a00e32;
        }
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
      break;
    }
  }
LAB_146a00da5:
  uVar6 = *(undefined8 *)(param_1 + 0x278);
  uVar8 = *(undefined4 *)(param_1 + 0x308);
  local_40 = lVar11;
  local_38 = plVar7;
  if (plVar7 == (longlong *)0x0) {
LAB_146a00dc2:
    plVar7 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  FUN_146a016e8(uVar6,&local_40,uVar8);
LAB_146a00cee:
  FUN_146a0ab38(param_1 + 0x2e8);
  FUN_146a024ba(param_1);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
LAB_146a00cb2:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a00eaa FUN_146a00eaa body=268 status=ok
// SIG undefined FUN_146a00eaa(void)

undefined4 FUN_146a00eaa(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  if (((*(longlong *)(param_1 + 0x270) == 0) ||
      (plVar9 = *(longlong **)(param_1 + 0x278), plVar9 == (longlong *)0x0)) || ((int)plVar9[1] < 1)
     ) {
    uVar6 = 0;
  }
  else {
    lVar8 = 0;
    iVar5 = (int)plVar9[1];
    do {
      iVar4 = iVar5;
      if (iVar4 == 0) {
        plVar9 = (longlong *)0x0;
        goto LAB_146a00f01;
      }
      LOCK();
      iVar5 = (int)plVar9[1];
      bVar10 = iVar4 == iVar5;
      if (bVar10) {
        *(int *)(plVar9 + 1) = iVar4 + 1;
        iVar5 = iVar4;
      }
      UNLOCK();
    } while (!bVar10);
    lVar8 = *(longlong *)(param_1 + 0x270);
LAB_146a00f01:
    lVar2 = *(longlong *)(lVar8 + 0x278);
    plVar3 = *(longlong **)(lVar8 + 0x280);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar7 = plVar3 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    plVar7 = (longlong *)FUN_14479d2ce(lVar2 + 0x28);
    if (plVar7 == (longlong *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)(*plVar7 + 0x2a0))(plVar7);
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar3 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    if (iVar4 != 0) {
      LOCK();
      plVar3 = plVar9 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  return uVar6;
}



// FUNCTION 146a00fb6 FUN_146a00fb6 body=402 status=ok
// SIG undefined FUN_146a00fb6(void)

undefined8 *
FUN_146a00fb6(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4,
             undefined1 param_5,undefined8 *param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 unaff_R14;
  bool bVar7;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*param_1 + 0x28))();
  plVar4 = (longlong *)*param_2;
  local_48 = *param_3;
  local_40 = param_3[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,&local_48);
  plVar4 = (longlong *)*param_2;
  local_50 = param_1[2];
  if (local_50 == 0) {
    local_50 = 0;
    local_58 = 0;
  }
  else {
    iVar5 = *(int *)(local_50 + 8);
    local_58 = 0;
    do {
      if (iVar5 == 0) {
        local_50 = 0;
        goto LAB_146a01045;
      }
      LOCK();
      iVar3 = *(int *)(local_50 + 8);
      bVar7 = iVar5 == iVar3;
      if (bVar7) {
        *(int *)(local_50 + 8) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar7);
    local_58 = param_1[1];
  }
LAB_146a01045:
  (**(code **)(*plVar4 + 0x18))();
  plVar4 = (longlong *)*param_2;
  local_68 = *param_6;
  local_60 = param_6[1];
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*plVar4 + 0x20))(plVar4,&local_68);
  (**(code **)(*(longlong *)*param_2 + 0x30))
            ((longlong *)*param_2,param_4,
             CONCAT71((int7)((ulonglong)unaff_R14 >> 8),param_5) & 0xffffffff);
  puVar6 = (undefined8 *)(*(longlong *)(*param_3 + 0x278) + 0x60);
  if (*(longlong *)((longlong)param_1 + 0x94) != 0) {
    puVar6 = (undefined8 *)((longlong)param_1 + 0x94);
  }
  local_70 = *puVar6;
  (**(code **)(*(longlong *)*param_2 + 0x28))
            ((longlong *)*param_2,*(undefined8 *)(*(longlong *)(*param_3 + 0x278) + 0x58));
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
  plVar4 = (longlong *)param_6[1];
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
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a0114a FUN_146a0114a body=247 status=ok
// SIG undefined FUN_146a0114a(void)

undefined8 * FUN_146a0114a(undefined8 *param_1,byte param_2,undefined1 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_149f05ce8;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0x100;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  param_1[0xb] = lVar2;
  FUN_1446ddc76(param_1 + 0xc,"ToolBar",1);
  *(byte *)(param_1 + 0xd) = param_2;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0xffffffff;
  if ((param_2 & 0xfb) == 3) {
    cVar1 = FUN_145937c5a();
    if (cVar1 != '\0') {
      FUN_1446ddc76(&local_38,"SlimToolBar",1);
      param_1[0xc] = local_38;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a01242 FUN_146a01242 body=148 status=ok
// SIG undefined FUN_146a01242(void)

void FUN_146a01242(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f05ce8;
  plVar2 = (longlong *)FUN_14479d2ce(param_1 + 5);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x2f8))(plVar2);
  }
  FUN_1449db362(param_1 + 0xe);
  FUN_146a2710f(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1469e5414(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 3);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146a012cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 146a012d6 FUN_146a012d6 body=251 status=ok
// SIG undefined FUN_146a012d6(void)

longlong * FUN_146a012d6(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = FUN_14001cc68(0x88,0x10);
  FUN_146a0114a(lVar2,param_2,param_3);
  *param_1 = lVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149f097b0;
  plVar3[2] = lVar2;
  param_1[1] = (longlong)plVar3;
  if (lVar2 == 0) {
    return param_1;
  }
  if (((*(longlong *)(lVar2 + 8) != 0) && (*(longlong *)(lVar2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar2 + 0x10) + 8))) {
    return param_1;
  }
  if (plVar3 == (longlong *)0x0) {
    *(longlong *)(lVar2 + 8) = lVar2;
    plVar4 = *(longlong **)(lVar2 + 0x10);
    if (plVar4 == (longlong *)0x0) {
      return param_1;
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong *)(lVar2 + 8) = lVar2;
    if (*(longlong **)(lVar2 + 0x10) == plVar3) goto LAB_146a013a8;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    plVar4 = *(longlong **)(lVar2 + 0x10);
    if (plVar4 == (longlong *)0x0) {
      *(longlong **)(lVar2 + 0x10) = plVar3;
      goto LAB_146a013a8;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar4 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  *(longlong **)(lVar2 + 0x10) = plVar3;
  if (plVar3 == (longlong *)0x0) {
    return param_1;
  }
LAB_146a013a8:
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
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  return param_1;
}



// FUNCTION 146a013d2 FUN_146a013d2 body=337 status=ok
// SIG undefined FUN_146a013d2(void)

void FUN_146a013d2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *(longlong *)(*param_2 + 0x70);
  plVar5 = *(longlong **)(*param_2 + 0x78);
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
  if (lVar4 != 0) {
    local_38 = *(undefined8 *)(*param_2 + 0x70);
    local_30 = *(longlong **)(*param_2 + 0x78);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    FUN_146a2718e(param_1 + 0x38,&local_38);
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
  iVar3 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar3 + 1U) {
    FUN_146a27292((longlong *)(param_1 + 0x48),iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x48);
  *(longlong *)(lVar4 + (longlong)iVar3 * 0x10) = *param_2;
  lVar6 = param_2[1];
  *(longlong *)(lVar4 + 8 + (longlong)iVar3 * 0x10) = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
    puVar7 = (undefined8 *)param_2[1];
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar7 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar7)(puVar7);
        LOCK();
        piVar2 = (int *)((longlong)puVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
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



// FUNCTION 146a01538 FUN_146a01538 body=281 status=ok
// SIG undefined FUN_146a01538(void)

void FUN_146a01538(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(*param_2 + 0x70);
  plVar4 = *(longlong **)(*param_2 + 0x78);
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
  if (lVar3 != 0) {
    local_38 = *(undefined8 *)(*param_2 + 0x70);
    local_30 = *(longlong **)(*param_2 + 0x78);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    FUN_146a2718e(param_1 + 0x38,&local_38);
    plVar4 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
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
  FUN_146a01666(param_1 + 0x48,param_2,0);
  puVar5 = (undefined8 *)param_2[1];
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar5 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar5)(puVar5);
      LOCK();
      piVar2 = (int *)((longlong)puVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a01666 FUN_146a01666 body=130 status=ok
// SIG undefined FUN_146a01666(void)

int FUN_146a01666(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146a27292(param_1,iVar1);
  }
  lVar4 = (longlong)param_3 * 0x10;
  memmove((void *)(*param_1 + lVar4 + 0x10),(void *)(*param_1 + lVar4),
          (ulonglong)(uint)(iVar1 - param_3) << 4);
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + lVar4) = *param_2;
  lVar3 = param_2[1];
  *(longlong *)(lVar2 + 8 + lVar4) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_3;
}



// FUNCTION 146a016e8 FUN_146a016e8 body=2120 status=ok
// SIG undefined FUN_146a016e8(void)

void FUN_146a016e8(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a0;
  longlong *local_98;
  uint local_90;
  int local_8c;
  longlong *local_88;
  undefined8 uStack_80;
  int local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = param_1 + 0x28;
  plVar8 = (longlong *)FUN_14479d2ce(lVar1);
  if (((plVar8 == (longlong *)0x0) ||
      (cVar6 = (**(code **)(*plVar8 + 0x2a0))(plVar8), cVar6 == '\0')) ||
     (lVar14 = *param_2, *(longlong *)(lVar14 + 0x80) == 0)) goto LAB_146a017d1;
  iVar11 = *(int *)(param_1 + 0x50);
  iVar16 = -1;
  if ((longlong)iVar11 != 0) {
    lVar12 = 0;
    iVar13 = 0;
    do {
      iVar16 = iVar13;
      if (*(longlong *)(*(longlong *)(param_1 + 0x48) + lVar12) == lVar14) break;
      iVar13 = iVar13 + 1;
      lVar12 = lVar12 + 0x10;
      iVar16 = -1;
    } while ((longlong)iVar11 << 4 != lVar12);
  }
  plVar8 = (longlong *)(param_1 + 0x48);
  if (param_3 < iVar11 && -1 < param_3) {
    uVar7 = FUN_146a01f32(param_1,param_3,&local_58);
    if (((int)uVar7 < 0) || (*(int *)(param_1 + 0x50) <= (int)uVar7)) {
      lVar12 = 0;
    }
    else {
      lVar12 = *(longlong *)(*(longlong *)(*plVar8 + (ulonglong)uVar7 * 0x10) + 0x80);
    }
    lVar14 = *param_2;
  }
  else {
    lVar12 = 0;
  }
  if ((*(char *)(lVar14 + 0x88) != '\x03') && (*(char *)(lVar14 + 0x9d) != '\x01')) {
    if (iVar16 != -1) {
      FUN_146a27318(plVar8,iVar16);
      FUN_146a2738e(plVar8);
      param_3 = param_3 - (uint)(iVar16 < param_3);
    }
    FUN_146a01666(plVar8,param_2,param_3);
    plVar8 = (longlong *)FUN_14479d2ce(lVar1);
    if (plVar8 != (longlong *)0x0) {
      plVar10 = *(longlong **)(param_1 + 0x10);
      if (plVar10 == (longlong *)0x0) {
LAB_146a019e3:
        local_58 = 0;
        plStack_50 = (longlong *)0x0;
        bVar18 = true;
      }
      else {
        iVar11 = (int)plVar10[1];
        do {
          if (iVar11 == 0) goto LAB_146a019e3;
          LOCK();
          iVar16 = (int)plVar10[1];
          bVar18 = iVar11 == iVar16;
          if (bVar18) {
            *(int *)(plVar10 + 1) = iVar11 + 1;
            iVar16 = iVar11;
          }
          iVar11 = iVar16;
          UNLOCK();
        } while (!bVar18);
        uVar4 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
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
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        bVar18 = false;
        local_58 = uVar4;
        plStack_50 = plVar10;
      }
      plVar10 = plStack_50;
      (**(code **)(*plVar8 + 0x2f0))(plVar8,&local_58);
      plVar8 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_50 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      if (!bVar18) {
        LOCK();
        plVar8 = plVar10 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
    goto LAB_146a017d1;
  }
  if (iVar16 == -1 || *(longlong *)(lVar14 + 0x80) == lVar12) goto LAB_146a017d1;
  local_6c = -1;
  local_98 = plVar8;
  uVar7 = FUN_146a01f32(param_1,iVar16,&local_6c);
  iVar11 = local_6c;
  if (local_6c == -1 || uVar7 == 0xffffffff) goto LAB_146a017d1;
  local_88 = (longlong *)0x0;
  uStack_80 = 0;
  local_8c = param_3;
  FUN_146a0203c();
  plVar8 = local_98;
  local_90 = uVar7;
  if ((int)uVar7 < iVar11) {
    uVar15 = (ulonglong)uVar7;
    uVar17 = uVar15 << 4 | 8;
    do {
      uVar5 = uStack_80;
      lVar14 = *plVar8;
      lVar12 = (longlong)(int)uStack_80;
      uVar7 = (int)uStack_80 + 1;
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar7);
      if (uStack_80._4_4_ < uVar7) {
        FUN_146a27292(&local_88,uVar5 & 0xffffffff);
        plVar8 = local_98;
      }
      local_88[lVar12 * 2] = *(longlong *)(lVar14 + -8 + uVar17);
      lVar14 = *(longlong *)(lVar14 + uVar17);
      local_88[lVar12 * 2 + 1] = lVar14;
      if (lVar14 != 0) {
        LOCK();
        *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
        UNLOCK();
        iVar11 = local_6c;
      }
      uVar15 = uVar15 + 1;
      uVar17 = uVar17 + 0x10;
    } while ((longlong)uVar15 < (longlong)iVar11);
  }
  uVar7 = local_90;
  if (iVar11 - local_90 != 0) {
    FUN_146a274c4(plVar8,local_90,iVar11 - local_90);
    plVar8 = local_98;
  }
  plVar10 = local_88;
  iVar11 = 0;
  if ((int)uVar7 < local_8c) {
    iVar11 = (int)uStack_80;
  }
  iVar11 = local_8c - iVar11;
  if (iVar11 == 0) {
    if ((0 < *(int *)(param_1 + 0x50)) &&
       (plVar10 = (longlong *)*plVar8, *(char *)(*plVar10 + 0x88) == '\x03')) {
      puVar9 = (undefined8 *)FUN_14001cc68(0xb8,0x10);
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      local_68 = 0;
      uStack_60 = 0;
      local_a0 = 1;
      local_a8 = 5;
      FUN_146a0eb42(puVar9,&local_68,&local_58,*(undefined8 *)(*plVar10 + 0x80));
      *puVar9 = &PTR_FUN_149f063b0;
      *(undefined1 *)((longlong)puVar9 + 0x9c) = 0;
      plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar10[1] = (longlong)&DAT_100000001;
      *plVar10 = (longlong)&PTR_FUN_149f097d0;
      plVar10[2] = (longlong)puVar9;
      if ((puVar9 != (undefined8 *)0x0) &&
         (((puVar9[1] == 0 || (puVar9[2] == 0)) || (*(int *)(puVar9[2] + 8) < 1)))) {
        if (plVar10 == (longlong *)0x0) {
          puVar9[1] = puVar9;
          plVar8 = (longlong *)puVar9[2];
          if (plVar8 != (longlong *)0x0) {
LAB_146a01e04:
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar8 + 0x10))();
            }
            puVar9[2] = plVar10;
            if (plVar10 != (longlong *)0x0) goto LAB_146a01e88;
          }
        }
        else {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          puVar9[1] = puVar9;
          if ((longlong *)puVar9[2] != plVar10) {
            LOCK();
            *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
            UNLOCK();
            plVar8 = (longlong *)puVar9[2];
            if (plVar8 != (longlong *)0x0) goto LAB_146a01e04;
            puVar9[2] = plVar10;
          }
LAB_146a01e88:
          LOCK();
          plVar8 = plVar10 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
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
      uVar15 = uStack_80;
      lVar14 = (longlong)(int)uStack_80;
      uVar7 = (int)uStack_80 + 1;
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar7);
      if (uStack_80._4_4_ < uVar7) {
        FUN_146a27292(&local_88,uVar15 & 0xffffffff);
      }
      local_88[lVar14 * 2] = (longlong)puVar9;
      local_88[lVar14 * 2 + 1] = (longlong)plVar10;
LAB_146a01c5f:
      plVar8 = local_98;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
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
          plVar8 = local_98;
          if (*piVar2 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
            plVar8 = local_98;
          }
        }
      }
    }
  }
  else if ((0 < (int)uStack_80) && (*(char *)(*local_88 + 0x88) == '\x03')) {
    puVar9 = (undefined8 *)FUN_14001cc68(0xb8,0x10);
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    local_68 = 0;
    uStack_60 = 0;
    local_a0 = 1;
    local_a8 = 5;
    FUN_146a0eb42(puVar9,&local_68,&local_58,*(undefined8 *)(*plVar10 + 0x80));
    *puVar9 = &PTR_FUN_149f063b0;
    *(undefined1 *)((longlong)puVar9 + 0x9c) = 0;
    plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar10[1] = (longlong)&DAT_100000001;
    *plVar10 = (longlong)&PTR_FUN_149f097d0;
    plVar10[2] = (longlong)puVar9;
    if ((puVar9 != (undefined8 *)0x0) &&
       (((puVar9[1] == 0 || (puVar9[2] == 0)) || (*(int *)(puVar9[2] + 8) < 1)))) {
      if (plVar10 == (longlong *)0x0) {
        puVar9[1] = puVar9;
        plVar8 = (longlong *)puVar9[2];
        if (plVar8 != (longlong *)0x0) {
LAB_146a01e5a:
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))();
          }
          puVar9[2] = plVar10;
          if (plVar10 != (longlong *)0x0) goto LAB_146a01ec8;
        }
      }
      else {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        puVar9[1] = puVar9;
        if ((longlong *)puVar9[2] != plVar10) {
          LOCK();
          *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
          UNLOCK();
          plVar8 = (longlong *)puVar9[2];
          if (plVar8 != (longlong *)0x0) goto LAB_146a01e5a;
          puVar9[2] = plVar10;
        }
LAB_146a01ec8:
        LOCK();
        plVar8 = plVar10 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
    uVar15 = uStack_80 & 0xffffffff;
    uVar7 = (int)uStack_80 + 1;
    uStack_80 = CONCAT44(uStack_80._4_4_,uVar7);
    if (uStack_80._4_4_ < uVar7) {
      FUN_146a27292(&local_88,uVar15);
    }
    plVar8 = local_88;
    memmove(local_88 + 2,local_88,uVar15 << 4);
    *plVar8 = (longlong)puVar9;
    plVar8[1] = (longlong)plVar10;
    goto LAB_146a01c5f;
  }
  FUN_146a0207a(plVar8,&local_88,iVar11);
  if ((0 < *(int *)(param_1 + 0x50)) && (*(char *)(*(longlong *)*local_98 + 0x88) == '\x05')) {
    FUN_146a27318(local_98,0);
  }
  plVar8 = (longlong *)FUN_14479d2ce(lVar1);
  if (plVar8 != (longlong *)0x0) {
    plVar10 = *(longlong **)(param_1 + 0x10);
    if (plVar10 == (longlong *)0x0) {
LAB_146a01d04:
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar18 = true;
    }
    else {
      iVar11 = (int)plVar10[1];
      do {
        if (iVar11 == 0) goto LAB_146a01d04;
        LOCK();
        iVar16 = (int)plVar10[1];
        bVar18 = iVar11 == iVar16;
        if (bVar18) {
          *(int *)(plVar10 + 1) = iVar11 + 1;
          iVar16 = iVar11;
        }
        iVar11 = iVar16;
        UNLOCK();
      } while (!bVar18);
      uVar4 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
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
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      bVar18 = false;
      local_58 = uVar4;
      plStack_50 = plVar10;
    }
    plVar10 = plStack_50;
    (**(code **)(*plVar8 + 0x2f0))(plVar8,&local_58);
    plVar8 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_50 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    if (!bVar18) {
      LOCK();
      plVar8 = plVar10 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
  FUN_146a2710f(local_88,uStack_80 & 0xffffffff);
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_146a017d1:
  plVar8 = (longlong *)param_2[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a01f32 FUN_146a01f32 body=266 status=ok
// SIG undefined FUN_146a01f32(void)

ulonglong FUN_146a01f32(longlong param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  plVar5 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  uVar9 = 0xffffffff;
  if ((plVar5 != (longlong *)0x0) && (cVar4 = (**(code **)(*plVar5 + 0x2a0))(plVar5), cVar4 != '\0')
     ) {
    uVar9 = 0xffffffff;
    if (-1 < (int)param_2) {
      uVar8 = param_2;
      do {
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x48) + (ulonglong)uVar8 * 0x10);
        if (*(char *)(lVar10 + 0x88) == '\x03') {
          if (uVar8 != 0) {
            lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + (ulonglong)(uVar8 - 1) * 0x10);
            if ((*(char *)(lVar2 + 0x88) == '\x05') &&
               (uVar9 = (ulonglong)(uVar8 - 1),
               *(longlong *)(lVar10 + 0x80) == *(longlong *)(lVar2 + 0x80))) break;
          }
          uVar9 = (ulonglong)uVar8;
          break;
        }
        bVar3 = 0 < (int)uVar8;
        uVar8 = uVar8 - 1;
      } while (bVar3);
    }
    iVar1 = *(int *)(param_1 + 0x50);
    *param_3 = iVar1;
    lVar10 = (longlong)(int)param_2 << 4;
    uVar6 = (longlong)(int)param_2;
    do {
      uVar7 = uVar6;
      lVar10 = lVar10 + 0x10;
      uVar6 = uVar7 + 1;
      if ((longlong)iVar1 <= (longlong)uVar6) {
        return uVar9;
      }
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + lVar10);
    } while (*(char *)(lVar2 + 0x88) != '\x03');
    if ((((longlong)uVar7 < 0) ||
        (lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x48) + (uVar7 & 0xffffffff) * 0x10),
        *(char *)(lVar10 + 0x88) != '\x05')) ||
       (*(longlong *)(lVar2 + 0x80) != *(longlong *)(lVar10 + 0x80))) {
      uVar7 = uVar6;
    }
    *param_3 = (int)uVar7;
  }
  return uVar9;
}



// FUNCTION 146a0203c FUN_146a0203c body=61 status=ok
// SIG undefined FUN_146a0203c(void)

void FUN_146a0203c(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    FUN_146a2742a(param_1);
    return;
  }
  FUN_146a2710f(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 146a0207a FUN_146a0207a body=135 status=ok
// SIG undefined FUN_146a0207a(void)

int FUN_146a0207a(longlong *param_1,undefined8 *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  
  uVar1 = *(uint *)(param_2 + 1);
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_146a27292(param_1,iVar2);
  }
  _Src = (void *)(*param_1 + (longlong)param_3 * 0x10);
  memmove((void *)((longlong)(int)uVar1 * 0x10 + (longlong)_Src),_Src,
          (ulonglong)(uint)(iVar2 - param_3) << 4);
  FUN_146a27559((longlong)param_3 * 0x10 + *param_1,*param_2,uVar1);
  return param_3;
}



// FUNCTION 146a02102 FUN_146a02102 body=583 status=ok
// SIG undefined FUN_146a02102(void)

longlong *
FUN_146a02102(longlong param_1,longlong *param_2,undefined1 param_3,longlong *param_4,
             undefined4 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_278 [32];
  undefined4 local_258;
  undefined1 local_254;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_240;
  longlong local_238;
  undefined1 local_229;
  undefined1 local_228 [8];
  longlong *local_220;
  undefined8 local_210;
  longlong *local_208;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_278;
  FUN_146a0234a(&local_210);
  FUN_146a27586(local_228,&local_229);
  FUN_146a02380(local_228,param_2,&local_210);
  if (local_220 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_220 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_220)(local_220);
      LOCK();
      piVar2 = (int *)((longlong)local_220 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_220 + 0x10))(local_220);
      }
    }
  }
  FUN_1449db362(local_50);
  FUN_140a4ff8c(&local_210);
  *(undefined1 *)(*param_2 + 0x488) = param_3;
  local_238 = *(longlong *)(param_1 + 0x10);
  if (local_238 == 0) {
    local_238 = 0;
    local_240 = 0;
  }
  else {
    iVar7 = *(int *)(local_238 + 8);
    local_240 = 0;
    do {
      if (iVar7 == 0) {
        local_238 = 0;
        goto LAB_146a021c0;
      }
      LOCK();
      iVar4 = *(int *)(local_238 + 8);
      bVar8 = iVar7 == iVar4;
      if (bVar8) {
        *(int *)(local_238 + 8) = iVar7 + 1;
        iVar4 = iVar7;
      }
      iVar7 = iVar4;
      UNLOCK();
    } while (!bVar8);
    local_240 = *(undefined8 *)(param_1 + 8);
  }
LAB_146a021c0:
  FUN_146a023f4();
  lVar5 = *param_2;
  local_254 = *(undefined1 *)(param_5 + 1);
  local_258 = *param_5;
  local_250 = 0;
  local_248 = 0;
  FUN_140a52b3c(&local_250,param_5 + 2);
  *(undefined1 *)(lVar5 + 0x49c) = local_254;
  *(undefined4 *)(lVar5 + 0x498) = local_258;
  FUN_140a52b3c(lVar5 + 0x4a0);
  FUN_1449db362(&local_250);
  if ((((param_4 == (longlong *)0x0) || ((int)param_4[1] == 0)) ||
      ((longlong *)*param_4 == (longlong *)0x0)) ||
     (cVar6 = (**(code **)(*(longlong *)*param_4 + 0x30))(), cVar6 == '\0')) {
    FUN_146a024ba(lVar5);
  }
  else {
    local_208 = *(longlong **)(param_1 + 0x10);
    if (local_208 == (longlong *)0x0) {
      local_208 = (longlong *)0x0;
      local_210 = 0;
    }
    else {
      iVar7 = (int)local_208[1];
      local_210 = 0;
      do {
        if (iVar7 == 0) {
          local_208 = (longlong *)0x0;
          goto LAB_146a022af;
        }
        LOCK();
        iVar4 = (int)local_208[1];
        bVar8 = iVar7 == iVar4;
        if (bVar8) {
          *(int *)(local_208 + 1) = iVar7 + 1;
          iVar4 = iVar7;
        }
        iVar7 = iVar4;
        UNLOCK();
      } while (!bVar8);
      local_210 = *(undefined8 *)(param_1 + 8);
    }
LAB_146a022af:
    if ((int)param_4[1] == 0) {
      param_4 = (longlong *)0x0;
    }
    else {
      param_4 = (longlong *)*param_4;
    }
    (**(code **)(*param_4 + 0x58))(param_4,&local_210,param_2);
    plVar1 = local_208;
    if (local_208 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_208 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_208)(local_208);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
  }
  FUN_1449db362(param_5 + 2);
  if ((local_40 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a0234a FUN_146a0234a body=53 status=ok
// SIG undefined FUN_146a0234a(void)

longlong FUN_146a0234a(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_140a5071c();
  uVar1 = DAT_14c846328;
  *(undefined8 *)(param_1 + 0x1a8) = DAT_14c846320;
  *(undefined8 *)(param_1 + 0x1b0) = uVar1;
  *(undefined1 *)(param_1 + 0x1b8) = 1;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  return param_1;
}



// FUNCTION 146a02380 FUN_146a02380 body=115 status=ok
// SIG undefined FUN_146a02380(void)

longlong * FUN_146a02380(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146a04a92(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 146a023f4 FUN_146a023f4 body=198 status=ok
// SIG undefined FUN_146a023f4(void)

void FUN_146a023f4(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x278) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x280);
    if (plVar5 == (longlong *)0x0) goto LAB_146a02483;
    *(undefined8 *)(param_1 + 0x280) = 0;
LAB_146a0244d:
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146a02483;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x278) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x280);
    if (plVar4 != plVar5) {
      *(longlong **)(param_1 + 0x280) = plVar4;
      if (plVar5 == (longlong *)0x0) goto LAB_146a02483;
      goto LAB_146a0244d;
    }
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_146a02483;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_146a02483:
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146a024ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146a024ba FUN_146a024ba body=9009 status=ok
// SIG undefined FUN_146a024ba(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_146a024ba(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined ***pppuVar14;
  byte bVar15;
  undefined1 uVar16;
  code *pcVar17;
  int iVar18;
  longlong *plVar19;
  undefined1 uVar20;
  int iVar21;
  longlong *plVar22;
  undefined8 uVar23;
  bool bVar24;
  longlong lVar25;
  uint uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auStack_d88 [32];
  code **local_d68;
  ulonglong local_d60;
  longlong **local_d58;
  longlong local_d48;
  longlong *local_d40;
  longlong *local_d38;
  longlong *local_d30;
  code *local_d28;
  code *local_d20;
  longlong *local_d18;
  code *local_d10;
  longlong *local_d08;
  longlong local_d00;
  uint local_cf4;
  uint local_cf0;
  int local_cec;
  longlong local_ce8;
  undefined4 local_ce0;
  undefined4 uStack_cdc;
  undefined4 uStack_cd8;
  undefined4 uStack_cd4;
  undefined4 local_cd0;
  undefined1 local_ccc;
  undefined8 local_cc8;
  undefined8 uStack_cc0;
  longlong local_cb8;
  undefined1 local_cb0;
  undefined8 local_ca8;
  undefined8 uStack_ca0;
  undefined4 local_c98;
  undefined4 uStack_c94;
  undefined4 uStack_c90;
  undefined4 uStack_c8c;
  undefined1 local_c88;
  undefined8 local_c80;
  undefined8 uStack_c78;
  undefined8 local_c70;
  code *local_c68;
  longlong *local_c60;
  code *local_c58;
  longlong *local_c50;
  longlong *local_c48;
  undefined8 uStack_c40;
  undefined8 local_c38;
  longlong local_c30;
  code *local_c28;
  longlong *local_c20;
  code *local_c18;
  longlong *local_c10;
  longlong *local_c08;
  longlong *local_c00;
  undefined8 local_bf8;
  longlong local_bf0;
  code *local_be8;
  longlong *local_be0;
  code *local_bd8;
  longlong *local_bd0;
  longlong *local_bc8;
  longlong *local_bc0;
  undefined1 local_bb1;
  undefined8 local_bb0;
  longlong *local_ba8;
  undefined1 local_b91;
  undefined8 local_b90;
  longlong *local_b88;
  undefined1 local_b71;
  code *local_b70;
  longlong *local_b68;
  undefined8 local_b58;
  longlong *local_b50;
  undefined8 local_b48;
  longlong *local_b40;
  code *local_b38;
  longlong *local_b30;
  code *local_b28;
  longlong *local_b20;
  undefined4 local_b18;
  undefined1 local_b14;
  undefined8 local_b10;
  undefined4 local_b08;
  code *local_b00;
  longlong *local_af8;
  undefined4 local_af0;
  undefined1 local_aec;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined8 local_ad8;
  undefined8 uStack_ad0;
  undefined1 local_ac8;
  undefined8 local_ac0;
  undefined8 uStack_ab8;
  undefined4 local_aa8;
  undefined1 local_aa4;
  undefined8 local_aa0;
  undefined8 uStack_a98;
  undefined4 local_a90;
  undefined1 local_a8c;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined4 local_a78;
  undefined1 local_a74;
  undefined8 local_a70;
  undefined8 uStack_a68;
  undefined4 local_a60;
  undefined1 local_a5c;
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined4 local_a48;
  undefined1 local_a44;
  undefined8 local_a40;
  undefined8 uStack_a38;
  undefined4 local_a30;
  undefined1 local_a2c;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined8 uStack_a10;
  undefined1 local_a08;
  undefined8 local_a00;
  undefined8 uStack_9f8;
  undefined4 local_9f0;
  undefined1 local_9ec;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined4 local_9d8;
  undefined1 local_9d4;
  undefined8 local_9d0;
  undefined8 uStack_9c8;
  undefined4 local_9c0;
  undefined1 local_9bc;
  undefined8 local_9b8;
  undefined8 uStack_9b0;
  undefined4 local_9a8;
  undefined1 local_9a4;
  undefined8 local_9a0;
  undefined8 uStack_998;
  undefined4 local_990;
  undefined1 local_98c;
  undefined8 local_988;
  undefined8 uStack_980;
  undefined8 local_978;
  undefined8 uStack_970;
  undefined1 local_968;
  undefined8 local_960;
  undefined8 uStack_958;
  undefined1 local_950 [16];
  undefined1 local_940 [16];
  code *local_930;
  undefined4 local_928;
  undefined4 uStack_924;
  undefined8 local_918;
  undefined8 uStack_910;
  undefined1 local_908;
  undefined1 local_900 [392];
  undefined1 local_778 [8];
  longlong *local_770;
  code *local_6b8;
  longlong *local_6b0;
  undefined4 local_610;
  undefined1 local_60c;
  undefined1 local_608 [16];
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined1 local_5e8;
  undefined1 uStack_5e7;
  ushort uStack_5e6;
  undefined4 uStack_5e4;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  code *local_450;
  longlong *local_448;
  longlong *local_440;
  undefined8 uStack_438;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined1 local_428 [8];
  undefined1 local_420 [8];
  undefined4 local_418;
  undefined1 local_414;
  longlong local_410 [2];
  undefined8 local_400;
  longlong *local_3f8 [2];
  undefined4 local_3e8;
  undefined1 local_3e4;
  undefined1 local_3e0 [16];
  longlong local_3d0;
  undefined1 local_3c8 [8];
  undefined1 local_3c0 [8];
  undefined4 local_3b8;
  undefined1 local_3b4;
  undefined1 local_3b0 [40];
  undefined4 local_388;
  undefined1 local_384;
  undefined1 local_380 [56];
  undefined4 local_348;
  undefined1 local_344;
  undefined1 local_340 [48];
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 local_300;
  undefined1 local_2fc;
  undefined1 local_2f8 [112];
  code *local_288;
  undefined8 uStack_280;
  undefined ***local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined **local_268;
  longlong local_260;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_d88;
  if (*(int *)(*(longlong *)(param_1 + 0x278) + 0x50) == 0) {
    if (*(longlong *)(param_1 + 0x208) != DAT_14c98dec8) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_d88);
    }
    goto LAB_146a031ef;
  }
  local_d48 = *(longlong *)(param_1 + 0x278);
  FUN_146a07364(param_1);
  lVar13 = *(longlong *)(param_1 + 0x278);
  plVar12 = *(longlong **)(lVar13 + 0x58);
  local_d68 = (code **)((ulonglong)local_d68 & 0xffffffffffffff00);
  lVar10 = (**(code **)(*plVar12 + 0x98))(plVar12,DAT_14c98de30,*(undefined8 *)(lVar13 + 0x60),0);
  if (lVar10 == 0) {
    uVar11 = FUN_141319416();
    local_ce8 = (**(code **)(*plVar12 + 0x58))
                          (plVar12,*(undefined8 *)(lVar13 + 0x60),".Background",uVar11);
    uVar29 = 0;
    uVar30 = 0;
    uVar27 = 0;
    uVar28 = 0;
  }
  else {
    lVar10 = FUN_1461d88a6(plVar12,*(undefined8 *)(lVar13 + 0x60),0,0);
    local_ce8 = lVar10 + 0x10;
    uVar29 = *(undefined4 *)(lVar10 + 0x3610);
    uVar30 = *(undefined4 *)(lVar10 + 0x3614);
    uVar27 = *(undefined4 *)(lVar10 + 0x3618);
    uVar28 = *(undefined4 *)(lVar10 + 0x361c);
  }
  local_d00 = param_1;
  switch(*(undefined1 *)(*(longlong *)(param_1 + 0x278) + 0x68)) {
  case 0:
    FUN_140a5296a(&local_5f8);
    local_d68 = &local_6b8;
    FUN_140a541dc(&local_288,"SHorizontalBox",
                  ".\\Runtime/Slate/Private/Framework/MultiBox/MultiBox.cpp",0x430);
    FUN_140a50ec6(&local_288,&local_930,&local_5f8);
    pcVar17 = local_930;
    local_d40 = (longlong *)CONCAT44(uStack_924,local_928);
    if (local_d40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d40 + 1) = (int)local_d40[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_d40 + 1) = (int)local_d40[1] + 1;
      UNLOCK();
      plVar12 = (longlong *)CONCAT44(uStack_924,local_928);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar22 = plVar12 + 1;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)*plVar22 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
    }
    plVar12 = uStack_280;
    if (uStack_280 != (longlong *)0x0) {
      LOCK();
      plVar22 = uStack_280 + 1;
      *(int *)plVar22 = (int)*plVar22 + -1;
      UNLOCK();
      if ((int)*plVar22 == 0) {
        (**(code **)*uStack_280)(uStack_280);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    FUN_145ab33da(&local_5f8);
    local_d10 = pcVar17;
    goto LAB_146a02760;
  case 1:
  case 3:
    FUN_146a08834(&local_5f8);
    local_288 = FUN_146a08a0e;
    uStack_280 = (longlong *)((ulonglong)uStack_280 & 0xffffffff00000000);
    FUN_146a0888c(local_940,param_1);
    FUN_1469fa47e(&local_450,local_940);
    FUN_1449db362(local_940);
    local_430 = CONCAT31(local_430._1_3_,*(undefined1 *)(*(longlong *)(param_1 + 0x278) + 0x31));
    uStack_438 = *(undefined8 *)(lVar13 + 0x60);
    local_440 = plVar12;
    FUN_146a2f6b6(&local_288,&local_6b8);
    FUN_146a08ba4(&local_288,&local_930,&local_5f8);
    plVar12 = (longlong *)CONCAT44(uStack_924,local_928);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    *(code **)(param_1 + 0x2b8) = local_930;
    plVar22 = *(longlong **)(param_1 + 0x2c0);
    local_d40 = plVar22;
    pcVar17 = local_930;
    if (plVar12 != plVar22) {
      *(longlong **)(param_1 + 0x2c0) = plVar12;
      local_d40 = plVar12;
      if (plVar22 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar22 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar22)(plVar22);
          LOCK();
          piVar1 = (int *)((longlong)plVar22 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
          }
        }
        local_d40 = *(longlong **)(param_1 + 0x2c0);
        pcVar17 = *(code **)(param_1 + 0x2b8);
      }
      plVar12 = (longlong *)0x0;
    }
    if (local_d40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d40 + 1) = (int)local_d40[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_d40 + 1) = (int)local_d40[1] + 1;
      UNLOCK();
    }
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar22 = plVar12 + 1;
      *(int *)plVar22 = (int)*plVar22 + -1;
      UNLOCK();
      if ((int)*plVar22 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    plVar12 = (longlong *)CONCAT44(uStack_924,local_928);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar22 = plVar12 + 1;
      *(int *)plVar22 = (int)*plVar22 + -1;
      UNLOCK();
      if ((int)*plVar22 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    plVar12 = uStack_280;
    if (uStack_280 != (longlong *)0x0) {
      LOCK();
      plVar22 = uStack_280 + 1;
      *(int *)plVar22 = (int)*plVar22 + -1;
      UNLOCK();
      if ((int)*plVar22 == 0) {
        (**(code **)*uStack_280)(uStack_280);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    FUN_1449db362(&local_450);
    FUN_140a4ff8c(&local_5f8);
    local_d10 = pcVar17;
LAB_146a02760:
    local_d18 = (longlong *)0x0;
    local_d08 = local_d40;
    local_d28 = local_d10;
LAB_146a0276d:
    local_d20 = (code *)0x0;
    local_d38 = (longlong *)0x0;
    break;
  case 2:
    FUN_146a08c5a(&local_5f8);
    local_288 = FUN_146a08a0e;
    uStack_280 = (longlong *)((ulonglong)uStack_280 & 0xffffffff00000000);
    FUN_146a0888c(local_950,param_1,&local_288);
    FUN_1469fa47e(&local_450,local_950);
    FUN_1449db362(local_950);
    local_418 = CONCAT31(local_418._1_3_,*(undefined1 *)(*(longlong *)(param_1 + 0x278) + 0x31));
    local_278 = (undefined ***)0x0;
    local_268 = &PTR_LAB_149f0ab30;
    local_288 = (code *)&LAB_1428fdd2e;
    local_260 = param_1;
    FUN_146a08ce6(&local_5f8,&local_288);
    uStack_438 = *(undefined8 *)(lVar13 + 0x60);
    local_440 = plVar12;
    FUN_146a2fda4(&local_930,local_778);
    FUN_146a08d82(&local_930,&local_6b8,&local_5f8);
    if (local_6b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_6b0 + 1) = (int)local_6b0[1] + 1;
      UNLOCK();
    }
    *(code **)(param_1 + 0x2c8) = local_6b8;
    plVar22 = *(longlong **)(param_1 + 0x2d0);
    pcVar17 = local_6b8;
    plVar12 = plVar22;
    plVar19 = local_6b0;
    if (local_6b0 != plVar22) {
      *(longlong **)(param_1 + 0x2d0) = local_6b0;
      plVar12 = local_6b0;
      if (plVar22 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar22 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar22)(plVar22);
          LOCK();
          piVar1 = (int *)((longlong)plVar22 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
          }
        }
        local_6b8 = *(code **)(param_1 + 0x2c8);
        plVar12 = *(longlong **)(param_1 + 0x2d0);
      }
      plVar19 = (longlong *)0x0;
      pcVar17 = local_6b8;
    }
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    if (plVar19 != (longlong *)0x0) {
      LOCK();
      plVar22 = plVar19 + 1;
      *(int *)plVar22 = (int)*plVar22 + -1;
      UNLOCK();
      if ((int)*plVar22 == 0) {
        (**(code **)*plVar19)(plVar19);
        LOCK();
        piVar1 = (int *)((longlong)plVar19 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
        }
      }
    }
    if (local_6b0 != (longlong *)0x0) {
      LOCK();
      plVar22 = local_6b0 + 1;
      *(int *)plVar22 = (int)*plVar22 + -1;
      UNLOCK();
      if ((int)*plVar22 == 0) {
        (**(code **)*local_6b0)(local_6b0);
        LOCK();
        piVar1 = (int *)((longlong)local_6b0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_6b0 + 0x10))(local_6b0);
        }
      }
    }
    plVar22 = (longlong *)CONCAT44(uStack_924,local_928);
    if (plVar22 != (longlong *)0x0) {
      LOCK();
      plVar19 = plVar22 + 1;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)*plVar19 == 0) {
        (**(code **)*plVar22)(plVar22);
        LOCK();
        piVar1 = (int *)((longlong)plVar22 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
        }
      }
    }
    if (local_288 != (code *)0x0) {
      pppuVar14 = local_278;
      if (local_278 == (undefined ***)0x0) {
        pppuVar14 = &local_268;
      }
      (*(code *)(*pppuVar14)[2])();
    }
    FUN_1449db362(local_410 + 1);
    FUN_1449db362(local_428);
    FUN_1449db362(&local_450);
    FUN_140a4ff8c(&local_5f8);
    goto LAB_146a03fcb;
  case 4:
    FUN_1407679b0(&local_288);
    FUN_145aafb3e(&local_930);
    local_978 = 0x4000000000000000;
    uStack_970 = 0x4000000000000000;
    local_968 = 1;
    local_960 = 0;
    uStack_958 = 0;
    local_908 = 1;
    local_918 = 0x4000000000000000;
    uStack_910 = 0x4000000000000000;
    FUN_144a450dc(local_900,&local_960);
    FUN_1449db362(&local_960);
    uVar11 = FUN_145aaf900(&local_930);
    FUN_146a08e68(&local_5f8);
    local_990 = 1;
    local_98c = 1;
    local_988 = 0;
    uStack_980 = 0;
    local_388 = 1;
    local_384 = 1;
    FUN_144a450dc(local_380,&local_988);
    FUN_1449db362(&local_988);
    local_9a8 = 0x42480000;
    local_9a4 = 1;
    local_9a0 = 0;
    uStack_998 = 0;
    local_400 = CONCAT35(local_400._5_3_,0x142480000);
    FUN_144a450dc(local_3f8,&local_9a0);
    FUN_1449db362(&local_9a0);
    local_9c0 = 0x422c0000;
    local_9bc = 1;
    local_9b8 = 0;
    uStack_9b0 = 0;
    local_3e8 = 0x422c0000;
    local_3e4 = 1;
    FUN_144a450dc(local_3e0,&local_9b8);
    FUN_1449db362(&local_9b8);
    local_9d8 = 0x42480000;
    local_9d4 = 1;
    local_9d0 = 0;
    uStack_9c8 = 0;
    local_3d0 = CONCAT35(local_3d0._5_3_,0x142480000);
    FUN_144a450dc(local_3c8,&local_9d0);
    FUN_1449db362(&local_9d0);
    local_9f0 = 0x422c0000;
    local_9ec = 1;
    local_9e8 = 0;
    uStack_9e0 = 0;
    local_3b8 = 0x422c0000;
    local_3b4 = 1;
    FUN_144a450dc(local_3b0,&local_9e8);
    FUN_1449db362(&local_9e8);
    local_a18 = 0x3f80000040000000;
    uStack_a10 = 0x3f80000040000000;
    local_a08 = 1;
    local_a00 = 0;
    uStack_9f8 = 0;
    local_430 = CONCAT31(local_430._1_3_,1);
    local_440 = (longlong *)0x3f80000040000000;
    uStack_438 = 0x3f80000040000000;
    FUN_144a450dc(local_428,&local_a00);
    FUN_1449db362(&local_a00);
    FUN_146a3014c(&local_6b8,0x451,&local_b00);
    if (local_6b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_6b0 + 1) = (int)local_6b0[1] + 1;
      UNLOCK();
    }
    plVar12 = *(longlong **)(local_d00 + 0x2e0);
    *(code **)(local_d00 + 0x2d8) = local_6b8;
    *(longlong **)(local_d00 + 0x2e0) = local_6b0;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar22 = plVar12 + 1;
      *(int *)plVar22 = (int)*plVar22 + -1;
      UNLOCK();
      if ((int)*plVar22 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    FUN_146a08f84(&local_6b8,&local_bb0,&local_5f8);
    local_b90 = local_bb0;
    local_b88 = local_ba8;
    if (local_ba8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_ba8 + 1) = (int)local_ba8[1] + 1;
      UNLOCK();
    }
    uVar11 = FUN_145aaf878(uVar11,&local_b90);
    uVar11 = FUN_145aaf822(&local_288,uVar11);
    uVar23 = 1099;
    goto LAB_146a03ea3;
  case 5:
    if (*(char *)(param_1 + 0x49c) == '\x01') {
      FUN_1407679b0(&local_288);
      FUN_145aafb3e(&local_6b8);
      local_b14 = *(undefined1 *)(param_1 + 0x49c);
      local_b18 = *(undefined4 *)(param_1 + 0x498);
      local_b10 = 0;
      local_b08 = 0;
      FUN_140a52b3c(&local_b10,param_1 + 0x4a0);
      local_60c = local_b14;
      local_610 = local_b18;
      FUN_144a450dc(local_608,&local_b10);
      FUN_1449db362(&local_b10);
      FUN_146a095be(&local_5f8);
      FUN_146a9452c(local_778);
      FUN_1407679b0(&local_930);
      local_d68 = (code **)&local_b71;
      FUN_14076837c(&local_b70,"SVerticalBox",
                    ".\\Runtime/Slate/Private/Framework/MultiBox/MultiBox.cpp",0x487);
      plVar12 = local_b68;
      local_d20 = local_b70;
      if (local_b68 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_b68 + 1) = (int)local_b68[1] + 1;
        UNLOCK();
      }
      FUN_14076784c(&local_b70,&local_b58,&local_930);
      local_b48 = local_b58;
      local_b40 = local_b50;
      if (local_b50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_b50 + 1) = (int)local_b50[1] + 1;
        UNLOCK();
      }
      uVar11 = FUN_146a0979e(local_778,&local_b48);
      FUN_146a09748(&local_5f8,uVar11);
      local_d68 = (code **)&local_b91;
      FUN_146a3d09a(&local_b90,"SScrollBox",
                    ".\\Runtime/Slate/Private/Framework/MultiBox/MultiBox.cpp",0x484);
      FUN_146a09826(&local_b90,&local_b38,&local_5f8);
      local_b28 = local_b38;
      local_b20 = local_b30;
      if (local_b30 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_b30 + 1) = (int)local_b30[1] + 1;
        UNLOCK();
      }
      uVar11 = FUN_145aaf878(&local_6b8,&local_b28);
      uVar11 = FUN_145aaf822(&local_288,uVar11);
      local_d68 = (code **)&local_bb1;
      FUN_14076837c(&local_bb0,"SVerticalBox",
                    ".\\Runtime/Slate/Private/Framework/MultiBox/MultiBox.cpp",0x47f);
      FUN_14076784c(&local_bb0,&local_b00,uVar11);
      if (local_af8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_af8 + 1) = (int)local_af8[1] + 1;
        UNLOCK();
        if (local_af8 != (longlong *)0x0) {
          LOCK();
          plVar22 = local_af8 + 1;
          *(int *)plVar22 = (int)*plVar22 + -1;
          UNLOCK();
          if ((int)*plVar22 == 0) {
            (**(code **)*local_af8)(local_af8);
            LOCK();
            piVar1 = (int *)((longlong)local_af8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_af8 + 0x10))(local_af8);
            }
          }
        }
      }
      if (local_ba8 != (longlong *)0x0) {
        LOCK();
        plVar22 = local_ba8 + 1;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)*plVar22 == 0) {
          (**(code **)*local_ba8)(local_ba8);
          LOCK();
          piVar1 = (int *)((longlong)local_ba8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_ba8 + 0x10))(local_ba8);
          }
        }
      }
      plVar22 = local_b20;
      if (local_b20 != (longlong *)0x0) {
        LOCK();
        plVar19 = local_b20 + 1;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)*plVar19 == 0) {
          (**(code **)*local_b20)(local_b20);
          LOCK();
          piVar1 = (int *)((longlong)plVar22 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
          }
        }
      }
      if (local_b30 != (longlong *)0x0) {
        LOCK();
        plVar22 = local_b30 + 1;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)*plVar22 == 0) {
          (**(code **)*local_b30)(local_b30);
          LOCK();
          piVar1 = (int *)((longlong)local_b30 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_b30 + 0x10))(local_b30);
          }
        }
      }
      plVar22 = local_b88;
      if (local_b88 != (longlong *)0x0) {
        LOCK();
        plVar19 = local_b88 + 1;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)*plVar19 == 0) {
          (**(code **)*local_b88)(local_b88);
          LOCK();
          piVar1 = (int *)((longlong)plVar22 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
          }
        }
      }
      plVar22 = local_b40;
      if (local_b40 != (longlong *)0x0) {
        LOCK();
        plVar19 = local_b40 + 1;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)*plVar19 == 0) {
          (**(code **)*local_b40)(local_b40);
          LOCK();
          piVar1 = (int *)((longlong)plVar22 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
          }
        }
      }
      if (local_b50 != (longlong *)0x0) {
        LOCK();
        plVar22 = local_b50 + 1;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)*plVar22 == 0) {
          (**(code **)*local_b50)(local_b50);
          LOCK();
          piVar1 = (int *)((longlong)local_b50 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_b50 + 0x10))(local_b50);
          }
        }
      }
      local_d10 = local_b00;
      local_d08 = local_af8;
      if (local_b68 != (longlong *)0x0) {
        LOCK();
        plVar22 = local_b68 + 1;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)*plVar22 == 0) {
          (**(code **)*local_b68)(local_b68);
          LOCK();
          piVar1 = (int *)((longlong)local_b68 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_b68 + 0x10))(local_b68);
          }
        }
      }
      local_d38 = plVar12;
      FUN_14149255e(&local_930);
      FUN_146a0989a(local_778);
      FUN_146a09906(&local_5f8);
      FUN_140767f30(&local_6b8);
      FUN_14149255e(&local_288);
    }
    else {
      FUN_146a095be(&local_5f8);
      FUN_146a9452c(&local_930);
      FUN_1407679b0(&local_288);
      local_d68 = &local_b00;
      FUN_14076837c(&local_6b8,"SVerticalBox",
                    ".\\Runtime/Slate/Private/Framework/MultiBox/MultiBox.cpp",0x491);
      plVar12 = local_6b0;
      local_d20 = local_6b8;
      if (local_6b0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_6b0 + 1) = (int)local_6b0[1] + 1;
        UNLOCK();
      }
      FUN_14076784c(&local_6b8,&local_bb0,&local_288);
      local_b90 = local_bb0;
      local_b88 = local_ba8;
      if (local_ba8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_ba8 + 1) = (int)local_ba8[1] + 1;
        UNLOCK();
      }
      uVar11 = FUN_146a0979e(&local_930,&local_b90);
      FUN_146a09748(&local_5f8,uVar11);
      local_d68 = &local_b28;
      FUN_146a3d09a(local_778,"SScrollBox",
                    ".\\Runtime/Slate/Private/Framework/MultiBox/MultiBox.cpp",0x48e);
      FUN_146a09826(local_778,&local_b70,&local_5f8);
      if (local_b68 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_b68 + 1) = (int)local_b68[1] + 1;
        UNLOCK();
        if (local_b68 != (longlong *)0x0) {
          LOCK();
          plVar22 = local_b68 + 1;
          *(int *)plVar22 = (int)*plVar22 + -1;
          UNLOCK();
          if ((int)*plVar22 == 0) {
            (**(code **)*local_b68)(local_b68);
            LOCK();
            piVar1 = (int *)((longlong)local_b68 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_b68 + 0x10))(local_b68);
            }
          }
        }
      }
      if (local_770 != (longlong *)0x0) {
        LOCK();
        plVar22 = local_770 + 1;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)*plVar22 == 0) {
          (**(code **)*local_770)(local_770);
          LOCK();
          piVar1 = (int *)((longlong)local_770 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_770 + 0x10))(local_770);
          }
        }
      }
      plVar22 = local_b88;
      if (local_b88 != (longlong *)0x0) {
        LOCK();
        plVar19 = local_b88 + 1;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)*plVar19 == 0) {
          (**(code **)*local_b88)(local_b88);
          LOCK();
          piVar1 = (int *)((longlong)plVar22 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
          }
        }
      }
      if (local_ba8 != (longlong *)0x0) {
        LOCK();
        plVar22 = local_ba8 + 1;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)*plVar22 == 0) {
          (**(code **)*local_ba8)(local_ba8);
          LOCK();
          piVar1 = (int *)((longlong)local_ba8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_ba8 + 0x10))(local_ba8);
          }
        }
      }
      if (local_6b0 != (longlong *)0x0) {
        LOCK();
        plVar22 = local_6b0 + 1;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)*plVar22 == 0) {
          (**(code **)*local_6b0)(local_6b0);
          LOCK();
          piVar1 = (int *)((longlong)local_6b0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_6b0 + 0x10))(local_6b0);
          }
        }
      }
      local_d38 = plVar12;
      local_d10 = local_b70;
      local_d08 = local_b68;
      FUN_14149255e(&local_288);
      FUN_146a0989a(&local_930);
      FUN_146a09906(&local_5f8);
    }
    local_d18 = (longlong *)0x0;
    local_d28 = (code *)0x0;
    local_d40 = (longlong *)0x0;
    break;
  case 6:
    FUN_146a09090(&local_5f8);
    local_930 = FUN_146a04c18;
    local_928 = 0;
    FUN_146a3a3ac(&local_288,param_1);
    FUN_144a450dc(&local_450,&local_288);
    FUN_1449db362(&local_288);
    plVar12 = local_3f8[0];
    local_410[0] = 0;
    local_410[1] = 0;
    local_400 = 0;
    if (local_3f8[0] != (longlong *)0x0) {
      local_3f8[0] = (longlong *)0x0;
      LOCK();
      plVar22 = plVar12 + 1;
      *(int *)plVar22 = (int)*plVar22 + -1;
      UNLOCK();
      if ((int)*plVar22 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    local_288 = FUN_146a05068;
    uStack_280._0_4_ = 0;
    local_410[0] = param_1 + 0x288;
    FUN_146a09298(&local_5f8,param_1,&local_288);
    local_288 = FUN_146a050fc;
    uStack_280 = (longlong *)((ulonglong)uStack_280._4_4_ << 0x20);
    FUN_146a09348(&local_5f8,param_1,&local_288);
    local_af0 = 0;
    local_aec = 1;
    local_ae8 = 0;
    uStack_ae0 = 0;
    local_348 = 0;
    local_344 = 1;
    FUN_144a450dc(local_340,&local_ae8);
    FUN_1449db362(&local_ae8);
    FUN_146a30366(&local_288,&local_6b8);
    FUN_146a093f8(&local_288,&local_930,&local_5f8);
    pcVar17 = local_930;
    plVar12 = (longlong *)CONCAT44(uStack_924,local_928);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      plVar22 = (longlong *)CONCAT44(uStack_924,local_928);
      if (plVar22 != (longlong *)0x0) {
        LOCK();
        plVar19 = plVar22 + 1;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)*plVar19 == 0) {
          (**(code **)*plVar22)(plVar22);
          LOCK();
          piVar1 = (int *)((longlong)plVar22 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
          }
        }
      }
    }
    plVar22 = uStack_280;
    if (uStack_280 != (longlong *)0x0) {
      LOCK();
      plVar19 = uStack_280 + 1;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)*plVar19 == 0) {
        (**(code **)*uStack_280)(uStack_280);
        LOCK();
        piVar1 = (int *)((longlong)plVar22 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
        }
      }
    }
    local_d10 = pcVar17;
    FUN_146a0946c(&local_5f8);
    local_d28 = (code *)0x0;
    local_d40 = (longlong *)0x0;
    local_d18 = plVar12;
    local_d08 = plVar12;
    goto LAB_146a0276d;
  case 7:
    lVar13 = FUN_1461d88a6(plVar12,*(undefined8 *)(*(longlong *)(param_1 + 0x278) + 0x60),0,0);
    FUN_1407679b0(&local_288);
    FUN_145aafb3e(&local_930);
    local_5f8 = (code *)0x0;
    uStack_5f0 = (code *)0x0;
    local_5e8 = 1;
    local_5e0 = (undefined ***)0x0;
    uStack_5d8 = 0;
    local_918 = 0;
    uStack_910 = 0;
    local_908 = 1;
    FUN_144a450dc(local_900,&local_5e0);
    FUN_1449db362(&local_5e0);
    uVar11 = FUN_145aaf900(&local_930);
    FUN_146a08e68(&local_5f8);
    local_a30 = 0;
    local_a2c = 1;
    local_a28 = 0;
    uStack_a20 = 0;
    local_388 = 0;
    local_384 = 1;
    FUN_144a450dc(local_380,&local_a28);
    FUN_1449db362(&local_a28);
    local_a48 = *(undefined4 *)(lVar13 + 0x3590);
    local_a44 = 1;
    local_a40 = 0;
    uStack_a38 = 0;
    local_400 = CONCAT35(local_400._5_3_,0x100000000);
    local_400 = CONCAT44(local_400._4_4_,local_a48);
    FUN_144a450dc(local_3f8,&local_a40);
    FUN_1449db362(&local_a40);
    local_a60 = *(undefined4 *)(lVar13 + 0x3594);
    local_a5c = 1;
    local_a58 = 0;
    uStack_a50 = 0;
    local_3e4 = 1;
    local_3e8 = local_a60;
    FUN_144a450dc(local_3e0,&local_a58);
    FUN_1449db362(&local_a58);
    local_a78 = *(undefined4 *)(lVar13 + 0x3590);
    local_a74 = 1;
    local_a70 = 0;
    uStack_a68 = 0;
    local_3d0 = CONCAT35(local_3d0._5_3_,0x100000000);
    local_3d0 = CONCAT44(local_3d0._4_4_,local_a78);
    FUN_144a450dc(local_3c8,&local_a70);
    FUN_1449db362(&local_a70);
    local_a90 = *(undefined4 *)(lVar13 + 0x3594);
    local_a8c = 1;
    local_a88 = 0;
    uStack_a80 = 0;
    local_3b4 = 1;
    local_3b8 = local_a90;
    FUN_144a450dc(local_3b0,&local_a88);
    FUN_1449db362(&local_a88);
    local_aa8 = *(undefined4 *)(lVar13 + 0x3598);
    local_aa4 = 1;
    local_aa0 = 0;
    uStack_a98 = 0;
    local_414 = 1;
    local_418 = local_aa8;
    FUN_144a450dc(local_410,&local_aa0);
    FUN_1449db362(&local_aa0);
    local_ad8 = 0;
    uStack_ad0 = 0;
    local_ac8 = 1;
    local_ac0 = 0;
    uStack_ab8 = 0;
    local_440 = (longlong *)0x0;
    uStack_438 = 0;
    local_430 = CONCAT31(local_430._1_3_,1);
    FUN_144a450dc(local_428,&local_ac0);
    FUN_1449db362(&local_ac0);
    FUN_146a3014c(&local_6b8,0x466,&local_b00);
    if (local_6b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_6b0 + 1) = (int)local_6b0[1] + 1;
      UNLOCK();
    }
    plVar12 = *(longlong **)(local_d00 + 0x2e0);
    *(code **)(local_d00 + 0x2d8) = local_6b8;
    *(longlong **)(local_d00 + 0x2e0) = local_6b0;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar22 = plVar12 + 1;
      *(int *)plVar22 = (int)*plVar22 + -1;
      UNLOCK();
      if ((int)*plVar22 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    FUN_146a08f84(&local_6b8,&local_bb0,&local_5f8);
    local_b90 = local_bb0;
    local_b88 = local_ba8;
    if (local_ba8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_ba8 + 1) = (int)local_ba8[1] + 1;
      UNLOCK();
    }
    uVar11 = FUN_145aaf878(uVar11,&local_b90);
    uVar11 = FUN_145aaf822(&local_288,uVar11);
    uVar23 = 0x460;
LAB_146a03ea3:
    local_d68 = &local_b28;
    FUN_14076837c(local_778,"SVerticalBox",
                  ".\\Runtime/Slate/Private/Framework/MultiBox/MultiBox.cpp",uVar23);
    FUN_14076784c(local_778,&local_b70,uVar11);
    if (local_b68 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b68 + 1) = (int)local_b68[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_b68 + 1) = (int)local_b68[1] + 1;
      UNLOCK();
      if (local_b68 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_b68 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*local_b68)(local_b68);
          LOCK();
          piVar1 = (int *)((longlong)local_b68 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_b68 + 0x10))(local_b68);
          }
        }
      }
    }
    if (local_770 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_770 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*local_770)(local_770);
        LOCK();
        piVar1 = (int *)((longlong)local_770 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_770 + 0x10))(local_770);
        }
      }
    }
    plVar12 = local_b88;
    if (local_b88 != (longlong *)0x0) {
      LOCK();
      plVar22 = local_b88 + 1;
      *(int *)plVar22 = (int)*plVar22 + -1;
      UNLOCK();
      if ((int)*plVar22 == 0) {
        (**(code **)*local_b88)(local_b88);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    if (local_ba8 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_ba8 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*local_ba8)(local_ba8);
        LOCK();
        piVar1 = (int *)((longlong)local_ba8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_ba8 + 0x10))(local_ba8);
        }
      }
    }
    if (local_6b0 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_6b0 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*local_6b0)(local_6b0);
        LOCK();
        piVar1 = (int *)((longlong)local_6b0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_6b0 + 0x10))(local_6b0);
        }
      }
    }
    FUN_146a08ff8(&local_5f8);
    FUN_140767f30(&local_930);
    FUN_14149255e(&local_288);
    pcVar17 = local_b70;
    plVar12 = local_b68;
LAB_146a03fcb:
    local_d18 = (longlong *)0x0;
    local_d28 = (code *)0x0;
    local_d40 = (longlong *)0x0;
    local_d38 = plVar12;
    local_d20 = pcVar17;
    local_d10 = pcVar17;
    local_d08 = plVar12;
    break;
  default:
    local_d18 = (longlong *)0x0;
    local_d28 = (code *)0x0;
    local_d40 = (longlong *)0x0;
    local_d10 = (code *)0x0;
    local_d08 = (longlong *)0x0;
    local_d20 = (code *)0x0;
    local_d38 = (longlong *)0x0;
  }
  if (0 < *(int *)(local_d48 + 0x50)) {
    iVar8 = -1;
    bVar15 = 0;
    bVar24 = false;
    uVar26 = 0;
    lVar13 = local_d48;
    iVar18 = 0;
    do {
      if (iVar8 < (int)uVar26) {
        lVar10 = (longlong)iVar8;
        lVar25 = lVar10 << 4;
        bVar24 = false;
        do {
          iVar8 = iVar8 + 1;
          lVar10 = lVar10 + 1;
          lVar25 = lVar25 + 0x10;
          if (*(int *)(lVar13 + 0x50) <= lVar10) break;
          plVar12 = *(longlong **)(*(longlong *)(lVar13 + 0x48) + lVar25);
          if ((!bVar24) &&
             (cVar5 = (**(code **)(*plVar12 + 0x20))(plVar12), lVar13 = local_d48, cVar5 != '\0')) {
            bVar24 = true;
          }
        } while ((char)plVar12[0x11] != '\x05');
      }
      lVar10 = *(longlong *)(lVar13 + 0x48);
      plVar12 = *(longlong **)(lVar10 + (longlong)(int)uVar26 * 0x10);
      if ((char)plVar12[0x11] == '\x05') {
        iVar21 = iVar18 + 1;
        if (iVar18 < 1) goto LAB_146a02842;
      }
      else {
        iVar21 = 0;
LAB_146a02842:
        local_cf4 = uVar26 + 1;
        if (((int)uVar26 < -1) || (*(int *)(lVar13 + 0x50) <= (int)local_cf4)) {
          plVar22 = (longlong *)0x0;
          local_d30 = (longlong *)0x0;
        }
        else {
          local_d30 = *(longlong **)(lVar10 + (ulonglong)local_cf4 * 0x10);
          plVar22 = *(longlong **)(lVar10 + 8 + (ulonglong)local_cf4 * 0x10);
          if (plVar22 == (longlong *)0x0) {
            plVar22 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
            UNLOCK();
          }
        }
        local_cec = iVar21;
        cVar5 = (**(code **)(*plVar12 + 0x10))(plVar12);
        bVar6 = 1;
        if (cVar5 == '\0') {
          bVar6 = (**(code **)(*plVar12 + 0x18))(plVar12);
          bVar6 = (bVar6 ^ 1) & bVar15;
        }
        bVar15 = bVar6;
        if (local_d30 == (longlong *)0x0) {
          bVar6 = 0;
        }
        else {
          bVar6 = (**(code **)(*local_d30 + 0x18))();
        }
        lVar13 = local_d00;
        if ((int)uVar26 < 1) {
          bVar7 = 0;
        }
        else {
          bVar7 = (**(code **)(**(longlong **)
                                 (*(longlong *)(local_d48 + 0x48) + -0x10 + (ulonglong)uVar26 * 0x10
                                 ) + 0x10))();
        }
        local_cf0 = 0xffffffff;
        if (bVar15 != 0) {
          local_cf0 = 0;
          if ((byte)(bVar6 | bVar7 ^ 1) == 1) {
            uVar9 = -(uint)(bVar7 & bVar6) | 1;
            local_cf0 = uVar9;
            if ((bVar7 ^ 1) != 0) {
              local_cf0 = 2;
            }
            if (bVar6 == 0) {
              local_cf0 = uVar9;
            }
          }
        }
        if ((local_d30 == (longlong *)0x0) || ((char)local_d30[0x11] != '\a')) {
          local_d30 = (longlong *)0x0;
          plVar19 = (longlong *)0x0;
        }
        else {
          plVar19 = local_d30;
          if (plVar22 == (longlong *)0x0) {
            uVar9 = local_cf4;
            if (*(char *)((longlong)local_d30 + 0x17a) == '\0') {
              uVar9 = uVar26;
              plVar19 = (longlong *)0x0;
            }
            uVar26 = uVar9;
            local_d30 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
            UNLOCK();
            if (*(char *)((longlong)local_d30 + 0x17a) == '\x01') {
              LOCK();
              *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
              UNLOCK();
              uVar26 = local_cf4;
              local_d30 = plVar22;
            }
            else {
              local_d30 = (longlong *)0x0;
              plVar19 = (longlong *)0x0;
            }
            LOCK();
            plVar4 = plVar22 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*plVar22)(plVar22);
              LOCK();
              piVar1 = (int *)((longlong)plVar22 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar22 + 0x10))(plVar22);
              }
            }
          }
        }
        if ((((*(longlong *)(lVar13 + 0x2e8) != 0) && (*(char *)(lVar13 + 0x2f0) != '\0')) &&
            (*(longlong *)(lVar13 + 0x2f8) != 0)) &&
           ((*(uint *)(lVar13 + 0x308) != 0xffffffff && (*(uint *)(lVar13 + 0x308) == uVar26)))) {
          local_bc0 = local_d30;
          if (local_d30 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_d30 + 1) = (int)local_d30[1] + 1;
            UNLOCK();
          }
          local_bd8 = local_d20;
          local_bd0 = local_d38;
          if (local_d38 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_d38 + 1) = (int)local_d38[1] + 1;
            UNLOCK();
          }
          local_be8 = local_d28;
          local_be0 = local_d40;
          if (local_d40 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_d40 + 1) = (int)local_d40[1] + 1;
            UNLOCK();
          }
          local_d58 = &local_bc8;
          local_d60 = CONCAT71(local_d60._1_7_,bVar24);
          local_d68 = (code **)CONCAT44(local_d68._4_4_,0xffffffff);
          local_bc8 = plVar19;
          FUN_146a05236(lVar13,*(undefined8 *)(lVar13 + 0x2f8),&local_be8,&local_bd8);
        }
        local_bf8 = *(undefined8 *)(*(longlong *)(local_d48 + 0x48) + (longlong)(int)uVar26 * 0x10);
        local_bf0 = *(longlong *)
                     (*(longlong *)(local_d48 + 0x48) + 8 + (longlong)(int)uVar26 * 0x10);
        if (local_bf0 != 0) {
          LOCK();
          *(int *)(local_bf0 + 8) = *(int *)(local_bf0 + 8) + 1;
          UNLOCK();
        }
        cVar5 = FUN_146a05190(lVar13,&local_bf8);
        if (cVar5 == '\0') {
          local_c00 = local_d30;
          if (local_d30 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_d30 + 1) = (int)local_d30[1] + 1;
            UNLOCK();
          }
          local_c18 = local_d20;
          local_c10 = local_d38;
          if (local_d38 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_d38 + 1) = (int)local_d38[1] + 1;
            UNLOCK();
          }
          local_c28 = local_d28;
          local_c20 = local_d40;
          if (local_d40 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_d40 + 1) = (int)local_d40[1] + 1;
            UNLOCK();
          }
          local_d58 = &local_c08;
          local_d60 = CONCAT71(local_d60._1_7_,bVar24);
          local_d68 = (code **)CONCAT44(local_d68._4_4_,local_cf0);
          local_c08 = plVar19;
          FUN_146a05236(lVar13,plVar12,&local_c28,&local_c18);
        }
        plVar12 = local_d30;
        if (local_d30 != (longlong *)0x0) {
          LOCK();
          plVar19 = local_d30 + 1;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)*plVar19 == 0) {
            (**(code **)*local_d30)(local_d30);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
        iVar21 = local_cec;
        lVar13 = local_d48;
        if (plVar22 != (longlong *)0x0) {
          LOCK();
          plVar12 = plVar22 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*plVar22)(plVar22);
            LOCK();
            piVar1 = (int *)((longlong)plVar22 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            lVar13 = local_d48;
            if (*piVar1 == 0) {
              (**(code **)(*plVar22 + 0x10))(plVar22);
              lVar13 = local_d48;
            }
          }
        }
      }
      uVar26 = uVar26 + 1;
      iVar18 = iVar21;
    } while ((int)uVar26 < *(int *)(lVar13 + 0x50));
  }
  lVar13 = local_d00;
  plVar12 = (longlong *)(local_d00 + 0x360);
  plVar22 = (longlong *)(local_d00 + 0x370);
  local_288 = (code *)0x100000000;
  local_278 = (undefined ***)&DAT_ffffffff;
  uStack_270 = 0;
  uStack_280 = plVar22;
  if (*(int *)(local_d00 + 0x388) == 0) {
    uVar26 = 0;
  }
  else {
    FUN_1449c0562(&local_288);
    uVar26 = *(uint *)(lVar13 + 0x388);
  }
  lVar13 = local_ce8;
  uStack_5d8 = CONCAT44(uStack_26c,uStack_270);
  local_5e0 = local_278;
  pppuVar14 = local_5e0;
  uStack_5f0 = local_288;
  local_5e8 = SUB81(uStack_280,0);
  uStack_5e7 = (undefined1)((ulonglong)uStack_280 >> 8);
  uStack_5e6 = (ushort)((ulonglong)uStack_280 >> 0x10);
  uStack_5e4 = uStack_280._4_4_;
  local_5e0._4_4_ = (uint)((ulonglong)local_278 >> 0x20);
  uVar9 = local_5e0._4_4_;
  local_5f8 = (code *)plVar12;
  if ((local_5e0._4_4_ != uVar26) || (local_5e0 = pppuVar14, uStack_280 != plVar22)) {
    do {
      local_5e0 = pppuVar14;
      lVar10 = *(longlong *)local_5f8;
      lVar25 = (longlong)(int)uVar9;
      local_c38 = *(undefined8 *)(lVar10 + lVar25 * 0x28);
      local_c30 = *(longlong *)(lVar10 + 8 + lVar25 * 0x28);
      if (local_c30 != 0) {
        LOCK();
        *(int *)(local_c30 + 8) = *(int *)(local_c30 + 8) + 1;
        UNLOCK();
      }
      cVar5 = FUN_146a05190(local_d00,&local_c38);
      if (cVar5 == '\0') {
        local_c48 = (longlong *)0x0;
        uStack_c40 = 0;
        local_c58 = local_d20;
        local_c50 = local_d38;
        if (local_d38 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_d38 + 1) = (int)local_d38[1] + 1;
          UNLOCK();
        }
        local_c68 = local_d28;
        local_c60 = local_d40;
        if (local_d40 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_d40 + 1) = (int)local_d40[1] + 1;
          UNLOCK();
        }
        local_d58 = &local_c48;
        local_d60 = local_d60 & 0xffffffffffffff00;
        local_d68 = (code **)CONCAT44(local_d68._4_4_,0xffffffff);
        FUN_146a05236(local_d00,*(undefined8 *)(lVar10 + lVar25 * 0x28),&local_c68,&local_c58);
      }
      local_5e0 = (undefined ***)CONCAT44(local_5e0._4_4_,(uint)local_5e0 & ~uStack_5f0._4_4_);
      FUN_1449c0562(&uStack_5f0);
      uVar9 = local_5e0._4_4_;
      pppuVar14 = local_5e0;
    } while (local_5f8 != (code *)plVar12 ||
             ((longlong *)CONCAT44(uStack_5e4,CONCAT22(uStack_5e6,CONCAT11(uStack_5e7,local_5e8)))
              != plVar22 || local_5e0._4_4_ != uVar26));
  }
  lVar10 = local_d00;
  if (*(longlong *)(local_d00 + 0x2b8) != 0) {
    FUN_146a09982();
  }
  if (*(longlong *)(lVar10 + 0x2c8) != 0) {
    FUN_146a09fa2();
  }
  lVar25 = FUN_141319416();
  if (*(char *)(*(longlong *)(lVar10 + 0x278) + 0x68) == '\x05') {
    uVar27 = 0;
    uVar28 = 0x41000000;
    uVar30 = 0x41000000;
    uVar29 = 0;
    lVar13 = lVar25;
    uStack_cd4 = 0x3f800000;
    uStack_cd8 = 0x3f800000;
    uStack_cdc = 0;
    local_ce0 = 0x3f800000;
    uVar16 = 2;
    uVar20 = 0;
  }
  else {
    plVar12 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
    if (plVar12 == (longlong *)0x0) {
      plVar12 = DAT_14c96b350;
    }
    FUN_1446ddc76(&local_c70,"DefaultForeground",1);
    local_d68 = (code **)&DAT_14c98de74;
    local_d60 = 0;
    (**(code **)(*plVar12 + 0x40))(plVar12,&local_5f8,local_c70,0);
    uVar26 = (uint)uStack_5e6;
    uStack_cd4 = uStack_5f0._4_4_;
    uStack_cd8 = (undefined4)uStack_5f0;
    uStack_cdc = local_5f8._4_4_;
    local_ce0 = (undefined4)local_5f8;
    uVar16 = local_5e8;
    uVar20 = uStack_5e7;
  }
  FUN_140a562d0(&local_5f8);
  local_c88 = 1;
  local_c80 = 0;
  uStack_c78 = 0;
  local_428[0] = 1;
  uStack_438 = CONCAT44(uVar30,uVar29);
  local_c98 = uVar29;
  uStack_c94 = uVar30;
  uStack_c90 = uVar27;
  uStack_c8c = uVar28;
  local_430 = uVar27;
  uStack_42c = uVar28;
  FUN_144a450dc(local_420,&local_c80);
  FUN_1449db362(&local_c80);
  local_cb0 = 1;
  local_ca8 = 0;
  uStack_ca0 = 0;
  local_3c8[0] = 1;
  local_cb8 = lVar13;
  local_3d0 = lVar13;
  FUN_144a450dc(local_3c0,&local_ca8);
  FUN_1449db362(&local_ca8);
  local_cd0 = CONCAT22((short)uVar26,CONCAT11(uVar20,uVar16));
  local_ccc = 1;
  local_cc8 = 0;
  uStack_cc0 = 0;
  local_300 = local_cd0;
  local_2fc = 1;
  local_310 = local_ce0;
  uStack_30c = uStack_cdc;
  uStack_308 = uStack_cd8;
  uStack_304 = uStack_cd4;
  FUN_144a450dc(local_2f8,&local_cc8);
  FUN_1449db362(&local_cc8);
  plVar19 = local_448;
  lVar13 = local_d00;
  plVar22 = local_d08;
  plVar12 = local_d38;
  if (local_d08 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_d08 + 1) = (int)local_d08[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_d08 + 1) = (int)local_d08[1] + 1;
    UNLOCK();
  }
  local_450 = local_d10;
  local_448 = local_d08;
  if (plVar19 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar19 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar19)(plVar19);
      LOCK();
      piVar1 = (int *)((longlong)plVar19 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
  }
  local_d68 = &local_6b8;
  FUN_140a55c32(&local_288,"SBorder",".\\Runtime/Slate/Private/Framework/MultiBox/MultiBox.cpp",
                0x54d);
  FUN_140a530e4(&local_288,&local_930,&local_5f8);
  pcVar17 = local_930;
  plVar19 = (longlong *)CONCAT44(uStack_924,local_928);
  if (plVar19 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
    UNLOCK();
    plVar4 = (longlong *)CONCAT44(uStack_924,local_928);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  plVar4 = uStack_280;
  if (uStack_280 != (longlong *)0x0) {
    LOCK();
    plVar3 = uStack_280 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*uStack_280)(uStack_280);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (plVar22 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar22 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar22)(plVar22);
      LOCK();
      piVar1 = (int *)((longlong)plVar22 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
  }
  FUN_140a59028(&local_5f8);
  FUN_14697eb4e(pcVar17,1);
  local_5f8 = pcVar17;
  if (plVar19 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
    UNLOCK();
  }
  uStack_5f0 = (code *)plVar19;
  FUN_140a58896(lVar13 + 0x1e0,&local_5f8);
  plVar3 = (longlong *)uStack_5f0;
  plVar4 = local_d40;
  if (uStack_5f0 != (code *)0x0) {
    LOCK();
    plVar2 = (longlong *)((longlong)uStack_5f0 + 8);
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (*(code *)**(undefined8 **)uStack_5f0)(uStack_5f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(lVar13 + 0x2a0);
  *(code **)(lVar13 + 0x298) = local_d28;
  *(longlong **)(lVar13 + 0x2a0) = plVar4;
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
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(lVar13 + 0x2b0);
  *(code **)(lVar13 + 0x2a8) = local_d20;
  *(longlong **)(lVar13 + 0x2b0) = plVar12;
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
  if (plVar19 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar19 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar19)(plVar19);
      LOCK();
      piVar1 = (int *)((longlong)plVar19 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
  }
  plVar19 = local_d18;
  if (local_d18 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_d18 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_d18)(local_d18);
      LOCK();
      piVar1 = (int *)((longlong)plVar19 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar19 = plVar4 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
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
  if (plVar22 != (longlong *)0x0) {
    LOCK();
    plVar19 = plVar22 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
      (**(code **)*plVar22)(plVar22);
      LOCK();
      piVar1 = (int *)((longlong)plVar22 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar22 = plVar12 + 1;
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)*plVar22 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
LAB_146a031ef:
  if ((local_d0 ^ (ulonglong)auStack_d88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a04850 FUN_146a04850 body=577 status=ok
// SIG undefined FUN_146a04850(void)

undefined8 *
FUN_146a04850(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             longlong *param_5,longlong *param_6,undefined4 *param_7,undefined1 param_8)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = *param_2;
  local_50 = *param_4;
  local_48 = param_4[1];
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  local_60 = *param_3;
  local_58 = param_3[1];
  if (local_58 != 0) {
    LOCK();
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
    UNLOCK();
  }
  local_70 = 0;
  local_78 = 4;
  FUN_146a0eb42(param_1,&local_60,&local_50,uVar3);
  *param_1 = &PTR_FUN_149f06100;
  plVar4 = (longlong *)*param_5;
  param_1[0x17] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  *(int *)(param_1 + 0x18) = (int)param_5[1];
  *(char *)(param_1 + 0x19) = (char)param_5[2];
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  FUN_1413a4324(param_1 + 0x1a,param_5 + 3);
  plVar4 = (longlong *)*param_6;
  param_1[0x1c] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  *(int *)(param_1 + 0x1d) = (int)param_6[1];
  *(char *)(param_1 + 0x1e) = (char)param_6[2];
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_1413a4324(param_1 + 0x1f,param_6 + 3);
  FUN_144a5dc74(param_1 + 0x21);
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar5 = param_7[1];
  uVar6 = param_7[2];
  uVar7 = param_7[3];
  uVar8 = param_7[4];
  uVar9 = param_7[5];
  uVar10 = param_7[6];
  uVar11 = param_7[7];
  *(undefined4 *)(param_1 + 0x26) = *param_7;
  *(undefined4 *)((longlong)param_1 + 0x134) = uVar5;
  *(undefined4 *)(param_1 + 0x27) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x13c) = uVar7;
  *(undefined4 *)(param_1 + 0x28) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x144) = uVar9;
  *(undefined4 *)(param_1 + 0x29) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x14c) = uVar11;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined2 *)((longlong)param_1 + 0x181) = 1;
  *(undefined1 *)((longlong)param_1 + 0x183) = 1;
  *(undefined1 *)((longlong)param_1 + 0x184) = param_8;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x33) = 1;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
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
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a04a92 FUN_146a04a92 body=388 status=ok
// SIG undefined FUN_146a04a92(void)

void FUN_146a04a92(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)FUN_14001cc68(0x88,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149f09c90;
  plVar4 = plVar3 + 2;
  FUN_146b04c60(plVar4);
  local_38 = plVar4;
  local_30 = plVar3;
  FUN_146a28214(&local_38,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x4b0) = 0x10;
    plVar4 = *(longlong **)(param_1 + 0x4b8);
    if (plVar4 == (longlong *)0x0) goto LAB_146a04b7a;
    *(undefined8 *)(param_1 + 0x4b8) = 0;
LAB_146a04b42:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_146a04b7a;
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
    *(longlong **)(param_1 + 0x4b0) = plVar4;
    plVar4 = *(longlong **)(param_1 + 0x4b8);
    if (plVar3 != plVar4) {
      *(longlong **)(param_1 + 0x4b8) = plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_146a04b7a;
      goto LAB_146a04b42;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_146a04b7a;
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
LAB_146a04b7a:
  plVar4 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_68 = *(undefined4 *)(param_2 + 0x1a8);
  uStack_64 = *(undefined4 *)(param_2 + 0x1ac);
  uStack_60 = *(undefined4 *)(param_2 + 0x1b0);
  uStack_5c = *(undefined4 *)(param_2 + 0x1b4);
  local_58 = *(undefined1 *)(param_2 + 0x1b8);
  local_50 = 0;
  local_48 = 0;
  FUN_140a51be2(&local_50,param_2 + 0x1c0);
  FUN_140a51d16(param_1 + 0x230,param_1,&local_68);
  FUN_1449db362(&local_50);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a04c18 FUN_146a04c18 body=403 status=ok
// SIG undefined FUN_146a04c18(void)

undefined8 *
FUN_146a04c18(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_2e8 [32];
  undefined8 local_2c8;
  undefined1 local_2c0 [8];
  longlong *local_2b8;
  undefined8 local_2a8;
  longlong *local_2a0;
  undefined1 local_298 [600];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  FUN_146a04dac(local_298);
  plVar3 = local_38;
  local_40 = *param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  plVar6 = plVar4;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar5 = (undefined8 *)*local_38;
      local_38 = plVar4;
      (*(code *)*puVar5)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar6 = local_38;
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        plVar6 = local_38;
      }
    }
  }
  local_38 = plVar6;
  local_2c8 = param_4;
  FUN_146a282b8(local_2c0);
  FUN_146a04f14(local_2c0,&local_2a8,local_298);
  *param_2 = local_2a8;
  param_2[1] = local_2a0;
  if (local_2a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2a0 + 1) = (int)local_2a0[1] + 1;
    UNLOCK();
    if (local_2a0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_2a0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_2a0)(local_2a0);
        LOCK();
        piVar2 = (int *)((longlong)local_2a0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_2a0 + 0x10))(local_2a0);
        }
      }
    }
  }
  if (local_2b8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2b8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2b8)(local_2b8);
      LOCK();
      piVar2 = (int *)((longlong)local_2b8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2b8 + 0x10))(local_2b8);
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
  FUN_146a04fc8(local_298);
  plVar4 = (longlong *)param_3[1];
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
  if ((local_30 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a04dac FUN_146a04dac body=359 status=ok
// SIG undefined FUN_146a04dac(void)

longlong FUN_146a04dac(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_30,"TableView.Row",1);
  uVar3 = FUN_145817f3a(lVar2,local_30,0,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar3;
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  *(longlong *)(param_1 + 0x1b0) = lVar2;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined1 *)(param_1 + 0x238) = 1;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined2 *)(param_1 + 0x250) = 1;
  *(undefined1 *)(param_1 + 0x252) = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  *(undefined8 *)(param_1 + 600) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x260) = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a04f14 FUN_146a04f14 body=180 status=ok
// SIG undefined FUN_146a04f14(void)

longlong * FUN_146a04f14(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  
  FUN_140a515e6(*param_1 + 8,param_3);
  plVar1 = (longlong *)*param_1;
  plVar2 = *(longlong **)param_1[2];
  FUN_146a2cba8(plVar1,param_3,plVar2);
  (**(code **)(*plVar1 + 0x80))
            (plVar1,*(undefined4 *)(*plVar2 + 0x270),param_3 + 0x228,param_3 + 600);
  lVar3 = *param_1;
  bVar6 = *(byte *)(lVar3 + 0x38);
  bVar5 = 0x20;
  if ((bVar6 & 0x10) == 0) {
    cVar4 = (**(code **)(*(longlong *)(lVar3 + 8) + 0x220))(lVar3 + 8);
    bVar5 = cVar4 << 5;
    bVar6 = *(byte *)(lVar3 + 0x38);
  }
  *(byte *)(lVar3 + 0x38) = bVar6 & 0xdf | bVar5;
  *(byte *)(*param_1 + 0x39) = *(byte *)(*param_1 + 0x39) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 146a04fc8 FUN_146a04fc8 body=160 status=ok
// SIG undefined FUN_146a04fc8(void)

void FUN_146a04fc8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x260);
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
  FUN_1449db362(param_1 + 0x240);
  FUN_1449db362(param_1 + 0x218);
  FUN_1449db362(param_1 + 0x208);
  FUN_1449db362(param_1 + 0x1f8);
  FUN_1449db362(param_1 + 0x1e8);
  FUN_1449db362(param_1 + 0x1d8);
  FUN_1449db362(param_1 + 0x1c8);
  FUN_1449db362(param_1 + 0x1b8);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 146a05068 FUN_146a05068 body=147 status=ok
// SIG undefined FUN_146a05068(void)

void FUN_146a05068(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_68 [32];
  float local_48 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x290) < 1) {
    fVar3 = 0.0;
  }
  else {
    lVar1 = 0;
    lVar2 = 0;
    fVar4 = 0.0;
    do {
      FUN_144b013c4(*(undefined8 *)(*(longlong *)(param_1 + 0x288) + lVar1),local_48);
      fVar3 = local_48[0];
      if (local_48[0] <= fVar4) {
        fVar3 = fVar4;
      }
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x10;
      fVar4 = fVar3;
    } while (lVar2 < *(int *)(param_1 + 0x290));
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(fVar3);
  }
  return;
}



// FUNCTION 146a050fc FUN_146a050fc body=147 status=ok
// SIG undefined FUN_146a050fc(void)

void FUN_146a050fc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x290) < 1) {
    fVar3 = 0.0;
  }
  else {
    lVar1 = 0;
    lVar2 = 0;
    fVar4 = 0.0;
    do {
      FUN_144b013c4(*(undefined8 *)(*(longlong *)(param_1 + 0x288) + lVar1),local_48);
      fVar3 = local_44;
      if (local_44 <= fVar4) {
        fVar3 = fVar4;
      }
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x10;
      fVar4 = fVar3;
    } while (lVar2 < *(int *)(param_1 + 0x290));
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(fVar3);
  }
  return;
}



// FUNCTION 146a05190 FUN_146a05190 body=166 status=ok
// SIG undefined FUN_146a05190(void)

ulonglong FUN_146a05190(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 unaff_RSI;
  undefined7 uVar7;
  ulonglong uVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x2f8);
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar3 + 0xb8);
    plVar5 = *(longlong **)(lVar3 + 0xc0);
    uVar7 = (undefined7)((ulonglong)unaff_RSI >> 8);
    if (plVar5 == (longlong *)0x0) {
      uVar6 = CONCAT71(uVar7,*param_2 == lVar4 && *param_2 != 0);
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      uVar6 = CONCAT71(uVar7,*param_2 == lVar4 && *param_2 != 0);
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
  }
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 146a05236 FUN_146a05236 body=7423 status=ok
// SIG undefined FUN_146a05236(void)

void FUN_146a05236(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 param_5,undefined1 param_6,longlong *param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong ***ppplVar3;
  uint uVar4;
  longlong **pplVar5;
  int iVar6;
  char extraout_AL;
  byte extraout_AL_00;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined7 uVar15;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  ulonglong uVar10;
  longlong ***ppplVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong *plVar16;
  undefined ***pppuVar17;
  undefined1 *puVar18;
  longlong ****pppplVar19;
  longlong ***ppplVar20;
  longlong lVar21;
  undefined **ppuVar22;
  longlong ***ppplVar23;
  longlong ***ppplVar24;
  bool bVar25;
  undefined1 auStack_e28 [32];
  longlong ***local_e08;
  longlong ***local_e00;
  byte local_df5;
  undefined4 local_df4;
  longlong ***local_df0;
  longlong ***local_de8;
  undefined ***local_de0;
  longlong ***local_dd8;
  undefined4 local_dcc;
  longlong ***local_dc8;
  longlong **local_dc0;
  undefined1 local_db8 [16];
  undefined1 local_da8;
  undefined8 local_da0;
  undefined8 uStack_d98;
  undefined8 local_d90;
  undefined4 local_d88;
  undefined4 uStack_d84;
  undefined4 uStack_d80;
  undefined4 uStack_d7c;
  uint local_d78;
  undefined1 local_d74;
  undefined8 local_d70;
  undefined8 uStack_d68;
  undefined2 local_d58;
  undefined8 local_d50;
  undefined8 uStack_d48;
  undefined4 local_d40;
  undefined1 local_d3c;
  undefined8 local_d38;
  undefined8 uStack_d30;
  undefined4 local_d28;
  undefined1 local_d24;
  undefined8 local_d20;
  undefined8 uStack_d18;
  undefined4 local_d10;
  undefined1 local_d0c;
  undefined8 local_d08;
  undefined8 uStack_d00;
  undefined4 local_cf8;
  undefined1 local_cf4;
  undefined8 local_cf0;
  undefined8 uStack_ce8;
  undefined4 local_ce0;
  undefined1 local_cdc;
  undefined8 local_cd8;
  undefined8 uStack_cd0;
  undefined1 local_cc8 [16];
  undefined1 local_cb8;
  undefined8 local_cb0;
  undefined8 uStack_ca8;
  undefined8 local_ca0;
  undefined4 local_c98;
  undefined4 uStack_c94;
  undefined4 uStack_c90;
  undefined4 uStack_c8c;
  uint local_c88;
  undefined1 local_c84;
  undefined8 local_c80;
  undefined8 uStack_c78;
  undefined2 local_c70;
  undefined8 local_c68;
  undefined8 uStack_c60;
  undefined1 local_c58;
  undefined1 local_c57;
  undefined8 local_c50;
  undefined8 uStack_c48;
  undefined1 local_c39;
  longlong ***local_c38;
  longlong ***local_c30;
  undefined1 local_c19;
  longlong ***local_c18;
  longlong ***local_c10;
  longlong ***local_c00;
  longlong ***local_bf8;
  longlong ***local_be8;
  longlong ***local_be0;
  undefined1 local_bd8 [16];
  undefined1 local_bc8;
  undefined8 local_bc0;
  undefined8 uStack_bb8;
  longlong *local_bb0;
  longlong *local_ba8;
  undefined1 *local_ba0;
  undefined1 *puStack_b98;
  undefined1 local_b90;
  undefined8 local_b88;
  undefined8 uStack_b80;
  longlong ***local_b78;
  longlong ***local_b70;
  longlong ***local_b68;
  longlong ***local_b60;
  longlong ***local_b58;
  longlong ***local_b50;
  undefined8 local_b48;
  longlong *plStack_b40;
  longlong ***local_b38;
  longlong ***ppplStack_b30;
  longlong ***local_b28;
  longlong ***local_b20;
  undefined8 local_b18;
  longlong *plStack_b10;
  longlong **local_b08;
  undefined8 uStack_b00;
  undefined1 local_af8 [8];
  longlong *local_af0;
  longlong ***local_a38;
  longlong ***ppplStack_a30;
  undefined1 local_a28;
  undefined8 local_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined1 local_a08;
  undefined1 local_a00 [16];
  undefined4 local_9f0;
  undefined1 local_9ec;
  undefined4 local_9e8;
  undefined1 local_9e4;
  undefined2 local_9c8;
  undefined1 local_9c0 [32];
  undefined4 local_9a0;
  undefined1 local_99c;
  undefined1 local_998 [16];
  undefined4 local_988;
  undefined1 local_984;
  undefined1 local_980 [440];
  undefined4 local_7c8;
  undefined4 uStack_7c4;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  uint local_7b8;
  undefined1 local_7b4;
  undefined1 local_7b0 [488];
  code *local_5c8;
  longlong *local_5c0;
  undefined ***local_5b8;
  undefined **local_5a8;
  longlong local_5a0;
  longlong ***local_598;
  longlong ***local_590;
  longlong *local_588;
  longlong *plStack_580;
  undefined1 local_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined1 local_3c8;
  undefined1 local_3c0 [16];
  longlong *local_3b0;
  longlong *local_3a8;
  undefined1 local_2d8 [192];
  undefined8 local_218;
  undefined4 local_210;
  char local_20c;
  int local_208;
  byte local_204;
  undefined4 local_200;
  char local_1fc;
  undefined4 local_1f8;
  char local_1f4;
  undefined4 local_1d8;
  undefined1 local_1d4;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e28;
  uVar10 = local_60;
  if ((char)param_2[0x11] == '\x05') {
    cVar7 = *(char *)(*(longlong *)(param_1 + 0x278) + 0x68);
    uVar10 = 0;
    if ((cVar7 == '\x04') || (cVar7 == '\a')) goto LAB_146a0529e;
  }
  uVar15 = (undefined7)(uVar10 >> 8);
  if ((DAT_14c98eaf8 != (longlong *)0x0 && DAT_14c98eb00 != 0) &&
     ((**(code **)(*DAT_14c98eaf8 + 0x30))(), uVar15 = extraout_var, extraout_AL != '\0')) {
    plVar16 = DAT_14c98eaf8;
    if (DAT_14c98eb00 == 0) {
      plVar16 = (longlong *)0x0;
    }
    (**(code **)(*plVar16 + 0x58))();
    uVar15 = extraout_var_00;
    DAT_14c98eaf0 = extraout_AL_00;
  }
  local_df5 = param_2[0x10] != 0 & DAT_14c98eaf0;
  lVar21 = *param_7;
  if (lVar21 == 0) {
    local_b38 = (longlong ***)0x0;
    ppplStack_b30 = (longlong ***)0x0;
    local_dcc = (undefined4)CONCAT71(uVar15,1);
    ppplVar20 = (longlong ***)0x0;
  }
  else {
    local_b08 = (longlong **)0x0;
    uStack_b00 = 0;
    plVar16 = *(longlong **)(param_1 + 0x10);
    if (plVar16 == (longlong *)0x0) {
LAB_146a057c1:
      local_b18 = 0;
      plStack_b10 = (longlong *)0x0;
    }
    else {
      iVar9 = (int)plVar16[1];
      do {
        if (iVar9 == 0) goto LAB_146a057c1;
        LOCK();
        iVar6 = (int)plVar16[1];
        bVar25 = iVar9 == iVar6;
        if (bVar25) {
          *(int *)(plVar16 + 1) = iVar9 + 1;
          iVar6 = iVar9;
        }
        iVar9 = iVar6;
        UNLOCK();
      } while (!bVar25);
      local_b18 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar16 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plStack_b10 = plVar16;
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar2 = (int *)((longlong)plVar16 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
    local_e00 = &local_b08;
    local_e08 = (longlong ***)CONCAT71(local_e08._1_7_,param_6);
    FUN_146a00fb6(lVar21,&local_588,&local_b18,0xffffffff);
    uVar13 = (**(code **)(*local_588 + 8))(local_588,&local_a38);
    ppplVar20 = ppplStack_a30;
    ppplVar24 = local_a38;
    ppplVar11 = ppplStack_a30;
    if (ppplStack_a30 != (longlong ***)0x0) {
      LOCK();
      *(int *)(ppplStack_a30 + 1) = *(int *)(ppplStack_a30 + 1) + 1;
      UNLOCK();
      if (ppplStack_a30 != (longlong ***)0x0) {
        LOCK();
        ppplVar23 = ppplStack_a30 + 1;
        *(int *)ppplVar23 = *(int *)ppplVar23 + -1;
        UNLOCK();
        if (*(int *)ppplVar23 == 0) {
          uVar13 = (*(code *)**ppplStack_a30)(ppplStack_a30);
          LOCK();
          piVar2 = (int *)((longlong)ppplVar20 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            uVar13 = (*(code *)(*ppplVar20)[2])(ppplVar20);
          }
        }
      }
    }
    plVar16 = plStack_580;
    if (plStack_580 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_580 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        uVar13 = (**(code **)*plStack_580)(plStack_580);
        LOCK();
        piVar2 = (int *)((longlong)plVar16 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          uVar13 = (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
    local_b38 = ppplVar24;
    ppplStack_b30 = ppplVar20;
    if (ppplVar20 == (longlong ***)0x0) {
      ppplVar20 = (longlong ***)0x0;
      local_dcc = (undefined4)CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
      local_b38 = ppplVar24;
      ppplStack_b30 = ppplVar11;
    }
    else {
      LOCK();
      *(int *)(ppplVar20 + 1) = *(int *)(ppplVar20 + 1) + 1;
      UNLOCK();
      local_dcc = 0;
    }
  }
  plVar16 = *(longlong **)(param_1 + 0x10);
  local_dc8 = ppplVar20;
  if (plVar16 == (longlong *)0x0) {
LAB_146a053e1:
    local_b48 = 0;
    plStack_b40 = (longlong *)0x0;
  }
  else {
    iVar9 = (int)plVar16[1];
    do {
      if (iVar9 == 0) goto LAB_146a053e1;
      LOCK();
      iVar6 = (int)plVar16[1];
      bVar25 = iVar9 == iVar6;
      if (bVar25) {
        *(int *)(plVar16 + 1) = iVar9 + 1;
        iVar6 = iVar9;
      }
      iVar9 = iVar6;
      UNLOCK();
    } while (!bVar25);
    local_b48 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar16 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    plStack_b40 = plVar16;
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  local_e00 = (longlong ***)&local_b38;
  local_e08 = (longlong ***)CONCAT71(local_e08._1_7_,param_6);
  FUN_146a00fb6(param_2,&local_a38,&local_b48,param_5);
  uVar10 = (*(code *)(*local_a38)[1])(local_a38,&local_b28);
  if (ppplStack_a30 != (longlong ***)0x0) {
    LOCK();
    ppplVar24 = ppplStack_a30 + 1;
    *(int *)ppplVar24 = *(int *)ppplVar24 + -1;
    UNLOCK();
    if (*(int *)ppplVar24 == 0) {
      uVar10 = (*(code *)**ppplStack_a30)(ppplStack_a30);
      LOCK();
      piVar2 = (int *)((longlong)ppplStack_a30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        uVar10 = (*(code *)(*ppplStack_a30)[2])(ppplStack_a30);
      }
    }
  }
  ppplVar24 = local_b28;
  pplVar5 = *(longlong ***)((longlong)param_2 + 0x8c);
  if (pplVar5 != (longlong **)0x0) {
    ppplVar11 = (longlong ***)FUN_14001cc68(0x20,0x10);
    ppplVar11[1] = (longlong **)&DAT_100000001;
    *ppplVar11 = (longlong **)&PTR_FUN_149f0a1c0;
    local_a38 = ppplVar11 + 2;
    ppplVar11[2] = (longlong **)&PTR_FUN_149f09568;
    ppplVar11[3] = pplVar5;
    ppplStack_a30 = ppplVar11;
    uVar10 = FUN_146a06f36(ppplVar24);
    if (ppplVar11 != (longlong ***)0x0) {
      LOCK();
      ppplVar24 = ppplVar11 + 1;
      *(int *)ppplVar24 = *(int *)ppplVar24 + -1;
      UNLOCK();
      if (*(int *)ppplVar24 == 0) {
        uVar10 = (*(code *)**ppplVar11)(ppplVar11);
        LOCK();
        piVar2 = (int *)((longlong)ppplVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          uVar10 = (*(code *)(*ppplVar11)[2])(ppplVar11);
        }
      }
    }
  }
  ppplVar24 = (longlong ***)param_2[2];
  if (ppplVar24 == (longlong ***)0x0) {
LAB_146a054f2:
    local_a38 = (longlong ***)0x0;
    ppplStack_a30 = (longlong ***)0x0;
    local_df4 = (undefined4)CONCAT71((int7)(uVar10 >> 8),1);
    ppplVar11 = (longlong ***)0x0;
    local_df0 = (longlong ***)0x0;
    ppplVar24 = (longlong ***)0x0;
  }
  else {
    uVar10 = (ulonglong)*(uint *)(ppplVar24 + 1);
    do {
      uVar8 = (uint)uVar10;
      if (uVar8 == 0) goto LAB_146a054f2;
      LOCK();
      uVar4 = *(uint *)(ppplVar24 + 1);
      if (uVar8 == uVar4) {
        *(uint *)(ppplVar24 + 1) = uVar8 + 1;
      }
      else {
        uVar10 = (ulonglong)uVar4;
      }
      UNLOCK();
    } while (uVar8 != uVar4);
    ppplVar11 = (longlong ***)param_2[1];
    LOCK();
    *(int *)(ppplVar24 + 1) = *(int *)(ppplVar24 + 1) + 1;
    UNLOCK();
    LOCK();
    *(int *)(ppplVar24 + 1) = *(int *)(ppplVar24 + 1) + 1;
    UNLOCK();
    local_df0 = ppplVar11;
    local_a38 = ppplVar11;
    ppplStack_a30 = ppplVar24;
    if (ppplVar24 != (longlong ***)0x0) {
      LOCK();
      *(int *)(ppplVar24 + 1) = *(int *)(ppplVar24 + 1) + 1;
      UNLOCK();
      LOCK();
      ppplVar20 = ppplVar24 + 1;
      *(int *)ppplVar20 = *(int *)ppplVar20 + -1;
      UNLOCK();
      if (*(int *)ppplVar20 == 0) {
        (*(code *)**ppplVar24)(ppplVar24);
        LOCK();
        piVar2 = (int *)((longlong)ppplVar24 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppplVar24)[2])(ppplVar24);
        }
      }
    }
    local_df4 = 0;
  }
  uVar8 = ((uint)((ulonglong)ppplVar11 >> 0x14) & 0xffff ^ (uint)((ulonglong)ppplVar11 >> 4)) *
          -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  iVar9 = FUN_146a2dac4((longlong *)(param_1 + 0x360),uVar8 >> 0x10 ^ uVar8,&local_a38);
  ppplVar11 = ppplStack_a30;
  if (iVar9 == -1) {
    lVar21 = 0;
  }
  else {
    lVar21 = (longlong)iVar9 * 0x28 + *(longlong *)(param_1 + 0x360);
  }
  if (ppplStack_a30 != (longlong ***)0x0) {
    LOCK();
    ppplVar20 = ppplStack_a30 + 1;
    *(int *)ppplVar20 = *(int *)ppplVar20 + -1;
    UNLOCK();
    if (*(int *)ppplVar20 == 0) {
      (*(code *)**ppplStack_a30)(ppplStack_a30);
      LOCK();
      piVar2 = (int *)((longlong)ppplVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*ppplVar11)[2])(ppplVar11);
      }
    }
  }
  if ((char)local_df4 == '\0') {
    LOCK();
    ppplVar11 = ppplVar24 + 1;
    *(int *)ppplVar11 = *(int *)ppplVar11 + -1;
    UNLOCK();
    if (*(int *)ppplVar11 == 0) {
      (*(code *)**ppplVar24)(ppplVar24);
      LOCK();
      piVar2 = (int *)((longlong)ppplVar24 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*ppplVar24)[2])(ppplVar24);
      }
    }
  }
  if (lVar21 != 0) {
    ppplVar11 = (longlong ***)(lVar21 + 0x10);
    FUN_1407679b0(&local_218);
    FUN_145aafb3e(local_2d8);
    local_de8 = (longlong ***)FUN_145aaf900(local_2d8);
    FUN_140a53a96(&local_588);
    local_ba0 = &DAT_40a00000;
    puStack_b98 = &DAT_40a00000;
    local_b90 = 1;
    local_b88 = 0;
    uStack_b80 = 0;
    local_3c8 = 1;
    local_3d8 = 0x40a00000;
    uStack_3d4 = 0;
    uStack_3d0 = 0x40a00000;
    uStack_3cc = 0;
    FUN_144a450dc(local_3c0,&local_b88);
    FUN_1449db362(&local_b88);
    if ((char)local_df4 == '\0') {
      LOCK();
      *(int *)(ppplVar24 + 1) = *(int *)(ppplVar24 + 1) + 1;
      UNLOCK();
      LOCK();
      *(int *)(ppplVar24 + 1) = *(int *)(ppplVar24 + 1) + 1;
      UNLOCK();
    }
    local_de0 = &local_5a8;
    local_598 = local_df0;
    local_5a8 = &PTR_LAB_149f0a1e0;
    local_5b8 = (undefined ***)0x0;
    local_5c8 = FUN_1428fda46;
    local_5a0 = param_1;
    local_590 = ppplVar24;
    FUN_146a06fb4(&local_588);
    FUN_140a570d8(&local_a38);
    FUN_1428fcbe4(&local_be8,*ppplVar11);
    FUN_14023423e(local_bd8,&local_be8);
    local_bc8 = 1;
    local_bc0 = 0;
    uStack_bb8 = 0;
    uVar13 = FUN_140a54906(&local_a38,local_bd8);
    local_e08 = &local_dc0;
    FUN_140a54526(&local_c00,"STextBlock",".\\Runtime/Slate/Private/Framework/MultiBox/MultiBox.cpp"
                  ,0x2eb);
    FUN_140a52852(&local_c00,&local_bb0,uVar13);
    plVar16 = local_3a8;
    if (local_ba8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_ba8 + 1) = (int)local_ba8[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_ba8 + 1) = (int)local_ba8[1] + 1;
      UNLOCK();
    }
    local_3b0 = local_bb0;
    local_dd8 = (longlong ***)local_ba8;
    local_3a8 = local_ba8;
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar16 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar2 = (int *)((longlong)plVar16 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
    local_e08 = (longlong ***)&local_c19;
    FUN_140a53d66(&local_c18,&DAT_149efe19f,
                  ".\\Runtime/Slate/Private/Framework/MultiBox/MultiBox.cpp",0x2e7);
    FUN_140a50bf4(&local_c18,&local_b78,&local_588);
    local_b68 = local_b78;
    local_b60 = local_b70;
    if (local_b70 != (longlong ***)0x0) {
      LOCK();
      *(int *)(local_b70 + 1) = *(int *)(local_b70 + 1) + 1;
      UNLOCK();
    }
    uVar13 = FUN_145aaf878(local_de8,&local_b68);
    uVar13 = FUN_145aaf822(&local_218,uVar13);
    FUN_145aafb3e(local_af8);
    uVar14 = FUN_145aaf900(local_af8);
    uVar14 = FUN_140767a3e(uVar14,&local_b28);
    uVar13 = FUN_145aaf822(uVar13,uVar14);
    local_e08 = (longlong ***)&local_c39;
    FUN_14076837c(&local_c38,"SVerticalBox",
                  ".\\Runtime/Slate/Private/Framework/MultiBox/MultiBox.cpp",0x2e3);
    FUN_14076784c(&local_c38,&local_b58,uVar13);
    ppplVar20 = local_b50;
    local_df0 = local_b58;
    local_de8 = local_b50;
    if (local_b50 != (longlong ***)0x0) {
      LOCK();
      *(int *)(local_b50 + 1) = *(int *)(local_b50 + 1) + 1;
      UNLOCK();
      if (local_b50 != (longlong ***)0x0) {
        LOCK();
        ppplVar23 = local_b50 + 1;
        *(int *)ppplVar23 = *(int *)ppplVar23 + -1;
        UNLOCK();
        if (*(int *)ppplVar23 == 0) {
          (*(code *)**local_b50)(local_b50);
          LOCK();
          piVar2 = (int *)((longlong)ppplVar20 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*ppplVar20)[2])(ppplVar20);
          }
        }
      }
    }
    ppplVar23 = local_c30;
    ppplVar20 = local_dd8;
    if (local_c30 != (longlong ***)0x0) {
      LOCK();
      ppplVar3 = local_c30 + 1;
      *(int *)ppplVar3 = *(int *)ppplVar3 + -1;
      UNLOCK();
      if (*(int *)ppplVar3 == 0) {
        (*(code *)**local_c30)(local_c30);
        LOCK();
        piVar2 = (int *)((longlong)ppplVar23 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppplVar23)[2])(ppplVar23);
        }
      }
    }
    FUN_140767f30(local_af8);
    ppplVar23 = local_b60;
    if (local_b60 != (longlong ***)0x0) {
      LOCK();
      ppplVar3 = local_b60 + 1;
      *(int *)ppplVar3 = *(int *)ppplVar3 + -1;
      UNLOCK();
      if (*(int *)ppplVar3 == 0) {
        (*(code *)**local_b60)(local_b60);
        LOCK();
        piVar2 = (int *)((longlong)ppplVar23 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppplVar23)[2])(ppplVar23);
        }
      }
    }
    ppplVar23 = local_b70;
    if (local_b70 != (longlong ***)0x0) {
      LOCK();
      ppplVar3 = local_b70 + 1;
      *(int *)ppplVar3 = *(int *)ppplVar3 + -1;
      UNLOCK();
      if (*(int *)ppplVar3 == 0) {
        (*(code *)**local_b70)(local_b70);
        LOCK();
        piVar2 = (int *)((longlong)ppplVar23 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppplVar23)[2])(ppplVar23);
        }
      }
    }
    if (local_c10 != (longlong ***)0x0) {
      LOCK();
      ppplVar23 = local_c10 + 1;
      *(int *)ppplVar23 = *(int *)ppplVar23 + -1;
      UNLOCK();
      if (*(int *)ppplVar23 == 0) {
        (*(code *)**local_c10)(local_c10);
        LOCK();
        piVar2 = (int *)((longlong)local_c10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*local_c10)[2])(local_c10);
        }
      }
    }
    if (ppplVar20 != (longlong ***)0x0) {
      LOCK();
      plVar16 = (longlong *)(ppplVar20 + 1);
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (*(code *)**ppplVar20)(ppplVar20);
        LOCK();
        piVar2 = (int *)((longlong)ppplVar20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)((longlong)*ppplVar20 + 0x10))(ppplVar20);
        }
      }
    }
    ppplVar20 = local_de8;
    if (local_ba8 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_ba8 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*local_ba8)(local_ba8);
        LOCK();
        piVar2 = (int *)((longlong)local_ba8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_ba8 + 0x10))(local_ba8);
        }
      }
    }
    ppplVar23 = local_bf8;
    if (local_bf8 != (longlong ***)0x0) {
      LOCK();
      ppplVar3 = local_bf8 + 1;
      *(int *)ppplVar3 = *(int *)ppplVar3 + -1;
      UNLOCK();
      if (*(int *)ppplVar3 == 0) {
        (*(code *)**local_bf8)(local_bf8);
        LOCK();
        piVar2 = (int *)((longlong)ppplVar23 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppplVar23)[2])(ppplVar23);
        }
      }
    }
    if (local_be8 != (longlong ***)0x0) {
      (*(code *)(*local_be8)[2])();
    }
    FUN_140a59ae6(&local_a38);
    if (local_5c8 != (code *)0x0) {
      pppuVar17 = local_de0;
      if (local_5b8 != (undefined ***)0x0) {
        pppuVar17 = local_5b8;
      }
      (*(code *)(*pppuVar17)[2])();
    }
    if ((char)local_df4 == '\0') {
      LOCK();
      ppplVar23 = ppplVar24 + 1;
      *(int *)ppplVar23 = *(int *)ppplVar23 + -1;
      UNLOCK();
      if (*(int *)ppplVar23 == 0) {
        (*(code *)**ppplVar24)(ppplVar24);
        LOCK();
        piVar2 = (int *)((longlong)ppplVar24 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppplVar24)[2])(ppplVar24);
        }
      }
    }
    FUN_140a5660c(&local_588);
    FUN_140767f30(local_2d8);
    FUN_14149255e(&local_218);
    if (ppplVar20 == (longlong ***)0x0) {
      pplVar5 = *ppplVar11;
      pplVar5[2] = (longlong *)local_df0;
      ppplVar23 = (longlong ***)pplVar5[3];
      if (ppplVar23 != (longlong ***)0x0) {
        pplVar5[3] = (longlong *)0x0;
LAB_146a06e1e:
        LOCK();
        ppplVar20 = ppplVar23 + 1;
        *(int *)ppplVar20 = *(int *)ppplVar20 + -1;
        UNLOCK();
        if (*(int *)ppplVar20 == 0) {
          (*(code *)**ppplVar23)(ppplVar23);
          LOCK();
          piVar2 = (int *)((longlong)ppplVar23 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar9 = *piVar2;
          UNLOCK();
joined_r0x000146a068ad:
          if (iVar9 == 0) {
            (*(code *)(*ppplVar23)[2])(ppplVar23);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(ppplVar20 + 1) = *(int *)(ppplVar20 + 1) + 1;
      UNLOCK();
      pplVar5 = *ppplVar11;
      pplVar5[2] = (longlong *)local_df0;
      ppplVar23 = (longlong ***)pplVar5[3];
      if (ppplVar20 == ppplVar23) {
        LOCK();
        ppplVar23 = ppplVar20 + 1;
        *(int *)ppplVar23 = *(int *)ppplVar23 + -1;
        UNLOCK();
        if (*(int *)ppplVar23 == 0) {
          (*(code *)**ppplVar20)(ppplVar20);
          LOCK();
          piVar2 = (int *)((longlong)ppplVar20 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar9 = *piVar2;
          UNLOCK();
          ppplVar23 = ppplVar20;
          goto joined_r0x000146a068ad;
        }
      }
      else {
        pplVar5[3] = (longlong *)ppplVar20;
        if (ppplVar23 != (longlong ***)0x0) goto LAB_146a06e1e;
      }
    }
    local_a38 = (longlong ***)&local_b28;
    ppplStack_a30 = ppplVar11;
    FUN_146a2dba8(param_1 + 0x3b8,&local_588);
    local_c58 = DAT_14c96b1e1;
    local_c57 = 1;
    local_c50 = 0;
    uStack_c48 = 0;
    (*(code *)(*local_df0)[0x38])();
    ppplVar20 = local_b20;
    pppuVar17 = (undefined ***)(param_1 + 0x310);
    local_a38 = local_b28;
    ppplStack_a30 = local_b20;
    local_dd8 = local_b20;
    if (local_b20 == (longlong ***)0x0) {
      ppplStack_a30 = (longlong ***)0x0;
    }
    else {
      LOCK();
      *(int *)(local_b20 + 1) = *(int *)(local_b20 + 1) + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_b20 + 1) = *(int *)(local_b20 + 1) + 1;
      UNLOCK();
      if (local_b20 != (longlong ***)0x0) {
        LOCK();
        *(int *)(local_b20 + 1) = *(int *)(local_b20 + 1) + 1;
        UNLOCK();
        LOCK();
        ppplVar23 = local_b20 + 1;
        *(int *)ppplVar23 = *(int *)ppplVar23 + -1;
        UNLOCK();
        if (*(int *)ppplVar23 == 0) {
          local_de0 = pppuVar17;
          (*(code *)**local_b20)(local_b20);
          LOCK();
          piVar2 = (int *)((longlong)ppplVar20 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          pppuVar17 = local_de0;
          if (*piVar2 == 0) {
            (*(code *)(*ppplVar20)[2])(ppplVar20);
            pppuVar17 = local_de0;
          }
        }
      }
    }
    uVar8 = ((uint)((ulonglong)local_b28 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_b28 >> 4)) *
            -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    iVar9 = FUN_146a2e284(pppuVar17,uVar8 >> 0x10 ^ uVar8,&local_a38);
    ppplVar20 = ppplStack_a30;
    if (iVar9 == -1) {
      ppuVar22 = (undefined **)0x0;
    }
    else {
      ppuVar22 = *pppuVar17 + (longlong)iVar9 * 5;
    }
    if (ppplStack_a30 != (longlong ***)0x0) {
      LOCK();
      ppplVar23 = ppplStack_a30 + 1;
      *(int *)ppplVar23 = *(int *)ppplVar23 + -1;
      UNLOCK();
      if (*(int *)ppplVar23 == 0) {
        (*(code *)**ppplStack_a30)(ppplStack_a30);
        LOCK();
        piVar2 = (int *)((longlong)ppplVar20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppplVar20)[2])(ppplVar20);
        }
      }
    }
    ppplVar20 = local_dd8;
    if (local_dd8 != (longlong ***)0x0) {
      LOCK();
      ppplVar23 = local_dd8 + 1;
      *(int *)ppplVar23 = *(int *)ppplVar23 + -1;
      UNLOCK();
      if (*(int *)ppplVar23 == 0) {
        (*(code *)**local_dd8)(local_dd8);
        LOCK();
        piVar2 = (int *)((longlong)ppplVar20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppplVar20)[2])(ppplVar20);
        }
      }
    }
    if (ppuVar22 != (undefined **)0x0) {
      FUN_1407b2780(ppuVar22 + 2,*ppplVar11);
    }
    ppplVar20 = local_b20;
    ppplVar11 = local_de8;
    if (local_de8 != (longlong ***)0x0) {
      LOCK();
      *(int *)(local_de8 + 1) = *(int *)(local_de8 + 1) + 1;
      UNLOCK();
    }
    local_b28 = local_df0;
    local_b20 = local_de8;
    if (ppplVar20 != (longlong ***)0x0) {
      LOCK();
      ppplVar23 = ppplVar20 + 1;
      *(int *)ppplVar23 = *(int *)ppplVar23 + -1;
      UNLOCK();
      if (*(int *)ppplVar23 == 0) {
        (*(code *)**ppplVar20)(ppplVar20);
        LOCK();
        piVar2 = (int *)((longlong)ppplVar20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppplVar20)[2])(ppplVar20);
        }
      }
    }
    if (ppplVar11 != (longlong ***)0x0) {
      LOCK();
      ppplVar20 = ppplVar11 + 1;
      *(int *)ppplVar20 = *(int *)ppplVar20 + -1;
      UNLOCK();
      if (*(int *)ppplVar20 == 0) {
        (*(code *)**ppplVar11)(ppplVar11);
        LOCK();
        piVar2 = (int *)((longlong)ppplVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppplVar11)[2])(ppplVar11);
        }
      }
    }
  }
  lVar21 = *(longlong *)(param_1 + 0x278);
  local_df0 = *(longlong ****)(lVar21 + 0x58);
  if (((*(int *)(lVar21 + 0x20) == 0) || (*(longlong **)(lVar21 + 0x18) == (longlong *)0x0)) ||
     (cVar7 = (**(code **)(**(longlong **)(lVar21 + 0x18) + 0x30))(), cVar7 == '\0')) {
    ppplVar11 = local_b28;
    if (local_b20 == (longlong ***)0x0) {
      ppplVar20 = (longlong ***)0x0;
    }
    else {
      LOCK();
      *(int *)(local_b20 + 1) = *(int *)(local_b20 + 1) + 1;
      UNLOCK();
      ppplVar20 = local_b20;
    }
  }
  else {
    lVar21 = *(longlong *)(param_1 + 0x278);
    plVar16 = *(longlong **)(param_1 + 0x10);
    if (plVar16 == (longlong *)0x0) {
LAB_146a059f5:
      local_588 = (longlong *)0x0;
      plStack_580 = (longlong *)0x0;
    }
    else {
      iVar9 = (int)plVar16[1];
      do {
        if (iVar9 == 0) goto LAB_146a059f5;
        LOCK();
        iVar6 = (int)plVar16[1];
        bVar25 = iVar9 == iVar6;
        if (bVar25) {
          *(int *)(plVar16 + 1) = iVar9 + 1;
          iVar6 = iVar9;
        }
        iVar9 = iVar6;
        UNLOCK();
      } while (!bVar25);
      local_588 = *(longlong **)(param_1 + 8);
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar16 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plStack_580 = plVar16;
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar16)();
        LOCK();
        piVar2 = (int *)((longlong)plVar16 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar16 + 0x10))();
        }
      }
    }
    if (*(int *)(lVar21 + 0x20) == 0) {
      plVar16 = (longlong *)0x0;
    }
    else {
      plVar16 = *(longlong **)(lVar21 + 0x18);
    }
    local_e08 = (longlong ***)&local_b28;
    (**(code **)(*plVar16 + 0x58))(plVar16,&local_a38,&local_588,param_2);
    ppplVar20 = ppplStack_a30;
    ppplVar11 = local_a38;
    if (ppplStack_a30 != (longlong ***)0x0) {
      LOCK();
      *(int *)(ppplStack_a30 + 1) = *(int *)(ppplStack_a30 + 1) + 1;
      UNLOCK();
      if (ppplStack_a30 != (longlong ***)0x0) {
        LOCK();
        ppplVar23 = ppplStack_a30 + 1;
        *(int *)ppplVar23 = *(int *)ppplVar23 + -1;
        UNLOCK();
        if (*(int *)ppplVar23 == 0) {
          (*(code *)**ppplStack_a30)(ppplStack_a30);
          LOCK();
          piVar2 = (int *)((longlong)ppplVar20 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*ppplVar20)[2])(ppplVar20);
          }
        }
      }
    }
    plVar16 = plStack_580;
    if (plStack_580 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_580 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_580)(plStack_580);
        LOCK();
        piVar2 = (int *)((longlong)plVar16 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
  }
  plVar16 = DAT_14c98ded0;
  local_c18 = DAT_14c98dec8;
  local_c10 = (longlong ***)DAT_14c98ded0;
  if (DAT_14c98ded0 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
    UNLOCK();
  }
  if (local_df5 == 0) {
    if (ppplVar20 != (longlong ***)0x0) {
      LOCK();
      *(int *)(ppplVar20 + 1) = *(int *)(ppplVar20 + 1) + 1;
      UNLOCK();
    }
    local_c18 = ppplVar11;
    local_c10 = ppplVar20;
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar16 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar2 = (int *)((longlong)plVar16 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
  }
  else {
    local_de8 = ppplVar11;
    FUN_1407679b0(&local_588);
    FUN_145aafb3e(&local_218);
    local_1d8 = 2;
    local_1d4 = 1;
    local_dd8 = (longlong ***)FUN_145aaf900(&local_218);
    FUN_140a570d8(&local_a38);
    local_c70 = CONCAT11(1,DAT_14c96b238);
    local_c68 = 0;
    uStack_c60 = 0;
    local_9c8 = local_c70;
    FUN_144a450dc(local_9c0,&local_c68);
    FUN_1449db362(&local_c68);
    FUN_1446ddc76(&local_ca0,"MultiboxHookColor",1);
    local_e08 = (longlong ***)0x0;
    puVar12 = (undefined4 *)
              (**(code **)((longlong)*local_df0 + 0x38))(local_df0,local_ca0,0,&DAT_14c75ed64);
    local_c98 = *puVar12;
    uStack_c94 = puVar12[1];
    uStack_c90 = puVar12[2];
    uStack_c8c = puVar12[3];
    local_c88 = local_c88 & 0xffffff00;
    local_c84 = 1;
    local_c80 = 0;
    uStack_c78 = 0;
    local_7b8 = local_c88;
    local_7b4 = 1;
    local_7c8 = local_c98;
    uStack_7c4 = uStack_c94;
    uStack_7c0 = uStack_c90;
    uStack_7bc = uStack_c8c;
    FUN_144a450dc(local_7b0,&local_c80);
    FUN_1449db362(&local_c80);
    local_bb0 = (longlong *)param_2[0x10];
    FUN_145715fae(&local_b68);
    FUN_14023423e(local_cc8,&local_b68);
    local_cb8 = 1;
    local_cb0 = 0;
    uStack_ca8 = 0;
    uVar13 = FUN_140a54906(&local_a38,local_cc8);
    local_e08 = (longlong ***)&local_be8;
    FUN_140a54526(local_af8,"STextBlock",".\\Runtime/Slate/Private/Framework/MultiBox/MultiBox.cpp",
                  800);
    FUN_140a52852(local_af8,&local_b58,uVar13);
    local_c38 = local_b58;
    local_c30 = local_b50;
    if (local_b50 != (longlong ***)0x0) {
      LOCK();
      *(int *)(local_b50 + 1) = *(int *)(local_b50 + 1) + 1;
      UNLOCK();
    }
    uVar13 = FUN_145aaf878(local_dd8,&local_c38);
    uVar13 = FUN_145aaf822(&local_588,uVar13);
    FUN_145aafb3e(local_2d8);
    local_b78 = local_de8;
    if (ppplVar20 != (longlong ***)0x0) {
      LOCK();
      *(int *)(ppplVar20 + 1) = *(int *)(ppplVar20 + 1) + 1;
      UNLOCK();
    }
    local_b70 = ppplVar20;
    uVar14 = FUN_145aaf878(local_2d8,&local_b78);
    uVar13 = FUN_145aaf822(uVar13,uVar14);
    local_e08 = &local_dc0;
    FUN_14076837c(&local_5c8,"SVerticalBox",
                  ".\\Runtime/Slate/Private/Framework/MultiBox/MultiBox.cpp",0x31b);
    FUN_14076784c(&local_5c8,&local_c00,uVar13);
    ppplVar11 = local_c10;
    if (local_bf8 != (longlong ***)0x0) {
      LOCK();
      *(int *)(local_bf8 + 1) = *(int *)(local_bf8 + 1) + 1;
      UNLOCK();
    }
    local_c18 = local_c00;
    local_c10 = local_bf8;
    if (ppplVar11 != (longlong ***)0x0) {
      LOCK();
      plVar16 = (longlong *)(ppplVar11 + 1);
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (*(code *)**ppplVar11)(ppplVar11);
        LOCK();
        piVar2 = (int *)((longlong)ppplVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)((longlong)*ppplVar11 + 0x10))(ppplVar11);
        }
      }
    }
    ppplVar11 = local_bf8;
    if (local_bf8 != (longlong ***)0x0) {
      LOCK();
      ppplVar23 = local_bf8 + 1;
      *(int *)ppplVar23 = *(int *)ppplVar23 + -1;
      UNLOCK();
      if (*(int *)ppplVar23 == 0) {
        (*(code *)**local_bf8)(local_bf8);
        LOCK();
        piVar2 = (int *)((longlong)ppplVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppplVar11)[2])(ppplVar11);
        }
      }
    }
    plVar16 = local_5c0;
    if (local_5c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_5c0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_5c0)(local_5c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar16 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
    ppplVar11 = local_b70;
    if (local_b70 != (longlong ***)0x0) {
      LOCK();
      ppplVar23 = local_b70 + 1;
      *(int *)ppplVar23 = *(int *)ppplVar23 + -1;
      UNLOCK();
      if (*(int *)ppplVar23 == 0) {
        (*(code *)**local_b70)(local_b70);
        LOCK();
        piVar2 = (int *)((longlong)ppplVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppplVar11)[2])(ppplVar11);
        }
      }
    }
    FUN_140767f30(local_2d8);
    ppplVar11 = local_c30;
    if (local_c30 != (longlong ***)0x0) {
      LOCK();
      ppplVar23 = local_c30 + 1;
      *(int *)ppplVar23 = *(int *)ppplVar23 + -1;
      UNLOCK();
      if (*(int *)ppplVar23 == 0) {
        (*(code *)**local_c30)(local_c30);
        LOCK();
        piVar2 = (int *)((longlong)ppplVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppplVar11)[2])(ppplVar11);
        }
      }
    }
    ppplVar11 = local_b50;
    if (local_b50 != (longlong ***)0x0) {
      LOCK();
      ppplVar23 = local_b50 + 1;
      *(int *)ppplVar23 = *(int *)ppplVar23 + -1;
      UNLOCK();
      if (*(int *)ppplVar23 == 0) {
        (*(code *)**local_b50)(local_b50);
        LOCK();
        piVar2 = (int *)((longlong)ppplVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppplVar11)[2])(ppplVar11);
        }
      }
    }
    if (local_af0 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_af0 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*local_af0)(local_af0);
        LOCK();
        piVar2 = (int *)((longlong)local_af0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_af0 + 0x10))(local_af0);
        }
      }
    }
    if (local_b68 != (longlong ***)0x0) {
      (*(code *)(*local_b68)[2])();
    }
    FUN_140a59ae6(&local_a38);
    FUN_140767f30(&local_218);
    FUN_14149255e(&local_588);
    ppplVar11 = local_de8;
  }
  switch(*(undefined1 *)(*(longlong *)(param_1 + 0x278) + 0x68)) {
  case 0:
  case 1:
  case 3:
    local_218._0_1_ = 0;
    local_218._4_4_ = 0;
    local_20c = '\0';
    local_204 = 0;
    local_1fc = '\0';
    local_1f4 = '\0';
    cVar7 = (**(code **)(*param_2 + 0x30))(param_2);
    FUN_146a24608(*param_3,&local_a38,0xffffffff);
    local_588 = (longlong *)0x0;
    plStack_580 = (longlong *)0x0;
    local_578 = 1;
    local_570 = 0;
    uStack_568 = 0;
    uStack_a18 = 0;
    uStack_a10 = 0;
    local_a08 = 1;
    FUN_144a450dc(local_a00,&local_570);
    FUN_1449db362(&local_570);
    FUN_146a07044(&ppplStack_a30);
    if (cVar7 == '\0') {
      FUN_140a52578(&ppplStack_a30);
    }
    else {
      if ((local_204 == 1) && (local_208 == 0)) {
        FUN_140a52578(&ppplStack_a30);
      }
      local_9f0 = local_218._4_4_;
      local_9ec = 1;
      local_9e8 = 0;
      if (local_20c != '\0') {
        local_9e8 = local_210;
      }
      local_9e4 = 1;
      if ((local_204 & 1) != 0) {
        if (local_208 == 2) {
          local_cf8 = 0;
          local_cf4 = 0;
          local_cf0 = 0;
          uStack_ce8 = 0;
          local_d10 = 0x3f800000;
          local_d0c = 1;
          local_d08 = 0;
          uStack_d00 = 0;
          FUN_146a070cc(&ppplStack_a30);
        }
        else if (local_208 == 1) {
          local_ce0 = 0x3f800000;
          local_cdc = 1;
          local_cd8 = 0;
          uStack_cd0 = 0;
          FUN_140a5475a(&ppplStack_a30);
        }
      }
      if (local_1fc == '\x01') {
        local_d28 = local_200;
        local_d24 = 1;
        local_d20 = 0;
        uStack_d18 = 0;
        local_99c = 1;
        local_9a0 = local_200;
        FUN_144a450dc(local_998,&local_d20);
        FUN_1449db362(&local_d20);
      }
      if (local_1f4 == '\x01') {
        local_d40 = local_1f8;
        local_d3c = 1;
        local_d38 = 0;
        uStack_d30 = 0;
        local_984 = 1;
        local_988 = local_1f8;
        FUN_144a450dc(local_980,&local_d38);
        FUN_1449db362(&local_d38);
      }
    }
    FUN_146a071ac(&local_a38);
    break;
  case 2:
    lVar21 = *(longlong *)(param_1 + 0x2d8);
    if (lVar21 != 0) goto LAB_146a060dd;
    pppplVar19 = &local_a38;
    FUN_140767c14(*param_4,pppplVar19,0xffffffff);
    uVar13 = FUN_145aaf900(&ppplStack_a30);
    FUN_140767a3e(uVar13,&local_c18);
    goto LAB_146a06e05;
  case 4:
  case 7:
    lVar21 = *(longlong *)(param_1 + 0x2d8);
LAB_146a060dd:
    FUN_146aa0d8e(lVar21,&local_a38);
    FUN_146a071f6(&local_a38,&local_c18);
    FUN_146a0727e(&local_a38);
    break;
  case 5:
    local_de8 = ppplVar11;
    FUN_140767c14(*param_4,&local_218,0xffffffff);
    local_dd8 = (longlong ***)FUN_145aaf900(&local_210);
    local_a38 = (longlong ***)0x0;
    ppplStack_a30 = (longlong ***)0x0;
    local_a28 = 1;
    local_a20 = 0;
    uStack_a18 = 0;
    *(undefined1 *)(local_dd8 + 5) = 1;
    local_dd8[3] = (longlong **)0x0;
    local_dd8[4] = (longlong **)0x0;
    FUN_144a450dc(local_dd8 + 6,&local_a20);
    FUN_1449db362(&local_a20);
    FUN_140a5296a(&local_588);
    FUN_140a50426(local_2d8);
    local_de0 = (undefined ***)FUN_140a52578(local_2d8);
    *(undefined4 *)(local_de0 + 9) = 2;
    *(undefined1 *)((longlong)local_de0 + 0x4c) = 1;
    FUN_140a570d8();
    puVar18 = &DAT_14c96b1e1;
    if (local_df5 != 0) {
      puVar18 = &DAT_14c96b238;
    }
    local_d58 = CONCAT11(1,*puVar18);
    local_d50 = 0;
    uStack_d48 = 0;
    local_9c8 = local_d58;
    FUN_144a450dc(local_9c0,&local_d50);
    FUN_1449db362(&local_d50);
    FUN_1446ddc76(&local_d90,"MultiboxHookColor",1);
    local_e08 = (longlong ***)0x0;
    puVar12 = (undefined4 *)
              (**(code **)((longlong)*local_df0 + 0x38))(local_df0,local_d90,0,&DAT_14c75ed64);
    local_d88 = *puVar12;
    uStack_d84 = puVar12[1];
    uStack_d80 = puVar12[2];
    uStack_d7c = puVar12[3];
    local_d78 = local_d78 & 0xffffff00;
    local_d74 = 1;
    local_d70 = 0;
    uStack_d68 = 0;
    local_7b8 = local_d78;
    local_7b4 = 1;
    local_7c8 = local_d88;
    uStack_7c4 = uStack_d84;
    uStack_7c0 = uStack_d80;
    uStack_7bc = uStack_d7c;
    FUN_144a450dc(local_7b0,&local_d70);
    FUN_1449db362(&local_d70);
    local_dc0 = (longlong **)param_2[0x10];
    FUN_145715fae(&local_bb0);
    FUN_14023423e(local_db8,&local_bb0);
    local_da8 = 1;
    local_da0 = 0;
    uStack_d98 = 0;
    uVar13 = FUN_140a54906(&local_a38,local_db8);
    local_e08 = (longlong ***)&local_c19;
    FUN_140a54526(&local_5c8,"STextBlock",".\\Runtime/Slate/Private/Framework/MultiBox/MultiBox.cpp"
                  ,0x396);
    FUN_140a52852(&local_5c8,&local_b78,uVar13);
    local_b68 = local_b78;
    local_b60 = local_b70;
    if (local_b70 != (longlong ***)0x0) {
      LOCK();
      *(int *)(local_b70 + 1) = *(int *)(local_b70 + 1) + 1;
      UNLOCK();
    }
    uVar13 = FUN_140a4fe8e(local_de0,&local_b68);
    uVar13 = FUN_140a52392(&local_588,uVar13);
    FUN_140a50426(local_af8);
    local_be8 = local_de8;
    if (ppplVar20 != (longlong ***)0x0) {
      LOCK();
      *(int *)(ppplVar20 + 1) = *(int *)(ppplVar20 + 1) + 1;
      UNLOCK();
    }
    local_be0 = ppplVar20;
    uVar14 = FUN_140a4fe8e(local_af8,&local_be8);
    uVar13 = FUN_140a52392(uVar13,uVar14);
    local_e08 = (longlong ***)&local_c39;
    FUN_140a541dc(&local_c00,"SHorizontalBox",
                  ".\\Runtime/Slate/Private/Framework/MultiBox/MultiBox.cpp",0x391);
    FUN_140a50ec6(&local_c00,&local_b58,uVar13);
    local_c38 = local_b58;
    local_c30 = local_b50;
    if (local_b50 != (longlong ***)0x0) {
      LOCK();
      *(int *)(local_b50 + 1) = *(int *)(local_b50 + 1) + 1;
      UNLOCK();
    }
    FUN_145aaf878(local_dd8,&local_c38);
    ppplVar11 = local_c30;
    if (local_c30 != (longlong ***)0x0) {
      LOCK();
      ppplVar23 = local_c30 + 1;
      *(int *)ppplVar23 = *(int *)ppplVar23 + -1;
      UNLOCK();
      if (*(int *)ppplVar23 == 0) {
        (*(code *)**local_c30)(local_c30);
        LOCK();
        piVar2 = (int *)((longlong)ppplVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppplVar11)[2])(ppplVar11);
        }
      }
    }
    if (local_b50 != (longlong ***)0x0) {
      LOCK();
      ppplVar11 = local_b50 + 1;
      *(int *)ppplVar11 = *(int *)ppplVar11 + -1;
      UNLOCK();
      if (*(int *)ppplVar11 == 0) {
        (*(code *)**local_b50)(local_b50);
        LOCK();
        piVar2 = (int *)((longlong)local_b50 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*local_b50)[2])(local_b50);
        }
      }
    }
    if (local_bf8 != (longlong ***)0x0) {
      LOCK();
      ppplVar11 = local_bf8 + 1;
      *(int *)ppplVar11 = *(int *)ppplVar11 + -1;
      UNLOCK();
      if (*(int *)ppplVar11 == 0) {
        (*(code *)**local_bf8)(local_bf8);
        LOCK();
        piVar2 = (int *)((longlong)local_bf8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*local_bf8)[2])(local_bf8);
        }
      }
    }
    ppplVar11 = local_be0;
    if (local_be0 != (longlong ***)0x0) {
      LOCK();
      ppplVar23 = local_be0 + 1;
      *(int *)ppplVar23 = *(int *)ppplVar23 + -1;
      UNLOCK();
      if (*(int *)ppplVar23 == 0) {
        (*(code *)**local_be0)(local_be0);
        LOCK();
        piVar2 = (int *)((longlong)ppplVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppplVar11)[2])(ppplVar11);
        }
      }
    }
    FUN_140a509a6(local_af8);
    ppplVar11 = local_b60;
    if (local_b60 != (longlong ***)0x0) {
      LOCK();
      ppplVar23 = local_b60 + 1;
      *(int *)ppplVar23 = *(int *)ppplVar23 + -1;
      UNLOCK();
      if (*(int *)ppplVar23 == 0) {
        (*(code *)**local_b60)(local_b60);
        LOCK();
        piVar2 = (int *)((longlong)ppplVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppplVar11)[2])(ppplVar11);
        }
      }
    }
    ppplVar11 = local_b70;
    if (local_b70 != (longlong ***)0x0) {
      LOCK();
      ppplVar23 = local_b70 + 1;
      *(int *)ppplVar23 = *(int *)ppplVar23 + -1;
      UNLOCK();
      if (*(int *)ppplVar23 == 0) {
        (*(code *)**local_b70)(local_b70);
        LOCK();
        piVar2 = (int *)((longlong)ppplVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppplVar11)[2])(ppplVar11);
        }
      }
    }
    if (local_5c0 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_5c0 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*local_5c0)(local_5c0);
        LOCK();
        piVar2 = (int *)((longlong)local_5c0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_5c0 + 0x10))(local_5c0);
        }
      }
    }
    if (local_bb0 != (longlong *)0x0) {
      (**(code **)(*local_bb0 + 0x10))();
    }
    FUN_140a59ae6(&local_a38);
    FUN_140a509a6(local_2d8);
    FUN_145ab33da(&local_588);
    pppplVar19 = (longlong ****)&local_218;
LAB_146a06e05:
    FUN_140767802(pppplVar19);
    break;
  case 6:
    if (ppplVar20 != (longlong ***)0x0) {
      LOCK();
      *(int *)(ppplVar20 + 1) = *(int *)(ppplVar20 + 1) + 1;
      UNLOCK();
      LOCK();
      *(int *)(ppplVar20 + 1) = *(int *)(ppplVar20 + 1) + 1;
      UNLOCK();
    }
    iVar9 = *(int *)(param_1 + 0x290);
    *(uint *)(param_1 + 0x290) = iVar9 + 1U;
    if (*(uint *)(param_1 + 0x294) < iVar9 + 1U) {
      FUN_14171e5a8((longlong *)(param_1 + 0x288),iVar9);
    }
    lVar21 = *(longlong *)(param_1 + 0x288);
    *(longlong ****)(lVar21 + (longlong)iVar9 * 0x10) = ppplVar11;
    *(longlong ****)(lVar21 + 8 + (longlong)iVar9 * 0x10) = ppplVar20;
    if (ppplVar20 != (longlong ***)0x0) {
      LOCK();
      ppplVar11 = ppplVar20 + 1;
      *(int *)ppplVar11 = *(int *)ppplVar11 + -1;
      UNLOCK();
      if (*(int *)ppplVar11 == 0) {
        (*(code *)**ppplVar20)(ppplVar20);
        LOCK();
        piVar2 = (int *)((longlong)ppplVar20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppplVar20)[2])(ppplVar20);
        }
      }
    }
  }
  ppplVar11 = local_c10;
  if (local_c10 != (longlong ***)0x0) {
    LOCK();
    ppplVar23 = local_c10 + 1;
    *(int *)ppplVar23 = *(int *)ppplVar23 + -1;
    UNLOCK();
    if (*(int *)ppplVar23 == 0) {
      (*(code *)**local_c10)(local_c10);
      LOCK();
      piVar2 = (int *)((longlong)ppplVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*ppplVar11)[2])(ppplVar11);
      }
    }
  }
  if (ppplVar20 != (longlong ***)0x0) {
    LOCK();
    ppplVar11 = ppplVar20 + 1;
    *(int *)ppplVar11 = *(int *)ppplVar11 + -1;
    UNLOCK();
    if (*(int *)ppplVar11 == 0) {
      (*(code *)**ppplVar20)(ppplVar20);
      LOCK();
      piVar2 = (int *)((longlong)ppplVar20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*ppplVar20)[2])(ppplVar20);
      }
    }
  }
  if ((char)local_df4 == '\0') {
    LOCK();
    ppplVar11 = ppplVar24 + 1;
    *(int *)ppplVar11 = *(int *)ppplVar11 + -1;
    UNLOCK();
    if (*(int *)ppplVar11 == 0) {
      (*(code *)**ppplVar24)(ppplVar24);
      LOCK();
      piVar2 = (int *)((longlong)ppplVar24 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*ppplVar24)[2])(ppplVar24);
      }
    }
  }
  ppplVar24 = local_b20;
  if (local_b20 != (longlong ***)0x0) {
    LOCK();
    ppplVar11 = local_b20 + 1;
    *(int *)ppplVar11 = *(int *)ppplVar11 + -1;
    UNLOCK();
    if (*(int *)ppplVar11 == 0) {
      (*(code *)**local_b20)(local_b20);
      LOCK();
      piVar2 = (int *)((longlong)ppplVar24 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*ppplVar24)[2])(ppplVar24);
      }
    }
  }
  ppplVar24 = local_dc8;
  if ((char)local_dcc == '\0') {
    LOCK();
    ppplVar11 = local_dc8 + 1;
    *(int *)ppplVar11 = *(int *)ppplVar11 + -1;
    UNLOCK();
    if (*(int *)ppplVar11 == 0) {
      (*(code *)**local_dc8)(local_dc8);
      LOCK();
      piVar2 = (int *)((longlong)ppplVar24 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*local_dc8)[2])();
      }
    }
  }
LAB_146a0529e:
  plVar16 = (longlong *)param_3[1];
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar16 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  plVar16 = (longlong *)param_4[1];
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar16 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  plVar16 = (longlong *)param_7[1];
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar16 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e28) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a06f36 FUN_146a06f36 body=125 status=ok
// SIG undefined FUN_146a06f36(void)

void FUN_146a06f36(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_18 = (longlong *)param_2[1];
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  FUN_14287bbd4(param_1,&local_20);
  plVar3 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a06fb4 FUN_146a06fb4 body=143 status=ok
// SIG undefined FUN_146a06fb4(void)

longlong FUN_146a06fb4(longlong param_1)

{
  undefined1 auStack_68 [32];
  undefined2 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1469ed78a(local_30);
  local_48 = 0x119;
  local_40 = 0;
  local_38 = 0;
  FUN_140fe25fc(&local_40,local_30);
  FUN_1449db362(local_30);
  *(undefined2 *)(param_1 + 0x70) = local_48;
  FUN_144a450dc(param_1 + 0x78,&local_40);
  FUN_1449db362(&local_40);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a07044 FUN_146a07044 body=136 status=ok
// SIG undefined FUN_146a07044(void)

longlong FUN_146a07044(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 != 0) {
        return param_1;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      goto joined_r0x000146a0709d;
    }
    *(longlong **)(param_1 + 0x10) = plVar4;
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
  }
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 != 0) {
    return param_1;
  }
  (**(code **)*plVar5)(plVar5);
  LOCK();
  piVar1 = (int *)((longlong)plVar5 + 0xc);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  UNLOCK();
  plVar4 = plVar5;
joined_r0x000146a0709d:
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 146a070cc FUN_146a070cc body=223 status=ok
// SIG undefined FUN_146a070cc(void)

longlong FUN_146a070cc(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 auStack_98 [40];
  undefined4 local_70 [2];
  undefined4 local_68;
  undefined1 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70[0] = 2;
  local_68 = *param_2;
  local_64 = *(undefined1 *)(param_2 + 1);
  local_60 = 0;
  local_58 = 0;
  FUN_140a52b3c(&local_60,param_2 + 2);
  local_4c = *(undefined1 *)(param_3 + 1);
  local_50 = *param_3;
  local_48 = 0;
  local_40 = 0;
  FUN_140a52b3c(&local_48,param_3 + 2);
  if (local_70 != (undefined4 *)(param_1 + 0x50)) {
    FUN_140a52676((undefined4 *)(param_1 + 0x50),local_70);
  }
  FUN_1449db362(&local_48);
  FUN_1449db362(&local_60);
  FUN_1449db362(param_2 + 2);
  FUN_1449db362(param_3 + 2);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a071ac FUN_146a071ac body=74 status=ok
// SIG undefined FUN_146a071ac(void)

void FUN_146a071ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f0eac0;
  if (param_1[1] != 0) {
    if (*(int *)(param_1 + 0x1a) == -1) {
      FUN_140a50fb6();
    }
    else {
      FUN_146983a00(param_1[0x19],param_1 + 1);
    }
  }
  FUN_140a509a6(param_1 + 1);
  return;
}



// FUNCTION 146a071f6 FUN_146a071f6 body=136 status=ok
// SIG undefined FUN_146a071f6(void)

longlong FUN_146a071f6(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 != 0) {
        return param_1;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      goto joined_r0x000146a0724f;
    }
    *(longlong **)(param_1 + 0x10) = plVar4;
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
  }
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 != 0) {
    return param_1;
  }
  (**(code **)*plVar5)(plVar5);
  LOCK();
  piVar1 = (int *)((longlong)plVar5 + 0xc);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  UNLOCK();
  plVar4 = plVar5;
joined_r0x000146a0724f:
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 146a0727e FUN_146a0727e body=228 status=ok
// SIG undefined FUN_146a0727e(void)

void FUN_146a0727e(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if ((int)param_1[6] == -1) {
      uVar3 = FUN_146a2e368();
      *(undefined4 *)(param_1 + 6) = uVar3;
    }
    else {
      FUN_146a2e3f2(param_1[5],param_1);
    }
    pcVar2 = (code *)param_1[8];
    if (pcVar2 != (code *)0x0) {
      local_34 = (undefined4)param_1[6];
      plVar5 = param_1 + 0xc;
      if ((longlong *)param_1[10] != (longlong *)0x0) {
        plVar5 = (longlong *)param_1[10];
      }
      local_40 = lVar1;
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar2)(uVar4,&local_40,&local_34);
    }
  }
  if (param_1[8] != 0) {
    plVar5 = param_1 + 0xc;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[10];
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 0x24) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  FUN_146a24ba0(param_1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a07364 FUN_146a07364 body=1599 status=ok
// SIG undefined FUN_146a07364(void)

void FUN_146a07364(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined ***pppuVar10;
  longlong *plVar11;
  undefined1 auStack_468 [32];
  undefined1 *local_448;
  code *local_438;
  longlong *local_430;
  code *local_428;
  undefined4 local_420;
  undefined4 uStack_41c;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined1 local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined1 local_3e1;
  undefined2 local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined1 local_3c8 [4];
  undefined1 local_3c4 [4];
  longlong *local_3c0;
  longlong *local_3b8;
  undefined1 local_3b0 [16];
  undefined1 local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  code *local_388;
  longlong *local_380;
  undefined ***local_378;
  undefined **local_368;
  longlong local_360;
  undefined1 local_348 [4];
  undefined4 local_344;
  undefined1 local_33c;
  undefined1 local_334;
  undefined1 local_32c;
  undefined1 local_324;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188;
  undefined1 local_180 [16];
  undefined8 local_170;
  longlong *local_168;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_468;
  if ((*(char *)(*(longlong *)(param_1 + 0x278) + 0x30) != '\x01') ||
     (*(char *)(param_1 + 0x488) != '\x01')) goto LAB_146a073a6;
  FUN_146a079a4(local_348);
  local_388 = (code *)0x149f05d50;
  local_380._0_4_ = 0x15;
  FUN_1446e940c(local_3c4,&local_388);
  local_388 = (code *)0x149f05d7c;
  local_380 = (longlong *)CONCAT44(local_380._4_4_,8);
  FUN_1446e940c(local_3c8,&local_388);
  FUN_140208bae(&local_3c0,local_3c8,local_3c4,L"Start typing to search");
  FUN_14023423e(local_3b0,&local_3c0);
  local_3a0 = 1;
  local_398 = 0;
  uStack_390 = 0;
  lVar7 = FUN_146a07b90(local_348,local_3b0);
  local_3e0 = 0x100;
  local_3d8 = 0;
  uStack_3d0 = 0;
  *(undefined2 *)(lVar7 + 0x278) = 0x100;
  FUN_144a450dc(lVar7 + 0x280,&local_3d8);
  FUN_1449db362(&local_3d8);
  local_428 = FUN_146a07be6;
  local_420 = 0;
  FUN_146a2ea5c(&local_388,param_1,&local_428);
  FUN_144a450dc(lVar7 + 0x238,&local_388);
  FUN_1449db362(&local_388);
  local_428 = FUN_146a07de4;
  local_420 = 0;
  FUN_146a2ef48(&local_388,param_1,&local_428);
  FUN_144a450dc(lVar7 + 0x248,&local_388);
  FUN_1449db362(&local_388);
  local_448 = &local_3e1;
  FUN_146a2e5be(&local_388,"SSearchBox",".\\Runtime/Slate/Private/Framework/MultiBox/MultiBox.cpp",
                0x3b8);
  FUN_146a07e48(&local_388,&local_428,lVar7);
  plVar9 = (longlong *)CONCAT44(uStack_41c,local_420);
  if (plVar9 == (longlong *)0x0) {
    *(code **)(param_1 + 0x458) = local_428;
    plVar11 = *(longlong **)(param_1 + 0x460);
    if (plVar11 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x460) = 0;
LAB_146a07968:
      LOCK();
      plVar9 = plVar11 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar4 = *piVar1;
        UNLOCK();
joined_r0x000146a078c2:
        if (iVar4 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    *(code **)(param_1 + 0x458) = local_428;
    plVar11 = *(longlong **)(param_1 + 0x460);
    if (plVar9 == plVar11) {
      LOCK();
      plVar11 = plVar9 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar4 = *piVar1;
        UNLOCK();
        plVar11 = plVar9;
        goto joined_r0x000146a078c2;
      }
    }
    else {
      *(longlong **)(param_1 + 0x460) = plVar9;
      if (plVar11 != (longlong *)0x0) goto LAB_146a07968;
    }
  }
  plVar9 = (longlong *)CONCAT44(uStack_41c,local_420);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar9 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  plVar9 = local_380;
  if (local_380 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_380 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_380)(local_380);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (local_3c0 != (longlong *)0x0) {
    (**(code **)(*local_3c0 + 0x10))();
  }
  FUN_146a07ebc(local_348);
  FUN_140a53a96(local_348);
  local_410 = 0x41000000;
  uStack_408 = 0x41000000;
  local_400 = 1;
  local_3f8 = 0;
  uStack_3f0 = 0;
  local_188 = 1;
  local_198 = 0x41000000;
  uStack_194 = 0;
  uStack_190 = 0x41000000;
  uStack_18c = 0;
  FUN_144a450dc(local_180,&local_3f8);
  FUN_1449db362(&local_3f8);
  local_378 = (undefined ***)0x0;
  local_368 = &PTR_LAB_149f0a550;
  local_388 = FUN_1428fdc32;
  local_360 = param_1;
  FUN_146a06fb4(local_348);
  plVar11 = local_168;
  local_170 = *(undefined8 *)(param_1 + 0x458);
  plVar9 = *(longlong **)(param_1 + 0x460);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  plVar6 = plVar9;
  if (local_168 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_168 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      puVar5 = (undefined8 *)*local_168;
      local_168 = plVar9;
      (*(code *)*puVar5)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar6 = local_168;
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        plVar6 = local_168;
      }
    }
  }
  local_168 = plVar6;
  local_448 = local_3c4;
  FUN_140a53d66(&local_428,&DAT_149efe19f,".\\Runtime/Slate/Private/Framework/MultiBox/MultiBox.cpp"
                ,0x3bf);
  FUN_140a50bf4(&local_428,&local_3c0,local_348);
  plVar11 = (longlong *)CONCAT44(uStack_41c,local_420);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar11 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar9 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    LOCK();
    plVar11 = plVar9 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if (local_388 != (code *)0x0) {
    pppuVar10 = local_378;
    if (local_378 == (undefined ***)0x0) {
      pppuVar10 = &local_368;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  FUN_140a5660c(local_348);
  local_344 = 0;
  local_33c = 0;
  local_334 = 0;
  local_32c = 0;
  local_324 = 0;
  local_348[0] = 0;
  FUN_144a5dc74(&local_428);
  uVar8 = FUN_140e82300();
  plVar9 = (longlong *)FUN_14001cc68(0x148,0x10);
  local_448 = local_348;
  FUN_146a2f440(plVar9,&local_3c0,uVar8,&local_428);
  pcVar3 = (code *)(plVar9 + 2);
  local_388 = pcVar3;
  local_380 = plVar9;
  FUN_146a2f60e(&local_388,pcVar3);
  if (local_428 != (code *)0x0) {
    (**(code **)(*(longlong *)local_428 + 0x10))();
  }
  plVar11 = local_380;
  *(undefined1 *)((longlong)plVar9 + 0xac) = 0;
  uVar8 = *(undefined8 *)(param_1 + 0x278);
  local_438 = pcVar3;
  local_430 = plVar9;
  if (plVar9 == (longlong *)0x0) {
    FUN_146a01538(uVar8,&local_438);
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    FUN_146a01538(uVar8,&local_438);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar11 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
  }
  if (local_3b8 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_3b8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_3b8)(local_3b8);
      LOCK();
      piVar1 = (int *)((longlong)local_3b8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_3b8 + 0x10))(local_3b8);
      }
    }
  }
LAB_146a073a6:
  if ((local_50 ^ (ulonglong)auStack_468) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a079a4 FUN_146a079a4 body=490 status=ok
// SIG undefined FUN_146a079a4(void)

longlong FUN_146a079a4(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [40];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined8 local_58;
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140a5071c();
  lVar1 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar1 == 0) {
    lVar1 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_58,"SearchBox",1);
  uVar2 = FUN_14627c96c(lVar1,local_58,0,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar2;
  local_50 = L"SearchHint";
  local_48 = 10;
  FUN_1446e940c(local_5c,&local_50);
  local_50 = L"Slate";
  local_48 = 5;
  FUN_1446e940c(local_60,&local_50);
  FUN_140208bae(&local_50,local_60,local_5c,L"Search");
  FUN_14023423e(param_1 + 0x1b0,&local_50);
  *(undefined1 *)(param_1 + 0x1c0) = 1;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  if (local_50 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_50 + 0x10))();
  }
  FUN_144a5dc74(param_1 + 0x1d8);
  *(undefined1 *)(param_1 + 0x1e8) = 0;
  *(undefined1 *)(param_1 + 0x208) = 0;
  *(undefined1 *)(param_1 + 0x20c) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined2 *)(param_1 + 0x220) = 0x100;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined2 *)(param_1 + 0x278) = 0x101;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x28d) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined2 *)(param_1 + 0x2a8) = 0x101;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0x3e800000;
  *(undefined1 *)(param_1 + 0x2c4) = 1;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2d4) = 0;
  *(undefined8 *)(param_1 + 0x2dc) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a07b90 FUN_146a07b90 body=86 status=ok
// SIG undefined FUN_146a07b90(void)

longlong FUN_146a07b90(longlong param_1,longlong *param_2)

{
  FUN_140008f88(param_1 + 0x1b0);
  *(char *)(param_1 + 0x1c0) = (char)param_2[2];
  FUN_144a450dc(param_1 + 0x1c8,param_2 + 3);
  FUN_1449db362(param_2 + 3);
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  return param_1;
}



// FUNCTION 146a07be6 FUN_146a07be6 body=508 status=ok
// SIG undefined FUN_146a07be6(void)

void FUN_146a07be6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  byte bVar5;
  char cVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_57;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar5 = FUN_144a7c5f6((longlong *)(param_1 + 0x478));
  plVar3 = (longlong *)*param_2;
  plVar4 = *(longlong **)(param_1 + 0x478);
  if (plVar4 != plVar3) {
    *(longlong *)(param_1 + 0x478) = (longlong)plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  *(int *)(param_1 + 0x480) = (int)param_2[1];
  if ((bVar5 & *(byte *)(param_1 + 0x488)) == 1) {
    cVar6 = FUN_144a7c5f6(param_2);
    plVar3 = DAT_14c98e618;
    if (cVar6 == '\0') {
      local_40 = *(undefined8 *)(param_1 + 0x458);
      plVar4 = *(longlong **)(param_1 + 0x460);
      if (plVar4 == (longlong *)0x0) {
        local_38 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        local_38 = plVar4;
      }
      cVar6 = (**(code **)(*plVar3 + 0xf0))(plVar3,&local_40,0);
      plVar3 = local_38;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_38)(local_38);
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
      if (((cVar6 == '\0') && (*(longlong *)(param_1 + 0x458) != 0)) &&
         (*(longlong **)(param_1 + 0x468) != (longlong *)0x0)) {
        local_58 = DAT_14c96b238;
        local_57 = 1;
        local_50 = 0;
        uStack_48 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x468) + 0x1c0))();
        plVar3 = DAT_14c98e618;
        local_40 = *(undefined8 *)(param_1 + 0x458);
        local_38 = *(longlong **)(param_1 + 0x460);
        if (local_38 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_38 + 1) = (int)local_38[1] + 1;
          UNLOCK();
        }
        FUN_1410a3d58(plVar3,0,&local_40,2);
        plVar3 = local_38;
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_38 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_38)(local_38);
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
    }
  }
  FUN_146a07fae(param_1);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a07de4 FUN_146a07de4 body=100 status=ok
// SIG undefined FUN_146a07de4(void)

void FUN_146a07de4(longlong param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_3 != 3) {
    return;
  }
  plVar1 = (longlong *)*param_2;
  plVar2 = *(longlong **)(param_1 + 0x478);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x478) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 0x480) = (int)param_2[1];
  FUN_146a07fae(param_1);
  return;
}



// FUNCTION 146a07e48 FUN_146a07e48 body=115 status=ok
// SIG undefined FUN_146a07e48(void)

longlong * FUN_146a07e48(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146a712a0(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 146a07ebc FUN_146a07ebc body=241 status=ok
// SIG undefined FUN_146a07ebc(void)

void FUN_146a07ebc(longlong param_1)

{
  FUN_1449db362(param_1 + 0x2e8);
  FUN_1449db362(param_1 + 0x2d8);
  FUN_1449db362(param_1 + 0x2c8);
  FUN_1449db362(param_1 + 0x2b0);
  FUN_1449db362(param_1 + 0x298);
  FUN_1449db362(param_1 + 0x280);
  FUN_1449db362(param_1 + 0x268);
  FUN_1449db362(param_1 + 600);
  FUN_1449db362(param_1 + 0x248);
  FUN_1449db362(param_1 + 0x238);
  FUN_1449db362(param_1 + 0x228);
  FUN_1449db362(param_1 + 0x210);
  if (*(char *)(param_1 + 0x208) == '\x01') {
    *(undefined1 *)(param_1 + 0x208) = 0;
  }
  FUN_1449db362(param_1 + 0x1f0);
  if (*(longlong **)(param_1 + 0x1d8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1d8) + 0x10))();
  }
  FUN_1449db362(param_1 + 0x1c8);
  if (*(longlong **)(param_1 + 0x1b0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x10))();
  }
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 146a07fae FUN_146a07fae body=2181 status=ok
// SIG undefined FUN_146a07fae(void)

void FUN_146a07fae(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  size_t sVar12;
  char *pcVar13;
  undefined8 *puVar14;
  undefined2 *puVar15;
  longlong *plVar16;
  longlong lVar17;
  wchar_t *_Str;
  bool bVar18;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 local_160;
  char local_149;
  longlong *local_148;
  longlong local_140;
  char local_138 [8];
  undefined8 local_130;
  undefined8 uStack_128;
  char local_119;
  char local_118 [8];
  undefined8 local_110;
  undefined8 uStack_108;
  char local_100 [8];
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  undefined4 local_e0;
  char local_d8 [8];
  undefined8 local_d0;
  undefined8 uStack_c8;
  char local_c0 [8];
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  undefined8 uStack_a0;
  longlong *plStack_98;
  uint local_90;
  int iStack_8c;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong *plStack_78;
  uint local_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_145d323a0(param_1 + 0x408,0);
  cVar5 = FUN_144a7c5f6(param_1 + 0x478);
  if (cVar5 == '\0') {
    FUN_146a0b864(param_1,5);
    local_a8 = (longlong *)(param_1 + 0x310);
    plStack_78 = (longlong *)(param_1 + 800);
    local_80 = (longlong *)&DAT_100000000;
    local_70 = 0xffffffff;
    iStack_6c = 0;
    uStack_68 = 0;
    if (*(int *)(param_1 + 0x338) != 0) {
      FUN_1449c0562(&local_80);
    }
    uStack_a0 = local_80;
    plStack_98 = plStack_78;
    local_90 = local_70;
    iStack_8c = iStack_6c;
    uStack_88 = CONCAT44(uStack_64,uStack_68);
    if (iStack_6c < (int)plStack_78[3]) {
      local_148 = (longlong *)(param_1 + 0x3b8);
      do {
        iVar7 = *(int *)(*local_a8 + 0x18 + (longlong)iStack_8c * 0x28);
        if (iVar7 == 0) {
          plVar16 = (longlong *)FUN_140e82300();
        }
        else {
          plVar16 = (longlong *)
                    ((longlong)(iVar7 + -1) * 0x10 +
                    *(longlong *)(*local_a8 + 0x10 + (longlong)iStack_8c * 0x28));
        }
        local_e8 = (longlong *)*plVar16;
        if (local_e8 != (longlong *)0x0) {
          (**(code **)(*local_e8 + 8))();
        }
        local_e0 = (undefined4)plVar16[1];
        if (*(longlong *)(*local_a8 + (longlong)iStack_8c * 0x28) != *(longlong *)(param_1 + 0x468))
        {
          puVar14 = (undefined8 *)(*local_a8 + (longlong)iStack_8c * 0x28);
          cVar5 = FUN_144a7c5f6(&local_e8);
          if (cVar5 == '\0') {
            uVar10 = FUN_1447a1f4a(&local_e8);
            puVar11 = (undefined8 *)FUN_1447a1f4a(param_1 + 0x478);
            _Str = L"";
            if (*(int *)(puVar11 + 1) != 0) {
              _Str = (wchar_t *)*puVar11;
            }
            cVar5 = DAT_14c96b1e1;
            if (_Str != (wchar_t *)0x0) {
              sVar12 = wcslen(_Str);
              local_160 = 0xffffffff;
              local_168 = 0;
              iVar7 = FUN_1447ee042(uVar10,_Str,sVar12 & 0xffffffff,1);
              pcVar13 = &DAT_14c96b238;
              if (iVar7 == -1) {
                pcVar13 = &DAT_14c96b1e1;
              }
              cVar5 = *pcVar13;
            }
            plVar16 = (longlong *)*puVar14;
            plVar2 = (longlong *)puVar14[1];
            local_149 = cVar5;
            local_80 = plVar16;
            if (plVar2 == (longlong *)0x0) {
              plStack_78 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
              UNLOCK();
              plStack_78 = plVar2;
              if (plVar2 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
                UNLOCK();
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
            plVar3 = local_148;
            uVar6 = ((uint)((ulonglong)plVar16 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar16 >> 4))
                    * -0x7a143595;
            uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
            iVar7 = FUN_146a2df1e(local_148,uVar6 >> 0x10 ^ uVar6,&local_80);
            plVar16 = plStack_78;
            if (iVar7 == -1) {
              lVar17 = 0;
            }
            else {
              lVar17 = (longlong)iVar7 * 0x28 + *plVar3;
            }
            if (plStack_78 != (longlong *)0x0) {
              LOCK();
              plVar3 = plStack_78 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*plStack_78)(plStack_78);
                LOCK();
                piVar1 = (int *)((longlong)plVar16 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar16 + 0x10))(plVar16);
                }
              }
            }
            if (plVar2 != (longlong *)0x0) {
              LOCK();
              plVar16 = plVar2 + 1;
              *(int *)plVar16 = (int)*plVar16 + -1;
              UNLOCK();
              if ((int)*plVar16 == 0) {
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
            cVar5 = local_149;
            if (lVar17 != 0) {
              plVar16 = *(longlong **)(*(longlong *)(lVar17 + 0x10) + 0x10);
              local_118[0] = local_149;
              local_118[1] = 1;
              local_110 = 0;
              uStack_108 = 0;
              (**(code **)(*plVar16 + 0x1c0))(plVar16,local_118);
              *(char *)(*(longlong *)(lVar17 + 0x10) + 0x20) = cVar5;
              if (cVar5 == DAT_14c96b238) {
                local_119 = '\0';
                FUN_1428fcbe4(&local_80,*(undefined8 *)(lVar17 + 0x10));
                puVar14 = (undefined8 *)FUN_1447a1f4a(&local_80);
                iVar7 = *(int *)(puVar14 + 1);
                puVar15 = &DAT_149dfb77a;
                if (iVar7 != 0) {
                  puVar15 = (undefined2 *)*puVar14;
                }
                iVar4 = iVar7 + -1;
                if (iVar7 == 0) {
                  iVar4 = 0;
                }
                uVar8 = FUN_144a49b4a(iVar4,puVar15);
                FUN_146a3d9dc(param_1 + 0x408,uVar8,puVar14,&local_119);
                if (local_80 != (longlong *)0x0) {
                  (**(code **)(*local_80 + 0x10))();
                }
                if (local_119 == '\x01') {
                  *(char *)(*(longlong *)(lVar17 + 0x10) + 0x20) = DAT_14c96b1e1;
                }
              }
              goto LAB_146a0853d;
            }
            plVar16 = (longlong *)*puVar14;
            local_138[0] = local_149;
            local_138[1] = 1;
            local_130 = 0;
            uStack_128 = 0;
            lVar17 = *plVar16;
            pcVar13 = local_138;
          }
          else {
            plVar16 = (longlong *)*puVar14;
            local_100[0] = DAT_14c96b1e1;
            local_100[1] = 1;
            local_f8 = 0;
            uStack_f0 = 0;
            lVar17 = *plVar16;
            pcVar13 = local_100;
          }
          (**(code **)(lVar17 + 0x1c0))(plVar16,pcVar13);
        }
LAB_146a0853d:
        if (local_e8 != (longlong *)0x0) {
          (**(code **)(*local_e8 + 0x10))();
        }
        local_90 = local_90 & ~uStack_a0._4_4_;
        FUN_1449c0562(&uStack_a0);
      } while (iStack_8c < (int)plStack_98[3]);
    }
  }
  else {
    plStack_78 = (longlong *)(param_1 + 800);
    local_80 = (longlong *)0x100000000;
    local_70 = 0xffffffff;
    iStack_6c = 0;
    uStack_68 = 0;
    if (*(int *)(param_1 + 0x338) != 0) {
      FUN_1449c0562(&local_80);
    }
    local_90 = local_70;
    iStack_8c = iStack_6c;
    uStack_88 = CONCAT44(uStack_64,uStack_68);
    uStack_a0 = local_80;
    plStack_98 = plStack_78;
    local_a8 = (longlong *)(param_1 + 0x310);
    if (iStack_6c < *(int *)((longlong)plStack_78 + 0x18)) {
      do {
        plVar16 = *(longlong **)(*local_a8 + (longlong)iStack_8c * 0x28);
        local_c0[0] = DAT_14c96b238;
        local_c0[1] = 1;
        local_b8 = 0;
        uStack_b0 = 0;
        (**(code **)(*plVar16 + 0x1c0))(plVar16,local_c0);
        local_90 = local_90 & ~uStack_a0._4_4_;
        FUN_1449c0562(&uStack_a0);
      } while (iStack_8c < *(int *)((longlong)plStack_98 + 0x18));
    }
    plVar16 = (longlong *)(param_1 + 0x360);
    plVar2 = (longlong *)(param_1 + 0x370);
    local_80 = (longlong *)&DAT_100000000;
    local_70 = 0xffffffff;
    iStack_6c = 0;
    uStack_68 = 0;
    local_140 = param_1;
    plStack_78 = plVar2;
    if (*(int *)(param_1 + 0x388) == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_80);
      iVar7 = *(int *)(param_1 + 0x388);
    }
    uStack_88 = CONCAT44(uStack_64,uStack_68);
    local_90 = local_70;
    iStack_8c = iStack_6c;
    uStack_a0._0_4_ = SUB84(local_80,0);
    uStack_a0._4_4_ = local_80._4_4_;
    plStack_98 = plStack_78;
    local_a8 = plVar16;
    if ((iStack_6c != iVar7) || (plStack_78 != plVar2)) {
      do {
        lVar17 = *local_a8;
        lVar9 = (longlong)iStack_8c;
        plVar3 = *(longlong **)(*(longlong *)(lVar17 + 0x10 + lVar9 * 0x28) + 0x10);
        local_d8[0] = DAT_14c96b1e1;
        local_d8[1] = 1;
        local_d0 = 0;
        uStack_c8 = 0;
        (**(code **)(*plVar3 + 0x1c0))(plVar3,local_d8);
        *(char *)(*(longlong *)(lVar17 + 0x10 + lVar9 * 0x28) + 0x20) = DAT_14c96b1e1;
        local_90 = local_90 & ~uStack_a0._4_4_;
        FUN_1449c0562(&uStack_a0);
      } while (local_a8 != plVar16 || (plStack_98 != plVar2 || iStack_8c != iVar7));
    }
    uVar10 = DAT_14c98e618;
    plVar16 = *(longlong **)(local_140 + 0x10);
    if (plVar16 == (longlong *)0x0) {
LAB_146a082f6:
      local_a8 = (longlong *)0x0;
      uStack_a0 = (longlong *)0x0;
      bVar18 = true;
    }
    else {
      iVar7 = (int)plVar16[1];
      do {
        if (iVar7 == 0) goto LAB_146a082f6;
        LOCK();
        iVar4 = (int)plVar16[1];
        bVar18 = iVar7 == iVar4;
        if (bVar18) {
          *(int *)(plVar16 + 1) = iVar7 + 1;
          iVar4 = iVar7;
        }
        iVar7 = iVar4;
        UNLOCK();
      } while (!bVar18);
      plVar3 = *(longlong **)(local_140 + 8);
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
      LOCK();
      plVar2 = plVar16 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
      bVar18 = false;
      local_a8 = plVar3;
      uStack_a0 = plVar16;
    }
    plVar16 = uStack_a0;
    FUN_1410a3d58(uVar10,0,&local_a8,2);
    plVar2 = uStack_a0;
    if (uStack_a0 != (longlong *)0x0) {
      LOCK();
      plVar3 = uStack_a0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*uStack_a0)(uStack_a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (!bVar18) {
      LOCK();
      plVar2 = plVar16 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a08834 FUN_146a08834 body=88 status=ok
// SIG undefined FUN_146a08834(void)

longlong FUN_146a08834(longlong param_1)

{
  longlong lVar1;
  
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  lVar1 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar1 == 0) {
    lVar1 = DAT_14c96b350;
  }
  *(longlong *)(param_1 + 0x1b8) = lVar1;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined1 *)(param_1 + 0x1c8) = 1;
  return param_1;
}



// FUNCTION 146a0888c FUN_146a0888c body=386 status=ok
// SIG undefined FUN_146a0888c(void)

longlong * FUN_146a0888c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146a0899d:
    *puVar5 = &PTR_LAB_149f0a860;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_149f0a7f0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146a0899d;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f0a860;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_149f0a7f0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 146a08a0e FUN_146a08a0e body=405 status=ok
// SIG undefined FUN_146a08a0e(void)

undefined8 FUN_146a08a0e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong lStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined **local_b0 [9];
  undefined8 local_68;
  longlong *local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar4 = *(longlong *)(param_1 + 0x278);
  local_100 = *(undefined8 *)(lVar4 + 0x58);
  local_c8 = 0;
  uStack_c0 = 0;
  piVar2 = (int *)(lVar4 + 0x40);
  if ((longlong)*piVar2 < 1) {
    local_d8 = 0;
    lStack_d0 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x38);
    lVar3 = (longlong)*piVar2 * 0x10;
    local_d8 = *(undefined8 *)(lVar4 + -0x10 + lVar3);
    lStack_d0 = *(longlong *)(lVar4 + -8 + lVar3);
    if (lStack_d0 != 0) {
      LOCK();
      *(int *)(lStack_d0 + 8) = *(int *)(lStack_d0 + 8) + 1;
      UNLOCK();
    }
  }
  local_e8 = 1;
  local_f8 = 1;
  local_f0 = 0;
  local_108 = 0;
  FUN_1469d0642(local_b0,CONCAT71((int7)((ulonglong)lVar4 >> 8),1),&local_d8,&local_c8);
  if (*(longlong *)(param_1 + 0x2c8) != 0) {
    FUN_1446ddc76(&local_e0,"ClippingVerticalBox.Check",1);
    local_68 = local_e0;
  }
  lVar4 = *(longlong *)(param_1 + 0x278);
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x2c8) + 0x240);
  }
  else {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x2b8) + 0x230);
  }
  lVar3 = (longlong)*piVar2;
  if (*piVar2 < *(int *)(lVar4 + 0x50)) {
    lVar5 = lVar3 << 4;
    do {
      plVar1 = *(longlong **)(*(longlong *)(lVar4 + 0x48) + lVar5);
      (**(code **)(*plVar1 + 8))(plVar1,local_b0);
      lVar3 = lVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar3 < *(int *)(lVar4 + 0x50));
  }
  (*(code *)local_b0[0][4])(local_b0,param_2,0,1000);
  local_b0[0] = &PTR_FUN_149f05160;
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  FUN_1469e534a(local_b0);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a08ba4 FUN_146a08ba4 body=182 status=ok
// SIG undefined FUN_146a08ba4(void)

longlong * FUN_146a08ba4(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  
  FUN_140a515e6(*param_1,param_3);
  lVar1 = *param_1;
  FUN_1469fa47e(lVar1 + 0x220,param_3 + 0x1a8);
  *(undefined8 *)(lVar1 + 600) = *(undefined8 *)(param_3 + 0x1b8);
  *(undefined8 *)(lVar1 + 0x260) = *(undefined8 *)(param_3 + 0x1c0);
  *(undefined1 *)(lVar1 + 0x250) = *(undefined1 *)(param_3 + 0x1c8);
  *(undefined8 *)(lVar1 + 0x230) = 0xffffffffffffffff;
  plVar2 = (longlong *)*param_1;
  bVar5 = *(byte *)(plVar2 + 6);
  bVar4 = 0x20;
  if ((bVar5 & 0x10) == 0) {
    cVar3 = (**(code **)(*plVar2 + 0x220))(plVar2);
    bVar4 = cVar3 << 5;
    bVar5 = *(byte *)(plVar2 + 6);
  }
  *(byte *)(plVar2 + 6) = bVar5 & 0xdf | bVar4;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 146a08c5a FUN_146a08c5a body=140 status=ok
// SIG undefined FUN_146a08c5a(void)

longlong FUN_146a08c5a(longlong param_1)

{
  longlong lVar1;
  
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  lVar1 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar1 == 0) {
    lVar1 = DAT_14c96b350;
  }
  *(longlong *)(param_1 + 0x1b8) = lVar1;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined1 *)(param_1 + 0x1c8) = DAT_14c96b238;
  *(undefined1 *)(param_1 + 0x1c9) = 1;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined1 *)(param_1 + 0x1e0) = 1;
  *(undefined4 *)(param_1 + 0x1e8) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1ec) = 1;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  return param_1;
}



// FUNCTION 146a08ce6 FUN_146a08ce6 body=155 status=ok
// SIG undefined FUN_146a08ce6(void)

longlong FUN_146a08ce6(longlong param_1)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146a2479c(local_30);
  local_48 = 0;
  local_44 = 1;
  local_40 = 0;
  local_38 = 0;
  FUN_146a24854(&local_40,local_30);
  FUN_1449db362(local_30);
  *(undefined1 *)(param_1 + 0x1ec) = local_44;
  *(undefined4 *)(param_1 + 0x1e8) = local_48;
  FUN_144a450dc(param_1 + 0x1f0,&local_40);
  FUN_1449db362(&local_40);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a08d82 FUN_146a08d82 body=230 status=ok
// SIG undefined FUN_146a08d82(void)

longlong * FUN_146a08d82(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  
  FUN_140a515e6(*param_1,param_3);
  lVar1 = *param_1;
  FUN_1469fa47e(lVar1 + 0x230,param_3 + 0x1a8);
  *(undefined8 *)(lVar1 + 0x268) = *(undefined8 *)(param_3 + 0x1b8);
  *(undefined8 *)(lVar1 + 0x96c) = *(undefined8 *)(param_3 + 0x1c0);
  *(undefined1 *)(lVar1 + 0x260) = *(undefined1 *)(param_3 + 0x1e0);
  *(undefined4 *)(lVar1 + 0x950) = *(undefined4 *)(param_3 + 0x1e8);
  *(undefined1 *)(lVar1 + 0x954) = *(undefined1 *)(param_3 + 0x1ec);
  FUN_146a24854(lVar1 + 0x958,param_3 + 0x1f0);
  *(undefined8 *)(lVar1 + 0x240) = 0xffffffffffffffff;
  plVar2 = (longlong *)*param_1;
  bVar5 = *(byte *)(plVar2 + 6);
  bVar4 = 0x20;
  if ((bVar5 & 0x10) == 0) {
    cVar3 = (**(code **)(*plVar2 + 0x220))(plVar2);
    bVar4 = cVar3 << 5;
    bVar5 = *(byte *)(plVar2 + 6);
  }
  *(byte *)(plVar2 + 6) = bVar5 & 0xdf | bVar4;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 146a08e68 FUN_146a08e68 body=282 status=ok
// SIG undefined FUN_146a08e68(void)

longlong FUN_146a08e68(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined2 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined1 *)(param_1 + 0x1c8) = 1;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined1 *)(param_1 + 0x1e4) = 1;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined1 *)(param_1 + 0x1fc) = 1;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined1 *)(param_1 + 0x214) = 1;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0x7f7fffff;
  *(undefined1 *)(param_1 + 0x22c) = 1;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0x7f7fffff;
  *(undefined1 *)(param_1 + 0x244) = 1;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined2 *)(param_1 + 600) = 0x100;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined4 *)(param_1 + 0x270) = 1;
  *(undefined1 *)(param_1 + 0x274) = 1;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  local_30 = CONCAT11(1,DAT_14c96b23c);
  local_28 = 0;
  uStack_20 = 0;
  *(undefined2 *)(param_1 + 0x70) = local_30;
  FUN_144a450dc(param_1 + 0x78,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a08f84 FUN_146a08f84 body=115 status=ok
// SIG undefined FUN_146a08f84(void)

longlong * FUN_146a08f84(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146a9faf6(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 146a08ff8 FUN_146a08ff8 body=152 status=ok
// SIG undefined FUN_146a08ff8(void)

void FUN_146a08ff8(longlong param_1)

{
  FUN_1449db362(param_1 + 0x278);
  FUN_1449db362(param_1 + 0x260);
  FUN_1449db362(param_1 + 0x248);
  FUN_1449db362(param_1 + 0x230);
  FUN_1449db362(param_1 + 0x218);
  FUN_1449db362(param_1 + 0x200);
  FUN_1449db362(param_1 + 0x1e8);
  FUN_1449db362(param_1 + 0x1d0);
  FUN_146a24b66(*(undefined8 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1b0));
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1400020a8();
  }
  FUN_140a4ff8c(param_1);
  return;
}


