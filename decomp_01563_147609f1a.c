// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147609f1a FUN_147609f1a body=269 status=ok
// SIG undefined FUN_147609f1a(void)

undefined2 * FUN_147609f1a(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  undefined4 local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 8));
  local_40 = 0;
  local_38 = 0x200000000;
  local_58 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x20) * '\x02' + '\x01',param_4
               );
  FUN_140560464(param_3,&local_70,param_4);
  if (local_70 == 0) {
    local_70 = 0;
  }
  else {
    FUN_14760a028(param_1 + 8,local_70,local_68);
  }
  local_78 = local_68;
  local_74 = 1;
  local_80 = local_70;
  FUN_14163869e(local_50,&local_80,&local_58);
  *param_2 = local_60;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760a028 FUN_14760a028 body=151 status=ok
// SIG undefined FUN_14760a028(void)

void FUN_14760a028(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar3 = *(longlong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar3 + 0x1e) == *param_1) goto LAB_14760a05b;
      plVar3 = plVar3 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  plVar3 = (longlong *)0x0;
LAB_14760a05b:
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
  }
  LOCK();
  *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
  UNLOCK();
  *(undefined8 *)(*plVar3 + (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar3 + 0x1c)) =
       *(undefined8 *)(param_1 + 4);
  if ((char)param_1[8] == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014760a0ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14760a0c0 FUN_14760a0c0 body=49 status=ok
// SIG undefined FUN_14760a0c0(void)

undefined8 * FUN_14760a0c0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c3220;
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14760a0f2 FUN_14760a0f2 body=78 status=ok
// SIG undefined FUN_14760a0f2(void)

undefined8 FUN_14760a0f2(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14760a180();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760a142 FUN_14760a142 body=40 status=ok
// SIG undefined FUN_14760a142(void)

void FUN_14760a142(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 8));
  if (*(char *)(param_1 + 0x20) == '\x01') {
    *param_4 = 1;
  }
  return;
}



// FUNCTION 14760a180 FUN_14760a180 body=269 status=ok
// SIG undefined FUN_14760a180(void)

undefined2 * FUN_14760a180(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  undefined4 local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 8));
  local_40 = 0;
  local_38 = 0x200000000;
  local_58 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x20) * '\x02' + '\x01',param_4
               );
  FUN_140560464(param_3,&local_70,param_4);
  if (local_70 == 0) {
    local_70 = 0;
  }
  else {
    FUN_14760a28e(param_1 + 8,local_70,local_68);
  }
  local_78 = local_68;
  local_74 = 1;
  local_80 = local_70;
  FUN_14163869e(local_50,&local_80,&local_58);
  *param_2 = local_60;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760a28e FUN_14760a28e body=151 status=ok
// SIG undefined FUN_14760a28e(void)

void FUN_14760a28e(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar3 = *(longlong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar3 + 0x1e) == *param_1) goto LAB_14760a2c1;
      plVar3 = plVar3 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  plVar3 = (longlong *)0x0;
LAB_14760a2c1:
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
  }
  LOCK();
  *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
  UNLOCK();
  *(undefined8 *)(*plVar3 + (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar3 + 0x1c)) =
       *(undefined8 *)(param_1 + 4);
  if ((char)param_1[8] == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014760a314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14760a326 FUN_14760a326 body=49 status=ok
// SIG undefined FUN_14760a326(void)

undefined8 * FUN_14760a326(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c3240;
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14760a358 FUN_14760a358 body=78 status=ok
// SIG undefined FUN_14760a358(void)

undefined8 FUN_14760a358(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14760a3e6();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760a3a8 FUN_14760a3a8 body=40 status=ok
// SIG undefined FUN_14760a3a8(void)

void FUN_14760a3a8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 8));
  if (*(char *)(param_1 + 0x20) == '\x01') {
    *param_4 = 1;
  }
  return;
}



// FUNCTION 14760a3e6 FUN_14760a3e6 body=269 status=ok
// SIG undefined FUN_14760a3e6(void)

undefined2 * FUN_14760a3e6(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  undefined4 local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 8));
  local_40 = 0;
  local_38 = 0x200000000;
  local_58 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x20) * '\x02' + '\x01',param_4
               );
  FUN_140560464(param_3,&local_70,param_4);
  if (local_70 == 0) {
    local_70 = 0;
  }
  else {
    FUN_141286b5e(param_1 + 8,local_70,local_68);
  }
  local_78 = local_68;
  local_74 = 1;
  local_80 = local_70;
  FUN_14163869e(local_50,&local_80,&local_58);
  *param_2 = local_60;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760a4f4 FUN_14760a4f4 body=74 status=ok
// SIG undefined FUN_14760a4f4(void)

undefined8 * FUN_14760a4f4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c3260;
  if (*(int *)((longlong)param_1 + 0x44) != -1) {
    *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14760a53e FUN_14760a53e body=78 status=ok
// SIG undefined FUN_14760a53e(void)

undefined8 FUN_14760a53e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14760a638();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760a58e FUN_14760a58e body=82 status=ok
// SIG undefined FUN_14760a58e(void)

void FUN_14760a58e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_14760a744(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x50) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760a5e2 FUN_14760a5e2 body=85 status=ok
// SIG undefined FUN_14760a5e2(void)

void FUN_14760a5e2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = *param_3;
  if (lVar2 == 0) {
    return;
  }
  uVar1 = (undefined4)param_3[1];
  FUN_140659abc(param_1 + 8,lVar2,uVar1);
  FUN_1476095ea(param_1 + 0x28,lVar2,uVar1);
  FUN_1475d430e(param_1 + 0x40,lVar2,uVar1);
  return;
}



// FUNCTION 14760a638 FUN_14760a638 body=266 status=ok
// SIG undefined FUN_14760a638(void)

undefined2 * FUN_14760a638(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

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
  FUN_14760a744(local_60,param_1 + 8);
  local_50 = 0;
  local_48 = 0x200000000;
  local_68 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x50) * '\x02' + '\x01',param_4
                ,local_60);
  FUN_140560464(param_3,&local_80,param_4);
  FUN_14760a5e2(param_1);
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



// FUNCTION 14760a744 FUN_14760a744 body=77 status=ok
// SIG undefined FUN_14760a744(void)

void FUN_14760a744(undefined8 *param_1,undefined2 *param_2)

{
  if (*(char *)(param_2 + 1) == '\x01') {
    FUN_140dba9e6(*param_1,*param_2);
  }
  if (*(char *)(param_2 + 0xd) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0xc]);
  }
  FUN_140dba9e6(*param_1,param_2[0x10]);
  FUN_140dba9e6(*param_1,param_2[0x1c]);
  return;
}



// FUNCTION 14760a83a FUN_14760a83a body=59 status=ok
// SIG undefined FUN_14760a83a(void)

undefined8 FUN_14760a83a(longlong *param_1)

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



// FUNCTION 14760a8dc FUN_14760a8dc body=59 status=ok
// SIG undefined FUN_14760a8dc(void)

undefined8 * FUN_14760a8dc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c33e0;
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



// FUNCTION 14760a918 FUN_14760a918 body=78 status=ok
// SIG undefined FUN_14760a918(void)

undefined8 FUN_14760a918(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14760a9f6();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760a968 FUN_14760a968 body=69 status=ok
// SIG undefined FUN_14760a968(void)

void FUN_14760a968(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 8));
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 0x10));
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 0x28));
  if (*(char *)(param_1 + 0x40) == '\x01') {
    *param_4 = 1;
  }
  return;
}



// FUNCTION 14760a9ae FUN_14760a9ae body=71 status=ok
// SIG undefined FUN_14760a9ae(void)

void FUN_14760a9ae(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_3;
  if (lVar1 != 0) {
    lVar2 = param_3[1];
    FUN_140e38572(param_1 + 0x10,lVar1,(int)lVar2);
    FUN_140e3860a(param_1 + 0x28,lVar1,(int)lVar2);
    return;
  }
  return;
}



// FUNCTION 14760a9f6 FUN_14760a9f6 body=309 status=ok
// SIG undefined FUN_14760a9f6(void)

undefined2 * FUN_14760a9f6(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_80;
  undefined4 local_78;
  undefined2 local_70;
  undefined8 local_68;
  char local_59;
  undefined1 local_58 [16];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_59 = '\0';
  FUN_14760a968(param_1,param_2,param_4,&local_59);
  local_48 = 0;
  local_40 = 0x200000000;
  local_68 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),local_59 * '\x02' + '\x01',param_4);
  FUN_140560464(param_3,&local_80,param_4);
  uVar2 = local_78;
  lVar1 = local_80;
  if (local_80 == 0) {
    local_80 = 0;
  }
  else {
    FUN_140e38572(param_1 + 0x10,local_80,local_78);
    FUN_140e3860a(param_1 + 0x28,lVar1,uVar2);
  }
  local_88 = local_78;
  local_84 = 1;
  local_90 = local_80;
  FUN_14163869e(local_58,&local_90,&local_68);
  *param_2 = local_70;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760ab2c FUN_14760ab2c body=49 status=ok
// SIG undefined FUN_14760ab2c(void)

undefined8 * FUN_14760ab2c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c3400;
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14760ab5e FUN_14760ab5e body=78 status=ok
// SIG undefined FUN_14760ab5e(void)

undefined8 FUN_14760ab5e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14760abfe();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760abae FUN_14760abae body=57 status=ok
// SIG undefined FUN_14760abae(void)

void FUN_14760abae(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 8));
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 0x10));
  if (*(char *)(param_1 + 0x28) == '\x01') {
    *param_4 = 1;
  }
  return;
}



// FUNCTION 14760abfe FUN_14760abfe body=281 status=ok
// SIG undefined FUN_14760abfe(void)

undefined2 * FUN_14760abfe(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  undefined4 local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 8));
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 0x10));
  local_40 = 0;
  local_38 = 0x200000000;
  local_58 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x28) * '\x02' + '\x01',param_4
               );
  FUN_140560464(param_3,&local_70,param_4);
  if (local_70 == 0) {
    local_70 = 0;
  }
  else {
    FUN_140e38572(param_1 + 0x10,local_70,local_68);
  }
  local_78 = local_68;
  local_74 = 1;
  local_80 = local_70;
  FUN_14163869e(local_50,&local_80,&local_58);
  *param_2 = local_60;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760ad18 FUN_14760ad18 body=49 status=ok
// SIG undefined FUN_14760ad18(void)

undefined8 * FUN_14760ad18(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c3420;
  if (*(char *)(param_1 + 5) == '\x01') {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14760ad4a FUN_14760ad4a body=78 status=ok
// SIG undefined FUN_14760ad4a(void)

undefined8 FUN_14760ad4a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14760ad9a();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760ad9a FUN_14760ad9a body=281 status=ok
// SIG undefined FUN_14760ad9a(void)

undefined2 * FUN_14760ad9a(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  undefined4 local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 8));
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 0x10));
  local_40 = 0;
  local_38 = 0x200000000;
  local_58 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x30) * '\x02' + '\x01',param_4
               );
  FUN_140560464(param_3,&local_70,param_4);
  if (local_70 == 0) {
    local_70 = 0;
  }
  else {
    FUN_146030980(param_1 + 0x10,local_70,local_68);
  }
  local_78 = local_68;
  local_74 = 1;
  local_80 = local_70;
  FUN_14163869e(local_50,&local_80,&local_58);
  *param_2 = local_60;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760af04 FUN_14760af04 body=113 status=ok
// SIG undefined FUN_14760af04(void)

undefined1 FUN_14760af04(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte bVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (param_4 != 0) {
    lVar13 = 0;
    bVar11 = DAT_14c950c29;
    do {
      lVar12 = *(longlong *)(param_3 + lVar13);
      if ((bVar11 & 1) != 0) {
        if (lVar12 == 0) {
          lVar12 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar12 = *(longlong *)(param_3 + lVar13);
          bVar11 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar13);
      *plVar1 = lVar12;
      puVar2 = (undefined4 *)(param_3 + 8 + lVar13);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar3 = (undefined4 *)(param_3 + 0x18 + lVar13);
      uVar7 = *puVar3;
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      *(undefined4 *)(plVar1 + 1) = *puVar2;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar4;
      *(undefined4 *)(plVar1 + 2) = uVar5;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar6;
      *(undefined4 *)(plVar1 + 3) = uVar7;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar8;
      *(undefined4 *)(plVar1 + 4) = uVar9;
      *(undefined4 *)((longlong)plVar1 + 0x24) = uVar10;
      lVar13 = lVar13 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14760af9e FUN_14760af9e body=59 status=ok
// SIG undefined FUN_14760af9e(void)

undefined8 FUN_14760af9e(longlong *param_1)

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



// FUNCTION 14760b040 FUN_14760b040 body=59 status=ok
// SIG undefined FUN_14760b040(void)

undefined8 * FUN_14760b040(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c35a0;
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14760b07c FUN_14760b07c body=78 status=ok
// SIG undefined FUN_14760b07c(void)

undefined8 FUN_14760b07c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14760b152();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760b0cc FUN_14760b0cc body=63 status=ok
// SIG undefined FUN_14760b0cc(void)

void FUN_14760b0cc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 8));
  }
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 0x20));
  if (*(char *)(param_1 + 0x70) == '\x01') {
    *param_4 = 1;
  }
  return;
}



// FUNCTION 14760b10c FUN_14760b10c body=70 status=ok
// SIG undefined FUN_14760b10c(void)

void FUN_14760b10c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_3;
  if (lVar1 == 0) {
    return;
  }
  lVar2 = param_3[1];
  FUN_140659abc(param_1 + 8,lVar1,(int)lVar2);
  FUN_14760b288(param_1 + 0x20,lVar1,(int)lVar2);
  return;
}



// FUNCTION 14760b152 FUN_14760b152 body=309 status=ok
// SIG undefined FUN_14760b152(void)

undefined2 * FUN_14760b152(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

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
  undefined1 local_58 [16];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 10) == '\x01') {
    FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 8));
  }
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 0x20));
  local_48 = 0;
  local_40 = 0x200000000;
  local_60 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x70) * '\x02' + '\x01',param_4
               );
  FUN_140560464(param_3,&local_78,param_4);
  uVar2 = local_70;
  lVar1 = local_78;
  if (local_78 == 0) {
    local_78 = 0;
  }
  else {
    FUN_140659abc(param_1 + 8,local_78,local_70);
    FUN_14760b288(param_1 + 0x20,lVar1,uVar2);
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



// FUNCTION 14760b288 FUN_14760b288 body=209 status=ok
// SIG undefined FUN_14760b288(void)

void FUN_14760b288(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *param_1) goto LAB_14760b2bb;
      plVar8 = plVar8 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_14760b2bb:
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  lVar6 = *(longlong *)(param_1 + 4);
  plVar7 = (longlong *)((longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar8 + 0x1c) + *plVar8)
  ;
  if (DAT_14c950c29 == '\x01') {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = *(longlong *)(param_1 + 4);
    }
  }
  *plVar7 = lVar6;
  lVar6 = *(longlong *)(param_1 + 8);
  lVar5 = *(longlong *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x12);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  uVar4 = *(undefined4 *)(param_1 + 0x16);
  *(undefined4 *)(plVar7 + 3) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((longlong)plVar7 + 0x1c) = uVar2;
  *(undefined4 *)(plVar7 + 4) = uVar3;
  *(undefined4 *)((longlong)plVar7 + 0x24) = uVar4;
  plVar7[1] = lVar6;
  plVar7[2] = lVar5;
  plVar7[7] = *(longlong *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x1a);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  uVar4 = *(undefined4 *)(param_1 + 0x1e);
  *(undefined4 *)(plVar7 + 5) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)plVar7 + 0x2c) = uVar2;
  *(undefined4 *)(plVar7 + 6) = uVar3;
  *(undefined4 *)((longlong)plVar7 + 0x34) = uVar4;
  if ((char)param_1[0x24] == '\x01') {
    *(undefined1 *)(param_1 + 0x24) = 0;
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014760b33d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14760b3f6 FUN_14760b3f6 body=59 status=ok
// SIG undefined FUN_14760b3f6(void)

undefined8 FUN_14760b3f6(longlong *param_1)

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



// FUNCTION 14760b43c FUN_14760b43c body=45 status=ok
// SIG undefined FUN_14760b43c(void)

void FUN_14760b43c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 7) == '\x01') {
    *param_2 = &PTR_LAB_14a4c3730;
    FUN_147521a50(param_2 + 4);
    *(undefined1 *)(param_2 + 7) = 0;
  }
  return;
}



// FUNCTION 14760b4b8 FUN_14760b4b8 body=52 status=ok
// SIG undefined FUN_14760b4b8(void)

undefined8 * FUN_14760b4b8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a4c3730;
  FUN_147521a50(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14760b4ee FUN_14760b4ee body=79 status=ok
// SIG undefined FUN_14760b4ee(void)

undefined8 * FUN_14760b4ee(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c7be0;
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



// FUNCTION 14760b53e FUN_14760b53e body=78 status=ok
// SIG undefined FUN_14760b53e(void)

undefined8 FUN_14760b53e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14760b63a();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760b58e FUN_14760b58e body=82 status=ok
// SIG undefined FUN_14760b58e(void)

void FUN_14760b58e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_14760b770(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x70) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760b5e2 FUN_14760b5e2 body=86 status=ok
// SIG undefined FUN_14760b5e2(void)

void FUN_14760b5e2(longlong param_1,undefined8 param_2,longlong *param_3)

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
    FUN_14760b7de(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760b63a FUN_14760b63a body=308 status=ok
// SIG undefined FUN_14760b63a(void)

undefined2 * FUN_14760b63a(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

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
  FUN_14760b770(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x70) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_14760b7de(&local_78,param_1 + 8);
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



// FUNCTION 14760b770 FUN_14760b770 body=109 status=ok
// SIG undefined FUN_14760b770(void)

void FUN_14760b770(undefined8 *param_1,undefined2 *param_2)

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
    return;
  }
  return;
}



// FUNCTION 14760b7de FUN_14760b7de body=85 status=ok
// SIG undefined FUN_14760b7de(void)

void FUN_14760b7de(undefined8 *param_1,longlong param_2)

{
  FUN_140659b5e(param_2 + 8,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x50,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 14760b834 FUN_14760b834 body=49 status=ok
// SIG undefined FUN_14760b834(void)

undefined8 * FUN_14760b834(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c3740;
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14760b866 FUN_14760b866 body=78 status=ok
// SIG undefined FUN_14760b866(void)

undefined8 FUN_14760b866(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14760b90c();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760b8b6 FUN_14760b8b6 body=63 status=ok
// SIG undefined FUN_14760b8b6(void)

void FUN_14760b8b6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 8));
  if (*(char *)(param_1 + 0x12) == '\x01') {
    FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 0x10));
  }
  if (*(char *)(param_1 + 0x28) == '\x01') {
    *param_4 = 1;
  }
  return;
}



// FUNCTION 14760b90c FUN_14760b90c body=287 status=ok
// SIG undefined FUN_14760b90c(void)

undefined2 * FUN_14760b90c(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  undefined4 local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 8));
  if (*(char *)(param_1 + 0x12) == '\x01') {
    FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 0x10));
  }
  local_40 = 0;
  local_38 = 0x200000000;
  local_58 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x28) * '\x02' + '\x01',param_4
               );
  FUN_140560464(param_3,&local_70,param_4);
  if (local_70 == 0) {
    local_70 = 0;
  }
  else {
    FUN_140659b5e(param_1 + 0x10,local_70,local_68);
  }
  local_78 = local_68;
  local_74 = 1;
  local_80 = local_70;
  FUN_14163869e(local_50,&local_80,&local_58);
  *param_2 = local_60;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760ba68 FUN_14760ba68 body=78 status=ok
// SIG undefined FUN_14760ba68(void)

undefined1 FUN_14760ba68(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      FUN_14753be88();
      lVar6 = lVar6 + 0x120;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14760bade FUN_14760bade body=59 status=ok
// SIG undefined FUN_14760bade(void)

undefined8 FUN_14760bade(longlong *param_1)

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



// FUNCTION 14760bb2a FUN_14760bb2a body=39 status=ok
// SIG undefined FUN_14760bb2a(void)

void FUN_14760bb2a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x120) == '\x01') {
    FUN_1404dbc70(param_2 + 0x10);
    *(undefined1 *)(param_2 + 0x120) = 0;
  }
  return;
}



// FUNCTION 14760bbaa FUN_14760bbaa body=61 status=ok
// SIG undefined FUN_14760bbaa(void)

void FUN_14760bbaa(undefined8 param_1,longlong param_2)

{
  FUN_1404dbc70(param_2 + 0x340);
  FUN_1404dbc70(param_2 + 0x230);
  FUN_1404dbc70(param_2 + 0x120);
  FUN_1404dbc70(param_2 + 0x10);
  return;
}



// FUNCTION 14760bbfe FUN_14760bbfe body=63 status=ok
// SIG undefined FUN_14760bbfe(void)

undefined1 FUN_14760bbfe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14760bd08(param_2,param_3);
    param_3 = param_3 + 0x450;
    param_2 = param_2 + 0x450;
  }
  return 1;
}



// FUNCTION 14760bc66 FUN_14760bc66 body=59 status=ok
// SIG undefined FUN_14760bc66(void)

undefined8 FUN_14760bc66(longlong *param_1)

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



// FUNCTION 14760bd08 FUN_14760bd08 body=95 status=ok
// SIG undefined FUN_14760bd08(void)

undefined4 * FUN_14760bd08(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_14753be88(param_1 + 4,param_2 + 4);
  FUN_14753be88(param_1 + 0x48,param_2 + 0x48);
  FUN_14753be88(param_1 + 0x8c,param_2 + 0x8c);
  FUN_14753be88(param_1 + 0xd0,param_2 + 0xd0);
  return param_1;
}



// FUNCTION 14760bd68 FUN_14760bd68 body=75 status=ok
// SIG undefined FUN_14760bd68(void)

void FUN_14760bd68(longlong param_1)

{
  if (*(char *)(param_1 + 0x450) == '\x01') {
    FUN_1404dbc70(param_1 + 0x340);
    FUN_1404dbc70(param_1 + 0x230);
    FUN_1404dbc70(param_1 + 0x120);
    FUN_1404dbc70(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x450) = 0;
  }
  return;
}



// FUNCTION 14760bdb4 FUN_14760bdb4 body=79 status=ok
// SIG undefined FUN_14760bdb4(void)

undefined8 * FUN_14760bdb4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c3a20;
  if (*(char *)((longlong)param_1 + 100) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 100) = 0;
  }
  if (*(char *)(param_1 + 9) == '\x01') {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x34) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14760be04 FUN_14760be04 body=78 status=ok
// SIG undefined FUN_14760be04(void)

undefined8 FUN_14760be04(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14760be54();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760be54 FUN_14760be54 body=309 status=ok
// SIG undefined FUN_14760be54(void)

undefined2 * FUN_14760be54(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

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
  FUN_140eaafae(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x70) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_140b5f688(&local_78,param_1 + 8);
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



// FUNCTION 14760bf8a FUN_14760bf8a body=38 status=ok
// SIG undefined FUN_14760bf8a(void)

undefined8 FUN_14760bf8a(undefined8 param_1,int param_2)

{
  FUN_14582c6ee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14760bfb0 FUN_14760bfb0 body=78 status=ok
// SIG undefined FUN_14760bfb0(void)

undefined8 FUN_14760bfb0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14760c000();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760c000 FUN_14760c000 body=311 status=ok
// SIG undefined FUN_14760c000(void)

undefined2 * FUN_14760c000(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

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
  FUN_1457aac56(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0xb8) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_14585ca46(&local_78,param_1 + 8);
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



// FUNCTION 14760c138 FUN_14760c138 body=38 status=ok
// SIG undefined FUN_14760c138(void)

undefined8 FUN_14760c138(undefined8 param_1,int param_2)

{
  FUN_1475c6792();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14760c15e FUN_14760c15e body=78 status=ok
// SIG undefined FUN_14760c15e(void)

undefined8 FUN_14760c15e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14760c25c();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760c1ae FUN_14760c1ae body=85 status=ok
// SIG undefined FUN_14760c1ae(void)

void FUN_14760c1ae(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_14760c394(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760c204 FUN_14760c204 body=86 status=ok
// SIG undefined FUN_14760c204(void)

void FUN_14760c204(longlong param_1,undefined8 param_2,longlong *param_3)

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
    FUN_14760c41a(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760c25c FUN_14760c25c body=311 status=ok
// SIG undefined FUN_14760c25c(void)

undefined2 * FUN_14760c25c(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

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
  FUN_14760c394(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0xb0) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_14760c41a(&local_78,param_1 + 8);
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



// FUNCTION 14760c394 FUN_14760c394 body=134 status=ok
// SIG undefined FUN_14760c394(void)

void FUN_14760c394(undefined8 *param_1,undefined2 *param_2)

{
  if (*(char *)(param_2 + 1) == '\x01') {
    FUN_140dba9e6(*param_1,*param_2);
  }
  FUN_140dba9e6(*param_1,param_2[0xc]);
  if (*(char *)(param_2 + 0x19) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x18]);
  }
  if (*(char *)(param_2 + 0x25) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x24]);
  }
  if (*(char *)(param_2 + 0x31) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x30]);
  }
  if (*(char *)(param_2 + 0x3d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x3c]);
  }
  FUN_140dba9e6(*param_1,param_2[0x48]);
  return;
}



// FUNCTION 14760c41a FUN_14760c41a body=135 status=ok
// SIG undefined FUN_14760c41a(void)

void FUN_14760c41a(undefined8 *param_1,longlong param_2)

{
  FUN_140659abc(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140b5f774(param_2 + 0x18,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x30,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x48,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x60,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x78,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140b5f6dc(param_2 + 0x90,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 14760c4a2 FUN_14760c4a2 body=105 status=ok
// SIG undefined FUN_14760c4a2(void)

undefined8 * FUN_14760c4a2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c3a80;
  if (*(char *)(param_1 + 0x12) == '\x01') {
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  if (*(char *)(param_1 + 0xf) == '\x01') {
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  if (*(char *)(param_1 + 0xc) == '\x01') {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  if (*(char *)(param_1 + 9) == '\x01') {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x34) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14760c50c FUN_14760c50c body=78 status=ok
// SIG undefined FUN_14760c50c(void)

undefined8 FUN_14760c50c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14760c60a();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760c55c FUN_14760c55c body=85 status=ok
// SIG undefined FUN_14760c55c(void)

void FUN_14760c55c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_14760c742(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x98) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760c5b2 FUN_14760c5b2 body=86 status=ok
// SIG undefined FUN_14760c5b2(void)

void FUN_14760c5b2(longlong param_1,undefined8 param_2,longlong *param_3)

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
    FUN_14760c7c2(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760c60a FUN_14760c60a body=311 status=ok
// SIG undefined FUN_14760c60a(void)

undefined2 * FUN_14760c60a(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

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
  FUN_14760c742(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x98) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_14760c7c2(&local_78,param_1 + 8);
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



// FUNCTION 14760c742 FUN_14760c742 body=127 status=ok
// SIG undefined FUN_14760c742(void)

void FUN_14760c742(undefined8 *param_1,undefined2 *param_2)

{
  if (*(char *)(param_2 + 1) == '\x01') {
    FUN_140dba9e6(*param_1,*param_2);
  }
  FUN_140dba9e6(*param_1,param_2[0xc]);
  if (*(char *)(param_2 + 0x19) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x18]);
  }
  if (*(char *)(param_2 + 0x25) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x24]);
  }
  if (*(char *)(param_2 + 0x31) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x30]);
  }
  if (*(char *)(param_2 + 0x3d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x3c]);
    return;
  }
  return;
}



// FUNCTION 14760c7c2 FUN_14760c7c2 body=116 status=ok
// SIG undefined FUN_14760c7c2(void)

void FUN_14760c7c2(undefined8 *param_1,longlong param_2)

{
  FUN_140659abc(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140b5f774(param_2 + 0x18,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x30,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x48,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x60,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x78,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 14760c836 FUN_14760c836 body=89 status=ok
// SIG undefined FUN_14760c836(void)

undefined8 * FUN_14760c836(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c3aa0;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  if (*(char *)(param_1 + 0xc) == '\x01') {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  if (*(char *)(param_1 + 9) == '\x01') {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x34) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14760c890 FUN_14760c890 body=78 status=ok
// SIG undefined FUN_14760c890(void)

undefined8 FUN_14760c890(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14760c98e();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760c8e0 FUN_14760c8e0 body=85 status=ok
// SIG undefined FUN_14760c8e0(void)

void FUN_14760c8e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_14760cac6(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x80) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760c936 FUN_14760c936 body=86 status=ok
// SIG undefined FUN_14760c936(void)

void FUN_14760c936(longlong param_1,undefined8 param_2,longlong *param_3)

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
    FUN_14760cb34(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760c98e FUN_14760c98e body=311 status=ok
// SIG undefined FUN_14760c98e(void)

undefined2 * FUN_14760c98e(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

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
  FUN_14760cac6(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x80) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_14760cb34(&local_78,param_1 + 8);
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



// FUNCTION 14760cac6 FUN_14760cac6 body=109 status=ok
// SIG undefined FUN_14760cac6(void)

void FUN_14760cac6(undefined8 *param_1,undefined2 *param_2)

{
  if (*(char *)(param_2 + 1) == '\x01') {
    FUN_140dba9e6(*param_1,*param_2);
  }
  FUN_140dba9e6(*param_1,param_2[0xc]);
  if (*(char *)(param_2 + 0x19) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x18]);
  }
  if (*(char *)(param_2 + 0x25) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x24]);
  }
  if (*(char *)(param_2 + 0x31) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x30]);
    return;
  }
  return;
}



// FUNCTION 14760cb34 FUN_14760cb34 body=100 status=ok
// SIG undefined FUN_14760cb34(void)

void FUN_14760cb34(undefined8 *param_1,longlong param_2)

{
  FUN_140659abc(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140b5f774(param_2 + 0x18,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x30,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x48,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x60,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 14760cb98 FUN_14760cb98 body=79 status=ok
// SIG undefined FUN_14760cb98(void)

undefined8 * FUN_14760cb98(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c3ac0;
  if (*(char *)(param_1 + 0xc) == '\x01') {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  if (*(char *)(param_1 + 9) == '\x01') {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x34) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14760cbe8 FUN_14760cbe8 body=78 status=ok
// SIG undefined FUN_14760cbe8(void)

undefined8 FUN_14760cbe8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14760cce4();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760cc38 FUN_14760cc38 body=82 status=ok
// SIG undefined FUN_14760cc38(void)

void FUN_14760cc38(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_14760ce1a(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x68) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760cc8c FUN_14760cc8c body=86 status=ok
// SIG undefined FUN_14760cc8c(void)

void FUN_14760cc8c(longlong param_1,undefined8 param_2,longlong *param_3)

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
    FUN_14760ce76(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760cce4 FUN_14760cce4 body=308 status=ok
// SIG undefined FUN_14760cce4(void)

undefined2 * FUN_14760cce4(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

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
  FUN_14760ce1a(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x68) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_14760ce76(&local_78,param_1 + 8);
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



// FUNCTION 14760ce1a FUN_14760ce1a body=91 status=ok
// SIG undefined FUN_14760ce1a(void)

void FUN_14760ce1a(undefined8 *param_1,undefined2 *param_2)

{
  if (*(char *)(param_2 + 1) == '\x01') {
    FUN_140dba9e6(*param_1,*param_2);
  }
  FUN_140dba9e6(*param_1,param_2[0xc]);
  if (*(char *)(param_2 + 0x19) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x18]);
  }
  if (*(char *)(param_2 + 0x25) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x24]);
    return;
  }
  return;
}



// FUNCTION 14760ce76 FUN_14760ce76 body=84 status=ok
// SIG undefined FUN_14760ce76(void)

void FUN_14760ce76(undefined8 *param_1,longlong param_2)

{
  FUN_140659abc(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140b5f774(param_2 + 0x18,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x30,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x48,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 14760ceca FUN_14760ceca body=74 status=ok
// SIG undefined FUN_14760ceca(void)

undefined8 * FUN_14760ceca(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c3ae0;
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x24) != -1) {
    *(undefined8 *)((longlong)param_1 + 0x24) = 0xffffffff;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14760cf14 FUN_14760cf14 body=78 status=ok
// SIG undefined FUN_14760cf14(void)

undefined8 FUN_14760cf14(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14760d00e();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760cf64 FUN_14760cf64 body=82 status=ok
// SIG undefined FUN_14760cf64(void)

void FUN_14760cf64(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_14760d11a(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x48) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760cfb8 FUN_14760cfb8 body=85 status=ok
// SIG undefined FUN_14760cfb8(void)

void FUN_14760cfb8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = *param_3;
  if (lVar2 == 0) {
    return;
  }
  uVar1 = (undefined4)param_3[1];
  FUN_140659abc(param_1 + 8,lVar2,uVar1);
  FUN_1475d430e(param_1 + 0x20,lVar2,uVar1);
  FUN_140b5f80c(param_1 + 0x30,lVar2,uVar1);
  return;
}



// FUNCTION 14760d00e FUN_14760d00e body=266 status=ok
// SIG undefined FUN_14760d00e(void)

undefined2 * FUN_14760d00e(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

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
  FUN_14760d11a(local_60,param_1 + 8);
  local_50 = 0;
  local_48 = 0x200000000;
  local_68 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x48) * '\x02' + '\x01',param_4
                ,local_60);
  FUN_140560464(param_3,&local_80,param_4);
  FUN_14760cfb8(param_1);
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



// FUNCTION 14760d11a FUN_14760d11a body=59 status=ok
// SIG undefined FUN_14760d11a(void)

void FUN_14760d11a(undefined8 *param_1,undefined2 *param_2)

{
  if (*(char *)(param_2 + 1) == '\x01') {
    FUN_140dba9e6(*param_1,*param_2);
  }
  FUN_140dba9e6(*param_1,param_2[0xc]);
  FUN_140dba9e6(*param_1,param_2[0x14]);
  return;
}



// FUNCTION 14760d156 FUN_14760d156 body=74 status=ok
// SIG undefined FUN_14760d156(void)

undefined8 * FUN_14760d156(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c3b00;
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x24) != -1) {
    *(undefined8 *)((longlong)param_1 + 0x24) = 0xffffffff;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14760d1a0 FUN_14760d1a0 body=78 status=ok
// SIG undefined FUN_14760d1a0(void)

undefined8 FUN_14760d1a0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14760d29a();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760d1f0 FUN_14760d1f0 body=82 status=ok
// SIG undefined FUN_14760d1f0(void)

void FUN_14760d1f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_14760d3a6(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x48) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760d244 FUN_14760d244 body=85 status=ok
// SIG undefined FUN_14760d244(void)

void FUN_14760d244(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = *param_3;
  if (lVar2 == 0) {
    return;
  }
  uVar1 = (undefined4)param_3[1];
  FUN_140659abc(param_1 + 8,lVar2,uVar1);
  FUN_1475d430e(param_1 + 0x20,lVar2,uVar1);
  FUN_140659b5e(param_1 + 0x30,lVar2,uVar1);
  return;
}



// FUNCTION 14760d29a FUN_14760d29a body=266 status=ok
// SIG undefined FUN_14760d29a(void)

undefined2 * FUN_14760d29a(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

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
  FUN_14760d3a6(local_60,param_1 + 8);
  local_50 = 0;
  local_48 = 0x200000000;
  local_68 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x48) * '\x02' + '\x01',param_4
                ,local_60);
  FUN_140560464(param_3,&local_80,param_4);
  FUN_14760d244(param_1);
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



// FUNCTION 14760d3a6 FUN_14760d3a6 body=73 status=ok
// SIG undefined FUN_14760d3a6(void)

void FUN_14760d3a6(undefined8 *param_1,undefined2 *param_2)

{
  if (*(char *)(param_2 + 1) == '\x01') {
    FUN_140dba9e6(*param_1,*param_2);
  }
  FUN_140dba9e6(*param_1,param_2[0xc]);
  if (*(char *)(param_2 + 0x15) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x14]);
    return;
  }
  return;
}



// FUNCTION 14760d3f0 FUN_14760d3f0 body=74 status=ok
// SIG undefined FUN_14760d3f0(void)

undefined8 * FUN_14760d3f0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c3b20;
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x24) != -1) {
    *(undefined8 *)((longlong)param_1 + 0x24) = 0xffffffff;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14760d43a FUN_14760d43a body=78 status=ok
// SIG undefined FUN_14760d43a(void)

undefined8 FUN_14760d43a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14760d534();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760d48a FUN_14760d48a body=82 status=ok
// SIG undefined FUN_14760d48a(void)

void FUN_14760d48a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_14760d640(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x48) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760d4de FUN_14760d4de body=85 status=ok
// SIG undefined FUN_14760d4de(void)

void FUN_14760d4de(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = *param_3;
  if (lVar2 == 0) {
    return;
  }
  uVar1 = (undefined4)param_3[1];
  FUN_140659abc(param_1 + 8,lVar2,uVar1);
  FUN_1475d430e(param_1 + 0x20,lVar2,uVar1);
  FUN_140659b5e(param_1 + 0x30,lVar2,uVar1);
  return;
}



// FUNCTION 14760d534 FUN_14760d534 body=266 status=ok
// SIG undefined FUN_14760d534(void)

undefined2 * FUN_14760d534(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

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
  FUN_14760d640(local_60,param_1 + 8);
  local_50 = 0;
  local_48 = 0x200000000;
  local_68 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x48) * '\x02' + '\x01',param_4
                ,local_60);
  FUN_140560464(param_3,&local_80,param_4);
  FUN_14760d4de(param_1);
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



// FUNCTION 14760d640 FUN_14760d640 body=85 status=ok
// SIG undefined FUN_14760d640(void)

void FUN_14760d640(undefined8 *param_1,undefined2 *param_2)

{
  if (*(char *)(param_2 + 1) == '\x01') {
    FUN_140dba9e6(*param_1,*param_2);
  }
  FUN_140dba9e6(*param_1,param_2[0xc]);
  FUN_140dba9e6(*param_1,param_2[0x12]);
  if (*(char *)(param_2 + 0x15) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x14]);
    return;
  }
  return;
}



// FUNCTION 14760d6ca FUN_14760d6ca body=110 status=ok
// SIG undefined FUN_14760d6ca(void)

undefined1 FUN_14760d6ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined1 *)(param_2 + 0x10 + lVar3) = *(undefined1 *)(param_3 + 0x10 + lVar3);
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14760d760 FUN_14760d760 body=59 status=ok
// SIG undefined FUN_14760d760(void)

undefined8 FUN_14760d760(longlong *param_1)

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



// FUNCTION 14760d850 FUN_14760d850 body=42 status=ok
// SIG undefined FUN_14760d850(void)

void FUN_14760d850(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_2);
  return;
}



// FUNCTION 14760d890 FUN_14760d890 body=54 status=ok
// SIG undefined FUN_14760d890(void)

undefined1 FUN_14760d890(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14058acb2(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 14760d8ee FUN_14760d8ee body=59 status=ok
// SIG undefined FUN_14760d8ee(void)

undefined8 FUN_14760d8ee(longlong *param_1)

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



// FUNCTION 14760d934 FUN_14760d934 body=53 status=ok
// SIG undefined FUN_14760d934(void)

void FUN_14760d934(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1407a3a68(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 14760d9ba FUN_14760d9ba body=74 status=ok
// SIG undefined FUN_14760d9ba(void)

undefined8 * FUN_14760d9ba(undefined8 *param_1,undefined8 *param_2)

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
    FUN_14760da04(param_1,iVar1);
    FUN_14760da66(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14760da04 FUN_14760da04 body=98 status=ok
// SIG undefined FUN_14760da04(void)

void FUN_14760da04(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14760da66 FUN_14760da66 body=82 status=ok
// SIG undefined FUN_14760da66(void)

void FUN_14760da66(longlong param_1,longlong param_2,int param_3)

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
      if ((lVar1 != 0) && ((bVar2 & 1) != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 14760dab8 FUN_14760dab8 body=49 status=ok
// SIG undefined FUN_14760dab8(void)

undefined8 * FUN_14760dab8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c3e10;
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14760daea FUN_14760daea body=78 status=ok
// SIG undefined FUN_14760daea(void)

undefined8 FUN_14760daea(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14760db78();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760db3a FUN_14760db3a body=40 status=ok
// SIG undefined FUN_14760db3a(void)

void FUN_14760db3a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 8));
  if (*(char *)(param_1 + 0x20) == '\x01') {
    *param_4 = 1;
  }
  return;
}



// FUNCTION 14760db78 FUN_14760db78 body=269 status=ok
// SIG undefined FUN_14760db78(void)

undefined2 * FUN_14760db78(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  undefined4 local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 8));
  local_40 = 0;
  local_38 = 0x200000000;
  local_58 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x20) * '\x02' + '\x01',param_4
               );
  FUN_140560464(param_3,&local_70,param_4);
  if (local_70 == 0) {
    local_70 = 0;
  }
  else {
    FUN_14760dc86(param_1 + 8,local_70,local_68);
  }
  local_78 = local_68;
  local_74 = 1;
  local_80 = local_70;
  FUN_14163869e(local_50,&local_80,&local_58);
  *param_2 = local_60;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760dc86 FUN_14760dc86 body=184 status=ok
// SIG undefined FUN_14760dc86(void)

void FUN_14760dc86(short *param_1,longlong param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar5 = *(longlong **)(param_2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar5 + 0x1e) == *param_1) goto LAB_14760dcbb;
      plVar5 = plVar5 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  plVar5 = (longlong *)0x0;
LAB_14760dcbb:
  iVar2 = *(int *)(param_2 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar5 + 1));
  }
  LOCK();
  *(int *)(plVar5 + 3) = (int)plVar5[3] + 1;
  UNLOCK();
  lVar3 = *plVar5;
  bVar1 = *(byte *)((longlong)plVar5 + 0x1c);
  lVar4 = *(longlong *)(param_1 + 4);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_1 + 4);
    }
  }
  *(longlong *)(lVar3 + (longlong)param_3 * (ulonglong)bVar1) = lVar4;
  if ((char)param_1[8] == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 3) = (int)plVar5[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014760dd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar5 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14760dd3e FUN_14760dd3e body=49 status=ok
// SIG undefined FUN_14760dd3e(void)

undefined8 * FUN_14760dd3e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c3e30;
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14760dd70 FUN_14760dd70 body=78 status=ok
// SIG undefined FUN_14760dd70(void)

undefined8 FUN_14760dd70(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14760de10();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760ddc0 FUN_14760ddc0 body=57 status=ok
// SIG undefined FUN_14760ddc0(void)

void FUN_14760ddc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 8));
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 0x10));
  if (*(char *)(param_1 + 0x28) == '\x01') {
    *param_4 = 1;
  }
  return;
}



// FUNCTION 14760de10 FUN_14760de10 body=281 status=ok
// SIG undefined FUN_14760de10(void)

undefined2 * FUN_14760de10(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  undefined4 local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 8));
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 0x10));
  local_40 = 0;
  local_38 = 0x200000000;
  local_58 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x28) * '\x02' + '\x01',param_4
               );
  FUN_140560464(param_3,&local_70,param_4);
  if (local_70 == 0) {
    local_70 = 0;
  }
  else {
    FUN_14151b43e(param_1 + 0x10,local_70,local_68);
  }
  local_78 = local_68;
  local_74 = 1;
  local_80 = local_70;
  FUN_14163869e(local_50,&local_80,&local_58);
  *param_2 = local_60;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760df6e FUN_14760df6e body=48 status=ok
// SIG undefined FUN_14760df6e(void)

void FUN_14760df6e(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14760dfa2 FUN_14760dfa2 body=19 status=ok
// SIG undefined FUN_14760dfa2(void)

undefined1 FUN_14760dfa2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1475c8d28(param_3);
  return 1;
}



// FUNCTION 14760dfc4 FUN_14760dfc4 body=125 status=ok
// SIG undefined FUN_14760dfc4(void)

undefined8 FUN_14760dfc4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      lVar2 = param_2 + 0x10 + lVar6;
      *(undefined4 *)(lVar2 + -0x10) = *puVar1;
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6(lVar2,puVar1 + 4);
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(puVar1 + 8);
      *(undefined4 *)(lVar2 + 0x18) = puVar1[10];
      FUN_1447a122a(param_2 + lVar6 + 0x30,param_3 + lVar6 + 0x30);
      lVar6 = lVar6 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14760e06a FUN_14760e06a body=59 status=ok
// SIG undefined FUN_14760e06a(void)

undefined8 FUN_14760e06a(longlong *param_1)

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



// FUNCTION 14760e108 FUN_14760e108 body=52 status=ok
// SIG undefined FUN_14760e108(void)

void FUN_14760e108(longlong param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    if (*(longlong *)(param_1 + 0x30) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14760e190 FUN_14760e190 body=48 status=ok
// SIG undefined FUN_14760e190(void)

void FUN_14760e190(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14760e1d6 FUN_14760e1d6 body=133 status=ok
// SIG undefined FUN_14760e1d6(void)

undefined8 FUN_14760e1d6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(puVar1 + 6);
      FUN_1447a122a(param_2 + lVar6 + 0x38,param_3 + lVar6 + 0x38);
      lVar6 = lVar6 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14760e284 FUN_14760e284 body=59 status=ok
// SIG undefined FUN_14760e284(void)

undefined8 FUN_14760e284(longlong *param_1)

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



// FUNCTION 14760e322 FUN_14760e322 body=52 status=ok
// SIG undefined FUN_14760e322(void)

void FUN_14760e322(longlong param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  return;
}



// FUNCTION 14760e356 FUN_14760e356 body=37 status=ok
// SIG undefined FUN_14760e356(void)

void FUN_14760e356(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xf8);
  FUN_14608ef32(param_2);
  return;
}



// FUNCTION 14760e3a8 FUN_14760e3a8 body=63 status=ok
// SIG undefined FUN_14760e3a8(void)

undefined1 FUN_14760e3a8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1475b0cae(param_2,param_3);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 14760e410 FUN_14760e410 body=59 status=ok
// SIG undefined FUN_14760e410(void)

undefined8 FUN_14760e410(longlong *param_1)

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



// FUNCTION 14760e45c FUN_14760e45c body=40 status=ok
// SIG undefined FUN_14760e45c(void)

void FUN_14760e45c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_145c31fda(param_2);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 14760e4d4 FUN_14760e4d4 body=76 status=ok
// SIG undefined FUN_14760e4d4(void)

undefined8 * FUN_14760e4d4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c4280;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14760e524 FUN_14760e524 body=39 status=ok
// SIG undefined FUN_14760e524(void)

void FUN_14760e524(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x78,0x10);
  FUN_14760e54c(uVar1,param_1);
  return;
}



// FUNCTION 14760e54c FUN_14760e54c body=144 status=ok
// SIG undefined FUN_14760e54c(void)

undefined8 * FUN_14760e54c(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
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
  *param_1 = &PTR_FUN_14a4c4280;
  param_1[0xd] = 0;
  iVar1 = *(int *)(param_2 + 0x70);
  _Src = *(void **)(param_2 + 0x68);
  *(int *)(param_1 + 0xe) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  else {
    FUN_14760e5dc(param_1 + 0xd,iVar1,0);
    memcpy((void *)param_1[0xd],_Src,(longlong)iVar1 * 0xc);
  }
  return param_1;
}



// FUNCTION 14760e5dc FUN_14760e5dc body=115 status=ok
// SIG undefined FUN_14760e5dc(void)

void FUN_14760e5dc(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14760e650 FUN_14760e650 body=22 status=ok
// SIG undefined FUN_14760e650(void)

undefined8 FUN_14760e650(undefined8 param_1)

{
  FUN_14572541c();
  return param_1;
}



// FUNCTION 14760e666 FUN_14760e666 body=28 status=ok
// SIG undefined FUN_14760e666(void)

undefined8 FUN_14760e666(undefined8 param_1,undefined8 param_2)

{
  thunk_FUN_14010d536(param_2,param_1);
  return param_1;
}



// FUNCTION 14760e682 FUN_14760e682 body=414 status=ok
// SIG undefined FUN_14760e682(void)

longlong * FUN_14760e682(longlong *param_1,undefined8 *param_2)

{
  void *pvVar1;
  longlong lVar2;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = *(undefined4 *)(param_2 + 1);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_60 = *(undefined4 *)(param_2 + 2);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_58 = (void *)0x0;
  local_50 = *(int *)(param_2 + 4);
  lVar2 = (longlong)local_50;
  pvVar1 = (void *)param_2[3];
  if (lVar2 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,pvVar1,lVar2 * 2);
  }
  (**(code **)(*param_1 + 0x128))(param_1,&local_68);
  pvVar1 = local_58;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    local_90 = 0;
    local_88 = local_68;
    uStack_84 = uStack_64;
    uStack_80 = uStack_60;
    uStack_7c = uStack_5c;
    local_78 = (void *)0x0;
    lVar2 = (longlong)local_50;
    local_70 = local_50;
    if (lVar2 == 0) {
      local_6c = 0;
    }
    else {
      FUN_1446dd670(&local_78,local_50,0);
      memcpy(local_78,pvVar1,lVar2 * 2);
    }
    *param_2 = local_90;
    *(undefined4 *)(param_2 + 1) = local_88;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_84;
    *(undefined4 *)(param_2 + 2) = uStack_80;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_7c;
    if (&local_90 == param_2) {
      if (local_78 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_2[3] != 0) {
        FUN_1400020a8();
      }
      param_2[3] = local_78;
      local_78 = (void *)0x0;
      *(int *)(param_2 + 4) = local_70;
      *(undefined4 *)((longlong)param_2 + 0x24) = local_6c;
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8(local_58);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14760e822 FUN_14760e822 body=22 status=ok
// SIG undefined FUN_14760e822(void)

undefined8 FUN_14760e822(undefined8 param_1)

{
  FUN_14572541c();
  return param_1;
}



// FUNCTION 14760e838 FUN_14760e838 body=22 status=ok
// SIG undefined FUN_14760e838(void)

undefined8 FUN_14760e838(undefined8 param_1)

{
  FUN_14572541c();
  return param_1;
}



// FUNCTION 14760e84e FUN_14760e84e body=38 status=ok
// SIG undefined FUN_14760e84e(void)

undefined8 FUN_14760e84e(undefined8 param_1,int param_2)

{
  FUN_144a7fc42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14760e874 FUN_14760e874 body=32 status=ok
// SIG undefined FUN_14760e874(void)

undefined8 FUN_14760e874(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FEventParameterReader");
  return param_2;
}



// FUNCTION 14760e894 FUN_14760e894 body=96 status=ok
// SIG undefined FUN_14760e894(void)

void FUN_14760e894(longlong param_1,void *param_2,size_t param_3)

{
  if ((param_3 != 0) && ((*(byte *)(param_1 + 0x29) & 2) == 0)) {
    if ((longlong)(int)(*(longlong **)(param_1 + 0x98))[1] <
        (longlong)(param_3 + *(longlong *)(param_1 + 0x90))) {
      FUN_14572541c(param_1);
      return;
    }
    memcpy(param_2,(void *)((longlong)(int)*(longlong *)(param_1 + 0x90) +
                           **(longlong **)(param_1 + 0x98)),param_3);
    *(longlong *)(param_1 + 0x90) = *(longlong *)(param_1 + 0x90) + param_3;
  }
  return;
}



// FUNCTION 14760e8f4 FUN_14760e8f4 body=59 status=ok
// SIG undefined FUN_14760e8f4(void)

undefined8 * FUN_14760e8f4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c4550;
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



// FUNCTION 14760e930 FUN_14760e930 body=78 status=ok
// SIG undefined FUN_14760e930(void)

undefined8 FUN_14760e930(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14760e980();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760e980 FUN_14760e980 body=308 status=ok
// SIG undefined FUN_14760e980(void)

undefined2 * FUN_14760e980(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_80;
  undefined4 local_78;
  undefined2 local_70;
  undefined8 local_68;
  char local_59;
  undefined1 local_58 [16];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_59 = '\0';
  FUN_1463498c0(param_1,param_2,param_4,&local_59);
  local_48 = 0;
  local_40 = 0x200000000;
  local_68 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),local_59 * '\x02' + '\x01',param_4);
  FUN_140560464(param_3,&local_80,param_4);
  uVar2 = local_78;
  lVar1 = local_80;
  if (local_80 == 0) {
    local_80 = 0;
  }
  else {
    FUN_140b5f80c(param_1 + 0x10,local_80,local_78);
    FUN_1462175bc(param_1 + 0x28,lVar1,uVar2);
  }
  local_88 = local_78;
  local_84 = 1;
  local_90 = local_80;
  FUN_14163869e(local_58,&local_90,&local_68);
  *param_2 = local_70;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760eab6 FUN_14760eab6 body=59 status=ok
// SIG undefined FUN_14760eab6(void)

undefined8 * FUN_14760eab6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c4570;
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



// FUNCTION 14760eaf2 FUN_14760eaf2 body=78 status=ok
// SIG undefined FUN_14760eaf2(void)

undefined8 FUN_14760eaf2(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14760ebd0();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760eb42 FUN_14760eb42 body=69 status=ok
// SIG undefined FUN_14760eb42(void)

void FUN_14760eb42(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 8));
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 0x10));
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 0x28));
  if (*(char *)(param_1 + 0x40) == '\x01') {
    *param_4 = 1;
  }
  return;
}



// FUNCTION 14760eb88 FUN_14760eb88 body=71 status=ok
// SIG undefined FUN_14760eb88(void)

void FUN_14760eb88(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_3;
  if (lVar1 != 0) {
    lVar2 = param_3[1];
    FUN_141286b5e(param_1 + 0x10,lVar1,(int)lVar2);
    FUN_140e3860a(param_1 + 0x28,lVar1,(int)lVar2);
    return;
  }
  return;
}



// FUNCTION 14760ebd0 FUN_14760ebd0 body=309 status=ok
// SIG undefined FUN_14760ebd0(void)

undefined2 * FUN_14760ebd0(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_80;
  undefined4 local_78;
  undefined2 local_70;
  undefined8 local_68;
  char local_59;
  undefined1 local_58 [16];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_59 = '\0';
  FUN_14760eb42(param_1,param_2,param_4,&local_59);
  local_48 = 0;
  local_40 = 0x200000000;
  local_68 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),local_59 * '\x02' + '\x01',param_4);
  FUN_140560464(param_3,&local_80,param_4);
  uVar2 = local_78;
  lVar1 = local_80;
  if (local_80 == 0) {
    local_80 = 0;
  }
  else {
    FUN_141286b5e(param_1 + 0x10,local_80,local_78);
    FUN_140e3860a(param_1 + 0x28,lVar1,uVar2);
  }
  local_88 = local_78;
  local_84 = 1;
  local_90 = local_80;
  FUN_14163869e(local_58,&local_90,&local_68);
  *param_2 = local_70;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760ed06 FUN_14760ed06 body=49 status=ok
// SIG undefined FUN_14760ed06(void)

undefined8 * FUN_14760ed06(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c4590;
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14760ed38 FUN_14760ed38 body=78 status=ok
// SIG undefined FUN_14760ed38(void)

undefined8 FUN_14760ed38(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14760edd8();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760ed88 FUN_14760ed88 body=57 status=ok
// SIG undefined FUN_14760ed88(void)

void FUN_14760ed88(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 8));
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 0x10));
  if (*(char *)(param_1 + 0x28) == '\x01') {
    *param_4 = 1;
  }
  return;
}



// FUNCTION 14760edd8 FUN_14760edd8 body=281 status=ok
// SIG undefined FUN_14760edd8(void)

undefined2 * FUN_14760edd8(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  undefined4 local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 8));
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 0x10));
  local_40 = 0;
  local_38 = 0x200000000;
  local_58 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x28) * '\x02' + '\x01',param_4
               );
  FUN_140560464(param_3,&local_70,param_4);
  if (local_70 == 0) {
    local_70 = 0;
  }
  else {
    FUN_141286b5e(param_1 + 0x10,local_70,local_68);
  }
  local_78 = local_68;
  local_74 = 1;
  local_80 = local_70;
  FUN_14163869e(local_50,&local_80,&local_58);
  *param_2 = local_60;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760eef2 FUN_14760eef2 body=49 status=ok
// SIG undefined FUN_14760eef2(void)

undefined8 * FUN_14760eef2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c4610;
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14760ef24 FUN_14760ef24 body=78 status=ok
// SIG undefined FUN_14760ef24(void)

undefined8 FUN_14760ef24(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14760efb2();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760ef74 FUN_14760ef74 body=40 status=ok
// SIG undefined FUN_14760ef74(void)

void FUN_14760ef74(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 8));
  if (*(char *)(param_1 + 0x20) == '\x01') {
    *param_4 = 1;
  }
  return;
}



// FUNCTION 14760efb2 FUN_14760efb2 body=269 status=ok
// SIG undefined FUN_14760efb2(void)

undefined2 * FUN_14760efb2(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  undefined4 local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 8));
  local_40 = 0;
  local_38 = 0x200000000;
  local_58 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x20) * '\x02' + '\x01',param_4
               );
  FUN_140560464(param_3,&local_70,param_4);
  if (local_70 == 0) {
    local_70 = 0;
  }
  else {
    FUN_14760f0c0(param_1 + 8,local_70,local_68);
  }
  local_78 = local_68;
  local_74 = 1;
  local_80 = local_70;
  FUN_14163869e(local_50,&local_80,&local_58);
  *param_2 = local_60;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760f0c0 FUN_14760f0c0 body=184 status=ok
// SIG undefined FUN_14760f0c0(void)

void FUN_14760f0c0(short *param_1,longlong param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar5 = *(longlong **)(param_2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar5 + 0x1e) == *param_1) goto LAB_14760f0f5;
      plVar5 = plVar5 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  plVar5 = (longlong *)0x0;
LAB_14760f0f5:
  iVar2 = *(int *)(param_2 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar5 + 1));
  }
  LOCK();
  *(int *)(plVar5 + 3) = (int)plVar5[3] + 1;
  UNLOCK();
  lVar3 = *plVar5;
  bVar1 = *(byte *)((longlong)plVar5 + 0x1c);
  lVar4 = *(longlong *)(param_1 + 4);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_1 + 4);
    }
  }
  *(longlong *)(lVar3 + (longlong)param_3 * (ulonglong)bVar1) = lVar4;
  if ((char)param_1[8] == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 3) = (int)plVar5[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014760f15a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar5 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14760f178 FUN_14760f178 body=49 status=ok
// SIG undefined FUN_14760f178(void)

undefined8 * FUN_14760f178(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c4630;
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14760f1aa FUN_14760f1aa body=78 status=ok
// SIG undefined FUN_14760f1aa(void)

undefined8 FUN_14760f1aa(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14760f24a();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760f1fa FUN_14760f1fa body=57 status=ok
// SIG undefined FUN_14760f1fa(void)

void FUN_14760f1fa(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 8));
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 0x10));
  if (*(char *)(param_1 + 0x28) == '\x01') {
    *param_4 = 1;
  }
  return;
}



// FUNCTION 14760f24a FUN_14760f24a body=281 status=ok
// SIG undefined FUN_14760f24a(void)

undefined2 * FUN_14760f24a(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  undefined4 local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 8));
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 0x10));
  local_40 = 0;
  local_38 = 0x200000000;
  local_58 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x28) * '\x02' + '\x01',param_4
               );
  FUN_140560464(param_3,&local_70,param_4);
  if (local_70 == 0) {
    local_70 = 0;
  }
  else {
    FUN_145afed0e(param_1 + 0x10,local_70,local_68);
  }
  local_78 = local_68;
  local_74 = 1;
  local_80 = local_70;
  FUN_14163869e(local_50,&local_80,&local_58);
  *param_2 = local_60;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760f3a4 FUN_14760f3a4 body=78 status=ok
// SIG undefined FUN_14760f3a4(void)

undefined8 FUN_14760f3a4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_14753b184();
      lVar1 = lVar1 + 0x110;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14760f41a FUN_14760f41a body=59 status=ok
// SIG undefined FUN_14760f41a(void)

undefined8 FUN_14760f41a(longlong *param_1)

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



// FUNCTION 14760f466 FUN_14760f466 body=39 status=ok
// SIG undefined FUN_14760f466(void)

void FUN_14760f466(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x110) == '\x01') {
    FUN_140bb7e7c(param_2 + 8);
    *(undefined1 *)(param_2 + 0x110) = 0;
  }
  return;
}



// FUNCTION 14760f50e FUN_14760f50e body=78 status=ok
// SIG undefined FUN_14760f50e(void)

undefined8 FUN_14760f50e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_14753be88();
      lVar1 = lVar1 + 0x118;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14760f584 FUN_14760f584 body=59 status=ok
// SIG undefined FUN_14760f584(void)

undefined8 FUN_14760f584(longlong *param_1)

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



// FUNCTION 14760f5d0 FUN_14760f5d0 body=39 status=ok
// SIG undefined FUN_14760f5d0(void)

void FUN_14760f5d0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x118) == '\x01') {
    FUN_1404dbc70(param_2 + 8);
    *(undefined1 *)(param_2 + 0x118) = 0;
  }
  return;
}



// FUNCTION 14760f648 FUN_14760f648 body=44 status=ok
// SIG undefined FUN_14760f648(void)

void FUN_14760f648(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1406ed278(param_2 + 1);
  FUN_1406ed278(param_2 + 0x23);
  return;
}



// FUNCTION 14760f674 FUN_14760f674 body=44 status=ok
// SIG undefined FUN_14760f674(void)

void FUN_14760f674(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1406ed278(param_2 + 1);
  FUN_1406ed278(param_2 + 0x23);
  return;
}



// FUNCTION 14760f6a0 FUN_14760f6a0 body=37 status=ok
// SIG undefined FUN_14760f6a0(void)

void FUN_14760f6a0(undefined8 param_1,longlong param_2)

{
  FUN_1404dbc70(param_2 + 0x118);
  FUN_1404dbc70(param_2 + 8);
  return;
}



// FUNCTION 14760f6dc FUN_14760f6dc body=121 status=ok
// SIG undefined FUN_14760f6dc(void)

undefined8 FUN_14760f6dc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_14753be88();
      FUN_14753be88(param_2 + lVar1 + 0x118,param_3 + lVar1 + 0x118);
      lVar1 = lVar1 + 0x228;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14760f77e FUN_14760f77e body=59 status=ok
// SIG undefined FUN_14760f77e(void)

undefined8 FUN_14760f77e(longlong *param_1)

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



// FUNCTION 14760f7ca FUN_14760f7ca body=51 status=ok
// SIG undefined FUN_14760f7ca(void)

void FUN_14760f7ca(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x228) == '\x01') {
    FUN_1404dbc70(param_2 + 0x118);
    FUN_1404dbc70(param_2 + 8);
    *(undefined1 *)(param_2 + 0x228) = 0;
  }
  return;
}



// FUNCTION 14760f84e FUN_14760f84e body=56 status=ok
// SIG undefined FUN_14760f84e(void)

void FUN_14760f84e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1406ed278(param_2 + 1);
  FUN_1406ed278(param_2 + 0x23);
  FUN_1406ed278(param_2 + 0x45);
  return;
}



// FUNCTION 14760f886 FUN_14760f886 body=56 status=ok
// SIG undefined FUN_14760f886(void)

void FUN_14760f886(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1406ed278(param_2 + 1);
  FUN_1406ed278(param_2 + 0x23);
  FUN_1406ed278(param_2 + 0x45);
  return;
}



// FUNCTION 14760f8be FUN_14760f8be body=49 status=ok
// SIG undefined FUN_14760f8be(void)

void FUN_14760f8be(undefined8 param_1,longlong param_2)

{
  FUN_1404dbc70(param_2 + 0x228);
  FUN_1404dbc70(param_2 + 0x118);
  FUN_1404dbc70(param_2 + 8);
  return;
}



// FUNCTION 14760f906 FUN_14760f906 body=141 status=ok
// SIG undefined FUN_14760f906(void)

undefined8 FUN_14760f906(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_14753be88();
      FUN_14753be88(param_2 + lVar1 + 0x118,param_3 + lVar1 + 0x118);
      FUN_14753be88(param_2 + lVar1 + 0x228,param_3 + lVar1 + 0x228);
      lVar1 = lVar1 + 0x338;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14760f9bc FUN_14760f9bc body=59 status=ok
// SIG undefined FUN_14760f9bc(void)

undefined8 FUN_14760f9bc(longlong *param_1)

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



// FUNCTION 14760fa60 FUN_14760fa60 body=63 status=ok
// SIG undefined FUN_14760fa60(void)

void FUN_14760fa60(longlong param_1)

{
  if (*(char *)(param_1 + 0x338) == '\x01') {
    FUN_1404dbc70(param_1 + 0x228);
    FUN_1404dbc70(param_1 + 0x118);
    FUN_1404dbc70(param_1 + 8);
    *(undefined1 *)(param_1 + 0x338) = 0;
  }
  return;
}



// FUNCTION 14760fab0 FUN_14760fab0 body=61 status=ok
// SIG undefined FUN_14760fab0(void)

void FUN_14760fab0(undefined8 param_1,longlong param_2)

{
  FUN_1404dbc70(param_2 + 0x338);
  FUN_1404dbc70(param_2 + 0x228);
  FUN_1404dbc70(param_2 + 0x118);
  FUN_1404dbc70(param_2 + 8);
  return;
}



// FUNCTION 14760fb04 FUN_14760fb04 body=63 status=ok
// SIG undefined FUN_14760fb04(void)

undefined1 FUN_14760fb04(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1475ad4c4(param_2,param_3);
    param_3 = param_3 + 0x448;
    param_2 = param_2 + 0x448;
  }
  return 1;
}



// FUNCTION 14760fb6c FUN_14760fb6c body=59 status=ok
// SIG undefined FUN_14760fb6c(void)

undefined8 FUN_14760fb6c(longlong *param_1)

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



// FUNCTION 14760fc10 FUN_14760fc10 body=75 status=ok
// SIG undefined FUN_14760fc10(void)

void FUN_14760fc10(longlong param_1)

{
  if (*(char *)(param_1 + 0x448) == '\x01') {
    FUN_1404dbc70(param_1 + 0x338);
    FUN_1404dbc70(param_1 + 0x228);
    FUN_1404dbc70(param_1 + 0x118);
    FUN_1404dbc70(param_1 + 8);
    *(undefined1 *)(param_1 + 0x448) = 0;
  }
  return;
}



// FUNCTION 14760fc8a FUN_14760fc8a body=63 status=ok
// SIG undefined FUN_14760fc8a(void)

undefined1 FUN_14760fc8a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14760fe28(param_2,param_3);
    param_3 = param_3 + 0x998;
    param_2 = param_2 + 0x998;
  }
  return 1;
}



// FUNCTION 14760fcf2 FUN_14760fcf2 body=59 status=ok
// SIG undefined FUN_14760fcf2(void)

undefined8 FUN_14760fcf2(longlong *param_1)

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



// FUNCTION 14760fd3e FUN_14760fd3e body=40 status=ok
// SIG undefined FUN_14760fd3e(void)

void FUN_14760fd3e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x998) == '\x01') {
    FUN_1475b1918(param_2);
    *(undefined1 *)(param_2 + 0x998) = 0;
  }
  return;
}



// FUNCTION 14760fdb4 FUN_14760fdb4 body=116 status=ok
// SIG undefined FUN_14760fdb4(void)

undefined8 * FUN_14760fdb4(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  lVar1 = 8;
  do {
    FUN_1406ed278((longlong)param_1 + lVar1);
    lVar1 = lVar1 + 0x110;
  } while (lVar1 != 0x338);
  lVar1 = 0x338;
  do {
    FUN_1406ed278((longlong)param_1 + lVar1);
    lVar1 = lVar1 + 0x110;
  } while (lVar1 != 0x668);
  lVar1 = 0x668;
  do {
    FUN_1406ed278((longlong)param_1 + lVar1);
    lVar1 = lVar1 + 0x110;
  } while (lVar1 != 0x998);
  return param_1;
}



// FUNCTION 14760fe28 FUN_14760fe28 body=132 status=ok
// SIG undefined FUN_14760fe28(void)

undefined8 * FUN_14760fe28(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  lVar1 = 8;
  do {
    FUN_14753be88((longlong)param_1 + lVar1,(longlong)param_2 + lVar1);
    lVar1 = lVar1 + 0x110;
  } while (lVar1 != 0x338);
  lVar1 = 0x338;
  do {
    FUN_14753be88((longlong)param_1 + lVar1,(longlong)param_2 + lVar1);
    lVar1 = lVar1 + 0x110;
  } while (lVar1 != 0x668);
  lVar1 = 0x668;
  do {
    FUN_14753be88((longlong)param_1 + lVar1,(longlong)param_2 + lVar1);
    lVar1 = lVar1 + 0x110;
  } while (lVar1 != 0x998);
  return param_1;
}



// FUNCTION 14760feae FUN_14760feae body=74 status=ok
// SIG undefined FUN_14760feae(void)

undefined8 * FUN_14760feae(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c4e90;
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x24) != -1) {
    *(undefined8 *)((longlong)param_1 + 0x24) = 0xffffffff;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14760fef8 FUN_14760fef8 body=78 status=ok
// SIG undefined FUN_14760fef8(void)

undefined8 FUN_14760fef8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14760fff2();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760ff48 FUN_14760ff48 body=82 status=ok
// SIG undefined FUN_14760ff48(void)

void FUN_14760ff48(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_1476100fe(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x48) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14760ff9c FUN_14760ff9c body=85 status=ok
// SIG undefined FUN_14760ff9c(void)

void FUN_14760ff9c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = *param_3;
  if (lVar2 == 0) {
    return;
  }
  uVar1 = (undefined4)param_3[1];
  FUN_140659abc(param_1 + 8,lVar2,uVar1);
  FUN_1475d430e(param_1 + 0x20,lVar2,uVar1);
  FUN_14760a28e(param_1 + 0x30,lVar2,uVar1);
  return;
}



// FUNCTION 14760fff2 FUN_14760fff2 body=266 status=ok
// SIG undefined FUN_14760fff2(void)

undefined2 * FUN_14760fff2(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

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
  FUN_1476100fe(local_60,param_1 + 8);
  local_50 = 0;
  local_48 = 0x200000000;
  local_68 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x48) * '\x02' + '\x01',param_4
                ,local_60);
  FUN_140560464(param_3,&local_80,param_4);
  FUN_14760ff9c(param_1);
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



// FUNCTION 1476100fe FUN_1476100fe body=59 status=ok
// SIG undefined FUN_1476100fe(void)

void FUN_1476100fe(undefined8 *param_1,undefined2 *param_2)

{
  if (*(char *)(param_2 + 1) == '\x01') {
    FUN_140dba9e6(*param_1,*param_2);
  }
  FUN_140dba9e6(*param_1,param_2[0xc]);
  FUN_140dba9e6(*param_1,param_2[0x14]);
  return;
}



// FUNCTION 14761013a FUN_14761013a body=84 status=ok
// SIG undefined FUN_14761013a(void)

undefined8 * FUN_14761013a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c4eb0;
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x24) != -1) {
    *(undefined8 *)((longlong)param_1 + 0x24) = 0xffffffff;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14761018e FUN_14761018e body=78 status=ok
// SIG undefined FUN_14761018e(void)

undefined8 FUN_14761018e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14761028a();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476101de FUN_1476101de body=82 status=ok
// SIG undefined FUN_1476101de(void)

void FUN_1476101de(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_1476103c0(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x60) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147610232 FUN_147610232 body=86 status=ok
// SIG undefined FUN_147610232(void)

void FUN_147610232(longlong param_1,undefined8 param_2,longlong *param_3)

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
    FUN_14761041c(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14761028a FUN_14761028a body=308 status=ok
// SIG undefined FUN_14761028a(void)

undefined2 * FUN_14761028a(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

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
  FUN_1476103c0(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x60) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_14761041c(&local_78,param_1 + 8);
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



// FUNCTION 1476103c0 FUN_1476103c0 body=91 status=ok
// SIG undefined FUN_1476103c0(void)

void FUN_1476103c0(undefined8 *param_1,undefined2 *param_2)

{
  if (*(char *)(param_2 + 1) == '\x01') {
    FUN_140dba9e6(*param_1,*param_2);
  }
  FUN_140dba9e6(*param_1,param_2[0xc]);
  if (*(char *)(param_2 + 0x15) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x14]);
  }
  if (*(char *)(param_2 + 0x21) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x20]);
    return;
  }
  return;
}



// FUNCTION 14761041c FUN_14761041c body=84 status=ok
// SIG undefined FUN_14761041c(void)

void FUN_14761041c(undefined8 *param_1,longlong param_2)

{
  FUN_140659abc(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1475d430e(param_2 + 0x18,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x28,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x40,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 147610470 FUN_147610470 body=94 status=ok
// SIG undefined FUN_147610470(void)

undefined8 * FUN_147610470(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c4ed0;
  if (*(char *)(param_1 + 0xe) == '\x01') {
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x24) != -1) {
    *(undefined8 *)((longlong)param_1 + 0x24) = 0xffffffff;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476104ce FUN_1476104ce body=78 status=ok
// SIG undefined FUN_1476104ce(void)

undefined8 FUN_1476104ce(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1476105ca();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14761051e FUN_14761051e body=82 status=ok
// SIG undefined FUN_14761051e(void)

void FUN_14761051e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_147610700(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x78) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147610572 FUN_147610572 body=86 status=ok
// SIG undefined FUN_147610572(void)

void FUN_147610572(longlong param_1,undefined8 param_2,longlong *param_3)

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
    FUN_14761076e(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476105ca FUN_1476105ca body=308 status=ok
// SIG undefined FUN_1476105ca(void)

undefined2 * FUN_1476105ca(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

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
  FUN_147610700(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x78) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_14761076e(&local_78,param_1 + 8);
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



// FUNCTION 147610700 FUN_147610700 body=109 status=ok
// SIG undefined FUN_147610700(void)

void FUN_147610700(undefined8 *param_1,undefined2 *param_2)

{
  if (*(char *)(param_2 + 1) == '\x01') {
    FUN_140dba9e6(*param_1,*param_2);
  }
  FUN_140dba9e6(*param_1,param_2[0xc]);
  if (*(char *)(param_2 + 0x15) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x14]);
  }
  if (*(char *)(param_2 + 0x21) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x20]);
  }
  if (*(char *)(param_2 + 0x2d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x2c]);
    return;
  }
  return;
}



// FUNCTION 14761076e FUN_14761076e body=100 status=ok
// SIG undefined FUN_14761076e(void)

void FUN_14761076e(undefined8 *param_1,longlong param_2)

{
  FUN_140659abc(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1475d430e(param_2 + 0x18,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x28,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x40,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x58,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 1476107d2 FUN_1476107d2 body=110 status=ok
// SIG undefined FUN_1476107d2(void)

undefined8 * FUN_1476107d2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c4ef0;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  if (*(char *)(param_1 + 0xe) == '\x01') {
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x24) != -1) {
    *(undefined8 *)((longlong)param_1 + 0x24) = 0xffffffff;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147610840 FUN_147610840 body=78 status=ok
// SIG undefined FUN_147610840(void)

undefined8 FUN_147610840(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14761093e();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147610890 FUN_147610890 body=85 status=ok
// SIG undefined FUN_147610890(void)

void FUN_147610890(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_147610a76(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x90) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476108e6 FUN_1476108e6 body=86 status=ok
// SIG undefined FUN_1476108e6(void)

void FUN_1476108e6(longlong param_1,undefined8 param_2,longlong *param_3)

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
    FUN_147610af6(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14761093e FUN_14761093e body=311 status=ok
// SIG undefined FUN_14761093e(void)

undefined2 * FUN_14761093e(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

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
  FUN_147610a76(local_58,param_1 + 8);
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
    FUN_147610af6(&local_78,param_1 + 8);
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



// FUNCTION 147610a76 FUN_147610a76 body=127 status=ok
// SIG undefined FUN_147610a76(void)

void FUN_147610a76(undefined8 *param_1,undefined2 *param_2)

{
  if (*(char *)(param_2 + 1) == '\x01') {
    FUN_140dba9e6(*param_1,*param_2);
  }
  FUN_140dba9e6(*param_1,param_2[0xc]);
  if (*(char *)(param_2 + 0x15) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x14]);
  }
  if (*(char *)(param_2 + 0x21) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x20]);
  }
  if (*(char *)(param_2 + 0x2d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x2c]);
  }
  if (*(char *)(param_2 + 0x39) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x38]);
    return;
  }
  return;
}



// FUNCTION 147610af6 FUN_147610af6 body=116 status=ok
// SIG undefined FUN_147610af6(void)

void FUN_147610af6(undefined8 *param_1,longlong param_2)

{
  FUN_140659abc(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1475d430e(param_2 + 0x18,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x28,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x40,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x58,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x70,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 147610b6a FUN_147610b6a body=152 status=ok
// SIG undefined FUN_147610b6a(void)

void FUN_147610b6a(longlong param_1)

{
  if (*(char *)(param_1 + 0xf8) == '\x01') {
    *(undefined1 *)(param_1 + 0xf8) = 0;
  }
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    *(undefined1 *)(param_1 + 0xe0) = 0;
  }
  if (*(char *)(param_1 + 200) == '\x01') {
    *(undefined1 *)(param_1 + 200) = 0;
  }
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  if (*(char *)(param_1 + 0x98) == '\x01') {
    *(undefined1 *)(param_1 + 0x98) = 0;
  }
  if (*(char *)(param_1 + 0x80) == '\x01') {
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  if (*(char *)(param_1 + 0x68) == '\x01') {
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  if (*(char *)(param_1 + 0x50) == '\x01') {
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  if (*(char *)(param_1 + 0x38) == '\x01') {
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  if (*(int *)(param_1 + 0x1c) != -1) {
    *(undefined8 *)(param_1 + 0x1c) = 0xffffffff;
  }
  if (*(char *)(param_1 + 0x14) == '\x01') {
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return;
}



// FUNCTION 147610c02 FUN_147610c02 body=52 status=ok
// SIG undefined FUN_147610c02(void)

undefined8 * FUN_147610c02(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c4f10;
  FUN_147610b6a(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147610c36 FUN_147610c36 body=78 status=ok
// SIG undefined FUN_147610c36(void)

undefined8 FUN_147610c36(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147610d34();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147610c86 FUN_147610c86 body=85 status=ok
// SIG undefined FUN_147610c86(void)

void FUN_147610c86(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_147610e6c(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x108) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147610cdc FUN_147610cdc body=86 status=ok
// SIG undefined FUN_147610cdc(void)

void FUN_147610cdc(longlong param_1,undefined8 param_2,longlong *param_3)

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
    FUN_147610f64(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147610d34 FUN_147610d34 body=311 status=ok
// SIG undefined FUN_147610d34(void)

undefined2 * FUN_147610d34(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

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
  FUN_147610e6c(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x108) * '\x02' + '\x01',
                param_4,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_147610f64(&local_78,param_1 + 8);
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



// FUNCTION 147610e6c FUN_147610e6c body=247 status=ok
// SIG undefined FUN_147610e6c(void)

void FUN_147610e6c(undefined8 *param_1,undefined2 *param_2)

{
  if (*(char *)(param_2 + 1) == '\x01') {
    FUN_140dba9e6(*param_1,*param_2);
  }
  FUN_140dba9e6(*param_1,param_2[0xc]);
  if (*(char *)(param_2 + 0x15) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x14]);
  }
  if (*(char *)(param_2 + 0x21) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x20]);
  }
  if (*(char *)(param_2 + 0x2d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x2c]);
  }
  if (*(char *)(param_2 + 0x39) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x38]);
  }
  if (*(char *)(param_2 + 0x45) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x44]);
  }
  if (*(char *)(param_2 + 0x51) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x50]);
  }
  if (*(char *)(param_2 + 0x5d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x5c]);
  }
  if (*(char *)(param_2 + 0x69) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x68]);
  }
  if (*(char *)(param_2 + 0x75) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x74]);
    return;
  }
  return;
}



// FUNCTION 147610f64 FUN_147610f64 body=211 status=ok
// SIG undefined FUN_147610f64(void)

void FUN_147610f64(undefined8 *param_1,longlong param_2)

{
  FUN_140659abc(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1475d430e(param_2 + 0x18,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x28,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x40,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x58,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x70,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x88,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0xa0,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0xb8,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0xd0,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0xe8,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 147611038 FUN_147611038 body=136 status=ok
// SIG undefined FUN_147611038(void)

void FUN_147611038(longlong param_1)

{
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    *(undefined1 *)(param_1 + 0xe0) = 0;
  }
  if (*(char *)(param_1 + 200) == '\x01') {
    *(undefined1 *)(param_1 + 200) = 0;
  }
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  if (*(char *)(param_1 + 0x98) == '\x01') {
    *(undefined1 *)(param_1 + 0x98) = 0;
  }
  if (*(char *)(param_1 + 0x80) == '\x01') {
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  if (*(char *)(param_1 + 0x68) == '\x01') {
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  if (*(char *)(param_1 + 0x50) == '\x01') {
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  if (*(char *)(param_1 + 0x38) == '\x01') {
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  if (*(int *)(param_1 + 0x1c) != -1) {
    *(undefined8 *)(param_1 + 0x1c) = 0xffffffff;
  }
  if (*(char *)(param_1 + 0x14) == '\x01') {
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return;
}



// FUNCTION 1476110c0 FUN_1476110c0 body=52 status=ok
// SIG undefined FUN_1476110c0(void)

undefined8 * FUN_1476110c0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c4f30;
  FUN_147611038(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476110f4 FUN_1476110f4 body=78 status=ok
// SIG undefined FUN_1476110f4(void)

undefined8 FUN_1476110f4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1476111f2();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147611144 FUN_147611144 body=85 status=ok
// SIG undefined FUN_147611144(void)

void FUN_147611144(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_14761132a(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14761119a FUN_14761119a body=86 status=ok
// SIG undefined FUN_14761119a(void)

void FUN_14761119a(longlong param_1,undefined8 param_2,longlong *param_3)

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
    FUN_14761140a(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476111f2 FUN_1476111f2 body=311 status=ok
// SIG undefined FUN_1476111f2(void)

undefined2 * FUN_1476111f2(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

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
  FUN_14761132a(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0xf0) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_14761140a(&local_78,param_1 + 8);
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



// FUNCTION 14761132a FUN_14761132a body=223 status=ok
// SIG undefined FUN_14761132a(void)

void FUN_14761132a(undefined8 *param_1,undefined2 *param_2)

{
  if (*(char *)(param_2 + 1) == '\x01') {
    FUN_140dba9e6(*param_1,*param_2);
  }
  FUN_140dba9e6(*param_1,param_2[0xc]);
  if (*(char *)(param_2 + 0x15) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x14]);
  }
  if (*(char *)(param_2 + 0x21) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x20]);
  }
  if (*(char *)(param_2 + 0x2d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x2c]);
  }
  if (*(char *)(param_2 + 0x39) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x38]);
  }
  if (*(char *)(param_2 + 0x45) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x44]);
  }
  if (*(char *)(param_2 + 0x51) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x50]);
  }
  if (*(char *)(param_2 + 0x5d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x5c]);
  }
  if (*(char *)(param_2 + 0x69) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x68]);
    return;
  }
  return;
}



// FUNCTION 14761140a FUN_14761140a body=192 status=ok
// SIG undefined FUN_14761140a(void)

void FUN_14761140a(undefined8 *param_1,longlong param_2)

{
  FUN_140659abc(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_1475d430e(param_2 + 0x18,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x28,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x40,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x58,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x70,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x88,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0xa0,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0xb8,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0xd0,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 1476114ca FUN_1476114ca body=120 status=ok
// SIG undefined FUN_1476114ca(void)

void FUN_1476114ca(longlong param_1)

{
  if (*(char *)(param_1 + 200) == '\x01') {
    *(undefined1 *)(param_1 + 200) = 0;
  }
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  if (*(char *)(param_1 + 0x98) == '\x01') {
    *(undefined1 *)(param_1 + 0x98) = 0;
  }
  if (*(char *)(param_1 + 0x80) == '\x01') {
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  if (*(char *)(param_1 + 0x68) == '\x01') {
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  if (*(char *)(param_1 + 0x50) == '\x01') {
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  if (*(char *)(param_1 + 0x38) == '\x01') {
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  if (*(int *)(param_1 + 0x1c) != -1) {
    *(undefined8 *)(param_1 + 0x1c) = 0xffffffff;
  }
  if (*(char *)(param_1 + 0x14) == '\x01') {
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return;
}



// FUNCTION 147611542 FUN_147611542 body=52 status=ok
// SIG undefined FUN_147611542(void)

undefined8 * FUN_147611542(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c4f50;
  FUN_1476114ca(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147611576 FUN_147611576 body=78 status=ok
// SIG undefined FUN_147611576(void)

undefined8 FUN_147611576(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147611674();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476115c6 FUN_1476115c6 body=85 status=ok
// SIG undefined FUN_1476115c6(void)

void FUN_1476115c6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_1476117ac(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


