// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147664d40 FUN_147664d40 body=85 status=ok
// SIG undefined FUN_147664d40(void)

void FUN_147664d40(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000147664d8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147664d95 FUN_147664d95 body=43 status=ok
// SIG undefined FUN_147664d95(void)

void FUN_147664d95(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 147664dc0 FUN_147664dc0 body=88 status=ok
// SIG undefined FUN_147664dc0(void)

void FUN_147664dc0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 5,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 5)) {
    uVar3 = uVar1 >> 5 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x20,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 147664e18 FUN_147664e18 body=62 status=ok
// SIG undefined FUN_147664e18(void)

void FUN_147664e18(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147664e56(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 147664e56 FUN_147664e56 body=93 status=ok
// SIG undefined FUN_147664e56(void)

ulonglong FUN_147664e56(uint param_1,uint param_2)

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



// FUNCTION 147664eb4 FUN_147664eb4 body=49 status=ok
// SIG undefined FUN_147664eb4(void)

undefined8 * FUN_147664eb4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4d5d50;
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147664ee6 FUN_147664ee6 body=49 status=ok
// SIG undefined FUN_147664ee6(void)

undefined8 * FUN_147664ee6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4d5d70;
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147664f18 FUN_147664f18 body=208 status=ok
// SIG undefined FUN_147664f18(void)

void FUN_147664f18(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar3 = (undefined8 *)FUN_14001cc68(0x68,8);
  FUN_1476650e0(puVar3,param_2);
  *puVar3 = &PTR_FUN_14a4d6dc0;
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar4 = param_1;
  }
  puVar1 = (undefined8 *)(lVar4 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
  FUN_14055f024(puVar1);
  *(byte *)(puVar1 + 8) = (*(byte *)(puVar1 + 8) & 0xfc) + 1;
  *puVar1 = puVar3;
  *(undefined4 *)(puVar1 + 1) = local_60;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_5c;
  *(undefined4 *)(puVar1 + 2) = uStack_58;
  *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_54;
  *(undefined4 *)(puVar1 + 3) = local_50;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = uStack_4c;
  *(undefined4 *)(puVar1 + 4) = uStack_48;
  *(undefined4 *)((longlong)puVar1 + 0x24) = uStack_44;
  *(undefined4 *)(puVar1 + 5) = local_40;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = uStack_3c;
  *(undefined4 *)(puVar1 + 6) = uStack_38;
  *(undefined4 *)((longlong)puVar1 + 0x34) = uStack_34;
  puVar1[7] = local_30;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147664fea FUN_147664fea body=245 status=ok
// SIG undefined FUN_147664fea(void)

void FUN_147664fea(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar5 = (undefined8 *)&local_68;
  local_28 = 0;
  FUN_147665434(puVar5);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar4 = param_1;
  }
  puVar1 = (undefined4 *)(lVar4 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfc | 2;
  FUN_14055f024(puVar1);
  bVar3 = local_28;
  if ((local_28 & 1) != 0) {
    bVar3 = local_28 & 0xfe;
    *(byte *)(puVar1 + 0x10) = (*(byte *)(puVar1 + 0x10) & 0xfc | local_28 & 2) + 1;
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    *(undefined8 *)(puVar1 + 4) = local_58;
    *(undefined8 *)(puVar1 + 6) = uStack_50;
    *(undefined8 *)(puVar1 + 8) = local_48;
    *(undefined8 *)(puVar1 + 10) = uStack_40;
    *(undefined8 *)(puVar1 + 0xc) = local_38;
    *(undefined8 *)(puVar1 + 0xe) = uStack_30;
  }
  if ((bVar3 & 1) != 0) {
    if ((bVar3 & 2) == 0) {
      puVar5 = (undefined8 *)CONCAT44(uStack_64,local_68);
    }
    local_28 = bVar3 & 0xfe;
    (**(code **)*puVar5)(puVar5,0);
    if ((local_28 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476650e0 FUN_1476650e0 body=113 status=ok
// SIG undefined FUN_1476650e0(void)

void FUN_1476650e0(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14a4d6de0;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 8);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 0x10);
  cVar1 = *(char *)(param_2 + 0x20);
  *(char *)(param_1 + 4) = cVar1;
  if (cVar1 == '\x01') {
    param_1[3] = *(undefined8 *)(param_2 + 0x18);
  }
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 0x28);
  cVar1 = *(char *)(param_2 + 0x40);
  *(char *)(param_1 + 8) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    uVar2 = *(undefined8 *)(param_2 + 0x34);
    *(undefined8 *)((longlong)param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)((longlong)param_1 + 0x34) = uVar2;
  }
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  cVar1 = *(char *)(param_2 + 0x58);
  *(char *)(param_1 + 0xb) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 0x50);
    param_1[9] = *(undefined8 *)(param_2 + 0x48);
    param_1[10] = uVar2;
  }
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0x60);
  return;
}



// FUNCTION 147665152 FUN_147665152 body=69 status=ok
// SIG undefined FUN_147665152(void)

undefined8 * FUN_147665152(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4d6de0;
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147665198 FUN_147665198 body=78 status=ok
// SIG undefined FUN_147665198(void)

undefined8 FUN_147665198(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1476652d8();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476651e8 FUN_1476651e8 body=82 status=ok
// SIG undefined FUN_1476651e8(void)

void FUN_1476651e8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_1476653e4(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766523c FUN_14766523c body=85 status=ok
// SIG undefined FUN_14766523c(void)

void FUN_14766523c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = *param_3;
  if (lVar2 == 0) {
    return;
  }
  uVar1 = (undefined4)param_3[1];
  FUN_14760a028(param_1 + 0x10,lVar2,uVar1);
  FUN_140659bfa(param_1 + 0x28,lVar2,uVar1);
  FUN_140659abc(param_1 + 0x44,lVar2,uVar1);
  return;
}



// FUNCTION 147665292 FUN_147665292 body=69 status=ok
// SIG undefined FUN_147665292(void)

undefined8 * FUN_147665292(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4d6de0;
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476652d8 FUN_1476652d8 body=266 status=ok
// SIG undefined FUN_1476652d8(void)

undefined2 * FUN_1476652d8(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60[0] = param_4;
  FUN_1476653e4(local_60,param_1 + 8);
  local_50 = 0;
  local_48 = 0x200000000;
  local_68 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x60) * '\x02' + '\x01',param_4
                ,local_60);
  FUN_140560464(param_3,&local_80,param_4);
  FUN_14766523c(param_1);
  local_90 = local_80;
  local_88 = local_78;
  local_84 = 1;
  FUN_14163869e(local_60,&local_90,&local_68);
  *param_2 = local_70;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476653e4 FUN_1476653e4 body=79 status=ok
// SIG undefined FUN_1476653e4(void)

void FUN_1476653e4(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  FUN_140dba9e6(*param_1,param_2[4]);
  FUN_140dba9e6(*param_1,param_2[0x10]);
  if (*(char *)(param_2 + 0x1f) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1e]);
    return;
  }
  return;
}



// FUNCTION 147665434 FUN_147665434 body=143 status=ok
// SIG undefined FUN_147665434(void)

void FUN_147665434(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar4 = (undefined8 *)FUN_14001cc68(0x48,8);
  *param_1 = puVar4;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar4;
  }
  *param_1 = &PTR_FUN_14a4d6e20;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 8);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 0x10);
  cVar2 = *(char *)(param_2 + 0x20);
  *(char *)(param_1 + 4) = cVar2;
  if (cVar2 == '\x01') {
    param_1[3] = *(undefined8 *)(param_2 + 0x18);
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  cVar2 = *(char *)(param_2 + 0x3c);
  *(char *)((longlong)param_1 + 0x3c) = cVar2;
  if (cVar2 == '\x01') {
    uVar3 = *(undefined8 *)(param_2 + 0x34);
    *(undefined8 *)((longlong)param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)((longlong)param_1 + 0x34) = uVar3;
  }
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0x40);
  *param_1 = &PTR_FUN_14a4d6e00;
  return;
}



// FUNCTION 1476654c4 FUN_1476654c4 body=59 status=ok
// SIG undefined FUN_1476654c4(void)

undefined8 * FUN_1476654c4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4d6e20;
  if (*(char *)((longlong)param_1 + 0x3c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147665500 FUN_147665500 body=78 status=ok
// SIG undefined FUN_147665500(void)

undefined8 FUN_147665500(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147665626();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147665550 FUN_147665550 body=82 status=ok
// SIG undefined FUN_147665550(void)

void FUN_147665550(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_147665750(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x40) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476655a4 FUN_1476655a4 body=70 status=ok
// SIG undefined FUN_1476655a4(void)

void FUN_1476655a4(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_3;
  if (lVar1 == 0) {
    return;
  }
  lVar2 = param_3[1];
  FUN_14760a028(param_1 + 0x10,lVar1,(int)lVar2);
  FUN_140659abc(param_1 + 0x28,lVar1,(int)lVar2);
  return;
}



// FUNCTION 1476655ea FUN_1476655ea body=59 status=ok
// SIG undefined FUN_1476655ea(void)

undefined8 * FUN_1476655ea(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4d6e20;
  if (*(char *)((longlong)param_1 + 0x3c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147665626 FUN_147665626 body=296 status=ok
// SIG undefined FUN_147665626(void)

undefined2 * FUN_147665626(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58[0] = param_4;
  FUN_147665750(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_60 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x40) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_78,param_4);
  uVar2 = local_70;
  lVar1 = local_78;
  if (local_78 == 0) {
    local_78 = 0;
  }
  else {
    FUN_14760a028(param_1 + 0x10,local_78,local_70);
    FUN_140659abc(param_1 + 0x28,lVar1,uVar2);
  }
  local_80 = local_70;
  local_7c = 1;
  local_88 = local_78;
  FUN_14163869e(local_58,&local_88,&local_60);
  *param_2 = local_68;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147665750 FUN_147665750 body=67 status=ok
// SIG undefined FUN_147665750(void)

void FUN_147665750(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  FUN_140dba9e6(*param_1,param_2[4]);
  if (*(char *)(param_2 + 0x11) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x10]);
    return;
  }
  return;
}



// FUNCTION 147665794 FUN_147665794 body=257 status=ok
// SIG undefined FUN_147665794(void)

void FUN_147665794(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = (undefined8 *)&local_68;
  local_28 = 0;
  FUN_147665b6e(puVar4);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar3 = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfc | 2;
  FUN_14055f024(puVar1);
  if ((local_28 & 1) != 0) {
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) | 1;
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfd | local_28 & 2;
    *(undefined8 *)(puVar1 + 0xc) = local_38;
    *(undefined8 *)(puVar1 + 0xe) = uStack_30;
    *(undefined8 *)(puVar1 + 8) = local_48;
    *(undefined8 *)(puVar1 + 10) = uStack_40;
    *(undefined8 *)(puVar1 + 4) = local_58;
    *(undefined8 *)(puVar1 + 6) = uStack_50;
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    local_28 = local_28 & 0xfe;
  }
  if ((local_28 & 1) != 0) {
    if ((local_28 & 2) == 0) {
      puVar4 = (undefined8 *)CONCAT44(uStack_64,local_68);
    }
    local_28 = local_28 & 0xfe;
    (**(code **)*puVar4)(puVar4,0);
    if ((local_28 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147665896 FUN_147665896 body=147 status=ok
// SIG undefined FUN_147665896(void)

undefined8 *
FUN_147665896(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  undefined2 *local_48;
  undefined2 local_34 [2];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = local_34;
  local_30 = *param_4;
  uStack_2c = param_4[1];
  uStack_28 = param_4[2];
  uStack_24 = param_4[3];
  local_20 = param_4[4];
  local_1c = 1;
  local_50 = param_1 + 0x58;
  local_58 = param_1 + 0x40;
  uVar1 = *(undefined1 *)(param_1 + 0x70);
  local_34[0] = param_3;
  FUN_147666274(param_2 + 1,param_1 + 8,param_1 + 0x10,param_1 + 0x28);
  *(undefined1 *)(param_2 + 0x12) = uVar1;
  *param_2 = &PTR_FUN_14a4d6e80;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766592a FUN_14766592a body=167 status=ok
// SIG undefined FUN_14766592a(void)

undefined8 *
FUN_14766592a(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined4 *param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined2 *local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = &local_38;
  local_36 = param_5;
  local_34 = *param_4;
  uStack_30 = param_4[1];
  uStack_2c = param_4[2];
  uStack_28 = param_4[3];
  local_24 = 1;
  local_48 = param_1 + 0x70;
  local_50 = param_1 + 0x58;
  local_58 = param_1 + 0x40;
  uVar1 = *(undefined1 *)(param_1 + 0x90);
  local_38 = param_3;
  FUN_14766652e(param_2 + 1,param_1 + 8,param_1 + 0x10,param_1 + 0x28);
  *(undefined1 *)(param_2 + 0x15) = uVar1;
  *param_2 = &PTR_FUN_14a4d6e40;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476659d2 FUN_1476659d2 body=257 status=ok
// SIG undefined FUN_1476659d2(void)

void FUN_1476659d2(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = (undefined8 *)&local_68;
  local_28 = 0;
  FUN_147666606(puVar4);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar3 = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfc | 2;
  FUN_14055f024(puVar1);
  if ((local_28 & 1) != 0) {
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) | 1;
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfd | local_28 & 2;
    *(undefined8 *)(puVar1 + 0xc) = local_38;
    *(undefined8 *)(puVar1 + 0xe) = uStack_30;
    *(undefined8 *)(puVar1 + 8) = local_48;
    *(undefined8 *)(puVar1 + 10) = uStack_40;
    *(undefined8 *)(puVar1 + 4) = local_58;
    *(undefined8 *)(puVar1 + 6) = uStack_50;
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    local_28 = local_28 & 0xfe;
  }
  if ((local_28 & 1) != 0) {
    if ((local_28 & 2) == 0) {
      puVar4 = (undefined8 *)CONCAT44(uStack_64,local_68);
    }
    local_28 = local_28 & 0xfe;
    (**(code **)*puVar4)(puVar4,0);
    if ((local_28 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147665ad4 FUN_147665ad4 body=153 status=ok
// SIG undefined FUN_147665ad4(void)

undefined8 *
FUN_147665ad4(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined4 *param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined2 *local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = &local_30;
  local_2e = param_5;
  local_2c = *param_4;
  uStack_28 = param_4[1];
  uStack_24 = param_4[2];
  uStack_20 = param_4[3];
  local_1c = 1;
  local_40 = param_1 + 0x58;
  local_48 = param_1 + 0x40;
  uVar1 = *(undefined1 *)(param_1 + 0x70);
  local_30 = param_3;
  FUN_147666ad2(param_2 + 1,param_1 + 8,param_1 + 0x10,param_1 + 0x28);
  *(undefined1 *)(param_2 + 0x11) = uVar1;
  *param_2 = &PTR_FUN_14a4d6ec0;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147665b6e FUN_147665b6e body=104 status=ok
// SIG undefined FUN_147665b6e(void)

void FUN_147665b6e(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0xb0,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14a4d6e60;
  FUN_147665db4(param_1 + 1,param_2 + 8);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0xa8);
  *param_1 = &PTR_FUN_14a4d6e40;
  return;
}



// FUNCTION 147665bd6 FUN_147665bd6 body=111 status=ok
// SIG undefined FUN_147665bd6(void)

undefined8 * FUN_147665bd6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4d6e60;
  if (*(char *)(param_1 + 0x14) == '\x01') {
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147665c46 FUN_147665c46 body=78 status=ok
// SIG undefined FUN_147665c46(void)

undefined8 FUN_147665c46(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147665e74();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147665c96 FUN_147665c96 body=85 status=ok
// SIG undefined FUN_147665c96(void)

void FUN_147665c96(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_147665fac(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147665cec FUN_147665cec body=86 status=ok
// SIG undefined FUN_147665cec(void)

void FUN_147665cec(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_14766603e(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147665d44 FUN_147665d44 body=111 status=ok
// SIG undefined FUN_147665d44(void)

undefined8 * FUN_147665d44(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4d6e60;
  if (*(char *)(param_1 + 0x14) == '\x01') {
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147665db4 FUN_147665db4 body=192 status=ok
// SIG undefined FUN_147665db4(void)

void FUN_147665db4(undefined2 *param_1,undefined2 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  cVar1 = *(char *)(param_2 + 0xc);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  cVar1 = *(char *)(param_2 + 0x18);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  cVar1 = *(char *)(param_2 + 0x24);
  *(char *)(param_1 + 0x24) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  cVar1 = *(char *)(param_2 + 0x30);
  *(char *)(param_1 + 0x30) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  }
  param_1[0x34] = param_2[0x34];
  cVar1 = *(char *)(param_2 + 0x40);
  *(char *)(param_1 + 0x40) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(param_2 + 0x3e);
    uVar2 = *(undefined8 *)(param_2 + 0x3a);
    *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x36);
    *(undefined8 *)(param_1 + 0x3a) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x42) = *(undefined4 *)(param_2 + 0x42);
  cVar1 = *(char *)(param_2 + 0x4c);
  *(char *)(param_1 + 0x4c) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x44);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
  }
  return;
}



// FUNCTION 147665e74 FUN_147665e74 body=311 status=ok
// SIG undefined FUN_147665e74(void)

undefined2 * FUN_147665e74(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_147665fac(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0xa8) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_14766603e(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147665fac FUN_147665fac body=145 status=ok
// SIG undefined FUN_147665fac(void)

void FUN_147665fac(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  if (*(char *)(param_2 + 5) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[4]);
  }
  if (*(char *)(param_2 + 0x11) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x10]);
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
  }
  if (*(char *)(param_2 + 0x29) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x28]);
  }
  FUN_140dba9e6(*param_1,param_2[0x34]);
  if (*(char *)(param_2 + 0x43) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x42]);
    return;
  }
  return;
}



// FUNCTION 14766603e FUN_14766603e body=120 status=ok
// SIG undefined FUN_14766603e(void)

void FUN_14766603e(undefined8 *param_1,longlong param_2)

{
  FUN_140659a1a(param_2 + 8,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x50,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659bfa(param_2 + 0x68,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659abc(param_2 + 0x84,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 1476660b6 FUN_1476660b6 body=95 status=ok
// SIG undefined FUN_1476660b6(void)

undefined8 * FUN_1476660b6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4d6ea0;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147666116 FUN_147666116 body=78 status=ok
// SIG undefined FUN_147666116(void)

undefined8 FUN_147666116(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14766631e();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147666166 FUN_147666166 body=85 status=ok
// SIG undefined FUN_147666166(void)

void FUN_147666166(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_147666456(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x90) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476661bc FUN_1476661bc body=86 status=ok
// SIG undefined FUN_1476661bc(void)

void FUN_1476661bc(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_1476664c8(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147666214 FUN_147666214 body=95 status=ok
// SIG undefined FUN_147666214(void)

undefined8 * FUN_147666214(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4d6ea0;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147666274 FUN_147666274 body=170 status=ok
// SIG undefined FUN_147666274(void)

void FUN_147666274(undefined2 *param_1,undefined2 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined2 *param_7)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *param_3;
  cVar1 = *(char *)(param_3 + 4);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 2);
  }
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  cVar1 = *(char *)(param_4 + 4);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_4 + 2);
  }
  *(undefined4 *)(param_1 + 0x1c) = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0x24) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_5 + 2);
  }
  *(undefined4 *)(param_1 + 0x28) = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x30) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_6 + 2);
  }
  param_1[0x34] = *param_7;
  cVar1 = *(char *)(param_7 + 0xc);
  *(char *)(param_1 + 0x40) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(param_7 + 10);
    uVar2 = *(undefined8 *)(param_7 + 6);
    *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_7 + 2);
    *(undefined8 *)(param_1 + 0x3a) = uVar2;
  }
  return;
}



// FUNCTION 14766631e FUN_14766631e body=311 status=ok
// SIG undefined FUN_14766631e(void)

undefined2 * FUN_14766631e(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_147666456(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x90) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_1476664c8(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147666456 FUN_147666456 body=113 status=ok
// SIG undefined FUN_147666456(void)

void FUN_147666456(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  if (*(char *)(param_2 + 5) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[4]);
  }
  if (*(char *)(param_2 + 0x11) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x10]);
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
  }
  if (*(char *)(param_2 + 0x29) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x28]);
  }
  FUN_140dba9e6(*param_1,param_2[0x34]);
  return;
}



// FUNCTION 1476664c8 FUN_1476664c8 body=101 status=ok
// SIG undefined FUN_1476664c8(void)

void FUN_1476664c8(undefined8 *param_1,longlong param_2)

{
  FUN_140659a1a(param_2 + 8,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x50,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659bfa(param_2 + 0x68,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 14766652e FUN_14766652e body=215 status=ok
// SIG undefined FUN_14766652e(void)

void FUN_14766652e(undefined2 *param_1,undefined2 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined2 *param_7,undefined4 *param_8)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *param_3;
  cVar1 = *(char *)(param_3 + 4);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 2);
  }
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  cVar1 = *(char *)(param_4 + 4);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_4 + 2);
  }
  *(undefined4 *)(param_1 + 0x1c) = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0x24) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_5 + 2);
  }
  *(undefined4 *)(param_1 + 0x28) = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x30) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_6 + 2);
  }
  param_1[0x34] = *param_7;
  cVar1 = *(char *)(param_7 + 0xc);
  *(char *)(param_1 + 0x40) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(param_7 + 10);
    uVar2 = *(undefined8 *)(param_7 + 6);
    *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_7 + 2);
    *(undefined8 *)(param_1 + 0x3a) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x42) = *param_8;
  cVar1 = *(char *)(param_8 + 5);
  *(char *)(param_1 + 0x4c) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_8 + 3);
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_8 + 1);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
  }
  return;
}



// FUNCTION 147666606 FUN_147666606 body=104 status=ok
// SIG undefined FUN_147666606(void)

void FUN_147666606(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x90,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14a4d6ee0;
  FUN_14766682c(param_1 + 1,param_2 + 8);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x88);
  *param_1 = &PTR_FUN_14a4d6ec0;
  return;
}



// FUNCTION 14766666e FUN_14766666e body=95 status=ok
// SIG undefined FUN_14766666e(void)

undefined8 * FUN_14766666e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4d6ee0;
  if (*(char *)((longlong)param_1 + 0x84) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x84) = 0;
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476666ce FUN_1476666ce body=78 status=ok
// SIG undefined FUN_1476666ce(void)

undefined8 FUN_1476666ce(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1476668b4();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766671e FUN_14766671e body=85 status=ok
// SIG undefined FUN_14766671e(void)

void FUN_14766671e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_1476669ec(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x88) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147666774 FUN_147666774 body=86 status=ok
// SIG undefined FUN_147666774(void)

void FUN_147666774(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_147666a6c(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476667cc FUN_1476667cc body=95 status=ok
// SIG undefined FUN_1476667cc(void)

undefined8 * FUN_1476667cc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4d6ee0;
  if (*(char *)((longlong)param_1 + 0x84) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x84) = 0;
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14766682c FUN_14766682c body=135 status=ok
// SIG undefined FUN_14766682c(void)

void FUN_14766682c(undefined2 *param_1,undefined2 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  cVar1 = *(char *)(param_2 + 0xc);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  cVar1 = *(char *)(param_2 + 0x18);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  cVar1 = *(char *)(param_2 + 0x24);
  *(char *)(param_1 + 0x24) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  cVar1 = *(char *)(param_2 + 0x30);
  *(char *)(param_1 + 0x30) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  }
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  cVar1 = *(char *)(param_2 + 0x3e);
  *(char *)(param_1 + 0x3e) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 0x3a);
    *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x36);
    *(undefined8 *)(param_1 + 0x3a) = uVar2;
  }
  return;
}



// FUNCTION 1476668b4 FUN_1476668b4 body=311 status=ok
// SIG undefined FUN_1476668b4(void)

undefined2 * FUN_1476668b4(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_1476669ec(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x88) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_147666a6c(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476669ec FUN_1476669ec body=127 status=ok
// SIG undefined FUN_1476669ec(void)

void FUN_1476669ec(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  if (*(char *)(param_2 + 5) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[4]);
  }
  if (*(char *)(param_2 + 0x11) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x10]);
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
  }
  if (*(char *)(param_2 + 0x29) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x28]);
  }
  if (*(char *)(param_2 + 0x35) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x34]);
    return;
  }
  return;
}



// FUNCTION 147666a6c FUN_147666a6c body=101 status=ok
// SIG undefined FUN_147666a6c(void)

void FUN_147666a6c(undefined8 *param_1,longlong param_2)

{
  FUN_140659a1a(param_2 + 8,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x50,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659abc(param_2 + 0x68,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 147666ad2 FUN_147666ad2 body=159 status=ok
// SIG undefined FUN_147666ad2(void)

void FUN_147666ad2(undefined2 *param_1,undefined2 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *param_3;
  cVar1 = *(char *)(param_3 + 4);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 2);
  }
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  cVar1 = *(char *)(param_4 + 4);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_4 + 2);
  }
  *(undefined4 *)(param_1 + 0x1c) = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0x24) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_5 + 2);
  }
  *(undefined4 *)(param_1 + 0x28) = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x30) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_6 + 2);
  }
  *(undefined4 *)(param_1 + 0x34) = *param_7;
  cVar1 = *(char *)(param_7 + 5);
  *(char *)(param_1 + 0x3e) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_7 + 3);
    *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_7 + 1);
    *(undefined8 *)(param_1 + 0x3a) = uVar2;
  }
  return;
}



// FUNCTION 147666b72 FUN_147666b72 body=166 status=ok
// SIG undefined FUN_147666b72(void)

void FUN_147666b72(undefined2 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[1];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[2];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147666c1a FUN_147666c1a body=581 status=ok
// SIG undefined FUN_147666c1a(void)

int * FUN_147666c1a(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong *plVar8;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((((*param_1 == -1) || (param_1[1] == -1)) || (param_1[2] == -1)) ||
     (cVar7 = FUN_147666ef6(param_1,param_3), cVar7 == '\0')) {
    *param_2 = -1;
    goto LAB_147666c60;
  }
  plVar8 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14a4d6f20;
  plVar8[2] = (longlong)&PTR_FUN_14a4d6f38;
  uVar4 = *(undefined4 *)(param_1 + 2);
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar6 = *(undefined4 *)(param_1 + 6);
  *(undefined4 *)((longlong)plVar8 + 0x1c) = *(undefined4 *)param_1;
  *(undefined4 *)(plVar8 + 4) = uVar4;
  *(undefined4 *)((longlong)plVar8 + 0x24) = uVar5;
  *(undefined4 *)(plVar8 + 5) = uVar6;
  *(undefined4 *)((longlong)plVar8 + 0x2c) = *(undefined4 *)(param_1 + 8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
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
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x3c);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x50);
  FUN_147666fa0(param_1,local_70,local_98);
  local_b8 = &local_b0;
  local_c0 = &LAB_147667024;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0xc;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar8 + 2;
  local_c8 = plVar8;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c71394(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_147666dec;
    }
  }
  else {
LAB_147666dec:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
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
LAB_147666c60:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147666e60 FUN_147666e60 body=150 status=ok
// SIG undefined FUN_147666e60(void)

void FUN_147666e60(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  puVar1 = (uint *)*param_2;
  lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  lVar6 = *(longlong *)(lVar2 + 0x20);
  lVar7 = 0;
  lVar5 = lVar6 + (ulonglong)puVar1[2];
  if ((ulonglong)puVar1[2] == 0xffffffff) {
    lVar5 = lVar7;
  }
  lVar9 = lVar6 + (ulonglong)puVar1[1];
  if ((ulonglong)puVar1[1] == 0xffffffff) {
    lVar9 = lVar7;
  }
  lVar6 = lVar6 + (ulonglong)*puVar1;
  if ((ulonglong)*puVar1 == 0xffffffff) {
    lVar6 = lVar7;
  }
  uVar10 = (ulonglong)*(ushort *)(lVar2 + 0xe);
  if (uVar10 != 0) {
    uVar8 = 0;
    do {
      plVar3 = *(longlong **)(lVar6 + uVar8 * 8);
      cVar4 = (**(code **)(*plVar3 + 0x98))
                        (plVar3,*(undefined8 *)(lVar9 + uVar8 * 8),(undefined1 *)(lVar5 + uVar8));
      if (cVar4 == '\0') {
        *(undefined1 *)(lVar5 + uVar8) = 0;
      }
      uVar8 = uVar8 + 1;
    } while (uVar10 != uVar8);
  }
  return;
}



// FUNCTION 147666ef6 FUN_147666ef6 body=170 status=ok
// SIG undefined FUN_147666ef6(void)

undefined8 FUN_147666ef6(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[1];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[2];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4 & bVar5);
}



// FUNCTION 147666fa0 FUN_147666fa0 body=70 status=ok
// SIG undefined FUN_147666fa0(void)

void FUN_147666fa0(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140dba9e6(param_2,*param_1);
  FUN_140dba9e6(param_2,param_1[1]);
  FUN_140dba9e6(param_2,param_1[2]);
  FUN_140dba9e6(param_3,param_1[2]);
  return;
}



// FUNCTION 147666fe6 FUN_147666fe6 body=1 status=ok
// SIG undefined FUN_147666fe6(void)

void FUN_147666fe6(void)

{
  return;
}



// FUNCTION 147666fe8 FUN_147666fe8 body=29 status=ok
// SIG undefined FUN_147666fe8(void)

undefined8 FUN_147666fe8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147667006 FUN_147667006 body=29 status=ok
// SIG undefined FUN_147667006(void)

undefined8 FUN_147667006(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14766703c FUN_14766703c body=263 status=ok
// SIG undefined FUN_14766703c(void)

void FUN_14766703c(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  ushort uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar7 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,3);
  uVar3 = *(ushort *)(param_2 + 0xc);
  uVar2 = (uint)uVar3;
  puVar1 = *(ulonglong **)(param_2 + 0x28);
  if (uVar2 != 0) {
    lVar5 = (ulonglong)uVar3 << 5;
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *param_1) goto LAB_14766708d;
      puVar4 = puVar4 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_14766708d:
  lVar5 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar3 = *(ushort *)(param_2 + 0xc);
    uVar2 = (uint)uVar3;
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar3 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[1]) goto LAB_1476670e1;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_1476670e1:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 4 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar3 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    uVar2 = (uint)uVar3;
  }
  if (uVar3 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == param_1[2]) goto LAB_147667126;
      puVar1 = puVar1 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_147667126:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar5 + 8 + lVar7 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 147667144 FUN_147667144 body=126 status=ok
// SIG undefined FUN_147667144(void)

undefined4 * FUN_147667144(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = param_3[4];
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 6,param_3 + 6);
  *(undefined8 *)(param_1 + 0x26) = 0;
  FUN_1400abb7c(param_1 + 0x1e,param_3 + 0x1e);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1400abb7c(param_1 + 0x28,param_3 + 0x28);
  *(longlong *)(param_1 + 0x32) = param_2;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1476671c2 FUN_1476671c2 body=219 status=ok
// SIG undefined FUN_1476671c2(void)

void FUN_1476671c2(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  ulonglong *local_48;
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = 0xffff;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *param_1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[1];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[2];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766729e FUN_14766729e body=125 status=ok
// SIG undefined FUN_14766729e(void)

void FUN_14766729e(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da764(param_3,&local_30);
  local_28 = *param_2;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da954(param_3,*(undefined2 *)(param_1 + 4),&local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766731c FUN_14766731c body=471 status=ok
// SIG undefined FUN_14766731c(void)

void FUN_14766731c(longlong param_1,undefined8 param_2,short *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 auStack_c8 [32];
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  longlong *local_98;
  int local_90;
  longlong local_88;
  longlong *local_80;
  int local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar11 = *(longlong **)(param_1 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == param_3[2]) goto LAB_14766735a;
      plVar11 = plVar11 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_14766735a:
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == param_3[1]) goto LAB_14766738a;
      plVar9 = plVar9 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_14766738a:
  lVar6 = *plVar11;
  iVar3 = *(int *)(param_1 + 0x14);
  local_a4 = iVar2;
  local_a0 = param_2;
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_1 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *param_3) goto LAB_1476673b9;
      plVar8 = plVar8 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_1476673b9:
  lVar7 = *plVar9;
  iVar2 = *(int *)(param_1 + 0x14);
  local_a8 = iVar3;
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  lVar4 = *plVar8;
  local_78 = local_a8;
  local_60 = local_a0;
  local_58 = local_a4;
  uVar1 = *(ushort *)(param_1 + 0xe);
  local_98 = plVar8;
  local_90 = iVar2;
  local_88 = lVar4;
  local_80 = plVar9;
  local_70 = lVar7;
  local_68 = plVar11;
  local_50 = lVar6;
  if ((ulonglong)uVar1 != 0) {
    uVar10 = 0;
    do {
      plVar11 = *(longlong **)(lVar4 + uVar10 * 8);
      cVar5 = (**(code **)(*plVar11 + 0x98))
                        (plVar11,*(undefined8 *)(lVar7 + uVar10 * 8),(undefined1 *)(lVar6 + uVar10))
      ;
      if (cVar5 == '\0') {
        *(undefined1 *)(lVar6 + uVar10) = 0;
      }
      uVar10 = uVar10 + 1;
    } while (uVar1 != uVar10);
  }
  FUN_1476674f4(&local_98);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476674f4 FUN_1476674f4 body=141 status=ok
// SIG undefined FUN_1476674f4(void)

void FUN_1476674f4(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[7]) {
      uVar3 = param_1[7];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[6] + 0x18) = *(int *)(param_1[6] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[8] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147667573. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 147667582 FUN_147667582 body=29 status=ok
// SIG undefined FUN_147667582(void)

undefined8 FUN_147667582(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476675a0 FUN_1476675a0 body=126 status=ok
// SIG undefined FUN_1476675a0(void)

undefined4 * FUN_1476675a0(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = param_3[4];
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 6,param_3 + 6);
  *(undefined8 *)(param_1 + 0x26) = 0;
  FUN_1400abb7c(param_1 + 0x1e,param_3 + 0x1e);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1400abb7c(param_1 + 0x28,param_3 + 0x28);
  *(longlong *)(param_1 + 0x32) = param_2;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 14766761e FUN_14766761e body=219 status=ok
// SIG undefined FUN_14766761e(void)

void FUN_14766761e(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  ulonglong *local_48;
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = 0xffff;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *param_1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[1];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[2];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476676fa FUN_1476676fa body=125 status=ok
// SIG undefined FUN_1476676fa(void)

void FUN_1476676fa(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da764(param_3,&local_30);
  local_28 = *param_2;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da954(param_3,*(undefined2 *)(param_1 + 4),&local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147667778 FUN_147667778 body=467 status=ok
// SIG undefined FUN_147667778(void)

void FUN_147667778(longlong param_1,undefined8 param_2,short *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 auStack_c8 [32];
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  longlong *local_98;
  int local_90;
  longlong local_88;
  longlong *local_80;
  int local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar11 = *(longlong **)(param_1 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == param_3[2]) goto LAB_1476677b6;
      plVar11 = plVar11 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_1476677b6:
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == param_3[1]) goto LAB_1476677e6;
      plVar9 = plVar9 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_1476677e6:
  lVar6 = *plVar11;
  iVar3 = *(int *)(param_1 + 0x14);
  local_a4 = iVar2;
  local_a0 = param_2;
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_1 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *param_3) goto LAB_147667815;
      plVar8 = plVar8 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_147667815:
  lVar7 = *plVar9;
  iVar2 = *(int *)(param_1 + 0x14);
  local_a8 = iVar3;
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  lVar4 = *plVar8;
  local_78 = local_a8;
  local_60 = local_a0;
  local_58 = local_a4;
  uVar1 = *(ushort *)(param_1 + 0xe);
  local_98 = plVar8;
  local_90 = iVar2;
  local_88 = lVar4;
  local_80 = plVar9;
  local_70 = lVar7;
  local_68 = plVar11;
  local_50 = lVar6;
  if ((ulonglong)uVar1 != 0) {
    uVar10 = 0;
    do {
      cVar5 = FUN_1410676cc(*(undefined8 *)(lVar4 + uVar10 * 8),*(undefined8 *)(lVar7 + uVar10 * 8),
                            (undefined1 *)(lVar6 + uVar10));
      if (cVar5 == '\0') {
        *(undefined1 *)(lVar6 + uVar10) = 0;
      }
      uVar10 = uVar10 + 1;
    } while (uVar1 != uVar10);
  }
  FUN_14766794c(&local_98);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14766794c FUN_14766794c body=141 status=ok
// SIG undefined FUN_14766794c(void)

void FUN_14766794c(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[7]) {
      uVar3 = param_1[7];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[6] + 0x18) = *(int *)(param_1[6] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[8] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476679cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1476679da FUN_1476679da body=29 status=ok
// SIG undefined FUN_1476679da(void)

undefined8 FUN_1476679da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476679f8 FUN_1476679f8 body=231 status=ok
// SIG undefined FUN_1476679f8(void)

void FUN_1476679f8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_108 [32];
  undefined8 local_e8 [10];
  byte local_98;
  undefined8 local_90;
  undefined8 local_88 [10];
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((int)param_2 < *(int *)(param_3 + 0xb)) ||
     (*(int *)((longlong)param_3 + 0x5c) != 0x7fffffff &&
      *(int *)((longlong)param_3 + 0x5c) <= (int)param_2)) {
    FUN_140108c2a(local_e8,param_1,0,param_2);
    if (local_e8 != param_3) {
      local_38 = local_98;
      (*(code *)(&PTR_LAB_14a46c4a0)[local_98])(local_88);
      puVar3 = local_88;
      puVar4 = param_3;
      for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    }
    param_3[0xb] = local_90;
  }
  cVar1 = FUN_144809632(param_3,param_2,param_4);
  if (cVar1 == '\0') {
    *param_4 = 0x10000000000000;
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147667ae0 FUN_147667ae0 body=126 status=ok
// SIG undefined FUN_147667ae0(void)

undefined4 * FUN_147667ae0(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = param_3[4];
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 6,param_3 + 6);
  *(undefined8 *)(param_1 + 0x26) = 0;
  FUN_1400abb7c(param_1 + 0x1e,param_3 + 0x1e);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1400abb7c(param_1 + 0x28,param_3 + 0x28);
  *(longlong *)(param_1 + 0x32) = param_2;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 147667b5e FUN_147667b5e body=255 status=ok
// SIG undefined FUN_147667b5e(void)

void FUN_147667b5e(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  ulonglong *local_48;
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = 0xffff;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *param_1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[1];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[2];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[3];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147667c5e FUN_147667c5e body=164 status=ok
// SIG undefined FUN_147667c5e(void)

void FUN_147667c5e(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da764(param_3,&local_38);
  local_30 = *param_2;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da954(param_3,*(undefined2 *)(param_1 + 4),&local_30);
  local_30 = *param_2;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da954(param_3,*(undefined2 *)(param_1 + 6),&local_30);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147667d04 FUN_147667d04 body=606 status=ok
// SIG undefined FUN_147667d04(void)

void FUN_147667d04(longlong param_1,undefined8 param_2,short *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_f8 [36];
  int local_d4;
  int local_d0;
  int local_cc;
  undefined8 local_c8;
  longlong local_c0;
  longlong *local_b8;
  int local_b0;
  longlong local_a8;
  longlong *local_a0;
  int local_98;
  longlong local_90;
  longlong *local_88;
  undefined8 local_80;
  int local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar11 = *(longlong **)(param_1 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == param_3[3]) goto LAB_147667d42;
      plVar11 = plVar11 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_147667d42:
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == param_3[2]) goto LAB_147667d6e;
      plVar9 = plVar9 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_147667d6e:
  lVar5 = *plVar11;
  iVar3 = *(int *)(param_1 + 0x14);
  local_c8 = param_2;
  if (iVar3 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x28);
    lVar10 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == param_3[1]) goto LAB_147667da2;
      plVar7 = plVar7 + 4;
      lVar10 = lVar10 + -0x20;
    } while (lVar10 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_147667da2:
  lVar10 = *plVar9;
  local_d4 = *(int *)(param_1 + 0x14);
  local_d0 = iVar3;
  local_cc = iVar2;
  if (local_d4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_1 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *param_3) goto LAB_147667dcf;
      plVar8 = plVar8 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_147667dcf:
  lVar6 = *plVar7;
  iVar2 = *(int *)(param_1 + 0x14);
  local_c0 = param_1;
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  lVar4 = *plVar8;
  local_98 = local_d4;
  local_80 = local_c8;
  local_78 = local_d0;
  local_60 = local_c8;
  local_58 = local_cc;
  uVar1 = *(ushort *)(local_c0 + 0xe);
  local_b8 = plVar8;
  local_b0 = iVar2;
  local_a8 = lVar4;
  local_a0 = plVar7;
  local_90 = lVar6;
  local_88 = plVar9;
  local_70 = lVar10;
  local_68 = plVar11;
  local_50 = lVar5;
  if (uVar1 != 0) {
    lVar12 = 0;
    do {
      FUN_1476679f8(*(undefined8 *)(lVar4 + lVar12),*(undefined8 *)(lVar6 + lVar12),lVar10,
                    lVar5 + lVar12);
      lVar12 = lVar12 + 8;
      lVar10 = lVar10 + 0x60;
    } while ((ulonglong)uVar1 * 8 != lVar12);
  }
  FUN_147667f64(&local_b8);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147667f64 FUN_147667f64 body=197 status=ok
// SIG undefined FUN_147667f64(void)

void FUN_147667f64(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_1[10];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[0xb]) {
      uVar3 = param_1[0xb];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[10] + 0x18) = *(int *)(param_1[10] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[0xc] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[10] + 8));
    }
  }
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[7]) {
      uVar3 = param_1[7];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[6] + 0x18) = *(int *)(param_1[6] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[8] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014766801b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 14766802a FUN_14766802a body=166 status=ok
// SIG undefined FUN_14766802a(void)

void FUN_14766802a(undefined2 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[1];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[2];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476680d2 FUN_1476680d2 body=581 status=ok
// SIG undefined FUN_1476680d2(void)

int * FUN_1476680d2(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong *plVar8;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((((*param_1 == -1) || (param_1[1] == -1)) || (param_1[2] == -1)) ||
     (cVar7 = FUN_1476683a4(param_1,param_3), cVar7 == '\0')) {
    *param_2 = -1;
    goto LAB_147668118;
  }
  plVar8 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14a4d6fb0;
  plVar8[2] = (longlong)&PTR_FUN_14a4d6fc8;
  uVar4 = *(undefined4 *)(param_1 + 2);
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar6 = *(undefined4 *)(param_1 + 6);
  *(undefined4 *)((longlong)plVar8 + 0x1c) = *(undefined4 *)param_1;
  *(undefined4 *)(plVar8 + 4) = uVar4;
  *(undefined4 *)((longlong)plVar8 + 0x24) = uVar5;
  *(undefined4 *)(plVar8 + 5) = uVar6;
  *(undefined4 *)((longlong)plVar8 + 0x2c) = *(undefined4 *)(param_1 + 8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
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
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x3c);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x50);
  FUN_14766844e(param_1,local_70,local_98);
  local_b8 = &local_b0;
  local_c0 = &LAB_1476684d2;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0xc;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar8 + 2;
  local_c8 = plVar8;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c71394(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_1476682a4;
    }
  }
  else {
LAB_1476682a4:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
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
LAB_147668118:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147668318 FUN_147668318 body=139 status=ok
// SIG undefined FUN_147668318(void)

void FUN_147668318(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  
  puVar1 = (uint *)*param_2;
  lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  lVar5 = *(longlong *)(lVar2 + 0x20);
  lVar6 = 0;
  lVar3 = lVar5 + (ulonglong)puVar1[2];
  if ((ulonglong)puVar1[2] == 0xffffffff) {
    lVar3 = lVar6;
  }
  lVar4 = lVar5 + (ulonglong)puVar1[1];
  if ((ulonglong)puVar1[1] == 0xffffffff) {
    lVar4 = lVar6;
  }
  lVar5 = lVar5 + (ulonglong)*puVar1;
  if ((ulonglong)*puVar1 == 0xffffffff) {
    lVar5 = lVar6;
  }
  uVar7 = (ulonglong)*(ushort *)(lVar2 + 0xe);
  if (uVar7 != 0) {
    uVar8 = 0;
    do {
      uVar9 = FUN_1475a3a9c(lVar4,*(undefined8 *)(lVar5 + uVar8 * 8));
      *(undefined8 *)(lVar3 + uVar8 * 8) = uVar9;
      uVar8 = uVar8 + 1;
      lVar4 = lVar4 + 0x18;
    } while (uVar7 != uVar8);
  }
  return;
}



// FUNCTION 1476683a4 FUN_1476683a4 body=170 status=ok
// SIG undefined FUN_1476683a4(void)

undefined8 FUN_1476683a4(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[1];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[2];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4 & bVar5);
}



// FUNCTION 14766844e FUN_14766844e body=70 status=ok
// SIG undefined FUN_14766844e(void)

void FUN_14766844e(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140dba9e6(param_2,*param_1);
  FUN_140dba9e6(param_2,param_1[1]);
  FUN_140dba9e6(param_2,param_1[2]);
  FUN_140dba9e6(param_3,param_1[2]);
  return;
}



// FUNCTION 147668494 FUN_147668494 body=1 status=ok
// SIG undefined FUN_147668494(void)

void FUN_147668494(void)

{
  return;
}



// FUNCTION 147668496 FUN_147668496 body=29 status=ok
// SIG undefined FUN_147668496(void)

undefined8 FUN_147668496(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476684b4 FUN_1476684b4 body=29 status=ok
// SIG undefined FUN_1476684b4(void)

undefined8 FUN_1476684b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476684ea FUN_1476684ea body=263 status=ok
// SIG undefined FUN_1476684ea(void)

void FUN_1476684ea(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  ushort uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar7 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,3);
  uVar3 = *(ushort *)(param_2 + 0xc);
  uVar2 = (uint)uVar3;
  puVar1 = *(ulonglong **)(param_2 + 0x28);
  if (uVar2 != 0) {
    lVar5 = (ulonglong)uVar3 << 5;
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *param_1) goto LAB_14766853b;
      puVar4 = puVar4 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_14766853b:
  lVar5 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar3 = *(ushort *)(param_2 + 0xc);
    uVar2 = (uint)uVar3;
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar3 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[1]) goto LAB_14766858f;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_14766858f:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 4 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar3 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    uVar2 = (uint)uVar3;
  }
  if (uVar3 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == param_1[2]) goto LAB_1476685d4;
      puVar1 = puVar1 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_1476685d4:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar5 + 8 + lVar7 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 1476685f2 FUN_1476685f2 body=126 status=ok
// SIG undefined FUN_1476685f2(void)

undefined4 * FUN_1476685f2(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = param_3[4];
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 6,param_3 + 6);
  *(undefined8 *)(param_1 + 0x26) = 0;
  FUN_1400abb7c(param_1 + 0x1e,param_3 + 0x1e);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1400abb7c(param_1 + 0x28,param_3 + 0x28);
  *(longlong *)(param_1 + 0x32) = param_2;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 147668670 FUN_147668670 body=461 status=ok
// SIG undefined FUN_147668670(void)

void FUN_147668670(longlong param_1,undefined8 param_2,short *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined1 auStack_c8 [32];
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  longlong *local_98;
  int local_90;
  longlong local_88;
  longlong *local_80;
  int local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar10 = *(longlong **)(param_1 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == param_3[2]) goto LAB_1476686ae;
      plVar10 = plVar10 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_1476686ae:
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == param_3[1]) goto LAB_1476686de;
      plVar9 = plVar9 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_1476686de:
  lVar5 = *plVar10;
  iVar3 = *(int *)(param_1 + 0x14);
  local_a4 = iVar2;
  local_a0 = param_2;
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *param_3) goto LAB_14766870d;
      plVar7 = plVar7 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_14766870d:
  lVar6 = *plVar9;
  iVar2 = *(int *)(param_1 + 0x14);
  local_a8 = iVar3;
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *plVar7;
  local_78 = local_a8;
  local_60 = local_a0;
  local_58 = local_a4;
  uVar1 = *(ushort *)(param_1 + 0xe);
  local_98 = plVar7;
  local_90 = iVar2;
  local_88 = lVar4;
  local_80 = plVar9;
  local_70 = lVar6;
  local_68 = plVar10;
  local_50 = lVar5;
  if ((ulonglong)uVar1 != 0) {
    uVar8 = 0;
    do {
      uVar11 = FUN_1475a3a9c(lVar6,*(undefined8 *)(lVar4 + uVar8 * 8));
      *(undefined8 *)(lVar5 + uVar8 * 8) = uVar11;
      uVar8 = uVar8 + 1;
      lVar6 = lVar6 + 0x18;
    } while (uVar1 != uVar8);
  }
  FUN_14766883e(&local_98);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14766883e FUN_14766883e body=141 status=ok
// SIG undefined FUN_14766883e(void)

void FUN_14766883e(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[7]) {
      uVar3 = param_1[7];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[6] + 0x18) = *(int *)(param_1[6] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[8] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476688bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1476688cc FUN_1476688cc body=219 status=ok
// SIG undefined FUN_1476688cc(void)

void FUN_1476688cc(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  ulonglong *local_48;
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = 0xffff;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *param_1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[1];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[2];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476689a8 FUN_1476689a8 body=125 status=ok
// SIG undefined FUN_1476689a8(void)

void FUN_1476689a8(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da764(param_3,&local_30);
  local_28 = *param_2;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da954(param_3,*(undefined2 *)(param_1 + 4),&local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147668a26 FUN_147668a26 body=29 status=ok
// SIG undefined FUN_147668a26(void)

undefined8 FUN_147668a26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147668a44 FUN_147668a44 body=126 status=ok
// SIG undefined FUN_147668a44(void)

undefined4 * FUN_147668a44(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = param_3[4];
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 6,param_3 + 6);
  *(undefined8 *)(param_1 + 0x26) = 0;
  FUN_1400abb7c(param_1 + 0x1e,param_3 + 0x1e);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1400abb7c(param_1 + 0x28,param_3 + 0x28);
  *(longlong *)(param_1 + 0x32) = param_2;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 147668ac2 FUN_147668ac2 body=255 status=ok
// SIG undefined FUN_147668ac2(void)

void FUN_147668ac2(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  ulonglong *local_48;
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = 0xffff;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *param_1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[1];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[2];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[3];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147668bc2 FUN_147668bc2 body=164 status=ok
// SIG undefined FUN_147668bc2(void)

void FUN_147668bc2(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da764(param_3,&local_38);
  local_30 = *param_2;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da954(param_3,*(undefined2 *)(param_1 + 4),&local_30);
  local_30 = *param_2;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da954(param_3,*(undefined2 *)(param_1 + 6),&local_30);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147668c68 FUN_147668c68 body=606 status=ok
// SIG undefined FUN_147668c68(void)

void FUN_147668c68(longlong param_1,undefined8 param_2,short *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_f8 [36];
  int local_d4;
  int local_d0;
  int local_cc;
  undefined8 local_c8;
  longlong local_c0;
  longlong *local_b8;
  int local_b0;
  longlong local_a8;
  longlong *local_a0;
  int local_98;
  longlong local_90;
  longlong *local_88;
  undefined8 local_80;
  int local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar11 = *(longlong **)(param_1 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == param_3[3]) goto LAB_147668ca6;
      plVar11 = plVar11 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_147668ca6:
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == param_3[2]) goto LAB_147668cd2;
      plVar9 = plVar9 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_147668cd2:
  lVar5 = *plVar11;
  iVar3 = *(int *)(param_1 + 0x14);
  local_c8 = param_2;
  if (iVar3 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x28);
    lVar10 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == param_3[1]) goto LAB_147668d06;
      plVar7 = plVar7 + 4;
      lVar10 = lVar10 + -0x20;
    } while (lVar10 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_147668d06:
  lVar10 = *plVar9;
  local_d4 = *(int *)(param_1 + 0x14);
  local_d0 = iVar3;
  local_cc = iVar2;
  if (local_d4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_1 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *param_3) goto LAB_147668d33;
      plVar8 = plVar8 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_147668d33:
  lVar6 = *plVar7;
  iVar2 = *(int *)(param_1 + 0x14);
  local_c0 = param_1;
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  lVar4 = *plVar8;
  local_98 = local_d4;
  local_80 = local_c8;
  local_78 = local_d0;
  local_60 = local_c8;
  local_58 = local_cc;
  uVar1 = *(ushort *)(local_c0 + 0xe);
  local_b8 = plVar8;
  local_b0 = iVar2;
  local_a8 = lVar4;
  local_a0 = plVar7;
  local_90 = lVar6;
  local_88 = plVar9;
  local_70 = lVar10;
  local_68 = plVar11;
  local_50 = lVar5;
  if (uVar1 != 0) {
    lVar12 = 0;
    do {
      FUN_14017c27e(*(undefined8 *)(lVar4 + lVar12),*(undefined8 *)(lVar6 + lVar12),lVar10,
                    lVar5 + lVar12);
      lVar12 = lVar12 + 8;
      lVar10 = lVar10 + 0x60;
    } while ((ulonglong)uVar1 * 8 != lVar12);
  }
  FUN_147668ec8(&local_b8);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147668ec8 FUN_147668ec8 body=197 status=ok
// SIG undefined FUN_147668ec8(void)

void FUN_147668ec8(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_1[10];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[0xb]) {
      uVar3 = param_1[0xb];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[10] + 0x18) = *(int *)(param_1[10] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[0xc] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[10] + 8));
    }
  }
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[7]) {
      uVar3 = param_1[7];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[6] + 0x18) = *(int *)(param_1[6] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[8] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147668f7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 147668f8e FUN_147668f8e body=581 status=ok
// SIG undefined FUN_147668f8e(void)

int * FUN_147668f8e(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong *plVar8;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined1 **local_100;
  short *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  short **local_b8;
  short *local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((((*param_1 == -1) || (param_1[1] == -1)) || (param_1[2] == -1)) ||
     (cVar7 = FUN_1476683a4(param_1,param_3), cVar7 == '\0')) {
    *param_2 = -1;
    goto LAB_147668fd4;
  }
  plVar8 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14a4d7010;
  plVar8[2] = (longlong)&PTR_FUN_14a4d7028;
  uVar4 = *(undefined4 *)(param_1 + 2);
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar6 = *(undefined4 *)(param_1 + 6);
  *(undefined4 *)((longlong)plVar8 + 0x1c) = *(undefined4 *)param_1;
  *(undefined4 *)(plVar8 + 4) = uVar4;
  *(undefined4 *)((longlong)plVar8 + 0x24) = uVar5;
  *(undefined4 *)(plVar8 + 5) = uVar6;
  *(undefined4 *)((longlong)plVar8 + 0x2c) = *(undefined4 *)(param_1 + 8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
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
  local_50 = 0;
  FUN_1400abb7c(local_70,param_1 + 0x3c);
  local_78 = 0;
  FUN_1400abb7c(local_98,param_1 + 0x50);
  FUN_14766844e(param_1,local_70,local_98);
  local_b8 = &local_b0;
  local_c0 = &LAB_147669260;
  local_a0 = *(byte *)(param_6 + 8);
  local_b0 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_a0])(local_a8);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_100 = &local_c0;
  local_108 = local_a8;
  local_f8 = param_1 + 0xc;
  local_f0 = local_70;
  local_e8 = local_98;
  local_d0 = plVar8 + 2;
  local_c8 = plVar8;
  FUN_1406ac01c(param_4,param_2,param_5,&local_d0);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c71394(param_4,&local_d4);
      *param_2 = local_d4;
      iVar3 = local_d4;
      if (local_d4 != -1) goto LAB_147669160;
    }
  }
  else {
LAB_147669160:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
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
LAB_147668fd4:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1476691d4 FUN_1476691d4 body=77 status=ok
// SIG undefined FUN_1476691d4(void)

void FUN_1476691d4(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_147669278(*(undefined8 *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147669222 FUN_147669222 body=1 status=ok
// SIG undefined FUN_147669222(void)

void FUN_147669222(void)

{
  return;
}



// FUNCTION 147669224 FUN_147669224 body=29 status=ok
// SIG undefined FUN_147669224(void)

undefined8 FUN_147669224(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147669242 FUN_147669242 body=29 status=ok
// SIG undefined FUN_147669242(void)

undefined8 FUN_147669242(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147669278 FUN_147669278 body=128 status=ok
// SIG undefined FUN_147669278(void)

void FUN_147669278(longlong param_1,undefined8 *param_2)

{
  ushort uVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  
  puVar2 = (uint *)*param_2;
  lVar5 = *(longlong *)(param_1 + 0x20);
  lVar6 = 0;
  lVar3 = lVar5 + (ulonglong)puVar2[2];
  if ((ulonglong)puVar2[2] == 0xffffffff) {
    lVar3 = lVar6;
  }
  lVar4 = lVar5 + (ulonglong)puVar2[1];
  if ((ulonglong)puVar2[1] == 0xffffffff) {
    lVar4 = lVar6;
  }
  lVar5 = lVar5 + (ulonglong)*puVar2;
  if ((ulonglong)*puVar2 == 0xffffffff) {
    lVar5 = lVar6;
  }
  uVar1 = *(ushort *)(param_1 + 0xe);
  if ((ulonglong)uVar1 != 0) {
    uVar7 = 0;
    do {
      fVar8 = (float)FUN_1475a4694(lVar4,*(undefined8 *)(lVar5 + uVar7 * 8));
      *(double *)(lVar3 + uVar7 * 8) = (double)fVar8;
      uVar7 = uVar7 + 1;
      lVar4 = lVar4 + 0x18;
    } while (uVar1 != uVar7);
  }
  return;
}



// FUNCTION 1476692f8 FUN_1476692f8 body=126 status=ok
// SIG undefined FUN_1476692f8(void)

undefined4 * FUN_1476692f8(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = param_3[4];
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 6,param_3 + 6);
  *(undefined8 *)(param_1 + 0x26) = 0;
  FUN_1400abb7c(param_1 + 0x1e,param_3 + 0x1e);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1400abb7c(param_1 + 0x28,param_3 + 0x28);
  *(longlong *)(param_1 + 0x32) = param_2;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 147669376 FUN_147669376 body=465 status=ok
// SIG undefined FUN_147669376(void)

void FUN_147669376(longlong param_1,undefined8 param_2,short *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  float fVar11;
  undefined1 auStack_c8 [32];
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  longlong *local_98;
  int local_90;
  longlong local_88;
  longlong *local_80;
  int local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar10 = *(longlong **)(param_1 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == param_3[2]) goto LAB_1476693b4;
      plVar10 = plVar10 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_1476693b4:
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == param_3[1]) goto LAB_1476693e4;
      plVar9 = plVar9 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_1476693e4:
  lVar5 = *plVar10;
  iVar3 = *(int *)(param_1 + 0x14);
  local_a4 = iVar2;
  local_a0 = param_2;
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *param_3) goto LAB_147669413;
      plVar7 = plVar7 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_147669413:
  lVar6 = *plVar9;
  iVar2 = *(int *)(param_1 + 0x14);
  local_a8 = iVar3;
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *plVar7;
  local_78 = local_a8;
  local_60 = local_a0;
  local_58 = local_a4;
  uVar1 = *(ushort *)(param_1 + 0xe);
  local_98 = plVar7;
  local_90 = iVar2;
  local_88 = lVar4;
  local_80 = plVar9;
  local_70 = lVar6;
  local_68 = plVar10;
  local_50 = lVar5;
  if ((ulonglong)uVar1 != 0) {
    uVar8 = 0;
    do {
      fVar11 = (float)FUN_1475a4694(lVar6,*(undefined8 *)(lVar4 + uVar8 * 8));
      *(double *)(lVar5 + uVar8 * 8) = (double)fVar11;
      uVar8 = uVar8 + 1;
      lVar6 = lVar6 + 0x18;
    } while (uVar1 != uVar8);
  }
  FUN_14766883e(&local_98);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147669548 FUN_147669548 body=77 status=ok
// SIG undefined FUN_147669548(void)

void FUN_147669548(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_14766973a(*(undefined8 *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147669596 FUN_147669596 body=70 status=ok
// SIG undefined FUN_147669596(void)

void FUN_147669596(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140dba9e6(param_2,*param_1);
  FUN_140dba9e6(param_2,param_1[1]);
  FUN_140dba9e6(param_2,param_1[2]);
  FUN_140dba9e6(param_3,param_1[2]);
  return;
}



// FUNCTION 1476695dc FUN_1476695dc body=1 status=ok
// SIG undefined FUN_1476695dc(void)

void FUN_1476695dc(void)

{
  return;
}



// FUNCTION 1476695de FUN_1476695de body=29 status=ok
// SIG undefined FUN_1476695de(void)

undefined8 FUN_1476695de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476695fc FUN_1476695fc body=29 status=ok
// SIG undefined FUN_1476695fc(void)

undefined8 FUN_1476695fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147669632 FUN_147669632 body=263 status=ok
// SIG undefined FUN_147669632(void)

void FUN_147669632(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  ushort uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar7 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,3);
  uVar3 = *(ushort *)(param_2 + 0xc);
  uVar2 = (uint)uVar3;
  puVar1 = *(ulonglong **)(param_2 + 0x28);
  if (uVar2 != 0) {
    lVar5 = (ulonglong)uVar3 << 5;
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *param_1) goto LAB_147669683;
      puVar4 = puVar4 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_147669683:
  lVar5 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar3 = *(ushort *)(param_2 + 0xc);
    uVar2 = (uint)uVar3;
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar3 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[1]) goto LAB_1476696d7;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_1476696d7:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 4 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar3 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    uVar2 = (uint)uVar3;
  }
  if (uVar3 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == param_1[2]) goto LAB_14766971c;
      puVar1 = puVar1 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_14766971c:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar5 + 8 + lVar7 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 14766973a FUN_14766973a body=139 status=ok
// SIG undefined FUN_14766973a(void)

void FUN_14766973a(longlong param_1,undefined8 *param_2)

{
  ushort uVar1;
  uint *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  puVar2 = (uint *)*param_2;
  lVar5 = *(longlong *)(param_1 + 0x20);
  lVar6 = 0;
  lVar4 = lVar5 + (ulonglong)puVar2[2];
  if ((ulonglong)puVar2[2] == 0xffffffff) {
    lVar4 = lVar6;
  }
  lVar7 = lVar5 + (ulonglong)puVar2[1];
  if ((ulonglong)puVar2[1] == 0xffffffff) {
    lVar7 = lVar6;
  }
  lVar5 = lVar5 + (ulonglong)*puVar2;
  if ((ulonglong)*puVar2 == 0xffffffff) {
    lVar5 = lVar6;
  }
  uVar1 = *(ushort *)(param_1 + 0xe);
  if (uVar1 != 0) {
    lVar6 = 0;
    do {
      cVar3 = FUN_14752e8c0(*(undefined8 *)(lVar5 + lVar6 * 2),*(undefined8 *)(lVar7 + lVar6 * 2),
                            (undefined4 *)(lVar4 + lVar6));
      if (cVar3 == '\0') {
        *(undefined4 *)(lVar4 + lVar6) = 0x80000000;
      }
      lVar6 = lVar6 + 4;
    } while ((ulonglong)uVar1 * 4 != lVar6);
  }
  return;
}



// FUNCTION 1476697c6 FUN_1476697c6 body=126 status=ok
// SIG undefined FUN_1476697c6(void)

undefined4 * FUN_1476697c6(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = param_3[4];
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 6,param_3 + 6);
  *(undefined8 *)(param_1 + 0x26) = 0;
  FUN_1400abb7c(param_1 + 0x1e,param_3 + 0x1e);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1400abb7c(param_1 + 0x28,param_3 + 0x28);
  *(longlong *)(param_1 + 0x32) = param_2;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 147669844 FUN_147669844 body=219 status=ok
// SIG undefined FUN_147669844(void)

void FUN_147669844(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  ulonglong *local_48;
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = 0xffff;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *param_1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[1];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[2];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147669920 FUN_147669920 body=125 status=ok
// SIG undefined FUN_147669920(void)

void FUN_147669920(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da764(param_3,&local_30);
  local_28 = *param_2;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da954(param_3,*(undefined2 *)(param_1 + 4),&local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766999e FUN_14766999e body=475 status=ok
// SIG undefined FUN_14766999e(void)

void FUN_14766999e(longlong param_1,undefined8 param_2,short *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_c8 [32];
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  longlong *local_98;
  int local_90;
  longlong local_88;
  longlong *local_80;
  int local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar11 = *(longlong **)(param_1 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == param_3[2]) goto LAB_1476699dc;
      plVar11 = plVar11 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_1476699dc:
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == param_3[1]) goto LAB_147669a0c;
      plVar9 = plVar9 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_147669a0c:
  lVar6 = *plVar11;
  iVar3 = *(int *)(param_1 + 0x14);
  local_a4 = iVar2;
  local_a0 = param_2;
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_1 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_1 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *param_3) goto LAB_147669a3b;
      plVar8 = plVar8 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_147669a3b:
  lVar7 = *plVar9;
  iVar2 = *(int *)(param_1 + 0x14);
  local_a8 = iVar3;
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  lVar4 = *plVar8;
  local_78 = local_a8;
  local_60 = local_a0;
  local_58 = local_a4;
  uVar1 = *(ushort *)(param_1 + 0xe);
  local_98 = plVar8;
  local_90 = iVar2;
  local_88 = lVar4;
  local_80 = plVar9;
  local_70 = lVar7;
  local_68 = plVar11;
  local_50 = lVar6;
  if (uVar1 != 0) {
    lVar10 = 0;
    do {
      cVar5 = FUN_14752e8c0(*(undefined8 *)(lVar4 + lVar10 * 2),*(undefined8 *)(lVar7 + lVar10 * 2),
                            (undefined4 *)(lVar6 + lVar10));
      if (cVar5 == '\0') {
        *(undefined4 *)(lVar6 + lVar10) = 0x80000000;
      }
      lVar10 = lVar10 + 4;
    } while ((ulonglong)uVar1 * 4 != lVar10);
  }
  FUN_147669b7a(&local_98);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147669b7a FUN_147669b7a body=141 status=ok
// SIG undefined FUN_147669b7a(void)

void FUN_147669b7a(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[7]) {
      uVar3 = param_1[7];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[6] + 0x18) = *(int *)(param_1[6] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[8] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147669bf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 147669c08 FUN_147669c08 body=436 status=ok
// SIG undefined FUN_147669c08(void)

longlong * FUN_147669c08(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147669dbe();
  if (*param_2 != 0) goto LAB_147669c36;
  plVar3 = (longlong *)FUN_14001cc68(0xf0);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a4d7070;
  plVar4 = plVar3 + 2;
  memset(plVar3 + 3,0,0xd0);
  FUN_147669f54(plVar4);
  plVar3[2] = (longlong)&PTR_FUN_14a4d7090;
  plVar3[0x1d] = (longlong)&PTR_FUN_14a4d70e0;
  local_40 = plVar4;
  local_38 = plVar3;
  FUN_14766b5c4(&local_40,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_2 = 0x10;
    plVar4 = (longlong *)param_2[1];
    if (plVar4 != (longlong *)0x0) {
      param_2[1] = 0;
LAB_147669d82:
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x000147669d72:
        if (iVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_2 = (longlong)plVar4;
    plVar4 = (longlong *)param_2[1];
    if (plVar3 == plVar4) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar4 = plVar3;
        goto joined_r0x000147669d72;
      }
    }
    else {
      param_2[1] = (longlong)plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_147669d82;
    }
  }
  plVar4 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)*param_2;
  (**(code **)(*plVar4 + 0x10))(plVar4,param_3,param_1);
  local_48 = param_2[1];
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  local_50 = plVar4;
  FUN_147669e72(param_1,param_3,&local_50);
LAB_147669c36:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147669dbe FUN_147669dbe body=179 status=ok
// SIG undefined FUN_147669dbe(void)

undefined8 * FUN_147669dbe(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar3 = *(uint *)(param_1 + 0xf0);
  uVar8 = (ulonglong)uVar3;
  lVar4 = *(longlong *)(param_1 + 0xe8);
  uVar11 = 0;
  if (0 < (int)uVar3) {
    do {
      uVar10 = (int)(uVar8 >> 1) + uVar11;
      uVar9 = (uint)uVar8;
      if (*(uint *)(lVar4 + (ulonglong)uVar10 * 0x18) < param_3) {
        uVar11 = uVar10 + (uVar9 & 1);
      }
      uVar8 = uVar8 >> 1;
    } while (1 < uVar9);
  }
  if (((int)uVar11 < (int)uVar3) && (*(uint *)(lVar4 + (ulonglong)uVar11 * 0x18) <= param_3)) {
    lVar4 = lVar4 + (ulonglong)uVar11 * 0x18;
    puVar7 = (undefined8 *)(lVar4 + 8);
    if (puVar7 != (undefined8 *)0x0) {
      uVar6 = *puVar7;
      plVar5 = *(longlong **)(lVar4 + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *param_2 = uVar6;
        param_2[1] = plVar5;
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) {
          return param_2;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return param_2;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return param_2;
      }
      goto LAB_147669e18;
    }
  }
  uVar6 = 0;
LAB_147669e18:
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 147669e72 FUN_147669e72 body=184 status=ok
// SIG undefined FUN_147669e72(void)

void FUN_147669e72(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_28 = (longlong *)param_3[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  local_1c = param_2;
  FUN_140dd6482(param_1 + 0xe8,&local_1c,&local_30);
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147669f2c FUN_147669f2c body=9 status=ok
// SIG undefined FUN_147669f2c(void)

void FUN_147669f2c(longlong param_1)

{
  FUN_14766aa96(param_1 + 0x10);
  return;
}



// FUNCTION 147669f36 FUN_147669f36 body=29 status=ok
// SIG undefined FUN_147669f36(void)

undefined8 FUN_147669f36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147669f54 FUN_147669f54 body=134 status=ok
// SIG undefined FUN_147669f54(void)

void FUN_147669f54(undefined8 *param_1)

{
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_14a4d7100;
  param_1[0x1b] = &PTR_FUN_14a4d7150;
  return;
}



// FUNCTION 147669fda FUN_147669fda body=38 status=ok
// SIG undefined FUN_147669fda(void)

undefined8 FUN_147669fda(undefined8 param_1,int param_2)

{
  FUN_14766aa96();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14766a00c FUN_14766a00c body=25 status=ok
// SIG undefined FUN_14766a00c(void)

void FUN_14766a00c(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  FUN_140dd6aee(param_1 + 200);
  return;
}



// FUNCTION 14766a026 FUN_14766a026 body=62 status=ok
// SIG undefined FUN_14766a026(void)

void FUN_14766a026(void)

{
  undefined8 *in_R9;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *in_R9;
  FUN_14766ab32();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766a066 FUN_14766a066 body=902 status=ok
// SIG undefined FUN_14766a066(void)

ulonglong FUN_14766a066(longlong param_1,int param_2,char param_3,char param_4)

{
  void *pvVar1;
  byte bVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  ulonglong unaff_RBP;
  undefined7 uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar5 == '\0') goto LAB_14766a0d5;
  }
  uVar9 = (undefined7)(unaff_RBP >> 8);
  if (param_3 == '\x01') {
    if (param_4 == '\0') {
      puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x10);
      local_48 = *puVar7;
      uStack_44 = puVar7[1];
      uStack_40 = puVar7[2];
      uStack_3c = puVar7[3];
      FUN_140d0e176(param_1 + 0x18);
      FUN_14766acc2(param_1 + 0x68,param_2);
      uVar6 = *(uint *)(param_1 + 0xa8);
      lVar3 = *(longlong *)(param_1 + 0xa0);
      uVar13 = 0;
      uVar12 = uVar6;
      if (0 < (int)uVar6) {
        do {
          uVar11 = (uVar12 >> 1) + uVar13;
          if (*(int *)(lVar3 + (ulonglong)uVar11 * 8) < param_2) {
            uVar13 = uVar11 + (uVar12 & 1);
          }
          bVar4 = 1 < uVar12;
          uVar12 = uVar12 >> 1;
        } while (bVar4);
      }
      if (((int)uVar13 < (int)uVar6) && (*(int *)(lVar3 + (ulonglong)uVar13 * 8) <= param_2)) {
        if (~uVar13 + uVar6 != 0) {
          pvVar1 = (void *)(lVar3 + (ulonglong)uVar13 * 8);
          memmove(pvVar1,(void *)((longlong)pvVar1 + 8),(longlong)(int)(~uVar13 + uVar6) << 3);
          uVar6 = *(uint *)(param_1 + 0xa8);
        }
        *(uint *)(param_1 + 0xa8) = uVar6 - 1;
LAB_14766a3e3:
        FUN_14766ad34(param_1 + 0xa0);
      }
LAB_14766a233:
      if ((uStack_3c & 1) != 0) {
        FUN_14766ac00(CONCAT44(uStack_44,local_48),uStack_40);
      }
      unaff_RBP = 0;
      goto LAB_14766a0d5;
    }
    unaff_RBP = CONCAT71(uVar9,3);
    if ((*(byte *)(*(longlong *)(param_1 + 0x68) + 0xc + (longlong)param_2 * 0x10) & 1) == 0)
    goto LAB_14766a0d5;
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x10);
  }
  else {
    uVar6 = *(uint *)(param_1 + 0xa8);
    lVar3 = *(longlong *)(param_1 + 0xa0);
    uVar12 = 0;
    if (0 < (int)uVar6) {
      uVar10 = (ulonglong)uVar6;
      uVar13 = uVar6;
      do {
        uVar10 = uVar10 >> 1;
        uVar11 = (uint)uVar10 + uVar12;
        if (*(int *)(lVar3 + (ulonglong)uVar11 * 8) < param_2) {
          uVar12 = uVar11 + (uVar13 & 1);
        }
        bVar4 = 1 < uVar13;
        uVar13 = (uint)uVar10;
      } while (bVar4);
    }
    if ((((int)uVar12 < (int)uVar6) && (*(int *)(lVar3 + (ulonglong)uVar12 * 8) <= param_2)) &&
       (puVar7 = (undefined4 *)(lVar3 + (ulonglong)uVar12 * 8 + 4), puVar7 != (undefined4 *)0x0)) {
      FUN_14766ac00(*(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x10),
                    *puVar7);
      uVar6 = *(uint *)(param_1 + 0xa8);
      lVar3 = *(longlong *)(param_1 + 0xa0);
      uVar13 = 0;
      uVar12 = uVar6;
      if (0 < (int)uVar6) {
        do {
          uVar11 = (uVar12 >> 1) + uVar13;
          if (*(int *)(lVar3 + (ulonglong)uVar11 * 8) < param_2) {
            uVar13 = uVar11 + (uVar12 & 1);
          }
          bVar4 = 1 < uVar12;
          uVar12 = uVar12 >> 1;
        } while (bVar4);
      }
      unaff_RBP = CONCAT71(uVar9,1);
      if (((int)uVar13 < (int)uVar6) && (*(int *)(lVar3 + (ulonglong)uVar13 * 8) <= param_2)) {
        if (~uVar13 + uVar6 != 0) {
          pvVar1 = (void *)(lVar3 + (ulonglong)uVar13 * 8);
          memmove(pvVar1,(void *)((longlong)pvVar1 + 8),(longlong)(int)(~uVar13 + uVar6) << 3);
          uVar6 = *(uint *)(param_1 + 0xa8);
        }
        *(uint *)(param_1 + 0xa8) = uVar6 - 1;
        FUN_14766ad34(param_1 + 0xa0);
      }
      goto LAB_14766a0d5;
    }
    unaff_RBP = CONCAT71(uVar9,1);
    if (param_4 == '\x01') {
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0xc + (longlong)param_2 * 0x10);
      if ((bVar2 & 1) == 0) goto LAB_14766a0d5;
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x10);
      *(byte *)((longlong)puVar8 + 0xc) = bVar2 | 2;
    }
    else {
      if (param_4 != '\0') goto LAB_14766a0d5;
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x10);
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0xc + (longlong)param_2 * 0x10);
      if ((bVar2 & 2) == 0) {
        local_48 = *(undefined4 *)puVar8;
        uStack_44 = *(undefined4 *)((longlong)puVar8 + 4);
        uStack_40 = *(undefined4 *)(puVar8 + 1);
        uStack_3c = *(uint *)((longlong)puVar8 + 0xc);
        FUN_140d0e176(param_1 + 0x18);
        FUN_14766acc2(param_1 + 0x68,param_2);
        uVar6 = *(uint *)(param_1 + 0xa8);
        lVar3 = *(longlong *)(param_1 + 0xa0);
        uVar13 = 0;
        uVar12 = uVar6;
        if (0 < (int)uVar6) {
          do {
            uVar11 = (uVar12 >> 1) + uVar13;
            if (*(int *)(lVar3 + (ulonglong)uVar11 * 8) < param_2) {
              uVar13 = uVar11 + (uVar12 & 1);
            }
            bVar4 = 1 < uVar12;
            uVar12 = uVar12 >> 1;
          } while (bVar4);
        }
        if (((int)uVar13 < (int)uVar6) && (*(int *)(lVar3 + (ulonglong)uVar13 * 8) <= param_2)) {
          if (~uVar13 + uVar6 != 0) {
            pvVar1 = (void *)(lVar3 + (ulonglong)uVar13 * 8);
            memmove(pvVar1,(void *)((longlong)pvVar1 + 8),(longlong)(int)(~uVar13 + uVar6) << 3);
            uVar6 = *(uint *)(param_1 + 0xa8);
          }
          *(uint *)(param_1 + 0xa8) = uVar6 - 1;
          goto LAB_14766a3e3;
        }
        goto LAB_14766a233;
      }
      if ((bVar2 & 1) == 0) goto LAB_14766a0d5;
    }
  }
  FUN_14766ac00(*puVar8,*(undefined4 *)(puVar8 + 1));
LAB_14766a0d5:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 14766a3ee FUN_14766a3ee body=444 status=ok
// SIG undefined FUN_14766a3ee(void)

undefined8 FUN_14766a3ee(longlong param_1,int param_2,char param_3)

{
  void *pvVar1;
  byte *pbVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0xb8);
  lVar13 = (longlong)param_2;
  if (plVar3 != (longlong *)0x0) {
    cVar6 = (**(code **)(*plVar3 + 8))(plVar3,lVar13 * 0x10 + *(longlong *)(param_1 + 0x68));
    uVar8 = 3;
    if (cVar6 == '\0') goto LAB_14766a497;
  }
  if (param_3 == '\x01') {
    local_30 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + lVar13 * 0x10);
    FUN_140d0e176(param_1 + 0x18);
    FUN_14766acc2(param_1 + 0x68,param_2);
    uVar7 = *(uint *)(param_1 + 0xa8);
    uVar9 = (ulonglong)uVar7;
    lVar13 = *(longlong *)(param_1 + 0xa0);
    uVar12 = 0;
    if (0 < (int)uVar7) {
      do {
        uVar11 = (int)(uVar9 >> 1) + uVar12;
        uVar10 = (uint)uVar9;
        if (*(int *)(lVar13 + (ulonglong)uVar11 * 8) < param_2) {
          uVar12 = uVar11 + (uVar10 & 1);
        }
        uVar9 = uVar9 >> 1;
      } while (1 < uVar10);
    }
    if (((int)uVar12 < (int)uVar7) && (*(int *)(lVar13 + (ulonglong)uVar12 * 8) <= param_2)) {
      if (~uVar12 + uVar7 != 0) {
        pvVar1 = (void *)(lVar13 + (ulonglong)uVar12 * 8);
        memmove(pvVar1,(void *)((longlong)pvVar1 + 8),(longlong)(int)(~uVar12 + uVar7) << 3);
        uVar7 = *(uint *)(param_1 + 0xa8);
      }
      *(uint *)(param_1 + 0xa8) = uVar7 - 1;
      FUN_14766ad34(param_1 + 0xa0);
    }
    uVar8 = 0;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0xa8);
    lVar4 = *(longlong *)(param_1 + 0xa0);
    uVar10 = 0;
    uVar12 = uVar7;
    if (0 < (int)uVar7) {
      do {
        uVar11 = (uVar12 >> 1) + uVar10;
        if (*(int *)(lVar4 + (ulonglong)uVar11 * 8) < param_2) {
          uVar10 = uVar11 + (uVar12 & 1);
        }
        bVar5 = 1 < uVar12;
        uVar12 = uVar12 >> 1;
      } while (bVar5);
    }
    if (((int)uVar10 < (int)uVar7) && (*(int *)(lVar4 + (ulonglong)uVar10 * 8) <= param_2)) {
      if (~uVar10 + uVar7 != 0) {
        pvVar1 = (void *)(lVar4 + (ulonglong)uVar10 * 8);
        memmove(pvVar1,(void *)((longlong)pvVar1 + 8),(longlong)(int)(~uVar10 + uVar7) << 3);
        uVar7 = *(uint *)(param_1 + 0xa8);
      }
      *(uint *)(param_1 + 0xa8) = uVar7 - 1;
      FUN_14766ad34(param_1 + 0xa0);
    }
    else {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x68) + 0xc + lVar13 * 0x10);
      *pbVar2 = *pbVar2 | 2;
    }
    uVar8 = 1;
  }
LAB_14766a497:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14766a5b4 FUN_14766a5b4 body=436 status=ok
// SIG undefined FUN_14766a5b4(void)

void FUN_14766a5b4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  longlong lStack_78;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  longlong local_60;
  longlong local_58;
  undefined2 local_50;
  undefined8 local_48;
  longlong lStack_40;
  uint local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = param_1 + 0x18;
  lStack_40 = param_1 + 0x28;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_1449c0562(&local_48);
  }
  local_70 = local_38;
  iStack_6c = iStack_34;
  uStack_68 = CONCAT44(uStack_2c,uStack_30);
  local_80 = local_48;
  lStack_78 = lStack_40;
  local_50 = 0;
  local_88 = lVar1;
  local_60 = lVar1;
  local_58 = lVar1;
  if (iStack_34 < *(int *)(lStack_40 + 0x18)) {
    do {
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < *(int *)(lStack_78 + 0x18));
    if (((local_50 & 1) != 0) && (local_50._1_1_ == '\x01')) {
      FUN_14766abba(local_58,*(int *)(local_58 + 8) - *(int *)(local_58 + 0x34));
    }
  }
  lVar1 = param_1 + 0x68;
  lVar2 = param_1 + 0x78;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  lStack_40 = lVar2;
  if (*(int *)(param_1 + 0x90) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar3 = *(int *)(param_1 + 0x90);
  }
  uStack_68 = CONCAT44(uStack_2c,uStack_30);
  local_80._0_4_ = (undefined4)local_48;
  local_80._4_4_ = local_48._4_4_;
  lStack_78 = lStack_40;
  local_70 = local_38;
  iStack_6c = iStack_34;
  local_88 = lVar1;
  if ((iStack_34 != iVar3) || (lStack_40 != lVar2)) {
    do {
      do {
        local_70 = local_70 & ~local_80._4_4_;
        FUN_1449c0562(&local_80);
      } while (iStack_6c != iVar3);
    } while ((lStack_78 != lVar2) || (local_88 != lVar1));
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766a76a FUN_14766a76a body=322 status=ok
// SIG undefined FUN_14766a76a(void)

void FUN_14766a76a(longlong param_1,uint *param_2,longlong param_3,longlong param_4,longlong param_5
                  )

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  byte local_50;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar3 = param_2[1];
  if (**(int **)(param_1 + -0x28) != 0 || ((byte)uVar3 & 1) != 0) {
    uVar1 = *param_2;
    uVar4 = FUN_140732858();
    if (0 < (int)uVar1) {
      local_78 = param_1 + -0xd8;
      local_80 = param_1 + -0x10;
      uVar5 = 0;
      do {
        lVar2 = *(longlong *)(param_5 + uVar5 * 8);
        local_68 = 0;
        if (lVar2 != 0) {
          local_60 = 0;
          FUN_14485c47a(&local_60,lVar2);
          local_68 = local_60;
        }
        FUN_14027461a(local_80,&local_6c,lVar2);
        FUN_14766add0(local_78,&local_70,&local_68);
        local_54 = *(undefined4 *)(param_4 + uVar5 * 4);
        local_4a = *(undefined2 *)(param_3 + uVar5 * 2);
        local_60 = CONCAT44(*(undefined4 *)(param_1 + -0x18),local_6c);
        local_58 = local_70;
        local_50 = (byte)uVar3;
        FUN_1449da5a2(uVar4,&local_4a,&local_60);
        uVar5 = uVar5 + 1;
      } while (uVar1 != uVar5);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766a8ae FUN_14766a8ae body=180 status=ok
// SIG undefined FUN_14766a8ae(void)

void FUN_14766a8ae(longlong param_1,undefined2 param_2,char param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_88 [36];
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  char local_48;
  undefined2 local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((**(int **)(param_1 + -0x28) != 0) || (param_3 != '\0')) {
    uVar1 = FUN_140732858();
    FUN_14766afbc(param_1 + -0xd8,&local_64,param_5);
    local_50 = local_5c;
    local_58 = local_64;
    local_4c = param_4;
    local_48 = param_3;
    local_42 = param_2;
    FUN_1449da5a2(uVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766a964 FUN_14766a964 body=88 status=ok
// SIG undefined FUN_14766a964(void)

void FUN_14766a964(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_3[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_3;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar3) != 0) {
        FUN_14766b064(param_1 + -0xd8,param_2);
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar3);
  }
  return;
}



// FUNCTION 14766a9bc FUN_14766a9bc body=38 status=ok
// SIG undefined FUN_14766a9bc(void)

undefined8 FUN_14766a9bc(undefined8 param_1,int param_2)

{
  FUN_14766aa96();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14766a9e2 FUN_14766a9e2 body=38 status=ok
// SIG undefined FUN_14766a9e2(void)

undefined8 FUN_14766a9e2(undefined8 param_1,int param_2)

{
  FUN_14766aa96();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14766aa08 FUN_14766aa08 body=52 status=ok
// SIG undefined FUN_14766aa08(void)

void FUN_14766aa08(longlong *param_1)

{
  FUN_14766aa3c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14766aa3c FUN_14766aa3c body=89 status=ok
// SIG undefined FUN_14766aa3c(void)

void FUN_14766aa3c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
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



// FUNCTION 14766aa96 FUN_14766aa96 body=155 status=ok
// SIG undefined FUN_14766aa96(void)

void FUN_14766aa96(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4d7170;
  plVar3 = (longlong *)param_1[0x1a];
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
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14766aa08(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140cc571e(param_1 + 3);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014766ab25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14766ab32 FUN_14766ab32 body=135 status=ok
// SIG undefined FUN_14766ab32(void)

void FUN_14766ab32(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int local_3c;
  undefined8 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x10);
  *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x10) = *param_3;
  local_3c = param_2;
  FUN_140d0e176(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_14073929c(param_1 + 0x18,local_24,&local_38,0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766abba FUN_14766abba body=69 status=ok
// SIG undefined FUN_14766abba(void)

void FUN_14766abba(longlong param_1,uint param_2)

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
    FUN_140739d44(param_1);
    return;
  }
  return;
}



// FUNCTION 14766ac00 FUN_14766ac00 body=156 status=ok
// SIG undefined FUN_14766ac00(void)

void FUN_14766ac00(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1;
  lVar1 = FUN_14479d2ce(&local_20);
  if (lVar1 != 0) {
    lVar2 = FUN_14117d122();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
      if (param_2 == 1) {
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



// FUNCTION 14766acc2 FUN_14766acc2 body=114 status=ok
// SIG undefined FUN_14766acc2(void)

void FUN_14766acc2(longlong *param_1,int param_2)

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



// FUNCTION 14766ad34 FUN_14766ad34 body=62 status=ok
// SIG undefined FUN_14766ad34(void)

void FUN_14766ad34(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14766ad72(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 14766ad72 FUN_14766ad72 body=93 status=ok
// SIG undefined FUN_14766ad72(void)

ulonglong FUN_14766ad72(uint param_1,uint param_2)

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



// FUNCTION 14766add0 FUN_14766add0 body=261 status=ok
// SIG undefined FUN_14766add0(void)

int * FUN_14766add0(longlong param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_78 [44];
  undefined1 local_4c [4];
  int *local_48;
  int *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = FUN_144a78877(*param_3,param_3[1]);
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar4 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x58);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & uVar3) * 4);
    if (iVar5 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x18);
      do {
        piVar1 = (int *)(lVar4 + (longlong)iVar5 * 0x14);
        if ((*piVar1 == *param_3) && (*(int *)(lVar4 + 4 + (longlong)iVar5 * 0x14) == param_3[1])) {
          if ((piVar1 != (int *)0x0) && (iVar5 = piVar1[2], *param_2 = iVar5, iVar5 != -1))
          goto LAB_14766aeae;
          break;
        }
        iVar5 = piVar1[3];
      } while (iVar5 != -1);
    }
  }
  uVar2 = *(undefined8 *)param_3;
  FUN_14766aed6(param_1 + 0x68,&local_48);
  *(undefined8 *)local_40 = uVar2;
  *(undefined1 *)(local_40 + 3) = 0;
  *param_2 = (int)local_48;
  local_48 = param_3;
  local_40 = param_2;
  FUN_14073929c((longlong *)(param_1 + 0x18),local_4c,&local_48,0);
LAB_14766aeae:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766aed6 FUN_14766aed6 body=229 status=ok
// SIG undefined FUN_14766aed6(void)

int * FUN_14766aed6(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar6);
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



// FUNCTION 14766afbc FUN_14766afbc body=167 status=ok
// SIG undefined FUN_14766afbc(void)

longlong FUN_14766afbc(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  if (param_3 != 0) {
    local_30 = 0;
    FUN_14485c47a(&local_30,param_3);
    local_38 = local_30;
  }
  FUN_14766add0(param_1,&local_30,&local_38);
  FUN_14027461a(param_1 + 200,param_2,param_3);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_30;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766b064 FUN_14766b064 body=137 status=ok
// SIG undefined FUN_14766b064(void)

void FUN_14766b064(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_58 [36];
  undefined1 local_34 [12];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_3;
  cVar1 = FUN_14766b0ee();
  if (cVar1 != '\0') {
    FUN_14766afbc(param_1,local_34,param_3);
    if (**(int **)(param_1 + 0xb0) != 0) {
      thunk_FUN_140adeba6(*(int **)(param_1 + 0xb0),local_34);
    }
    FUN_14766b170(param_1,param_2,local_34,param_3);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766b0ee FUN_14766b0ee body=129 status=ok
// SIG undefined FUN_14766b0ee(void)

byte FUN_14766b0ee(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [8];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar2 = 1;
  if (**(int **)(param_1 + 0xb0) == 0) {
    lVar1 = param_1;
    FUN_14766b22c(param_1,local_24,param_2);
    bVar2 = (byte)lVar1;
    if (local_1c != -1) {
      lVar1 = FUN_1400e4054(*(undefined8 *)(param_1 + 0xb0),local_24);
      bVar2 = lVar1 != 0;
    }
    bVar2 = local_1c != -1 & bVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar2;
}



// FUNCTION 14766b170 FUN_14766b170 body=187 status=ok
// SIG undefined FUN_14766b170(void)

void FUN_14766b170(longlong param_1,char *param_2,longlong param_3,longlong param_4)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 unaff_RBP;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = *(int *)(param_3 + 8);
  lVar4 = FUN_1400e4054(*(undefined8 *)(param_1 + 0xb0),param_3);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (undefined4)
            CONCAT71((int7)((ulonglong)unaff_RBP >> 8),'\x02' - (*(short *)(lVar4 + 0xe) == 0));
  }
  cVar3 = FUN_14766b36a(param_1,iVar2,uVar5);
  if (cVar3 == '\0') {
    if (param_4 != 0) {
      FUN_14485c47a(local_38,param_4);
    }
    local_38[0] = 0;
    FUN_14766b3f8(param_1,iVar2,uVar5);
  }
  if (*param_2 == '\x01') {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x68) + 0xc + (longlong)iVar2 * 0x10);
    *pbVar1 = *pbVar1 | 2;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766b22c FUN_14766b22c body=171 status=ok
// SIG undefined FUN_14766b22c(void)

longlong FUN_14766b22c(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  if (*param_3 == 0) {
    lVar1 = 0;
  }
  else {
    local_30 = 0;
    FUN_14485c47a(&local_30);
    local_38 = local_30;
    lVar1 = *param_3;
  }
  FUN_1407336f2(param_1 + 200,param_2,lVar1);
  FUN_14766b2d8(param_1,&local_30,&local_38);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 8) = (undefined4)local_30;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766b2d8 FUN_14766b2d8 body=145 status=ok
// SIG undefined FUN_14766b2d8(void)

int * FUN_14766b2d8(longlong param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  uVar2 = FUN_144a78877(*param_3,param_3[1]);
  iVar3 = -1;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar4 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x58);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & uVar2) * 4);
    if (iVar5 != -1) {
      do {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar5 * 0x14);
        if ((*piVar1 == *param_3) &&
           (*(int *)(*(longlong *)(param_1 + 0x18) + 4 + (longlong)iVar5 * 0x14) == param_3[1])) {
          if (piVar1 != (int *)0x0) {
            iVar3 = piVar1[2];
          }
          break;
        }
        iVar5 = piVar1[3];
      } while (iVar5 != -1);
    }
  }
  *param_2 = iVar3;
  return param_2;
}



// FUNCTION 14766b36a FUN_14766b36a body=142 status=ok
// SIG undefined FUN_14766b36a(void)

ulonglong FUN_14766b36a(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  undefined8 in_RAX;
  ulonglong uVar5;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined7 uVar6;
  
  lVar7 = (longlong)param_2 * 0x10 + *(longlong *)(param_1 + 0x68);
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  uVar5 = CONCAT71(uVar6,1);
  if (param_3 == '\x02') {
    bVar2 = *(byte *)(lVar7 + 0xc);
    if (((bVar2 & 2) == 0 & bVar2) == 0) {
      uVar3 = *(uint *)(param_1 + 0xa8);
      lVar7 = *(longlong *)(param_1 + 0xa0);
      uVar9 = 0;
      uVar8 = uVar3;
      if (0 < (int)uVar3) {
        do {
          uVar1 = (uVar8 >> 1) + uVar9;
          if (*(int *)(lVar7 + (ulonglong)uVar1 * 8) < param_2) {
            uVar9 = uVar1 + (uVar8 & 1);
          }
          bVar4 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar4);
      }
      if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar7 + (ulonglong)uVar9 * 8) <= param_2)) {
        lVar7 = lVar7 + (ulonglong)uVar9 * 8;
        uVar5 = CONCAT71((int7)((ulonglong)lVar7 >> 8),lVar7 != -4);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else if (param_3 == '\x01') {
    uVar5 = CONCAT71(uVar6,*(undefined1 *)(lVar7 + 0xc));
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 14766b3f8 FUN_14766b3f8 body=130 status=ok
// SIG undefined FUN_14766b3f8(void)

void FUN_14766b3f8(longlong param_1,int param_2,char param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined1 auStack_38 [44];
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = (longlong)param_2 * 0x10 + *(longlong *)(param_1 + 0x68);
  local_c = param_2;
  if (param_3 == '\x02') {
    if ((*(byte *)(lVar1 + 0xc) & 1) == 0) {
      *(undefined4 *)(lVar1 + 8) = *param_4;
      *(byte *)(lVar1 + 0xc) = *(byte *)(lVar1 + 0xc) | 1;
    }
    else {
      FUN_14766b47c(param_1 + 0xa0,&local_c,param_4);
    }
  }
  else if (param_3 == '\x01') {
    *(undefined4 *)(lVar1 + 8) = *param_4;
    *(byte *)(lVar1 + 0xc) = *(byte *)(lVar1 + 0xc) | 3;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766b47c FUN_14766b47c body=194 status=ok
// SIG undefined FUN_14766b47c(void)

void FUN_14766b47c(longlong *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar9;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar4 = *param_1;
  if ((int)uVar2 < 1) {
    uVar7 = 0;
  }
  else {
    iVar5 = *param_2;
    uVar7 = 0;
    uVar6 = uVar2;
    do {
      uVar1 = (uVar6 >> 1) + uVar7;
      if (*(int *)(lVar4 + (ulonglong)uVar1 * 8) < iVar5) {
        uVar7 = uVar1 + (uVar6 & 1);
      }
      bVar3 = 1 < uVar6;
      uVar6 = uVar6 >> 1;
    } while (bVar3);
    if (((int)uVar7 < (int)uVar2) && (*(int *)(lVar4 + (ulonglong)uVar7 * 8) <= iVar5)) {
      piVar9 = (int *)(lVar4 + (ulonglong)uVar7 * 8);
      goto LAB_14766b515;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_14766b53e(param_1,uVar2);
    lVar4 = *param_1;
  }
  uVar8 = (ulonglong)uVar7;
  memmove((void *)(lVar4 + uVar8 * 8 + 8),(void *)(lVar4 + uVar8 * 8),
          (ulonglong)(uVar2 - uVar7) << 3);
  piVar9 = (int *)(uVar8 * 8 + *param_1);
  iVar5 = *param_2;
LAB_14766b515:
  *piVar9 = iVar5;
  piVar9[1] = *param_3;
  return;
}



// FUNCTION 14766b53e FUN_14766b53e body=132 status=ok
// SIG undefined FUN_14766b53e(void)

void FUN_14766b53e(longlong param_1,int param_2)

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



// FUNCTION 14766b5c4 FUN_14766b5c4 body=167 status=ok
// SIG undefined FUN_14766b5c4(void)

void FUN_14766b5c4(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14766b63f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14766b63f;
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
LAB_14766b63f:
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
                    /* WARNING: Could not recover jumptable at 0x00014766b65f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14766b66c FUN_14766b66c body=326 status=ok
// SIG undefined FUN_14766b66c(void)

void FUN_14766b66c(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x5c + (longlong)iVar4 * 0x60) * 4) =
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



// FUNCTION 14766b7b4 FUN_14766b7b4 body=319 status=ok
// SIG undefined FUN_14766b7b4(void)

void FUN_14766b7b4(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
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
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
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
      lVar1 = *local_70;
      lVar2 = (longlong)iStack_54 * 0x60;
      *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
      if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
        FUN_1400020a8();
      }
      FUN_14766429c(lVar1 + lVar2 + 8);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766b8f4 FUN_14766b8f4 body=328 status=ok
// SIG undefined FUN_14766b8f4(void)

void FUN_14766b8f4(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x164 + (longlong)iVar4 * 0x168) * 4) =
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



// FUNCTION 14766ba3e FUN_14766ba3e body=285 status=ok
// SIG undefined FUN_14766ba3e(void)

void FUN_14766ba3e(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      FUN_1476641e4(*local_60 + (longlong)iStack_44 * 0x168 + 0x10);
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_14062c0ca(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766bb68 FUN_14766bb68 body=1 status=ok
// SIG undefined FUN_14766bb68(void)

void FUN_14766bb68(void)

{
  return;
}



// FUNCTION 14766bb6a FUN_14766bb6a body=29 status=ok
// SIG undefined FUN_14766bb6a(void)

undefined8 FUN_14766bb6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14766bb88 FUN_14766bb88 body=29 status=ok
// SIG undefined FUN_14766bb88(void)

undefined8 FUN_14766bb88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14766bba6 FUN_14766bba6 body=640 status=ok
// SIG undefined FUN_14766bba6(void)

int * FUN_14766bba6(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,longlong *param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
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
  char cVar15;
  longlong *plVar16;
  undefined1 auStack_188 [32];
  undefined1 *local_168;
  undefined1 **local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  int local_134;
  longlong *local_130;
  longlong *local_128;
  undefined1 *local_120;
  short **local_118;
  short *local_110;
  undefined1 local_108 [8];
  byte local_100;
  undefined1 local_f8 [32];
  undefined8 local_d8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((((*param_1 == -1) || (param_1[1] == -1)) || (param_1[2] == -1)) ||
     (cVar15 = FUN_14766be7a(param_1,param_3), cVar15 == '\0')) {
    *param_2 = -1;
    goto LAB_14766bbec;
  }
  plVar16 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar16[1] = (longlong)&DAT_100000001;
  *plVar16 = (longlong)&PTR_FUN_14a4d71e0;
  plVar16[2] = (longlong)&PTR_FUN_14a4d71f8;
  plVar16[3] = *param_7;
  uVar4 = *(undefined4 *)param_1;
  uVar5 = *(undefined4 *)(param_1 + 2);
  uVar6 = *(undefined4 *)(param_1 + 4);
  uVar7 = *(undefined4 *)(param_1 + 6);
  uVar8 = *(undefined4 *)(param_1 + 8);
  uVar9 = *(undefined4 *)(param_1 + 10);
  uVar10 = *(undefined4 *)(param_1 + 0xc);
  uVar11 = *(undefined4 *)(param_1 + 0xe);
  uVar12 = *(undefined4 *)(param_1 + 0x10);
  uVar13 = *(undefined4 *)(param_1 + 0x12);
  uVar14 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((longlong)plVar16 + 0x3c) = *(undefined4 *)(param_1 + 0xe);
  *(undefined4 *)(plVar16 + 8) = uVar12;
  *(undefined4 *)((longlong)plVar16 + 0x44) = uVar13;
  *(undefined4 *)(plVar16 + 9) = uVar14;
  *(undefined4 *)(plVar16 + 6) = uVar8;
  *(undefined4 *)((longlong)plVar16 + 0x34) = uVar9;
  *(undefined4 *)(plVar16 + 7) = uVar10;
  *(undefined4 *)((longlong)plVar16 + 0x3c) = uVar11;
  *(undefined4 *)(plVar16 + 4) = uVar4;
  *(undefined4 *)((longlong)plVar16 + 0x24) = uVar5;
  *(undefined4 *)(plVar16 + 5) = uVar6;
  *(undefined4 *)((longlong)plVar16 + 0x2c) = uVar7;
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
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
  local_50 = 0x10000000000;
  local_78 = 0x10000000000;
  FUN_14766bf24(param_1,local_70);
  local_d8 = 0x10000000000;
  local_b0 = 0x10000000000;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_14766bf7c(param_1,local_f8);
  local_118 = &local_110;
  local_120 = &LAB_14766c0f0;
  local_100 = *(byte *)(param_6 + 8);
  local_110 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_100])(local_108);
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  local_148 = local_98;
  local_160 = &local_120;
  local_168 = local_108;
  local_158 = local_f8;
  local_150 = local_70;
  local_130 = plVar16 + 2;
  local_128 = plVar16;
  FUN_1406ac01c(param_4,param_2,param_5,&local_130);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c71394(param_4,&local_134);
      *param_2 = local_134;
      iVar3 = local_134;
      if (local_134 != -1) goto LAB_14766bd9d;
    }
  }
  else {
LAB_14766bd9d:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
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
LAB_14766bbec:
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14766be28 FUN_14766be28 body=80 status=ok
// SIG undefined FUN_14766be28(void)

void FUN_14766be28(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_14766c268(param_3 + 8,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766be7a FUN_14766be7a body=170 status=ok
// SIG undefined FUN_14766be7a(void)

undefined8 FUN_14766be7a(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[1];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[2];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4 & bVar5);
}



// FUNCTION 14766bf24 FUN_14766bf24 body=88 status=ok
// SIG undefined FUN_14766bf24(void)

void FUN_14766bf24(undefined2 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_140dba9e6(param_2,*param_1);
  FUN_140dba9e6(param_2,param_1[1]);
  FUN_140dba9e6(param_2,param_1[2]);
  lVar1 = 3;
  do {
    if (param_1[lVar1] != -1) {
      FUN_140dba9e6(param_2);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0xf);
  return;
}



// FUNCTION 14766bf7c FUN_14766bf7c body=181 status=ok
// SIG undefined FUN_14766bf7c(void)

void FUN_14766bf7c(undefined2 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[1];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[2];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  FUN_14766c06f(param_1 + 3,param_2);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766c032 FUN_14766c032 body=1 status=ok
// SIG undefined FUN_14766c032(void)

void FUN_14766c032(void)

{
  return;
}



// FUNCTION 14766c034 FUN_14766c034 body=29 status=ok
// SIG undefined FUN_14766c034(void)

undefined8 FUN_14766c034(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14766c052 FUN_14766c052 body=29 status=ok
// SIG undefined FUN_14766c052(void)

undefined8 FUN_14766c052(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14766c06f FUN_14766c06f body=128 status=ok
// SIG undefined FUN_14766c06f(void)

void FUN_14766c06f(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined1 local_50 [32];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x10000000000;
  lVar1 = 0;
  do {
    if (*(short *)(param_1 + lVar1 * 2) != -1) {
      FUN_140dba9e6(local_50);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0xc);
  FUN_140dad9c2(param_2,local_50,2);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766c108 FUN_14766c108 body=351 status=ok
// SIG undefined FUN_14766c108(void)

void FUN_14766c108(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar9 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,0xf);
  uVar5 = *(ushort *)(param_2 + 0xc);
  uVar3 = (uint)uVar5;
  puVar1 = *(ulonglong **)(param_2 + 0x28);
  if (uVar3 != 0) {
    lVar7 = (ulonglong)uVar5 << 5;
    puVar6 = puVar1;
    do {
      if (*(short *)((longlong)puVar6 + 0x1e) == *param_1) goto LAB_14766c159;
      puVar6 = puVar6 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar6 = (ulonglong *)0x0;
LAB_14766c159:
  lVar7 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar6) {
    *(int *)(lVar7 + lVar9 * 4) = (int)*puVar6 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar7 = *param_3;
    uVar5 = *(ushort *)(param_2 + 0xc);
    uVar3 = (uint)uVar5;
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar5 != 0) {
    uVar8 = (ulonglong)(uVar3 << 5);
    puVar6 = puVar1;
    do {
      if (*(short *)((longlong)puVar6 + 0x1e) == param_1[1]) goto LAB_14766c1ad;
      puVar6 = puVar6 + 4;
      uVar8 = uVar8 - 0x20;
    } while (uVar8 != 0);
  }
  puVar6 = (ulonglong *)0x0;
LAB_14766c1ad:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar6) {
    *(int *)(lVar7 + 4 + lVar9 * 4) = (int)*puVar6 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar7 = *param_3;
    uVar5 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    uVar3 = (uint)uVar5;
  }
  if (uVar5 != 0) {
    uVar8 = (ulonglong)(uVar3 << 5);
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == param_1[2]) goto LAB_14766c1f2;
      puVar1 = puVar1 + 4;
      uVar8 = uVar8 - 0x20;
    } while (uVar8 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_14766c1f2:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar7 + 8 + lVar9 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar7 = *param_3;
  }
  lVar2 = 0;
  do {
    if (*(ushort *)(param_2 + 0xc) != 0) {
      puVar1 = *(ulonglong **)(param_2 + 0x28);
      lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)puVar1 + 0x1e) == param_1[lVar2 + 3]) {
          if (puVar1 != (ulonglong *)0x0) {
            if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
              *(int *)(lVar7 + lVar9 * 4 + 0xc + lVar2 * 4) =
                   (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
            }
          }
          break;
        }
        puVar1 = puVar1 + 4;
        lVar4 = lVar4 + -0x20;
      } while (lVar4 != 0);
    }
    lVar2 = lVar2 + 1;
    if (lVar2 == 0xc) {
      return;
    }
  } while( true );
}



// FUNCTION 14766c268 FUN_14766c268 body=186 status=ok
// SIG undefined FUN_14766c268(void)

void FUN_14766c268(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined1 *local_90;
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  puVar2 = (uint *)*param_3;
  FUN_14766ce5c(local_88,lVar1,puVar2 + 3);
  lVar3 = *(longlong *)(lVar1 + 0x20);
  lVar6 = 0;
  lVar4 = lVar3 + (ulonglong)*puVar2;
  if ((ulonglong)*puVar2 == 0xffffffff) {
    lVar4 = lVar6;
  }
  lVar5 = lVar3 + (ulonglong)puVar2[1];
  if ((ulonglong)puVar2[1] == 0xffffffff) {
    lVar5 = lVar6;
  }
  local_98 = lVar3 + (ulonglong)puVar2[2];
  if ((ulonglong)puVar2[2] == 0xffffffff) {
    local_98 = lVar6;
  }
  local_90 = local_88;
  FUN_14766c324(param_1,lVar1,lVar4,lVar5);
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766c324 FUN_14766c324 body=755 status=ok
// SIG undefined FUN_14766c324(void)

void FUN_14766c324(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  float local_c0;
  uint local_bc;
  ulonglong local_b8;
  ulonglong local_b0;
  float *local_a8;
  undefined1 local_9c [4];
  longlong local_98 [10];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e0 = *param_1 + 0x90;
  local_98[0] = *param_6;
  local_98[1] = param_6[1];
  local_98[2] = param_6[2];
  local_98[3] = param_6[3];
  local_98[4] = param_6[4];
  local_98[5] = param_6[5];
  local_98[6] = param_6[6];
  local_98[7] = param_6[7];
  local_98[8] = param_6[8];
  local_d8 = param_2;
  local_d0 = param_3;
  local_c8 = param_4;
  if (*(short *)(param_2 + 0xe) != 0) {
    local_e8 = param_6[9];
    local_f0 = param_6[10];
    local_f8 = param_6[0xb];
    uVar8 = 0;
    lVar7 = param_5;
    do {
      lVar2 = *(longlong *)(local_c8 + uVar8 * 8);
      if ((lVar2 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar2);
LAB_14766c43d:
        local_b0 = 0;
        FUN_14485c47a(&local_b0,lVar2);
        uVar3 = local_b0 & 0xffffffff;
        uVar4 = local_b0 >> 0x20;
      }
      else {
        uVar3 = 0;
        uVar4 = 0;
        if (lVar2 != 0) goto LAB_14766c43d;
      }
      lVar5 = uVar8 * 0x60 + param_5;
      local_bc = *(uint *)(local_d0 + uVar8 * 4);
      local_b8 = uVar3 | uVar4 << 0x20;
      uVar6 = local_bc & 0xffff;
      iVar1 = FUN_144a78877();
      lVar2 = FUN_14766c618(local_e0,(uVar6 >> 2) + uVar6 * 0x40 + iVar1 + 0x9e3779b9 ^ uVar6,
                            &local_bc);
      lVar9 = 0;
      do {
        if ((*(longlong *)(lVar7 + lVar9) != 0) && (*(longlong *)((longlong)local_98 + lVar9) != 0))
        {
          local_c0 = (float)*(double *)(*(longlong *)((longlong)local_98 + lVar9) + uVar8 * 8);
          local_b0 = lVar7 + lVar9;
          local_a8 = &local_c0;
          FUN_140d12ea6(lVar2,local_9c,&local_b0,0);
        }
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0x48);
      if ((local_e8 != 0) && (*(longlong *)(lVar5 + 0x48) != 0)) {
        local_b0 = lVar5 + 0x48;
        local_a8 = (float *)(uVar8 * 0x10 + local_e8);
        FUN_1406e263c(lVar2 + 0x50,local_9c,&local_b0,0);
      }
      if ((local_f0 != 0) && (*(longlong *)(lVar5 + 0x58) != 0)) {
        local_b0 = lVar5 + 0x58;
        local_a8 = (float *)(local_f0 + uVar8 * 4);
        FUN_140171856(lVar2 + 0xf0,local_9c,&local_b0,0);
      }
      if ((local_f8 != 0) && (*(longlong *)(lVar5 + 0x50) != 0)) {
        local_b0 = lVar5 + 0x50;
        local_a8 = (float *)(local_f8 + uVar8);
        FUN_146eff18a(lVar2 + 0xa0,local_9c,&local_b0,0);
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x60;
    } while (uVar8 < *(ushort *)(local_d8 + 0xe));
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14766c618 FUN_14766c618 body=139 status=ok
// SIG undefined FUN_14766c618(void)

longlong FUN_14766c618(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_14766c6a4();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x168;
    if (lVar3 + lVar2 != 0) goto LAB_14766c654;
  }
  local_30 = param_3;
  FUN_14766c712(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x168;
LAB_14766c654:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766c6a4 FUN_14766c6a4 body=109 status=ok
// SIG undefined FUN_14766c6a4(void)

int FUN_14766c6a4(longlong *param_1,uint param_2,int *param_3)

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
        lVar4 = (longlong)iVar1 * 0x168;
        if (((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + lVar4 + 4) == param_3[1]))
           && (*(int *)(lVar2 + lVar4 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x160 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 14766c712 FUN_14766c712 body=281 status=ok
// SIG undefined FUN_14766c712(void)

undefined4 * FUN_14766c712(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14766c82c(param_1,local_48);
  FUN_14766c98e(param_4,local_40);
  *(undefined4 *)(local_40 + 0x160) = 0xffffffff;
  cVar1 = FUN_14766c918(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x164) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x160) =
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
      FUN_14766cc78(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766c82c FUN_14766c82c body=235 status=ok
// SIG undefined FUN_14766c82c(void)

int * FUN_14766c82c(longlong *param_1,int *param_2)

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
      FUN_1408ab94c(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x168);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x168) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x168 + *param_1;
  return param_2;
}



// FUNCTION 14766c918 FUN_14766c918 body=117 status=ok
// SIG undefined FUN_14766c918(void)

undefined8 FUN_14766c918(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar2 = FUN_14766c6a4(), iVar2 != -1)) {
    lVar1 = *param_1;
    FUN_1476641e4((longlong)iVar2 * 0x168 + lVar1 + 0x10);
    memmove((void *)(lVar1 + (longlong)iVar2 * 0x168),param_3,0x160);
    FUN_14766cbfe(param_1,*param_4);
    *param_4 = iVar2;
    return 1;
  }
  return 0;
}



// FUNCTION 14766c98e FUN_14766c98e body=217 status=ok
// SIG undefined FUN_14766c98e(void)

undefined8 * FUN_14766c98e(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_198 [32];
  undefined1 local_178 [44];
  undefined8 local_14c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_108;
  undefined8 local_fc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_b8;
  undefined8 local_ac;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined8 local_5c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_198;
  memset(local_178,0,0x140);
  local_14c = 0xffffffff00000080;
  local_108 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_fc = 0xffffffff00000080;
  local_b8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_ac = 0xffffffff00000080;
  local_68 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_38 = 0;
  uStack_30 = 0;
  puVar1 = (undefined8 *)*param_1;
  *param_2 = *puVar1;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar1 + 1);
  FUN_14766ca68(param_2 + 2,local_178);
  FUN_1476641e4(local_178);
  if ((local_28 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766ca68 FUN_14766ca68 body=135 status=ok
// SIG undefined FUN_14766ca68(void)

longlong FUN_14766ca68(longlong param_1,longlong param_2)

{
  FUN_1408a467a();
  FUN_140d69258(param_1 + 0x50,param_2 + 0x50);
  FUN_14766caf0(param_1 + 0xa0,param_2 + 0xa0);
  FUN_1406d3d1a(param_1 + 0xf0,param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_2 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x14c);
  *(undefined8 *)(param_2 + 0x148) = 0;
  return param_1;
}



// FUNCTION 14766caf0 FUN_14766caf0 body=123 status=ok
// SIG undefined FUN_14766caf0(void)

undefined8 * FUN_14766caf0(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_14766cb6c();
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



// FUNCTION 14766cb6c FUN_14766cb6c body=146 status=ok
// SIG undefined FUN_14766cb6c(void)

longlong * FUN_14766cb6c(longlong *param_1,longlong *param_2)

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



// FUNCTION 14766cbfe FUN_14766cbfe body=122 status=ok
// SIG undefined FUN_14766cbfe(void)

void FUN_14766cbfe(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x168) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x168) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x168 + 4) = uVar5;
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



// FUNCTION 14766cc78 FUN_14766cc78 body=482 status=ok
// SIG undefined FUN_14766cc78(void)

void FUN_14766cc78(longlong *param_1)

{
  longlong *plVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
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
  uVar3 = *(uint *)(param_1 + 9);
  uVar5 = local_70;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar3 != uVar10);
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
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar6 = local_70._4_4_;
      local_70 = uVar5;
      do {
        lVar4 = *local_88;
        lVar11 = (longlong)iVar6 * 0x168;
        uVar2 = *(ushort *)(lVar4 + lVar11);
        iVar7 = FUN_144a78877(*(undefined4 *)(lVar4 + 4 + lVar11),
                              *(undefined4 *)(lVar4 + 8 + lVar11));
        uVar8 = (longlong)
                (int)(iVar7 + (uint)(uVar2 >> 2) + (uint)uVar2 * 0x40 + 0x9e3779b9 ^ (uint)uVar2) &
                (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar4 + 0x164 + lVar11) = iVar7;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x160 + lVar11) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14766ce5c FUN_14766ce5c body=368 status=ok
// SIG undefined FUN_14766ce5c(void)

void FUN_14766ce5c(longlong *param_1,longlong param_2,uint *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  lVar4 = 0;
  lVar7 = lVar1 + (ulonglong)*param_3;
  if ((ulonglong)*param_3 == 0xffffffff) {
    lVar7 = lVar4;
  }
  lVar5 = lVar1 + (ulonglong)param_3[1];
  if ((ulonglong)param_3[1] == 0xffffffff) {
    lVar5 = lVar4;
  }
  lVar2 = lVar1 + (ulonglong)param_3[2];
  if ((ulonglong)param_3[2] == 0xffffffff) {
    lVar2 = lVar4;
  }
  lVar9 = lVar1 + (ulonglong)param_3[3];
  if ((ulonglong)param_3[3] == 0xffffffff) {
    lVar9 = lVar4;
  }
  lVar8 = lVar1 + (ulonglong)param_3[4];
  if ((ulonglong)param_3[4] == 0xffffffff) {
    lVar8 = lVar4;
  }
  lVar11 = (ulonglong)param_3[5] + lVar1;
  if ((ulonglong)param_3[5] == 0xffffffff) {
    lVar11 = lVar4;
  }
  lVar10 = (ulonglong)param_3[6] + lVar1;
  if ((ulonglong)param_3[6] == 0xffffffff) {
    lVar10 = lVar4;
  }
  lVar13 = lVar1 + (ulonglong)param_3[7];
  if ((ulonglong)param_3[7] == 0xffffffff) {
    lVar13 = lVar4;
  }
  lVar12 = lVar1 + (ulonglong)param_3[8];
  if ((ulonglong)param_3[8] == 0xffffffff) {
    lVar12 = lVar4;
  }
  lVar3 = lVar1 + (ulonglong)param_3[9];
  if ((ulonglong)param_3[9] == 0xffffffff) {
    lVar3 = lVar4;
  }
  lVar6 = lVar1 + (ulonglong)param_3[10];
  if ((ulonglong)param_3[10] == 0xffffffff) {
    lVar6 = lVar4;
  }
  lVar1 = lVar1 + (ulonglong)param_3[0xb];
  if ((ulonglong)param_3[0xb] == 0xffffffff) {
    lVar1 = lVar4;
  }
  *param_1 = lVar7;
  param_1[1] = lVar5;
  param_1[2] = lVar2;
  param_1[3] = lVar9;
  param_1[4] = lVar8;
  param_1[5] = lVar11;
  param_1[6] = lVar10;
  param_1[7] = lVar13;
  param_1[8] = lVar12;
  param_1[9] = lVar3;
  param_1[10] = lVar6;
  param_1[0xb] = lVar1;
  return;
}



// FUNCTION 14766cfcc FUN_14766cfcc body=656 status=ok
// SIG undefined FUN_14766cfcc(void)

int * FUN_14766cfcc(short *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,longlong *param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong *plVar8;
  undefined1 auStack_188 [32];
  undefined1 *local_168;
  undefined1 **local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  int local_134;
  longlong *local_130;
  longlong *local_128;
  undefined1 *local_120;
  short **local_118;
  short *local_110;
  undefined1 local_108 [8];
  byte local_100;
  undefined1 local_f8 [32];
  undefined8 local_d8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((((*param_1 == -1) || (param_1[1] == -1)) || (param_1[2] == -1)) ||
     (cVar7 = FUN_14766d2b0(param_1,param_3), cVar7 == '\0')) {
    *param_2 = -1;
    goto LAB_14766d012;
  }
  plVar8 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14a4d7200;
  plVar8[2] = (longlong)&PTR_FUN_14a4d7218;
  plVar8[3] = *param_7;
  *(undefined4 *)(plVar8 + 6) = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 2);
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar6 = *(undefined4 *)(param_1 + 6);
  *(undefined4 *)(plVar8 + 4) = *(undefined4 *)param_1;
  *(undefined4 *)((longlong)plVar8 + 0x24) = uVar4;
  *(undefined4 *)(plVar8 + 5) = uVar5;
  *(undefined4 *)((longlong)plVar8 + 0x2c) = uVar6;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
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
  local_50 = 0x10000000000;
  local_78 = 0x10000000000;
  FUN_140dba9e6(local_70,*param_1);
  FUN_140dba9e6(local_70,param_1[1]);
  FUN_140dba9e6(local_70,param_1[2]);
  local_d8 = 0x10000000000;
  local_b0 = 0x10000000000;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_14766d35a(param_1,local_f8);
  local_118 = &local_110;
  local_120 = &LAB_14766d440;
  local_100 = *(byte *)(param_6 + 8);
  local_110 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_100])(local_108);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_148 = local_98;
  local_160 = &local_120;
  local_168 = local_108;
  local_158 = local_f8;
  local_150 = local_70;
  local_130 = plVar8 + 2;
  local_128 = plVar8;
  FUN_1406ac01c(param_4,param_2,param_5,&local_130);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c71394(param_4,&local_134);
      *param_2 = local_134;
      iVar3 = local_134;
      if (local_134 != -1) goto LAB_14766d1d3;
    }
  }
  else {
LAB_14766d1d3:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
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
LAB_14766d012:
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14766d25e FUN_14766d25e body=80 status=ok
// SIG undefined FUN_14766d25e(void)

void FUN_14766d25e(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_14766d560(param_3 + 8,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766d2b0 FUN_14766d2b0 body=170 status=ok
// SIG undefined FUN_14766d2b0(void)

undefined8 FUN_14766d2b0(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[1];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[2];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4 & bVar5);
}



// FUNCTION 14766d35a FUN_14766d35a body=166 status=ok
// SIG undefined FUN_14766d35a(void)

void FUN_14766d35a(undefined2 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[1];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[2];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766d402 FUN_14766d402 body=1 status=ok
// SIG undefined FUN_14766d402(void)

void FUN_14766d402(void)

{
  return;
}



// FUNCTION 14766d404 FUN_14766d404 body=29 status=ok
// SIG undefined FUN_14766d404(void)

undefined8 FUN_14766d404(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14766d422 FUN_14766d422 body=29 status=ok
// SIG undefined FUN_14766d422(void)

undefined8 FUN_14766d422(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14766d458 FUN_14766d458 body=263 status=ok
// SIG undefined FUN_14766d458(void)

void FUN_14766d458(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  ushort uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar7 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,3);
  uVar3 = *(ushort *)(param_2 + 0xc);
  uVar2 = (uint)uVar3;
  puVar1 = *(ulonglong **)(param_2 + 0x28);
  if (uVar2 != 0) {
    lVar5 = (ulonglong)uVar3 << 5;
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *param_1) goto LAB_14766d4a9;
      puVar4 = puVar4 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_14766d4a9:
  lVar5 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar3 = *(ushort *)(param_2 + 0xc);
    uVar2 = (uint)uVar3;
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar3 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[1]) goto LAB_14766d4fd;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_14766d4fd:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 4 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar3 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    uVar2 = (uint)uVar3;
  }
  if (uVar3 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == param_1[2]) goto LAB_14766d542;
      puVar1 = puVar1 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_14766d542:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar5 + 8 + lVar7 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 14766d560 FUN_14766d560 body=96 status=ok
// SIG undefined FUN_14766d560(void)

void FUN_14766d560(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  puVar2 = (uint *)*param_3;
  lVar6 = *(longlong *)(lVar1 + 0x20);
  lVar3 = 0;
  lVar4 = lVar6 + (ulonglong)*puVar2;
  if ((ulonglong)*puVar2 == 0xffffffff) {
    lVar4 = lVar3;
  }
  lVar5 = lVar6 + (ulonglong)puVar2[1];
  if ((ulonglong)puVar2[1] == 0xffffffff) {
    lVar5 = lVar3;
  }
  lVar6 = lVar6 + (ulonglong)puVar2[2];
  if ((ulonglong)puVar2[2] == 0xffffffff) {
    lVar6 = lVar3;
  }
  FUN_14766d5c0(param_1,lVar1,lVar4,lVar5,lVar6);
  return;
}



// FUNCTION 14766d5c0 FUN_14766d5c0 body=341 status=ok
// SIG undefined FUN_14766d5c0(void)

void FUN_14766d5c0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auStack_78 [36];
  uint local_54;
  uint uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(short *)(param_2 + 0xe) != 0) {
    lVar1 = *param_1;
    uVar4 = 0;
    do {
      lVar3 = *(longlong *)(param_4 + uVar4 * 8);
      if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
LAB_14766d625:
        local_54 = 0;
        uStack_50 = 0;
        FUN_14485c47a(&local_54,lVar3);
        uVar5 = uStack_50;
        uStack_50 = local_54;
      }
      else {
        uStack_50 = 0;
        uVar5 = 0;
        if (lVar3 != 0) goto LAB_14766d625;
      }
      uStack_4c = uVar5;
      local_54 = *(uint *)(param_3 + uVar4 * 4);
      uVar5 = local_54 & 0xffff;
      iVar2 = FUN_144a78877();
      lVar3 = FUN_14766c618(lVar1 + 0x90,(uVar5 >> 2) + uVar5 * 0x40 + iVar2 + 0x9e3779b9 ^ uVar5,
                            &local_54);
      iVar2 = *(int *)(lVar3 + 0x148);
      *(uint *)(lVar3 + 0x148) = iVar2 + 1U;
      if (*(uint *)(lVar3 + 0x14c) < iVar2 + 1U) {
        FUN_1446f84a2((longlong *)(lVar3 + 0x140),iVar2);
      }
      *(undefined8 *)(*(longlong *)(lVar3 + 0x140) + (longlong)iVar2 * 8) =
           *(undefined8 *)(param_5 + uVar4 * 8);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(param_2 + 0xe));
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14766d716 FUN_14766d716 body=663 status=ok
// SIG undefined FUN_14766d716(void)

int * FUN_14766d716(undefined4 *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5,longlong param_6,longlong *param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  longlong *plVar13;
  undefined1 auStack_188 [32];
  undefined1 *local_168;
  undefined1 **local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  int local_134;
  longlong *local_130;
  longlong *local_128;
  undefined1 *local_120;
  undefined4 **local_118;
  undefined4 *local_110;
  undefined1 local_108 [8];
  byte local_100;
  undefined1 local_f8 [32];
  undefined8 local_d8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((((*(short *)((longlong)param_1 + 2) == -1) || (*(short *)(param_1 + 1) == -1)) ||
      (*(short *)((longlong)param_1 + 6) == -1)) ||
     (((*(short *)(param_1 + 2) == -1 || (*(short *)((longlong)param_1 + 10) == -1)) ||
      (cVar12 = FUN_14766da00(param_1,param_3), cVar12 == '\0')))) {
    *param_2 = -1;
    goto LAB_14766d76d;
  }
  plVar13 = (longlong *)FUN_14001cc68(0x48,0x10);
  plVar13[1] = (longlong)&DAT_100000001;
  *plVar13 = (longlong)&PTR_FUN_14a4d7220;
  plVar13[2] = (longlong)&PTR_FUN_14a4d7238;
  lVar4 = *param_7;
  plVar13[3] = lVar4;
  plVar13[4] = *(longlong *)(*(longlong *)(lVar4 + 0x28) + 0x548);
  uVar5 = param_1[1];
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  uVar8 = param_1[3];
  uVar9 = param_1[4];
  uVar10 = param_1[5];
  uVar11 = param_1[6];
  *(undefined4 *)(plVar13 + 5) = *param_1;
  *(undefined4 *)((longlong)plVar13 + 0x2c) = uVar5;
  *(undefined4 *)(plVar13 + 6) = uVar6;
  *(undefined4 *)((longlong)plVar13 + 0x34) = uVar7;
  *(undefined4 *)((longlong)plVar13 + 0x34) = uVar8;
  *(undefined4 *)(plVar13 + 7) = uVar9;
  *(undefined4 *)((longlong)plVar13 + 0x3c) = uVar10;
  *(undefined4 *)(plVar13 + 8) = uVar11;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
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
  local_50 = 0x10000000000;
  local_78 = 0x10000000000;
  FUN_14766db0e(param_1,local_70);
  local_d8 = 0x10000000000;
  local_b0 = 0x10000000000;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_14766db76(param_1,local_f8);
  local_118 = &local_110;
  local_120 = &LAB_14766dc9a;
  local_100 = *(byte *)(param_6 + 8);
  local_110 = param_1;
  (*(code *)(&PTR_LAB_14a475bc0)[local_100])(local_108);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_148 = local_98;
  local_160 = &local_120;
  local_168 = local_108;
  local_158 = local_f8;
  local_150 = local_70;
  local_130 = plVar13 + 2;
  local_128 = plVar13;
  FUN_1406ac01c(param_4,param_2,param_5,&local_130);
  iVar3 = *param_2;
  if (*param_2 == -1) {
    if ((*(byte *)(param_5 + 1) & 4) != 0) {
      FUN_145c71394(param_4,&local_134);
      *param_2 = local_134;
      iVar3 = local_134;
      if (local_134 != -1) goto LAB_14766d924;
    }
  }
  else {
LAB_14766d924:
    FUN_1407ce0e2(param_4,iVar3,0xffffffff);
    FUN_1407cdf34(param_4,*param_2,0xffffffff);
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (plVar13 != (longlong *)0x0) {
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
LAB_14766d76d:
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14766d9ae FUN_14766d9ae body=80 status=ok
// SIG undefined FUN_14766d9ae(void)

void FUN_14766d9ae(undefined4 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_10 = param_2[1];
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  FUN_14766deba(param_3 + 8,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766da00 FUN_14766da00 body=269 status=ok
// SIG undefined FUN_14766da00(void)

undefined8 FUN_14766da00(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  
  uVar1 = *(ushort *)(param_1 + 2);
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = *(ushort *)(param_1 + 4);
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = *(ushort *)(param_1 + 6);
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = *(ushort *)(param_1 + 8);
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar6 = false;
  }
  else {
    bVar6 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = *(ushort *)(param_1 + 10);
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar7 = false;
  }
  else {
    bVar7 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar6 & bVar4 & bVar5 & bVar7);
}



// FUNCTION 14766db0e FUN_14766db0e body=104 status=ok
// SIG undefined FUN_14766db0e(void)

void FUN_14766db0e(longlong param_1,undefined8 param_2)

{
  FUN_140dba9e6(param_2,*(undefined2 *)(param_1 + 2));
  FUN_140dba9e6(param_2,*(undefined2 *)(param_1 + 4));
  FUN_140dba9e6(param_2,*(undefined2 *)(param_1 + 6));
  FUN_140dba9e6(param_2,*(undefined2 *)(param_1 + 8));
  FUN_140dba9e6(param_2,*(undefined2 *)(param_1 + 10));
  if (*(short *)(param_1 + 0xc) != -1) {
    FUN_140dba9e6(param_2);
    return;
  }
  return;
}



// FUNCTION 14766db76 FUN_14766db76 body=229 status=ok
// SIG undefined FUN_14766db76(void)

void FUN_14766db76(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *(undefined2 *)(param_1 + 2);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = *(undefined2 *)(param_1 + 4);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = *(undefined2 *)(param_1 + 6);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = *(undefined2 *)(param_1 + 8);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = *(undefined2 *)(param_1 + 10);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766dc5c FUN_14766dc5c body=1 status=ok
// SIG undefined FUN_14766dc5c(void)

void FUN_14766dc5c(void)

{
  return;
}



// FUNCTION 14766dc5e FUN_14766dc5e body=29 status=ok
// SIG undefined FUN_14766dc5e(void)

undefined8 FUN_14766dc5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14766dc7c FUN_14766dc7c body=29 status=ok
// SIG undefined FUN_14766dc7c(void)

undefined8 FUN_14766dc7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14766dcb2 FUN_14766dcb2 body=519 status=ok
// SIG undefined FUN_14766dcb2(void)

void FUN_14766dcb2(longlong param_1,ulonglong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  ushort uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar7 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,7);
  if (param_2 <= *(ulonglong *)(param_2 + 0x18)) {
    *(int *)(*param_3 + lVar7 * 4) = (int)*(ulonglong *)(param_2 + 0x18) - (int)param_2;
  }
  uVar2 = (uint)*(ushort *)(param_2 + 0xc);
  puVar1 = *(ulonglong **)(param_2 + 0x28);
  if (uVar2 != 0) {
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *(short *)(param_1 + 2)) goto LAB_14766dd16;
      puVar4 = puVar4 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_14766dd16:
  lVar5 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 4 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar2 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if ((short)uVar2 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *(short *)(param_1 + 4)) goto LAB_14766dd6b;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_14766dd6b:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 8 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar2 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if ((short)uVar2 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *(short *)(param_1 + 6)) goto LAB_14766ddb8;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_14766ddb8:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 0xc + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar2 = (uint)*(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  uVar3 = (ushort)uVar2;
  if (uVar3 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14766de05;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_14766de05:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 0x10 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar3 = *(ushort *)(param_2 + 0xc);
    uVar2 = (uint)uVar3;
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar3 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *(short *)(param_1 + 10)) goto LAB_14766de52;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_14766de52:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 0x14 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar3 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    uVar2 = (uint)uVar3;
  }
  if (uVar3 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == *(short *)(param_1 + 0xc)) {
        if (puVar1 == (ulonglong *)0x0) {
          return;
        }
        if (*puVar1 < *(ulonglong *)(param_2 + 0x20)) {
          return;
        }
        *(int *)(lVar5 + 0x18 + lVar7 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
        return;
      }
      puVar1 = puVar1 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 14766deba FUN_14766deba body=222 status=ok
// SIG undefined FUN_14766deba(void)

void FUN_14766deba(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  puVar2 = (uint *)*param_3;
  lVar3 = *(longlong *)(lVar1 + 0x20);
  lVar10 = 0;
  lVar7 = lVar1 + (ulonglong)*puVar2;
  if ((ulonglong)*puVar2 == 0xffffffff) {
    lVar7 = lVar10;
  }
  lVar8 = lVar3 + (ulonglong)puVar2[1];
  if ((ulonglong)puVar2[1] == 0xffffffff) {
    lVar8 = lVar10;
  }
  lVar4 = lVar3 + (ulonglong)puVar2[2];
  if ((ulonglong)puVar2[2] == 0xffffffff) {
    lVar4 = lVar10;
  }
  lVar6 = lVar3 + (ulonglong)puVar2[3];
  if ((ulonglong)puVar2[3] == 0xffffffff) {
    lVar6 = lVar10;
  }
  lVar5 = lVar3 + (ulonglong)puVar2[4];
  if ((ulonglong)puVar2[4] == 0xffffffff) {
    lVar5 = lVar10;
  }
  lVar9 = lVar3 + (ulonglong)puVar2[5];
  if ((ulonglong)puVar2[5] == 0xffffffff) {
    lVar9 = lVar10;
  }
  lVar3 = lVar3 + (ulonglong)puVar2[6];
  if ((ulonglong)puVar2[6] == 0xffffffff) {
    lVar3 = lVar10;
  }
  FUN_14766df98(param_1,lVar1,lVar7,lVar8,lVar4,lVar6,lVar5,lVar9,lVar3);
  return;
}



// FUNCTION 14766df98 FUN_14766df98 body=274 status=ok
// SIG undefined FUN_14766df98(void)

void FUN_14766df98(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  
  lVar2 = FUN_14009d2a0();
  uVar1 = *(ushort *)(param_2 + 0xe);
  if (*(ushort *)(param_2 + 0xc) == 0) {
    bVar7 = false;
  }
  else {
    lVar3 = *(longlong *)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)(lVar3 + 0x1e) == *(short *)(lVar2 + 0x10a)) goto LAB_14766dfec;
      lVar3 = lVar3 + 0x20;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
    lVar3 = 0;
LAB_14766dfec:
    bVar7 = lVar3 != 0;
  }
  if (uVar1 != 0) {
    uVar6 = 0;
    do {
      if (param_9 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(param_9 + uVar6 * 4);
      }
      FUN_14766e0aa(param_1,param_3 + uVar6,param_6,
                    (ulonglong)*(ushort *)(param_5 + uVar6 * 2) * 0x128 +
                    *(longlong *)(*(longlong *)(param_1 + 8) + 8),param_4,
                    *(undefined8 *)(param_7 + uVar6 * 4),*(undefined8 *)(param_8 + uVar6 * 4),uVar4,
                    bVar7);
      uVar6 = uVar6 + 2;
      param_6 = param_6 + 8;
      param_4 = param_4 + 4;
    } while ((uint)uVar1 * 2 != uVar6);
  }
  return;
}



// FUNCTION 14766e0aa FUN_14766e0aa body=2100 status=ok
// SIG undefined FUN_14766e0aa(void)

void FUN_14766e0aa(longlong *param_1,undefined2 *param_2,longlong *param_3,longlong param_4,
                  undefined4 *param_5,double param_6,undefined8 param_7,longlong param_8,
                  undefined1 param_9)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  longlong *plVar17;
  ulonglong uVar18;
  uint uVar19;
  float fVar20;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  longlong *local_128;
  undefined1 local_115;
  undefined4 local_114;
  longlong *local_110;
  longlong local_108;
  longlong *local_100;
  ulonglong local_f8;
  undefined4 *local_f0;
  undefined2 *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined1 local_c8;
  undefined7 uStack_c7;
  int local_c0;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  longlong lStack_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar2 = *(longlong *)(param_4 + 0x100);
  plVar17 = *(longlong **)(param_4 + 0x108);
  local_115 = param_9;
  local_f0 = param_5;
  local_110 = param_1;
  local_e8 = param_2;
  if (plVar17 == (longlong *)0x0) {
    local_100 = (longlong *)FUN_14479d2ce(lVar2 + 0x18);
  }
  else {
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
    local_100 = (longlong *)FUN_14479d2ce(lVar2 + 0x18);
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
  lVar2 = *param_3;
  if (lVar2 == 0) goto LAB_14766e1e6;
  local_114 = *(undefined4 *)(param_4 + 0x11a);
  if (param_8 == 0) {
    uVar19 = 0;
    uVar18 = 0;
  }
  else {
    local_98 = 0;
    FUN_14485c47a(&local_98,param_8);
    uVar18 = local_98 >> 0x20;
    uVar19 = (uint)local_98;
  }
  local_98 = 0;
  FUN_14485c47a(&local_98,lVar2);
  uVar15 = local_98 & 0xffffffff;
  uVar6 = local_98 >> 0x20;
  uVar8 = *(uint *)(param_4 + 0xd8);
  if ((uVar8 == 3) && (DAT_14cab5b60 != '\x01')) goto LAB_14766e1e6;
  local_f8 = uVar15;
  if ((*(byte *)(param_4 + 0xe4) & 1) == 0) {
    if (((4 < uVar8) || ((0x16U >> (uVar8 & 0x1f) & 1) == 0)) || (*(int *)(param_4 + 0x88) == 1)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar2);
      }
      else if (lVar2 == 0) goto LAB_14766e388;
      local_98 = 0;
      FUN_14485c47a(&local_98,lVar2);
LAB_14766e388:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_158);
    }
  }
  else {
    local_108 = *local_110;
    lVar11 = *param_3;
    if ((lVar11 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar11);
LAB_14766e26a:
      local_98 = 0;
      FUN_14485c47a(&local_98,lVar11);
      uVar15 = local_98 >> 0x20;
      uVar8 = (uint)local_98;
    }
    else {
      uVar8 = 0;
      uVar15 = 0;
      if (lVar11 != 0) goto LAB_14766e26a;
    }
    FUN_147656eb4(local_108,local_114,(ulonglong)uVar19 | uVar18 << 0x20,
                  (ulonglong)uVar8 | uVar15 << 0x20);
  }
  plVar17 = local_110;
  uVar16 = local_114;
  lVar11 = param_4 + 0x68;
  if (param_8 != 0) {
    lVar9 = FUN_147656b30(*local_110,local_114,(ulonglong)uVar19 | uVar18 << 0x20,
                          (uVar6 << 0x20) + local_f8);
    if (lVar9 != 0) {
LAB_14766e40a:
      *(double *)(lVar9 + 8) = param_6;
      *(undefined8 *)(lVar9 + 0x10) = param_7;
      local_128 = local_100;
      local_138 = lVar9;
      local_130 = lVar11;
      FUN_143312c5c(plVar17,param_8,uVar16,lVar2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_158);
    }
    lVar9 = FUN_143308abe(*plVar17,uVar16,lVar2,param_8);
    if (lVar9 != 0) {
      lVar14 = FUN_14479d2ce(lVar9);
      plVar17 = local_110;
      uVar16 = local_114;
      if (lVar14 != 0) {
        local_138 = lVar14;
        (**(code **)(*(longlong *)(*(longlong *)(*local_110 + 0xe0) + 0xd8) + 8))
                  (*(longlong *)(*local_110 + 0xe0) + 0xd8,*local_e8,local_115,*local_f0);
        local_98 = local_98 & 0xffffffffffffff00;
        FUN_14766ea1c(*(undefined8 *)(*plVar17 + 0xe0),&local_98,lVar14);
        cVar7 = FUN_14113f0c0(lVar2 + 0x600);
        if (cVar7 != '\0') {
          uVar16 = *(undefined4 *)(lVar2 + 0x604);
          uVar3 = *(undefined4 *)(lVar2 + 0x608);
          uVar4 = *(undefined4 *)(lVar2 + 0x60c);
          *(undefined4 *)(lVar14 + 0xb78) = *(undefined4 *)(lVar2 + 0x600);
          *(undefined4 *)(lVar14 + 0xb7c) = uVar16;
          *(undefined4 *)(lVar14 + 0xb80) = uVar3;
          *(undefined4 *)(lVar14 + 0xb84) = uVar4;
        }
        if (0 < *(int *)(lVar2 + 0x618)) {
          FUN_140311eb6(lVar14 + 0xad8,lVar2 + 0x610);
        }
        uVar16 = local_114;
        if (0 < *(int *)(lVar2 + 0x628)) {
          FUN_140311eb6(lVar14 + 0xb00,lVar2 + 0x620);
        }
      }
      goto LAB_14766e40a;
    }
    goto LAB_14766e1e6;
  }
  local_98 = 0;
  uStack_90 = 0;
  local_88 = DAT_14cab58b0;
  uStack_84 = 0xffffffff;
  local_80 = 0;
  lStack_78 = 0;
  uVar19 = *(uint *)(param_4 + 0x8c);
  if (SBORROW4(0,uVar19)) {
    lVar9 = param_4 + 4;
    if (*(int *)(param_4 + 0x88) == 0) {
      lVar9 = param_4 + 0x10;
    }
    uVar19 = *(uint *)(lVar9 + 0x68);
    uVar18 = (ulonglong)*(uint *)(lVar9 + 0x6c) << 0x20;
  }
  else {
    uVar18 = 0;
  }
  FUN_1475be088(lVar2 + 0x4d0,uVar19 | uVar18,&local_98);
  local_b8 = (uint)local_98;
  iStack_b4 = local_98._4_4_;
  iStack_b0 = (int)uStack_90;
  iStack_ac = uStack_90._4_4_;
  local_a8 = CONCAT44(uStack_84,local_88);
  if (((local_98._4_4_ == 0 && (uint)local_98 == 0) && (int)uStack_90 == 0) && uStack_90._4_4_ == 0)
  {
LAB_14766e4b8:
    lVar12 = 0;
  }
  else {
    local_d8 = *(undefined8 *)(param_4 + 0x100);
    plVar17 = *(longlong **)(param_4 + 0x108);
    if (plVar17 == (longlong *)0x0) {
      local_d0 = (longlong *)0x0;
      FUN_1410cbcd8(&local_b8,&local_c8,*(undefined4 *)(param_4 + 0x110));
    }
    else {
      LOCK();
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      UNLOCK();
      local_d0 = plVar17;
      FUN_1410cbcd8(&local_b8,&local_c8,*(undefined4 *)(param_4 + 0x110));
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
    if ((longlong)local_c0 == 0) goto LAB_14766e4b8;
    lVar9 = CONCAT71(uStack_c7,local_c8);
    lVar14 = 0;
    local_108 = lVar11;
    do {
      local_e0 = *(undefined8 *)(lVar9 + lVar14);
      lVar11 = FUN_14479d2ce(&local_e0);
      if (lVar11 != 0) {
        lVar12 = FUN_144a6c4d8();
        if (((*(int *)(lVar12 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar12 + 0x38) * 8) == lVar12 + 0x30)) &&
           (lVar12 = FUN_1475c13e2(lVar2,lVar11,&local_98), lVar11 = local_108, uVar16 = local_114,
           lVar12 != 0)) goto LAB_14766e4ba;
      }
      lVar14 = lVar14 + 8;
    } while ((longlong)local_c0 * 8 != lVar14);
    lVar12 = 0;
    lVar11 = local_108;
    uVar16 = local_114;
  }
LAB_14766e4ba:
  plVar17 = local_110;
  lVar9 = FUN_147656b30(*local_110,uVar16,0,(uVar6 << 0x20) + local_f8);
  if (lVar9 == 0) {
    if (local_100 == (longlong *)0x0) {
      uVar13 = 0;
    }
    else {
      uVar13 = (**(code **)(*local_100 + 0x180))();
    }
    lVar9 = FUN_143309192(*plVar17,uVar16,lVar2,uVar13);
    if (lVar9 == 0) goto LAB_14766e1e6;
    lVar14 = FUN_14479d2ce(lVar9);
    if (lVar14 != 0) {
      local_138 = lVar14;
      (**(code **)(*(longlong *)(*(longlong *)(*plVar17 + 0xe0) + 0xd8) + 8))
                (*(longlong *)(*plVar17 + 0xe0) + 0xd8,*local_e8,local_115,*local_f0);
      local_c8 = 0;
      FUN_14766e91a(*(undefined8 *)(*plVar17 + 0xe0),&local_c8,lVar14);
      cVar7 = FUN_14113f0c0(lVar2 + 0x600);
      if (cVar7 != '\0') {
        uVar3 = *(undefined4 *)(lVar2 + 0x604);
        uVar4 = *(undefined4 *)(lVar2 + 0x608);
        uVar5 = *(undefined4 *)(lVar2 + 0x60c);
        *(undefined4 *)(lVar14 + 0xb78) = *(undefined4 *)(lVar2 + 0x600);
        *(undefined4 *)(lVar14 + 0xb7c) = uVar3;
        *(undefined4 *)(lVar14 + 0xb80) = uVar4;
        *(undefined4 *)(lVar14 + 0xb84) = uVar5;
      }
      if (0 < *(int *)(lVar2 + 0x618)) {
        FUN_140311eb6(lVar14 + 0xad8,lVar2 + 0x610);
      }
      if (0 < *(int *)(lVar2 + 0x628)) {
        FUN_140311eb6(lVar14 + 0xb00,lVar2 + 0x620);
      }
    }
  }
  plVar10 = (longlong *)FUN_14479d2ce(lVar9);
  if (((lVar12 != 0) && (plVar10 != (longlong *)0x0)) &&
     ((plVar10[0x24] != lVar12 || (plVar10[0x25] != lStack_78)))) {
    (**(code **)(*plVar10 + 0x490))(plVar10,lVar12,&DAT_14cadad98);
  }
  uVar19 = *(uint *)(param_4 + 0x8c);
  if (SBORROW4(0,uVar19)) {
    lVar14 = param_4 + 4;
    if (*(int *)(param_4 + 0x88) == 0) {
      lVar14 = param_4 + 0x10;
    }
    uVar19 = *(uint *)(lVar14 + 0x68);
    uVar18 = (ulonglong)*(uint *)(lVar14 + 0x6c) << 0x20;
  }
  else {
    uVar18 = 0;
  }
  fVar20 = (float)FUN_140cf0978(lVar2,uVar19 | uVar18);
  *(double *)(lVar9 + 8) = (double)fVar20 * param_6;
  *(undefined8 *)(lVar9 + 0x10) = param_7;
  local_128 = local_100;
  local_138 = lVar9;
  local_130 = lVar11;
  FUN_143312c5c(plVar17,0,uVar16,lVar2);
LAB_14766e1e6:
  if ((local_70 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14766e91a FUN_14766e91a body=256 status=ok
// SIG undefined FUN_14766e91a(void)

void FUN_14766e91a(longlong param_1,char *param_2,longlong param_3)

{
  byte *pbVar1;
  char cVar2;
  longlong lVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined8 unaff_RBP;
  undefined1 auStack_78 [44];
  undefined1 local_4c [8];
  int local_44;
  longlong local_40;
  undefined4 local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = param_3;
  cVar2 = FUN_14766b0ee();
  if (cVar2 != '\0') {
    FUN_14766afbc(param_1,local_4c,param_3);
    piVar4 = *(int **)(param_1 + 0xb0);
    if (*piVar4 != 0) {
      thunk_FUN_140adeba6(piVar4,local_4c);
      piVar4 = *(int **)(param_1 + 0xb0);
    }
    lVar3 = FUN_1400e4054(piVar4);
    if (lVar3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (undefined4)
              CONCAT71((int7)((ulonglong)unaff_RBP >> 8),'\x02' - (*(short *)(lVar3 + 0xe) == 0));
    }
    cVar2 = FUN_14766b36a(param_1,local_44,uVar5);
    if (cVar2 == '\0') {
      if (param_3 != 0) {
        FUN_14485c47a(local_38,param_3);
      }
      local_38[0] = 0;
      FUN_14766b3f8(param_1,local_44,uVar5);
    }
    if (*param_2 == '\x01') {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x68) + 0xc + (longlong)local_44 * 0x10);
      *pbVar1 = *pbVar1 | 2;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766ea1c FUN_14766ea1c body=256 status=ok
// SIG undefined FUN_14766ea1c(void)

void FUN_14766ea1c(longlong param_1,char *param_2,longlong param_3)

{
  byte *pbVar1;
  char cVar2;
  longlong lVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined8 unaff_RBP;
  undefined1 auStack_78 [44];
  undefined1 local_4c [8];
  int local_44;
  longlong local_40;
  undefined4 local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = param_3;
  cVar2 = FUN_14766b0ee();
  if (cVar2 != '\0') {
    FUN_14766afbc(param_1,local_4c,param_3);
    piVar4 = *(int **)(param_1 + 0xb0);
    if (*piVar4 != 0) {
      thunk_FUN_140adeba6(piVar4,local_4c);
      piVar4 = *(int **)(param_1 + 0xb0);
    }
    lVar3 = FUN_1400e4054(piVar4);
    if (lVar3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (undefined4)
              CONCAT71((int7)((ulonglong)unaff_RBP >> 8),'\x02' - (*(short *)(lVar3 + 0xe) == 0));
    }
    cVar2 = FUN_14766b36a(param_1,local_44,uVar5);
    if (cVar2 == '\0') {
      if (param_3 != 0) {
        FUN_14485c47a(local_38,param_3);
      }
      local_38[0] = 0;
      FUN_14766b3f8(param_1,local_44,uVar5);
    }
    if (*param_2 == '\x01') {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x68) + 0xc + (longlong)local_44 * 0x10);
      *pbVar1 = *pbVar1 | 2;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766eb1e FUN_14766eb1e body=256 status=ok
// SIG undefined FUN_14766eb1e(void)

void FUN_14766eb1e(longlong param_1,char *param_2,longlong param_3)

{
  byte *pbVar1;
  char cVar2;
  longlong lVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined8 unaff_RBP;
  undefined1 auStack_78 [44];
  undefined1 local_4c [8];
  int local_44;
  longlong local_40;
  undefined4 local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = param_3;
  cVar2 = FUN_14766b0ee();
  if (cVar2 != '\0') {
    FUN_14766afbc(param_1,local_4c,param_3);
    piVar4 = *(int **)(param_1 + 0xb0);
    if (*piVar4 != 0) {
      thunk_FUN_140adeba6(piVar4,local_4c);
      piVar4 = *(int **)(param_1 + 0xb0);
    }
    lVar3 = FUN_1400e4054(piVar4);
    if (lVar3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (undefined4)
              CONCAT71((int7)((ulonglong)unaff_RBP >> 8),'\x02' - (*(short *)(lVar3 + 0xe) == 0));
    }
    cVar2 = FUN_14766b36a(param_1,local_44,uVar5);
    if (cVar2 == '\0') {
      if (param_3 != 0) {
        FUN_14485c47a(local_38,param_3);
      }
      local_38[0] = 1;
      FUN_14766b3f8(param_1,local_44,uVar5);
    }
    if (*param_2 == '\x01') {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0x68) + 0xc + (longlong)local_44 * 0x10);
      *pbVar1 = *pbVar1 | 2;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766ec20 FUN_14766ec20 body=263 status=ok
// SIG undefined FUN_14766ec20(void)

void FUN_14766ec20(longlong *param_1,undefined8 param_2)

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
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar2 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar2 = (int)param_1[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_1;
  if ((iStack_3c != iVar2) || (uStack_48 != plVar1)) {
    do {
      FUN_14766f06a(param_2,*(undefined8 *)(*local_78 + (longlong)iStack_5c * 0x14));
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_1 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar2));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766ed28 FUN_14766ed28 body=304 status=ok
// SIG undefined FUN_14766ed28(void)

void FUN_14766ed28(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_128 [40];
  longlong *local_100;
  undefined4 local_f8;
  uint uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uint local_e8;
  int iStack_e4;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar1 = param_1 + 2;
  local_d8 = 0x100000000;
  local_c8 = 0xffffffff;
  iStack_c4 = 0;
  uStack_c0 = 0;
  uStack_d0 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar2 = 0;
  }
  else {
    FUN_1449c0562(&local_d8);
    iVar2 = (int)param_1[5];
  }
  uStack_e0 = CONCAT44(uStack_bc,uStack_c0);
  local_e8 = local_c8;
  iStack_e4 = iStack_c4;
  local_f8 = (undefined4)local_d8;
  uStack_f4 = local_d8._4_4_;
  uStack_f0 = (undefined4)uStack_d0;
  uStack_ec = uStack_d0._4_4_;
  local_100 = param_1;
  if ((iStack_c4 != iVar2) || (uStack_d0 != plVar1)) {
    do {
      FUN_14766f10c(&local_d8,*(undefined8 *)(*local_100 + (longlong)iStack_e4 * 0x20));
      (**(code **)(*param_2 + 0x78))(param_2,&local_d8);
      FUN_147046490(&local_d8);
      local_e8 = local_e8 & ~uStack_f4;
      FUN_1449c0562(&local_f8);
    } while (local_100 != param_1 ||
             ((longlong *)CONCAT44(uStack_ec,uStack_f0) != plVar1 || iStack_e4 != iVar2));
  }
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766ee5a FUN_14766ee5a body=263 status=ok
// SIG undefined FUN_14766ee5a(void)

void FUN_14766ee5a(longlong *param_1,undefined8 param_2)

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
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar2 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar2 = (int)param_1[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_1;
  if ((iStack_3c != iVar2) || (uStack_48 != plVar1)) {
    do {
      FUN_14766f1a0(param_2,*(undefined8 *)(*local_78 + (longlong)iStack_5c * 0x14));
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_1 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar2));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766ef62 FUN_14766ef62 body=263 status=ok
// SIG undefined FUN_14766ef62(void)

void FUN_14766ef62(longlong *param_1,undefined8 param_2)

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
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar2 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar2 = (int)param_1[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_1;
  if ((iStack_3c != iVar2) || (uStack_48 != plVar1)) {
    do {
      FUN_14766f238(param_2,*(undefined8 *)(*local_78 + (longlong)iStack_5c * 0x14));
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_1 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar2));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766f06a FUN_14766f06a body=160 status=ok
// SIG undefined FUN_14766f06a(void)

void FUN_14766f06a(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined4 local_a0;
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
  undefined1 local_30;
  undefined8 local_2c;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = *param_3;
  local_a4 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 3;
  local_2c = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_b0 = param_2;
  (**(code **)(*param_1 + 0x78))(0,&local_b0);
  FUN_147046490(&local_b0);
  if ((local_10 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766f10c FUN_14766f10c body=147 status=ok
// SIG undefined FUN_14766f10c(void)

undefined8 * FUN_14766f10c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 0x10) = 4;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return param_1;
}



// FUNCTION 14766f1a0 FUN_14766f1a0 body=151 status=ok
// SIG undefined FUN_14766f1a0(void)

void FUN_14766f1a0(longlong *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined4 local_a0;
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
  undefined1 local_30;
  undefined8 local_2c;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a4 = *param_3;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 1;
  local_2c = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_b0 = param_2;
  (**(code **)(*param_1 + 0x78))(0,&local_b0);
  FUN_147046490(&local_b0);
  if ((local_10 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766f238 FUN_14766f238 body=156 status=ok
// SIG undefined FUN_14766f238(void)

void FUN_14766f238(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined4 local_a0;
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
  undefined1 local_30;
  undefined8 local_2c;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a0 = *param_3;
  local_a8 = 0;
  local_a4 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 2;
  local_2c = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_b0 = param_2;
  (**(code **)(*param_1 + 0x78))(0,&local_b0);
  FUN_147046490(&local_b0);
  if ((local_10 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766f2d6 FUN_14766f2d6 body=30 status=ok
// SIG undefined FUN_14766f2d6(void)

void FUN_14766f2d6(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_2 + 0x199) = *(byte *)(param_2 + 0x199) | 0x10;
  puVar2 = (undefined8 *)(param_2 + 0x230);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}



// FUNCTION 14766f2fe FUN_14766f2fe body=29 status=ok
// SIG undefined FUN_14766f2fe(void)

void FUN_14766f2fe(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14766f31c FUN_14766f31c body=29 status=ok
// SIG undefined FUN_14766f31c(void)

undefined8 FUN_14766f31c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14766f33a FUN_14766f33a body=280 status=ok
// SIG undefined FUN_14766f33a(void)

void FUN_14766f33a(short *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  short *local_58;
  ulonglong *local_50;
  short local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_42 = -1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = *param_1;
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = param_1[1];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  local_42 = param_1[2];
  local_58 = &local_42;
  local_50 = &local_40;
  FUN_147552f5e(param_2,param_3,&local_58);
  lVar1 = 3;
  do {
    if (param_1[lVar1] != -1) {
      local_58 = &local_42;
      local_50 = &local_40;
      local_42 = param_1[lVar1];
      FUN_147552f5e(param_2,param_3,&local_58);
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0xf);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766f454 FUN_14766f454 body=1169 status=ok
// SIG undefined FUN_14766f454(void)

void FUN_14766f454(undefined8 param_1,longlong *param_2,short *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_3a8 [32];
  undefined8 local_388;
  undefined8 *local_380;
  int local_374;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined4 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined4 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined8 *local_1e0;
  int local_1d8;
  undefined8 local_1d0;
  undefined8 *local_1c8;
  int local_1c0;
  undefined8 local_1b8;
  undefined8 *local_1b0;
  int local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  local_68 = *(undefined8 *)(param_3 + 0xb);
  local_78 = *(undefined4 *)(param_3 + 3);
  uStack_74 = *(undefined4 *)(param_3 + 5);
  uStack_70 = *(undefined4 *)(param_3 + 7);
  uStack_6c = *(undefined4 *)(param_3 + 9);
  FUN_14766fb3e(&local_300,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8));
  lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    puVar11 = *(undefined8 **)(lVar4 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar11 + 0x1e) == param_3[2]) goto LAB_14766f4de;
      puVar11 = puVar11 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  puVar11 = (undefined8 *)0x0;
LAB_14766f4de:
  iVar1 = *(int *)(lVar4 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar11 + 1));
  }
  LOCK();
  *(int *)(puVar11 + 3) = *(int *)(puVar11 + 3) + 1;
  UNLOCK();
  lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    puVar10 = *(undefined8 **)(lVar4 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar10 + 0x1e) == param_3[1]) goto LAB_14766f51b;
      puVar10 = puVar10 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  puVar10 = (undefined8 *)0x0;
LAB_14766f51b:
  uVar5 = *puVar11;
  iVar2 = *(int *)(lVar4 + 0x14);
  local_370 = param_1;
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar10 + 1));
  }
  LOCK();
  *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + 1;
  UNLOCK();
  lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    puVar9 = *(undefined8 **)(lVar4 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar9 + 0x1e) == *param_3) goto LAB_14766f560;
      puVar9 = puVar9 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  puVar9 = (undefined8 *)0x0;
LAB_14766f560:
  uVar6 = *puVar10;
  iVar3 = *(int *)(lVar4 + 0x14);
  local_374 = iVar1;
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
  }
  LOCK();
  *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
  UNLOCK();
  uVar7 = *puVar9;
  local_1a8 = local_374;
  local_198 = local_300;
  local_190 = local_2f8;
  local_300 = 0;
  local_188 = (undefined4)local_2f0;
  uStack_184 = local_2f0._4_4_;
  uStack_180 = (undefined4)uStack_2e8;
  uStack_17c = uStack_2e8._4_4_;
  local_2f0 = 0;
  uStack_2e8 = 0;
  local_178 = local_2e0;
  local_170 = local_2d8;
  local_2d8 = 0;
  local_168 = local_2d0;
  local_160 = local_2c8;
  local_2d0 = 0;
  local_158 = local_2c0;
  local_2c0 = 0;
  local_150 = local_2b8;
  local_148 = local_2b0;
  local_2b8 = 0;
  local_140 = local_2a8;
  local_2a8 = 0;
  local_138 = local_2a0;
  local_130 = local_298;
  local_2a0 = 0;
  local_128 = local_290;
  local_290 = 0;
  local_120 = local_288;
  local_118 = local_280;
  local_288 = 0;
  local_110 = local_278;
  local_278 = 0;
  local_108 = local_270;
  local_100 = local_268;
  local_270 = 0;
  local_f8 = local_260;
  local_260 = 0;
  local_f0 = local_258;
  local_e8 = local_250;
  local_258 = 0;
  local_e0 = local_248;
  local_248 = 0;
  local_d8 = local_240;
  local_d0 = local_238;
  local_240 = 0;
  local_c8 = local_230;
  local_230 = 0;
  local_c0 = local_228;
  local_b8 = local_220;
  local_228 = 0;
  local_b0 = local_218;
  local_218 = 0;
  local_a8 = local_210;
  local_a0 = local_208;
  local_210 = 0;
  local_98 = local_200;
  local_200 = 0;
  local_90 = local_1f8;
  local_88 = local_1f0;
  local_1f8 = 0;
  local_80 = local_1e8;
  local_1e8 = 0;
  local_1e0 = puVar9;
  local_1d8 = iVar3;
  local_1d0 = uVar7;
  local_1c8 = puVar10;
  local_1c0 = iVar2;
  local_1b8 = uVar6;
  local_1b0 = puVar11;
  local_1a0 = uVar5;
  FUN_14766f8e6();
  local_368 = 0;
  uStack_360 = 0;
  local_358 = 0;
  uStack_350 = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_338 = 0;
  uStack_330 = 0;
  local_328 = 0;
  uStack_320 = 0;
  local_318 = 0;
  uStack_310 = 0;
  FUN_147670010(&local_198,&local_368);
  local_388 = uVar5;
  local_380 = &local_368;
  FUN_14766c324(local_370,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                uVar7,uVar6);
  FUN_14766fabe(&local_1e0);
  if ((local_60 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14766f8e6 FUN_14766f8e6 body=472 status=ok
// SIG undefined FUN_14766f8e6(void)

void FUN_14766f8e6(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[0x21] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x21] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x22] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x21] + 8));
    }
  }
  if (param_1[0x1e] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x1e] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x1f] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x1e] + 8));
    }
  }
  if (param_1[0x1b] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x1b] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x1c] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x1b] + 8));
    }
  }
  if (param_1[0x18] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x18] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x19] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x18] + 8));
    }
  }
  if (param_1[0x15] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x15] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x16] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x15] + 8));
    }
  }
  if (param_1[0x12] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x12] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x13] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0x12] + 8));
    }
  }
  if (param_1[0xf] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xf] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0x10] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xf] + 8));
    }
  }
  if (param_1[0xc] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0xc] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[0xd] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[0xc] + 8));
    }
  }
  if (param_1[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[9] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[10] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[9] + 8));
    }
  }
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[7] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014766fab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 14766fabe FUN_14766fabe body=127 status=ok
// SIG undefined FUN_14766fabe(void)

void FUN_14766fabe(longlong *param_1)

{
  int *piVar1;
  
  FUN_14766f8e6(param_1 + 9);
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[7] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014766fb2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 14766fb3e FUN_14766fb3e body=1232 status=ok
// SIG undefined FUN_14766fb3e(void)

/* WARNING: Removing unreachable block (ram,0x00014766fe38) */
/* WARNING: Removing unreachable block (ram,0x00014766fe43) */
/* WARNING: Removing unreachable block (ram,0x00014766fe5c) */
/* WARNING: Removing unreachable block (ram,0x00014766fe67) */
/* WARNING: Removing unreachable block (ram,0x00014766fe83) */
/* WARNING: Removing unreachable block (ram,0x00014766fe91) */
/* WARNING: Removing unreachable block (ram,0x00014766feb0) */
/* WARNING: Removing unreachable block (ram,0x00014766febe) */
/* WARNING: Removing unreachable block (ram,0x00014766fedd) */
/* WARNING: Removing unreachable block (ram,0x00014766feeb) */
/* WARNING: Removing unreachable block (ram,0x00014766ff0a) */
/* WARNING: Removing unreachable block (ram,0x00014766ff18) */
/* WARNING: Removing unreachable block (ram,0x00014766ff37) */
/* WARNING: Removing unreachable block (ram,0x00014766ff45) */
/* WARNING: Removing unreachable block (ram,0x00014766ff64) */
/* WARNING: Removing unreachable block (ram,0x00014766ff72) */
/* WARNING: Removing unreachable block (ram,0x00014766ff91) */
/* WARNING: Removing unreachable block (ram,0x00014766ff9f) */
/* WARNING: Removing unreachable block (ram,0x00014766ffbe) */
/* WARNING: Removing unreachable block (ram,0x00014766ffcc) */

undefined8 * FUN_14766fb3e(undefined8 *param_1,undefined8 param_2,undefined2 *param_3)

{
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_1475d7c4e(param_2,&local_60,param_3[0xb]);
  FUN_14762f08e(param_2,&local_78,param_3[10]);
  FUN_1476392bc(param_2,&local_90,param_3[9]);
  FUN_1475b4978(param_2,&local_a8,param_3[8]);
  FUN_1475b4978(param_2,&local_c0,param_3[7]);
  FUN_1475b4978(param_2,&local_d8,param_3[6]);
  FUN_1475b4978(param_2,&local_f0,param_3[5]);
  FUN_1475b4978(param_2,&local_108,param_3[4]);
  FUN_1475b4978(param_2,&local_120,param_3[3]);
  FUN_1475b4978(param_2,&local_138,param_3[2]);
  FUN_1475b4978(param_2,&local_150,param_3[1]);
  FUN_1475b4978(param_2,&local_168,*param_3);
  *param_1 = local_168;
  *(undefined4 *)(param_1 + 1) = local_160;
  param_1[2] = local_158;
  param_1[3] = local_150;
  *(undefined4 *)(param_1 + 4) = local_148;
  param_1[5] = local_140;
  param_1[6] = local_138;
  *(undefined4 *)(param_1 + 7) = local_130;
  param_1[8] = local_128;
  param_1[9] = local_120;
  *(undefined4 *)(param_1 + 10) = local_118;
  param_1[0xb] = local_110;
  param_1[0xc] = local_108;
  *(undefined4 *)(param_1 + 0xd) = local_100;
  param_1[0xe] = local_f8;
  param_1[0xf] = local_f0;
  *(undefined4 *)(param_1 + 0x10) = local_e8;
  param_1[0x11] = local_e0;
  param_1[0x12] = local_d8;
  *(undefined4 *)(param_1 + 0x13) = local_d0;
  param_1[0x14] = local_c8;
  param_1[0x15] = local_c0;
  *(undefined4 *)(param_1 + 0x16) = local_b8;
  param_1[0x17] = local_b0;
  param_1[0x18] = local_a8;
  *(undefined4 *)(param_1 + 0x19) = local_a0;
  param_1[0x1a] = local_98;
  param_1[0x1b] = local_90;
  *(undefined4 *)(param_1 + 0x1c) = local_88;
  param_1[0x1d] = local_80;
  param_1[0x1e] = local_78;
  *(undefined4 *)(param_1 + 0x1f) = local_70;
  param_1[0x20] = local_68;
  param_1[0x21] = local_60;
  *(undefined4 *)(param_1 + 0x22) = local_58;
  param_1[0x23] = local_50;
  local_50 = 0;
  local_60 = 0;
  local_68 = 0;
  local_78 = 0;
  local_80 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_108 = 0;
  local_110 = 0;
  local_120 = 0;
  local_128 = 0;
  local_138 = 0;
  local_150 = 0;
  local_168 = 0;
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147670010 FUN_147670010 body=177 status=ok
// SIG undefined FUN_147670010(void)

void FUN_147670010(longlong param_1,longlong *param_2)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    *param_2 = *(longlong *)(param_1 + 0x10);
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    param_2[1] = *(longlong *)(param_1 + 0x28);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    param_2[2] = *(longlong *)(param_1 + 0x40);
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    param_2[3] = *(longlong *)(param_1 + 0x58);
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    param_2[4] = *(longlong *)(param_1 + 0x70);
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    param_2[5] = *(longlong *)(param_1 + 0x88);
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    param_2[6] = *(longlong *)(param_1 + 0xa0);
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    param_2[7] = *(longlong *)(param_1 + 0xb8);
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    param_2[8] = *(longlong *)(param_1 + 0xd0);
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    param_2[9] = *(longlong *)(param_1 + 0xe8);
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    param_2[10] = *(longlong *)(param_1 + 0x100);
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    param_2[0xb] = *(longlong *)(param_1 + 0x118);
  }
  return;
}



// FUNCTION 1476700c2 FUN_1476700c2 body=219 status=ok
// SIG undefined FUN_1476700c2(void)

void FUN_1476700c2(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  ulonglong *local_48;
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = 0xffff;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *param_1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[1];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[2];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767019e FUN_14767019e body=503 status=ok
// SIG undefined FUN_14767019e(void)

void FUN_14767019e(undefined8 param_1,longlong *param_2,short *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  int local_9c;
  undefined8 local_98;
  undefined8 *local_90;
  int local_88;
  undefined8 local_80;
  undefined8 *local_78;
  int local_70;
  undefined8 local_68;
  undefined8 *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    puVar10 = *(undefined8 **)(lVar4 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar10 + 0x1e) == param_3[2]) goto LAB_1476701eb;
      puVar10 = puVar10 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar10 = (undefined8 *)0x0;
LAB_1476701eb:
  iVar1 = *(int *)(lVar4 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar10 + 1));
  }
  LOCK();
  *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + 1;
  UNLOCK();
  lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    puVar9 = *(undefined8 **)(lVar4 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar9 + 0x1e) == param_3[1]) goto LAB_147670228;
      puVar9 = puVar9 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar9 = (undefined8 *)0x0;
LAB_147670228:
  uVar5 = *puVar10;
  iVar2 = *(int *)(lVar4 + 0x14);
  local_98 = param_1;
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
  }
  LOCK();
  *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
  UNLOCK();
  lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    puVar8 = *(undefined8 **)(lVar4 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar8 + 0x1e) == *param_3) goto LAB_147670275;
      puVar8 = puVar8 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar8 = (undefined8 *)0x0;
LAB_147670275:
  uVar6 = *puVar9;
  iVar3 = *(int *)(lVar4 + 0x14);
  local_9c = iVar1;
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar8 + 1));
  }
  LOCK();
  *(int *)(puVar8 + 3) = *(int *)(puVar8 + 3) + 1;
  UNLOCK();
  local_80 = *puVar8;
  local_58 = local_9c;
  local_a8 = uVar5;
  local_90 = puVar8;
  local_88 = iVar3;
  local_78 = puVar9;
  local_70 = iVar2;
  local_68 = uVar6;
  local_60 = puVar10;
  local_50 = uVar5;
  FUN_14766d5c0(local_98,*(undefined8 *)
                          (*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),local_80,
                uVar6);
  FUN_147670396(&local_90);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147670396 FUN_147670396 body=118 status=ok
// SIG undefined FUN_147670396(void)

void FUN_147670396(longlong *param_1)

{
  int *piVar1;
  
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[7] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476703fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 14767040c FUN_14767040c body=332 status=ok
// SIG undefined FUN_14767040c(void)

void FUN_14767040c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  short *local_50;
  ulonglong *local_48;
  short local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = -1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *(short *)(param_1 + 2);
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *(short *)(param_1 + 4);
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *(short *)(param_1 + 6);
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *(short *)(param_1 + 8);
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *(short *)(param_1 + 10);
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  if (*(short *)(param_1 + 0xc) != -1) {
    local_50 = &local_3a;
    local_48 = &local_38;
    local_3a = *(short *)(param_1 + 0xc);
    FUN_147552f5e(param_2,param_3);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14767055a FUN_14767055a body=897 status=ok
// SIG undefined FUN_14767055a(void)

void FUN_14767055a(undefined8 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  int local_124;
  int local_120;
  int local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  int local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  int local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  int local_88;
  undefined8 local_80;
  undefined8 *local_78;
  int local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1462513a0(*(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8),
                &local_f8,*(undefined2 *)(param_3 + 0xc));
  lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    puVar10 = *(undefined8 **)(lVar4 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar10 + 0x1e) == *(short *)(param_3 + 10)) goto LAB_1476705c8;
      puVar10 = puVar10 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar10 = (undefined8 *)0x0;
LAB_1476705c8:
  iVar1 = *(int *)(lVar4 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar10 + 1));
  }
  LOCK();
  *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + 1;
  UNLOCK();
  lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    puVar11 = *(undefined8 **)(lVar4 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar11 + 0x1e) == *(short *)(param_3 + 8)) goto LAB_1476705fe;
      puVar11 = puVar11 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar11 = (undefined8 *)0x0;
LAB_1476705fe:
  local_108 = *puVar10;
  local_120 = *(int *)(lVar4 + 0x14);
  if (local_120 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar11 + 1));
  }
  LOCK();
  *(int *)(puVar11 + 3) = *(int *)(puVar11 + 3) + 1;
  UNLOCK();
  lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    puVar7 = *(undefined8 **)(lVar4 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == *(short *)(param_3 + 6)) goto LAB_14767063f;
      puVar7 = puVar7 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar7 = (undefined8 *)0x0;
LAB_14767063f:
  local_110 = *puVar11;
  local_124 = *(int *)(lVar4 + 0x14);
  if (local_124 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar7 + 1));
  }
  LOCK();
  *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
  UNLOCK();
  lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    puVar9 = *(undefined8 **)(lVar4 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar9 + 0x1e) == *(short *)(param_3 + 4)) goto LAB_147670680;
      puVar9 = puVar9 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar9 = (undefined8 *)0x0;
LAB_147670680:
  local_118 = *puVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    local_130 = param_3;
    AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
    param_3 = local_130;
  }
  LOCK();
  *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
  UNLOCK();
  lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    puVar8 = *(undefined8 **)(lVar4 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar8 + 0x1e) == *(short *)(param_3 + 2)) goto LAB_1476706e5;
      puVar8 = puVar8 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar8 = (undefined8 *)0x0;
LAB_1476706e5:
  uVar5 = *puVar9;
  iVar3 = *(int *)(lVar4 + 0x14);
  local_b8 = iVar2;
  local_11c = iVar1;
  local_100 = param_1;
  if (iVar3 == 1) {
    local_130 = CONCAT44(local_130._4_4_,iVar2);
    AcquireSRWLockShared((PSRWLOCK)(puVar8 + 1));
    local_b8 = (int)local_130;
  }
  LOCK();
  *(int *)(puVar8 + 3) = *(int *)(puVar8 + 3) + 1;
  UNLOCK();
  local_c8 = *puVar8;
  local_e0 = *(undefined8 *)
              (*(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8) + 0x18)
  ;
  local_a0 = local_124;
  local_98 = local_118;
  local_88 = local_120;
  local_80 = local_110;
  local_70 = local_11c;
  local_68 = local_108;
  local_60 = local_f8;
  local_58 = local_f0;
  local_f8 = 0;
  local_50 = local_e8;
  local_138 = local_e8;
  local_140 = local_108;
  local_148 = local_110;
  local_150 = local_118;
  local_158 = uVar5;
  local_d8 = puVar8;
  local_d0 = iVar3;
  local_c0 = puVar9;
  local_b0 = uVar5;
  local_a8 = puVar7;
  local_90 = puVar11;
  local_78 = puVar10;
  FUN_14766df98(local_100,
                *(undefined8 *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8));
  FUN_1476708dc(&local_e0);
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1476708dc FUN_1476708dc body=228 status=ok
// SIG undefined FUN_1476708dc(void)

void FUN_1476708dc(longlong param_1)

{
  int *piVar1;
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x80) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x88) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x80) + 8));
    }
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x68) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x70) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x68) + 8));
    }
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x50) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x58) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x50) + 8));
    }
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x38) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x40) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x38) + 8));
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x28) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x20) + 8));
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x10) == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001476709b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 8) + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1476709c0 FUN_1476709c0 body=140 status=ok
// SIG undefined FUN_1476709c0(void)

undefined8 *
FUN_1476709c0(undefined8 *param_1,longlong param_2,undefined8 *param_3,longlong *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar2 = *(undefined4 *)(param_3 + 2);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar4 = *(undefined4 *)(param_3 + 3);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_3 + 0xc);
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 3) = uVar4;
  *param_1 = uVar5;
  param_1[1] = uVar6;
  param_1[8] = 0x10000000000;
  param_1[0xd] = 0x10000000000;
  param_1[0x14] = 0x10000000000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x19] = 0x10000000000;
  FUN_14766db76(0,param_1 + 4);
  param_1[0x1a] = param_2;
  param_1[0x1b] = *(undefined8 *)(param_2 + 0x248);
  lVar1 = *param_4;
  param_1[0x1c] = lVar1;
  param_1[0x1d] = *(undefined8 *)(*(longlong *)(lVar1 + 0x28) + 0x548);
  return param_1;
}



// FUNCTION 147670a4c FUN_147670a4c body=103 status=ok
// SIG undefined FUN_147670a4c(void)

int FUN_147670a4c(longlong *param_1,uint param_2,int *param_3)

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
        lVar4 = (longlong)iVar1 * 0x40;
        if (((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + lVar4 + 4) == param_3[1]))
           && (*(int *)(lVar2 + lVar4 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x38 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 147670ab4 FUN_147670ab4 body=165 status=ok
// SIG undefined FUN_147670ab4(void)

void FUN_147670ab4(longlong *param_1,ushort *param_2)

{
  longlong lVar1;
  ushort uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = *param_2;
    iVar3 = FUN_144a78877(*(undefined4 *)(param_2 + 2),*(undefined4 *)(param_2 + 4));
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    ((longlong)
                     (int)(iVar3 + (uint)(uVar2 >> 2) + (uint)uVar2 * 0x40 + 0x9e3779b9 ^
                          (uint)uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar3 * 0x40;
        if (((*(int *)(*param_1 + (longlong)iVar3 * 0x40) == *(int *)param_2) &&
            (*(int *)(lVar1 + 4) == *(int *)(param_2 + 2))) &&
           (*(int *)(lVar1 + 8) == *(int *)(param_2 + 4))) {
          FUN_147670b5a(param_1);
          return;
        }
        iVar3 = *(int *)(lVar1 + 0x38);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 147670b5a FUN_147670b5a body=113 status=ok
// SIG undefined FUN_147670b5a(void)

void FUN_147670b5a(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong *plVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x40;
  plVar6 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[8];
  }
  lVar3 = (longlong)*(int *)(lVar1 + 0x3c + lVar2);
  iVar5 = *(int *)((longlong)plVar6 + lVar3 * 4);
  if (iVar5 == param_2) {
    puVar4 = (undefined4 *)((longlong)plVar6 + lVar3 * 4);
  }
  else {
    do {
      lVar3 = (longlong)iVar5;
      iVar5 = *(int *)(lVar1 + 0x38 + lVar3 * 0x40);
    } while (iVar5 != param_2);
    puVar4 = (undefined4 *)(lVar1 + lVar3 * 0x40 + 0x38);
  }
  *puVar4 = *(undefined4 *)(lVar1 + lVar2 + 0x38);
  if (*(char *)(*param_1 + 0x2c + lVar2) == '\x01') {
    *(undefined1 *)(lVar2 + *param_1 + 0x2c) = 0;
  }
  FUN_147670bcc();
  return;
}


