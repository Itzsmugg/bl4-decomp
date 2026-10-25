// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1497ef9e0 FUN_1497ef9e0 body=154 status=ok
// SIG undefined FUN_1497ef9e0(void)

void FUN_1497ef9e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_2;
  local_40 = param_3;
  FUN_14980203e(param_1 + 0x30);
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar3 = 0;
    do {
      local_48 = param_2;
      local_40 = param_3;
      FUN_14980203e(*(longlong *)(lVar2 + lVar3) + 0x48,&local_48);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497efa7c FUN_1497efa7c body=144 status=ok
// SIG undefined FUN_1497efa7c(void)

void FUN_1497efa7c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar3 = 0;
    do {
      FUN_1497ef9e0(*(undefined8 *)(lVar2 + lVar3),param_2,param_1);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  FUN_149801cec(param_1 + 0xf0,param_2);
  iVar1 = *(int *)(param_1 + 0xe8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xe0);
    lVar3 = 0;
    do {
      FUN_1498012fe(*(longlong *)(lVar2 + lVar3) + 0x418,param_2);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 1497efb0c FUN_1497efb0c body=141 status=ok
// SIG undefined FUN_1497efb0c(void)

void FUN_1497efb0c(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_146e238e0();
    iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x1e0) + (longlong)param_2 * 4);
    uVar3 = FUN_14491371e(param_1);
    lVar2 = (longlong)iVar1 * 0xc;
    FUN_1497ebf80(uVar3,param_1 + 0x340,*(undefined1 *)(param_1 + 0x35c),
                  lVar2 + *(longlong *)(param_1 + 200),*(longlong *)(param_1 + 0xe0) + lVar2,
                  param_1 + 0x34c,*(undefined4 *)(param_1 + 0x358));
  }
  return;
}



// FUNCTION 1497efb9a FUN_1497efb9a body=159 status=ok
// SIG undefined FUN_1497efb9a(void)

void FUN_1497efb9a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (*(int *)(param_2 + 0x38) != *(int *)(param_2 + 100)) {
    lVar1 = param_2 + 0x68;
    if (*(longlong *)(param_2 + 0x70) != 0) {
      lVar1 = *(longlong *)(param_2 + 0x70);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_2 + 0x78) - 1U & *(uint *)(param_1 + 0x20))
                             * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)(param_2 + 0x30) + (longlong)iVar2 * 0x80;
        if (*(uint *)(*(longlong *)(param_2 + 0x30) + (longlong)iVar2 * 0x80) ==
            *(uint *)(param_1 + 0x20)) {
          if ((void *)(lVar1 + 0x10) == (void *)0x0 || lVar1 == 0) {
            return;
          }
          memmove((void *)(param_1 + 0x50),(void *)(lVar1 + 0x10),0x60);
          *(undefined8 *)(param_1 + 0x90) = 0x3ff0000000000000;
          *(undefined8 *)(param_1 + 0x98) = 0x3ff0000000000000;
          *(undefined8 *)(param_1 + 0xa0) = 0x3ff0000000000000;
          *(undefined8 *)(param_1 + 0xa8) = 0;
          return;
        }
        iVar2 = *(int *)(lVar1 + 0x70);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1497efc3a FUN_1497efc3a body=67 status=ok
// SIG undefined FUN_1497efc3a(void)

void FUN_1497efc3a(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001497efc7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1497efc7e FUN_1497efc7e body=146 status=ok
// SIG undefined FUN_1497efc7e(void)

void FUN_1497efc7e(longlong param_1,ulonglong param_2,int *param_3)

{
  undefined1 auStack_58 [36];
  float local_34;
  float local_30;
  float local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = (float)*param_3;
  local_30 = local_34;
  local_2c = local_34;
  FUN_14980241a(local_34,param_2,param_1 + 0x18,&local_34);
  local_34 = (float)*param_3;
  local_30 = local_34;
  local_2c = local_34;
  FUN_14980241a(param_1,param_2 & 0xffffffff,param_1 + 0x28,&local_34);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497efd16 FUN_1497efd16 body=247 status=ok
// SIG undefined FUN_1497efd16(void)

undefined8 * FUN_1497efd16(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong *local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc27208) {
    FUN_144b3d300(&DAT_14cc27208);
    if (DAT_14cc27208 == -1) {
      local_20 = FUN_1414ccbe2();
      if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_14689c22e(local_20);
      }
      local_18 = FUN_1414cccc8();
      if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_14689c22e(local_18);
      }
      local_30 = &local_20;
      local_28 = &local_10;
      FUN_1497efe0e();
      atexit((_func_5014 *)&LAB_14462d5fd);
      _Init_thread_footer(&DAT_14cc27208);
    }
  }
  *param_2 = DAT_14cc271f8;
  *(undefined4 *)(param_2 + 1) = DAT_14cc27200;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497efe0e FUN_1497efe0e body=89 status=ok
// SIG undefined FUN_1497efe0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1497efe0e(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  DAT_14cc271f8 = 0;
  lVar1 = *param_1;
  uVar2 = (ulonglong)(param_1[1] - lVar1) >> 3;
  DAT_14cc27200 = (int)uVar2;
  if (DAT_14cc27200 == 0) {
    _DAT_14cc27204 = 0;
    return;
  }
  FUN_14980253e(uVar2 & 0xffffffff);
  FUN_149802599(DAT_14cc271f8,lVar1,uVar2 & 0xffffffff);
  return;
}



// FUNCTION 1497efe68 FUN_1497efe68 body=57 status=ok
// SIG undefined FUN_1497efe68(void)

void FUN_1497efe68(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc26ef0 == 0) {
    uVar1 = FUN_145c5c1ab();
    DAT_14cc26ef0 = FUN_14171c317(FUN_14675de33,uVar1,L"EChaosWeightMapTarget");
  }
  return;
}



// FUNCTION 1497efeac FUN_1497efeac body=240 status=ok
// SIG undefined FUN_1497efeac(void)

void FUN_1497efeac(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1497eff9e(param_1,iVar1 != 0,local_28 != 0);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497eff9e FUN_1497eff9e body=416 status=ok
// SIG undefined FUN_1497eff9e(void)

void FUN_1497eff9e(longlong param_1,char param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != '\0') {
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,2,0x10);
    puVar3 = local_40;
    local_38 = 2;
    *local_40 = &PTR_LAB_14be870d0;
    uVar4 = FUN_144a3f946();
    puVar3[2] = uVar4;
    *puVar3 = &PTR_FUN_14be87060;
    iVar1 = *(int *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x38) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x3c) < iVar1 + 1U) {
      FUN_1498029ae((longlong *)(param_1 + 0x30),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar5 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar5) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar5) = 0;
    *(undefined8 **)(lVar2 + lVar5) = local_40;
    local_40 = (undefined8 *)0x0;
    *(undefined4 *)(lVar2 + 8 + lVar5) = local_38;
    local_38 = 0;
    FUN_1449db362();
  }
  if (param_3 != '\0') {
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,2,0x10);
    puVar3 = local_40;
    local_38 = 2;
    *local_40 = &PTR_LAB_14be870d0;
    uVar4 = FUN_144a3f946();
    puVar3[2] = uVar4;
    *puVar3 = &PTR_FUN_14be87140;
    iVar1 = *(int *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x38) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x3c) < iVar1 + 1U) {
      FUN_1498029ae((longlong *)(param_1 + 0x30),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar5 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar5) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar5) = 0;
    *(undefined8 **)(lVar2 + lVar5) = local_40;
    local_40 = (undefined8 *)0x0;
    *(undefined4 *)(lVar2 + 8 + lVar5) = local_38;
    local_38 = 0;
    FUN_1449db362();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f0140 FUN_1497f0140 body=317 status=ok
// SIG undefined FUN_1497f0140(void)

void FUN_1497f0140(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a64e42();
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
  local_48 = local_28;
  local_58 = local_38;
  uStack_54 = uStack_34;
  uStack_50 = uStack_30;
  uStack_4c = uStack_2c;
  FUN_1497f027e(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f027e FUN_1497f027e body=292 status=ok
// SIG undefined FUN_1497f027e(void)

void FUN_1497f027e(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *(undefined8 *)(param_4 + 4);
  local_78 = *param_4;
  uStack_74 = param_4[1];
  uStack_70 = param_4[2];
  uStack_6c = param_4[3];
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,4,0x10);
  puVar3 = local_60;
  local_58 = 4;
  *local_60 = &PTR_LAB_14be869d0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14be86d50;
  *(undefined4 *)(puVar3 + 3) = param_2;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = param_3;
  *(undefined4 *)(puVar3 + 4) = local_78;
  *(undefined4 *)((longlong)puVar3 + 0x24) = uStack_74;
  *(undefined4 *)(puVar3 + 5) = uStack_70;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = uStack_6c;
  puVar3[6] = local_68;
  iVar1 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
    FUN_149802750((longlong *)(param_1 + 0x40),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = 0;
  *(undefined8 **)(lVar2 + lVar5) = local_60;
  local_60 = (undefined8 *)0x0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = local_58;
  local_58 = 0;
  FUN_1449db362();
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f03a4 FUN_1497f03a4 body=231 status=ok
// SIG undefined FUN_1497f03a4(void)

void FUN_1497f03a4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
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
  local_48 = local_38;
  uStack_40 = uStack_30;
  local_58 = local_28;
  uStack_54 = uStack_24;
  uStack_50 = uStack_20;
  uStack_4c = uStack_1c;
  FUN_1497f048c(param_1);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f048c FUN_1497f048c body=255 status=ok
// SIG undefined FUN_1497f048c(void)

void FUN_1497f048c(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *param_2;
  uStack_50 = param_2[1];
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,4,0x10);
  puVar3 = local_38;
  local_30 = 4;
  *local_38 = &PTR_LAB_14be869d0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14be86f80;
  *(undefined4 *)(puVar3 + 3) = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = local_58._4_4_;
  *(undefined4 *)(puVar3 + 4) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar3 + 0x24) = uStack_50._4_4_;
  *(undefined4 *)(puVar3 + 5) = local_48;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = uStack_44;
  *(undefined4 *)(puVar3 + 6) = uStack_40;
  *(undefined4 *)((longlong)puVar3 + 0x34) = uStack_3c;
  iVar1 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
    FUN_149802750((longlong *)(param_1 + 0x40),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = 0;
  *(undefined8 **)(lVar2 + lVar5) = local_38;
  local_38 = (undefined8 *)0x0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = local_30;
  local_30 = 0;
  FUN_1449db362();
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f058c FUN_1497f058c body=156 status=ok
// SIG undefined FUN_1497f058c(void)

void FUN_1497f058c(undefined8 param_1,longlong param_2)

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
  FUN_1497f062a(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f062a FUN_1497f062a body=277 status=ok
// SIG undefined FUN_1497f062a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1497f062a(longlong param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  fVar6 = logf(param_2);
  fVar6 = fVar6 * _DAT_14cc272c0 + 1.0;
  if (1.0 <= fVar6) {
    fVar6 = 1.0;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,2,0x10);
  puVar3 = local_40;
  local_38 = 2;
  *local_40 = &PTR_LAB_14be869d0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14be86f10;
  puVar3[3] = (ulonglong)(uint)fVar6 << 0x20;
  iVar1 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
    FUN_149802750((longlong *)(param_1 + 0x40),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = 0;
  *(undefined8 **)(lVar2 + lVar5) = local_40;
  local_40 = (undefined8 *)0x0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = local_38;
  local_38 = 0;
  FUN_1449db362();
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f0744 FUN_1497f0744 body=158 status=ok
// SIG undefined FUN_1497f0744(void)

void FUN_1497f0744(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1497f07e4(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f07e4 FUN_1497f07e4 body=232 status=ok
// SIG undefined FUN_1497f07e4(void)

void FUN_1497f07e4(longlong param_1,undefined1 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,2,0x10);
  puVar3 = local_40;
  local_38 = 2;
  *local_40 = &PTR_LAB_14be869d0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14be86c70;
  *(undefined1 *)(puVar3 + 3) = param_2;
  iVar1 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
    FUN_149802750((longlong *)(param_1 + 0x40),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = 0;
  *(undefined8 **)(lVar2 + lVar5) = local_40;
  local_40 = (undefined8 *)0x0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = local_38;
  local_38 = 0;
  FUN_1449db362();
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f08d4 FUN_1497f08d4 body=396 status=ok
// SIG undefined FUN_1497f08d4(void)

void FUN_1497f08d4(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  iVar1 = local_2c;
  local_30 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_30;
  FUN_1497f0a62(param_1,local_24,local_28,iVar1 != 0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f0a62 FUN_1497f0a62 body=299 status=ok
// SIG undefined FUN_1497f0a62(void)

void FUN_1497f0a62(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                  undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined8 *local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = (undefined8 *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,3,0x10);
  puVar3 = local_70;
  local_68 = 3;
  *local_70 = &PTR_LAB_14be869d0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14be86c00;
  *(undefined4 *)(puVar3 + 3) = param_2;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = param_3;
  *(undefined1 *)(puVar3 + 4) = param_4;
  *(undefined4 *)((longlong)puVar3 + 0x24) = param_5;
  iVar1 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
    FUN_149802750((longlong *)(param_1 + 0x40),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = 0;
  *(undefined8 **)(lVar2 + lVar5) = local_70;
  local_70 = (undefined8 *)0x0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = local_68;
  local_68 = 0;
  FUN_1449db362();
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f0b8e FUN_1497f0b8e body=232 status=ok
// SIG undefined FUN_1497f0b8e(void)

void FUN_1497f0b8e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
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
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1497f0c78(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f0c78 FUN_1497f0c78 body=256 status=ok
// SIG undefined FUN_1497f0c78(void)

void FUN_1497f0c78(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  puVar3 = local_60;
  local_58 = 2;
  *local_60 = &PTR_LAB_14be869d0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14be86ce0;
  *(undefined4 *)(puVar3 + 3) = param_2;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = param_3;
  iVar1 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
    FUN_149802750((longlong *)(param_1 + 0x40),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = 0;
  *(undefined8 **)(lVar2 + lVar5) = local_60;
  local_60 = (undefined8 *)0x0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = local_58;
  local_58 = 0;
  FUN_1449db362();
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f0d80 FUN_1497f0d80 body=323 status=ok
// SIG undefined FUN_1497f0d80(void)

void FUN_1497f0d80(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  iVar1 = local_28;
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
  local_48 = local_30;
  local_58 = local_40;
  uStack_54 = uStack_3c;
  uStack_50 = uStack_38;
  uStack_4c = uStack_34;
  FUN_1497f0ec4(param_1,local_24,iVar1 != 0);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f0ec4 FUN_1497f0ec4 body=290 status=ok
// SIG undefined FUN_1497f0ec4(void)

void FUN_1497f0ec4(longlong param_1,undefined4 param_2,undefined1 param_3,undefined4 *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined8 *local_70;
  undefined4 local_68;
  undefined4 uStack_5b;
  undefined4 uStack_57;
  undefined4 uStack_53;
  undefined4 uStack_4f;
  undefined3 uStack_4b;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = *(undefined8 *)(param_4 + 4);
  uStack_5b._3_1_ = (undefined1)*param_4;
  uStack_57._3_1_ = (undefined1)param_4[1];
  uStack_57 = CONCAT13(uStack_57._3_1_,(int3)((uint)*param_4 >> 8));
  uStack_53._3_1_ = (undefined1)param_4[2];
  uStack_53 = CONCAT13(uStack_53._3_1_,(int3)((uint)param_4[1] >> 8));
  uStack_4f._3_1_ = (undefined1)param_4[3];
  uStack_4f = CONCAT13(uStack_4f._3_1_,(int3)((uint)param_4[2] >> 8));
  uStack_4b = (undefined3)((uint)param_4[3] >> 8);
  local_70 = (undefined8 *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,4,0x10);
  puVar3 = local_70;
  local_68 = 4;
  *local_70 = &PTR_LAB_14be869d0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14be86ea0;
  *(undefined4 *)(puVar3 + 3) = param_2;
  *(undefined1 *)((longlong)puVar3 + 0x1c) = param_3;
  *(undefined4 *)((longlong)puVar3 + 0x1d) = uStack_5b;
  *(undefined4 *)((longlong)puVar3 + 0x21) = uStack_57;
  *(undefined4 *)((longlong)puVar3 + 0x25) = uStack_53;
  *(undefined4 *)((longlong)puVar3 + 0x29) = uStack_4f;
  *(uint *)(puVar3 + 5) = CONCAT31((undefined3)uStack_4f,uStack_53._3_1_);
  *(uint *)((longlong)puVar3 + 0x2c) = CONCAT31(uStack_4b,uStack_4f._3_1_);
  *(undefined4 *)(puVar3 + 6) = (undefined4)local_48;
  *(undefined4 *)((longlong)puVar3 + 0x34) = local_48._4_4_;
  iVar1 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
    FUN_149802750((longlong *)(param_1 + 0x40),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = 0;
  *(undefined8 **)(lVar2 + lVar5) = local_70;
  local_70 = (undefined8 *)0x0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = local_68;
  local_68 = 0;
  FUN_1449db362();
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f0fe8 FUN_1497f0fe8 body=231 status=ok
// SIG undefined FUN_1497f0fe8(void)

void FUN_1497f0fe8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
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
  local_48 = local_38;
  uStack_40 = uStack_30;
  local_58 = local_28;
  uStack_54 = uStack_24;
  uStack_50 = uStack_20;
  uStack_4c = uStack_1c;
  FUN_1497f10d0(param_1);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f10d0 FUN_1497f10d0 body=255 status=ok
// SIG undefined FUN_1497f10d0(void)

void FUN_1497f10d0(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *param_2;
  uStack_50 = param_2[1];
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,4,0x10);
  puVar3 = local_38;
  local_30 = 4;
  *local_38 = &PTR_LAB_14be869d0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14be86b90;
  *(undefined4 *)(puVar3 + 3) = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = local_58._4_4_;
  *(undefined4 *)(puVar3 + 4) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar3 + 0x24) = uStack_50._4_4_;
  *(undefined4 *)(puVar3 + 5) = local_48;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = uStack_44;
  *(undefined4 *)(puVar3 + 6) = uStack_40;
  *(undefined4 *)((longlong)puVar3 + 0x34) = uStack_3c;
  iVar1 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
    FUN_149802750((longlong *)(param_1 + 0x40),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = 0;
  *(undefined8 **)(lVar2 + lVar5) = local_38;
  local_38 = (undefined8 *)0x0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = local_30;
  local_30 = 0;
  FUN_1449db362();
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f11d0 FUN_1497f11d0 body=232 status=ok
// SIG undefined FUN_1497f11d0(void)

void FUN_1497f11d0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
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
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1497f12ba(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f12ba FUN_1497f12ba body=304 status=ok
// SIG undefined FUN_1497f12ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1497f12ba(longlong param_1,float param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  fVar6 = logf(param_2);
  fVar6 = fVar6 * _DAT_14cc272c0 + 1.0;
  if (1.0 <= fVar6) {
    fVar6 = 1.0;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar3 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_14be869d0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14be86b20;
  puVar3[3] = (ulonglong)(uint)fVar6 | 0x3f80000000000000;
  *(undefined4 *)(puVar3 + 4) = param_3;
  iVar1 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
    FUN_149802750((longlong *)(param_1 + 0x40),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = 0;
  *(undefined8 **)(lVar2 + lVar5) = local_50;
  local_50 = (undefined8 *)0x0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = local_48;
  local_48 = 0;
  FUN_1449db362();
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f13ec FUN_1497f13ec body=319 status=ok
// SIG undefined FUN_1497f13ec(void)

void FUN_1497f13ec(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
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
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_48;
  uStack_50 = uStack_40;
  local_68 = local_38;
  uStack_60 = uStack_30;
  local_78 = local_28;
  uStack_74 = uStack_24;
  uStack_70 = uStack_20;
  uStack_6c = uStack_1c;
  FUN_1497f152c(param_1);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f152c FUN_1497f152c body=273 status=ok
// SIG undefined FUN_1497f152c(void)

void FUN_1497f152c(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = *param_2;
  uStack_60 = param_2[1];
  local_58 = *param_3;
  uStack_50 = param_3[1];
  local_48 = *param_4;
  uStack_44 = param_4[1];
  uStack_40 = param_4[2];
  uStack_3c = param_4[3];
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,5,0x10);
  puVar3 = local_38;
  local_30 = 5;
  *local_38 = &PTR_LAB_14be869d0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14be86a40;
  *(undefined4 *)(puVar3 + 3) = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = local_68._4_4_;
  *(undefined4 *)(puVar3 + 4) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar3 + 0x24) = uStack_60._4_4_;
  *(undefined4 *)(puVar3 + 5) = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = local_58._4_4_;
  *(undefined4 *)(puVar3 + 6) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar3 + 0x34) = uStack_50._4_4_;
  *(undefined4 *)(puVar3 + 7) = local_48;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_44;
  *(undefined4 *)(puVar3 + 8) = uStack_40;
  *(undefined4 *)((longlong)puVar3 + 0x44) = uStack_3c;
  iVar1 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
    FUN_149802750((longlong *)(param_1 + 0x40),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = 0;
  *(undefined8 **)(lVar2 + lVar5) = local_38;
  local_38 = (undefined8 *)0x0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = local_30;
  local_30 = 0;
  FUN_1449db362();
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f163e FUN_1497f163e body=231 status=ok
// SIG undefined FUN_1497f163e(void)

void FUN_1497f163e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
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
  local_48 = local_38;
  uStack_40 = uStack_30;
  local_58 = local_28;
  uStack_54 = uStack_24;
  uStack_50 = uStack_20;
  uStack_4c = uStack_1c;
  FUN_1497f1726(param_1);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f1726 FUN_1497f1726 body=255 status=ok
// SIG undefined FUN_1497f1726(void)

void FUN_1497f1726(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *param_2;
  uStack_50 = param_2[1];
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,4,0x10);
  puVar3 = local_38;
  local_30 = 4;
  *local_38 = &PTR_LAB_14be869d0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14be86ab0;
  *(undefined4 *)(puVar3 + 3) = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = local_58._4_4_;
  *(undefined4 *)(puVar3 + 4) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar3 + 0x24) = uStack_50._4_4_;
  *(undefined4 *)(puVar3 + 5) = local_48;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = uStack_44;
  *(undefined4 *)(puVar3 + 6) = uStack_40;
  *(undefined4 *)((longlong)puVar3 + 0x34) = uStack_3c;
  iVar1 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
    FUN_149802750((longlong *)(param_1 + 0x40),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = 0;
  *(undefined8 **)(lVar2 + lVar5) = local_38;
  local_38 = (undefined8 *)0x0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = local_30;
  local_30 = 0;
  FUN_1449db362();
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f1826 FUN_1497f1826 body=308 status=ok
// SIG undefined FUN_1497f1826(void)

void FUN_1497f1826(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined4 local_20;
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
  local_20 = 0;
  FUN_144a64e42();
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
  FUN_1497f195c(param_1,local_1c,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f195c FUN_1497f195c body=469 status=ok
// SIG undefined FUN_1497f195c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1497f195c(longlong param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_c8 [40];
  undefined8 *local_a0;
  undefined4 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  fVar6 = logf(param_2);
  fVar6 = fVar6 * _DAT_14cc272c0 + 1.0;
  if (1.0 <= fVar6) {
    fVar6 = 1.0;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  fVar7 = logf(param_3);
  fVar7 = fVar7 * _DAT_14cc272c0 + 1.0;
  if (1.0 <= fVar7) {
    fVar7 = 1.0;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  fVar8 = logf(param_4);
  fVar8 = fVar8 * _DAT_14cc272c0 + 1.0;
  if (1.0 <= fVar8) {
    fVar8 = 1.0;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  local_a0 = (undefined8 *)0x0;
  local_98 = 0;
  FUN_1446efa72(&local_a0,0,3,0x10);
  puVar3 = local_a0;
  local_98 = 3;
  *local_a0 = &PTR_LAB_14be869d0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14be86960;
  puVar3[3] = (ulonglong)(uint)fVar6 | 0x3f80000000000000;
  puVar3[4] = (ulonglong)(uint)fVar7 | 0x3f80000000000000;
  puVar3[5] = (ulonglong)(uint)fVar8 | 0x3f80000000000000;
  iVar1 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
    FUN_149802750((longlong *)(param_1 + 0x40),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = 0;
  *(undefined8 **)(lVar2 + lVar5) = local_a0;
  local_a0 = (undefined8 *)0x0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = local_98;
  local_98 = 0;
  FUN_1449db362();
  if ((local_90 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f1b32 FUN_1497f1b32 body=155 status=ok
// SIG undefined FUN_1497f1b32(void)

void FUN_1497f1b32(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  uStack_34 = uStack_24;
  uStack_30 = uStack_20;
  uStack_2c = uStack_1c;
  FUN_1497f1bce(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f1bce FUN_1497f1bce body=237 status=ok
// SIG undefined FUN_1497f1bce(void)

void FUN_1497f1bce(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar3 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14be869d0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14be86e30;
  *(undefined4 *)(puVar3 + 3) = local_48;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_44;
  *(undefined4 *)(puVar3 + 4) = uStack_40;
  *(undefined4 *)((longlong)puVar3 + 0x24) = uStack_3c;
  iVar1 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
    FUN_149802750((longlong *)(param_1 + 0x40),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = 0;
  *(undefined8 **)(lVar2 + lVar5) = local_38;
  local_38 = (undefined8 *)0x0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = local_30;
  local_30 = 0;
  FUN_1449db362();
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f1cbc FUN_1497f1cbc body=316 status=ok
// SIG undefined FUN_1497f1cbc(void)

void FUN_1497f1cbc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
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
  local_38 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_30;
  uStack_54 = uStack_2c;
  uStack_50 = uStack_28;
  uStack_4c = uStack_24;
  local_48 = local_20;
  FUN_1497f1dfa(param_1,&local_58,local_34,local_38);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f1dfa FUN_1497f1dfa body=291 status=ok
// SIG undefined FUN_1497f1dfa(void)

void FUN_1497f1dfa(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *(undefined8 *)(param_2 + 4);
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,4,0x10);
  puVar3 = local_60;
  local_58 = 4;
  *local_60 = &PTR_LAB_14be869d0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14be86ff0;
  *(undefined4 *)(puVar3 + 3) = local_78;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_74;
  *(undefined4 *)(puVar3 + 4) = uStack_70;
  *(undefined4 *)((longlong)puVar3 + 0x24) = uStack_6c;
  puVar3[5] = local_68;
  *(undefined4 *)(puVar3 + 6) = param_3;
  *(undefined4 *)((longlong)puVar3 + 0x34) = param_4;
  iVar1 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
    FUN_149802750((longlong *)(param_1 + 0x40),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = 0;
  *(undefined8 **)(lVar2 + lVar5) = local_60;
  local_60 = (undefined8 *)0x0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = local_58;
  local_58 = 0;
  FUN_1449db362();
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f1f1e FUN_1497f1f1e body=635 status=ok
// SIG undefined FUN_1497f1f1e(void)

void FUN_1497f1f1e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
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
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_e8 = &local_88;
  local_88 = local_78;
  uStack_80 = uStack_70;
  local_f0 = &local_98;
  local_98 = local_68;
  uStack_90 = uStack_60;
  local_f8 = &local_b8;
  local_b8 = local_58;
  uStack_b0 = uStack_50;
  local_a8 = local_48;
  local_c8 = local_38;
  uStack_c0 = uStack_30;
  local_d8 = local_28;
  uStack_d4 = uStack_24;
  uStack_d0 = uStack_20;
  uStack_cc = uStack_1c;
  FUN_1497f219a(param_1,&local_d8,&local_c8,local_3c);
  if ((local_18 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f219a FUN_1497f219a body=394 status=ok
// SIG undefined FUN_1497f219a(void)

void FUN_1497f219a(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined4 *param_7)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 *local_70;
  undefined4 local_68;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_98 = *param_2;
  uStack_90 = param_2[1];
  local_88 = *param_3;
  uStack_80 = param_3[1];
  local_48 = param_5[2];
  local_58 = (undefined4)*param_5;
  uStack_54 = (undefined4)((ulonglong)*param_5 >> 0x20);
  uStack_50 = (undefined4)param_5[1];
  uStack_4c = (undefined4)((ulonglong)param_5[1] >> 0x20);
  local_a8 = *param_6;
  uStack_a0 = param_6[1];
  local_b8 = *param_7;
  uStack_b4 = param_7[1];
  uStack_b0 = param_7[2];
  uStack_ac = param_7[3];
  local_70 = (undefined8 *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,8,0x10);
  puVar3 = local_70;
  local_68 = 8;
  *local_70 = &PTR_LAB_14be869d0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14be86dc0;
  puVar3[3] = local_98;
  puVar3[4] = uStack_90;
  puVar3[5] = local_88;
  puVar3[6] = uStack_80;
  *(undefined4 *)(puVar3 + 7) = param_4;
  *(undefined4 *)(puVar3 + 9) = uStack_50;
  *(undefined4 *)((longlong)puVar3 + 0x4c) = uStack_4c;
  *(undefined4 *)(puVar3 + 10) = (undefined4)local_48;
  *(undefined4 *)((longlong)puVar3 + 0x54) = local_48._4_4_;
  *(ulonglong *)((longlong)puVar3 + 0x3c) = CONCAT44(local_58,uStack_5c);
  *(ulonglong *)((longlong)puVar3 + 0x44) = CONCAT44(uStack_50,uStack_54);
  puVar3[0xb] = local_a8;
  puVar3[0xc] = uStack_a0;
  *(undefined4 *)(puVar3 + 0xd) = local_b8;
  *(undefined4 *)((longlong)puVar3 + 0x6c) = uStack_b4;
  *(undefined4 *)(puVar3 + 0xe) = uStack_b0;
  *(undefined4 *)((longlong)puVar3 + 0x74) = uStack_ac;
  iVar1 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
    FUN_149802750((longlong *)(param_1 + 0x40),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = 0;
  *(undefined8 **)(lVar2 + lVar5) = local_70;
  local_70 = (undefined8 *)0x0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = local_68;
  local_68 = 0;
  FUN_1449db362();
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f232c FUN_1497f232c body=232 status=ok
// SIG undefined FUN_1497f232c(void)

void FUN_1497f232c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar3 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14be87220;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14be871b0;
  iVar1 = *(int *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x98) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x9c) < iVar1 + 1U) {
    FUN_149802aa2((longlong *)(param_1 + 0x90),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x90);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = 0;
  *(undefined8 **)(lVar2 + lVar5) = local_38;
  local_38 = (undefined8 *)0x0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = local_30;
  local_30 = 0;
  FUN_1449db362();
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f2416 FUN_1497f2416 body=232 status=ok
// SIG undefined FUN_1497f2416(void)

void FUN_1497f2416(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar3 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14be87220;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14be87290;
  iVar1 = *(int *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x98) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x9c) < iVar1 + 1U) {
    FUN_149802aa2((longlong *)(param_1 + 0x90),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x90);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = 0;
  *(undefined8 **)(lVar2 + lVar5) = local_38;
  local_38 = (undefined8 *)0x0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = local_30;
  local_30 = 0;
  FUN_1449db362();
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f2500 FUN_1497f2500 body=323 status=ok
// SIG undefined FUN_1497f2500(void)

void FUN_1497f2500(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
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
  plVar1 = (longlong *)(param_1 + 0x28);
  lVar2 = param_1 + 0x38;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar6 = *(int *)(param_1 + 0x50);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar6) || (uStack_58 != lVar2)) {
    do {
      if (*(longlong *)(*local_88 + 8 + (longlong)iStack_6c * 0x18) != 0) {
        plVar7 = (longlong *)(*local_88 + (longlong)iStack_6c * 0x18 + 8);
        uVar5 = FUN_140e29a3a();
        bVar4 = FUN_144a7ca96(plVar7,uVar5);
        lVar3 = *plVar7;
        if ((lVar3 != 0 & bVar4) == 1) {
          FUN_1497f062a(lVar3,param_2);
        }
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar6));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1497f2644 FUN_1497f2644 body=267 status=ok
// SIG undefined FUN_1497f2644(void)

void FUN_1497f2644(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *(undefined8 *)(param_2 + 4);
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar3 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14be87220;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14be87300;
  *(undefined4 *)(puVar3 + 3) = local_58;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_54;
  *(undefined4 *)(puVar3 + 4) = uStack_50;
  *(undefined4 *)((longlong)puVar3 + 0x24) = uStack_4c;
  puVar3[5] = local_48;
  iVar1 = *(int *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x98) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x9c) < iVar1 + 1U) {
    FUN_149802aa2((longlong *)(param_1 + 0x90),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x90);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = 0;
  *(undefined8 **)(lVar2 + lVar5) = local_38;
  local_38 = (undefined8 *)0x0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = local_30;
  local_30 = 0;
  FUN_1449db362();
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f2750 FUN_1497f2750 body=232 status=ok
// SIG undefined FUN_1497f2750(void)

void FUN_1497f2750(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar3 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_14be87220;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14be87370;
  iVar1 = *(int *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x98) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x9c) < iVar1 + 1U) {
    FUN_149802aa2((longlong *)(param_1 + 0x90),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x90);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = 0;
  *(undefined8 **)(lVar2 + lVar5) = local_38;
  local_38 = (undefined8 *)0x0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = local_30;
  local_30 = 0;
  FUN_1449db362();
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f283a FUN_1497f283a body=244 status=ok
// SIG undefined FUN_1497f283a(void)

void FUN_1497f283a(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,2,0x10);
  puVar3 = local_40;
  local_38 = 2;
  *local_40 = &PTR_LAB_14be869d0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14be873e0;
  *(undefined4 *)(puVar3 + 3) = param_2;
  iVar1 = *(int *)(param_1 + 0xa8);
  *(uint *)(param_1 + 0xa8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xac) < iVar1 + 1U) {
    FUN_149802750((longlong *)(param_1 + 0xa0),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0xa0);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = 0;
  *(undefined8 **)(lVar2 + lVar5) = local_40;
  local_40 = (undefined8 *)0x0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = local_38;
  local_38 = 0;
  FUN_1449db362();
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f2930 FUN_1497f2930 body=244 status=ok
// SIG undefined FUN_1497f2930(void)

void FUN_1497f2930(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,2,0x10);
  puVar3 = local_40;
  local_38 = 2;
  *local_40 = &PTR_LAB_14be869d0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14be87450;
  *(undefined4 *)(puVar3 + 3) = param_2;
  iVar1 = *(int *)(param_1 + 0xa8);
  *(uint *)(param_1 + 0xa8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xac) < iVar1 + 1U) {
    FUN_149802750((longlong *)(param_1 + 0xa0),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0xa0);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = 0;
  *(undefined8 **)(lVar2 + lVar5) = local_40;
  local_40 = (undefined8 *)0x0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = local_38;
  local_38 = 0;
  FUN_1449db362();
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f2a26 FUN_1497f2a26 body=244 status=ok
// SIG undefined FUN_1497f2a26(void)

void FUN_1497f2a26(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,2,0x10);
  puVar3 = local_40;
  local_38 = 2;
  *local_40 = &PTR_LAB_14be869d0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14be874c0;
  *(undefined4 *)(puVar3 + 3) = param_2;
  iVar1 = *(int *)(param_1 + 0xa8);
  *(uint *)(param_1 + 0xa8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xac) < iVar1 + 1U) {
    FUN_149802750((longlong *)(param_1 + 0xa0),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0xa0);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar5) = 0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = 0;
  *(undefined8 **)(lVar2 + lVar5) = local_40;
  local_40 = (undefined8 *)0x0;
  *(undefined4 *)(lVar2 + 8 + lVar5) = local_38;
  local_38 = 0;
  FUN_1449db362();
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f2b20 FUN_1497f2b20 body=327 status=ok
// SIG undefined FUN_1497f2b20(void)

undefined8 * FUN_1497f2b20(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  int local_5c;
  longlong local_58;
  uint local_50;
  longlong *local_48;
  int *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  FUN_140dc35b0(0,&local_58);
  uVar2 = local_50;
  if ((longlong)(int)local_50 != 0) {
    if ((int)local_50 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)local_50);
    }
    FUN_140f2b1f8(param_2,local_50);
    iVar1 = 1;
    if (3 < uVar2) {
      uVar2 = (uVar2 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_2 + 9) == 0) || (*(int *)(param_2 + 9) < iVar1)) {
      *(int *)(param_2 + 9) = iVar1;
      FUN_1409bd292(param_2);
    }
    local_5c = 0;
    if (0 < (int)local_50) {
      do {
        FUN_1400021e4((longlong)local_5c * 8 + local_58,local_70);
        local_48 = local_70;
        local_40 = &local_5c;
        FUN_149802b28(param_2,local_34,&local_48);
        if (local_70[0] != 0) {
          FUN_1400020a8();
        }
        local_5c = local_5c + 1;
      } while (local_5c < (int)local_50);
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f2c6a FUN_1497f2c6a body=107 status=ok
// SIG undefined FUN_1497f2c6a(void)

void FUN_1497f2c6a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x68) == 0) {
    FUN_1497f2cd6(param_1);
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_1429bd144(*(longlong *)(param_1 + 0x70),0);
      *(undefined8 *)(param_1 + 0x338) = 0;
    }
  }
  else {
    FUN_146e22d5c();
    if (*(int *)(param_1 + 0x248) != *(int *)(param_1 + 0x274)) {
      FUN_149802f72(param_1 + 0x240);
      FUN_1498030b6(param_1 + 0x240);
      return;
    }
  }
  return;
}



// FUNCTION 1497f2cd6 FUN_1497f2cd6 body=79 status=ok
// SIG undefined FUN_1497f2cd6(void)

void FUN_1497f2cd6(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_146de91ea();
    FUN_146d84a72(*(undefined8 *)(param_1 + 0x70));
    if (*(int *)(param_1 + 0x248) != *(int *)(param_1 + 0x274)) {
      FUN_149802f72(param_1 + 0x240);
      FUN_1498030b6(param_1 + 0x240);
      return;
    }
  }
  return;
}



// FUNCTION 1497f2d26 FUN_1497f2d26 body=143 status=ok
// SIG undefined FUN_1497f2d26(void)

void FUN_1497f2d26(longlong param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  if (*(longlong *)(param_1 + 0x68) == 0) {
    lVar5 = *(longlong *)(param_1 + 0x70);
    uVar7 = *(uint *)(lVar5 + 0xe8);
    uVar6 = 0;
    if (0 < (int)uVar7) {
      uVar8 = (ulonglong)uVar7;
      do {
        uVar8 = uVar8 >> 1;
        uVar9 = (uint)uVar8 + (int)uVar6;
        if (*(int *)(*(longlong *)(lVar5 + 0xe0) + (ulonglong)uVar9 * 4) == 0) {
          uVar6 = (ulonglong)(uVar9 + (uVar7 & 1));
        }
        bVar2 = 1 < uVar7;
        uVar7 = (uint)uVar8;
      } while (bVar2);
    }
    plVar3 = (longlong *)(lVar5 + 0x68);
    iVar1 = *(int *)(*(longlong *)(lVar5 + 0xe0) + uVar6 * 4);
    iVar4 = -iVar1;
    if (iVar4 < 0) {
      iVar4 = iVar1;
    }
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x1f8);
    plVar3 = (longlong *)(*(longlong *)(lVar5 + 8) + 0x48);
    iVar4 = *(int *)(lVar5 + 0x14);
    lVar5 = (longlong)*(int *)(lVar5 + 0x10);
  }
  *param_2 = lVar5 * 0xc + *plVar3;
  *(int *)(param_2 + 1) = iVar4;
  return;
}



// FUNCTION 1497f2db6 FUN_1497f2db6 body=209 status=ok
// SIG undefined FUN_1497f2db6(void)

void FUN_1497f2db6(longlong param_1,float param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_78 [36];
  int local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < *(int *)(param_1 + 0x14)) {
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x78);
      lVar3 = *(int *)(param_1 + 0x10) + lVar5;
      fVar6 = *(float *)(lVar1 + lVar3 * 4);
      if (fVar6 <= param_2) {
        fVar6 = param_2;
      }
      *(float *)(lVar1 + lVar3 * 4) = fVar6;
      local_54 = (int)lVar5;
      cVar2 = (*(code *)*param_3)(param_3[1],&local_54);
      iVar4 = *(int *)(param_1 + 0x10) + (int)lVar5;
      if (cVar2 == '\0') {
        fVar6 = 1.0 / *(float *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x78) +
                                (longlong)iVar4 * 4);
      }
      else {
        fVar6 = 0.0;
      }
      *(float *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + (longlong)iVar4 * 4) = fVar6;
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < *(int *)(param_1 + 0x14));
  }
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f2ef2 FUN_1497f2ef2 body=38 status=ok
// SIG undefined FUN_1497f2ef2(void)

undefined8 FUN_1497f2ef2(undefined8 param_1,int param_2)

{
  FUN_14062c13a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497f2f90 FUN_1497f2f90 body=59 status=ok
// SIG undefined FUN_1497f2f90(void)

undefined8 FUN_1497f2f90(longlong *param_1)

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



// FUNCTION 1497f3032 FUN_1497f3032 body=124 status=ok
// SIG undefined FUN_1497f3032(void)

ulonglong FUN_1497f3032(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4(&DAT_14c996510,local_28);
  iVar1 = FUN_144a41c6c(param_1,local_28);
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)param_1 >> 8),
                     *(undefined1 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar1)) &
            0xffffffffffffff01;
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f30b0 FUN_1497f30b0 body=124 status=ok
// SIG undefined FUN_1497f30b0(void)

ulonglong FUN_1497f30b0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4(&DAT_14c9964a8,local_28);
  iVar1 = FUN_144a41c6c(param_1,local_28);
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)param_1 >> 8),
                     *(undefined1 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar1)) &
            0xffffffffffffff01;
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f312e FUN_1497f312e body=124 status=ok
// SIG undefined FUN_1497f312e(void)

ulonglong FUN_1497f312e(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4(&DAT_14c996264,local_28);
  iVar1 = FUN_144a41c6c(param_1,local_28);
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)param_1 >> 8),
                     *(undefined1 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar1)) &
            0xffffffffffffff01;
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f31ac FUN_1497f31ac body=127 status=ok
// SIG undefined FUN_1497f31ac(void)

ulonglong FUN_1497f31ac(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4(&DAT_14c994830,local_28);
  iVar1 = FUN_144a41c6c(param_1,local_28);
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)param_1 >> 8),
                     (*(byte *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar1) & 0x12) == 2);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f322c FUN_1497f322c body=124 status=ok
// SIG undefined FUN_1497f322c(void)

ulonglong FUN_1497f322c(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4(&DAT_14c994ad8,local_28);
  iVar1 = FUN_144a41c6c(param_1,local_28);
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)param_1 >> 8),
                     *(undefined1 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar1)) &
            0xffffffffffffff01;
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f32aa FUN_1497f32aa body=143 status=ok
// SIG undefined FUN_1497f32aa(void)

void FUN_1497f32aa(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_1497f333a(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x40 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      puVar2[2] = 0;
      puVar2 = puVar2 + 8;
    }
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1497f33c0(param_1,param_2,iVar1 - param_2);
    FUN_1497f341a(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1497f333a FUN_1497f333a body=132 status=ok
// SIG undefined FUN_1497f333a(void)

void FUN_1497f333a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1497f33c0 FUN_1497f33c0 body=89 status=ok
// SIG undefined FUN_1497f33c0(void)

void FUN_1497f33c0(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x40 + *param_1);
  FUN_146e2ace7(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x40 + (longlong)_Dst),(longlong)iVar2 << 6);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1497f341a FUN_1497f341a body=62 status=ok
// SIG undefined FUN_1497f341a(void)

void FUN_1497f341a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1497f3458(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,0x10);
  }
  return;
}



// FUNCTION 1497f3458 FUN_1497f3458 body=93 status=ok
// SIG undefined FUN_1497f3458(void)

ulonglong FUN_1497f3458(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 6,0x10);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 1497f34b6 FUN_1497f34b6 body=143 status=ok
// SIG undefined FUN_1497f34b6(void)

void FUN_1497f34b6(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_1497f3546(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x40 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      puVar2[2] = 0;
      puVar2 = puVar2 + 8;
    }
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1497f35cc(param_1,param_2,iVar1 - param_2);
    FUN_1497f3626(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1497f3546 FUN_1497f3546 body=132 status=ok
// SIG undefined FUN_1497f3546(void)

void FUN_1497f3546(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1497f35cc FUN_1497f35cc body=89 status=ok
// SIG undefined FUN_1497f35cc(void)

void FUN_1497f35cc(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x40 + *param_1);
  FUN_146e2b0b9(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x40 + (longlong)_Dst),(longlong)iVar2 << 6);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1497f3626 FUN_1497f3626 body=62 status=ok
// SIG undefined FUN_1497f3626(void)

void FUN_1497f3626(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1497f3664(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,0x10);
  }
  return;
}



// FUNCTION 1497f3664 FUN_1497f3664 body=93 status=ok
// SIG undefined FUN_1497f3664(void)

ulonglong FUN_1497f3664(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 6,0x10);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 1497f36c2 FUN_1497f36c2 body=143 status=ok
// SIG undefined FUN_1497f36c2(void)

void FUN_1497f36c2(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_1497f3752(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x40 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      puVar2[2] = 0;
      puVar2 = puVar2 + 8;
    }
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1497f37d8(param_1,param_2,iVar1 - param_2);
    FUN_1497f3832(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1497f3752 FUN_1497f3752 body=132 status=ok
// SIG undefined FUN_1497f3752(void)

void FUN_1497f3752(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1497f37d8 FUN_1497f37d8 body=89 status=ok
// SIG undefined FUN_1497f37d8(void)

void FUN_1497f37d8(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x40 + *param_1);
  FUN_146e2b48b(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x40 + (longlong)_Dst),(longlong)iVar2 << 6);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1497f3832 FUN_1497f3832 body=62 status=ok
// SIG undefined FUN_1497f3832(void)

void FUN_1497f3832(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1497f3870(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,0x10);
  }
  return;
}



// FUNCTION 1497f3870 FUN_1497f3870 body=93 status=ok
// SIG undefined FUN_1497f3870(void)

ulonglong FUN_1497f3870(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 6,0x10);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 1497f38ce FUN_1497f38ce body=143 status=ok
// SIG undefined FUN_1497f38ce(void)

void FUN_1497f38ce(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_1497f395e(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x40 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      puVar2[2] = 0;
      puVar2 = puVar2 + 8;
    }
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1497f39e4(param_1,param_2,iVar1 - param_2);
    FUN_1497f3a3e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1497f395e FUN_1497f395e body=132 status=ok
// SIG undefined FUN_1497f395e(void)

void FUN_1497f395e(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1497f39e4 FUN_1497f39e4 body=89 status=ok
// SIG undefined FUN_1497f39e4(void)

void FUN_1497f39e4(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x40 + *param_1);
  FUN_146e2b85d(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x40 + (longlong)_Dst),(longlong)iVar2 << 6);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1497f3a3e FUN_1497f3a3e body=62 status=ok
// SIG undefined FUN_1497f3a3e(void)

void FUN_1497f3a3e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1497f3a7c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,0x10);
  }
  return;
}



// FUNCTION 1497f3a7c FUN_1497f3a7c body=93 status=ok
// SIG undefined FUN_1497f3a7c(void)

ulonglong FUN_1497f3a7c(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 6,0x10);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 1497f3ada FUN_1497f3ada body=143 status=ok
// SIG undefined FUN_1497f3ada(void)

void FUN_1497f3ada(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_1497f3b6a(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x40 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      puVar2[2] = 0;
      puVar2 = puVar2 + 8;
    }
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1497f3bf0(param_1,param_2,iVar1 - param_2);
    FUN_1497f3c4a(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1497f3b6a FUN_1497f3b6a body=132 status=ok
// SIG undefined FUN_1497f3b6a(void)

void FUN_1497f3b6a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1497f3bf0 FUN_1497f3bf0 body=89 status=ok
// SIG undefined FUN_1497f3bf0(void)

void FUN_1497f3bf0(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x40 + *param_1);
  FUN_146e2bc2f(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x40 + (longlong)_Dst),(longlong)iVar2 << 6);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1497f3c4a FUN_1497f3c4a body=62 status=ok
// SIG undefined FUN_1497f3c4a(void)

void FUN_1497f3c4a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1497f3c88(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,0x10);
  }
  return;
}



// FUNCTION 1497f3c88 FUN_1497f3c88 body=93 status=ok
// SIG undefined FUN_1497f3c88(void)

ulonglong FUN_1497f3c88(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 6,0x10);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 1497f3ce6 FUN_1497f3ce6 body=143 status=ok
// SIG undefined FUN_1497f3ce6(void)

void FUN_1497f3ce6(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_1497f3d76(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x40 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      puVar2[2] = 0;
      puVar2 = puVar2 + 8;
    }
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1497f3dfc(param_1,param_2,iVar1 - param_2);
    FUN_1497f3e56(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1497f3d76 FUN_1497f3d76 body=132 status=ok
// SIG undefined FUN_1497f3d76(void)

void FUN_1497f3d76(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1497f3dfc FUN_1497f3dfc body=89 status=ok
// SIG undefined FUN_1497f3dfc(void)

void FUN_1497f3dfc(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x40 + *param_1);
  FUN_146e2c001(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x40 + (longlong)_Dst),(longlong)iVar2 << 6);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1497f3e56 FUN_1497f3e56 body=62 status=ok
// SIG undefined FUN_1497f3e56(void)

void FUN_1497f3e56(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1497f3e94(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,0x10);
  }
  return;
}



// FUNCTION 1497f3e94 FUN_1497f3e94 body=93 status=ok
// SIG undefined FUN_1497f3e94(void)

ulonglong FUN_1497f3e94(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 6,0x10);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 1497f3ef2 FUN_1497f3ef2 body=127 status=ok
// SIG undefined FUN_1497f3ef2(void)

undefined8 FUN_1497f3ef2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c993590,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f3f72 FUN_1497f3f72 body=127 status=ok
// SIG undefined FUN_1497f3f72(void)

undefined8 FUN_1497f3f72(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c993598,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f3ff2 FUN_1497f3ff2 body=290 status=ok
// SIG undefined FUN_1497f3ff2(void)

longlong * FUN_1497f3ff2(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f4116 FUN_1497f4116 body=290 status=ok
// SIG undefined FUN_1497f4116(void)

longlong * FUN_1497f4116(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f423a FUN_1497f423a body=203 status=ok
// SIG undefined FUN_1497f423a(void)

int FUN_1497f423a(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_1497f4284:
      lVar10 = (longlong)iVar1;
      iVar3 = *(int *)(lVar4 + 8 + lVar10 * 0x28);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10 * 0x28) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_1497f42fa;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1497f42fa;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1497f42eb;
    }
  }
  return -1;
LAB_1497f42fa:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1497f42eb:
  iVar1 = *(int *)(lVar4 + 0x20 + lVar10 * 0x28);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1497f4284;
}



// FUNCTION 1497f4306 FUN_1497f4306 body=1011 status=ok
// SIG undefined FUN_1497f4306(void)

undefined8 *
FUN_1497f4306(undefined8 *param_1,undefined4 param_2,undefined4 param_3,longlong *param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [40];
  undefined1 local_60;
  undefined7 uStack_5f;
  uint local_50;
  undefined4 uStack_4c;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_FUN_149f517d0;
  param_1[1] = param_5;
  FUN_140dc1ca4(param_1 + 2);
  FUN_140dc1ca4(param_1 + 0x2b);
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = param_3;
  uVar3 = 0;
  local_50 = local_50 & 0xffffff00;
  uVar1 = FUN_1497f4722(param_6,&local_50);
  *(undefined1 *)(param_1 + 0x5d) = uVar1;
  local_50 = local_50 & 0xffffff00;
  cVar2 = FUN_1497f4722(param_6,&local_50);
  if (cVar2 != '\0') {
    local_60 = 1;
    uVar3 = FUN_1497f47b0(param_6);
  }
  *(undefined1 *)((longlong)param_1 + 0x2e9) = uVar3;
  local_50 = local_50 & 0xffffff00;
  cVar2 = FUN_1497f4722(param_6);
  uVar8 = 0;
  uVar1 = 0;
  if (cVar2 != '\0') {
    local_60 = 1;
    uVar1 = FUN_1497f483e(param_6);
  }
  *(undefined1 *)((longlong)param_1 + 0x2ea) = uVar1;
  local_60 = 0;
  cVar2 = FUN_1497f4722(param_6);
  if (cVar2 != '\0') {
    local_50 = 0;
    uVar8 = FUN_1497f48cc(param_6);
  }
  *(undefined4 *)((longlong)param_1 + 0x2ec) = uVar8;
  local_50._0_1_ = 1;
  uVar1 = FUN_1497f494e(param_6,&local_50);
  *(undefined1 *)(param_1 + 0x5e) = uVar1;
  uVar9 = 0;
  local_50._0_1_ = 0;
  uVar1 = FUN_1497f49dc(param_6,&local_50);
  *(undefined1 *)((longlong)param_1 + 0x2f1) = uVar1;
  local_50 = (uint)local_50._1_3_ << 8;
  uVar1 = FUN_1497f4a6a(param_6);
  *(undefined1 *)((longlong)param_1 + 0x2f2) = uVar1;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined8 *)((longlong)param_1 + 0x324) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x374) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x37c) = 0;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  *(undefined1 *)(param_1 + 0x73) = 1;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3f4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3fc) = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  param_1[0x8e] = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  *(undefined4 *)(param_1 + 0x89) = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x47c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x484) = 0;
  param_1[0x92] = 0;
  *(undefined4 *)(param_1 + 0x93) = 0;
  memset(param_1 + 0x94,0,0x88);
  FUN_1497f4af8(param_1 + 0xa5,param_6);
  FUN_1497f4b66((longlong)param_1 + 0x52c,param_6);
  FUN_1497f4bd4(param_1 + 0xa6,param_6);
  FUN_1497f4c42((longlong)param_1 + 0x534,param_6);
  FUN_1497f4cb0(param_1 + 0xa7,param_6);
  FUN_1497f4d1e((longlong)param_1 + 0x53c,param_6);
  FUN_1497f4d8c(param_1 + 0xa8,param_6);
  FUN_1497f4dfa((longlong)param_1 + 0x544,param_6);
  FUN_1497f4e68(param_1 + 0xa9,param_6);
  FUN_1400021e4(&DAT_14c993590,&local_60);
  FUN_1497f3ef2(&local_50,param_6,&local_60);
  if (local_48 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)CONCAT44(uStack_4c,local_50);
  }
  uVar6 = (ulonglong)(local_48 - 1);
  if (local_48 == 0) {
    uVar6 = uVar9;
  }
  uVar8 = FUN_144a49b4a(uVar6,puVar7);
  iVar4 = FUN_1408ab52e(param_4,uVar8,&local_50);
  lVar5 = (longlong)iVar4 * 0x20 + *param_4;
  if (lVar5 != 0 && iVar4 != -1) {
    uVar9 = *(ulonglong *)(lVar5 + 0x10);
  }
  if (CONCAT44(uStack_4c,local_50) != 0) {
    FUN_1400020a8();
  }
  if (CONCAT71(uStack_5f,local_60) != 0) {
    FUN_1400020a8();
  }
  if (uVar9 != 0) {
    FUN_145c3f772(param_1 + 0x5f,uVar9);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f46fa FUN_1497f46fa body=9 status=ok
// SIG undefined FUN_1497f46fa(void)

void FUN_1497f46fa(longlong param_1)

{
  FUN_146d8a8d6(param_1 + 0x10);
  return;
}



// FUNCTION 1497f4704 FUN_1497f4704 body=29 status=ok
// SIG undefined FUN_1497f4704(void)

undefined8 FUN_1497f4704(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497f4722 FUN_1497f4722 body=140 status=ok
// SIG undefined FUN_1497f4722(void)

ulonglong FUN_1497f4722(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c993558,local_30);
  uVar2 = CONCAT71((int7)((ulonglong)param_2 >> 8),*param_2);
  iVar1 = FUN_144a41c6c(param_1,local_30);
  if (iVar1 != -1) {
    uVar2 = (ulonglong)
            (-(uint)(*(float *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 0xc) != 0.0) & 1);
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f47b0 FUN_1497f47b0 body=140 status=ok
// SIG undefined FUN_1497f47b0(void)

ulonglong FUN_1497f47b0(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c993560,local_30);
  uVar2 = CONCAT71((int7)((ulonglong)param_2 >> 8),*param_2);
  iVar1 = FUN_144a41c6c(param_1,local_30);
  if (iVar1 != -1) {
    uVar2 = (ulonglong)
            (-(uint)(*(float *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 0xc) != 0.0) & 1);
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f483e FUN_1497f483e body=140 status=ok
// SIG undefined FUN_1497f483e(void)

ulonglong FUN_1497f483e(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c993568,local_30);
  uVar2 = CONCAT71((int7)((ulonglong)param_2 >> 8),*param_2);
  iVar1 = FUN_144a41c6c(param_1,local_30);
  if (iVar1 != -1) {
    uVar2 = (ulonglong)
            (-(uint)(*(float *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 0xc) != 0.0) & 1);
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f48cc FUN_1497f48cc body=128 status=ok
// SIG undefined FUN_1497f48cc(void)

int FUN_1497f48cc(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c993570,local_30);
  iVar2 = *param_2;
  iVar1 = FUN_144a41c6c(param_1,local_30);
  if (iVar1 != -1) {
    iVar2 = (int)*(float *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 0xc);
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f494e FUN_1497f494e body=140 status=ok
// SIG undefined FUN_1497f494e(void)

ulonglong FUN_1497f494e(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c993578,local_30);
  uVar2 = CONCAT71((int7)((ulonglong)param_2 >> 8),*param_2);
  iVar1 = FUN_144a41c6c(param_1,local_30);
  if (iVar1 != -1) {
    uVar2 = (ulonglong)
            (-(uint)(*(float *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 0xc) != 0.0) & 1);
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f49dc FUN_1497f49dc body=140 status=ok
// SIG undefined FUN_1497f49dc(void)

ulonglong FUN_1497f49dc(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c993580,local_30);
  uVar2 = CONCAT71((int7)((ulonglong)param_2 >> 8),*param_2);
  iVar1 = FUN_144a41c6c(param_1,local_30);
  if (iVar1 != -1) {
    uVar2 = (ulonglong)
            (-(uint)(*(float *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 0xc) != 0.0) & 1);
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f4a6a FUN_1497f4a6a body=140 status=ok
// SIG undefined FUN_1497f4a6a(void)

ulonglong FUN_1497f4a6a(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c993588,local_30);
  uVar2 = CONCAT71((int7)((ulonglong)param_2 >> 8),*param_2);
  iVar1 = FUN_144a41c6c(param_1,local_30);
  if (iVar1 != -1) {
    uVar2 = (ulonglong)
            (-(uint)(*(float *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 0xc) != 0.0) & 1);
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f4af8 FUN_1497f4af8 body=109 status=ok
// SIG undefined FUN_1497f4af8(void)

undefined4 * FUN_1497f4af8(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c993558,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f4b66 FUN_1497f4b66 body=109 status=ok
// SIG undefined FUN_1497f4b66(void)

undefined4 * FUN_1497f4b66(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c993560,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f4bd4 FUN_1497f4bd4 body=109 status=ok
// SIG undefined FUN_1497f4bd4(void)

undefined4 * FUN_1497f4bd4(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c993568,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f4c42 FUN_1497f4c42 body=109 status=ok
// SIG undefined FUN_1497f4c42(void)

undefined4 * FUN_1497f4c42(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c993570,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f4cb0 FUN_1497f4cb0 body=109 status=ok
// SIG undefined FUN_1497f4cb0(void)

undefined4 * FUN_1497f4cb0(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c993578,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f4d1e FUN_1497f4d1e body=109 status=ok
// SIG undefined FUN_1497f4d1e(void)

undefined4 * FUN_1497f4d1e(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c993580,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f4d8c FUN_1497f4d8c body=109 status=ok
// SIG undefined FUN_1497f4d8c(void)

undefined4 * FUN_1497f4d8c(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c993588,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f4dfa FUN_1497f4dfa body=109 status=ok
// SIG undefined FUN_1497f4dfa(void)

undefined4 * FUN_1497f4dfa(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c993590,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f4e68 FUN_1497f4e68 body=109 status=ok
// SIG undefined FUN_1497f4e68(void)

undefined4 * FUN_1497f4e68(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c993598,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f4ed6 FUN_1497f4ed6 body=1511 status=ok
// SIG undefined FUN_1497f4ed6(void)

undefined8 *
FUN_1497f4ed6(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,longlong *param_6,longlong *param_7,undefined8 param_8)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  undefined1 *local_260;
  undefined8 *local_258;
  undefined8 *local_250;
  undefined8 *local_248;
  undefined8 local_240;
  float local_238;
  float local_230;
  undefined1 local_228;
  float local_220;
  float local_218;
  undefined8 local_210;
  undefined4 local_208;
  undefined1 local_1f5;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  longlong local_1e8 [2];
  undefined2 *local_1d8;
  int local_1d0;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  longlong local_1b8 [2];
  undefined2 *local_1a8;
  int local_1a0;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong local_188 [2];
  undefined2 *local_178;
  int local_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  float local_154;
  float local_150;
  undefined1 local_149;
  float local_148;
  float local_144;
  undefined1 local_140 [64];
  longlong local_100;
  undefined4 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_1f0 = param_2;
  local_1ec = param_3;
  local_1f4 = FUN_1497f54e6(param_8);
  FUN_1497f5576(&local_148,param_8);
  fVar5 = (float)FUN_1497f5616(param_8);
  fVar6 = (float)FUN_1497f56a6(param_8);
  local_149 = 0;
  local_1f5 = FUN_1497f5730(param_8);
  fVar7 = (float)FUN_1497f57be(param_8);
  fVar8 = (float)FUN_1497f5848(param_8);
  FUN_1497f58d8(&local_154,param_8);
  FUN_1400021e4(&DAT_14c993350,local_188);
  FUN_1497f597e(&local_178,param_8,local_188);
  puVar4 = local_178;
  if (local_170 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_170 + -1;
  if (local_170 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_1497f423a(param_7,uVar1,&local_178);
  lVar3 = (longlong)iVar2 * 0x28 + *param_7;
  if (lVar3 == 0 || iVar2 == -1) {
    local_168 = 0;
    uStack_160 = 0;
  }
  else {
    local_168 = *(undefined8 *)(lVar3 + 0x10);
    uStack_160 = *(undefined4 *)(lVar3 + 0x18);
    uStack_15c = *(undefined4 *)(lVar3 + 0x1c);
  }
  FUN_1400021e4(&DAT_14c993328,local_1b8);
  FUN_1497f59fe(&local_1a8,param_8,local_1b8);
  puVar4 = local_1a8;
  if (local_1a0 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  fVar11 = local_144;
  if (1.0 <= local_144) {
    fVar11 = 1.0;
  }
  fVar12 = local_148;
  if (1.0 <= local_148) {
    fVar12 = 1.0;
  }
  iVar2 = local_1a0 + -1;
  if (local_1a0 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_6,uVar1,&local_1a8);
  lVar3 = (longlong)iVar2 * 0x28 + *param_6;
  if (lVar3 == 0 || iVar2 == -1) {
    local_198 = 0;
    uStack_190 = 0;
  }
  else {
    local_198 = *(undefined8 *)(lVar3 + 0x10);
    uStack_190 = *(undefined4 *)(lVar3 + 0x18);
    uStack_18c = *(undefined4 *)(lVar3 + 0x1c);
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  if (1.0 <= fVar5) {
    fVar5 = 1.0;
  }
  if (1.0 <= fVar7) {
    fVar7 = 1.0;
  }
  if (1.0 <= fVar8) {
    fVar8 = 1.0;
  }
  FUN_1400021e4(&DAT_14c993370,local_1e8);
  FUN_1497f5a7e(&local_1d8,param_8,local_1e8);
  puVar4 = local_1d8;
  if (local_1d0 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  fVar9 = local_150;
  if (local_150 <= 0.0) {
    fVar9 = 0.0;
  }
  fVar10 = local_154;
  if (local_154 <= 0.0) {
    fVar10 = 0.0;
  }
  iVar2 = local_1d0 + -1;
  if (local_1d0 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_6,uVar1,&local_1d8);
  lVar3 = (longlong)iVar2 * 0x28 + *param_6;
  if (lVar3 == 0 || iVar2 == -1) {
    local_1c8 = 0;
    uStack_1c0 = 0;
  }
  else {
    local_1c8 = *(undefined8 *)(lVar3 + 0x10);
    uStack_1c0 = *(undefined4 *)(lVar3 + 0x18);
    uStack_1bc = *(undefined4 *)(lVar3 + 0x1c);
  }
  FUN_14462e79e(local_140,param_4,param_8);
  local_240 = CONCAT44(fVar9,fVar10);
  local_210 = CONCAT44(fVar11,fVar12);
  local_208 = local_1f4;
  local_228 = local_1f5;
  local_248 = &local_168;
  local_250 = &local_198;
  local_258 = &local_1c8;
  local_268 = param_5;
  local_260 = local_140;
  local_238 = fVar8;
  local_230 = fVar7;
  local_220 = fVar6;
  local_218 = fVar5;
  FUN_146de7ed0(param_1,local_1f0,local_1ec,param_4);
  local_f8 = 0;
  if (local_100 != 0) {
    FUN_1400020a8();
  }
  FUN_14026dbfa(local_140);
  if (local_1d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_1e8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_1a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_1b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_178 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_188[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14be85ab8;
  FUN_1497f5afe(param_1 + 0x31,param_8);
  FUN_1497f5b6c((longlong)param_1 + 0x18c,param_8);
  FUN_1497f5bda(param_1 + 0x32,param_8);
  FUN_1497f5c48((longlong)param_1 + 0x194,param_8);
  FUN_1497f5cb6(param_1 + 0x33,param_8);
  FUN_1497f5d24((longlong)param_1 + 0x19c,param_8);
  FUN_1497f5d92(param_1 + 0x34,param_8);
  FUN_1497f5e00((longlong)param_1 + 0x1a4,param_8);
  FUN_1497f5e6e(param_1 + 0x35,param_8);
  if ((local_f0 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1497f54be FUN_1497f54be body=9 status=ok
// SIG undefined FUN_1497f54be(void)

void FUN_1497f54be(longlong param_1)

{
  FUN_146dfb2d2(param_1 + 0x10);
  return;
}



// FUNCTION 1497f54c8 FUN_1497f54c8 body=29 status=ok
// SIG undefined FUN_1497f54c8(void)

undefined8 FUN_1497f54c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497f54e6 FUN_1497f54e6 body=142 status=ok
// SIG undefined FUN_1497f54e6(void)

undefined4 FUN_1497f54e6(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c993340,local_40);
  iVar1 = FUN_144a41c6c(param_1,local_40);
  if (iVar1 == -1) {
    uVar2 = 0x3f800000;
  }
  else {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 0xc);
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f5576 FUN_1497f5576 body=158 status=ok
// SIG undefined FUN_1497f5576(void)

undefined8 * FUN_1497f5576(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c993370,local_30);
  iVar2 = FUN_144a41c6c(param_2,local_30);
  if (iVar2 == -1) {
    *param_1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f5616 FUN_1497f5616 body=142 status=ok
// SIG undefined FUN_1497f5616(void)

undefined4 FUN_1497f5616(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c993368,local_40);
  iVar1 = FUN_144a41c6c(param_1,local_40);
  if (iVar1 == -1) {
    uVar2 = 0x3f800000;
  }
  else {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 0xc);
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f56a6 FUN_1497f56a6 body=137 status=ok
// SIG undefined FUN_1497f56a6(void)

undefined4 FUN_1497f56a6(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c993360,local_40);
  iVar1 = FUN_144a41c6c(param_1,local_40);
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 0xc);
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f5730 FUN_1497f5730 body=140 status=ok
// SIG undefined FUN_1497f5730(void)

ulonglong FUN_1497f5730(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c993358,local_30);
  uVar2 = CONCAT71((int7)((ulonglong)param_2 >> 8),*param_2);
  iVar1 = FUN_144a41c6c(param_1,local_30);
  if (iVar1 != -1) {
    uVar2 = (ulonglong)
            (-(uint)(*(float *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 0xc) != 0.0) & 1);
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f57be FUN_1497f57be body=137 status=ok
// SIG undefined FUN_1497f57be(void)

undefined4 FUN_1497f57be(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c993338,local_40);
  iVar1 = FUN_144a41c6c(param_1,local_40);
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 0xc);
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f5848 FUN_1497f5848 body=142 status=ok
// SIG undefined FUN_1497f5848(void)

undefined4 FUN_1497f5848(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c993330,local_40);
  iVar1 = FUN_144a41c6c(param_1,local_40);
  if (iVar1 == -1) {
    uVar2 = 0x3f000000;
  }
  else {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 0xc);
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f58d8 FUN_1497f58d8 body=164 status=ok
// SIG undefined FUN_1497f58d8(void)

undefined8 * FUN_1497f58d8(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c993328,local_30);
  iVar2 = FUN_144a41c6c(param_2,local_30);
  if (iVar2 == -1) {
    *param_1 = &DAT_3f8000003f800000;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f597e FUN_1497f597e body=127 status=ok
// SIG undefined FUN_1497f597e(void)

undefined8 FUN_1497f597e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c993350,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f59fe FUN_1497f59fe body=127 status=ok
// SIG undefined FUN_1497f59fe(void)

undefined8 FUN_1497f59fe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c993328,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f5a7e FUN_1497f5a7e body=127 status=ok
// SIG undefined FUN_1497f5a7e(void)

undefined8 FUN_1497f5a7e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c993370,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f5afe FUN_1497f5afe body=109 status=ok
// SIG undefined FUN_1497f5afe(void)

undefined4 * FUN_1497f5afe(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c993328,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f5b6c FUN_1497f5b6c body=109 status=ok
// SIG undefined FUN_1497f5b6c(void)

undefined4 * FUN_1497f5b6c(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c993330,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f5bda FUN_1497f5bda body=109 status=ok
// SIG undefined FUN_1497f5bda(void)

undefined4 * FUN_1497f5bda(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c993338,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f5c48 FUN_1497f5c48 body=109 status=ok
// SIG undefined FUN_1497f5c48(void)

undefined4 * FUN_1497f5c48(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c993340,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f5cb6 FUN_1497f5cb6 body=109 status=ok
// SIG undefined FUN_1497f5cb6(void)

undefined4 * FUN_1497f5cb6(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c993350,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f5d24 FUN_1497f5d24 body=109 status=ok
// SIG undefined FUN_1497f5d24(void)

undefined4 * FUN_1497f5d24(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c993358,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f5d92 FUN_1497f5d92 body=109 status=ok
// SIG undefined FUN_1497f5d92(void)

undefined4 * FUN_1497f5d92(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c993360,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f5e00 FUN_1497f5e00 body=109 status=ok
// SIG undefined FUN_1497f5e00(void)

undefined4 * FUN_1497f5e00(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c993368,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f5e6e FUN_1497f5e6e body=109 status=ok
// SIG undefined FUN_1497f5e6e(void)

undefined4 * FUN_1497f5e6e(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c993370,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f5edc FUN_1497f5edc body=38 status=ok
// SIG undefined FUN_1497f5edc(void)

undefined8 FUN_1497f5edc(undefined8 param_1,int param_2)

{
  FUN_146dfb2d2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497f5f02 FUN_1497f5f02 body=128 status=ok
// SIG undefined FUN_1497f5f02(void)

int FUN_1497f5f02(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4(&DAT_14c993348,local_28);
  iVar1 = FUN_144a41c6c(param_1,local_28);
  if (iVar1 == -1) {
    iVar1 = 5;
  }
  else {
    iVar1 = (int)*(float *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 0xc);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f5f84 FUN_1497f5f84 body=1 status=ok
// SIG undefined FUN_1497f5f84(void)

void FUN_1497f5f84(void)

{
  return;
}



// FUNCTION 1497f5f86 FUN_1497f5f86 body=29 status=ok
// SIG undefined FUN_1497f5f86(void)

undefined8 FUN_1497f5f86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497f5fa4 FUN_1497f5fa4 body=421 status=ok
// SIG undefined FUN_1497f5fa4(void)

undefined8 *
FUN_1497f5fa4(undefined8 *param_1,undefined4 param_2,undefined4 param_3,longlong *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  float local_b0;
  float local_a8;
  longlong local_98 [2];
  undefined2 *local_88;
  int local_80;
  undefined4 local_78;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_74 = 0x3f000000;
  fVar7 = (float)FUN_1497f6182(param_5);
  if (1.0 <= fVar7) {
    fVar7 = 1.0;
  }
  local_78 = 0x3f000000;
  fVar8 = (float)FUN_1497f6210(param_5);
  FUN_1400021e4(&DAT_14c993378,local_98);
  FUN_1497f629e(&local_88,param_5,local_98);
  puVar5 = local_88;
  if (local_80 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  uVar6 = 0;
  uVar4 = (ulonglong)(local_80 - 1);
  if (local_80 == 0) {
    uVar4 = uVar6;
  }
  uVar1 = FUN_144a49b4a(uVar4,puVar5);
  iVar2 = FUN_1408ab52e(param_4,uVar1,&local_88);
  lVar3 = (longlong)iVar2 * 0x20 + *param_4;
  if (lVar3 != 0 && iVar2 != -1) {
    uVar6 = *(ulonglong *)(lVar3 + 0x10);
  }
  local_b8 = 0;
  local_b0 = fVar8;
  local_a8 = fVar7;
  FUN_146e13b6c(param_1,param_2,param_3,uVar6);
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14be85af8;
  FUN_1497f631e(param_1 + 7,param_5);
  FUN_1497f638c((longlong)param_1 + 0x3c,param_5);
  if ((local_70 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1497f614a FUN_1497f614a body=25 status=ok
// SIG undefined FUN_1497f614a(void)

void FUN_1497f614a(longlong param_1)

{
  longlong lVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149f5cdc0;
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 1497f6164 FUN_1497f6164 body=29 status=ok
// SIG undefined FUN_1497f6164(void)

undefined8 FUN_1497f6164(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497f6182 FUN_1497f6182 body=141 status=ok
// SIG undefined FUN_1497f6182(void)

undefined4 FUN_1497f6182(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c993388,local_40);
  uVar2 = *param_2;
  iVar1 = FUN_144a41c6c(param_1,local_40);
  if (iVar1 != -1) {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 0xc);
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f6210 FUN_1497f6210 body=141 status=ok
// SIG undefined FUN_1497f6210(void)

undefined4 FUN_1497f6210(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c993380,local_40);
  uVar2 = *param_2;
  iVar1 = FUN_144a41c6c(param_1,local_40);
  if (iVar1 != -1) {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 0xc);
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f629e FUN_1497f629e body=127 status=ok
// SIG undefined FUN_1497f629e(void)

undefined8 FUN_1497f629e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c993378,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f631e FUN_1497f631e body=109 status=ok
// SIG undefined FUN_1497f631e(void)

undefined4 * FUN_1497f631e(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c993380,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f638c FUN_1497f638c body=109 status=ok
// SIG undefined FUN_1497f638c(void)

undefined4 * FUN_1497f638c(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c993388,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f63fa FUN_1497f63fa body=57 status=ok
// SIG undefined FUN_1497f63fa(void)

undefined8 * FUN_1497f63fa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f5cdc0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497f6434 FUN_1497f6434 body=9 status=ok
// SIG undefined FUN_1497f6434(void)

void FUN_1497f6434(longlong param_1)

{
  FUN_146e9023c(param_1 + 0x10);
  return;
}



// FUNCTION 1497f643e FUN_1497f643e body=29 status=ok
// SIG undefined FUN_1497f643e(void)

undefined8 FUN_1497f643e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497f645c FUN_1497f645c body=590 status=ok
// SIG undefined FUN_1497f645c(void)

undefined8 *
FUN_1497f645c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  longlong local_b8 [2];
  undefined2 *local_a8;
  int local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88 [2];
  undefined2 *local_78;
  int local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1497f66d4(local_50,param_5);
  FUN_1497f6774(local_58,param_5);
  FUN_1400021e4(&DAT_14c9964e0,local_88);
  FUN_1497f681a(&local_78,param_5,local_88);
  puVar4 = local_78;
  if (local_70 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_70 + -1;
  if (local_70 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_4,uVar1,&local_78);
  lVar3 = (longlong)iVar2 * 0x28 + *param_4;
  if (lVar3 == 0 || iVar2 == -1) {
    local_68 = 0;
    uStack_60 = 0;
  }
  else {
    local_68 = *(undefined8 *)(lVar3 + 0x10);
    uStack_60 = *(undefined4 *)(lVar3 + 0x18);
    uStack_5c = *(undefined4 *)(lVar3 + 0x1c);
  }
  FUN_1400021e4(&DAT_14c9964d8,local_b8);
  FUN_1497f689a(&local_a8,param_5,local_b8);
  puVar4 = local_a8;
  if (local_a0 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_a0 + -1;
  if (local_a0 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_4,uVar1,&local_a8);
  lVar3 = (longlong)iVar2 * 0x28 + *param_4;
  if (lVar3 == 0 || iVar2 == -1) {
    local_98 = 0;
    uStack_90 = 0;
  }
  else {
    local_98 = *(undefined8 *)(lVar3 + 0x10);
    uStack_90 = *(undefined4 *)(lVar3 + 0x18);
    uStack_8c = *(undefined4 *)(lVar3 + 0x1c);
  }
  local_c8 = local_50;
  local_d8 = &local_68;
  local_d0 = local_58;
  FUN_1497f691a(param_1,param_2,param_3,&local_98);
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14be85b38;
  FUN_1497f6a52(param_1 + 0x1c,param_5);
  FUN_1497f6ac0((longlong)param_1 + 0xe4,param_5);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1497f66ac FUN_1497f66ac body=9 status=ok
// SIG undefined FUN_1497f66ac(void)

void FUN_1497f66ac(longlong param_1)

{
  FUN_1497fc310(param_1 + 0x10);
  return;
}



// FUNCTION 1497f66b6 FUN_1497f66b6 body=29 status=ok
// SIG undefined FUN_1497f66b6(void)

undefined8 FUN_1497f66b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497f66d4 FUN_1497f66d4 body=158 status=ok
// SIG undefined FUN_1497f66d4(void)

undefined8 * FUN_1497f66d4(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9964e0,local_30);
  iVar2 = FUN_144a41c6c(param_2,local_30);
  if (iVar2 == -1) {
    *param_1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f6774 FUN_1497f6774 body=164 status=ok
// SIG undefined FUN_1497f6774(void)

undefined8 * FUN_1497f6774(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9964d8,local_30);
  iVar2 = FUN_144a41c6c(param_2,local_30);
  if (iVar2 == -1) {
    *param_1 = 0x4e6e6b284e6e6b28;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f681a FUN_1497f681a body=127 status=ok
// SIG undefined FUN_1497f681a(void)

undefined8 FUN_1497f681a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c9964e0,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f689a FUN_1497f689a body=127 status=ok
// SIG undefined FUN_1497f689a(void)

undefined8 FUN_1497f689a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c9964d8,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f691a FUN_1497f691a body=311 status=ok
// SIG undefined FUN_1497f691a(void)

undefined8 *
FUN_1497f691a(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,float *param_7)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  float local_48;
  float local_44;
  ulonglong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = param_6;
  local_58 = 0x4e6e6b28;
  local_60 = CONCAT31(local_60._1_3_,1);
  FUN_146e7d262(param_1);
  *param_1 = &PTR_FUN_14be85b40;
  local_60 = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_40 = param_1[1];
  local_38 = *(undefined4 *)(param_1 + 2);
  local_48 = *param_7;
  local_44 = param_7[1];
  if (1000.0 <= local_44) {
    local_44 = 1000.0;
  }
  if (local_44 <= 0.0) {
    local_44 = 0.0;
  }
  if (1000.0 <= local_48) {
    local_48 = 1000.0;
  }
  if (local_48 <= 0.0) {
    local_48 = 0.0;
  }
  local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(param_1 + 5));
  local_50 = 0;
  local_58 = 0x10;
  FUN_140a9b934(param_1 + 0xf,&local_48,param_5,&local_40);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  local_40 = local_40 & 0xffffffff00000000;
  FUN_1448158c6(param_1 + 0x16,&local_40,*(undefined4 *)(param_1 + 2));
  FUN_146e870c4(param_1,param_2);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f6a52 FUN_1497f6a52 body=109 status=ok
// SIG undefined FUN_1497f6a52(void)

undefined4 * FUN_1497f6a52(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9964d8,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f6ac0 FUN_1497f6ac0 body=109 status=ok
// SIG undefined FUN_1497f6ac0(void)

undefined4 * FUN_1497f6ac0(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9964e0,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f6b2e FUN_1497f6b2e body=38 status=ok
// SIG undefined FUN_1497f6b2e(void)

undefined8 FUN_1497f6b2e(undefined8 param_1,int param_2)

{
  FUN_1497fc310();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497f6b54 FUN_1497f6b54 body=38 status=ok
// SIG undefined FUN_1497f6b54(void)

undefined8 FUN_1497f6b54(undefined8 param_1,int param_2)

{
  FUN_1497fc310();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497f6b7a FUN_1497f6b7a body=632 status=ok
// SIG undefined FUN_1497f6b7a(void)

undefined8 *
FUN_1497f6b7a(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,longlong *param_6,undefined8 param_7)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  longlong local_b8 [2];
  undefined2 *local_a8;
  int local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88 [2];
  undefined2 *local_78;
  int local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1497f66d4(local_50,param_7);
  FUN_1497f6774(local_58,param_7);
  FUN_1400021e4(&DAT_14c9964e0,local_88);
  FUN_1497f681a(&local_78,param_7,local_88);
  puVar4 = local_78;
  if (local_70 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_70 + -1;
  if (local_70 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_6,uVar1,&local_78);
  lVar3 = (longlong)iVar2 * 0x28 + *param_6;
  if (lVar3 == 0 || iVar2 == -1) {
    local_68 = 0;
    uStack_60 = 0;
  }
  else {
    local_68 = *(undefined8 *)(lVar3 + 0x10);
    uStack_60 = *(undefined4 *)(lVar3 + 0x18);
    uStack_5c = *(undefined4 *)(lVar3 + 0x1c);
  }
  FUN_1400021e4(&DAT_14c9964d8,local_b8);
  FUN_1497f689a(&local_a8,param_7,local_b8);
  puVar4 = local_a8;
  if (local_a0 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_a0 + -1;
  if (local_a0 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_6,uVar1,&local_a8);
  lVar3 = (longlong)iVar2 * 0x28 + *param_6;
  if (lVar3 == 0 || iVar2 == -1) {
    local_98 = 0;
    uStack_90 = 0;
  }
  else {
    local_98 = *(undefined8 *)(lVar3 + 0x10);
    uStack_90 = *(undefined4 *)(lVar3 + 0x18);
    uStack_8c = *(undefined4 *)(lVar3 + 0x1c);
  }
  local_c8 = local_50;
  local_d0 = local_58;
  local_d8 = &local_68;
  local_e0 = &local_98;
  local_e8 = param_5;
  FUN_1497f6df4(param_1,param_2,param_3,param_4);
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14be85b38;
  FUN_1497f6a52(param_1 + 0x1c,param_7);
  FUN_1497f6ac0((longlong)param_1 + 0xe4,param_7);
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1497f6df4 FUN_1497f6df4 body=362 status=ok
// SIG undefined FUN_1497f6df4(void)

undefined8 *
FUN_1497f6df4(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
             float *param_9)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  float local_50;
  float local_4c;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = param_8;
  local_78 = param_5;
  uStack_70 = param_6;
  local_58 = 0x4e6e6b28;
  local_60 = CONCAT71(local_60._1_7_,1);
  FUN_14026d462(param_1);
  *param_1 = &PTR_FUN_14be85b40;
  local_48 = param_1[1];
  local_40 = *(undefined4 *)(param_1 + 2);
  local_50 = *param_9;
  local_4c = param_9[1];
  if (1000.0 <= local_4c) {
    local_4c = 1000.0;
  }
  if (local_4c <= 0.0) {
    local_4c = 0.0;
  }
  if (1000.0 <= local_50) {
    local_50 = 1000.0;
  }
  if (local_50 <= 0.0) {
    local_50 = 0.0;
  }
  local_60 = 0;
  local_68 = CONCAT44(local_68._4_4_,0x10);
  local_78 = param_3;
  uStack_70 = param_4;
  FUN_140a9b934(param_1 + 0xf,&local_50,param_7);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_144aa29e6(param_1 + 0x16,*(undefined4 *)(param_1 + 2),1);
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (*(int *)((longlong)param_1 + 0xcc) < 0) {
    FUN_14482f6fa(param_1 + 0x18,0);
  }
  FUN_144aa29e6(param_1 + 0x18,*(undefined4 *)(param_1 + 2),1);
  FUN_146e86e34(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f6f60 FUN_1497f6f60 body=395 status=ok
// SIG undefined FUN_1497f6f60(void)

undefined8 *
FUN_1497f6f60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined1 local_a0;
  undefined4 local_98;
  longlong local_88 [2];
  undefined2 *local_78;
  int local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_54;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_54 = 0x3f800000;
  FUN_14190b59e(local_50,param_5);
  FUN_1400021e4(&DAT_14c9933c0,local_88);
  FUN_14190b64c(&local_78,param_5,local_88);
  puVar4 = local_78;
  if (local_70 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_70 + -1;
  if (local_70 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_4,uVar1,&local_78);
  lVar3 = (longlong)iVar2 * 0x28 + *param_4;
  if (lVar3 == 0 || iVar2 == -1) {
    local_68 = 0;
    uStack_60 = 0;
  }
  else {
    local_68 = *(undefined8 *)(lVar3 + 0x10);
    uStack_60 = *(undefined4 *)(lVar3 + 0x18);
    uStack_5c = *(undefined4 *)(lVar3 + 0x1c);
  }
  local_98 = 0x3f800000;
  local_a0 = 1;
  local_a8 = local_50;
  FUN_146e7d262(param_1,param_2,param_3,&local_68);
  *param_1 = &PTR_FUN_14be85b70;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_146e145ba(param_1,param_2);
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14be85b68;
  FUN_14190b6cc(param_1 + 0x11,param_5);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1497f70ec FUN_1497f70ec body=65 status=ok
// SIG undefined FUN_1497f70ec(void)

undefined8 * FUN_1497f70ec(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be85b70;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_14062ce9a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497f712e FUN_1497f712e body=65 status=ok
// SIG undefined FUN_1497f712e(void)

undefined8 * FUN_1497f712e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be85b70;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_14062ce9a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497f7170 FUN_1497f7170 body=3148 status=ok
// SIG undefined FUN_1497f7170(void)

longlong FUN_1497f7170(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      longlong *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_238 [32];
  undefined1 local_218;
  undefined8 *local_210;
  undefined8 *local_208;
  undefined8 *local_200;
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  longlong local_198 [2];
  undefined2 *local_188;
  int local_180;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong local_168 [2];
  undefined2 *local_158;
  int local_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138 [2];
  undefined2 *local_128;
  int local_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108 [2];
  undefined2 *local_f8;
  int local_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8 [2];
  undefined2 *local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8 [2];
  undefined2 *local_98;
  int local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1b0 = param_3;
  local_1a8 = param_4;
  local_1a0 = param_2;
  FUN_1497f7dfe(local_50,param_6);
  FUN_1497f7ea4(local_58,param_6);
  FUN_1497f7f4a(local_60,param_6);
  FUN_1497f7ff0(local_68,param_6);
  FUN_1497f8096(local_70,param_6);
  FUN_1497f813c(local_78,param_6);
  FUN_1400021e4(&DAT_14c9964d0,local_a8);
  FUN_1497f81e2(&local_98,param_6,local_a8);
  puVar4 = local_98;
  if (local_90 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_90 + -1;
  if (local_90 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_5,uVar1,&local_98);
  lVar3 = (longlong)iVar2 * 0x28 + *param_5;
  if (lVar3 == 0 || iVar2 == -1) {
    local_88 = 0;
    uStack_80 = 0;
  }
  else {
    local_88 = *(undefined8 *)(lVar3 + 0x10);
    uStack_80 = *(undefined4 *)(lVar3 + 0x18);
    uStack_7c = *(undefined4 *)(lVar3 + 0x1c);
  }
  FUN_1400021e4(&DAT_14c9964c8,local_d8);
  FUN_1497f8262(&local_c8,param_6,local_d8);
  puVar4 = local_c8;
  if (local_c0 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_c0 + -1;
  if (local_c0 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_5,uVar1,&local_c8);
  lVar3 = (longlong)iVar2 * 0x28 + *param_5;
  if (lVar3 == 0 || iVar2 == -1) {
    local_b8 = 0;
    uStack_b0 = 0;
  }
  else {
    local_b8 = *(undefined8 *)(lVar3 + 0x10);
    uStack_b0 = *(undefined4 *)(lVar3 + 0x18);
    uStack_ac = *(undefined4 *)(lVar3 + 0x1c);
  }
  FUN_1400021e4(&DAT_14c9964c0,local_108);
  FUN_1497f82e2(&local_f8,param_6,local_108);
  puVar4 = local_f8;
  if (local_f0 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_f0 + -1;
  if (local_f0 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_5,uVar1,&local_f8);
  lVar3 = (longlong)iVar2 * 0x28 + *param_5;
  if (lVar3 == 0 || iVar2 == -1) {
    local_e8 = 0;
    uStack_e0 = 0;
  }
  else {
    local_e8 = *(undefined8 *)(lVar3 + 0x10);
    uStack_e0 = *(undefined4 *)(lVar3 + 0x18);
    uStack_dc = *(undefined4 *)(lVar3 + 0x1c);
  }
  FUN_1400021e4(&DAT_14c9964b8,local_138);
  FUN_1497f8362(&local_128,param_6,local_138);
  puVar4 = local_128;
  if (local_120 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_120 + -1;
  if (local_120 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_5,uVar1,&local_128);
  lVar3 = (longlong)iVar2 * 0x28 + *param_5;
  if (lVar3 == 0 || iVar2 == -1) {
    local_118 = 0;
    uStack_110 = 0;
  }
  else {
    local_118 = *(undefined8 *)(lVar3 + 0x10);
    uStack_110 = *(undefined4 *)(lVar3 + 0x18);
    uStack_10c = *(undefined4 *)(lVar3 + 0x1c);
  }
  FUN_1400021e4(&DAT_14c9964b0,local_168);
  FUN_1497f83e2(&local_158,param_6,local_168);
  puVar4 = local_158;
  if (local_150 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_150 + -1;
  if (local_150 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_5,uVar1,&local_158);
  lVar3 = (longlong)iVar2 * 0x28 + *param_5;
  if (lVar3 == 0 || iVar2 == -1) {
    local_148 = 0;
    uStack_140 = 0;
  }
  else {
    local_148 = *(undefined8 *)(lVar3 + 0x10);
    uStack_140 = *(undefined4 *)(lVar3 + 0x18);
    uStack_13c = *(undefined4 *)(lVar3 + 0x1c);
  }
  FUN_1400021e4(&DAT_14c9964a8,local_198);
  FUN_1497f8462(&local_188,param_6,local_198);
  puVar4 = local_188;
  if (local_180 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_180 + -1;
  if (local_180 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_5,uVar1,&local_188);
  lVar3 = (longlong)iVar2 * 0x28 + *param_5;
  if (lVar3 == 0 || iVar2 == -1) {
    local_178 = 0;
    uStack_170 = 0;
  }
  else {
    local_178 = *(undefined8 *)(lVar3 + 0x10);
    uStack_170 = *(undefined4 *)(lVar3 + 0x18);
    uStack_16c = *(undefined4 *)(lVar3 + 0x1c);
  }
  local_218 = FUN_1497f84e2(param_6);
  local_1b8 = local_50;
  local_1c0 = local_58;
  local_1c8 = local_60;
  local_1e8 = &local_88;
  local_1f0 = &local_b8;
  local_1f8 = &local_e8;
  local_200 = &local_118;
  local_208 = &local_148;
  local_210 = &local_178;
  local_1e0 = local_78;
  local_1d8 = local_70;
  local_1d0 = local_68;
  FUN_146e7cd7e(param_1,local_1a0,local_1b0,local_1a8);
  if (local_188 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_198[0] != 0) {
    FUN_1400020a8();
  }
  if (local_158 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_168[0] != 0) {
    FUN_1400020a8();
  }
  if (local_128 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_138[0] != 0) {
    FUN_1400020a8();
  }
  if (local_f8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_108[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1497f7dfe(local_50,param_6);
  FUN_1497f7ea4(local_58,param_6);
  FUN_1497f7f4a(local_60,param_6);
  FUN_1497f7ff0(local_68,param_6);
  FUN_1497f8096(local_70,param_6);
  FUN_1497f813c(local_78,param_6);
  FUN_1400021e4(&DAT_14c9964d0,local_a8);
  FUN_1497f81e2(&local_98,param_6,local_a8);
  puVar4 = local_98;
  if (local_90 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_90 + -1;
  if (local_90 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_5,uVar1,&local_98);
  lVar3 = (longlong)iVar2 * 0x28 + *param_5;
  if (lVar3 == 0 || iVar2 == -1) {
    local_88 = 0;
    uStack_80 = 0;
  }
  else {
    local_88 = *(undefined8 *)(lVar3 + 0x10);
    uStack_80 = *(undefined4 *)(lVar3 + 0x18);
    uStack_7c = *(undefined4 *)(lVar3 + 0x1c);
  }
  FUN_1400021e4(&DAT_14c9964c8,local_d8);
  FUN_1497f8262(&local_c8,param_6,local_d8);
  puVar4 = local_c8;
  if (local_c0 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_c0 + -1;
  if (local_c0 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_5,uVar1,&local_c8);
  lVar3 = (longlong)iVar2 * 0x28 + *param_5;
  if (lVar3 == 0 || iVar2 == -1) {
    local_b8 = 0;
    uStack_b0 = 0;
  }
  else {
    local_b8 = *(undefined8 *)(lVar3 + 0x10);
    uStack_b0 = *(undefined4 *)(lVar3 + 0x18);
    uStack_ac = *(undefined4 *)(lVar3 + 0x1c);
  }
  FUN_1400021e4(&DAT_14c9964c0,local_108);
  FUN_1497f82e2(&local_f8,param_6,local_108);
  puVar4 = local_f8;
  if (local_f0 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_f0 + -1;
  if (local_f0 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_5,uVar1,&local_f8);
  lVar3 = (longlong)iVar2 * 0x28 + *param_5;
  if (lVar3 == 0 || iVar2 == -1) {
    local_e8 = 0;
    uStack_e0 = 0;
  }
  else {
    local_e8 = *(undefined8 *)(lVar3 + 0x10);
    uStack_e0 = *(undefined4 *)(lVar3 + 0x18);
    uStack_dc = *(undefined4 *)(lVar3 + 0x1c);
  }
  FUN_1400021e4(&DAT_14c9964b8,local_138);
  FUN_1497f8362(&local_128,param_6,local_138);
  puVar4 = local_128;
  if (local_120 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_120 + -1;
  if (local_120 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_5,uVar1,&local_128);
  lVar3 = (longlong)iVar2 * 0x28 + *param_5;
  if (lVar3 == 0 || iVar2 == -1) {
    local_118 = 0;
    uStack_110 = 0;
  }
  else {
    local_118 = *(undefined8 *)(lVar3 + 0x10);
    uStack_110 = *(undefined4 *)(lVar3 + 0x18);
    uStack_10c = *(undefined4 *)(lVar3 + 0x1c);
  }
  FUN_1400021e4(&DAT_14c9964b0,local_168);
  FUN_1497f83e2(&local_158,param_6,local_168);
  puVar4 = local_158;
  if (local_150 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_150 + -1;
  if (local_150 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_5,uVar1,&local_158);
  lVar3 = (longlong)iVar2 * 0x28 + *param_5;
  if (lVar3 == 0 || iVar2 == -1) {
    local_148 = 0;
    uStack_140 = 0;
  }
  else {
    local_148 = *(undefined8 *)(lVar3 + 0x10);
    uStack_140 = *(undefined4 *)(lVar3 + 0x18);
    uStack_13c = *(undefined4 *)(lVar3 + 0x1c);
  }
  FUN_1400021e4(&DAT_14c9964a8,local_198);
  FUN_1497f8462(&local_188,param_6,local_198);
  puVar4 = local_188;
  if (local_180 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_180 + -1;
  if (local_180 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_5,uVar1,&local_188);
  lVar3 = (longlong)iVar2 * 0x28 + *param_5;
  if (lVar3 == 0 || iVar2 == -1) {
    local_178 = 0;
    uStack_170 = 0;
  }
  else {
    local_178 = *(undefined8 *)(lVar3 + 0x10);
    uStack_170 = *(undefined4 *)(lVar3 + 0x18);
    uStack_16c = *(undefined4 *)(lVar3 + 0x1c);
  }
  local_218 = FUN_1497f84e2(param_6);
  local_1b8 = local_50;
  local_1c0 = local_58;
  local_1c8 = local_60;
  local_1e8 = &local_88;
  local_1f0 = &local_b8;
  local_1f8 = &local_e8;
  local_200 = &local_118;
  local_208 = &local_148;
  local_210 = &local_178;
  local_1e0 = local_78;
  local_1d8 = local_70;
  local_1d0 = local_68;
  FUN_146e80724(param_1 + 0x208,local_1a0,local_1b0,local_1a8);
  if (local_188 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_198[0] != 0) {
    FUN_1400020a8();
  }
  if (local_158 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_168[0] != 0) {
    FUN_1400020a8();
  }
  if (local_128 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_138[0] != 0) {
    FUN_1400020a8();
  }
  if (local_f8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_108[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1497f856c(param_1 + 0x420,param_6);
  FUN_1497f85da(param_1 + 0x424,param_6);
  FUN_1497f8648(param_1 + 0x428,param_6);
  FUN_1497f86b6(param_1 + 0x42c,param_6);
  FUN_1497f8724(param_1 + 0x430,param_6);
  FUN_1497f8792(param_1 + 0x434,param_6);
  FUN_1497f8800(param_1 + 0x438,param_6);
  if ((local_48 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1497f7dbe FUN_1497f7dbe body=34 status=ok
// SIG undefined FUN_1497f7dbe(void)

void FUN_1497f7dbe(longlong param_1)

{
  FUN_146e90118(param_1 + 0x218);
  FUN_146e8fff6(param_1 + 0x10);
  return;
}



// FUNCTION 1497f7de0 FUN_1497f7de0 body=29 status=ok
// SIG undefined FUN_1497f7de0(void)

undefined8 FUN_1497f7de0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497f7dfe FUN_1497f7dfe body=164 status=ok
// SIG undefined FUN_1497f7dfe(void)

undefined8 * FUN_1497f7dfe(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9964d0,local_30);
  iVar2 = FUN_144a41c6c(param_2,local_30);
  if (iVar2 == -1) {
    *param_1 = &DAT_3f8000003f800000;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f7ea4 FUN_1497f7ea4 body=164 status=ok
// SIG undefined FUN_1497f7ea4(void)

undefined8 * FUN_1497f7ea4(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9964c8,local_30);
  iVar2 = FUN_144a41c6c(param_2,local_30);
  if (iVar2 == -1) {
    *param_1 = &DAT_3f8000003f800000;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f7f4a FUN_1497f7f4a body=164 status=ok
// SIG undefined FUN_1497f7f4a(void)

undefined8 * FUN_1497f7f4a(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9964c0,local_30);
  iVar2 = FUN_144a41c6c(param_2,local_30);
  if (iVar2 == -1) {
    *param_1 = &DAT_3f8000003f800000;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f7ff0 FUN_1497f7ff0 body=164 status=ok
// SIG undefined FUN_1497f7ff0(void)

undefined8 * FUN_1497f7ff0(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9964b8,local_30);
  iVar2 = FUN_144a41c6c(param_2,local_30);
  if (iVar2 == -1) {
    *param_1 = 0x42c8000042c80000;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f8096 FUN_1497f8096 body=164 status=ok
// SIG undefined FUN_1497f8096(void)

undefined8 * FUN_1497f8096(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9964b0,local_30);
  iVar2 = FUN_144a41c6c(param_2,local_30);
  if (iVar2 == -1) {
    *param_1 = 0x42c8000042c80000;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f813c FUN_1497f813c body=164 status=ok
// SIG undefined FUN_1497f813c(void)

undefined8 * FUN_1497f813c(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9964a8,local_30);
  iVar2 = FUN_144a41c6c(param_2,local_30);
  if (iVar2 == -1) {
    *param_1 = 0x42c8000042c80000;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f81e2 FUN_1497f81e2 body=127 status=ok
// SIG undefined FUN_1497f81e2(void)

undefined8 FUN_1497f81e2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c9964d0,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f8262 FUN_1497f8262 body=127 status=ok
// SIG undefined FUN_1497f8262(void)

undefined8 FUN_1497f8262(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c9964c8,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f82e2 FUN_1497f82e2 body=127 status=ok
// SIG undefined FUN_1497f82e2(void)

undefined8 FUN_1497f82e2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c9964c0,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f8362 FUN_1497f8362 body=127 status=ok
// SIG undefined FUN_1497f8362(void)

undefined8 FUN_1497f8362(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c9964b8,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f83e2 FUN_1497f83e2 body=127 status=ok
// SIG undefined FUN_1497f83e2(void)

undefined8 FUN_1497f83e2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c9964b0,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f8462 FUN_1497f8462 body=127 status=ok
// SIG undefined FUN_1497f8462(void)

undefined8 FUN_1497f8462(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c9964a8,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f84e2 FUN_1497f84e2 body=137 status=ok
// SIG undefined FUN_1497f84e2(void)

ulonglong FUN_1497f84e2(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4(&DAT_14c9964a0,local_28);
  iVar1 = FUN_144a41c6c(param_1,local_28);
  if (iVar1 == -1) {
    uVar2 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  else {
    uVar2 = (ulonglong)
            (-(uint)(*(float *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 0xc) != 0.0) & 1);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f856c FUN_1497f856c body=109 status=ok
// SIG undefined FUN_1497f856c(void)

undefined4 * FUN_1497f856c(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9964a0,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f85da FUN_1497f85da body=109 status=ok
// SIG undefined FUN_1497f85da(void)

undefined4 * FUN_1497f85da(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9964a8,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f8648 FUN_1497f8648 body=109 status=ok
// SIG undefined FUN_1497f8648(void)

undefined4 * FUN_1497f8648(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9964b0,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f86b6 FUN_1497f86b6 body=109 status=ok
// SIG undefined FUN_1497f86b6(void)

undefined4 * FUN_1497f86b6(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9964b8,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f8724 FUN_1497f8724 body=109 status=ok
// SIG undefined FUN_1497f8724(void)

undefined4 * FUN_1497f8724(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9964c0,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f8792 FUN_1497f8792 body=109 status=ok
// SIG undefined FUN_1497f8792(void)

undefined4 * FUN_1497f8792(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9964c8,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f8800 FUN_1497f8800 body=109 status=ok
// SIG undefined FUN_1497f8800(void)

undefined4 * FUN_1497f8800(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9964d0,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f886e FUN_1497f886e body=3206 status=ok
// SIG undefined FUN_1497f886e(void)

longlong FUN_1497f886e(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                      undefined8 param_5,undefined8 param_6,longlong *param_7,undefined8 param_8)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_248 [32];
  undefined8 local_228;
  undefined8 local_220;
  undefined1 local_218;
  undefined8 *local_210;
  undefined8 *local_208;
  undefined8 *local_200;
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  longlong local_198 [2];
  undefined2 *local_188;
  int local_180;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong local_168 [2];
  undefined2 *local_158;
  int local_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138 [2];
  undefined2 *local_128;
  int local_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108 [2];
  undefined2 *local_f8;
  int local_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8 [2];
  undefined2 *local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8 [2];
  undefined2 *local_98;
  int local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_1a8 = param_3;
  local_1a4 = param_4;
  local_1a0 = param_2;
  FUN_1497f7dfe(local_50,param_8);
  FUN_1497f7ea4(local_58,param_8);
  FUN_1497f7f4a(local_60,param_8);
  FUN_1497f7ff0(local_68,param_8);
  FUN_1497f8096(local_70,param_8);
  FUN_1497f813c(local_78,param_8);
  FUN_1400021e4(&DAT_14c9964d0,local_a8);
  FUN_1497f81e2(&local_98,param_8,local_a8);
  puVar4 = local_98;
  if (local_90 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_90 + -1;
  if (local_90 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_7,uVar1,&local_98);
  lVar3 = (longlong)iVar2 * 0x28 + *param_7;
  if (lVar3 == 0 || iVar2 == -1) {
    local_88 = 0;
    uStack_80 = 0;
  }
  else {
    local_88 = *(undefined8 *)(lVar3 + 0x10);
    uStack_80 = *(undefined4 *)(lVar3 + 0x18);
    uStack_7c = *(undefined4 *)(lVar3 + 0x1c);
  }
  FUN_1400021e4(&DAT_14c9964c8,local_d8);
  FUN_1497f8262(&local_c8,param_8,local_d8);
  puVar4 = local_c8;
  if (local_c0 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_c0 + -1;
  if (local_c0 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_7,uVar1,&local_c8);
  lVar3 = (longlong)iVar2 * 0x28 + *param_7;
  if (lVar3 == 0 || iVar2 == -1) {
    local_b8 = 0;
    uStack_b0 = 0;
  }
  else {
    local_b8 = *(undefined8 *)(lVar3 + 0x10);
    uStack_b0 = *(undefined4 *)(lVar3 + 0x18);
    uStack_ac = *(undefined4 *)(lVar3 + 0x1c);
  }
  FUN_1400021e4(&DAT_14c9964c0,local_108);
  FUN_1497f82e2(&local_f8,param_8,local_108);
  puVar4 = local_f8;
  if (local_f0 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_f0 + -1;
  if (local_f0 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_7,uVar1,&local_f8);
  lVar3 = (longlong)iVar2 * 0x28 + *param_7;
  if (lVar3 == 0 || iVar2 == -1) {
    local_e8 = 0;
    uStack_e0 = 0;
  }
  else {
    local_e8 = *(undefined8 *)(lVar3 + 0x10);
    uStack_e0 = *(undefined4 *)(lVar3 + 0x18);
    uStack_dc = *(undefined4 *)(lVar3 + 0x1c);
  }
  FUN_1400021e4(&DAT_14c9964b8,local_138);
  FUN_1497f8362(&local_128,param_8,local_138);
  puVar4 = local_128;
  if (local_120 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_120 + -1;
  if (local_120 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_7,uVar1,&local_128);
  lVar3 = (longlong)iVar2 * 0x28 + *param_7;
  if (lVar3 == 0 || iVar2 == -1) {
    local_118 = 0;
    uStack_110 = 0;
  }
  else {
    local_118 = *(undefined8 *)(lVar3 + 0x10);
    uStack_110 = *(undefined4 *)(lVar3 + 0x18);
    uStack_10c = *(undefined4 *)(lVar3 + 0x1c);
  }
  FUN_1400021e4(&DAT_14c9964b0,local_168);
  FUN_1497f83e2(&local_158,param_8,local_168);
  puVar4 = local_158;
  if (local_150 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_150 + -1;
  if (local_150 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_7,uVar1,&local_158);
  lVar3 = (longlong)iVar2 * 0x28 + *param_7;
  if (lVar3 == 0 || iVar2 == -1) {
    local_148 = 0;
    uStack_140 = 0;
  }
  else {
    local_148 = *(undefined8 *)(lVar3 + 0x10);
    uStack_140 = *(undefined4 *)(lVar3 + 0x18);
    uStack_13c = *(undefined4 *)(lVar3 + 0x1c);
  }
  FUN_1400021e4(&DAT_14c9964a8,local_198);
  FUN_1497f8462(&local_188,param_8,local_198);
  puVar4 = local_188;
  if (local_180 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_180 + -1;
  if (local_180 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_7,uVar1,&local_188);
  lVar3 = (longlong)iVar2 * 0x28 + *param_7;
  if (lVar3 == 0 || iVar2 == -1) {
    local_178 = 0;
    uStack_170 = 0;
  }
  else {
    local_178 = *(undefined8 *)(lVar3 + 0x10);
    uStack_170 = *(undefined4 *)(lVar3 + 0x18);
    uStack_16c = *(undefined4 *)(lVar3 + 0x1c);
  }
  local_218 = FUN_1497f84e2(param_8);
  local_1b8 = local_50;
  local_1c0 = local_58;
  local_1c8 = local_60;
  local_1e8 = &local_88;
  local_1f0 = &local_b8;
  local_1f8 = &local_e8;
  local_200 = &local_118;
  local_208 = &local_148;
  local_210 = &local_178;
  local_220 = param_6;
  local_228 = param_5;
  local_1e0 = local_78;
  local_1d8 = local_70;
  local_1d0 = local_68;
  FUN_146e7f3b4(param_1,local_1a0,local_1a8,local_1a4);
  if (local_188 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_198[0] != 0) {
    FUN_1400020a8();
  }
  if (local_158 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_168[0] != 0) {
    FUN_1400020a8();
  }
  if (local_128 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_138[0] != 0) {
    FUN_1400020a8();
  }
  if (local_f8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_108[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1497f7dfe(local_50,param_8);
  FUN_1497f7ea4(local_58,param_8);
  FUN_1497f7f4a(local_60,param_8);
  FUN_1497f7ff0(local_68,param_8);
  FUN_1497f8096(local_70,param_8);
  FUN_1497f813c(local_78,param_8);
  FUN_1400021e4(&DAT_14c9964d0,local_a8);
  FUN_1497f81e2(&local_98,param_8,local_a8);
  puVar4 = local_98;
  if (local_90 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_90 + -1;
  if (local_90 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_7,uVar1,&local_98);
  lVar3 = (longlong)iVar2 * 0x28 + *param_7;
  if (lVar3 == 0 || iVar2 == -1) {
    local_88 = 0;
    uStack_80 = 0;
  }
  else {
    local_88 = *(undefined8 *)(lVar3 + 0x10);
    uStack_80 = *(undefined4 *)(lVar3 + 0x18);
    uStack_7c = *(undefined4 *)(lVar3 + 0x1c);
  }
  FUN_1400021e4(&DAT_14c9964c8,local_d8);
  FUN_1497f8262(&local_c8,param_8,local_d8);
  puVar4 = local_c8;
  if (local_c0 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_c0 + -1;
  if (local_c0 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_7,uVar1,&local_c8);
  lVar3 = (longlong)iVar2 * 0x28 + *param_7;
  if (lVar3 == 0 || iVar2 == -1) {
    local_b8 = 0;
    uStack_b0 = 0;
  }
  else {
    local_b8 = *(undefined8 *)(lVar3 + 0x10);
    uStack_b0 = *(undefined4 *)(lVar3 + 0x18);
    uStack_ac = *(undefined4 *)(lVar3 + 0x1c);
  }
  FUN_1400021e4(&DAT_14c9964c0,local_108);
  FUN_1497f82e2(&local_f8,param_8,local_108);
  puVar4 = local_f8;
  if (local_f0 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_f0 + -1;
  if (local_f0 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_7,uVar1,&local_f8);
  lVar3 = (longlong)iVar2 * 0x28 + *param_7;
  if (lVar3 == 0 || iVar2 == -1) {
    local_e8 = 0;
    uStack_e0 = 0;
  }
  else {
    local_e8 = *(undefined8 *)(lVar3 + 0x10);
    uStack_e0 = *(undefined4 *)(lVar3 + 0x18);
    uStack_dc = *(undefined4 *)(lVar3 + 0x1c);
  }
  FUN_1400021e4(&DAT_14c9964b8,local_138);
  FUN_1497f8362(&local_128,param_8,local_138);
  puVar4 = local_128;
  if (local_120 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_120 + -1;
  if (local_120 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_7,uVar1,&local_128);
  lVar3 = (longlong)iVar2 * 0x28 + *param_7;
  if (lVar3 == 0 || iVar2 == -1) {
    local_118 = 0;
    uStack_110 = 0;
  }
  else {
    local_118 = *(undefined8 *)(lVar3 + 0x10);
    uStack_110 = *(undefined4 *)(lVar3 + 0x18);
    uStack_10c = *(undefined4 *)(lVar3 + 0x1c);
  }
  FUN_1400021e4(&DAT_14c9964b0,local_168);
  FUN_1497f83e2(&local_158,param_8,local_168);
  puVar4 = local_158;
  if (local_150 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_150 + -1;
  if (local_150 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_7,uVar1,&local_158);
  lVar3 = (longlong)iVar2 * 0x28 + *param_7;
  if (lVar3 == 0 || iVar2 == -1) {
    local_148 = 0;
    uStack_140 = 0;
  }
  else {
    local_148 = *(undefined8 *)(lVar3 + 0x10);
    uStack_140 = *(undefined4 *)(lVar3 + 0x18);
    uStack_13c = *(undefined4 *)(lVar3 + 0x1c);
  }
  FUN_1400021e4(&DAT_14c9964a8,local_198);
  FUN_1497f8462(&local_188,param_8,local_198);
  puVar4 = local_188;
  if (local_180 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_180 + -1;
  if (local_180 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_7,uVar1,&local_188);
  lVar3 = (longlong)iVar2 * 0x28 + *param_7;
  if (lVar3 == 0 || iVar2 == -1) {
    local_178 = 0;
    uStack_170 = 0;
  }
  else {
    local_178 = *(undefined8 *)(lVar3 + 0x10);
    uStack_170 = *(undefined4 *)(lVar3 + 0x18);
    uStack_16c = *(undefined4 *)(lVar3 + 0x1c);
  }
  local_218 = FUN_1497f84e2(param_8);
  local_1b8 = local_50;
  local_1c0 = local_58;
  local_1c8 = local_60;
  local_1e8 = &local_88;
  local_1f0 = &local_b8;
  local_1f8 = &local_e8;
  local_200 = &local_118;
  local_208 = &local_148;
  local_210 = &local_178;
  local_220 = param_6;
  local_228 = param_5;
  local_1e0 = local_78;
  local_1d8 = local_70;
  local_1d0 = local_68;
  FUN_146e8188a(param_1 + 0x208,local_1a0,local_1a8,local_1a4);
  if (local_188 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_198[0] != 0) {
    FUN_1400020a8();
  }
  if (local_158 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_168[0] != 0) {
    FUN_1400020a8();
  }
  if (local_128 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_138[0] != 0) {
    FUN_1400020a8();
  }
  if (local_f8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_108[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1497f856c(param_1 + 0x420,param_8);
  FUN_1497f85da(param_1 + 0x424,param_8);
  FUN_1497f8648(param_1 + 0x428,param_8);
  FUN_1497f86b6(param_1 + 0x42c,param_8);
  FUN_1497f8724(param_1 + 0x430,param_8);
  FUN_1497f8792(param_1 + 0x434,param_8);
  FUN_1497f8800(param_1 + 0x438,param_8);
  if ((local_48 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1497f94f6 FUN_1497f94f6 body=9 status=ok
// SIG undefined FUN_1497f94f6(void)

void FUN_1497f94f6(longlong param_1)

{
  FUN_146e7bce8(param_1 + 0x10);
  return;
}



// FUNCTION 1497f9500 FUN_1497f9500 body=29 status=ok
// SIG undefined FUN_1497f9500(void)

undefined8 FUN_1497f9500(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497f951e FUN_1497f951e body=2024 status=ok
// SIG undefined FUN_1497f951e(void)

undefined8 *
FUN_1497f951e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_188 [32];
  undefined2 **local_168;
  undefined8 *local_160;
  ulonglong *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  undefined1 local_130;
  undefined1 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  float local_f8;
  float fStack_f4;
  undefined2 *local_e8;
  int local_e0;
  undefined2 *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulonglong local_b8;
  int local_b0;
  undefined1 local_a8 [8];
  undefined4 local_a0;
  undefined1 local_9c [8];
  undefined1 local_94 [8];
  undefined1 local_8c [8];
  undefined4 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_188;
  *param_1 = &PTR_FUN_14be85bd8;
  local_84 = 0;
  local_118 = param_3;
  local_110 = param_2;
  uVar3 = FUN_1497f9d30(param_5);
  FUN_1497f9db2(local_8c,param_5);
  FUN_1497f9e46(local_94,param_5);
  local_a0 = 0;
  FUN_1497f9eec(local_9c,param_5);
  FUN_1497f9f9a(local_a8,param_5);
  FUN_1497fa040(&local_b8,param_4,param_5);
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_1400021e4(&DAT_14c996430,&local_f8);
  FUN_1497fa18e(&local_e8,param_5,&local_f8);
  iVar5 = local_e0 + -1;
  puVar9 = local_e8;
  if (local_e0 == 0) {
    iVar5 = 0;
    puVar9 = &DAT_149dfb77a;
  }
  uVar4 = FUN_144a49b4a(iVar5,puVar9);
  iVar5 = FUN_140aad9fa(param_4,uVar4,&local_e8);
  uVar2 = local_110;
  lVar7 = (longlong)iVar5 * 0x28 + *param_4;
  if (lVar7 == 0 || iVar5 == -1) {
    local_d8 = (undefined2 *)0x0;
    iStack_d0 = 0;
  }
  else {
    local_d8 = *(undefined2 **)(lVar7 + 0x10);
    iStack_d0 = *(int *)(lVar7 + 0x18);
    uStack_cc = *(undefined4 *)(lVar7 + 0x1c);
  }
  local_108 = 0;
  local_100 = 0;
  local_138 = local_8c;
  local_140 = local_94;
  local_148 = local_9c;
  local_150 = local_a8;
  local_160 = &local_c8;
  local_168 = &local_d8;
  local_120 = 0x4b189680;
  local_128 = 1;
  local_158 = &local_b8;
  local_130 = uVar3;
  FUN_146e49f3e(param_1,local_110,local_118);
  if (local_e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (CONCAT44(fStack_f4,local_f8) != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14be85bd8;
  uVar4 = *(undefined4 *)(param_1 + 5);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_b8 = param_1[3];
  local_b0 = *(int *)(param_1 + 4);
  FUN_1400021e4(&DAT_14c996420,&local_e8);
  FUN_1497fa20e(&local_d8,param_5,&local_e8);
  puVar9 = local_d8;
  if (iStack_d0 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  iVar5 = iStack_d0 + -1;
  if (iStack_d0 == 0) {
    iVar5 = 0;
  }
  uVar6 = FUN_144a49b4a(iVar5,puVar9);
  iVar5 = FUN_140aad9fa(param_4,uVar6,&local_d8);
  lVar7 = (longlong)iVar5 * 0x28 + *param_4;
  if (lVar7 == 0 || iVar5 == -1) {
    local_c8 = 0;
    uStack_c0 = 0;
  }
  else {
    local_c8 = *(undefined8 *)(lVar7 + 0x10);
    uStack_c0 = *(undefined4 *)(lVar7 + 0x18);
    uStack_bc = *(undefined4 *)(lVar7 + 0x1c);
  }
  FUN_1497f9f9a(&local_f8,param_5);
  fVar10 = fStack_f4;
  if (1e+07 <= fStack_f4) {
    fVar10 = 1e+07;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  fVar11 = local_f8;
  if (1e+07 <= local_f8) {
    fVar11 = 1e+07;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  local_168 = (undefined2 **)CONCAT44(local_168._4_4_,uVar1);
  FUN_146e7b22e(param_1 + 0x24,&local_c8,&local_b8,uVar4);
  *(int *)(param_1 + 0x26) = local_b0;
  if (*(int *)(param_1 + 0x25) == local_b0) {
    uVar8 = param_1[0x24];
    iVar5 = local_b0;
  }
  else {
    uVar8 = 0;
    iVar5 = 0;
  }
  param_1[0x27] = uVar8;
  *(int *)(param_1 + 0x28) = iVar5;
  *(float *)(param_1 + 0x29) = fVar11;
  *(float *)((longlong)param_1 + 0x14c) = fVar10 - fVar11;
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = *(undefined4 *)(param_1 + 5);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_b8 = param_1[3];
  local_b0 = *(int *)(param_1 + 4);
  FUN_1400021e4(&DAT_14c996438,&local_e8);
  FUN_1497fa28e(&local_d8,param_5,&local_e8);
  puVar9 = local_d8;
  if (iStack_d0 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  iVar5 = iStack_d0 + -1;
  if (iStack_d0 == 0) {
    iVar5 = 0;
  }
  uVar6 = FUN_144a49b4a(iVar5,puVar9);
  iVar5 = FUN_140aad9fa(param_4,uVar6,&local_d8);
  lVar7 = (longlong)iVar5 * 0x28 + *param_4;
  if (lVar7 == 0 || iVar5 == -1) {
    local_c8 = 0;
    uStack_c0 = 0;
  }
  else {
    local_c8 = *(undefined8 *)(lVar7 + 0x10);
    uStack_c0 = *(undefined4 *)(lVar7 + 0x18);
    uStack_bc = *(undefined4 *)(lVar7 + 0x1c);
  }
  FUN_1497f9e46(&local_f8,param_5);
  fVar10 = fStack_f4;
  if (1e+07 <= fStack_f4) {
    fVar10 = 1e+07;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  fVar11 = local_f8;
  if (1e+07 <= local_f8) {
    fVar11 = 1e+07;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  local_168 = (undefined2 **)CONCAT44(local_168._4_4_,uVar1);
  FUN_146e7b22e(param_1 + 0x2a,&local_c8,&local_b8,uVar4);
  *(int *)(param_1 + 0x2c) = local_b0;
  if (*(int *)(param_1 + 0x2b) == local_b0) {
    uVar8 = param_1[0x2a];
    iVar5 = local_b0;
  }
  else {
    uVar8 = 0;
    iVar5 = 0;
  }
  param_1[0x2d] = uVar8;
  *(int *)(param_1 + 0x2e) = iVar5;
  *(float *)(param_1 + 0x2f) = fVar11;
  *(float *)((longlong)param_1 + 0x17c) = fVar10 - fVar11;
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = *(undefined4 *)(param_1 + 5);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_b8 = param_1[3];
  local_b0 = *(int *)(param_1 + 4);
  FUN_1400021e4(&DAT_14c996428,&local_e8);
  FUN_1497fa30e(&local_d8,param_5,&local_e8);
  puVar9 = local_d8;
  if (iStack_d0 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  iVar5 = iStack_d0 + -1;
  if (iStack_d0 == 0) {
    iVar5 = 0;
  }
  uVar6 = FUN_144a49b4a(iVar5,puVar9);
  iVar5 = FUN_140aad9fa(param_4,uVar6,&local_d8);
  lVar7 = (longlong)iVar5 * 0x28 + *param_4;
  if (lVar7 == 0 || iVar5 == -1) {
    local_c8 = 0;
    uStack_c0 = 0;
  }
  else {
    local_c8 = *(undefined8 *)(lVar7 + 0x10);
    uStack_c0 = *(undefined4 *)(lVar7 + 0x18);
    uStack_bc = *(undefined4 *)(lVar7 + 0x1c);
  }
  FUN_1497fa38e(&local_f8,param_5);
  if (1000.0 <= fStack_f4) {
    fStack_f4 = 1000.0;
  }
  if (fStack_f4 <= 0.0) {
    fStack_f4 = 0.0;
  }
  fVar10 = local_f8;
  if (1000.0 <= local_f8) {
    fVar10 = 1000.0;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  local_168 = (undefined2 **)CONCAT44(local_168._4_4_,uVar1);
  FUN_146e7b22e(param_1 + 0x30,&local_c8,&local_b8,uVar4);
  *(int *)(param_1 + 0x32) = local_b0;
  if (*(int *)(param_1 + 0x31) == local_b0) {
    uVar8 = param_1[0x30];
    iVar5 = local_b0;
  }
  else {
    uVar8 = 0;
    iVar5 = 0;
  }
  param_1[0x33] = uVar8;
  *(int *)(param_1 + 0x34) = iVar5;
  *(float *)(param_1 + 0x35) = fVar10;
  *(float *)((longlong)param_1 + 0x1ac) = fStack_f4 - fVar10;
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  memset(param_1 + 0x36,0,0xb0);
  FUN_1497fa42e(param_1 + 0x4c,param_5);
  FUN_1497fa49c((longlong)param_1 + 0x264,param_5);
  FUN_1497fa50a(param_1 + 0x4d,param_5);
  FUN_1497fa578((longlong)param_1 + 0x26c,param_5);
  FUN_1497fa5e6(param_1 + 0x4e,param_5);
  FUN_1497fa654((longlong)param_1 + 0x274,param_5);
  FUN_1497fa6c2(param_1 + 0x4f,param_5);
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_1448158c6(param_1 + 0x36,&local_b8,*(undefined4 *)(param_1 + 2));
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_1448158c6(param_1 + 0x38,&local_b8,*(undefined4 *)(param_1 + 2));
  FUN_146e84d26(param_1,uVar2);
  if ((local_80 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f9d12 FUN_1497f9d12 body=29 status=ok
// SIG undefined FUN_1497f9d12(void)

undefined8 FUN_1497f9d12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497f9d30 FUN_1497f9d30 body=128 status=ok
// SIG undefined FUN_1497f9d30(void)

int FUN_1497f9d30(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c996450,local_30);
  iVar2 = *param_2;
  iVar1 = FUN_144a41c6c(param_1,local_30);
  if (iVar1 != -1) {
    iVar2 = (int)*(float *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 0xc);
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f9db2 FUN_1497f9db2 body=147 status=ok
// SIG undefined FUN_1497f9db2(void)

undefined8 * FUN_1497f9db2(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  cVar1 = FUN_1497f9d30(param_2);
  if (cVar1 == '\x01') {
    local_1c = 0;
    FUN_1497fa756(param_1,param_2);
  }
  else if (cVar1 == '\x02') {
    local_1c = 0;
    FUN_1497fa804(param_1,param_2);
  }
  else {
    *param_1 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f9e46 FUN_1497f9e46 body=164 status=ok
// SIG undefined FUN_1497f9e46(void)

undefined8 * FUN_1497f9e46(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c996438,local_30);
  iVar2 = FUN_144a41c6c(param_2,local_30);
  if (iVar2 == -1) {
    *param_1 = 0x4b1896804b189680;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f9eec FUN_1497f9eec body=173 status=ok
// SIG undefined FUN_1497f9eec(void)

undefined8 * FUN_1497f9eec(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c996430,local_38);
  uVar1 = *param_3;
  iVar2 = FUN_144a41c6c(param_2,local_38);
  if (iVar2 == -1) {
    *param_1 = CONCAT44(uVar1,uVar1);
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497f9f9a FUN_1497f9f9a body=164 status=ok
// SIG undefined FUN_1497f9f9a(void)

undefined8 * FUN_1497f9f9a(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c996420,local_30);
  iVar2 = FUN_144a41c6c(param_2,local_30);
  if (iVar2 == -1) {
    *param_1 = 0x4b1896804b189680;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fa040 FUN_1497fa040 body=333 status=ok
// SIG undefined FUN_1497fa040(void)

undefined8 * FUN_1497fa040(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  undefined4 local_40;
  undefined4 uStack_3c;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  cVar3 = FUN_1497f9d30(param_3);
  if (cVar3 == '\x01') {
    FUN_1400021e4(&DAT_14c996440,local_50);
    FUN_1497fa8b2(&local_40,param_3,local_50);
  }
  else {
    if (cVar3 != '\x02') {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_1497fa090;
    }
    FUN_1400021e4(&DAT_14c996448,local_50);
    FUN_1497fa932(&local_40,param_3,local_50);
  }
  if (local_38 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)CONCAT44(uStack_3c,local_40);
  }
  iVar5 = local_38 + -1;
  if (local_38 == 0) {
    iVar5 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar5,puVar7);
  iVar5 = FUN_140aad9fa(param_2,uVar4,&local_40);
  lVar6 = (longlong)iVar5 * 0x28 + *param_2;
  if (lVar6 == 0 || iVar5 == -1) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    uVar4 = *(undefined4 *)(lVar6 + 0x14);
    uVar1 = *(undefined4 *)(lVar6 + 0x18);
    uVar2 = *(undefined4 *)(lVar6 + 0x1c);
    *(undefined4 *)param_1 = *(undefined4 *)(lVar6 + 0x10);
    *(undefined4 *)((longlong)param_1 + 4) = uVar4;
    *(undefined4 *)(param_1 + 1) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  }
  if (CONCAT44(uStack_3c,local_40) != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
LAB_1497fa090:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fa18e FUN_1497fa18e body=127 status=ok
// SIG undefined FUN_1497fa18e(void)

undefined8 FUN_1497fa18e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c996430,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fa20e FUN_1497fa20e body=127 status=ok
// SIG undefined FUN_1497fa20e(void)

undefined8 FUN_1497fa20e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c996420,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fa28e FUN_1497fa28e body=127 status=ok
// SIG undefined FUN_1497fa28e(void)

undefined8 FUN_1497fa28e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c996438,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fa30e FUN_1497fa30e body=127 status=ok
// SIG undefined FUN_1497fa30e(void)

undefined8 FUN_1497fa30e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c996428,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fa38e FUN_1497fa38e body=158 status=ok
// SIG undefined FUN_1497fa38e(void)

undefined8 * FUN_1497fa38e(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c996428,local_30);
  iVar2 = FUN_144a41c6c(param_2,local_30);
  if (iVar2 == -1) {
    *param_1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fa42e FUN_1497fa42e body=109 status=ok
// SIG undefined FUN_1497fa42e(void)

undefined4 * FUN_1497fa42e(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c996420,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fa49c FUN_1497fa49c body=109 status=ok
// SIG undefined FUN_1497fa49c(void)

undefined4 * FUN_1497fa49c(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c996428,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fa50a FUN_1497fa50a body=109 status=ok
// SIG undefined FUN_1497fa50a(void)

undefined4 * FUN_1497fa50a(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c996430,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fa578 FUN_1497fa578 body=109 status=ok
// SIG undefined FUN_1497fa578(void)

undefined4 * FUN_1497fa578(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c996438,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fa5e6 FUN_1497fa5e6 body=109 status=ok
// SIG undefined FUN_1497fa5e6(void)

undefined4 * FUN_1497fa5e6(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c996440,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fa654 FUN_1497fa654 body=109 status=ok
// SIG undefined FUN_1497fa654(void)

undefined4 * FUN_1497fa654(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c996448,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fa6c2 FUN_1497fa6c2 body=109 status=ok
// SIG undefined FUN_1497fa6c2(void)

undefined4 * FUN_1497fa6c2(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c996450,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fa730 FUN_1497fa730 body=38 status=ok
// SIG undefined FUN_1497fa730(void)

undefined8 FUN_1497fa730(undefined8 param_1,int param_2)

{
  FUN_1497fa9b2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497fa756 FUN_1497fa756 body=173 status=ok
// SIG undefined FUN_1497fa756(void)

undefined8 * FUN_1497fa756(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c996440,local_38);
  uVar1 = *param_3;
  iVar2 = FUN_144a41c6c(param_2,local_38);
  if (iVar2 == -1) {
    *param_1 = CONCAT44(uVar1,uVar1);
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fa804 FUN_1497fa804 body=173 status=ok
// SIG undefined FUN_1497fa804(void)

undefined8 * FUN_1497fa804(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c996448,local_38);
  uVar1 = *param_3;
  iVar2 = FUN_144a41c6c(param_2,local_38);
  if (iVar2 == -1) {
    *param_1 = CONCAT44(uVar1,uVar1);
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fa8b2 FUN_1497fa8b2 body=127 status=ok
// SIG undefined FUN_1497fa8b2(void)

undefined8 FUN_1497fa8b2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c996440,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fa932 FUN_1497fa932 body=127 status=ok
// SIG undefined FUN_1497fa932(void)

undefined8 FUN_1497fa932(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c996448,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fa9b2 FUN_1497fa9b2 body=259 status=ok
// SIG undefined FUN_1497fa9b2(void)

void FUN_1497fa9b2(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x250) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x240) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_1400020a8();
  }
  FUN_14062d09a(param_1);
  return;
}



// FUNCTION 1497faab6 FUN_1497faab6 body=2082 status=ok
// SIG undefined FUN_1497faab6(void)

undefined8 *
FUN_1497faab6(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,longlong *param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 *local_170;
  undefined2 **local_168;
  undefined8 *local_160;
  ulonglong *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  undefined1 local_130;
  undefined1 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  float local_f8;
  float fStack_f4;
  undefined2 *local_e8;
  int local_e0;
  undefined2 *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulonglong local_b8;
  int local_b0;
  undefined1 local_a8 [8];
  undefined4 local_a0;
  undefined1 local_9c [8];
  undefined1 local_94 [8];
  undefined1 local_8c [8];
  undefined4 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_198;
  *param_1 = &PTR_FUN_14be85bd8;
  local_84 = 0;
  local_118 = param_3;
  local_114 = param_4;
  local_110 = param_2;
  uVar3 = FUN_1497f9d30(param_7);
  FUN_1497f9db2(local_8c,param_7);
  FUN_1497f9e46(local_94,param_7);
  local_a0 = 0;
  FUN_1497f9eec(local_9c,param_7);
  FUN_1497f9f9a(local_a8,param_7);
  FUN_1497fa040(&local_b8,param_6,param_7);
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_1400021e4(&DAT_14c996430,&local_f8);
  FUN_1497fa18e(&local_e8,param_7,&local_f8);
  iVar5 = local_e0 + -1;
  puVar9 = local_e8;
  if (local_e0 == 0) {
    iVar5 = 0;
    puVar9 = &DAT_149dfb77a;
  }
  uVar4 = FUN_144a49b4a(iVar5,puVar9);
  iVar5 = FUN_140aad9fa(param_6,uVar4,&local_e8);
  uVar2 = local_110;
  lVar7 = (longlong)iVar5 * 0x28 + *param_6;
  if (lVar7 == 0 || iVar5 == -1) {
    local_d8 = (undefined2 *)0x0;
    iStack_d0 = 0;
  }
  else {
    local_d8 = *(undefined2 **)(lVar7 + 0x10);
    iStack_d0 = *(int *)(lVar7 + 0x18);
    uStack_cc = *(undefined4 *)(lVar7 + 0x1c);
  }
  local_170 = &local_108;
  local_108 = 0;
  local_100 = 0;
  local_138 = local_8c;
  local_140 = local_94;
  local_148 = local_9c;
  local_160 = &local_c8;
  local_168 = &local_d8;
  local_178 = param_5;
  local_120 = 0x4b189680;
  local_128 = 1;
  local_158 = &local_b8;
  local_150 = local_a8;
  local_130 = uVar3;
  FUN_1408e8d8e(param_1,local_110,local_118,local_114);
  if (local_e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (CONCAT44(fStack_f4,local_f8) != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14be85bd8;
  uVar4 = *(undefined4 *)(param_1 + 5);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_b8 = param_1[3];
  local_b0 = *(int *)(param_1 + 4);
  FUN_1400021e4(&DAT_14c996420,&local_e8);
  FUN_1497fa20e(&local_d8,param_7,&local_e8);
  puVar9 = local_d8;
  if (iStack_d0 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  iVar5 = iStack_d0 + -1;
  if (iStack_d0 == 0) {
    iVar5 = 0;
  }
  uVar6 = FUN_144a49b4a(iVar5,puVar9);
  iVar5 = FUN_140aad9fa(param_6,uVar6,&local_d8);
  lVar7 = (longlong)iVar5 * 0x28 + *param_6;
  if (lVar7 == 0 || iVar5 == -1) {
    local_c8 = 0;
    uStack_c0 = 0;
  }
  else {
    local_c8 = *(undefined8 *)(lVar7 + 0x10);
    uStack_c0 = *(undefined4 *)(lVar7 + 0x18);
    uStack_bc = *(undefined4 *)(lVar7 + 0x1c);
  }
  FUN_1497f9f9a(&local_f8,param_7);
  fVar10 = fStack_f4;
  if (1e+07 <= fStack_f4) {
    fVar10 = 1e+07;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  fVar11 = local_f8;
  if (1e+07 <= local_f8) {
    fVar11 = 1e+07;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  local_178 = CONCAT44(local_178._4_4_,uVar1);
  FUN_146e7b22e(param_1 + 0x24,&local_c8,&local_b8,uVar4);
  *(int *)(param_1 + 0x26) = local_b0;
  if (*(int *)(param_1 + 0x25) == local_b0) {
    uVar8 = param_1[0x24];
    iVar5 = local_b0;
  }
  else {
    uVar8 = 0;
    iVar5 = 0;
  }
  param_1[0x27] = uVar8;
  *(int *)(param_1 + 0x28) = iVar5;
  *(float *)(param_1 + 0x29) = fVar11;
  *(float *)((longlong)param_1 + 0x14c) = fVar10 - fVar11;
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = *(undefined4 *)(param_1 + 5);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_b8 = param_1[3];
  local_b0 = *(int *)(param_1 + 4);
  FUN_1400021e4(&DAT_14c996438,&local_e8);
  FUN_1497fa28e(&local_d8,param_7,&local_e8);
  puVar9 = local_d8;
  if (iStack_d0 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  iVar5 = iStack_d0 + -1;
  if (iStack_d0 == 0) {
    iVar5 = 0;
  }
  uVar6 = FUN_144a49b4a(iVar5,puVar9);
  iVar5 = FUN_140aad9fa(param_6,uVar6,&local_d8);
  lVar7 = (longlong)iVar5 * 0x28 + *param_6;
  if (lVar7 == 0 || iVar5 == -1) {
    local_c8 = 0;
    uStack_c0 = 0;
  }
  else {
    local_c8 = *(undefined8 *)(lVar7 + 0x10);
    uStack_c0 = *(undefined4 *)(lVar7 + 0x18);
    uStack_bc = *(undefined4 *)(lVar7 + 0x1c);
  }
  FUN_1497f9e46(&local_f8,param_7);
  fVar10 = fStack_f4;
  if (1e+07 <= fStack_f4) {
    fVar10 = 1e+07;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  fVar11 = local_f8;
  if (1e+07 <= local_f8) {
    fVar11 = 1e+07;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  local_178 = CONCAT44(local_178._4_4_,uVar1);
  FUN_146e7b22e(param_1 + 0x2a,&local_c8,&local_b8,uVar4);
  *(int *)(param_1 + 0x2c) = local_b0;
  if (*(int *)(param_1 + 0x2b) == local_b0) {
    uVar8 = param_1[0x2a];
    iVar5 = local_b0;
  }
  else {
    uVar8 = 0;
    iVar5 = 0;
  }
  param_1[0x2d] = uVar8;
  *(int *)(param_1 + 0x2e) = iVar5;
  *(float *)(param_1 + 0x2f) = fVar11;
  *(float *)((longlong)param_1 + 0x17c) = fVar10 - fVar11;
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = *(undefined4 *)(param_1 + 5);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_b8 = param_1[3];
  local_b0 = *(int *)(param_1 + 4);
  FUN_1400021e4(&DAT_14c996428,&local_e8);
  FUN_1497fa30e(&local_d8,param_7,&local_e8);
  puVar9 = local_d8;
  if (iStack_d0 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  iVar5 = iStack_d0 + -1;
  if (iStack_d0 == 0) {
    iVar5 = 0;
  }
  uVar6 = FUN_144a49b4a(iVar5,puVar9);
  iVar5 = FUN_140aad9fa(param_6,uVar6,&local_d8);
  lVar7 = (longlong)iVar5 * 0x28 + *param_6;
  if (lVar7 == 0 || iVar5 == -1) {
    local_c8 = 0;
    uStack_c0 = 0;
  }
  else {
    local_c8 = *(undefined8 *)(lVar7 + 0x10);
    uStack_c0 = *(undefined4 *)(lVar7 + 0x18);
    uStack_bc = *(undefined4 *)(lVar7 + 0x1c);
  }
  FUN_1497fa38e(&local_f8,param_7);
  if (1000.0 <= fStack_f4) {
    fStack_f4 = 1000.0;
  }
  if (fStack_f4 <= 0.0) {
    fStack_f4 = 0.0;
  }
  fVar10 = local_f8;
  if (1000.0 <= local_f8) {
    fVar10 = 1000.0;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  local_178 = CONCAT44(local_178._4_4_,uVar1);
  FUN_146e7b22e(param_1 + 0x30,&local_c8,&local_b8,uVar4);
  *(int *)(param_1 + 0x32) = local_b0;
  if (*(int *)(param_1 + 0x31) == local_b0) {
    uVar8 = param_1[0x30];
    iVar5 = local_b0;
  }
  else {
    uVar8 = 0;
    iVar5 = 0;
  }
  param_1[0x33] = uVar8;
  *(int *)(param_1 + 0x34) = iVar5;
  *(float *)(param_1 + 0x35) = fVar10;
  *(float *)((longlong)param_1 + 0x1ac) = fStack_f4 - fVar10;
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  memset(param_1 + 0x36,0,0xb0);
  FUN_1497fa42e(param_1 + 0x4c,param_7);
  FUN_1497fa49c((longlong)param_1 + 0x264,param_7);
  FUN_1497fa50a(param_1 + 0x4d,param_7);
  FUN_1497fa578((longlong)param_1 + 0x26c,param_7);
  FUN_1497fa5e6(param_1 + 0x4e,param_7);
  FUN_1497fa654((longlong)param_1 + 0x274,param_7);
  FUN_1497fa6c2(param_1 + 0x4f,param_7);
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_1448158c6(param_1 + 0x36,&local_b8,*(undefined4 *)(param_1 + 2));
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_1448158c6(param_1 + 0x38,&local_b8,*(undefined4 *)(param_1 + 2));
  FUN_146e84930(param_1,uVar2);
  if ((local_80 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fb2da FUN_1497fb2da body=1101 status=ok
// SIG undefined FUN_1497fb2da(void)

undefined8 *
FUN_1497fb2da(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined8 *local_170;
  undefined1 *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined1 local_140;
  undefined1 local_138;
  undefined4 local_130;
  undefined8 local_120;
  longlong local_118 [2];
  undefined2 *local_108;
  int local_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8 [2];
  undefined2 *local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8 [2];
  undefined2 *local_a8;
  int local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined1 local_74 [8];
  undefined4 local_6c;
  undefined1 local_68 [8];
  undefined4 local_60;
  undefined1 local_5c [8];
  undefined1 local_54 [8];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  *param_1 = &PTR_FUN_14be85bf8;
  local_4c = 0;
  local_120 = param_3;
  uVar1 = FUN_140e75a96(param_5);
  FUN_140e759b6(local_54,param_5);
  local_60 = 0x3f800000;
  FUN_14190b758(local_5c,param_5);
  local_6c = 0;
  FUN_14190b806(local_68,param_5);
  local_78 = 0x3f800000;
  FUN_14190b8b4(local_74,param_5);
  FUN_14190b962(local_88,param_4,param_5);
  FUN_1400021e4(&DAT_14c9933a0,local_b8);
  FUN_14190bbbc(&local_a8,param_5,local_b8);
  iVar3 = local_a0 + -1;
  puVar5 = local_a8;
  if (local_a0 == 0) {
    iVar3 = 0;
    puVar5 = &DAT_149dfb77a;
  }
  uVar2 = FUN_144a49b4a(iVar3,puVar5);
  iVar3 = FUN_140aad9fa(param_4,uVar2,&local_a8);
  lVar4 = (longlong)iVar3 * 0x28 + *param_4;
  if (lVar4 == 0 || iVar3 == -1) {
    local_98 = 0;
    uStack_90 = 0;
  }
  else {
    local_98 = *(undefined8 *)(lVar4 + 0x10);
    uStack_90 = *(undefined4 *)(lVar4 + 0x18);
    uStack_8c = *(undefined4 *)(lVar4 + 0x1c);
  }
  FUN_1400021e4(&DAT_14c993398,local_e8);
  FUN_14190bc3c(&local_d8,param_5,local_e8);
  puVar5 = local_d8;
  if (local_d0 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  iVar3 = local_d0 + -1;
  if (local_d0 == 0) {
    iVar3 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar3,puVar5);
  iVar3 = FUN_140aad9fa(param_4,uVar2,&local_d8);
  lVar4 = (longlong)iVar3 * 0x28 + *param_4;
  if (lVar4 == 0 || iVar3 == -1) {
    local_c8 = 0;
    uStack_c0 = 0;
  }
  else {
    local_c8 = *(undefined8 *)(lVar4 + 0x10);
    uStack_c0 = *(undefined4 *)(lVar4 + 0x18);
    uStack_bc = *(undefined4 *)(lVar4 + 0x1c);
  }
  FUN_1400021e4(&DAT_14c993390,local_118);
  FUN_14190bcbc(&local_108,param_5,local_118);
  puVar5 = local_108;
  if (local_100 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  iVar3 = local_100 + -1;
  if (local_100 == 0) {
    iVar3 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar3,puVar5);
  iVar3 = FUN_140aad9fa(param_4,uVar2,&local_108);
  lVar4 = (longlong)iVar3 * 0x28 + *param_4;
  if (lVar4 == 0 || iVar3 == -1) {
    local_f8 = 0;
    uStack_f0 = 0;
  }
  else {
    local_f8 = *(undefined8 *)(lVar4 + 0x10);
    uStack_f0 = *(undefined4 *)(lVar4 + 0x18);
    uStack_ec = *(undefined4 *)(lVar4 + 0x1c);
  }
  local_148 = local_54;
  local_150 = local_5c;
  local_158 = local_68;
  local_160 = local_74;
  local_168 = local_88;
  local_170 = &local_98;
  local_178 = &local_c8;
  local_130 = 0x3f800000;
  local_138 = 1;
  local_140 = uVar1;
  FUN_146e49f3e(param_1,param_2,local_120,&local_f8);
  if (local_108 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_118[0] != 0) {
    FUN_1400020a8();
  }
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14be85bf8;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  FUN_14190bd3c(param_1 + 0x26,param_5);
  FUN_14190bdaa((longlong)param_1 + 0x134,param_5);
  FUN_14190be18(param_1 + 0x27,param_5);
  FUN_14190be86((longlong)param_1 + 0x13c,param_5);
  FUN_14190bef4(param_1 + 0x28,param_5);
  FUN_14190bf62((longlong)param_1 + 0x144,param_5);
  FUN_146dda360(param_1,param_2);
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fb728 FUN_1497fb728 body=68 status=ok
// SIG undefined FUN_1497fb728(void)

undefined8 * FUN_1497fb728(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be85bf8;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_14062d09a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497fb76c FUN_1497fb76c body=173 status=ok
// SIG undefined FUN_1497fb76c(void)

undefined8 * FUN_1497fb76c(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9933b0,local_38);
  uVar1 = *param_3;
  iVar2 = FUN_144a41c6c(param_2,local_38);
  if (iVar2 == -1) {
    *param_1 = CONCAT44(uVar1,uVar1);
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fb81a FUN_1497fb81a body=127 status=ok
// SIG undefined FUN_1497fb81a(void)

undefined8 FUN_1497fb81a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c9933b0,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fb89a FUN_1497fb89a body=590 status=ok
// SIG undefined FUN_1497fb89a(void)

undefined8 *
FUN_1497fb89a(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  longlong local_b8 [2];
  undefined2 *local_a8;
  int local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88 [2];
  undefined2 *local_78;
  int local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1497fbb12(local_50,param_5);
  FUN_1497fbbb2(local_58,param_5);
  FUN_1400021e4(&DAT_14c9964f0,local_88);
  FUN_1497fbc58(&local_78,param_5,local_88);
  puVar4 = local_78;
  if (local_70 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_70 + -1;
  if (local_70 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_4,uVar1,&local_78);
  lVar3 = (longlong)iVar2 * 0x28 + *param_4;
  if (lVar3 == 0 || iVar2 == -1) {
    local_68 = 0;
    uStack_60 = 0;
  }
  else {
    local_68 = *(undefined8 *)(lVar3 + 0x10);
    uStack_60 = *(undefined4 *)(lVar3 + 0x18);
    uStack_5c = *(undefined4 *)(lVar3 + 0x1c);
  }
  FUN_1400021e4(&DAT_14c9964e8,local_b8);
  FUN_1497fbcd8(&local_a8,param_5,local_b8);
  puVar4 = local_a8;
  if (local_a0 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_a0 + -1;
  if (local_a0 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_4,uVar1,&local_a8);
  lVar3 = (longlong)iVar2 * 0x28 + *param_4;
  if (lVar3 == 0 || iVar2 == -1) {
    local_98 = 0;
    uStack_90 = 0;
  }
  else {
    local_98 = *(undefined8 *)(lVar3 + 0x10);
    uStack_90 = *(undefined4 *)(lVar3 + 0x18);
    uStack_8c = *(undefined4 *)(lVar3 + 0x1c);
  }
  local_c8 = local_50;
  local_d8 = &local_68;
  local_d0 = local_58;
  FUN_1497fbd58(param_1,param_2,param_3,&local_98);
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14be85c18;
  FUN_1497fbe8c(param_1 + 0x1c,param_5);
  FUN_1497fbefa((longlong)param_1 + 0xe4,param_5);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1497fbaea FUN_1497fbaea body=9 status=ok
// SIG undefined FUN_1497fbaea(void)

void FUN_1497fbaea(longlong param_1)

{
  FUN_1497fc310(param_1 + 0x10);
  return;
}



// FUNCTION 1497fbaf4 FUN_1497fbaf4 body=29 status=ok
// SIG undefined FUN_1497fbaf4(void)

undefined8 FUN_1497fbaf4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497fbb12 FUN_1497fbb12 body=158 status=ok
// SIG undefined FUN_1497fbb12(void)

undefined8 * FUN_1497fbb12(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9964f0,local_30);
  iVar2 = FUN_144a41c6c(param_2,local_30);
  if (iVar2 == -1) {
    *param_1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fbbb2 FUN_1497fbbb2 body=164 status=ok
// SIG undefined FUN_1497fbbb2(void)

undefined8 * FUN_1497fbbb2(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9964e8,local_30);
  iVar2 = FUN_144a41c6c(param_2,local_30);
  if (iVar2 == -1) {
    *param_1 = 0x4e6e6b284e6e6b28;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fbc58 FUN_1497fbc58 body=127 status=ok
// SIG undefined FUN_1497fbc58(void)

undefined8 FUN_1497fbc58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c9964f0,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fbcd8 FUN_1497fbcd8 body=127 status=ok
// SIG undefined FUN_1497fbcd8(void)

undefined8 FUN_1497fbcd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c9964e8,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fbd58 FUN_1497fbd58 body=306 status=ok
// SIG undefined FUN_1497fbd58(void)

undefined8 *
FUN_1497fbd58(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,float *param_7)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  float local_48;
  float local_44;
  ulonglong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = param_6;
  local_60 = 0x4e6e6b28;
  FUN_1497fbf8e(param_1);
  *param_1 = &PTR_FUN_14be85b40;
  local_60 = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_40 = param_1[1];
  local_38 = *(undefined4 *)(param_1 + 2);
  local_48 = *param_7;
  local_44 = param_7[1];
  if (1000.0 <= local_44) {
    local_44 = 1000.0;
  }
  if (local_44 <= 0.0) {
    local_44 = 0.0;
  }
  if (1000.0 <= local_48) {
    local_48 = 1000.0;
  }
  if (local_48 <= 0.0) {
    local_48 = 0.0;
  }
  local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(param_1 + 5));
  local_50 = 0;
  local_58 = 0x10;
  FUN_140a9b934(param_1 + 0xf,&local_48,param_5,&local_40);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  local_40 = local_40 & 0xffffffff00000000;
  FUN_1448158c6(param_1 + 0x16,&local_40,*(undefined4 *)(param_1 + 2));
  FUN_146e870c4(param_1,param_2);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fbe8c FUN_1497fbe8c body=109 status=ok
// SIG undefined FUN_1497fbe8c(void)

undefined4 * FUN_1497fbe8c(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9964e8,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fbefa FUN_1497fbefa body=109 status=ok
// SIG undefined FUN_1497fbefa(void)

undefined4 * FUN_1497fbefa(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c9964f0,local_30);
  uVar1 = FUN_144a41c6c(param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fbf68 FUN_1497fbf68 body=38 status=ok
// SIG undefined FUN_1497fbf68(void)

undefined8 FUN_1497fbf68(undefined8 param_1,int param_2)

{
  FUN_1497fc310();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497fbf8e FUN_1497fbf8e body=447 status=ok
// SIG undefined FUN_1497fbf8e(void)

undefined8 *
FUN_1497fbf8e(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  undefined1 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_1 = &PTR_FUN_149f5fc08;
  local_78 = 1;
  local_80 = param_2;
  FUN_1497fc14e(param_1 + 1,param_3);
  plVar1 = param_1 + 3;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  local_b0 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0x2c) = local_b0;
  local_90 = param_1[1];
  local_88 = *(undefined4 *)(param_1 + 2);
  local_98 = param_6;
  local_b8 = 0;
  local_a0 = 0x447a0000;
  local_a8 = 0x10;
  FUN_140a9b824(param_1 + 6,param_5,param_4);
  FUN_14005ea14(plVar1,*(undefined4 *)(param_1 + 2));
  if ((longlong)*(int *)(param_1 + 2) != 0) {
    piVar7 = (int *)param_1[1];
    piVar2 = piVar7 + (longlong)*(int *)(param_1 + 2) * 2;
    do {
      lVar5 = (longlong)*piVar7 + (longlong)*(int *)(param_2 + 0x10);
      lVar4 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x28);
      lVar6 = (longlong)piVar7[1] + (longlong)*(int *)(param_2 + 0x10);
      fVar8 = *(float *)(lVar4 + 8 + lVar6 * 0xc) - *(float *)(lVar4 + 8 + lVar5 * 0xc);
      fVar10 = *(float *)(lVar4 + 4 + lVar6 * 0xc) - *(float *)(lVar4 + 4 + lVar5 * 0xc);
      fVar9 = *(float *)(lVar4 + lVar6 * 0xc) - *(float *)(lVar4 + lVar5 * 0xc);
      iVar3 = *(int *)(param_1 + 4);
      *(uint *)(param_1 + 4) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0x24) < iVar3 + 1U) {
        FUN_14475e4ac(plVar1,iVar3);
      }
      *(float *)(*plVar1 + (longlong)iVar3 * 4) =
           SQRT(fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10);
      piVar7 = piVar7 + 2;
    } while (piVar7 != piVar2);
  }
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fc14e FUN_1497fc14e body=447 status=ok
// SIG undefined FUN_1497fc14e(void)

undefined8 FUN_1497fc14e(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined1 auStack_d8 [36];
  undefined1 local_b4 [4];
  int local_b0;
  int local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  longlong local_68;
  int local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = 0;
  local_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_7c = 0xffffffff00000080;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  uVar8 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar8 != 0) {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar8);
    }
    FUN_14026dcb4(&local_a8,uVar8);
    iVar6 = 1;
    if (3 < uVar8) {
      uVar8 = (uVar8 | 1) + 0xe;
      iVar6 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      iVar6 = 1 << ((byte)iVar6 & 0x1f);
    }
    if ((local_60 == 0) || (local_60 < iVar6)) {
      local_60 = iVar6;
      FUN_14026e04e();
    }
    if ((longlong)*(int *)(param_2 + 1) != 0) {
      piVar7 = (int *)*param_2;
      piVar1 = piVar7 + (longlong)*(int *)(param_2 + 1) * 2;
      do {
        iVar6 = *piVar7;
        iVar3 = piVar7[1];
        if ((char)param_3[1] == '\x01') {
          iVar4 = *(int *)(*param_3 + 0x10);
          lVar5 = *(longlong *)(*(longlong *)(*param_3 + 8) + 0x90);
          fVar2 = *(float *)(lVar5 + (longlong)(iVar4 + iVar6) * 4);
          if ((fVar2 != 0.0) || (NAN(fVar2))) goto LAB_1497fc273;
          fVar2 = *(float *)(lVar5 + (longlong)(iVar4 + iVar3) * 4);
          if ((fVar2 != 0.0) || (NAN(fVar2))) goto LAB_1497fc273;
        }
        else {
LAB_1497fc273:
          local_b0 = iVar3;
          if (iVar6 < iVar3) {
            local_b0 = iVar6;
          }
          local_ac = iVar3;
          if (iVar3 < iVar6) {
            local_ac = iVar6;
          }
          FUN_14026d8b0(&local_a8,local_b4,&local_b0,0);
        }
        piVar7 = piVar7 + 2;
      } while (piVar7 != piVar1);
    }
  }
  FUN_14026de80(&local_a8,param_1);
  local_60 = 0;
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  FUN_14026dbfa(&local_a8);
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fc310 FUN_1497fc310 body=127 status=ok
// SIG undefined FUN_1497fc310(void)

void FUN_1497fc310(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14be85b40;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  param_1[0xf] = &PTR_FUN_149f57480;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_14062ce9a(param_1);
  return;
}



// FUNCTION 1497fc390 FUN_1497fc390 body=632 status=ok
// SIG undefined FUN_1497fc390(void)

undefined8 *
FUN_1497fc390(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,longlong *param_6,undefined8 param_7)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  longlong local_b8 [2];
  undefined2 *local_a8;
  int local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88 [2];
  undefined2 *local_78;
  int local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1497fbb12(local_50,param_7);
  FUN_1497fbbb2(local_58,param_7);
  FUN_1400021e4(&DAT_14c9964f0,local_88);
  FUN_1497fbc58(&local_78,param_7,local_88);
  puVar4 = local_78;
  if (local_70 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_70 + -1;
  if (local_70 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_6,uVar1,&local_78);
  lVar3 = (longlong)iVar2 * 0x28 + *param_6;
  if (lVar3 == 0 || iVar2 == -1) {
    local_68 = 0;
    uStack_60 = 0;
  }
  else {
    local_68 = *(undefined8 *)(lVar3 + 0x10);
    uStack_60 = *(undefined4 *)(lVar3 + 0x18);
    uStack_5c = *(undefined4 *)(lVar3 + 0x1c);
  }
  FUN_1400021e4(&DAT_14c9964e8,local_b8);
  FUN_1497fbcd8(&local_a8,param_7,local_b8);
  puVar4 = local_a8;
  if (local_a0 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_a0 + -1;
  if (local_a0 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_6,uVar1,&local_a8);
  lVar3 = (longlong)iVar2 * 0x28 + *param_6;
  if (lVar3 == 0 || iVar2 == -1) {
    local_98 = 0;
    uStack_90 = 0;
  }
  else {
    local_98 = *(undefined8 *)(lVar3 + 0x10);
    uStack_90 = *(undefined4 *)(lVar3 + 0x18);
    uStack_8c = *(undefined4 *)(lVar3 + 0x1c);
  }
  local_c8 = local_50;
  local_d0 = local_58;
  local_d8 = &local_68;
  local_e0 = &local_98;
  local_e8 = param_5;
  FUN_1497fc60a(param_1,param_2,param_3,param_4);
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14be85c18;
  FUN_1497fbe8c(param_1 + 0x1c,param_7);
  FUN_1497fbefa((longlong)param_1 + 0xe4,param_7);
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1497fc60a FUN_1497fc60a body=357 status=ok
// SIG undefined FUN_1497fc60a(void)

undefined8 *
FUN_1497fc60a(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
             float *param_9)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  float local_50;
  float local_4c;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = param_8;
  local_78 = param_5;
  uStack_70 = param_6;
  local_60 = CONCAT44(local_60._4_4_,0x4e6e6b28);
  FUN_14190bfd0(param_1);
  *param_1 = &PTR_FUN_14be85b40;
  local_48 = param_1[1];
  local_40 = *(undefined4 *)(param_1 + 2);
  local_50 = *param_9;
  local_4c = param_9[1];
  if (1000.0 <= local_4c) {
    local_4c = 1000.0;
  }
  if (local_4c <= 0.0) {
    local_4c = 0.0;
  }
  if (1000.0 <= local_50) {
    local_50 = 1000.0;
  }
  if (local_50 <= 0.0) {
    local_50 = 0.0;
  }
  local_60 = 0;
  local_68 = CONCAT44(local_68._4_4_,0x10);
  local_78 = param_3;
  uStack_70 = param_4;
  FUN_140a9b934(param_1 + 0xf,&local_50,param_7);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_144aa29e6(param_1 + 0x16,*(undefined4 *)(param_1 + 2),1);
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (*(int *)((longlong)param_1 + 0xcc) < 0) {
    FUN_14482f6fa(param_1 + 0x18,0);
  }
  FUN_144aa29e6(param_1 + 0x18,*(undefined4 *)(param_1 + 2),1);
  FUN_146e86e34(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fc770 FUN_1497fc770 body=378 status=ok
// SIG undefined FUN_1497fc770(void)

undefined8 *
FUN_1497fc770(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined4 local_90;
  longlong local_88 [2];
  undefined2 *local_78;
  int local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_54;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_54 = 0x3f800000;
  FUN_14190c374(local_50,param_5);
  FUN_1400021e4(&DAT_14c9933c8,local_88);
  FUN_14190c422(&local_78,param_5,local_88);
  puVar4 = local_78;
  if (local_70 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_70 + -1;
  if (local_70 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_4,uVar1,&local_78);
  lVar3 = (longlong)iVar2 * 0x28 + *param_4;
  if (lVar3 == 0 || iVar2 == -1) {
    local_68 = 0;
    uStack_60 = 0;
  }
  else {
    local_68 = *(undefined8 *)(lVar3 + 0x10);
    uStack_60 = *(undefined4 *)(lVar3 + 0x18);
    uStack_5c = *(undefined4 *)(lVar3 + 0x1c);
  }
  local_90 = 0x3f800000;
  local_98 = local_50;
  FUN_1497fbf8e(param_1,param_2,param_3,&local_68);
  *param_1 = &PTR_FUN_14be85b70;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_146e145ba(param_1,param_2);
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14be85c38;
  FUN_14190c4a2(param_1 + 0x11,param_5);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1497fc8ec FUN_1497fc8ec body=65 status=ok
// SIG undefined FUN_1497fc8ec(void)

undefined8 * FUN_1497fc8ec(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14be85b70;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_14062ce9a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497fc92e FUN_1497fc92e body=402 status=ok
// SIG undefined FUN_1497fc92e(void)

undefined8 *
FUN_1497fc92e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined1 local_a0;
  undefined4 local_98;
  longlong local_88 [2];
  undefined2 *local_78;
  int local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_54 [8];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1497fcb12(local_54,param_5);
  FUN_1400021e4(&DAT_14cc26f80,local_88);
  FUN_1497fcbb8(&local_78,param_5,local_88);
  puVar4 = local_78;
  if (local_70 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar2 = local_70 + -1;
  if (local_70 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar4);
  iVar2 = FUN_140aad9fa(param_4,uVar1,&local_78);
  lVar3 = (longlong)iVar2 * 0x28 + *param_4;
  if (lVar3 == 0 || iVar2 == -1) {
    local_68 = 0;
    uStack_60 = 0;
  }
  else {
    local_68 = *(undefined8 *)(lVar3 + 0x10);
    uStack_60 = *(undefined4 *)(lVar3 + 0x18);
    uStack_5c = *(undefined4 *)(lVar3 + 0x1c);
  }
  local_98 = 0x4b189680;
  local_a0 = 1;
  local_a8 = local_54;
  FUN_146e80c0e(param_1,param_2,param_3,&local_68);
  *param_1 = &PTR_FUN_14be85c60;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  local_4c = 0;
  FUN_1448158c6(param_1 + 0x11,&local_4c,*(undefined4 *)(param_1 + 2));
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14be85c58;
  FUN_1497fcc38(param_1 + 0x13,param_5);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1497fcac2 FUN_1497fcac2 body=50 status=ok
// SIG undefined FUN_1497fcac2(void)

void FUN_1497fcac2(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14be85c60;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_14062cff8(param_1 + 0x10);
  return;
}



// FUNCTION 1497fcaf4 FUN_1497fcaf4 body=29 status=ok
// SIG undefined FUN_1497fcaf4(void)

undefined8 FUN_1497fcaf4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1497fcb12 FUN_1497fcb12 body=164 status=ok
// SIG undefined FUN_1497fcb12(void)

undefined8 * FUN_1497fcb12(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14cc26f80,local_30);
  iVar2 = FUN_144a41c6c(param_2,local_30);
  if (iVar2 == -1) {
    *param_1 = 0x4b1896804b189680;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1497fcbb8 FUN_1497fcbb8 body=127 status=ok
// SIG undefined FUN_1497fcbb8(void)

undefined8 FUN_1497fcbb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14cc26f80,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


