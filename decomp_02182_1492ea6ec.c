// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1492ea6ec FUN_1492ea6ec body=106 status=ok
// SIG undefined FUN_1492ea6ec(void)

void FUN_1492ea6ec(undefined8 param_1,char param_2)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = &DAT_149e01e5c;
  if (param_2 != '\0') {
    psVar2 = &DAT_14bc20a9a;
  }
  sVar1 = *psVar2;
  while (sVar1 != 0) {
    psVar2 = psVar2 + 1;
    if (param_2 != '\0') {
      FUN_144afd20c(param_1,0x20,0x2d);
    }
    FUN_144afd20c(param_1,sVar1,0x5f);
    sVar1 = *psVar2;
  }
  return;
}



// FUNCTION 1492ea756 FUN_1492ea756 body=99 status=ok
// SIG undefined FUN_1492ea756(void)

undefined8 * FUN_1492ea756(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

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
  FUN_1492ea6ec(param_1,param_3);
  return param_1;
}



// FUNCTION 1492ea7ce FUN_1492ea7ce body=163 status=ok
// SIG undefined FUN_1492ea7ce(void)

void FUN_1492ea7ce(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_1492ea872(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ea872 FUN_1492ea872 body=144 status=ok
// SIG undefined FUN_1492ea872(void)

undefined8 FUN_1492ea872(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  
  if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar2 = param_1 + 0xb0;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xb8);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0xc0) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        bVar5 = *(longlong *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar4 * 0x18) == param_2;
        uVar3 = CONCAT71((int7)(int3)((uint)iVar4 >> 8),bVar5);
        if (bVar5) {
          return uVar3;
        }
        iVar4 = *(int *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar4 * 0x18 + 0x10);
      } while (iVar4 != -1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1492ea902 FUN_1492ea902 body=227 status=ok
// SIG undefined FUN_1492ea902(void)

void FUN_1492ea902(longlong param_1,longlong param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_28 = local_30;
  uVar1 = (uint)((ulonglong)local_30 >> 0x10);
  uVar3 = (uint)local_30 & 0xffff;
  puVar2 = (undefined4 *)
           FUN_149301654(param_1 + 0x78,
                         ((uint)local_30 << 0x10 | uVar3) + (int)((ulonglong)local_30 >> 0x20) +
                         (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4));
  *(undefined1 *)(param_3 + 1) = *(undefined1 *)(puVar2 + 1);
  *param_3 = *puVar2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ea9e6 FUN_1492ea9e6 body=160 status=ok
// SIG undefined FUN_1492ea9e6(void)

void FUN_1492ea9e6(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x318))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492eaa88 FUN_1492eaa88 body=245 status=ok
// SIG undefined FUN_1492eaa88(void)

void FUN_1492eaa88(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58 [5];
  
  local_58[4] = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = FUN_14477b072(param_1,DAT_14cc0bc38);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[0] = 0;
    local_58[1] = 0;
    local_60 = param_2;
    FUN_1492eab8e(local_58,param_3);
    FUN_144a787a6(local_58 + 2,param_4);
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_60);
    if (local_58[2] != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_58[4] ^ (ulonglong)auStack_88);
  }
  if ((local_58[4] ^ (ulonglong)auStack_88) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001492eab04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2f0))(param_1,param_2,param_3,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492eab8e FUN_1492eab8e body=88 status=ok
// SIG undefined FUN_1492eab8e(void)

undefined8 * FUN_1492eab8e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14930159c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1492eabe6 FUN_1492eabe6 body=377 status=ok
// SIG undefined FUN_1492eabe6(void)

void FUN_1492eabe6(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [6];
  
  local_48[5] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[4] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 4);
  }
  local_48[2] = 0;
  local_48[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  plVar1 = local_48 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
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
  (**(code **)(*param_1 + 0x2f0))(param_1,local_48[4],plVar1,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[5] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ead60 FUN_1492ead60 body=231 status=ok
// SIG undefined FUN_1492ead60(void)

void FUN_1492ead60(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60 [3];
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = FUN_14477b072(param_1,DAT_14cc0bc48);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_60[0] = 0;
    local_60[1] = 0;
    local_68 = param_2;
    FUN_144a787a6(local_60,param_3);
    local_48 = param_5;
    local_60[2] = param_4;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_68);
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001492eae4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x308))(param_1,param_2,param_3,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492eae5e FUN_1492eae5e body=437 status=ok
// SIG undefined FUN_1492eae5e(void)

void FUN_1492eae5e(longlong *param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined1 local_58;
  int local_44;
  undefined8 local_40;
  longlong local_38 [3];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_44 != 0;
  (**(code **)(*param_1 + 0x308))(param_1,local_20,local_38,local_40);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492eb014 FUN_1492eb014 body=231 status=ok
// SIG undefined FUN_1492eb014(void)

void FUN_1492eb014(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60 [3];
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = FUN_14477b072(param_1,DAT_14cc0bc58);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_60[0] = 0;
    local_60[1] = 0;
    local_68 = param_2;
    FUN_144a787a6(local_60,param_3);
    local_48 = param_5;
    local_60[2] = param_4;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_68);
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001492eb103. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2f8))(param_1,param_2,param_3,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492eb112 FUN_1492eb112 body=437 status=ok
// SIG undefined FUN_1492eb112(void)

void FUN_1492eb112(longlong *param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined1 local_58;
  int local_44;
  undefined8 local_40;
  longlong local_38 [3];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_44 != 0;
  (**(code **)(*param_1 + 0x2f8))(param_1,local_20,local_38,local_40);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492eb2c8 FUN_1492eb2c8 body=231 status=ok
// SIG undefined FUN_1492eb2c8(void)

void FUN_1492eb2c8(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60 [3];
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = FUN_14477b072(param_1,DAT_14cc0bc68);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_60[0] = 0;
    local_60[1] = 0;
    local_68 = param_2;
    FUN_144a787a6(local_60,param_3);
    local_48 = param_5;
    local_60[2] = param_4;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_68);
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001492eb3b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492eb3c6 FUN_1492eb3c6 body=437 status=ok
// SIG undefined FUN_1492eb3c6(void)

void FUN_1492eb3c6(longlong *param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined1 local_58;
  int local_44;
  undefined8 local_40;
  longlong local_38 [3];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_44 != 0;
  (**(code **)(*param_1 + 0x300))(param_1,local_20,local_38,local_40);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492eb57c FUN_1492eb57c body=143 status=ok
// SIG undefined FUN_1492eb57c(void)

void FUN_1492eb57c(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2e8))(param_1,&local_28);
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



// FUNCTION 1492eb60c FUN_1492eb60c body=158 status=ok
// SIG undefined FUN_1492eb60c(void)

void FUN_1492eb60c(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_14477b072(param_1,DAT_14cc0bc88);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_38 = param_2;
    local_30 = param_3;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001492eb6ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x310))(param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492eb6b6 FUN_1492eb6b6 body=241 status=ok
// SIG undefined FUN_1492eb6b6(void)

void FUN_1492eb6b6(longlong *param_1,longlong param_2)

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
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x310))(param_1,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492eb7b1 FUN_1492eb7b1 body=229 status=ok
// SIG undefined FUN_1492eb7b1(void)

undefined8 FUN_1492eb7b1(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  longlong local_60 [2];
  longlong local_50 [2];
  longlong local_40 [2];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50[0] = *(longlong *)(param_3 + 0x18);
  local_30 = param_2;
  FUN_1400021e4(local_50,local_40);
  FUN_1400021e4(&local_30,local_70);
  FUN_140ba7826(local_60,L"Interchange_StackName__",local_70);
  FUN_144a882a8(local_50,local_60,L"__PipelineClassName_");
  FUN_1401c7f3e(param_1,local_50,local_40);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492eb898 FUN_1492eb898 body=108 status=ok
// SIG undefined FUN_1492eb898(void)

void FUN_1492eb898(void)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1492eb906();
  uVar1 = DAT_14c872ce0;
  FUN_140056680(local_28,&DAT_149dfb77a);
  FUN_140d6d8de(uVar1,0,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492eb906 FUN_1492eb906 body=1316 status=ok
// SIG undefined FUN_1492eb906(void)

void FUN_1492eb906(ulonglong param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  bool bVar14;
  bool bVar15;
  undefined1 auStack_908 [32];
  undefined8 *local_8e8;
  ulonglong local_8e0;
  ulonglong local_8d8;
  undefined8 local_8d0;
  undefined8 local_8c8;
  longlong local_8c0;
  undefined2 *local_8b8;
  undefined8 uStack_8b0;
  undefined8 local_8a0;
  undefined8 local_898;
  longlong local_890;
  undefined2 *local_888;
  int local_880;
  undefined2 *local_878;
  int local_870;
  longlong local_868;
  undefined8 uStack_860;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_908;
  local_8c0 = *(longlong *)(param_1 + 0x10);
  plVar3 = *(longlong **)(local_8c0 + 0x70);
  local_8c8 = param_2;
  do {
    if (plVar3 == (longlong *)0x0) {
      if ((local_60 ^ (ulonglong)auStack_908) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    if ((*(uint *)(plVar3 + 7) & 0x2001) == 1) {
      FUN_1492eb7b1(&local_878,local_8c8,local_8c0);
      FUN_1400021e4(plVar3 + 4,&local_888);
      lVar11 = plVar3[4];
      FUN_1446f470e(&local_890,L"PropertiesStates",1);
      if (lVar11 != local_890) {
        FUN_14496b3f0(plVar3);
        if (*(longlong *)(*(longlong *)(local_8c0 + 0x40) + 0x110) == 0) {
          FUN_140aa6c08();
        }
        lVar11 = plVar3[1];
        lVar6 = FUN_144a810c6();
        if (*(ulonglong *)(lVar6 + 8) == 0) {
          bVar14 = lVar11 != 0;
          if (lVar11 != lVar6 && bVar14) {
            do {
              lVar11 = *(longlong *)(lVar11 + 0x30);
              bVar14 = lVar11 != 0;
              if (lVar11 == lVar6) break;
            } while (lVar11 != 0);
          }
        }
        else {
          bVar14 = (*(ulonglong *)(lVar11 + 0x18) & *(ulonglong *)(lVar6 + 8)) != 0;
        }
        lVar11 = plVar3[1];
        lVar6 = FUN_1446e6bbc();
        uVar4 = DAT_14c872ce0;
        if (*(ulonglong *)(lVar6 + 8) == 0) {
          bVar15 = lVar11 != 0;
          if (lVar11 != lVar6 && bVar15) {
            do {
              lVar11 = *(longlong *)(lVar11 + 0x30);
              bVar15 = lVar11 != 0;
              if (lVar11 == lVar6) break;
            } while (lVar11 != 0);
          }
          if (!bVar15) goto LAB_1492ebc4f;
        }
        else if ((*(ulonglong *)(lVar11 + 0x18) & *(ulonglong *)(lVar6 + 8)) == 0) {
LAB_1492ebc4f:
          if ((bVar14) && (lVar11 = (**(code **)(*plVar3 + 0x220))(plVar3,param_1,0), lVar11 != 0))
          {
            lVar6 = FUN_14117aa32();
            if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
              cVar5 = FUN_1468ff1d8(lVar11,param_1);
              if (cVar5 != '\0') {
                FUN_1492eb906(lVar11,local_8c8);
              }
              goto LAB_1492eb9c2;
            }
          }
          memset(&local_868,0,0x800);
          uVar12 = (ulonglong)*(uint *)(plVar3 + 6);
          if (0 < (int)*(uint *)(plVar3 + 6)) {
            uVar10 = 0;
            do {
              if ((int)uVar12 != 1) {
                FUN_1400021e4(plVar3 + 4,&local_8b8);
                puVar7 = &DAT_149dfb77a;
                if ((int)uStack_8b0 != 0) {
                  puVar7 = local_8b8;
                }
                FUN_141301ee6(&local_868,L"%s[%i]",puVar7,uVar10 & 0xffffffff);
                if (local_8b8 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                FUN_14020fad6(&local_888,&local_868);
              }
              local_8b8 = (undefined2 *)0x0;
              uStack_8b0 = 0;
              lVar6 = (longlong)*(int *)((longlong)plVar3 + 0x44) + param_1 +
                      (longlong)*(int *)((longlong)plVar3 + 0x34) * uVar10;
              lVar11 = lVar6;
              if (param_1 == 0) {
                lVar11 = 0;
              }
              local_8d8 = 0;
              local_8e0 = local_8e0 & 0xffffffff00000000;
              local_8e8 = (undefined8 *)param_1;
              FUN_14280c87e(plVar3,&local_8b8,lVar6,lVar11);
              puVar7 = &DAT_149dfb77a;
              if ((int)uStack_8b0 != 0) {
                puVar7 = local_8b8;
              }
              puVar13 = &DAT_149dfb77a;
              if (local_880 != 0) {
                puVar13 = local_888;
              }
              puVar8 = &DAT_149dfb77a;
              if (local_870 != 0) {
                puVar8 = local_878;
              }
              local_8e8 = &DAT_14c872aa8;
              FUN_1410abc14(DAT_14c872ce0,puVar8,puVar13,puVar7);
              if (local_8b8 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              uVar10 = uVar10 + 1;
              uVar12 = (ulonglong)(int)plVar3[6];
            } while ((longlong)uVar10 < (longlong)uVar12);
          }
          goto LAB_1492eb9c2;
        }
        puVar7 = &DAT_149dfb77a;
        if (local_880 != 0) {
          puVar7 = local_888;
        }
        FUN_1446f470e(&local_898,puVar7,1);
        puVar7 = &DAT_149dfb77a;
        if (local_870 != 0) {
          puVar7 = local_878;
        }
        FUN_14622b954(uVar4,puVar7,local_898,&DAT_14c872aa8);
        iVar2 = *(int *)((longlong)plVar3 + 0x44);
        bVar1 = *(byte *)(plVar3 + 0xe);
        (**(code **)(*(longlong *)plVar3[0xf] + 0x178))();
        if (0 < *(int *)(param_1 + 8 + (longlong)iVar2)) {
          puVar9 = (ulonglong *)((longlong)iVar2 + param_1);
          iVar2 = *(int *)(plVar3[0xf] + 0x34);
          lVar11 = 0;
          lVar6 = 0;
          do {
            local_868 = 0;
            uStack_860 = 0;
            if ((bVar1 & 1) == 0) {
              uVar12 = *puVar9;
            }
            else {
              uVar12 = *puVar9;
              if ((uVar12 & 1) != 0) {
                uVar12 = ((longlong)uVar12 >> 0x18) + (longlong)puVar9;
              }
            }
            local_8e8 = (undefined8 *)(uVar12 + lVar11);
            local_8d0 = 0;
            local_8d8 = local_8d8 & 0xffffffff00000000;
            local_8e0 = param_1;
            (**(code **)(*(longlong *)plVar3[0xf] + 0xf0))
                      ((longlong *)plVar3[0xf],&local_868,local_8e8,0);
            uVar4 = DAT_14c872ce0;
            puVar7 = &DAT_149dfb77a;
            if (local_880 != 0) {
              puVar7 = local_888;
            }
            FUN_1446f470e(&local_8a0,puVar7,1);
            puVar7 = &DAT_149dfb77a;
            if (local_870 != 0) {
              puVar7 = local_878;
            }
            local_8e8 = &DAT_14c872aa8;
            FUN_140d68b26(uVar4,puVar7,local_8a0);
            if (local_868 != 0) {
              FUN_1400020a8();
            }
            lVar6 = lVar6 + 1;
            lVar11 = lVar11 + iVar2;
          } while (lVar6 < (int)puVar9[1]);
        }
      }
LAB_1492eb9c2:
      if (local_888 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_878 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    plVar3 = (longlong *)plVar3[9];
  } while( true );
}



// FUNCTION 1492ebe2c FUN_1492ebe2c body=127 status=ok
// SIG undefined FUN_1492ebe2c(void)

void FUN_1492ebe2c(longlong param_1,byte *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  uVar1 = *(undefined4 *)(param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x11c) = uVar1;
  *(undefined4 *)(param_1 + 0x120) = uVar2;
  *(undefined4 *)(param_1 + 0x124) = uVar3;
  lVar4 = *(longlong *)(param_2 + 0x10);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_14689c22e();
      lVar4 = *(longlong *)(param_2 + 0x10);
    }
  }
  *(longlong *)(param_1 + 0x128) = lVar4;
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x18);
  FUN_14930045e(param_1 + 200,param_1 + 0x78);
  *(bool *)(param_1 + 0x68) = *param_2 == 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  if ((*param_2 < 9) && ((0x154U >> (*param_2 & 0x1f) & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x69) = 1;
  }
  return;
}



// FUNCTION 1492ebeac FUN_1492ebeac body=52 status=ok
// SIG undefined FUN_1492ebeac(void)

void FUN_1492ebeac(longlong *param_1)

{
  FUN_14930045e(param_1 + 0xf,param_1 + 0x19);
                    /* WARNING: Could not recover jumptable at 0x0001492ebedd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2b0))(param_1,param_1 + 0x23);
  return;
}



// FUNCTION 1492ebee0 FUN_1492ebee0 body=35 status=ok
// SIG undefined FUN_1492ebee0(void)

undefined8 FUN_1492ebee0(undefined8 param_1)

{
  FUN_1446f470e(param_1,L"PropertiesStates",1);
  return param_1;
}



// FUNCTION 1492ebf04 FUN_1492ebf04 body=35 status=ok
// SIG undefined FUN_1492ebf04(void)

undefined8 FUN_1492ebf04(undefined8 param_1)

{
  FUN_1446f470e(param_1,L"Results",1);
  return param_1;
}



// FUNCTION 1492ebf28 FUN_1492ebf28 body=63 status=ok
// SIG undefined FUN_1492ebf28(void)

longlong FUN_1492ebf28(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  while( true ) {
    lVar2 = param_1;
    param_1 = *(longlong *)(lVar2 + 0x20);
    if (param_1 == 0) {
      return lVar2;
    }
    lVar1 = FUN_14117aa32();
    if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) break;
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) != lVar1 + 0x30) {
      return lVar2;
    }
  }
  return lVar2;
}



// FUNCTION 1492ebf68 FUN_1492ebf68 body=326 status=ok
// SIG undefined FUN_1492ebf68(void)

longlong * FUN_1492ebf68(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x70);
  if (lVar5 != 0) {
    do {
      lVar4 = *(longlong *)(lVar5 + 8);
      lVar3 = FUN_144a49f24();
      if (*(ulonglong *)(lVar3 + 8) == 0) {
        bVar6 = lVar4 != 0;
        if (lVar4 != lVar3 && bVar6) {
          do {
            lVar4 = *(longlong *)(lVar4 + 0x30);
            bVar6 = lVar4 != 0;
            if (lVar4 == lVar3) break;
          } while (lVar4 != 0);
        }
        if (bVar6) goto LAB_1492ebfec;
      }
      else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_1492ebfec:
        lVar4 = *(longlong *)(lVar5 + 0x20);
        FUN_1446ddc76(&local_48,"PipelineDisplayName",1);
        if (lVar4 == local_48) {
          iVar1 = *(int *)(lVar5 + 0x44);
          *param_2 = 0;
          iVar2 = *(int *)(param_1 + 8 + (longlong)iVar1);
          _Src = *(void **)(param_1 + iVar1);
          *(int *)(param_2 + 1) = iVar2;
          if ((longlong)iVar2 == 0) {
            *(undefined4 *)((longlong)param_2 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(param_2,iVar2,0);
            memcpy((void *)*param_2,_Src,(longlong)iVar2 * 2);
            if (1 < (int)param_2[1]) goto LAB_1492ec025;
            if (*param_2 != 0) {
              FUN_1400020a8();
            }
          }
          break;
        }
      }
      lVar5 = *(longlong *)(lVar5 + 0x48);
    } while (lVar5 != 0);
  }
  local_40 = *(undefined8 *)(param_1 + 0x18);
  FUN_1400021e4(&local_40,param_2);
LAB_1492ec025:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1492ec0af FUN_1492ec0af body=703 status=ok
// SIG undefined FUN_1492ec0af(void)

void FUN_1492ec0af(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 **ppuVar1;
  undefined2 **ppuVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 ***pppuVar6;
  undefined2 *puVar7;
  bool bVar8;
  undefined1 auStack_c8 [40];
  undefined2 *local_a0;
  int local_98;
  longlong local_90;
  longlong local_88 [2];
  longlong local_78;
  undefined2 **local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined2 **local_60;
  undefined8 local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1 == 0) {
    local_70 = (undefined2 **)0x0;
  }
  else {
    local_70 = *(undefined2 ***)(param_1 + 0x50);
  }
  local_68 = 0xffffffff;
  local_64 = 0x101;
  local_62 = 0;
  local_78 = param_1;
  FUN_144a2daf0(&local_78);
  if (local_70 != (undefined2 **)0x0) {
    do {
      ppuVar2 = local_70;
      ppuVar1 = local_70 + 4;
      FUN_1400021e4(ppuVar1,local_88);
      puVar7 = ppuVar2[1];
      puVar5 = (undefined2 *)FUN_14010a2ea();
      if (*(ulonglong *)(puVar5 + 4) == 0) {
        bVar8 = puVar7 != (undefined2 *)0x0;
        if (puVar7 != puVar5 && bVar8) {
          do {
            puVar7 = *(undefined2 **)(puVar7 + 0x18);
            bVar8 = puVar7 != (undefined2 *)0x0;
            if (puVar7 == puVar5) break;
          } while (puVar7 != (undefined2 *)0x0);
        }
        if (!bVar8) goto LAB_1492ec152;
LAB_1492ec1a4:
        pppuVar6 = (undefined2 ***)FUN_1492ec370(param_4);
        FUN_1400021e4(ppuVar1,&local_60);
        if (pppuVar6 == &local_60) {
          if (local_60 != (undefined2 **)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*pppuVar6 != (undefined2 **)0x0) {
            FUN_1400020a8();
          }
          *pppuVar6 = local_60;
          local_60 = (undefined2 **)0x0;
          *(undefined4 *)(pppuVar6 + 1) = (undefined4)local_58;
          *(undefined4 *)((longlong)pppuVar6 + 0xc) = local_58._4_4_;
        }
        pppuVar6[2] = ppuVar2;
        pppuVar6[3] = (undefined2 **)(*(int *)((longlong)ppuVar2 + 0x44) + param_2);
      }
      else {
        if ((*(ulonglong *)(puVar7 + 0xc) & *(ulonglong *)(puVar5 + 4)) != 0) goto LAB_1492ec1a4;
LAB_1492ec152:
        puVar7 = ppuVar2[1];
        puVar5 = (undefined2 *)FUN_144a810c6();
        if (*(ulonglong *)(puVar5 + 4) == 0) {
          bVar8 = puVar7 != (undefined2 *)0x0;
          if (puVar7 != puVar5 && bVar8) {
            do {
              puVar7 = *(undefined2 **)(puVar7 + 0x18);
              bVar8 = puVar7 != (undefined2 *)0x0;
              if (puVar7 == puVar5) break;
            } while (puVar7 != (undefined2 *)0x0);
          }
          if (bVar8) goto LAB_1492ec234;
        }
        else if ((*(ulonglong *)(puVar7 + 0xc) & *(ulonglong *)(puVar5 + 4)) != 0) {
LAB_1492ec234:
          local_90 = (**(code **)(*ppuVar2 + 0x108))
                               (ppuVar2,*(int *)((longlong)ppuVar2 + 0x44) + param_2);
          if (local_90 != 0) {
            FUN_1400021e4(ppuVar1,&local_a0);
            puVar7 = &DAT_149dfb77a;
            if (local_98 != 0) {
              puVar7 = local_a0;
            }
            iVar4 = local_98 + -1;
            if (local_98 == 0) {
              iVar4 = 0;
            }
            uVar3 = FUN_144a49b4a(iVar4,puVar7);
            iVar4 = FUN_148024f46(param_3,uVar3,&local_a0);
            if (iVar4 == -1) {
              local_58 = &local_90;
              local_60 = &local_a0;
              FUN_148024c20(param_3,local_4c,&local_60,0);
              FUN_1492ec0af(*(undefined8 *)(local_90 + 0x10),local_90,param_3);
            }
            if (local_a0 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
          }
        }
      }
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
      local_70 = (undefined2 **)local_70[3];
      FUN_144a2daf0(&local_78);
    } while (local_70 != (undefined2 **)0x0);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492ec370 FUN_1492ec370 body=59 status=ok
// SIG undefined FUN_1492ec370(void)

longlong FUN_1492ec370(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_149301bde(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_149301bd6(lVar2);
  return lVar2;
}



// FUNCTION 1492ec3ac FUN_1492ec3ac body=405 status=ok
// SIG undefined FUN_1492ec3ac(void)

void FUN_1492ec3ac(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined8 *local_98;
  ulonglong uStack_90;
  longlong local_88 [4];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar6 = 0;
  local_68 = 0;
  local_60 = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  FUN_1492ec0af(*(undefined8 *)(param_1 + 0x10),param_1,local_88,&local_98);
  if ((longlong)(int)uStack_90 != 0) {
    lVar7 = (longlong)(int)uStack_90 << 5;
    uVar6 = 0;
    puVar5 = local_98;
    do {
      iVar2 = *(int *)(puVar5 + 1);
      puVar4 = &DAT_149dfb77a;
      if (iVar2 != 0) {
        puVar4 = (undefined2 *)*puVar5;
      }
      uVar3 = (ulonglong)(iVar2 - 1);
      if (iVar2 == 0) {
        uVar3 = uVar6;
      }
      uVar1 = FUN_144a49b4a(uVar3,puVar4);
      iVar2 = FUN_148024f46(local_88,uVar1,puVar5);
      if (iVar2 != -1) {
        iVar2 = *(int *)(puVar5 + 1);
        puVar4 = &DAT_149dfb77a;
        if (iVar2 != 0) {
          puVar4 = (undefined2 *)*puVar5;
        }
        uVar3 = (ulonglong)(iVar2 - 1);
        if (iVar2 == 0) {
          uVar3 = uVar6;
        }
        uVar1 = FUN_144a49b4a(uVar3,puVar4);
        iVar2 = FUN_148024f46(local_88,uVar1,puVar5);
        uVar3 = (longlong)iVar2 * 0x20 + local_88[0];
        if (iVar2 == -1) {
          uVar3 = uVar6;
        }
        local_a0 = 0;
        FUN_14485c47a(&local_a0,*(undefined8 *)(uVar3 + 0x10));
        *(undefined8 *)puVar5[3] = local_a0;
      }
      puVar5 = puVar5 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
    uVar6 = uStack_90 & 0xffffffff;
  }
  FUN_149301c63(local_98,uVar6);
  if (local_98 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_147a8b2a2(local_88);
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ec568 FUN_1492ec568 body=870 status=ok
// SIG undefined FUN_1492ec568(void)

undefined8 FUN_1492ec568(undefined8 param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  longlong lVar13;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 local_100;
  wchar_t *local_f8;
  undefined4 local_f0;
  wchar_t *local_e8;
  undefined4 local_e0;
  undefined2 *local_d8;
  undefined8 uStack_d0;
  undefined2 *local_c8;
  undefined8 uStack_c0;
  wchar_t *local_b0;
  undefined4 local_a8;
  longlong *local_a0;
  wchar_t *local_98;
  undefined4 local_90;
  longlong local_88 [3];
  longlong *plStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar6 = FUN_14001cc68(0x88,0x10);
  FUN_14047b06c(lVar6,param_1);
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149e44a40;
  plVar7[2] = lVar6;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar11 = plVar7 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  local_88[2] = 0;
  plStack_70 = (longlong *)0x0;
  uVar8 = 0;
  bVar4 = FUN_14047b282(lVar6,local_88 + 2,0);
  if ((local_88[2] != 0 & bVar4) != 1) goto LAB_1492ec6b7;
  local_88[0] = 0;
  local_88[1] = 0;
  local_98 = L"Type";
  local_90 = 4;
  cVar5 = FUN_14047fa10();
  if (cVar5 == '\0') {
LAB_1492ec6a3:
    uVar8 = 0;
  }
  else {
    local_a0 = (longlong *)0x0;
    local_b0 = L"Properties";
    local_a8 = 10;
    cVar5 = FUN_140480164(local_88[2]);
    if (cVar5 == '\0') goto LAB_1492ec6a3;
    uVar8 = FUN_144a797b2();
    uVar9 = FUN_1427dcdfa(uVar8,local_88,0);
    uVar8 = FUN_1409ffe1d();
    uVar8 = FUN_1492ec8cf(uVar8,uVar9);
    lVar6 = local_a0[1];
    if ((longlong)(int)lVar6 != 0) {
      lVar3 = *local_a0;
      lVar13 = 0;
      do {
        puVar10 = (undefined8 *)(**(code **)**(undefined8 **)(lVar3 + lVar13))();
        local_c8 = (undefined2 *)0x0;
        uStack_c0 = 0;
        local_d8 = (undefined2 *)0x0;
        uStack_d0 = 0;
        local_e8 = L"Name";
        local_e0 = 4;
        cVar5 = FUN_14047fa10(*puVar10,&local_e8,&local_c8);
        if (cVar5 == '\0') {
LAB_1492ec8a8:
          if (local_d8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_c8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_1492ec6a3;
        }
        local_f8 = L"Value";
        local_f0 = 5;
        cVar5 = FUN_14047fa10(*puVar10,&local_f8,&local_d8);
        if (cVar5 == '\0') goto LAB_1492ec8a8;
        puVar12 = &DAT_149dfb77a;
        if ((int)uStack_c0 != 0) {
          puVar12 = local_c8;
        }
        FUN_1446f470e(&local_100,puVar12,1);
        plVar11 = (longlong *)FUN_144a87586(uVar9,local_100);
        puVar12 = local_d8;
        if ((int)uStack_d0 == 0) {
          puVar12 = &DAT_149dfb77a;
        }
        if (puVar12 != (undefined2 *)0x0) {
          local_108 = DAT_14c872be8;
          local_110 = 0x8000000;
          local_118 = uVar8;
          (**(code **)(*plVar11 + 0xf8))(plVar11,puVar12,uVar8,1);
        }
        if (local_d8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_c8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        lVar13 = lVar13 + 0x10;
      } while ((longlong)(int)lVar6 * 0x10 != lVar13);
    }
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
LAB_1492ec6b7:
  plVar11 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_70 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar7 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1492ec8cf FUN_1492ec8cf body=175 status=ok
// SIG undefined FUN_1492ec8cf(void)

undefined8 FUN_1492ec8cf(undefined8 param_1,undefined8 param_2)

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



// FUNCTION 1492ec984 FUN_1492ec984 body=113 status=ok
// SIG undefined FUN_1492ec984(void)

undefined8 * FUN_1492ec984(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x58);
  _Src = *(void **)(param_1 + 0x50);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_149300550(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 << 3);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return param_2;
}



// FUNCTION 1492ec9f6 FUN_1492ec9f6 body=208 status=ok
// SIG undefined FUN_1492ec9f6(void)

void FUN_1492ec9f6(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 **local_48;
  longlong *local_40;
  code *local_38;
  undefined8 *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_146153ef6();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  local_60 = (undefined8 *)0x0;
  local_58 = 1;
  FUN_1468f8d30(&local_60,1,0);
  *local_60 = uVar1;
  auVar3 = roundpd(ZEXT816(0x4025000000000000),ZEXT816(0x4025000000000000),1);
  local_28 = (longlong)auVar3._0_8_;
  local_40 = &local_28;
  local_30 = &local_50;
  local_38 = FUN_1444bd166;
  local_50 = uVar2;
  local_48 = &local_60;
  FUN_14110ac5e(&local_38,(float)((double)local_28 / 10000000.0));
  if (local_60 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ecac8 FUN_1492ecac8 body=133 status=ok
// SIG undefined FUN_1492ecac8(void)

void FUN_1492ecac8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  code *local_20;
  undefined8 *local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  auVar1 = roundpd(ZEXT816(0x4025000000000000),ZEXT816(0x4025000000000000),1);
  local_10 = (longlong)auVar1._0_8_;
  local_28 = &local_10;
  local_18 = &local_38;
  local_20 = FUN_1444bd166;
  local_38 = param_1;
  local_30 = param_2;
  FUN_14110ac5e(&local_20,(float)((double)local_10 / 10000000.0));
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ecb4e FUN_1492ecb4e body=293 status=ok
// SIG undefined FUN_1492ecb4e(void)

undefined8 FUN_1492ecb4e(longlong param_1,longlong *param_2,undefined8 param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb8));
  lVar3 = *param_2;
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar3 + 8);
  EnterCriticalSection(lpCriticalSection);
  if ((*(byte *)(lVar3 + 0x38) & 0xfd) != 0) {
    *(undefined1 *)(lVar3 + 0x38) = 0;
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  lVar3 = *(longlong *)(param_1 + 0xb0);
  *(longlong *)(param_1 + 0xb0) = lVar3 + 1;
  *(longlong *)(*param_2 + 0x30) = lVar3;
  FUN_1400e9262(*param_2 + 0x40,param_3);
  local_60 = *param_2 + 0x30;
  local_58 = param_2;
  FUN_149301d14(param_1 + 0x28,local_4c,&local_60,0);
  uVar4 = *(undefined8 *)(*param_2 + 0x30);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb8));
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
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
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ecc74 FUN_1492ecc74 body=164 status=ok
// SIG undefined FUN_1492ecc74(void)

undefined8 FUN_1492ecc74(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  local_48 = *param_2;
  local_40 = param_2[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  uVar4 = FUN_1492ecb4e(0,&local_48,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ecd1a FUN_1492ecd1a body=268 status=ok
// SIG undefined FUN_1492ecd1a(void)

ulonglong FUN_1492ecd1a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  undefined7 uVar9;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  uVar9 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar8 = CONCAT71(uVar9,2);
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    lVar5 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x68);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x70) - 1U &
                             (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x28);
      iVar7 = iVar4;
      do {
        if (*(longlong *)(lVar5 + (longlong)iVar7 * 0x20) == param_2) goto LAB_1492ecdb0;
        iVar7 = *(int *)((longlong)iVar7 * 0x20 + lVar5 + 0x18);
      } while (iVar7 != -1);
    }
  }
  goto LAB_1492ecd42;
  while (iVar4 = *(int *)(lVar6 + 0x18), iVar4 != -1) {
LAB_1492ecdb0:
    lVar6 = lVar5 + (longlong)iVar4 * 0x20;
    if (*(longlong *)(lVar5 + (longlong)iVar4 * 0x20) == param_2) goto LAB_1492ecdc5;
  }
  lVar6 = 0;
LAB_1492ecdc5:
  lVar5 = *(longlong *)(lVar6 + 8);
  plVar3 = *(longlong **)(lVar6 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 8));
  uVar8 = CONCAT71(uVar9,*(undefined1 *)(lVar5 + 0x38));
  if ((LPCRITICAL_SECTION)(lVar5 + 8) != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 8));
  }
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
LAB_1492ecd42:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  return uVar8 & 0xffffffff;
}



// FUNCTION 1492ece26 FUN_1492ece26 body=284 status=ok
// SIG undefined FUN_1492ece26(void)

void FUN_1492ece26(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x5c)) {
    return;
  }
  lVar5 = param_1 + 0x60;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x68);
  }
  iVar4 = *(int *)(lVar5 + (ulonglong)
                           (*(int *)(param_1 + 0x70) - 1U &
                           (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
  if (iVar4 == -1) {
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x28);
  iVar7 = iVar4;
  while (*(longlong *)(lVar5 + (longlong)iVar7 * 0x20) != param_2) {
    iVar7 = *(int *)((longlong)iVar7 * 0x20 + lVar5 + 0x18);
    if (iVar7 == -1) {
      return;
    }
  }
  do {
    lVar6 = lVar5 + (longlong)iVar4 * 0x20;
    if (*(longlong *)(lVar5 + (longlong)iVar4 * 0x20) == param_2) goto LAB_1492ecebd;
    iVar4 = *(int *)(lVar6 + 0x18);
  } while (iVar4 != -1);
  lVar6 = 0;
LAB_1492ecebd:
  lVar5 = *(longlong *)(lVar6 + 8);
  plVar3 = *(longlong **)(lVar6 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(param_1 + 0xe8);
  *(uint *)(param_1 + 0xe8) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0xec) < iVar4 + 1U) {
    FUN_14479d316((longlong *)(param_1 + 0xe0),iVar4);
  }
  lVar6 = *(longlong *)(param_1 + 0xe0);
  *(undefined8 *)(lVar6 + (longlong)iVar4 * 8) = 0;
  *(undefined8 *)(lVar6 + (longlong)iVar4 * 8) = *(undefined8 *)(lVar5 + 0x30);
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
                    /* WARNING: Could not recover jumptable at 0x0001492ecf3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1492ecf42 FUN_1492ecf42 body=90 status=ok
// SIG undefined FUN_1492ecf42(void)

void FUN_1492ecf42(longlong param_1,undefined8 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
  FUN_1492ece26(param_1,param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf0));
                    /* WARNING: Could not recover jumptable at 0x0001492ecf99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  return;
}



// FUNCTION 1492ecfc8 FUN_1492ecfc8 body=1032 status=ok
// SIG undefined FUN_1492ecfc8(void)

void FUN_1492ecfc8(ulonglong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  undefined1 auStack_8e8 [32];
  undefined8 *local_8c8;
  ulonglong local_8c0;
  ulonglong local_8b8;
  undefined8 local_8b0;
  undefined2 *local_8a8;
  undefined8 uStack_8a0;
  undefined8 local_898;
  undefined8 local_890;
  undefined2 *local_888;
  int local_880;
  undefined2 *local_878;
  int local_870;
  longlong local_868;
  undefined8 uStack_860;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_8e8;
  lVar3 = *(longlong *)(param_1 + 0x10);
  FUN_1492ed3d8(&local_878,lVar3);
  lVar3 = *(longlong *)(lVar3 + 0x70);
  uVar4 = DAT_14c872ce0;
  do {
    DAT_14c872ce0 = uVar4;
    if (lVar3 == 0) {
      FUN_140056680(&local_868,&DAT_149dfb77a);
      FUN_140d6d8de(uVar4,0,&local_868);
      if (local_868 != 0) {
        FUN_1400020a8();
      }
      if (local_878 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if ((local_60 ^ (ulonglong)auStack_8e8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    if ((*(byte *)(lVar3 + 0x39) & 0x20) == 0) {
      FUN_1400021e4(lVar3 + 0x20);
      FUN_144a810c6();
      lVar11 = *(longlong *)(lVar3 + 8);
      lVar5 = FUN_1446e6bbc();
      uVar4 = DAT_14c872ce0;
      if (*(ulonglong *)(lVar5 + 8) == 0) {
        bVar13 = lVar11 != 0;
        if (lVar11 != lVar5 && bVar13) {
          do {
            lVar11 = *(longlong *)(lVar11 + 0x30);
            bVar13 = lVar11 != 0;
            if (lVar11 == lVar5) break;
          } while (lVar11 != 0);
        }
        if (!bVar13) goto LAB_1492ed207;
LAB_1492ed06f:
        puVar6 = &DAT_149dfb77a;
        if (local_880 != 0) {
          puVar6 = local_888;
        }
        FUN_1446f470e(&local_890,puVar6,1);
        puVar6 = &DAT_149dfb77a;
        if (local_870 != 0) {
          puVar6 = local_878;
        }
        FUN_14622b954(uVar4,puVar6,local_890,&DAT_14c872aa8);
        iVar2 = *(int *)(lVar3 + 0x44);
        bVar1 = *(byte *)(lVar3 + 0x70);
        (**(code **)(**(longlong **)(lVar3 + 0x78) + 0x178))();
        if (0 < *(int *)(param_1 + 8 + (longlong)iVar2)) {
          puVar12 = (ulonglong *)((longlong)iVar2 + param_1);
          iVar2 = *(int *)(*(longlong *)(lVar3 + 0x78) + 0x34);
          lVar11 = 0;
          lVar5 = 0;
          do {
            local_868 = 0;
            uStack_860 = 0;
            if ((bVar1 & 1) == 0) {
              uVar9 = *puVar12;
            }
            else {
              uVar9 = *puVar12;
              if ((uVar9 & 1) != 0) {
                uVar9 = ((longlong)uVar9 >> 0x18) + (longlong)puVar12;
              }
            }
            local_8c8 = (undefined8 *)(uVar9 + lVar11);
            local_8b0 = 0;
            local_8b8 = local_8b8 & 0xffffffff00000000;
            local_8c0 = param_1;
            (**(code **)(**(longlong **)(lVar3 + 0x78) + 0xf0))
                      (*(longlong **)(lVar3 + 0x78),&local_868,local_8c8,0);
            uVar4 = DAT_14c872ce0;
            puVar6 = &DAT_149dfb77a;
            if (local_880 != 0) {
              puVar6 = local_888;
            }
            FUN_1446f470e(&local_898,puVar6,1);
            puVar6 = &DAT_149dfb77a;
            if (local_870 != 0) {
              puVar6 = local_878;
            }
            local_8c8 = &DAT_14c872aa8;
            FUN_140d68b26(uVar4,puVar6,local_898);
            if (local_868 != 0) {
              FUN_1400020a8();
            }
            lVar5 = lVar5 + 1;
            lVar11 = lVar11 + iVar2;
          } while (lVar5 < (int)puVar12[1]);
        }
      }
      else {
        if ((*(ulonglong *)(lVar11 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) goto LAB_1492ed06f;
LAB_1492ed207:
        memset(&local_868,0,0x800);
        uVar9 = (ulonglong)*(uint *)(lVar3 + 0x30);
        if (0 < (int)*(uint *)(lVar3 + 0x30)) {
          uVar8 = 0;
          do {
            if ((int)uVar9 != 1) {
              FUN_1400021e4(lVar3 + 0x20,&local_8a8);
              puVar6 = &DAT_149dfb77a;
              if ((int)uStack_8a0 != 0) {
                puVar6 = local_8a8;
              }
              FUN_141301ee6(&local_868,L"%s[%i]",puVar6,uVar8 & 0xffffffff);
              if (local_8a8 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              FUN_14020fad6(&local_888,&local_868);
            }
            local_8a8 = (undefined2 *)0x0;
            uStack_8a0 = 0;
            lVar5 = (longlong)*(int *)(lVar3 + 0x44) + param_1 +
                    (longlong)*(int *)(lVar3 + 0x34) * uVar8;
            lVar11 = lVar5;
            if (param_1 == 0) {
              lVar11 = 0;
            }
            local_8b8 = 0;
            local_8c0 = local_8c0 & 0xffffffff00000000;
            local_8c8 = (undefined8 *)param_1;
            FUN_14280c87e(lVar3,&local_8a8,lVar5,lVar11);
            puVar6 = &DAT_149dfb77a;
            if ((int)uStack_8a0 != 0) {
              puVar6 = local_8a8;
            }
            puVar10 = &DAT_149dfb77a;
            if (local_880 != 0) {
              puVar10 = local_888;
            }
            puVar7 = &DAT_149dfb77a;
            if (local_870 != 0) {
              puVar7 = local_878;
            }
            local_8c8 = &DAT_14c872aa8;
            FUN_1410abc14(DAT_14c872ce0,puVar7,puVar10,puVar6);
            if (local_8a8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            uVar8 = uVar8 + 1;
            uVar9 = (ulonglong)*(int *)(lVar3 + 0x30);
          } while ((longlong)uVar8 < (longlong)uVar9);
        }
      }
      if (local_888 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    lVar3 = *(longlong *)(lVar3 + 0x48);
    uVar4 = DAT_14c872ce0;
  } while( true );
}



// FUNCTION 1492ed3d8 FUN_1492ed3d8 body=112 status=ok
// SIG undefined FUN_1492ed3d8(void)

undefined8 FUN_1492ed3d8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)(param_2 + 0x18);
  FUN_1400021e4(&local_20,local_30);
  FUN_140ba7826(param_1,L"Interchange_Translator_ClassName_",local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ed44a FUN_1492ed44a body=340 status=ok
// SIG undefined FUN_1492ed44a(void)

ulonglong FUN_1492ed44a(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  void *pvVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (void *)0x0;
  local_40 = *(int *)(param_2 + 0x30);
  lVar6 = (longlong)local_40;
  pvVar4 = *(void **)(param_2 + 0x28);
  if (lVar6 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,pvVar4,lVar6 * 2);
  }
  iVar5 = 0;
  FUN_144a06df0(&local_38,&local_48,0);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x2c0))(param_1,&local_48);
  if ((longlong)local_40 == 0) {
    uVar3 = 0;
  }
  else {
    lVar6 = (longlong)local_40 << 4;
    pvVar4 = local_48;
    do {
      iVar5 = local_30 + -1;
      if (local_30 == 0) {
        iVar5 = 0;
      }
      puVar2 = &DAT_149dfb77a;
      if (local_30 != 0) {
        puVar2 = local_38;
      }
      cVar1 = FUN_144a791f8(pvVar4,puVar2,iVar5,1);
      if (cVar1 != '\0') goto LAB_1492ed534;
      pvVar4 = (void *)((longlong)pvVar4 + 0x10);
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
    pvVar4 = (void *)0x0;
LAB_1492ed534:
    uVar3 = CONCAT71((int7)((ulonglong)lVar6 >> 8),pvVar4 != (void *)0x0);
    iVar5 = local_40;
  }
  FUN_1447a1747(local_48,iVar5);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ed5ac FUN_1492ed5ac body=263 status=ok
// SIG undefined FUN_1492ed5ac(void)

void FUN_1492ed5ac(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492ed6b4(param_1,local_38,puVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ed6b4 FUN_1492ed6b4 body=177 status=ok
// SIG undefined FUN_1492ed6b4(void)

ulonglong FUN_1492ed6b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  FUN_14108389e(param_1,local_48 + 2,local_48,param_3);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    cVar1 = FUN_140c44378(local_48[2],local_30);
    if (cVar1 != '\0') {
      iVar2 = FUN_1419073b0(local_48[2],local_30);
      uVar3 = CONCAT71((int7)((ulonglong)local_30 >> 8),iVar2 == 1);
      goto LAB_1492ed736;
    }
  }
  uVar3 = 0;
LAB_1492ed736:
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ed76c FUN_1492ed76c body=267 status=ok
// SIG undefined FUN_1492ed76c(void)

void FUN_1492ed76c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  uVar1 = FUN_1492ed878(param_1,local_38,puVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ed878 FUN_1492ed878 body=177 status=ok
// SIG undefined FUN_1492ed878(void)

ulonglong FUN_1492ed878(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  FUN_1444bab7e(param_1,local_48 + 2,local_48,param_3);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    cVar1 = FUN_140c44378(local_48[2],local_30);
    if (cVar1 != '\0') {
      iVar2 = FUN_1419073b0(local_48[2],local_30);
      uVar3 = CONCAT71((int7)((ulonglong)local_30 >> 8),iVar2 == 6);
      goto LAB_1492ed8fa;
    }
  }
  uVar3 = 0;
LAB_1492ed8fa:
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ed930 FUN_1492ed930 body=266 status=ok
// SIG undefined FUN_1492ed930(void)

void FUN_1492ed930(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  puVar2 = &local_3c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492eda3c(param_1,local_38,puVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492eda3c FUN_1492eda3c body=177 status=ok
// SIG undefined FUN_1492eda3c(void)

ulonglong FUN_1492eda3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  FUN_1444baa80(param_1,local_48 + 2,local_48,param_3);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    cVar1 = FUN_140c44378(local_48[2],local_30);
    if (cVar1 != '\0') {
      iVar2 = FUN_1419073b0(local_48[2],local_30);
      uVar3 = CONCAT71((int7)((ulonglong)local_30 >> 8),iVar2 == 8);
      goto LAB_1492edabe;
    }
  }
  uVar3 = 0;
LAB_1492edabe:
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492edaf4 FUN_1492edaf4 body=263 status=ok
// SIG undefined FUN_1492edaf4(void)

void FUN_1492edaf4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  local_48 = 0;
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
  puVar2 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492edbfc(param_1,local_38,puVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492edbfc FUN_1492edbfc body=177 status=ok
// SIG undefined FUN_1492edbfc(void)

ulonglong FUN_1492edbfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  FUN_1444bad7a(param_1,local_48 + 2,local_48,param_3);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    cVar1 = FUN_140c44378(local_48[2],local_30);
    if (cVar1 != '\0') {
      iVar2 = FUN_1419073b0(local_48[2],local_30);
      uVar3 = CONCAT71((int7)((ulonglong)local_30 >> 8),iVar2 == 9);
      goto LAB_1492edc7e;
    }
  }
  uVar3 = 0;
LAB_1492edc7e:
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492edcb4 FUN_1492edcb4 body=266 status=ok
// SIG undefined FUN_1492edcb4(void)

void FUN_1492edcb4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  puVar2 = &local_3c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492eddc0(param_1,local_38,puVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492eddc0 FUN_1492eddc0 body=177 status=ok
// SIG undefined FUN_1492eddc0(void)

ulonglong FUN_1492eddc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  FUN_1444ba982(param_1,local_48 + 2,local_48,param_3);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    cVar1 = FUN_140c44378(local_48[2],local_30);
    if (cVar1 != '\0') {
      iVar2 = FUN_1419073b0(local_48[2],local_30);
      uVar3 = CONCAT71((int7)((ulonglong)local_30 >> 8),iVar2 == 0xc);
      goto LAB_1492ede42;
    }
  }
  uVar3 = 0;
LAB_1492ede42:
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ede78 FUN_1492ede78 body=258 status=ok
// SIG undefined FUN_1492ede78(void)

void FUN_1492ede78(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar2 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492edf7c(param_1,local_38,puVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492edf7c FUN_1492edf7c body=177 status=ok
// SIG undefined FUN_1492edf7c(void)

ulonglong FUN_1492edf7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  FUN_1444bae74(param_1,local_48 + 2,local_48,param_3);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    cVar1 = FUN_140c44378(local_48[2],local_30);
    if (cVar1 != '\0') {
      iVar2 = FUN_1419073b0(local_48[2],local_30);
      uVar3 = CONCAT71((int7)((ulonglong)local_30 >> 8),iVar2 == 0xf);
      goto LAB_1492edffe;
    }
  }
  uVar3 = 0;
LAB_1492edffe:
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ee034 FUN_1492ee034 body=268 status=ok
// SIG undefined FUN_1492ee034(void)

void FUN_1492ee034(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
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
  uVar1 = FUN_1492ee142(param_1,local_48 + 2,local_48);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ee142 FUN_1492ee142 body=177 status=ok
// SIG undefined FUN_1492ee142(void)

ulonglong FUN_1492ee142(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  FUN_1444bac7c(param_1,local_48 + 2,local_48,param_3);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    cVar1 = FUN_140c44378(local_48[2],local_30);
    if (cVar1 != '\0') {
      iVar2 = FUN_1419073b0(local_48[2],local_30);
      uVar3 = CONCAT71((int7)((ulonglong)local_30 >> 8),iVar2 == 0x12);
      goto LAB_1492ee1c4;
    }
  }
  uVar3 = 0;
LAB_1492ee1c4:
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ee1fa FUN_1492ee1fa body=182 status=ok
// SIG undefined FUN_1492ee1fa(void)

void FUN_1492ee1fa(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_1444bb06c(param_1 + 0x40,local_38);
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



// FUNCTION 1492ee2b2 FUN_1492ee2b2 body=9 status=ok
// SIG undefined FUN_1492ee2b2(void)

void FUN_1492ee2b2(longlong param_1)

{
  FUN_1444bb06c(param_1 + 0x40);
  return;
}



// FUNCTION 1492ee2c2 FUN_1492ee2c2 body=258 status=ok
// SIG undefined FUN_1492ee2c2(void)

void FUN_1492ee2c2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar2 = local_40;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492ee3c6(param_1,local_38,puVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ee3c6 FUN_1492ee3c6 body=177 status=ok
// SIG undefined FUN_1492ee3c6(void)

ulonglong FUN_1492ee3c6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a787a6(local_48);
  FUN_1444baf72(param_1,local_48 + 2,local_48,param_3);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    cVar1 = FUN_140c44378(local_48[2],local_30);
    if (cVar1 != '\0') {
      iVar2 = FUN_1419073b0(local_48[2],local_30);
      uVar3 = CONCAT71((int7)((ulonglong)local_30 >> 8),iVar2 == 0x2f);
      goto LAB_1492ee448;
    }
  }
  uVar3 = 0;
LAB_1492ee448:
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ee478 FUN_1492ee478 body=143 status=ok
// SIG undefined FUN_1492ee478(void)

void FUN_1492ee478(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2c8))(param_1,&local_28);
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



// FUNCTION 1492ee514 FUN_1492ee514 body=263 status=ok
// SIG undefined FUN_1492ee514(void)

void FUN_1492ee514(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492ee61c(param_1,local_38,puVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ee61c FUN_1492ee61c body=290 status=ok
// SIG undefined FUN_1492ee61c(void)

ulonglong FUN_1492ee61c(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_1444be324(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] == 0) {
LAB_1492ee6eb:
      bVar2 = false;
    }
    else {
      plVar1 = local_58 + 3;
      cVar3 = FUN_140c44378(local_58[2],plVar1);
      if (cVar3 == '\0') goto LAB_1492ee6eb;
      iVar4 = FUN_1419073b0(local_58[2],plVar1);
      if (iVar4 != 1) goto LAB_1492ee6eb;
      bVar2 = true;
      if (local_58[2] == 0) {
        param_3 = 0;
      }
      else {
        lVar5 = FUN_149302700(local_58[2],plVar1,param_3);
        param_3 = CONCAT71((int7)(param_3 >> 8),lVar5 == 1);
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_1492ee702;
  }
  param_3 = 0;
LAB_1492ee702:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_3 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ee740 FUN_1492ee740 body=139 status=ok
// SIG undefined FUN_1492ee740(void)

void FUN_1492ee740(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1492ee7cc(param_1,&local_28);
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



// FUNCTION 1492ee7cc FUN_1492ee7cc body=134 status=ok
// SIG undefined FUN_1492ee7cc(void)

undefined8 * FUN_1492ee7cc(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_1492f082a();
  FUN_1444be0f2(&local_38,&DAT_14cc0bf88,uVar1);
  if (local_38 != 0) {
    FUN_1492ff8ec(local_38,local_30,param_2);
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ee85a FUN_1492ee85a body=267 status=ok
// SIG undefined FUN_1492ee85a(void)

void FUN_1492ee85a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  uVar1 = FUN_1492ee966(param_1,local_38,puVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ee966 FUN_1492ee966 body=290 status=ok
// SIG undefined FUN_1492ee966(void)

ulonglong FUN_1492ee966(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_1444bd82a(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] == 0) {
LAB_1492eea35:
      bVar2 = false;
    }
    else {
      plVar1 = local_58 + 3;
      cVar3 = FUN_140c44378(local_58[2],plVar1);
      if (cVar3 == '\0') goto LAB_1492eea35;
      iVar4 = FUN_1419073b0(local_58[2],plVar1);
      if (iVar4 != 6) goto LAB_1492eea35;
      bVar2 = true;
      if (local_58[2] == 0) {
        param_3 = 0;
      }
      else {
        lVar5 = FUN_149302df4(local_58[2],plVar1,param_3);
        param_3 = CONCAT71((int7)(param_3 >> 8),lVar5 == 1);
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_1492eea4c;
  }
  param_3 = 0;
LAB_1492eea4c:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_3 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492eea90 FUN_1492eea90 body=266 status=ok
// SIG undefined FUN_1492eea90(void)

void FUN_1492eea90(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  puVar2 = &local_3c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492eeb9c(param_1,local_38,puVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492eeb9c FUN_1492eeb9c body=290 status=ok
// SIG undefined FUN_1492eeb9c(void)

ulonglong FUN_1492eeb9c(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_1444bd5f8(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] == 0) {
LAB_1492eec6b:
      bVar2 = false;
    }
    else {
      plVar1 = local_58 + 3;
      cVar3 = FUN_140c44378(local_58[2],plVar1);
      if (cVar3 == '\0') goto LAB_1492eec6b;
      iVar4 = FUN_1419073b0(local_58[2],plVar1);
      if (iVar4 != 8) goto LAB_1492eec6b;
      bVar2 = true;
      if (local_58[2] == 0) {
        param_3 = 0;
      }
      else {
        lVar5 = FUN_149302adc(local_58[2],plVar1,param_3);
        param_3 = CONCAT71((int7)(param_3 >> 8),lVar5 == 1);
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_1492eec82;
  }
  param_3 = 0;
LAB_1492eec82:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_3 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492eecc6 FUN_1492eecc6 body=263 status=ok
// SIG undefined FUN_1492eecc6(void)

void FUN_1492eecc6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  local_48 = 0;
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
  puVar2 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492eedce(param_1,local_38,puVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492eedce FUN_1492eedce body=290 status=ok
// SIG undefined FUN_1492eedce(void)

ulonglong FUN_1492eedce(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_1444bda5c(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] == 0) {
LAB_1492eee9d:
      bVar2 = false;
    }
    else {
      plVar1 = local_58 + 3;
      cVar3 = FUN_140c44378(local_58[2],plVar1);
      if (cVar3 == '\0') goto LAB_1492eee9d;
      iVar4 = FUN_1419073b0(local_58[2],plVar1);
      if (iVar4 != 9) goto LAB_1492eee9d;
      bVar2 = true;
      if (local_58[2] == 0) {
        param_3 = 0;
      }
      else {
        lVar5 = FUN_14930310e(local_58[2],plVar1,param_3);
        param_3 = CONCAT71((int7)(param_3 >> 8),lVar5 == 1);
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_1492eeeb4;
  }
  param_3 = 0;
LAB_1492eeeb4:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_3 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492eeef8 FUN_1492eeef8 body=266 status=ok
// SIG undefined FUN_1492eeef8(void)

void FUN_1492eeef8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  puVar2 = &local_3c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492ef004(param_1,local_38,puVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ef004 FUN_1492ef004 body=290 status=ok
// SIG undefined FUN_1492ef004(void)

ulonglong FUN_1492ef004(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_1444bd3c6(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] == 0) {
LAB_1492ef0d3:
      bVar2 = false;
    }
    else {
      plVar1 = local_58 + 3;
      cVar3 = FUN_140c44378(local_58[2],plVar1);
      if (cVar3 == '\0') goto LAB_1492ef0d3;
      iVar4 = FUN_1419073b0(local_58[2],plVar1);
      if (iVar4 != 0xc) goto LAB_1492ef0d3;
      bVar2 = true;
      if (local_58[2] == 0) {
        param_3 = 0;
      }
      else {
        lVar5 = FUN_1493027c6(local_58[2],plVar1,param_3);
        param_3 = CONCAT71((int7)(param_3 >> 8),lVar5 == 1);
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_1492ef0ea;
  }
  param_3 = 0;
LAB_1492ef0ea:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_3 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ef12e FUN_1492ef12e body=258 status=ok
// SIG undefined FUN_1492ef12e(void)

void FUN_1492ef12e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar2 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492ef232(param_1,local_38,puVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ef232 FUN_1492ef232 body=290 status=ok
// SIG undefined FUN_1492ef232(void)

ulonglong FUN_1492ef232(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_1444bdc8e(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] == 0) {
LAB_1492ef301:
      bVar2 = false;
    }
    else {
      plVar1 = local_58 + 3;
      cVar3 = FUN_140c44378(local_58[2],plVar1);
      if (cVar3 == '\0') goto LAB_1492ef301;
      iVar4 = FUN_1419073b0(local_58[2],plVar1);
      if (iVar4 != 0xf) goto LAB_1492ef301;
      bVar2 = true;
      if (local_58[2] == 0) {
        param_3 = 0;
      }
      else {
        lVar5 = FUN_149303428(local_58[2],plVar1,param_3);
        param_3 = CONCAT71((int7)(param_3 >> 8),lVar5 == 1);
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_1492ef318;
  }
  param_3 = 0;
LAB_1492ef318:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_3 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ef356 FUN_1492ef356 body=37 status=ok
// SIG undefined FUN_1492ef356(void)

void FUN_1492ef356(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492ef37c();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1492ef37c FUN_1492ef37c body=215 status=ok
// SIG undefined FUN_1492ef37c(void)

ulonglong FUN_1492ef37c(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  longlong local_30;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_141083722();
  cVar2 = FUN_140c44378(uVar1,&DAT_14cc0c018);
  if (cVar2 == '\0') {
    uVar4 = 0;
    goto LAB_1492ef41f;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_141083722();
  FUN_1444be556(&local_30,&DAT_14cc0c018,uVar1);
  if (local_30 == 0) {
LAB_1492ef40a:
    uVar4 = 0;
  }
  else {
    cVar2 = FUN_140c44378(local_30,local_28);
    if (cVar2 == '\0') goto LAB_1492ef40a;
    iVar3 = FUN_1419073b0(local_30,local_28);
    if (iVar3 != 0x15) goto LAB_1492ef40a;
    local_31 = 0;
    if (local_30 == 0) goto LAB_1492ef40a;
    FUN_14930380a(local_30,local_28,&local_31);
    uVar4 = CONCAT71((int7)((ulonglong)local_28 >> 8),local_31);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
LAB_1492ef41f:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ef454 FUN_1492ef454 body=112 status=ok
// SIG undefined FUN_1492ef454(void)

void FUN_1492ef454(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1492ef4c6(param_1,&local_20);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  *param_3 = local_20;
  *(undefined4 *)(param_3 + 1) = local_18;
  *(undefined4 *)((longlong)param_3 + 0xc) = local_14;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ef4c6 FUN_1492ef4c6 body=304 status=ok
// SIG undefined FUN_1492ef4c6(void)

longlong * FUN_1492ef4c6(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58 [2];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_1492f08a8();
  cVar2 = FUN_140c44378(uVar1,&DAT_14cc0bfa0);
  if (cVar2 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
  }
  local_48 = 0;
  uStack_40 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_1492f08a8();
  FUN_1444be0f2(&local_60,&DAT_14cc0bfa0,uVar1);
  if (local_60 != 0) {
    cVar2 = FUN_140c44378(local_60,local_58);
    if (cVar2 != '\0') {
      iVar3 = FUN_1419073b0(local_60);
      if (iVar3 == 0x12) {
        if (local_60 == 0) {
          uStack_40._4_4_ = 0;
          uStack_40._0_4_ = 0;
          local_48 = 0;
        }
        else {
          FUN_1492ff8ec(local_60,local_58,&local_48);
        }
        *param_2 = local_48;
        local_48 = 0;
        *(undefined4 *)(param_2 + 1) = (undefined4)uStack_40;
        *(undefined4 *)((longlong)param_2 + 0xc) = uStack_40._4_4_;
        uStack_40 = 0;
        goto LAB_1492ef5a3;
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1492ef5a3:
  if (local_58[0] != 0) {
    FUN_1400020a8();
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1492ef5fe FUN_1492ef5fe body=279 status=ok
// SIG undefined FUN_1492ef5fe(void)

void FUN_1492ef5fe(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  
  local_48[4] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492ef716(param_1,local_48 + 2,plVar2);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[4] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ef716 FUN_1492ef716 body=290 status=ok
// SIG undefined FUN_1492ef716(void)

ulonglong FUN_1492ef716(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_1444be0f2(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] == 0) {
LAB_1492ef7e5:
      bVar2 = false;
    }
    else {
      plVar1 = local_58 + 3;
      cVar3 = FUN_140c44378(local_58[2],plVar1);
      if (cVar3 == '\0') goto LAB_1492ef7e5;
      iVar4 = FUN_1419073b0(local_58[2],plVar1);
      if (iVar4 != 0x12) goto LAB_1492ef7e5;
      bVar2 = true;
      if (local_58[2] == 0) {
        param_3 = 0;
      }
      else {
        lVar5 = FUN_1492ff8ec(local_58[2],plVar1,param_3);
        param_3 = CONCAT71((int7)(param_3 >> 8),lVar5 == 1);
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_1492ef7fc;
  }
  param_3 = 0;
LAB_1492ef7fc:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_3 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ef83a FUN_1492ef83a body=41 status=ok
// SIG undefined FUN_1492ef83a(void)

void FUN_1492ef83a(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f125c(param_1 + 0x40);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1492ef864 FUN_1492ef864 body=195 status=ok
// SIG undefined FUN_1492ef864(void)

void FUN_1492ef864(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_1492f1448(param_1 + 0x40,plVar1);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ef928 FUN_1492ef928 body=9 status=ok
// SIG undefined FUN_1492ef928(void)

void FUN_1492ef928(longlong param_1)

{
  FUN_1492f1448(param_1 + 0x40);
  return;
}



// FUNCTION 1492ef932 FUN_1492ef932 body=139 status=ok
// SIG undefined FUN_1492ef932(void)

void FUN_1492ef932(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1492ef9be(param_1,&local_28);
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



// FUNCTION 1492ef9be FUN_1492ef9be body=134 status=ok
// SIG undefined FUN_1492ef9be(void)

undefined8 * FUN_1492ef9be(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_1492f07ac();
  FUN_1444be0f2(&local_38,&DAT_14cc0bf70,uVar1);
  if (local_38 != 0) {
    FUN_1492ff8ec(local_38,local_30,param_2);
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492efa4c FUN_1492efa4c body=258 status=ok
// SIG undefined FUN_1492efa4c(void)

void FUN_1492efa4c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar2 = local_40;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492efb50(param_1,local_38,puVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492efb50 FUN_1492efb50 body=290 status=ok
// SIG undefined FUN_1492efb50(void)

ulonglong FUN_1492efb50(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  FUN_144a787a6(local_58 + 2);
  cVar3 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58 + 2);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (cVar3 != '\0') {
    local_58[0] = 0;
    local_58[1] = 0;
    FUN_144a787a6(local_58,param_2);
    FUN_1444bdec0(local_58 + 2,local_58,param_1[5]);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] == 0) {
LAB_1492efc1f:
      bVar2 = false;
    }
    else {
      plVar1 = local_58 + 3;
      cVar3 = FUN_140c44378(local_58[2],plVar1);
      if (cVar3 == '\0') goto LAB_1492efc1f;
      iVar4 = FUN_1419073b0(local_58[2],plVar1);
      if (iVar4 != 0x2f) goto LAB_1492efc1f;
      bVar2 = true;
      if (local_58[2] == 0) {
        param_3 = 0;
      }
      else {
        lVar5 = FUN_149303742(local_58[2],plVar1,param_3);
        param_3 = CONCAT71((int7)(param_3 >> 8),lVar5 == 1);
      }
    }
    if (local_58[3] != 0) {
      FUN_1400020a8();
    }
    if (bVar2) goto LAB_1492efc36;
  }
  param_3 = 0;
LAB_1492efc36:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_3 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492efc74 FUN_1492efc74 body=354 status=ok
// SIG undefined FUN_1492efc74(void)

void FUN_1492efc74(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [47];
  undefined1 local_39;
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
  local_39 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1444ba64e(param_1,local_38 + 2,local_38,local_39);
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



// FUNCTION 1492efddc FUN_1492efddc body=37 status=ok
// SIG undefined FUN_1492efddc(void)

void FUN_1492efddc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492efe02();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1492efe02 FUN_1492efe02 body=219 status=ok
// SIG undefined FUN_1492efe02(void)

ulonglong FUN_1492efe02(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  longlong local_30;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_1410836a4();
  cVar2 = FUN_140c44378(uVar1,&DAT_14cc0bfb8);
  if (cVar2 == '\0') {
    uVar4 = 0;
    goto LAB_1492efea5;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_1410836a4();
  FUN_1444be324(&local_30,&DAT_14cc0bfb8,uVar1);
  if (local_30 == 0) {
LAB_1492efe90:
    uVar4 = 0;
  }
  else {
    cVar2 = FUN_140c44378(local_30,local_28);
    if (cVar2 == '\0') goto LAB_1492efe90;
    iVar3 = FUN_1419073b0(local_30,local_28);
    if (iVar3 != 1) goto LAB_1492efe90;
    local_31 = 0;
    if (local_30 == 0) goto LAB_1492efe90;
    FUN_149302700(local_30,local_28,&local_31);
    uVar4 = CONCAT71((int7)((ulonglong)local_28 >> 8),local_31);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
LAB_1492efea5:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492efee4 FUN_1492efee4 body=178 status=ok
// SIG undefined FUN_1492efee4(void)

void FUN_1492efee4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_1492eff98(param_1,local_38);
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



// FUNCTION 1492eff98 FUN_1492eff98 body=175 status=ok
// SIG undefined FUN_1492eff98(void)

uint FUN_1492eff98(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined1 auStack_78 [32];
  longlong local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1[5];
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a787a6(local_58);
  FUN_1492f0b5e(lVar1,local_58);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a787a6(local_58,param_2);
  uVar2 = (**(code **)(*param_1 + 0x2b0))(param_1,local_58);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f004e FUN_1492f004e body=182 status=ok
// SIG undefined FUN_1492f004e(void)

void FUN_1492f004e(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_1444bb466(param_1 + 0x40,local_38);
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



// FUNCTION 1492f010c FUN_1492f010c body=182 status=ok
// SIG undefined FUN_1492f010c(void)

void FUN_1492f010c(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = (**(code **)(*param_1 + 0x2d0))(param_1,local_38);
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



// FUNCTION 1492f01ca FUN_1492f01ca body=178 status=ok
// SIG undefined FUN_1492f01ca(void)

void FUN_1492f01ca(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_1492f027e(param_1,local_38);
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



// FUNCTION 1492f027e FUN_1492f027e body=201 status=ok
// SIG undefined FUN_1492f027e(void)

ulonglong FUN_1492f027e(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_1492f082a();
  uVar5 = 0;
  uVar4 = FUN_1492f0926(uVar1,&DAT_14cc0bf88,param_2,0);
  if ((uVar4 & 1) == 0) goto LAB_1492f02c0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_1492f082a();
  FUN_1444be0f2(&local_40,&DAT_14cc0bf88,uVar1);
  if (local_40 == 0) {
LAB_1492f0332:
    uVar5 = 0;
  }
  else {
    cVar2 = FUN_140c44378(local_40,local_38);
    if (cVar2 == '\0') goto LAB_1492f0332;
    iVar3 = FUN_1419073b0(local_40,local_38);
    uVar5 = CONCAT71((int7)((ulonglong)local_38 >> 8),iVar3 == 0x12);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
LAB_1492f02c0:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f0352 FUN_1492f0352 body=165 status=ok
// SIG undefined FUN_1492f0352(void)

void FUN_1492f0352(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f03f8(param_1,local_24 != 0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f03f8 FUN_1492f03f8 body=205 status=ok
// SIG undefined FUN_1492f03f8(void)

ulonglong FUN_1492f03f8(longlong param_1,undefined1 param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40 [2];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  local_29 = param_2;
  FUN_1410836a4();
  uVar5 = 0;
  uVar4 = FUN_14112c19a(uVar1,&DAT_14cc0bfb8,&local_29,0);
  if ((uVar4 & 1) == 0) goto LAB_1492f043e;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_1410836a4();
  FUN_1444be324(&local_48,&DAT_14cc0bfb8,uVar1);
  if (local_48 == 0) {
LAB_1492f04b0:
    uVar5 = 0;
  }
  else {
    cVar2 = FUN_140c44378(local_48,local_40);
    if (cVar2 == '\0') goto LAB_1492f04b0;
    iVar3 = FUN_1419073b0(local_48,local_40);
    uVar5 = CONCAT71((int7)((ulonglong)local_40 >> 8),iVar3 == 1);
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
LAB_1492f043e:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f04cc FUN_1492f04cc body=178 status=ok
// SIG undefined FUN_1492f04cc(void)

void FUN_1492f04cc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_1492f0580(param_1,local_38);
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



// FUNCTION 1492f0580 FUN_1492f0580 body=201 status=ok
// SIG undefined FUN_1492f0580(void)

ulonglong FUN_1492f0580(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_1492f08a8();
  uVar5 = 0;
  uVar4 = FUN_1492f0926(uVar1,&DAT_14cc0bfa0,param_2,0);
  if ((uVar4 & 1) == 0) goto LAB_1492f05c2;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_1492f08a8();
  FUN_1444be0f2(&local_40,&DAT_14cc0bfa0,uVar1);
  if (local_40 == 0) {
LAB_1492f0634:
    uVar5 = 0;
  }
  else {
    cVar2 = FUN_140c44378(local_40,local_38);
    if (cVar2 == '\0') goto LAB_1492f0634;
    iVar3 = FUN_1419073b0(local_40,local_38);
    uVar5 = CONCAT71((int7)((ulonglong)local_38 >> 8),iVar3 == 0x12);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
LAB_1492f05c2:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f064e FUN_1492f064e body=75 status=ok
// SIG undefined FUN_1492f064e(void)

void FUN_1492f064e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1492f069a(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f069a FUN_1492f069a body=272 status=ok
// SIG undefined FUN_1492f069a(void)

void FUN_1492f069a(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48 [2];
  longlong local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1492f1773(param_2,*(undefined8 *)(param_1 + 0x28));
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) goto LAB_1492f06c8;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_1492f07ac();
  FUN_1444be0f2(&local_38,&DAT_14cc0bf70,uVar1);
  if (local_38 == 0) {
LAB_1492f0732:
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  else {
    cVar2 = FUN_140c44378(local_38,local_30);
    if (cVar2 == '\0') goto LAB_1492f0732;
    iVar3 = FUN_1419073b0(local_38,local_30);
    if (iVar3 != 0x12) goto LAB_1492f0732;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    FUN_1492f082a();
    FUN_1444be0f2(&local_50,&DAT_14cc0bf88,uVar1);
    if (local_50 == 0) {
LAB_1492f0795:
      bVar4 = false;
    }
    else {
      cVar2 = FUN_140c44378(local_50,local_48);
      if (cVar2 == '\0') goto LAB_1492f0795;
      iVar3 = FUN_1419073b0(local_50,local_48);
      bVar4 = iVar3 == 0x12;
    }
    *(bool *)(param_1 + 0x38) = bVar4;
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
LAB_1492f06c8:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f07ac FUN_1492f07ac body=125 status=ok
// SIG undefined FUN_1492f07ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1492f07ac(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0bf80) {
    FUN_144b3d300(&DAT_14cc0bf80);
    if (DAT_14cc0bf80 == -1) {
      DAT_14cc0bf70 = 0;
      _DAT_14cc0bf78 = 0;
      FUN_14020fad6(&DAT_14cc0bf70,L"__UNQ_ID_");
      atexit((_func_5014 *)&LAB_1444ba8cc);
      _Init_thread_footer(&DAT_14cc0bf80);
    }
  }
  return &DAT_14cc0bf70;
}



// FUNCTION 1492f082a FUN_1492f082a body=125 status=ok
// SIG undefined FUN_1492f082a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1492f082a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0bf98) {
    FUN_144b3d300(&DAT_14cc0bf98);
    if (DAT_14cc0bf98 == -1) {
      DAT_14cc0bf88 = 0;
      _DAT_14cc0bf90 = 0;
      FUN_14020fad6(&DAT_14cc0bf88,L"__DSPL_LBL_");
      atexit((_func_5014 *)&LAB_1444ba8dd);
      _Init_thread_footer(&DAT_14cc0bf98);
    }
  }
  return &DAT_14cc0bf88;
}



// FUNCTION 1492f08a8 FUN_1492f08a8 body=125 status=ok
// SIG undefined FUN_1492f08a8(void)

undefined8 * FUN_1492f08a8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0bfb0) {
    FUN_144b3d300(&DAT_14cc0bfb0);
    if (DAT_14cc0bfb0 == -1) {
      DAT_14cc0bfa0 = 0;
      uRam000000014cc0bfa8 = 0;
      FUN_14020fad6(&DAT_14cc0bfa0,L"__PARENT_UID_");
      atexit((_func_5014 *)&LAB_1444ba8ee);
      _Init_thread_footer(&DAT_14cc0bfb0);
    }
  }
  return &DAT_14cc0bfa0;
}



// FUNCTION 1492f0926 FUN_1492f0926 body=438 status=ok
// SIG undefined FUN_1492f0926(void)

ulonglong FUN_1492f0926(longlong *param_1,undefined8 *param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong local_60;
  undefined8 *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar1 = *(int *)(param_3 + 8);
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
  iVar4 = FUN_140c4443c(param_1,uVar3,param_2);
  if (iVar4 == -1) {
LAB_1492f09e6:
    uVar8 = (longlong)(int)(iVar1 + (uint)(iVar1 == 0)) * 2;
    local_58 = param_2;
    FUN_140c5653a(param_1,&local_60,&local_58,0);
    lVar7 = *param_1 + (longlong)(int)local_60 * 0x40;
    plVar9 = (longlong *)(lVar7 + 0x10);
    *(undefined4 *)(lVar7 + 0x20) = 0x12;
    *(ulonglong *)(lVar7 + 0x18) = uVar8;
    lVar7 = param_1[0xb];
    param_1[0xb] = uVar8 + lVar7;
    plVar5 = param_1 + 10;
    if ((ulonglong)(param_1[0xc] - lVar7) < uVar8) {
      local_68 = param_1 + 10;
      FUN_14112c458();
      plVar5 = local_68;
    }
    memset((void *)(*plVar5 + lVar7),0,uVar8);
    *plVar9 = lVar7;
  }
  else {
    lVar7 = *param_1 + (longlong)iVar4 * 0x40;
    if (lVar7 == 0) goto LAB_1492f09e6;
    uVar8 = 0x100000;
    if (*(int *)(lVar7 + 0x20) != 0x12) goto LAB_1492f0a9c;
    plVar9 = (longlong *)(*param_1 + (longlong)iVar4 * 0x40 + 0x10);
    uVar8 = 0x400000;
    if ((*plVar9 < 0) || (param_1[0xb] <= *plVar9)) goto LAB_1492f0a9c;
  }
  *(undefined4 *)((longlong)plVar9 + 0x14) = param_4;
  local_50 = &local_60;
  local_58 = (undefined8 *)&LAB_1493026ea;
  local_60 = param_3;
  uVar8 = FUN_149302366(param_1,plVar9,param_3);
  if ((uVar8 & 1) == 0) {
    FUN_1492f0b5e(param_1,param_2);
  }
LAB_1492f0a9c:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1492f0ade FUN_1492f0ade body=32 status=ok
// SIG undefined FUN_1492f0ade(void)

undefined8 FUN_1492f0ade(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"BaseNode");
  return param_2;
}



// FUNCTION 1492f0b1e FUN_1492f0b1e body=9 status=ok
// SIG undefined FUN_1492f0b1e(void)

void FUN_1492f0b1e(longlong param_1)

{
  FUN_1492f0b28(*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 1492f0b28 FUN_1492f0b28 body=54 status=ok
// SIG undefined FUN_1492f0b28(void)

void FUN_1492f0b28(longlong param_1,undefined8 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  FUN_1492ff5ec(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001492f0b57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  return;
}



// FUNCTION 1492f0b5e FUN_1492f0b5e body=180 status=ok
// SIG undefined FUN_1492f0b5e(void)

undefined8 FUN_1492f0b5e(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined8 uVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
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
  iVar3 = FUN_140c4443c(param_1,uVar2,param_2);
  uVar5 = 0x800000;
  if (iVar3 != -1) {
    if ((*param_1 + (longlong)iVar3 * 0x40 + 0x10U & 0xffffffffffffffef) != 0) {
      param_1[0xd] = param_1[0xd] + *(longlong *)(*param_1 + (longlong)iVar3 * 0x40 + 0x18);
      iVar3 = FUN_14930d6aa(param_1,param_2);
      uVar5 = 0x1000000;
      if (iVar3 != 0) {
        FUN_1492febee(param_1);
        uVar5 = 1;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return uVar5;
}



// FUNCTION 1492f0c12 FUN_1492f0c12 body=10 status=ok
// SIG undefined FUN_1492f0c12(void)

undefined8 * FUN_1492f0c12(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1492f0c1c FUN_1492f0c1c body=26 status=ok
// SIG undefined FUN_1492f0c1c(void)

undefined8 FUN_1492f0c1c(longlong param_1,undefined8 param_2)

{
  FUN_1492f0c36(*(undefined8 *)(param_1 + 0x28));
  return param_2;
}



// FUNCTION 1492f0c36 FUN_1492f0c36 body=519 status=ok
// SIG undefined FUN_1492f0c36(void)

uint * FUN_1492f0c36(longlong *param_1,uint *param_2)

{
  void *_Src;
  int iVar1;
  uint *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_138 [32];
  LPCRITICAL_SECTION local_118;
  uint *local_110;
  undefined2 *local_108;
  int local_100;
  undefined4 local_fc;
  longlong local_f8;
  ulonglong uStack_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined8 local_b8;
  uint local_6c;
  undefined8 local_68;
  uint local_60;
  uint local_5c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_118 = (LPCRITICAL_SECTION)(param_1 + 0xf);
  local_110 = param_2;
  EnterCriticalSection(local_118);
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1492ff5ec(param_1,&local_f8);
  FUN_14930e1d1(local_f8,uStack_f0 & 0xffffffff);
  lVar3 = local_f8;
  local_d0 = 0x67452301;
  uStack_cc = 0xefcdab89;
  uStack_c8 = 0x98badcfe;
  uStack_c4 = 0x10325476;
  local_c0 = 0xc3d2e1f0;
  local_b8 = 0;
  lVar7 = (longlong)(int)uStack_f0;
  if (lVar7 != 0) {
    lVar9 = 0;
    do {
      local_108 = (undefined2 *)0x0;
      local_100 = *(int *)(lVar3 + 8 + lVar9);
      lVar8 = (longlong)local_100;
      _Src = *(void **)(lVar3 + lVar9);
      if (lVar8 == 0) {
        local_fc = 0;
        iVar5 = 0;
        puVar6 = &DAT_149dfb77a;
      }
      else {
        FUN_1446dd670(&local_108,local_100,0);
        memcpy(local_108,_Src,lVar8 * 2);
        puVar6 = &DAT_149dfb77a;
        iVar5 = local_100;
        if (local_100 != 0) {
          puVar6 = local_108;
        }
      }
      iVar1 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar1 = 0;
      }
      uVar4 = FUN_144a49b4a(iVar1,puVar6);
      iVar5 = FUN_140c4443c(param_1,uVar4);
      if (iVar5 == -1) {
        lVar8 = 0;
      }
      else {
        lVar8 = (longlong)iVar5 * 0x40 + *param_1;
      }
      if ((*(byte *)(lVar8 + 0x24) & 1) == 0) {
        local_e8 = *(undefined4 *)(lVar8 + 0x28);
        local_e4 = *(undefined4 *)(lVar8 + 0x2c);
        local_e0 = *(undefined4 *)(lVar8 + 0x30);
        local_dc = *(undefined4 *)(lVar8 + 0x34);
        FUN_140c54e34(&local_d0,&local_e8);
      }
      if (local_108 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar9 = lVar9 + 0x10;
    } while (lVar7 * 0x10 != lVar9);
  }
  FUN_140c54d7a(&local_d0);
  puVar2 = local_110;
  *local_110 = local_5c ^ local_6c;
  *(undefined8 *)(local_110 + 1) = local_68;
  local_110[3] = local_60;
  FUN_149307011(local_f8,uStack_f0 & 0xffffffff);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection(local_118);
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1492f0e3e FUN_1492f0e3e body=851 status=ok
// SIG undefined FUN_1492f0e3e(void)

longlong * FUN_1492f0e3e(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  wchar_t *_Str;
  char cVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined1 auStack_1b8 [32];
  longlong local_198 [2];
  longlong local_188 [2];
  longlong local_178 [2];
  longlong local_168;
  undefined8 uStack_160;
  longlong local_158 [3];
  undefined8 uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  longlong local_d8;
  longlong local_d0 [15];
  longlong local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  longlong lVar6;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_1492ee7cc();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_145a9bc78();
  cVar2 = FUN_140c44378(uVar1,&DAT_14cc0c000);
  if (cVar2 != '\0') {
    FUN_145a9bc78();
    FUN_1444be0f2(&local_d8,&DAT_14cc0c000);
    if (local_d8 != 0) {
      cVar2 = FUN_140c44378(local_d8,local_d0);
      if ((cVar2 != '\0') && (iVar4 = FUN_1419073b0(local_d8,local_d0), iVar4 == 0x12)) {
        local_138 = 0;
        uStack_130 = 0;
        if (local_d8 == 0) {
          uStack_130._0_4_ = 0;
        }
        else {
          FUN_1492ff8ec(local_d8,local_d0,&local_138);
        }
        iVar4 = (int)uStack_130 + -1;
        if ((int)uStack_130 == 0) {
          iVar4 = 0;
        }
        FUN_1402980a2(param_2,local_138,iVar4);
        if (local_138 != 0) {
          FUN_1400020a8();
        }
      }
    }
    if (local_d0[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((int)param_2[1] - 0x102U < 0x7ffffeff) {
    _Str = (wchar_t *)*param_2;
    local_58 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_50 = 0;
      local_48 = 0;
    }
    else {
      sVar5 = wcslen(_Str);
      FUN_1446fe5a4(&local_d8,_Str,sVar5 & 0xffffffff,1);
    }
    FUN_145c422f6(&local_138);
    FUN_145c4230c(&local_138,local_50,(longlong)local_48);
    FUN_1414fe9a8(&local_138,local_158 + 2);
    local_168 = local_158[2];
    uStack_160 = uStack_140;
    local_158[0] = 0;
    local_158[1] = 0;
    FUN_1407c869a(&local_168,local_158,9);
    iVar4 = (int)param_2[1];
    puVar8 = &DAT_149dfb77a;
    puVar7 = &DAT_149dfb77a;
    if (iVar4 != 0) {
      puVar7 = (undefined2 *)*param_2;
    }
    iVar3 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar3 = 0;
    }
    lVar6 = (longlong)iVar3;
    if (0x72 < iVar3) {
      iVar3 = 0x73;
    }
    iVar4 = 0;
    if (iVar3 < 1) {
      iVar3 = iVar4;
    }
    FUN_140056680(local_178,(longlong)puVar7 + (lVar6 * 2 - (ulonglong)(uint)(iVar3 * 2)));
    if ((int)param_2[1] != 0) {
      puVar8 = (undefined2 *)*param_2;
      iVar4 = (int)param_2[1] + -1;
    }
    iVar3 = 0x73;
    if (iVar4 < 0x73) {
      iVar3 = iVar4;
    }
    if (iVar3 < 1) {
      iVar3 = 0;
    }
    FUN_14006620a(local_198,puVar8,iVar3);
    FUN_144a7dea0(local_188,local_198,local_158);
    FUN_1401c7f3e(&local_168,local_188,local_178);
    if (&local_168 == param_2) {
      if (local_168 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_168;
      local_168 = 0;
      *(undefined4 *)(param_2 + 1) = (undefined4)uStack_160;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_160._4_4_;
      uStack_160 = 0;
    }
    if (local_188[0] != 0) {
      FUN_1400020a8();
    }
    if (local_198[0] != 0) {
      FUN_1400020a8();
    }
    if (local_178[0] != 0) {
      FUN_1400020a8();
    }
    if (local_158[0] != 0) {
      FUN_1400020a8();
    }
    FUN_145c422f4(&local_138);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f1192 FUN_1492f1192 body=201 status=ok
// SIG undefined FUN_1492f1192(void)

ulonglong FUN_1492f1192(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_145a9bc78();
  uVar5 = 0;
  uVar4 = FUN_1492f0926(uVar1,&DAT_14cc0c000,param_2,0);
  if ((uVar4 & 1) == 0) goto LAB_1492f11d4;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_145a9bc78();
  FUN_1444be0f2(&local_40,&DAT_14cc0c000,uVar1);
  if (local_40 == 0) {
LAB_1492f1246:
    uVar5 = 0;
  }
  else {
    cVar2 = FUN_140c44378(local_40,local_38);
    if (cVar2 == '\0') goto LAB_1492f1246;
    iVar3 = FUN_1419073b0(local_40,local_38);
    uVar5 = CONCAT71((int7)((ulonglong)local_38 >> 8),iVar3 == 0x12);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
LAB_1492f11d4:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f125c FUN_1492f125c body=490 status=ok
// SIG undefined FUN_1492f125c(void)

undefined4 FUN_1492f125c(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  void *pvVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  void *local_60;
  int local_58;
  undefined4 uStack_54;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar3 = (longlong *)param_1[1];
  uVar9 = 0;
  if (plVar3 != (longlong *)0x0) {
    iVar8 = (int)plVar3[1];
    do {
      uVar9 = 0;
      if (iVar8 == 0) goto LAB_1492f13f3;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar11 = iVar8 == iVar6;
      if (bVar11) {
        *(int *)(plVar3 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar11);
    lVar4 = *param_1;
    if (lVar4 == 0) {
      uVar9 = 0;
    }
    else {
      local_44 = 0;
      local_60 = (void *)0x0;
      local_58 = (int)param_1[3];
      lVar10 = (longlong)local_58;
      pvVar5 = (void *)param_1[2];
      if (lVar10 == 0) {
        uStack_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,pvVar5,lVar10 * 2);
      }
      cVar7 = FUN_140c44378(lVar4,&local_60);
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar9 = 0;
      if (cVar7 != '\0') {
        local_70 = (void *)0x0;
        local_68 = (int)param_1[3];
        lVar10 = (longlong)local_68;
        pvVar5 = (void *)param_1[2];
        if (lVar10 == 0) {
          local_64 = 0;
        }
        else {
          FUN_1446dd670(&local_70,local_68,0);
          memcpy(local_70,pvVar5,lVar10 * 2);
        }
        FUN_1444bd3c6(&local_60,&local_70,lVar4);
        if (local_70 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_60 != (void *)0x0) {
          cVar7 = FUN_140c44378(local_60,&local_58);
          if (((cVar7 != '\0') && (iVar8 = FUN_1419073b0(local_60,&local_58), iVar8 == 0xc)) &&
             (local_60 != (void *)0x0)) {
            FUN_1493027c6(local_60,&local_58,&local_44);
          }
        }
        uVar9 = local_44;
        if (CONCAT44(uStack_54,local_58) != 0) {
          FUN_1400020a8();
          uVar9 = local_44;
        }
      }
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
LAB_1492f13f3:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 1492f1448 FUN_1492f1448 body=810 status=ok
// SIG undefined FUN_1492f1448(void)

void FUN_1492f1448(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  void *pvVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_c8 [32];
  void *local_a8;
  int local_a0;
  undefined4 uStack_9c;
  longlong local_90 [2];
  void *local_80;
  int local_78;
  undefined4 uStack_74;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar10 = (longlong *)param_1[1];
  bVar6 = true;
  if (plVar10 == (longlong *)0x0) {
LAB_1492f15c2:
    plVar10 = (longlong *)0x0;
LAB_1492f15c4:
    FUN_1447a1747(*param_2,(int)param_2[1]);
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != 0) {
      FUN_1408be2c4(param_2,0);
    }
    if (bVar6) goto LAB_1492f1608;
  }
  else {
    iVar8 = (int)plVar10[1];
    do {
      if (iVar8 == 0) goto LAB_1492f15c2;
      LOCK();
      iVar9 = (int)plVar10[1];
      bVar12 = iVar8 == iVar9;
      if (bVar12) {
        *(int *)(plVar10 + 1) = iVar8 + 1;
        iVar9 = iVar8;
      }
      iVar8 = iVar9;
      UNLOCK();
    } while (!bVar12);
    lVar4 = *param_1;
    if (lVar4 == 0) {
      bVar6 = false;
      goto LAB_1492f15c4;
    }
    local_64 = 0;
    local_80 = (void *)0x0;
    local_78 = (int)param_1[3];
    lVar11 = (longlong)local_78;
    pvVar5 = (void *)param_1[2];
    if (lVar11 == 0) {
      uStack_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,pvVar5,lVar11 * 2);
    }
    cVar7 = FUN_140c44378(lVar4,&local_80);
    if (local_80 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (cVar7 == '\0') {
      FUN_1447a1747(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_1408be2c4(param_2,0);
      }
    }
    else {
      local_a8 = (void *)0x0;
      local_a0 = (int)param_1[3];
      lVar11 = (longlong)local_a0;
      pvVar5 = (void *)param_1[2];
      if (lVar11 == 0) {
        uStack_9c = 0;
      }
      else {
        FUN_1446dd670(&local_a8,local_a0,0);
        memcpy(local_a8,pvVar5,lVar11 * 2);
      }
      FUN_1444bd3c6(&local_80,&local_a8,lVar4);
      if (local_a8 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_80 != (void *)0x0) {
        cVar7 = FUN_140c44378(local_80,&local_78);
        if ((cVar7 != '\0') && (iVar8 = FUN_1419073b0(local_80,&local_78), iVar8 == 0xc)) {
          iVar8 = 0;
          if (local_80 != (void *)0x0) {
            FUN_1493027c6(local_80,&local_78,&local_64);
            iVar8 = local_64;
          }
          FUN_14620bf46(param_2,iVar8);
          if (0 < local_64) {
            iVar8 = 0;
            do {
              FUN_1493038d0(param_1,local_90,iVar8);
              FUN_1444be0f2(&local_a8,local_90,lVar4);
              if (((local_a8 != (void *)0x0) &&
                  (cVar7 = FUN_140c44378(local_a8,&local_a0), cVar7 != '\0')) &&
                 (iVar9 = FUN_1419073b0(local_a8,&local_a0), iVar9 == 0x12)) {
                iVar9 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar9 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar9 + 1U) {
                  FUN_1447a1bd6(param_2,iVar9);
                }
                lVar11 = *param_2;
                puVar3 = (undefined8 *)(lVar11 + (longlong)iVar9 * 0x10);
                *puVar3 = 0;
                puVar3[1] = 0;
                if (local_a8 != (void *)0x0) {
                  FUN_1492ff8ec(local_a8,&local_a0,lVar11 + (longlong)iVar9 * 0x10);
                }
              }
              if (CONCAT44(uStack_9c,local_a0) != 0) {
                FUN_1400020a8();
              }
              if (local_90[0] != 0) {
                FUN_1400020a8();
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < local_64);
          }
        }
      }
      if (CONCAT44(uStack_74,local_78) != 0) {
        FUN_1400020a8();
      }
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
LAB_1492f1608:
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492f1773 FUN_1492f1773 body=192 status=ok
// SIG undefined FUN_1492f1773(void)

longlong * FUN_1492f1773(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined8 *)(param_2 + 0x68),8);
    }
    else {
      thunk_FUN_146821949(param_1);
    }
  }
  else {
    *(undefined8 *)(param_2 + 0x68) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x70),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x70) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_1493007a6(param_1,param_2);
  FUN_145ad9e74(param_1,param_2 + 0x50);
  return param_1;
}



// FUNCTION 1492f1834 FUN_1492f1834 body=1378 status=ok
// SIG undefined FUN_1492f1834(void)

void FUN_1492f1834(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined2 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_e8 [44];
  int local_bc;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  LPCRITICAL_SECTION local_a0;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_98 = (LPCRITICAL_SECTION)(param_2 + 0xf);
  local_b0 = param_4;
  EnterCriticalSection(local_98);
  local_a0 = (LPCRITICAL_SECTION)(param_1 + 0xf);
  EnterCriticalSection(local_a0);
  local_a8 = param_1 + 2;
  local_68 = (undefined2 *)0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = local_a8;
  if ((int)param_1[5] == 0) {
    local_bc = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    local_bc = (int)param_1[5];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (int)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = param_1;
  if ((iStack_54 != local_bc) || (uStack_60 != local_a8)) {
    do {
      lVar12 = *local_90;
      lVar11 = (longlong)iStack_74 * 0x40;
      local_68 = (undefined2 *)0x0;
      uVar3 = *(uint *)(lVar12 + 8 + lVar11);
      pvVar4 = *(void **)(lVar12 + lVar11);
      uStack_60 = (longlong *)CONCAT44(uStack_60._4_4_,uVar3);
      if ((longlong)(int)uVar3 == 0) {
        uStack_60 = (longlong *)(ulonglong)uVar3;
        puVar10 = &DAT_149dfb77a;
        iVar7 = 0;
      }
      else {
        FUN_1446dd670(&local_68,uVar3,0);
        memcpy(local_68,pvVar4,(longlong)(int)uVar3 * 2);
        puVar10 = local_68;
        iVar7 = (int)uStack_60;
        if ((int)uStack_60 == 0) {
          puVar10 = &DAT_149dfb77a;
        }
      }
      iVar8 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar8 = 0;
      }
      uVar6 = FUN_144a49b4a(iVar8,puVar10);
      iVar7 = FUN_140c4443c(param_2,uVar6,&local_68);
      lVar9 = (longlong)iVar7 * 0x40 + *param_2;
      if (lVar9 == 0 || iVar7 == -1) {
        iVar7 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar7 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar7 + 1U) {
          FUN_14930e78e(param_3,iVar7);
        }
        lVar12 = *param_3;
LAB_1492f1a71:
        puVar10 = local_68;
        lVar11 = (longlong)iVar7 * 0x10;
        puVar2 = (undefined8 *)(lVar12 + lVar11);
        *(undefined8 *)(lVar12 + lVar11) = 0;
        lVar9 = (longlong)(int)uStack_60;
        *(int *)(lVar12 + 8 + lVar11) = (int)uStack_60;
        if (lVar9 == 0) {
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar2,(ulonglong)uStack_60 & 0xffffffff,0);
          memcpy((void *)*puVar2,puVar10,lVar9 * 2);
        }
      }
      else {
        lVar12 = lVar12 + lVar11;
        if ((((*(int *)(lVar12 + 0x28) != *(int *)(lVar9 + 0x28)) ||
             (*(int *)(lVar12 + 0x2c) != *(int *)(lVar9 + 0x2c))) ||
            (*(int *)(lVar12 + 0x30) != *(int *)(lVar9 + 0x30))) ||
           (*(int *)(lVar12 + 0x34) != *(int *)(lVar9 + 0x34))) {
          iVar7 = (int)param_5[1];
          *(uint *)(param_5 + 1) = iVar7 + 1U;
          if (*(uint *)((longlong)param_5 + 0xc) < iVar7 + 1U) {
            FUN_14930e78e(param_5,iVar7);
          }
          lVar12 = *param_5;
          goto LAB_1492f1a71;
        }
      }
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != param_1 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != local_a8 || iStack_74 != local_bc));
  }
  plVar1 = param_2 + 2;
  local_68 = (undefined2 *)&DAT_100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = (int)param_2[5];
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (int)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_b8 = param_2;
  local_90 = param_2;
  if ((iStack_54 != iVar7) || (uStack_60 != plVar1)) {
    do {
      local_68 = (undefined2 *)0x0;
      uVar3 = *(uint *)(*local_90 + 8 + (longlong)iStack_74 * 0x40);
      pvVar4 = *(void **)(*local_90 + (longlong)iStack_74 * 0x40);
      uStack_60 = (longlong *)CONCAT44(uStack_60._4_4_,uVar3);
      if ((longlong)(int)uVar3 == 0) {
        uStack_60 = (longlong *)(ulonglong)uVar3;
        puVar10 = &DAT_149dfb77a;
        iVar8 = 0;
      }
      else {
        FUN_1446dd670(&local_68,uVar3,0);
        memcpy(local_68,pvVar4,(longlong)(int)uVar3 * 2);
        puVar10 = local_68;
        iVar8 = (int)uStack_60;
        if ((int)uStack_60 == 0) {
          puVar10 = &DAT_149dfb77a;
        }
      }
      iVar5 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar5 = 0;
      }
      uVar6 = FUN_144a49b4a(iVar5,puVar10);
      iVar8 = FUN_140c4443c(param_1,uVar6,&local_68);
      if ((iVar8 == -1) || ((longlong)iVar8 * 0x40 + *param_1 == 0)) {
        iVar8 = (int)local_b0[1];
        *(uint *)(local_b0 + 1) = iVar8 + 1U;
        if (*(uint *)((longlong)local_b0 + 0xc) < iVar8 + 1U) {
          FUN_14930e78e(local_b0,iVar8);
        }
        puVar10 = local_68;
        lVar12 = *local_b0;
        lVar11 = (longlong)iVar8 * 0x10;
        puVar2 = (undefined8 *)(lVar12 + lVar11);
        *(undefined8 *)(lVar12 + lVar11) = 0;
        lVar9 = (longlong)(int)uStack_60;
        *(int *)(lVar12 + 8 + lVar11) = (int)uStack_60;
        if (lVar9 == 0) {
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
          param_2 = local_b8;
        }
        else {
          FUN_1446dd670(puVar2,(ulonglong)uStack_60 & 0xffffffff,0);
          memcpy((void *)*puVar2,puVar10,lVar9 * 2);
          param_2 = local_b8;
        }
      }
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != param_2 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || iStack_74 != iVar7));
  }
  LeaveCriticalSection(local_a0);
  LeaveCriticalSection(local_98);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492f1d98 FUN_1492f1d98 body=13 status=ok
// SIG undefined FUN_1492f1d98(void)

void FUN_1492f1d98(longlong param_1,longlong param_2)

{
  FUN_1492f1da6(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1492f1da6 FUN_1492f1da6 body=612 status=ok
// SIG undefined FUN_1492f1da6(void)

void FUN_1492f1da6(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  longlong lVar8;
  longlong lVar9;
  size_t _Size;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  LPCRITICAL_SECTION local_70;
  LPCRITICAL_SECTION local_68;
  longlong *local_60;
  undefined8 *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = (LPCRITICAL_SECTION)(param_1 + 0xf);
  EnterCriticalSection(local_68);
  local_70 = (LPCRITICAL_SECTION)(param_2 + 0xf);
  EnterCriticalSection(local_70);
  if ((longlong)*(int *)(param_3 + 1) != 0) {
    puVar13 = (undefined8 *)*param_3;
    plVar1 = param_2 + 10;
    lVar9 = (longlong)*(int *)(param_3 + 1) << 4;
    local_60 = param_2;
    do {
      iVar5 = *(int *)(puVar13 + 1);
      puVar7 = &DAT_149dfb77a;
      if (iVar5 != 0) {
        puVar7 = (undefined2 *)*puVar13;
      }
      iVar3 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar3 = 0;
      }
      uVar4 = FUN_144a49b4a(iVar3,puVar7);
      iVar5 = FUN_140c4443c(param_1,uVar4,puVar13);
      lVar10 = 0;
      if (iVar5 != -1) {
        lVar10 = (longlong)iVar5 * 0x40 + *param_1;
      }
      if (lVar10 != 0) {
        iVar5 = *(int *)(puVar13 + 1);
        puVar7 = &DAT_149dfb77a;
        if (iVar5 != 0) {
          puVar7 = (undefined2 *)*puVar13;
        }
        iVar3 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar3 = 0;
        }
        uVar4 = FUN_144a49b4a(iVar3,puVar7);
        iVar5 = FUN_140c4443c(param_2,uVar4,puVar13);
        plVar6 = (longlong *)0x0;
        if (iVar5 != -1) {
          plVar6 = (longlong *)((longlong)iVar5 * 0x40 + *param_2);
        }
        plVar12 = plVar6 + 2;
        if (plVar6 != (longlong *)0x0) {
          plVar6 = plVar12;
        }
        if ((-1 < *(longlong *)(lVar10 + 0x10)) && (*(longlong *)(lVar10 + 0x10) < param_1[0xb])) {
          iVar5 = *(int *)(lVar10 + 0x20);
          _Size = *(size_t *)(lVar10 + 0x18);
          if (plVar6 == (longlong *)0x0) {
            local_78 = _Size;
            local_58 = puVar13;
            FUN_140c5653a(param_2,&local_4c,&local_58,0);
            lVar2 = *param_2;
            lVar11 = (longlong)local_4c * 0x40;
            *(int *)(lVar2 + 0x20 + lVar11) = iVar5;
            *(ulonglong *)(lVar2 + 0x18 + lVar11) = local_78;
            lVar8 = param_2[0xb];
            param_2[0xb] = local_78 + lVar8;
            if ((ulonglong)(param_2[0xc] - lVar8) < local_78) {
              FUN_14112c458(plVar1);
            }
            plVar12 = (longlong *)(lVar11 + lVar2 + 0x10);
            memset((void *)(*plVar1 + lVar8),0,local_78);
            *plVar12 = lVar8;
            param_2 = local_60;
            _Size = local_78;
          }
          else {
            if (((((int)plVar6[2] != iVar5) || (plVar6[1] != _Size)) || (*plVar6 < 0)) ||
               (param_2[0xb] <= *plVar6)) goto LAB_1492f1fc0;
            lVar8 = *plVar12;
          }
          *(undefined4 *)((longlong)plVar12 + 0x14) = *(undefined4 *)(lVar10 + 0x24);
          lVar2 = *(longlong *)(lVar10 + 0x30);
          plVar12[3] = *(longlong *)(lVar10 + 0x28);
          plVar12[4] = lVar2;
          memcpy((void *)(lVar8 + *plVar1),(void *)(param_1[10] + *(longlong *)(lVar10 + 0x10)),
                 _Size);
        }
      }
LAB_1492f1fc0:
      puVar13 = puVar13 + 2;
      lVar9 = lVar9 + -0x10;
    } while (lVar9 != 0);
  }
  LeaveCriticalSection(local_70);
  LeaveCriticalSection(local_68);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f200c FUN_1492f200c body=16 status=ok
// SIG undefined FUN_1492f200c(void)

void FUN_1492f200c(longlong param_1,longlong param_2)

{
  FUN_1492f201c(*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_1 + 0x28));
  return;
}



// FUNCTION 1492f201c FUN_1492f201c body=118 status=ok
// SIG undefined FUN_1492f201c(void)

longlong FUN_1492f201c(longlong param_1,longlong param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x78));
  FUN_14930100a(param_1,param_2);
  FUN_147d44eda(param_1 + 0x50,param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x78));
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  return param_1;
}



// FUNCTION 1492f2092 FUN_1492f2092 body=339 status=ok
// SIG undefined FUN_1492f2092(void)

longlong FUN_1492f2092(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar7 = *(uint *)(param_3 + 1);
  lVar9 = *param_3;
  uVar8 = *(undefined4 *)((longlong)param_3 + 0xc);
  local_68 = param_1;
LAB_1492f20cc:
  do {
    do {
      local_58 = lVar9;
      local_50 = uVar7;
      local_4c = uVar8;
      uVar3 = FUN_144aff2e5(&local_58,0x2e,0);
      if (uVar3 == 0xffffffff) {
        uVar3 = uVar7;
      }
      lVar6 = lVar9 + 2 + (longlong)(int)uVar3 * 2;
      if ((int)uVar7 <= (int)uVar3) {
        lVar6 = 0;
      }
      bVar10 = (int)uVar7 <= (int)uVar3;
      uVar7 = ~uVar3 + uVar7;
      if (bVar10) {
        uVar7 = 0;
      }
      FUN_1446f82e2(&local_60,(longlong)(int)uVar3,lVar9,1);
      lVar4 = FUN_140f1fabf(param_2,local_60);
      if ((int)uVar7 < 1) {
        if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return lVar4;
      }
      lVar9 = lVar6;
      uVar8 = 0;
    } while (lVar4 == 0);
    lVar6 = *(longlong *)(lVar4 + 8);
    lVar5 = FUN_1446dcc8c();
    plVar2 = local_68;
    if (*(ulonglong *)(lVar5 + 8) == 0) goto LAB_1492f215b;
  } while ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0);
  goto LAB_1492f218c;
LAB_1492f215b:
  bVar10 = lVar6 != 0;
  if (lVar6 != lVar5 && bVar10) {
    do {
      lVar6 = *(longlong *)(lVar6 + 0x30);
      bVar10 = lVar6 != 0;
      if (lVar6 == lVar5) break;
    } while (lVar6 != 0);
  }
  uVar8 = 0;
  if (bVar10) {
LAB_1492f218c:
    param_2 = *(undefined8 *)(lVar4 + 0x70);
    iVar1 = *(int *)(lVar4 + 0x44);
    lVar6 = *local_68;
    (*(code *)(&PTR_FUN_14bc2f800)[*(byte *)(local_68 + 1)])(local_68);
    *plVar2 = iVar1 + lVar6;
    *(undefined1 *)(plVar2 + 1) = 1;
    uVar8 = 0;
  }
  goto LAB_1492f20cc;
}



// FUNCTION 1492f21e6 FUN_1492f21e6 body=201 status=ok
// SIG undefined FUN_1492f21e6(void)

void FUN_1492f21e6(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_1492f22b0(param_1,&local_38,local_28);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  *param_3 = local_38;
  *(undefined4 *)(param_3 + 1) = local_30;
  *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f22b0 FUN_1492f22b0 body=347 status=ok
// SIG undefined FUN_1492f22b0(void)

longlong * FUN_1492f22b0(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  uint local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
  }
  FUN_1492ef9be(param_3,&local_60);
  if (local_58 < 2) {
    *param_2 = 0;
    param_2[1] = 0;
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar1 = FUN_144a49b4a(local_58 - 1,local_60);
    iVar2 = FUN_149303b64(param_1 + 0x28,uVar1,&local_60);
    if (iVar2 == -1) {
      FUN_1492ee7cc(param_3,&local_50);
      if (local_50 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if ((int)local_48 < 2) {
        FUN_140056680(&local_50,&DAT_149e43d78);
        FUN_1492f027e(param_3,&local_50);
        if (local_50 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      local_68 = param_3;
      if (DAT_14c950c29 == '\x01') {
        FUN_14689c22e(param_3);
      }
      local_48 = &local_68;
      local_50 = &local_60;
      FUN_149303c30(param_1 + 0x28,local_3c,&local_50,0);
    }
    *param_2 = local_60;
    *(uint *)(param_2 + 1) = local_58;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_54;
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1492f2422 FUN_1492f2422 body=554 status=ok
// SIG undefined FUN_1492f2422(void)

void FUN_1492f2422(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  void *_Src;
  int iVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  int iVar11;
  longlong lVar12;
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
  if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
    FUN_140d08692(param_1 + 0x78);
    FUN_140d087d8(param_1 + 0x78);
  }
  plVar1 = (longlong *)(param_1 + 0x28);
  lVar2 = param_1 + 0x38;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar11 = *(int *)(param_1 + 0x50);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (int)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar11) || (uStack_60 != lVar2)) {
    do {
      lVar6 = *local_90;
      lVar12 = (longlong)iStack_74 * 0x20;
      iVar5 = *(int *)(lVar6 + 8 + lVar12);
      puVar10 = &DAT_149dfb77a;
      if (iVar5 != 0) {
        puVar10 = *(undefined2 **)(lVar6 + lVar12);
      }
      puVar3 = (undefined8 *)(lVar6 + lVar12);
      iVar7 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar7 = 0;
      }
      uVar8 = FUN_144a49b4a(iVar7,puVar10);
      FUN_140e10654(param_1 + 0x78,uVar8,puVar3);
      FUN_1492ef4c6(*(undefined8 *)(lVar6 + 0x10 + lVar12),&local_68);
      if (1 < (int)uStack_60) {
        uVar8 = FUN_144a49b4a((int)uStack_60 + -1,local_68);
        plVar9 = (longlong *)FUN_140e10654(param_1 + 0x78,uVar8,&local_68);
        iVar5 = (int)plVar9[1];
        *(uint *)(plVar9 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)plVar9 + 0xc) < iVar5 + 1U) {
          FUN_1447a1bd6(plVar9,iVar5);
        }
        lVar6 = *plVar9;
        lVar12 = (longlong)iVar5 * 0x10;
        puVar4 = (undefined8 *)(lVar6 + lVar12);
        *(undefined8 *)(lVar6 + lVar12) = 0;
        iVar5 = *(int *)(puVar3 + 1);
        _Src = (void *)*puVar3;
        *(int *)(lVar6 + 8 + lVar12) = iVar5;
        if ((longlong)iVar5 == 0) {
          *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar4,iVar5,0);
          memcpy((void *)*puVar4,_Src,(longlong)iVar5 * 2);
        }
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar11));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492f264e FUN_1492f264e body=179 status=ok
// SIG undefined FUN_1492f264e(void)

void FUN_1492f264e(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = FUN_1492f2702(param_1,local_38);
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



// FUNCTION 1492f2702 FUN_1492f2702 body=166 status=ok
// SIG undefined FUN_1492f2702(void)

undefined8 FUN_1492f2702(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  longlong *plVar8;
  
  if (1 < *(uint *)(param_2 + 1)) {
    plVar8 = (longlong *)(param_1 + 0x28);
    uVar2 = FUN_144a49b4a(*(uint *)(param_2 + 1) - 1,*param_2);
    iVar3 = FUN_149303b64(plVar8,uVar2,param_2);
    if (iVar3 != -1) {
      iVar3 = *(int *)(param_2 + 1);
      if (iVar3 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      else {
        puVar6 = (undefined2 *)*param_2;
      }
      uVar7 = 0;
      uVar5 = (ulonglong)(iVar3 - 1);
      if (iVar3 == 0) {
        uVar5 = uVar7;
      }
      uVar2 = FUN_144a49b4a(uVar5,puVar6);
      iVar3 = FUN_149303b64(plVar8,uVar2,param_2);
      if (iVar3 != -1) {
        uVar7 = (longlong)iVar3 * 0x20 + *plVar8;
      }
      if (*(longlong *)(uVar7 + 0x10) != 0) {
        uVar4 = FUN_14119ce8a();
        cVar1 = FUN_144a7ca96((undefined8 *)(uVar7 + 0x10),uVar4);
        if (cVar1 != '\0') {
          return *(undefined8 *)(uVar7 + 0x10);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1492f27ae FUN_1492f27ae body=268 status=ok
// SIG undefined FUN_1492f27ae(void)

void FUN_1492f27ae(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
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
  uVar1 = FUN_1492f28bc(param_1,local_48 + 2,local_48);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f28bc FUN_1492f28bc body=566 status=ok
// SIG undefined FUN_1492f28bc(void)

undefined8 FUN_1492f28bc(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  uint uVar1;
  void *pvVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  ushort uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ushort uVar12;
  ulonglong uVar13;
  undefined1 auStack_88 [32];
  void *local_68;
  uint local_60;
  undefined2 *local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (undefined2 *)0x0;
  local_50 = *(uint *)(param_2 + 1);
  lVar9 = (longlong)(int)local_50;
  pvVar2 = (void *)*param_2;
  if (lVar9 == 0) {
    local_4c = 0;
LAB_1492f2a75:
    uVar10 = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,pvVar2,lVar9 * 2);
    uVar10 = 0;
    if (1 < local_50) {
      plVar11 = (longlong *)(param_1 + 0x28);
LAB_1492f294b:
      uVar5 = FUN_144a49b4a(local_50 - 1,local_58);
      iVar6 = FUN_149303b64(plVar11,uVar5,&local_58);
      if (iVar6 != -1) {
        iVar6 = local_50 - 1;
        puVar3 = local_58;
        if (local_50 == 0) {
          iVar6 = 0;
          puVar3 = &DAT_149dfb77a;
        }
        uVar5 = FUN_144a49b4a(iVar6,puVar3);
        iVar6 = FUN_149303b64(plVar11,uVar5,&local_58);
        if (iVar6 == -1) {
          lVar9 = 0;
        }
        else {
          lVar9 = (longlong)iVar6 * 0x20 + *plVar11;
        }
        FUN_1492ef4c6(*(undefined8 *)(lVar9 + 0x10));
        uVar4 = local_60;
        pvVar2 = local_68;
        uVar1 = *(uint *)(param_3 + 1);
        if (uVar1 != local_60) {
          if (uVar1 + local_60 == 1) goto LAB_1492f2ad4;
          goto LAB_1492f2a2d;
        }
        if (1 < (int)uVar1) {
          lVar9 = 0;
          do {
            uVar7 = *(ushort *)(*param_3 + lVar9);
            uVar8 = (ulonglong)uVar7;
            uVar12 = *(ushort *)((longlong)local_68 + lVar9);
            if (uVar7 == uVar12) {
              if (uVar7 == 0) break;
            }
            else {
              if (0x7f < (uVar12 | uVar7)) goto LAB_1492f2ae6;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar13 = (ulonglong)uVar12;
              uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
              if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar13]) goto LAB_1492f2ae6;
            }
            lVar9 = lVar9 + 2;
          } while( true );
        }
        goto LAB_1492f2ad4;
      }
      goto LAB_1492f2a75;
    }
  }
LAB_1492f2a77:
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1492f2ae6:
  if (uVar7 == uVar12) {
LAB_1492f2ad4:
    if (local_68 != (void *)0x0) {
      FUN_1400020a8(local_68);
    }
    uVar10 = CONCAT71((uint7)(uint3)(local_60 >> 8),1);
    goto LAB_1492f2a77;
  }
LAB_1492f2a2d:
  local_50 = local_60;
  if (local_4c == 0 && local_60 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_60);
    if (uVar4 != 0) {
      memcpy(local_58,pvVar2,(longlong)(int)uVar4 * 2);
    }
  }
  if (pvVar2 != (void *)0x0) {
    FUN_1400020a8(pvVar2);
  }
  uVar10 = 0;
  if (local_50 < 2) goto LAB_1492f2a77;
  goto LAB_1492f294b;
}



// FUNCTION 1492f2af4 FUN_1492f2af4 body=179 status=ok
// SIG undefined FUN_1492f2af4(void)

void FUN_1492f2af4(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = FUN_1492f2ba8(param_1,local_38);
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



// FUNCTION 1492f2ba8 FUN_1492f2ba8 body=129 status=ok
// SIG undefined FUN_1492f2ba8(void)

undefined8 FUN_1492f2ba8(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  if (1 < *(uint *)(param_2 + 1)) {
    plVar6 = (longlong *)(param_1 + 0x28);
    uVar1 = FUN_144a49b4a(*(uint *)(param_2 + 1) - 1,*param_2);
    iVar2 = FUN_149303b64(plVar6,uVar1,param_2);
    if (iVar2 != -1) {
      iVar2 = *(int *)(param_2 + 1);
      if (iVar2 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      else {
        puVar4 = (undefined2 *)*param_2;
      }
      uVar5 = 0;
      uVar3 = (ulonglong)(iVar2 - 1);
      if (iVar2 == 0) {
        uVar3 = uVar5;
      }
      uVar1 = FUN_144a49b4a(uVar3,puVar4);
      iVar2 = FUN_149303b64(plVar6,uVar1,param_2);
      if (iVar2 != -1) {
        uVar5 = (longlong)iVar2 * 0x20 + *plVar6;
      }
      return *(undefined8 *)(uVar5 + 0x10);
    }
  }
  return 0;
}



// FUNCTION 1492f2c2a FUN_1492f2c2a body=254 status=ok
// SIG undefined FUN_1492f2c2a(void)

void FUN_1492f2c2a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f4108(param_1,local_38,local_3c);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f2d2a FUN_1492f2d2a body=178 status=ok
// SIG undefined FUN_1492f2d2a(void)

void FUN_1492f2d2a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = FUN_1492f2dde(param_1,local_38);
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



// FUNCTION 1492f2dde FUN_1492f2dde body=120 status=ok
// SIG undefined FUN_1492f2dde(void)

undefined4 FUN_1492f2dde(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1492f40a4();
  if (lVar1 == 0) {
    FUN_1492f2f34(param_1,&local_30,param_2);
    FUN_1447a1747(local_30,local_28);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_28 = *(undefined4 *)(lVar1 + 8);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f2e58 FUN_1492f2e58 body=218 status=ok
// SIG undefined FUN_1492f2e58(void)

void FUN_1492f2e58(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  FUN_1492f2f34(param_1,&local_48,local_38);
  FUN_1410e5bda(param_3,&local_48);
  FUN_1447a1747(local_48,local_40);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f2f34 FUN_1492f2f34 body=833 status=ok
// SIG undefined FUN_1492f2f34(void)

undefined8 * FUN_1492f2f34(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 uVar4;
  longlong lVar5;
  void *_Src;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong local_b0;
  uint *local_a8;
  longlong *local_a0;
  longlong local_98;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar9 = (undefined8 *)FUN_1492f40a4(param_1,param_3);
  if (puVar9 == (undefined8 *)0x0) {
    local_90 = param_3;
    FUN_14930433c(param_1 + 0x78,&local_68);
    lVar10 = (longlong)(int)local_68;
    lVar5 = *(longlong *)(param_1 + 0x78);
    plVar1 = (longlong *)(param_1 + 0x28);
    lVar15 = param_1 + 0x38;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = lVar15;
    if (*(int *)(param_1 + 0x50) == 0) {
      iVar11 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar11 = *(int *)(param_1 + 0x50);
    }
    local_b8 = (longlong *)(lVar5 + lVar10 * 0x28 + 0x10);
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar4 = local_78;
    local_88 = (int)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (int)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar11) || (lVar12 = lVar10 * 5, uStack_60 != lVar15)) {
      local_a8 = (uint *)(lVar5 + lVar10 * 0x28 + 0x18);
      iVar6 = local_78._4_4_;
      local_b0 = lVar15;
      local_a0 = plVar1;
      local_98 = lVar10 * 5;
      local_78 = uVar4;
      do {
        lVar10 = *local_90;
        FUN_1492ef4c6(*(undefined8 *)(lVar10 + 0x10 + (longlong)iVar6 * 0x20),&local_68);
        if ((int)uStack_60 == (int)param_3[1]) {
          bVar16 = true;
          if (1 < (int)uStack_60) {
            lVar12 = 0;
            while( true ) {
              uVar2 = *(ushort *)(local_68 + lVar12);
              uVar7 = (uint)uVar2;
              uVar3 = *(ushort *)(*param_3 + lVar12);
              uVar13 = (uint)uVar3;
              if (uVar2 != uVar3) {
                if ((uVar3 | uVar2) < 0x80) {
                  uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                  if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_1492f3131;
                }
                iVar8 = uVar7 - uVar13;
                goto LAB_1492f3256;
              }
              if (uVar2 == 0) break;
LAB_1492f3131:
              lVar12 = lVar12 + 2;
            }
            iVar8 = 0;
LAB_1492f3256:
            bVar16 = iVar8 == 0;
          }
        }
        else {
          bVar16 = (int)param_3[1] + (int)uStack_60 == 1;
        }
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        if (bVar16) {
          uVar7 = *local_a8;
          *local_a8 = uVar7 + 1;
          if (local_a8[1] < uVar7 + 1) {
            FUN_1447a1bd6(local_b8,uVar7);
          }
          puVar14 = (undefined8 *)(lVar10 + (longlong)iVar6 * 0x20);
          lVar15 = *local_b8;
          lVar10 = (longlong)(int)uVar7 * 0x10;
          puVar9 = (undefined8 *)(lVar15 + lVar10);
          *(undefined8 *)(lVar15 + lVar10) = 0;
          iVar6 = *(int *)(puVar14 + 1);
          _Src = (void *)*puVar14;
          *(int *)(lVar15 + 8 + lVar10) = iVar6;
          if ((longlong)iVar6 == 0) {
            *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
            lVar15 = local_b0;
          }
          else {
            FUN_1446dd670(puVar9,iVar6,0);
            memcpy((void *)*puVar9,_Src,(longlong)iVar6 * 2);
            lVar15 = local_b0;
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        lVar12 = local_98;
        iVar6 = local_78._4_4_;
        uVar4 = local_78;
      } while (local_90 != local_a0 ||
               (CONCAT44(uStack_7c,uStack_80) != lVar15 || local_78._4_4_ != iVar11));
    }
    local_78 = uVar4;
    *param_2 = 0;
    iVar11 = *(int *)(lVar5 + 0x18 + lVar12 * 8);
    lVar15 = *local_b8;
    *(int *)(param_2 + 1) = iVar11;
    if (iVar11 != 0) {
      FUN_140b856de(param_2,iVar11,0);
      FUN_140b8566a(*param_2,lVar15,iVar11);
      goto LAB_1492f30a5;
    }
  }
  else {
    *param_2 = 0;
    iVar11 = *(int *)(puVar9 + 1);
    uVar4 = *puVar9;
    *(int *)(param_2 + 1) = iVar11;
    if (iVar11 != 0) {
      FUN_140b856de(param_2,iVar11,0);
      FUN_140b8566a(*param_2,uVar4,iVar11);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
    }
  }
  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
LAB_1492f30a5:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f3276 FUN_1492f3276 body=267 status=ok
// SIG undefined FUN_1492f3276(void)

void FUN_1492f3276(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
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
  FUN_1492f3382(param_1,local_28,plVar1);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f3382 FUN_1492f3382 body=140 status=ok
// SIG undefined FUN_1492f3382(void)

void FUN_1492f3382(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined8 *local_38;
  code *local_30;
  undefined8 **local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = param_2;
  FUN_1447a1747(*param_3,*(undefined4 *)(param_3 + 1));
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    FUN_1408be2c4(param_3,0);
  }
  local_40 = &local_20;
  local_28 = &local_40;
  local_30 = FUN_1444be798;
  local_38 = param_3;
  FUN_1492f3f94(param_1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f3410 FUN_1492f3410 body=191 status=ok
// SIG undefined FUN_1492f3410(void)

void FUN_1492f3410(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_1492f34d0(param_1,plVar1);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f34d0 FUN_1492f34d0 body=420 status=ok
// SIG undefined FUN_1492f34d0(void)

void FUN_1492f34d0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  void *_Src;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
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
  plVar1 = (longlong *)(param_1 + 0x28);
  lVar2 = param_1 + 0x38;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = *(int *)(param_1 + 0x50);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (uint)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar7) || (uStack_60 != lVar2)) {
    do {
      lVar5 = *local_90;
      lVar9 = (longlong)iStack_74;
      FUN_1492ef4c6(*(undefined8 *)(lVar5 + 0x10 + lVar9 * 0x20),&local_68);
      uVar6 = (uint)uStack_60;
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (uVar6 < 2) {
        iVar4 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
          FUN_1447a1bd6(param_2,iVar4);
        }
        puVar8 = (undefined8 *)(lVar5 + lVar9 * 0x20);
        lVar5 = *param_2;
        lVar9 = (longlong)iVar4 * 0x10;
        puVar3 = (undefined8 *)(lVar5 + lVar9);
        *(undefined8 *)(lVar5 + lVar9) = 0;
        iVar4 = *(int *)(puVar8 + 1);
        _Src = (void *)*puVar8;
        *(int *)(lVar5 + 8 + lVar9) = iVar4;
        if ((longlong)iVar4 == 0) {
          *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar3,iVar4,0);
          memcpy((void *)*puVar3,_Src,(longlong)iVar4 * 2);
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar7));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492f367c FUN_1492f367c body=178 status=ok
// SIG undefined FUN_1492f367c(void)

void FUN_1492f367c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_1492f3730(param_1,local_38);
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



// FUNCTION 1492f3730 FUN_1492f3730 body=64 status=ok
// SIG undefined FUN_1492f3730(void)

bool FUN_1492f3730(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  if (*(uint *)(param_2 + 1) < 2) {
    bVar3 = false;
  }
  else {
    uVar1 = FUN_144a49b4a(*(uint *)(param_2 + 1) - 1,*param_2);
    iVar2 = FUN_149303b64(param_1 + 0x28,uVar1,param_2);
    bVar3 = iVar2 != -1;
  }
  return bVar3;
}



// FUNCTION 1492f3770 FUN_1492f3770 body=171 status=ok
// SIG undefined FUN_1492f3770(void)

void FUN_1492f3770(undefined8 param_1,longlong param_2)

{
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
  FUN_1492f381c(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f381c FUN_1492f381c body=247 status=ok
// SIG undefined FUN_1492f381c(void)

void FUN_1492f381c(longlong param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 local_f0 [184];
  longlong local_38;
  longlong lStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    FUN_1493011b8(param_1 + 0x28);
    FUN_1493012fc(param_1 + 0x28);
  }
  local_38 = 0;
  lStack_30 = 0;
  local_28 = 0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_2;
  }
  FUN_142781902(&local_38,puVar1,0);
  if (0 < lStack_30) {
    local_f8 = 0;
    FUN_1460d8db6(local_f0,local_38,lStack_30,0);
    FUN_1492f421e(param_1,local_f0);
    FUN_1460d8d80(local_f0);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f3914 FUN_1492f3914 body=247 status=ok
// SIG undefined FUN_1492f3914(void)

void FUN_1492f3914(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1492f3a0c(param_1,local_28,local_30);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f3a0c FUN_1492f3a0c body=123 status=ok
// SIG undefined FUN_1492f3a0c(void)

void FUN_1492f3a0c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1492f2702();
  if (lVar1 != 0) {
    FUN_1493041b0(param_1 + 0x28,param_2);
    FUN_1492f22b0(param_1,local_30,param_3);
    if (local_30[0] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f3aae FUN_1492f3aae body=86 status=ok
// SIG undefined FUN_1492f3aae(void)

void FUN_1492f3aae(longlong param_1)

{
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    FUN_1493011b8(param_1 + 0x28);
    FUN_1493012fc(param_1 + 0x28);
  }
  if (*(int *)(param_1 + 0x80) == *(int *)(param_1 + 0xac)) {
    return;
  }
  FUN_140d08692(param_1 + 0x78);
  FUN_140d087d8(param_1 + 0x78);
  return;
}



// FUNCTION 1492f3b04 FUN_1492f3b04 body=69 status=ok
// SIG undefined FUN_1492f3b04(void)

void FUN_1492f3b04(longlong param_1,longlong param_2)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(int *)(param_1 + 0x80) == *(int *)(param_1 + 0xac)) {
    return;
  }
  FUN_140d08692(param_1 + 0x78);
  FUN_140d087d8(param_1 + 0x78);
  return;
}



// FUNCTION 1492f3b4a FUN_1492f3b4a body=171 status=ok
// SIG undefined FUN_1492f3b4a(void)

void FUN_1492f3b4a(undefined8 param_1,longlong param_2)

{
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
  FUN_1492f3bf6(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f3bf6 FUN_1492f3bf6 body=269 status=ok
// SIG undefined FUN_1492f3bf6(void)

void FUN_1492f3bf6(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_128 [40];
  void *local_100;
  size_t local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [160];
  size_t local_48;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_146825b50(local_e8,0,0,0);
  FUN_1492f421e(param_1,local_e8);
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
  uVar1 = FUN_14054d1d4();
  if (*(int *)(param_2 + 1) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*param_2;
  }
  FUN_146810dee(&local_100,puVar2,uVar1,0);
  if (local_100 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_146825c36(local_e8);
  if ((local_28 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f3d0c FUN_1492f3d0c body=268 status=ok
// SIG undefined FUN_1492f3d0c(void)

void FUN_1492f3d0c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
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
  uVar1 = FUN_1492f3e1a(param_1,local_48 + 2,local_48);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f3e1a FUN_1492f3e1a body=374 status=ok
// SIG undefined FUN_1492f3e1a(void)

int FUN_1492f3e1a(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *_Src;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  plVar5 = (longlong *)(param_1 + 0x28);
  iVar4 = *(int *)(param_2 + 1);
  if (iVar4 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*param_2;
  }
  iVar9 = 0;
  iVar6 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar6 = iVar9;
  }
  uVar3 = FUN_144a49b4a(iVar6,puVar8);
  iVar4 = FUN_149303b64(plVar5,uVar3,param_2);
  if (iVar4 != -1) {
    iVar4 = *(int *)(param_3 + 1);
    if (iVar4 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    else {
      puVar8 = (undefined2 *)*param_3;
    }
    iVar9 = 0;
    iVar6 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar6 = iVar9;
    }
    uVar3 = FUN_144a49b4a(iVar6,puVar8);
    iVar4 = FUN_149303b64(plVar5,uVar3,param_3);
    if (iVar4 != -1) {
      iVar4 = *(int *)(param_2 + 1);
      if (iVar4 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      else {
        puVar8 = (undefined2 *)*param_2;
      }
      uVar11 = 0;
      uVar7 = (ulonglong)(iVar4 - 1);
      if (iVar4 == 0) {
        uVar7 = uVar11;
      }
      uVar3 = FUN_144a49b4a(uVar7,puVar8);
      iVar4 = FUN_149303b64(plVar5,uVar3,param_2);
      if (iVar4 != -1) {
        uVar11 = (longlong)iVar4 * 0x20 + *plVar5;
      }
      FUN_1492f0580(*(undefined8 *)(uVar11 + 0x10),param_3);
      iVar4 = *(int *)(param_3 + 1);
      if (iVar4 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      else {
        puVar8 = (undefined2 *)*param_3;
      }
      iVar6 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar6 = 0;
      }
      uVar3 = FUN_144a49b4a(iVar6,puVar8);
      plVar5 = (longlong *)FUN_140e10654(param_1 + 0x78,uVar3,param_3);
      iVar4 = (int)plVar5[1];
      *(uint *)(plVar5 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)plVar5 + 0xc) < iVar4 + 1U) {
        FUN_1447a1bd6(plVar5,iVar4);
      }
      lVar2 = *plVar5;
      lVar10 = (longlong)iVar4 * 0x10;
      puVar1 = (undefined8 *)(lVar2 + lVar10);
      *(undefined8 *)(lVar2 + lVar10) = 0;
      iVar4 = *(int *)(param_2 + 1);
      _Src = (void *)*param_2;
      *(int *)(lVar2 + 8 + lVar10) = iVar4;
      if ((longlong)iVar4 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,iVar4,0);
        memcpy((void *)*puVar1,_Src,(longlong)iVar4 * 2);
      }
      iVar9 = 1;
    }
  }
  return iVar9;
}



// FUNCTION 1492f3f94 FUN_1492f3f94 body=270 status=ok
// SIG undefined FUN_1492f3f94(void)

void FUN_1492f3f94(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
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
  plVar1 = (longlong *)(param_1 + 0x28);
  lVar2 = param_1 + 0x38;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = *(int *)(param_1 + 0x50);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c != iVar3) || (uStack_48 != lVar2)) {
    do {
      local_50 = *(undefined8 *)(*local_78 + 0x10 + (longlong)iStack_5c * 0x20);
      (*(code *)*param_2)(param_2[1],*local_78 + (longlong)iStack_5c * 0x20);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (CONCAT44(uStack_64,uStack_68) != lVar2 || iStack_5c != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f40a4 FUN_1492f40a4 body=99 status=ok
// SIG undefined FUN_1492f40a4(void)

longlong FUN_1492f40a4(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  uVar6 = 0;
  uVar4 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar4 = uVar6;
  }
  uVar1 = FUN_144a49b4a(uVar4,puVar5);
  iVar2 = FUN_140d080c0((longlong *)(param_1 + 0x78),uVar1,param_2);
  if (iVar2 != -1) {
    uVar6 = (longlong)iVar2 * 0x28 + *(longlong *)(param_1 + 0x78);
  }
  lVar3 = uVar6 + 0x10;
  if (uVar6 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 1492f4108 FUN_1492f4108 body=277 status=ok
// SIG undefined FUN_1492f4108(void)

ulonglong FUN_1492f4108(longlong param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1492f2f34(param_1,&local_38,param_2);
  uVar4 = 0;
  if ((-1 < (int)param_3) && ((int)param_3 < local_30)) {
    plVar7 = (longlong *)(param_1 + 0x28);
    lVar8 = (ulonglong)param_3 * 0x10;
    lVar1 = local_38 + lVar8;
    iVar3 = *(int *)(local_38 + 8 + lVar8);
    if (iVar3 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = *(undefined2 **)(local_38 + lVar8);
    }
    uVar4 = 0;
    uVar6 = (ulonglong)(iVar3 - 1);
    if (iVar3 == 0) {
      uVar6 = uVar4;
    }
    uVar2 = FUN_144a49b4a(uVar6,puVar5);
    iVar3 = FUN_149303b64(plVar7,uVar2,lVar1);
    if (iVar3 != -1) {
      lVar1 = local_38 + lVar8;
      iVar3 = *(int *)(local_38 + 8 + lVar8);
      if (iVar3 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      else {
        puVar5 = *(undefined2 **)(local_38 + lVar8);
      }
      uVar6 = 0;
      uVar4 = (ulonglong)(iVar3 - 1);
      if (iVar3 == 0) {
        uVar4 = uVar6;
      }
      uVar2 = FUN_144a49b4a(uVar4,puVar5);
      iVar3 = FUN_149303b64(plVar7,uVar2,lVar1);
      if (iVar3 != -1) {
        uVar6 = (longlong)iVar3 * 0x20 + *plVar7;
      }
      uVar4 = *(ulonglong *)(uVar6 + 0x10);
    }
  }
  FUN_1447a1747(local_38,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f421e FUN_1492f421e body=1387 status=ok
// SIG undefined FUN_1492f421e(void)

void FUN_1492f421e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  undefined8 ****ppppuVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  longlong local_130 [2];
  undefined8 ***local_120;
  longlong *local_118;
  undefined8 ***local_108;
  longlong *plStack_100;
  longlong local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int local_c0;
  undefined1 local_bc [4];
  longlong *local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (((*(byte *)(param_2 + 5) & 1) != 0) && (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)))
  {
    FUN_1493011b8(param_1 + 0x28);
    FUN_1493012fc(param_1 + 0x28);
  }
  local_c0 = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x5c);
  puVar2 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_c0,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_c0);
    }
  }
  else {
    local_c0 = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if ((*(byte *)(param_2 + 5) & 4) == 0) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      uStack_98 = 0;
      local_90 = 0;
      local_b8 = (longlong *)0x0;
      uStack_b0 = 0;
      local_8c = 0xffffffff00000080;
      local_84 = 0;
      local_78 = 0;
      local_70 = 0;
      uVar6 = FUN_144a797b2();
      local_138 = 0;
      FUN_146123bc0(&local_e8,uVar6,0,0);
      if (local_d8 != (longlong *)0x0) {
        do {
          lVar11 = *local_d8;
          if (lVar11 == 0) {
LAB_1492f46ec:
            lVar11 = 0;
          }
          else {
            lVar8 = FUN_144a797b2();
            if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30)) goto LAB_1492f46ec;
          }
          local_f0 = lVar11;
          lVar8 = FUN_140fd0d0c();
          if (((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar11 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
              lVar8 + 0x30)) {
            FUN_144750a86(local_f0,&local_108,0,0);
            local_118 = &local_f0;
            local_120 = &local_108;
            FUN_149304480(&local_b8,local_bc);
            if ((undefined8 ****)local_108 != (undefined8 ****)0x0) {
              FUN_1400020a8();
            }
          }
          FUN_1427b9a5c(&local_e8);
        } while (local_d8 != (longlong *)0x0);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(local_e8 + 0x30));
      if (0 < local_c0) {
        iVar12 = 0;
        do {
          local_108 = (undefined8 ****)0x0;
          plStack_100 = (longlong *)0x0;
          FUN_14021219d(param_2,&local_108);
          FUN_140133bee(&local_120);
          FUN_144867a42(&local_e8,2,&local_120,0);
          if (local_d8 == (longlong *)0x0 && local_e8 == 0) {
            iVar5 = (int)plStack_100;
          }
          else {
            FUN_14103acde(&local_e8,&local_120);
            if ((undefined8 ****)local_108 != (undefined8 ****)0x0) {
              FUN_1400020a8();
            }
            local_108 = local_120;
            plStack_100 = local_118;
            iVar5 = (int)local_118;
          }
          iVar9 = iVar5 + -1;
          ppppuVar10 = (undefined8 ****)local_108;
          if (iVar5 == 0) {
            ppppuVar10 = (undefined8 ****)&DAT_149dfb77a;
            iVar9 = 0;
          }
          uVar4 = FUN_144a49b4a(iVar9,ppppuVar10);
          iVar5 = FUN_149304762(&local_b8,uVar4,&local_108);
          if (iVar5 == -1) {
            if ((undefined8 ****)local_108 != (undefined8 ****)0x0) {
              FUN_1400020a8();
            }
            goto LAB_1492f4676;
          }
          iVar5 = (int)plStack_100 + -1;
          ppppuVar10 = (undefined8 ****)local_108;
          if ((int)plStack_100 == 0) {
            iVar5 = 0;
            ppppuVar10 = (undefined8 ****)&DAT_149dfb77a;
          }
          uVar4 = FUN_144a49b4a(iVar5,ppppuVar10);
          iVar5 = FUN_149304762(&local_b8,uVar4,&local_108);
          plVar7 = (longlong *)0x0;
          if (iVar5 != -1) {
            plVar7 = local_b8 + (longlong)iVar5 * 4;
          }
          plVar7 = (longlong *)FUN_1492f478a(param_1,plVar7[2]);
          (**(code **)(*plVar7 + 0xd8))(plVar7,param_2);
          FUN_1492f22b0(param_1,local_130,plVar7);
          if (local_130[0] != 0) {
            FUN_1400020a8();
          }
          if ((undefined8 ****)local_108 != (undefined8 ****)0x0) {
            FUN_1400020a8();
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < local_c0);
      }
      FUN_1492f2422(param_1);
LAB_1492f4676:
      local_70 = 0;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      FUN_149300c7c(&local_b8);
    }
  }
  else {
    plVar7 = (longlong *)(param_1 + 0x28);
    lVar11 = param_1 + 0x38;
    local_e8 = 0x100000000;
    local_d8 = (longlong *)&DAT_ffffffff;
    uStack_d0 = 0;
    uStack_e0 = lVar11;
    if (*(int *)(param_1 + 0x50) == 0) {
      iVar12 = 0;
    }
    else {
      FUN_1449c0562(&local_e8);
      iVar12 = *(int *)(param_1 + 0x50);
    }
    local_a8 = (undefined4)uStack_e0;
    uStack_a4 = uStack_e0._4_4_;
    uStack_98 = CONCAT44(uStack_cc,uStack_d0);
    local_a0 = local_d8;
    plVar3 = local_a0;
    uStack_b0 = local_e8;
    local_a0._4_4_ = (int)((ulonglong)local_d8 >> 0x20);
    iVar5 = local_a0._4_4_;
    local_b8 = plVar7;
    if ((local_a0._4_4_ != iVar12) || (local_a0 = local_d8, uStack_e0 != lVar11)) {
      do {
        local_a0 = plVar3;
        FUN_149300c06(&local_e8,(longlong)iVar5 * 0x20 + *local_b8);
        plVar3 = local_d8;
        FUN_144750a86(local_d8[2],&local_120,0,0);
        FUN_14021219d(param_2,&local_120);
        (**(code **)(*plVar3 + 0xd8))(plVar3,param_2);
        if ((undefined8 ****)local_120 != (undefined8 ****)0x0) {
          FUN_1400020a8();
        }
        if (local_e8 != 0) {
          FUN_1400020a8();
        }
        local_a0 = (longlong *)CONCAT44(local_a0._4_4_,(uint)local_a0 & ~uStack_b0._4_4_);
        FUN_1449c0562(&uStack_b0);
        iVar5 = local_a0._4_4_;
        plVar3 = local_a0;
      } while (local_b8 != plVar7 ||
               (CONCAT44(uStack_a4,local_a8) != lVar11 || local_a0._4_4_ != iVar12));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f478a FUN_1492f478a body=175 status=ok
// SIG undefined FUN_1492f478a(void)

undefined8 FUN_1492f478a(undefined8 param_1,undefined8 param_2)

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



// FUNCTION 1492f4840 FUN_1492f4840 body=182 status=ok
// SIG undefined FUN_1492f4840(void)

void FUN_1492f4840(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_1444bb06c(param_1 + 0x60,local_38);
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



// FUNCTION 1492f48f8 FUN_1492f48f8 body=9 status=ok
// SIG undefined FUN_1492f48f8(void)

void FUN_1492f48f8(longlong param_1)

{
  FUN_1444bb06c(param_1 + 0x60);
  return;
}



// FUNCTION 1492f4908 FUN_1492f4908 body=189 status=ok
// SIG undefined FUN_1492f4908(void)

void FUN_1492f4908(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f49c6(param_1,plVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f49c6 FUN_1492f49c6 body=159 status=ok
// SIG undefined FUN_1492f49c6(void)

undefined4 FUN_1492f49c6(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetLevelUid");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bba6a(param_1[5],param_1 + 0x26,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f4a6c FUN_1492f4a6c body=195 status=ok
// SIG undefined FUN_1492f4a6c(void)

void FUN_1492f4a6c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
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
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar2 = &local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f4b30(param_1,puVar2);
  *param_3 = uVar1;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f4b30 FUN_1492f4b30 body=159 status=ok
// SIG undefined FUN_1492f4b30(void)

undefined4 FUN_1492f4b30(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetReferenceObject");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbcf9(param_1[5],param_1 + 0x28,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f4bd6 FUN_1492f4bd6 body=189 status=ok
// SIG undefined FUN_1492f4bd6(void)

void FUN_1492f4bd6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f4c94(param_1,plVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f4c94 FUN_1492f4c94 body=159 status=ok
// SIG undefined FUN_1492f4c94(void)

undefined4 FUN_1492f4c94(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetSubPath");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bba6a(param_1[5],param_1 + 0x24,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f4d34 FUN_1492f4d34 body=195 status=ok
// SIG undefined FUN_1492f4d34(void)

void FUN_1492f4d34(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_1492f1448(param_1 + 0x60,plVar1);
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f4df8 FUN_1492f4df8 body=9 status=ok
// SIG undefined FUN_1492f4df8(void)

void FUN_1492f4df8(longlong param_1)

{
  FUN_1492f1448(param_1 + 0x60);
  return;
}



// FUNCTION 1492f4e02 FUN_1492f4e02 body=41 status=ok
// SIG undefined FUN_1492f4e02(void)

void FUN_1492f4e02(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f125c(param_1 + 0x60);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1492f4e2c FUN_1492f4e2c body=258 status=ok
// SIG undefined FUN_1492f4e2c(void)

void FUN_1492f4e2c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
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
  FUN_1492f5d18(param_1 + 0x60,local_24,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f4f30 FUN_1492f4f30 body=37 status=ok
// SIG undefined FUN_1492f4f30(void)

void FUN_1492f4f30(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f4f56();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1492f4f56 FUN_1492f4f56 body=131 status=ok
// SIG undefined FUN_1492f4f56(void)

undefined1 FUN_1492f4f56(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30 [2];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_19 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_14108324e();
  FUN_1444be556(&local_38,&DAT_14cc0c1b8,uVar1);
  if (local_38 != 0) {
    FUN_14930380a(local_38,local_30,&local_19);
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f4fde FUN_1492f4fde body=41 status=ok
// SIG undefined FUN_1492f4fde(void)

void FUN_1492f4fde(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2f8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1492f500e FUN_1492f500e body=182 status=ok
// SIG undefined FUN_1492f500e(void)

void FUN_1492f500e(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_1444bb466(param_1 + 0x60,local_38);
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



// FUNCTION 1492f50cc FUN_1492f50cc body=178 status=ok
// SIG undefined FUN_1492f50cc(void)

void FUN_1492f50cc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_1492f5180(param_1,local_38);
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



// FUNCTION 1492f5180 FUN_1492f5180 body=159 status=ok
// SIG undefined FUN_1492f5180(void)

undefined4 FUN_1492f5180(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetLevelUid");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbbee(param_1[5],param_1 + 0x26,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f5226 FUN_1492f5226 body=195 status=ok
// SIG undefined FUN_1492f5226(void)

void FUN_1492f5226(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
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
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar2 = &local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f52ea(param_1,puVar2);
  *param_3 = uVar1;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f52ea FUN_1492f52ea body=159 status=ok
// SIG undefined FUN_1492f52ea(void)

undefined4 FUN_1492f52ea(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetReferenceObject");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbe7d(param_1[5],param_1 + 0x28,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f5390 FUN_1492f5390 body=178 status=ok
// SIG undefined FUN_1492f5390(void)

void FUN_1492f5390(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_1492f5444(param_1,local_38);
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



// FUNCTION 1492f5444 FUN_1492f5444 body=159 status=ok
// SIG undefined FUN_1492f5444(void)

undefined4 FUN_1492f5444(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetSubPath");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbbee(param_1[5],param_1 + 0x24,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f54e8 FUN_1492f54e8 body=37 status=ok
// SIG undefined FUN_1492f54e8(void)

void FUN_1492f54e8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f550e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1492f550e FUN_1492f550e body=207 status=ok
// SIG undefined FUN_1492f550e(void)

ulonglong FUN_1492f550e(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [40];
  undefined1 local_40;
  undefined7 uStack_3f;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  local_40 = 1;
  FUN_1492f5c96();
  uVar5 = 0;
  uVar4 = FUN_14112c19a(uVar1,&DAT_14cc0c1e8,&local_40,0);
  if ((uVar4 & 1) == 0) goto LAB_1492f5556;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_1492f5c96();
  FUN_1444be324(&local_40,&DAT_14cc0c1e8,uVar1);
  if (CONCAT71(uStack_3f,local_40) == 0) {
LAB_1492f55c8:
    uVar5 = 0;
  }
  else {
    cVar2 = FUN_140c44378(CONCAT71(uStack_3f,local_40),local_38);
    if (cVar2 == '\0') goto LAB_1492f55c8;
    iVar3 = FUN_1419073b0(CONCAT71(uStack_3f,local_40),local_38);
    uVar5 = CONCAT71((int7)((ulonglong)local_38 >> 8),iVar3 == 1);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
LAB_1492f5556:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f55e4 FUN_1492f55e4 body=172 status=ok
// SIG undefined FUN_1492f55e4(void)

void FUN_1492f55e4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f5692(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f5692 FUN_1492f5692 body=208 status=ok
// SIG undefined FUN_1492f5692(void)

ulonglong FUN_1492f5692(longlong param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [40];
  undefined1 local_40;
  undefined7 uStack_3f;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  local_40 = *param_2;
  FUN_14108324e();
  uVar5 = 0;
  uVar4 = FUN_140c54a24(uVar1,&DAT_14cc0c1b8,&local_40,0);
  if ((uVar4 & 1) == 0) goto LAB_1492f56db;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_14108324e();
  FUN_1444be556(&local_40,&DAT_14cc0c1b8,uVar1);
  if (CONCAT71(uStack_3f,local_40) == 0) {
LAB_1492f574d:
    uVar5 = 0;
  }
  else {
    cVar2 = FUN_140c44378(CONCAT71(uStack_3f,local_40),local_38);
    if (cVar2 == '\0') goto LAB_1492f574d;
    iVar3 = FUN_1419073b0(CONCAT71(uStack_3f,local_40),local_38);
    uVar5 = CONCAT71((int7)((ulonglong)local_38 >> 8),iVar3 == 0x15);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
LAB_1492f56db:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f5768 FUN_1492f5768 body=37 status=ok
// SIG undefined FUN_1492f5768(void)

void FUN_1492f5768(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f578e();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1492f578e FUN_1492f578e body=207 status=ok
// SIG undefined FUN_1492f578e(void)

ulonglong FUN_1492f578e(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [40];
  undefined1 local_40;
  undefined7 uStack_3f;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  local_40 = 1;
  FUN_1492f5c18();
  uVar5 = 0;
  uVar4 = FUN_14112c19a(uVar1,&DAT_14cc0c1d0,&local_40,0);
  if ((uVar4 & 1) == 0) goto LAB_1492f57d6;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_1492f5c18();
  FUN_1444be324(&local_40,&DAT_14cc0c1d0,uVar1);
  if (CONCAT71(uStack_3f,local_40) == 0) {
LAB_1492f5848:
    uVar5 = 0;
  }
  else {
    cVar2 = FUN_140c44378(CONCAT71(uStack_3f,local_40),local_38);
    if (cVar2 == '\0') goto LAB_1492f5848;
    iVar3 = FUN_1419073b0(CONCAT71(uStack_3f,local_40),local_38);
    uVar5 = CONCAT71((int7)((ulonglong)local_38 >> 8),iVar3 == 1);
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
LAB_1492f57d6:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f5862 FUN_1492f5862 body=37 status=ok
// SIG undefined FUN_1492f5862(void)

void FUN_1492f5862(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f5888();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1492f5888 FUN_1492f5888 body=166 status=ok
// SIG undefined FUN_1492f5888(void)

undefined1 FUN_1492f5888(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30 [2];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_1492f5c96();
  cVar2 = FUN_140c44378(uVar1,&DAT_14cc0c1e8);
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    local_19 = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    FUN_1492f5c96();
    FUN_1444be324(&local_38,&DAT_14cc0c1e8,uVar1);
    if (local_38 != 0) {
      FUN_149302700(local_38,local_30,&local_19);
    }
    uVar3 = local_19;
    if (local_30[0] != 0) {
      FUN_1400020a8();
      uVar3 = local_19;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1492f5934 FUN_1492f5934 body=37 status=ok
// SIG undefined FUN_1492f5934(void)

void FUN_1492f5934(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f595a();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1492f595a FUN_1492f595a body=166 status=ok
// SIG undefined FUN_1492f595a(void)

undefined1 FUN_1492f595a(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30 [2];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_1492f5c18();
  cVar2 = FUN_140c44378(uVar1,&DAT_14cc0c1d0);
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    local_19 = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    FUN_1492f5c18();
    FUN_1444be324(&local_38,&DAT_14cc0c1d0,uVar1);
    if (local_38 != 0) {
      FUN_149302700(local_38,local_30,&local_19);
    }
    uVar3 = local_19;
    if (local_30[0] != 0) {
      FUN_1400020a8();
      uVar3 = local_19;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1492f5a06 FUN_1492f5a06 body=37 status=ok
// SIG undefined FUN_1492f5a06(void)

void FUN_1492f5a06(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f5a2c();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1492f5a2c FUN_1492f5a2c body=222 status=ok
// SIG undefined FUN_1492f5a2c(void)

ulonglong FUN_1492f5a2c(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  undefined7 uVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_1492f5c96();
  cVar2 = FUN_140c44378(uVar1,&DAT_14cc0c1e8);
  uVar4 = CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
  if (cVar2 != '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    FUN_1492f5c96();
    uVar4 = FUN_1492f0b5e(uVar1,&DAT_14cc0c1e8);
    if ((uVar4 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      FUN_1492f5c96();
      FUN_1444be324(&local_30,&DAT_14cc0c1e8,uVar1);
      uVar5 = (undefined7)((ulonglong)uVar1 >> 8);
      uVar4 = CONCAT71(uVar5,1);
      if (local_30 != 0) {
        cVar2 = FUN_140c44378(local_30,local_28);
        if (cVar2 != '\0') {
          iVar3 = FUN_1419073b0(local_30,local_28);
          uVar4 = CONCAT71(uVar5,iVar3 != 1);
        }
      }
      if (local_28[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f5b10 FUN_1492f5b10 body=37 status=ok
// SIG undefined FUN_1492f5b10(void)

void FUN_1492f5b10(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f5b36();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1492f5b36 FUN_1492f5b36 body=222 status=ok
// SIG undefined FUN_1492f5b36(void)

ulonglong FUN_1492f5b36(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  undefined7 uVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_1492f5c18();
  cVar2 = FUN_140c44378(uVar1,&DAT_14cc0c1d0);
  uVar4 = CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
  if (cVar2 != '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    FUN_1492f5c18();
    uVar4 = FUN_1492f0b5e(uVar1,&DAT_14cc0c1d0);
    if ((uVar4 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      FUN_1492f5c18();
      FUN_1444be324(&local_30,&DAT_14cc0c1d0,uVar1);
      uVar5 = (undefined7)((ulonglong)uVar1 >> 8);
      uVar4 = CONCAT71(uVar5,1);
      if (local_30 != 0) {
        cVar2 = FUN_140c44378(local_30,local_28);
        if (cVar2 != '\0') {
          iVar3 = FUN_1419073b0(local_30,local_28);
          uVar4 = CONCAT71(uVar5,iVar3 != 1);
        }
      }
      if (local_28[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f5c18 FUN_1492f5c18 body=125 status=ok
// SIG undefined FUN_1492f5c18(void)

undefined8 * FUN_1492f5c18(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0c1e0) {
    FUN_144b3d300(&DAT_14cc0c1e0);
    if (DAT_14cc0c1e0 == -1) {
      DAT_14cc0c1d0 = 0;
      uRam000000014cc0c1d8 = 0;
      FUN_14020fad6(&DAT_14cc0c1d0,L"__Internal_Task_Skip_Node__");
      atexit((_func_5014 *)&LAB_1444bba48);
      _Init_thread_footer(&DAT_14cc0c1e0);
    }
  }
  return &DAT_14cc0c1d0;
}



// FUNCTION 1492f5c96 FUN_1492f5c96 body=125 status=ok
// SIG undefined FUN_1492f5c96(void)

undefined8 * FUN_1492f5c96(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0c1f8) {
    FUN_144b3d300(&DAT_14cc0c1f8);
    if (DAT_14cc0c1f8 == -1) {
      DAT_14cc0c1e8 = 0;
      uRam000000014cc0c1f0 = 0;
      FUN_14020fad6(&DAT_14cc0c1e8,L"__Internal_Task_Force_Node_Reimport__");
      atexit((_func_5014 *)&LAB_1444bba59);
      _Init_thread_footer(&DAT_14cc0c1f8);
    }
  }
  return &DAT_14cc0c1e8;
}



// FUNCTION 1492f5d18 FUN_1492f5d18 body=647 status=ok
// SIG undefined FUN_1492f5d18(void)

void FUN_1492f5d18(longlong *param_1,int param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  void *pvVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_b8 [40];
  void *local_90;
  int local_88;
  undefined4 uStack_84;
  longlong local_78 [2];
  void *local_68;
  int local_60;
  undefined4 uStack_5c;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar8 = (int)plVar3[1];
    do {
      if (iVar8 == 0) goto LAB_1492f5eb6;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    lVar4 = *param_1;
    if (lVar4 != 0) {
      local_4c = 0;
      local_68 = (void *)0x0;
      local_60 = (int)param_1[3];
      lVar9 = (longlong)local_60;
      pvVar5 = (void *)param_1[2];
      if (lVar9 == 0) {
        uStack_5c = 0;
      }
      else {
        FUN_1446dd670(&local_68,local_60,0);
        memcpy(local_68,pvVar5,lVar9 * 2);
      }
      cVar7 = FUN_140c44378(lVar4,&local_68);
      if (local_68 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (cVar7 != '\0') {
        local_90 = (void *)0x0;
        local_88 = (int)param_1[3];
        lVar9 = (longlong)local_88;
        pvVar5 = (void *)param_1[2];
        if (lVar9 == 0) {
          uStack_84 = 0;
        }
        else {
          FUN_1446dd670(&local_90,local_88,0);
          memcpy(local_90,pvVar5,lVar9 * 2);
        }
        FUN_1444bd3c6(&local_68,&local_90,lVar4);
        if (local_90 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_68 != (void *)0x0) {
          cVar7 = FUN_140c44378(local_68,&local_60);
          if ((cVar7 != '\0') && (iVar8 = FUN_1419073b0(local_68,&local_60), iVar8 == 0xc)) {
            iVar8 = 0;
            if (local_68 != (void *)0x0) {
              FUN_1493027c6(local_68,&local_60,&local_4c);
              iVar8 = local_4c;
            }
            if (param_2 < iVar8) {
              FUN_1493038d0(param_1,local_78,param_2);
              FUN_1444be0f2(&local_90,local_78,lVar4);
              if (local_90 != (void *)0x0) {
                cVar7 = FUN_140c44378(local_90,&local_88);
                if (((cVar7 != '\0') && (iVar8 = FUN_1419073b0(local_90,&local_88), iVar8 == 0x12))
                   && (local_90 != (void *)0x0)) {
                  FUN_1492ff8ec(local_90,&local_88,param_3);
                }
              }
              if (CONCAT44(uStack_84,local_88) != 0) {
                FUN_1400020a8();
              }
              if (local_78[0] != 0) {
                FUN_1400020a8();
              }
            }
          }
        }
        if (CONCAT44(uStack_5c,local_60) != 0) {
          FUN_1400020a8();
        }
      }
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
LAB_1492f5eb6:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492f5fa0 FUN_1492f5fa0 body=32 status=ok
// SIG undefined FUN_1492f5fa0(void)

undefined8 FUN_1492f5fa0(undefined8 param_1,undefined8 param_2)

{
  FUN_140b1283a(param_1,L"Factory_",param_2);
  return param_1;
}



// FUNCTION 1492f5fc0 FUN_1492f5fc0 body=409 status=ok
// SIG undefined FUN_1492f5fc0(void)

void FUN_1492f5fc0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  longlong local_98;
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
  lVar3 = *(longlong *)(param_2 + 0x10);
  plVar1 = (longlong *)(param_1 + 0x80);
  lVar2 = param_1 + 0x90;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  local_98 = param_2;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0xa8) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = *(int *)(param_1 + 0xa8);
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
      lVar5 = *(longlong *)(*local_90 + (longlong)iStack_74 * 0x20);
      if ((lVar5 != 0) &&
         ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar3 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
           lVar5 + 0x30)))) {
        lVar5 = *local_90 + (longlong)iStack_74 * 0x20;
        lVar9 = (longlong)*(int *)(lVar5 + 0x10);
        if (lVar9 != 0) {
          lVar5 = *(longlong *)(lVar5 + 8);
          lVar8 = 0;
          do {
            if (((*(int *)(lVar5 + 8 + lVar8) != 0) &&
                (*(longlong **)(lVar5 + lVar8) != (longlong *)0x0)) &&
               (cVar4 = (**(code **)(**(longlong **)(lVar5 + lVar8) + 0x30))(), cVar4 != '\0')) {
              if (*(int *)(lVar5 + 8 + lVar8) == 0) {
                plVar6 = (longlong *)0x0;
              }
              else {
                plVar6 = *(longlong **)(lVar5 + lVar8);
              }
              (**(code **)(*plVar6 + 0x58))(plVar6,local_98);
            }
            lVar8 = lVar8 + 0x10;
          } while (lVar9 * 0x10 != lVar8);
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar7));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492f615a FUN_1492f615a body=409 status=ok
// SIG undefined FUN_1492f615a(void)

void FUN_1492f615a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  longlong local_98;
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
  lVar3 = *(longlong *)(param_2 + 0x10);
  plVar1 = (longlong *)(param_1 + 0xd0);
  lVar2 = param_1 + 0xe0;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  local_98 = param_2;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0xf8) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = *(int *)(param_1 + 0xf8);
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
      lVar5 = *(longlong *)(*local_90 + (longlong)iStack_74 * 0x20);
      if ((lVar5 != 0) &&
         ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar3 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
           lVar5 + 0x30)))) {
        lVar5 = *local_90 + (longlong)iStack_74 * 0x20;
        lVar9 = (longlong)*(int *)(lVar5 + 0x10);
        if (lVar9 != 0) {
          lVar5 = *(longlong *)(lVar5 + 8);
          lVar8 = 0;
          do {
            if (((*(int *)(lVar5 + 8 + lVar8) != 0) &&
                (*(longlong **)(lVar5 + lVar8) != (longlong *)0x0)) &&
               (cVar4 = (**(code **)(**(longlong **)(lVar5 + lVar8) + 0x30))(), cVar4 != '\0')) {
              if (*(int *)(lVar5 + 8 + lVar8) == 0) {
                plVar6 = (longlong *)0x0;
              }
              else {
                plVar6 = *(longlong **)(lVar5 + lVar8);
              }
              (**(code **)(*plVar6 + 0x58))(plVar6,local_98);
            }
            lVar8 = lVar8 + 0x10;
          } while (lVar9 * 0x10 != lVar8);
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar7));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492f62f4 FUN_1492f62f4 body=48 status=ok
// SIG undefined FUN_1492f62f4(void)

void FUN_1492f62f4(longlong param_1,undefined8 param_2)

{
  FUN_149304f60(param_1 + 0x80);
  FUN_149304f60(param_1 + 0xd0,param_2);
  return;
}



// FUNCTION 1492f6324 FUN_1492f6324 body=76 status=ok
// SIG undefined FUN_1492f6324(void)

longlong * FUN_1492f6324(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = FUN_1409ffe1d();
  plVar3 = (longlong *)FUN_1492f6370(uVar2,uVar1);
  (**(code **)(*plVar3 + 0x2f0))(plVar3,param_1,param_2);
  FUN_1492f615a(plVar3,param_2);
  return plVar3;
}



// FUNCTION 1492f6370 FUN_1492f6370 body=175 status=ok
// SIG undefined FUN_1492f6370(void)

undefined8 FUN_1492f6370(undefined8 param_1,undefined8 param_2)

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



// FUNCTION 1492f6426 FUN_1492f6426 body=176 status=ok
// SIG undefined FUN_1492f6426(void)

void FUN_1492f6426(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f64d8(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f64d8 FUN_1492f64d8 body=159 status=ok
// SIG undefined FUN_1492f64d8(void)

undefined4 FUN_1492f64d8(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetAnimatedTimeEnd");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc24a(param_1[5],param_1 + 0x16,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f657e FUN_1492f657e body=176 status=ok
// SIG undefined FUN_1492f657e(void)

void FUN_1492f657e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f6630(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f6630 FUN_1492f6630 body=159 status=ok
// SIG undefined FUN_1492f6630(void)

undefined4 FUN_1492f6630(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetAnimatedTimeStart");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc24a(param_1[5],param_1 + 0x14,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f66d6 FUN_1492f66d6 body=234 status=ok
// SIG undefined FUN_1492f66d6(void)

void FUN_1492f66d6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [32];
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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f67c2(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f67c2 FUN_1492f67c2 body=159 status=ok
// SIG undefined FUN_1492f67c2(void)

undefined4 FUN_1492f67c2(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetAxisConversionInverseTransform");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc768(param_1[5],param_1 + 0x1a,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f686c FUN_1492f686c body=172 status=ok
// SIG undefined FUN_1492f686c(void)

void FUN_1492f686c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f691a(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f691a FUN_1492f691a body=159 status=ok
// SIG undefined FUN_1492f691a(void)

undefined4 FUN_1492f691a(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetImportUnusedMaterial");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc4d9(param_1[5],param_1 + 0x18,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f69c0 FUN_1492f69c0 body=175 status=ok
// SIG undefined FUN_1492f69c0(void)

void FUN_1492f69c0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f6a70(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f6a70 FUN_1492f6a70 body=156 status=ok
// SIG undefined FUN_1492f6a70(void)

undefined4 FUN_1492f6a70(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetSourceFrameRateDenominator");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbfbb(param_1[5],param_1 + 0xe,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f6b14 FUN_1492f6b14 body=175 status=ok
// SIG undefined FUN_1492f6b14(void)

void FUN_1492f6b14(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f6bc4(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f6bc4 FUN_1492f6bc4 body=156 status=ok
// SIG undefined FUN_1492f6bc4(void)

undefined4 FUN_1492f6bc4(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetSourceFrameRateNumerator");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bbfbb(param_1[5],param_1 + 0xc,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f6c68 FUN_1492f6c68 body=176 status=ok
// SIG undefined FUN_1492f6c68(void)

void FUN_1492f6c68(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f6d1a(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f6d1a FUN_1492f6d1a body=159 status=ok
// SIG undefined FUN_1492f6d1a(void)

undefined4 FUN_1492f6d1a(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetSourceTimelineEnd");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc24a(param_1[5],param_1 + 0x12,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f6dc0 FUN_1492f6dc0 body=176 status=ok
// SIG undefined FUN_1492f6dc0(void)

void FUN_1492f6dc0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f6e72(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f6e72 FUN_1492f6e72 body=156 status=ok
// SIG undefined FUN_1492f6e72(void)

undefined4 FUN_1492f6e72(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".GetSourceTimelineStart");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc24a(param_1[5],param_1 + 0x10,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f6f10 FUN_1492f6f10 body=242 status=ok
// SIG undefined FUN_1492f6f10(void)

void FUN_1492f6f10(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar1 = &local_78;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1492f7004(param_1,puVar1);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f7004 FUN_1492f7004 body=115 status=ok
// SIG undefined FUN_1492f7004(void)

void FUN_1492f7004(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [64];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1492f8238(param_1 + 0xe0,local_68);
  FUN_146b4993e(param_2,local_68);
  local_20 = 0;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f7078 FUN_1492f7078 body=278 status=ok
// SIG undefined FUN_1492f7078(void)

void FUN_1492f7078(undefined8 param_1,longlong param_2)

{
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
  FUN_1444ba64e(param_1,local_38 + 2,local_38,2);
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



// FUNCTION 1492f7196 FUN_1492f7196 body=222 status=ok
// SIG undefined FUN_1492f7196(void)

void FUN_1492f7196(longlong param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  puVar4 = local_38;
  if ((int)uStack_30 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar1 = (int)uStack_30 + -1;
  if ((int)uStack_30 == 0) {
    iVar1 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar1,puVar4);
  uVar2 = FUN_149306236(param_1 + 0xe0,uVar3,&local_38);
  *param_3 = uVar2;
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492f727c FUN_1492f727c body=176 status=ok
// SIG undefined FUN_1492f727c(void)

void FUN_1492f727c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f732e(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f732e FUN_1492f732e body=159 status=ok
// SIG undefined FUN_1492f732e(void)

undefined4 FUN_1492f732e(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetAnimatedTimeEnd");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc3ce(param_1[5],param_1 + 0x16,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f73d4 FUN_1492f73d4 body=176 status=ok
// SIG undefined FUN_1492f73d4(void)

void FUN_1492f73d4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f7486(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f7486 FUN_1492f7486 body=159 status=ok
// SIG undefined FUN_1492f7486(void)

undefined4 FUN_1492f7486(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetAnimatedTimeStart");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc3ce(param_1[5],param_1 + 0x14,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f752c FUN_1492f752c body=234 status=ok
// SIG undefined FUN_1492f752c(void)

void FUN_1492f752c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [32];
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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f7618(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f7618 FUN_1492f7618 body=159 status=ok
// SIG undefined FUN_1492f7618(void)

undefined4 FUN_1492f7618(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetAxisConversionInverseTransform");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc8ec(param_1[5],param_1 + 0x1a,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f76c2 FUN_1492f76c2 body=172 status=ok
// SIG undefined FUN_1492f76c2(void)

void FUN_1492f76c2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f7770(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f7770 FUN_1492f7770 body=159 status=ok
// SIG undefined FUN_1492f7770(void)

undefined4 FUN_1492f7770(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetImportUnusedMaterial");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc65d(param_1[5],param_1 + 0x18,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f7816 FUN_1492f7816 body=175 status=ok
// SIG undefined FUN_1492f7816(void)

void FUN_1492f7816(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f78c6(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f78c6 FUN_1492f78c6 body=156 status=ok
// SIG undefined FUN_1492f78c6(void)

undefined4 FUN_1492f78c6(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetSourceFrameRateDenominator");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc13f(param_1[5],param_1 + 0xe,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f796a FUN_1492f796a body=175 status=ok
// SIG undefined FUN_1492f796a(void)

void FUN_1492f796a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f7a1a(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f7a1a FUN_1492f7a1a body=156 status=ok
// SIG undefined FUN_1492f7a1a(void)

undefined4 FUN_1492f7a1a(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetSourceFrameRateNumerator");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc13f(param_1[5],param_1 + 0xc,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f7abe FUN_1492f7abe body=176 status=ok
// SIG undefined FUN_1492f7abe(void)

void FUN_1492f7abe(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f7b70(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f7b70 FUN_1492f7b70 body=159 status=ok
// SIG undefined FUN_1492f7b70(void)

undefined4 FUN_1492f7b70(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetSourceTimelineEnd");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc3ce(param_1[5],param_1 + 0x12,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f7c16 FUN_1492f7c16 body=176 status=ok
// SIG undefined FUN_1492f7c16(void)

void FUN_1492f7c16(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1492f7cc8(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f7cc8 FUN_1492f7cc8 body=156 status=ok
// SIG undefined FUN_1492f7cc8(void)

undefined4 FUN_1492f7cc8(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_48);
  FUN_144a882a8(local_38,local_48,L".SetSourceTimelineStart");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar1 = FUN_1444bc3ce(param_1[5],param_1 + 0x10,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f7d6c FUN_1492f7d6c body=312 status=ok
// SIG undefined FUN_1492f7d6c(void)

void FUN_1492f7d6c(longlong param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
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
  puVar4 = local_38;
  if ((int)uStack_30 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar1 = (int)uStack_30 + -1;
  if ((int)uStack_30 == 0) {
    iVar1 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar1,puVar4);
  uVar2 = FUN_149305dea(param_1 + 0xe0,uVar3,local_48 + 2,local_48);
  *param_3 = uVar2;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492f7ea6 FUN_1492f7ea6 body=78 status=ok
// SIG undefined FUN_1492f7ea6(void)

void FUN_1492f7ea6(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar2,puVar4);
  FUN_149305dea(param_1 + 0xe0,uVar3,param_2,param_3);
  return;
}



// FUNCTION 1492f7ef7 FUN_1492f7ef7 body=191 status=ok
// SIG undefined FUN_1492f7ef7(void)

undefined8 * FUN_1492f7ef7(undefined8 *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0c2c8) {
    FUN_144b3d300(&DAT_14cc0c2c8);
    if (DAT_14cc0c2c8 == -1) {
      FUN_140056680(&DAT_14cc0c2b8,L"__SourceNode__");
      atexit((_func_5014 *)&LAB_1444bbf88);
      _Init_thread_footer(&DAT_14cc0c2c8);
    }
  }
  *param_1 = 0;
  iVar1 = DAT_14cc0c2c0;
  _Src = DAT_14cc0c2b8;
  lVar2 = (longlong)DAT_14cc0c2c0;
  *(int *)(param_1 + 1) = DAT_14cc0c2c0;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,lVar2 * 2);
  }
  return param_1;
}



// FUNCTION 1492f7fb6 FUN_1492f7fb6 body=32 status=ok
// SIG undefined FUN_1492f7fb6(void)

undefined8 FUN_1492f7fb6(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"SourceNode");
  return param_2;
}



// FUNCTION 1492f7fd6 FUN_1492f7fd6 body=223 status=ok
// SIG undefined FUN_1492f7fd6(void)

longlong FUN_1492f7fd6(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  longlong local_40 [2];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1492f7ef7(local_30);
  lVar1 = FUN_1492f2ba8(param_1,local_30);
  if (lVar1 != 0) {
    lVar2 = FUN_145a92f28();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_1492f8085;
  }
  local_50 = 0;
  local_58 = 0;
  lVar1 = FUN_1492f80b6(param_1,0,0,0);
  FUN_1444ba64e(lVar1,local_30,local_30,3);
  FUN_1492f22b0(param_1,local_40,lVar1);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
LAB_1492f8085:
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f80b6 FUN_1492f80b6 body=217 status=ok
// SIG undefined FUN_1492f80b6(void)

undefined8
FUN_1492f80b6(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

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
  longlong local_98;
  longlong *local_88;
  longlong local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_145a92f28();
  FUN_144a5c54a(local_d8,uVar1);
  local_b8 = param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_c0 = param_3;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492f8190 FUN_1492f8190 body=168 status=ok
// SIG undefined FUN_1492f8190(void)

longlong FUN_1492f8190(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc0c2f8) && (FUN_144b3d300(&DAT_14cc0c2f8), DAT_14cc0c2f8 == -1)) {
    FUN_1492f7ef7(&DAT_14cc0c2e8);
    atexit((_func_5014 *)&LAB_1444bbfaa);
    _Init_thread_footer(&DAT_14cc0c2f8);
  }
  lVar1 = FUN_1492f2ba8(param_1,&DAT_14cc0c2e8);
  if (lVar1 != 0) {
    lVar2 = FUN_145a92f28();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1492f8238 FUN_1492f8238 body=586 status=ok
// SIG undefined FUN_1492f8238(void)

undefined8 * FUN_1492f8238(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_e8 [32];
  longlong local_c8 [5];
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  uint local_88;
  int iStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_54 [4];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  param_2[4] = 0;
  iVar5 = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  uVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar4 != 0) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_140b80270(param_2,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar4 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_2 + 9) == 0) || (*(int *)(param_2 + 9) < iVar3)) {
      *(int *)(param_2 + 9) = iVar3;
      FUN_140b7fdd8(param_2);
    }
  }
  plVar1 = param_1 + 2;
  local_78 = (longlong *)&DAT_100000000;
  local_68 = 0xffffffff;
  iStack_64 = 0;
  local_60 = 0;
  local_70 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_78);
    iVar5 = (int)param_1[5];
  }
  local_88 = local_68;
  iStack_84 = iStack_64;
  local_80 = local_60;
  local_7c = local_5c;
  local_98 = local_78;
  local_90 = local_70;
  local_a0 = param_1;
  if ((iStack_64 != iVar5) || (local_70 != plVar1)) {
    do {
      lVar2 = *local_a0 + (longlong)iStack_84 * 0x48;
      local_c8[2] = 0;
      local_c8[3] = 0;
      if (*(longlong *)(lVar2 + 0x10) != 0) {
        FUN_1492ff8ec(*(longlong *)(lVar2 + 0x10),lVar2 + 0x18,local_c8 + 2);
      }
      local_c8[0] = 0;
      local_c8[1] = 0;
      if (*(longlong *)(lVar2 + 0x28) != 0) {
        FUN_1492ff8ec(*(longlong *)(lVar2 + 0x28),lVar2 + 0x30,local_c8);
      }
      local_78 = local_c8 + 2;
      local_70 = local_c8;
      FUN_1411f1c38(param_2,local_54,&local_78,0);
      if (local_c8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_c8[2] != 0) {
        FUN_1400020a8();
      }
      local_88 = local_88 & ~local_98._4_4_;
      FUN_1449c0562(&local_98);
    } while (local_a0 != param_1 || (local_90 != plVar1 || iStack_84 != iVar5));
  }
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}


