// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146a09090 FUN_146a09090 body=519 status=ok
// SIG undefined FUN_146a09090(void)

longlong FUN_146a09090(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c4) = 0;
  *(undefined8 *)(param_1 + 0x1cc) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0x43000000;
  *(undefined1 *)(param_1 + 0x20c) = 1;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0x43000000;
  *(undefined1 *)(param_1 + 0x224) = 1;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined2 *)(param_1 + 0x238) = 0x100;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 3;
  *(undefined1 *)(param_1 + 0x2b4) = 1;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined1 *)(param_1 + 0x2c8) = 1;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 1;
  uVar5 = 0;
  *(undefined1 *)(param_1 + 0x2e4) = 0;
  *(undefined1 *)(param_1 + 0x2f0) = 0;
  *(undefined1 *)(param_1 + 0x2f8) = DAT_14c96b238;
  *(undefined1 *)(param_1 + 0x2f9) = 1;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined2 *)(param_1 + 0x310) = 0;
  lVar3 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar3 == 0) {
    lVar3 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_30,"ScrollBar",1);
  uVar4 = FUN_145817968(lVar3,local_30,0,0);
  *(undefined8 *)(param_1 + 0x318) = uVar4;
  *(undefined1 *)(param_1 + 800) = DAT_14c96b1e1;
  *(undefined1 *)(param_1 + 0x321) = 0;
  lVar3 = DAT_14c96b2f0;
  cVar1 = FUN_144a8728e();
  if (cVar1 == '\0') {
    bVar2 = FUN_144a61b4f();
    uVar5 = (ulonglong)(bVar2 ^ 1);
  }
  *(undefined4 *)(param_1 + 0x324) = *(undefined4 *)(lVar3 + uVar5 * 4);
  *(undefined2 *)(param_1 + 0x328) = 0x101;
  *(undefined2 *)(param_1 + 0x330) = 0x101;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined1 *)(param_1 + 0x368) = 1;
  *(undefined1 *)(param_1 + 0xa2) = 1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a09298 FUN_146a09298 body=175 status=ok
// SIG undefined FUN_146a09298(void)

longlong FUN_146a09298(longlong param_1,undefined8 param_2,undefined8 *param_3)

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
  FUN_146a3a9e6(local_48,param_2,&local_38);
  local_38 = CONCAT35((int3)((ulonglong)local_38 >> 0x28),0x100000000);
  local_30 = 0;
  local_28 = 0;
  FUN_140a52b3c(&local_30,local_48);
  *(undefined1 *)(param_1 + 0x224) = local_38._4_1_;
  *(undefined4 *)(param_1 + 0x220) = (undefined4)local_38;
  FUN_144a450dc(param_1 + 0x228,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a09348 FUN_146a09348 body=175 status=ok
// SIG undefined FUN_146a09348(void)

longlong FUN_146a09348(longlong param_1,undefined8 param_2,undefined8 *param_3)

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
  FUN_146a3a9e6(local_48,param_2,&local_38);
  local_38 = CONCAT35((int3)((ulonglong)local_38 >> 0x28),0x100000000);
  local_30 = 0;
  local_28 = 0;
  FUN_140a52b3c(&local_30,local_48);
  *(undefined1 *)(param_1 + 0x20c) = local_38._4_1_;
  *(undefined4 *)(param_1 + 0x208) = (undefined4)local_38;
  FUN_144a450dc(param_1 + 0x210,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a093f8 FUN_146a093f8 body=115 status=ok
// SIG undefined FUN_146a093f8(void)

longlong * FUN_146a093f8(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146a3aed8(*param_1,param_3);
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



// FUNCTION 146a0946c FUN_146a0946c body=337 status=ok
// SIG undefined FUN_146a0946c(void)

void FUN_146a0946c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x358);
  FUN_1449db362(param_1 + 0x348);
  FUN_1449db362(param_1 + 0x338);
  FUN_1449db362(param_1 + 0x300);
  if (*(char *)(param_1 + 0x2f0) == '\x01') {
    *(undefined1 *)(param_1 + 0x2f0) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x2d8);
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
  FUN_1449db362(param_1 + 0x2b8);
  FUN_1449db362(param_1 + 0x2a0);
  FUN_1449db362(param_1 + 0x290);
  FUN_1449db362(param_1 + 0x280);
  FUN_1449db362(param_1 + 0x270);
  FUN_1449db362(param_1 + 0x260);
  FUN_1449db362(param_1 + 0x250);
  FUN_1449db362(param_1 + 0x240);
  FUN_1449db362(param_1 + 0x228);
  FUN_1449db362(param_1 + 0x210);
  plVar3 = *(longlong **)(param_1 + 0x200);
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
  FUN_1449db362(param_1 + 0x1d8);
  FUN_1449db362(param_1 + 0x1c8);
  FUN_1449db362(param_1 + 0x1b8);
  FUN_1449db362(param_1 + 0x1a8);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 146a095be FUN_146a095be body=392 status=ok
// SIG undefined FUN_146a095be(void)

longlong FUN_146a095be(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_48,"ScrollBox",1);
  uVar3 = FUN_145817e46(lVar2,local_48,0,0);
  *(undefined8 *)(param_1 + 0x1b8) = uVar3;
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_50,"ScrollBar",1);
  uVar3 = FUN_145817968(lVar2,local_50,0,0);
  *(undefined8 *)(param_1 + 0x1c0) = uVar3;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 1;
  *(undefined1 *)(param_1 + 0x1dc) = DAT_14c96b238;
  *(undefined2 *)(param_1 + 0x1dd) = 0;
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x1b8) + 8);
  *(undefined4 *)(param_1 + 0x1e0) = uVar1;
  *(undefined4 *)(param_1 + 0x1e4) = uVar1;
  *(undefined4 *)(param_1 + 0x1e8) = 0x40000000;
  *(undefined4 *)(param_1 + 0x1ec) = 0x40000000;
  *(undefined4 *)(param_1 + 0x1f0) = 0x40000000;
  *(undefined4 *)(param_1 + 500) = 0x40000000;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x1fc) = 0x3f80000041700000;
  *(undefined2 *)(param_1 + 0x204) = 1;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined1 *)(param_1 + 0x20c) = 0;
  *(undefined1 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined1 *)(param_1 + 0xa2) = 1;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a09748 FUN_146a09748 body=85 status=ok
// SIG undefined FUN_146a09748(void)

longlong FUN_146a09748(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1b0);
  *(uint *)(param_1 + 0x1b0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1b4) < iVar1 + 1U) {
    FUN_146a24cb6(param_1 + 0x1a8,iVar1);
  }
  FUN_146a24bf4((longlong)iVar1 * 0xc0 + *(longlong *)(param_1 + 0x1a8),param_2);
  return param_1;
}



// FUNCTION 146a0979e FUN_146a0979e body=136 status=ok
// SIG undefined FUN_146a0979e(void)

longlong FUN_146a0979e(longlong param_1,undefined8 *param_2)

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
      goto joined_r0x000146a097f7;
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
joined_r0x000146a097f7:
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 146a09826 FUN_146a09826 body=115 status=ok
// SIG undefined FUN_146a09826(void)

longlong * FUN_146a09826(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146a9642e(*param_1,param_3);
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



// FUNCTION 146a0989a FUN_146a0989a body=108 status=ok
// SIG undefined FUN_146a0989a(void)

void FUN_146a0989a(longlong param_1)

{
  FUN_1449db362(param_1 + 0xb0);
  FUN_1449db362(param_1 + 0x98);
  if (*(char *)(param_1 + 0x88) == '\x01') {
    FUN_1449db362(param_1 + 0x78);
    FUN_1449db362(param_1 + 0x60);
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  if (*(char *)(param_1 + 0x4c) == '\x01') {
    *(undefined1 *)(param_1 + 0x4c) = 0;
  }
  if (*(char *)(param_1 + 0x44) == '\x01') {
    *(undefined1 *)(param_1 + 0x44) = 0;
  }
  FUN_1449db362(param_1 + 0x30);
  FUN_146a24dc0(param_1);
  return;
}



// FUNCTION 146a09906 FUN_146a09906 body=123 status=ok
// SIG undefined FUN_146a09906(void)

void FUN_146a09906(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x220);
  FUN_1449db362(param_1 + 0x210);
  plVar3 = *(longlong **)(param_1 + 0x1d0);
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
  FUN_146a24e13(*(undefined8 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1b0));
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1400020a8();
  }
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 146a09982 FUN_146a09982 body=1566 status=ok
// SIG undefined FUN_146a09982(void)

void FUN_146a09982(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_688 [32];
  undefined1 *local_668;
  undefined4 local_658;
  undefined1 local_654;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined1 local_639;
  undefined1 local_638 [8];
  longlong *local_630;
  undefined1 local_619;
  code *local_618;
  undefined4 local_610;
  undefined4 uStack_60c;
  longlong local_600;
  undefined1 local_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  longlong *local_5d8;
  undefined1 local_5d0 [4];
  undefined1 local_5cc [4];
  longlong *local_5c8 [2];
  undefined1 local_5b8 [16];
  undefined1 local_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined1 local_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  longlong *local_560;
  undefined4 local_558;
  undefined1 local_554;
  undefined1 local_550;
  undefined8 local_548;
  undefined8 uStack_540;
  wchar_t *local_538;
  longlong *plStack_530;
  undefined1 local_528;
  undefined8 local_520;
  undefined8 uStack_518;
  longlong local_390;
  undefined1 local_388;
  undefined1 local_380 [128];
  undefined4 local_300 [2];
  undefined1 local_2f8 [424];
  longlong local_150;
  undefined8 local_148;
  longlong *local_140;
  undefined1 local_128 [16];
  undefined1 local_118 [32];
  undefined1 local_f8;
  undefined1 local_f7;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 local_90;
  undefined1 local_88 [56];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_688;
  lVar5 = FUN_1461d88a6(*(undefined8 *)(param_1 + 600),*(undefined8 *)(param_1 + 0x260),0,0);
  FUN_146a0f1de(local_300);
  local_f7 = 0;
  local_150 = lVar5 + 0x3210;
  local_590 = 0x40800000;
  uStack_588 = 0x40800000;
  local_580 = 1;
  local_578 = 0;
  uStack_570 = 0;
  local_90 = 1;
  local_a0 = 0x40800000;
  uStack_9c = 0;
  uStack_98 = 0x40800000;
  uStack_94 = 0;
  FUN_144a450dc(local_88,&local_578);
  FUN_1449db362(&local_578);
  local_538 = L"ExpandToolbar";
  plStack_530._0_4_ = 0xd;
  FUN_1446e940c(local_5cc,&local_538);
  local_538 = L"Slate";
  plStack_530 = (longlong *)CONCAT44(plStack_530._4_4_,5);
  FUN_1446e940c(local_5d0,&local_538);
  FUN_140208bae(local_5c8,local_5d0,local_5cc,L"Click to expand toolbar");
  FUN_14023423e(local_5b8,local_5c8);
  local_5a8 = 1;
  local_5a0 = 0;
  uStack_598 = 0;
  FUN_146a0f39c(local_300,local_5b8);
  FUN_1469fa47e(local_128,param_1 + 0x220);
  local_558 = 1;
  local_554 = 1;
  local_550 = 1;
  local_548 = 0;
  uStack_540 = 0;
  FUN_146a0f3e6(local_300);
  local_618 = FUN_146a0f448;
  local_610 = 0;
  FUN_146a3f004(&local_538,param_1);
  FUN_144a450dc(local_118,&local_538);
  FUN_1449db362(&local_538);
  local_f8 = 1;
  FUN_140a53334(&local_538);
  local_600 = lVar5 + 0xc0;
  local_5f8 = 1;
  local_5f0 = 0;
  uStack_5e8 = 0;
  local_388 = 1;
  local_390 = local_600;
  FUN_144a450dc(local_380,&local_5f0);
  FUN_1449db362(&local_5f0);
  local_668 = &local_619;
  FUN_140a554b8(&local_618,"SImage",
                ".\\Runtime/Slate/Private/Framework/MultiBox/SClippingHorizontalBox.cpp",0x80);
  FUN_140a52c70(&local_618,&local_5e0,&local_538);
  plVar2 = local_140;
  plVar4 = local_5d8;
  if (local_5d8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5d8 + 1) = (int)local_5d8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_5d8 + 1) = (int)local_5d8[1] + 1;
    UNLOCK();
  }
  local_148 = local_5e0;
  local_140 = local_5d8;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar2 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  local_668 = &local_639;
  FUN_146a3ebfe(local_638,"SComboButton",
                ".\\Runtime/Slate/Private/Framework/MultiBox/SClippingHorizontalBox.cpp",0x75);
  FUN_146a0f634(local_638,&local_568,local_300);
  plVar2 = local_560;
  if (local_560 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x210) = local_568;
    plVar6 = *(longlong **)(param_1 + 0x218);
    if (plVar6 == (longlong *)0x0) goto LAB_146a09ca5;
    *(undefined8 *)(param_1 + 0x218) = 0;
LAB_146a09f65:
    LOCK();
    plVar2 = plVar6 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 != 0) goto LAB_146a09ca5;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_560 + 1) = (int)local_560[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x210) = local_568;
    plVar6 = *(longlong **)(param_1 + 0x218);
    if (local_560 != plVar6) {
      *(longlong **)(param_1 + 0x218) = local_560;
      if (plVar6 == (longlong *)0x0) goto LAB_146a09ca5;
      goto LAB_146a09f65;
    }
    LOCK();
    plVar6 = local_560 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_146a09ca5;
    (**(code **)*local_560)(local_560);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
    plVar6 = plVar2;
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
LAB_146a09ca5:
  if (local_560 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_560 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_560)(local_560);
      LOCK();
      piVar1 = (int *)((longlong)local_560 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_560 + 0x10))(local_560);
      }
    }
  }
  if (local_630 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_630 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_630)(local_630);
      LOCK();
      piVar1 = (int *)((longlong)local_630 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_630 + 0x10))(local_630);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
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
  if (local_5d8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_5d8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_5d8)(local_5d8);
      LOCK();
      piVar1 = (int *)((longlong)local_5d8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_5d8 + 0x10))(local_5d8);
      }
    }
  }
  plVar4 = (longlong *)CONCAT44(uStack_60c,local_610);
  if (plVar4 != (longlong *)0x0) {
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
  FUN_140a55a86(&local_538);
  if (local_5c8[0] != (longlong *)0x0) {
    (**(code **)(*local_5c8[0] + 0x10))();
  }
  FUN_146a0f6a8(local_300);
  FUN_1405d299c(*(undefined8 *)(param_1 + 0x210),0x3f800000);
  FUN_144b013c4(*(undefined8 *)(param_1 + 0x210),local_300);
  *(undefined4 *)(param_1 + 0x254) = local_300[0];
  FUN_146a24608(param_1,local_300,0xffffffff);
  local_658 = 0;
  local_654 = 1;
  local_650 = 0;
  uStack_648 = 0;
  lVar5 = FUN_140a5475a(local_2f8);
  local_538 = (wchar_t *)0x0;
  plStack_530 = (longlong *)0x0;
  local_528 = 1;
  local_520 = 0;
  uStack_518 = 0;
  *(undefined1 *)(lVar5 + 0x28) = 1;
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined8 *)(lVar5 + 0x20) = 0;
  FUN_144a450dc(lVar5 + 0x30,&local_520);
  FUN_1449db362(&local_520);
  local_538 = *(wchar_t **)(param_1 + 0x210);
  plVar4 = *(longlong **)(param_1 + 0x218);
  if (plVar4 == (longlong *)0x0) {
    plStack_530 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    plStack_530 = plVar4;
  }
  FUN_140a4fe8e(lVar5,&local_538);
  plVar2 = plStack_530;
  if (plStack_530 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_530 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plStack_530)(plStack_530);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
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
  FUN_146a071ac(local_300);
  if ((local_50 ^ (ulonglong)auStack_688) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a09fa2 FUN_146a09fa2 body=970 status=ok
// SIG undefined FUN_146a09fa2(void)

void FUN_146a09fa2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_508 [32];
  undefined1 *local_4e8;
  undefined1 local_4d9;
  undefined8 local_4d8;
  longlong *local_4d0;
  undefined8 local_4c8;
  longlong *local_4c0;
  undefined8 local_4b8;
  longlong *local_4b0;
  undefined8 local_4a8;
  longlong *local_4a0;
  undefined8 local_498;
  longlong *plStack_490;
  undefined1 local_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined1 local_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined1 local_440;
  undefined1 local_438 [144];
  undefined1 local_3a8 [24];
  undefined8 local_390;
  undefined8 uStack_388;
  undefined1 local_380;
  undefined1 local_378 [144];
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined1 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined1 local_128 [8];
  undefined1 local_120 [24];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined1 local_f0 [160];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_508;
  FUN_146a0fdce(param_1,param_1 + 0x210,0);
  FUN_146a0fdce(param_1,param_1 + 0x220,1);
  FUN_140767c14(param_1,local_128,0xffffffff);
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2d8 = 1;
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 1;
  FUN_144a450dc(local_f0,&local_2d0);
  FUN_1449db362(&local_2d0);
  FUN_1407679b0(&local_2e8);
  FUN_145aafb3e(local_3a8);
  local_468 = 0;
  uStack_460 = 0;
  local_458 = 1;
  local_450 = 0;
  uStack_448 = 0;
  local_390 = 0;
  uStack_388 = 0;
  local_380 = 1;
  FUN_144a450dc(local_378,&local_450);
  FUN_1449db362(&local_450);
  local_4c8 = *(undefined8 *)(param_1 + 0x210);
  plVar4 = *(longlong **)(param_1 + 0x218);
  if (plVar4 == (longlong *)0x0) {
    local_4c0 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_4c0 = plVar4;
  }
  uVar6 = FUN_145aaf878(local_3a8,&local_4c8);
  uVar6 = FUN_145aaf822(&local_2e8,uVar6);
  FUN_145aafb3e(&local_468);
  local_498 = 0;
  plStack_490 = (longlong *)0x0;
  local_488 = 1;
  local_480 = 0;
  uStack_478 = 0;
  local_450 = 0;
  uStack_448 = 0;
  local_440 = 1;
  FUN_144a450dc(local_438,&local_480);
  FUN_1449db362(&local_480);
  local_4d8 = *(undefined8 *)(param_1 + 0x220);
  plVar5 = *(longlong **)(param_1 + 0x228);
  if (plVar5 == (longlong *)0x0) {
    local_4d0 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    local_4d0 = plVar5;
  }
  uVar7 = FUN_145aaf878(&local_468,&local_4d8);
  uVar6 = FUN_145aaf822(uVar6,uVar7);
  local_4e8 = &local_4d9;
  FUN_14076837c(&local_498,"SVerticalBox",
                ".\\Runtime/Slate/Private/Framework/MultiBox/SClippingVerticalBox.cpp",0x6a);
  FUN_14076784c(&local_498,&local_4b8,uVar6);
  local_4a8 = local_4b8;
  local_4a0 = local_4b0;
  if (local_4b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_4b0 + 1) = (int)local_4b0[1] + 1;
    UNLOCK();
  }
  FUN_145aaf878(local_120,&local_4a8);
  plVar3 = local_4a0;
  if (local_4a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_4a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_4a0)(local_4a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_4b0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_4b0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_4b0)(local_4b0);
      LOCK();
      piVar2 = (int *)((longlong)local_4b0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_4b0 + 0x10))(local_4b0);
      }
    }
  }
  plVar3 = plStack_490;
  if (plStack_490 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_490 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_490)(plStack_490);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_4d0;
  if (local_4d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_4d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_4d0)(local_4d0);
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
  FUN_140767f30(&local_468);
  plVar5 = local_4c0;
  if (local_4c0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_4c0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_4c0)(local_4c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  FUN_140767f30(local_3a8);
  FUN_14149255e(&local_2e8);
  FUN_140767802(local_128);
  if ((local_50 ^ (ulonglong)auStack_508) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a0a36e FUN_146a0a36e body=90 status=ok
// SIG undefined FUN_146a0a36e(void)

longlong FUN_146a0a36e(longlong param_1,undefined8 *param_2)

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
  plVar5 = *(longlong **)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar3;
  *(longlong *)(param_1 + 0x1b0) = lVar4;
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
  return param_1;
}



// FUNCTION 146a0a3c8 FUN_146a0a3c8 body=29 status=ok
// SIG undefined FUN_146a0a3c8(void)

undefined8 FUN_146a0a3c8(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x20))();
  return param_2;
}



// FUNCTION 146a0a3e6 FUN_146a0a3e6 body=1873 status=ok
// SIG undefined FUN_146a0a3e6(void)

void FUN_146a0a3e6(longlong param_1,longlong *param_2,longlong *param_3,float *param_4,
                  double *param_5)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  undefined8 *local_150;
  float local_144;
  undefined1 local_13d;
  undefined1 local_13c [4];
  longlong *local_138;
  longlong *local_130;
  undefined8 local_128;
  longlong *plStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_100 [16];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar17 = *param_3;
  lVar19 = *(longlong *)(lVar17 + 0x40);
  cVar8 = *(char *)(lVar17 + 0x48);
  dVar6 = param_5[1];
  lVar10 = *(longlong *)(lVar17 + 0x4c);
  dVar7 = *param_5;
  fVar27 = param_4[7];
  fVar26 = param_4[8];
  fVar3 = param_4[9];
  fVar28 = param_4[10];
  fVar4 = param_4[0xc];
  fVar5 = param_4[0xb];
  fVar23 = *param_4;
  fVar25 = param_4[1];
  fVar24 = param_4[2];
  cVar9 = *(char *)(lVar17 + 0x49);
  if ((*(longlong *)(param_1 + 0x2e8) != lVar19) || (*(char *)(param_1 + 0x2f0) != cVar8)) {
    lVar17 = (longlong)*(int *)(*(longlong *)(param_1 + 0x278) + 0x50);
    if (lVar17 != 0) {
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x278) + 0x48);
      lVar20 = 0;
      do {
        plVar15 = *(longlong **)(lVar11 + lVar20);
        if ((plVar15[0x10] == lVar19) && ((char)plVar15[0x11] == cVar8)) {
          plVar12 = *(longlong **)(lVar11 + 8 + lVar20);
          if (plVar12 == (longlong *)0x0) {
            if (plVar15 == (longlong *)0x0) break;
            if (lVar10 != 0) goto LAB_146a0a5eb;
          }
          else {
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
            if (plVar15 == (longlong *)0x0) {
              LOCK();
              *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
              UNLOCK();
              goto LAB_146a0a77b;
            }
            if (lVar10 != 0) {
              LOCK();
              plVar15 = plVar12 + 1;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)*plVar15 == 0) {
                (**(code **)*plVar12)(plVar12);
                LOCK();
                piVar1 = (int *)((longlong)plVar12 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar12 + 0x10))(plVar12);
                }
              }
              goto LAB_146a0a5eb;
            }
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
          }
          local_144 = fVar24;
          FUN_146a0ab38(param_1 + 0x2e8);
          *(longlong *)(param_1 + 0x2e8) = lVar19;
          *(char *)(param_1 + 0x2f0) = cVar8;
          lVar17 = FUN_14001cc68(0xd8,0x10);
          local_118 = 0;
          uStack_110 = 0;
          local_158 = (**(code **)(*plVar15 + 0x20))(plVar15);
          plVar16 = *(longlong **)(param_1 + 0x10);
          if (plVar16 == (longlong *)0x0) goto LAB_146a0a8ce;
          iVar21 = (int)plVar16[1];
          goto LAB_146a0a9db;
        }
        lVar20 = lVar20 + 0x10;
      } while (lVar17 * 0x10 != lVar20);
    }
  }
  goto LAB_146a0a526;
LAB_146a0a8ce:
  local_128 = 0;
  plStack_120 = (longlong *)0x0;
  goto LAB_146a0a8d6;
  while( true ) {
    LOCK();
    iVar18 = (int)plVar16[1];
    bVar22 = iVar21 == iVar18;
    if (bVar22) {
      *(int *)(plVar16 + 1) = iVar21 + 1;
      iVar18 = iVar21;
    }
    iVar21 = iVar18;
    UNLOCK();
    if (bVar22) break;
LAB_146a0a9db:
    if (iVar21 == 0) goto LAB_146a0a8ce;
  }
  local_128 = *(undefined8 *)(param_1 + 8);
  LOCK();
  *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
  UNLOCK();
  LOCK();
  plVar2 = plVar16 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  plStack_120 = plVar16;
  if ((int)*plVar2 == 0) {
    local_13d = local_158;
    (**(code **)*plVar16)(plVar16);
    LOCK();
    piVar1 = (int *)((longlong)plVar16 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    local_158 = local_13d;
    if (*piVar1 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      local_158 = local_13d;
    }
  }
LAB_146a0a8d6:
  local_150 = &local_118;
  FUN_146a00fb6(plVar15,local_100,&local_128,0xffffffff);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_138 = plVar15;
  local_130 = plVar12;
  FUN_146a0ab8a(lVar17,&local_138);
  plVar15 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar15[1] = (longlong)&DAT_100000001;
  *plVar15 = (longlong)&PTR_FUN_149f0b930;
  plVar15[2] = lVar17;
  if ((lVar17 != 0) &&
     (((*(longlong *)(lVar17 + 8) == 0 || (*(longlong *)(lVar17 + 0x10) == 0)) ||
      (*(int *)(*(longlong *)(lVar17 + 0x10) + 8) < 1)))) {
    if (plVar15 == (longlong *)0x0) {
      *(longlong *)(lVar17 + 8) = lVar17;
      plVar16 = *(longlong **)(lVar17 + 0x10);
      if (plVar16 != (longlong *)0x0) {
LAB_146a0a9b3:
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar16 + 0x10))();
        }
        *(longlong **)(lVar17 + 0x10) = plVar15;
        if (plVar15 != (longlong *)0x0) goto LAB_146a0aa82;
      }
    }
    else {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      *(longlong *)(lVar17 + 8) = lVar17;
      if (*(longlong **)(lVar17 + 0x10) != plVar15) {
        LOCK();
        *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
        UNLOCK();
        plVar16 = *(longlong **)(lVar17 + 0x10);
        if (plVar16 != (longlong *)0x0) goto LAB_146a0a9b3;
        *(longlong **)(lVar17 + 0x10) = plVar15;
      }
LAB_146a0aa82:
      LOCK();
      plVar16 = plVar15 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
  }
  *(longlong *)(param_1 + 0x2f8) = lVar17;
  plVar16 = *(longlong **)(param_1 + 0x300);
  if (plVar15 == plVar16) {
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar15 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          lVar17 = *plVar15;
          goto LAB_146a0aaf4;
        }
      }
    }
  }
  else {
    *(longlong **)(param_1 + 0x300) = plVar15;
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      plVar15 = plVar16 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          lVar17 = *plVar16;
          plVar15 = plVar16;
LAB_146a0aaf4:
          (**(code **)(lVar17 + 0x10))(plVar15);
        }
      }
    }
  }
  fVar24 = local_144;
  if (plVar12 != (longlong *)0x0) {
LAB_146a0a77b:
    LOCK();
    plVar15 = plVar12 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    local_144 = fVar24;
    if ((int)*plVar15 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
    LOCK();
    plVar15 = plVar12 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    fVar24 = local_144;
    if ((int)*plVar15 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      fVar24 = local_144;
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        fVar24 = local_144;
      }
    }
  }
LAB_146a0a526:
  lVar17 = *(longlong *)(param_1 + 0x278);
  bVar22 = *(char *)(lVar17 + 0x68) != '\x01';
  if (!bVar22) {
    fVar25 = fVar23;
  }
  fVar23 = 1.0 / (fVar27 * fVar28 - fVar3 * fVar26);
  if (bVar22) {
    fVar27 = fVar27 * fVar23;
    fVar23 = -fVar26 * fVar23;
    fVar26 = -fVar5 * fVar23 - fVar4 * fVar27;
    fVar27 = (float)dVar7 * fVar23 + fVar27 * (float)dVar6;
  }
  else {
    fVar27 = -fVar3 * fVar23;
    fVar28 = fVar28 * fVar23;
    fVar26 = -fVar5 * fVar28 - fVar4 * fVar27;
    fVar27 = (float)dVar7 * fVar28 + fVar27 * (float)dVar6;
  }
  *(uint *)(param_1 + 0x30c) = (uint)bVar22;
  *(undefined4 *)(param_1 + 0x308) = 0xffffffff;
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    if ((longlong)*(int *)(lVar17 + 0x50) != 0) {
      iVar21 = 1;
      lVar19 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar17 + 0x48) + lVar19) == *param_2) {
          iVar18 = iVar21 + -1;
          iVar13 = FUN_146a01f32(lVar17,iVar18,local_13c);
          if (cVar9 != '\0') goto LAB_146a0a74e;
          if (iVar21 == 0) goto LAB_146a0a5eb;
          cVar8 = *(char *)(*param_2 + 0x88);
          if (cVar8 != '\x03') {
            iVar14 = iVar18;
            if (*(char *)(*param_2 + 0x9d) == '\x01') {
              if (cVar8 == '\x05') goto LAB_146a0a76b;
            }
            else if (fVar27 + fVar26 < fVar24 * fVar25 * 0.5) goto LAB_146a0a76b;
          }
          iVar14 = iVar21;
          goto LAB_146a0a76b;
        }
        iVar21 = iVar21 + 1;
        lVar19 = lVar19 + 0x10;
      } while ((longlong)*(int *)(lVar17 + 0x50) * 0x10 != lVar19);
    }
    iVar18 = -1;
    iVar13 = FUN_146a01f32(lVar17,0xffffffff,local_13c);
    if (cVar9 != '\0') {
LAB_146a0a74e:
      iVar14 = *(int *)(lVar17 + 0x50);
      if ((0 < iVar14 && iVar18 == iVar14 + -1) ||
         (bVar22 = iVar13 < iVar14, iVar14 = iVar13, -1 < iVar13 && bVar22)) {
LAB_146a0a76b:
        *(int *)(param_1 + 0x308) = iVar14;
      }
    }
  }
LAB_146a0a5eb:
  plVar15 = (longlong *)param_2[1];
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar15 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  plVar15 = (longlong *)param_3[1];
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar15 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a0ab38 FUN_146a0ab38 body=82 status=ok
// SIG undefined FUN_146a0ab38(void)

void FUN_146a0ab38(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  plVar3 = (longlong *)param_1[3];
  if (plVar3 != (longlong *)0x0) {
    param_1[3] = 0;
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
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  return;
}



// FUNCTION 146a0ab8a FUN_146a0ab8a body=248 status=ok
// SIG undefined FUN_146a0ab8a(void)

undefined8 * FUN_146a0ab8a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  local_58 = 0;
  FUN_146a0eb42();
  *param_1 = &PTR_FUN_149f094c0;
  param_1[0x17] = *param_2;
  lVar3 = param_2[1];
  param_1[0x18] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[0x19] = *param_3;
  lVar3 = param_3[1];
  param_1[0x1a] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a0ac84 FUN_146a0ac84 body=278 status=ok
// SIG undefined FUN_146a0ac84(void)

undefined1 * FUN_146a0ac84(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  char cVar5;
  longlong *plVar6;
  
  plVar2 = *(longlong **)(param_4 + 0x78);
  if (plVar2 != (longlong *)0x0) {
    FUN_1469e4aec();
    cVar5 = (**(code **)(*plVar2 + 0x50))(plVar2);
    if (cVar5 != '\0') {
      lVar3 = *(longlong *)(param_4 + 0x78);
      plVar2 = *(longlong **)(param_4 + 0x80);
      if (plVar2 == (longlong *)0x0) {
        if (lVar3 != 0) goto LAB_146a0ad0e;
      }
      else {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
        if (lVar3 == 0) {
          LOCK();
          plVar6 = plVar2 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
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
        else {
LAB_146a0ad0e:
          plVar6 = (longlong *)FUN_14479d2ce(*(longlong *)(param_1 + 0x278) + 0x28);
          if (plVar6 == (longlong *)0x0) {
            cVar5 = '\0';
          }
          else {
            cVar5 = (**(code **)(*plVar6 + 0x2a0))(plVar6);
          }
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            plVar6 = plVar2 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
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
          uVar4 = 1;
          if (cVar5 != '\0') goto LAB_146a0ac9b;
        }
      }
    }
  }
  uVar4 = 0;
LAB_146a0ac9b:
  *param_2 = uVar4;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 146a0ad9a FUN_146a0ad9a body=186 status=ok
// SIG undefined FUN_146a0ad9a(void)

undefined1 *
FUN_146a0ad9a(undefined8 param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 uVar5;
  char cVar6;
  
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
        FUN_146a00c6c(param_1);
        uVar5 = 1;
        goto LAB_146a0adb1;
      }
    }
  }
  uVar5 = 0;
LAB_146a0adb1:
  *param_2 = uVar5;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 146a0ae60 FUN_146a0ae60 body=647 status=ok
// SIG undefined FUN_146a0ae60(void)

undefined1 * FUN_146a0ae60(undefined1 *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 auStack_418 [32];
  undefined8 local_3f8;
  longlong local_3f0;
  undefined1 local_3e8 [32];
  longlong local_3c8;
  longlong *local_3c0;
  longlong local_3b8;
  longlong *local_3b0;
  undefined1 local_3a8 [8];
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined1 local_388;
  undefined1 local_380 [136];
  undefined4 local_2f8;
  undefined1 local_2f4;
  undefined1 local_2f0 [8];
  undefined1 local_2e8 [288];
  undefined1 *local_1c8;
  int local_1c0;
  undefined1 local_190 [352];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_418;
  (**(code **)(*DAT_14c98e618 + 0x98))();
  if (local_3b8 != 0) {
    FUN_144a8759e(local_190);
    plVar4 = local_3b0;
    plVar1 = DAT_14c98e618;
    uVar3 = DAT_14c96b238;
    if (local_3b0 == (longlong *)0x0) {
      local_3c8 = local_3b8;
      local_3c0 = (longlong *)0x0;
      FUN_1407c4cd2(DAT_14c98e618,&local_3c8,local_190,DAT_14c96b238);
    }
    else {
      LOCK();
      *(int *)(local_3b0 + 1) = (int)local_3b0[1] + 1;
      UNLOCK();
      local_3c8 = local_3b8;
      local_3c0 = local_3b0;
      LOCK();
      *(int *)(local_3b0 + 1) = (int)local_3b0[1] + 1;
      UNLOCK();
      FUN_1407c4cd2(plVar1,&local_3c8,local_190,uVar3);
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
    cVar5 = FUN_144b010fc(local_190);
    if (cVar5 != '\0') {
      FUN_1403d040a(local_3e8,local_190);
      FUN_1469496d6(local_3e8,local_2f0,param_2);
      if (0 < local_1c0) {
        local_3a8[0] = 1;
        local_388 = 0;
        local_3a0 = 0;
        uStack_398 = 0;
        memset(local_380,0,0x88);
        if (local_1c8 == (undefined1 *)0x0) {
          local_1c8 = local_2e8;
        }
        local_2f8 = 0x20702;
        local_2f4 = 0;
        local_3f8 = *(undefined8 *)(local_1c8 + (ulonglong)(local_1c0 - 1) * 0x48 + 0x38);
        local_3f0 = *(longlong *)(local_1c8 + (ulonglong)(local_1c0 - 1) * 0x48 + 0x40);
        if (local_3f0 != 0) {
          LOCK();
          *(int *)(local_3f0 + 8) = *(int *)(local_3f0 + 8) + 1;
          UNLOCK();
        }
        uVar6 = FUN_140592b68(local_3a8,&local_3f8,1,0);
        FUN_1403d4c6e(param_1,uVar6);
        FUN_14493db24(local_3a8);
        FUN_1447fa21a(local_2f0);
        FUN_1400cab68(local_3e8);
        FUN_1447fa21a(local_190);
        goto LAB_146a0b096;
      }
      FUN_1447fa21a(local_2f0);
      FUN_1400cab68(local_3e8);
    }
    FUN_1447fa21a(local_190);
  }
  *param_1 = 0;
  param_1[0x20] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  memset(param_1 + 0x28,0,0x88);
  *(undefined4 *)(param_1 + 0xb0) = 0x20702;
  param_1[0xb4] = 0;
LAB_146a0b096:
  if (local_3b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_3b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_3b0)(local_3b0);
      LOCK();
      piVar2 = (int *)((longlong)local_3b0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_3b0 + 0x10))(local_3b0);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_418) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a0b0e8 FUN_146a0b0e8 body=127 status=ok
// SIG undefined FUN_146a0b0e8(void)

undefined1 * FUN_146a0b0e8(longlong param_1,undefined1 *param_2,undefined8 param_3,char *param_4)

{
  if (*param_4 != '\0') {
    FUN_146a0b168(param_1);
  }
  if (*(longlong *)(param_1 + 0x458) != 0) {
    FUN_146a68be4();
  }
  if (*param_4 == '\x01') {
    FUN_146a0ae60(param_2,4);
  }
  else {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  return param_2;
}



// FUNCTION 146a0b168 FUN_146a0b168 body=150 status=ok
// SIG undefined FUN_146a0b168(void)

void FUN_146a0b168(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x458);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_140e82300();
    local_48 = (longlong *)*plVar2;
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 8))();
    }
    local_40 = (undefined4)plVar2[1];
    local_38 = 1;
    local_30 = 0;
    uStack_28 = 0;
    FUN_146a5456e(lVar1,&local_48);
    FUN_1449db362(&local_30);
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a0b200 FUN_146a0b200 body=378 status=ok
// SIG undefined FUN_146a0b200(void)

void FUN_146a0b200(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_1e8 [40];
  undefined1 local_1c0;
  undefined1 local_1bf;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  longlong *plStack_1a0;
  undefined8 local_190;
  longlong *local_188;
  undefined1 local_180 [352];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  cVar5 = FUN_144b010fc(param_3);
  if (((cVar5 != '\0') && (cVar5 = FUN_146a0b37c(param_1), cVar5 != '\0')) &&
     (*(longlong *)(param_1 + 0x458) != 0)) {
    FUN_1428668da(param_3,&local_190);
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_146a0b2d0:
      local_1a8 = 0;
      plStack_1a0 = (longlong *)0x0;
      FUN_140d95bee(param_3,local_180);
    }
    else {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) goto LAB_146a0b2d0;
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar7 = iVar6 == iVar4;
        if (bVar7) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar7);
      local_1a8 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      plStack_1a0 = plVar3;
      FUN_140d95bee(param_3,local_180);
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
    cVar5 = FUN_144b010fc(local_180);
    if (cVar5 == '\0') {
      local_1c0 = 0;
    }
    else {
      local_1c0 = FUN_1403d1f4c(local_180,local_190);
    }
    local_1bf = 1;
    local_1b8 = 0;
    uStack_1b0 = 0;
    FUN_140a52028(*(longlong *)(param_1 + 0x458) + 0x3a,*(longlong *)(param_1 + 0x458),&local_1c0);
    FUN_1449db362(&local_1b8);
    FUN_1447fa21a(local_180);
    if (local_188 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_188 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_188)(local_188);
        LOCK();
        piVar2 = (int *)((longlong)local_188 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_188 + 0x10))(local_188);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a0b37c FUN_146a0b37c body=310 status=ok
// SIG undefined FUN_146a0b37c(void)

undefined8 FUN_146a0b37c(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14c98eb20 != (longlong *)0x0 && DAT_14c98eb28 != 0) &&
     (cVar3 = (**(code **)(*DAT_14c98eb20 + 0x30))(), cVar3 != '\0')) {
    plVar5 = DAT_14c98eb20;
    if (DAT_14c98eb28 == 0) {
      plVar5 = (longlong *)0x0;
    }
    DAT_14c98eb18 = (**(code **)(*plVar5 + 0x58))();
  }
  iVar2 = DAT_14c98eb18;
  local_38 = 0;
  local_30 = *(int *)(*(longlong *)(param_1 + 0x278) + 0x50);
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x278) + 0x48);
  if (local_30 == 0) {
    local_2c = 0;
  }
  else {
    FUN_146a3d984(&local_38,local_30);
    FUN_146a27559(local_38,uVar1);
    if ((longlong)local_30 != 0) {
      lVar8 = 0;
      uVar7 = 0;
      do {
        cVar3 = *(char *)(*(longlong *)(local_38 + lVar8) + 0x88);
        if ((cVar3 != '\x03') && (cVar3 != '\x05')) {
          uVar7 = uVar7 + 1;
        }
        lVar8 = lVar8 + 0x10;
        iVar6 = local_30;
      } while ((longlong)local_30 << 4 != lVar8);
      goto LAB_146a0b40e;
    }
  }
  uVar7 = 0;
  iVar6 = 0;
LAB_146a0b40e:
  FUN_146a2710f(local_38,iVar6);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  uVar4 = 1;
  if (1 < (int)uVar7) {
    uVar4 = (ulonglong)uVar7;
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(uVar4 >> 8),iVar2 < (int)uVar4);
}



// FUNCTION 146a0b4b4 FUN_146a0b4b4 body=328 status=ok
// SIG undefined FUN_146a0b4b4(void)

undefined1 *
FUN_146a0b4b4(undefined8 param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [184];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_14171f816();
  FUN_14493db24(local_e8);
  lVar3 = *(longlong *)(param_4 + 0x20);
  plVar4 = *(longlong **)(param_4 + 0x30);
  if (plVar4 == (longlong *)0x0) {
    if (lVar3 != DAT_14c964e78) {
      if (lVar3 != DAT_14c964ea8) goto LAB_146a0b56f;
      goto LAB_146a0b5df;
    }
LAB_146a0b5f1:
    uVar6 = 5;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    lVar5 = DAT_14c964e78;
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
    if (lVar3 == lVar5) goto LAB_146a0b5f1;
    lVar3 = *(longlong *)(param_4 + 0x20);
    plVar4 = *(longlong **)(param_4 + 0x30);
    lVar5 = DAT_14c964ea8;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      lVar5 = DAT_14c964ea8;
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
    if (lVar3 != lVar5) {
LAB_146a0b56f:
      *param_2 = 0;
      param_2[0x20] = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      memset(param_2 + 0x28,0,0x88);
      *(undefined4 *)(param_2 + 0xb0) = 0x20702;
      param_2[0xb4] = 0;
      goto LAB_146a0b5a1;
    }
LAB_146a0b5df:
    uVar6 = 4;
  }
  FUN_146a0ae60(param_2,uVar6);
LAB_146a0b5a1:
  if ((local_30 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a0b5fe FUN_146a0b5fe body=238 status=ok
// SIG undefined FUN_146a0b5fe(void)

undefined1 * FUN_146a0b5fe(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [8];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c0;
  undefined1 local_b8 [136];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if (*(char *)(param_1 + 0x488) == '\x01') {
    cVar1 = FUN_144a7c5f6(param_1 + 0x478);
    if (cVar1 != '\0') {
      FUN_146a0b6ee(param_1);
      local_e0[0] = 1;
      local_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      memset(local_b8,0,0x88);
      local_30 = 0x20702;
      FUN_1403d4924(param_2,local_e0);
      FUN_14493db24(local_e0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a0b6ee FUN_146a0b6ee body=373 status=ok
// SIG undefined FUN_146a0b6ee(void)

void FUN_146a0b6ee(longlong param_1,ushort param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [32];
  longlong *local_88 [2];
  longlong *local_78;
  longlong *local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined1 local_4f;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (0x1f < param_2) {
    local_38[0] = 0;
    local_38[1] = 0;
    FUN_140002184();
    if ((*(longlong *)(param_1 + 0x458) != 0) &&
       (*(longlong **)(param_1 + 0x468) != (longlong *)0x0)) {
      local_50 = DAT_14c96b238;
      local_4f = 1;
      local_48 = 0;
      uStack_40 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x468) + 0x1c0))();
      uVar3 = DAT_14c98e618;
      local_78 = *(longlong **)(param_1 + 0x458);
      local_70 = *(longlong **)(param_1 + 0x460);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
      }
      FUN_1410a3d58(uVar3,0,&local_78,2);
      plVar4 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_70 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      uVar3 = *(undefined8 *)(param_1 + 0x458);
      FUN_140009b9a(local_88,local_38);
      FUN_14023423e(&local_78,local_88);
      local_68 = 1;
      local_60 = 0;
      uStack_58 = 0;
      FUN_146a5456e(uVar3,&local_78);
      FUN_1449db362(&local_60);
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 0x10))();
      }
      if (local_88[0] != (longlong *)0x0) {
        (**(code **)(*local_88[0] + 0x10))();
      }
    }
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a0b864 FUN_146a0b864 body=2952 status=ok
// SIG undefined FUN_146a0b864(void)

void FUN_146a0b864(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  ushort uVar3;
  ushort uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong **pplVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  undefined1 local_1d0;
  undefined8 *local_1c8;
  longlong local_1c0;
  int local_1b4;
  longlong local_1b0;
  longlong **local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  longlong *local_190;
  longlong *local_188;
  undefined8 local_180;
  undefined8 local_178;
  longlong local_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  longlong local_140;
  longlong *local_138;
  longlong *local_130;
  longlong local_128;
  longlong *local_120;
  longlong *local_118;
  undefined4 local_110;
  longlong *local_108;
  undefined8 uStack_100;
  longlong **local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  longlong local_c0;
  int local_b8;
  undefined4 local_b4;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  ulonglong uStack_90;
  longlong *local_88;
  longlong **pplStack_80;
  ulonglong local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (((*(char *)(param_1 + 0x3b0) == '\0') && ((int)param_2 != 0)) &&
     (*(char *)(param_1 + 0x488) != '\0')) {
    *(undefined1 *)(param_1 + 0x3b0) = 1;
    uStack_100 = (longlong *)(param_1 + 800);
    local_108 = (longlong *)&DAT_100000000;
    local_f8 = (longlong **)&DAT_ffffffff;
    uStack_f0 = uStack_f0 & 0xffffffff00000000;
    local_180 = param_2;
    if (*(int *)(param_1 + 0x338) != 0) {
      FUN_1449c0562(&local_108);
    }
    local_98 = local_f8;
    pplVar9 = local_98;
    uStack_90 = uStack_f0;
    local_a8 = local_108;
    plStack_a0 = uStack_100;
    local_98._4_4_ = (int)((ulonglong)local_f8 >> 0x20);
    local_b0 = (longlong *)(param_1 + 0x310);
    if (local_98._4_4_ < (int)uStack_100[3]) {
      iVar19 = local_98._4_4_;
      local_98 = pplVar9;
      do {
        lVar16 = *local_b0;
        lVar12 = (longlong)iVar19;
        local_c0 = 0;
        iVar19 = *(int *)(lVar16 + 0x18 + lVar12 * 0x28);
        uVar5 = *(undefined8 *)(lVar16 + 0x10 + lVar12 * 0x28);
        local_b8 = iVar19;
        if (iVar19 == 0) {
          local_b4 = 0;
        }
        else {
          FUN_1406fd828(&local_c0,iVar19,0);
          FUN_1406fd7df(local_c0,uVar5,iVar19);
        }
        plVar15 = (longlong *)(lVar16 + lVar12 * 0x28);
        FUN_14697e77c(*plVar15,&local_108);
        plVar13 = local_108;
        if ((int)uStack_100 == 0) {
          plVar13 = (longlong *)&DAT_149dfb77a;
        }
        lVar16 = 0;
        while( true ) {
          uVar3 = *(ushort *)((longlong)plVar13 + lVar16);
          uVar18 = (uint)uVar3;
          uVar4 = *(ushort *)((longlong)L"SMenuEntryBlock" + lVar16);
          uVar17 = (uint)uVar4;
          if (uVar3 != uVar4) {
            if ((uVar4 | uVar3) < 0x80) {
              uVar18 = (uint)(byte)(&DAT_149e05da0)[uVar3];
              uVar17 = (uint)(byte)(&DAT_149e05da0)[uVar4];
              if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_146a0ba64;
            }
            iVar19 = uVar18 - uVar17;
            goto LAB_146a0ba91;
          }
          if (uVar3 == 0) break;
LAB_146a0ba64:
          lVar16 = lVar16 + 2;
        }
        iVar19 = 0;
LAB_146a0ba91:
        if (local_108 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (iVar19 == 0) {
          if (local_b8 == 0) {
            plVar13 = (longlong *)FUN_140e82300();
          }
          else {
            plVar13 = (longlong *)((longlong)(local_b8 + -1) * 0x10 + local_c0);
          }
          local_d0 = (longlong *)*plVar13;
          if (local_d0 != (longlong *)0x0) {
            (**(code **)(*local_d0 + 8))();
          }
          local_c8 = (undefined4)plVar13[1];
          cVar10 = FUN_144a7c5f6(&local_d0);
          if (cVar10 == '\0') {
            plVar13 = (longlong *)plVar15[1];
            lVar16 = *plVar15 + -8;
            if (*plVar15 == 0) {
              lVar16 = 0;
            }
            if (plVar13 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
              UNLOCK();
            }
            lVar12 = *(longlong *)(lVar16 + 0x280);
            plVar6 = *(longlong **)(lVar16 + 0x288);
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
              UNLOCK();
            }
            if (((*(char *)(lVar12 + 0x9c) == '\x01') && (*(char *)(lVar12 + 0x88) == '\x04')) &&
               ((*(char *)(lVar12 + 0x180) == '\x01' && (*(char *)(lVar12 + 0x181) == '\x01')))) {
              plVar7 = (longlong *)plVar15[1];
              lVar16 = *plVar15 + -8;
              if (*plVar15 == 0) {
                lVar16 = 0;
              }
              if (plVar7 == (longlong *)0x0) {
                FUN_146a0c3ee(lVar16,&local_e0);
              }
              else {
                LOCK();
                *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
                UNLOCK();
                FUN_146a0c3ee(lVar16,&local_e0);
                LOCK();
                plVar15 = plVar7 + 1;
                *(int *)plVar15 = (int)*plVar15 + -1;
                UNLOCK();
                if ((int)*plVar15 == 0) {
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
              FUN_14697e77c(local_e0,&local_108);
              plVar15 = local_108;
              if ((int)uStack_100 == 0) {
                plVar15 = (longlong *)&DAT_149dfb77a;
              }
              lVar16 = 0;
              while( true ) {
                uVar3 = *(ushort *)((longlong)plVar15 + lVar16);
                uVar18 = (uint)uVar3;
                uVar4 = *(ushort *)((longlong)L"SMultiBoxWidget" + lVar16);
                uVar17 = (uint)uVar4;
                if (uVar3 != uVar4) {
                  if ((uVar4 | uVar3) < 0x80) {
                    uVar18 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                    uVar17 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_146a0bc5e;
                  }
                  iVar19 = uVar18 - uVar17;
                  goto LAB_146a0bebb;
                }
                if (uVar3 == 0) break;
LAB_146a0bc5e:
                lVar16 = lVar16 + 2;
              }
              iVar19 = 0;
LAB_146a0bebb:
              if (local_108 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              plVar15 = local_d8;
              lVar16 = local_e0;
              if (iVar19 == 0) {
                local_1b0 = local_e0;
                if (local_d8 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
                  UNLOCK();
                }
                FUN_146a0b864(local_e0,(int)local_180 + -1);
                local_1a8 = (longlong **)(lVar16 + 800);
                local_88 = (longlong *)&DAT_100000000;
                local_78 = 0xffffffff;
                uStack_70 = 0;
                pplStack_80 = local_1a8;
                if (*(int *)(lVar16 + 0x338) == 0) {
                  local_1b4 = 0;
                }
                else {
                  FUN_1449c0562(&local_88);
                  local_1b4 = *(int *)(lVar16 + 0x338);
                }
                local_1a0 = plVar15;
                local_188 = (longlong *)(lVar16 + 0x310);
                uStack_e8 = CONCAT44(uStack_6c,uStack_70);
                uStack_f0 = local_78;
                uVar8 = uStack_f0;
                uStack_100 = local_88;
                local_f8 = pplStack_80;
                uStack_f0._4_4_ = (int)(local_78 >> 0x20);
                iVar19 = uStack_f0._4_4_;
                local_108 = local_188;
                if ((uStack_f0._4_4_ != local_1b4) || (uStack_f0 = uVar8, pplStack_80 != local_1a8))
                {
                  do {
                    uStack_f0 = uVar8;
                    local_1c0 = *local_108;
                    lVar16 = local_1c0 + (longlong)iVar19 * 0x28;
                    local_190 = (longlong *)(lVar16 + 0x10);
                    iVar11 = *(int *)(lVar16 + 0x18);
                    if (iVar11 == 0) {
                      plVar15 = (longlong *)FUN_140e82300();
                    }
                    else {
                      plVar15 = (longlong *)((longlong)(iVar11 + -1) * 0x10 + *local_190);
                    }
                    local_118 = (longlong *)*plVar15;
                    if (local_118 != (longlong *)0x0) {
                      (**(code **)(*local_118 + 8))();
                    }
                    local_110 = (undefined4)plVar15[1];
                    cVar10 = FUN_144a7c5f6(&local_118);
                    if (cVar10 == '\0') {
                      plVar15 = (longlong *)(local_1c0 + (longlong)iVar19 * 0x28);
                      lVar16 = *(longlong *)(local_1b0 + 0x458);
                      plVar7 = *(longlong **)(local_1b0 + 0x460);
                      if (plVar7 == (longlong *)0x0) {
                        if (*plVar15 != lVar16) goto LAB_146a0c0b5;
                      }
                      else {
                        LOCK();
                        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
                        UNLOCK();
                        lVar12 = *plVar15;
                        LOCK();
                        plVar2 = plVar7 + 1;
                        *(int *)plVar2 = (int)*plVar2 + -1;
                        UNLOCK();
                        if ((int)*plVar2 == 0) {
                          local_1c0 = lVar16;
                          local_198 = plVar7;
                          (**(code **)*plVar7)();
                          LOCK();
                          piVar1 = (int *)((longlong)local_198 + 0xc);
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          lVar16 = local_1c0;
                          if (*piVar1 == 0) {
                            (**(code **)(*local_198 + 0x10))();
                            lVar16 = local_1c0;
                          }
                        }
                        if (lVar12 != lVar16) {
LAB_146a0c0b5:
                          plVar7 = (longlong *)plVar15[1];
                          lVar16 = *plVar15 + -8;
                          if (*plVar15 == 0) {
                            lVar16 = 0;
                          }
                          if (plVar7 != (longlong *)0x0) {
                            LOCK();
                            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
                            UNLOCK();
                          }
                          local_128 = *(longlong *)(lVar16 + 0x280);
                          local_120 = *(longlong **)(lVar16 + 0x288);
                          if (local_120 != (longlong *)0x0) {
                            LOCK();
                            *(int *)(local_120 + 1) = (int)local_120[1] + 1;
                            UNLOCK();
                          }
                          if (plVar7 != (longlong *)0x0) {
                            LOCK();
                            plVar15 = plVar7 + 1;
                            *(int *)plVar15 = (int)*plVar15 + -1;
                            UNLOCK();
                            if ((int)*plVar15 == 0) {
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
                          if (*(char *)(local_128 + 0x9c) == '\x01') {
                            plVar15 = (longlong *)FUN_14001cc68(0x38,0x10);
                            plVar15[1] = (longlong)&DAT_100000001;
                            *plVar15 = (longlong)&PTR_FUN_149f0b950;
                            local_138 = plVar15 + 2;
                            plVar15[2] = 0;
                            plVar15[3] = 0;
                            plVar15[4] = 0;
                            plVar15[5] = 0;
                            plVar15[6] = 0;
                            *(undefined1 *)(plVar15 + 6) = DAT_14c96b1e1;
                            local_130 = plVar15;
                            if (plVar15 != (longlong *)0x0) {
                              LOCK();
                              *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                              UNLOCK();
                              LOCK();
                              plVar7 = plVar15 + 1;
                              *(int *)plVar7 = (int)*plVar7 + -1;
                              UNLOCK();
                              if ((int)*plVar7 == 0) {
                                (**(code **)*plVar15)(plVar15);
                                LOCK();
                                piVar1 = (int *)((longlong)plVar15 + 0xc);
                                *piVar1 = *piVar1 + -1;
                                UNLOCK();
                                if (*piVar1 == 0) {
                                  (**(code **)(*plVar15 + 0x10))(plVar15);
                                }
                              }
                            }
                            plVar15 = local_138;
                            iVar19 = (int)local_138[1];
                            *(uint *)(local_138 + 1) = iVar19 + 1U;
                            if (*(uint *)((longlong)local_138 + 0xc) < iVar19 + 1U) {
                              FUN_14001d63e(local_138,iVar19);
                            }
                            lVar16 = *plVar15;
                            *(longlong **)(lVar16 + (longlong)iVar19 * 0x10) = local_d0;
                            if (local_d0 != (longlong *)0x0) {
                              (**(code **)(*local_d0 + 8))();
                            }
                            *(undefined4 *)(lVar16 + (longlong)iVar19 * 0x10 + 8) = local_c8;
                            FUN_14001cd44(local_138,local_190);
                            local_88 = &local_128;
                            pplStack_80 = &local_138;
                            FUN_146a3d390(param_1 + 0x360,local_64,&local_88);
                            plVar15 = local_130;
                            if (local_130 != (longlong *)0x0) {
                              LOCK();
                              plVar7 = local_130 + 1;
                              *(int *)plVar7 = (int)*plVar7 + -1;
                              UNLOCK();
                              if ((int)*plVar7 == 0) {
                                (**(code **)*local_130)(local_130);
                                LOCK();
                                piVar1 = (int *)((longlong)plVar15 + 0xc);
                                *piVar1 = *piVar1 + -1;
                                UNLOCK();
                                if (*piVar1 == 0) {
                                  (**(code **)(*plVar15 + 0x10))(plVar15);
                                }
                              }
                            }
                          }
                          plVar15 = local_120;
                          if (local_120 != (longlong *)0x0) {
                            LOCK();
                            plVar7 = local_120 + 1;
                            *(int *)plVar7 = (int)*plVar7 + -1;
                            UNLOCK();
                            if ((int)*plVar7 == 0) {
                              (**(code **)*local_120)(local_120);
                              LOCK();
                              piVar1 = (int *)((longlong)plVar15 + 0xc);
                              *piVar1 = *piVar1 + -1;
                              UNLOCK();
                              if (*piVar1 == 0) {
                                (**(code **)(*plVar15 + 0x10))(plVar15);
                              }
                            }
                          }
                        }
                      }
                    }
                    if (local_118 != (longlong *)0x0) {
                      (**(code **)(*local_118 + 0x10))();
                    }
                    uStack_f0 = CONCAT44(uStack_f0._4_4_,(uint)uStack_f0 & ~uStack_100._4_4_);
                    FUN_1449c0562(&uStack_100);
                    iVar19 = uStack_f0._4_4_;
                    uVar8 = uStack_f0;
                  } while (local_108 != local_188 ||
                           (local_f8 != local_1a8 || uStack_f0._4_4_ != local_1b4));
                }
                plVar15 = local_1a0;
                if (local_1a0 != (longlong *)0x0) {
                  LOCK();
                  plVar7 = local_1a0 + 1;
                  *(int *)plVar7 = (int)*plVar7 + -1;
                  UNLOCK();
                  if ((int)*plVar7 == 0) {
                    (**(code **)*local_1a0)(local_1a0);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar15 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar15 + 0x10))(plVar15);
                    }
                  }
                }
              }
              plVar15 = local_d8;
              if (local_d8 != (longlong *)0x0) {
                LOCK();
                plVar7 = local_d8 + 1;
                *(int *)plVar7 = (int)*plVar7 + -1;
                UNLOCK();
                if ((int)*plVar7 == 0) {
                  (**(code **)*local_d8)(local_d8);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar15 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar15 + 0x10))(plVar15);
                  }
                }
              }
            }
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              plVar15 = plVar6 + 1;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)*plVar15 == 0) {
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
            if (plVar13 != (longlong *)0x0) {
              LOCK();
              plVar15 = plVar13 + 1;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)*plVar15 == 0) {
                (**(code **)*plVar13)(plVar13);
                LOCK();
                piVar1 = (int *)((longlong)plVar13 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar13 + 0x10))(plVar13);
                }
              }
            }
          }
          if (local_d0 != (longlong *)0x0) {
            (**(code **)(*local_d0 + 0x10))();
          }
        }
        FUN_1401b9920(local_c0,local_b8);
        if (local_c0 != 0) {
          FUN_1400020a8();
        }
        local_98 = (longlong **)CONCAT44(local_98._4_4_,(uint)local_98 & ~local_a8._4_4_);
        FUN_1449c0562(&local_a8);
        iVar19 = local_98._4_4_;
        pplVar9 = local_98;
      } while (local_98._4_4_ < (int)plStack_a0[3]);
    }
    local_98 = pplVar9;
    plVar15 = (longlong *)(param_1 + 0x360);
    lVar16 = param_1 + 0x370;
    local_108 = (longlong *)0x100000000;
    local_f8 = (longlong **)0xffffffff;
    uStack_f0 = uStack_f0 & 0xffffffff00000000;
    uStack_100 = (longlong *)lVar16;
    if (*(int *)(param_1 + 0x388) == 0) {
      iVar19 = 0;
    }
    else {
      FUN_1449c0562(&local_108);
      iVar19 = *(int *)(param_1 + 0x388);
    }
    uStack_90 = uStack_f0;
    local_98 = local_f8;
    uVar5 = local_98;
    local_a8 = local_108;
    plStack_a0 = uStack_100;
    local_98._4_4_ = (int)((ulonglong)local_f8 >> 0x20);
    iVar11 = local_98._4_4_;
    local_b0 = plVar15;
    if ((local_98._4_4_ != iVar19) || (local_98 = local_f8, uStack_100 != (longlong *)lVar16)) {
      do {
        local_98 = (longlong **)uVar5;
        lVar12 = *local_b0;
        lVar14 = (longlong)iVar11;
        local_148 = *(undefined8 *)(lVar12 + lVar14 * 0x28);
        local_140 = *(longlong *)(lVar12 + 8 + lVar14 * 0x28);
        if (local_140 != 0) {
          LOCK();
          *(int *)(local_140 + 8) = *(int *)(local_140 + 8) + 1;
          UNLOCK();
        }
        cVar10 = FUN_146a05190(param_1,&local_148);
        if (cVar10 == '\0') {
          local_158 = 0;
          uStack_150 = 0;
          local_168 = *(undefined8 *)(param_1 + 0x2a8);
          local_160 = *(longlong *)(param_1 + 0x2b0);
          if (local_160 != 0) {
            LOCK();
            *(int *)(local_160 + 8) = *(int *)(local_160 + 8) + 1;
            UNLOCK();
          }
          local_178 = *(undefined8 *)(param_1 + 0x298);
          local_170 = *(longlong *)(param_1 + 0x2a0);
          if (local_170 != 0) {
            LOCK();
            *(int *)(local_170 + 8) = *(int *)(local_170 + 8) + 1;
            UNLOCK();
          }
          local_1c8 = &local_158;
          local_1d0 = 0;
          local_1d8 = 0xffffffff;
          FUN_146a05236(param_1,*(undefined8 *)(lVar12 + lVar14 * 0x28),&local_178,&local_168);
        }
        local_98 = (longlong **)CONCAT44(local_98._4_4_,(uint)local_98 & ~local_a8._4_4_);
        FUN_1449c0562(&local_a8);
        iVar11 = local_98._4_4_;
        uVar5 = local_98;
      } while (local_b0 != plVar15 || (plStack_a0 != (longlong *)lVar16 || local_98._4_4_ != iVar19)
              );
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a0c3ee FUN_146a0c3ee body=1435 status=ok
// SIG undefined FUN_146a0c3ee(void)

undefined8 * FUN_146a0c3ee(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong **pplVar5;
  bool bVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined **ppuVar12;
  longlong *plVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8;
  longlong **local_1c0;
  undefined1 local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  longlong local_1a0;
  longlong *local_198;
  longlong *local_190 [2];
  undefined1 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  longlong local_140;
  undefined8 local_138;
  longlong local_130;
  undefined **local_128;
  int local_120;
  longlong *local_c0;
  longlong *local_a8 [2];
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88 [9];
  
  local_88[5] = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar3 = *(longlong *)(param_1 + 0x280);
  plVar4 = *(longlong **)(param_1 + 0x288);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar13 = plVar4 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  plVar13 = *(longlong **)(param_1 + 0x278);
  bVar6 = true;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    lVar14 = 0;
  }
  else {
    iVar9 = (int)plVar13[1];
    lVar14 = 0;
    do {
      if (iVar9 == 0) {
        plVar13 = (longlong *)0x0;
        goto LAB_146a0c490;
      }
      LOCK();
      iVar7 = (int)plVar13[1];
      bVar15 = iVar9 == iVar7;
      if (bVar15) {
        *(int *)(plVar13 + 1) = iVar9 + 1;
        iVar7 = iVar9;
      }
      iVar9 = iVar7;
      UNLOCK();
    } while (!bVar15);
    lVar14 = *(longlong *)(param_1 + 0x270);
    bVar6 = false;
  }
LAB_146a0c490:
  pplVar5 = *(longlong ***)(*(longlong *)(lVar14 + 0x278) + 0x58);
  if (((*(int *)(lVar3 + 0x158) == 0) || (*(longlong **)(lVar3 + 0x150) == (longlong *)0x0)) ||
     (cVar8 = (**(code **)(**(longlong **)(lVar3 + 0x150) + 0x30))(), cVar8 == '\0')) {
    if (((*(int *)(lVar3 + 0x168) != 0) && (*(longlong **)(lVar3 + 0x160) != (longlong *)0x0)) &&
       (cVar8 = (**(code **)(**(longlong **)(lVar3 + 0x160) + 0x30))(), cVar8 != '\0')) {
      if (*(int *)(lVar3 + 0x168) == 0) {
        plVar11 = (longlong *)0x0;
      }
      else {
        plVar11 = *(longlong **)(lVar3 + 0x160);
      }
      (**(code **)(*plVar11 + 0x58))(plVar11,param_2);
      goto LAB_146a0c52b;
    }
    if (*(longlong *)(lVar3 + 0x170) == 0) {
      *param_2 = DAT_14c98dec8;
      lVar3 = DAT_14c98ded0;
      param_2[1] = DAT_14c98ded0;
      if (lVar3 != 0) {
        LOCK();
        piVar1 = (int *)(lVar3 + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      goto LAB_146a0c52b;
    }
    local_158 = 0;
    uStack_150 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_1a8 = 1;
    local_1b0 = 0;
    local_1b8 = 1;
    local_1c8 = 0;
    local_1c0 = pplVar5;
    FUN_1469d0642(&local_128,*(undefined1 *)(lVar3 + 0x198));
    FUN_144a5dc74(local_a8);
    FUN_14023423e(local_190,local_a8);
    local_180 = 1;
    local_178 = 0;
    uStack_170 = 0;
    local_88[4] = 0;
    local_88[2] = 0;
    local_88[3] = 0;
    local_88[0] = 0;
    local_88[1] = 0;
    uVar10 = FUN_140e82300();
    local_1a0 = *(longlong *)(lVar3 + 0x170);
    plVar11 = *(longlong **)(lVar3 + 0x178);
    local_1c0 = local_190;
    local_198 = plVar11;
    if (plVar11 == (longlong *)0x0) {
      local_1c8 = 1;
      FUN_146a0da72(&local_128,&local_1a0,uVar10,local_88);
    }
    else {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      local_1c8 = 1;
      FUN_146a0da72(&local_128,&local_1a0,uVar10,local_88);
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
    }
    FUN_1449db362(&local_178);
    if (local_190[0] != (longlong *)0x0) {
      (**(code **)(*local_190[0] + 0x10))();
    }
    if (local_a8[0] != (longlong *)0x0) {
      (**(code **)(*local_a8[0] + 0x10))();
    }
  }
  else {
    if ((*(longlong *)(lVar3 + 0x80) == 0) ||
       (plVar11 = *(longlong **)(lVar14 + 0x280), plVar11 == (longlong *)0x0)) {
LAB_146a0c789:
      local_90 = 0;
    }
    else {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
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
      local_1a0 = 0;
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
      if (local_1a0 == 0) goto LAB_146a0c789;
      local_98 = *(undefined8 *)(lVar3 + 0x80);
      FUN_1400021e4(&local_98,local_190);
      FUN_1400021e4(&local_1a0,local_a8);
      FUN_144a882a8(local_88,local_a8,&DAT_149e0635c);
      FUN_1401c7f3e(&local_128,local_88,local_190);
      ppuVar12 = local_128;
      if (local_120 == 0) {
        ppuVar12 = (undefined **)&DAT_149dfb77a;
      }
      FUN_1446f470e(&local_90,ppuVar12,1);
      if (local_128 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
      if (local_a8[0] != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_190[0] != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    local_1a8 = *(undefined1 *)(lVar3 + 0x181);
    local_138 = *(undefined8 *)(lVar3 + 0x188);
    local_130 = *(longlong *)(lVar3 + 400);
    if (local_130 != 0) {
      LOCK();
      *(int *)(local_130 + 8) = *(int *)(local_130 + 8) + 1;
      UNLOCK();
    }
    local_148 = *(undefined8 *)(*(longlong *)(param_1 + 0x280) + 0x70);
    local_140 = *(longlong *)(*(longlong *)(param_1 + 0x280) + 0x78);
    if (local_140 != 0) {
      LOCK();
      *(int *)(local_140 + 8) = *(int *)(local_140 + 8) + 1;
      UNLOCK();
    }
    local_1b8 = 1;
    local_1c8 = 0;
    local_1c0 = pplVar5;
    local_1b0 = local_90;
    FUN_1469d0642(&local_128,
                  CONCAT71((int7)((ulonglong)local_148 >> 8),*(undefined1 *)(lVar3 + 0x198)),
                  &local_148,&local_138);
    if (*(int *)(lVar3 + 0x158) == 0) {
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = *(longlong **)(lVar3 + 0x150);
    }
    (**(code **)(*plVar11 + 0x58))(plVar11,&local_128);
  }
  (*(code *)local_128[4])(&local_128,param_2,0,1000);
  local_128 = &PTR_FUN_149f05160;
  if (local_c0 != (longlong *)0x0) {
    (**(code **)(*local_c0 + 0x10))();
  }
  FUN_1469e534a(&local_128);
LAB_146a0c52b:
  if (!bVar6) {
    LOCK();
    plVar11 = plVar13 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar4 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  if ((local_88[5] ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a0c98a FUN_146a0c98a body=52 status=ok
// SIG undefined FUN_146a0c98a(void)

longlong * FUN_146a0c98a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x478);
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x480);
  return param_2;
}



// FUNCTION 146a0c9be FUN_146a0c9be body=133 status=ok
// SIG undefined FUN_146a0c9be(void)

void FUN_146a0c9be(longlong param_1,undefined8 *param_2)

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
  plVar5 = *(longlong **)(param_1 + 0x470);
  *(undefined8 *)(param_1 + 0x468) = uVar3;
  *(longlong *)(param_1 + 0x470) = lVar4;
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
                    /* WARNING: Could not recover jumptable at 0x000146a0ca37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146a0ca44 FUN_146a0ca44 body=326 status=ok
// SIG undefined FUN_146a0ca44(void)

void FUN_146a0ca44(longlong param_1,longlong param_2,longlong *param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  longlong **local_78;
  ulonglong *local_70;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  longlong *local_50;
  undefined1 local_44 [4];
  longlong *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_4 == '\0') {
    plVar4 = (longlong *)FUN_140e82300();
    plVar2 = (longlong *)*plVar4;
    plVar3 = (longlong *)*param_3;
    if (plVar3 != plVar2) {
      *param_3 = (longlong)plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    *(int *)(param_3 + 1) = (int)plVar4[1];
  }
  local_40 = (longlong *)*param_3;
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 8))();
  }
  local_38 = (undefined4)param_3[1];
  local_78 = &local_40;
  local_70 = &local_30;
  FUN_146a0cb8c(&local_68);
  local_58 = param_2;
  local_50 = &local_68;
  FUN_146a3db26(param_1 + 0x310,local_44);
  FUN_1401b9920(local_68,local_60);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
  }
  plVar2 = *(longlong **)(param_2 + 8);
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
  if ((longlong *)*param_3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_3 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a0cb8c FUN_146a0cb8c body=85 status=ok
// SIG undefined FUN_146a0cb8c(void)

undefined8 * FUN_146a0cb8c(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  *param_1 = 0;
  lVar1 = *param_2;
  uVar2 = (ulonglong)(param_2[1] - lVar1) >> 4;
  *(int *)(param_1 + 1) = (int)uVar2;
  if ((int)uVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1406fd828(param_1,uVar2 & 0xffffffff,0);
    FUN_1406fd7df(*param_1,lVar1,uVar2 & 0xffffffff);
  }
  return param_1;
}



// FUNCTION 146a0cbe6 FUN_146a0cbe6 body=246 status=ok
// SIG undefined FUN_146a0cbe6(void)

undefined8 *
FUN_146a0cbe6(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  *param_1 = &PTR_LAB_149f05190;
  FUN_146a012d6(param_1 + 1);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = param_6;
  param_1[8] = param_7;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  *(undefined4 *)(param_1 + 4) = 1;
  FUN_146a2720c(param_1 + 3,0);
  puVar4 = (undefined8 *)param_1[3];
  *puVar4 = *param_4;
  lVar5 = param_4[1];
  puVar4[1] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 6);
  *(uint *)(param_1 + 6) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0x34) < iVar3 + 1U) {
    FUN_146a3e122(param_1 + 5,iVar3);
  }
  lVar5 = param_1[5];
  *(undefined8 *)(lVar5 + (longlong)iVar3 * 0x10) = *param_5;
  lVar6 = param_5[1];
  *(longlong *)(lVar5 + 8 + (longlong)iVar3 * 0x10) = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
    plVar7 = (longlong *)param_5[1];
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
  }
  return param_1;
}



// FUNCTION 146a0ccdc FUN_146a0ccdc body=141 status=ok
// SIG undefined FUN_146a0ccdc(void)

void FUN_146a0ccdc(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  uVar4 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar3 + 1U) {
    FUN_146a2720c((longlong *)(param_1 + 0x18),iVar3);
  }
  lVar6 = *(longlong *)(param_1 + 0x18);
  *(undefined8 *)(lVar6 + (longlong)iVar3 * 0x10) = uVar4;
  *(longlong *)(lVar6 + 8 + (longlong)iVar3 * 0x10) = lVar5;
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
                    /* WARNING: Could not recover jumptable at 0x000146a0cd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146a0cd6a FUN_146a0cd6a body=110 status=ok
// SIG undefined FUN_146a0cd6a(void)

void FUN_146a0cd6a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (1 < (longlong)*(int *)(param_1 + 0x20)) {
    lVar5 = (longlong)*(int *)(param_1 + 0x20) * 0x10;
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x18) + -8 + lVar5);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + -0x10 + lVar5);
    *puVar3 = 0;
    puVar3[1] = 0;
    FUN_146a3e1a8(param_1 + 0x18,*(int *)(param_1 + 0x20) + -1);
    FUN_146a3e21e(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x000146a0cdd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 146a0cdd8 FUN_146a0cdd8 body=168 status=ok
// SIG undefined FUN_146a0cdd8(void)

undefined8 * FUN_146a0cdd8(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = &local_40;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_146a02102(*(undefined8 *)(param_1 + 8),&local_28,0,param_3);
  *param_2 = local_28;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
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
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a0ce82 FUN_146a0ce82 body=302 status=ok
// SIG undefined FUN_146a0ce82(void)

undefined8 *
FUN_146a0ce82(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined1 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *param_6;
  local_40 = param_6[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  local_58 = param_9;
  local_60 = param_8;
  local_68 = &local_48;
  FUN_146a0cbe6(param_1,param_2,param_3,param_4);
  *param_1 = &PTR_LAB_149f05e60;
  *(undefined1 *)(param_1 + 0xb) = param_5;
  lVar3 = param_1[1];
  FUN_1446ddc76(&local_50,&DAT_149f05e80,1);
  *(undefined8 *)(lVar3 + 0x58) = param_7;
  *(undefined8 *)(lVar3 + 0x60) = local_50;
  plVar4 = *(longlong **)(param_4 + 8);
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
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a0cfb2 FUN_146a0cfb2 body=488 status=ok
// SIG undefined FUN_146a0cfb2(void)

void FUN_146a0cfb2(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  longlong *local_b0;
  longlong *local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_68 = param_3;
  (**(code **)(*param_1 + 0x18))();
  (**(code **)(*param_1 + 0x10))(param_1,param_3,0);
  lVar4 = param_1[4];
  lVar3 = param_1[3];
  plVar5 = (longlong *)FUN_14001cc68(0x1b8,0x10);
  local_c0 = param_5;
  uStack_b8 = param_6;
  local_c8 = param_4;
  local_b0 = param_1 + 0xb;
  FUN_146a3e2ba(plVar5,&local_68,param_2,(longlong)((int)lVar4 + -1) * 0x10 + lVar3);
  plVar6 = plVar5 + 2;
  local_78 = plVar6;
  local_70 = plVar5;
  FUN_146a3e494(&local_78,plVar6);
  uVar2 = *(undefined4 *)(param_1[1] + 0x50);
  local_90 = *param_2;
  local_88 = param_2[1];
  local_98 = plVar5;
  local_a0 = plVar6;
  if (local_88 != 0) {
    LOCK();
    *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
    UNLOCK();
    local_98 = local_70;
    local_a0 = local_78;
  }
  local_c8 = CONCAT44(local_c8._4_4_,uVar2);
  FUN_1428fcf3b(&local_80,param_1[7],param_7,&local_90);
  *(undefined8 *)((longlong)plVar5 + 0x9c) = local_80;
  *(longlong *)((longlong)local_a0 + 0x19c) = param_1[9];
  lVar3 = param_1[1];
  if (local_98 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_98 + 1) = (int)local_98[1] + 1;
    UNLOCK();
    plVar6 = local_70;
  }
  FUN_146a013d2(lVar3,&local_a0);
  (**(code **)(*param_1 + 0x10))(param_1,local_68,1);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a0d19c FUN_146a0d19c body=429 status=ok
// SIG undefined FUN_146a0d19c(void)

void FUN_146a0d19c(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  longlong *local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  uVar5 = param_6;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 0x18))();
  (**(code **)(*param_1 + 0x10))(param_1,uVar5,0);
  plVar4 = (longlong *)FUN_14001cc68(0x1b8,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149f0b970;
  plVar1 = plVar4 + 2;
  local_a0 = (undefined1)param_1[0xb];
  local_98 = param_9;
  local_a8 = param_7;
  local_b0 = param_5;
  local_b8 = param_4;
  FUN_146a11d7a(plVar1,&param_6,param_2,param_3);
  local_58 = plVar1;
  local_50 = plVar4;
  FUN_146a3e494(&local_58,plVar1);
  local_78 = 0;
  uStack_70 = 0;
  local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(param_1[1] + 0x50));
  FUN_1428fcf3b(&local_60,param_1[7],param_8);
  *(undefined8 *)((longlong)plVar4 + 0x9c) = local_60;
  lVar3 = param_1[1];
  plVar6 = (longlong *)0x0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    uVar5 = param_6;
    plVar6 = local_50;
  }
  local_88 = plVar1;
  local_80 = plVar4;
  FUN_146a013d2(lVar3,&local_88);
  (**(code **)(*param_1 + 0x10))(param_1,uVar5,1);
  if (plVar6 != (longlong *)0x0) {
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
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a0d34a FUN_146a0d34a body=278 status=ok
// SIG undefined FUN_146a0d34a(void)

undefined8 * FUN_146a0d34a(longlong param_1,undefined8 *param_2,undefined8 param_3,uint param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  float local_58;
  undefined4 uStack_54;
  longlong *local_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  uStack_38 = 0;
  if (param_4 < 0x7fffffff) {
    local_58 = (float)(int)param_4;
    FUN_146a0d462(&local_48);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  local_6c = local_44;
  local_70 = local_48;
  local_68 = 0;
  local_60 = 0;
  FUN_140a52b3c(&local_68,&local_40);
  local_78 = &local_70;
  FUN_146a02102(uVar3,&local_58,*(undefined1 *)(param_1 + 0x79),param_3);
  *param_2 = CONCAT44(uStack_54,local_58);
  param_2[1] = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
  }
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a0d462 FUN_146a0d462 body=84 status=ok
// SIG undefined FUN_146a0d462(void)

void FUN_146a0d462(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  
  if (param_1[4] != 0) {
    puVar1 = *(undefined8 **)(param_1 + 2);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_1 + 2,0,0,0x10);
      param_1[4] = 0;
    }
  }
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



// FUNCTION 146a0d4b6 FUN_146a0d4b6 body=211 status=ok
// SIG undefined FUN_146a0d4b6(void)

void FUN_146a0d4b6(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  (**(code **)(*param_1 + 0x10))(param_1,param_2,0);
  *(undefined1 *)(param_1 + 0xf) = 1;
  param_1[0xc] = param_2;
  plVar3 = (longlong *)FUN_14142e2d2(param_3);
  plVar4 = (longlong *)*plVar3;
  plVar1 = (longlong *)param_1[0xd];
  if (plVar1 != plVar4) {
    param_1[0xd] = (longlong)plVar4;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  *(int *)(param_1 + 0xe) = (int)plVar3[1];
  if ((DAT_14c98eaf8 != (longlong *)0x0 && DAT_14c98eb00 != 0) &&
     (cVar2 = (**(code **)(*DAT_14c98eaf8 + 0x30))(), cVar2 != '\0')) {
    plVar4 = DAT_14c98eaf8;
    if (DAT_14c98eb00 == 0) {
      plVar4 = (longlong *)0x0;
    }
    DAT_14c98eaf0 = (**(code **)(*plVar4 + 0x58))();
  }
  if (DAT_14c98eaf0 == '\x01') {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000146a0d586. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_2,2);
  return;
}



// FUNCTION 146a0d58a FUN_146a0d58a body=114 status=ok
// SIG undefined FUN_146a0d58a(void)

void FUN_146a0d58a(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar1 = param_1[0xc];
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  plVar4 = (longlong *)FUN_140e82300();
  plVar2 = (longlong *)*plVar4;
  plVar3 = (longlong *)param_1[0xd];
  if (plVar3 != plVar2) {
    param_1[0xd] = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(int *)(param_1 + 0xe) = (int)plVar4[1];
                    /* WARNING: Could not recover jumptable at 0x000146a0d5f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,lVar1,1);
  return;
}



// FUNCTION 146a0d5fc thunk_FUN_146a0d602 body=5 status=ok
// SIG undefined thunk_FUN_146a0d602(void)

void thunk_FUN_146a0d602(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined1 uStack_78;
  undefined1 uStack_70;
  undefined8 *puStack_68;
  longlong *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  longlong *plStack_40;
  ulonglong uStack_38;
  
  uStack_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*param_1 + 0x18))();
  (**(code **)(*param_1 + 0x10))(param_1,param_2,0);
  if (*(int *)(param_1[1] + 0x50) < 1) {
    if ((DAT_14c98eaf8 != (longlong *)0x0 && DAT_14c98eb00 != 0) &&
       (cVar3 = (**(code **)(*DAT_14c98eaf8 + 0x30))(), cVar3 != '\0')) {
      plVar6 = DAT_14c98eaf8;
      if (DAT_14c98eb00 == 0) {
        plVar6 = (longlong *)0x0;
      }
      DAT_14c98eaf0 = (**(code **)(*plVar6 + 0x58))();
    }
    if (DAT_14c98eaf0 != '\x01') goto LAB_146a0d694;
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0xb8,0x10);
  puStack_48 = (undefined8 *)0x0;
  plStack_40 = (longlong *)0x0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_70 = 0;
  uStack_78 = 5;
  FUN_146a0eb42(puVar4,&uStack_58,&puStack_48,param_2);
  *puVar4 = &PTR_FUN_149f063b0;
  *(undefined1 *)((longlong)puVar4 + 0x9c) = 0;
  puStack_48 = puVar4;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_149f097d0;
  plVar5[2] = (longlong)puVar4;
  plStack_40 = plVar5;
  FUN_146a3e53c(&puStack_48,puVar4);
  plVar6 = plStack_40;
  lVar2 = param_1[1];
  puStack_68 = puVar4;
  plStack_60 = plVar5;
  if (plVar5 == (longlong *)0x0) {
    FUN_146a013d2(lVar2,&puStack_68);
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    FUN_146a013d2(lVar2,&puStack_68);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
LAB_146a0d694:
  if ((uStack_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x000146a0d6c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_2,1);
  return;
}



// FUNCTION 146a0d602 FUN_146a0d602 body=454 status=ok
// SIG undefined FUN_146a0d602(void)

void FUN_146a0d602(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70;
  undefined8 *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*param_1 + 0x18))();
  (**(code **)(*param_1 + 0x10))(param_1,param_2,0);
  if (*(int *)(param_1[1] + 0x50) < 1) {
    if ((DAT_14c98eaf8 != (longlong *)0x0 && DAT_14c98eb00 != 0) &&
       (cVar3 = (**(code **)(*DAT_14c98eaf8 + 0x30))(), cVar3 != '\0')) {
      plVar6 = DAT_14c98eaf8;
      if (DAT_14c98eb00 == 0) {
        plVar6 = (longlong *)0x0;
      }
      DAT_14c98eaf0 = (**(code **)(*plVar6 + 0x58))();
    }
    if (DAT_14c98eaf0 != '\x01') goto LAB_146a0d694;
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0xb8,0x10);
  local_48 = (undefined8 *)0x0;
  plStack_40 = (longlong *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  local_70 = 0;
  local_78 = 5;
  FUN_146a0eb42(puVar4,&local_58,&local_48,param_2);
  *puVar4 = &PTR_FUN_149f063b0;
  *(undefined1 *)((longlong)puVar4 + 0x9c) = 0;
  local_48 = puVar4;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_149f097d0;
  plVar5[2] = (longlong)puVar4;
  plStack_40 = plVar5;
  FUN_146a3e53c(&local_48,puVar4);
  plVar6 = plStack_40;
  lVar2 = param_1[1];
  local_68 = puVar4;
  local_60 = plVar5;
  if (plVar5 == (longlong *)0x0) {
    FUN_146a013d2(lVar2,&local_68);
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    FUN_146a013d2(lVar2,&local_68);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
LAB_146a0d694:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x000146a0d6c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_2,1);
  return;
}



// FUNCTION 146a0d7ca FUN_146a0d7ca body=494 status=ok
// SIG undefined FUN_146a0d7ca(void)

void FUN_146a0d7ca(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined8 local_90;
  longlong *local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_49 = param_7;
  local_4a = param_5;
  local_90 = param_3;
  (**(code **)(*param_1 + 0x18))(param_1);
  local_4b = 1;
  lVar5 = param_1[4];
  lVar6 = param_1[6];
  lVar3 = param_1[3];
  lVar4 = param_1[5];
  plVar8 = (longlong *)FUN_14001cc68(0x1b8,0x10);
  local_a0 = &local_49;
  local_a8 = param_6;
  local_c0 = &local_4a;
  local_d8 = param_4;
  local_d0 = (longlong)((int)lVar6 + -1) * 0x10 + lVar4;
  local_c8 = &local_4b;
  local_b8 = (longlong)((int)lVar5 + -1) * 0x10 + lVar3;
  local_b0 = param_1 + 0xb;
  FUN_146a3e5e4(plVar8,&param_8,param_2,local_90);
  plVar1 = plVar8 + 2;
  local_60 = plVar1;
  local_58 = plVar8;
  FUN_146a3e494(&local_60,plVar1);
  local_78 = 0;
  uStack_70 = 0;
  local_d8 = CONCAT44(local_d8._4_4_,*(undefined4 *)(param_1[1] + 0x50));
  FUN_1428fcf3b(&local_68,param_1[7],param_9);
  plVar7 = local_58;
  *(undefined8 *)((longlong)plVar8 + 0x9c) = local_68;
  *(undefined1 *)((longlong)plVar8 + 0x191) = *(undefined1 *)((longlong)param_1 + 0x7a);
  *(longlong *)((longlong)plVar8 + 0x1ac) = param_1[9];
  lVar3 = param_1[1];
  local_88 = plVar1;
  local_80 = plVar8;
  if (plVar8 == (longlong *)0x0) {
    FUN_146a013d2(lVar3,&local_88);
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    FUN_146a013d2(lVar3,&local_88);
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
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a0d9ba FUN_146a0d9ba body=167 status=ok
// SIG undefined FUN_146a0d9ba(void)

void FUN_146a0d9ba(undefined8 param_1,longlong param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  undefined1 local_40 [4];
  undefined4 local_3c;
  undefined1 local_34;
  undefined1 local_2c;
  undefined1 local_24;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3c = 0;
  local_34 = 0;
  local_2c = 0;
  local_24 = 0;
  local_1c = 0;
  local_50 = param_6;
  local_58 = param_5;
  local_40[0] = param_4;
  FUN_146a0da72(param_1,param_2,param_3,local_40);
  puVar2 = *(undefined8 **)(param_2 + 8);
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
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a0da72 FUN_146a0da72 body=236 status=ok
// SIG undefined FUN_146a0da72(void)

void FUN_146a0da72(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x18))();
  puVar5 = (undefined8 *)FUN_146a3e707(param_2,param_3,param_6,param_4);
  puVar1 = puVar5 + 2;
  local_48 = puVar1;
  local_40 = puVar5;
  FUN_146a2f60e(&local_48,puVar1);
  puVar4 = local_40;
  *(undefined1 *)((longlong)puVar5 + 0xac) = param_5;
  lVar3 = param_1[1];
  local_58 = puVar1;
  local_50 = puVar5;
  if (puVar5 == (undefined8 *)0x0) {
    FUN_146a013d2(lVar3,&local_58);
  }
  else {
    LOCK();
    *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
    UNLOCK();
    FUN_146a013d2(lVar3,&local_58);
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar4 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar4)(puVar4);
        LOCK();
        piVar2 = (int *)((longlong)puVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a0db76 FUN_146a0db76 body=9 status=ok
// SIG undefined FUN_146a0db76(void)

void FUN_146a0db76(longlong param_1)

{
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x30) = 1;
  return;
}



// FUNCTION 146a0db80 FUN_146a0db80 body=121 status=ok
// SIG undefined FUN_146a0db80(void)

void FUN_146a0db80(longlong param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (((*(char *)(param_1 + 0x50) == '\x01') && (param_2 != 0)) &&
     (plVar3 = (longlong *)
               ((longlong)(*(int *)(param_1 + 0x30) + -1) * 0x10 + *(longlong *)(param_1 + 0x28)),
     *plVar3 != 0)) {
    plVar2 = (longlong *)FUN_14479d2ce(*(longlong *)(param_1 + 8) + 0x28);
    if ((plVar2 != (longlong *)0x0) &&
       (cVar1 = (**(code **)(*plVar2 + 0x2a0))(plVar2), cVar1 != '\0')) {
      return;
    }
    FUN_146a0dbfa(*plVar3,param_2,param_3,param_1);
    return;
  }
  return;
}



// FUNCTION 146a0dbfa FUN_146a0dbfa body=403 status=ok
// SIG undefined FUN_146a0dbfa(void)

void FUN_146a0dbfa(longlong *param_1,longlong param_2,int param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = param_4;
  if (0 < (int)param_1[1]) {
    lVar9 = 0;
    iVar10 = 0;
    do {
      lVar2 = *param_1;
      iVar7 = (**(code **)(**(longlong **)(lVar2 + lVar9) + 8))();
      if (((iVar7 == 1) &&
          (lVar3 = *(longlong *)(lVar2 + lVar9), *(longlong *)(lVar3 + 8) == param_2)) &&
         (*(int *)(lVar3 + 0x10) == param_3)) {
        plVar4 = *(longlong **)(lVar2 + 8 + lVar9);
        lVar8 = lVar3;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          lVar8 = *(longlong *)(lVar2 + lVar9);
        }
        lVar5 = *(longlong *)(lVar8 + 0x18);
        if (lVar5 != 0) {
          local_50 = *(longlong **)(lVar8 + 0x20);
          local_58 = lVar5;
          if (local_50 == (longlong *)0x0) {
            local_50 = (longlong *)0x0;
            FUN_146a0ccdc(local_68,&local_58);
          }
          else {
            LOCK();
            *(int *)(local_50 + 1) = (int)local_50[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(local_50 + 1) = (int)local_50[1] + 1;
            UNLOCK();
            local_60 = local_50;
            FUN_146a0ccdc(local_68,&local_58);
            LOCK();
            plVar6 = local_60 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*local_60)();
              LOCK();
              piVar1 = (int *)((longlong)local_60 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_60 + 0x10))();
              }
            }
          }
        }
        if ((*(int *)(lVar3 + 0x30) != 0) &&
           (plVar6 = *(longlong **)(lVar3 + 0x28), plVar6 != (longlong *)0x0)) {
          (**(code **)(*plVar6 + 0x60))(plVar6,local_68);
        }
        if (*(longlong *)(*(longlong *)(lVar2 + lVar9) + 0x18) != 0) {
          FUN_146a0cd6a(local_68);
        }
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar4 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
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
      iVar10 = iVar10 + 1;
      lVar9 = lVar9 + 0x10;
    } while (iVar10 < (int)param_1[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a0dd8e FUN_146a0dd8e body=398 status=ok
// SIG undefined FUN_146a0dd8e(void)

void FUN_146a0dd8e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x78) != '\x01') goto LAB_146a0ddfb;
  plVar1 = (longlong *)(param_1 + 0x68);
  cVar4 = FUN_144a7c5f6(plVar1);
  if (cVar4 == '\0') {
    uVar3 = *(undefined8 *)(param_1 + 8);
    lVar6 = FUN_14001cc68(200,0x10);
    FUN_146a0df1e(lVar6,param_1 + 0x60,plVar1);
    local_40 = lVar6;
    plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_149f0b990;
    plVar7[2] = lVar6;
    local_38 = plVar7;
    if ((lVar6 != 0) &&
       (((*(longlong *)(lVar6 + 8) == 0 || (*(longlong *)(lVar6 + 0x10) == 0)) ||
        (*(int *)(*(longlong *)(lVar6 + 0x10) + 8) < 1)))) {
      if (plVar7 == (longlong *)0x0) {
        *(longlong *)(lVar6 + 8) = lVar6;
        plVar8 = *(longlong **)(lVar6 + 0x10);
        if (plVar8 != (longlong *)0x0) {
LAB_146a0debe:
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))();
          }
          *(longlong **)(lVar6 + 0x10) = plVar7;
          if (plVar7 != (longlong *)0x0) goto LAB_146a0dee3;
        }
      }
      else {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        *(longlong *)(lVar6 + 8) = lVar6;
        if (*(longlong **)(lVar6 + 0x10) != plVar7) {
          LOCK();
          *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
          UNLOCK();
          plVar8 = *(longlong **)(lVar6 + 0x10);
          if (plVar8 != (longlong *)0x0) goto LAB_146a0debe;
          *(longlong **)(lVar6 + 0x10) = plVar7;
        }
LAB_146a0dee3:
        LOCK();
        plVar8 = plVar7 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
    }
    FUN_146a013d2(uVar3,&local_40);
  }
  *(undefined1 *)(param_1 + 0x78) = 0;
  plVar5 = (longlong *)FUN_140e82300();
  plVar7 = (longlong *)*plVar5;
  plVar8 = *(longlong **)(param_1 + 0x68);
  if (plVar8 != plVar7) {
    *plVar1 = (longlong)plVar7;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  *(int *)(param_1 + 0x70) = (int)plVar5[1];
LAB_146a0ddfb:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a0df1e FUN_146a0df1e body=144 status=ok
// SIG undefined FUN_146a0df1e(void)

undefined8 * FUN_146a0df1e(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 1;
  local_48 = 3;
  FUN_146a0eb42();
  *param_1 = &PTR_FUN_149f06050;
  plVar1 = (longlong *)*param_3;
  param_1[0x17] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x18) = (int)param_3[1];
  *(undefined1 *)((longlong)param_1 + 0x9c) = 0;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a0dfb0 FUN_146a0dfb0 body=640 status=ok
// SIG undefined FUN_146a0dfb0(void)

undefined8 *
FUN_146a0dfb0(undefined8 *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
             undefined8 param_5,undefined8 *param_6,undefined1 param_7,undefined1 param_8,
             undefined8 *param_9,undefined1 param_10,undefined4 *param_11,undefined1 param_12)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar3 = *param_2;
  local_70 = *param_9;
  local_68 = param_9[1];
  if (local_68 != 0) {
    LOCK();
    *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
    UNLOCK();
  }
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  local_98 = 4;
  FUN_146a0eb42(param_1,&local_88,&local_70,uVar3);
  *param_1 = &PTR_FUN_149f06100;
  plVar4 = (longlong *)*param_3;
  param_1[0x17] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  *(int *)(param_1 + 0x18) = (int)param_3[1];
  *(char *)(param_1 + 0x19) = (char)param_3[2];
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  FUN_1413a4324(param_1 + 0x1a,param_3 + 3);
  plVar4 = (longlong *)*param_4;
  param_1[0x1c] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  *(int *)(param_1 + 0x1d) = (int)param_4[1];
  *(char *)(param_1 + 0x1e) = (char)param_4[2];
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_1413a4324(param_1 + 0x1f,param_4 + 3);
  FUN_144a5dc74(param_1 + 0x21);
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar6 = param_11[1];
  uVar7 = param_11[2];
  uVar8 = param_11[3];
  uVar9 = param_11[4];
  uVar10 = param_11[5];
  uVar11 = param_11[6];
  uVar12 = param_11[7];
  *(undefined4 *)(param_1 + 0x26) = *param_11;
  *(undefined4 *)((longlong)param_1 + 0x134) = uVar6;
  *(undefined4 *)(param_1 + 0x27) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x13c) = uVar8;
  *(undefined4 *)(param_1 + 0x28) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x144) = uVar10;
  *(undefined4 *)(param_1 + 0x29) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x14c) = uVar12;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  FUN_146a26a60(param_1 + 0x2a,param_5);
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x30) = param_7;
  *(undefined1 *)((longlong)param_1 + 0x181) = 1;
  *(undefined1 *)((longlong)param_1 + 0x182) = param_8;
  *(undefined1 *)((longlong)param_1 + 0x183) = 1;
  *(undefined1 *)((longlong)param_1 + 0x184) = param_10;
  param_1[0x31] = *param_6;
  lVar5 = param_6[1];
  param_1[0x32] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 0x33) = param_12;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
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
  plVar4 = (longlong *)param_9[1];
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
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a0e232 FUN_146a0e232 body=143 status=ok
// SIG undefined FUN_146a0e232(void)

longlong FUN_146a0e232(longlong param_1)

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



// FUNCTION 146a0e2c2 FUN_146a0e2c2 body=158 status=ok
// SIG undefined FUN_146a0e2c2(void)

void FUN_146a0e2c2(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 0x1a8);
  plVar4 = *(longlong **)(param_2 + 0x1b0);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x2a8) = uVar2;
    plVar4 = *(longlong **)(param_1 + 0x2b0);
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x2b0) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x2a8) = uVar2;
    plVar3 = *(longlong **)(param_1 + 0x2b0);
    if (plVar4 == plVar3) {
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 != 0) {
        return;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) {
        return;
      }
      goto LAB_146a0e332;
    }
    *(longlong **)(param_1 + 0x2b0) = plVar4;
    plVar4 = plVar3;
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
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
LAB_146a0e332:
                    /* WARNING: Could not recover jumptable at 0x000146a0e33e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))(plVar4);
      return;
    }
  }
  return;
}



// FUNCTION 146a0e360 FUN_146a0e360 body=949 status=ok
// SIG undefined FUN_146a0e360(void)

void FUN_146a0e360(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 unaff_RBP;
  bool bVar12;
  undefined1 auStack_448 [32];
  undefined1 *local_428;
  undefined8 local_418;
  longlong *local_410;
  longlong *local_408;
  undefined4 local_400;
  undefined1 local_3f1;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined1 local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  longlong *local_3c0;
  undefined8 local_3b8;
  longlong *local_3b0;
  undefined8 local_3a8;
  longlong *plStack_3a0;
  undefined1 local_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  longlong *local_378;
  longlong local_1d8;
  longlong *local_1d0;
  undefined1 *local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8 [80];
  undefined8 local_158;
  undefined1 local_150;
  undefined1 local_148 [248];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_448;
  FUN_140a562d0(&local_380);
  local_3a8 = 0;
  plStack_3a0 = (longlong *)0x0;
  local_398 = 1;
  local_390 = 0;
  uStack_388 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1b0 = 1;
  FUN_144a450dc(local_1a8,&local_390);
  FUN_1449db362(&local_390);
  plVar9 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_3f0,"NoBorder",1);
  local_3e8 = (**(code **)(*plVar9 + 0x50))(plVar9,local_3f0,0,0);
  local_3e0 = 1;
  local_3d8 = 0;
  uStack_3d0 = 0;
  local_150 = 1;
  local_158 = local_3e8;
  FUN_144a450dc(local_148,&local_3d8);
  FUN_1449db362(&local_3d8);
  plVar10 = local_1d0;
  local_1c8 = &DAT_200000002;
  local_1d8 = param_1[0x55];
  plVar9 = (longlong *)param_1[0x56];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  plVar7 = plVar9;
  if (local_1d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar4 = (undefined8 *)*local_1d0;
      local_1d0 = plVar9;
      (*(code *)*puVar4)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar7 = local_1d0;
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        plVar7 = local_1d0;
      }
    }
  }
  local_1d0 = plVar7;
  local_428 = &local_3f1;
  FUN_140a55c32(&local_3a8,"SBorder",
                ".\\Runtime/Slate/Private/Framework/MultiBox/MultiBoxCustomization.cpp",0x12);
  FUN_140a530e4(&local_3a8,&local_3c8,&local_380);
  local_3b8 = local_3c8;
  local_3b0 = local_3c0;
  if (local_3c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_3c0 + 1) = (int)local_3c0[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(param_1 + 0x3d,&local_3b8);
  plVar10 = local_3b0;
  if (local_3b0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_3b0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_3b0)(local_3b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (local_3c0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_3c0 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_3c0)(local_3c0);
      LOCK();
      piVar2 = (int *)((longlong)local_3c0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_3c0 + 0x10))(local_3c0);
      }
    }
  }
  plVar10 = plStack_3a0;
  if (plStack_3a0 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_3a0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plStack_3a0)(plStack_3a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar9 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  FUN_140a59028(&local_380);
  plVar9 = (longlong *)param_1[0x4f];
  bVar5 = true;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
    lVar11 = 0;
  }
  else {
    iVar8 = (int)plVar9[1];
    lVar11 = 0;
    do {
      if (iVar8 == 0) {
        plVar9 = (longlong *)0x0;
        goto LAB_146a0e5fb;
      }
      LOCK();
      iVar6 = (int)plVar9[1];
      bVar12 = iVar8 == iVar6;
      if (bVar12) {
        *(int *)(plVar9 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar12);
    lVar11 = param_1[0x4e];
    bVar5 = false;
  }
LAB_146a0e5fb:
  uVar3 = *(undefined1 *)(param_1[0x50] + 0x9c);
  plVar10 = (longlong *)FUN_140e82300();
  local_408 = (longlong *)*plVar10;
  if (local_408 != (longlong *)0x0) {
    (**(code **)(*local_408 + 8))();
  }
  local_400 = (undefined4)plVar10[1];
  (**(code **)(*param_1 + 8))(param_1,&local_380);
  local_418 = local_380;
  local_410 = local_378;
  if (local_378 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_378 + 1) = (int)local_378[1] + 1;
    UNLOCK();
  }
  FUN_146a0ca44(lVar11,&local_418,&local_408,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar3) & 0xffffffff);
  if (local_378 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_378 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_378)(local_378);
      LOCK();
      piVar2 = (int *)((longlong)local_378 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_378 + 0x10))(local_378);
      }
    }
  }
  if (!bVar5) {
    LOCK();
    plVar10 = plVar9 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if ((local_50 ^ (ulonglong)auStack_448) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a0e716 FUN_146a0e716 body=434 status=ok
// SIG undefined FUN_146a0e716(void)

undefined8 * FUN_146a0e716(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_258 [39];
  undefined1 local_231;
  undefined1 local_230 [8];
  longlong *local_228;
  undefined8 local_218;
  longlong *local_210;
  undefined2 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  longlong *local_1e8;
  undefined1 local_1e0 [112];
  undefined2 local_170;
  undefined1 local_168 [304];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_146a0e8ca(local_1e0);
  local_208 = CONCAT11(1,DAT_14c96b23b);
  local_200 = 0;
  uStack_1f8 = 0;
  local_170 = local_208;
  FUN_144a450dc(local_168,&local_200);
  FUN_1449db362(&local_200);
  (**(code **)(**(longlong **)(param_1 + 200) + 8))(*(longlong **)(param_1 + 200),&local_218);
  plVar3 = local_30;
  if (local_210 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_210 + 1) = (int)local_210[1] + 1;
    UNLOCK();
  }
  local_38 = local_218;
  local_30 = local_210;
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
  FUN_146a3e7ea(local_230,&local_231);
  FUN_146a0e906(local_230,&local_1f0,local_1e0);
  *param_2 = local_1f0;
  param_2[1] = local_1e8;
  if (local_1e8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1e8 + 1) = (int)local_1e8[1] + 1;
    UNLOCK();
    if (local_1e8 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_1e8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_1e8)(local_1e8);
        LOCK();
        piVar2 = (int *)((longlong)local_1e8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_1e8 + 0x10))(local_1e8);
        }
      }
    }
  }
  if (local_228 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_228 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_228)(local_228);
      LOCK();
      piVar2 = (int *)((longlong)local_228 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_228 + 0x10))(local_228);
      }
    }
  }
  if (local_210 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_210 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_210)(local_210);
      LOCK();
      piVar2 = (int *)((longlong)local_210 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_210 + 0x10))(local_210);
      }
    }
  }
  FUN_146a0e980(local_1e0);
  if ((local_28 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a0e8ca FUN_146a0e8ca body=59 status=ok
// SIG undefined FUN_146a0e8ca(void)

longlong FUN_146a0e8ca(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x1b0) = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 146a0e906 FUN_146a0e906 body=121 status=ok
// SIG undefined FUN_146a0e906(void)

longlong * FUN_146a0e906(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1 + 8,param_3);
  FUN_146a0e2c2(*param_1,param_3);
  lVar1 = *param_1;
  bVar4 = *(byte *)(lVar1 + 0x38);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*(longlong *)(lVar1 + 8) + 0x220))(lVar1 + 8);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(lVar1 + 0x38);
  }
  *(byte *)(lVar1 + 0x38) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x39) = *(byte *)(*param_1 + 0x39) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 146a0e980 FUN_146a0e980 body=64 status=ok
// SIG undefined FUN_146a0e980(void)

void FUN_146a0e980(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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



// FUNCTION 146a0e9c0 FUN_146a0e9c0 body=386 status=ok
// SIG undefined FUN_146a0e9c0(void)

undefined8 *
FUN_146a0e9c0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
             undefined8 *param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  
  puVar7 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  puVar7[3] = 0;
  puVar7[4] = 0;
  *puVar7 = &PTR_FUN_149f09588;
  puVar7[5] = 0;
  *(undefined4 *)(puVar7 + 6) = 0;
  plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_149f0bf40;
  plVar8[2] = (longlong)puVar7;
  puVar7[1] = param_3;
  *(undefined4 *)(puVar7 + 2) = param_4;
  uVar4 = *param_5;
  lVar5 = param_5[1];
  if (lVar5 == 0) {
    puVar7[3] = uVar4;
    puVar7[4] = 0;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
    plVar6 = (longlong *)puVar7[4];
    puVar7[3] = uVar4;
    puVar7[4] = lVar5;
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
  FUN_146a26a60(puVar7 + 5,param_6);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  iVar3 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
    FUN_146a3eafa(param_1,iVar3);
  }
  lVar5 = *param_1;
  *(undefined8 **)(lVar5 + (longlong)iVar3 * 0x10) = puVar7;
  *(longlong **)(lVar5 + 8 + (longlong)iVar3 * 0x10) = plVar8;
  *param_2 = puVar7;
  param_2[1] = plVar8;
  if (plVar8 != (longlong *)0x0) {
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
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  return param_2;
}



// FUNCTION 146a0eb42 FUN_146a0eb42 body=244 status=ok
// SIG undefined FUN_146a0eb42(void)

undefined8 *
FUN_146a0eb42(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_149f09500;
  FUN_1469ba8e4(param_1 + 3);
  param_1[0xc] = *param_2;
  lVar3 = param_2[1];
  param_1[0xd] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[0xe] = *param_3;
  lVar3 = param_3[1];
  param_1[0xf] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[0x10] = param_4;
  *(undefined1 *)(param_1 + 0x11) = param_5;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 1;
  *(undefined1 *)((longlong)param_1 + 0x9d) = param_6;
  *(undefined2 *)(param_1 + 0x14) = 0x19;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
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
  return param_1;
}



// FUNCTION 146a0ec36 FUN_146a0ec36 body=175 status=ok
// SIG undefined FUN_146a0ec36(void)

undefined8 *
FUN_146a0ec36(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_149f09500;
  FUN_1469eb8a0(param_1 + 3);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = *param_4;
  lVar3 = param_4[1];
  param_1[0xf] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[0x10] = param_3;
  *(undefined1 *)(param_1 + 0x11) = 4;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined2 *)((longlong)param_1 + 0x9c) = 1;
  *(undefined2 *)(param_1 + 0x14) = 0x19;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
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
  return param_1;
}



// FUNCTION 146a0ece6 FUN_146a0ece6 body=87 status=ok
// SIG undefined FUN_146a0ece6(void)

bool FUN_146a0ece6(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x288) != 0) && (*(longlong **)(param_1 + 0x280) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x280) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x288) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x280);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      *(undefined1 *)(param_1 + 0x278) = uVar2;
    }
  }
  return *(char *)(param_1 + 0x278) == '\x01';
}



// FUNCTION 146a0ed3e FUN_146a0ed3e body=1058 status=ok
// SIG undefined FUN_146a0ed3e(void)

void FUN_146a0ed3e(longlong param_1,float *param_2,longlong param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_128 [32];
  float local_108;
  float local_104;
  float local_100;
  undefined8 local_fc;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  byte local_d4;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_1 + 0x230);
  *(undefined4 *)(param_1 + 0x238) = 0;
  FUN_140252f5e();
  uVar8 = *(uint *)(param_3 + 0x130);
  if (1 < (int)uVar8) {
    lVar1 = param_3 + 8;
    lVar7 = (ulonglong)(uVar8 - 2) * 0x48 + 0x2c;
    uVar6 = (ulonglong)(uVar8 - 2);
    uVar5 = uVar8;
    do {
      lVar4 = *(longlong *)(param_3 + 0x128);
      if (*(longlong *)(param_3 + 0x128) == 0) {
        lVar4 = lVar1;
      }
      fVar2 = *(float *)(lVar4 + -0x2c + lVar7) * *(float *)(lVar4 + -0x10 + lVar7) +
              *(float *)(lVar4 + -8 + lVar7) * *(float *)(lVar4 + -0x28 + lVar7) +
              *(float *)(lVar4 + lVar7) + -0.0001;
      fVar3 = param_2[2] * *param_2 + param_2[3] + -0.0001;
      if ((double)-((longlong)ROUND(-0.5 - (fVar3 + fVar3)) >> 1) <
          (double)-((longlong)ROUND(-0.5 - (fVar2 + fVar2)) >> 1)) {
        *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + 1;
        uVar5 = (uint)uVar6;
        FUN_14694d382(lVar1,uVar6 & 0xffffffff,1);
        FUN_14694d3fc(lVar1);
      }
      lVar7 = lVar7 + -0x48;
      bVar9 = 0 < (longlong)uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar9);
    bVar9 = uVar5 != uVar8;
    uVar8 = *(uint *)(param_3 + 0x130);
    if (bVar9) {
      if (0 < (int)uVar8) {
        fVar2 = *(float *)(param_1 + 0x254);
        fVar3 = *param_2;
        if (fVar3 < fVar2) {
          FUN_146279048(lVar1,0);
        }
        else {
          lVar7 = *(longlong *)(param_3 + 0x128);
          if (*(longlong *)(param_3 + 0x128) == 0) {
            lVar7 = lVar1;
          }
          local_108 = fVar3;
          if (fVar2 <= fVar3) {
            local_108 = fVar2;
          }
          local_104 = *(float *)(lVar7 + (ulonglong)uVar8 * 0x48 + -0x44);
          local_f0 = param_2[1] - local_104;
          local_100 = param_2[2];
          local_f4 = fVar3 - local_108;
          local_d4 = *(byte *)(param_2 + 0xd) & 1;
          local_ec = param_2[7];
          local_e8 = param_2[8];
          fVar2 = param_2[10];
          fVar3 = param_2[9];
          local_d8 = local_f4 * local_e8 + local_f0 * fVar2 + param_2[0xc];
          local_dc = local_f4 * local_ec + local_f0 * fVar3 + param_2[0xb];
          local_e0 = local_e8 * 0.0 + fVar2;
          local_e4 = local_ec * 0.0 + fVar3;
          local_e8 = fVar2 * 0.0 + local_e8;
          local_ec = fVar3 * 0.0 + local_ec;
          local_fc = CONCAT44(local_f0 * local_100 + param_2[4],local_f4 * local_100 + param_2[3]);
          FUN_144b00ffc();
          if (0 < (int)uVar5) {
            fVar2 = *(float *)(lVar7 + -0x3c + (ulonglong)uVar8 * 0x48);
            lVar7 = (ulonglong)uVar5 * 0x48 + -0x3c;
            uVar6 = (ulonglong)uVar5;
            do {
              lVar4 = *(longlong *)(param_3 + 0x128);
              if (*(longlong *)(param_3 + 0x128) == 0) {
                lVar4 = lVar1;
              }
              if ((int)fVar2 <
                  (int)(*(float *)(lVar4 + -0xc + lVar7) * *(float *)(lVar4 + -4 + lVar7) +
                       *(float *)(lVar4 + lVar7))) {
                *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + 1;
                FUN_14694d382(lVar1,(int)uVar6 + -1,1);
                FUN_14694d3fc(lVar1);
              }
              lVar7 = lVar7 + -0x48;
              bVar9 = 1 < uVar6;
              uVar6 = uVar6 - 1;
            } while (bVar9);
          }
        }
      }
      goto LAB_146a0f0d9;
    }
  }
  FUN_14694d382(param_3 + 8,uVar8 - 1,1);
  FUN_14694d3fc(param_3 + 8);
LAB_146a0f0d9:
  *(int *)(param_1 + 0x230) = *(int *)(param_3 + 0x130) + -1;
  if ((local_d0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a0f168 FUN_146a0f168 body=116 status=ok
// SIG undefined FUN_146a0f168(void)

double * FUN_146a0f168(longlong param_1,double *param_2)

{
  undefined1 auStack_48 [40];
  float local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14287997e();
  FUN_144b013c4(*(undefined8 *)
                 (*(longlong *)
                   (*(longlong *)(param_1 + 0x1f8) + -8 + (longlong)*(int *)(param_1 + 0x200) * 8) +
                 0x10),local_20);
  *param_2 = *param_2 - (double)local_20[0];
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a0f1de FUN_146a0f1de body=445 status=ok
// SIG undefined FUN_146a0f1de(void)

longlong FUN_146a0f1de(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140a5071c();
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_28,"ComboButton",1);
  uVar3 = FUN_145a4e810(lVar2,local_28,0,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar3;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  uVar3 = DAT_14c98dec8;
  *(undefined8 *)(param_1 + 0x1b8) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x1c0) = DAT_14c98ded0;
  if (lVar2 == 0) {
    *(undefined8 *)(param_1 + 0x1c8) = uVar3;
    *(undefined8 *)(param_1 + 0x1d0) = 0;
  }
  else {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    lVar2 = DAT_14c98ded0;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x1c8) = DAT_14c98dec8;
    *(longlong *)(param_1 + 0x1d0) = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
  }
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined2 *)(param_1 + 0x208) = 0x101;
  *(undefined8 *)(param_1 + 0x210) = 0x3f800000;
  *(undefined1 **)(param_1 + 0x218) = &DAT_3f8000003f800000;
  *(undefined2 *)(param_1 + 0x220) = 4;
  *(undefined1 *)(param_1 + 0x224) = 1;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined4 *)(param_1 + 0x238) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x23c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x240) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x244) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x248) = 0;
  *(undefined1 *)(param_1 + 0x24c) = 1;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined1 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined4 *)(param_1 + 0x288) = 3;
  *(undefined1 *)(param_1 + 0x28c) = 1;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0x200000000;
  *(undefined2 *)(param_1 + 0x2a9) = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a0f39c FUN_146a0f39c body=73 status=ok
// SIG undefined FUN_146a0f39c(void)

longlong FUN_146a0f39c(longlong param_1,longlong *param_2)

{
  FUN_140008f88();
  *(char *)(param_1 + 0x10) = (char)param_2[2];
  FUN_144a450dc(param_1 + 0x18,param_2 + 3);
  FUN_1449db362(param_2 + 3);
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  return param_1;
}



// FUNCTION 146a0f3e6 FUN_146a0f3e6 body=98 status=ok
// SIG undefined FUN_146a0f3e6(void)

longlong FUN_146a0f3e6(longlong param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  
  if ((undefined4 *)(param_1 + 0x50) != param_2) {
    if (*(char *)(param_2 + 1) == '\x01') {
      *(undefined4 *)(param_1 + 0x50) = *param_2;
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x54) != '\x01') goto LAB_146a0f40b;
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x54) = uVar1;
  }
LAB_146a0f40b:
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 2);
  FUN_144a450dc(param_1 + 0x60,param_2 + 4);
  FUN_1449db362(param_2 + 4);
  if (*(char *)(param_2 + 1) == '\x01') {
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_1;
}



// FUNCTION 146a0f448 FUN_146a0f448 body=491 status=ok
// SIG undefined FUN_146a0f448(void)

void FUN_146a0f448(longlong param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  code *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pcVar3 = *(code **)(param_1 + 0x240);
  if (param_2 == '\0') {
    if (pcVar3 == (code *)0x0) goto LAB_146a0f475;
    local_28 = *(longlong **)(param_1 + 0x248);
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
    }
    local_30 = pcVar3;
    FUN_14697f106(param_1,&local_30);
    plVar5 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_28 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x240) = 0;
    plVar5 = *(longlong **)(param_1 + 0x248);
    if (plVar5 == (longlong *)0x0) goto LAB_146a0f475;
    *(undefined8 *)(param_1 + 0x248) = 0;
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_146a0f475;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_146a0f475;
    lVar4 = *plVar5;
  }
  else {
    if (pcVar3 != (code *)0x0) goto LAB_146a0f475;
    local_30 = FUN_146a0f8f8;
    local_28 = (longlong *)((ulonglong)local_28 & 0xffffffff00000000);
    FUN_146a0f776(local_40,param_1);
    FUN_14697ef1e(param_1,&local_30,0,local_40);
    plVar5 = local_28;
    if (local_28 == (longlong *)0x0) {
      *(code **)(param_1 + 0x240) = local_30;
      plVar6 = *(longlong **)(param_1 + 0x248);
      if (plVar6 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x248) = 0;
LAB_146a0f5c9:
        LOCK();
        plVar5 = plVar6 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
joined_r0x000146a0f5f4:
          if (iVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
      *(code **)(param_1 + 0x240) = local_30;
      plVar6 = *(longlong **)(param_1 + 0x248);
      if (local_28 == plVar6) {
        LOCK();
        plVar6 = local_28 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
          plVar6 = plVar5;
          goto joined_r0x000146a0f5f4;
        }
      }
      else {
        *(longlong **)(param_1 + 0x248) = local_28;
        if (plVar6 != (longlong *)0x0) goto LAB_146a0f5c9;
      }
    }
    plVar5 = local_28;
    if (local_28 == (longlong *)0x0) goto LAB_146a0f475;
    LOCK();
    plVar6 = local_28 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_146a0f475;
    (**(code **)*local_28)(local_28);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_146a0f475;
    lVar4 = *plVar5;
  }
  (**(code **)(lVar4 + 0x10))(plVar5);
LAB_146a0f475:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a0f634 FUN_146a0f634 body=115 status=ok
// SIG undefined FUN_146a0f634(void)

longlong * FUN_146a0f634(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146a616ac(*param_1,param_3);
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



// FUNCTION 146a0f6a8 FUN_146a0f6a8 body=205 status=ok
// SIG undefined FUN_146a0f6a8(void)

void FUN_146a0f6a8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x2a9) == '\x01') {
    *(undefined1 *)(param_1 + 0x2a9) = 0;
  }
  FUN_1449db362(param_1 + 0x290);
  FUN_1449db362(param_1 + 0x278);
  FUN_1449db362(param_1 + 0x250);
  FUN_1449db362(param_1 + 0x228);
  FUN_1449db362(param_1 + 0x1f8);
  FUN_1449db362(param_1 + 0x1e8);
  FUN_1449db362(param_1 + 0x1d8);
  plVar3 = *(longlong **)(param_1 + 0x1d0);
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
  plVar3 = *(longlong **)(param_1 + 0x1c0);
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



// FUNCTION 146a0f776 FUN_146a0f776 body=386 status=ok
// SIG undefined FUN_146a0f776(void)

longlong * FUN_146a0f776(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_146a0f887:
    *puVar5 = &PTR_LAB_149ed0600;
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
    *puVar5 = &PTR_FUN_149f0bfd0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146a0f887;
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
    *puVar5 = &PTR_LAB_149ed0600;
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
    *puVar5 = &PTR_FUN_149f0bfd0;
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



// FUNCTION 146a0f8f8 FUN_146a0f8f8 body=144 status=ok
// SIG undefined FUN_146a0f8f8(void)

ulonglong FUN_146a0f8f8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 unaff_RDI;
  ulonglong uVar5;
  
  if (*(int *)(param_1 + 0x234) == *(int *)(param_1 + 0x230)) {
    cVar4 = FUN_146a62c32(*(undefined8 *)(param_1 + 0x210));
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if (cVar4 != '\0') goto LAB_146a0f97e;
  }
  uVar5 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x210) + 0x248))(*(longlong **)(param_1 + 0x210),0,1,0);
  *(undefined8 *)(param_1 + 0x240) = 0;
  plVar3 = *(longlong **)(param_1 + 0x248);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x248) = 0;
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
    uVar5 = 0;
  }
LAB_146a0f97e:
  return uVar5 & 0xffffffff;
}



// FUNCTION 146a0f988 FUN_146a0f988 body=876 status=ok
// SIG undefined FUN_146a0f988(void)

void FUN_146a0f988(longlong param_1,float *param_2,longlong param_3)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  double dVar9;
  float fVar10;
  undefined1 auStack_128 [32];
  float local_108;
  float local_104;
  float local_100;
  undefined8 local_fc;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  byte local_d4;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar5 = FUN_1461d88a6(*(undefined8 *)(param_1 + 0x268),*(undefined8 *)(param_1 + 0x96c),0,0);
  *(undefined4 *)(param_1 + 0x244) = *(undefined4 *)(param_1 + 0x240);
  *(undefined4 *)(param_1 + 0x248) = 0;
  FUN_140252f5e(param_1,param_2,param_3);
  iVar3 = *(int *)(param_3 + 0x130);
  uVar1 = iVar3 - 2;
  *(uint *)(param_1 + 0x968) = uVar1;
  fVar2 = *(float *)(lVar5 + 0x362c);
  if (1 < iVar3) {
    lVar5 = param_3 + 8;
    lVar8 = (ulonglong)uVar1 * 0x48 + 0x18;
    uVar7 = (ulonglong)uVar1;
    dVar9 = DAT_14c8463f8;
    do {
      lVar6 = *(longlong *)(param_3 + 0x128);
      if (*(longlong *)(param_3 + 0x128) == 0) {
        lVar6 = lVar5;
      }
      fVar10 = *(float *)(lVar6 + -0x14 + lVar8);
      fVar10 = fVar10 + (float)dVar9 * fVar10 + *(float *)(lVar6 + lVar8);
      if (uVar7 == *(uint *)(param_1 + 0x968)) {
        fVar10 = (float)(int)fVar10;
        if (fVar10 < param_2[1] || fVar10 == param_2[1]) {
          FUN_14694d382(lVar5,iVar3 + -1,1);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_128);
        }
LAB_146a0fca8:
        *(int *)(param_1 + 0x248) = *(int *)(param_1 + 0x248) + 1;
        FUN_14694d382(lVar5,uVar7 & 0xffffffff,1);
        FUN_14694d3fc(lVar5);
        dVar9 = DAT_14c8463f8;
      }
      else {
        fVar10 = (float)(int)(fVar10 + (float)(int)fVar2);
        if (param_2[1] <= fVar10 && fVar10 != param_2[1]) goto LAB_146a0fca8;
      }
      lVar8 = lVar8 + -0x48;
      bVar4 = 0 < (longlong)uVar7;
      uVar7 = uVar7 - 1;
    } while (bVar4);
  }
  lVar5 = param_3 + 8;
  if (*(longlong *)(param_3 + 0x128) != 0) {
    lVar5 = *(longlong *)(param_3 + 0x128);
  }
  local_108 = *(float *)(lVar5 + -0x48 + (longlong)*(int *)(param_3 + 0x130) * 0x48);
  local_f4 = *param_2 - local_108;
  local_104 = (float)(int)fVar2;
  local_f0 = param_2[1] - local_104;
  local_100 = param_2[2];
  local_d4 = *(byte *)(param_2 + 0xd) & 1;
  local_ec = param_2[7];
  local_e8 = param_2[8];
  fVar2 = param_2[10];
  fVar10 = param_2[9];
  local_d8 = local_f4 * local_e8 + local_f0 * fVar2 + param_2[0xc];
  local_dc = local_f4 * local_ec + local_f0 * fVar10 + param_2[0xb];
  local_e0 = local_e8 * 0.0 + fVar2;
  local_e4 = local_ec * 0.0 + fVar10;
  local_e8 = fVar2 * 0.0 + local_e8;
  local_ec = fVar10 * 0.0 + local_ec;
  local_fc = CONCAT44(local_f0 * local_100 + param_2[4],local_f4 * local_100 + param_2[3]);
  FUN_144b00ffc();
  *(int *)(param_1 + 0x240) = *(int *)(param_3 + 0x130) + -1;
  if ((local_d0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a0fd56 FUN_146a0fd56 body=119 status=ok
// SIG undefined FUN_146a0fd56(void)

longlong FUN_146a0fd56(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [4];
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14287997e();
  FUN_144b013c4(*(undefined8 *)
                 (*(longlong *)
                   (*(longlong *)(param_1 + 0x1f8) + -8 + (longlong)*(int *)(param_1 + 0x200) * 8) +
                 0x10),local_20);
  *(double *)(param_2 + 8) = *(double *)(param_2 + 8) - (double)local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a0fdce FUN_146a0fdce body=2878 status=ok
// SIG undefined FUN_146a0fdce(void)

void FUN_146a0fdce(undefined *param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined ***pppuVar12;
  undefined *puVar13;
  longlong *plVar14;
  undefined1 auStack_d58 [32];
  code **local_d38;
  code **local_d30;
  undefined8 *local_d20;
  undefined1 local_d11;
  undefined1 local_d10 [8];
  longlong *local_d08;
  undefined1 local_cf1;
  undefined1 local_cf0 [8];
  longlong *local_ce8;
  undefined1 local_cd1;
  wchar_t *local_cd0;
  undefined4 local_cc8;
  undefined4 uStack_cc4;
  undefined8 local_cb8;
  undefined1 local_cb0 [4];
  undefined1 local_cac [4];
  longlong *local_ca8 [2];
  undefined1 local_c98 [16];
  undefined1 local_c88;
  undefined8 local_c80;
  undefined8 uStack_c78;
  undefined2 local_c70;
  undefined8 local_c68;
  undefined8 uStack_c60;
  undefined8 local_c58;
  longlong *local_c50;
  undefined8 local_c48;
  longlong *local_c40;
  undefined8 local_c38;
  longlong *local_c30;
  undefined8 local_c28;
  undefined8 uStack_c20;
  undefined1 local_c18;
  undefined8 local_c10;
  undefined8 uStack_c08;
  undefined8 local_bf8;
  longlong *local_bf0;
  undefined1 local_be8 [4];
  undefined1 local_be4 [4];
  longlong *local_be0 [2];
  undefined1 local_bd0 [16];
  undefined1 local_bc0;
  undefined8 local_bb8;
  undefined8 uStack_bb0;
  undefined8 local_ba8;
  undefined8 uStack_ba0;
  undefined1 local_b98;
  undefined8 local_b90;
  undefined8 uStack_b88;
  undefined8 local_b80;
  longlong *local_b78;
  longlong local_b70;
  undefined1 local_b68;
  undefined8 local_b60;
  undefined8 uStack_b58;
  undefined2 local_b50;
  undefined8 local_b48;
  undefined8 uStack_b40;
  undefined8 local_b38;
  longlong *local_b30;
  undefined4 local_b28;
  undefined1 local_b24;
  undefined1 local_b20;
  undefined8 local_b18;
  undefined8 uStack_b10;
  undefined **local_b08;
  undefined4 local_b00;
  undefined2 local_a98;
  undefined1 local_a90 [40];
  longlong *local_a68;
  longlong local_960;
  undefined1 local_958;
  undefined1 local_950 [704];
  undefined1 local_690 [192];
  undefined1 local_5d0 [24];
  undefined4 local_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined1 local_5a8;
  undefined1 local_5a0 [144];
  code *local_510;
  undefined4 local_508;
  code *local_358;
  undefined ***local_348;
  undefined **local_338;
  undefined *local_330;
  char local_328;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined *local_160;
  undefined8 local_158;
  longlong *local_150;
  undefined1 local_138 [16];
  undefined1 local_128 [32];
  undefined1 local_108;
  undefined1 local_107;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 local_a0;
  undefined1 local_98 [56];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d58;
  local_d20 = param_2;
  lVar5 = FUN_1461d88a6(*(undefined8 *)(param_1 + 0x268),*(undefined8 *)(param_1 + 0x96c),0,0);
  FUN_140a53334(&local_b08);
  local_b50 = CONCAT11(1,DAT_14c96b23a);
  local_b48 = 0;
  uStack_b40 = 0;
  local_a98 = local_b50;
  FUN_144a450dc(local_a90,&local_b48);
  FUN_1449db362(&local_b48);
  local_b70 = lVar5 + 0xc0;
  local_b68 = 1;
  local_b60 = 0;
  uStack_b58 = 0;
  local_958 = 1;
  local_960 = local_b70;
  FUN_144a450dc(local_950,&local_b60);
  FUN_1449db362(&local_b60);
  local_d38 = &local_510;
  FUN_140a554b8(&local_310,"SImage",
                ".\\Runtime/Slate/Private/Framework/MultiBox/SClippingVerticalBox.cpp",0x7e);
  FUN_140a52c70(&local_310,&local_b38,&local_b08);
  plVar4 = (longlong *)CONCAT44(uStack_304,uStack_308);
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
  FUN_140a55a86(&local_b08);
  FUN_141254448(param_1 + 0x270,lVar5 + 0x3210);
  *(undefined8 *)(param_1 + 0x590) = 0;
  *(undefined8 *)(param_1 + 0x598) = 0;
  *(undefined8 *)(param_1 + 0x5a0) = 0;
  *(undefined8 *)(param_1 + 0x5a8) = 0;
  FUN_141254448(param_1 + 0x5e0,lVar5 + 0x3210);
  *(undefined8 *)(param_1 + 0x900) = 0;
  *(undefined8 *)(param_1 + 0x908) = 0;
  *(undefined8 *)(param_1 + 0x910) = 0;
  *(undefined8 *)(param_1 + 0x918) = 0;
  local_510 = DAT_14c84635c;
  local_310 = 0;
  uStack_30c = 0;
  uStack_308 = 0;
  uStack_304 = 0x3f4ccccd;
  local_d38 = (code **)CONCAT44(local_d38._4_4_,0x3f000000);
  local_d30 = &local_510;
  FUN_145a4ebc4(&local_b08,&DAT_14c98db10,0x40800000);
  FUN_140f13d9e(param_1 + 0x5f0,&local_b08);
  local_b08 = &PTR_FUN_149ed05f0;
  if (local_a68 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_a68 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_a68)(local_a68);
      LOCK();
      piVar2 = (int *)((longlong)local_a68 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a68 + 0x10))(local_a68);
      }
    }
  }
  FUN_146a0f1de(&local_310);
  local_107 = 0;
  local_348 = (undefined ***)0x0;
  local_338 = &PTR_LAB_149f0c040;
  local_358 = FUN_1428fe02e;
  local_330 = param_1;
  local_328 = param_3;
  FUN_146a1090e(&local_310);
  local_160 = param_1 + 0x270;
  if (param_3 != '\0') {
    local_160 = param_1 + 0x5e0;
  }
  local_ba8 = 0x4100000040000000;
  uStack_ba0 = 0x4100000040000000;
  local_b98 = 1;
  local_b90 = 0;
  uStack_b88 = 0;
  local_a0 = 1;
  local_b0 = 0x40000000;
  uStack_ac = 0x41000000;
  uStack_a8 = 0x40000000;
  uStack_a4 = 0x41000000;
  FUN_144a450dc(local_98,&local_b90);
  FUN_1449db362(&local_b90);
  local_b08 = (undefined **)0x149f05f26;
  local_b00 = 0xd;
  FUN_1446e940c(local_be4,&local_b08);
  local_b08 = (undefined **)0x149ec9eb0;
  local_b00 = 5;
  FUN_1446e940c(local_be8,&local_b08);
  FUN_140208bae(local_be0,local_be8,local_be4,L"Click to expand toolbar");
  FUN_14023423e(local_bd0,local_be0);
  local_bc0 = 1;
  local_bb8 = 0;
  uStack_bb0 = 0;
  FUN_146a0f39c(&local_310,local_bd0);
  local_b08 = (undefined **)0x0;
  local_b00 = 0;
  FUN_1446efa72(&local_b08,0,2,0x10);
  local_b00 = 2;
  *local_b08 = (undefined *)&PTR_LAB_149f0a860;
  LOCK();
  UNLOCK();
  puVar13 = (undefined *)(DAT_14c758608 + 1);
  lVar7 = DAT_14c758608 + 1;
  if (puVar13 == (undefined *)0x0) {
    LOCK();
    UNLOCK();
    puVar13 = (undefined *)(DAT_14c758608 + 2);
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_b08[2] = puVar13;
  *local_b08 = (undefined *)&PTR_FUN_149f0c060;
  local_b08[3] = param_1;
  FUN_144a450dc(local_138,&local_b08);
  FUN_1449db362(&local_b08);
  local_b28 = 1;
  local_b24 = 1;
  local_b20 = 1;
  local_b18 = 0;
  uStack_b10 = 0;
  FUN_146a0f3e6(&local_310);
  local_510 = FUN_146a1099e;
  local_508 = 0;
  FUN_146a3f854(&local_b08,param_1);
  FUN_144a450dc(local_128,&local_b08);
  FUN_1449db362(&local_b08);
  local_108 = 1;
  FUN_1407679b0(&local_510);
  FUN_145aafb3e(local_5d0);
  puVar6 = (undefined8 *)(lVar5 + 0x3634);
  if (*(char *)(lVar5 + 0x3628) == '\0') {
    puVar6 = (undefined8 *)(lVar5 + 0x359c);
  }
  uVar8 = *puVar6;
  uVar10 = puVar6[1];
  local_c18 = 1;
  local_c10 = 0;
  uStack_c08 = 0;
  local_5a8 = 1;
  local_c28._0_4_ = (undefined4)uVar8;
  local_c28._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_c20._0_4_ = (undefined4)uVar10;
  uStack_c20._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
  local_5b8 = (undefined4)local_c28;
  uStack_5b4 = local_c28._4_4_;
  uStack_5b0 = (undefined4)uStack_c20;
  uStack_5ac = uStack_c20._4_4_;
  local_c28 = uVar8;
  uStack_c20 = uVar10;
  FUN_144a450dc(local_5a0,&local_c10);
  FUN_1449db362(&local_c10);
  lVar7 = FUN_145aaf900(local_5d0);
  *(undefined4 *)(lVar7 + 0x40) = 2;
  *(undefined1 *)(lVar7 + 0x44) = 1;
  local_c38 = local_b38;
  local_c30 = local_b30;
  if (local_b30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b30 + 1) = (int)local_b30[1] + 1;
    UNLOCK();
  }
  uVar8 = FUN_145aaf878(lVar7,&local_c38);
  uVar8 = FUN_145aaf822(&local_510,uVar8);
  FUN_145aafb3e(local_690);
  lVar7 = FUN_145aaf900(local_690);
  *(undefined4 *)(lVar7 + 0x40) = 2;
  *(undefined1 *)(lVar7 + 0x44) = 1;
  FUN_140a570d8(&local_b08);
  puVar11 = &DAT_14c96b1e1;
  if (*(char *)(lVar5 + 0x3628) != '\0') {
    puVar11 = &DAT_14c96b238;
  }
  local_c70 = CONCAT11(1,*puVar11);
  local_c68 = 0;
  uStack_c60 = 0;
  local_a98 = local_c70;
  FUN_144a450dc(local_a90,&local_c68);
  FUN_1449db362(&local_c68);
  local_cd0 = L"ClippingVerticalBox.Icon.More";
  local_cc8 = 0x1d;
  FUN_1446e940c(local_cac,&local_cd0);
  local_cd0 = L"ClippingVerticalBox";
  local_cc8 = 0x13;
  FUN_1446e940c(local_cb0,&local_cd0);
  FUN_140208bae(local_ca8,local_cb0,local_cac,L"More");
  FUN_14023423e(local_c98,local_ca8);
  local_c88 = 1;
  local_c80 = 0;
  uStack_c78 = 0;
  lVar9 = FUN_140a54906(&local_b08,local_c98);
  lVar5 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar5 == 0) {
    lVar5 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_cb8,"SmallText",1);
  uVar10 = FUN_140a57516(lVar5,local_cb8,0,0);
  *(undefined8 *)(lVar9 + 0x1d0) = uVar10;
  local_d38 = (code **)&local_cd1;
  FUN_140a54526(&local_cd0,"STextBlock",
                ".\\Runtime/Slate/Private/Framework/MultiBox/SClippingVerticalBox.cpp",0xb4);
  FUN_140a52852(&local_cd0,&local_c58,lVar9);
  local_c48 = local_c58;
  local_c40 = local_c50;
  if (local_c50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_c50 + 1) = (int)local_c50[1] + 1;
    UNLOCK();
  }
  uVar10 = FUN_145aaf878(lVar7,&local_c48);
  uVar8 = FUN_145aaf822(uVar8,uVar10);
  local_d38 = (code **)&local_cf1;
  FUN_14076837c(local_cf0,"SVerticalBox",
                ".\\Runtime/Slate/Private/Framework/MultiBox/SClippingVerticalBox.cpp",0xa8);
  FUN_14076784c(local_cf0,&local_bf8,uVar8);
  plVar1 = local_150;
  plVar4 = local_bf0;
  if (local_bf0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_bf0 + 1) = (int)local_bf0[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_bf0 + 1) = (int)local_bf0[1] + 1;
    UNLOCK();
  }
  local_158 = local_bf8;
  local_150 = local_bf0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar1 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_d38 = (code **)&local_d11;
  FUN_146a3ebfe(local_d10,"SComboButton",
                ".\\Runtime/Slate/Private/Framework/MultiBox/SClippingVerticalBox.cpp",0x90);
  FUN_146a0f634(local_d10,&local_b80,&local_310);
  plVar1 = local_b78;
  if (local_b78 == (longlong *)0x0) {
    *local_d20 = local_b80;
    plVar14 = (longlong *)local_d20[1];
    if (plVar14 == (longlong *)0x0) goto LAB_146a10628;
    local_d20[1] = 0;
LAB_146a108c0:
    LOCK();
    plVar1 = plVar14 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_146a10628;
    (**(code **)*plVar14)(plVar14);
    LOCK();
    piVar2 = (int *)((longlong)plVar14 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_b78 + 1) = (int)local_b78[1] + 1;
    UNLOCK();
    *local_d20 = local_b80;
    plVar14 = (longlong *)local_d20[1];
    if (local_b78 != plVar14) {
      local_d20[1] = local_b78;
      if (plVar14 == (longlong *)0x0) goto LAB_146a10628;
      goto LAB_146a108c0;
    }
    LOCK();
    plVar14 = local_b78 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 != 0) goto LAB_146a10628;
    (**(code **)*local_b78)(local_b78);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar14 = plVar1;
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
  }
LAB_146a10628:
  if (local_b78 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b78 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_b78)(local_b78);
      LOCK();
      piVar2 = (int *)((longlong)local_b78 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_b78 + 0x10))(local_b78);
      }
    }
  }
  if (local_d08 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d08 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d08)(local_d08);
      LOCK();
      piVar2 = (int *)((longlong)local_d08 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_d08 + 0x10))(local_d08);
      }
    }
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
  if (local_bf0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_bf0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_bf0)(local_bf0);
      LOCK();
      piVar2 = (int *)((longlong)local_bf0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_bf0 + 0x10))(local_bf0);
      }
    }
  }
  if (local_ce8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_ce8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_ce8)(local_ce8);
      LOCK();
      piVar2 = (int *)((longlong)local_ce8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_ce8 + 0x10))(local_ce8);
      }
    }
  }
  plVar4 = local_c40;
  if (local_c40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_c40)(local_c40);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_c50 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_c50 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_c50)(local_c50);
      LOCK();
      piVar2 = (int *)((longlong)local_c50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_c50 + 0x10))(local_c50);
      }
    }
  }
  plVar4 = (longlong *)CONCAT44(uStack_cc4,local_cc8);
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
  if (local_ca8[0] != (longlong *)0x0) {
    (**(code **)(*local_ca8[0] + 0x10))();
  }
  FUN_140a59ae6(&local_b08);
  FUN_140767f30(local_690);
  plVar4 = local_c30;
  if (local_c30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_c30)(local_c30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  FUN_140767f30(local_5d0);
  FUN_14149255e(&local_510);
  if (local_be0[0] != (longlong *)0x0) {
    (**(code **)(*local_be0[0] + 0x10))();
  }
  if (local_358 != (code *)0x0) {
    pppuVar12 = local_348;
    if (local_348 == (undefined ***)0x0) {
      pppuVar12 = &local_338;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  FUN_146a0f6a8(&local_310);
  if (local_b30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_b30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_b30)(local_b30);
      LOCK();
      piVar2 = (int *)((longlong)local_b30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_b30 + 0x10))(local_b30);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a1090e FUN_146a1090e body=143 status=ok
// SIG undefined FUN_146a1090e(void)

longlong FUN_146a1090e(longlong param_1)

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



// FUNCTION 146a1099e FUN_146a1099e body=491 status=ok
// SIG undefined FUN_146a1099e(void)

void FUN_146a1099e(longlong param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  code *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pcVar3 = *(code **)(param_1 + 0x250);
  if (param_2 == '\0') {
    if (pcVar3 == (code *)0x0) goto LAB_146a109cb;
    local_28 = *(longlong **)(param_1 + 600);
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
    }
    local_30 = pcVar3;
    FUN_14697f106(param_1,&local_30);
    plVar5 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_28 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x250) = 0;
    plVar5 = *(longlong **)(param_1 + 600);
    if (plVar5 == (longlong *)0x0) goto LAB_146a109cb;
    *(undefined8 *)(param_1 + 600) = 0;
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_146a109cb;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_146a109cb;
    lVar4 = *plVar5;
  }
  else {
    if (pcVar3 != (code *)0x0) goto LAB_146a109cb;
    local_30 = FUN_146a10d0c;
    local_28 = (longlong *)((ulonglong)local_28 & 0xffffffff00000000);
    FUN_146a10b8a(local_40,param_1);
    FUN_14697ef1e(param_1,&local_30,0,local_40);
    plVar5 = local_28;
    if (local_28 == (longlong *)0x0) {
      *(code **)(param_1 + 0x250) = local_30;
      plVar6 = *(longlong **)(param_1 + 600);
      if (plVar6 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 600) = 0;
LAB_146a10b1f:
        LOCK();
        plVar5 = plVar6 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
joined_r0x000146a10b4a:
          if (iVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
      *(code **)(param_1 + 0x250) = local_30;
      plVar6 = *(longlong **)(param_1 + 600);
      if (local_28 == plVar6) {
        LOCK();
        plVar6 = local_28 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
          plVar6 = plVar5;
          goto joined_r0x000146a10b4a;
        }
      }
      else {
        *(longlong **)(param_1 + 600) = local_28;
        if (plVar6 != (longlong *)0x0) goto LAB_146a10b1f;
      }
    }
    plVar5 = local_28;
    if (local_28 == (longlong *)0x0) goto LAB_146a109cb;
    LOCK();
    plVar6 = local_28 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_146a109cb;
    (**(code **)*local_28)(local_28);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_146a109cb;
    lVar4 = *plVar5;
  }
  (**(code **)(lVar4 + 0x10))(plVar5);
LAB_146a109cb:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a10b8a FUN_146a10b8a body=386 status=ok
// SIG undefined FUN_146a10b8a(void)

longlong * FUN_146a10b8a(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_146a10c9b:
    *puVar5 = &PTR_LAB_149ed0600;
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
    *puVar5 = &PTR_FUN_149f0c140;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146a10c9b;
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
    *puVar5 = &PTR_LAB_149ed0600;
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
    *puVar5 = &PTR_FUN_149f0c140;
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



// FUNCTION 146a10d0c FUN_146a10d0c body=144 status=ok
// SIG undefined FUN_146a10d0c(void)

ulonglong FUN_146a10d0c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 unaff_RDI;
  ulonglong uVar5;
  
  if (*(int *)(param_1 + 0x244) == *(int *)(param_1 + 0x240)) {
    cVar4 = FUN_146a62c32(*(undefined8 *)(param_1 + 0x210));
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if (cVar4 != '\0') goto LAB_146a10d92;
  }
  uVar5 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x210) + 0x248))(*(longlong **)(param_1 + 0x210),0,1,0);
  *(undefined8 *)(param_1 + 0x250) = 0;
  plVar3 = *(longlong **)(param_1 + 600);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 600) = 0;
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
    uVar5 = 0;
  }
LAB_146a10d92:
  return uVar5 & 0xffffffff;
}



// FUNCTION 146a10d9c FUN_146a10d9c body=73 status=ok
// SIG undefined FUN_146a10d9c(void)

longlong FUN_146a10d9c(longlong param_1,longlong *param_2)

{
  FUN_140008f88();
  *(char *)(param_1 + 0x10) = (char)param_2[2];
  FUN_144a450dc(param_1 + 0x18,param_2 + 3);
  FUN_1449db362(param_2 + 3);
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  return param_1;
}



// FUNCTION 146a10de6 FUN_146a10de6 body=801 status=ok
// SIG undefined FUN_146a10de6(void)

longlong FUN_146a10de6(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  lVar1 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar1 == 0) {
    lVar1 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_38,"NormalEditableTextBox",1);
  uVar2 = FUN_145817874(lVar1,local_38,0,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar2;
  FUN_144a5dc74(param_1 + 0x1b0);
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  FUN_144a5dc74(param_1 + 0x1d8);
  *(undefined1 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  FUN_144a5dc74(param_1 + 0x200);
  *(undefined1 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x237) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0x41c00000;
  *(undefined4 *)(param_1 + 0x278) = 0;
  *(undefined2 *)(param_1 + 0x27c) = 2;
  *(undefined1 *)(param_1 + 0x27e) = 0;
  *(undefined4 *)(param_1 + 0x280) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined4 *)(param_1 + 0x2a0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  *(undefined4 *)(param_1 + 0x2a8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2ac) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x2b0) = 0;
  *(undefined1 *)(param_1 + 0x2b4) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 0x2c8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2cc) = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2d4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x2d8) = 0;
  *(undefined1 *)(param_1 + 0x2dc) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined4 *)(param_1 + 0x2f0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2f4) = 0;
  *(undefined4 *)(param_1 + 0x2f8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2fc) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x300) = 0;
  *(undefined1 *)(param_1 + 0x304) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined2 *)(param_1 + 0x318) = 0x100;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined2 *)(param_1 + 0x330) = 0x100;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined2 *)(param_1 + 0x348) = 0x101;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined2 *)(param_1 + 0x360) = 0x100;
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(undefined2 *)(param_1 + 0x378) = 0x100;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined8 *)(param_1 + 0x388) = 0;
  *(undefined2 *)(param_1 + 0x390) = 0x101;
  *(undefined4 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined1 *)(param_1 + 0x3ac) = 1;
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  *(undefined2 *)(param_1 + 0x3c0) = 0x101;
  *(undefined8 *)(param_1 + 1000) = 0;
  *(undefined4 *)(param_1 + 0x3f0) = 0;
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined4 *)(param_1 + 0x400) = 0;
  *(undefined8 *)(param_1 + 0x408) = 0;
  *(undefined4 *)(param_1 + 0x410) = 0;
  *(undefined8 *)(param_1 + 0x418) = 0;
  *(undefined4 *)(param_1 + 0x420) = 0;
  *(undefined4 *)(param_1 + 0x428) = 0;
  *(undefined8 *)(param_1 + 0x3d4) = 0;
  *(undefined8 *)(param_1 + 0x3dc) = 0;
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  *(undefined1 *)(param_1 + 0x42c) = 1;
  *(undefined8 *)(param_1 + 0x430) = 0;
  *(undefined8 *)(param_1 + 0x438) = 0;
  *(undefined2 *)(param_1 + 0x440) = 0x100;
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(undefined8 *)(param_1 + 0x450) = 0;
  *(undefined2 *)(param_1 + 0x458) = 0x101;
  *(undefined8 *)(param_1 + 0x480) = 0;
  *(undefined4 *)(param_1 + 0x488) = 0;
  *(undefined8 *)(param_1 + 0x46c) = 0;
  *(undefined8 *)(param_1 + 0x474) = 0;
  *(undefined8 *)(param_1 + 0x460) = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined4 *)(param_1 + 0x490) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x494) = 0;
  *(undefined4 *)(param_1 + 0x498) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x49c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x4a0) = 0;
  *(undefined1 *)(param_1 + 0x4a4) = 0;
  *(undefined1 *)(param_1 + 0x510) = 0;
  *(undefined1 *)(param_1 + 0x4c8) = 0;
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  *(undefined8 *)(param_1 + 0x4ed) = 0;
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  *(undefined1 *)(param_1 + 0x508) = 0;
  *(undefined8 *)(param_1 + 0x4f8) = 0;
  *(undefined8 *)(param_1 + 0x500) = 0;
  *(undefined1 *)(param_1 + 0x511) = 1;
  *(undefined1 *)(param_1 + 0x528) = 0;
  *(undefined8 *)(param_1 + 0x518) = 0;
  *(undefined8 *)(param_1 + 0x520) = 0;
  *(undefined1 *)(param_1 + 0x529) = 1;
  *(undefined1 *)(param_1 + 0x541) = 0;
  *(undefined1 *)(param_1 + 0x543) = 0;
  *(undefined1 *)(param_1 + 0x545) = 0;
  *(undefined8 *)(param_1 + 0x530) = 0;
  *(undefined8 *)(param_1 + 0x538) = 0;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a11108 FUN_146a11108 body=86 status=ok
// SIG undefined FUN_146a11108(void)

longlong FUN_146a11108(longlong param_1,longlong *param_2)

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



// FUNCTION 146a1115e FUN_146a1115e body=115 status=ok
// SIG undefined FUN_146a1115e(void)

longlong * FUN_146a1115e(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146a6673e(*param_1,param_3);
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



// FUNCTION 146a111d2 FUN_146a111d2 body=526 status=ok
// SIG undefined FUN_146a111d2(void)

void FUN_146a111d2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x545) == '\x01') {
    *(undefined1 *)(param_1 + 0x545) = 0;
  }
  if (*(char *)(param_1 + 0x543) == '\x01') {
    *(undefined1 *)(param_1 + 0x543) = 0;
  }
  if (*(char *)(param_1 + 0x541) == '\x01') {
    *(undefined1 *)(param_1 + 0x541) = 0;
  }
  FUN_1449db362(param_1 + 0x530);
  FUN_1449db362(param_1 + 0x518);
  FUN_1449db362(param_1 + 0x4f8);
  plVar3 = *(longlong **)(param_1 + 0x4e8);
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
  FUN_1449db362(param_1 + 0x4d0);
  FUN_1449db362(param_1 + 0x4a8);
  FUN_1449db362(param_1 + 0x480);
  FUN_1449db362(param_1 + 0x470);
  FUN_1449db362(param_1 + 0x460);
  FUN_1449db362(param_1 + 0x448);
  FUN_1449db362(param_1 + 0x430);
  FUN_1449db362(param_1 + 0x418);
  FUN_1449db362(param_1 + 0x408);
  FUN_1449db362(param_1 + 0x3f8);
  FUN_1449db362(param_1 + 1000);
  FUN_1449db362(param_1 + 0x3d8);
  FUN_1449db362(param_1 + 0x3c8);
  FUN_1449db362(param_1 + 0x3b0);
  FUN_1449db362(param_1 + 0x398);
  FUN_1449db362(param_1 + 0x380);
  FUN_1449db362(param_1 + 0x368);
  FUN_1449db362(param_1 + 0x350);
  FUN_1449db362(param_1 + 0x338);
  FUN_1449db362(param_1 + 800);
  FUN_1449db362(param_1 + 0x308);
  FUN_1449db362(param_1 + 0x2e0);
  FUN_1449db362(param_1 + 0x2b8);
  FUN_141515cba(param_1 + 0x228);
  FUN_1449db362(param_1 + 0x218);
  if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x200) + 0x10))();
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



// FUNCTION 146a113e0 FUN_146a113e0 body=235 status=ok
// SIG undefined FUN_146a113e0(void)

undefined8 * FUN_146a113e0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_228 [47];
  undefined1 local_1f9;
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined1 local_1d0 [424];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_228;
  thunk_FUN_140a5071c(local_1d0);
  FUN_146a402e6(local_1f8,&local_1f9);
  FUN_146a114d2(local_1f8,&local_1e0,local_1d0);
  *param_2 = local_1e0;
  param_2[1] = local_1d8;
  if (local_1d8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1d8 + 1) = (int)local_1d8[1] + 1;
    UNLOCK();
    if (local_1d8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1d8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_1d8)(local_1d8);
        LOCK();
        piVar2 = (int *)((longlong)local_1d8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_1d8 + 0x10))(local_1d8);
        }
      }
    }
  }
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1f0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1f0)(local_1f0);
      LOCK();
      piVar2 = (int *)((longlong)local_1f0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1f0 + 0x10))(local_1f0);
      }
    }
  }
  FUN_140a4ff8c(local_1d0);
  if ((local_28 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a114cc thunk_FUN_140a5071c body=5 status=ok
// SIG undefined thunk_FUN_140a5071c(void)

undefined8 * thunk_FUN_140a5071c(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *param_1 = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = DAT_14c96b238;
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0x101;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa1) = 1;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar2 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x1c) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar2;
  *(undefined4 *)(param_1 + 0x1d) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar4;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[0x2e] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  return param_1;
}



// FUNCTION 146a114d2 FUN_146a114d2 body=107 status=ok
// SIG undefined FUN_146a114d2(void)

longlong * FUN_146a114d2(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1 + 8,param_3);
  lVar1 = *param_1;
  bVar4 = *(byte *)(lVar1 + 0x38);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*(longlong *)(lVar1 + 8) + 0x220))(lVar1 + 8);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(lVar1 + 0x38);
  }
  *(byte *)(lVar1 + 0x38) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x39) = *(byte *)(*param_1 + 0x39) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 146a1153e FUN_146a1153e body=1792 status=ok
// SIG undefined FUN_146a1153e(void)

void FUN_146a1153e(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 unaff_RBP;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_b98 [32];
  undefined1 *local_b78;
  undefined8 *local_b70;
  longlong *local_b68;
  undefined1 local_b59;
  undefined1 local_b58 [8];
  longlong *local_b50;
  undefined1 local_b39;
  undefined1 local_b38 [8];
  longlong *local_b30;
  undefined8 local_b20;
  longlong *local_b18;
  undefined8 local_b10;
  longlong *local_b08;
  undefined8 local_b00;
  undefined8 uStack_af8;
  undefined1 local_af0;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined1 local_ad1;
  undefined1 local_ad0 [8];
  longlong *local_ac8;
  undefined8 local_ab8;
  longlong *local_ab0 [2];
  undefined1 local_aa0 [16];
  undefined1 local_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  longlong *local_a70;
  undefined8 local_a68;
  longlong *local_a60;
  undefined8 local_a58;
  longlong *local_a50;
  undefined8 local_a48;
  longlong *local_a40;
  undefined4 local_a38;
  undefined4 uStack_a34;
  undefined4 uStack_a30;
  undefined4 uStack_a2c;
  undefined1 local_a28;
  undefined8 local_a20;
  undefined8 uStack_a18;
  undefined8 local_a08;
  longlong *local_a00;
  longlong *local_9f8;
  undefined4 local_9f0;
  undefined1 local_9e8 [424];
  undefined8 local_840;
  undefined8 local_838;
  undefined1 local_818 [16];
  undefined1 local_808 [24];
  undefined4 local_7f0;
  undefined4 uStack_7ec;
  undefined4 uStack_7e8;
  undefined4 uStack_7e4;
  undefined1 local_7e0;
  undefined1 local_7d8 [16];
  undefined4 local_7c8;
  undefined1 local_7c4;
  undefined4 local_7c0;
  undefined1 local_7bc;
  undefined8 local_748;
  longlong *local_740;
  undefined1 local_2d8 [72];
  undefined4 local_290;
  undefined1 local_28c;
  undefined1 local_218 [440];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b98;
  lVar12 = param_1[0x50];
  plVar8 = (longlong *)param_1[0x51];
  local_b70 = param_3;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar14 = plVar8 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  plVar14 = (longlong *)param_1[0x4f];
  bVar4 = true;
  if (plVar14 == (longlong *)0x0) {
    plVar14 = (longlong *)0x0;
    lVar15 = 0;
  }
  else {
    iVar7 = (int)plVar14[1];
    lVar15 = 0;
    do {
      if (iVar7 == 0) {
        plVar14 = (longlong *)0x0;
        goto LAB_146a115cb;
      }
      LOCK();
      iVar6 = (int)plVar14[1];
      bVar16 = iVar7 == iVar6;
      if (bVar16) {
        *(int *)(plVar14 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar16);
    lVar15 = param_1[0x4e];
    bVar4 = false;
  }
LAB_146a115cb:
  uVar3 = *(undefined1 *)(param_1[0x50] + 0x9c);
  local_b68 = plVar8;
  plVar8 = (longlong *)FUN_140e82300();
  local_9f8 = (longlong *)*plVar8;
  if (local_9f8 != (longlong *)0x0) {
    (**(code **)(*local_9f8 + 8))();
  }
  local_9f0 = (undefined4)plVar8[1];
  (**(code **)(*param_1 + 8))(param_1,&local_748);
  local_a08 = local_748;
  local_a00 = local_740;
  if (local_740 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_740 + 1) = (int)local_740[1] + 1;
    UNLOCK();
  }
  FUN_146a0ca44(lVar15,&local_a08,&local_9f8,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar3) & 0xffffffff);
  if (local_740 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_740 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_740)(local_740);
      LOCK();
      piVar1 = (int *)((longlong)local_740 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_740 + 0x10))(local_740);
      }
    }
  }
  if (!bVar4) {
    LOCK();
    plVar8 = plVar14 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  puVar5 = local_b70;
  local_b78 = (undefined1 *)0x0;
  puVar9 = (undefined4 *)
           (**(code **)(*param_2 + 0x48))(param_2,*local_b70,".Heading.Padding",&DAT_14c98de88);
  local_a38 = *puVar9;
  uStack_a34 = puVar9[1];
  uStack_a30 = puVar9[2];
  uStack_a2c = puVar9[3];
  local_a28 = 1;
  local_a20 = 0;
  uStack_a18 = 0;
  uVar10 = FUN_140a58d14(param_1 + 0x44);
  FUN_140a5296a(local_218);
  FUN_140a50426(local_2d8);
  local_290 = 2;
  local_28c = 1;
  uVar11 = FUN_140a52578(local_2d8);
  FUN_140a570d8(&local_748);
  FUN_1467cf38e(lVar12 + 0xb8,local_ab0);
  FUN_14023423e(local_aa0,local_ab0);
  local_a90 = 1;
  local_a88 = 0;
  uStack_a80 = 0;
  lVar12 = FUN_140a54906(&local_748,local_aa0);
  FUN_141160160(&local_ab8,*puVar5,".Heading");
  uVar13 = FUN_140a57516(param_2,local_ab8,0,0);
  *(undefined8 *)(lVar12 + 0x1d0) = uVar13;
  local_b78 = &local_ad1;
  FUN_140a54526(local_ad0,"STextBlock",
                ".\\Runtime/Slate/Private/Framework/MultiBox/SHeadingBlock.cpp",0x3d);
  FUN_140a52852(local_ad0,&local_a78,lVar12);
  local_a68 = local_a78;
  local_a60 = local_a70;
  if (local_a70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a70 + 1) = (int)local_a70[1] + 1;
    UNLOCK();
  }
  uVar11 = FUN_140a4fe8e(uVar11,&local_a68);
  uVar11 = FUN_140a52392(local_218,uVar11);
  FUN_140a50426(local_808);
  local_b00 = 0x41600000;
  uStack_af8 = 0;
  local_af0 = 1;
  local_ae8 = 0;
  uStack_ae0 = 0;
  local_7e0 = 1;
  local_7f0 = 0x41600000;
  uStack_7ec = 0;
  uStack_7e8 = 0;
  uStack_7e4 = 0;
  FUN_144a450dc(local_7d8,&local_ae8);
  FUN_1449db362(&local_ae8);
  local_7c0 = 2;
  local_7bc = 1;
  local_7c8 = 0;
  local_7c4 = 1;
  FUN_146a11c40(local_9e8);
  local_838 = 0x3f80000000000000;
  local_840 = (**(code **)(*param_2 + 0x50))(param_2,*puVar5,".Separator",0);
  local_b78 = &local_b39;
  FUN_146a40596(local_b38,"SSeparator",
                ".\\Runtime/Slate/Private/Framework/MultiBox/SHeadingBlock.cpp",0x47);
  FUN_146a11d06(local_b38,&local_b20,local_9e8);
  local_b10 = local_b20;
  local_b08 = local_b18;
  if (local_b18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b18 + 1) = (int)local_b18[1] + 1;
    UNLOCK();
  }
  uVar13 = FUN_140a4fe8e(local_808,&local_b10);
  uVar11 = FUN_140a52392(uVar11,uVar13);
  local_b78 = &local_b59;
  FUN_140a541dc(local_b58,"SHorizontalBox",
                ".\\Runtime/Slate/Private/Framework/MultiBox/SHeadingBlock.cpp",0x38);
  FUN_140a50ec6(local_b58,&local_a58,uVar11);
  local_a48 = local_a58;
  local_a40 = local_a50;
  if (local_a50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a50 + 1) = (int)local_a50[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(uVar10,&local_a48);
  plVar8 = local_a40;
  if (local_a40 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_a40 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_a40)(local_a40);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  plVar8 = local_b68;
  if (local_a50 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_a50 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_a50)(local_a50);
      LOCK();
      piVar1 = (int *)((longlong)local_a50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_a50 + 0x10))(local_a50);
      }
    }
  }
  if (local_b50 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_b50 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  plVar14 = local_b08;
  if (local_b08 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_b08 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_b08)(local_b08);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if (local_b18 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_b18 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_b18)(local_b18);
      LOCK();
      piVar1 = (int *)((longlong)local_b18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_b18 + 0x10))(local_b18);
      }
    }
  }
  if (local_b30 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_b30 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  FUN_1449db362(local_818);
  FUN_140a4ff8c(local_9e8);
  FUN_140a509a6(local_808);
  plVar14 = local_a60;
  if (local_a60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_a60 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_a60)(local_a60);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if (local_a70 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_a70 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_a70)(local_a70);
      LOCK();
      piVar1 = (int *)((longlong)local_a70 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_a70 + 0x10))(local_a70);
      }
    }
  }
  if (local_ac8 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_ac8 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_ac8)(local_ac8);
      LOCK();
      piVar1 = (int *)((longlong)local_ac8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_ac8 + 0x10))(local_ac8);
      }
    }
  }
  if (local_ab0[0] != (longlong *)0x0) {
    (**(code **)(*local_ab0[0] + 0x10))();
  }
  FUN_140a59ae6(&local_748);
  FUN_140a509a6(local_2d8);
  FUN_145ab33da(local_218);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar8 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a11c40 FUN_146a11c40 body=196 status=ok
// SIG undefined FUN_146a11c40(void)

longlong FUN_146a11c40(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140a5071c();
  plVar1 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_28,"Separator",1);
  uVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,local_28,0,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar2;
  *(undefined8 *)(param_1 + 0x1b0) = 0x4040000000000000;
  *(undefined1 **)(param_1 + 0x1b8) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0x1c0) = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x1c8) = 0;
  *(undefined1 *)(param_1 + 0x1cc) = 1;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a11d06 FUN_146a11d06 body=115 status=ok
// SIG undefined FUN_146a11d06(void)

longlong * FUN_146a11d06(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146a9b61c(*param_1,param_3);
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



// FUNCTION 146a11d7a FUN_146a11d7a body=493 status=ok
// SIG undefined FUN_146a11d7a(void)

undefined8 *
FUN_146a11d7a(undefined8 *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
             undefined8 *param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             longlong *param_9)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  FUN_146a0ec36(param_1,param_6,*param_2);
  *param_1 = &PTR_FUN_149f06100;
  plVar1 = (longlong *)*param_3;
  param_1[0x17] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x18) = (int)param_3[1];
  *(char *)(param_1 + 0x19) = (char)param_3[2];
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  FUN_1413a4324(param_1 + 0x1a,param_3 + 3);
  plVar1 = (longlong *)*param_4;
  param_1[0x1c] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x1d) = (int)param_4[1];
  *(char *)(param_1 + 0x1e) = (char)param_4[2];
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_1413a4324(param_1 + 0x1f,param_4 + 3);
  plVar1 = (longlong *)*param_9;
  param_1[0x21] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x22) = (int)param_9[1];
  *(char *)(param_1 + 0x23) = (char)param_9[2];
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  FUN_1413a4324(param_1 + 0x24,param_9 + 3);
  uVar5 = *param_5;
  uVar6 = param_5[1];
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x14);
  uVar3 = *(undefined4 *)(param_5 + 3);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x1c);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_5 + 2);
  *(undefined4 *)((longlong)param_1 + 0x144) = uVar2;
  *(undefined4 *)(param_1 + 0x29) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14c) = uVar4;
  param_1[0x26] = uVar5;
  param_1[0x27] = uVar6;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined2 *)((longlong)param_1 + 0x181) = 1;
  *(undefined1 *)((longlong)param_1 + 0x183) = param_7;
  *(undefined1 *)((longlong)param_1 + 0x184) = param_8;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x33) = 1;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a11f68 FUN_146a11f68 body=326 status=ok
// SIG undefined FUN_146a11f68(void)

void FUN_146a11f68(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  longlong local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  longlong *local_90;
  undefined4 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = (longlong *)FUN_14142e2d2(param_1 + 0xe0);
  local_68 = (longlong *)*plVar1;
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 8))();
  }
  local_60 = (undefined4)plVar1[1];
  local_58 = 1;
  local_50 = 0;
  uStack_48 = 0;
  plVar1 = (longlong *)FUN_14142e2d2(param_1 + 0xb8);
  local_90 = (longlong *)*plVar1;
  if (local_90 != (longlong *)0x0) {
    (**(code **)(*local_90 + 8))();
  }
  local_88 = (undefined4)plVar1[1];
  local_80 = 1;
  local_78 = 0;
  uStack_70 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 1;
  local_b8 = 0;
  local_b0 = param_1 + 0x130;
  FUN_146a0d7ca(param_2,&local_90,&local_68,param_1 + 0x150);
  FUN_1449db362(&local_78);
  if (local_90 != (longlong *)0x0) {
    (**(code **)(*local_90 + 0x10))();
  }
  FUN_1449db362(&local_50);
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a120b0 FUN_146a120b0 body=349 status=ok
// SIG undefined FUN_146a120b0(void)

bool FUN_146a120b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(param_1 + 0x60);
  plVar5 = *(longlong **)(param_1 + 0x68);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (lVar4 == 0) {
    FUN_142877ef0(&local_48);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x60);
    plVar3 = *(longlong **)(param_1 + 0x68);
    if (plVar3 == (longlong *)0x0) {
      local_38 = *(undefined8 *)(lVar4 + 0x50);
      uStack_30 = *(undefined8 *)(lVar4 + 0x58);
      local_48._0_4_ = *(undefined4 *)(lVar4 + 0x40);
      local_48._4_4_ = *(undefined4 *)(lVar4 + 0x44);
      uStack_40 = *(undefined4 *)(lVar4 + 0x48);
      uStack_3c = *(undefined4 *)(lVar4 + 0x4c);
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_38 = *(undefined8 *)(lVar4 + 0x50);
      uStack_30 = *(undefined8 *)(lVar4 + 0x58);
      local_48._0_4_ = *(undefined4 *)(lVar4 + 0x40);
      local_48._4_4_ = *(undefined4 *)(lVar4 + 0x44);
      uStack_40 = *(undefined4 *)(lVar4 + 0x48);
      uStack_3c = *(undefined4 *)(lVar4 + 0x4c);
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
  if (*(longlong *)(param_1 + 0x130) == 0) {
    plVar5 = &local_48;
    bVar6 = false;
  }
  else {
    bVar6 = *(longlong *)(param_1 + 0x138) != 0;
    plVar5 = &local_48;
    if (bVar6) {
      plVar5 = (longlong *)(param_1 + 0x130);
    }
  }
  if (*plVar5 != 0) {
    plVar5 = (longlong *)&uStack_40;
    if (bVar6) {
      plVar5 = (longlong *)(param_1 + 0x138);
    }
    if (*plVar5 != 0) {
      lVar4 = FUN_1458e87ca();
      bVar6 = true;
      if (*(longlong *)(lVar4 + 0xa8) == 0) {
        plVar5 = (longlong *)(*(longlong *)(lVar4 + 0x38) + 0x18);
        if (*(longlong *)(lVar4 + 0x38) == 0) {
          plVar5 = (longlong *)(lVar4 + 0xa8);
        }
        bVar6 = *plVar5 != 0;
      }
      goto LAB_146a121cf;
    }
  }
  bVar6 = false;
LAB_146a121cf:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a1220e FUN_146a1220e body=235 status=ok
// SIG undefined FUN_146a1220e(void)

undefined8 * FUN_146a1220e(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_228 [47];
  undefined1 local_1f9;
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined1 local_1d0 [424];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_228;
  thunk_FUN_140a5071c(local_1d0);
  FUN_146a40858(local_1f8,&local_1f9);
  FUN_146a12300(local_1f8,&local_1e0,local_1d0);
  *param_2 = local_1e0;
  param_2[1] = local_1d8;
  if (local_1d8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1d8 + 1) = (int)local_1d8[1] + 1;
    UNLOCK();
    if (local_1d8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1d8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_1d8)(local_1d8);
        LOCK();
        piVar2 = (int *)((longlong)local_1d8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_1d8 + 0x10))(local_1d8);
        }
      }
    }
  }
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1f0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1f0)(local_1f0);
      LOCK();
      piVar2 = (int *)((longlong)local_1f0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1f0 + 0x10))(local_1f0);
      }
    }
  }
  FUN_140a4ff8c(local_1d0);
  if ((local_28 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a122fa thunk_FUN_140a5071c body=5 status=ok
// SIG undefined thunk_FUN_140a5071c(void)

undefined8 * thunk_FUN_140a5071c(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *param_1 = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = DAT_14c96b238;
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0x101;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa1) = 1;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar2 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x1c) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar2;
  *(undefined4 *)(param_1 + 0x1d) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar4;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[0x2e] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  return param_1;
}



// FUNCTION 146a12300 FUN_146a12300 body=115 status=ok
// SIG undefined FUN_146a12300(void)

longlong * FUN_146a12300(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1 + 8,param_3);
  FUN_146a12374(*param_1);
  lVar1 = *param_1;
  bVar4 = *(byte *)(lVar1 + 0x38);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*(longlong *)(lVar1 + 8) + 0x220))(lVar1 + 8);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(lVar1 + 0x38);
  }
  *(byte *)(lVar1 + 0x38) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x39) = *(byte *)(*param_1 + 0x39) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 146a12374 FUN_146a12374 body=311 status=ok
// SIG undefined FUN_146a12374(void)

void FUN_146a12374(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_40;
  undefined1 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  local_58 = 3;
  *local_60 = &PTR_LAB_149f05990;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_60[2] = lVar2;
  *local_60 = &PTR_FUN_149f0c710;
  local_60[3] = param_1;
  local_60[4] = FUN_146a124ac;
  *(undefined4 *)(local_60 + 5) = 0;
  local_50 = 0x3f800000;
  uStack_4c = 0;
  uStack_48 = 0x3f800000;
  uStack_44 = 0x3f800000;
  local_40 = 0;
  local_3c = 1;
  local_38 = 0;
  local_30 = 0;
  FUN_140a5aaa0(&local_38,&local_60);
  FUN_140a5c8a2(param_1 + 600,param_1 + 8,&local_50);
  FUN_1449db362(&local_38);
  FUN_1449db362(&local_60);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a124ac FUN_146a124ac body=59 status=ok
// SIG undefined FUN_146a124ac(void)

undefined8 * FUN_146a124ac(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_146a189b4();
  if (cVar1 == '\0') {
    *param_2 = 0x3f800000;
    param_2[1] = &DAT_3f8000003f800000;
    *(undefined1 *)((longlong)param_2 + 0x11) = 0;
    uVar2 = 4;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0x3f80000000000000;
    uVar2 = 0;
  }
  *(undefined1 *)(param_2 + 2) = uVar2;
  return param_2;
}



// FUNCTION 146a124e8 FUN_146a124e8 body=2364 status=ok
// SIG undefined FUN_146a124e8(void)

undefined8 * FUN_146a124e8(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined8 uVar13;
  undefined1 auStack_f38 [32];
  undefined1 *local_f18;
  undefined4 local_f04;
  undefined8 *local_f00;
  undefined1 local_ef1;
  undefined8 local_ef0;
  longlong *local_ee8;
  undefined1 local_ed1;
  code *local_ed0;
  undefined4 local_ec8;
  undefined4 uStack_ec4;
  undefined1 local_eb1;
  undefined1 local_eb0 [8];
  longlong *local_ea8;
  undefined1 local_e91;
  code *local_e90;
  undefined4 local_e88;
  undefined4 uStack_e84;
  longlong *local_e78;
  undefined4 local_e70;
  undefined1 local_e68;
  undefined8 local_e60;
  undefined4 local_e58;
  undefined8 local_e50;
  undefined8 local_e48;
  longlong *local_e40;
  undefined4 local_e38;
  undefined4 uStack_e34;
  undefined4 uStack_e30;
  undefined4 uStack_e2c;
  undefined1 local_e28;
  undefined8 local_e20;
  undefined8 uStack_e18;
  longlong *local_e08;
  undefined4 local_e00;
  undefined1 local_df8;
  undefined8 local_df0;
  undefined4 local_de8;
  undefined8 local_de0;
  undefined8 local_dd8;
  longlong *local_dd0;
  undefined8 local_dc8;
  longlong *local_dc0;
  undefined4 local_db8;
  undefined1 local_db4;
  undefined8 local_db0;
  undefined8 uStack_da8;
  undefined8 local_da0;
  longlong *local_d98;
  undefined8 local_d90;
  code *local_d88;
  undefined8 uStack_d80;
  undefined1 local_d78;
  undefined8 local_d70;
  undefined8 uStack_d68;
  undefined8 local_bb8;
  code *local_918;
  undefined4 local_910;
  undefined8 local_770;
  longlong *local_768;
  undefined8 local_760;
  undefined4 local_74c;
  undefined4 local_748;
  undefined4 uStack_744;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  undefined1 local_738;
  undefined1 local_730 [56];
  undefined1 local_6f8 [80];
  undefined4 local_6a8;
  undefined1 local_5a8 [424];
  undefined8 local_400;
  longlong *local_3f8;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined1 local_3d8;
  undefined1 auStack_3d0 [344];
  undefined1 local_278 [424];
  undefined8 local_d0;
  longlong *local_c8;
  undefined1 auStack_a0 [32];
  undefined4 local_80;
  undefined1 local_7c;
  undefined1 local_78 [24];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f38;
  plVar12 = *(longlong **)(param_3 + 0xa8);
  local_f00 = param_2;
  FUN_141160160(&local_d90,*(undefined8 *)(param_3 + 0xb0),".Button");
  uVar9 = FUN_141492734(plVar12,local_d90,0,0);
  *(undefined8 *)(param_1 + 0x2d8) = uVar9;
  FUN_146a12e26(local_278);
  local_db8 = 0;
  local_db4 = 1;
  local_db0 = 0;
  uStack_da8 = 0;
  local_80 = 0;
  local_7c = 1;
  FUN_144a450dc(local_78,&local_db0);
  FUN_1449db362(&local_db0);
  local_918 = FUN_146a0c3ee;
  local_910 = 0;
  FUN_146a40fa2(&local_d88,param_1);
  FUN_144a450dc(auStack_a0,&local_d88);
  FUN_1449db362(&local_d88);
  FUN_140a562d0(local_5a8);
  local_d88 = FUN_146a13114;
  uStack_d80 = (ulonglong)uStack_d80._4_4_ << 0x20;
  FUN_146a13060(local_5a8,param_1,&local_d88);
  local_d88 = (code *)0x0;
  uStack_d80 = 0;
  local_d78 = 1;
  local_d70 = 0;
  uStack_d68 = 0;
  local_3e8 = 0;
  uStack_3e0 = 0;
  local_3d8 = 1;
  FUN_144a450dc(auStack_3d0,&local_d70);
  FUN_1449db362(&local_d70);
  FUN_145ab3d24(&local_918);
  FUN_1446ddc76(&local_de0,"NoBorder",1);
  local_760 = FUN_141492734(plVar12,local_de0,0,0);
  local_6a8 = 1;
  local_e08 = *(longlong **)(param_3 + 0x58);
  if (local_e08 != (longlong *)0x0) {
    (**(code **)(*local_e08 + 8))();
  }
  local_e00 = *(undefined4 *)(param_3 + 0x60);
  local_df8 = *(undefined1 *)(param_3 + 0x68);
  local_df0 = 0;
  local_de8 = 0;
  FUN_1413a4324(&local_df0,param_3 + 0x70);
  local_d88 = FUN_146a1329a;
  uStack_d80 = uStack_d80 & 0xffffffff00000000;
  FUN_146a131ac(&local_918,param_1,&local_d88,&local_e08);
  local_f18 = (undefined1 *)0x0;
  puVar10 = (undefined4 *)
            (**(code **)(*plVar12 + 0x48))
                      (plVar12,*(undefined8 *)(param_3 + 0xb0),".MenuBar.Padding",&DAT_14c98de88);
  local_e38 = *puVar10;
  uStack_e34 = puVar10[1];
  uStack_e30 = puVar10[2];
  uStack_e2c = puVar10[3];
  local_e28 = 1;
  local_e20 = 0;
  uStack_e18 = 0;
  local_738 = 1;
  local_748 = local_e38;
  uStack_744 = uStack_e34;
  uStack_740 = uStack_e30;
  uStack_73c = uStack_e2c;
  FUN_144a450dc(local_730,&local_e20);
  FUN_1449db362(&local_e20);
  local_d88 = FUN_146a1348c;
  uStack_d80 = uStack_d80 & 0xffffffff00000000;
  FUN_146a133c2(&local_918,param_1,&local_d88);
  local_74c = 2;
  FUN_140a570d8(&local_d88);
  FUN_141160160(&local_e50,*(undefined8 *)(param_3 + 0xb0),".Label");
  local_bb8 = FUN_140a57516(plVar12,local_e50,0,0);
  local_e78 = *(longlong **)(param_3 + 0x30);
  if (local_e78 != (longlong *)0x0) {
    (**(code **)(*local_e78 + 8))();
  }
  local_e70 = *(undefined4 *)(param_3 + 0x38);
  local_e68 = *(undefined1 *)(param_3 + 0x40);
  local_e60 = 0;
  local_e58 = 0;
  FUN_1413a4324(&local_e60,param_3 + 0x48);
  uVar9 = FUN_140a54906(&local_d88,&local_e78);
  plVar12 = *(longlong **)(param_1 + 0x278);
  if (plVar12 == (longlong *)0x0) {
    local_f04 = (undefined4)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
    plVar12 = (longlong *)0x0;
    uVar13 = 0;
  }
  else {
    uVar11 = (ulonglong)*(uint *)(plVar12 + 1);
    uVar13 = 0;
    do {
      uVar8 = (uint)uVar11;
      if (uVar8 == 0) {
        local_f04 = (undefined4)CONCAT71((int7)(uVar11 >> 8),1);
        plVar12 = (longlong *)0x0;
        goto LAB_146a12876;
      }
      LOCK();
      uVar5 = *(uint *)(plVar12 + 1);
      if (uVar8 == uVar5) {
        *(uint *)(plVar12 + 1) = uVar8 + 1;
      }
      else {
        uVar11 = (ulonglong)uVar5;
      }
      UNLOCK();
    } while (uVar8 != uVar5);
    uVar13 = *(undefined8 *)(param_1 + 0x270);
    local_f04 = 0;
  }
LAB_146a12876:
  local_e90 = FUN_146a0c98a;
  local_e88 = 0;
  FUN_146a13552(uVar9,uVar13);
  local_f18 = &local_e91;
  FUN_140a54526(&local_e90,"STextBlock",
                ".\\Runtime/Slate/Private/Framework/MultiBox/SMenuEntryBlock.cpp",0x11d);
  FUN_140a52852(&local_e90,&local_e48,uVar9);
  plVar4 = local_768;
  plVar7 = local_e40;
  if (local_e40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_e40 + 1) = (int)local_e40[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_e40 + 1) = (int)local_e40[1] + 1;
    UNLOCK();
  }
  local_770 = local_e48;
  local_768 = local_e40;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  local_ed0 = FUN_146a1362a;
  local_ec8 = 0;
  FUN_146a42b36(local_eb0,param_1);
  FUN_144a450dc(local_6f8,local_eb0);
  FUN_1449db362(local_eb0);
  local_f18 = &local_eb1;
  FUN_145ab3730(local_eb0,"SButton",
                ".\\Runtime/Slate/Private/Framework/MultiBox/SMenuEntryBlock.cpp",0x110);
  FUN_145ab34ca(local_eb0,&local_dd8,&local_918);
  plVar6 = local_3f8;
  plVar4 = local_dd0;
  if (local_dd0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_dd0 + 1) = (int)local_dd0[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_dd0 + 1) = (int)local_dd0[1] + 1;
    UNLOCK();
  }
  local_400 = local_dd8;
  local_3f8 = local_dd0;
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
  local_f18 = &local_ed1;
  FUN_140a55c32(&local_ed0,"SBorder",
                ".\\Runtime/Slate/Private/Framework/MultiBox/SMenuEntryBlock.cpp",0x10b);
  FUN_140a530e4(&local_ed0,&local_dc8,local_5a8);
  plVar2 = local_c8;
  plVar6 = local_dc0;
  if (local_dc0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_dc0 + 1) = (int)local_dc0[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_dc0 + 1) = (int)local_dc0[1] + 1;
    UNLOCK();
  }
  local_d0 = local_dc8;
  local_c8 = local_dc0;
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
  local_f18 = &local_ef1;
  FUN_146a40d60(&local_ef0,"SMenuAnchor",
                ".\\Runtime/Slate/Private/Framework/MultiBox/SMenuEntryBlock.cpp",0x106);
  plVar2 = local_ee8;
  if (local_ee8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_ee8 + 1) = (int)local_ee8[1] + 1;
    UNLOCK();
  }
  FUN_146a13676(&local_ef0,&local_da0,local_278);
  *local_f00 = local_da0;
  local_f00[1] = local_d98;
  if (local_d98 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_d98 + 1) = (int)local_d98[1] + 1;
    UNLOCK();
    if (local_d98 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_d98 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_d98)(local_d98);
        LOCK();
        piVar1 = (int *)((longlong)local_d98 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_d98 + 0x10))(local_d98);
        }
      }
    }
  }
  if (local_ee8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_ee8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_ee8)(local_ee8);
      LOCK();
      piVar1 = (int *)((longlong)local_ee8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_ee8 + 0x10))(local_ee8);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_dc0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_dc0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_dc0)(local_dc0);
      LOCK();
      piVar1 = (int *)((longlong)local_dc0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_dc0 + 0x10))(local_dc0);
      }
    }
  }
  plVar6 = (longlong *)CONCAT44(uStack_ec4,local_ec8);
  if (plVar6 != (longlong *)0x0) {
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if (local_dd0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_dd0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_dd0)(local_dd0);
      LOCK();
      piVar1 = (int *)((longlong)local_dd0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_dd0 + 0x10))(local_dd0);
      }
    }
  }
  if (local_ea8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_ea8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_ea8)(local_ea8);
      LOCK();
      piVar1 = (int *)((longlong)local_ea8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_ea8 + 0x10))(local_ea8);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
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
  if (local_e40 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_e40 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_e40)(local_e40);
      LOCK();
      piVar1 = (int *)((longlong)local_e40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_e40 + 0x10))(local_e40);
      }
    }
  }
  plVar7 = (longlong *)CONCAT44(uStack_e84,local_e88);
  if (plVar7 != (longlong *)0x0) {
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
  if ((char)local_f04 == '\0') {
    LOCK();
    plVar7 = plVar12 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  FUN_140a59ae6(&local_d88);
  FUN_145ab35f4(&local_918);
  FUN_140a59028(local_5a8);
  FUN_146a136ea(local_278);
  *(undefined8 *)(param_1 + 0x2c8) = local_ef0;
  plVar12 = *(longlong **)(param_1 + 0x2d0);
  if (plVar12 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar12 = *(longlong **)(param_1 + 0x2d0);
    }
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x2d0) = plVar2;
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar2 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_f38) == DAT_14c707940) {
    return local_f00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a12e26 FUN_146a12e26 body=568 status=ok
// SIG undefined FUN_146a12e26(void)

longlong FUN_146a12e26(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_548 [32];
  undefined1 *local_528;
  undefined1 local_519;
  wchar_t *local_518;
  undefined4 local_510;
  undefined4 uStack_50c;
  undefined1 local_500 [4];
  undefined1 local_4fc [4];
  longlong *local_4f8 [2];
  undefined1 local_4e8 [16];
  undefined1 local_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  longlong *local_4b8;
  undefined1 local_4b0 [1136];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_548;
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = DAT_14c98dec8;
  lVar4 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x1b0) = DAT_14c98ded0;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  FUN_140a570d8(local_4b0);
  local_518 = L"NoMenuContent";
  local_510 = 0xd;
  FUN_1446e940c(local_4fc,&local_518);
  local_518 = L"SMenuAnchor";
  local_510 = 0xb;
  FUN_1446e940c(local_500,&local_518);
  FUN_140208bae(local_4f8,local_500,local_4fc,L"No Menu Content Assigned; use .MenuContent");
  FUN_14023423e(local_4e8,local_4f8);
  local_4d8 = 1;
  local_4d0 = 0;
  uStack_4c8 = 0;
  uVar5 = FUN_140a54906(local_4b0,local_4e8);
  local_528 = &local_519;
  FUN_140a54526(&local_518,"STextBlock","Runtime\\Slate\\Public\\Widgets/Input/SMenuAnchor.h",0x25);
  FUN_140a52852(&local_518,&local_4c0,uVar5);
  *(undefined8 *)(param_1 + 0x1c8) = local_4c0;
  *(longlong **)(param_1 + 0x1d0) = local_4b8;
  if (local_4b8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_4b8 + 1) = (int)local_4b8[1] + 1;
    UNLOCK();
    if (local_4b8 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_4b8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_4b8)(local_4b8);
        LOCK();
        piVar1 = (int *)((longlong)local_4b8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_4b8 + 0x10))(local_4b8);
        }
      }
    }
  }
  plVar3 = (longlong *)CONCAT44(uStack_50c,local_510);
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
  if (local_4f8[0] != (longlong *)0x0) {
    (**(code **)(*local_4f8[0] + 0x10))();
  }
  FUN_140a59ae6(local_4b0);
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e4) = 0;
  *(undefined8 *)(param_1 + 0x1ec) = 0;
  *(undefined1 *)(param_1 + 0x1fc) = 1;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined1 *)(param_1 + 0x210) = 1;
  *(undefined4 *)(param_1 + 0x212) = 0x10100;
  *(undefined1 *)(param_1 + 0x216) = 1;
  if ((local_40 ^ (ulonglong)auStack_548) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a13060 FUN_146a13060 body=178 status=ok
// SIG undefined FUN_146a13060(void)

longlong FUN_146a13060(longlong param_1,undefined8 param_2,undefined8 *param_3)

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
  FUN_146a414f0(local_50,param_2,&local_40);
  local_40 = 0;
  local_38 = CONCAT31(local_38._1_3_,1);
  local_30 = 0;
  local_28 = 0;
  FUN_140a5c3e8(&local_30,local_50);
  *(undefined1 *)(param_1 + 0x230) = (undefined1)local_38;
  *(undefined8 *)(param_1 + 0x228) = local_40;
  FUN_144a450dc(param_1 + 0x238,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_50);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a13114 FUN_146a13114 body=152 status=ok
// SIG undefined FUN_146a13114(void)

longlong FUN_146a13114(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  
  plVar8 = *(longlong **)(param_1 + 0x2d0);
  bVar3 = true;
  if (plVar8 == (longlong *)0x0) {
LAB_146a13160:
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar8[1];
    do {
      if (iVar6 == 0) goto LAB_146a13160;
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar9 = iVar6 == iVar4;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar9);
    if ((*(longlong *)(param_1 + 0x2c8) != 0) && (cVar5 = FUN_146a62c32(), cVar5 != '\0')) {
      lVar7 = *(longlong *)(param_1 + 0x2d8) + 0x170;
      goto LAB_146a13180;
    }
    bVar3 = false;
  }
  if (*(char *)(param_1 + 0x43) == '\x01') {
    lVar7 = *(longlong *)(param_1 + 0x2d8) + 0xc0;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x2d8) + 0x10;
  }
  if (bVar3) {
    return lVar7;
  }
LAB_146a13180:
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
  return lVar7;
}



// FUNCTION 146a131ac FUN_146a131ac body=236 status=ok
// SIG undefined FUN_146a131ac(void)

longlong FUN_146a131ac(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  longlong *local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = *(undefined4 *)(param_3 + 1);
  local_58 = (longlong *)*param_3;
  FUN_146a419e2(local_68);
  FUN_144a5dc74(&local_58);
  local_48 = 1;
  local_40 = 0;
  local_38 = 0;
  FUN_1413a4324(&local_40,local_68);
  FUN_140008f88(param_1,&local_58);
  *(undefined1 *)(param_1 + 0x10) = local_48;
  FUN_144a450dc(param_1 + 0x18,&local_40);
  FUN_1449db362(&local_40);
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  FUN_1449db362(local_68);
  FUN_1449db362(param_4 + 3);
  if ((longlong *)*param_4 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_4 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a1329a FUN_146a1329a body=295 status=ok
// SIG undefined FUN_146a1329a(void)

longlong * FUN_146a1329a(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar6 = *(longlong **)(param_1 + 0x278);
  bVar3 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    uVar7 = 0;
  }
  else {
    iVar5 = (int)plVar6[1];
    uVar7 = 0;
    do {
      if (iVar5 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_146a132f5;
      }
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    uVar7 = *(undefined8 *)(param_1 + 0x270);
    bVar3 = false;
  }
LAB_146a132f5:
  FUN_146a86ee6(uVar7,&local_48);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if (!bVar3) {
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
  if (local_48 == 0) {
    plVar6 = (longlong *)FUN_14142e2d2(param_3);
  }
  else {
    plVar6 = (longlong *)FUN_140e82300();
  }
  plVar2 = (longlong *)*plVar6;
  *param_2 = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_2 + 1) = (int)plVar6[1];
  FUN_1449db362(param_3 + 3);
  if ((longlong *)*param_3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_3 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a133c2 FUN_146a133c2 body=200 status=ok
// SIG undefined FUN_146a133c2(void)

longlong FUN_146a133c2(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_40 = *(undefined4 *)(param_3 + 1);
  local_48 = *param_3;
  FUN_146a420ea(local_58,param_2,&local_48);
  local_48 = 0x3f800000;
  uStack_40 = 0x3f800000;
  uStack_3c = 0x3f800000;
  local_38 = local_38 & 0xffffff00;
  local_34 = 1;
  local_30 = 0;
  local_28 = 0;
  FUN_140a5aaa0(&local_30,local_58);
  *(uint *)(param_1 + 0x308) = local_38;
  *(undefined4 *)(param_1 + 0x2f8) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x2fc) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x300) = uStack_40;
  *(undefined4 *)(param_1 + 0x304) = uStack_3c;
  *(undefined1 *)(param_1 + 0x30c) = local_34;
  FUN_144a450dc(param_1 + 0x310,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a1348c FUN_146a1348c body=197 status=ok
// SIG undefined FUN_146a1348c(void)

undefined4 * FUN_146a1348c(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  plVar8 = *(longlong **)(param_1 + 0x2d0);
  bVar4 = true;
  if (plVar8 == (longlong *)0x0) {
LAB_146a134ed:
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar7 = (int)plVar8[1];
    do {
      if (iVar7 == 0) goto LAB_146a134ed;
      LOCK();
      iVar5 = (int)plVar8[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    if ((*(longlong *)(param_1 + 0x2c8) != 0) && (cVar6 = FUN_146a62c32(), cVar6 != '\0')) {
      lVar3 = *(longlong *)(param_1 + 0x2d8);
      param_2[4] = *(undefined4 *)(lVar3 + 0x308);
      uVar10 = *(undefined4 *)(lVar3 + 0x2fc);
      uVar11 = *(undefined4 *)(lVar3 + 0x300);
      uVar12 = *(undefined4 *)(lVar3 + 0x304);
      *param_2 = *(undefined4 *)(lVar3 + 0x2f8);
      param_2[1] = uVar10;
      param_2[2] = uVar11;
      param_2[3] = uVar12;
      goto LAB_146a13525;
    }
    bVar4 = false;
  }
  lVar3 = *(longlong *)(param_1 + 0x2d8);
  if (*(char *)(param_1 + 0x43) == '\0') {
    param_2[4] = *(undefined4 *)(lVar3 + 0x2e0);
    uVar10 = *(undefined4 *)(lVar3 + 0x2d0);
    uVar11 = *(undefined4 *)(lVar3 + 0x2d4);
    uVar12 = *(undefined4 *)(lVar3 + 0x2d8);
    uVar13 = *(undefined4 *)(lVar3 + 0x2dc);
  }
  else {
    param_2[4] = *(undefined4 *)(lVar3 + 0x2f4);
    uVar10 = *(undefined4 *)(lVar3 + 0x2e4);
    uVar11 = *(undefined4 *)(lVar3 + 0x2e8);
    uVar12 = *(undefined4 *)(lVar3 + 0x2ec);
    uVar13 = *(undefined4 *)(lVar3 + 0x2f0);
  }
  *param_2 = uVar10;
  param_2[1] = uVar11;
  param_2[2] = uVar12;
  param_2[3] = uVar13;
  if (bVar4) {
    return param_2;
  }
LAB_146a13525:
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
  return param_2;
}



// FUNCTION 146a13552 FUN_146a13552 body=215 status=ok
// SIG undefined FUN_146a13552(void)

longlong FUN_146a13552(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  longlong *local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *(undefined4 *)(param_3 + 1);
  local_50 = (longlong *)*param_3;
  FUN_146a4260c(local_60);
  FUN_144a5dc74(&local_50);
  local_40 = 1;
  local_38 = 0;
  local_30 = 0;
  FUN_1413a4324(&local_38,local_60);
  FUN_140008f88(param_1 + 0x330,&local_50);
  *(undefined1 *)(param_1 + 0x340) = local_40;
  FUN_144a450dc(param_1 + 0x348,&local_38);
  FUN_1449db362(&local_38);
  if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x10))();
  }
  FUN_1449db362(local_60);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a1362a FUN_146a1362a body=76 status=ok
// SIG undefined FUN_146a1362a(void)

undefined1 * FUN_146a1362a(undefined8 param_1,undefined1 *param_2)

{
  FUN_146a1a656();
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 146a13676 FUN_146a13676 body=115 status=ok
// SIG undefined FUN_146a13676(void)

longlong * FUN_146a13676(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146a62724(*param_1,param_3);
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



// FUNCTION 146a136ea FUN_146a136ea body=157 status=ok
// SIG undefined FUN_146a136ea(void)

void FUN_146a136ea(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x212) == '\x01') {
    *(undefined1 *)(param_1 + 0x212) = 0;
  }
  FUN_1449db362(param_1 + 0x200);
  FUN_1449db362(param_1 + 0x1e8);
  FUN_1449db362(param_1 + 0x1d8);
  plVar3 = *(longlong **)(param_1 + 0x1d0);
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



// FUNCTION 146a13788 FUN_146a13788 body=340 status=ok
// SIG undefined FUN_146a13788(void)

longlong * FUN_146a13788(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1414927ae(*param_2,&local_48);
  FUN_1446f470e(&local_50,L"STextBlock",1);
  if (local_48 == local_50) {
    *param_1 = (longlong)*param_2;
    lVar5 = param_2[1];
  }
  else {
    plVar6 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x180))();
    iVar4 = (**(code **)*plVar6)(plVar6);
    if (0 < iVar4) {
      iVar7 = 0;
      do {
        (**(code **)(*plVar6 + 0x10))(plVar6,local_60,iVar7);
        FUN_146a13788(param_1,local_60);
        if (*param_1 != DAT_14c98dec8) goto LAB_146a137f4;
        plVar3 = (longlong *)param_1[1];
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
        iVar7 = iVar7 + 1;
      } while (iVar4 != iVar7);
    }
    *param_1 = DAT_14c98dec8;
    lVar5 = DAT_14c98ded0;
  }
  param_1[1] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
LAB_146a137f4:
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a138de FUN_146a138de body=514 status=ok
// SIG undefined FUN_146a138de(void)

char * FUN_146a138de(longlong param_1,char *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  undefined2 local_50;
  longlong *local_48;
  int local_40;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = *(undefined2 *)(*(longlong *)(param_1 + 0x280) + 0xa0);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_140fe25fc(&local_48,*(longlong *)(param_1 + 0x280) + 0xa8);
  cVar6 = local_50._1_1_;
  FUN_1449db362(&local_48);
  if (cVar6 == '\x01') {
    local_50 = *(undefined2 *)(*(longlong *)(param_1 + 0x280) + 0xa0);
    local_48 = (longlong *)0x0;
    local_40 = 0;
    FUN_140fe25fc(&local_48,*(longlong *)(param_1 + 0x280) + 0xa8);
    if ((local_48 != (longlong *)0x0 && local_40 != 0) &&
       (cVar6 = (**(code **)(*local_48 + 0x30))(), cVar6 != '\0')) {
      plVar8 = local_48;
      if (local_40 == 0) {
        plVar8 = (longlong *)0x0;
      }
      (**(code **)(*plVar8 + 0x58))(plVar8,&local_31);
      local_50 = CONCAT11(local_50._1_1_,local_31);
    }
    cVar6 = (char)local_50;
    *param_2 = (char)local_50;
    FUN_1449db362(&local_48);
    if (cVar6 != DAT_14c96b238) goto LAB_146a13a84;
  }
  lVar7 = *(longlong *)(param_1 + 0x280);
  lVar3 = *(longlong *)(lVar7 + 0x70);
  plVar8 = *(longlong **)(lVar7 + 0x78);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    lVar7 = *(longlong *)(param_1 + 0x280);
  }
  lVar4 = *(longlong *)(lVar7 + 0x60);
  plVar5 = *(longlong **)(lVar7 + 0x68);
  if (plVar5 == (longlong *)0x0) {
    if ((lVar3 != 0) && (lVar4 != 0)) {
      local_58 = (longlong *)0x0;
      goto LAB_146a13a31;
    }
LAB_146a13acd:
    FUN_1469bb3fe(lVar7 + 0x18,param_2);
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    if ((lVar3 == 0) || (lVar4 == 0)) {
      lVar7 = *(longlong *)(param_1 + 0x280);
      goto LAB_146a13acd;
    }
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    local_58 = plVar5;
LAB_146a13a31:
    local_60 = lVar4;
    FUN_1469bb34e(lVar3,param_2,&local_60);
  }
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
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar8 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
LAB_146a13a84:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a13ae2 FUN_146a13ae2 body=8552 status=ok
// SIG undefined FUN_146a13ae2(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_146a13ae2(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  code *pcVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  byte *pbVar19;
  undefined8 uVar20;
  longlong *plVar21;
  char *pcVar22;
  byte bVar23;
  uint uVar24;
  code *pcVar25;
  longlong *plVar26;
  bool bVar27;
  bool bVar28;
  float fVar29;
  undefined1 auStack_1b38 [32];
  longlong **local_1b18;
  undefined1 local_1b10;
  byte local_1b02;
  byte local_1b01;
  longlong *local_1b00;
  longlong local_1af8;
  undefined8 local_1af0;
  undefined8 local_1ae8;
  longlong *local_1ae0;
  uint local_1ad4;
  longlong *local_1ad0;
  longlong *local_1ac8;
  longlong *local_1ac0;
  undefined8 local_1ab8;
  longlong *local_1ab0;
  longlong *local_1aa8;
  undefined8 *local_1aa0;
  undefined1 *local_1a98;
  longlong local_1a90;
  undefined1 local_1a88;
  undefined8 local_1a80;
  undefined8 uStack_1a78;
  undefined8 local_1a70;
  undefined8 uStack_1a68;
  undefined1 local_1a60;
  undefined8 local_1a58;
  undefined8 uStack_1a50;
  undefined4 local_1a48;
  undefined4 uStack_1a44;
  undefined4 uStack_1a40;
  undefined4 uStack_1a3c;
  undefined4 uStack_1a38;
  undefined1 uStack_1a34;
  undefined8 local_1a30;
  undefined4 local_1a28;
  undefined2 local_1a18;
  undefined8 local_1a10;
  undefined8 uStack_1a08;
  undefined8 local_1a00;
  undefined1 *puStack_19f8;
  undefined4 local_19f0;
  undefined1 local_19ec;
  undefined8 local_19e8;
  undefined8 uStack_19e0;
  undefined2 local_19d8;
  undefined8 local_19d0;
  undefined8 uStack_19c8;
  undefined8 local_19c0;
  undefined8 uStack_19b8;
  undefined1 local_19b0;
  undefined8 local_19a8;
  undefined8 uStack_19a0;
  undefined1 local_1991;
  undefined8 local_1990;
  longlong *local_1988;
  undefined1 local_1971;
  undefined8 local_1970;
  longlong *local_1968;
  undefined1 local_1951;
  undefined8 local_1950;
  longlong *local_1948;
  longlong *local_1938;
  undefined4 local_1930;
  undefined1 local_1928;
  undefined8 local_1920;
  undefined4 local_1918;
  undefined8 local_1910;
  undefined1 *puStack_1908;
  undefined4 local_1900;
  undefined1 local_18fc;
  undefined8 local_18f8;
  undefined8 uStack_18f0;
  undefined8 local_18e8;
  undefined8 local_18e0;
  longlong *local_18d8;
  undefined8 local_18d0;
  undefined8 uStack_18c8;
  undefined1 local_18c0;
  undefined8 local_18b8;
  undefined8 uStack_18b0;
  undefined2 local_18a8;
  undefined8 local_18a0;
  undefined8 uStack_1898;
  undefined8 local_1890;
  longlong *local_1888;
  undefined8 local_1880;
  longlong *local_1878;
  undefined8 local_1870;
  undefined8 uStack_1868;
  undefined1 local_1860;
  undefined8 local_1858;
  undefined8 uStack_1850;
  undefined1 local_1841;
  undefined8 local_1840;
  longlong *local_1838;
  longlong *local_1828;
  undefined4 local_1820;
  undefined1 local_1818;
  undefined8 local_1810;
  undefined4 local_1808;
  undefined8 local_1800;
  undefined8 local_17f8;
  longlong *local_17f0;
  undefined8 local_17e8;
  longlong *local_17e0;
  undefined8 local_17d8;
  undefined8 uStack_17d0;
  undefined1 local_17c8;
  undefined8 local_17c0;
  undefined8 uStack_17b8;
  undefined4 local_17b0;
  undefined1 local_17ac;
  undefined8 local_17a8;
  undefined8 uStack_17a0;
  undefined1 local_1791;
  undefined8 local_1790;
  longlong *local_1788;
  undefined1 local_1771;
  undefined8 local_1770;
  longlong *local_1768;
  float local_1758;
  undefined1 local_1754;
  undefined8 local_1750;
  undefined8 uStack_1748;
  float local_1740;
  undefined1 local_173c;
  undefined8 local_1738;
  undefined8 uStack_1730;
  undefined8 local_1728;
  longlong *local_1720;
  float local_1718;
  undefined1 local_1714;
  undefined8 local_1710;
  undefined8 uStack_1708;
  float local_1700;
  undefined1 local_16fc;
  undefined8 local_16f8;
  undefined8 uStack_16f0;
  undefined2 local_16e8;
  undefined8 local_16e0;
  undefined8 uStack_16d8;
  undefined8 **local_16d0;
  longlong *plStack_16c8;
  longlong *local_16c0;
  longlong *local_16b8;
  undefined8 local_16b0;
  undefined8 uStack_16a8;
  undefined1 local_16a0;
  undefined8 local_1698;
  undefined8 uStack_1690;
  longlong *local_1688;
  longlong *local_1680;
  code *local_1678;
  undefined8 local_1670;
  undefined4 uStack_1668;
  undefined4 uStack_1664;
  undefined2 uStack_1660;
  undefined2 uStack_165e;
  undefined1 uStack_165c;
  undefined8 local_1658;
  undefined8 uStack_1650;
  undefined1 local_1648 [16];
  undefined1 local_1638;
  undefined8 local_1630;
  undefined8 uStack_1628;
  double local_1620;
  double dStack_1618;
  undefined1 local_1610;
  undefined8 local_1608;
  undefined8 uStack_1600;
  undefined4 local_15f8;
  undefined4 uStack_15f4;
  undefined4 local_15f0;
  undefined4 local_15ec;
  undefined1 local_15e8;
  undefined8 local_15e0;
  undefined8 uStack_15d8;
  longlong local_15d0;
  undefined1 local_15c8;
  undefined8 local_15c0;
  undefined8 uStack_15b8;
  undefined8 local_15b0;
  undefined1 *puStack_15a8;
  undefined4 local_15a0;
  undefined1 local_159c;
  undefined8 local_1598;
  undefined8 uStack_1590;
  undefined4 local_1588;
  undefined4 uStack_1584;
  undefined4 uStack_1580;
  undefined4 uStack_157c;
  undefined8 local_1578;
  undefined8 uStack_1570;
  code *local_1560;
  undefined4 local_1558;
  undefined4 uStack_1554;
  undefined1 local_1538 [384];
  undefined8 local_13b8;
  longlong *local_13b0;
  undefined8 local_13a8;
  int local_13a0;
  undefined8 local_139c;
  undefined4 uStack_1394;
  undefined4 uStack_1390;
  undefined4 uStack_138c;
  undefined8 local_1388;
  longlong *local_1380;
  undefined4 local_12f0;
  undefined4 uStack_12ec;
  undefined4 uStack_12e8;
  undefined4 uStack_12e4;
  undefined4 local_12e0;
  undefined1 local_12dc;
  undefined1 local_12d8 [488];
  code *local_10f0;
  undefined4 local_10e8;
  undefined4 uStack_10e4;
  undefined4 local_10d8;
  undefined4 uStack_10d4;
  undefined4 uStack_10d0;
  undefined4 uStack_10cc;
  undefined1 local_10c8;
  undefined1 local_10c0 [64];
  undefined2 local_1080;
  undefined1 local_1078 [312];
  undefined4 local_f40;
  undefined4 uStack_f3c;
  undefined4 uStack_f38;
  undefined4 uStack_f34;
  undefined1 local_f30;
  undefined1 local_f28 [16];
  undefined8 uStack_f18;
  longlong *local_f10;
  undefined8 local_e48;
  longlong *plStack_e40;
  code *local_d88;
  undefined4 local_d80;
  undefined2 local_d18;
  undefined1 local_d10 [304];
  longlong local_be0;
  undefined4 local_bd8;
  undefined4 local_bd4;
  undefined8 local_bd0;
  undefined1 local_bc8 [8];
  undefined4 local_bc0;
  undefined4 uStack_bbc;
  undefined1 *puStack_bb8;
  undefined4 local_bb0;
  undefined1 local_bac;
  undefined1 local_ba8 [88];
  undefined4 local_b50;
  undefined4 uStack_b4c;
  undefined4 uStack_b48;
  undefined4 uStack_b44;
  undefined4 local_b40;
  undefined1 local_b3c;
  undefined1 local_b38 [64];
  undefined8 local_af8;
  undefined8 uStack_af0;
  undefined1 local_ae8;
  undefined1 local_ae0 [456];
  undefined1 local_918 [8];
  longlong *local_910;
  longlong *local_858;
  longlong *local_850;
  code *local_680;
  longlong *local_678;
  float local_670;
  undefined1 local_66c;
  undefined1 auStack_668 [16];
  float local_658;
  undefined1 local_654;
  undefined1 auStack_650 [160];
  code *local_5b0;
  undefined4 local_5a8;
  undefined4 uStack_5a4;
  undefined2 local_540;
  undefined1 local_538 [304];
  undefined1 *local_408;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined8 local_3d8;
  longlong *local_3d0;
  float local_3c8;
  undefined1 local_3c4;
  undefined1 local_3c0 [16];
  float local_3b0;
  undefined1 local_3ac;
  undefined1 auStack_3a8 [160];
  undefined1 local_308 [8];
  longlong *local_300;
  undefined1 *local_248;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined1 local_220;
  undefined1 local_218 [392];
  ulonglong local_90;
  undefined8 uStack_48;
  
  uStack_48 = 0x146a13af8;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1b38;
  lVar12 = param_3[2];
  plVar11 = (longlong *)param_3[3];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  lVar9 = *param_3;
  plVar18 = (longlong *)param_3[1];
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    UNLOCK();
  }
  lVar3 = param_3[4];
  local_1af8 = param_1;
  local_1aa0 = param_2;
  if (lVar3 == 0) {
    FUN_142877ef0(&local_1588);
  }
  else {
    local_1578 = *(undefined8 *)(lVar3 + 0x50);
    uStack_1570 = *(undefined8 *)(lVar3 + 0x58);
    local_1588 = *(undefined4 *)(lVar3 + 0x40);
    uStack_1584 = *(undefined4 *)(lVar3 + 0x44);
    uStack_1580 = *(undefined4 *)(lVar3 + 0x48);
    uStack_157c = *(undefined4 *)(lVar3 + 0x4c);
  }
  plVar21 = DAT_14c98ded0;
  pcVar25 = DAT_14c98dec8;
  if (*(longlong *)(lVar12 + 0x130) == 0) {
    bVar27 = false;
    plVar17 = (longlong *)&local_1588;
  }
  else {
    bVar27 = *(longlong *)(lVar12 + 0x138) != 0;
    plVar17 = (longlong *)&local_1588;
    if (bVar27) {
      plVar17 = (longlong *)(lVar12 + 0x130);
    }
  }
  local_1ae0 = (longlong *)param_3[0x15];
  local_1b01 = *(byte *)(lVar9 + 0x80);
  if (DAT_14c98ded0 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
    UNLOCK();
  }
  local_1b00 = (longlong *)lVar9;
  local_1ab0 = plVar18;
  local_1aa8 = plVar11;
  if (*plVar17 != 0) {
    plVar11 = (longlong *)&uStack_1580;
    if (bVar27) {
      plVar11 = (longlong *)(lVar12 + 0x138);
    }
    if (*plVar11 != 0) {
      local_1af0 = param_3;
      lVar9 = FUN_1458e87ca();
      if (*(longlong *)(lVar9 + 0xa8) == 0) {
        plVar11 = (longlong *)(*(longlong *)(lVar9 + 0x38) + 0x18);
        if (*(longlong *)(lVar9 + 0x38) == 0) {
          plVar11 = (longlong *)(lVar9 + 0xa8);
        }
        param_3 = local_1af0;
        if (*plVar11 == 0) goto LAB_146a13c2e;
      }
      FUN_140a53334(&local_d88);
      local_15b0 = 0x3f800000;
      puStack_15a8 = &DAT_3f8000003f800000;
      local_15a0 = CONCAT22(local_15a0._2_2_,3);
      local_159c = 1;
      local_1598 = 0;
      uStack_1590 = 0;
      local_bc0 = 0x3f800000;
      uStack_bbc = 0;
      puStack_bb8 = &DAT_3f8000003f800000;
      local_bb0 = local_15a0;
      local_bac = 1;
      FUN_144a450dc(local_ba8,&local_1598);
      FUN_1449db362(&local_1598);
      local_15c8 = 1;
      local_15c0 = 0;
      uStack_15b8 = 0;
      local_bd8 = CONCAT31(local_bd8._1_3_,1);
      local_15d0 = lVar9;
      local_be0 = lVar9;
      FUN_144a450dc(&local_bd0,&local_15c0);
      FUN_1449db362(&local_15c0);
      local_1b18 = &local_858;
      FUN_140a554b8(&local_1560,"SImage",
                    ".\\Runtime/Slate/Private/Framework/MultiBox/SMenuEntryBlock.cpp",0x1f7);
      FUN_140a52c70(&local_1560,&local_5b0,&local_d88);
      pcVar25 = local_5b0;
      param_3 = local_1af0;
      plVar11 = (longlong *)CONCAT44(uStack_5a4,local_5a8);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      if (plVar21 != (longlong *)0x0) {
        LOCK();
        plVar18 = plVar21 + 1;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)*plVar18 == 0) {
          (**(code **)*plVar21)(plVar21);
          LOCK();
          piVar1 = (int *)((longlong)plVar21 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
          }
        }
      }
      plVar18 = (longlong *)CONCAT44(uStack_5a4,local_5a8);
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        plVar21 = plVar18 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
          (**(code **)*plVar18)(plVar18);
          LOCK();
          piVar1 = (int *)((longlong)plVar18 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
          }
        }
      }
      plVar18 = (longlong *)CONCAT44(uStack_1554,local_1558);
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        plVar21 = plVar18 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
          (**(code **)*plVar18)(plVar18);
          LOCK();
          piVar1 = (int *)((longlong)plVar18 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
          }
        }
      }
      FUN_140a55a86(&local_d88);
      plVar21 = plVar11;
    }
  }
LAB_146a13c2e:
  plVar11 = param_3 + 4;
  local_1b18 = (longlong **)0x0;
  fVar29 = (float)(**(code **)(*local_1ae0 + 0x28))
                            (local_1ae0,param_3[0x16],".MenuIconSize",0x41800000);
  local_1ad0 = plVar11;
  if ((*(char *)(local_1af8 + 0x2a4) == '\x01') && (pcVar25 == DAT_14c98dec8)) {
    if ((DAT_14c98eaf8 != (longlong *)0x0 && DAT_14c98eb00 != 0) &&
       (cVar6 = (**(code **)(*DAT_14c98eaf8 + 0x30))(), cVar6 != '\0')) {
      plVar18 = DAT_14c98eaf8;
      if (DAT_14c98eb00 == 0) {
        plVar18 = (longlong *)0x0;
      }
      DAT_14c98eaf0 = (**(code **)(*plVar18 + 0x58))();
    }
    if (DAT_14c98eaf0 != '\x01') goto LAB_146a14136;
    FUN_146a15c4c(&local_d88);
    local_15f8 = DAT_14c75905c;
    uStack_15f4 = DAT_14c758c60;
    local_15f0 = DAT_14c75905c;
    local_15ec = 0x3f800000;
    local_15e8 = 1;
    local_15e0 = 0;
    uStack_15d8 = 0;
    local_bd0 = CONCAT71(local_bd0._1_7_,1);
    local_be0 = CONCAT44(DAT_14c758c60,DAT_14c75905c);
    local_bd8 = DAT_14c75905c;
    local_bd4 = 0x3f800000;
    FUN_144a450dc(local_bc8,&local_15e0);
    FUN_1449db362(&local_15e0);
    local_1620 = (double)fVar29;
    local_1610 = 1;
    local_1608 = 0;
    uStack_1600 = 0;
    local_ae8 = 1;
    dStack_1618 = local_1620;
    local_af8 = local_1620;
    uStack_af0 = local_1620;
    FUN_144a450dc(local_ae0,&local_1608);
    FUN_1449db362(&local_1608);
    local_1560 = (code *)0x149f06314;
    local_1558 = 0x11;
    FUN_1446e940c(&local_10f0,&local_1560);
    local_1560 = (code *)0x149f05dfe;
    local_1558 = 0xf;
    FUN_1446e940c(&local_248,&local_1560);
    FUN_140208bae(&local_858,&local_248,&local_10f0,
                  L"This menu entry is missing an icon and should be fixed (consistency within each section is required, either every entry in the section has an icon or no entries have an icon)"
                 );
    FUN_14023423e(local_1648,&local_858);
    local_1638 = 1;
    local_1630 = 0;
    uStack_1628 = 0;
    uVar10 = FUN_146a15db2(&local_d88,local_1648);
    local_1b18 = (longlong **)local_308;
    FUN_146a43072(&local_1560,"SColorBlock",
                  ".\\Runtime/Slate/Private/Framework/MultiBox/SMenuEntryBlock.cpp",0x204);
    FUN_146a15dfc(&local_1560,&local_5b0,uVar10);
    pcVar25 = local_5b0;
    plVar18 = (longlong *)CONCAT44(uStack_5a4,local_5a8);
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
    }
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar21 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar21)(plVar21);
        LOCK();
        piVar1 = (int *)((longlong)plVar21 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
        }
      }
    }
    plVar11 = local_1ad0;
    plVar21 = (longlong *)CONCAT44(uStack_5a4,local_5a8);
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      plVar17 = plVar21 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*plVar21)(plVar21);
        LOCK();
        piVar1 = (int *)((longlong)plVar21 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
        }
      }
    }
    plVar21 = (longlong *)CONCAT44(uStack_1554,local_1558);
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      plVar17 = plVar21 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*plVar21)(plVar21);
        LOCK();
        piVar1 = (int *)((longlong)plVar21 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
        }
      }
    }
    if (local_858 != (longlong *)0x0) {
      (**(code **)(*local_858 + 0x10))();
    }
    FUN_146a15e70(&local_d88);
    plVar21 = plVar18;
  }
  else {
LAB_146a14136:
  }
  pbVar19 = (byte *)(*plVar11 + 0x80);
  if (*plVar11 == 0) {
    pbVar19 = (byte *)(lVar12 + 0x183);
  }
  bVar23 = *pbVar19;
  uVar24 = (uint)DAT_14c96b1e1;
  uVar7 = uVar24;
  if ((bVar23 & 0xfe) == 2) {
    uVar7 = (uint)DAT_14c96b238;
  }
  if (bVar23 == 4) {
    uVar7 = (uint)DAT_14c96b238;
  }
  if ((*(longlong *)(lVar12 + 0x170) == 0 || bVar23 != 1) && (bVar23 != 5)) {
    plVar11 = (longlong *)FUN_14479d2ce((longlong)local_1b00 + 0x28);
    uVar24 = uVar7;
    if (plVar11 != (longlong *)0x0) {
      cVar6 = (**(code **)(*plVar11 + 0x2a0))(plVar11);
      uVar24 = (uint)DAT_14c96b1e1;
      if (cVar6 == '\0') {
        uVar24 = uVar7;
      }
    }
  }
  local_1670 = 0x3f800000;
  uStack_1668 = 0x3f800000;
  uStack_1664 = 0x3f800000;
  uStack_1660 = 4;
  uStack_165c = 1;
  local_1658 = 0;
  uStack_1650 = 0;
  FUN_141160160(&local_1678,param_3[0x16],".CheckBox");
  pcVar5 = *(code **)(lVar12 + 0x19c);
  if (*(code **)(lVar12 + 0x19c) == (code *)0x0) {
    if (bVar23 == 4) {
      lVar9 = param_3[0x16];
      pcVar22 = ".Check";
    }
    else {
      pcVar5 = local_1678;
      if (bVar23 != 3) goto LAB_146a1424f;
      lVar9 = param_3[0x16];
      pcVar22 = ".RadioButton";
    }
    FUN_141160160(&local_d88,lVar9,pcVar22);
    pcVar5 = local_d88;
  }
LAB_146a1424f:
  local_1678 = pcVar5;
  plVar11 = *(longlong **)(lVar12 + 0x170);
  local_1b00 = *(longlong **)(lVar12 + 0x178);
  if (local_1b00 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1b00 + 1) = (int)local_1b00[1] + 1;
    UNLOCK();
  }
  local_1b02 = bVar23;
  local_1ac8 = plVar21;
  if (plVar11 != (longlong *)0x0) goto LAB_146a14ff3;
  local_1af0 = param_3;
  local_1ad4 = uVar24;
  FUN_140a5296a(&local_248);
  FUN_140a50426(local_308);
  lVar12 = FUN_140a52578(local_308);
  local_16b0 = 0x40000000;
  uStack_16a8 = 0x40c00000;
  local_16a0 = 1;
  local_1698 = 0;
  uStack_1690 = 0;
  *(undefined1 *)(lVar12 + 0x28) = 1;
  *(undefined4 *)(lVar12 + 0x18) = 0x40000000;
  *(undefined4 *)(lVar12 + 0x1c) = 0;
  *(undefined4 *)(lVar12 + 0x20) = 0x40c00000;
  *(undefined4 *)(lVar12 + 0x24) = 0;
  FUN_144a450dc(lVar12 + 0x30,&local_1698);
  FUN_1449db362(&local_1698);
  FUN_140a53a96(&local_5b0);
  puVar13 = &DAT_14c96b238;
  if (pcVar25 == DAT_14c98dec8) {
    puVar13 = &DAT_14c96b1e1;
  }
  local_16e8 = CONCAT11(1,*puVar13);
  local_16e0 = 0;
  uStack_16d8 = 0;
  local_540 = local_16e8;
  FUN_144a450dc(local_538,&local_16e0);
  FUN_1449db362(&local_16e0);
  local_1700 = fVar29 + 2.0;
  local_16fc = 1;
  local_16f8 = 0;
  uStack_16f0 = 0;
  local_3c4 = 1;
  local_3c8 = local_1700;
  FUN_144a450dc(local_3c0,&local_16f8);
  FUN_1449db362(&local_16f8);
  local_1714 = 1;
  local_1710 = 0;
  uStack_1708 = 0;
  local_3ac = 1;
  local_1718 = fVar29;
  local_3b0 = fVar29;
  FUN_144a450dc(auStack_3a8,&local_1710);
  FUN_1449db362(&local_1710);
  local_408 = &DAT_200000002;
  FUN_140a53a96(&local_858);
  local_173c = 1;
  local_1738 = 0;
  uStack_1730 = 0;
  local_66c = 1;
  local_1740 = fVar29;
  local_670 = fVar29;
  FUN_144a450dc(auStack_668,&local_1738);
  FUN_1449db362(&local_1738);
  local_1754 = 1;
  local_1750 = 0;
  uStack_1748 = 0;
  local_654 = 1;
  local_1758 = fVar29;
  local_658 = fVar29;
  FUN_144a450dc(auStack_650,&local_1750);
  plVar11 = local_1ac8;
  FUN_1449db362(&local_1750);
  plVar18 = local_678;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_678 = plVar11;
  local_680 = pcVar25;
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar18 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  local_1b18 = (longlong **)&local_1771;
  FUN_140a53d66(&local_1770,&DAT_149efe19f,
                ".\\Runtime/Slate/Private/Framework/MultiBox/SMenuEntryBlock.cpp",0x250);
  FUN_140a50bf4(&local_1770,&local_1728,&local_858);
  plVar18 = local_3d0;
  plVar11 = local_1720;
  param_3 = local_1af0;
  if (local_1720 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1720 + 1) = (int)local_1720[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_1720 + 1) = (int)local_1720[1] + 1;
    UNLOCK();
  }
  local_3d8 = local_1728;
  local_3d0 = local_1720;
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar21 = plVar18 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  local_1b18 = (longlong **)&local_1791;
  FUN_140a53d66(&local_1790,&DAT_149efe19f,
                ".\\Runtime/Slate/Private/Framework/MultiBox/SMenuEntryBlock.cpp",0x249);
  FUN_140a50bf4(&local_1790,&local_16d0,&local_5b0);
  local_16c0 = (longlong *)local_16d0;
  local_16b8 = plStack_16c8;
  if (plStack_16c8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_16c8 + 1) = (int)plStack_16c8[1] + 1;
    UNLOCK();
  }
  uVar10 = FUN_140a4fe8e(lVar12,&local_16c0);
  uVar10 = FUN_140a52392(&local_248,uVar10);
  FUN_140a50426(local_918);
  local_17b0 = 0x3f800000;
  local_17ac = 1;
  local_17a8 = 0;
  uStack_17a0 = 0;
  lVar12 = FUN_140a5475a(local_918);
  local_17d8 = 0x40000000;
  uStack_17d0 = 0x40c00000;
  local_17c8 = 1;
  local_17c0 = 0;
  uStack_17b8 = 0;
  *(undefined1 *)(lVar12 + 0x28) = 1;
  *(undefined4 *)(lVar12 + 0x18) = 0x40000000;
  *(undefined4 *)(lVar12 + 0x1c) = 0;
  *(undefined4 *)(lVar12 + 0x20) = 0x40c00000;
  *(undefined4 *)(lVar12 + 0x24) = 0;
  FUN_144a450dc(lVar12 + 0x30,&local_17c0);
  FUN_1449db362(&local_17c0);
  *(undefined4 *)(lVar12 + 0x48) = 2;
  *(undefined1 *)(lVar12 + 0x4c) = 1;
  FUN_140a570d8(&local_d88);
  FUN_141160160(&local_1800,param_3[0x16],".Label");
  puStack_bb8 = (undefined1 *)FUN_140a57516(local_1ae0,local_1800,0,0);
  local_1828 = (longlong *)param_3[6];
  if (local_1828 != (longlong *)0x0) {
    (**(code **)(*local_1828 + 8))();
  }
  local_1820 = (undefined4)param_3[7];
  local_1818 = (undefined1)param_3[8];
  local_1810 = 0;
  local_1808 = 0;
  FUN_1413a4324(&local_1810,param_3 + 9);
  uVar14 = FUN_140a54906(&local_d88,&local_1828);
  plVar18 = *(longlong **)(local_1af8 + 0x278);
  local_1ac0 = plVar11;
  if (plVar18 == (longlong *)0x0) {
    local_1ae8 = (longlong *)
                 CONCAT44(local_1ae8._4_4_,(int)CONCAT71((int7)((ulonglong)local_1af8 >> 8),1));
    plVar18 = (longlong *)0x0;
    uVar20 = 0;
  }
  else {
    uVar15 = (ulonglong)*(uint *)(plVar18 + 1);
    uVar20 = 0;
    do {
      uVar7 = (uint)uVar15;
      if (uVar7 == 0) {
        local_1ae8 = (longlong *)CONCAT44(local_1ae8._4_4_,(int)CONCAT71((int7)(uVar15 >> 8),1));
        plVar18 = (longlong *)0x0;
        goto LAB_146a1473f;
      }
      LOCK();
      uVar24 = *(uint *)(plVar18 + 1);
      if (uVar7 == uVar24) {
        *(uint *)(plVar18 + 1) = uVar7 + 1;
      }
      else {
        uVar15 = (ulonglong)uVar24;
      }
      UNLOCK();
    } while (uVar7 != uVar24);
    uVar20 = *(undefined8 *)(local_1af8 + 0x270);
    local_1ae8 = (longlong *)((ulonglong)local_1ae8._4_4_ << 0x20);
  }
LAB_146a1473f:
  local_1560 = FUN_146a0c98a;
  local_1558 = 0;
  FUN_146a13552(uVar14,uVar20);
  local_1b18 = (longlong **)&local_1841;
  FUN_140a54526(&local_1840,"STextBlock",
                ".\\Runtime/Slate/Private/Framework/MultiBox/SMenuEntryBlock.cpp",0x25d);
  FUN_140a52852(&local_1840,&local_17f8,uVar14);
  local_17e8 = local_17f8;
  local_17e0 = local_17f0;
  if (local_17f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_17f0 + 1) = (int)local_17f0[1] + 1;
    UNLOCK();
  }
  uVar14 = FUN_140a4fe8e(lVar12,&local_17e8);
  local_1ab8 = FUN_140a52392(uVar10,uVar14);
  FUN_140a50426(&local_e48);
  lVar12 = FUN_140a52578(&local_e48);
  local_1870 = 0x41c80000;
  uStack_1868 = 0;
  local_1860 = 1;
  local_1858 = 0;
  uStack_1850 = 0;
  *(undefined1 *)(lVar12 + 0x28) = 1;
  *(undefined4 *)(lVar12 + 0x18) = 0x41c80000;
  *(undefined4 *)(lVar12 + 0x1c) = 0;
  *(undefined4 *)(lVar12 + 0x20) = 0;
  *(undefined4 *)(lVar12 + 0x24) = 0;
  FUN_144a450dc(lVar12 + 0x30,&local_1858);
  FUN_1449db362(&local_1858);
  *(undefined4 *)(lVar12 + 0x48) = 2;
  *(undefined1 *)(lVar12 + 0x4c) = 1;
  *(undefined4 *)(lVar12 + 0x40) = 3;
  *(undefined1 *)(lVar12 + 0x44) = 1;
  FUN_140a53a96(&local_10f0);
  uVar10 = FUN_14142e2d2(param_3 + 0x10);
  cVar6 = FUN_144a7c5f6(uVar10);
  puVar13 = &DAT_14c96b238;
  if (cVar6 != '\0') {
    puVar13 = &DAT_14c96b1e1;
  }
  local_18a8 = CONCAT11(1,*puVar13);
  local_18a0 = 0;
  uStack_1898 = 0;
  local_1080 = local_18a8;
  FUN_144a450dc(local_1078,&local_18a0);
  FUN_1449db362(&local_18a0);
  local_18d0 = 0x41800000;
  uStack_18c8 = 0x40800000;
  local_18c0 = 1;
  local_18b8 = 0;
  uStack_18b0 = 0;
  local_f30 = 1;
  local_f40 = 0x41800000;
  uStack_f3c = 0;
  uStack_f38 = 0x40800000;
  uStack_f34 = 0;
  FUN_144a450dc(local_f28,&local_18b8);
  FUN_1449db362(&local_18b8);
  FUN_140a570d8(&local_1560);
  FUN_141160160(&local_18e8,param_3[0x16],".Keybinding");
  uVar10 = FUN_140a57516(local_1ae0,local_18e8,0,0);
  uStack_1390 = (undefined4)uVar10;
  uStack_138c = (undefined4)((ulonglong)uVar10 >> 0x20);
  local_1910 = 0x3f800000;
  puStack_1908 = &DAT_3f8000003f800000;
  local_1900 = CONCAT22(local_1900._2_2_,3);
  local_18fc = 1;
  local_18f8 = 0;
  uStack_18f0 = 0;
  local_12f0 = 0x3f800000;
  uStack_12ec = 0;
  uStack_12e8 = 0x3f800000;
  uStack_12e4 = 0x3f800000;
  local_12e0 = local_1900;
  local_12dc = 1;
  FUN_144a450dc(local_12d8,&local_18f8);
  FUN_1449db362(&local_18f8);
  local_1938 = (longlong *)param_3[0x10];
  if (local_1938 != (longlong *)0x0) {
    (**(code **)(*local_1938 + 8))();
  }
  local_1930 = (undefined4)param_3[0x11];
  local_1928 = (undefined1)param_3[0x12];
  local_1920 = 0;
  local_1918 = 0;
  FUN_1413a4324(&local_1920,param_3 + 0x13);
  uVar10 = FUN_140a54906(&local_1560,&local_1938);
  local_1b18 = (longlong **)&local_1951;
  FUN_140a54526(&local_1950,"STextBlock",
                ".\\Runtime/Slate/Private/Framework/MultiBox/SMenuEntryBlock.cpp",0x26c);
  FUN_140a52852(&local_1950,&local_18e0,uVar10);
  plVar17 = local_f10;
  plVar21 = local_18d8;
  plVar11 = local_1ac0;
  if (local_18d8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18d8 + 1) = (int)local_18d8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_18d8 + 1) = (int)local_18d8[1] + 1;
    UNLOCK();
  }
  uStack_f18 = local_18e0;
  local_f10 = local_18d8;
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    plVar26 = plVar17 + 1;
    *(int *)plVar26 = (int)*plVar26 + -1;
    UNLOCK();
    if ((int)*plVar26 == 0) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
  local_1b18 = (longlong **)&local_1971;
  FUN_140a53d66(&local_1970,&DAT_149efe19f,
                ".\\Runtime/Slate/Private/Framework/MultiBox/SMenuEntryBlock.cpp",0x268);
  FUN_140a50bf4(&local_1970,&local_1890,&local_10f0);
  local_1880 = local_1890;
  local_1878 = local_1888;
  if (local_1888 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1888 + 1) = (int)local_1888[1] + 1;
    UNLOCK();
  }
  uVar10 = FUN_140a4fe8e(lVar12,&local_1880);
  uVar10 = FUN_140a52392(local_1ab8,uVar10);
  local_1b18 = (longlong **)&local_1991;
  FUN_140a541dc(&local_1990,"SHorizontalBox",
                ".\\Runtime/Slate/Private/Framework/MultiBox/SMenuEntryBlock.cpp",0x243);
  FUN_140a50ec6(&local_1990,&local_1688,uVar10);
  plVar17 = local_1680;
  if (local_1680 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1680 + 1) = (int)local_1680[1] + 1;
    UNLOCK();
  }
  plVar26 = (longlong *)0x0;
  if (local_1680 == local_1b00) {
    plVar26 = local_1680;
  }
  if (local_1680 != local_1b00 && local_1b00 != (longlong *)0x0) {
    LOCK();
    plVar26 = local_1b00 + 1;
    *(int *)plVar26 = (int)*plVar26 + -1;
    UNLOCK();
    if ((int)*plVar26 == 0) {
      (**(code **)*local_1b00)();
      LOCK();
      piVar1 = (int *)((longlong)local_1b00 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar8 = *piVar1;
      UNLOCK();
      plVar26 = local_1b00;
joined_r0x000146a14c68:
      if (iVar8 == 0) {
        (**(code **)(*plVar26 + 0x10))();
      }
    }
  }
  else if (plVar26 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar26 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar26)(plVar26);
      LOCK();
      piVar1 = (int *)((longlong)plVar26 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar8 = *piVar1;
      UNLOCK();
      plVar26 = plVar17;
      goto joined_r0x000146a14c68;
    }
  }
  if (local_1680 != (longlong *)0x0) {
    LOCK();
    plVar26 = local_1680 + 1;
    *(int *)plVar26 = (int)*plVar26 + -1;
    UNLOCK();
    if ((int)*plVar26 == 0) {
      (**(code **)*local_1680)(local_1680);
      LOCK();
      piVar1 = (int *)((longlong)local_1680 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1680 + 0x10))(local_1680);
      }
    }
  }
  plVar26 = local_1988;
  if (local_1988 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1988 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_1988)(local_1988);
      LOCK();
      piVar1 = (int *)((longlong)plVar26 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
      }
    }
  }
  plVar26 = local_1878;
  if (local_1878 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1878 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_1878)(local_1878);
      LOCK();
      piVar1 = (int *)((longlong)plVar26 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
      }
    }
  }
  if (local_1888 != (longlong *)0x0) {
    LOCK();
    plVar26 = local_1888 + 1;
    *(int *)plVar26 = (int)*plVar26 + -1;
    UNLOCK();
    if ((int)*plVar26 == 0) {
      (**(code **)*local_1888)(local_1888);
      LOCK();
      piVar1 = (int *)((longlong)local_1888 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1888 + 0x10))(local_1888);
      }
    }
  }
  plVar26 = local_1968;
  if (local_1968 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1968 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_1968)(local_1968);
      LOCK();
      piVar1 = (int *)((longlong)plVar26 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
      }
    }
  }
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    plVar26 = plVar21 + 1;
    *(int *)plVar26 = (int)*plVar26 + -1;
    UNLOCK();
    if ((int)*plVar26 == 0) {
      (**(code **)*plVar21)(plVar21);
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
  local_1b00 = plVar17;
  if (local_18d8 != (longlong *)0x0) {
    LOCK();
    plVar21 = local_18d8 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*local_18d8)(local_18d8);
      LOCK();
      piVar1 = (int *)((longlong)local_18d8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_18d8 + 0x10))(local_18d8);
      }
    }
  }
  plVar21 = local_1948;
  uVar24 = local_1ad4;
  lVar12 = (longlong)local_1ae8;
  bVar23 = local_1b02;
  if (local_1948 != (longlong *)0x0) {
    LOCK();
    plVar17 = local_1948 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*local_1948)(local_1948);
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
  FUN_140a59ae6(&local_1560);
  FUN_140a5660c(&local_10f0);
  FUN_140a509a6(&local_e48);
  plVar21 = local_17e0;
  if (local_17e0 != (longlong *)0x0) {
    LOCK();
    plVar17 = local_17e0 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*local_17e0)(local_17e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
  if (local_17f0 != (longlong *)0x0) {
    LOCK();
    plVar21 = local_17f0 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*local_17f0)(local_17f0);
      LOCK();
      piVar1 = (int *)((longlong)local_17f0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_17f0 + 0x10))(local_17f0);
      }
    }
  }
  if (local_1838 != (longlong *)0x0) {
    LOCK();
    plVar21 = local_1838 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*local_1838)(local_1838);
      LOCK();
      piVar1 = (int *)((longlong)local_1838 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1838 + 0x10))(local_1838);
      }
    }
  }
  if ((char)lVar12 == '\0') {
    LOCK();
    plVar21 = plVar18 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  FUN_140a59ae6(&local_d88);
  FUN_140a509a6(local_918);
  plVar18 = local_16b8;
  if (local_16b8 != (longlong *)0x0) {
    LOCK();
    plVar21 = local_16b8 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*local_16b8)(local_16b8);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  if (plStack_16c8 != (longlong *)0x0) {
    LOCK();
    plVar18 = plStack_16c8 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*plStack_16c8)(plStack_16c8);
      LOCK();
      piVar1 = (int *)((longlong)plStack_16c8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_16c8 + 0x10))(plStack_16c8);
      }
    }
  }
  plVar18 = local_1788;
  if (local_1788 != (longlong *)0x0) {
    LOCK();
    plVar21 = local_1788 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*local_1788)(local_1788);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar18 = plVar11 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
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
  if (local_1720 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_1720 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_1720)(local_1720);
      LOCK();
      piVar1 = (int *)((longlong)local_1720 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1720 + 0x10))(local_1720);
      }
    }
  }
  plVar11 = local_1768;
  if (local_1768 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_1768 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*local_1768)(local_1768);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  local_1ae8 = local_1688;
  FUN_140a5660c(&local_858);
  FUN_140a5660c(&local_5b0);
  FUN_140a509a6(local_308);
  FUN_145ab33da(&local_248);
  plVar11 = local_1ae8;
LAB_146a14ff3:
  local_1ae8 = plVar11;
  FUN_140a5296a(&local_858);
  FUN_140a50426(&local_10f0);
  local_19c0 = 0x40000000;
  uStack_19b8 = 0x41000000;
  local_19b0 = 1;
  local_19a8 = 0;
  uStack_19a0 = 0;
  local_10c8 = 1;
  local_10d8 = 0x40000000;
  uStack_10d4 = 0;
  uStack_10d0 = 0x41000000;
  uStack_10cc = 0;
  FUN_144a450dc(local_10c0,&local_19a8);
  FUN_1449db362(&local_19a8);
  uVar10 = FUN_140a52578(&local_10f0);
  FUN_146a15ef2(&local_1560);
  if (bVar23 == 4) {
    FUN_140a53334(&local_5b0);
    local_19d8 = CONCAT11(1,(char)uVar24);
    local_19d0 = 0;
    uStack_19c8 = 0;
    local_540 = local_19d8;
    FUN_144a450dc(local_538,&local_19d0);
    FUN_1449db362(&local_19d0);
    local_1a00 = 0x3f800000;
    puStack_19f8 = &DAT_3f8000003f800000;
    local_19f0 = CONCAT22(local_19f0._2_2_,2);
    local_19ec = 1;
    local_19e8 = 0;
    uStack_19e0 = 0;
    local_3e8 = 0x3f800000;
    uStack_3e4 = 0;
    uStack_3e0 = 0x3f800000;
    uStack_3dc = 0x3f800000;
    local_3d8._0_5_ = CONCAT14(1,local_19f0);
    FUN_144a450dc(&local_3d0,&local_19e8);
    FUN_1449db362(&local_19e8);
    uVar14 = FUN_145a4e88a(local_1ae0,local_1678,0,0);
    local_d88 = FUN_146a16108;
    local_d80 = 0;
    FUN_146a1604a(&local_5b0,local_1af8,&local_d88,uVar14);
    local_1b18 = (longlong **)&local_1728;
    puVar13 = local_308;
    FUN_140a554b8(puVar13,"SImage",".\\Runtime/Slate/Private/Framework/MultiBox/SMenuEntryBlock.cpp"
                  ,0x27f);
    puVar16 = &local_1970;
    FUN_140a52c70(puVar13,puVar16,&local_5b0);
  }
  else {
    FUN_1469f91ec(&local_d88);
    local_1a18 = CONCAT11(1,(char)uVar24);
    local_1a10 = 0;
    uStack_1a08 = 0;
    local_d18 = local_1a18;
    FUN_144a450dc(local_d10,&local_1a10);
    FUN_1449db362(&local_1a10);
    uStack_1a38 = CONCAT22(uStack_165e,uStack_1660);
    uStack_1a34 = uStack_165c;
    local_1a48 = (undefined4)local_1670;
    uStack_1a44 = local_1670._4_4_;
    uStack_1a40 = uStack_1668;
    uStack_1a3c = uStack_1664;
    local_1a30 = 0;
    local_1a28 = 0;
    FUN_140a5aaa0(&local_1a30,&local_1658);
    local_b40 = uStack_1a38;
    local_b50 = local_1a48;
    uStack_b4c = uStack_1a44;
    uStack_b48 = uStack_1a40;
    uStack_b44 = uStack_1a3c;
    local_b3c = uStack_1a34;
    FUN_144a450dc(local_b38,&local_1a30);
    FUN_1449db362(&local_1a30);
    lVar12 = local_1af8;
    local_5b0 = FUN_146a16206;
    local_5a8 = 0;
    FUN_146a1615c(&local_d88,local_1af8);
    local_bd0 = FUN_145a4e88a(local_1ae0,local_1678,0,0);
    local_248 = &LAB_146a16342;
    local_240 = 0;
    FUN_146a43eaa(&local_5b0,lVar12);
    FUN_144a450dc(&local_bc0,&local_5b0);
    FUN_1449db362(&local_5b0);
    local_1b18 = (longlong **)&local_17e8;
    puVar13 = local_918;
    FUN_1469fcac2(puVar13,"SCheckBox",
                  ".\\Runtime/Slate/Private/Framework/MultiBox/SMenuEntryBlock.cpp",0x283);
    puVar16 = &local_1990;
    FUN_1469f9992(puVar13,puVar16,&local_d88);
  }
  plVar21 = local_1380;
  plVar18 = local_1ae8;
  local_1388 = *puVar16;
  plVar11 = (longlong *)puVar16[1];
  if (plVar11 == (longlong *)0x0) {
    local_1af0 = (longlong *)
                 CONCAT44(local_1af0._4_4_,(int)CONCAT71((int7)((ulonglong)puVar13 >> 8),1));
    plVar11 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    local_1af0 = (longlong *)((ulonglong)local_1af0._4_4_ << 0x20);
  }
  plVar17 = plVar11;
  if (local_1380 != (longlong *)0x0) {
    LOCK();
    plVar26 = local_1380 + 1;
    *(int *)plVar26 = (int)*plVar26 + -1;
    UNLOCK();
    if ((int)*plVar26 == 0) {
      puVar16 = (undefined8 *)*local_1380;
      local_1380 = plVar11;
      (*(code *)*puVar16)();
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar17 = local_1380;
      if (*piVar1 == 0) {
        (**(code **)(*plVar21 + 0x10))();
        plVar17 = local_1380;
      }
    }
  }
  local_1380 = plVar17;
  plVar21 = *(longlong **)(local_1af8 + 0x278);
  bVar27 = true;
  if (plVar21 == (longlong *)0x0) {
    plVar21 = (longlong *)0x0;
    lVar12 = 0;
  }
  else {
    iVar8 = (int)plVar21[1];
    lVar12 = 0;
    do {
      if (iVar8 == 0) {
        plVar21 = (longlong *)0x0;
        goto LAB_146a153c1;
      }
      LOCK();
      iVar4 = (int)plVar21[1];
      bVar28 = iVar8 == iVar4;
      if (bVar28) {
        *(int *)(plVar21 + 1) = iVar8 + 1;
        iVar4 = iVar8;
      }
      iVar8 = iVar4;
      UNLOCK();
    } while (!bVar28);
    lVar12 = *(longlong *)(local_1af8 + 0x270);
    bVar27 = false;
  }
LAB_146a153c1:
  local_1688 = *(longlong **)(lVar12 + 0x4b0);
  local_1680 = *(longlong **)(lVar12 + 0x4b8);
  if (local_1680 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1680 + 1) = (int)local_1680[1] + 1;
    UNLOCK();
  }
  local_16d0 = &local_1688;
  FUN_146a432b4(&local_e48,0x27b);
  FUN_146a1634a(&local_e48,&local_1950,&local_1560);
  local_1840 = local_1950;
  local_1838 = local_1948;
  if (local_1948 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1948 + 1) = (int)local_1948[1] + 1;
    UNLOCK();
  }
  uVar10 = FUN_140a4fe8e(uVar10,&local_1840);
  uVar10 = FUN_140a52392(&local_858,uVar10);
  FUN_140a50426(&local_248);
  local_1a70 = 0x40000000;
  uStack_1a68 = 0;
  local_1a60 = 1;
  local_1a58 = 0;
  uStack_1a50 = 0;
  local_220 = 1;
  local_230 = 0x40000000;
  uStack_22c = 0;
  uStack_228 = 0;
  uStack_224 = 0;
  FUN_144a450dc(local_218,&local_1a58);
  FUN_1449db362(&local_1a58);
  local_16c0 = plVar18;
  local_16b8 = local_1b00;
  if (local_1b00 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1b00 + 1) = (int)local_1b00[1] + 1;
    UNLOCK();
  }
  uVar14 = FUN_140a4fe8e(&local_248,&local_16c0);
  uVar10 = FUN_140a52392(uVar10,uVar14);
  local_1b18 = (longlong **)&local_17f8;
  FUN_140a541dc(&local_1770,"SHorizontalBox",
                ".\\Runtime/Slate/Private/Framework/MultiBox/SMenuEntryBlock.cpp",0x276);
  FUN_140a50ec6(&local_1770,&local_1790,uVar10);
  if (local_1788 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1788 + 1) = (int)local_1788[1] + 1;
    UNLOCK();
    if (local_1788 != (longlong *)0x0) {
      LOCK();
      plVar18 = local_1788 + 1;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)*plVar18 == 0) {
        (**(code **)*local_1788)(local_1788);
        LOCK();
        piVar1 = (int *)((longlong)local_1788 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1788 + 0x10))(local_1788);
        }
      }
    }
  }
  if (local_1768 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_1768 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*local_1768)(local_1768);
      LOCK();
      piVar1 = (int *)((longlong)local_1768 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1768 + 0x10))(local_1768);
      }
    }
  }
  plVar18 = local_16b8;
  if (local_16b8 != (longlong *)0x0) {
    LOCK();
    plVar17 = local_16b8 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*local_16b8)(local_16b8);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  FUN_140a509a6(&local_248);
  plVar18 = local_1838;
  if (local_1838 != (longlong *)0x0) {
    LOCK();
    plVar17 = local_1838 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*local_1838)(local_1838);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  if (local_1948 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_1948 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*local_1948)(local_1948);
      LOCK();
      piVar1 = (int *)((longlong)local_1948 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1948 + 0x10))(local_1948);
      }
    }
  }
  if (plStack_e40 != (longlong *)0x0) {
    LOCK();
    plVar18 = plStack_e40 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*plStack_e40)(plStack_e40);
      LOCK();
      piVar1 = (int *)((longlong)plStack_e40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_e40 + 0x10))(plStack_e40);
      }
    }
  }
  plVar18 = local_1680;
  if (local_1680 != (longlong *)0x0) {
    LOCK();
    plVar17 = local_1680 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*local_1680)(local_1680);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  if (!bVar27) {
    LOCK();
    plVar18 = plVar21 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*plVar21)(plVar21);
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
  bVar23 = local_1b02;
  if ((char)local_1af0 == '\0') {
    LOCK();
    plVar18 = plVar11 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
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
  if (bVar23 == 4) {
    if (local_1968 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_1968 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_1968)(local_1968);
        LOCK();
        piVar1 = (int *)((longlong)local_1968 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1968 + 0x10))(local_1968);
        }
      }
    }
    if (local_300 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_300 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_300)(local_300);
        LOCK();
        piVar1 = (int *)((longlong)local_300 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_300 + 0x10))(local_300);
        }
      }
    }
    FUN_140a55a86(&local_5b0);
  }
  else {
    if (local_1988 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_1988 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_1988)(local_1988);
        LOCK();
        piVar1 = (int *)((longlong)local_1988 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1988 + 0x10))(local_1988);
        }
      }
    }
    if (local_910 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_910 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_910)(local_910);
        LOCK();
        piVar1 = (int *)((longlong)local_910 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_910 + 0x10))(local_910);
        }
      }
    }
    FUN_1469f9dde(&local_d88);
  }
  uVar7 = (uint)local_1b01;
  FUN_146a1640a(&local_1560);
  FUN_140a509a6(&local_10f0);
  FUN_145ab33da(&local_858);
  FUN_146a164b6(&local_1560);
  FUN_141160160(&local_1770,param_3[0x16],".Button");
  plVar11 = local_1ae0;
  local_13a8 = FUN_141492734(local_1ae0,local_1770,0,0);
  local_1b18 = (longlong **)0x0;
  local_13a0 = uVar7 * 2;
  puVar16 = (undefined8 *)
            (**(code **)(*plVar11 + 0x48))(plVar11,param_3[0x16],".Block.Padding",&DAT_14c98de88);
  local_139c = *puVar16;
  uStack_1394 = (undefined4)puVar16[1];
  uStack_1390 = (undefined4)((ulonglong)puVar16[1] >> 0x20);
  local_e48 = 0;
  plStack_e40 = (longlong *)0x0;
  plVar11 = (longlong *)0x0;
  if (DAT_14c98eb10 != 0) {
    plVar11 = DAT_14c98eb08;
  }
  local_1b18 = (longlong **)local_1ad0;
  local_1b10 = 0;
  (**(code **)(*plVar11 + 0x58))(plVar11,&local_248,param_3 + 0xb,&local_e48);
  plVar11 = local_1b00;
  local_1a98 = local_248 + 0x268;
  if (local_248 == (undefined1 *)0x0) {
    local_1a98 = (undefined1 *)0x0;
  }
  local_1a90 = CONCAT44(uStack_23c,local_240);
  if (local_1a90 != 0) {
    LOCK();
    *(int *)(local_1a90 + 8) = *(int *)(local_1a90 + 8) + 1;
    UNLOCK();
  }
  local_1a88 = 1;
  local_1a80 = 0;
  uStack_1a78 = 0;
  FUN_145766fac(local_1538,&local_1a98);
  FUN_14576702a(&local_1a98);
  local_10f0 = FUN_146a1362a;
  local_10e8 = 0;
  FUN_146a42b36(&local_858,local_1af8);
  FUN_144a450dc(&local_1388,&local_858);
  FUN_1449db362(&local_858);
  plVar18 = local_13b0;
  if (local_1788 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1788 + 1) = (int)local_1788[1] + 1;
    UNLOCK();
  }
  local_13b8 = local_1790;
  local_13b0 = local_1788;
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar21 = plVar18 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  FUN_146a443a0(&local_858,&local_1790);
  FUN_146a16518(&local_858,&local_10f0,&local_1560);
  pcVar25 = local_10f0;
  plVar18 = (longlong *)CONCAT44(uStack_10e4,local_10e8);
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    UNLOCK();
    plVar21 = (longlong *)CONCAT44(uStack_10e4,local_10e8);
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      plVar17 = plVar21 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*plVar21)(plVar21);
        LOCK();
        piVar1 = (int *)((longlong)plVar21 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
        }
      }
    }
  }
  if (local_850 != (longlong *)0x0) {
    LOCK();
    plVar21 = local_850 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*local_850)(local_850);
      LOCK();
      piVar1 = (int *)((longlong)local_850 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_850 + 0x10))(local_850);
      }
    }
  }
  plVar21 = (longlong *)CONCAT44(uStack_23c,local_240);
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar21 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*plVar21)(plVar21);
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
  plVar21 = plStack_e40;
  if (plStack_e40 != (longlong *)0x0) {
    LOCK();
    plVar17 = plStack_e40 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*plStack_e40)(plStack_e40);
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
  FUN_146a1658c(&local_1560);
  puVar16 = local_1aa0;
  *local_1aa0 = pcVar25;
  local_1aa0[1] = plVar18;
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    UNLOCK();
    LOCK();
    plVar21 = plVar18 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  if (local_1788 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_1788 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*local_1788)(local_1788);
      LOCK();
      piVar1 = (int *)((longlong)local_1788 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1788 + 0x10))(local_1788);
      }
    }
  }
  plVar18 = local_1ac8;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar21 = plVar11 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
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
  FUN_1449db362(&local_1658);
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar18 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  plVar18 = local_1aa8;
  plVar11 = local_1ab0;
  if (local_1ab0 != (longlong *)0x0) {
    LOCK();
    plVar21 = local_1ab0 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*local_1ab0)(local_1ab0);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar18 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_1b38) == DAT_14c707940) {
    return puVar16;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a15c4c FUN_146a15c4c body=357 status=ok
// SIG undefined FUN_146a15c4c(void)

longlong FUN_146a15c4c(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140a5071c();
  *(undefined4 *)(param_1 + 0x1a8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1ac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1b8) = 1;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  plVar1 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_48,"ColorPicker.AlphaBackground",1);
  uVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,local_48,0,0);
  *(undefined8 *)(param_1 + 0x1d0) = uVar2;
  *(undefined1 *)(param_1 + 0x1d8) = 1;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x210) = 1;
  *(undefined2 *)(param_1 + 0x230) = 0x100;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined2 *)(param_1 + 0x248) = 0x100;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined2 *)(param_1 + 0x260) = 0x101;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined2 *)(param_1 + 0x278) = 0x100;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined1 **)(param_1 + 0x290) = &DAT_4030000000000000;
  *(undefined1 **)(param_1 + 0x298) = &DAT_4030000000000000;
  *(undefined1 *)(param_1 + 0x2a0) = 1;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a15db2 FUN_146a15db2 body=73 status=ok
// SIG undefined FUN_146a15db2(void)

longlong FUN_146a15db2(longlong param_1,longlong *param_2)

{
  FUN_140008f88();
  *(char *)(param_1 + 0x10) = (char)param_2[2];
  FUN_144a450dc(param_1 + 0x18,param_2 + 3);
  FUN_1449db362(param_2 + 3);
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  return param_1;
}



// FUNCTION 146a15dfc FUN_146a15dfc body=115 status=ok
// SIG undefined FUN_146a15dfc(void)

longlong * FUN_146a15dfc(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146a54e08(*param_1,param_3);
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



// FUNCTION 146a15e70 FUN_146a15e70 body=129 status=ok
// SIG undefined FUN_146a15e70(void)

void FUN_146a15e70(longlong param_1)

{
  FUN_1449db362(param_1 + 0x2b8);
  FUN_1449db362(param_1 + 0x2a8);
  FUN_1449db362(param_1 + 0x280);
  FUN_1449db362(param_1 + 0x268);
  FUN_1449db362(param_1 + 0x250);
  FUN_1449db362(param_1 + 0x238);
  FUN_1449db362(param_1 + 0x218);
  FUN_1449db362(param_1 + 0x1e0);
  FUN_1449db362(param_1 + 0x1c0);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 146a15ef2 FUN_146a15ef2 body=342 status=ok
// SIG undefined FUN_146a15ef2(void)

longlong FUN_146a15ef2(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
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
  *(undefined1 *)(param_1 + 0x1c0) = 1;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x1e0) = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x1e8) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x1ec) = 1;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x204) = 1;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x21c) = 1;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x234) = 1;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x248) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x24c) = 1;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined4 *)(param_1 + 0x260) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x264) = 1;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined4 *)(param_1 + 0x278) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x27c) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined4 *)(param_1 + 0x290) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x294) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
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



// FUNCTION 146a1604a FUN_146a1604a body=189 status=ok
// SIG undefined FUN_146a1604a(void)

longlong FUN_146a1604a(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(undefined4 *)(param_3 + 1);
  local_48 = *param_3;
  local_28 = param_4;
  FUN_146a434ce(local_58,param_2,&local_48,&local_28);
  local_48 = 0;
  local_40 = CONCAT31(local_40._1_3_,1);
  local_38 = 0;
  local_30 = 0;
  FUN_140a5c3e8(&local_38,local_58);
  *(undefined1 *)(param_1 + 0x1b0) = (undefined1)local_40;
  *(undefined8 *)(param_1 + 0x1a8) = local_48;
  FUN_144a450dc(param_1 + 0x1b8,&local_38);
  FUN_1449db362(&local_38);
  FUN_1449db362(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a16108 FUN_146a16108 body=84 status=ok
// SIG undefined FUN_146a16108(void)

longlong FUN_146a16108(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  cVar1 = *(char *)(param_1 + 0x43);
  cVar2 = FUN_146a16206();
  lVar4 = 0x4e0;
  if (cVar2 == '\0') {
    lVar4 = 0xc0;
  }
  lVar5 = 0x430;
  if (cVar2 == '\0') {
    lVar5 = 0x10;
  }
  lVar3 = 0x2d0;
  if (cVar2 != '\x01') {
    lVar3 = lVar4;
  }
  lVar4 = 0x220;
  if (cVar2 != '\x01') {
    lVar4 = lVar5;
  }
  if (cVar1 != '\0') {
    lVar4 = lVar3;
  }
  return lVar4 + param_2;
}



// FUNCTION 146a1615c FUN_146a1615c body=169 status=ok
// SIG undefined FUN_146a1615c(void)

longlong FUN_146a1615c(longlong param_1,undefined8 param_2,undefined8 *param_3)

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
  FUN_146a439ba(local_48,param_2,&local_38);
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



// FUNCTION 146a16206 FUN_146a16206 body=314 status=ok
// SIG undefined FUN_146a16206(void)

undefined4 FUN_146a16206(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar9 = *(longlong *)(param_1 + 0x280);
  lVar2 = *(longlong *)(lVar9 + 0x70);
  plVar3 = *(longlong **)(lVar9 + 0x78);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    lVar9 = *(longlong *)(param_1 + 0x280);
  }
  lVar4 = *(longlong *)(lVar9 + 0x60);
  plVar5 = *(longlong **)(lVar9 + 0x68);
  if (plVar5 == (longlong *)0x0) {
    if ((lVar2 != 0) && (lVar4 != 0)) {
      local_28 = (longlong *)0x0;
      goto LAB_146a16273;
    }
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    if ((lVar2 != 0) && (lVar4 != 0)) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      local_28 = plVar5;
LAB_146a16273:
      local_30 = lVar4;
      uVar7 = FUN_1469bb462(lVar2,&local_30);
      goto LAB_146a1627f;
    }
    lVar9 = *(longlong *)(param_1 + 0x280);
  }
  if (((*(int *)(lVar9 + 0x40) == 0) || (*(longlong **)(lVar9 + 0x38) == (longlong *)0x0)) ||
     (cVar6 = (**(code **)(**(longlong **)(lVar9 + 0x38) + 0x30))(), cVar6 == '\0')) {
    uVar7 = 0;
  }
  else {
    if (*(int *)(lVar9 + 0x40) == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = *(longlong **)(lVar9 + 0x38);
    }
    uVar7 = (**(code **)(*plVar8 + 0x58))();
  }
LAB_146a1627f:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar5 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 146a1634a FUN_146a1634a body=190 status=ok
// SIG undefined FUN_146a1634a(void)

longlong * FUN_146a1634a(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a515e6(*param_1,param_3);
  lVar1 = *param_1;
  local_30 = **(undefined8 **)param_1[2];
  local_28 = (*(undefined8 **)param_1[2])[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_146b05096(lVar1,param_3,&local_30);
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a1640a FUN_146a1640a body=172 status=ok
// SIG undefined FUN_146a1640a(void)

void FUN_146a1640a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x298);
  FUN_1449db362(param_1 + 0x280);
  FUN_1449db362(param_1 + 0x268);
  FUN_1449db362(param_1 + 0x250);
  FUN_1449db362(param_1 + 0x238);
  FUN_1449db362(param_1 + 0x220);
  FUN_1449db362(param_1 + 0x208);
  FUN_1449db362(param_1 + 0x1f0);
  plVar3 = *(longlong **)(param_1 + 0x1e0);
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
  FUN_1449db362(param_1 + 0x1c8);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 146a164b6 FUN_146a164b6 body=97 status=ok
// SIG undefined FUN_146a164b6(void)

longlong FUN_146a164b6(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x1b0) = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c4) = 0;
  *(undefined8 *)(param_1 + 0x1cc) = 0;
  return param_1;
}



// FUNCTION 146a16518 FUN_146a16518 body=115 status=ok
// SIG undefined FUN_146a16518(void)

longlong * FUN_146a16518(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146a4481a(*param_1,param_3);
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



// FUNCTION 146a1658c FUN_146a1658c body=76 status=ok
// SIG undefined FUN_146a1658c(void)

void FUN_146a1658c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x1d8);
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



// FUNCTION 146a165d8 FUN_146a165d8 body=8583 status=ok
// SIG undefined FUN_146a165d8(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_146a165d8(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  longlong *plVar16;
  byte *pbVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar22;
  byte bVar23;
  uint uVar24;
  undefined8 *puVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  float fVar29;
  undefined1 auStack_1958 [32];
  code **local_1938;
  undefined1 local_1930;
  byte local_1921;
  longlong local_1920;
  longlong *local_1918;
  code *local_1910;
  longlong local_1908;
  longlong *local_1900;
  uint local_18f8;
  uint local_18f4;
  code *local_18f0;
  longlong *local_18e8;
  longlong *local_18e0;
  longlong *local_18d8;
  undefined8 *local_18d0;
  undefined1 local_18c1;
  code *local_18c0;
  undefined4 local_18b8;
  undefined4 uStack_18b4;
  undefined1 local_18a1;
  code *local_18a0;
  longlong *local_1898;
  undefined1 local_1881;
  undefined8 local_1880;
  longlong *local_1878;
  undefined1 local_1861;
  undefined8 local_1860;
  longlong *local_1858;
  undefined1 local_1841;
  undefined8 local_1840;
  longlong *local_1838;
  undefined8 local_1828;
  undefined1 local_1820;
  undefined8 local_1818;
  undefined8 uStack_1810;
  undefined8 local_1808;
  undefined1 *puStack_1800;
  undefined4 local_17f8;
  undefined1 local_17f4;
  undefined8 local_17f0;
  undefined8 uStack_17e8;
  undefined8 local_17e0;
  longlong *local_17d8;
  undefined8 local_17d0;
  undefined8 uStack_17c8;
  undefined1 local_17c0;
  undefined8 local_17b8;
  undefined8 uStack_17b0;
  undefined8 local_17a8;
  longlong *local_17a0;
  undefined8 local_1798;
  longlong *local_1790;
  undefined4 local_1788;
  undefined1 local_1784;
  undefined8 local_1780;
  undefined8 uStack_1778;
  undefined8 local_1770;
  longlong *local_1768;
  undefined8 local_1760;
  undefined8 local_1758;
  longlong *plStack_1750;
  longlong local_1740;
  longlong *local_1738;
  longlong local_1730;
  longlong *local_1728;
  undefined1 local_1720;
  undefined8 local_1718;
  undefined8 uStack_1710;
  undefined8 local_1708;
  longlong *local_1700;
  undefined4 local_16f8;
  undefined1 local_16f4;
  undefined8 local_16f0;
  undefined8 uStack_16e8;
  undefined8 local_16e0;
  longlong *local_16d8;
  undefined8 local_16d0;
  undefined8 uStack_16c8;
  undefined1 local_16c0;
  undefined8 local_16b8;
  undefined8 uStack_16b0;
  code *local_16a8;
  longlong *local_16a0;
  undefined2 local_1690;
  undefined8 local_1688;
  undefined8 uStack_1680;
  undefined4 local_1678;
  undefined4 uStack_1674;
  undefined4 uStack_1670;
  undefined4 uStack_166c;
  undefined4 uStack_1668;
  undefined1 uStack_1664;
  undefined8 local_1660;
  undefined4 local_1658;
  undefined8 local_1648;
  longlong *local_1640;
  undefined8 local_1638;
  undefined1 *puStack_1630;
  undefined4 local_1628;
  undefined1 local_1624;
  undefined8 local_1620;
  undefined8 uStack_1618;
  undefined2 local_1610;
  undefined8 local_1608;
  undefined8 uStack_1600;
  undefined8 local_15f8;
  longlong *local_15f0;
  undefined8 local_15e8;
  undefined8 uStack_15e0;
  undefined1 local_15d8;
  undefined8 local_15d0;
  undefined8 uStack_15c8;
  code *local_15c0;
  longlong *local_15b8;
  undefined1 local_15b0 [8];
  longlong *local_15a8;
  longlong *local_1598;
  undefined4 local_1590;
  undefined1 local_1588;
  undefined8 local_1580;
  undefined4 local_1578;
  undefined8 local_1570;
  undefined8 uStack_1568;
  undefined1 local_1560;
  undefined8 local_1558;
  undefined8 uStack_1550;
  undefined4 local_1548;
  undefined1 local_1544;
  undefined8 local_1540;
  undefined8 uStack_1538;
  float local_1530;
  undefined1 local_152c;
  undefined8 local_1528;
  undefined8 uStack_1520;
  float local_1518;
  undefined1 local_1514;
  undefined8 local_1510;
  undefined8 uStack_1508;
  float local_1500;
  undefined1 local_14fc;
  undefined8 local_14f8;
  undefined8 uStack_14f0;
  float local_14e8;
  undefined1 local_14e4;
  undefined8 local_14e0;
  undefined8 uStack_14d8;
  undefined2 local_14d0;
  undefined8 local_14c8;
  undefined8 uStack_14c0;
  undefined8 local_14b8;
  undefined8 uStack_14b0;
  undefined1 local_14a8;
  undefined8 local_14a0;
  undefined8 uStack_1498;
  code *local_1490;
  undefined8 local_1488;
  undefined4 uStack_1480;
  undefined4 uStack_147c;
  undefined2 uStack_1478;
  undefined2 uStack_1476;
  undefined1 uStack_1474;
  undefined8 local_1470;
  undefined8 uStack_1468;
  longlong local_1460;
  undefined1 local_1458;
  undefined8 local_1450;
  undefined8 uStack_1448;
  undefined8 local_1440;
  undefined1 *puStack_1438;
  undefined4 local_1430;
  undefined1 local_142c;
  undefined8 local_1428;
  undefined8 uStack_1420;
  undefined4 local_1418;
  undefined4 uStack_1414;
  undefined4 uStack_1410;
  undefined4 uStack_140c;
  undefined8 local_1408;
  undefined8 uStack_1400;
  code *local_13f8;
  undefined4 local_13f0;
  undefined8 local_1250;
  undefined1 local_1248;
  undefined1 local_1240 [16];
  undefined4 local_1230;
  undefined4 uStack_122c;
  undefined4 uStack_1228;
  undefined4 uStack_1224;
  undefined4 local_1220;
  undefined1 local_121c;
  undefined1 local_1218 [88];
  code *local_11c0;
  undefined4 local_11b8;
  undefined4 uStack_11b4;
  undefined1 local_1100 [8];
  longlong *local_10f8;
  undefined1 local_1040 [8];
  longlong *local_1038;
  undefined1 local_e88 [24];
  undefined4 local_e70;
  undefined4 uStack_e6c;
  undefined4 uStack_e68;
  undefined4 uStack_e64;
  undefined1 local_e60 [8];
  undefined1 local_e58 [416];
  undefined1 local_cb8 [16];
  undefined8 local_ca8;
  longlong *local_ca0;
  undefined8 local_c80;
  undefined4 local_c78;
  undefined4 uStack_c74;
  undefined4 uStack_c70;
  undefined4 uStack_c6c;
  undefined1 *local_c68;
  undefined4 local_c60;
  undefined4 local_c50;
  undefined4 uStack_c4c;
  undefined4 uStack_c48;
  undefined4 uStack_c44;
  undefined1 local_c40;
  undefined1 local_c38 [376];
  undefined8 local_ac0;
  longlong *local_ab8;
  undefined1 local_a90 [32];
  undefined4 local_a70;
  undefined1 local_a6c;
  undefined1 local_a68 [24];
  code *local_a50;
  undefined8 uStack_a48;
  uint local_a40;
  undefined1 local_a3c;
  undefined8 local_a38;
  undefined4 local_a30;
  undefined2 local_9e0;
  undefined1 local_9d8 [304];
  longlong local_8a8;
  undefined1 local_8a0;
  undefined8 local_898 [2];
  undefined4 local_888;
  undefined4 uStack_884;
  undefined1 *puStack_880;
  undefined4 local_878;
  undefined1 local_874;
  undefined1 local_870 [88];
  undefined4 local_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined4 local_808;
  undefined1 local_804;
  undefined1 local_800 [544];
  code *local_5e0;
  undefined4 local_5d8;
  undefined4 uStack_5d4;
  undefined2 local_570;
  undefined1 local_568 [336];
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined8 local_408;
  longlong *local_400;
  float local_3f8;
  undefined1 local_3f4;
  undefined1 auStack_3f0 [16];
  float local_3e0;
  undefined1 local_3dc;
  undefined1 auStack_3d8 [160];
  code *local_338;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined2 local_2c8;
  undefined1 local_2c0 [304];
  undefined1 *local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined1 local_178;
  undefined1 local_170 [16];
  undefined8 local_160;
  longlong *local_158;
  float local_150;
  undefined1 local_14c;
  undefined1 local_148 [16];
  float local_138;
  undefined1 local_134;
  undefined1 auStack_130 [160];
  ulonglong local_90;
  undefined8 uStack_48;
  
  uStack_48 = 0x146a165ee;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1958;
  lVar9 = *(longlong *)(param_3 + 0x10);
  plVar20 = *(longlong **)(param_3 + 0x18);
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
    UNLOCK();
  }
  plVar16 = *(longlong **)(param_3 + 8);
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  lVar11 = *(longlong *)(param_3 + 0x20);
  local_1920 = param_1;
  if (lVar11 == 0) {
    FUN_142877ef0(&local_1418);
  }
  else {
    local_1408 = *(undefined8 *)(lVar11 + 0x50);
    uStack_1400 = *(undefined8 *)(lVar11 + 0x58);
    local_1418 = *(undefined4 *)(lVar11 + 0x40);
    uStack_1414 = *(undefined4 *)(lVar11 + 0x44);
    uStack_1410 = *(undefined4 *)(lVar11 + 0x48);
    uStack_140c = *(undefined4 *)(lVar11 + 0x4c);
  }
  plVar22 = DAT_14c98ded0;
  if (*(longlong *)(lVar9 + 0x130) == 0) {
    bVar27 = false;
    plVar14 = (longlong *)&local_1418;
  }
  else {
    bVar27 = *(longlong *)(lVar9 + 0x138) != 0;
    plVar14 = (longlong *)&local_1418;
    if (bVar27) {
      plVar14 = (longlong *)(lVar9 + 0x130);
    }
  }
  plVar21 = *(longlong **)(param_3 + 0xa8);
  local_1910 = DAT_14c98dec8;
  if (DAT_14c98ded0 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
    UNLOCK();
  }
  local_1908 = param_3;
  local_1900 = plVar21;
  local_18d8 = plVar20;
  local_18d0 = param_2;
  if (*plVar14 == 0) {
LAB_146a16718:
    local_1918 = plVar22;
  }
  else {
    plVar20 = (longlong *)&uStack_1410;
    if (bVar27) {
      plVar20 = (longlong *)(lVar9 + 0x138);
    }
    if (*plVar20 == 0) goto LAB_146a16718;
    lVar11 = FUN_1458e87ca();
    if (*(longlong *)(lVar11 + 0xa8) == 0) {
      plVar20 = (longlong *)(*(longlong *)(lVar11 + 0x38) + 0x18);
      if (*(longlong *)(lVar11 + 0x38) == 0) {
        plVar20 = (longlong *)(lVar11 + 0xa8);
      }
      local_1918 = plVar22;
      if (*plVar20 != 0) goto LAB_146a185a7;
    }
    else {
LAB_146a185a7:
      FUN_140a53334(&local_a50);
      local_1440 = 0x3f800000;
      puStack_1438 = &DAT_3f8000003f800000;
      local_1430 = CONCAT22(local_1430._2_2_,3);
      local_142c = 1;
      local_1428 = 0;
      uStack_1420 = 0;
      local_888 = 0x3f800000;
      uStack_884 = 0;
      puStack_880 = &DAT_3f8000003f800000;
      local_878 = local_1430;
      local_874 = 1;
      FUN_144a450dc(local_870,&local_1428);
      FUN_1449db362(&local_1428);
      local_1458 = 1;
      local_1450 = 0;
      uStack_1448 = 0;
      local_8a0 = 1;
      local_1460 = lVar11;
      local_8a8 = lVar11;
      FUN_144a450dc(local_898,&local_1450);
      FUN_1449db362(&local_1450);
      local_1938 = &local_13f8;
      FUN_140a554b8(&local_338,"SImage",
                    ".\\Runtime/Slate/Private/Framework/MultiBox/SMenuEntryBlock.cpp",0x324);
      FUN_140a52c70(&local_338,&local_5e0,&local_a50);
      local_1910 = local_5e0;
      plVar20 = (longlong *)CONCAT44(uStack_5d4,local_5d8);
      if (plVar20 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
        UNLOCK();
      }
      if (plVar22 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar22 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
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
      plVar21 = local_1900;
      plVar22 = (longlong *)CONCAT44(uStack_5d4,local_5d8);
      local_1918 = plVar20;
      if (plVar22 != (longlong *)0x0) {
        LOCK();
        plVar20 = plVar22 + 1;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)*plVar20 == 0) {
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
      param_3 = local_1908;
      plVar20 = (longlong *)CONCAT44(uStack_32c,local_330);
      if (plVar20 != (longlong *)0x0) {
        LOCK();
        plVar22 = plVar20 + 1;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)*plVar22 == 0) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar1 = (int *)((longlong)plVar20 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
        }
      }
      FUN_140a55a86(&local_a50);
    }
  }
  pbVar17 = (byte *)(*(longlong *)(param_3 + 0x20) + 0x80);
  if (*(longlong *)(param_3 + 0x20) == 0) {
    pbVar17 = (byte *)(lVar9 + 0x183);
  }
  bVar23 = *pbVar17;
  uVar24 = (uint)DAT_14c96b238;
  uVar4 = (uint)DAT_14c96b1e1;
  if ((bVar23 & 0xfe) == 2) {
    uVar4 = uVar24;
  }
  local_1488 = (code *)0x3f800000;
  uStack_1480 = 0x3f800000;
  uStack_147c = 0x3f800000;
  uStack_1478 = 2;
  uStack_1474 = 1;
  local_1470 = 0;
  uStack_1468 = 0;
  FUN_141160160(&local_1490,*(undefined8 *)(param_3 + 0xb0),".CheckBox");
  local_18f8 = uVar24;
  if (bVar23 == 4) {
    local_18f4 = uVar24;
    FUN_141160160(&local_a50,*(undefined8 *)(param_3 + 0xb0),".Check");
    local_1490 = local_a50;
  }
  else {
    local_18f4 = uVar4;
    if (bVar23 == 3) {
      FUN_141160160(&local_a50,*(undefined8 *)(param_3 + 0xb0),".RadioButton");
      local_1490 = local_a50;
      local_338 = (code *)0x0;
      local_330 = 0;
      FUN_1446efa72(&local_338,0,3,0x10);
      local_330 = 3;
      *(undefined ***)local_338 = &PTR_LAB_149f05990;
      LOCK();
      UNLOCK();
      lVar19 = DAT_14c758608 + 1;
      lVar11 = DAT_14c758608 + 1;
      if (lVar19 == 0) {
        LOCK();
        UNLOCK();
        lVar19 = DAT_14c758608 + 2;
        lVar11 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar11;
      *(longlong *)(local_338 + 0x10) = lVar19;
      *(undefined ***)local_338 = &PTR_FUN_149f0c710;
      *(longlong *)(local_338 + 0x18) = local_1920;
      *(code **)(local_338 + 0x20) = FUN_146a18760;
      *(undefined4 *)(local_338 + 0x28) = 0;
      local_a50 = (code *)0x3f800000;
      uStack_a48 = &DAT_3f8000003f800000;
      local_a40 = local_a40 & 0xffffff00;
      local_a3c = 1;
      local_a38 = 0;
      local_a30 = 0;
      FUN_140a5aaa0(&local_a38,&local_338);
      uStack_1478 = (undefined2)local_a40;
      uStack_1476 = (undefined2)(local_a40 >> 0x10);
      local_1488 = local_a50;
      uStack_1480 = (undefined4)uStack_a48;
      uStack_147c = uStack_a48._4_4_;
      uStack_1474 = local_a3c;
      FUN_144a450dc(&local_1470,&local_a38);
      FUN_1449db362(&local_a38);
      FUN_1449db362(&local_338);
      param_3 = local_1908;
    }
  }
  local_1938 = (code **)0x0;
  fVar29 = (float)(**(code **)(*plVar21 + 0x28))
                            (plVar21,*(undefined8 *)(param_3 + 0xb0),".MenuIconSize",0x41800000);
  local_18f0 = *(code **)(lVar9 + 0x170);
  pcVar3 = *(code **)(lVar9 + 0x178);
  if (pcVar3 != (code *)0x0) {
    LOCK();
    *(int *)((longlong)pcVar3 + 8) = (int)*(longlong *)((longlong)pcVar3 + 8) + 1;
    UNLOCK();
  }
  local_1921 = bVar23;
  local_18e0 = plVar16;
  if (local_18f0 != (code *)0x0) goto LAB_146a1725f;
  FUN_140a5296a(&local_13f8);
  FUN_140a50426(local_e88);
  lVar9 = FUN_140a52578(local_e88);
  local_14b8 = 0x40000000;
  uStack_14b0 = 0x40c00000;
  local_14a8 = 1;
  local_14a0 = 0;
  uStack_1498 = 0;
  *(undefined1 *)(lVar9 + 0x28) = 1;
  *(undefined4 *)(lVar9 + 0x18) = 0x40000000;
  *(undefined4 *)(lVar9 + 0x1c) = 0;
  *(undefined4 *)(lVar9 + 0x20) = 0x40c00000;
  *(undefined4 *)(lVar9 + 0x24) = 0;
  FUN_144a450dc(lVar9 + 0x30,&local_14a0);
  FUN_1449db362(&local_14a0);
  FUN_140a53a96(&local_338);
  puVar15 = &DAT_14c96b238;
  if (local_1910 == DAT_14c98dec8) {
    puVar15 = &DAT_14c96b1e1;
  }
  local_14d0 = CONCAT11(1,*puVar15);
  local_14c8 = 0;
  uStack_14c0 = 0;
  local_2c8 = local_14d0;
  FUN_144a450dc(local_2c0,&local_14c8);
  FUN_1449db362(&local_14c8);
  local_14e8 = fVar29 + 2.0;
  local_14e4 = 1;
  local_14e0 = 0;
  uStack_14d8 = 0;
  local_14c = 1;
  local_150 = local_14e8;
  FUN_144a450dc(local_148,&local_14e0);
  FUN_1449db362(&local_14e0);
  local_14fc = 1;
  local_14f8 = 0;
  uStack_14f0 = 0;
  local_134 = 1;
  local_1500 = fVar29;
  local_138 = fVar29;
  FUN_144a450dc(auStack_130,&local_14f8);
  FUN_1449db362(&local_14f8);
  local_190 = &DAT_200000002;
  FUN_140a53a96(&local_5e0);
  local_1514 = 1;
  local_1510 = 0;
  uStack_1508 = 0;
  local_3f4 = 1;
  local_1518 = fVar29;
  local_3f8 = fVar29;
  FUN_144a450dc(auStack_3f0,&local_1510);
  FUN_1449db362(&local_1510);
  plVar20 = local_1918;
  local_152c = 1;
  local_1528 = 0;
  uStack_1520 = 0;
  local_3dc = 1;
  local_1530 = fVar29;
  local_3e0 = fVar29;
  FUN_144a450dc(auStack_3d8,&local_1528);
  FUN_1449db362(&local_1528);
  plVar16 = local_400;
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
    UNLOCK();
  }
  local_408 = local_1910;
  local_400 = plVar20;
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar20 = plVar16 + 1;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)*plVar20 == 0) {
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
  local_1938 = (code **)&local_15f8;
  FUN_140a53d66(local_1040,&DAT_149efe19f,
                ".\\Runtime/Slate/Private/Framework/MultiBox/SMenuEntryBlock.cpp",0x358);
  FUN_140a50bf4(local_1040,&local_1880,&local_5e0);
  plVar20 = local_158;
  if (local_1878 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1878 + 1) = (int)local_1878[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_1878 + 1) = (int)local_1878[1] + 1;
    UNLOCK();
  }
  local_160 = local_1880;
  local_18e8 = local_1878;
  local_158 = local_1878;
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar20 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  local_1938 = (code **)&local_1648;
  FUN_140a53d66(local_1100,&DAT_149efe19f,
                ".\\Runtime/Slate/Private/Framework/MultiBox/SMenuEntryBlock.cpp",0x351);
  FUN_140a50bf4(local_1100,&local_1860,&local_338);
  local_1840 = local_1860;
  local_1838 = local_1858;
  if (local_1858 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1858 + 1) = (int)local_1858[1] + 1;
    UNLOCK();
  }
  uVar10 = FUN_140a4fe8e(lVar9,&local_1840);
  uVar10 = FUN_140a52392(&local_13f8,uVar10);
  FUN_140a50426(&local_c68);
  local_1548 = 0x3f800000;
  bVar27 = true;
  local_1544 = 1;
  local_1540 = 0;
  uStack_1538 = 0;
  lVar11 = FUN_140a5475a(&local_c68);
  local_1570 = 0x40000000;
  uStack_1568 = 0x40c00000;
  local_1560 = 1;
  local_1558 = 0;
  uStack_1550 = 0;
  *(undefined1 *)(lVar11 + 0x28) = 1;
  *(undefined4 *)(lVar11 + 0x18) = 0x40000000;
  *(undefined4 *)(lVar11 + 0x1c) = 0;
  *(undefined4 *)(lVar11 + 0x20) = 0x40c00000;
  *(undefined4 *)(lVar11 + 0x24) = 0;
  FUN_144a450dc(lVar11 + 0x30,&local_1558);
  FUN_1449db362(&local_1558);
  *(undefined4 *)(lVar11 + 0x48) = 2;
  *(undefined1 *)(lVar11 + 0x4c) = 1;
  FUN_140a570d8(&local_a50);
  lVar9 = local_1908;
  FUN_141160160(&local_15c0,*(undefined8 *)(local_1908 + 0xb0),".Label");
  puStack_880 = (undefined1 *)FUN_140a57516(local_1900,local_15c0,0,0);
  local_1598 = *(longlong **)(lVar9 + 0x30);
  if (local_1598 != (longlong *)0x0) {
    (**(code **)(*local_1598 + 8))();
  }
  local_1590 = *(undefined4 *)(lVar9 + 0x38);
  local_1588 = *(undefined1 *)(lVar9 + 0x40);
  local_1580 = 0;
  local_1578 = 0;
  FUN_1413a4324(&local_1580,lVar9 + 0x48);
  uVar12 = FUN_140a54906(&local_a50,&local_1598);
  plVar20 = *(longlong **)(local_1920 + 0x278);
  if (plVar20 == (longlong *)0x0) {
    plVar20 = (longlong *)0x0;
    uVar18 = 0;
  }
  else {
    iVar8 = (int)plVar20[1];
    uVar18 = 0;
    do {
      if (iVar8 == 0) {
        plVar20 = (longlong *)0x0;
        goto LAB_146a16ce5;
      }
      LOCK();
      iVar7 = (int)plVar20[1];
      bVar26 = iVar8 == iVar7;
      if (bVar26) {
        *(int *)(plVar20 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar26);
    uVar18 = *(undefined8 *)(local_1920 + 0x270);
    bVar27 = false;
  }
LAB_146a16ce5:
  local_11c0 = FUN_146a0c98a;
  local_11b8 = 0;
  FUN_146a13552(uVar12,uVar18);
  local_1938 = (code **)&local_16e0;
  FUN_140a54526(&local_11c0,"STextBlock",
                ".\\Runtime/Slate/Private/Framework/MultiBox/SMenuEntryBlock.cpp",0x365);
  FUN_140a52852(&local_11c0,&local_18c0,uVar12);
  local_1898 = (longlong *)CONCAT44(uStack_18b4,local_18b8);
  local_18a0 = local_18c0;
  if (local_1898 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1898 + 1) = (int)local_1898[1] + 1;
    UNLOCK();
  }
  uVar12 = FUN_140a4fe8e(lVar11,&local_18a0);
  uVar10 = FUN_140a52392(uVar10,uVar12);
  local_1938 = (code **)&local_1708;
  FUN_140a541dc(local_15b0,"SHorizontalBox",
                ".\\Runtime/Slate/Private/Framework/MultiBox/SMenuEntryBlock.cpp",0x34b);
  FUN_140a50ec6(local_15b0,&local_16a8,uVar10);
  plVar21 = local_1900;
  plVar16 = local_1918;
  local_18f0 = local_16a8;
  if (local_16a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_16a0 + 1) = (int)local_16a0[1] + 1;
    UNLOCK();
  }
  local_1910 = (code *)local_16a0;
  plVar22 = (longlong *)0x0;
  if ((code *)local_16a0 == pcVar3) {
    plVar22 = local_16a0;
  }
  if ((code *)local_16a0 != pcVar3 && pcVar3 != (code *)0x0) {
    LOCK();
    plVar22 = (longlong *)((longlong)pcVar3 + 8);
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)*plVar22 == 0) {
      (*(code *)**(undefined8 **)pcVar3)(pcVar3);
      LOCK();
      piVar1 = (int *)((longlong)pcVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar8 = *piVar1;
      UNLOCK();
joined_r0x000146a1700d:
      if (iVar8 == 0) {
        (**(code **)(*(longlong *)pcVar3 + 0x10))(pcVar3);
      }
    }
  }
  else if (plVar22 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar22 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar22)(plVar22);
      LOCK();
      piVar1 = (int *)((longlong)plVar22 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar8 = *piVar1;
      UNLOCK();
      pcVar3 = local_1910;
      goto joined_r0x000146a1700d;
    }
  }
  plVar22 = local_16a0;
  if (local_16a0 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_16a0 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_16a0)(local_16a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar22 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
  }
  plVar14 = local_15a8;
  plVar22 = local_18e8;
  bVar23 = local_1921;
  if (local_15a8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_15a8 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_15a8)(local_15a8);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if (local_1898 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_1898 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_1898)(local_1898);
      LOCK();
      piVar1 = (int *)((longlong)local_1898 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1898 + 0x10))(local_1898);
      }
    }
  }
  plVar14 = (longlong *)CONCAT44(uStack_18b4,local_18b8);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar14 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  plVar14 = (longlong *)CONCAT44(uStack_11b4,local_11b8);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar14 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if (!bVar27) {
    LOCK();
    plVar14 = plVar20 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  FUN_140a59ae6(&local_a50);
  FUN_140a509a6(&local_c68);
  plVar20 = local_1838;
  if (local_1838 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_1838 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_1838)(local_1838);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  plVar20 = local_1858;
  if (local_1858 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_1858 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_1858)(local_1858);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  plVar20 = local_10f8;
  if (local_10f8 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_10f8 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_10f8)(local_10f8);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  if (plVar22 != (longlong *)0x0) {
    LOCK();
    plVar20 = plVar22 + 1;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)*plVar20 == 0) {
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
  if (local_1878 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_1878 + 1;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)*plVar20 == 0) {
      (**(code **)*local_1878)(local_1878);
      LOCK();
      piVar1 = (int *)((longlong)local_1878 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1878 + 0x10))(local_1878);
      }
    }
  }
  plVar20 = local_1038;
  local_1918 = plVar16;
  if (local_1038 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_1038 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*local_1038)(local_1038);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  FUN_140a5660c(&local_5e0);
  FUN_140a5660c(&local_338);
  FUN_140a509a6(local_e88);
  FUN_145ab33da(&local_13f8);
  pcVar3 = local_1910;
LAB_146a1725f:
  local_1910 = pcVar3;
  FUN_140a5296a(&local_13f8);
  FUN_140a50426(local_e88);
  local_15e8 = 0x40000000;
  uStack_15e0 = 0x41000000;
  local_15d8 = 1;
  local_15d0 = 0;
  uStack_15c8 = 0;
  local_e60[0] = 1;
  local_e70 = 0x40000000;
  uStack_e6c = 0;
  uStack_e68 = 0x41000000;
  uStack_e64 = 0;
  FUN_144a450dc(local_e58,&local_15d0);
  FUN_1449db362(&local_15d0);
  uVar10 = FUN_140a52578(local_e88);
  FUN_146a15ef2(&local_338);
  if (bVar23 == 4) {
    FUN_140a53334(&local_5e0);
    local_1610 = CONCAT11(1,(char)local_18f8);
    local_1608 = 0;
    uStack_1600 = 0;
    local_570 = local_1610;
    FUN_144a450dc(local_568,&local_1608);
    FUN_1449db362(&local_1608);
    local_1638 = 0x3f800000;
    puStack_1630 = &DAT_3f8000003f800000;
    local_1628 = CONCAT22(local_1628._2_2_,2);
    local_1624 = 1;
    local_1620 = 0;
    uStack_1618 = 0;
    local_418 = 0x3f800000;
    uStack_414 = 0;
    uStack_410 = 0x3f800000;
    uStack_40c = 0x3f800000;
    local_408._0_5_ = CONCAT14(1,local_1628);
    FUN_144a450dc(&local_400,&local_1620);
    FUN_1449db362(&local_1620);
    uVar12 = FUN_145a4e88a(plVar21,local_1490,0,0);
    local_a50 = FUN_146a16108;
    uStack_a48 = (undefined1 *)((ulonglong)uStack_a48 & 0xffffffff00000000);
    FUN_146a1604a(&local_5e0,local_1920,&local_a50,uVar12);
    local_1938 = (code **)&local_16e0;
    FUN_140a554b8(local_15b0,"SImage",
                  ".\\Runtime/Slate/Private/Framework/MultiBox/SMenuEntryBlock.cpp",0x377);
    puVar25 = &local_15f8;
    FUN_140a52c70(local_15b0,puVar25,&local_5e0);
  }
  else {
    FUN_1469f91ec(&local_a50);
    local_1678 = (undefined4)local_1488;
    uStack_1674 = local_1488._4_4_;
    uStack_1670 = uStack_1480;
    uStack_1668 = CONCAT22(uStack_1476,uStack_1478);
    uStack_166c = uStack_147c;
    uStack_1664 = uStack_1474;
    local_1660 = 0;
    local_1658 = 0;
    FUN_140a5aaa0(&local_1660,&local_1470);
    local_808 = uStack_1668;
    local_818 = local_1678;
    uStack_814 = uStack_1674;
    uStack_810 = uStack_1670;
    uStack_80c = uStack_166c;
    local_804 = uStack_1664;
    FUN_144a450dc(local_800,&local_1660);
    FUN_1449db362(&local_1660);
    local_1690 = CONCAT11(1,(char)local_18f4);
    local_1688 = 0;
    uStack_1680 = 0;
    local_9e0 = local_1690;
    FUN_144a450dc(local_9d8,&local_1688);
    FUN_1449db362(&local_1688);
    lVar9 = local_1920;
    local_5e0 = FUN_146a16206;
    local_5d8 = 0;
    FUN_146a1615c(&local_a50,local_1920);
    local_898[0] = FUN_145a4e88a(plVar21,local_1490,0,0);
    local_c68 = &LAB_146a16342;
    local_c60 = 0;
    FUN_146a43eaa(&local_5e0,lVar9);
    FUN_144a450dc(&local_888,&local_5e0);
    FUN_1449db362(&local_5e0);
    local_1938 = (code **)&local_1708;
    FUN_1469fcac2(&local_16a8,"SCheckBox",
                  ".\\Runtime/Slate/Private/Framework/MultiBox/SMenuEntryBlock.cpp",0x37b);
    puVar25 = &local_1648;
    FUN_1469f9992(&local_16a8,puVar25,&local_a50);
  }
  plVar16 = local_158;
  local_160 = *puVar25;
  plVar20 = (longlong *)puVar25[1];
  bVar27 = plVar20 != (longlong *)0x0;
  if (bVar27) {
    LOCK();
    *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
    UNLOCK();
  }
  else {
    plVar20 = (longlong *)0x0;
  }
  plVar22 = plVar20;
  if (local_158 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_158 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      puVar25 = (undefined8 *)*local_158;
      local_158 = plVar20;
      (*(code *)*puVar25)();
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar22 = local_158;
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))();
        plVar22 = local_158;
      }
    }
  }
  local_158 = plVar22;
  plVar16 = *(longlong **)(local_1920 + 0x278);
  bVar26 = true;
  if (plVar16 == (longlong *)0x0) {
    plVar16 = (longlong *)0x0;
    lVar9 = 0;
  }
  else {
    iVar8 = (int)plVar16[1];
    lVar9 = 0;
    do {
      if (iVar8 == 0) {
        plVar16 = (longlong *)0x0;
        goto LAB_146a17611;
      }
      LOCK();
      iVar7 = (int)plVar16[1];
      bVar28 = iVar8 == iVar7;
      if (bVar28) {
        *(int *)(plVar16 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar28);
    lVar9 = *(longlong *)(local_1920 + 0x270);
    bVar26 = false;
  }
LAB_146a17611:
  local_1880 = *(undefined8 *)(lVar9 + 0x4b0);
  local_1878 = *(longlong **)(lVar9 + 0x4b8);
  if (local_1878 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1878 + 1) = (int)local_1878[1] + 1;
    UNLOCK();
  }
  local_18c0 = (code *)&local_1880;
  FUN_146a432b4(local_1040,0x373);
  FUN_146a1634a(local_1040,&local_1860,&local_338);
  local_1840 = local_1860;
  local_1838 = local_1858;
  if (local_1858 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1858 + 1) = (int)local_1858[1] + 1;
    UNLOCK();
  }
  uVar10 = FUN_140a4fe8e(uVar10,&local_1840);
  uVar10 = FUN_140a52392(&local_13f8,uVar10);
  FUN_140a50426(&local_c68);
  local_16d0 = 0x40000000;
  uStack_16c8 = 0;
  local_16c0 = 1;
  local_16b8 = 0;
  uStack_16b0 = 0;
  local_c40 = 1;
  local_c50 = 0x40000000;
  uStack_c4c = 0;
  uStack_c48 = 0;
  uStack_c44 = 0;
  FUN_144a450dc(local_c38,&local_16b8);
  FUN_1449db362(&local_16b8);
  local_18a0 = local_18f0;
  local_1898 = (longlong *)local_1910;
  if (local_1910 != (code *)0x0) {
    LOCK();
    *(int *)((longlong)local_1910 + 8) = (int)*(longlong *)((longlong)local_1910 + 8) + 1;
    UNLOCK();
  }
  uVar12 = FUN_140a4fe8e(&local_c68,&local_18a0);
  uVar10 = FUN_140a52392(uVar10,uVar12);
  local_1938 = (code **)&local_1740;
  FUN_140a541dc(local_1100,"SHorizontalBox",
                ".\\Runtime/Slate/Private/Framework/MultiBox/SMenuEntryBlock.cpp",0x36e);
  FUN_140a50ec6(local_1100,&local_11c0,uVar10);
  local_15b8 = (longlong *)CONCAT44(uStack_11b4,local_11b8);
  local_15c0 = local_11c0;
  if (local_15b8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_15b8 + 1) = (int)local_15b8[1] + 1;
    UNLOCK();
    plVar22 = (longlong *)CONCAT44(uStack_11b4,local_11b8);
    if (plVar22 != (longlong *)0x0) {
      LOCK();
      plVar14 = plVar22 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
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
  bVar23 = local_1921;
  if (local_10f8 != (longlong *)0x0) {
    LOCK();
    plVar22 = local_10f8 + 1;
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)*plVar22 == 0) {
      (**(code **)*local_10f8)(local_10f8);
      LOCK();
      piVar1 = (int *)((longlong)local_10f8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_10f8 + 0x10))(local_10f8);
      }
    }
  }
  plVar22 = local_1898;
  if (local_1898 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_1898 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_1898)(local_1898);
      LOCK();
      piVar1 = (int *)((longlong)plVar22 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
  }
  FUN_140a509a6(&local_c68);
  plVar22 = local_1838;
  if (local_1838 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_1838 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_1838)(local_1838);
      LOCK();
      piVar1 = (int *)((longlong)plVar22 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
  }
  plVar22 = local_1858;
  if (local_1858 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_1858 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_1858)(local_1858);
      LOCK();
      piVar1 = (int *)((longlong)plVar22 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
  }
  if (local_1038 != (longlong *)0x0) {
    LOCK();
    plVar22 = local_1038 + 1;
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)*plVar22 == 0) {
      (**(code **)*local_1038)(local_1038);
      LOCK();
      piVar1 = (int *)((longlong)local_1038 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1038 + 0x10))(local_1038);
      }
    }
  }
  plVar22 = local_1878;
  if (local_1878 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_1878 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_1878)(local_1878);
      LOCK();
      piVar1 = (int *)((longlong)plVar22 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
  }
  if (!bVar26) {
    LOCK();
    plVar22 = plVar16 + 1;
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)*plVar22 == 0) {
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
  lVar9 = local_1908;
  if (bVar27) {
    LOCK();
    plVar16 = plVar20 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  plVar20 = local_1918;
  if (bVar23 == 4) {
    if (local_15f0 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_15f0 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*local_15f0)(local_15f0);
        LOCK();
        piVar1 = (int *)((longlong)local_15f0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_15f0 + 0x10))(local_15f0);
        }
      }
    }
    if (local_15a8 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_15a8 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*local_15a8)(local_15a8);
        LOCK();
        piVar1 = (int *)((longlong)local_15a8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_15a8 + 0x10))(local_15a8);
        }
      }
    }
    FUN_140a55a86(&local_5e0);
  }
  else {
    if (local_1640 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_1640 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*local_1640)(local_1640);
        LOCK();
        piVar1 = (int *)((longlong)local_1640 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1640 + 0x10))(local_1640);
        }
      }
    }
    if (local_16a0 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_16a0 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*local_16a0)(local_16a0);
        LOCK();
        piVar1 = (int *)((longlong)local_16a0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_16a0 + 0x10))(local_16a0);
        }
      }
    }
    FUN_1469f9dde(&local_a50);
  }
  FUN_146a1640a(&local_338);
  FUN_140a509a6(local_e88);
  FUN_145ab33da(&local_13f8);
  FUN_146a12e26(&local_c68);
  local_16f8 = 5;
  local_16f4 = 1;
  local_16f0 = 0;
  uStack_16e8 = 0;
  local_a70 = 5;
  local_a6c = 1;
  FUN_144a450dc(local_a68,&local_16f0);
  FUN_1449db362(&local_16f0);
  local_13f8 = FUN_146a0c3ee;
  local_13f0 = 0;
  FUN_146a40fa2(&local_338,local_1920,&local_13f8);
  FUN_144a450dc(local_a90,&local_338);
  FUN_1449db362(&local_338);
  FUN_146a18888();
  local_1758 = 0;
  plStack_1750 = (longlong *)0x0;
  plVar16 = DAT_14c98eb08;
  if (DAT_14c98eb10 == 0) {
    plVar16 = (longlong *)0x0;
  }
  local_1930 = 0;
  local_1938 = (code **)(lVar9 + 0x20);
  local_1918 = plVar20;
  (**(code **)(*plVar16 + 0x58))(plVar16,&local_1740,lVar9 + 0x58,&local_1758);
  local_1730 = local_1740 + 0x268;
  if (local_1740 == 0) {
    local_1730 = 0;
  }
  local_1728 = local_1738;
  if (local_1738 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1738 + 1) = (int)local_1738[1] + 1;
    UNLOCK();
  }
  local_1720 = 1;
  local_1718 = 0;
  uStack_1710 = 0;
  FUN_145766fac(local_e60,&local_1730);
  FUN_14576702a(&local_1730);
  lVar9 = local_1908;
  FUN_141160160(&local_1760,*(undefined8 *)(local_1908 + 0xb0),".Button");
  plVar20 = local_1900;
  local_c80 = FUN_141492734(local_1900,local_1760,0,0);
  local_1938 = (code **)0x0;
  puVar13 = (undefined4 *)
            (**(code **)(*plVar20 + 0x48))
                      (plVar20,*(undefined8 *)(lVar9 + 0xb0),".Block.Padding",&DAT_14c98de88);
  local_c78 = *puVar13;
  uStack_c74 = puVar13[1];
  uStack_c70 = puVar13[2];
  uStack_c6c = puVar13[3];
  local_338 = FUN_146a189b4;
  local_330 = 0;
  FUN_146a1890a(local_e88,local_1920);
  FUN_140a5296a(local_1040);
  FUN_140a50426(local_1100);
  local_1788 = 0x3f800000;
  local_1784 = 1;
  local_1780 = 0;
  uStack_1778 = 0;
  uVar10 = FUN_140a5475a(local_1100);
  uVar10 = FUN_146a07044(uVar10,&local_15c0);
  uVar10 = FUN_140a52392(local_1040,uVar10);
  FUN_140a50426(&local_11c0);
  lVar11 = FUN_140a52578(&local_11c0);
  *(undefined4 *)(lVar11 + 0x48) = 2;
  *(undefined1 *)(lVar11 + 0x4c) = 1;
  *(undefined4 *)(lVar11 + 0x40) = 3;
  *(undefined1 *)(lVar11 + 0x44) = 1;
  FUN_140a53a96(&local_338);
  local_17d0 = 0x40e00000;
  uStack_17c8 = 0;
  local_17c0 = 1;
  local_17b8 = 0;
  uStack_17b0 = 0;
  local_178 = 1;
  local_188 = 0x40e00000;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_17c = 0;
  FUN_144a450dc(local_170,&local_17b8);
  FUN_1449db362(&local_17b8);
  FUN_140a53334(&local_13f8);
  local_1808 = 0x3f800000;
  puStack_1800 = &DAT_3f8000003f800000;
  local_17f8 = CONCAT22(local_17f8._2_2_,2);
  local_17f4 = 1;
  local_17f0 = 0;
  uStack_17e8 = 0;
  local_1230 = 0x3f800000;
  uStack_122c = 0;
  uStack_1228 = 0x3f800000;
  uStack_1224 = 0x3f800000;
  local_1220 = local_17f8;
  local_121c = 1;
  FUN_144a450dc(local_1218,&local_17f0);
  FUN_1449db362(&local_17f0);
  local_1828 = (**(code **)(*plVar20 + 0x50))
                         (plVar20,*(undefined8 *)(lVar9 + 0xb0),".SubMenuIndicator",0);
  local_1820 = 1;
  local_1818 = 0;
  uStack_1810 = 0;
  local_1248 = 1;
  local_1250 = local_1828;
  FUN_144a450dc(local_1240,&local_1818);
  FUN_1449db362(&local_1818);
  local_1938 = (code **)&local_1841;
  FUN_140a554b8(&local_1840,"SImage",
                ".\\Runtime/Slate/Private/Framework/MultiBox/SMenuEntryBlock.cpp",0x3a8);
  FUN_140a52c70(&local_1840,&local_17e0,&local_13f8);
  plVar22 = local_158;
  plVar16 = local_17d8;
  puVar25 = local_18d0;
  plVar20 = local_1918;
  if (local_17d8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_17d8 + 1) = (int)local_17d8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_17d8 + 1) = (int)local_17d8[1] + 1;
    UNLOCK();
  }
  local_160 = local_17e0;
  local_158 = local_17d8;
  if (plVar22 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar22 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  local_1938 = (code **)&local_1861;
  FUN_140a53d66(&local_1860,&DAT_149efe19f,
                ".\\Runtime/Slate/Private/Framework/MultiBox/SMenuEntryBlock.cpp",0x3a5);
  FUN_140a50bf4(&local_1860,&local_17a8,&local_338);
  local_1798 = local_17a8;
  local_1790 = local_17a0;
  if (local_17a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_17a0 + 1) = (int)local_17a0[1] + 1;
    UNLOCK();
  }
  uVar12 = FUN_140a4fe8e(lVar11,&local_1798);
  uVar10 = FUN_140a52392(uVar10,uVar12);
  local_1938 = (code **)&local_1881;
  FUN_140a541dc(&local_1880,"SHorizontalBox",
                ".\\Runtime/Slate/Private/Framework/MultiBox/SMenuEntryBlock.cpp",0x39a);
  FUN_140a50ec6(&local_1880,&local_1770,uVar10);
  plVar14 = local_ca0;
  plVar22 = local_1768;
  if (local_1768 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1768 + 1) = (int)local_1768[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_1768 + 1) = (int)local_1768[1] + 1;
    UNLOCK();
  }
  local_ca8 = local_1770;
  local_ca0 = local_1768;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar21 = plVar14 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  local_18c0 = FUN_146a1362a;
  local_18b8 = 0;
  FUN_146a42b36(&local_18a0,local_1920);
  FUN_144a450dc(local_cb8,&local_18a0);
  FUN_1449db362(&local_18a0);
  FUN_146a44a32(&local_18a0,&local_18a1);
  FUN_146a18a90(&local_18a0,&local_1708,local_e88);
  plVar21 = local_ab8;
  plVar14 = local_1700;
  if (local_1700 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1700 + 1) = (int)local_1700[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_1700 + 1) = (int)local_1700[1] + 1;
    UNLOCK();
  }
  local_ac0 = local_1708;
  local_ab8 = local_1700;
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar21 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar21)(plVar21);
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
  local_1938 = (code **)&local_18c1;
  FUN_146a40d60(&local_18c0,"SMenuAnchor",
                ".\\Runtime/Slate/Private/Framework/MultiBox/SMenuEntryBlock.cpp",0x38b);
  pcVar3 = local_18c0;
  plVar21 = (longlong *)CONCAT44(uStack_18b4,local_18b8);
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
    UNLOCK();
  }
  FUN_146a13676(&local_18c0,&local_16e0,&local_c68);
  *puVar25 = local_16e0;
  puVar25[1] = local_16d8;
  if (local_16d8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_16d8 + 1) = (int)local_16d8[1] + 1;
    UNLOCK();
    if (local_16d8 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_16d8 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_16d8)(local_16d8);
        LOCK();
        piVar1 = (int *)((longlong)local_16d8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_16d8 + 0x10))(local_16d8);
        }
      }
    }
  }
  plVar5 = (longlong *)CONCAT44(uStack_18b4,local_18b8);
  if (plVar5 != (longlong *)0x0) {
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
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar14 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if (local_1700 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_1700 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_1700)(local_1700);
      LOCK();
      piVar1 = (int *)((longlong)local_1700 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1700 + 0x10))(local_1700);
      }
    }
  }
  plVar14 = local_1898;
  pcVar6 = local_1910;
  if (local_1898 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1898 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_1898)(local_1898);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if (plVar22 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar22 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  if (local_1768 != (longlong *)0x0) {
    LOCK();
    plVar22 = local_1768 + 1;
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)*plVar22 == 0) {
      (**(code **)*local_1768)(local_1768);
      LOCK();
      piVar1 = (int *)((longlong)local_1768 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1768 + 0x10))(local_1768);
      }
    }
  }
  plVar22 = local_1878;
  if (local_1878 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_1878 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_1878)(local_1878);
      LOCK();
      piVar1 = (int *)((longlong)plVar22 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
  }
  plVar22 = local_1790;
  if (local_1790 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_1790 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_1790)(local_1790);
      LOCK();
      piVar1 = (int *)((longlong)plVar22 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
  }
  if (local_17a0 != (longlong *)0x0) {
    LOCK();
    plVar22 = local_17a0 + 1;
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)*plVar22 == 0) {
      (**(code **)*local_17a0)(local_17a0);
      LOCK();
      piVar1 = (int *)((longlong)local_17a0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_17a0 + 0x10))(local_17a0);
      }
    }
  }
  if (local_1858 != (longlong *)0x0) {
    LOCK();
    plVar22 = local_1858 + 1;
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)*plVar22 == 0) {
      (**(code **)*local_1858)(local_1858);
      LOCK();
      piVar1 = (int *)((longlong)local_1858 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1858 + 0x10))(local_1858);
      }
    }
  }
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar22 = plVar16 + 1;
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)*plVar22 == 0) {
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
  plVar16 = local_18e0;
  if (local_17d8 != (longlong *)0x0) {
    LOCK();
    plVar22 = local_17d8 + 1;
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)*plVar22 == 0) {
      (**(code **)*local_17d8)(local_17d8);
      LOCK();
      piVar1 = (int *)((longlong)local_17d8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_17d8 + 0x10))(local_17d8);
      }
    }
  }
  plVar22 = local_1838;
  if (local_1838 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_1838 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_1838)(local_1838);
      LOCK();
      piVar1 = (int *)((longlong)plVar22 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
  }
  FUN_140a55a86(&local_13f8);
  FUN_140a5660c(&local_338);
  FUN_140a509a6(&local_11c0);
  FUN_140a509a6(local_1100);
  FUN_145ab33da(local_1040);
  if (local_1738 != (longlong *)0x0) {
    LOCK();
    plVar22 = local_1738 + 1;
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)*plVar22 == 0) {
      (**(code **)*local_1738)(local_1738);
      LOCK();
      piVar1 = (int *)((longlong)local_1738 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1738 + 0x10))(local_1738);
      }
    }
  }
  plVar22 = plStack_1750;
  if (plStack_1750 != (longlong *)0x0) {
    LOCK();
    plVar14 = plStack_1750 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plStack_1750)(plStack_1750);
      LOCK();
      piVar1 = (int *)((longlong)plVar22 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
  }
  FUN_146a18b04(local_e88);
  FUN_146a136ea(&local_c68);
  *(code **)(local_1920 + 0x2c8) = pcVar3;
  plVar22 = *(longlong **)(local_1920 + 0x2d0);
  if (plVar22 != plVar21) {
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar21 + 0xc) = *(int *)((longlong)plVar21 + 0xc) + 1;
      UNLOCK();
      plVar22 = *(longlong **)(local_1920 + 0x2d0);
    }
    if (plVar22 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar22 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar22 + 0x10))();
      }
    }
    *(longlong **)(local_1920 + 0x2d0) = plVar21;
  }
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    plVar22 = plVar21 + 1;
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)*plVar22 == 0) {
      (**(code **)*plVar21)(plVar21);
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
  plVar22 = local_15b8;
  if (local_15b8 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_15b8 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_15b8)(local_15b8);
      LOCK();
      piVar1 = (int *)((longlong)plVar22 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
  }
  if (pcVar6 != (code *)0x0) {
    LOCK();
    plVar22 = (longlong *)((longlong)pcVar6 + 8);
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)*plVar22 == 0) {
      (*(code *)**(undefined8 **)pcVar6)(pcVar6);
      LOCK();
      piVar1 = (int *)((longlong)pcVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*(longlong *)pcVar6 + 0x10))(pcVar6);
      }
    }
  }
  FUN_1449db362(&local_1470);
  plVar22 = local_18d8;
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar20 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar20 = plVar16 + 1;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)*plVar20 == 0) {
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
  if (plVar22 != (longlong *)0x0) {
    LOCK();
    plVar20 = plVar22 + 1;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)*plVar20 == 0) {
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
  if ((local_90 ^ (ulonglong)auStack_1958) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar25;
}



// FUNCTION 146a18760 FUN_146a18760 body=296 status=ok
// SIG undefined FUN_146a18760(void)

undefined8 * FUN_146a18760(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  
  if (*(char *)(param_1 + 0x43) == '\x01') {
    plVar7 = *(longlong **)(param_1 + 0x278);
    bVar3 = true;
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
      lVar6 = 0;
    }
    else {
      iVar5 = (int)plVar7[1];
      lVar6 = 0;
      do {
        if (iVar5 == 0) {
          plVar7 = (longlong *)0x0;
          goto LAB_146a187c4;
        }
        LOCK();
        iVar4 = (int)plVar7[1];
        bVar8 = iVar5 == iVar4;
        if (bVar8) {
          *(int *)(plVar7 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar8);
      lVar6 = *(longlong *)(param_1 + 0x270);
      bVar3 = false;
    }
LAB_146a187c4:
    plVar2 = *(longlong **)(*(longlong *)(lVar6 + 0x278) + 0x58);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c98eb50) && (FUN_144b3d300(&DAT_14c98eb50), DAT_14c98eb50 == -1)) {
      FUN_1446ddc76(&DAT_14c98eb48,"SelectionColor",1);
      _Init_thread_footer(&DAT_14c98eb50);
    }
    (**(code **)(*plVar2 + 0x40))(plVar2,param_2,DAT_14c98eb48,0,&DAT_14c98de74,0);
    if (!bVar3) {
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
  }
  else {
    *param_2 = 0x3f800000;
    param_2[1] = &DAT_3f8000003f800000;
    *(undefined2 *)(param_2 + 2) = 2;
  }
  return param_2;
}



// FUNCTION 146a18888 FUN_146a18888 body=129 status=ok
// SIG undefined FUN_146a18888(void)

longlong FUN_146a18888(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_140a5071c();
  FUN_144a5dc74(param_1 + 0x1a8);
  *(undefined1 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1cc) = 0;
  *(undefined8 *)(param_1 + 0x1d4) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x1e8) = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined2 *)(param_1 + 0x1f0) = 0x100;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  return param_1;
}



// FUNCTION 146a1890a FUN_146a1890a body=169 status=ok
// SIG undefined FUN_146a1890a(void)

longlong FUN_146a1890a(longlong param_1,undefined8 param_2,undefined8 *param_3)

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
  FUN_146a44cf8(local_48,param_2,&local_38);
  local_38 = CONCAT62(local_38._2_6_,0x100);
  local_30 = 0;
  local_28 = 0;
  FUN_14096c7c0(&local_30,local_48);
  *(undefined2 *)(param_1 + 0x1f0) = (undefined2)local_38;
  FUN_144a450dc(param_1 + 0x1f8,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a189b4 FUN_146a189b4 body=219 status=ok
// SIG undefined FUN_146a189b4(void)

ulonglong FUN_146a189b4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined7 uVar10;
  ulonglong uVar9;
  bool bVar11;
  
  if (((*(longlong *)(param_1 + 0x2c8) == 0) ||
      (plVar8 = *(longlong **)(param_1 + 0x2d0), plVar8 == (longlong *)0x0)) || ((int)plVar8[1] < 1)
     ) {
    uVar9 = 0;
  }
  else {
    iVar6 = (int)plVar8[1];
    uVar7 = 0;
    do {
      if (iVar6 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_146a18a04;
      }
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar11 = iVar6 == iVar4;
      if (bVar11) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar11);
    uVar7 = *(undefined8 *)(param_1 + 0x2c8);
LAB_146a18a04:
    cVar5 = FUN_146a62c32(uVar7);
    if (cVar5 == '\0') {
      uVar9 = 0;
    }
    else {
      plVar3 = *(longlong **)(param_1 + 0x278);
      uVar10 = (undefined7)((ulonglong)param_1 >> 8);
      if (plVar3 == (longlong *)0x0) {
LAB_146a18a81:
        uVar9 = CONCAT71(uVar10,DAT_0000003b) ^ 1;
      }
      else {
        iVar6 = (int)plVar3[1];
        do {
          if (iVar6 == 0) goto LAB_146a18a81;
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar11 = iVar6 == iVar4;
          if (bVar11) {
            *(int *)(plVar3 + 1) = iVar6 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
          UNLOCK();
        } while (!bVar11);
        uVar9 = CONCAT71(uVar10,*(undefined1 *)(*(longlong *)(param_1 + 0x270) + 0x3b)) ^ 1;
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
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 146a18a90 FUN_146a18a90 body=115 status=ok
// SIG undefined FUN_146a18a90(void)

longlong * FUN_146a18a90(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146a451e8(*param_1,param_3);
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



// FUNCTION 146a18b04 FUN_146a18b04 body=118 status=ok
// SIG undefined FUN_146a18b04(void)

void FUN_146a18b04(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x1f8);
  plVar3 = *(longlong **)(param_1 + 0x1e8);
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
  FUN_1449db362(param_1 + 0x1d0);
  FUN_1449db362(param_1 + 0x1c0);
  if (*(longlong **)(param_1 + 0x1a8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x10))();
  }
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 146a18b7a FUN_146a18b7a body=4213 status=ok
// SIG undefined FUN_146a18b7a(void)

void FUN_146a18b7a(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  undefined1 uVar4;
  code *pcVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  undefined1 auStack_258 [36];
  undefined4 local_234;
  longlong local_230;
  longlong *local_228;
  longlong local_220;
  longlong *local_218;
  undefined2 local_210 [4];
  undefined1 local_208 [16];
  undefined2 local_1f8 [4];
  undefined1 local_1f0 [16];
  undefined2 local_1e0 [4];
  undefined1 local_1d8 [16];
  code *local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  undefined4 local_1b0;
  code *local_1a8;
  longlong local_1a0;
  longlong *local_198;
  undefined4 local_190;
  code *local_188;
  undefined4 local_180;
  undefined1 local_178;
  undefined8 local_170;
  undefined4 local_168;
  longlong local_160;
  longlong *local_158;
  code *local_150;
  longlong *local_148;
  longlong local_140;
  longlong *local_138;
  longlong local_130;
  longlong *local_128;
  longlong local_120;
  longlong *local_118;
  undefined1 local_110 [16];
  undefined1 local_100;
  longlong *local_f8;
  int local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8;
  longlong *local_d0;
  int local_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  code *local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_146a19bf0();
  plVar17 = (longlong *)param_1[0x4f];
  bVar19 = true;
  if (plVar17 == (longlong *)0x0) {
    plVar17 = (longlong *)0x0;
    lVar16 = 0;
  }
  else {
    iVar8 = (int)plVar17[1];
    lVar16 = 0;
    do {
      if (iVar8 == 0) {
        plVar17 = (longlong *)0x0;
        goto LAB_146a18bcc;
      }
      LOCK();
      iVar6 = (int)plVar17[1];
      bVar21 = iVar8 == iVar6;
      if (bVar21) {
        *(int *)(plVar17 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar21);
    lVar16 = param_1[0x4e];
    bVar19 = false;
  }
LAB_146a18bcc:
  local_220 = *(longlong *)(lVar16 + 0x278);
  plVar11 = *(longlong **)(lVar16 + 0x280);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    plVar10 = plVar11 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    plVar10 = plVar11 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if (!bVar19) {
    LOCK();
    plVar10 = plVar17 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
  lVar16 = param_1[0x50];
  plVar17 = (longlong *)param_1[0x51];
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
    LOCK();
    plVar10 = plVar17 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
    LOCK();
    plVar10 = plVar17 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
  plVar10 = local_138;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_140 = local_220;
  plVar14 = plVar11;
  if (local_138 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_138 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      puVar13 = (undefined8 *)*local_138;
      local_138 = plVar11;
      (*(code *)*puVar13)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar14 = local_138;
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        plVar14 = local_138;
      }
    }
  }
  local_138 = plVar14;
  plVar10 = local_128;
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
  }
  local_130 = lVar16;
  plVar14 = plVar17;
  if (local_128 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_128 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      puVar13 = (undefined8 *)*local_128;
      local_128 = plVar17;
      (*(code *)*puVar13)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar14 = local_128;
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        plVar14 = local_128;
      }
    }
  }
  local_128 = plVar14;
  plVar14 = local_118;
  local_120 = *(longlong *)(local_130 + 0x60);
  plVar10 = *(longlong **)(local_130 + 0x68);
  if (plVar10 == (longlong *)0x0) {
    if (local_118 != (longlong *)0x0) {
      local_118 = (longlong *)0x0;
LAB_146a190a0:
      LOCK();
      plVar10 = plVar14 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar8 = *piVar1;
        UNLOCK();
joined_r0x000146a18f5c:
        if (iVar8 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    if (plVar10 == local_118) {
      LOCK();
      plVar14 = plVar10 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar8 = *piVar1;
        UNLOCK();
        plVar14 = plVar10;
        goto joined_r0x000146a18f5c;
      }
    }
    else {
      bVar19 = local_118 != (longlong *)0x0;
      local_118 = plVar10;
      if (bVar19) goto LAB_146a190a0;
    }
  }
  local_90 = *param_3;
  local_98 = param_2;
  if (*(char *)(lVar16 + 200) == '\x01') {
    FUN_14133824c(local_110,lVar16 + 0xb8);
  }
  else {
    if (local_120 == 0) {
      puVar13 = (undefined8 *)FUN_140e82300();
    }
    else {
      puVar13 = (undefined8 *)(local_120 + 0x10);
    }
    local_78 = (code *)*puVar13;
    if (local_78 != (code *)0x0) {
      (**(code **)(*(longlong *)local_78 + 8))();
    }
    uStack_70 = (longlong *)CONCAT44(uStack_70._4_4_,*(undefined4 *)(puVar13 + 1));
    local_68 = 1;
    local_60 = 0;
    uStack_58 = 0;
    FUN_140008f88(local_110,&local_78);
    local_100 = local_68;
    FUN_144a450dc(&local_f8,&local_60);
    FUN_1449db362(&local_60);
    if (local_78 != (code *)0x0) {
      (**(code **)(*(longlong *)local_78 + 0x10))();
    }
  }
  plVar10 = (longlong *)FUN_14479d2ce(local_220 + 0x28);
  if ((plVar10 == (longlong *)0x0) ||
     (cVar7 = (**(code **)(*plVar10 + 0x2a0))(plVar10), cVar7 == '\0')) {
    bVar19 = false;
  }
  else {
    bVar19 = true;
    if ((local_f8 != (longlong *)0x0 && local_f0 != 0) &&
       (cVar7 = (**(code **)(*local_f8 + 0x30))(), cVar7 != '\0')) {
      plVar10 = (longlong *)FUN_14142e2d2(local_110);
      local_78 = (code *)*plVar10;
      if (local_78 != (code *)0x0) {
        (**(code **)(*(longlong *)local_78 + 8))();
      }
      uStack_70 = (longlong *)CONCAT44(uStack_70._4_4_,(int)plVar10[1]);
      local_68 = 1;
      local_60 = 0;
      uStack_58 = 0;
      FUN_140008f88(local_110,&local_78);
      local_100 = local_68;
      FUN_144a450dc(&local_f8,&local_60);
      FUN_1449db362(&local_60);
      if (local_78 != (code *)0x0) {
        (**(code **)(*(longlong *)local_78 + 0x10))();
      }
      bVar19 = true;
    }
  }
  lVar18 = *(longlong *)(lVar16 + 0x170);
  local_218 = *(longlong **)(lVar16 + 0x178);
  local_230 = lVar16;
  if (local_218 == (longlong *)0x0) {
    if (lVar18 != 0) {
      local_158 = (longlong *)0x0;
      goto LAB_146a19181;
    }
LAB_146a18f92:
    plVar10 = (longlong *)param_1[0x4f];
    bVar21 = true;
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)0x0;
      lVar18 = 0;
    }
    else {
      iVar8 = (int)plVar10[1];
      lVar18 = 0;
      do {
        if (iVar8 == 0) {
          plVar10 = (longlong *)0x0;
          goto LAB_146a18fb3;
        }
        LOCK();
        iVar6 = (int)plVar10[1];
        bVar20 = iVar8 == iVar6;
        if (bVar20) {
          *(int *)(plVar10 + 1) = iVar8 + 1;
          iVar6 = iVar8;
        }
        iVar8 = iVar6;
        UNLOCK();
      } while (!bVar20);
      lVar18 = param_1[0x4e];
      bVar21 = false;
    }
LAB_146a18fb3:
    uVar4 = *(undefined1 *)(param_1[0x50] + 0x9c);
    local_228 = plVar11;
    plVar11 = (longlong *)FUN_14142e2d2(local_110);
    local_1b8 = (longlong *)*plVar11;
    if (local_1b8 != (longlong *)0x0) {
      (**(code **)(*local_1b8 + 8))();
    }
    local_1b0 = (undefined4)plVar11[1];
    (**(code **)(*param_1 + 8))(param_1,&local_78);
    local_1c8 = local_78;
    local_1c0 = uStack_70;
    if (uStack_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_70 + 1) = (int)uStack_70[1] + 1;
      UNLOCK();
    }
    FUN_146a0ca44(lVar18,&local_1c8,&local_1b8,
                  CONCAT71((int7)((ulonglong)lVar16 >> 8),uVar4) & 0xffffffff);
    plVar11 = uStack_70;
    if (uStack_70 != (longlong *)0x0) {
      LOCK();
      plVar14 = uStack_70 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*uStack_70)(uStack_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    lVar16 = local_230;
    plVar11 = local_228;
    if (!bVar21) goto LAB_146a191b6;
  }
  else {
    LOCK();
    *(int *)(local_218 + 1) = (int)local_218[1] + 1;
    UNLOCK();
    if (lVar18 == 0) goto LAB_146a18f92;
    LOCK();
    *(int *)(local_218 + 1) = (int)local_218[1] + 1;
    UNLOCK();
    local_158 = local_218;
LAB_146a19181:
    local_160 = lVar18;
    FUN_146a13788(&local_150,&local_160);
    pcVar5 = local_150;
    if (local_150 != DAT_14c98dec8) {
      if (local_148 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_148 + 1) = (int)local_148[1] + 1;
        UNLOCK();
      }
      local_228 = local_148;
      FUN_144a5dc74(&local_78);
      local_60 = 0;
      uStack_58 = 0;
      plVar10 = (longlong *)param_1[0x4f];
      if (plVar10 == (longlong *)0x0) {
LAB_146a194fd:
        local_68 = 1;
        local_88 = FUN_146a0c98a;
        uStack_80 = 0;
        FUN_146a45f9a(&local_60,0);
      }
      else {
        iVar8 = (int)plVar10[1];
        do {
          if (iVar8 == 0) goto LAB_146a194fd;
          LOCK();
          iVar6 = (int)plVar10[1];
          bVar21 = iVar8 == iVar6;
          if (bVar21) {
            *(int *)(plVar10 + 1) = iVar8 + 1;
            iVar6 = iVar8;
          }
          iVar8 = iVar6;
          UNLOCK();
        } while (!bVar21);
        local_68 = 1;
        local_88 = FUN_146a0c98a;
        uStack_80 = 0;
        FUN_146a45f9a(&local_60,param_1[0x4e]);
        LOCK();
        plVar14 = plVar10 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
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
      local_188 = local_78;
      if (local_78 != (code *)0x0) {
        (**(code **)(*(longlong *)local_78 + 8))();
      }
      local_180 = (undefined4)uStack_70;
      local_178 = local_68;
      local_170 = 0;
      local_168 = 0;
      FUN_1413a4324(&local_170,&local_60);
      uVar12 = FUN_140a5ccc6(pcVar5,&local_188);
      plVar14 = (longlong *)param_1[0x4f];
      if (plVar14 == (longlong *)0x0) {
        local_234 = (undefined4)CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
        plVar14 = (longlong *)0x0;
        lVar16 = 0;
      }
      else {
        uVar15 = (ulonglong)*(uint *)(plVar14 + 1);
        lVar16 = 0;
        do {
          uVar9 = (uint)uVar15;
          if (uVar9 == 0) {
            local_234 = (undefined4)CONCAT71((int7)(uVar15 >> 8),1);
            plVar14 = (longlong *)0x0;
            goto LAB_146a195a1;
          }
          LOCK();
          uVar3 = *(uint *)(plVar14 + 1);
          if (uVar9 == uVar3) {
            *(uint *)(plVar14 + 1) = uVar9 + 1;
          }
          else {
            uVar15 = (ulonglong)uVar3;
          }
          UNLOCK();
        } while (uVar9 != uVar3);
        lVar16 = param_1[0x4e];
        local_234 = 0;
      }
LAB_146a195a1:
      uVar4 = *(undefined1 *)(param_1[0x50] + 0x9c);
      if (((byte)pcVar5[0x5dc] & 1) != 0) {
        FUN_145ab0088(pcVar5 + 0x1e0,pcVar5,0);
      }
      local_198 = *(longlong **)(pcVar5 + 0x1e0);
      if (local_198 != (longlong *)0x0) {
        (**(code **)(*local_198 + 8))();
      }
      local_190 = *(undefined4 *)(pcVar5 + 0x1e8);
      (**(code **)(*param_1 + 8))(param_1,&local_88);
      local_1a0 = CONCAT44(uStack_7c,uStack_80);
      local_1a8 = local_88;
      if (local_1a0 != 0) {
        LOCK();
        *(int *)(local_1a0 + 8) = *(int *)(local_1a0 + 8) + 1;
        UNLOCK();
      }
      FUN_146a0ca44(lVar16,&local_1a8,&local_198,
                    CONCAT71((int7)((ulonglong)plVar10 >> 8),uVar4) & 0xffffffff);
      plVar10 = (longlong *)CONCAT44(uStack_7c,uStack_80);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
      if ((char)local_234 == '\0') {
        LOCK();
        plVar10 = plVar14 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
      FUN_1449db362(&local_60);
      plVar10 = local_228;
      if (local_78 != (code *)0x0) {
        (**(code **)(*(longlong *)local_78 + 0x10))();
      }
      lVar16 = local_230;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar10 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
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
    }
    plVar10 = local_148;
    if (local_148 != (longlong *)0x0) {
LAB_146a191b6:
      LOCK();
      plVar14 = plVar10 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
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
  }
  if (*(char *)(lVar16 + 0xf0) == '\x01') {
    FUN_14133824c(local_e8,lVar16 + 0xe0);
  }
  else {
    if (local_120 == 0) {
      puVar13 = (undefined8 *)FUN_140e82300();
    }
    else {
      puVar13 = (undefined8 *)(local_120 + 0x20);
    }
    local_78 = (code *)*puVar13;
    if (local_78 != (code *)0x0) {
      (**(code **)(*(longlong *)local_78 + 8))();
    }
    uStack_70 = (longlong *)CONCAT44(uStack_70._4_4_,*(undefined4 *)(puVar13 + 1));
    local_68 = 1;
    local_60 = 0;
    uStack_58 = 0;
    FUN_140008f88(local_e8,&local_78);
    local_d8 = local_68;
    FUN_144a450dc(&local_d0,&local_60);
    FUN_1449db362(&local_60);
    if (local_78 != (code *)0x0) {
      (**(code **)(*(longlong *)local_78 + 0x10))();
    }
  }
  lVar18 = local_120;
  if (*(char *)(lVar16 + 0x118) == '\x01') {
    uVar12 = FUN_14142e2d2(lVar16 + 0x108);
    FUN_1467cf38e(uVar12,&local_88);
    FUN_14023423e(&local_78,&local_88);
    local_68 = 1;
    local_60 = 0;
    uStack_58 = 0;
    FUN_140008f88(local_c0,&local_78);
    local_b0 = local_68;
    FUN_144a450dc(local_a8,&local_60);
    FUN_1449db362(&local_60);
    local_150 = local_88;
    if (local_78 != (code *)0x0) {
      (**(code **)(*(longlong *)local_78 + 0x10))();
      local_150 = local_88;
    }
  }
  else {
    if (local_120 == 0) {
      puVar13 = (undefined8 *)FUN_140e82300();
      local_88 = (code *)*puVar13;
      if (local_88 != (code *)0x0) {
        (**(code **)(*(longlong *)local_88 + 8))();
      }
      uStack_80 = *(undefined4 *)(puVar13 + 1);
    }
    else {
      FUN_1469bac48(local_120,&local_150);
      FUN_1467cf38e(&local_150,&local_88);
    }
    local_78 = local_88;
    if (local_88 != (code *)0x0) {
      (**(code **)(*(longlong *)local_88 + 8))();
    }
    uStack_70 = (longlong *)CONCAT44(uStack_70._4_4_,uStack_80);
    local_68 = 1;
    local_60 = 0;
    uStack_58 = 0;
    FUN_140008f88(local_c0,&local_78);
    local_b0 = local_68;
    FUN_144a450dc(local_a8,&local_60);
    FUN_1449db362(&local_60);
    if (local_78 != (code *)0x0) {
      (**(code **)(*(longlong *)local_78 + 0x10))();
    }
    if (local_88 != (code *)0x0) {
      (**(code **)(*(longlong *)local_88 + 0x10))();
    }
    lVar16 = local_230;
    if (lVar18 == 0) goto LAB_146a1929f;
  }
  if (local_150 != (code *)0x0) {
    (**(code **)(*(longlong *)local_150 + 0x10))();
  }
LAB_146a1929f:
  if (((bVar19) && (local_d0 != (longlong *)0x0 && local_c8 != 0)) &&
     (cVar7 = (**(code **)(*local_d0 + 0x30))(), cVar7 != '\0')) {
    puVar13 = (undefined8 *)FUN_14142e2d2(local_e8);
    local_78 = (code *)*puVar13;
    if (local_78 != (code *)0x0) {
      (**(code **)(*(longlong *)local_78 + 8))();
    }
    uStack_70 = (longlong *)CONCAT44(uStack_70._4_4_,*(undefined4 *)(puVar13 + 1));
    local_68 = 1;
    local_60 = 0;
    uStack_58 = 0;
    FUN_140008f88(local_e8,&local_78);
    local_d8 = local_68;
    FUN_144a450dc(&local_d0,&local_60);
    FUN_1449db362(&local_60);
    lVar16 = local_230;
    if (local_78 != (code *)0x0) {
      (**(code **)(*(longlong *)local_78 + 0x10))();
      lVar16 = local_230;
    }
  }
  if (*(char *)(local_220 + 0x68) == '\0') {
    FUN_146a124e8(param_1,&local_78,&local_140);
    FUN_140a58896(param_1 + 0x3d,&local_78);
    plVar10 = uStack_70;
    if (uStack_70 != (longlong *)0x0) {
      LOCK();
      plVar14 = uStack_70 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*uStack_70)(uStack_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  else if (*(char *)(local_220 + 0x68) == '\x05') {
    if (*(char *)(lVar16 + 0x180) == '\x01') {
      FUN_146a165d8(param_1,&local_88,&local_140);
    }
    else {
      FUN_146a13ae2(param_1,&local_88,&local_140);
    }
    FUN_14149270a(param_1 + 0x40);
    local_78 = (code *)param_1[0x42];
    plVar10 = (longlong *)param_1[0x43];
    param_1[0x42] = (longlong)local_88;
    param_1[0x43] = CONCAT44(uStack_7c,uStack_80);
    uStack_70._0_4_ = SUB84(plVar10,0);
    uStack_70._4_4_ = (undefined4)((ulonglong)plVar10 >> 0x20);
    uStack_80 = (undefined4)uStack_70;
    uStack_7c = uStack_70._4_4_;
    local_88 = local_78;
    uStack_70 = plVar10;
    FUN_140a5503c(param_1 + 0x40);
    plVar10 = (longlong *)CONCAT44(uStack_7c,uStack_80);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar14 = plVar10 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
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
  }
  if (bVar19) {
    local_1e0[0] = 0x100;
    local_78 = FUN_146a19c64;
    uStack_70 = (longlong *)((ulonglong)uStack_70 & 0xffffffff00000000);
    FUN_146a44cf8(local_1d8,param_1);
    FUN_140a52028((longlong)param_1 + 0x42,param_1 + 1,local_1e0);
    FUN_1449db362(local_1d8);
  }
  else {
    lVar16 = *(longlong *)(lVar16 + 0x8c);
    if (lVar16 != 0) {
      lVar18 = param_1[0x42];
      plVar10 = (longlong *)param_1[0x43];
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      plVar14 = (longlong *)FUN_14001cc68(0x20,0x10);
      plVar14[1] = (longlong)&DAT_100000001;
      *plVar14 = (longlong)&PTR_FUN_149f0a1c0;
      local_78 = (code *)(plVar14 + 2);
      plVar14[2] = (longlong)&PTR_FUN_149f09568;
      plVar14[3] = lVar16;
      uStack_70 = plVar14;
      FUN_146a06f36(lVar18);
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar14 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar10 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
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
    }
    local_1f8[0] = 0x100;
    local_78 = FUN_146a19e98;
    uStack_70 = (longlong *)((ulonglong)uStack_70 & 0xffffffff00000000);
    FUN_146a44cf8(local_1f0,param_1,&local_78);
    FUN_140a52028((longlong)param_1 + 0x42,param_1 + 1,local_1f8);
    FUN_1449db362(local_1f0);
    local_210[0] = 0x119;
    local_78 = FUN_146a138de;
    uStack_70 = (longlong *)((ulonglong)uStack_70 & 0xffffffff00000000);
    FUN_146a4611a(local_208,param_1,&local_78);
    FUN_14020e622(param_1 + 1,local_210);
  }
  plVar10 = local_218;
  if (local_218 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_218 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_218)(local_218);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar17 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar11 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
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
  FUN_146a19fe0(&local_140);
  if ((local_48 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a19bf0 FUN_146a19bf0 body=116 status=ok
// SIG undefined FUN_146a19bf0(void)

undefined8 * FUN_146a19bf0(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_144a5dc74(param_1 + 6);
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_144a5dc74(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_144a5dc74(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 146a19c64 FUN_146a19c64 body=563 status=ok
// SIG undefined FUN_146a19c64(void)

ulonglong FUN_146a19c64(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int *piVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_2a8 [32];
  longlong local_288;
  longlong local_280;
  undefined1 local_278 [40];
  int local_250;
  undefined1 local_238 [512];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x280) + 0x80);
  if ((((lVar1 == 0) || (*(longlong *)(param_1 + 0x270) == 0)) ||
      (plVar9 = *(longlong **)(param_1 + 0x278), plVar9 == (longlong *)0x0)) || ((int)plVar9[1] < 1)
     ) {
    uVar10 = 0;
    goto LAB_146a19cde;
  }
  lVar8 = 0;
  iVar5 = (int)plVar9[1];
  do {
    iVar4 = iVar5;
    if (iVar4 == 0) {
      plVar9 = (longlong *)0x0;
      goto LAB_146a19d0d;
    }
    LOCK();
    iVar5 = (int)plVar9[1];
    bVar11 = iVar4 == iVar5;
    if (bVar11) {
      *(int *)(plVar9 + 1) = iVar4 + 1;
      iVar5 = iVar4;
    }
    UNLOCK();
  } while (!bVar11);
  lVar8 = *(longlong *)(param_1 + 0x270);
LAB_146a19d0d:
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
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar7 = (int *)((longlong)plVar3 + 0xc);
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (*piVar7 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (iVar4 != 0) {
    LOCK();
    plVar6 = plVar9 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar7 = (int *)((longlong)plVar9 + 0xc);
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (*piVar7 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  plVar6 = (longlong *)FUN_14479d2ce(lVar2 + 0x28);
  uVar10 = CONCAT71((int7)((ulonglong)plVar9 >> 8),1);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x2d0))(plVar6,local_278);
    if (local_250 < 1) {
LAB_146a19e7f:
      FUN_146a1aeee(local_278);
    }
    else {
      FUN_146a1acb8(local_278,local_238);
      lVar8 = lVar1;
      if (*(char *)(*(longlong *)(param_1 + 0x280) + 0x88) == '\x03') {
LAB_146a19df8:
        piVar7 = (int *)FUN_146a1d6e0(local_238,lVar8);
        if ((piVar7 == (int *)0x0) || (*piVar7 != 2)) {
LAB_146a19e75:
          FUN_1469b1232(local_238);
          goto LAB_146a19e7f;
        }
      }
      else {
        piVar7 = (int *)FUN_146a1d5c0(local_238,lVar1);
        if ((piVar7 == (int *)0x0) || (*piVar7 != 2)) {
          FUN_146a1ad96(local_238,&local_280,lVar1);
          lVar8 = local_280;
          if ((local_280 != 0) ||
             ((**(code **)(*plVar6 + 0x2a8))(plVar6,&local_288,lVar1), lVar8 = local_288,
             local_288 != 0)) goto LAB_146a19df8;
          goto LAB_146a19e75;
        }
      }
      FUN_1469b1232(local_238);
      FUN_146a1aeee(local_278);
      uVar10 = 0;
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar7 = (int *)((longlong)plVar3 + 0xc);
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (*piVar7 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_146a19cde:
  if ((local_38 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 146a19e98 FUN_146a19e98 body=327 status=ok
// SIG undefined FUN_146a19e98(void)

ulonglong FUN_146a19e98(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 unaff_RBX;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar10 = *(longlong *)(param_1 + 0x280);
  lVar2 = *(longlong *)(lVar10 + 0x70);
  plVar3 = *(longlong **)(lVar10 + 0x78);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    lVar10 = *(longlong *)(param_1 + 0x280);
  }
  lVar4 = *(longlong *)(lVar10 + 0x60);
  plVar5 = *(longlong **)(lVar10 + 0x68);
  if (plVar5 == (longlong *)0x0) {
    if ((lVar2 == 0) || (lVar4 == 0)) goto LAB_146a19f9e;
    local_30 = (longlong *)0x0;
LAB_146a19f07:
    local_38 = lVar4;
    uVar7 = FUN_1469bb290(lVar2,&local_38);
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    if ((lVar2 != 0) && (lVar4 != 0)) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      local_30 = plVar5;
      goto LAB_146a19f07;
    }
    lVar10 = *(longlong *)(param_1 + 0x280);
LAB_146a19f9e:
    uVar9 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if ((*(int *)(lVar10 + 0x30) == 0) || (*(longlong **)(lVar10 + 0x28) == (longlong *)0x0))
    goto LAB_146a19f13;
    cVar6 = (**(code **)(**(longlong **)(lVar10 + 0x28) + 0x30))();
    if (cVar6 == '\0') goto LAB_146a19f13;
    if (*(int *)(lVar10 + 0x30) == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = *(longlong **)(lVar10 + 0x28);
    }
    uVar7 = (**(code **)(*plVar8 + 0x58))();
  }
  uVar9 = (ulonglong)uVar7;
LAB_146a19f13:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar5 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a19fe0 FUN_146a19fe0 body=216 status=ok
// SIG undefined FUN_146a19fe0(void)

void FUN_146a19fe0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1449db362(param_1 + 0x98);
  if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x10))();
  }
  FUN_1449db362(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x10))();
  }
  FUN_1449db362(param_1 + 0x48);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
  }
  plVar3 = *(longlong **)(param_1 + 0x28);
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
                    /* WARNING: Could not recover jumptable at 0x000146a1a0ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146a1a0b8 FUN_146a1a0b8 body=311 status=ok
// SIG undefined FUN_146a1a0b8(void)

void FUN_146a1a0b8(longlong param_1,undefined1 param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  code *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_41 = param_2;
  if (((*(longlong *)(param_1 + 0x2a8) == 0) || (*(longlong *)(param_1 + 0x2b0) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x2b0) + 8) < 1)) {
    if (param_3 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = 0x3f000000;
    }
    local_58 = FUN_146a1a352;
    local_50 = 0;
    FUN_146a1a1f0(local_68,param_1,&local_58,&local_41);
    FUN_14697ef1e(param_1 + 8,&local_58,uVar4,local_68);
    *(code **)(param_1 + 0x2a8) = local_58;
    plVar3 = (longlong *)CONCAT44(uStack_4c,local_50);
    plVar2 = *(longlong **)(param_1 + 0x2b0);
    if (plVar2 != plVar3) {
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar2 = *(longlong **)(param_1 + 0x2b0);
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
      *(longlong **)(param_1 + 0x2b0) = plVar3;
      plVar3 = (longlong *)CONCAT44(uStack_4c,local_50);
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
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a1a1f0 FUN_146a1a1f0 body=353 status=ok
// SIG undefined FUN_146a1a1f0(void)

longlong * FUN_146a1a1f0(longlong *param_1,longlong param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar10 = *(longlong **)(param_2 + 0x18);
  bVar9 = true;
  if (plVar10 == (longlong *)0x0) {
LAB_146a1a278:
    lVar12 = 0;
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar10[1];
    do {
      if (iVar8 == 0) goto LAB_146a1a278;
      LOCK();
      iVar6 = (int)plVar10[1];
      bVar13 = iVar8 == iVar6;
      if (bVar13) {
        *(int *)(plVar10 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar13);
    lVar12 = *(longlong *)(param_2 + 0x10) + -8;
    if (*(longlong *)(param_2 + 0x10) == 0) {
      lVar12 = 0;
    }
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    bVar9 = false;
  }
  *puVar5 = &PTR_LAB_149f0e200;
  *(undefined1 *)(puVar5 + 1) = *param_4;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  puVar5[2] = lVar11;
  *puVar5 = &PTR_FUN_149f0d2e0;
  puVar5[3] = lVar12;
  puVar5[4] = plVar10;
  if (bVar9) {
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 146a1a352 FUN_146a1a352 body=583 status=ok
// SIG undefined FUN_146a1a352(void)

undefined8 FUN_146a1a352(longlong param_1,double param_2,float param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 unaff_R12;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_b8 [36];
  uint local_94;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar3 = *(longlong **)(param_1 + 0x288);
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
  plVar7 = *(longlong **)(param_1 + 0x278);
  uVar8 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1);
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar7[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_146a1a3ef;
      }
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar11 = iVar5 == iVar4;
      if (bVar11) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar11);
    lVar6 = *(longlong *)(param_1 + 0x270);
    uVar8 = 0;
  }
LAB_146a1a3ef:
  if (param_4 == '\0') {
    FUN_146a86fca(lVar6);
  }
  else {
    local_94 = (uint)uVar8;
    plVar10 = *(longlong **)(param_1 + 0x2d0);
    if (plVar10 == (longlong *)0x0) {
      bVar11 = true;
      plVar10 = (longlong *)0x0;
      plVar9 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)plVar10[1];
      plVar9 = (longlong *)0x0;
      do {
        if (iVar5 == 0) {
          bVar11 = true;
          plVar10 = (longlong *)0x0;
          goto LAB_146a1a4c2;
        }
        LOCK();
        iVar4 = (int)plVar10[1];
        bVar11 = iVar5 == iVar4;
        if (bVar11) {
          *(int *)(plVar10 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar11);
      plVar9 = *(longlong **)(param_1 + 0x2c8);
      bVar11 = false;
    }
LAB_146a1a4c2:
    FUN_146a86ee6(lVar6,&local_80);
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_78 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)local_78 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_78 + 0x10))(local_78);
        }
      }
    }
    if (local_80 != plVar9) {
      FUN_146a86fca(lVar6);
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x248))(plVar9,1,1,0);
      }
      if (!bVar11) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      local_90 = plVar9;
      local_88 = plVar10;
      FUN_146a870ea(lVar6,&local_90);
      *(double *)(lVar6 + 0x490) = param_2 - (double)param_3;
    }
    uVar8 = (ulonglong)local_94;
    if (!bVar11) {
      LOCK();
      plVar9 = plVar10 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
  }
  if ((char)uVar8 == '\0') {
    LOCK();
    plVar10 = plVar7 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 146a1a59a FUN_146a1a59a body=186 status=ok
// SIG undefined FUN_146a1a59a(void)

void FUN_146a1a59a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar4 = *(longlong **)(param_1 + 0x2b0);
  if (plVar4 != (longlong *)0x0) {
    iVar7 = (int)plVar4[1];
    do {
      if (iVar7 == 0) goto LAB_146a1a637;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar8 = iVar7 == iVar6;
      if (bVar8) {
        *(int *)(plVar4 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar8);
    lVar5 = *(longlong *)(param_1 + 0x2a8);
    if (lVar5 != 0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      local_28 = lVar5;
      local_20 = plVar4;
      FUN_14697f106(param_1 + 8,&local_28);
      plVar3 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_20)(local_20);
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
LAB_146a1a637:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a1a656 FUN_146a1a656 body=1632 status=ok
// SIG undefined FUN_146a1a656(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146a1a656(longlong param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 uVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong *plVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_218 [39];
  char local_1f1;
  longlong *local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  undefined1 local_1d8 [16];
  longlong local_1c8;
  longlong *plStack_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  longlong *local_1a0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar3 = *(longlong *)(param_1 + 0x280);
  plVar4 = *(longlong **)(param_1 + 0x288);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar4)();
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
  }
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x280) + 0x70);
  local_1f0 = *(longlong **)(*(longlong *)(param_1 + 0x280) + 0x78);
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1f0 + 1) = (int)local_1f0[1] + 1;
    UNLOCK();
  }
  plVar14 = *(longlong **)(param_1 + 0x278);
  bVar16 = true;
  if (plVar14 == (longlong *)0x0) {
    plVar14 = (longlong *)0x0;
    lVar12 = 0;
  }
  else {
    iVar11 = (int)plVar14[1];
    lVar12 = 0;
    do {
      if (iVar11 == 0) {
        plVar14 = (longlong *)0x0;
        goto LAB_146a1a6f4;
      }
      LOCK();
      iVar9 = (int)plVar14[1];
      bVar17 = iVar11 == iVar9;
      if (bVar17) {
        *(int *)(plVar14 + 1) = iVar11 + 1;
        iVar9 = iVar11;
      }
      iVar11 = iVar9;
      UNLOCK();
    } while (!bVar17);
    lVar12 = *(longlong *)(param_1 + 0x270);
    bVar16 = false;
  }
LAB_146a1a6f4:
  lVar6 = *(longlong *)(lVar12 + 0x278);
  plVar7 = *(longlong **)(lVar12 + 0x280);
  local_1f1 = param_2;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar15 = plVar7 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
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
  if (!bVar16) {
    LOCK();
    plVar15 = plVar14 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if (*(char *)(lVar6 + 0x80) == '\x01') {
    cVar10 = '\x01';
    if (*(char *)(lVar3 + 0x180) == '\x01') {
      if ((*(int *)(lVar3 + 0x20) == 0) || (*(longlong **)(lVar3 + 0x18) == (longlong *)0x0))
      goto LAB_146a1a784;
      cVar10 = (**(code **)(**(longlong **)(lVar3 + 0x18) + 0x30))();
    }
    uVar13 = DAT_14c98e618;
    if (cVar10 == '\x01' && local_1f1 == '\0') {
      if (*(char *)(lVar3 + 0x184) == '\x01') {
        local_1a0 = *(longlong **)(param_1 + 0x18);
        if (local_1a0 == (longlong *)0x0) {
          local_1a0 = (longlong *)0x0;
          local_1a8 = 0;
        }
        else {
          iVar11 = (int)local_1a0[1];
          local_1a8 = 0;
          do {
            if (iVar11 == 0) {
              local_1a0 = (longlong *)0x0;
              goto LAB_146a1aa5d;
            }
            LOCK();
            iVar9 = (int)local_1a0[1];
            bVar16 = iVar11 == iVar9;
            if (bVar16) {
              *(int *)(local_1a0 + 1) = iVar11 + 1;
              iVar9 = iVar11;
            }
            iVar11 = iVar9;
            UNLOCK();
          } while (!bVar16);
          local_1a8 = *(undefined8 *)(param_1 + 0x10);
        }
LAB_146a1aa5d:
        FUN_1469aa268(uVar13,&local_1a8);
        plVar14 = local_1a0;
        if (local_1a0 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_1a0 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)*local_1a0)(local_1a0);
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
        }
      }
      else {
        FUN_1469a57b0(DAT_14c98e618);
      }
    }
  }
  else {
LAB_146a1a784:
    cVar10 = '\0';
  }
  if (plVar5 != (longlong *)0x0) {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x280) + 0x60);
    plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x280) + 0x68);
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      LOCK();
      plVar15 = plVar14 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
    if (lVar12 != 0) {
      local_1b8 = *(undefined8 *)(*(longlong *)(param_1 + 0x280) + 0x60);
      local_1b0 = *(longlong *)(*(longlong *)(param_1 + 0x280) + 0x68);
      if (local_1b0 != 0) {
        LOCK();
        *(int *)(local_1b0 + 8) = *(int *)(local_1b0 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar5 + 0x18))(plVar5);
      goto LAB_146a1a798;
    }
  }
  FUN_1469bb22e(lVar3 + 0x18);
LAB_146a1a798:
  if (((cVar10 == '\0') &&
      ((((*(int *)(lVar3 + 0x158) != 0 && (*(longlong **)(lVar3 + 0x150) != (longlong *)0x0)) &&
        (cVar10 = (**(code **)(**(longlong **)(lVar3 + 0x150) + 0x30))(), cVar10 != '\0')) ||
       ((((*(int *)(lVar3 + 0x168) != 0 && (*(longlong **)(lVar3 + 0x160) != (longlong *)0x0)) &&
         (cVar10 = (**(code **)(**(longlong **)(lVar3 + 0x160) + 0x30))(), cVar10 != '\0')) ||
        (*(longlong *)(lVar3 + 0x170) != 0)))))) &&
     (plVar5 = *(longlong **)(param_1 + 0x2d0), plVar5 != (longlong *)0x0)) {
    iVar11 = (int)plVar5[1];
    do {
      if (iVar11 == 0) goto LAB_146a1a7a1;
      LOCK();
      iVar9 = (int)plVar5[1];
      bVar16 = iVar11 == iVar9;
      if (bVar16) {
        *(int *)(plVar5 + 1) = iVar11 + 1;
        iVar9 = iVar11;
      }
      iVar11 = iVar9;
      UNLOCK();
    } while (!bVar16);
    plVar14 = *(longlong **)(param_1 + 0x2c8);
    if ((plVar14 != (longlong *)0x0) && (cVar10 = FUN_146a63024(plVar14), cVar10 != '\0')) {
      FUN_144a8759e(&local_1a8);
      uVar13 = DAT_14c98e618;
      uVar8 = DAT_14c96b238;
      plVar15 = (longlong *)plVar14[2];
      if (plVar15 == (longlong *)0x0) {
LAB_146a1a996:
        local_1c8 = 0;
        plStack_1c0 = (longlong *)0x0;
        FUN_1407c4cd2(uVar13,&local_1c8,&local_1a8,uVar8);
      }
      else {
        iVar11 = (int)plVar15[1];
        do {
          if (iVar11 == 0) goto LAB_146a1a996;
          LOCK();
          iVar9 = (int)plVar15[1];
          bVar16 = iVar11 == iVar9;
          if (bVar16) {
            *(int *)(plVar15 + 1) = iVar11 + 1;
            iVar9 = iVar11;
          }
          iVar11 = iVar9;
          UNLOCK();
        } while (!bVar16);
        local_1c8 = plVar14[1];
        LOCK();
        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
        UNLOCK();
        plStack_1c0 = plVar15;
        FUN_1407c4cd2(uVar13,&local_1c8,&local_1a8,uVar8);
        LOCK();
        plVar2 = plVar15 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
      }
      cVar10 = FUN_144b010fc(&local_1a8);
      uVar13 = DAT_14c98e618;
      if (cVar10 != '\0') {
        FUN_142866478(&local_1a8,local_1d8);
        cVar10 = FUN_1469aa9a0(uVar13,local_1d8);
        if (cVar10 == '\0') {
          plVar15 = *(longlong **)(param_1 + 0x278);
          if (plVar15 == (longlong *)0x0) {
LAB_146a1ab50:
            FUN_146a86fca(0);
          }
          else {
            iVar11 = (int)plVar15[1];
            do {
              if (iVar11 == 0) goto LAB_146a1ab50;
              LOCK();
              iVar9 = (int)plVar15[1];
              bVar16 = iVar11 == iVar9;
              if (bVar16) {
                *(int *)(plVar15 + 1) = iVar11 + 1;
                iVar9 = iVar11;
              }
              iVar11 = iVar9;
              UNLOCK();
            } while (!bVar16);
            FUN_146a86fca(*(undefined8 *)(param_1 + 0x270));
            LOCK();
            plVar2 = plVar15 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar15)(plVar15);
              LOCK();
              piVar1 = (int *)((longlong)plVar15 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
            }
          }
          bVar16 = true;
          (**(code **)(*plVar14 + 0x248))(plVar14,1,1,0);
          plVar15 = *(longlong **)(param_1 + 0x278);
          if (plVar15 == (longlong *)0x0) {
LAB_146a1ab81:
            uVar13 = 0;
            plVar15 = (longlong *)0x0;
          }
          else {
            iVar11 = (int)plVar15[1];
            do {
              if (iVar11 == 0) goto LAB_146a1ab81;
              LOCK();
              iVar9 = (int)plVar15[1];
              bVar17 = iVar11 == iVar9;
              if (bVar17) {
                *(int *)(plVar15 + 1) = iVar11 + 1;
                iVar9 = iVar11;
              }
              iVar11 = iVar9;
              UNLOCK();
            } while (!bVar17);
            uVar13 = *(undefined8 *)(param_1 + 0x270);
            bVar16 = false;
          }
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          local_1e8 = plVar14;
          local_1e0 = plVar5;
          FUN_146a870ea(uVar13);
          if (!bVar16) {
            LOCK();
            plVar14 = plVar15 + 1;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)*plVar14 == 0) {
              (**(code **)*plVar15)(plVar15);
              LOCK();
              piVar1 = (int *)((longlong)plVar15 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
            }
          }
          plVar14 = *(longlong **)(param_1 + 0x278);
          if (plVar14 == (longlong *)0x0) {
LAB_146a1abd3:
            _DAT_00000490 = 0;
          }
          else {
            iVar11 = (int)plVar14[1];
            do {
              if (iVar11 == 0) goto LAB_146a1abd3;
              LOCK();
              iVar9 = (int)plVar14[1];
              bVar16 = iVar11 == iVar9;
              if (bVar16) {
                *(int *)(plVar14 + 1) = iVar11 + 1;
                iVar9 = iVar11;
              }
              iVar11 = iVar9;
              UNLOCK();
            } while (!bVar16);
            *(undefined8 *)(*(longlong *)(param_1 + 0x270) + 0x490) = 0;
            LOCK();
            plVar15 = plVar14 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
              (**(code **)*plVar14)(plVar14);
              LOCK();
              piVar1 = (int *)((longlong)plVar14 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
              }
            }
          }
        }
      }
      FUN_1447fa21a(&local_1a8);
    }
    LOCK();
    plVar14 = plVar5 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
LAB_146a1a7a1:
  FUN_146a1a59a(param_1);
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
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  plVar5 = local_1f0;
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_1f0 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*local_1f0)(local_1f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a1acb8 FUN_146a1acb8 body=222 status=ok
// SIG undefined FUN_146a1acb8(void)

longlong FUN_146a1acb8(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  FUN_1469b0850(param_2);
  *(undefined8 *)(param_2 + 0x1c0) = 0;
  *(undefined4 *)(param_2 + 0x1c8) = 0;
  *(undefined8 *)(param_2 + 0x1a0) = 0;
  *(undefined8 *)(param_2 + 0x1a8) = 0;
  *(undefined8 *)(param_2 + 0x1cc) = 0xffffffff00000080;
  *(undefined4 *)(param_2 + 0x1d4) = 0;
  *(undefined8 *)(param_2 + 0x1e0) = 0;
  *(undefined4 *)(param_2 + 0x1e8) = 0;
  *(undefined8 *)(param_2 + 0x1f0) = 0;
  *(undefined8 *)(param_2 + 0x1f8) = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar2 + lVar4);
      FUN_1428fd180(param_2,uVar3);
      FUN_1428fd5ef(param_2,uVar3);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar4 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar2 + lVar4);
      FUN_1428fd180(param_2,uVar3);
      FUN_1428fd5ef(param_2,uVar3);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return param_2;
}



// FUNCTION 146a1ad96 FUN_146a1ad96 body=343 status=ok
// SIG undefined FUN_146a1ad96(void)

undefined8 * FUN_146a1ad96(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x1a0);
  lVar2 = param_1 + 0x1b0;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0x1c8) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar5 = *(int *)(param_1 + 0x1c8);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 != iVar5) || (uStack_50 != lVar2)) {
    do {
      lVar3 = *local_80;
      lVar6 = (longlong)iStack_64 * 0x20;
      lVar4 = (longlong)*(int *)(lVar3 + 0x10 + lVar6);
      if (lVar4 != 0) {
        lVar7 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar3 + 8 + lVar6) + lVar7) == param_3) {
            *param_2 = *(undefined8 *)(lVar3 + lVar6);
            goto LAB_146a1ae3a;
          }
          lVar7 = lVar7 + 8;
        } while (lVar4 * 8 != lVar7);
      }
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while ((CONCAT44(uStack_6c,uStack_70) != lVar2 || iStack_64 != iVar5) || local_80 != plVar1);
  }
  *param_2 = 0;
LAB_146a1ae3a:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a1aeee FUN_146a1aeee body=75 status=ok
// SIG undefined FUN_146a1aeee(void)

void FUN_146a1aeee(longlong *param_1)

{
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



// FUNCTION 146a1af3a FUN_146a1af3a body=993 status=ok
// SIG undefined FUN_146a1af3a(void)

void FUN_146a1af3a(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  double dVar5;
  longlong lVar6;
  longlong *plVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  byte bVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  LARGE_INTEGER *pLVar17;
  uint7 uVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar22;
  bool bVar23;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined4 local_ac;
  longlong local_a8;
  longlong *local_a0;
  longlong *local_98;
  LARGE_INTEGER local_90;
  longlong *local_88;
  LARGE_INTEGER local_80;
  longlong *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar15 = FUN_1403d1d7a();
  lVar6 = *(longlong *)(param_1 + 0x278);
  plVar7 = *(longlong **)(param_1 + 0x280);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar20 = plVar7 + 1;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)*plVar20 == 0) {
      uVar15 = (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uVar15 = (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  plVar20 = *(longlong **)(param_1 + 0x270);
  if (plVar20 == (longlong *)0x0) {
    local_b0 = (undefined4)CONCAT71((int7)((ulonglong)uVar15 >> 8),1);
    plVar20 = (longlong *)0x0;
    lVar19 = 0;
  }
  else {
    uVar16 = (ulonglong)*(uint *)(plVar20 + 1);
    lVar19 = 0;
    do {
      uVar13 = (uint)uVar16;
      if (uVar13 == 0) {
        local_b0 = (undefined4)CONCAT71((int7)(uVar16 >> 8),1);
        plVar20 = (longlong *)0x0;
        goto LAB_146a1afea;
      }
      LOCK();
      uVar4 = *(uint *)(plVar20 + 1);
      if (uVar13 == uVar4) {
        *(uint *)(plVar20 + 1) = uVar13 + 1;
      }
      else {
        uVar16 = (ulonglong)uVar4;
      }
      UNLOCK();
    } while (uVar13 != uVar4);
    lVar19 = *(longlong *)(param_1 + 0x268);
    local_b0 = 0;
  }
LAB_146a1afea:
  pLVar17 = &local_80;
  FUN_146a86ee6(lVar19,pLVar17);
  if ((longlong *)local_80.QuadPart == (longlong *)0x0) {
    bVar11 = 0;
  }
  else {
    bVar11 = FUN_146a62c32();
  }
  QueryPerformanceCounter(&local_90);
  dVar8 = (double)local_90.QuadPart * DAT_14c83f420;
  dVar5 = *(double *)(lVar19 + 0x490);
  if (bVar11 == 0) {
    uVar15 = 0;
  }
  else {
    pLVar17 = &local_90;
    FUN_146a6cc74(local_80.QuadPart,pLVar17);
    uVar15 = CONCAT71((int7)((ulonglong)param_3 >> 8),
                      *(float *)(param_3 + 0x30) < 0.0 !=
                      (double)*(float *)(param_3 + 0x20) < (double)local_90);
  }
  lVar2 = param_1 + -8;
  dVar8 = dVar8 + 16777216.0;
  dVar5 = dVar5 + 0.5;
  if (((((*(int *)(lVar6 + 0x158) == 0) || (*(longlong **)(lVar6 + 0x150) == (longlong *)0x0)) ||
       (cVar12 = (**(code **)(**(longlong **)(lVar6 + 0x150) + 0x30))(), cVar12 == '\0')) &&
      (((*(int *)(lVar6 + 0x168) == 0 || (*(longlong **)(lVar6 + 0x160) == (longlong *)0x0)) ||
       (cVar12 = (**(code **)(**(longlong **)(lVar6 + 0x160) + 0x30))(), cVar12 == '\0')))) &&
     (*(longlong *)(lVar6 + 0x170) == 0)) {
    if (bVar11 != 0) {
      FUN_146a1a0b8(lVar2,0,CONCAT71((int7)((ulonglong)uVar15 >> 8),(byte)uVar15 & dVar5 < dVar8) &
                            0xffffffff);
    }
  }
  else {
    local_ac = (undefined4)uVar15;
    plVar22 = *(longlong **)(param_1 + 0x2c8);
    uVar18 = (uint7)((ulonglong)pLVar17 >> 8);
    bVar9 = true;
    if (plVar22 == (longlong *)0x0) {
      plVar22 = (longlong *)0x0;
      plVar21 = (longlong *)0x0;
    }
    else {
      iVar14 = (int)plVar22[1];
      plVar21 = (longlong *)0x0;
      do {
        if (iVar14 == 0) {
          plVar22 = (longlong *)0x0;
          goto LAB_146a1b130;
        }
        LOCK();
        iVar10 = (int)plVar22[1];
        bVar23 = iVar14 == iVar10;
        if (bVar23) {
          *(int *)(plVar22 + 1) = iVar14 + 1;
          iVar10 = iVar14;
        }
        iVar14 = iVar10;
        UNLOCK();
      } while (!bVar23);
      plVar21 = *(longlong **)(param_1 + 0x2c0);
      uVar18 = 0;
      bVar9 = false;
    }
LAB_146a1b130:
    local_a8 = lVar2;
    if (*(char *)(lVar6 + 0x180) == '\x01') {
      if (*(char *)(lVar6 + 0x182) == '\0') {
        FUN_146a86ee6(lVar19,&local_90);
        if (local_88 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_88 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_88)(local_88);
            LOCK();
            piVar1 = (int *)((longlong)local_88 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_88 + 0x10))(local_88);
            }
          }
        }
        if ((longlong *)local_90.QuadPart != plVar21) {
          FUN_146a1a0b8(local_a8,CONCAT71(uVar18 & 0xffffff,1),(byte)local_ac & dVar5 < dVar8);
        }
      }
    }
    else if ((bVar11 & (longlong *)local_80.QuadPart != plVar21) == 1) {
      FUN_146a86fca(lVar19);
      if (plVar21 != (longlong *)0x0) {
        (**(code **)(*plVar21 + 0x248))(plVar21,CONCAT71(uVar18 & 0xffffff,1),1,0);
        if (!bVar9) {
          LOCK();
          *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
          UNLOCK();
        }
        local_a0 = plVar21;
        local_98 = plVar22;
        FUN_146a870ea(lVar19,&local_a0);
        *(undefined8 *)(lVar19 + 0x490) = 0;
      }
    }
    if (!bVar9) {
      LOCK();
      plVar21 = plVar22 + 1;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)*plVar21 == 0) {
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
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar22 = local_78 + 1;
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)*plVar22 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)local_78 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_78 + 0x10))(local_78);
      }
    }
  }
  if ((char)local_b0 == '\0') {
    LOCK();
    plVar22 = plVar20 + 1;
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)*plVar22 == 0) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar20 = plVar7 + 1;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)*plVar20 == 0) {
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
  if ((local_70 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a1b31c FUN_146a1b31c body=27 status=ok
// SIG undefined FUN_146a1b31c(void)

void FUN_146a1b31c(longlong param_1)

{
  FUN_1403d1e68();
  FUN_146a1a59a(param_1 + -8);
  return;
}



// FUNCTION 146a1b338 FUN_146a1b338 body=404 status=ok
// SIG undefined FUN_146a1b338(void)

undefined1 *
FUN_146a1b338(undefined8 param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined7 uVar7;
  ulonglong uVar6;
  bool bVar8;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [184];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_14171f816();
  FUN_14493db24(local_e8);
  lVar3 = *(longlong *)(param_4 + 0x20);
  plVar4 = *(longlong **)(param_4 + 0x30);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  bVar8 = true;
  if (lVar3 != DAT_14c964e78) {
    lVar3 = *(longlong *)(param_4 + 0x20);
    plVar5 = *(longlong **)(param_4 + 0x30);
    if (plVar5 == (longlong *)0x0) {
      bVar8 = lVar3 == DAT_14c964ea8;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      bVar8 = lVar3 == DAT_14c964ea8;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (bVar8) {
    lVar3 = *(longlong *)(param_4 + 0x20);
    plVar5 = *(longlong **)(param_4 + 0x30);
    uVar7 = (undefined7)((ulonglong)plVar4 >> 8);
    if (plVar5 == (longlong *)0x0) {
      uVar6 = CONCAT71(uVar7,lVar3 == DAT_14c964e78) | 4;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      uVar6 = CONCAT71(uVar7,lVar3 == DAT_14c964e78) | 4;
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    FUN_146a0ae60(param_2,uVar6 & 0xffffffff);
  }
  else {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a1b4ce FUN_146a1b4ce body=235 status=ok
// SIG undefined FUN_146a1b4ce(void)

undefined8 * FUN_146a1b4ce(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_228 [47];
  undefined1 local_1f9;
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined1 local_1d0 [424];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_228;
  thunk_FUN_140a5071c(local_1d0);
  FUN_146a469c4(local_1f8,&local_1f9);
  FUN_146a1b5c0(local_1f8,&local_1e0,local_1d0);
  *param_2 = local_1e0;
  param_2[1] = local_1d8;
  if (local_1d8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1d8 + 1) = (int)local_1d8[1] + 1;
    UNLOCK();
    if (local_1d8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1d8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_1d8)(local_1d8);
        LOCK();
        piVar2 = (int *)((longlong)local_1d8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_1d8 + 0x10))(local_1d8);
        }
      }
    }
  }
  if (local_1f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1f0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1f0)(local_1f0);
      LOCK();
      piVar2 = (int *)((longlong)local_1f0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1f0 + 0x10))(local_1f0);
      }
    }
  }
  FUN_140a4ff8c(local_1d0);
  if ((local_28 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a1b5ba thunk_FUN_140a5071c body=5 status=ok
// SIG undefined thunk_FUN_140a5071c(void)

undefined8 * thunk_FUN_140a5071c(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *param_1 = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = DAT_14c96b238;
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0x101;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa1) = 1;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar2 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x1c) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar2;
  *(undefined4 *)(param_1 + 0x1d) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar4;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[0x2e] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  return param_1;
}



// FUNCTION 146a1b5c0 FUN_146a1b5c0 body=107 status=ok
// SIG undefined FUN_146a1b5c0(void)

longlong * FUN_146a1b5c0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1 + 8,param_3);
  lVar1 = *param_1;
  bVar4 = *(byte *)(lVar1 + 0x38);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*(longlong *)(lVar1 + 8) + 0x220))(lVar1 + 8);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(lVar1 + 0x38);
  }
  *(byte *)(lVar1 + 0x38) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x39) = *(byte *)(*param_1 + 0x39) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 146a1b62c FUN_146a1b62c body=1081 status=ok
// SIG undefined FUN_146a1b62c(void)

void FUN_146a1b62c(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 unaff_RBP;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_588 [32];
  undefined1 *local_568;
  undefined8 local_558;
  longlong *local_550;
  longlong *local_548;
  undefined4 local_540;
  undefined1 local_531;
  undefined1 local_530 [8];
  longlong *local_528;
  undefined1 local_511;
  undefined1 local_510 [8];
  longlong *local_508;
  undefined8 local_4f8;
  longlong *local_4f0;
  undefined8 local_4e8;
  longlong *local_4e0;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined1 local_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  longlong *local_4a8;
  undefined8 local_4a0;
  longlong *local_498;
  undefined8 local_490;
  longlong *local_488;
  undefined8 local_2e8;
  undefined4 local_2dc;
  undefined1 local_2c0 [16];
  undefined1 local_2b0 [192];
  undefined1 local_1f0 [440];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_588;
  FUN_1407679b0(local_1f0);
  FUN_145aafb3e(local_2b0);
  lVar6 = FUN_145aaf900(local_2b0);
  local_568 = (undefined1 *)0x0;
  puVar7 = (undefined4 *)
           (**(code **)(*param_2 + 0x48))(param_2,*param_3,".Separator.Padding",&DAT_14c98de88);
  local_4d8 = *puVar7;
  uStack_4d4 = puVar7[1];
  uStack_4d0 = puVar7[2];
  uStack_4cc = puVar7[3];
  local_4c8 = 1;
  local_4c0 = 0;
  uStack_4b8 = 0;
  *(undefined1 *)(lVar6 + 0x28) = 1;
  *(undefined4 *)(lVar6 + 0x18) = local_4d8;
  *(undefined4 *)(lVar6 + 0x1c) = uStack_4d4;
  *(undefined4 *)(lVar6 + 0x20) = uStack_4d0;
  *(undefined4 *)(lVar6 + 0x24) = uStack_4cc;
  FUN_144a450dc(lVar6 + 0x30,&local_4c0);
  FUN_1449db362(&local_4c0);
  FUN_146a11c40(&local_490);
  local_2e8 = (**(code **)(*param_2 + 0x50))(param_2,*param_3,".Separator",0);
  local_2dc = 0x3f800000;
  local_568 = &local_511;
  FUN_146a40596(local_510,"SSeparator",
                ".\\Runtime/Slate/Private/Framework/MultiBox/SMenuSeparatorBlock.cpp",0x36);
  FUN_146a11d06(local_510,&local_4f8,&local_490);
  local_4e8 = local_4f8;
  local_4e0 = local_4f0;
  if (local_4f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_4f0 + 1) = (int)local_4f0[1] + 1;
    UNLOCK();
  }
  uVar8 = FUN_145aaf878(lVar6,&local_4e8);
  uVar8 = FUN_145aaf822(local_1f0,uVar8);
  local_568 = &local_531;
  FUN_14076837c(local_530,"SVerticalBox",
                ".\\Runtime/Slate/Private/Framework/MultiBox/SMenuSeparatorBlock.cpp",0x30);
  FUN_14076784c(local_530,&local_4b0,uVar8);
  local_4a0 = local_4b0;
  local_498 = local_4a8;
  if (local_4a8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_4a8 + 1) = (int)local_4a8[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(param_1 + 0x3d,&local_4a0);
  plVar10 = local_498;
  if (local_498 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_498 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_498)(local_498);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (local_4a8 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_4a8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_4a8)(local_4a8);
      LOCK();
      piVar1 = (int *)((longlong)local_4a8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_4a8 + 0x10))(local_4a8);
      }
    }
  }
  if (local_528 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_528 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_528)(local_528);
      LOCK();
      piVar1 = (int *)((longlong)local_528 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_528 + 0x10))(local_528);
      }
    }
  }
  plVar10 = local_4e0;
  if (local_4e0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_4e0 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_4e0)(local_4e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (local_4f0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_4f0 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_4f0)(local_4f0);
      LOCK();
      piVar1 = (int *)((longlong)local_4f0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_4f0 + 0x10))(local_4f0);
      }
    }
  }
  if (local_508 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_508 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_508)(local_508);
      LOCK();
      piVar1 = (int *)((longlong)local_508 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_508 + 0x10))(local_508);
      }
    }
  }
  FUN_1449db362(local_2c0);
  FUN_140a4ff8c(&local_490);
  FUN_140767f30(local_2b0);
  FUN_14149255e(local_1f0);
  plVar10 = (longlong *)param_1[0x4f];
  bVar3 = true;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar10[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) {
        plVar10 = (longlong *)0x0;
        goto LAB_146a1b953;
      }
      LOCK();
      iVar4 = (int)plVar10[1];
      bVar11 = iVar5 == iVar4;
      if (bVar11) {
        *(int *)(plVar10 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar11);
    lVar6 = param_1[0x4e];
    bVar3 = false;
  }
LAB_146a1b953:
  uVar2 = *(undefined1 *)(param_1[0x50] + 0x9c);
  plVar9 = (longlong *)FUN_140e82300();
  local_548 = (longlong *)*plVar9;
  if (local_548 != (longlong *)0x0) {
    (**(code **)(*local_548 + 8))();
  }
  local_540 = (undefined4)plVar9[1];
  (**(code **)(*param_1 + 8))(param_1,&local_490);
  local_558 = local_490;
  local_550 = local_488;
  if (local_488 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_488 + 1) = (int)local_488[1] + 1;
    UNLOCK();
  }
  FUN_146a0ca44(lVar6,&local_558,&local_548,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar2) & 0xffffffff);
  if (local_488 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_488 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_488)(local_488);
      LOCK();
      piVar1 = (int *)((longlong)local_488 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_488 + 0x10))(local_488);
      }
    }
  }
  if (!bVar3) {
    LOCK();
    plVar9 = plVar10 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_588) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a1ba66 FUN_146a1ba66 body=59 status=ok
// SIG undefined FUN_146a1ba66(void)

longlong FUN_146a1ba66(longlong param_1,longlong param_2)

{
  FUN_146a46c74(param_1 + 0x50);
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1449db362(param_2 + 0x28);
    FUN_1449db362(param_2 + 0x10);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return param_1;
}



// FUNCTION 146a1baa2 FUN_146a1baa2 body=444 status=ok
// SIG undefined FUN_146a1baa2(void)

undefined8 *
FUN_146a1baa2(undefined8 *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  local_68 = 8;
  FUN_146a0eb42();
  *param_1 = &PTR_FUN_149f06490;
  param_1[0x17] = *param_2;
  lVar4 = param_2[1];
  param_1[0x18] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)*param_3;
  param_1[0x19] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  *(int *)(param_1 + 0x1a) = (int)param_3[1];
  plVar5 = (longlong *)*param_4;
  param_1[0x1b] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  *(int *)(param_1 + 0x1c) = (int)param_4[1];
  *(char *)(param_1 + 0x1d) = (char)param_4[2];
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  FUN_1413a4324(param_1 + 0x1e,param_4 + 3);
  param_1[0x20] = *param_5;
  cVar3 = *(char *)((longlong)param_5 + 0xc);
  *(char *)((longlong)param_1 + 0x10c) = cVar3;
  if (cVar3 == '\x01') {
    *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_5 + 1);
  }
  cVar3 = *(char *)((longlong)param_5 + 0x14);
  *(char *)((longlong)param_1 + 0x114) = cVar3;
  if (cVar3 == '\x01') {
    *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_5 + 2);
  }
  cVar3 = *(char *)((longlong)param_5 + 0x1c);
  *(char *)((longlong)param_1 + 0x11c) = cVar3;
  if (cVar3 == '\x01') {
    *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(param_5 + 3);
  }
  cVar3 = *(char *)((longlong)param_5 + 0x24);
  *(char *)((longlong)param_1 + 0x124) = cVar3;
  if (cVar3 == '\x01') {
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_5 + 4);
  }
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
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
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a1bc60 FUN_146a1bc60 body=471 status=ok
// SIG undefined FUN_146a1bc60(void)

void FUN_146a1bc60(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  longlong **local_b0;
  longlong *local_a8 [2];
  longlong *local_98 [2];
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong *local_70;
  undefined4 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_4c;
  undefined1 local_44;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((*(int *)(param_1 + 0x130) != 0) && (*(longlong **)(param_1 + 0x128) != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x128) + 0x30))(), cVar2 != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_d8);
  }
  cVar2 = FUN_144a7c5f6((longlong *)(param_1 + 200));
  if (cVar2 == '\0') {
    local_70 = *(longlong **)(param_1 + 200);
    if (local_70 != (longlong *)0x0) {
      (**(code **)(*local_70 + 8))();
    }
    local_68 = *(undefined4 *)(param_1 + 0xd0);
  }
  else {
    local_60 = L"CustomControl";
    local_58 = 0xd;
    FUN_1446e940c(local_98,&local_60);
    local_60 = L"WidgetBlock";
    local_58 = 0xb;
    FUN_1446e940c(local_a8,&local_60);
    FUN_140208bae(&local_70,local_a8,local_98,L"Custom Control");
  }
  uVar1 = (ulonglong)local_60 >> 8;
  local_54 = 0;
  local_4c = 0;
  local_44 = 0;
  local_3c = 0;
  local_60 = (wchar_t *)CONCAT71((uint7)uVar1 & 0xffffff,1);
  FUN_144a5dc74(local_a8);
  FUN_14023423e(local_98,local_a8);
  local_88 = 1;
  local_80 = 0;
  uStack_78 = 0;
  uVar3 = FUN_140e82300();
  local_b8 = 1;
  local_b0 = local_98;
  FUN_146a0da72(param_2,param_1 + 0xb8,uVar3,&local_60);
  FUN_1449db362(&local_80);
  if (local_98[0] != (longlong *)0x0) {
    (**(code **)(*local_98[0] + 0x10))();
  }
  if (local_a8[0] != (longlong *)0x0) {
    (**(code **)(*local_a8[0] + 0x10))();
  }
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a1be54 FUN_146a1be54 body=269 status=ok
// SIG undefined FUN_146a1be54(void)

undefined8 * FUN_146a1be54(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_248 [47];
  undefined1 local_219;
  undefined1 local_218 [8];
  longlong *local_210;
  undefined8 local_200;
  longlong *local_1f8;
  undefined4 local_1f0;
  undefined1 local_1ec;
  undefined1 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined1 local_1d0 [424];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_248;
  thunk_FUN_140a5071c(local_1d0);
  local_1f0 = 1;
  local_1ec = 1;
  local_1e8 = 1;
  local_1e0 = 0;
  uStack_1d8 = 0;
  FUN_146a1bf68(local_1d0);
  FUN_146a46d34(local_218,&local_219);
  FUN_146a1bfca(local_218,&local_200,local_1d0);
  *param_2 = local_200;
  param_2[1] = local_1f8;
  if (local_1f8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1f8 + 1) = (int)local_1f8[1] + 1;
    UNLOCK();
    if (local_1f8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1f8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_1f8)(local_1f8);
        LOCK();
        piVar2 = (int *)((longlong)local_1f8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_1f8 + 0x10))(local_1f8);
        }
      }
    }
  }
  if (local_210 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_210 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_210)(local_210);
      LOCK();
      piVar2 = (int *)((longlong)local_210 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_210 + 0x10))(local_210);
      }
    }
  }
  FUN_140a4ff8c(local_1d0);
  if ((local_28 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a1bf62 thunk_FUN_140a5071c body=5 status=ok
// SIG undefined thunk_FUN_140a5071c(void)

undefined8 * thunk_FUN_140a5071c(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *param_1 = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = DAT_14c96b238;
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0x101;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa1) = 1;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar2 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x1c) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar2;
  *(undefined4 *)(param_1 + 0x1d) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar4;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[0x2e] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  return param_1;
}



// FUNCTION 146a1bf68 FUN_146a1bf68 body=98 status=ok
// SIG undefined FUN_146a1bf68(void)

longlong FUN_146a1bf68(longlong param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  
  if ((undefined4 *)(param_1 + 0x50) != param_2) {
    if (*(char *)(param_2 + 1) == '\x01') {
      *(undefined4 *)(param_1 + 0x50) = *param_2;
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x54) != '\x01') goto LAB_146a1bf8d;
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x54) = uVar1;
  }
LAB_146a1bf8d:
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 2);
  FUN_144a450dc(param_1 + 0x60,param_2 + 4);
  FUN_1449db362(param_2 + 4);
  if (*(char *)(param_2 + 1) == '\x01') {
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_1;
}



// FUNCTION 146a1bfca FUN_146a1bfca body=107 status=ok
// SIG undefined FUN_146a1bfca(void)

longlong * FUN_146a1bfca(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1 + 8,param_3);
  lVar1 = *param_1;
  bVar4 = *(byte *)(lVar1 + 0x38);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*(longlong *)(lVar1 + 8) + 0x220))(lVar1 + 8);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(lVar1 + 0x38);
  }
  *(byte *)(lVar1 + 0x38) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x39) = *(byte *)(*param_1 + 0x39) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 146a1c036 FUN_146a1c036 body=255 status=ok
// SIG undefined FUN_146a1c036(void)

undefined8 FUN_146a1c036(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x104);
  local_c = 0;
  puVar2 = (undefined4 *)(param_1 + 0x108);
  if (*(char *)(param_1 + 0x10c) == '\0') {
    puVar2 = &local_c;
  }
  if (puVar2 != (undefined4 *)(param_2 + 8)) {
    *(undefined4 *)(param_2 + 8) = *puVar2;
    *(undefined1 *)(param_2 + 0xc) = 1;
  }
  if (*(char *)(param_1 + 0x114) == '\x01') {
    if ((undefined4 *)(param_1 + 0x110) != (undefined4 *)(param_2 + 0x10)) {
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x110);
LAB_146a1c0a0:
      *(undefined1 *)(param_2 + 0x14) = 1;
    }
  }
  else if (*(int *)(param_1 + 0x104) == 0) {
    *(undefined4 *)(param_2 + 0x10) = 0;
    goto LAB_146a1c0a0;
  }
  if ((undefined4 *)(param_1 + 0x118) != (undefined4 *)(param_2 + 0x18)) {
    if (*(char *)(param_1 + 0x11c) == '\x01') {
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x118);
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_2 + 0x1c) != '\x01') goto LAB_146a1c0cb;
      uVar1 = 0;
    }
    *(undefined1 *)(param_2 + 0x1c) = uVar1;
  }
LAB_146a1c0cb:
  puVar2 = (undefined4 *)(param_1 + 0x120);
  if (puVar2 != (undefined4 *)(param_2 + 0x20)) {
    if (*(char *)(param_1 + 0x124) == '\x01') {
      *(undefined4 *)(param_2 + 0x20) = *puVar2;
      puVar2 = (undefined4 *)CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
    }
    else {
      if (*(char *)(param_2 + 0x24) != '\x01') goto LAB_146a1c0f2;
      puVar2 = (undefined4 *)0x0;
    }
    *(char *)(param_2 + 0x24) = (char)puVar2;
  }
LAB_146a1c0f2:
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a1c136 FUN_146a1c136 body=4295 status=ok
// SIG undefined FUN_146a1c136(void)

void FUN_146a1c136(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  float *pfVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined1 *puVar17;
  longlong *plVar18;
  undefined4 uVar19;
  undefined8 unaff_RDI;
  char *pcVar20;
  longlong *plVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_e28 [32];
  undefined8 *local_e08;
  ulonglong local_e00;
  byte local_ded;
  uint local_dec;
  longlong *local_de8;
  undefined4 local_ddc;
  longlong *local_dd8;
  undefined8 local_dd0;
  longlong local_dc8;
  longlong *local_dc0;
  longlong *local_db8;
  longlong *local_db0;
  undefined2 local_da8 [4];
  undefined8 local_da0;
  undefined4 local_d98;
  undefined1 local_d89;
  undefined1 local_d88 [8];
  longlong *local_d80;
  undefined4 local_d70;
  undefined1 local_d6c;
  undefined8 local_d68;
  undefined8 uStack_d60;
  undefined1 local_d51;
  undefined1 local_d50 [8];
  longlong *local_d48;
  undefined1 local_d31;
  undefined1 local_d30 [8];
  longlong *local_d28;
  undefined8 local_d18;
  undefined4 local_d0c;
  undefined4 uStack_d08;
  undefined4 uStack_d04;
  undefined4 uStack_d00;
  undefined4 local_cfc;
  undefined4 local_cf8;
  undefined4 uStack_cf4;
  undefined4 uStack_cf0;
  undefined4 uStack_cec;
  undefined4 local_ce8;
  undefined1 local_ce4;
  undefined8 local_ce0;
  undefined8 uStack_cd8;
  longlong *local_cc8;
  undefined4 local_cc0;
  undefined1 local_cb8;
  undefined8 local_cb0;
  undefined4 local_ca8;
  longlong *local_ca0;
  undefined4 local_c98;
  undefined1 local_c90;
  undefined8 local_c88;
  undefined8 uStack_c80;
  undefined8 local_c78;
  longlong *local_c70;
  undefined8 local_c68;
  longlong *local_c60;
  undefined8 local_c58;
  undefined4 local_c50;
  undefined4 local_c4c;
  undefined1 local_c48;
  undefined8 local_c40;
  undefined8 uStack_c38;
  undefined2 local_c30;
  undefined8 local_c28;
  undefined8 uStack_c20;
  undefined8 local_c18;
  longlong *local_c10;
  undefined8 local_c08;
  longlong *local_c00;
  undefined8 local_bf8;
  longlong *plStack_bf0;
  undefined8 local_be8;
  longlong *plStack_be0;
  longlong local_bd8;
  longlong *local_bd0;
  longlong local_bc8;
  longlong *local_bc0;
  undefined1 local_bb8;
  undefined8 local_bb0;
  undefined8 uStack_ba8;
  undefined8 local_ba0;
  longlong *local_b98;
  undefined8 local_b90;
  longlong *local_b88;
  float local_b80;
  float local_b7c;
  float local_b78;
  float local_b74;
  undefined1 local_b70;
  undefined8 local_b68;
  undefined8 uStack_b60;
  undefined8 local_b58;
  longlong *local_b50;
  undefined8 local_b48;
  longlong *local_b40;
  longlong *local_b38;
  undefined4 local_b30;
  undefined8 local_b28;
  longlong *local_b20;
  longlong *local_b18;
  undefined4 local_b10;
  undefined1 local_b08;
  undefined8 local_b00;
  undefined4 local_af8;
  undefined8 local_af0;
  longlong local_ae8;
  longlong *local_ae0;
  undefined4 local_ad8;
  undefined1 local_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 local_ab8;
  undefined1 local_ab0 [72];
  uint local_a68;
  undefined1 local_a64;
  code *local_9f0;
  undefined4 local_9e8;
  undefined4 uStack_9e4;
  longlong local_820;
  undefined1 local_580 [192];
  undefined1 local_4c0 [112];
  undefined2 local_450;
  undefined1 local_448 [320];
  undefined1 local_308 [192];
  undefined1 local_248 [40];
  undefined1 local_220 [400];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_e28;
  plVar18 = (longlong *)param_1[0x4f];
  uVar19 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (plVar18 == (longlong *)0x0) {
    plVar18 = (longlong *)0x0;
    lVar12 = 0;
  }
  else {
    iVar8 = (int)plVar18[1];
    lVar12 = 0;
    do {
      if (iVar8 == 0) {
        plVar18 = (longlong *)0x0;
        goto LAB_146a1c19f;
      }
      LOCK();
      iVar7 = (int)plVar18[1];
      bVar22 = iVar8 == iVar7;
      if (bVar22) {
        *(int *)(plVar18 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar22);
    lVar12 = param_1[0x4e];
    uVar19 = 0;
  }
LAB_146a1c19f:
  plVar14 = *(longlong **)(lVar12 + 0x280);
  local_de8 = param_1;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    plVar16 = plVar14 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    plVar16 = plVar14 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  lVar4 = local_de8[0x50];
  plVar16 = (longlong *)local_de8[0x51];
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    plVar21 = plVar16 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
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
  local_dd8 = (longlong *)(lVar4 + 200);
  local_ded = FUN_144a7c5f6();
  local_dec = (uint)(local_ded ^ 1) * 2;
  local_e08 = (undefined8 *)((ulonglong)local_e08 & 0xffffffffffffff00);
  lVar9 = (**(code **)(*param_2 + 0x98))(param_2,DAT_14c98de30,*param_3,0);
  local_ddc = uVar19;
  if (lVar9 == 0) {
    pcVar20 = ".Block.IndentedPadding";
    if (*(char *)(lVar4 + 0x100) != '\0') {
      pcVar20 = ".Block.Padding";
    }
    local_e08 = (undefined8 *)0x0;
    pfVar10 = (float *)(**(code **)(*param_2 + 0x48))(param_2,*param_3,pcVar20,&DAT_14c98de88);
    fVar23 = *pfVar10;
    fVar24 = pfVar10[1];
    fVar25 = pfVar10[2];
    fVar26 = pfVar10[3];
    FUN_141160160(&local_ab8,*param_3,".Label");
    local_dc8 = FUN_140a57516(param_2,local_ab8,0,0);
  }
  else {
    lVar9 = FUN_1461d88a6(param_2,*param_3,0,0);
    uVar15 = (ulonglong)((*(byte *)(lVar4 + 0x100) ^ 1) << 4);
    fVar23 = *(float *)(uVar15 + 0x35f0 + lVar9);
    fVar24 = *(float *)(uVar15 + 0x35f4 + lVar9);
    fVar25 = *(float *)(uVar15 + 0x35f8 + lVar9);
    fVar26 = *(float *)(uVar15 + 0x35fc + lVar9);
    local_dc8 = lVar9 + 0x220;
    if (*(char *)(lVar9 + 0x3655) == '\x01') {
      local_dec = (uint)*(byte *)(lVar9 + 0x3654);
    }
  }
  if (*(char *)(lVar4 + 0x10c) == '\x01') {
    local_dec = *(uint *)(lVar4 + 0x108);
  }
  lVar9 = *(longlong *)(lVar12 + 0x278);
  plVar21 = *(longlong **)(lVar12 + 0x280);
  local_db8 = plVar16;
  local_db0 = plVar14;
  if (plVar21 == (longlong *)0x0) {
    cVar2 = *(char *)(lVar9 + 0x68);
  }
  else {
    LOCK();
    *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
    UNLOCK();
    LOCK();
    plVar14 = plVar21 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar21)(plVar21);
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
    cVar2 = *(char *)(lVar9 + 0x68);
    LOCK();
    plVar14 = plVar21 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar21)(plVar21);
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
  if (cVar2 == '\x05') {
    if (local_ded == 0) {
      fVar25 = fVar25 + 8.0;
      fVar26 = fVar26 + 0.0;
      fVar24 = fVar24 + 0.0;
      fVar23 = fVar23 + 14.0;
    }
    else {
      fVar23 = 1.0;
      fVar24 = 1.0;
      fVar25 = 1.0;
      fVar26 = 1.0;
    }
  }
  plVar14 = (longlong *)*local_dd8;
  if (plVar14 != (longlong *)0x0) {
    (**(code **)(*plVar14 + 8))(plVar14);
  }
  uVar19 = *(undefined4 *)(lVar4 + 0xd0);
  FUN_144a5dc74(&local_ae0);
  local_ad0 = 0;
  local_ac8 = 0;
  uStack_ac0 = 0;
  lVar9 = *(longlong *)(lVar12 + 0x278);
  plVar16 = *(longlong **)(lVar12 + 0x280);
  if (plVar16 == (longlong *)0x0) {
    if (*(char *)(lVar9 + 0x68) != '\x05') goto LAB_146a1c61e;
    cVar2 = *(char *)(lVar12 + 0x488);
joined_r0x000146a1c542:
    if (cVar2 == '\0') goto LAB_146a1c61e;
    local_ad0 = 1;
    local_9f0 = FUN_146a0c98a;
    local_9e8 = 0;
    FUN_146a45f9a(&local_ac8,lVar12);
    if (local_ded == 0) goto LAB_146a1c61e;
    local_af0 = *(undefined8 *)(lVar4 + 0xb8);
    local_ae8 = *(longlong *)(lVar4 + 0xc0);
    if (local_ae8 != 0) {
      LOCK();
      *(int *)(local_ae8 + 8) = *(int *)(local_ae8 + 8) + 1;
      UNLOCK();
    }
    FUN_146a1d1fe(&local_9f0,&local_af0);
    pcVar6 = local_9f0;
    plVar21 = plVar14;
    if (local_9f0 != DAT_14c98dec8) {
      plVar16 = (longlong *)CONCAT44(uStack_9e4,local_9e8);
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
      }
      local_b18 = local_ae0;
      if (local_ae0 != (longlong *)0x0) {
        (**(code **)(*local_ae0 + 8))();
      }
      local_b10 = local_ad8;
      local_b08 = local_ad0;
      local_b00 = 0;
      local_af8 = 0;
      FUN_1413a4324(&local_b00,&local_ac8);
      FUN_140a5ccc6(pcVar6,&local_b18);
      if (((byte)pcVar6[0x5dc] & 1) != 0) {
        FUN_145ab0088(pcVar6 + 0x1e0,pcVar6,0);
      }
      plVar5 = *(longlong **)(pcVar6 + 0x1e0);
      if (plVar14 != plVar5) {
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
        plVar21 = plVar5;
        if (plVar14 != (longlong *)0x0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
      uVar19 = *(undefined4 *)(pcVar6 + 0x1e8);
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar16 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
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
    plVar16 = (longlong *)CONCAT44(uStack_9e4,local_9e8);
    plVar14 = plVar21;
    if (plVar16 == (longlong *)0x0) goto LAB_146a1c61e;
    LOCK();
    plVar21 = plVar16 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 != 0) goto LAB_146a1c61e;
    (**(code **)*plVar16)(plVar16);
    LOCK();
    piVar1 = (int *)((longlong)plVar16 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_146a1c61e;
    lVar9 = *plVar16;
  }
  else {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    plVar21 = plVar16 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
    if (*(char *)(lVar9 + 0x68) == '\x05') {
      cVar2 = *(char *)(lVar12 + 0x488);
      LOCK();
      plVar21 = plVar16 + 1;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)*plVar21 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
      goto joined_r0x000146a1c542;
    }
    LOCK();
    plVar21 = plVar16 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 != 0) goto LAB_146a1c61e;
    (**(code **)*plVar16)(plVar16);
    LOCK();
    piVar1 = (int *)((longlong)plVar16 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_146a1c61e;
    lVar9 = *plVar16;
  }
  (**(code **)(lVar9 + 0x10))(plVar16);
LAB_146a1c61e:
  plVar16 = local_de8;
  (**(code **)(*local_de8 + 8))(local_de8,&local_b28);
  uVar3 = *(undefined1 *)(plVar16[0x50] + 0x9c);
  local_b38 = plVar14;
  if (plVar14 != (longlong *)0x0) {
    (**(code **)(*plVar14 + 8))(plVar14);
  }
  local_b48 = local_b28;
  local_b40 = local_b20;
  if (local_b20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b20 + 1) = (int)local_b20[1] + 1;
    UNLOCK();
  }
  local_dc0 = plVar14;
  local_b30 = uVar19;
  FUN_146a0ca44(lVar12,&local_b48,&local_b38,
                CONCAT71((int7)((ulonglong)plVar16 >> 8),uVar3) & 0xffffffff);
  lVar9 = *(longlong *)(lVar12 + 0x458);
  plVar14 = *(longlong **)(lVar12 + 0x460);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  if (lVar9 == 0) {
    bVar22 = false;
  }
  else {
    lVar9 = *(longlong *)(lVar12 + 0x458);
    plVar16 = *(longlong **)(lVar12 + 0x460);
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
    }
    plVar21 = *(longlong **)(lVar9 + 0x1c8);
    if (plVar21 == (longlong *)0x0) {
LAB_146a1c7cf:
      bVar22 = false;
    }
    else {
      iVar8 = (int)plVar21[1];
      do {
        if (iVar8 == 0) goto LAB_146a1c7cf;
        LOCK();
        iVar7 = (int)plVar21[1];
        bVar22 = iVar8 == iVar7;
        if (bVar22) {
          *(int *)(plVar21 + 1) = iVar8 + 1;
          iVar7 = iVar8;
        }
        iVar8 = iVar7;
        UNLOCK();
      } while (!bVar22);
      lVar9 = *(longlong *)(lVar9 + 0x1c0);
      bVar22 = lVar9 == *(longlong *)(lVar4 + 0xb8) && lVar9 != 0;
      LOCK();
      plVar5 = plVar21 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar21)(plVar21);
        LOCK();
        piVar1 = (int *)((longlong)plVar21 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
        }
      }
    }
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      plVar21 = plVar16 + 1;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)*plVar21 == 0) {
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
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar14 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if (bVar22) {
    local_b58 = local_b28;
    local_b50 = local_b20;
    if (local_b20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b20 + 1) = (int)local_b20[1] + 1;
      UNLOCK();
    }
    FUN_146a0c9be(lVar12,&local_b58);
  }
  local_b70 = 1;
  local_b68 = 0;
  uStack_b60 = 0;
  local_b80 = fVar23;
  local_b7c = fVar24;
  local_b78 = fVar25;
  local_b74 = fVar26;
  uVar11 = FUN_140a58d14(local_de8 + 0x44);
  FUN_140a5296a();
  local_be8 = 0;
  plStack_be0 = (longlong *)0x0;
  local_bf8 = 0;
  plStack_bf0 = (longlong *)0x0;
  plVar14 = DAT_14c98eb08;
  if (DAT_14c98eb10 == 0) {
    plVar14 = (longlong *)0x0;
  }
  local_e08 = &local_be8;
  local_e00 = local_e00 & 0xffffffffffffff00;
  local_dd0 = uVar11;
  (**(code **)(*plVar14 + 0x58))(plVar14,&local_bd8,lVar4 + 0xd8,&local_bf8);
  local_bc8 = local_bd8 + 0x268;
  if (local_bd8 == 0) {
    local_bc8 = 0;
  }
  local_bc0 = local_bd0;
  if (local_bd0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_bd0 + 1) = (int)local_bd0[1] + 1;
    UNLOCK();
  }
  local_bb8 = 1;
  local_bb0 = 0;
  uStack_ba8 = 0;
  FUN_145766fac(local_220,&local_bc8);
  FUN_14576702a(&local_bc8);
  FUN_140a50426(local_308);
  uVar11 = FUN_140a52578(local_308);
  FUN_140a5296a(local_4c0);
  puVar17 = &DAT_14c96b238;
  local_c50 = 0;
  if (local_ded != 0) {
    puVar17 = &DAT_14c96b1e1;
  }
  local_c30 = CONCAT11(1,*puVar17);
  local_c28 = 0;
  uStack_c20 = 0;
  local_450 = local_c30;
  if (local_ded == 0) {
    local_c50 = 0x40800000;
  }
  FUN_144a450dc(local_448,&local_c28);
  FUN_1449db362(&local_c28);
  FUN_140a50426(local_580);
  lVar12 = FUN_140a52578(local_580);
  local_c58 = 0;
  local_c4c = 0;
  local_c48 = 1;
  local_c40 = 0;
  uStack_c38 = 0;
  *(undefined1 *)(lVar12 + 0x28) = 1;
  *(undefined8 *)(lVar12 + 0x18) = 0;
  *(undefined4 *)(lVar12 + 0x20) = local_c50;
  *(undefined4 *)(lVar12 + 0x24) = 0;
  FUN_144a450dc(lVar12 + 0x30,&local_c40);
  FUN_1449db362(&local_c40);
  *(undefined4 *)(lVar12 + 0x48) = 2;
  *(undefined1 *)(lVar12 + 0x4c) = 1;
  FUN_140a570d8(&local_9f0);
  local_820 = local_dc8;
  local_ca0 = (longlong *)*local_dd8;
  if (local_ca0 != (longlong *)0x0) {
    (**(code **)(*local_ca0 + 8))();
  }
  local_c98 = *(undefined4 *)(lVar4 + 0xd0);
  local_c90 = 1;
  local_c88 = 0;
  uStack_c80 = 0;
  uVar13 = FUN_140a54906(&local_9f0);
  local_cc8 = local_ae0;
  if (local_ae0 != (longlong *)0x0) {
    (**(code **)(*local_ae0 + 8))();
  }
  local_cc0 = local_ad8;
  local_cb8 = local_ad0;
  local_cb0 = 0;
  local_ca8 = 0;
  FUN_1413a4324(&local_cb0,&local_ac8);
  lVar9 = FUN_146a1d354(uVar13,&local_cc8);
  plVar14 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar14 == (longlong *)0x0) {
    plVar14 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_d18,"Colors.ForegroundHover",1);
  local_e00 = 0;
  local_e08 = (undefined8 *)&DAT_14c98de74;
  (**(code **)(*plVar14 + 0x40))(plVar14,&local_d0c,local_d18,0);
  local_ce8 = local_cfc;
  local_cf8 = local_d0c;
  uStack_cf4 = uStack_d08;
  uStack_cf0 = uStack_d04;
  uStack_cec = uStack_d00;
  local_ce4 = 1;
  local_ce0 = 0;
  uStack_cd8 = 0;
  *(undefined4 *)(lVar9 + 0x280) = local_cfc;
  *(undefined4 *)(lVar9 + 0x270) = local_d0c;
  *(undefined4 *)(lVar9 + 0x274) = uStack_d08;
  *(undefined4 *)(lVar9 + 0x278) = uStack_d04;
  *(undefined4 *)(lVar9 + 0x27c) = uStack_d00;
  *(undefined1 *)(lVar9 + 0x284) = 1;
  FUN_144a450dc(lVar9 + 0x288,&local_ce0);
  FUN_1449db362(&local_ce0);
  local_e08 = (undefined8 *)&local_d31;
  FUN_140a54526(local_d30,"STextBlock",
                ".\\Runtime/Slate/Private/Framework/MultiBox/SWidgetBlock.cpp",0xb9);
  FUN_140a52852(local_d30,&local_c78,lVar9);
  local_c68 = local_c78;
  local_c60 = local_c70;
  if (local_c70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_c70 + 1) = (int)local_c70[1] + 1;
    UNLOCK();
  }
  uVar13 = FUN_140a4fe8e(lVar12,&local_c68);
  uVar13 = FUN_140a52392(local_4c0,uVar13);
  local_e08 = (undefined8 *)&local_d51;
  FUN_140a541dc(local_d50,"SHorizontalBox",
                ".\\Runtime/Slate/Private/Framework/MultiBox/SWidgetBlock.cpp",0xb2);
  FUN_140a50ec6(local_d50,&local_c18,uVar13);
  local_c08 = local_c18;
  local_c00 = local_c10;
  if (local_c10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_c10 + 1) = (int)local_c10[1] + 1;
    UNLOCK();
  }
  uVar11 = FUN_140a4fe8e(uVar11,&local_c08);
  uVar11 = FUN_140a52392(local_248,uVar11);
  FUN_140a50426(local_ab0);
  local_a68 = local_dec;
  local_a64 = 1;
  local_d70 = 0x3f800000;
  local_d6c = 1;
  local_d68 = 0;
  uStack_d60 = 0;
  uVar13 = FUN_140a5475a(local_ab0);
  uVar13 = FUN_146a07044(uVar13,lVar4 + 0xb8);
  uVar11 = FUN_140a52392(uVar11,uVar13);
  local_e08 = (undefined8 *)&local_d89;
  FUN_140a541dc(local_d88,"SHorizontalBox",
                ".\\Runtime/Slate/Private/Framework/MultiBox/SWidgetBlock.cpp",0xad);
  FUN_140a50ec6(local_d88,&local_ba0,uVar11);
  local_b90 = local_ba0;
  local_b88 = local_b98;
  if (local_b98 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b98 + 1) = (int)local_b98[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(local_dd0,&local_b90);
  plVar16 = local_b88;
  plVar14 = local_dc0;
  if (local_b88 != (longlong *)0x0) {
    LOCK();
    plVar21 = local_b88 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*local_b88)(local_b88);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  if (local_b98 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_b98 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*local_b98)(local_b98);
      LOCK();
      piVar1 = (int *)((longlong)local_b98 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_b98 + 0x10))(local_b98);
      }
    }
  }
  if (local_d80 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_d80 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*local_d80)(local_d80);
      LOCK();
      piVar1 = (int *)((longlong)local_d80 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_d80 + 0x10))(local_d80);
      }
    }
  }
  FUN_140a509a6(local_ab0);
  plVar16 = local_c00;
  if (local_c00 != (longlong *)0x0) {
    LOCK();
    plVar21 = local_c00 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*local_c00)(local_c00);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  if (local_c10 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_c10 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*local_c10)(local_c10);
      LOCK();
      piVar1 = (int *)((longlong)local_c10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c10 + 0x10))(local_c10);
      }
    }
  }
  if (local_d48 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_d48 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*local_d48)(local_d48);
      LOCK();
      piVar1 = (int *)((longlong)local_d48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_d48 + 0x10))(local_d48);
      }
    }
  }
  plVar16 = local_c60;
  if (local_c60 != (longlong *)0x0) {
    LOCK();
    plVar21 = local_c60 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*local_c60)(local_c60);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  if (local_c70 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_c70 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*local_c70)(local_c70);
      LOCK();
      piVar1 = (int *)((longlong)local_c70 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c70 + 0x10))(local_c70);
      }
    }
  }
  if (local_d28 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_d28 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*local_d28)(local_d28);
      LOCK();
      piVar1 = (int *)((longlong)local_d28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_d28 + 0x10))(local_d28);
      }
    }
  }
  FUN_140a59ae6(&local_9f0);
  FUN_140a509a6(local_580);
  FUN_145ab33da(local_4c0);
  FUN_140a509a6(local_308);
  if (local_bd0 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_bd0 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*local_bd0)(local_bd0);
      LOCK();
      piVar1 = (int *)((longlong)local_bd0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_bd0 + 0x10))(local_bd0);
      }
    }
  }
  plVar16 = plStack_bf0;
  if (plStack_bf0 != (longlong *)0x0) {
    LOCK();
    plVar21 = plStack_bf0 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*plStack_bf0)(plStack_bf0);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  plVar21 = plStack_be0;
  plVar16 = local_de8 + 1;
  if (plStack_be0 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_be0 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plStack_be0)(plStack_be0);
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
  FUN_145ab33da(local_248);
  local_da8[0] = *(undefined2 *)(local_de8[0x50] + 0xa0);
  local_da0 = 0;
  local_d98 = 0;
  FUN_140fe25fc(&local_da0,local_de8[0x50] + 0xa8);
  FUN_14020e622(plVar16,local_da8);
  if (local_b20 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_b20 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*local_b20)(local_b20);
      LOCK();
      piVar1 = (int *)((longlong)local_b20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_b20 + 0x10))(local_b20);
      }
    }
  }
  FUN_1449db362(&local_ac8);
  plVar21 = local_db0;
  plVar16 = local_db8;
  if (local_ae0 != (longlong *)0x0) {
    (**(code **)(*local_ae0 + 0x10))();
  }
  uVar19 = local_ddc;
  if (plVar14 != (longlong *)0x0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
  }
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar16 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar21 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar21)(plVar21);
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
  if ((char)uVar19 == '\0') {
    LOCK();
    plVar14 = plVar18 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_e28) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a1d1fe FUN_146a1d1fe body=340 status=ok
// SIG undefined FUN_146a1d1fe(void)

longlong * FUN_146a1d1fe(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1414927ae(*param_2,&local_48);
  FUN_1446f470e(&local_50,L"STextBlock",1);
  if (local_48 == local_50) {
    *param_1 = (longlong)*param_2;
    lVar5 = param_2[1];
  }
  else {
    plVar6 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x180))();
    iVar4 = (**(code **)*plVar6)(plVar6);
    if (0 < iVar4) {
      iVar7 = 0;
      do {
        (**(code **)(*plVar6 + 0x10))(plVar6,local_60,iVar7);
        FUN_146a1d1fe(param_1,local_60);
        if (*param_1 != DAT_14c98dec8) goto LAB_146a1d26a;
        plVar3 = (longlong *)param_1[1];
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
        iVar7 = iVar7 + 1;
      } while (iVar4 != iVar7);
    }
    *param_1 = DAT_14c98dec8;
    lVar5 = DAT_14c98ded0;
  }
  param_1[1] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
LAB_146a1d26a:
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a1d354 FUN_146a1d354 body=86 status=ok
// SIG undefined FUN_146a1d354(void)

longlong FUN_146a1d354(longlong param_1,longlong *param_2)

{
  FUN_140008f88(param_1 + 0x330);
  *(char *)(param_1 + 0x340) = (char)param_2[2];
  FUN_144a450dc(param_1 + 0x348,param_2 + 3);
  FUN_1449db362(param_2 + 3);
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  return param_1;
}



// FUNCTION 146a1d3aa FUN_146a1d3aa body=396 status=ok
// SIG undefined FUN_146a1d3aa(void)

void FUN_146a1d3aa(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar9 = *(longlong **)(param_1 + 0x270);
  bVar5 = true;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
    lVar10 = 0;
  }
  else {
    iVar8 = (int)plVar9[1];
    lVar10 = 0;
    do {
      if (iVar8 == 0) {
        plVar9 = (longlong *)0x0;
        goto LAB_146a1d409;
      }
      LOCK();
      iVar6 = (int)plVar9[1];
      bVar11 = iVar8 == iVar6;
      if (bVar11) {
        *(int *)(plVar9 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar11);
    lVar10 = *(longlong *)(param_1 + 0x268);
    bVar5 = false;
  }
LAB_146a1d409:
  lVar3 = *(longlong *)(lVar10 + 0x278);
  plVar4 = *(longlong **)(lVar10 + 0x280);
  if (plVar4 == (longlong *)0x0) {
    cVar7 = *(char *)(lVar3 + 0x68);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
    cVar7 = *(char *)(lVar3 + 0x68);
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
  if (cVar7 == '\x05') {
    FUN_146a86ee6(lVar10,&local_58);
    if ((local_58 != 0) && (cVar7 = FUN_146a62c32(), cVar7 != '\0')) {
      FUN_146a86fca(lVar10);
    }
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
  }
  FUN_1403d1d7a(param_1,param_2,param_3);
  if (!bVar5) {
    LOCK();
    plVar4 = plVar9 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a1d538 FUN_146a1d538 body=136 status=ok
// SIG undefined FUN_146a1d538(void)

longlong * FUN_146a1d538(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar3 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar4 = (longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar5 * 0x14);
        if (*plVar4 == param_2) goto LAB_146a1d542;
        iVar5 = *(int *)((longlong)plVar4 + 0xc);
      } while (iVar5 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_146a1d542:
  plVar2 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  return plVar2;
}



// FUNCTION 146a1d5c0 FUN_146a1d5c0 body=136 status=ok
// SIG undefined FUN_146a1d5c0(void)

longlong * FUN_146a1d5c0(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar3 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar4 = (longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar5 * 0x14);
        if (*plVar4 == param_2) goto LAB_146a1d5ca;
        iVar5 = *(int *)((longlong)plVar4 + 0xc);
      } while (iVar5 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_146a1d5ca:
  plVar2 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  return plVar2;
}



// FUNCTION 146a1d648 FUN_146a1d648 body=151 status=ok
// SIG undefined FUN_146a1d648(void)

longlong * FUN_146a1d648(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar3 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x98);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar4 = (longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar5 * 0x14);
        if (*plVar4 == param_2) goto LAB_146a1d655;
        iVar5 = *(int *)((longlong)plVar4 + 0xc);
      } while (iVar5 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_146a1d655:
  plVar2 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  return plVar2;
}



// FUNCTION 146a1d6e0 FUN_146a1d6e0 body=151 status=ok
// SIG undefined FUN_146a1d6e0(void)

longlong * FUN_146a1d6e0(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar3 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x98);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar4 = (longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar5 * 0x14);
        if (*plVar4 == param_2) goto LAB_146a1d6ed;
        iVar5 = *(int *)((longlong)plVar4 + 0xc);
      } while (iVar5 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_146a1d6ed:
  plVar2 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  return plVar2;
}



// FUNCTION 146a1d778 FUN_146a1d778 body=183 status=ok
// SIG undefined FUN_146a1d778(void)

void FUN_146a1d778(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  
  uVar8 = (ulonglong)(int)param_1[1];
  if (0 < (longlong)uVar8) {
    do {
      uVar9 = uVar8 - 1;
      lVar3 = *(longlong *)(*param_1 + uVar9 * 0x10);
      if (*(char *)(lVar3 + 0x288) == '\x01') {
        plVar7 = *(longlong **)(lVar3 + 0x280);
        bVar4 = true;
        if (plVar7 == (longlong *)0x0) {
LAB_146a1d7c6:
          plVar7 = (longlong *)0x0;
        }
        else {
          iVar6 = (int)plVar7[1];
          do {
            if (iVar6 == 0) goto LAB_146a1d7c6;
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
          if (*(longlong *)(lVar3 + 0x278) != 0) {
            FUN_14698158e();
          }
          bVar4 = false;
        }
        FUN_146a47098(param_1,uVar9 & 0xffffffff);
        FUN_146a4710e(param_1);
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
      }
      bVar4 = 1 < (longlong)uVar8;
      uVar8 = uVar9;
    } while (bVar4);
  }
  return;
}



// FUNCTION 146a1d830 FUN_146a1d830 body=846 status=ok
// SIG undefined FUN_146a1d830(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146a1d830(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  longlong lVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  bool bVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  undefined8 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c98eb6c) && (FUN_144b3d300(&DAT_14c98eb6c), DAT_14c98eb6c == -1)) {
    plVar13 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
    if (plVar13 == (longlong *)0x0) {
      plVar13 = DAT_14c96b350;
    }
    FUN_1446ddc76(&local_b8,"StatusBar.Height",1);
    local_d8 = 0;
    _DAT_14c98eb68 = (float)(**(code **)(*plVar13 + 0x28))(plVar13,local_b8,0,0);
    _Init_thread_footer(&DAT_14c98eb6c);
  }
  dVar8 = DAT_14c98eb60;
  if (0 < (longlong)(int)param_1[1]) {
    dVar4 = (double)*(float *)(param_1 + 3) - _DAT_14c98eb58;
    dVar5 = (double)*(float *)((longlong)param_1 + 0x1c) - ((double)_DAT_14c98eb68 + DAT_14c98eb60);
    lVar14 = (longlong)(int)param_1[1];
    do {
      lVar3 = *(longlong *)(*param_1 + (lVar14 + -1) * 0x10);
      plVar13 = *(longlong **)(lVar3 + 0x280);
      if (plVar13 != (longlong *)0x0) {
        iVar12 = (int)plVar13[1];
        do {
          if (iVar12 == 0) goto LAB_146a1da39;
          LOCK();
          iVar11 = (int)plVar13[1];
          bVar15 = iVar12 == iVar11;
          if (bVar15) {
            *(int *)(plVar13 + 1) = iVar12 + 1;
            iVar11 = iVar12;
          }
          iVar12 = iVar11;
          UNLOCK();
        } while (!bVar15);
        lVar3 = *(longlong *)(lVar3 + 0x278);
        if (lVar3 != 0) {
          lVar7 = param_1[1];
          FUN_144b013c4(lVar3,&local_c0);
          fVar10 = local_bc;
          fVar9 = local_c0;
          uVar6 = CONCAT44(local_bc,local_c0);
          dVar16 = (double)local_c0;
          dVar5 = dVar5 - (double)local_bc;
          FUN_144b016b8(lVar3,&local_c0);
          fVar18 = (float)(dVar4 - dVar16);
          fVar17 = (float)(dVar5 - (double)(float)((double)((int)lVar7 - (int)lVar14) * dVar8));
          if ((((local_c0 != fVar18) || (NAN(local_c0) || NAN(fVar18))) || (local_bc != fVar17)) ||
             (NAN(local_bc) || NAN(fVar17))) {
            FUN_14287c17c(lVar3,&local_c8);
            if ((local_c8 == fVar9) && (!NAN(local_c8) && !NAN(fVar9))) {
              if ((local_c4 == fVar10) && (!NAN(local_c4) && !NAN(fVar10))) goto LAB_146a1d9da;
            }
            FUN_146980ab8(lVar3,CONCAT44(fVar17,fVar18),uVar6);
          }
          else {
LAB_146a1d9da:
            FUN_144b016b8(lVar3,&local_c0);
            if ((local_c0 == fVar18) && (!NAN(local_c0) && !NAN(fVar18))) {
              if ((local_bc == fVar17) && (!NAN(local_bc) && !NAN(fVar17))) goto LAB_146a1da1a;
            }
            FUN_1469807c6(lVar3,CONCAT44(fVar17,fVar18));
          }
        }
LAB_146a1da1a:
        LOCK();
        plVar1 = plVar13 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
LAB_146a1da39:
      bVar15 = 1 < lVar14;
      lVar14 = lVar14 + -1;
    } while (bVar15);
  }
  if ((local_b0 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a1db80 FUN_146a1db80 body=1143 status=ok
// SIG undefined FUN_146a1db80(void)

longlong * FUN_146a1db80(longlong param_1,longlong *param_2,float *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  bool bVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined1 auStack_298 [32];
  undefined1 local_278;
  undefined8 local_268;
  longlong *local_260;
  undefined1 local_258 [16];
  undefined8 local_248;
  longlong *local_240;
  longlong local_238;
  longlong local_230;
  undefined1 local_228 [16];
  longlong local_218;
  longlong local_210;
  undefined1 local_201;
  undefined8 local_200;
  longlong *local_1f8;
  longlong *local_1e8;
  longlong *plStack_1e0;
  undefined1 local_1d8 [408];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_298;
  thunk_FUN_140a5071c(&local_1e8);
  FUN_146a4738c(&local_200,&local_201);
  FUN_146a1dffe(&local_200,param_2,&local_1e8);
  plVar9 = local_1f8;
  if (local_1f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1f8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1f8)(local_1f8);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  FUN_140a4ff8c(&local_1e8);
  FUN_14697ff50(&local_200);
  local_218 = *param_2;
  local_210 = param_2[1];
  lVar10 = local_218;
  if (local_210 != 0) {
    LOCK();
    *(int *)(local_210 + 8) = *(int *)(local_210 + 8) + 1;
    UNLOCK();
    lVar10 = *param_2;
  }
  FUN_140763be6(local_200,&local_218);
  plVar1 = local_1f8;
  *(undefined8 *)(lVar10 + 0x278) = local_200;
  plVar9 = *(longlong **)(lVar10 + 0x280);
  if (plVar9 != local_1f8) {
    if (local_1f8 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_1f8 + 0xc) = *(int *)((longlong)local_1f8 + 0xc) + 1;
      UNLOCK();
      plVar9 = *(longlong **)(lVar10 + 0x280);
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    *(longlong **)(lVar10 + 0x280) = plVar1;
  }
  if (*param_4 == 0) {
LAB_146a1dccd:
    plVar9 = DAT_14c98e618;
    local_268 = local_200;
    local_260 = local_1f8;
    if (local_1f8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1f8 + 1) = (int)local_1f8[1] + 1;
      UNLOCK();
    }
    puVar11 = local_258;
    (**(code **)(*plVar9 + 0x10))(plVar9,puVar11,&local_268,1);
  }
  else {
    cVar7 = FUN_14287c1c6();
    if (cVar7 == '\0') goto LAB_146a1dccd;
    cVar7 = FUN_14287c1e0(*param_4);
    plVar9 = DAT_14c98e618;
    if (cVar7 != '\0') goto LAB_146a1dccd;
    local_238 = *param_4;
    local_230 = param_4[1];
    if (local_230 != 0) {
      LOCK();
      *(int *)(local_230 + 8) = *(int *)(local_230 + 8) + 1;
      UNLOCK();
    }
    local_248 = local_200;
    local_240 = local_1f8;
    if (local_1f8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1f8 + 1) = (int)local_1f8[1] + 1;
      UNLOCK();
    }
    local_278 = 1;
    puVar11 = local_228;
    FUN_1469a8322(plVar9,puVar11,&local_248,&local_238);
  }
  plVar9 = *(longlong **)(puVar11 + 8);
  if (plVar9 != (longlong *)0x0) {
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
  FUN_1413f6f2c(DAT_14c98e618,&local_1e8);
  plVar1 = plStack_1e0;
  plVar9 = local_1e8;
  if (plStack_1e0 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_1e0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_1e0)(plStack_1e0);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (plVar9 == (longlong *)0x0) {
    cVar7 = FUN_146980626(local_200);
    if (cVar7 == '\0') {
      cVar7 = FUN_1469806a2(local_200);
      if (cVar7 == '\0') goto LAB_146a1dd80;
    }
    FUN_146981248(local_200,0);
  }
LAB_146a1dd80:
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x18);
    lVar10 = (longlong)*(int *)(param_1 + 0x20) << 5;
    bVar8 = false;
    do {
      if ((((*(float *)(plVar9 + 2) <= *param_3) && (param_3[2] <= *(float *)(plVar9 + 3))) &&
          (*(float *)((longlong)plVar9 + 0x14) <= param_3[1])) &&
         (param_3[3] <= *(float *)((longlong)plVar9 + 0x1c))) {
        iVar4 = (int)plVar9[1];
        *(uint *)(plVar9 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)plVar9 + 0xc) < iVar4 + 1U) {
          FUN_146a476a4(plVar9,iVar4);
        }
        lVar5 = *plVar9;
        *(longlong *)(lVar5 + (longlong)iVar4 * 0x10) = *param_2;
        lVar6 = param_2[1];
        *(longlong *)(lVar5 + 8 + (longlong)iVar4 * 0x10) = lVar6;
        bVar8 = true;
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
          UNLOCK();
        }
      }
      plVar9 = plVar9 + 4;
      lVar10 = lVar10 + -0x20;
    } while (lVar10 != 0);
    if (bVar8) goto LAB_146a1de19;
  }
  FUN_1461182c0(DAT_14c98e618,local_1d8,param_3);
  local_1e8 = (longlong *)0x0;
  plStack_1e0 = (longlong *)&DAT_00000001;
  FUN_146a476a4(&local_1e8,0);
  *local_1e8 = *param_2;
  lVar10 = param_2[1];
  local_1e8[1] = lVar10;
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar4 + 1U) {
    FUN_146a47784((longlong *)(param_1 + 0x18),iVar4);
  }
  FUN_146a4772a((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x18),&local_1e8);
  FUN_146a26095(local_1e8,(ulonglong)plStack_1e0 & 0xffffffff);
  if (local_1e8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_146a1de19:
  if (local_1f8 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_1f8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_1f8)(local_1f8);
      LOCK();
      piVar2 = (int *)((longlong)local_1f8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1f8 + 0x10))(local_1f8);
      }
    }
  }
  plVar9 = (longlong *)param_4[1];
  if (plVar9 != (longlong *)0x0) {
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
  if ((local_40 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a1dff8 thunk_FUN_140a5071c body=5 status=ok
// SIG undefined thunk_FUN_140a5071c(void)

undefined8 * thunk_FUN_140a5071c(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *param_1 = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = DAT_14c96b238;
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0x101;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa1) = 1;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar2 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x1c) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar2;
  *(undefined4 *)(param_1 + 0x1d) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar4;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[0x2e] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  return param_1;
}



// FUNCTION 146a1dffe FUN_146a1dffe body=115 status=ok
// SIG undefined FUN_146a1dffe(void)

longlong * FUN_146a1dffe(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146aa6ed0(*param_1,param_3);
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



// FUNCTION 146a1e072 FUN_146a1e072 body=641 status=ok
// SIG undefined FUN_146a1e072(void)

undefined8 * FUN_146a1e072(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  plVar4 = DAT_14c98e618;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14c98e618 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
    if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  local_58 = 0xbf800000;
  uStack_54 = 0xbf800000;
  uStack_50 = 0xbf800000;
  uStack_4c = 0xbf800000;
  if (*(longlong *)(param_3 + 0x118) == 0) {
    if (((*(longlong *)(param_1 + 8) == 0) ||
        (plVar3 = *(longlong **)(param_1 + 0x10), plVar3 == (longlong *)0x0)) ||
       ((int)plVar3[1] < 1)) {
      (**(code **)(*DAT_14c98e618 + 0xe8))(DAT_14c98e618,&local_58);
    }
    else {
      iVar5 = (int)plVar3[1];
      do {
        if (iVar5 == 0) {
          FUN_146980726(0,&local_78);
          FUN_1461182c0(plVar4,&local_68,&local_78);
          local_58 = local_68;
          uStack_54 = uStack_64;
          uStack_50 = uStack_60;
          uStack_4c = uStack_5c;
          goto LAB_146a1e197;
        }
        LOCK();
        iVar2 = (int)plVar3[1];
        bVar6 = iVar5 == iVar2;
        if (bVar6) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
          iVar2 = iVar5;
        }
        iVar5 = iVar2;
        UNLOCK();
      } while (!bVar6);
      FUN_146980726(*(undefined8 *)(param_1 + 8),&local_78);
      FUN_1461182c0(plVar4,&local_68,&local_78);
      local_58 = local_68;
      uStack_54 = uStack_64;
      uStack_50 = uStack_60;
      uStack_4c = uStack_5c;
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
    }
  }
  else {
    FUN_146980726(*(longlong *)(param_3 + 0x118),&local_68);
    FUN_1461182c0(plVar4,&local_58,&local_68);
  }
LAB_146a1e197:
  local_88 = *(longlong *)(param_3 + 0x118);
  if (local_88 == 0) {
    local_88 = 0;
    local_80 = *(longlong *)(param_1 + 0x10);
    if (local_80 != 0) {
      iVar5 = *(int *)(local_80 + 8);
      do {
        if (iVar5 == 0) {
          local_80 = 0;
          goto LAB_146a1e1fc;
        }
        LOCK();
        iVar2 = *(int *)(local_80 + 8);
        bVar6 = iVar5 == iVar2;
        if (bVar6) {
          *(int *)(local_80 + 8) = iVar5 + 1;
          iVar2 = iVar5;
        }
        iVar5 = iVar2;
        UNLOCK();
      } while (!bVar6);
      if (local_80 != 0) {
        local_88 = *(longlong *)(param_1 + 8);
      }
    }
  }
  else {
    local_80 = *(longlong *)(param_3 + 0x120);
    if (local_80 != 0) {
      LOCK();
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      UNLOCK();
    }
  }
LAB_146a1e1fc:
  FUN_146a1db80(param_1,&local_68,&local_58,&local_88);
  (**(code **)(*(longlong *)CONCAT44(uStack_64,local_68) + 0x240))
            ((longlong *)CONCAT44(uStack_64,local_68),&local_78,param_3);
  *param_2 = local_78;
  param_2[1] = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_70 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
        }
      }
    }
  }
  plVar4 = (longlong *)CONCAT44(uStack_5c,uStack_60);
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
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
}



// FUNCTION 146a1e2fa FUN_146a1e2fa body=269 status=ok
// SIG undefined FUN_146a1e2fa(void)

void FUN_146a1e2fa(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    plVar11 = *(longlong **)(param_1 + 0x18);
    plVar10 = plVar11 + (longlong)*(int *)(param_1 + 0x20) * 4;
    do {
      if ((longlong)(int)plVar11[1] != 0) {
        plVar9 = (longlong *)*plVar11;
        plVar8 = plVar9 + (longlong)(int)plVar11[1] * 2;
        do {
          lVar3 = *plVar9;
          plVar4 = *(longlong **)(lVar3 + 0x280);
          if (plVar4 != (longlong *)0x0) {
            iVar7 = (int)plVar4[1];
            do {
              if (iVar7 == 0) goto LAB_146a1e3dc;
              LOCK();
              iVar6 = (int)plVar4[1];
              bVar12 = iVar7 == iVar6;
              if (bVar12) {
                *(int *)(plVar4 + 1) = iVar7 + 1;
                iVar6 = iVar7;
              }
              iVar7 = iVar6;
              UNLOCK();
            } while (!bVar12);
            lVar3 = *(longlong *)(lVar3 + 0x278);
            if (lVar3 != 0) {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
              iVar7 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar7 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
                FUN_1413f6722(param_2,iVar7);
              }
              lVar5 = *param_2;
              *(longlong *)(lVar5 + (longlong)iVar7 * 0x10) = lVar3;
              *(longlong **)(lVar5 + 8 + (longlong)iVar7 * 0x10) = plVar4;
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
LAB_146a1e3dc:
          plVar9 = plVar9 + 2;
        } while (plVar9 != plVar8);
      }
      plVar11 = plVar11 + 4;
    } while (plVar11 != plVar10);
  }
  return;
}



// FUNCTION 146a1e408 FUN_146a1e408 body=157 status=ok
// SIG undefined FUN_146a1e408(void)

void FUN_146a1e408(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c98ebb0);
  iVar6 = DAT_14c98eba8;
  lVar7 = (longlong)(int)DAT_14c98eba8;
  DAT_14c98eba8 = DAT_14c98eba8 + 1;
  if (DAT_14c98ebac < DAT_14c98eba8) {
    FUN_146a4798c(iVar6);
  }
  lVar5 = DAT_14c98eba0;
  *(undefined8 *)(DAT_14c98eba0 + lVar7 * 0x10) = *param_1;
  lVar3 = param_1[1];
  *(longlong *)(lVar5 + 8 + lVar7 * 0x10) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c98ebb0);
  plVar4 = (longlong *)param_1[1];
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
                    /* WARNING: Could not recover jumptable at 0x000146a1e490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146a1e4a6 FUN_146a1e4a6 body=136 status=ok
// SIG undefined FUN_146a1e4a6(void)

void FUN_146a1e4a6(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c98ebb0);
  local_20 = param_1;
  FUN_146a47a1a();
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c98ebb0);
  puVar2 = *(undefined8 **)(param_1 + 8);
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



// FUNCTION 146a1e540 FUN_146a1e540 body=234 status=ok
// SIG undefined FUN_146a1e540(void)

undefined8 * FUN_146a1e540(undefined8 *param_1)

{
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_14680e110();
  *param_1 = &PTR_FUN_149f066c0;
  FUN_146a1e62a(param_1 + 0x14);
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  FUN_144a5dc74(param_1 + 0x28);
  *(undefined2 *)(param_1 + 0x2a) = 0x100;
  *(undefined2 *)(param_1 + 0x2e) = 0x100;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined2 *)(param_1 + 0x32) = 0x100;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a7) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x38),4000);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3d));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x3d),4000);
  return param_1;
}



// FUNCTION 146a1e62a FUN_146a1e62a body=91 status=ok
// SIG undefined FUN_146a1e62a(void)

longlong FUN_146a1e62a(longlong param_1)

{
  FUN_144a5dc74();
  FUN_144a5dc74(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x20) = 0x400000003f000000;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 0x30) = 0x100;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x48) = 0x100;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x100;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return param_1;
}



// FUNCTION 146a1e686 FUN_146a1e686 body=342 status=ok
// SIG undefined FUN_146a1e686(void)

void FUN_146a1e686(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_149f066c0;
  if (((param_1[0x25] != 0) && (param_1[0x26] != 0)) && (0 < *(int *)(param_1[0x26] + 8))) {
    FUN_1401cb356();
    local_28 = param_1[0x25];
    local_20 = param_1[0x26];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_28);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3d));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  plVar3 = (longlong *)param_1[0x37];
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
  if (*(char *)((longlong)param_1 + 0x1ac) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1ac) = 0;
  }
  FUN_1449db362(param_1 + 0x33);
  FUN_1449db362(param_1 + 0x2f);
  FUN_1449db362(param_1 + 0x2b);
  if ((longlong *)param_1[0x28] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x28] + 0x10))();
  }
  plVar3 = (longlong *)param_1[0x26];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_146a1e7de(param_1 + 0x14);
  FUN_14680e182(param_1);
  plVar3 = (longlong *)param_1[0x13];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a1e7de FUN_146a1e7de body=77 status=ok
// SIG undefined FUN_146a1e7de(void)

void FUN_146a1e7de(longlong *param_1)

{
  FUN_1449db362(param_1 + 0xd);
  FUN_1449db362(param_1 + 10);
  FUN_1449db362(param_1 + 7);
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146a1e820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 146a1e82c FUN_146a1e82c body=593 status=ok
// SIG undefined FUN_146a1e82c(void)

void FUN_146a1e82c(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 uVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 local_68 [16];
  code *local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_146a1ea7e(param_1 + 0xa0);
  if (*(char *)(param_1 + 0xcc) == '\0') {
    FUN_1413f66b6();
    plVar4 = *(longlong **)(param_1 + 0x98);
    if (plVar4 == (longlong *)0x0) {
LAB_146a1e8ad:
      local_48 = 0;
      plStack_40 = (longlong *)0x0;
      FUN_146a1e408();
    }
    else {
      iVar7 = (int)plVar4[1];
      do {
        if (iVar7 == 0) goto LAB_146a1e8ad;
        LOCK();
        iVar5 = (int)plVar4[1];
        bVar9 = iVar7 == iVar5;
        if (bVar9) {
          *(int *)(plVar4 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar9);
      local_48 = *(undefined8 *)(param_1 + 0x90);
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      plStack_40 = plVar4;
      FUN_146a1e408();
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
    cVar6 = FUN_140b3f358();
    LOCK();
    *(char *)(param_1 + 0x138) = (cVar6 != '\0') * '\x03';
    UNLOCK();
    *(undefined2 *)(param_1 + 0x150) = *(undefined2 *)(param_2 + 0x30);
    FUN_14096c7c0(param_1 + 0x158,param_2 + 0x38);
    *(undefined2 *)(param_1 + 0x170) = *(undefined2 *)(param_2 + 0x48);
    FUN_14096c7c0(param_1 + 0x178,param_2 + 0x50);
    *(undefined2 *)(param_1 + 400) = *(undefined2 *)(param_2 + 0x60);
    FUN_14096c7c0(param_1 + 0x198,param_2 + 0x68);
    *(undefined1 *)(param_1 + 0x1aa) = 0;
    uVar3 = *(undefined1 *)(param_1 + 8);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e8));
    *(undefined1 *)(param_1 + 0x1ab) = uVar3;
    *(undefined1 *)(param_1 + 0x1ac) = 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e8));
    FUN_146a1eb4a(param_1);
    cVar6 = FUN_146a1f28c(param_1);
    if (cVar6 != '\0') {
      uVar8 = FUN_1401cb356();
      local_58 = FUN_146a1f28c;
      local_50 = (longlong *)((ulonglong)local_50 & 0xffffffff00000000);
      FUN_146a1f4ac(local_68,param_1,&local_58);
      local_78 = 0;
      FUN_1405f67fc(uVar8,&local_58,local_68,L"FSlateAsyncTaskNotificationImpl_TickNotification");
      if ((code **)(param_1 + 0x128) != &local_58) {
        *(code **)(param_1 + 0x128) = local_58;
        local_58 = (code *)0x0;
        plVar4 = *(longlong **)(param_1 + 0x130);
        *(longlong **)(param_1 + 0x130) = local_50;
        local_50 = (longlong *)0x0;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))();
          }
        }
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_50 + 0x10))();
        }
      }
      FUN_1449db362(local_68);
    }
  }
  FUN_14680e1f0(param_1,param_2);
  *(undefined1 *)(param_1 + 0x1a9) = 1;
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a1ea7e FUN_146a1ea7e body=204 status=ok
// SIG undefined FUN_146a1ea7e(void)

longlong * FUN_146a1ea7e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*param_1;
  if (plVar2 != plVar1) {
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  plVar1 = (longlong *)param_2[2];
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != plVar1) {
    param_1[2] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 3) = (int)param_2[3];
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x25);
  param_1[4] = param_2[4];
  *(undefined8 *)((longlong)param_1 + 0x25) = uVar3;
  *(short *)(param_1 + 6) = (short)param_2[6];
  FUN_14096c7c0(param_1 + 7,param_2 + 7);
  *(short *)(param_1 + 9) = (short)param_2[9];
  FUN_14096c7c0(param_1 + 10,param_2 + 10);
  *(short *)(param_1 + 0xc) = (short)param_2[0xc];
  FUN_14096c7c0(param_1 + 0xd,param_2 + 0xd);
  lVar4 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = lVar4;
  return param_1;
}



// FUNCTION 146a1eb4a FUN_146a1eb4a body=1856 status=ok
// SIG undefined FUN_146a1eb4a(void)

void FUN_146a1eb4a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_348 [32];
  undefined1 *local_328;
  undefined8 *local_320;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined1 local_2e0 [4];
  undefined1 local_2dc [4];
  longlong *local_2d8 [2];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  code *local_298;
  undefined4 local_290;
  undefined1 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  longlong *local_270;
  undefined4 local_268;
  undefined1 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  code *local_218;
  undefined8 local_210;
  undefined1 local_190 [96];
  longlong local_130;
  uint local_128;
  uint local_124;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined2 local_10c;
  undefined1 local_104;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_348;
  if (*(longlong *)(param_1 + 0x1b0) != 0) goto LAB_146a1eb81;
  uVar4 = FUN_140e82300();
  FUN_1469b1e6a(local_190,uVar4);
  local_114 = *(undefined4 *)(param_1 + 0xc4);
  local_110 = *(undefined4 *)(param_1 + 200);
  local_118 = *(undefined4 *)(param_1 + 0xc0);
  local_104 = 0;
  local_10c = 0x101;
  local_120 = *(undefined8 *)(param_1 + 0x118);
  local_218 = (code *)&LAB_146a1f828;
  local_210._0_4_ = 0;
  FUN_146a1f6a0(local_228,param_1,&local_218);
  local_218 = FUN_146a1f9bc;
  local_210._0_4_ = 0;
  FUN_146a1f834(local_238,param_1,&local_218);
  local_218 = (code *)&LAB_146a1fb80;
  local_210 = (longlong *)((ulonglong)local_210._4_4_ << 0x20);
  FUN_146a1f9f8(local_248,param_1,&local_218);
  plVar5 = (longlong *)FUN_140e82300();
  local_270 = (longlong *)*plVar5;
  if (local_270 != (longlong *)0x0) {
    (**(code **)(*local_270 + 8))();
  }
  local_268 = (undefined4)plVar5[1];
  local_260 = 1;
  local_258 = 0;
  uStack_250 = 0;
  local_298 = FUN_146a1fb8a;
  local_290 = 0;
  FUN_146a47e92(&local_218,param_1);
  FUN_144a5dc74(&local_298);
  local_288 = 1;
  local_280 = 0;
  uStack_278 = (ulonglong)uStack_278._4_4_ << 0x20;
  FUN_1413a4324(&local_280,&local_218);
  FUN_1449db362(&local_218);
  local_328 = local_238;
  local_320 = (undefined8 *)local_228;
  FUN_146a1fbbe(&local_218,&local_298,&local_270,local_248);
  FUN_1449db362(&local_280);
  if (local_298 != (code *)0x0) {
    (**(code **)(*(longlong *)local_298 + 0x10))();
  }
  FUN_1449db362(&local_258);
  if (local_270 != (longlong *)0x0) {
    (**(code **)(*local_270 + 0x10))();
  }
  uVar3 = local_128;
  lVar6 = (longlong)(int)local_128;
  local_128 = local_128 + 1;
  if (local_124 < local_128) {
    FUN_146a48f0e(&local_130,uVar3);
  }
  FUN_146a48e40(lVar6 * 0x88 + local_130,&local_218);
  FUN_1469b2152(&local_218);
  local_218 = (code *)&LAB_146a1fdc8;
  local_210 = (longlong *)((ulonglong)local_210 & 0xffffffff00000000);
  FUN_146a1f6a0(local_2a8,param_1,&local_218);
  local_218 = (code *)&LAB_146a1fde0;
  local_210 = (longlong *)((ulonglong)local_210 & 0xffffffff00000000);
  FUN_146a1f834(local_2b8,param_1,&local_218);
  local_218 = (code *)&LAB_146a1fe1c;
  local_210 = (longlong *)((ulonglong)local_210 & 0xffffffff00000000);
  FUN_146a1f9f8(local_2c8,param_1,&local_218);
  plVar5 = (longlong *)FUN_140e82300();
  local_270 = (longlong *)*plVar5;
  if (local_270 != (longlong *)0x0) {
    (**(code **)(*local_270 + 8))();
  }
  local_268 = (undefined4)plVar5[1];
  local_260 = 1;
  local_258 = 0;
  uStack_250 = 0;
  local_218 = (code *)0x149f06792;
  local_210._0_4_ = 0xc;
  FUN_1446e940c(local_2dc,&local_218);
  local_218 = (code *)0x149f067ac;
  local_210 = (longlong *)CONCAT44(local_210._4_4_,0x1a);
  FUN_1446e940c(local_2e0,&local_218);
  FUN_140208bae(local_2d8,local_2e0,local_2dc,L"Cancel");
  FUN_14023423e(&local_298,local_2d8);
  local_288 = 1;
  local_280 = 0;
  uStack_278 = 0;
  local_328 = local_2b8;
  local_320 = (undefined8 *)local_2a8;
  FUN_146a1fbbe(&local_218,&local_298,&local_270,local_2c8);
  FUN_1449db362(&local_280);
  if (local_298 != (code *)0x0) {
    (**(code **)(*(longlong *)local_298 + 0x10))();
  }
  if (local_2d8[0] != (longlong *)0x0) {
    (**(code **)(*local_2d8[0] + 0x10))();
  }
  FUN_1449db362(&local_258);
  if (local_270 != (longlong *)0x0) {
    (**(code **)(*local_270 + 0x10))();
  }
  uVar3 = local_128;
  lVar6 = (longlong)(int)local_128;
  local_128 = local_128 + 1;
  if (local_124 < local_128) {
    FUN_146a48f0e(&local_130,uVar3);
  }
  FUN_146a48e40(lVar6 * 0x88 + local_130,&local_218);
  FUN_1469b2152(&local_218);
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_218 = FUN_146a1fe26;
  local_210 = (longlong *)((ulonglong)local_210 & 0xffffffff00000000);
  FUN_146a1f834(local_308,param_1,&local_218);
  local_218 = FUN_146a1fe80;
  local_210 = (longlong *)((ulonglong)local_210 & 0xffffffff00000000);
  FUN_146a1f9f8(local_318,param_1,&local_218);
  plVar5 = (longlong *)FUN_140e82300();
  local_270 = (longlong *)*plVar5;
  if (local_270 != (longlong *)0x0) {
    (**(code **)(*local_270 + 8))();
  }
  local_268 = (undefined4)plVar5[1];
  local_260 = 1;
  local_258 = 0;
  uStack_250 = 0;
  local_218 = (code *)0x149f067e2;
  local_210._0_4_ = 0xb;
  FUN_1446e940c(local_2dc,&local_218);
  local_218 = (code *)0x149f067ac;
  local_210 = (longlong *)CONCAT44(local_210._4_4_,0x1a);
  FUN_1446e940c(local_2e0,&local_218);
  FUN_140208bae(local_2d8,local_2e0,local_2dc,L"Close");
  FUN_14023423e(&local_298,local_2d8);
  local_288 = 1;
  local_280 = 0;
  uStack_278 = 0;
  local_320 = &local_2f8;
  local_328 = local_308;
  FUN_146a1fbbe(&local_218,&local_298,&local_270,local_318);
  FUN_1449db362(&local_280);
  if (local_298 != (code *)0x0) {
    (**(code **)(*(longlong *)local_298 + 0x10))();
  }
  if (local_2d8[0] != (longlong *)0x0) {
    (**(code **)(*local_2d8[0] + 0x10))();
  }
  FUN_1449db362(&local_258);
  if (local_270 != (longlong *)0x0) {
    (**(code **)(*local_270 + 0x10))();
  }
  uVar3 = local_128;
  lVar6 = (longlong)(int)local_128;
  local_128 = local_128 + 1;
  if (local_124 < local_128) {
    FUN_146a48f0e(&local_130,uVar3);
  }
  FUN_146a48e40(lVar6 * 0x88 + local_130,&local_218);
  FUN_1469b2152(&local_218);
  FUN_1413f66b6();
  FUN_146a1e072(&DAT_14c98eb70,&local_218,local_190);
  plVar1 = local_210;
  *(code **)(param_1 + 0x1b0) = local_218;
  local_218 = (code *)0x0;
  plVar5 = *(longlong **)(param_1 + 0x1b8);
  if (local_210 == plVar5) {
LAB_146a1f216:
    plVar5 = local_210;
    if (local_210 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_210 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_210)(local_210);
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
  else {
    local_210 = (longlong *)0x0;
    *(longlong **)(param_1 + 0x1b8) = plVar1;
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
      goto LAB_146a1f216;
    }
  }
  FUN_1469b2018(local_190);
LAB_146a1eb81:
  if ((local_60 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a1f28c FUN_146a1f28c body=543 status=ok
// SIG undefined FUN_146a1f28c(void)

ulonglong FUN_146a1f28c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  longlong *plVar7;
  ulonglong uVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146a20020();
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1e8);
  EnterCriticalSection(lpCriticalSection);
  if (*(char *)(param_1 + 0x1ac) == '\0') {
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
    cVar4 = *(char *)(param_1 + 0x1ab);
    *(undefined1 *)(param_1 + 0x1ac) = 0;
    LeaveCriticalSection(lpCriticalSection);
    if (*(char *)(param_1 + 0x1aa) != cVar4) {
      *(char *)(param_1 + 0x1aa) = cVar4;
      plVar7 = *(longlong **)(param_1 + 0x1b0);
      if (plVar7 != (longlong *)0x0) {
        lpCriticalSection = (LPCRITICAL_SECTION)0x0;
        switch(cVar4) {
        case '\x01':
          lpCriticalSection = (LPCRITICAL_SECTION)&DAT_00000001;
          break;
        case '\x02':
          lpCriticalSection = (LPCRITICAL_SECTION)0x2;
          break;
        case '\x03':
          lpCriticalSection = (LPCRITICAL_SECTION)&DAT_00000003;
          break;
        case '\x04':
          local_30 = 0;
          uStack_2c = 0;
          uStack_28 = 0x3f800000;
          uStack_24 = 0x3f800000;
          (**(code **)(*plVar7 + 0x290))();
          plVar7 = *(longlong **)(param_1 + 0x1b0);
        }
        (**(code **)(*plVar7 + 0x278))(plVar7,lpCriticalSection);
      }
      cVar4 = FUN_140b3f358();
      LOCK();
      *(char *)(param_1 + 0x138) = (cVar4 != '\0') * '\x03';
      UNLOCK();
    }
  }
  if (*(longlong **)(param_1 + 0x1b0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x270))();
  }
  uVar8 = CONCAT71((int7)((ulonglong)lpCriticalSection >> 8),1);
  if ((*(byte *)(param_1 + 0x1aa) & 0xfe) == 2) {
    cVar4 = FUN_140b3f358();
    if ((cVar4 == '\0') &&
       (((*(char *)(param_1 + 0x188) == '\x01' && (*(char *)(param_1 + 0x1aa) == '\x02')) ||
        ((*(char *)(param_1 + 0x1a8) == '\x01' && (*(char *)(param_1 + 0x1aa) == '\x03')))))) {
      pcVar6 = &DAT_14c96b238;
    }
    else {
      pcVar6 = &DAT_14c96b1e1;
    }
    if (*pcVar6 == DAT_14c96b1e1) {
      FUN_146a1f634(param_1);
      plVar7 = *(longlong **)(param_1 + 0x130);
      *(undefined8 *)(param_1 + 0x128) = 0;
      *(undefined8 *)(param_1 + 0x130) = 0;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
      }
      FUN_1413f66b6();
      plVar7 = *(longlong **)(param_1 + 0x98);
      if (plVar7 == (longlong *)0x0) {
LAB_146a1f449:
        local_48 = 0;
        plStack_40 = (longlong *)0x0;
        FUN_146a1e4a6();
      }
      else {
        iVar5 = (int)plVar7[1];
        do {
          if (iVar5 == 0) goto LAB_146a1f449;
          LOCK();
          iVar3 = (int)plVar7[1];
          bVar9 = iVar5 == iVar3;
          if (bVar9) {
            *(int *)(plVar7 + 1) = iVar5 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
          UNLOCK();
        } while (!bVar9);
        local_48 = *(undefined8 *)(param_1 + 0x90);
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        plStack_40 = plVar7;
        FUN_146a1e4a6();
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
      uVar8 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 146a1f4ac FUN_146a1f4ac body=392 status=ok
// SIG undefined FUN_146a1f4ac(void)

longlong * FUN_146a1f4ac(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  plVar6 = *(longlong **)(param_2 + 0x98);
  if (plVar6 == (longlong *)0x0) {
LAB_146a1f5c3:
    *puVar5 = &PTR_LAB_149e02020;
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
    *puVar5 = &PTR_FUN_149f0db90;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146a1f5c3;
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
    uVar7 = *(undefined8 *)(param_2 + 0x90);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e02020;
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
    *puVar5 = &PTR_FUN_149f0db90;
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



// FUNCTION 146a1f634 FUN_146a1f634 body=108 status=ok
// SIG undefined FUN_146a1f634(void)

void FUN_146a1f634(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong **)(param_1 + 0x1b0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x280))();
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    plVar3 = *(longlong **)(param_1 + 0x1b8);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x1b8) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000146a1f694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 146a1f6a0 FUN_146a1f6a0 body=392 status=ok
// SIG undefined FUN_146a1f6a0(void)

longlong * FUN_146a1f6a0(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  plVar6 = *(longlong **)(param_2 + 0x98);
  if (plVar6 == (longlong *)0x0) {
LAB_146a1f7b7:
    *puVar5 = &PTR_LAB_149f0de30;
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
    *puVar5 = &PTR_FUN_149f0ddc0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146a1f7b7;
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
    uVar7 = *(undefined8 *)(param_2 + 0x90);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f0de30;
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
    *puVar5 = &PTR_FUN_149f0ddc0;
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



// FUNCTION 146a1f834 FUN_146a1f834 body=392 status=ok
// SIG undefined FUN_146a1f834(void)

longlong * FUN_146a1f834(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  plVar6 = *(longlong **)(param_2 + 0x98);
  if (plVar6 == (longlong *)0x0) {
LAB_146a1f94b:
    *puVar5 = &PTR_LAB_149f0dd50;
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
    *puVar5 = &PTR_FUN_149f0dce0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146a1f94b;
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
    uVar7 = *(undefined8 *)(param_2 + 0x90);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f0dd50;
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
    *puVar5 = &PTR_FUN_149f0dce0;
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



// FUNCTION 146a1f9bc FUN_146a1f9bc body=60 status=ok
// SIG undefined FUN_146a1f9bc(void)

undefined1 * FUN_146a1f9bc(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  
  cVar1 = FUN_140b3f358();
  if ((cVar1 == '\0') && (*(char *)(param_1 + 0x1aa) == '\x04')) {
    puVar2 = &DAT_14c96b238;
  }
  else {
    puVar2 = &DAT_14c96b1e1;
  }
  *param_2 = *puVar2;
  return param_2;
}



// FUNCTION 146a1f9f8 FUN_146a1f9f8 body=392 status=ok
// SIG undefined FUN_146a1f9f8(void)

longlong * FUN_146a1f9f8(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  plVar6 = *(longlong **)(param_2 + 0x98);
  if (plVar6 == (longlong *)0x0) {
LAB_146a1fb0f:
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_149f0dc70;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146a1fb0f;
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
    uVar7 = *(undefined8 *)(param_2 + 0x90);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_149f0dc70;
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



// FUNCTION 146a1fb8a FUN_146a1fb8a body=52 status=ok
// SIG undefined FUN_146a1fb8a(void)

longlong * FUN_146a1fb8a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x140);
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x148);
  return param_2;
}



// FUNCTION 146a1fbbe FUN_146a1fbbe body=521 status=ok
// SIG undefined FUN_146a1fbbe(void)

longlong *
FUN_146a1fbbe(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5,longlong *param_6)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  
  plVar1 = (longlong *)*param_2;
  *param_1 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(char *)(param_1 + 2) = (char)param_2[2];
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_1413a4324(param_1 + 3,param_2 + 3);
  plVar1 = (longlong *)*param_3;
  param_1[5] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 6) = (int)param_3[1];
  *(char *)(param_1 + 7) = (char)param_3[2];
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1413a4324(param_1 + 8,param_3 + 3);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[10] = *param_4;
  *param_4 = 0;
  *(int *)(param_1 + 0xb) = (int)param_4[1];
  *(undefined4 *)(param_4 + 1) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xc] = *param_5;
  *param_5 = 0;
  *(int *)(param_1 + 0xd) = (int)param_5[1];
  *(undefined4 *)(param_5 + 1) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0xe] = *param_6;
  *param_6 = 0;
  *(int *)(param_1 + 0xf) = (int)param_6[1];
  *(undefined4 *)(param_6 + 1) = 0;
  iVar3 = (int)param_1[0xd];
  uVar4 = DAT_14c96b238;
  if ((iVar3 != 0) && ((longlong *)param_1[0xc] != (longlong *)0x0)) {
    cVar2 = (**(code **)(*(longlong *)param_1[0xc] + 0x30))();
    uVar4 = DAT_14c96b1e1;
    if (cVar2 == '\0') {
      uVar4 = DAT_14c96b238;
    }
    iVar3 = (int)param_1[0xd];
  }
  uVar5 = DAT_14c96b238;
  *(undefined1 *)(param_1 + 0x10) = uVar4;
  if ((iVar3 == 0) || ((longlong *)param_1[0xc] == (longlong *)0x0)) {
    *(undefined1 *)((longlong)param_1 + 0x81) = uVar5;
  }
  else {
    cVar2 = (**(code **)(*(longlong *)param_1[0xc] + 0x30))();
    uVar5 = DAT_14c96b238;
    uVar4 = DAT_14c96b1e1;
    if (cVar2 == '\0') {
      uVar4 = DAT_14c96b238;
    }
    *(undefined1 *)((longlong)param_1 + 0x81) = uVar4;
    if (((int)param_1[0xd] != 0) && ((longlong *)param_1[0xc] != (longlong *)0x0)) {
      cVar2 = (**(code **)(*(longlong *)param_1[0xc] + 0x30))();
      uVar5 = DAT_14c96b238;
      uVar4 = DAT_14c96b1e1;
      if (cVar2 == '\0') {
        uVar4 = DAT_14c96b238;
      }
      *(undefined1 *)((longlong)param_1 + 0x82) = uVar4;
      if (((int)param_1[0xd] != 0) && ((longlong *)param_1[0xc] != (longlong *)0x0)) {
        cVar2 = (**(code **)(*(longlong *)param_1[0xc] + 0x30))();
        puVar6 = &DAT_14c96b238;
        if (cVar2 != '\0') {
          puVar6 = &DAT_14c96b1e1;
        }
        uVar5 = *puVar6;
      }
      goto LAB_146a1fd98;
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x82) = uVar5;
LAB_146a1fd98:
  *(undefined1 *)((longlong)param_1 + 0x83) = uVar5;
  FUN_1449db362(param_4);
  FUN_1449db362(param_5);
  FUN_1449db362(param_6);
  return param_1;
}



// FUNCTION 146a1fe26 FUN_146a1fe26 body=89 status=ok
// SIG undefined FUN_146a1fe26(void)

undefined1 * FUN_146a1fe26(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  
  cVar1 = FUN_140b3f358();
  if ((cVar1 == '\0') &&
     (((*(char *)(param_1 + 0x188) == '\x01' && (*(char *)(param_1 + 0x1aa) == '\x02')) ||
      ((*(char *)(param_1 + 0x1a8) == '\x01' && (*(char *)(param_1 + 0x1aa) == '\x03')))))) {
    puVar2 = &DAT_14c96b238;
  }
  else {
    puVar2 = &DAT_14c96b1e1;
  }
  *param_2 = *puVar2;
  return param_2;
}



// FUNCTION 146a1fe80 FUN_146a1fe80 body=415 status=ok
// SIG undefined FUN_146a1fe80(void)

void FUN_146a1fe80(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x1b0);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 600))(plVar3,0);
    (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x268))
              (*(longlong **)(param_1 + 0x1b0),0x3f000000);
    (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x280))();
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    plVar3 = *(longlong **)(param_1 + 0x1b8);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x1b8) = 0;
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
    if (((*(longlong *)(param_1 + 0x128) != 0) && (*(longlong *)(param_1 + 0x130) != 0)) &&
       (0 < *(int *)(*(longlong *)(param_1 + 0x130) + 8))) {
      FUN_1401cb356();
      local_28 = *(undefined8 *)(param_1 + 0x128);
      local_20 = *(longlong *)(param_1 + 0x130);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
        UNLOCK();
      }
      FUN_140d61352(&local_28);
      plVar3 = *(longlong **)(param_1 + 0x130);
      *(undefined8 *)(param_1 + 0x128) = 0;
      *(undefined8 *)(param_1 + 0x130) = 0;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
    }
    FUN_1413f66b6();
    plVar3 = *(longlong **)(param_1 + 0x98);
    if (plVar3 == (longlong *)0x0) {
LAB_146a1ffb4:
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
      FUN_146a1e4a6();
    }
    else {
      iVar5 = (int)plVar3[1];
      do {
        if (iVar5 == 0) goto LAB_146a1ffb4;
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
      local_38 = *(undefined8 *)(param_1 + 0x90);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      plStack_30 = plVar3;
      FUN_146a1e4a6();
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
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a20020 FUN_146a20020 body=163 status=ok
// SIG undefined FUN_146a20020(void)

void FUN_146a20020(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [37];
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
  local_21 = 0;
  puVar1 = (undefined1 *)FUN_1410f0184(param_1 + 0x150);
  *(undefined1 *)(param_1 + 0x168) = *puVar1;
  local_22 = 0;
  puVar1 = (undefined1 *)FUN_1410f0184(param_1 + 0x170);
  *(undefined1 *)(param_1 + 0x188) = *puVar1;
  local_23 = 0;
  puVar1 = (undefined1 *)FUN_1410f0184(param_1 + 400);
  *(undefined1 *)(param_1 + 0x1a8) = *puVar1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a200c4 FUN_146a200c4 body=95 status=ok
// SIG undefined FUN_146a200c4(void)

void FUN_146a200c4(longlong param_1,undefined2 *param_2)

{
  if (*(char *)(param_1 + 0xcc) != '\0') {
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
  *(undefined2 *)(param_1 + 0x150) = *param_2;
  FUN_14096c7c0(param_1 + 0x158,param_2 + 4);
                    /* WARNING: Could not recover jumptable at 0x000146a2011c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
  return;
}



// FUNCTION 146a20124 FUN_146a20124 body=95 status=ok
// SIG undefined FUN_146a20124(void)

void FUN_146a20124(longlong param_1,undefined2 *param_2)

{
  if (*(char *)(param_1 + 0xcc) != '\0') {
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
  *(undefined2 *)(param_1 + 0x170) = *param_2;
  FUN_14096c7c0(param_1 + 0x178,param_2 + 4);
                    /* WARNING: Could not recover jumptable at 0x000146a2017c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
  return;
}



// FUNCTION 146a20184 FUN_146a20184 body=95 status=ok
// SIG undefined FUN_146a20184(void)

void FUN_146a20184(longlong param_1,undefined2 *param_2)

{
  if (*(char *)(param_1 + 0xcc) != '\0') {
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
  *(undefined2 *)(param_1 + 400) = *param_2;
  FUN_14096c7c0(param_1 + 0x198,param_2 + 4);
                    /* WARNING: Could not recover jumptable at 0x000146a201dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c0));
  return;
}



// FUNCTION 146a201e4 FUN_146a201e4 body=835 status=ok
// SIG undefined FUN_146a201e4(void)

void FUN_146a201e4(longlong param_1)

{
  int *piVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_138 [32];
  longlong **local_118;
  longlong **local_110;
  undefined8 *local_108;
  longlong **local_100;
  undefined8 local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  undefined4 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong *local_88;
  undefined4 local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 *local_68;
  undefined4 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_14680e800();
  if (*(char *)(param_1 + 0xcc) == '\0') {
    if (*(longlong *)(param_1 + 0x1b0) != 0) {
      if (*(char *)(param_1 + 0x1a9) == '\x01') {
        local_f0 = FUN_1401cb356();
        local_100 = (longlong **)(param_1 + 0x50);
        local_108 = (undefined8 *)(param_1 + 0x40);
        local_110 = (longlong **)(param_1 + 0x30);
        local_118 = (longlong **)(param_1 + 0x20);
        local_78 = *(undefined8 *)(param_1 + 0x90);
        local_70 = *(longlong **)(param_1 + 0x98);
        if (local_70 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)local_70 + 0xc) = *(int *)((longlong)local_70 + 0xc) + 1;
          UNLOCK();
        }
        local_68 = (undefined8 *)0x0;
        local_60 = 0;
        FUN_1446efa72(&local_68,0,9,0x10);
        puVar3 = local_68;
        local_60 = 9;
        *local_68 = &PTR_LAB_149f0df10;
        FUN_146a49316(local_68 + 1,&local_78,param_1 + 0x1b0,param_1 + 0x10);
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
        puVar3[0xf] = lVar5;
        *puVar3 = &PTR_FUN_149f0dea0;
        puVar3[0x10] = FUN_146a20528;
        local_118 = (longlong **)((ulonglong)local_118 & 0xffffffff00000000);
        FUN_1405f67fc(local_f0,local_58,&local_68,
                      L"FSlateAsyncTaskNotificationImpl_UpdateNotificationDeferred");
        if (local_50 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_50 + 0x10))();
          }
        }
        FUN_1449db362(&local_68);
        if (local_70 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_70 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_70 + 0x10))();
          }
        }
      }
      else {
        local_88 = *(longlong **)(param_1 + 0x50);
        if (local_88 != (longlong *)0x0) {
          (**(code **)(*local_88 + 8))();
        }
        local_80 = *(undefined4 *)(param_1 + 0x58);
        local_98 = 0;
        local_90 = 0;
        FUN_14009d848(&local_98,param_1 + 0x40);
        local_a8 = *(longlong **)(param_1 + 0x30);
        if (local_a8 != (longlong *)0x0) {
          (**(code **)(*local_a8 + 8))();
        }
        local_a0 = *(undefined4 *)(param_1 + 0x38);
        local_b8 = *(longlong **)(param_1 + 0x20);
        if (local_b8 != (longlong *)0x0) {
          (**(code **)(*local_b8 + 8))();
        }
        local_b0 = *(undefined4 *)(param_1 + 0x28);
        local_c8 = *(longlong **)(param_1 + 0x10);
        if (local_c8 != (longlong *)0x0) {
          (**(code **)(*local_c8 + 8))();
        }
        local_c0 = *(undefined4 *)(param_1 + 0x18);
        local_d8 = *(undefined8 *)(param_1 + 0x1b0);
        local_d0 = *(longlong *)(param_1 + 0x1b8);
        if (local_d0 != 0) {
          LOCK();
          *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
          UNLOCK();
        }
        local_e8 = *(undefined8 *)(param_1 + 0x90);
        local_e0 = *(longlong *)(param_1 + 0x98);
        if (local_e0 != 0) {
          LOCK();
          *(int *)(local_e0 + 0xc) = *(int *)(local_e0 + 0xc) + 1;
          UNLOCK();
        }
        local_100 = &local_88;
        local_110 = &local_a8;
        local_118 = &local_b8;
        local_108 = &local_98;
        FUN_146a20528();
      }
    }
    uVar2 = *(undefined1 *)(param_1 + 8);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e8));
    *(undefined1 *)(param_1 + 0x1ab) = uVar2;
    *(undefined1 *)(param_1 + 0x1ac) = 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e8));
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a20528 FUN_146a20528 body=661 status=ok
// SIG undefined FUN_146a20528(void)

undefined8
FUN_146a20528(undefined8 param_1,longlong *param_2,undefined8 *param_3,longlong *param_4,
             longlong *param_5,longlong *param_6,undefined8 param_7,longlong *param_8)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined4 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = (longlong *)*param_3;
  local_70 = (longlong *)*param_4;
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 8))();
  }
  local_68 = (undefined4)param_4[1];
  local_60 = 1;
  local_58 = 0;
  uStack_50 = 0;
  (**(code **)(*plVar2 + 0x240))(plVar2,&local_70);
  FUN_1449db362(&local_58);
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 0x10))();
  }
  plVar2 = (longlong *)*param_3;
  local_70 = (longlong *)*param_5;
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 8))();
  }
  local_68 = (undefined4)param_5[1];
  local_60 = 1;
  local_58 = 0;
  uStack_50 = 0;
  (**(code **)(*plVar2 + 0x248))(plVar2,&local_70);
  FUN_1449db362(&local_58);
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 0x10))();
  }
  plVar2 = (longlong *)*param_3;
  local_70 = (longlong *)*param_8;
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 8))();
  }
  local_68 = (undefined4)param_8[1];
  local_60 = 1;
  local_58 = 0;
  uStack_50 = 0;
  (**(code **)(*plVar2 + 0x250))(plVar2,param_7,&local_70);
  FUN_1449db362(&local_58);
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 0x10))();
  }
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    iVar7 = (int)plVar2[1];
    do {
      if (iVar7 == 0) goto LAB_146a2070f;
      LOCK();
      iVar6 = (int)plVar2[1];
      bVar8 = iVar7 == iVar6;
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar8);
    lVar3 = *param_2;
    if (lVar3 != 0) {
      plVar4 = (longlong *)*param_6;
      plVar5 = *(longlong **)(lVar3 + 0x140);
      if (plVar5 != plVar4) {
        *(longlong **)(lVar3 + 0x140) = plVar4;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      *(int *)(lVar3 + 0x148) = (int)param_6[1];
    }
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
LAB_146a2070f:
    plVar2 = (longlong *)param_2[1];
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
  plVar2 = (longlong *)param_3[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((longlong *)*param_4 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_4 + 0x10))();
  }
  if ((longlong *)*param_5 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_5 + 0x10))();
  }
  if ((longlong *)*param_6 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_6 + 0x10))();
  }
  FUN_1449db362(param_7);
  if ((longlong *)*param_8 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_8 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 146a207fc FUN_146a207fc body=20 status=ok
// SIG undefined FUN_146a207fc(void)

void FUN_146a207fc(longlong param_1,undefined2 *param_2)

{
  *(undefined2 *)(param_1 + 0x10) = *param_2;
  FUN_14096c7c0(param_1 + 0x18,param_2 + 4);
  return;
}



// FUNCTION 146a2081c FUN_146a2081c body=365 status=ok
// SIG undefined FUN_146a2081c(void)

undefined8 *
FUN_146a2081c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = FUN_14001cc68(0x60,0x10);
  local_48 = *param_4;
  *param_4 = 0;
  local_40 = (undefined4)param_4[1];
  local_3c = *(undefined4 *)((longlong)param_4 + 0xc);
  param_4[1] = 0;
  local_58 = *param_3;
  local_50 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  local_68 = *param_2;
  local_60 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  local_78 = param_5;
  FUN_146a2098a(uVar4);
  *param_1 = uVar4;
  puVar5 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar5[1] = &DAT_100000001;
  *puVar5 = &PTR_LAB_149f0dfa0;
  puVar5[2] = uVar4;
  param_1[1] = puVar5;
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
  plVar3 = (longlong *)param_3[1];
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
  FUN_146a497c9(*param_4,(int)param_4[1]);
  if (*param_4 != 0) {
    FUN_1400020a8();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98);
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146a2098a FUN_146a2098a body=243 status=ok
// SIG undefined FUN_146a2098a(void)

undefined8 *
FUN_146a2098a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_149f09210;
  param_1[2] = *param_2;
  param_1[3] = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  param_1[4] = *param_3;
  param_1[5] = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  param_1[6] = 0;
  param_1[6] = *param_4;
  *param_4 = 0;
  *(int *)(param_1 + 7) = (int)param_4[1];
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_4 + 0xc);
  param_4[1] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = param_5;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
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
  plVar3 = (longlong *)param_3[1];
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
  FUN_146a497c9(*param_4,(int)param_4[1]);
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 146a20a7e FUN_146a20a7e body=162 status=ok
// SIG undefined FUN_146a20a7e(void)

void FUN_146a20a7e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f09210;
  FUN_146a497c9(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_146a497c9(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[5];
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
  plVar3 = (longlong *)param_1[3];
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
                    /* WARNING: Could not recover jumptable at 0x000146a20b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146a20b20 FUN_146a20b20 body=1092 status=ok
// SIG undefined FUN_146a20b20(void)

void FUN_146a20b20(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  undefined8 **local_1d0;
  longlong local_1c8;
  undefined8 *local_1c0;
  longlong *local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  longlong local_198;
  longlong *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 *local_178;
  longlong *local_170;
  longlong local_168;
  ulonglong uStack_160;
  longlong local_158;
  undefined8 uStack_150;
  longlong local_148 [3];
  ulonglong uStack_130;
  undefined8 *local_128;
  longlong *local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_148[2] = 0;
  uStack_130 = 0;
  local_148[0] = 0;
  local_148[1] = 0;
  (**(code **)(*(longlong *)param_1[2] + 8))((longlong *)param_1[2],local_148 + 2,param_2);
  local_158 = 0;
  uStack_150 = 0;
  if ((int)uStack_130 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uStack_130 & 0xffffffff);
  }
  bVar4 = false;
  local_198 = param_3;
  local_190 = param_1;
  if ((uStack_130 & 0xffffffff) != 0) {
    FUN_1410f02c6(&local_158);
    bVar4 = 0 < (int)uStack_130;
  }
  plVar6 = local_190;
  lVar5 = local_198;
  local_168 = 0;
  uStack_160 = 0;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  if (bVar4) {
    lVar3 = local_198 + 0x160;
    uVar13 = 0;
    do {
      lVar12 = local_148[2];
      puVar10 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar10 = 0;
      puVar10[1] = 0;
      local_178 = puVar10;
      local_170 = (longlong *)FUN_14001cc68(0x18,0x10);
      local_170[1] = (longlong)&DAT_100000001;
      *local_170 = (longlong)&PTR_FUN_149f0ebe0;
      local_170[2] = (longlong)puVar10;
      local_188 = 0;
      uStack_180 = 0;
      lVar11 = (longlong)*(int *)(lVar12 + 0x10 + uVar13 * 0x18);
      if (lVar11 != 0) {
        lVar12 = *(longlong *)(lVar12 + 8 + uVar13 * 0x18);
        lVar11 = lVar11 * 0x70;
        do {
          local_1a8 = &local_108;
          local_1b0 = &local_b8;
          local_1b8 = &local_168;
          local_1c8 = lVar5;
          local_1d8 = lVar3;
          local_1d0 = &local_178;
          local_1c0 = &local_188;
          (**(code **)(*plVar6 + 0x38))(plVar6,uVar13 & 0xffffffff,lVar12,local_148);
          lVar12 = lVar12 + 0x70;
          lVar11 = lVar11 + -0x70;
        } while (lVar11 != 0);
      }
      uVar8 = uStack_150;
      lVar12 = (longlong)(int)uStack_150;
      uVar9 = (int)uStack_150 + 1;
      uStack_150 = CONCAT44(uStack_150._4_4_,uVar9);
      if (uStack_150._4_4_ < uVar9) {
        FUN_146a49744(&local_158,uVar8 & 0xffffffff);
      }
      local_118 = (undefined4)local_188;
      uStack_114 = local_188._4_4_;
      uStack_110 = (undefined4)uStack_180;
      uStack_10c = uStack_180._4_4_;
      local_188 = 0;
      uStack_180 = 0;
      local_128 = local_178;
      local_120 = local_170;
      if (local_170 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_170 + 1) = (int)local_170[1] + 1;
        UNLOCK();
      }
      FUN_1410f0234(local_158 + lVar12 * 0x20,&local_128,&local_118);
      FUN_1410f0078(local_188,uStack_180 & 0xffffffff);
      if (local_188 != 0) {
        FUN_1400020a8();
      }
      plVar7 = local_170;
      if (local_170 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_170 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_170)(local_170);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      uVar13 = uVar13 + 1;
    } while ((longlong)uVar13 < (longlong)(int)uStack_130);
  }
  lVar5 = local_198;
  FUN_1410f07dc(local_198,&local_158);
  FUN_1410f00c6(lVar5,&local_168);
  local_c0 = 0;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_146a260de(&local_108);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_146a26298(&local_b8);
  FUN_1410f0dc1(local_168,uStack_160 & 0xffffffff);
  if (local_168 != 0) {
    FUN_1400020a8();
  }
  FUN_1410f01cf(local_158,uStack_150 & 0xffffffff);
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  if (local_148[0] != 0) {
    FUN_1400020a8();
  }
  FUN_146a49847(local_148[2],uStack_130 & 0xffffffff);
  if (local_148[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a20f66 FUN_146a20f66 body=847 status=ok
// SIG undefined FUN_146a20f66(void)

/* WARNING: Removing unreachable block (ram,0x000146a2117f) */

void FUN_146a20f66(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  void *_Src;
  ulonglong uVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_168 [40];
  longlong local_140;
  undefined8 local_138;
  longlong local_130;
  longlong *local_128;
  longlong *local_120;
  void *local_118;
  undefined8 uStack_110;
  void *local_108;
  ulonglong uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [80];
  void *local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_e8 = 0;
  uStack_e0 = 0;
  iVar8 = *(int *)(param_3 + 0x28);
  local_140 = param_1;
  local_138 = param_2;
  if (iVar8 < 0) {
LAB_146a212ae:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8);
  }
  if (iVar8 != 0) {
    FUN_146a498b8(&local_e8);
    if ((longlong)*(int *)(param_3 + 0x28) != 0) {
      lVar12 = *(longlong *)(param_3 + 0x20);
      local_130 = (longlong)*(int *)(param_3 + 0x28) * 0x70 + lVar12;
      do {
        local_f8 = 0;
        uStack_f0 = 0;
        iVar8 = *(int *)(lVar12 + 0x30);
        if (iVar8 < 0) goto LAB_146a212ae;
        if (iVar8 != 0) {
          FUN_146a4990e(&local_f8);
          if ((longlong)*(int *)(lVar12 + 0x30) != 0) {
            lVar9 = *(longlong *)(lVar12 + 0x28);
            lVar10 = (longlong)*(int *)(lVar12 + 0x30) * 0x30;
            do {
              local_108 = (void *)0x0;
              uStack_100 = 0;
              FUN_146a52f1e(lVar9,&local_108);
              _Src = local_108;
              local_118 = (void *)0x0;
              lVar11 = (longlong)(int)uStack_100;
              uStack_110 = CONCAT44(uStack_110._4_4_,(int)uStack_100);
              if (lVar11 == 0) {
                uStack_110 = uStack_100 & 0xffffffff;
              }
              else {
                FUN_1446dd670(&local_118,uStack_100 & 0xffffffff,0);
                memcpy(local_118,_Src,lVar11 * 2);
              }
              FUN_146a4daba(lVar9,&local_128);
              uVar7 = (**(code **)(*local_128 + 0x80))();
              FUN_14058ac20(&local_d0,uVar7);
              uVar5 = uStack_f0;
              local_70 = local_118;
              uStack_68._0_4_ = (undefined4)uStack_110;
              uStack_68._4_4_ = uStack_110._4_4_;
              local_118 = (void *)0x0;
              uStack_110 = 0;
              lVar11 = (longlong)(int)uStack_f0;
              uVar6 = (int)uStack_f0 + 1;
              uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar6);
              if (uStack_f0._4_4_ < uVar6) {
                FUN_146a49972(&local_f8,uVar5 & 0xffffffff);
              }
              puVar3 = (undefined8 *)(local_f8 + lVar11 * 0x70);
              *puVar3 = 0;
              *puVar3 = local_d0;
              local_d0 = 0;
              *(undefined4 *)(puVar3 + 1) = (undefined4)local_c8;
              *(undefined4 *)((longlong)puVar3 + 0xc) = local_c8._4_4_;
              local_c8 = 0;
              FUN_145936eee(puVar3 + 2,local_c0);
              puVar3[0xc] = 0;
              puVar3[0xc] = local_70;
              *(undefined4 *)(puVar3 + 0xd) = (undefined4)uStack_68;
              *(undefined4 *)((longlong)puVar3 + 0x6c) = uStack_68._4_4_;
              uStack_68 = 0;
              local_70 = (void *)0x0;
              FUN_141720dbc(&local_d0);
              plVar4 = local_120;
              if (local_120 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_120 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_120)(local_120);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar4 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar4 + 0x10))(plVar4);
                  }
                }
              }
              if (local_108 != (void *)0x0) {
                FUN_1400020a8();
              }
              lVar9 = lVar9 + 0x30;
              lVar10 = lVar10 + -0x30;
            } while (lVar10 != 0);
          }
        }
        uVar5 = uStack_e0;
        lVar9 = (longlong)(int)uStack_e0;
        uVar6 = (int)uStack_e0 + 1;
        uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar6);
        if (uStack_e0._4_4_ < uVar6) {
          FUN_146a49a50(&local_e8,uVar5 & 0xffffffff);
        }
        FUN_146a49a02(lVar9 * 0x10 + local_e8,&local_f8);
        FUN_146a26452(local_f8,uStack_f0 & 0xffffffff);
        if (local_f8 != 0) {
          FUN_1400020a8();
        }
        lVar12 = lVar12 + 0x70;
      } while (lVar12 != local_130);
    }
  }
  (**(code **)(**(longlong **)(local_140 + 0x20) + 8))
            (*(longlong **)(local_140 + 0x20),&local_e8,local_138);
  FUN_146a49881(local_e8,uStack_e0 & 0xffffffff);
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a212b8 FUN_146a212b8 body=215 status=ok
// SIG undefined FUN_146a212b8(void)

undefined8 * FUN_146a212b8(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98ed40) {
    FUN_144b3d300(&DAT_14c98ed40);
    if (DAT_14c98ed40 == -1) {
      uVar3 = FUN_14001cc68(0x38,0x10);
      FUN_146a222fa(uVar3);
      DAT_14c98ed30 = uVar3;
      DAT_14c98ed38 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      DAT_14c98ed38[1] = &DAT_100000001;
      *DAT_14c98ed38 = &PTR_LAB_149f0dfc0;
      DAT_14c98ed38[2] = uVar3;
      atexit(FUN_1428fd817);
      _Init_thread_footer(&DAT_14c98ed40);
    }
  }
  *param_1 = DAT_14c98ed30;
  puVar2 = DAT_14c98ed38;
  param_1[1] = DAT_14c98ed38;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 146a21390 FUN_146a21390 body=97 status=ok
// SIG undefined FUN_146a21390(void)

undefined8 * FUN_146a21390(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_149f095b8;
  *param_1 = puVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149f0dfe0;
  puVar2[2] = puVar1;
  param_1[1] = puVar2;
  return param_1;
}



// FUNCTION 146a213f2 FUN_146a213f2 body=183 status=ok
// SIG undefined FUN_146a213f2(void)

undefined8 *
FUN_146a213f2(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  if (0 < *(int *)(param_1 + 0x48)) {
    iVar4 = 0;
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + lVar5);
      cVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_4,param_3);
      if (cVar2 != '\0') {
        lVar3 = *(longlong *)(param_1 + 0x40);
        goto LAB_146a21488;
      }
      lVar5 = lVar5 + 0x10;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x48));
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    iVar4 = 0;
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x30) + lVar5);
      cVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_4,param_3);
      if (cVar2 != '\0') {
        lVar3 = *(longlong *)(param_1 + 0x30);
LAB_146a21488:
        *param_2 = *(undefined8 *)(lVar3 + lVar5);
        lVar5 = *(longlong *)(lVar3 + 8 + lVar5);
        param_2[1] = lVar5;
        if (lVar5 == 0) {
          return param_2;
        }
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
        return param_2;
      }
      lVar5 = lVar5 + 0x10;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x38));
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 146a214aa FUN_146a214aa body=3662 status=ok
// SIG undefined FUN_146a214aa(void)

void FUN_146a214aa(longlong param_1,undefined4 param_2,undefined8 *param_3,int *param_4,
                  longlong ****param_5,longlong *param_6,longlong param_7,longlong *param_8,
                  longlong *param_9,longlong *param_10,longlong *param_11)

{
  longlong *plVar1;
  int *piVar2;
  longlong ******pppppplVar3;
  void *_Src;
  longlong ****pppplVar4;
  longlong *****ppppplVar5;
  longlong *****ppppplVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  longlong *****ppppplVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 *puVar14;
  longlong ******pppppplVar15;
  longlong ****pppplVar16;
  int iVar17;
  longlong lVar18;
  longlong ******pppppplVar19;
  bool bVar20;
  undefined1 auStack_1f8 [32];
  int *local_1d8;
  longlong *local_1d0;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 *local_1b8;
  longlong local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  longlong local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  int local_138;
  int iStack_134;
  longlong ***local_130 [2];
  longlong ****local_120;
  undefined8 local_118;
  longlong ***local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  longlong ****local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *****local_d8;
  longlong *****ppppplStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_ac [4];
  longlong ****local_a8;
  int local_a0;
  undefined4 uStack_9c;
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
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  FUN_146a213f2(param_1,&local_e8,param_4,param_3);
  if (local_e8 != (longlong *)0x0) {
    local_1c8 = *(undefined8 *)(param_1 + 0x50);
    local_118 = *(longlong *******)(param_7 + 0x10);
    if (local_118 == (longlong ******)0x0) {
LAB_146a2152f:
      local_118 = (longlong ******)0x0;
    }
    else {
      iVar17 = *(int *)(local_118 + 1);
      do {
        if (iVar17 == 0) goto LAB_146a2152f;
        LOCK();
        iVar13 = *(int *)(local_118 + 1);
        bVar20 = iVar17 == iVar13;
        if (bVar20) {
          *(int *)(local_118 + 1) = iVar17 + 1;
          iVar13 = iVar17;
        }
        iVar17 = iVar13;
        UNLOCK();
      } while (!bVar20);
    }
    local_120 = (longlong ****)0x0;
    if (local_118 != (longlong ******)0x0) {
      local_120 = *(longlong *****)(param_7 + 8);
    }
    local_1d0 = param_6;
    local_1d8 = param_4;
    (**(code **)(*local_e8 + 0x10))(local_e8,&local_a8,&local_120,param_3);
    ppppplVar11 = (longlong *****)local_a8;
    pppppplVar15 = (longlong ******)CONCAT44(uStack_9c,local_a0);
    if (pppppplVar15 != (longlong ******)0x0) {
      LOCK();
      *(int *)(pppppplVar15 + 1) = *(int *)(pppppplVar15 + 1) + 1;
      UNLOCK();
      plVar9 = (longlong *)CONCAT44(uStack_9c,local_a0);
      if (plVar9 != (longlong *)0x0) {
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
    }
    pppppplVar19 = local_118;
    if (local_118 != (longlong ******)0x0) {
      LOCK();
      pppppplVar3 = local_118 + 1;
      *(int *)pppppplVar3 = *(int *)pppppplVar3 + -1;
      UNLOCK();
      if (*(int *)pppppplVar3 == 0) {
        (*(code *)**local_118)(local_118);
        LOCK();
        piVar2 = (int *)((longlong)pppppplVar19 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*pppppplVar19)[2])(pppppplVar19);
        }
      }
    }
    goto LAB_146a2205a;
  }
  local_f8 = (longlong ****)0x0;
  iVar17 = *(int *)(param_3 + 1);
  iVar13 = 0;
  _Src = (void *)*param_3;
  local_1bc = param_2;
  local_1b8 = param_3;
  local_1b0 = param_1;
  if ((longlong)iVar17 == 0) {
    uStack_9c = 0;
    local_a0 = 0;
    local_a8 = (longlong ****)0x0;
  }
  else {
    uStack_f0._0_4_ = iVar17;
    FUN_1446dd670(&local_f8,iVar17,0);
    memcpy(local_f8,_Src,(longlong)iVar17 * 2);
    local_a8 = local_f8;
    local_a0 = (int)uStack_f0;
    uStack_9c = uStack_f0._4_4_;
  }
  puVar14 = local_1b8;
  local_f8 = (longlong ****)0x0;
  uStack_f0 = 0;
  local_78 = 0;
  uStack_60 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_70 = 0x8000000000;
  local_68 = 0xffffffff;
  ppppplVar11 = (longlong *****)(local_1b8 + 4);
  pppplVar16 = (longlong ****)(local_1b8 + 6);
  local_d8 = (longlong *****)&DAT_100000000;
  local_c8 = 0xffffffff;
  local_c0 = 0;
  ppppplStack_d0 = (longlong *****)pppplVar16;
  if (*(int *)(local_1b8 + 9) != 0) {
    FUN_1449c0562(&local_d8);
    iVar13 = *(int *)(puVar14 + 9);
  }
  local_108 = local_c8;
  uVar12 = local_108;
  local_100 = local_c0;
  local_fc = local_bc;
  local_118 = (longlong ******)local_d8;
  local_110 = (longlong ***)ppppplStack_d0;
  local_108._4_4_ = (int)((ulonglong)local_c8 >> 0x20);
  iVar17 = local_108._4_4_;
  local_120 = (longlong ****)ppppplVar11;
  if ((local_108._4_4_ != iVar13) ||
     (local_108 = uVar12, ppppplStack_d0 != (longlong *****)pppplVar16)) {
    do {
      local_108 = uVar12;
      pppplVar4 = (longlong ****)*local_120;
      lVar8 = (longlong)iVar17;
      iVar17 = *(int *)((longlong)pppplVar4 + lVar8 * 0x20 + 0x14) -
               *(int *)(pppplVar4 + lVar8 * 4 + 2);
      if (iVar17 < 1) {
        iVar17 = 0;
      }
      FUN_144a63a7c(param_4,local_130,*(int *)(pppplVar4 + lVar8 * 4 + 2),iVar17);
      local_d8 = (longlong *****)(pppplVar4 + lVar8 * 4);
      ppppplStack_d0 = (longlong *****)local_130;
      FUN_140dbdf0c(&local_98,&local_138,&local_d8,0);
      if ((longlong ****)local_130[0] != (longlong ****)0x0) {
        FUN_1400020a8();
      }
      local_108 = CONCAT44(local_108._4_4_,(uint)local_108 & ~local_118._4_4_);
      FUN_1449c0562(&local_118);
      iVar17 = local_108._4_4_;
      uVar12 = local_108;
    } while ((longlong *****)local_120 != ppppplVar11 ||
             ((longlong ****)local_110 != pppplVar16 || local_108._4_4_ != iVar13));
  }
  lVar8 = local_1b0;
  iStack_134 = 0xffffffff;
  local_138 = *(int *)(*param_6 + 8) + -1;
  if (*(int *)(*param_6 + 8) == 0) {
    local_138 = 0;
  }
  puVar14 = local_1b8;
  if (*(int *)(local_1b8 + 1) < 2) {
LAB_146a2185d:
    FUN_144a63a7c(param_4,&local_120,*(int *)(puVar14 + 2),
                  *(int *)((longlong)puVar14 + 0x14) - *(int *)(puVar14 + 2));
    iVar17 = (int)local_118 + -1;
    if ((int)local_118 == 0) {
      iVar17 = 0;
    }
    FUN_1400020e8(*param_6,local_120,iVar17);
    if ((longlong *****)local_120 != (longlong *****)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    plVar9 = *(longlong **)(local_1b0 + 0x50);
    FUN_1446f470e(&local_140,*local_1b8,1);
    puVar14 = local_1b8;
    local_1d8 = (int *)((ulonglong)local_1d8 & 0xffffffffffffff00);
    lVar18 = (**(code **)(*plVar9 + 0x98))(plVar9,DAT_14c979cd8,local_140,0);
    if (lVar18 == 0) goto LAB_146a2185d;
    FUN_144a63a7c(param_4,&local_120,*(int *)(puVar14 + 3),
                  *(int *)((longlong)puVar14 + 0x1c) - *(int *)(puVar14 + 3));
    iVar17 = (int)local_118 + -1;
    if ((int)local_118 == 0) {
      iVar17 = 0;
    }
    FUN_1400020e8(*param_6,local_120,iVar17);
    if ((longlong *****)local_120 != (longlong *****)0x0) {
      FUN_1400020a8();
    }
    uVar12 = *(undefined8 *)(lVar8 + 0x50);
    if (*(int *)(puVar14 + 1) == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    else {
      puVar10 = (undefined2 *)*puVar14;
    }
    FUN_1446f470e(&local_148,puVar10,1);
    param_5 = (longlong ****)FUN_140a57516(uVar12,local_148,0,0);
  }
  local_d8 = (longlong *****)*param_6;
  iStack_134 = *(int *)(local_d8 + 1) + -1;
  if (*(int *)(local_d8 + 1) == 0) {
    iStack_134 = 0;
  }
  ppppplStack_d0 = (longlong *****)param_6[1];
  if ((longlong ******)ppppplStack_d0 != (longlong ******)0x0) {
    LOCK();
    *(int *)(ppppplStack_d0 + 1) = *(int *)(ppppplStack_d0 + 1) + 1;
    UNLOCK();
  }
  local_1d8 = &local_138;
  local_130[0] = (longlong ***)param_5;
  FUN_146a4dc7e(&local_120,&local_a8,&local_d8);
  pppppplVar15 = local_118;
  ppppplVar11 = (longlong *****)local_120;
  if (local_118 != (longlong ******)0x0) {
    LOCK();
    *(int *)(local_118 + 1) = *(int *)(local_118 + 1) + 1;
    UNLOCK();
    if (local_118 != (longlong ******)0x0) {
      LOCK();
      pppppplVar19 = local_118 + 1;
      *(int *)pppppplVar19 = *(int *)pppppplVar19 + -1;
      UNLOCK();
      if (*(int *)pppppplVar19 == 0) {
        (*(code *)**local_118)(local_118);
        LOCK();
        piVar2 = (int *)((longlong)pppppplVar15 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*pppppplVar15)[2])(pppppplVar15);
        }
      }
    }
  }
  ppppplVar5 = ppppplStack_d0;
  if ((longlong ******)ppppplStack_d0 != (longlong ******)0x0) {
    LOCK();
    pppppplVar19 = (longlong ******)(ppppplStack_d0 + 1);
    *(int *)pppppplVar19 = *(int *)pppppplVar19 + -1;
    UNLOCK();
    if (*(int *)pppppplVar19 == 0) {
      (*(code *)**ppppplStack_d0)(ppppplStack_d0);
      LOCK();
      piVar2 = (int *)((longlong)ppppplVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*ppppplVar5)[2])(ppppplVar5);
      }
    }
  }
  if (ppppplVar11 != (longlong *****)0x0) {
    FUN_146a4e2e6(ppppplVar11,*(undefined4 *)(lVar8 + 0x58));
  }
  if (pppppplVar15 != (longlong ******)0x0) {
    LOCK();
    *(int *)(pppppplVar15 + 1) = *(int *)(pppppplVar15 + 1) + 1;
    UNLOCK();
  }
  if ((longlong ***)local_130[0][0x59] == (longlong ***)0x0) {
    pppplVar16 = (longlong ****)(local_130[0][0x4b] + 3);
    if ((longlong ***)local_130[0][0x4b] == (longlong ***)0x0) {
      pppplVar16 = (longlong ****)(local_130[0] + 0x59);
    }
    if (*pppplVar16 != (longlong ***)0x0) goto LAB_146a219bd;
  }
  else {
LAB_146a219bd:
    if ((int)param_10[1] != *(int *)((longlong)param_10 + 0x34)) {
      uVar7 = ((uint)((ulonglong)local_130[0] >> 0x14) & 0xffff ^
              (uint)((ulonglong)local_130[0] >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      plVar9 = param_10 + 7;
      if ((longlong *)param_10[8] != (longlong *)0x0) {
        plVar9 = (longlong *)param_10[8];
      }
      iVar17 = *(int *)((longlong)plVar9 +
                       (ulonglong)((int)param_10[9] - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
      if (iVar17 != -1) {
        do {
          lVar8 = *param_10 + (longlong)iVar17 * 0x20;
          if (*(longlong *****)(*param_10 + (longlong)iVar17 * 0x20) == (longlong ****)local_130[0])
          {
            if (lVar8 != 0) {
              local_d8 = *(longlong ******)(lVar8 + 8);
              ppppplStack_d0 = *(longlong ******)(lVar8 + 0x10);
              if ((longlong ******)ppppplStack_d0 != (longlong ******)0x0) {
                LOCK();
                *(int *)(ppppplStack_d0 + 1) = *(int *)(ppppplStack_d0 + 1) + 1;
                UNLOCK();
              }
              if (local_d8 != (longlong *****)0x0) goto LAB_146a21b64;
              goto LAB_146a21a4a;
            }
            break;
          }
          iVar17 = *(int *)(lVar8 + 0x18);
        } while (iVar17 != -1);
      }
    }
    ppppplStack_d0 = (longlong *****)0x0;
LAB_146a21a4a:
    local_d8 = (longlong *****)0x0;
    local_158 = *(longlong *)((longlong)local_130[0] + 0x84);
    uStack_150 = *(undefined8 *)((longlong)local_130[0] + 0x8c);
    local_1d0 = &local_158;
    local_1d8 = *(int **)((longlong)local_130[0] + 0x7c);
    local_168 = *(undefined4 *)(local_130[0] + 0xf);
    local_178 = *(undefined4 *)(local_130[0] + 0xd);
    uStack_174 = *(undefined4 *)((longlong)local_130[0] + 0x6c);
    uStack_170 = *(undefined4 *)(local_130[0] + 0xe);
    uStack_16c = *(undefined4 *)((longlong)local_130[0] + 0x74);
    FUN_146a4e9c0(&local_120,local_130[0] + 0x44,local_130[0] + 1);
    pppppplVar19 = (longlong ******)ppppplStack_d0;
    pppppplVar3 = local_118;
    local_d8 = (longlong *****)local_120;
    if (local_118 == (longlong ******)0x0) {
      if ((longlong ******)ppppplStack_d0 != (longlong ******)0x0) {
        ppppplStack_d0 = (longlong *****)0x0;
LAB_146a22231:
        local_d8 = (longlong *****)local_120;
        LOCK();
        pppppplVar3 = pppppplVar19 + 1;
        *(int *)pppppplVar3 = *(int *)pppppplVar3 + -1;
        UNLOCK();
        if (*(int *)pppppplVar3 == 0) {
          (*(code *)**pppppplVar19)(pppppplVar19);
          LOCK();
          piVar2 = (int *)((longlong)pppppplVar19 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar17 = *piVar2;
          UNLOCK();
joined_r0x000146a221de:
          if (iVar17 == 0) {
            (*(code *)(*pppppplVar19)[2])(pppppplVar19);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_118 + 1) = *(int *)(local_118 + 1) + 1;
      UNLOCK();
      if (local_118 == (longlong ******)ppppplStack_d0) {
        LOCK();
        pppppplVar19 = local_118 + 1;
        *(int *)pppppplVar19 = *(int *)pppppplVar19 + -1;
        UNLOCK();
        if (*(int *)pppppplVar19 == 0) {
          (*(code *)**local_118)(local_118);
          LOCK();
          piVar2 = (int *)((longlong)pppppplVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar17 = *piVar2;
          UNLOCK();
          pppppplVar19 = pppppplVar3;
          goto joined_r0x000146a221de;
        }
      }
      else {
        bVar20 = (longlong ******)ppppplStack_d0 != (longlong ******)0x0;
        ppppplStack_d0 = (longlong *****)local_118;
        if (bVar20) goto LAB_146a22231;
      }
    }
    pppppplVar19 = local_118;
    if (local_118 != (longlong ******)0x0) {
      LOCK();
      pppppplVar3 = local_118 + 1;
      *(int *)pppppplVar3 = *(int *)pppppplVar3 + -1;
      UNLOCK();
      if (*(int *)pppppplVar3 == 0) {
        (*(code *)**local_118)(local_118);
        LOCK();
        piVar2 = (int *)((longlong)pppppplVar19 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*pppppplVar19)[2])(pppppplVar19);
        }
      }
    }
    local_120 = local_130;
    local_118 = &local_d8;
    FUN_146a49bde(param_10,local_ac,&local_120,0);
LAB_146a21b64:
    ppppplVar6 = ppppplStack_d0;
    ppppplVar5 = local_d8;
    if ((longlong ******)ppppplStack_d0 != (longlong ******)0x0) {
      LOCK();
      *(int *)(ppppplStack_d0 + 1) = *(int *)(ppppplStack_d0 + 1) + 1;
      UNLOCK();
      LOCK();
      *(int *)(ppppplStack_d0 + 1) = *(int *)(ppppplStack_d0 + 1) + 1;
      UNLOCK();
      LOCK();
      *(int *)(ppppplStack_d0 + 1) = *(int *)(ppppplStack_d0 + 1) + 1;
      UNLOCK();
    }
    uVar12 = CONCAT44(iStack_134,local_138);
    iVar17 = (int)param_9[1];
    *(uint *)(param_9 + 1) = iVar17 + 1U;
    if (*(uint *)((longlong)param_9 + 0xc) < iVar17 + 1U) {
      FUN_146a496be(param_9,iVar17);
    }
    lVar18 = (longlong)iVar17 * 0x20;
    lVar8 = *param_9;
    *(undefined4 *)(lVar8 + lVar18) = local_1bc;
    *(undefined8 *)(lVar8 + 4 + lVar18) = uVar12;
    *(undefined4 *)(lVar8 + 0xc + lVar18) = 1;
    *(longlong ******)(lVar8 + 0x10 + lVar18) = ppppplVar5;
    *(longlong ******)(lVar8 + 0x18 + lVar18) = ppppplVar6;
    if ((longlong ******)ppppplVar6 != (longlong ******)0x0) {
      LOCK();
      *(int *)(ppppplVar6 + 1) = *(int *)(ppppplVar6 + 1) + 1;
      UNLOCK();
      LOCK();
      pppppplVar19 = (longlong ******)(ppppplVar6 + 1);
      *(int *)pppppplVar19 = *(int *)pppppplVar19 + -1;
      UNLOCK();
      if (*(int *)pppppplVar19 == 0) {
        (*(code *)**ppppplVar6)(ppppplVar6);
        LOCK();
        piVar2 = (int *)((longlong)ppppplVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppppplVar6)[2])(ppppplVar6);
        }
      }
      LOCK();
      pppppplVar19 = (longlong ******)(ppppplVar6 + 1);
      *(int *)pppppplVar19 = *(int *)pppppplVar19 + -1;
      UNLOCK();
      if (*(int *)pppppplVar19 == 0) {
        (*(code *)**ppppplVar6)(ppppplVar6);
        LOCK();
        piVar2 = (int *)((longlong)ppppplVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppppplVar6)[2])(ppppplVar6);
        }
      }
      LOCK();
      pppppplVar19 = (longlong ******)(ppppplVar6 + 1);
      *(int *)pppppplVar19 = *(int *)pppppplVar19 + -1;
      UNLOCK();
      if (*(int *)pppppplVar19 == 0) {
        (*(code *)**ppppplVar6)(ppppplVar6);
        LOCK();
        piVar2 = (int *)((longlong)ppppplVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppppplVar6)[2])(ppppplVar6);
        }
      }
    }
    ppppplVar5 = ppppplStack_d0;
    if ((longlong ******)ppppplStack_d0 != (longlong ******)0x0) {
      LOCK();
      pppppplVar19 = (longlong ******)(ppppplStack_d0 + 1);
      *(int *)pppppplVar19 = *(int *)pppppplVar19 + -1;
      UNLOCK();
      if (*(int *)pppppplVar19 == 0) {
        (*(code *)**ppppplStack_d0)(ppppplStack_d0);
        LOCK();
        piVar2 = (int *)((longlong)ppppplVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppppplVar5)[2])(ppppplVar5);
        }
      }
    }
  }
  if ((longlong ***)local_130[0][0x43] == (longlong ***)0x0) {
    pppplVar16 = (longlong ****)(local_130[0][0x35] + 3);
    if ((longlong ***)local_130[0][0x35] == (longlong ***)0x0) {
      pppplVar16 = (longlong ****)(local_130[0] + 0x43);
    }
    if (*pppplVar16 != (longlong ***)0x0) goto LAB_146a21c86;
  }
  else {
LAB_146a21c86:
    if ((int)param_11[1] != *(int *)((longlong)param_11 + 0x34)) {
      uVar7 = ((uint)((ulonglong)local_130[0] >> 0x14) & 0xffff ^
              (uint)((ulonglong)local_130[0] >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      plVar9 = param_11 + 7;
      if ((longlong *)param_11[8] != (longlong *)0x0) {
        plVar9 = (longlong *)param_11[8];
      }
      iVar17 = *(int *)((longlong)plVar9 +
                       (ulonglong)((int)param_11[9] - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
      if (iVar17 != -1) {
        do {
          lVar8 = *param_11 + (longlong)iVar17 * 0x20;
          if (*(longlong *****)(*param_11 + (longlong)iVar17 * 0x20) == (longlong ****)local_130[0])
          {
            if (lVar8 != 0) {
              local_d8 = *(longlong ******)(lVar8 + 8);
              ppppplStack_d0 = *(longlong ******)(lVar8 + 0x10);
              if ((longlong ******)ppppplStack_d0 != (longlong ******)0x0) {
                LOCK();
                *(int *)(ppppplStack_d0 + 1) = *(int *)(ppppplStack_d0 + 1) + 1;
                UNLOCK();
              }
              if (local_d8 != (longlong *****)0x0) goto LAB_146a21e27;
              goto LAB_146a21d13;
            }
            break;
          }
          iVar17 = *(int *)(lVar8 + 0x18);
        } while (iVar17 != -1);
      }
    }
    ppppplStack_d0 = (longlong *****)0x0;
LAB_146a21d13:
    local_d8 = (longlong *****)0x0;
    local_188 = *(longlong *)((longlong)local_130[0] + 0x84);
    uStack_180 = *(undefined8 *)((longlong)local_130[0] + 0x8c);
    local_1d0 = &local_188;
    local_1d8 = *(int **)((longlong)local_130[0] + 0x7c);
    local_198 = *(undefined4 *)(local_130[0] + 0xf);
    local_1a8 = *(undefined4 *)(local_130[0] + 0xd);
    uStack_1a4 = *(undefined4 *)((longlong)local_130[0] + 0x6c);
    uStack_1a0 = *(undefined4 *)(local_130[0] + 0xe);
    uStack_19c = *(undefined4 *)((longlong)local_130[0] + 0x74);
    FUN_146a4eb82(&local_120,local_130[0] + 0x2e,local_130[0] + 1);
    ppppplVar5 = ppppplStack_d0;
    pppppplVar19 = local_118;
    local_d8 = (longlong *****)local_120;
    if (local_118 == (longlong ******)0x0) {
      if ((longlong ******)ppppplStack_d0 != (longlong ******)0x0) {
        ppppplStack_d0 = (longlong *****)0x0;
        pppppplVar19 = (longlong ******)ppppplVar5;
LAB_146a2226b:
        local_d8 = (longlong *****)local_120;
        LOCK();
        pppppplVar3 = pppppplVar19 + 1;
        *(int *)pppppplVar3 = *(int *)pppppplVar3 + -1;
        UNLOCK();
        if (*(int *)pppppplVar3 == 0) {
          (*(code *)**pppppplVar19)(pppppplVar19);
          LOCK();
          piVar2 = (int *)((longlong)pppppplVar19 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar17 = *piVar2;
          UNLOCK();
joined_r0x000146a2221d:
          if (iVar17 == 0) {
            (*(code *)(*pppppplVar19)[2])(pppppplVar19);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_118 + 1) = *(int *)(local_118 + 1) + 1;
      UNLOCK();
      if (local_118 == (longlong ******)ppppplStack_d0) {
        LOCK();
        pppppplVar3 = local_118 + 1;
        *(int *)pppppplVar3 = *(int *)pppppplVar3 + -1;
        UNLOCK();
        if (*(int *)pppppplVar3 == 0) {
          (*(code *)**local_118)(local_118);
          LOCK();
          piVar2 = (int *)((longlong)pppppplVar19 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar17 = *piVar2;
          UNLOCK();
          goto joined_r0x000146a2221d;
        }
      }
      else {
        bVar20 = (longlong ******)ppppplStack_d0 != (longlong ******)0x0;
        pppppplVar19 = (longlong ******)ppppplStack_d0;
        ppppplStack_d0 = (longlong *****)local_118;
        if (bVar20) goto LAB_146a2226b;
      }
    }
    pppppplVar19 = local_118;
    if (local_118 != (longlong ******)0x0) {
      LOCK();
      pppppplVar3 = local_118 + 1;
      *(int *)pppppplVar3 = *(int *)pppppplVar3 + -1;
      UNLOCK();
      if (*(int *)pppppplVar3 == 0) {
        (*(code *)**local_118)(local_118);
        LOCK();
        piVar2 = (int *)((longlong)pppppplVar19 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*pppppplVar19)[2])(pppppplVar19);
        }
      }
    }
    local_120 = local_130;
    local_118 = &local_d8;
    FUN_146a4a174(param_11,local_ac,&local_120,0);
LAB_146a21e27:
    ppppplVar6 = ppppplStack_d0;
    ppppplVar5 = local_d8;
    if ((longlong ******)ppppplStack_d0 != (longlong ******)0x0) {
      LOCK();
      *(int *)(ppppplStack_d0 + 1) = *(int *)(ppppplStack_d0 + 1) + 1;
      UNLOCK();
      LOCK();
      *(int *)(ppppplVar6 + 1) = *(int *)(ppppplVar6 + 1) + 1;
      UNLOCK();
      LOCK();
      *(int *)(ppppplVar6 + 1) = *(int *)(ppppplVar6 + 1) + 1;
      UNLOCK();
    }
    uVar12 = CONCAT44(iStack_134,local_138);
    iVar17 = (int)param_9[1];
    *(uint *)(param_9 + 1) = iVar17 + 1U;
    if (*(uint *)((longlong)param_9 + 0xc) < iVar17 + 1U) {
      FUN_146a496be(param_9,iVar17);
    }
    lVar18 = (longlong)iVar17 * 0x20;
    lVar8 = *param_9;
    *(undefined4 *)(lVar8 + lVar18) = local_1bc;
    *(undefined8 *)(lVar8 + 4 + lVar18) = uVar12;
    *(undefined4 *)(lVar8 + 0xc + lVar18) = 1;
    *(longlong ******)(lVar8 + 0x10 + lVar18) = ppppplVar5;
    *(longlong ******)(lVar8 + 0x18 + lVar18) = ppppplVar6;
    if ((longlong ******)ppppplVar6 != (longlong ******)0x0) {
      LOCK();
      *(int *)(ppppplVar6 + 1) = *(int *)(ppppplVar6 + 1) + 1;
      UNLOCK();
      LOCK();
      pppppplVar19 = (longlong ******)(ppppplVar6 + 1);
      *(int *)pppppplVar19 = *(int *)pppppplVar19 + -1;
      UNLOCK();
      if (*(int *)pppppplVar19 == 0) {
        (*(code *)**ppppplVar6)(ppppplVar6);
        LOCK();
        piVar2 = (int *)((longlong)ppppplVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppppplVar6)[2])(ppppplVar6);
        }
      }
      LOCK();
      pppppplVar19 = (longlong ******)(ppppplVar6 + 1);
      *(int *)pppppplVar19 = *(int *)pppppplVar19 + -1;
      UNLOCK();
      if (*(int *)pppppplVar19 == 0) {
        (*(code *)**ppppplVar6)(ppppplVar6);
        LOCK();
        piVar2 = (int *)((longlong)ppppplVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppppplVar6)[2])(ppppplVar6);
        }
      }
      LOCK();
      pppppplVar19 = (longlong ******)(ppppplVar6 + 1);
      *(int *)pppppplVar19 = *(int *)pppppplVar19 + -1;
      UNLOCK();
      if (*(int *)pppppplVar19 == 0) {
        (*(code *)**ppppplVar6)(ppppplVar6);
        LOCK();
        piVar2 = (int *)((longlong)ppppplVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppppplVar6)[2])(ppppplVar6);
        }
      }
    }
    ppppplVar5 = ppppplStack_d0;
    if ((longlong ******)ppppplStack_d0 != (longlong ******)0x0) {
      LOCK();
      pppppplVar19 = (longlong ******)(ppppplStack_d0 + 1);
      *(int *)pppppplVar19 = *(int *)pppppplVar19 + -1;
      UNLOCK();
      if (*(int *)pppppplVar19 == 0) {
        (*(code *)**ppppplVar5)(ppppplVar5);
        LOCK();
        piVar2 = (int *)((longlong)ppppplVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppppplVar5)[2])(ppppplVar5);
        }
      }
    }
  }
  if (pppppplVar15 != (longlong ******)0x0) {
    LOCK();
    pppppplVar19 = pppppplVar15 + 1;
    *(int *)pppppplVar19 = *(int *)pppppplVar19 + -1;
    UNLOCK();
    if (*(int *)pppppplVar19 == 0) {
      (*(code *)**pppppplVar15)(pppppplVar15);
      LOCK();
      piVar2 = (int *)((longlong)pppppplVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*pppppplVar15)[2])(pppppplVar15);
      }
    }
  }
  FUN_141720dbc(&local_a8);
LAB_146a2205a:
  if (pppppplVar15 != (longlong ******)0x0) {
    LOCK();
    *(int *)(pppppplVar15 + 1) = *(int *)(pppppplVar15 + 1) + 1;
    UNLOCK();
    LOCK();
    *(int *)(pppppplVar15 + 1) = *(int *)(pppppplVar15 + 1) + 1;
    UNLOCK();
  }
  iVar17 = (int)param_8[1];
  *(uint *)(param_8 + 1) = iVar17 + 1U;
  if (*(uint *)((longlong)param_8 + 0xc) < iVar17 + 1U) {
    FUN_1410f05b0(param_8,iVar17);
  }
  lVar8 = *param_8;
  *(longlong ******)(lVar8 + (longlong)iVar17 * 0x10) = ppppplVar11;
  *(longlong *******)(lVar8 + 8 + (longlong)iVar17 * 0x10) = pppppplVar15;
  if (pppppplVar15 != (longlong ******)0x0) {
    LOCK();
    *(int *)(pppppplVar15 + 1) = *(int *)(pppppplVar15 + 1) + 1;
    UNLOCK();
    LOCK();
    pppppplVar19 = pppppplVar15 + 1;
    *(int *)pppppplVar19 = *(int *)pppppplVar19 + -1;
    UNLOCK();
    if (*(int *)pppppplVar19 == 0) {
      (*(code *)**pppppplVar15)(pppppplVar15);
      LOCK();
      piVar2 = (int *)((longlong)pppppplVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*pppppplVar15)[2])(pppppplVar15);
      }
    }
    LOCK();
    pppppplVar19 = pppppplVar15 + 1;
    *(int *)pppppplVar19 = *(int *)pppppplVar19 + -1;
    UNLOCK();
    if (*(int *)pppppplVar19 == 0) {
      (*(code *)**pppppplVar15)(pppppplVar15);
      LOCK();
      piVar2 = (int *)((longlong)pppppplVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*pppppplVar15)[2])(pppppplVar15);
      }
    }
  }
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_e0 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar2 = (int *)((longlong)local_e0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_e0 + 0x10))(local_e0);
      }
    }
  }
  if (pppppplVar15 != (longlong ******)0x0) {
    LOCK();
    pppppplVar19 = pppppplVar15 + 1;
    *(int *)pppppplVar19 = *(int *)pppppplVar19 + -1;
    UNLOCK();
    if (*(int *)pppppplVar19 == 0) {
      (*(code *)**pppppplVar15)(pppppplVar15);
      LOCK();
      piVar2 = (int *)((longlong)pppppplVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*pppppplVar15)[2])(pppppplVar15);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a222fa FUN_146a222fa body=214 status=ok
// SIG undefined FUN_146a222fa(void)

undefined8 * FUN_146a222fa(undefined8 *param_1)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_149f09250;
  FUN_146a223d2(local_30);
  FUN_140e20234(param_1 + 1,local_30,0);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_30,
                L"<([\\w\\d\\.-]+)((?: (?:[\\w\\d\\.-]+=(?>\".*?\")))+)?(?:(?:/>)|(?:>(.*?)</>))");
  FUN_140e20234(param_1 + 3,local_30,0);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_30,L"([\\w\\d\\.]+)=(?>\"(.*?)\")");
  FUN_140e20234(param_1 + 5,local_30,0);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a223d2 FUN_146a223d2 body=242 status=ok
// SIG undefined FUN_146a223d2(void)

undefined8 * FUN_146a223d2(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = DAT_14c98ed10;
  lVar5 = (longlong)DAT_14c98ed18;
  if (lVar5 != 0) {
    lVar4 = 0;
    do {
      if (1 < *(int *)(param_1 + 1)) {
        FUN_1400020e8(param_1,&DAT_149e06184,1);
      }
      FUN_1400020e8(param_1,&DAT_149e06140,1);
      FUN_1400020e8(param_1,&DAT_149e05ec0,1);
      iVar1 = *(int *)(lVar3 + 8 + lVar4);
      iVar2 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar2 = 0;
      }
      FUN_1400020e8(param_1,*(undefined8 *)(lVar3 + lVar4),iVar2);
      FUN_1400020e8(param_1,&DAT_149e06120,1);
      FUN_1400020e8(param_1,&DAT_149e06144,1);
      lVar4 = lVar4 + 0x10;
    } while (lVar5 * 0x10 != lVar4);
  }
  return param_1;
}



// FUNCTION 146a224c4 FUN_146a224c4 body=142 status=ok
// SIG undefined FUN_146a224c4(void)

void FUN_146a224c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_1410f06be(param_3,local_48);
  FUN_146a22554(param_1,param_3,local_48,param_2);
  FUN_146a22bc2(param_1,param_3,param_2,param_4);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a22554 FUN_146a22554 body=1645 status=ok
// SIG undefined FUN_146a22554(void)

void FUN_146a22554(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  void *_Src;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_258 [44];
  int local_22c;
  longlong *local_228;
  longlong *local_220;
  longlong local_218;
  longlong local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  void *local_1e8;
  int local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  int local_1c0;
  int iStack_1bc;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  void *local_1a0;
  int local_198;
  int local_190;
  int local_18c;
  undefined8 local_188;
  longlong local_180;
  undefined8 uStack_178;
  undefined1 local_170 [36];
  undefined1 local_14c [4];
  int *local_148;
  undefined4 *local_140;
  undefined1 local_128 [80];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  undefined1 local_88 [32];
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if ((int)param_3[1] != 0) {
    FUN_140d5ff90(local_170,param_1 + 0x18,param_2);
    local_68 = 0;
    if (0 < (int)param_3[1]) {
      local_210 = param_1 + 0x28;
      lVar11 = 0;
      local_228 = param_3;
      local_220 = param_4;
      do {
        local_180 = 0;
        uStack_178 = 0;
        local_188 = *(ulonglong *)(*local_228 + lVar11 * 8);
        local_218 = lVar11;
        FUN_1467c9348(local_170,local_188,local_188 >> 0x20);
        iVar2 = (int)local_188;
        cVar5 = FUN_140d5fc7a(local_170);
        plVar3 = local_220;
        while (local_220 = plVar3, cVar5 != '\0') {
          iVar6 = FUN_1467c9010(local_170);
          local_22c = FUN_1467c90aa(local_170);
          local_190 = iVar6;
          local_18c = local_22c;
          iVar7 = FUN_1467c9144(local_170,1);
          iVar8 = FUN_1467c91e0(local_170,1);
          FUN_144a63a7c(param_2,&local_1a0,iVar7,iVar8 - iVar7);
          iVar7 = FUN_1467c9144(local_170,2);
          iVar8 = FUN_1467c91e0(local_170,2);
          uVar9 = FUN_1467c9144(local_170,3);
          local_1a4 = FUN_1467c91e0(local_170,3);
          local_b8 = 0;
          local_b0 = 0;
          local_d8 = 0;
          uStack_d0 = 0;
          local_ac = 0xffffffff00000080;
          local_a4 = 0;
          local_98 = 0;
          local_90 = 0;
          local_1a8 = uVar9;
          if (iVar8 != -1 && iVar7 != -1) {
            if (local_68 == 0) {
              FUN_140d5ff90(local_88,local_210,param_2);
              local_68 = 1;
            }
            FUN_1467c9348(local_88,iVar7,iVar8);
            while (cVar5 = FUN_140d5fc7a(local_88), cVar5 != '\0') {
              iVar7 = FUN_1467c9144(local_88,1);
              iVar8 = FUN_1467c91e0(local_88,1);
              uVar9 = FUN_1467c9144(local_88,2);
              local_1ac = FUN_1467c91e0(local_88,2);
              local_1b0 = uVar9;
              FUN_144a63a7c(param_2,&local_1c0,iVar7,iVar8 - iVar7);
              local_140 = &local_1b0;
              local_148 = &local_1c0;
              FUN_146a4a740(&local_d8,local_14c,&local_148,0);
              if (CONCAT44(iStack_1bc,local_1c0) != 0) {
                FUN_1400020a8();
              }
            }
          }
          local_1c0 = iVar2;
          iStack_1bc = iVar6;
          if (iVar2 < iVar6) {
            local_1d8 = 0;
            uStack_1d0 = 0;
            FUN_146a231e8(&local_148,&local_1d8,&local_1c0);
            uVar4 = uStack_178;
            lVar11 = (longlong)(int)uStack_178;
            uVar10 = (int)uStack_178 + 1;
            uStack_178 = CONCAT44(uStack_178._4_4_,uVar10);
            if (uStack_178._4_4_ < uVar10) {
              FUN_146a4adf0(&local_180,uVar4 & 0xffffffff);
            }
            FUN_146a4ad56(lVar11 * 0x70 + local_180,&local_148);
            FUN_146a2328c(&local_148);
          }
          _Src = local_1a0;
          local_1e8 = (void *)0x0;
          lVar11 = (longlong)local_198;
          local_1e0 = local_198;
          if (lVar11 == 0) {
            local_1dc = 0;
          }
          else {
            FUN_1446dd670(&local_1e8,local_198,0);
            memcpy(local_1e8,_Src,lVar11 * 2);
          }
          FUN_146a232d2(&local_148,&local_1e8,&local_190,&local_1a8);
          FUN_146a26486(local_128,&local_d8);
          uVar4 = uStack_178;
          lVar11 = (longlong)(int)uStack_178;
          uVar10 = (int)uStack_178 + 1;
          uStack_178 = CONCAT44(uStack_178._4_4_,uVar10);
          if (uStack_178._4_4_ < uVar10) {
            FUN_146a4adf0(&local_180,uVar4 & 0xffffffff);
          }
          FUN_146a4ad56(lVar11 * 0x70 + local_180,&local_148);
          FUN_146a2328c(&local_148);
          local_90 = 0;
          if (local_98 != 0) {
            FUN_1400020a8();
          }
          FUN_146a2679a(&local_d8);
          if (local_1a0 != (void *)0x0) {
            FUN_1400020a8();
          }
          cVar5 = FUN_140d5fc7a(local_170);
          iVar2 = local_22c;
          plVar3 = local_220;
        }
        local_188._4_4_ = (int)(local_188 >> 0x20);
        local_d8 = CONCAT44(local_188._4_4_,iVar2);
        bVar1 = iVar2 < local_188._4_4_;
        if (bVar1) {
          local_1f8 = 0;
          uStack_1f0 = 0;
          FUN_146a231e8(&local_148,&local_1f8,&local_d8);
          uVar4 = uStack_178;
          lVar11 = (longlong)(int)uStack_178;
          uVar10 = (int)uStack_178 + 1;
          uStack_178 = CONCAT44(uStack_178._4_4_,uVar10);
          if (uStack_178._4_4_ < uVar10) {
            FUN_146a4adf0(&local_180,uVar4 & 0xffffffff);
          }
          FUN_146a4ad56(lVar11 * 0x70 + local_180,&local_148);
          FUN_146a2328c(&local_148);
        }
        if ((int)uStack_178 == 0) {
          local_208 = 0;
          uStack_200 = 0;
          FUN_146a231e8(&local_148,&local_208,&local_188);
          uVar4 = uStack_178;
          lVar11 = (longlong)(int)uStack_178;
          uVar10 = (int)uStack_178 + 1;
          uStack_178 = CONCAT44(uStack_178._4_4_,uVar10);
          if (uStack_178._4_4_ < uVar10) {
            FUN_146a4adf0(&local_180,uVar4 & 0xffffffff);
          }
          FUN_146a4ad56(lVar11 * 0x70 + local_180,&local_148);
          FUN_146a2328c(&local_148);
        }
        iVar2 = (int)plVar3[1];
        *(uint *)(plVar3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
          FUN_146a4aede(plVar3,iVar2);
        }
        FUN_146a4ae80((longlong)iVar2 * 0x18 + *plVar3,&local_188);
        FUN_146a267d0(local_180,uStack_178 & 0xffffffff);
        if (local_180 != 0) {
          FUN_1400020a8();
        }
        lVar11 = local_218 + 1;
      } while (lVar11 < (int)local_228[1]);
      if ((local_68 & 1) != 0) {
        FUN_141701fe8(local_88);
      }
    }
    FUN_141701fe8(local_170);
  }
  if ((local_60 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a22bc2 FUN_146a22bc2 body=1573 status=ok
// SIG undefined FUN_146a22bc2(void)

void FUN_146a22bc2(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  int *piVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStack_138 [40];
  longlong *local_110;
  longlong *local_108;
  longlong local_100;
  int *local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a0 [32];
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  uint local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((int)param_3[1] != 0) {
    local_108 = param_3;
    FUN_140d5ff90(local_a0,param_1 + 8,param_2);
    if (0 < (int)local_108[1]) {
      lVar11 = 0;
      do {
        iVar4 = *(int *)(param_4 + 8) + -1;
        if (*(int *)(param_4 + 8) == 0) {
          iVar4 = 0;
        }
        piVar8 = (int *)(*local_108 + lVar11 * 0x18);
        *piVar8 = iVar4;
        local_100 = lVar11;
        if (0 < piVar8[4]) {
          lVar11 = 0;
          local_f8 = piVar8;
          do {
            lVar12 = *(longlong *)(local_f8 + 2);
            lVar14 = lVar11 * 0x70;
            local_b8 = (longlong *)0x0;
            uStack_b0 = 1;
            local_e8 = lVar11;
            FUN_146a4b016(&local_b8,0);
            *local_b8 = lVar12 + lVar14 + 0x10;
            lVar11 = lVar12 + lVar14 + 0x30;
            local_80 = 0x100000000;
            local_70 = 0xffffffff;
            local_68 = 0;
            local_78 = lVar11;
            if (*(int *)(lVar12 + lVar14 + 0x48) != 0) {
              FUN_1449c0562(&local_80);
            }
            local_f0 = lVar12 + lVar14;
            local_110 = (longlong *)(lVar12 + lVar14 + 0x20);
            local_c8 = local_70;
            local_c0 = local_68;
            local_bc = local_64;
            local_d8 = local_80;
            local_d0 = local_78;
            uVar3 = *(uint *)(local_f0 + 0x48);
            local_80 = CONCAT44(1 << ((byte)uVar3 & 0x1f),(int)uVar3 >> 5);
            local_70 = CONCAT44(uVar3,-1 << ((byte)uVar3 & 0x1f));
            local_68 = uVar3 & 0xffffffe0;
            local_e0 = local_110;
            local_78 = lVar11;
            if (*(uint *)(local_f0 + 0x48) != uVar3) {
              FUN_1449c0562(&local_80);
              uVar3 = local_70._4_4_;
            }
            lVar11 = local_78;
            uVar13 = local_c8._4_4_;
            if ((local_e0 != local_110 || local_d0 != local_78) || local_c8._4_4_ != uVar3) {
              do {
                lVar12 = *local_e0;
                lVar14 = (longlong)(int)(uint)uStack_b0;
                uVar2 = (uint)uStack_b0 + 1;
                if (uStack_b0._4_4_ < uVar2) {
                  uVar9 = uStack_b0 & 0xffffffff;
                  uStack_b0._0_4_ = uVar2;
                  FUN_146a4b016(&local_b8,uVar9);
                  uVar2 = (uint)uStack_b0;
                }
                uStack_b0._0_4_ = uVar2;
                uVar2 = (uint)uStack_b0;
                local_b8[lVar14] = (longlong)(int)uVar13 * 0x20 + lVar12 + 0x10;
                lVar14 = (longlong)(int)(uint)uStack_b0;
                uStack_b0._0_4_ = (uint)uStack_b0 + 1;
                if (uStack_b0._4_4_ < (uint)uStack_b0) {
                  FUN_146a4b016(&local_b8,uVar2);
                }
                local_b8[lVar14] = lVar12 + (longlong)(int)uVar13 * 0x20 + 0x14;
                local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 & ~local_d8._4_4_);
                FUN_1449c0562(&local_d8);
                uVar13 = local_c8._4_4_;
              } while (local_e0 != local_110 || (local_d0 != lVar11 || local_c8._4_4_ != uVar3));
            }
            lVar11 = local_f0;
            if ((*(int *)(local_f0 + 0x18) != -1) && (*(int *)(local_f0 + 0x1c) != -1)) {
              lVar12 = (longlong)(int)(uint)uStack_b0;
              uVar3 = (uint)uStack_b0 + 1;
              uStack_b0._0_4_ = uVar3;
              if (uStack_b0._4_4_ < uVar3) {
                FUN_146a4b016(&local_b8);
              }
              local_b8[lVar12] = lVar11 + 0x18;
              lVar12 = (longlong)(int)(uint)uStack_b0;
              uStack_b0._0_4_ = (uint)uStack_b0 + 1;
              if (uStack_b0._4_4_ < (uint)uStack_b0) {
                FUN_146a4b016(&local_b8);
              }
              local_b8[lVar12] = lVar11 + 0x1c;
            }
            lVar12 = (longlong)(int)(uint)uStack_b0;
            uVar3 = (uint)uStack_b0 + 1;
            uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar3);
            if (uStack_b0._4_4_ < uVar3) {
              FUN_146a4b016(&local_b8);
            }
            local_b8[lVar12] = lVar11 + 0x14;
            if ((int)(uint)uStack_b0 < 2) {
              plVar10 = (longlong *)0x0;
            }
            else {
              plVar7 = (longlong *)&DAT_00000001;
              lVar11 = 0;
              do {
                local_110 = plVar7;
                FUN_1467c9348(local_a0,*(undefined4 *)local_b8[lVar11],
                              *(undefined4 *)local_b8[(longlong)plVar7]);
                iVar4 = *(int *)(param_4 + 8) + -1;
                if (*(int *)(param_4 + 8) == 0) {
                  iVar4 = 0;
                }
                *(int *)local_b8[lVar11] = iVar4;
                iVar4 = FUN_1467c927c(local_a0);
                while (cVar1 = FUN_140d5fc7a(local_a0), cVar1 != '\0') {
                  iVar5 = FUN_1467c9010();
                  FUN_144a63a7c(param_2,&local_e0,iVar4,iVar5 - iVar4);
                  iVar4 = (int)local_d8 + -1;
                  if ((int)local_d8 == 0) {
                    iVar4 = 0;
                  }
                  FUN_1400020e8(param_4,local_e0,iVar4);
                  if (local_e0 != (longlong *)0x0) {
                    FUN_1400020a8();
                  }
                  FUN_1467c9010(local_a0);
                  lVar12 = -8;
                  iVar4 = 1;
                  do {
                    if (DAT_14c98ed18 <= iVar4 + -1) goto LAB_146a23087;
                    iVar5 = FUN_1467c9144(local_a0,iVar4);
                    iVar6 = FUN_1467c91e0(local_a0,iVar4);
                    lVar12 = lVar12 + 0x10;
                    iVar4 = iVar4 + 1;
                  } while ((iVar5 == -1) || (iVar6 == -1));
                  iVar4 = *(int *)(DAT_14c98ed20 + lVar12) + -1;
                  if (*(int *)(DAT_14c98ed20 + lVar12) == 0) {
                    iVar4 = 0;
                  }
                  FUN_1400020e8(param_4,*(undefined8 *)(DAT_14c98ed20 + -8 + lVar12),iVar4);
LAB_146a23087:
                  iVar4 = FUN_1467c90aa(local_a0);
                }
                iVar5 = FUN_1467c92e2(local_a0);
                FUN_144a63a7c(param_2,&local_e0,iVar4,iVar5 - iVar4);
                iVar4 = (int)local_d8 + -1;
                if ((int)local_d8 == 0) {
                  iVar4 = 0;
                }
                FUN_1400020e8(param_4,local_e0,iVar4);
                if (local_e0 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
                plVar7 = (longlong *)((longlong)local_110 + 1);
                lVar11 = lVar11 + 1;
                plVar10 = local_110;
              } while ((longlong)plVar7 < (longlong)(int)(uint)uStack_b0);
            }
            iVar4 = *(int *)(param_4 + 8) + -1;
            if (*(int *)(param_4 + 8) == 0) {
              iVar4 = 0;
            }
            *(int *)local_b8[(ulonglong)plVar10 & 0xffffffff] = iVar4;
            if (local_b8 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            lVar11 = local_e8 + 1;
            piVar8 = local_f8;
          } while (lVar11 < local_f8[4]);
        }
        iVar4 = *(int *)(param_4 + 8) + -1;
        if (*(int *)(param_4 + 8) == 0) {
          iVar4 = 0;
        }
        piVar8[1] = iVar4;
        lVar11 = local_100 + 1;
      } while (lVar11 < (int)local_108[1]);
    }
    FUN_141701fe8(local_a0);
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a231e8 FUN_146a231e8 body=163 status=ok
// SIG undefined FUN_146a231e8(void)

undefined8 * FUN_146a231e8(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = (int)param_2[1];
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  param_1[2] = *param_3;
  param_1[3] = 0xffffffffffffffff;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 146a2328c FUN_146a2328c body=69 status=ok
// SIG undefined FUN_146a2328c(void)

void FUN_146a2328c(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_146a2679a(param_1 + 4);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146a232d2 FUN_146a232d2 body=169 status=ok
// SIG undefined FUN_146a232d2(void)

undefined8 *
FUN_146a232d2(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = (int)param_2[1];
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  param_1[2] = *param_3;
  param_1[3] = *param_4;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 146a2337c FUN_146a2337c body=866 status=ok
// SIG undefined FUN_146a2337c(void)

void FUN_146a2337c(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined8 uVar8;
  int iVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined8 *local_a8;
  longlong local_a0;
  undefined8 *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined4 local_70;
  uint local_6c;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined4 local_50;
  uint local_4c;
  ulonglong local_48;
  ulonglong uVar9;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (0 < (int)param_2[1]) {
    iVar14 = 0;
    lVar5 = 0;
    local_b0 = param_2;
    do {
      plVar11 = (longlong *)(lVar5 * 0x10 + *param_2);
      local_a0 = lVar5;
      if (lVar5 != 0) {
        FUN_1400020e8(param_3,&DAT_149e02010,2);
      }
      lVar5 = (longlong)(int)plVar11[1];
      if (lVar5 != 0) {
        puVar12 = (undefined8 *)*plVar11;
        local_98 = puVar12 + lVar5 * 0xe;
        do {
          if (*(int *)(puVar12 + 1) < 2) {
            local_90 = (longlong *)0x0;
            uVar2 = *(uint *)(puVar12 + 0xd);
            pvVar3 = (void *)puVar12[0xc];
            local_88 = CONCAT44(local_88._4_4_,uVar2);
            if ((longlong)(int)uVar2 == 0) {
              local_88 = (ulonglong)uVar2;
            }
            else {
              FUN_1446dd670(&local_90,uVar2,0);
              memcpy(local_90,pvVar3,(longlong)(int)uVar2 * 2);
            }
            FUN_146a236e0(&local_90);
            plVar11 = local_90;
          }
          else {
            FUN_140002184(param_3,0x3c);
            iVar10 = 0;
            iVar4 = *(int *)(puVar12 + 1) + -1;
            if (*(int *)(puVar12 + 1) == 0) {
              iVar4 = 0;
            }
            FUN_1400020e8(param_3,*puVar12,iVar4);
            puVar1 = puVar12 + 4;
            local_68 = 0x100000000;
            local_58 = 0xffffffff;
            local_50 = 0;
            local_60 = puVar1;
            if (*(int *)(puVar12 + 7) != 0) {
              FUN_1449c0562(&local_68);
              iVar10 = *(int *)(puVar12 + 7);
            }
            plVar11 = puVar12 + 2;
            local_78 = local_58;
            uVar8 = local_78;
            local_70 = local_50;
            uVar9 = (ulonglong)local_4c;
            local_6c = local_4c;
            local_88 = local_68;
            local_80 = local_60;
            local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
            iVar4 = local_78._4_4_;
            local_a8 = puVar12;
            local_90 = plVar11;
            if ((local_78._4_4_ != iVar10) || (local_78 = uVar8, local_60 != puVar1)) {
              do {
                local_78 = uVar8;
                lVar5 = *local_90;
                lVar6 = (longlong)iVar4;
                FUN_140002184(param_3,CONCAT62((int6)(uVar9 >> 0x10),0x20));
                iVar4 = *(int *)(lVar5 + 8 + lVar6 * 0x28);
                iVar13 = iVar4 + -1;
                if (iVar4 == 0) {
                  iVar13 = iVar14;
                }
                FUN_1400020e8(param_3,*(undefined8 *)(lVar5 + lVar6 * 0x28),iVar13);
                FUN_140002184(param_3,0x3d);
                FUN_140002184(param_3,0x22);
                iVar4 = *(int *)(lVar5 + 0x18 + lVar6 * 0x28);
                iVar13 = iVar4 + -1;
                if (iVar4 == 0) {
                  iVar13 = iVar14;
                }
                uVar8 = *(undefined8 *)(lVar5 + 0x10 + lVar6 * 0x28);
                FUN_1400020e8(param_3,uVar8,iVar13);
                uVar8 = CONCAT62((int6)((ulonglong)uVar8 >> 0x10),0x22);
                FUN_140002184(param_3,uVar8);
                local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
                FUN_1449c0562(&local_88);
                bVar7 = local_90 != plVar11 || (local_80 != puVar1 || local_78._4_4_ != iVar10);
                uVar9 = CONCAT71((int7)((ulonglong)uVar8 >> 8),bVar7);
                iVar4 = local_78._4_4_;
                uVar8 = local_78;
              } while (bVar7);
            }
            FUN_140002184(param_3,CONCAT62((int6)(uVar9 >> 0x10),0x3e));
            puVar12 = local_a8;
            local_90 = (longlong *)0x0;
            uVar2 = *(uint *)(local_a8 + 0xd);
            pvVar3 = (void *)local_a8[0xc];
            local_88 = CONCAT44(local_88._4_4_,uVar2);
            if ((longlong)(int)uVar2 == 0) {
              local_88 = (ulonglong)uVar2;
            }
            else {
              FUN_1446dd670(&local_90,uVar2,0);
              memcpy(local_90,pvVar3,(longlong)(int)uVar2 * 2);
            }
            param_2 = local_b0;
            FUN_146a236e0(&local_90);
            iVar10 = (int)local_88 + -1;
            if ((int)local_88 == 0) {
              iVar10 = iVar14;
            }
            FUN_1400020e8(param_3,local_90,iVar10);
            plVar11 = (longlong *)&DAT_149f0e018;
          }
          FUN_1400020e8(param_3,plVar11);
          if (local_90 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          puVar12 = puVar12 + 0xe;
        } while (puVar12 != local_98);
      }
      lVar5 = local_a0 + 1;
    } while (lVar5 < (int)param_2[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a236e0 FUN_146a236e0 body=425 status=ok
// SIG undefined FUN_146a236e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146a236e0(longlong *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c98edb0) && (FUN_144b3d300(), DAT_14c98edb0 == -1)) {
    DAT_14c98ed50 = 0x26;
    FUN_1400b22c2(&DAT_14c98ed58,"&amp;");
    DAT_14c98ed68 = 0x22;
    FUN_1400b22c2(&DAT_14c98ed70,"&quot;");
    _DAT_14c98ed80 = 0x3c;
    FUN_1400b22c2(&DAT_14c98ed88,&DAT_149f0932b);
    _DAT_14c98ed98 = 0x3e;
    FUN_1400b22c2(&DAT_14c98eda0,&DAT_149f09330);
    atexit(FUN_1428fd852);
    _Init_thread_footer();
  }
  uVar2 = (int)param_1[1] - 1;
  if ((int)param_1[1] == 0) {
    uVar2 = 0;
  }
  if (0 < (int)uVar2) {
    uVar4 = 0;
    uVar3 = uVar2;
    do {
      lVar6 = 0x10;
      do {
        if (*(short *)(*param_1 + uVar4 * 2) == *(short *)((longlong)&DAT_14c98ed40 + lVar6)) {
          iVar5 = *(int *)((longlong)&DAT_14c98ed50 + lVar6) + -1;
          if (*(int *)((longlong)&DAT_14c98ed50 + lVar6) == 0) {
            iVar5 = 0;
          }
          uVar3 = (uVar3 + iVar5) - 1;
          break;
        }
        lVar6 = lVar6 + 0x18;
      } while (lVar6 != 0x70);
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar2);
    if (uVar3 != uVar2) {
      FUN_1412d7f26();
      uVar2 = (int)param_1[1] - 1;
      if ((int)param_1[1] == 0) {
        uVar2 = 0;
      }
      if (0 < (int)uVar2) {
        do {
          uVar3 = uVar2 - 1;
          lVar6 = 0;
          do {
            if (*(short *)(*param_1 + (ulonglong)uVar3 * 2) ==
                *(short *)((longlong)&DAT_14c98ed50 + lVar6)) {
              FUN_145825fe6(param_1,uVar3,0);
              FUN_140e63652(param_1,uVar3);
              break;
            }
            lVar6 = lVar6 + 0x18;
          } while (lVar6 != 0x60);
          bVar1 = 1 < (int)uVar2;
          uVar2 = uVar3;
        } while (bVar1);
      }
    }
  }
  return;
}



// FUNCTION 146a23889 FUN_146a23889 body=9 status=ok
// SIG undefined FUN_146a23889(void)

char FUN_146a23889(int param_1,longlong param_2)

{
  return (*(int *)(param_2 + 4) == param_1) * '\x02';
}



// FUNCTION 146a23892 FUN_146a23892 body=33 status=ok
// SIG undefined FUN_146a23892(void)

void FUN_146a23892(int *param_1,int param_2,int *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_4 == '\0') {
    iVar1 = *param_3;
    iVar2 = param_2 + iVar1;
  }
  else {
    iVar2 = param_3[1];
    iVar1 = param_2 + *param_3;
  }
  *param_1 = iVar1;
  param_1[1] = iVar2;
  return;
}



// FUNCTION 146a238b4 FUN_146a238b4 body=86 status=ok
// SIG undefined FUN_146a238b4(void)

undefined8 * FUN_146a238b4(undefined8 *param_1)

{
  param_1[5] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd) = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_140a3e3ee(param_1 + 0xc,0,1);
  *(undefined4 *)(param_1 + 0xe) = 0;
  return param_1;
}



// FUNCTION 146a2390a FUN_146a2390a body=402 status=ok
// SIG undefined FUN_146a2390a(void)

undefined8 *
FUN_146a2390a(longlong *param_1,undefined8 *param_2,int *param_3,undefined8 param_4,
             undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_a8 [32];
  int local_88;
  int *local_80;
  int local_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar8 = (longlong *)param_1[1];
  bVar3 = true;
  if (plVar8 == (longlong *)0x0) {
LAB_146a23a40:
    plVar8 = (longlong *)0x0;
LAB_146a23a42:
    uVar6 = FUN_14001cc68(0x78,0x10);
    FUN_146a238b4(uVar6);
    *param_2 = uVar6;
    puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    puVar7[1] = &DAT_100000001;
    *puVar7 = &PTR_FUN_149f0e000;
    puVar7[2] = uVar6;
    param_2[1] = puVar7;
    if (bVar3) goto LAB_146a23a19;
  }
  else {
    iVar5 = (int)plVar8[1];
    do {
      if (iVar5 == 0) goto LAB_146a23a40;
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    if (*param_1 == 0) {
      bVar3 = false;
      goto LAB_146a23a42;
    }
    local_68 = (undefined1)param_3[3];
    local_78 = param_3[2];
    local_80 = param_3 + 4;
    local_88 = param_3[1] - *param_3;
    local_70 = param_5;
    FUN_146936252(*param_1,&local_48,param_4,*param_3);
    local_58 = local_48;
    local_50 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    FUN_140865e56(param_1,param_2,param_3,&local_58);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
        }
      }
    }
  }
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
LAB_146a23a19:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a23a9e FUN_146a23a9e body=372 status=ok
// SIG undefined FUN_146a23a9e(void)

longlong *
FUN_146a23a9e(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140863f54(param_1,&local_40);
  if (local_40 != 0) goto LAB_146a23ad9;
  local_58 = param_5;
  FUN_146a2390a(param_1,&local_50,param_3,param_4);
  plVar3 = local_38;
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    local_40 = local_50;
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)0x0;
LAB_146a23bae:
      local_40 = local_50;
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar4 = *piVar2;
        UNLOCK();
joined_r0x000146a23bd9:
        if (iVar4 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    local_40 = local_50;
    if (local_48 == local_38) {
      LOCK();
      plVar3 = local_48 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar4 = *piVar2;
        UNLOCK();
        plVar3 = plVar1;
        goto joined_r0x000146a23bd9;
      }
    }
    else {
      local_38 = local_48;
      if (plVar3 != (longlong *)0x0) goto LAB_146a23bae;
    }
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_48 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
LAB_146a23ad9:
  plVar3 = local_38;
  *param_2 = local_40;
  param_2[1] = (longlong)local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a23c16 FUN_146a23c16 body=468 status=ok
// SIG undefined FUN_146a23c16(void)

longlong *
FUN_146a23c16(longlong *param_1,longlong *param_2,undefined4 param_3,undefined2 *param_4,
             undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined1 local_a0 [56];
  longlong *local_68;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b0 = 0xffffffffffffffff;
  local_a4 = *param_4;
  local_a8 = param_3;
  FUN_144a87366(local_a0,param_5);
  FUN_140863f54(param_1,&local_c0,&local_b0);
  if (local_c0 != 0) {
    *param_2 = local_c0;
    param_2[1] = (longlong)local_b8;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
      UNLOCK();
    }
    goto LAB_146a23ca6;
  }
  plVar8 = (longlong *)param_1[1];
  bVar3 = true;
  if (plVar8 == (longlong *)0x0) {
LAB_146a23d8b:
    plVar8 = (longlong *)0x0;
LAB_146a23d8d:
    lVar6 = FUN_14001cc68(0x78,0x10);
    FUN_146a238b4(lVar6);
    *param_2 = lVar6;
    puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    puVar7[1] = &DAT_100000001;
    *puVar7 = &PTR_FUN_149f0e000;
    puVar7[2] = lVar6;
    param_2[1] = (longlong)puVar7;
    if (bVar3) goto LAB_146a23ca6;
  }
  else {
    iVar5 = (int)plVar8[1];
    do {
      if (iVar5 == 0) goto LAB_146a23d8b;
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    if (*param_1 == 0) {
      bVar3 = false;
      goto LAB_146a23d8d;
    }
    FUN_1469362b0(*param_1,param_2,param_5,param_3);
  }
  LOCK();
  plVar2 = plVar8 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 == 0) {
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
LAB_146a23ca6:
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_b8 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar1 = (int *)((longlong)local_b8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_b8 + 0x10))(local_b8);
      }
    }
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_68 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a23deb FUN_146a23deb body=1505 status=ok
// SIG undefined FUN_146a23deb(void)

undefined4 *
FUN_146a23deb(longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
             undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  int iVar16;
  bool bVar17;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined1 local_160;
  uint local_14c;
  longlong *local_148;
  longlong local_140;
  uint local_138;
  uint uStack_134;
  uint local_12c;
  undefined8 local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  int iStack_100;
  uint uStack_fc;
  undefined6 local_f8;
  undefined2 uStack_f2;
  undefined6 uStack_f0;
  undefined1 local_e8 [56];
  longlong *local_b0;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  uint uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  uint uStack_6c;
  char local_68;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  plVar3 = (longlong *)*param_1;
  plVar4 = (longlong *)plVar3[1];
  puVar15 = (undefined4 *)&DAT_ffffffff;
  if (plVar4 != (longlong *)0x0) {
    iVar16 = (int)plVar4[1];
    do {
      if (iVar16 == 0) goto LAB_146a240f4;
      LOCK();
      iVar13 = (int)plVar4[1];
      bVar17 = iVar16 == iVar13;
      if (bVar17) {
        *(int *)(plVar4 + 1) = iVar16 + 1;
        iVar13 = iVar16;
      }
      iVar16 = iVar13;
      UNLOCK();
    } while (!bVar17);
    lVar5 = *plVar3;
    if (lVar5 == 0) {
      puVar15 = (undefined4 *)&DAT_ffffffff;
    }
    else {
      FUN_140863c1e(*param_1,&local_88,param_2,param_4);
      local_170 = param_5;
      local_178 = CONCAT44(local_178._4_4_,*(undefined4 *)((longlong)param_3 + 4));
      local_160 = 1;
      local_168 = 0;
      FUN_146935b82(CONCAT44(uStack_84,local_88),&local_78,lVar5,*(undefined4 *)param_3);
      if (local_68 == '\0') {
        uStack_f0 = (undefined6)((ulonglong)*(undefined8 *)((longlong)param_2 + 6) >> 0x10);
        local_f8 = (undefined6)*param_2;
        uStack_f2 = (undefined2)((ulonglong)*param_2 >> 0x30);
        FUN_144a87366(local_e8,param_2 + 2);
        local_f8 = (undefined6)*param_3;
        uStack_f2 = (undefined2)((ulonglong)*param_3 >> 0x30);
        FUN_140863c1e(*param_1,&local_108,&local_f8,param_4);
        uVar10 = uStack_7c;
        iVar16 = iStack_80;
        uVar9 = uStack_84;
        uVar8 = local_88;
        local_88 = local_108;
        uStack_84 = uStack_104;
        iStack_80 = iStack_100;
        uStack_7c = uStack_fc;
        local_108 = uVar8;
        uStack_104 = uVar9;
        iStack_100 = iVar16;
        uStack_fc = uVar10;
        plVar3 = (longlong *)CONCAT44(uVar10,iVar16);
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
        local_178 = local_178 & 0xffffffff00000000;
        FUN_14693590c(CONCAT44(uStack_84,local_88),&local_108,lVar5,param_5);
        plVar3 = local_b0;
        local_78 = local_108;
        uStack_74 = uStack_104;
        iStack_70 = iStack_100;
        uStack_6c = uStack_fc;
        local_68 = '\x01';
        if (local_b0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_b0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_b0)(local_b0);
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
      lVar6 = CONCAT44(uStack_74,local_78);
      if ((lVar6 == 0) || (*(byte *)(lVar6 + 0x22) < 2)) {
        puVar15 = (undefined4 *)(ulonglong)uStack_6c;
      }
      else {
        puVar15 = &local_108;
        local_140 = lVar5;
        FUN_14006620a(puVar15,param_4 + (longlong)*(int *)(lVar6 + 0x14) * 2,
                      *(undefined1 *)(lVar6 + 0x21));
        FUN_140e9ef24(&local_118);
        (**(code **)(*local_118 + 0x18))(local_118,puVar15);
        uStack_f0 = (undefined6)((ulonglong)*(undefined8 *)((longlong)param_2 + 6) >> 0x10);
        local_f8 = (undefined6)*param_2;
        uStack_f2 = (undefined2)((ulonglong)*param_2 >> 0x30);
        FUN_144a87366(local_e8,param_2 + 2);
        iVar16 = iStack_70;
        uVar14 = (ulonglong)(iStack_100 - 1);
        if (iStack_100 == 0) {
          uVar14 = 0;
        }
        local_f8 = (undefined6)(uVar14 << 0x20);
        uStack_f2 = (undefined2)(uVar14 >> 0x10);
        if (*(char *)(CONCAT44(uStack_74,local_78) + 0x23) == '\0') {
          local_14c = (**(code **)(*local_118 + 0x60))();
          uVar10 = (**(code **)(*local_118 + 0x78))();
          while (uVar10 != 0xffffffff) {
            puVar15 = (undefined4 *)((ulonglong)puVar15 & 0xffffffff);
            local_178._0_4_ = 0x49dfb77a;
            local_178._4_4_ = 1;
            if (iStack_100 != 0) {
              local_178._0_4_ = local_108;
              local_178._4_4_ = uStack_104;
            }
            local_170._1_3_ = (undefined3)((uint)local_170 >> 8);
            local_170 = CONCAT31(local_170._1_3_,
                                 *(undefined1 *)(CONCAT44(uStack_74,local_78) + 0x23));
            local_138 = local_14c;
            uStack_134 = uVar10;
            FUN_141720e02(&local_128,param_1,&local_f8,&local_138);
            uVar7 = local_128;
            local_178 = CONCAT44(local_178._4_4_,iVar16);
            FUN_14693590c(local_128,&local_138,local_140,param_5);
            lVar5 = CONCAT44(uStack_134,local_138);
            if (lVar5 == 0) {
              iVar13 = FUN_142862942(uVar7);
              iVar16 = iVar16 + iVar13;
              local_14c = uVar10;
            }
            else {
              puVar15 = (undefined4 *)
                        (ulonglong)(local_12c + *(int *)(CONCAT44(uStack_74,local_78) + 0x14));
            }
            plVar3 = local_120;
            if (local_120 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_120 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_120)(local_120);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                }
              }
            }
            if (lVar5 != 0) goto LAB_146a24230;
            uVar10 = (**(code **)(*local_118 + 0x78))();
          }
          puVar15 = (undefined4 *)
                    (ulonglong)
                    ((uint)*(byte *)(CONCAT44(uStack_74,local_78) + 0x21) +
                    *(int *)(CONCAT44(uStack_74,local_78) + 0x14));
        }
        else {
          uVar10 = (**(code **)(*local_118 + 0x68))();
          uVar11 = (**(code **)(*local_118 + 0x70))();
          plVar1 = param_1;
          plVar3 = local_148;
          while (local_148 = plVar1, uVar11 != 0xffffffff) {
            local_14c = (uint)puVar15;
            local_178._0_4_ = 0x49dfb77a;
            local_178._4_4_ = 1;
            if (iStack_100 != 0) {
              local_178._0_4_ = local_108;
              local_178._4_4_ = uStack_104;
            }
            local_170._1_3_ = (undefined3)((uint)local_170 >> 8);
            local_170 = CONCAT31(local_170._1_3_,
                                 *(undefined1 *)(CONCAT44(uStack_74,local_78) + 0x23));
            local_138 = uVar11;
            uStack_134 = uVar10;
            FUN_141720e02(&local_128,param_1,&local_f8,&local_138);
            uVar7 = local_128;
            local_178 = CONCAT44(local_178._4_4_,iVar16);
            FUN_14693590c(local_128,&local_138,local_140,param_5);
            lVar5 = CONCAT44(uStack_134,local_138);
            if (lVar5 == 0) {
              iVar13 = FUN_142862942(uVar7);
              iVar16 = iVar16 + iVar13;
              uVar12 = local_14c;
            }
            else {
              uVar11 = uVar10;
              if (uVar10 == 0xffffffff) {
                uVar11 = local_12c;
              }
              uVar12 = uVar11 + *(int *)(CONCAT44(uStack_74,local_78) + 0x14);
              uVar11 = uVar10;
            }
            plVar3 = local_120;
            param_1 = local_148;
            puVar15 = (undefined4 *)(ulonglong)uVar12;
            if (local_120 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_120 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_120)(local_120);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                }
              }
            }
            if (lVar5 != 0) goto LAB_146a24230;
            uVar12 = (**(code **)(*local_118 + 0x70))();
            plVar1 = local_148;
            uVar10 = uVar11;
            plVar3 = local_148;
            uVar11 = uVar12;
          }
          puVar15 = (undefined4 *)(ulonglong)*(uint *)(CONCAT44(uStack_74,local_78) + 0x14);
          local_148 = plVar3;
        }
LAB_146a24230:
        if (local_b0 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_b0 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_b0)(local_b0);
            LOCK();
            piVar2 = (int *)((longlong)local_b0 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_b0 + 0x10))(local_b0);
            }
          }
        }
        if (local_110 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_110 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_110)(local_110);
            LOCK();
            piVar2 = (int *)((longlong)local_110 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_110 + 0x10))(local_110);
            }
          }
        }
        if (CONCAT44(uStack_104,local_108) != 0) {
          FUN_1400020a8();
        }
      }
      plVar3 = (longlong *)CONCAT44(uStack_7c,iStack_80);
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
    }
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
LAB_146a240f4:
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return puVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a243ce FUN_146a243ce body=38 status=ok
// SIG undefined FUN_146a243ce(void)

undefined8 FUN_146a243ce(undefined8 param_1,int param_2)

{
  FUN_146a01242();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a2440c FUN_146a2440c body=69 status=ok
// SIG undefined FUN_146a2440c(void)

undefined8 * FUN_146a2440c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f06050;
  if ((longlong *)param_1[0x17] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x17] + 0x10))();
  }
  FUN_146a4c1fa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a24452 FUN_146a24452 body=38 status=ok
// SIG undefined FUN_146a24452(void)

undefined8 FUN_146a24452(undefined8 param_1,int param_2)

{
  FUN_146a3e3ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a24478 FUN_146a24478 body=38 status=ok
// SIG undefined FUN_146a24478(void)

undefined8 FUN_146a24478(undefined8 param_1,int param_2)

{
  FUN_146a4c1fa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a2449e FUN_146a2449e body=38 status=ok
// SIG undefined FUN_146a2449e(void)

undefined8 FUN_146a2449e(undefined8 param_1,int param_2)

{
  FUN_146a2f548();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a244c4 FUN_146a244c4 body=38 status=ok
// SIG undefined FUN_146a244c4(void)

undefined8 FUN_146a244c4(undefined8 param_1,int param_2)

{
  FUN_146a1e686();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a2459e FUN_146a2459e body=38 status=ok
// SIG undefined FUN_146a2459e(void)

undefined8 FUN_146a2459e(undefined8 param_1,int param_2)

{
  FUN_146a20a7e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a245c4 FUN_146a245c4 body=38 status=ok
// SIG undefined FUN_146a245c4(void)

undefined8 FUN_146a245c4(undefined8 param_1,int param_2)

{
  FUN_146a4c2b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a245ea FUN_146a245ea body=29 status=ok
// SIG undefined FUN_146a245ea(void)

undefined8 FUN_146a245ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a24608 FUN_146a24608 body=226 status=ok
// SIG undefined FUN_146a24608(void)

undefined8 FUN_146a24608(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  local_28[4] = 0;
  local_28[5] = 0;
  local_28[6] = 0;
  local_28[7] = 0;
  local_28[8] = 0;
  local_28[9] = 0;
  local_28[10] = 0;
  *local_28 = &PTR_FUN_149edb640;
  local_28[1] = 0;
  local_28[2] = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  local_28[3] = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_28[5] = 0;
  local_28[6] = 0;
  local_28[7] = 0;
  *(undefined4 *)(local_28 + 8) = 1;
  *(undefined1 **)((longlong)local_28 + 0x44) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)local_28 + 0x4c) = 0;
  *local_28 = &PTR_FUN_149f050f0;
  local_28[4] = &PTR_LAB_149f05100;
  FUN_146a246ec(param_2,&local_28,param_1 + 0x1e0,param_3);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a246ec FUN_146a246ec body=138 status=ok
// SIG undefined FUN_146a246ec(void)

undefined8 *
FUN_146a246ec(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *param_2;
  *param_2 = 0;
  param_1[1] = lVar1;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xad) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *param_1 = &PTR_FUN_149f0eac0;
  param_1[0x19] = param_3;
  *(undefined4 *)(param_1 + 0x1a) = param_4;
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return param_1;
}



// FUNCTION 146a24776 FUN_146a24776 body=38 status=ok
// SIG undefined FUN_146a24776(void)

undefined8 FUN_146a24776(undefined8 param_1,int param_2)

{
  FUN_146a071ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146a2479c FUN_146a2479c body=183 status=ok
// SIG undefined FUN_146a2479c(void)

longlong * FUN_146a2479c(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,6,0x10);
  *(undefined4 *)(param_1 + 1) = 6;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_149f0f120;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  puVar1[2] = lVar6;
  *puVar1 = &PTR_FUN_149f09450;
  puVar1[4] = *param_2;
  puVar1[6] = param_2[2];
  param_2[2] = 0;
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  uVar4 = param_2[7];
  puVar1[10] = param_2[6];
  puVar1[0xb] = uVar4;
  puVar1[8] = uVar2;
  puVar1[9] = uVar3;
  if (puVar1[4] != 0) {
    *param_2 = 0;
  }
  return param_1;
}



// FUNCTION 146a24854 FUN_146a24854 body=130 status=ok
// SIG undefined FUN_146a24854(void)

void FUN_146a24854(longlong *param_1,longlong *param_2)

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



// FUNCTION 146a248d8 FUN_146a248d8 body=71 status=ok
// SIG undefined FUN_146a248d8(void)

undefined8 * FUN_146a248d8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_149f09450;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


