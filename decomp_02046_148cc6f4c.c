// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148cc6f4c FUN_148cc6f4c body=373 status=ok
// SIG undefined FUN_148cc6f4c(void)

void FUN_148cc6f4c(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  longlong local_b8 [7];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined1 local_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar1 = FUN_141864c04();
  if (cVar1 != '\0') {
    *(char *)(param_1 + 0x17) = (char)param_1[0x17] + '\x01';
    local_b8[4] = 0;
    local_b8[5] = 0;
    local_b8[2] = 0;
    local_b8[3] = 0;
    local_b8[0] = 0;
    local_b8[1] = 0;
    FUN_148ccacfe(param_1 + 0x18,local_b8);
    FUN_145c25522(local_b8);
    uStack_3f = 0;
    local_68 = 0;
    local_b8[0] = 0xffffffff;
    local_b8[1] = DAT_14c8464e0;
    local_b8[2] = DAT_14c8464e8;
    local_b8[3] = DAT_14c8464f0;
    local_b8[4] = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
    local_b8[5] = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
    local_b8[6] = DAT_14c846508;
    _uStack_80 = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
    _local_78 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
    uStack_70 = DAT_14c846508;
    uStack_60 = 0x3f80000000000000;
    local_48 = 0;
    uStack_47 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    uStack_4f = 0;
    plVar2 = local_b8;
    plVar4 = param_1 + 0x1e;
    for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *plVar4 = *plVar2;
      plVar2 = plVar2 + 1;
      plVar4 = plVar4 + 1;
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
    FUN_148be68bc(param_1 + 0x29);
    *(undefined1 *)((longlong)param_1 + 0xb9) = 3;
    FUN_1487bbc9e(param_1);
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x2b8))(param_1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x2c0))(plVar2,1);
      (**(code **)(*plVar2 + 0x578))(plVar2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc70c2 FUN_148cc70c2 body=64 status=ok
// SIG undefined FUN_148cc70c2(void)

void FUN_148cc70c2(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = FUN_141864c04();
  if (cVar4 != '\0') {
    *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 4);
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *(undefined4 *)(param_1 + 0xf8) = *param_2;
    *(undefined4 *)(param_1 + 0xfc) = uVar1;
    *(undefined4 *)(param_1 + 0x100) = uVar2;
    *(undefined4 *)(param_1 + 0x104) = uVar3;
    FUN_1487bbc9e(param_1);
    return;
  }
  return;
}



// FUNCTION 148cc7102 FUN_148cc7102 body=64 status=ok
// SIG undefined FUN_148cc7102(void)

void FUN_148cc7102(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = FUN_141864c04();
  if (cVar4 != '\0') {
    *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 4);
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *(undefined4 *)(param_1 + 0x110) = *param_2;
    *(undefined4 *)(param_1 + 0x114) = uVar1;
    *(undefined4 *)(param_1 + 0x118) = uVar2;
    *(undefined4 *)(param_1 + 0x11c) = uVar3;
    FUN_1487bbc9e(param_1);
    return;
  }
  return;
}



// FUNCTION 148cc7142 FUN_148cc7142 body=64 status=ok
// SIG undefined FUN_148cc7142(void)

void FUN_148cc7142(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = FUN_141864c04();
  if (cVar4 != '\0') {
    *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 4);
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *(undefined4 *)(param_1 + 0x128) = *param_2;
    *(undefined4 *)(param_1 + 300) = uVar1;
    *(undefined4 *)(param_1 + 0x130) = uVar2;
    *(undefined4 *)(param_1 + 0x134) = uVar3;
    FUN_1487bbc9e(param_1);
    return;
  }
  return;
}



// FUNCTION 148cc7182 FUN_148cc7182 body=45 status=ok
// SIG undefined FUN_148cc7182(void)

undefined4 FUN_148cc7182(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xf0);
  uVar2 = 0;
  if ((-2 < (longlong)iVar1) && (iVar1 + 1 < *(int *)(param_1 + 0xb0))) {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x30 + (longlong)iVar1 * 0x28);
  }
  return uVar2;
}



// FUNCTION 148cc71b0 FUN_148cc71b0 body=96 status=ok
// SIG undefined FUN_148cc71b0(void)

void FUN_148cc71b0(longlong *param_1)

{
  longlong lVar1;
  
  FUN_1408c7d08();
  lVar1 = (**(code **)(*param_1 + 0x2b8))(param_1);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x178) == '\x03')) {
    FUN_140c7ce82(lVar1,1);
    FUN_14081ae08(lVar1,2);
  }
  if ((char)param_1[0x18] != '\x01') {
    return;
  }
  FUN_148cc7210(param_1);
  return;
}



// FUNCTION 148cc7210 FUN_148cc7210 body=204 status=ok
// SIG undefined FUN_148cc7210(void)

void FUN_148cc7210(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined2 local_40;
  undefined1 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)((longlong)param_1 + 0x69) == '\0') {
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x18) = 0;
    local_68 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uVar1 = (**(code **)(*param_1 + 0x2b8))(param_1);
    local_58 = (undefined4)param_1[0x15];
    uStack_54 = *(undefined4 *)((longlong)param_1 + 0xac);
    uStack_50 = (undefined4)param_1[0x16];
    uStack_4c = *(undefined4 *)((longlong)param_1 + 0xb4);
    local_60 = 0;
    local_40 = 0x10;
    local_38 = 0x18;
    local_30 = 0x18;
    if ((DAT_14c9aa014 & 0x20) != 0) {
      local_30 = 0;
    }
    FUN_14150a558(param_1[0x17],&local_60,uVar1,&local_88);
    FUN_144a2da94(&local_60);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc72de FUN_148cc72de body=140 status=ok
// SIG undefined FUN_148cc72de(void)

void FUN_148cc72de(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  switchD_143c3d4dc::caseD_42();
  FUN_1446f470e(&local_38,L"BellColor",1);
  uVar1 = FUN_145a89fc8();
  FUN_145a89fc8();
  uVar1 = FUN_140f1fabf(uVar1,local_38);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc736c FUN_148cc736c body=154 status=ok
// SIG undefined FUN_148cc736c(void)

void FUN_148cc736c(longlong *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  longlong lVar5;
  
  cVar4 = FUN_141864c04();
  if (cVar4 == '\0') {
    return;
  }
  if ((*param_2 == *(float *)(param_1 + 0x15)) &&
     (!NAN(*param_2) && !NAN(*(float *)(param_1 + 0x15)))) {
    if ((param_2[1] == *(float *)((longlong)param_1 + 0xac)) &&
       (!NAN(param_2[1]) && !NAN(*(float *)((longlong)param_1 + 0xac)))) {
      if ((param_2[2] == *(float *)(param_1 + 0x16)) &&
         (!NAN(param_2[2]) && !NAN(*(float *)(param_1 + 0x16)))) {
        if ((param_2[3] == *(float *)((longlong)param_1 + 0xb4)) &&
           (!NAN(param_2[3]) && !NAN(*(float *)((longlong)param_1 + 0xb4)))) {
          return;
        }
      }
    }
  }
  lVar5 = (**(code **)(*param_1 + 0x2b8))(param_1);
  if (lVar5 != 0) {
    FUN_14103d96c(lVar5);
  }
  FUN_1487bbc9e(param_1);
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *(float *)(param_1 + 0x15) = *param_2;
  *(float *)((longlong)param_1 + 0xac) = fVar1;
  *(float *)(param_1 + 0x16) = fVar2;
  *(float *)((longlong)param_1 + 0xb4) = fVar3;
  FUN_148cc7210(param_1);
  return;
}



// FUNCTION 148cc741c FUN_148cc741c body=127 status=ok
// SIG undefined FUN_148cc741c(void)

void FUN_148cc741c(longlong param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_140c8232a();
  if (cVar1 == '\x01') {
    local_14 = 0;
    local_28 = DAT_14cbc1898;
    local_20 = 0xffffffff;
    local_38 = DAT_14cbc18a0;
    local_30 = 0xffffffff;
    FUN_140f8b8f2(param_1 + 0x4d8);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc749c FUN_148cc749c body=36 status=ok
// SIG undefined FUN_148cc749c(void)

undefined8 FUN_148cc749c(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + -0x58) + 0x20))(param_1 + -0x58);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x300);
  }
  return uVar2;
}



// FUNCTION 148cc74c0 FUN_148cc74c0 body=94 status=ok
// SIG undefined FUN_148cc74c0(void)

undefined8 FUN_148cc74c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [37];
  char local_13;
  undefined1 local_12 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = FUN_140cc5ae6(param_3);
  if (lVar1 != 0) {
    local_13 = '\0';
    FUN_140cc5c0c(lVar1,&local_13,local_12);
    uVar2 = 1;
    if (local_13 != '\0') goto LAB_148cc7502;
  }
  uVar2 = 0;
LAB_148cc7502:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc7520 FUN_148cc7520 body=147 status=ok
// SIG undefined FUN_148cc7520(void)

undefined8 FUN_148cc7520(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = 0.0;
  if (*(float *)(param_1 + 0x2610) <= 0.0) {
LAB_148cc7576:
    lVar2 = (**(code **)(*(longlong *)(param_1 + 0x3a8) + 0x20))(param_1 + 0x3a8);
    if (lVar2 != 0) {
      cVar1 = FUN_1405067fc(lVar2,&DAT_14cbc18c8);
      if (cVar1 != '\0') goto LAB_148cc75a2;
    }
    uVar3 = 1;
  }
  else {
    if (*(longlong *)(param_1 + 0x2618) != 0) {
      fVar4 = *(float *)(*(longlong *)(param_1 + 0x2618) + 0x45c);
    }
    fVar5 = 0.25;
    if (0.25 <= fVar4) {
      fVar5 = fVar4;
    }
    fVar4 = (float)FUN_1406400be(param_1 + 0x4d8);
    if (fVar5 <= fVar4 - *(float *)(param_1 + 0x2610)) goto LAB_148cc7576;
LAB_148cc75a2:
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 148cc75b4 FUN_148cc75b4 body=130 status=ok
// SIG undefined FUN_148cc75b4(void)

longlong FUN_148cc75b4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  char *pcVar5;
  longlong lVar6;
  
  if (*(char *)(param_1 + 0x2158) == '\x01') {
    pcVar5 = (char *)(param_1 + 0x2159);
  }
  else {
    if (*(longlong *)(param_1 + 0x2178) == 0) goto LAB_148cc7625;
    pcVar5 = (char *)(*(longlong *)(param_1 + 0x2178) + 0x458);
  }
  if ((*pcVar5 == '\x01') && (iVar1 = *(int *)(param_1 + 0x2168), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x2160);
    lVar6 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar6);
      if ((plVar3 != (longlong *)0x0) && (lVar4 = (**(code **)(*plVar3 + 0x5d8))(), lVar4 != 0)) {
        return lVar4;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
LAB_148cc7625:
  return *(longlong *)(param_1 + 0x1550);
}



// FUNCTION 148cc7636 FUN_148cc7636 body=453 status=ok
// SIG undefined FUN_148cc7636(void)

void FUN_148cc7636(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c2c4ea();
  FUN_1446f470e(&local_58,L"InventoryItems",1);
  uVar1 = FUN_145a89868();
  FUN_145a89868();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = FUN_145842fda();
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"InventoryStorageContainer",1);
  uVar1 = FUN_145a89868();
  FUN_145a89868();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"Timer",1);
  uVar1 = FUN_145a89868();
  FUN_145a89868();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"ConsumerPlayerController",1);
  uVar1 = FUN_145a89868();
  FUN_145a89868();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"LaunchRemainingTime",1);
  uVar1 = FUN_145a89868();
  FUN_145a89868();
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



// FUNCTION 148cc7804 FUN_148cc7804 body=64 status=ok
// SIG undefined FUN_148cc7804(void)

void FUN_148cc7804(longlong *param_1)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 0;
  (**(code **)(*param_1 + 0x20))();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc7846 FUN_148cc7846 body=64 status=ok
// SIG undefined FUN_148cc7846(void)

void FUN_148cc7846(longlong *param_1)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 0;
  (**(code **)(*param_1 + 0x20))();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc7888 FUN_148cc7888 body=64 status=ok
// SIG undefined FUN_148cc7888(void)

void FUN_148cc7888(longlong *param_1)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 0;
  (**(code **)(*param_1 + 0x20))();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc78ca FUN_148cc78ca body=64 status=ok
// SIG undefined FUN_148cc78ca(void)

void FUN_148cc78ca(longlong *param_1)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 0;
  (**(code **)(*param_1 + 0x20))();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc791e FUN_148cc791e body=130 status=ok
// SIG undefined FUN_148cc791e(void)

void FUN_148cc791e(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_31;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_31 = 0;
  local_40 = 0;
  local_30 = param_1 + 0x158;
  pcVar1 = (code *)*param_2;
  plVar3 = param_2 + 4;
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    plVar3 = (longlong *)param_2[2];
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_30,&local_40,&local_31);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc79a2 FUN_148cc79a2 body=130 status=ok
// SIG undefined FUN_148cc79a2(void)

void FUN_148cc79a2(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_31;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_31 = 0;
  local_40 = 0;
  local_30 = param_1 + 0x158;
  pcVar1 = (code *)*param_2;
  plVar3 = param_2 + 4;
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    plVar3 = (longlong *)param_2[2];
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_30,&local_40,&local_31);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc7a26 FUN_148cc7a26 body=168 status=ok
// SIG undefined FUN_148cc7a26(void)

void FUN_148cc7a26(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x28) + 0x458) == '\x01')) {
    lVar1 = param_1 + 0x158;
    local_29 = 0;
    lVar2 = FUN_141893240(lVar1,param_2 + 8,0);
    if (lVar2 != 0) {
      FUN_148cc7ad0(param_1 + -0x25f8,lVar1,param_2);
      local_30 = *(undefined4 *)(lVar2 + 0xf8);
      FUN_14119e7cc(lVar1,&local_30,param_1,0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc7ad0 FUN_148cc7ad0 body=670 status=ok
// SIG undefined FUN_148cc7ad0(void)

void FUN_148cc7ad0(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [36];
  undefined1 local_1d4 [4];
  char local_1d0;
  undefined1 local_1c9;
  undefined8 local_1c8 [7];
  undefined8 uStack_190;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  float local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined8 local_124;
  undefined8 uStack_11c;
  undefined1 local_114;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  longlong lStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  longlong lStack_d0;
  char local_68;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined7 local_4f;
  undefined1 uStack_48;
  undefined8 uStack_47;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_1c9 = 0;
  lVar2 = FUN_141893240(param_2,param_3 + 8,0);
  if (lVar2 != 0) {
    uVar3 = FUN_1447210f0(param_1);
    plVar4 = (longlong *)FUN_14007a5e6(uVar3);
    if (plVar4 != (longlong *)0x0) {
      local_158 = DAT_14c8464f0;
      local_168 = DAT_14c8464e0;
      uStack_160 = DAT_14c8464e8;
      local_14c = DAT_14cb7bd68;
      local_144 = DAT_14cb7bd70;
      local_140 = DAT_14cb7bd80;
      local_138 = DAT_14cb7bd88;
      local_134 = 0;
      uStack_12c = 0;
      local_124 = 0;
      uStack_11c = 0;
      local_114 = 0;
      local_110 = 0xffffffff;
      local_68 = '\0';
      uStack_48 = 0;
      uStack_47 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      local_4f = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      lStack_f0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0;
      lStack_d0 = 0;
      puVar7 = &DAT_14c846480;
      if (*(longlong *)(param_1 + 0x1c8) != 0) {
        puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 0x240);
      }
      puVar8 = local_1c8;
      for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      uVar1 = rand();
      local_150 = ((float)(uVar1 & 0x7fff) / 32767.0) * 250.0 + 750.0;
      lVar6 = *(longlong *)(param_1 + 0x2620);
      if (lVar6 != 0) {
        local_150 = *(float *)(lVar6 + 0x45c);
        if (*(char *)(lVar6 + 0x459) == '\x01') {
          lStack_d0 = param_1 + 0x418;
          uStack_e0 = *(undefined8 *)(lVar6 + 0x460);
        }
        else if (*(longlong *)(lVar6 + 0x460) != 0) {
          plVar5 = (longlong *)FUN_144a545f2(param_1,*(longlong *)(lVar6 + 0x460),0);
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x4b0))
                      (plVar5,local_1f8,*(undefined8 *)(*(longlong *)(param_1 + 0x2620) + 0x460));
            uStack_190 = 0;
          }
        }
      }
      (**(code **)(*plVar4 + 0x10))(plVar4,local_1d4,lVar2 + 8,local_1c8);
      if (local_1d0 == '\x01') {
        local_1d0 = '\0';
      }
      if (local_68 == '\x01') {
        local_68 = '\0';
      }
      if (lStack_f0 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc7d70 FUN_148cc7d70 body=87 status=ok
// SIG undefined FUN_148cc7d70(void)

void FUN_148cc7d70(longlong param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + -0x2480) == '\x03') {
    iVar1 = FUN_141007d7a(param_1 + 0x158,1,1);
    if (((iVar1 == 0) && (*(longlong *)(param_1 + 0x28) != 0)) &&
       (*(char *)(*(longlong *)(param_1 + 0x28) + 0x471) == '\x01')) {
      FUN_140aeefbc(param_1 + -0x25f8,1,1);
      return;
    }
  }
  return;
}



// FUNCTION 148cc7dc8 FUN_148cc7dc8 body=271 status=ok
// SIG undefined FUN_148cc7dc8(void)

void FUN_148cc7dc8(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(longlong *)(param_1 + 0x2260) != 0) &&
      (*(char *)(*(longlong *)(param_1 + 0x2260) + 0x470) == '\x01')) &&
     (lVar2 = *param_2, lVar2 != 0)) {
    lVar3 = FUN_144a5dd5e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      local_58 = 0;
      uStack_50 = 0;
      uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x2260) + 0x473);
      local_60 = 0;
      uVar4 = (**(code **)(*(longlong *)(param_1 + 0x2238) + 0x20))(param_1 + 0x2238);
      uVar5 = FUN_140254ee4(lVar2);
      local_68 = &local_58;
      local_70 = 0;
      local_78 = uVar1;
      FUN_148d63dba(lVar2 + 0x2540,uVar5,uVar4,param_1 + 0x2238);
    }
  }
  FUN_145d73658(param_1,param_2);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc7ef2 FUN_148cc7ef2 body=104 status=ok
// SIG undefined FUN_148cc7ef2(void)

undefined8 * FUN_148cc7ef2(undefined8 *param_1)

{
  FUN_1409e6ae2();
  *param_1 = &PTR_FUN_14b955d90;
  *(undefined2 *)(param_1 + 0x8b) = 1;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 0x437a0000;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0x1010000;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x4014;
  param_1[0x91] = 0;
  *(undefined1 *)(param_1 + 0x33) = 2;
  return param_1;
}



// FUNCTION 148cc7f60 FUN_148cc7f60 body=114 status=ok
// SIG undefined FUN_148cc7f60(void)

undefined1 FUN_148cc7f60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 auStack_48 [45];
  char local_1b;
  undefined1 local_1a;
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_148ccb868(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    local_1b = '\0';
    local_19 = 0;
    FUN_148cc7fd4(lVar1,&local_1b);
    if ((local_1b == '\0') && ((local_19 & 1) != 0)) {
      uVar2 = local_1a;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc7fd4 FUN_148cc7fd4 body=293 status=ok
// SIG undefined FUN_148cc7fd4(void)

void FUN_148cc7fd4(longlong param_1,undefined1 *param_2,undefined1 *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = (**(code **)(*(longlong *)(param_1 + 0x3a8) + 0x20))(param_1 + 0x3a8);
  if (lVar2 != 0) {
    cVar1 = FUN_1405067fc(lVar2,&DAT_14cbc1928);
    if (cVar1 != '\0') goto LAB_148cc80d7;
  }
  local_50 = DAT_14cbc1948;
  local_48 = 0xffffffff;
  FUN_140c823b2(param_1 + 0x4d8,&local_40);
  cVar1 = '\x02' - (local_40 == DAT_14cbc1938);
  if (local_40 == DAT_14cbc1930) {
    cVar1 = '\0';
  }
  if (cVar1 != '\x02') {
    if (cVar1 != '\0') goto LAB_148cc80d7;
    local_40 = DAT_14c9a6400;
    local_38 = 0xffffffff;
    local_50 = DAT_14cbc1928;
    local_48 = 0xffffffff;
    cVar1 = FUN_1400b1204(param_1 + 0x4d8);
    uVar3 = 1;
    if (cVar1 != '\0') {
      if ((*(longlong *)(param_1 + 0x25f8) == 0) ||
         (*(char *)(*(longlong *)(param_1 + 0x25f8) + 0x458) != '\x01')) goto LAB_148cc80d7;
      uVar3 = 0;
    }
    *param_3 = uVar3;
    param_2 = param_3 + 1;
  }
  *param_2 = 1;
LAB_148cc80d7:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc80fa FUN_148cc80fa body=112 status=ok
// SIG undefined FUN_148cc80fa(void)

byte FUN_148cc80fa(void)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_48 [45];
  byte local_1b;
  byte local_1a;
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = FUN_148ccb868();
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    local_1b = 0;
    local_19 = 0;
    FUN_148cc7fd4(lVar2,&local_1b,&local_1a);
    bVar1 = (local_1b ^ 1) & local_19 & (local_1a ^ 1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc816c FUN_148cc816c body=96 status=ok
// SIG undefined FUN_148cc816c(void)

undefined8 FUN_148cc816c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [37];
  char local_13;
  undefined1 local_12 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = FUN_148ccb868(param_3);
  if (lVar1 != 0) {
    local_13 = '\0';
    FUN_148cc7fd4(lVar1,&local_13,local_12);
    uVar2 = 1;
    if (local_13 != '\0') goto LAB_148cc818f;
  }
  uVar2 = 0;
LAB_148cc818f:
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 148cc81d0 FUN_148cc81d0 body=519 status=ok
// SIG undefined FUN_148cc81d0(void)

void FUN_148cc81d0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140655f5e();
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    lVar5 = (**(code **)(*param_2 + 8))(param_2);
    lVar6 = FUN_1465c19a4();
    if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30)) {
      *(longlong **)(param_1 + 0x2250) = param_2;
      if (param_2[0x8b] != 0) {
        plVar1 = (longlong *)(param_1 + -0x1c0);
        lVar5 = param_1 + -0x1b0;
        local_58 = 0x100000000;
        local_48 = 0xffffffff;
        uStack_40 = 0;
        uStack_50 = lVar5;
        if (*(int *)(param_1 + -0x198) == 0) {
          iVar7 = 0;
        }
        else {
          FUN_1449c0562(&local_58);
          iVar7 = *(int *)(param_1 + -0x198);
        }
        uStack_60 = CONCAT44(uStack_3c,uStack_40);
        local_68 = local_48;
        uVar2 = local_68;
        local_78 = (undefined4)local_58;
        uStack_74 = local_58._4_4_;
        uStack_70 = (undefined4)uStack_50;
        uStack_6c = uStack_50._4_4_;
        local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
        local_80 = plVar1;
        if ((local_68._4_4_ != iVar7) || (uStack_50 != lVar5)) {
          iVar4 = local_68._4_4_;
          local_68 = uVar2;
          do {
            lVar6 = *(longlong *)(*local_80 + (longlong)iVar4 * 0x10);
            if ((lVar6 != 0) &&
               (*(longlong *)(lVar6 + 0x18) ==
                *(longlong *)(*(longlong *)(param_1 + 0x2250) + 0x458))) {
              lVar5 = FUN_144a3a302();
              if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) {
                lVar6 = 0;
              }
              FUN_14485c47a(param_1 + 0x21f8,lVar6);
              uVar2 = local_68;
              break;
            }
            local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
            FUN_1449c0562(&local_78);
            iVar4 = local_68._4_4_;
            uVar2 = local_68;
          } while (local_80 != plVar1 ||
                   (CONCAT44(uStack_6c,uStack_70) != lVar5 || local_68._4_4_ != iVar7));
        }
        local_68 = uVar2;
        cVar3 = FUN_144729dda(param_1 + 0x21f8);
        if (cVar3 != '\0') {
          lVar5 = FUN_14479d2ce(param_1 + 0x21f8);
          FUN_148cc846a(&local_88);
          FUN_148cc83d8(lVar5 + 0x598,param_1 + -0x400,local_88);
        }
      }
      goto LAB_148cc8236;
    }
  }
  *(undefined8 *)(param_1 + 0x2250) = 0;
LAB_148cc8236:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148cc83d8 FUN_148cc83d8 body=145 status=ok
// SIG undefined FUN_148cc83d8(void)

void FUN_148cc83d8(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  FUN_14485c47a(&local_58);
  uStack_50 = param_3;
  FUN_14113f0c0(&local_58);
  uVar2 = uStack_50;
  uVar1 = local_58;
  FUN_1400dccb8(param_1,&local_48);
  local_40 = uVar1;
  uStack_38 = uVar2;
  bVar3 = FUN_140a28ca8(param_1 + -0x598,local_48);
  *param_1 = *param_1 | bVar3;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc846a FUN_148cc846a body=182 status=ok
// SIG undefined FUN_148cc846a(void)

undefined8 * FUN_148cc846a(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc1a10) {
    FUN_144b3d300(&DAT_14cbc1a10);
    if (DAT_14cbc1a10 == -1) {
      builtin_wcsncpy(local_38 + 8,L"terTouch",9);
      builtin_wcsncpy(local_38,L"OnCharac",8);
      FUN_1446f470e(&DAT_14cbc1a08,local_38,1);
      _Init_thread_footer(&DAT_14cbc1a10);
    }
  }
  *param_1 = DAT_14cbc1a08;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc8522 FUN_148cc8522 body=85 status=ok
// SIG undefined FUN_148cc8522(void)

void FUN_148cc8522(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      cVar1 = FUN_1449ce97a(param_3);
      if (cVar1 != '\0') {
        FUN_148cc8702(param_1,param_3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148cc8578 FUN_148cc8578 body=304 status=ok
// SIG undefined FUN_148cc8578(void)

undefined1 (*) [16] FUN_148cc8578(longlong param_1,undefined1 (*param_2) [16])

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  pdVar7 = (double *)&DAT_14c846480;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    pdVar7 = (double *)(*(longlong *)(param_1 + 0x1c8) + 0x240);
  }
  dVar9 = *(double *)(param_1 + 0x2628) * pdVar7[8];
  dVar10 = *(double *)(param_1 + 0x2630) * pdVar7[9];
  dVar8 = *(double *)(param_1 + 0x2638) * pdVar7[10];
  dVar4 = *pdVar7;
  dVar5 = pdVar7[1];
  dVar6 = pdVar7[2];
  dVar1 = pdVar7[3];
  dVar11 = dVar10 * dVar4 - dVar9 * dVar5;
  dVar12 = dVar8 * dVar5 - dVar10 * dVar6;
  dVar13 = dVar9 * dVar6 - dVar4 * dVar8;
  dVar12 = dVar12 + dVar12;
  dVar13 = dVar13 + dVar13;
  dVar11 = dVar11 + dVar11;
  dVar3 = (dVar6 * dVar12 - dVar4 * dVar11) + pdVar7[3] * dVar13 + dVar10 + pdVar7[5];
  dVar10 = pdVar7[6];
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = (dVar11 * dVar5 - dVar13 * dVar6) + dVar1 * dVar12 + dVar9 + pdVar7[4];
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *param_2 = auVar2;
  *(double *)param_2[1] = dVar11 * dVar1 + dVar8 + (dVar13 * dVar4 - dVar12 * dVar5) + dVar10;
  return param_2;
}



// FUNCTION 148cc86a8 FUN_148cc86a8 body=90 status=ok
// SIG undefined FUN_148cc86a8(void)

void FUN_148cc86a8(longlong param_1,uint param_2)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x25f8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x25f8);
    (**(code **)(*plVar2 + 0x720))(plVar2,param_2 & 0xff);
  }
  if (*(longlong *)(param_1 + 0x2648) != 0) {
    FUN_147e41f4c(*(longlong *)(param_1 + 0x2648),param_2);
    return;
  }
  return;
}



// FUNCTION 148cc8702 FUN_148cc8702 body=523 status=ok
// SIG undefined FUN_148cc8702(void)

void FUN_148cc8702(longlong param_1,longlong param_2)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 ****ppppuVar5;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  undefined1 local_e0 [24];
  undefined1 local_c8 [40];
  undefined4 local_a0;
  undefined1 local_98 [40];
  undefined4 local_70;
  undefined8 ***local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((((*(longlong *)(param_1 + 0x2650) != 0) &&
       (lVar3 = FUN_14485c28e(*(longlong *)(param_1 + 0x2650) + 0x460), lVar3 != 0)) &&
      (lVar3 = FUN_14485c28e(*(longlong *)(param_1 + 0x2650) + 0x460), param_2 != 0 && lVar3 != 0))
     && ((*(char *)(param_2 + 0x178) == '\x03' && (1 < (byte)(*(char *)(param_2 + 0x5d30) - 1U)))))
  {
    lVar4 = FUN_144873cc0(param_1 + 0x2600);
    if (lVar4 != 0) {
      local_c8[0] = 0;
      local_a0 = 0;
      FUN_1456bb102(local_c8,param_2);
      local_98[0] = 0;
      local_70 = 0;
      FUN_144750e81(local_68,lVar4,local_c8);
      cVar2 = FUN_144a7fca4(local_68);
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
      if (pcVar1 != (code *)0x0) {
        ppppuVar5 = local_68;
        if (0x18 < local_50) {
          ppppuVar5 = (undefined8 ****)local_68[0];
        }
        (*pcVar1)(ppppuVar5);
      }
      if (0x18 < local_50) {
        FUN_1400020a8(local_68[0]);
      }
      FUN_144a5ac3a(local_98);
      FUN_144a5ac3a(local_c8);
      if (cVar2 == '\0') goto LAB_148cc8781;
    }
    lVar4 = *(longlong *)(&DAT_00006850 + param_2);
    if (lVar4 != 0) {
      cVar2 = FUN_148cfe2aa(lVar4);
      if (cVar2 == '\0') goto LAB_148cc8781;
      FUN_148cc8578(param_1,local_e0);
      local_100 = *(undefined4 *)(param_1 + 0x261c);
      local_f8 = 0;
      local_108 = 0;
      local_f0 = local_e0;
      FUN_14880f69a(lVar4,lVar3,param_2,*(undefined4 *)(param_1 + 0x2618));
    }
    FUN_1414180c0(param_2,*(longlong *)(param_1 + 0x2650) + 0x490,0,0);
    FUN_148bd4bce(param_1,param_2);
  }
LAB_148cc8781:
  if ((local_40 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148cc890e FUN_148cc890e body=733 status=ok
// SIG undefined FUN_148cc890e(void)

void FUN_148cc890e(longlong param_1,longlong param_2)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  double *pdVar12;
  undefined8 ****ppppuVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_128 [32];
  undefined1 local_108 [16];
  double local_f8;
  undefined4 local_e0;
  undefined1 local_d8 [40];
  undefined4 local_b0;
  undefined8 ***local_a8 [3];
  ushort local_90;
  byte local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x2650) != 0)) {
    lVar10 = FUN_144873cc0(param_1 + 0x2600);
    if (lVar10 != 0) {
      auVar8[0xf] = 0;
      auVar8._0_15_ = local_108._1_15_;
      local_108 = auVar8 << 8;
      local_e0 = 0;
      FUN_1456bb102(local_108,param_2);
      local_d8[0] = 0;
      local_b0 = 0;
      FUN_144750e81(local_a8,lVar10,local_108);
      cVar9 = FUN_144a7fca4(local_a8);
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
      if (pcVar2 != (code *)0x0) {
        ppppuVar13 = local_a8;
        if (0x18 < local_90) {
          ppppuVar13 = (undefined8 ****)local_a8[0];
        }
        (*pcVar2)(ppppuVar13);
      }
      if (0x18 < local_90) {
        FUN_1400020a8(local_a8[0]);
      }
      FUN_144a5ac3a(local_d8);
      FUN_144a5ac3a(local_108);
      if (cVar9 == '\0') goto LAB_148cc8ae8;
    }
    lVar10 = FUN_148add604(param_2);
    if (lVar10 != 0) {
      lVar11 = FUN_140d012c2();
      if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) {
        pdVar12 = (double *)&DAT_14c846480;
        if (*(longlong *)(param_1 + 0x1c8) != 0) {
          pdVar12 = (double *)(*(longlong *)(param_1 + 0x1c8) + 0x240);
        }
        dVar3 = *(double *)(param_1 + 0x2628) * pdVar12[8];
        dVar4 = *(double *)(param_1 + 0x2630) * pdVar12[9];
        dVar14 = *(double *)(param_1 + 0x2638) * pdVar12[10];
        dVar5 = *pdVar12;
        dVar6 = pdVar12[1];
        dVar7 = pdVar12[2];
        dVar1 = pdVar12[3];
        dVar15 = dVar4 * dVar5 - dVar3 * dVar6;
        dVar16 = dVar14 * dVar6 - dVar4 * dVar7;
        dVar17 = dVar3 * dVar7 - dVar5 * dVar14;
        dVar16 = dVar16 + dVar16;
        dVar17 = dVar17 + dVar17;
        dVar15 = dVar15 + dVar15;
        dVar4 = (dVar7 * dVar16 - dVar5 * dVar15) + pdVar12[3] * dVar17 + dVar4 + pdVar12[5];
        local_f8 = dVar15 * dVar1 + dVar14 + (dVar17 * dVar5 - dVar16 * dVar6) + pdVar12[6];
        local_108._8_4_ = SUB84(dVar4,0);
        local_108._0_8_ = (dVar15 * dVar6 - dVar17 * dVar7) + dVar1 * dVar16 + dVar3 + pdVar12[4];
        local_108._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        FUN_148f0197e(lVar10,*(undefined4 *)(param_1 + 0x2618),*(undefined4 *)(param_1 + 0x261c));
      }
    }
    FUN_148bd4c2c(param_1,param_2);
  }
LAB_148cc8ae8:
  if ((local_80 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148cc8c02 FUN_148cc8c02 body=59 status=ok
// SIG undefined FUN_148cc8c02(void)

void FUN_148cc8c02(longlong param_1,longlong param_2)

{
  FUN_140bfc8e6();
  if (*(longlong *)(param_2 + 0x68) == DAT_14cbc1968) {
    FUN_141422510(param_1 + -0x398);
    return;
  }
  return;
}



// FUNCTION 148cc8c46 FUN_148cc8c46 body=52 status=ok
// SIG undefined FUN_148cc8c46(void)

void FUN_148cc8c46(longlong param_1)

{
  FUN_1400f96ca();
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    FUN_140aeefbc(*(longlong *)(param_1 + 0x2a8),0,1);
    *(undefined8 *)(param_1 + 0x2a8) = 0;
  }
  return;
}



// FUNCTION 148cc8c7a FUN_148cc8c7a body=186 status=ok
// SIG undefined FUN_148cc8c7a(void)

longlong *
FUN_148cc8c7a(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = &PTR_LAB_14ab67120;
  *(undefined1 *)(puVar3 + 1) = *param_4;
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
  puVar3[2] = lVar5;
  *puVar3 = &PTR_FUN_14b9584b0;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_2);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  return param_1;
}



// FUNCTION 148cc8d34 FUN_148cc8d34 body=93 status=ok
// SIG undefined FUN_148cc8d34(void)

void FUN_148cc8d34(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_c = 0;
  local_20 = DAT_14cbc19f8;
  local_18 = 0xffffffff;
  FUN_141094e00(param_1 + 0x4d8,&local_20,param_2);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cc8d92 FUN_148cc8d92 body=148 status=ok
// SIG undefined FUN_148cc8d92(void)

undefined8 FUN_148cc8d92(undefined8 param_1)

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
  uVar1 = FUN_1459f3b46();
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



// FUNCTION 148cc8e28 FUN_148cc8e28 body=142 status=ok
// SIG undefined FUN_148cc8e28(void)

undefined8 FUN_148cc8e28(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_2;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  if ((((*param_1 == lVar1) && (param_1[2] == param_2[2])) && (param_1[0x10] == param_2[0x10])) &&
     ((((char)param_1[0x11] == (char)param_2[0x11] &&
       (*(char *)((longlong)param_1 + 0x89) == *(char *)((longlong)param_2 + 0x89))) &&
      (*(char *)((longlong)param_1 + 0x8a) == *(char *)((longlong)param_2 + 0x8a))))) {
    uVar2 = CONCAT71((int7)((ulonglong)param_1[0x10] >> 8),
                     *(char *)((longlong)param_1 + 0x8b) == *(char *)((longlong)param_2 + 0x8b));
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 148cc8eb6 FUN_148cc8eb6 body=48 status=ok
// SIG undefined FUN_148cc8eb6(void)

longlong FUN_148cc8eb6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc8ee6 FUN_148cc8ee6 body=48 status=ok
// SIG undefined FUN_148cc8ee6(void)

longlong FUN_148cc8ee6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc8f16 FUN_148cc8f16 body=48 status=ok
// SIG undefined FUN_148cc8f16(void)

longlong FUN_148cc8f16(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc8f46 FUN_148cc8f46 body=48 status=ok
// SIG undefined FUN_148cc8f46(void)

longlong FUN_148cc8f46(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc8f76 FUN_148cc8f76 body=48 status=ok
// SIG undefined FUN_148cc8f76(void)

longlong FUN_148cc8f76(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc8fa6 FUN_148cc8fa6 body=48 status=ok
// SIG undefined FUN_148cc8fa6(void)

longlong FUN_148cc8fa6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c8;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc8fd6 FUN_148cc8fd6 body=48 status=ok
// SIG undefined FUN_148cc8fd6(void)

longlong FUN_148cc8fd6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d0;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc9006 FUN_148cc9006 body=48 status=ok
// SIG undefined FUN_148cc9006(void)

longlong FUN_148cc9006(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d8;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc9036 FUN_148cc9036 body=48 status=ok
// SIG undefined FUN_148cc9036(void)

longlong FUN_148cc9036(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3e0;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc9066 FUN_148cc9066 body=48 status=ok
// SIG undefined FUN_148cc9066(void)

longlong FUN_148cc9066(longlong param_1,int param_2)

{
  param_1 = param_1 + -1000;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc9096 FUN_148cc9096 body=48 status=ok
// SIG undefined FUN_148cc9096(void)

longlong FUN_148cc9096(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f0;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc90c6 FUN_148cc90c6 body=48 status=ok
// SIG undefined FUN_148cc90c6(void)

longlong FUN_148cc90c6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3f8;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc90f6 FUN_148cc90f6 body=48 status=ok
// SIG undefined FUN_148cc90f6(void)

longlong FUN_148cc90f6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc9126 FUN_148cc9126 body=48 status=ok
// SIG undefined FUN_148cc9126(void)

longlong FUN_148cc9126(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc9156 FUN_148cc9156 body=48 status=ok
// SIG undefined FUN_148cc9156(void)

longlong FUN_148cc9156(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc9186 FUN_148cc9186 body=48 status=ok
// SIG undefined FUN_148cc9186(void)

longlong FUN_148cc9186(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc91b6 FUN_148cc91b6 body=48 status=ok
// SIG undefined FUN_148cc91b6(void)

longlong FUN_148cc91b6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc91e6 FUN_148cc91e6 body=48 status=ok
// SIG undefined FUN_148cc91e6(void)

longlong FUN_148cc91e6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc9216 FUN_148cc9216 body=48 status=ok
// SIG undefined FUN_148cc9216(void)

longlong FUN_148cc9216(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x430;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc9246 FUN_148cc9246 body=48 status=ok
// SIG undefined FUN_148cc9246(void)

longlong FUN_148cc9246(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x438;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc9276 FUN_148cc9276 body=48 status=ok
// SIG undefined FUN_148cc9276(void)

longlong FUN_148cc9276(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1548;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc92a6 FUN_148cc92a6 body=48 status=ok
// SIG undefined FUN_148cc92a6(void)

longlong FUN_148cc92a6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1550;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc92d6 FUN_148cc92d6 body=48 status=ok
// SIG undefined FUN_148cc92d6(void)

longlong FUN_148cc92d6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1558;
  FUN_140ce470e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc9306 FUN_148cc9306 body=48 status=ok
// SIG undefined FUN_148cc9306(void)

longlong FUN_148cc9306(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc9336 FUN_148cc9336 body=48 status=ok
// SIG undefined FUN_148cc9336(void)

longlong FUN_148cc9336(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc9366 FUN_148cc9366 body=48 status=ok
// SIG undefined FUN_148cc9366(void)

longlong FUN_148cc9366(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc9396 FUN_148cc9396 body=48 status=ok
// SIG undefined FUN_148cc9396(void)

longlong FUN_148cc9396(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc93c6 FUN_148cc93c6 body=48 status=ok
// SIG undefined FUN_148cc93c6(void)

longlong FUN_148cc93c6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc93f6 FUN_148cc93f6 body=48 status=ok
// SIG undefined FUN_148cc93f6(void)

longlong FUN_148cc93f6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc9426 FUN_148cc9426 body=48 status=ok
// SIG undefined FUN_148cc9426(void)

longlong FUN_148cc9426(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc9456 FUN_148cc9456 body=48 status=ok
// SIG undefined FUN_148cc9456(void)

longlong FUN_148cc9456(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc9486 FUN_148cc9486 body=48 status=ok
// SIG undefined FUN_148cc9486(void)

longlong FUN_148cc9486(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc94b6 FUN_148cc94b6 body=48 status=ok
// SIG undefined FUN_148cc94b6(void)

longlong FUN_148cc94b6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc94e6 FUN_148cc94e6 body=48 status=ok
// SIG undefined FUN_148cc94e6(void)

longlong FUN_148cc94e6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc9516 FUN_148cc9516 body=48 status=ok
// SIG undefined FUN_148cc9516(void)

longlong FUN_148cc9516(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc9546 FUN_148cc9546 body=48 status=ok
// SIG undefined FUN_148cc9546(void)

longlong FUN_148cc9546(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x468;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc9576 FUN_148cc9576 body=48 status=ok
// SIG undefined FUN_148cc9576(void)

longlong FUN_148cc9576(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc95a6 FUN_148cc95a6 body=48 status=ok
// SIG undefined FUN_148cc95a6(void)

longlong FUN_148cc95a6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x478;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc95d6 FUN_148cc95d6 body=48 status=ok
// SIG undefined FUN_148cc95d6(void)

longlong FUN_148cc95d6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x480;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc9606 FUN_148cc9606 body=48 status=ok
// SIG undefined FUN_148cc9606(void)

longlong FUN_148cc9606(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x488;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc9636 FUN_148cc9636 body=48 status=ok
// SIG undefined FUN_148cc9636(void)

longlong FUN_148cc9636(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x490;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc9666 FUN_148cc9666 body=48 status=ok
// SIG undefined FUN_148cc9666(void)

longlong FUN_148cc9666(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x498;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc9696 FUN_148cc9696 body=48 status=ok
// SIG undefined FUN_148cc9696(void)

longlong FUN_148cc9696(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc96c6 FUN_148cc96c6 body=48 status=ok
// SIG undefined FUN_148cc96c6(void)

longlong FUN_148cc96c6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc96f6 FUN_148cc96f6 body=48 status=ok
// SIG undefined FUN_148cc96f6(void)

longlong FUN_148cc96f6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b0;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc9726 FUN_148cc9726 body=48 status=ok
// SIG undefined FUN_148cc9726(void)

longlong FUN_148cc9726(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a98;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc9756 FUN_148cc9756 body=48 status=ok
// SIG undefined FUN_148cc9756(void)

longlong FUN_148cc9756(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa0;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc9786 FUN_148cc9786 body=48 status=ok
// SIG undefined FUN_148cc9786(void)

longlong FUN_148cc9786(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa8;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc97b6 FUN_148cc97b6 body=48 status=ok
// SIG undefined FUN_148cc97b6(void)

longlong FUN_148cc97b6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ab0;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc97e6 FUN_148cc97e6 body=48 status=ok
// SIG undefined FUN_148cc97e6(void)

longlong FUN_148cc97e6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad0;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc9816 FUN_148cc9816 body=48 status=ok
// SIG undefined FUN_148cc9816(void)

longlong FUN_148cc9816(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad8;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc9846 FUN_148cc9846 body=48 status=ok
// SIG undefined FUN_148cc9846(void)

longlong FUN_148cc9846(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ae0;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc9876 FUN_148cc9876 body=48 status=ok
// SIG undefined FUN_148cc9876(void)

longlong FUN_148cc9876(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x25f8;
  FUN_145925b70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc98a6 FUN_148cc98a6 body=45 status=ok
// SIG undefined FUN_148cc98a6(void)

longlong FUN_148cc98a6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_141001552(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc98d4 FUN_148cc98d4 body=45 status=ok
// SIG undefined FUN_148cc98d4(void)

longlong FUN_148cc98d4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  FUN_141001552(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc9902 FUN_148cc9902 body=45 status=ok
// SIG undefined FUN_148cc9902(void)

longlong FUN_148cc9902(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x58;
  FUN_141001552(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc9930 FUN_148cc9930 body=38 status=ok
// SIG undefined FUN_148cc9930(void)

undefined8 FUN_148cc9930(undefined8 param_1,int param_2)

{
  FUN_14075380c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc997a FUN_148cc997a body=125 status=ok
// SIG undefined FUN_148cc997a(void)

undefined8 FUN_148cc997a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486157b2(param_2,param_3);
    *(undefined2 *)(param_2 + 0x6f0) = *(undefined2 *)(param_3 + 0x6f0);
    FUN_1418c41de(param_2 + 0x6f8,param_3 + 0x6f8);
    uVar1 = *(undefined4 *)(param_3 + 0x714);
    uVar2 = *(undefined4 *)(param_3 + 0x718);
    uVar3 = *(undefined4 *)(param_3 + 0x71c);
    *(undefined4 *)(param_2 + 0x710) = *(undefined4 *)(param_3 + 0x710);
    *(undefined4 *)(param_2 + 0x714) = uVar1;
    *(undefined4 *)(param_2 + 0x718) = uVar2;
    *(undefined4 *)(param_2 + 0x71c) = uVar3;
    *(undefined1 *)(param_2 + 0x720) = *(undefined1 *)(param_3 + 0x720);
    param_2 = param_2 + 0x728;
    param_3 = param_3 + 0x728;
  }
  return 1;
}



// FUNCTION 148cc9a20 FUN_148cc9a20 body=59 status=ok
// SIG undefined FUN_148cc9a20(void)

undefined8 FUN_148cc9a20(longlong *param_1)

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



// FUNCTION 148cc9a6c FUN_148cc9a6c body=38 status=ok
// SIG undefined FUN_148cc9a6c(void)

void FUN_148cc9a6c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x728) == '\x01') {
    FUN_140adedd4(param_2);
    *(undefined1 *)(param_2 + 0x728) = 0;
  }
  return;
}



// FUNCTION 148cc9b3e FUN_148cc9b3e body=75 status=ok
// SIG undefined FUN_148cc9b3e(void)

undefined1 FUN_148cc9b3e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140d02432(param_2,param_3);
    FUN_140d02432(param_2 + 0x50,param_3 + 0x50);
    param_2 = param_2 + 0xa0;
    param_3 = param_3 + 0xa0;
  }
  return 1;
}



// FUNCTION 148cc9bb2 FUN_148cc9bb2 body=59 status=ok
// SIG undefined FUN_148cc9bb2(void)

undefined8 FUN_148cc9bb2(longlong *param_1)

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



// FUNCTION 148cc9c72 FUN_148cc9c72 body=63 status=ok
// SIG undefined FUN_148cc9c72(void)

undefined1 FUN_148cc9c72(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148cc9d7a(param_2,param_3);
    param_3 = param_3 + 0x2b0;
    param_2 = param_2 + 0x2b0;
  }
  return 1;
}



// FUNCTION 148cc9cda FUN_148cc9cda body=59 status=ok
// SIG undefined FUN_148cc9cda(void)

undefined8 FUN_148cc9cda(longlong *param_1)

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



// FUNCTION 148cc9d7a FUN_148cc9d7a body=178 status=ok
// SIG undefined FUN_148cc9d7a(void)

longlong FUN_148cc9d7a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  FUN_1418443e8(param_1 + 0x18,param_2 + 0x18);
  FUN_140d02432(param_1 + 0x30,param_2 + 0x30);
  FUN_140d02432(param_1 + 0x80,param_2 + 0x80);
  FUN_140d02432(param_1 + 0xd0,param_2 + 0xd0);
  FUN_140d02432(param_1 + 0x120,param_2 + 0x120);
  FUN_140d02432(param_1 + 0x170,param_2 + 0x170);
  FUN_140d02432(param_1 + 0x1c0,param_2 + 0x1c0);
  FUN_140d02432(param_1 + 0x210,param_2 + 0x210);
  FUN_140d02432(param_1 + 0x260,param_2 + 0x260);
  return param_1;
}



// FUNCTION 148cc9efc FUN_148cc9efc body=59 status=ok
// SIG undefined FUN_148cc9efc(void)

undefined8 FUN_148cc9efc(longlong *param_1)

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



// FUNCTION 148cc9f42 FUN_148cc9f42 body=43 status=ok
// SIG undefined FUN_148cc9f42(void)

void FUN_148cc9f42(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 148cc9fbc FUN_148cc9fbc body=52 status=ok
// SIG undefined FUN_148cc9fbc(void)

undefined8 * FUN_148cc9fbc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cc9ff0 FUN_148cc9ff0 body=55 status=ok
// SIG undefined FUN_148cc9ff0(void)

void FUN_148cc9ff0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc1428 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc1428 = FUN_140002ddd(FUN_14661b937,uVar1,L"WeeklyActivityTimestampDef");
  }
  return;
}



// FUNCTION 148cca07a FUN_148cca07a body=93 status=ok
// SIG undefined FUN_148cca07a(void)

undefined1 FUN_148cca07a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_14173baee(param_2 + 8 + lVar6,param_3 + 8 + lVar6);
      puVar1 = (undefined4 *)(param_3 + 0x20 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x20 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar6 = lVar6 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148cca100 FUN_148cca100 body=59 status=ok
// SIG undefined FUN_148cca100(void)

undefined8 FUN_148cca100(longlong *param_1)

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



// FUNCTION 148cca1a0 FUN_148cca1a0 body=55 status=ok
// SIG undefined FUN_148cca1a0(void)

void FUN_148cca1a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc14d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc14d0 = FUN_140002ddd(FUN_14661b9cd,uVar1,L"WorldDifficultyDataTableValueResolver");
  }
  return;
}



// FUNCTION 148cca220 FUN_148cca220 body=78 status=ok
// SIG undefined FUN_148cca220(void)

undefined8 FUN_148cca220(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_1447715ec(param_2,param_3);
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148cca296 FUN_148cca296 body=59 status=ok
// SIG undefined FUN_148cca296(void)

undefined8 FUN_148cca296(longlong *param_1)

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



// FUNCTION 148cca2dc FUN_148cca2dc body=50 status=ok
// SIG undefined FUN_148cca2dc(void)

void FUN_148cca2dc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14b9573b0;
    if (param_2[6] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 148cca35c FUN_148cca35c body=55 status=ok
// SIG undefined FUN_148cca35c(void)

void FUN_148cca35c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc14e8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc14e8 = FUN_140002ddd(FUN_14661ba63,uVar1,L"WorldRegionBalanceValueResolver");
  }
  return;
}



// FUNCTION 148cca3b2 FUN_148cca3b2 body=63 status=ok
// SIG undefined FUN_148cca3b2(void)

undefined1 FUN_148cca3b2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148cca62c(param_2,param_3);
    param_3 = param_3 + 0x240;
    param_2 = param_2 + 0x240;
  }
  return 1;
}



// FUNCTION 148cca41a FUN_148cca41a body=59 status=ok
// SIG undefined FUN_148cca41a(void)

undefined8 FUN_148cca41a(longlong *param_1)

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



// FUNCTION 148cca466 FUN_148cca466 body=38 status=ok
// SIG undefined FUN_148cca466(void)

void FUN_148cca466(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x240) == '\x01') {
    FUN_148cca5ae(param_2);
    *(undefined1 *)(param_2 + 0x240) = 0;
  }
  return;
}



// FUNCTION 148cca4c6 FUN_148cca4c6 body=232 status=ok
// SIG undefined FUN_148cca4c6(void)

undefined8 * FUN_148cca4c6(undefined8 *param_1)

{
  FUN_1410fa30a();
  *param_1 = &PTR_FUN_14b9575a0;
  *(undefined4 *)(param_1 + 0x1d) = 0x3f800000;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xf00000d0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x27) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x17a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x182) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  param_1[0x47] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  return param_1;
}



// FUNCTION 148cca5ae FUN_148cca5ae body=126 status=ok
// SIG undefined FUN_148cca5ae(void)

void FUN_148cca5ae(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b9575a0;
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_140e91c1c(param_1);
  return;
}



// FUNCTION 148cca62c FUN_148cca62c body=297 status=ok
// SIG undefined FUN_148cca62c(void)

longlong FUN_148cca62c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_14874ae80();
  FUN_140d02432(param_1 + 0xe8,param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
  FUN_1447715ec(param_1 + 0x148,param_2 + 0x148);
  FUN_148cca756(param_1 + 0x170,param_2 + 0x170);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_2 + 0x188);
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_2 + 400);
  FUN_1447715ec(param_1 + 0x198,param_2 + 0x198);
  *(undefined1 *)(param_1 + 0x1c0) = *(undefined1 *)(param_2 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_2 + 0x1c8);
  uVar1 = *(undefined4 *)(param_2 + 0x1d4);
  uVar2 = *(undefined4 *)(param_2 + 0x1d8);
  uVar3 = *(undefined4 *)(param_2 + 0x1dc);
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_2 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1d4) = uVar1;
  *(undefined4 *)(param_1 + 0x1d8) = uVar2;
  *(undefined4 *)(param_1 + 0x1dc) = uVar3;
  FUN_144a787a6(param_1 + 0x1e0,param_2 + 0x1e0);
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_2 + 0x1f0);
  uVar1 = *(undefined4 *)(param_2 + 0x1fc);
  uVar2 = *(undefined4 *)(param_2 + 0x200);
  uVar3 = *(undefined4 *)(param_2 + 0x204);
  *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_2 + 0x1f8);
  *(undefined4 *)(param_1 + 0x1fc) = uVar1;
  *(undefined4 *)(param_1 + 0x200) = uVar2;
  *(undefined4 *)(param_1 + 0x204) = uVar3;
  FUN_144a787a6(param_1 + 0x208,param_2 + 0x208);
  *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0x218);
  uVar1 = *(undefined4 *)(param_2 + 0x224);
  uVar2 = *(undefined4 *)(param_2 + 0x228);
  uVar3 = *(undefined4 *)(param_2 + 0x22c);
  *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_2 + 0x220);
  *(undefined4 *)(param_1 + 0x224) = uVar1;
  *(undefined4 *)(param_1 + 0x228) = uVar2;
  *(undefined4 *)(param_1 + 0x22c) = uVar3;
  FUN_144a787a6(param_1 + 0x230,param_2 + 0x230);
  return param_1;
}



// FUNCTION 148cca756 FUN_148cca756 body=84 status=ok
// SIG undefined FUN_148cca756(void)

longlong * FUN_148cca756(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 148cca7ac FUN_148cca7ac body=28 status=ok
// SIG undefined FUN_148cca7ac(void)

undefined8 FUN_148cca7ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148cca7da FUN_148cca7da body=38 status=ok
// SIG undefined FUN_148cca7da(void)

undefined8 FUN_148cca7da(undefined8 param_1,int param_2)

{
  FUN_145925dbe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cca800 FUN_148cca800 body=55 status=ok
// SIG undefined FUN_148cca800(void)

void FUN_148cca800(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc1630 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc1630 = FUN_140002ddd(FUN_14661bc93,uVar1,L"ZoneTravelStationObjectBodyState");
  }
  return;
}



// FUNCTION 148cca838 FUN_148cca838 body=57 status=ok
// SIG undefined FUN_148cca838(void)

void FUN_148cca838(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc1600 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc1600 = FUN_140002ddd(FUN_14661bb8c,uVar1,L"ZoneTravelStationObjectBodySettings");
  }
  return;
}



// FUNCTION 148cca8a4 FUN_148cca8a4 body=63 status=ok
// SIG undefined FUN_148cca8a4(void)

undefined1 FUN_148cca8a4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14862f10e(param_2,param_3);
    param_3 = param_3 + 0x228;
    param_2 = param_2 + 0x228;
  }
  return 1;
}



// FUNCTION 148cca90c FUN_148cca90c body=59 status=ok
// SIG undefined FUN_148cca90c(void)

undefined8 FUN_148cca90c(longlong *param_1)

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



// FUNCTION 148cca958 FUN_148cca958 body=38 status=ok
// SIG undefined FUN_148cca958(void)

void FUN_148cca958(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x228) == '\x01') {
    FUN_140d2194c(param_2);
    *(undefined1 *)(param_2 + 0x228) = 0;
  }
  return;
}



// FUNCTION 148cca9d6 FUN_148cca9d6 body=48 status=ok
// SIG undefined FUN_148cca9d6(void)

void FUN_148cca9d6(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x220);
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b95aed0;
  return;
}



// FUNCTION 148ccaa06 FUN_148ccaa06 body=32 status=ok
// SIG undefined FUN_148ccaa06(void)

void FUN_148ccaa06(undefined8 param_1,undefined8 *param_2)

{
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b95aed0;
  return;
}



// FUNCTION 148ccaa80 FUN_148ccaa80 body=59 status=ok
// SIG undefined FUN_148ccaa80(void)

undefined8 FUN_148ccaa80(longlong *param_1)

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



// FUNCTION 148ccaacc FUN_148ccaacc body=40 status=ok
// SIG undefined FUN_148ccaacc(void)

void FUN_148ccaacc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x220) == '\x01') {
    FUN_145925dbe(param_2);
    *(undefined1 *)(param_2 + 0x220) = 0;
  }
  return;
}



// FUNCTION 148ccab44 FUN_148ccab44 body=32 status=ok
// SIG undefined FUN_148ccab44(void)

void FUN_148ccab44(undefined8 param_1,undefined8 *param_2)

{
  FUN_141021b94(param_2);
  *param_2 = &PTR_FUN_14b958140;
  return;
}



// FUNCTION 148ccab7a FUN_148ccab7a body=139 status=ok
// SIG undefined FUN_148ccab7a(void)

undefined8 FUN_148ccab7a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b897b2(param_2,param_3);
    *(undefined1 *)(param_2 + 0x458) = *(undefined1 *)(param_3 + 0x458);
    *(undefined8 *)(param_2 + 0x460) = *(undefined8 *)(param_3 + 0x460);
    uVar1 = *(undefined4 *)(param_3 + 0x46c);
    uVar2 = *(undefined4 *)(param_3 + 0x470);
    uVar3 = *(undefined4 *)(param_3 + 0x474);
    *(undefined4 *)(param_2 + 0x468) = *(undefined4 *)(param_3 + 0x468);
    *(undefined4 *)(param_2 + 0x46c) = uVar1;
    *(undefined4 *)(param_2 + 0x470) = uVar2;
    *(undefined4 *)(param_2 + 0x474) = uVar3;
    FUN_144a787a6(param_2 + 0x478,param_3 + 0x478);
    *(undefined8 *)(param_2 + 0x488) = *(undefined8 *)(param_3 + 0x488);
    param_2 = param_2 + 0x490;
    param_3 = param_3 + 0x490;
  }
  return 1;
}



// FUNCTION 148ccac2e FUN_148ccac2e body=59 status=ok
// SIG undefined FUN_148ccac2e(void)

undefined8 FUN_148ccac2e(longlong *param_1)

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



// FUNCTION 148ccac7a FUN_148ccac7a body=65 status=ok
// SIG undefined FUN_148ccac7a(void)

void FUN_148ccac7a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x92) == '\x01') {
    *param_2 = &PTR_FUN_14b5ecae0;
    if (param_2[0x8f] != 0) {
      FUN_1400020a8();
    }
    FUN_14075380c(param_2);
    *(undefined1 *)(param_2 + 0x92) = 0;
  }
  return;
}



// FUNCTION 148ccacfe FUN_148ccacfe body=159 status=ok
// SIG undefined FUN_148ccacfe(void)

longlong * FUN_148ccacfe(longlong *param_1,longlong *param_2)

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
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
  }
  return param_1;
}



// FUNCTION 148ccad9e FUN_148ccad9e body=31 status=ok
// SIG undefined FUN_148ccad9e(void)

undefined8 FUN_148ccad9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ccadd2 FUN_148ccadd2 body=85 status=ok
// SIG undefined FUN_148ccadd2(void)

void FUN_148ccadd2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b959e20;
  return;
}



// FUNCTION 148ccae28 FUN_148ccae28 body=118 status=ok
// SIG undefined FUN_148ccae28(void)

void FUN_148ccae28(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b959e20;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ccae8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ccae9e FUN_148ccae9e body=105 status=ok
// SIG undefined FUN_148ccae9e(void)

undefined8 FUN_148ccae9e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145d31d24(param_1 + 0x18,local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ccaf08 FUN_148ccaf08 body=24 status=ok
// SIG undefined FUN_148ccaf08(void)

void FUN_148ccaf08(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ccaf1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 148ccaf20 FUN_148ccaf20 body=29 status=ok
// SIG undefined FUN_148ccaf20(void)

undefined8 FUN_148ccaf20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ccaf58 FUN_148ccaf58 body=29 status=ok
// SIG undefined FUN_148ccaf58(void)

bool FUN_148ccaf58(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148ccaf76 FUN_148ccaf76 body=26 status=ok
// SIG undefined FUN_148ccaf76(void)

bool FUN_148ccaf76(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148ccaf90 FUN_148ccaf90 body=24 status=ok
// SIG undefined FUN_148ccaf90(void)

bool FUN_148ccaf90(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148ccafa8 FUN_148ccafa8 body=101 status=ok
// SIG undefined FUN_148ccafa8(void)

void FUN_148ccafa8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9582c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ccb00e FUN_148ccb00e body=101 status=ok
// SIG undefined FUN_148ccb00e(void)

void FUN_148ccb00e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9582c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ccb074 FUN_148ccb074 body=134 status=ok
// SIG undefined FUN_148ccb074(void)

void FUN_148ccb074(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9582c0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ccb0eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ccb0fa FUN_148ccb0fa body=39 status=ok
// SIG undefined FUN_148ccb0fa(void)

void FUN_148ccb0fa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148ccb11d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148ccb122 FUN_148ccb122 body=146 status=ok
// SIG undefined FUN_148ccb122(void)

bool FUN_148ccb122(longlong param_1)

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



// FUNCTION 148ccb1b6 FUN_148ccb1b6 body=414 status=ok
// SIG undefined FUN_148ccb1b6(void)

longlong * FUN_148ccb1b6(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  local_34 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_34 = *(uint *)(param_2 + 1);
  }
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (local_34 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_148ccb3dc(param_2,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x200000 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_34;
    lVar4 = 0;
    lVar6 = 0;
    do {
      (**(code **)(*param_1 + 0x120))(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_148ccb3dc(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_145cb4378(param_2,iVar2);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = 0;
        (**(code **)(*param_1 + 0x120))(param_1);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148ccb356 FUN_148ccb356 body=132 status=ok
// SIG undefined FUN_148ccb356(void)

void FUN_148ccb356(longlong param_1,int param_2)

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



// FUNCTION 148ccb3dc FUN_148ccb3dc body=96 status=ok
// SIG undefined FUN_148ccb3dc(void)

void FUN_148ccb3dc(longlong param_1,int param_2)

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



// FUNCTION 148ccb456 FUN_148ccb456 body=29 status=ok
// SIG undefined FUN_148ccb456(void)

bool FUN_148ccb456(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148ccb474 FUN_148ccb474 body=26 status=ok
// SIG undefined FUN_148ccb474(void)

bool FUN_148ccb474(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148ccb48e FUN_148ccb48e body=101 status=ok
// SIG undefined FUN_148ccb48e(void)

void FUN_148ccb48e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b958330;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ccb4f4 FUN_148ccb4f4 body=101 status=ok
// SIG undefined FUN_148ccb4f4(void)

void FUN_148ccb4f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b958330;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ccb55a FUN_148ccb55a body=134 status=ok
// SIG undefined FUN_148ccb55a(void)

void FUN_148ccb55a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b958330;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ccb5d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ccb5e0 FUN_148ccb5e0 body=44 status=ok
// SIG undefined FUN_148ccb5e0(void)

void FUN_148ccb5e0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148ccb609. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148ccb60c FUN_148ccb60c body=31 status=ok
// SIG undefined FUN_148ccb60c(void)

undefined8 FUN_148ccb60c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ccb632 FUN_148ccb632 body=29 status=ok
// SIG undefined FUN_148ccb632(void)

bool FUN_148ccb632(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148ccb650 FUN_148ccb650 body=26 status=ok
// SIG undefined FUN_148ccb650(void)

bool FUN_148ccb650(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148ccb66a FUN_148ccb66a body=101 status=ok
// SIG undefined FUN_148ccb66a(void)

void FUN_148ccb66a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9583a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ccb6d0 FUN_148ccb6d0 body=134 status=ok
// SIG undefined FUN_148ccb6d0(void)

void FUN_148ccb6d0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9583a0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ccb747. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ccb756 FUN_148ccb756 body=146 status=ok
// SIG undefined FUN_148ccb756(void)

bool FUN_148ccb756(longlong param_1)

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



// FUNCTION 148ccb7ea FUN_148ccb7ea body=124 status=ok
// SIG undefined FUN_148ccb7ea(void)

longlong FUN_148ccb7ea(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_50 = *param_1;
    FUN_1446dcdd4(local_48);
    lVar1 = FUN_145943168(local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ccb868 FUN_148ccb868 body=61 status=ok
// SIG undefined FUN_148ccb868(void)

longlong FUN_148ccb868(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    lVar2 = FUN_141119784();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 148ccb8a6 FUN_148ccb8a6 body=29 status=ok
// SIG undefined FUN_148ccb8a6(void)

undefined8 FUN_148ccb8a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ccb8de FUN_148ccb8de body=29 status=ok
// SIG undefined FUN_148ccb8de(void)

bool FUN_148ccb8de(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148ccb8fc FUN_148ccb8fc body=26 status=ok
// SIG undefined FUN_148ccb8fc(void)

bool FUN_148ccb8fc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148ccb916 FUN_148ccb916 body=24 status=ok
// SIG undefined FUN_148ccb916(void)

bool FUN_148ccb916(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148ccb92e FUN_148ccb92e body=101 status=ok
// SIG undefined FUN_148ccb92e(void)

void FUN_148ccb92e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab67120;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b9584b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ccb994 FUN_148ccb994 body=101 status=ok
// SIG undefined FUN_148ccb994(void)

void FUN_148ccb994(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab67120;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b9584b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148ccb9fa FUN_148ccb9fa body=134 status=ok
// SIG undefined FUN_148ccb9fa(void)

void FUN_148ccb9fa(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ab67120;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14b9584b0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ccba71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148ccba80 FUN_148ccba80 body=39 status=ok
// SIG undefined FUN_148ccba80(void)

void FUN_148ccba80(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148ccbaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,*(undefined1 *)(param_1 + 8),
             *(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148ccbaa8 FUN_148ccbaa8 body=149 status=ok
// SIG undefined FUN_148ccbaa8(void)

bool FUN_148ccbaa8(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,*(undefined1 *)(param_1 + 8));
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



// FUNCTION 148ccbb3e FUN_148ccbb3e body=148 status=ok
// SIG undefined FUN_148ccbb3e(void)

undefined8 FUN_148ccbb3e(undefined8 param_1)

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
  uVar1 = FUN_14088b378();
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



// FUNCTION 148ccbc0c FUN_148ccbc0c body=40 status=ok
// SIG undefined FUN_148ccbc0c(void)

undefined8 FUN_148ccbc0c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140ef3c44(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 148ccbc40 FUN_148ccbc40 body=626 status=ok
// SIG undefined FUN_148ccbc40(void)

void FUN_148ccbc40(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined1 local_e0 [8];
  undefined8 *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  byte local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if (param_4 != 0) {
    cVar2 = FUN_14090a3d8(param_4,param_2);
    if ((((lVar3 != 0) && (cVar2 == '\x06')) && ((char)param_1[0x28] == '\x01')) &&
       (*(double *)(lVar3 + 0x6d0) - (double)param_1[0x27] < 1.0)) {
      if (*(longlong *)(lVar3 + 0x1f0) == 0) {
        puVar4 = (undefined8 *)(lVar3 + 0x458);
      }
      else {
        puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
      }
      uVar1 = *puVar4;
      local_d8 = (undefined8 *)0x0;
      local_d0 = 0;
      FUN_1446efa72(&local_d8,0,5,0x10);
      puVar4 = local_d8;
      local_d0 = 5;
      *local_d8 = &PTR_LAB_14b95b870;
      local_d8[1] = param_2;
      local_d8[2] = param_3;
      local_d8[3] = param_4;
      *(undefined4 *)(local_d8 + 4) = param_5;
      *(undefined4 *)((longlong)local_d8 + 0x24) = param_6;
      *(undefined4 *)(local_d8 + 5) = param_7;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_d8[6] = lVar5;
      *local_d8 = &PTR_FUN_14b95b800;
      local_d8[7] = 0;
      FUN_14485c47a(local_d8 + 7,param_1);
      *(undefined4 *)(puVar4 + 9) = 0;
      puVar4[8] = FUN_148ccbc40;
      local_c8 = 0;
      local_c0 = 0;
      FUN_14487d8d8(&local_c8,&local_d8);
      local_88 = 1;
      FUN_14016fdb0(uVar1,local_e0,&local_c8);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_88])(&local_c8);
      FUN_1449db362(&local_d8);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_108);
    }
  }
  local_e8 = param_7;
  FUN_141693cd8(param_1,param_3,param_5,param_6);
  if ((local_70 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ccbeb6 FUN_148ccbeb6 body=93 status=ok
// SIG undefined FUN_148ccbeb6(void)

void FUN_148ccbeb6(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2b8))();
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_1412308c8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      (**(code **)(*plVar1 + 0x6e0))(plVar1,0);
    }
  }
  FUN_148beb398(param_1 + 0x22);
  return;
}



// FUNCTION 148ccbf14 FUN_148ccbf14 body=33 status=ok
// SIG undefined FUN_148ccbf14(void)

void FUN_148ccbf14(longlong param_1)

{
  FUN_148beb38a(param_1 + 0xc0);
  FUN_148ccbf36(param_1);
  return;
}



// FUNCTION 148ccbf36 FUN_148ccbf36 body=91 status=ok
// SIG undefined FUN_148ccbf36(void)

void FUN_148ccbf36(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x2b8))();
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x168), lVar2 != 0)) {
    lVar3 = FUN_144a2f878();
    iVar1 = *(int *)(lVar3 + 0x38);
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        lVar3 + 0x30)) {
      FUN_148cd4ace(lVar2 + 0x4ea0,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1));
      return;
    }
  }
  return;
}



// FUNCTION 148ccbf92 FUN_148ccbf92 body=12 status=ok
// SIG undefined FUN_148ccbf92(void)

void FUN_148ccbf92(longlong param_1)

{
  FUN_148beb38a(param_1 + 0xd0);
  return;
}



// FUNCTION 148ccbf9e FUN_148ccbf9e body=8 status=ok
// SIG undefined FUN_148ccbf9e(void)

undefined8 FUN_148ccbf9e(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x120);
}



// FUNCTION 148ccbfa6 FUN_148ccbfa6 body=79 status=ok
// SIG undefined FUN_148ccbfa6(void)

undefined8 FUN_148ccbfa6(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x2b8))();
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x168), lVar1 != 0)) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),*(undefined1 *)(lVar1 + 0x4f12));
    }
  }
  return 0;
}



// FUNCTION 148ccbff6 FUN_148ccbff6 body=254 status=ok
// SIG undefined FUN_148ccbff6(void)

undefined8
FUN_148ccbff6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b95bba0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ccc0fc FUN_148ccc0fc body=16 status=ok
// SIG undefined FUN_148ccc0fc(void)

void FUN_148ccc0fc(longlong param_1,undefined1 param_2)

{
  if (*(char *)(param_1 + 0x178) == '\x03') {
    *(undefined1 *)(param_1 + 0x7f20) = param_2;
  }
  return;
}



// FUNCTION 148ccc10c FUN_148ccc10c body=80 status=ok
// SIG undefined FUN_148ccc10c(void)

void FUN_148ccc10c(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (param_3 == '\0') {
    FUN_1400bc8c2(param_1 + 0x9c78,&local_10);
  }
  else {
    FUN_1400bc96c();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ccc15e FUN_148ccc15e body=89 status=ok
// SIG undefined FUN_148ccc15e(void)

void FUN_148ccc15e(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1487bc180();
  FUN_1406c9d00(param_1 + 0x12f0,local_30);
  FUN_148dc2664(param_1,local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ccc1b8 FUN_148ccc1b8 body=15 status=ok
// SIG undefined FUN_148ccc1b8(void)

void FUN_148ccc1b8(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x99c1) != param_2) {
    *(char *)(param_1 + 0x99c1) = param_2;
  }
  return;
}



// FUNCTION 148ccc1c8 FUN_148ccc1c8 body=15 status=ok
// SIG undefined FUN_148ccc1c8(void)

void FUN_148ccc1c8(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x99c0) != param_2) {
    *(char *)(param_1 + 0x99c0) = param_2;
  }
  return;
}



// FUNCTION 148ccc1d8 FUN_148ccc1d8 body=30 status=ok
// SIG undefined FUN_148ccc1d8(void)

undefined4 FUN_148ccc1d8(longlong param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + 0x254);
  if (*(char *)(param_1 + 0x280) != '\0') {
    puVar1 = (undefined4 *)(param_1 + 0x284);
  }
  return *puVar1;
}



// FUNCTION 148ccc1f8 FUN_148ccc1f8 body=487 status=ok
// SIG undefined FUN_148ccc1f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148ccc1f8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  undefined8 uVar7;
  char cVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1487bcdf2();
  if ((*(char *)(param_1 + -0x1000) == '\x03') && (*(char *)(param_1 + 0x4bb8) != '\x02')) {
    plVar1 = (longlong *)(param_1 + -0x1178);
    if (param_2 != 0) {
      lVar6 = FUN_140aed286();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
        uVar7 = FUN_1405c60c4(*(undefined8 *)(param_2 + 0xa90));
        FUN_1447a97f4(&local_50,uVar7);
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14cbc1e40) {
          FUN_144b3d300(&DAT_14cbc1e40);
          if (DAT_14cbc1e40 == -1) {
            _DAT_14cbc1e18 = 0;
            uRam000000014cbc1e20 = 0;
            _DAT_14cbc1e28 = 0;
            DAT_14cbc1e30 = 0;
            uRam000000014cbc1e38 = 0;
            FUN_1446ddda2(&DAT_14cbc1e18,"IO_MegaDrill",0);
            atexit((_func_5014 *)&LAB_1440aba40);
            _Init_thread_footer(&DAT_14cbc1e40);
          }
        }
        iVar3 = (int)local_50;
        iVar2 = DAT_14cbc1e18;
        if (local_38 != 0) {
          FUN_1400020a8();
        }
        if (iVar3 == iVar2) {
          (**(code **)(*(longlong *)(param_1 + -0x1178) + 0x928))(plVar1,5);
          FUN_1416c1800(param_1 + 0x6030,3);
          cVar8 = '\0';
          local_50 = 0;
          local_48 = (undefined4)DAT_14c8464e0;
          uStack_44 = DAT_14c8464e0._4_4_;
          uStack_40 = (undefined4)DAT_14c8464e8;
          uStack_3c = DAT_14c8464e8._4_4_;
          local_38 = DAT_14c8464f0;
          local_30 = 0;
          local_58 = 0;
          cVar4 = FUN_141533d14(plVar1);
          if (cVar4 == '\0') {
            bVar5 = FUN_143c98270(plVar1);
            cVar8 = (bVar5 ^ 1) * '\x02';
          }
          local_68 = 0;
          FUN_140ecfed2(param_1 + 0x6b00,cVar8,&local_58,&local_50);
          goto LAB_148ccc22c;
        }
      }
    }
    (**(code **)(*plVar1 + 0x928))(plVar1,3);
  }
LAB_148ccc22c:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ccc3e0 FUN_148ccc3e0 body=78 status=ok
// SIG undefined FUN_148ccc3e0(void)

void FUN_148ccc3e0(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  FUN_1487bc3dc();
  iVar2 = FUN_14487fd02(param_1);
  if (iVar2 != 3) {
    FUN_140cf963c(param_1 + 0x5d80);
    cVar1 = FUN_144a783a6(param_1);
    if (cVar1 == '\0') {
      FUN_1403704ac(param_1 + 0x5d80,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148ccc470 FUN_148ccc470 body=157 status=ok
// SIG undefined FUN_148ccc470(void)

void FUN_148ccc470(longlong param_1)

{
  byte bVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    *(undefined8 *)(param_1 + 0x7f38) = 0;
    *(undefined8 *)(param_1 + 0x7f40) = 0;
    *(undefined8 *)(param_1 + 0x7f48) = 0;
    bVar1 = *(byte *)(param_1 + 0x9017);
    FUN_1411200cc(0,local_40);
    FUN_140373168(param_1 + 0x7f68,local_40);
    *(uint *)(param_1 + 0x7f80) = (uint)bVar1;
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0x47);
    FUN_140da0d80(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ccc50e FUN_148ccc50e body=68 status=ok
// SIG undefined FUN_148ccc50e(void)

void FUN_148ccc50e(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x7fe8) == param_2) {
    return;
  }
  FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0x48);
  *(char *)(param_1 + 0x7fe8) = param_2;
  FUN_1447f69b6(param_1 + 0x7fd0);
  return;
}



// FUNCTION 148ccc55e FUN_148ccc55e body=79 status=ok
// SIG undefined FUN_148ccc55e(void)

void FUN_148ccc55e(longlong param_1,byte param_2)

{
  FUN_14034f21c(param_1 + 0x71a8);
  *(byte *)(param_1 + 0x41a5) = *(byte *)(param_1 + 0x41a5) & 0xfb | param_2 * '\x04';
  *(byte *)(param_1 + 0x41a4) = *(byte *)(param_1 + 0x41a4) & 0xbf | (param_2 ^ 1) << 6;
  return;
}



// FUNCTION 148ccc5ae FUN_148ccc5ae body=81 status=ok
// SIG undefined FUN_148ccc5ae(void)

void FUN_148ccc5ae(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x10b0) + 0x28))(param_1 + 0x10b0);
  FUN_1432715b4(lVar1 + 0x78,param_1 + 0x3ec0,0);
  FUN_140608954(lVar1 + 0x78,param_2);
  *(undefined8 *)(param_1 + 0x3ec0) = *param_2;
  return;
}



// FUNCTION 148ccc600 FUN_148ccc600 body=81 status=ok
// SIG undefined FUN_148ccc600(void)

void FUN_148ccc600(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x10b0) + 0x28))(param_1 + 0x10b0);
  FUN_1432715b4(lVar1 + 0x78,param_1 + 0x3ec8,0);
  FUN_140608954(lVar1 + 0x78,param_2);
  *(undefined8 *)(param_1 + 0x3ec8) = *param_2;
  return;
}



// FUNCTION 148ccc652 FUN_148ccc652 body=81 status=ok
// SIG undefined FUN_148ccc652(void)

void FUN_148ccc652(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x10b0) + 0x28))(param_1 + 0x10b0);
  FUN_1432715b4(lVar1 + 0x78,param_1 + 0x3ed0,0);
  FUN_140608954(lVar1 + 0x78,param_2);
  *(undefined8 *)(param_1 + 0x3ed0) = *param_2;
  return;
}



// FUNCTION 148ccc6a4 FUN_148ccc6a4 body=81 status=ok
// SIG undefined FUN_148ccc6a4(void)

void FUN_148ccc6a4(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x10b0) + 0x28))(param_1 + 0x10b0);
  FUN_143271da0(lVar1 + 0x78,param_1 + 0x3ed8);
  FUN_14094f414(lVar1 + 0x78,param_2);
  FUN_1403de7ba(param_1 + 0x3ed8,param_2);
  return;
}



// FUNCTION 148ccc6f6 FUN_148ccc6f6 body=65 status=ok
// SIG undefined FUN_148ccc6f6(void)

void FUN_148ccc6f6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x10b0) + 0x28))(param_1 + 0x10b0);
  FUN_14094f414(lVar1 + 0x78,param_2);
  FUN_14094f414(param_1 + 0x3ed8,param_2);
  return;
}



// FUNCTION 148ccc738 FUN_148ccc738 body=65 status=ok
// SIG undefined FUN_148ccc738(void)

void FUN_148ccc738(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x10b0) + 0x28))(param_1 + 0x10b0);
  FUN_143271da0(lVar1 + 0x78,param_2);
  FUN_143271da0(param_1 + 0x3ed8,param_2);
  return;
}



// FUNCTION 148ccc77a FUN_148ccc77a body=81 status=ok
// SIG undefined FUN_148ccc77a(void)

void FUN_148ccc77a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x10b0) + 0x28))(param_1 + 0x10b0);
  FUN_143271da0(lVar1 + 0x78,param_1 + 0x3ef8);
  FUN_14094f414(lVar1 + 0x78,param_2);
  FUN_1403de7ba(param_1 + 0x3ef8,param_2);
  return;
}



// FUNCTION 148ccc7cc FUN_148ccc7cc body=65 status=ok
// SIG undefined FUN_148ccc7cc(void)

void FUN_148ccc7cc(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x10b0) + 0x28))(param_1 + 0x10b0);
  FUN_14094f414(lVar1 + 0x78,param_2);
  FUN_14094f414(param_1 + 0x3ef8,param_2);
  return;
}



// FUNCTION 148ccc80e FUN_148ccc80e body=65 status=ok
// SIG undefined FUN_148ccc80e(void)

void FUN_148ccc80e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x10b0) + 0x28))(param_1 + 0x10b0);
  FUN_143271da0(lVar1 + 0x78,param_2);
  FUN_143271da0(param_1 + 0x3ef8,param_2);
  return;
}



// FUNCTION 148ccc850 FUN_148ccc850 body=81 status=ok
// SIG undefined FUN_148ccc850(void)

void FUN_148ccc850(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x10b0) + 0x28))(param_1 + 0x10b0);
  FUN_1432715b4(lVar1 + 0x78,param_1 + 0x3f18,0);
  FUN_140608954(lVar1 + 0x78,param_2);
  *(undefined8 *)(param_1 + 0x3f18) = *param_2;
  return;
}



// FUNCTION 148ccc8a2 FUN_148ccc8a2 body=485 status=ok
// SIG undefined FUN_148ccc8a2(void)

void FUN_148ccc8a2(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = (**(code **)(*(longlong *)(param_1 + 0x10b0) + 0x28))(param_1 + 0x10b0);
  plVar2 = (longlong *)(param_1 + 0x3f20);
  FUN_1432715b4(lVar5 + 0x78,plVar2,0);
  FUN_140608954(lVar5 + 0x78,param_2);
  lVar5 = *param_2;
  *(longlong *)(param_1 + 0x3f20) = lVar5;
  if (lVar5 == 0) goto LAB_148ccc92e;
  uVar6 = FUN_1405c673d();
  FUN_14034ef80(uVar6,&local_30,plVar2,0);
  *(longlong *)(param_1 + 0x3f28) = local_30;
  if (local_30 != 0) goto LAB_148ccc92e;
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  lVar5 = DAT_14caa8580;
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_14caa8580 + 0x250);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(lVar5 + 0x130) == *(int *)(lVar5 + 0x15c)) {
LAB_148ccc987:
    puVar11 = (undefined8 *)0x0;
  }
  else {
    lVar3 = *plVar2;
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar8 = (uint)lVar3 & 0xffff;
    lVar7 = lVar5 + 0x160;
    if (*(longlong *)(lVar5 + 0x168) != 0) {
      lVar7 = *(longlong *)(lVar5 + 0x168);
    }
    iVar9 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar5 + 0x170) - 1U &
                             (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar8) +
                             (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar9 == -1) goto LAB_148ccc987;
    puVar11 = (undefined8 *)0x0;
    do {
      lVar7 = *(longlong *)(lVar5 + 0x128) + (longlong)iVar9 * 0x20;
      if (*(longlong *)(*(longlong *)(lVar5 + 0x128) + (longlong)iVar9 * 0x20) == lVar3) {
        if ((lVar7 + 8U & 0xfffffffffffffff7) == 0) goto LAB_148ccc987;
        puVar11 = *(undefined8 **)(lVar7 + 8);
        puVar10 = *(undefined8 **)(lVar7 + 0x10);
        if (puVar10 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
          UNLOCK();
          goto LAB_148ccc98c;
        }
        break;
      }
      iVar9 = *(int *)(lVar7 + 0x18);
    } while (iVar9 != -1);
  }
  puVar10 = (undefined8 *)0x0;
LAB_148ccc98c:
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  if (puVar11 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x3f28) = *puVar11;
  }
  if (puVar10 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar10 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar10)(puVar10);
      LOCK();
      piVar1 = (int *)((longlong)puVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
LAB_148ccc92e:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ccca9c FUN_148ccca9c body=81 status=ok
// SIG undefined FUN_148ccca9c(void)

void FUN_148ccca9c(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x10b0) + 0x28))(param_1 + 0x10b0);
  FUN_1432715b4(lVar1 + 0x78,param_1 + 0x3f30,0);
  FUN_140608954(lVar1 + 0x78,param_2);
  *(undefined8 *)(param_1 + 0x3f30) = *param_2;
  return;
}



// FUNCTION 148cccaee FUN_148cccaee body=81 status=ok
// SIG undefined FUN_148cccaee(void)

void FUN_148cccaee(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x10b0) + 0x28))(param_1 + 0x10b0);
  FUN_1432715b4(lVar1 + 0x78,param_1 + 0x3f38,0);
  FUN_140608954(lVar1 + 0x78,param_2);
  *(undefined8 *)(param_1 + 0x3f38) = *param_2;
  return;
}



// FUNCTION 148cccb40 FUN_148cccb40 body=81 status=ok
// SIG undefined FUN_148cccb40(void)

void FUN_148cccb40(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x10b0) + 0x28))(param_1 + 0x10b0);
  FUN_1432715b4(lVar1 + 0x78,param_1 + 0x3f40,0);
  FUN_140608954(lVar1 + 0x78,param_2);
  *(undefined8 *)(param_1 + 0x3f40) = *param_2;
  return;
}



// FUNCTION 148cccb92 FUN_148cccb92 body=10 status=ok
// SIG undefined FUN_148cccb92(void)

byte FUN_148cccb92(longlong param_1)

{
  return *(byte *)(param_1 + 0x73e8) >> 7;
}



// FUNCTION 148cccbca FUN_148cccbca body=38 status=ok
// SIG undefined FUN_148cccbca(void)

undefined4 FUN_148cccbca(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar1 = *(int *)(param_1 + 0x47c0);
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0x47b8);
    uVar3 = *(undefined8 *)(lVar2 + 0x30);
    uVar4 = *(undefined8 *)(lVar2 + 0x38);
    uVar5 = *(undefined8 *)(lVar2 + 0x48);
    param_2[2] = *(undefined8 *)(lVar2 + 0x40);
    param_2[3] = uVar5;
    *param_2 = uVar3;
    param_2[1] = uVar4;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),0 < iVar1);
}



// FUNCTION 148cccbf0 FUN_148cccbf0 body=271 status=ok
// SIG undefined FUN_148cccbf0(void)

undefined8 * FUN_148cccbf0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined2 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined2 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  *(undefined2 *)(param_2 + 1) = 0xffff;
  param_2[2] = 0;
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    lVar2 = FUN_144a7b4ca();
    lVar3 = *(longlong *)(param_1 + 0x3b0);
    if ((((lVar3 != 0) && (lVar2 != 0)) && (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 != 0)) &&
       ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)))) {
      lVar3 = FUN_14479d2ce(lVar3 + 0x4e0);
      if (lVar3 != 0) {
        lVar2 = (**(code **)(*(longlong *)(param_1 + 0x870) + 0x10))(param_1 + 0x870);
        local_38 = *(undefined8 *)(lVar2 + 0x20);
        local_30 = *(undefined2 *)(lVar2 + 0x28);
        local_28 = *(undefined8 *)(lVar2 + 0x30);
        uVar4 = FUN_147f5e670();
        FUN_147f5e65e(&local_38,*(undefined2 *)(lVar3 + 0x420),uVar4);
        local_50 = local_38;
        local_48 = local_30;
        local_40 = local_28;
        FUN_140d75dba(param_2);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cccd00 FUN_148cccd00 body=1773 status=ok
// SIG undefined FUN_148cccd00(void)

void FUN_148cccd00(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  float fVar14;
  undefined1 auStack_518 [40];
  undefined8 local_4f0;
  longlong local_4e8;
  undefined8 uStack_4e0;
  longlong local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined1 local_48c;
  undefined1 local_488;
  undefined8 local_484;
  undefined8 local_478;
  undefined8 local_470;
  undefined4 local_468;
  undefined8 local_464;
  undefined4 local_45c;
  undefined5 uStack_458;
  undefined3 local_453;
  undefined5 uStack_450;
  undefined8 local_448;
  undefined2 local_440;
  undefined8 local_438;
  undefined4 local_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined4 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 local_348;
  undefined8 local_340;
  undefined1 local_334;
  undefined1 local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 *puStack_300;
  int local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined8 local_2bc;
  undefined4 local_2b4;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_26c;
  undefined4 local_264;
  undefined8 local_258;
  undefined4 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_20c;
  undefined4 local_204;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined1 local_1e8;
  undefined4 local_1c0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_518;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    lVar8 = FUN_140cf8388();
    if (lVar8 != 0) {
      local_4c0 = 0;
      FUN_14485c47a(&local_4c0,param_1);
      cVar6 = FUN_1488d603e(lVar8,local_4c0);
      if (cVar6 == '\0') {
        FUN_14111cb72(param_1);
        if (*(char *)(param_1 + 0x7923) == '\x01') {
          iVar11 = *(int *)(param_1 + 0x7958);
          iVar12 = *(int *)(param_1 + 0x7968);
          if (iVar11 + iVar12 == 0) {
            FUN_1440ae47e(param_1);
            iVar11 = *(int *)(param_1 + 0x7958);
            iVar12 = *(int *)(param_1 + 0x7968);
            if (iVar11 + iVar12 == 0) goto LAB_148ccd38d;
          }
          local_4d8 = 0;
          uStack_4d0 = 0;
          local_4e8 = 0;
          uStack_4e0 = 0;
          if (iVar11 == 0) {
            fVar14 = 0.0;
          }
          else {
            lVar1 = *(longlong *)(param_1 + 0x7950);
            fVar14 = 0.0;
            lVar13 = 0;
            do {
              if (*(longlong *)(lVar1 + 0x50 + lVar13) != 0) {
                lVar9 = FUN_145b8a0f6();
                lVar2 = *(longlong *)(lVar1 + 0x50 + lVar13);
                if ((((lVar2 != 0) && (lVar9 != 0)) &&
                    (lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 != 0)) &&
                   (((*(int *)(lVar9 + 0x38) <= *(int *)(lVar3 + 0x38) &&
                     (*(longlong *)
                       (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
                      lVar9 + 0x30)) &&
                    (1e-08 < *(float *)(lVar2 + 0x30) || *(float *)(lVar2 + 0x30) == 1e-08)))) {
                  if (DAT_14c950c29 == '\x01') {
                    FUN_1456cec3c(lVar2);
                  }
                  local_4b8 = 0;
                  FUN_14485c47a(&local_4b8,lVar2);
                  uVar4 = uStack_4e0;
                  lVar9 = (longlong)(int)uStack_4e0;
                  uVar7 = (int)uStack_4e0 + 1;
                  uStack_4e0 = CONCAT44(uStack_4e0._4_4_,uVar7);
                  if (uStack_4e0._4_4_ < uVar7) {
                    FUN_148cd427e(&local_4e8,uVar4 & 0xffffffff);
                  }
                  *(undefined8 *)(local_4e8 + lVar9 * 8) = local_4b8;
                  fVar14 = fVar14 + *(float *)(lVar2 + 0x30);
                }
              }
              lVar13 = lVar13 + 0xb8;
            } while ((longlong)iVar11 * 0xb8 - lVar13 != 0);
            iVar12 = *(int *)(param_1 + 0x7968);
          }
          if (iVar12 == 0) {
            iVar11 = 0;
          }
          else {
            lVar1 = *(longlong *)(param_1 + 0x7960);
            lVar13 = 0;
            do {
              if (*(longlong *)(lVar1 + 0x48 + lVar13) != 0) {
                lVar9 = FUN_140e7452a();
                lVar2 = *(longlong *)(lVar1 + 0x48 + lVar13);
                if (((lVar2 != 0) && (lVar9 != 0)) &&
                   ((lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 != 0 &&
                    (((*(int *)(lVar9 + 0x38) <= *(int *)(lVar3 + 0x38) &&
                      (*(longlong *)
                        (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
                       lVar9 + 0x30)) &&
                     (1e-08 < *(float *)(lVar2 + 0x38) || *(float *)(lVar2 + 0x38) == 1e-08)))))) {
                  if (DAT_14c950c29 == '\x01') {
                    FUN_1456cec3c(lVar2);
                  }
                  local_4b8 = 0;
                  FUN_14485c47a(&local_4b8,lVar2);
                  uVar4 = uStack_4d0;
                  lVar9 = (longlong)(int)uStack_4d0;
                  uVar7 = (int)uStack_4d0 + 1;
                  uStack_4d0 = CONCAT44(uStack_4d0._4_4_,uVar7);
                  if (uStack_4d0._4_4_ < uVar7) {
                    FUN_148cd4304(&local_4d8,uVar4 & 0xffffffff);
                  }
                  *(undefined8 *)(local_4d8 + lVar9 * 8) = local_4b8;
                  fVar14 = fVar14 + *(float *)(lVar2 + 0x38);
                }
              }
              lVar13 = lVar13 + 0xb8;
            } while ((longlong)iVar12 * 0xb8 - lVar13 != 0);
            iVar11 = (int)uStack_4d0;
          }
          iVar12 = iVar11 + (int)uStack_4e0;
          if ((iVar12 != 0 && SCARRY4(iVar11,(int)uStack_4e0) == iVar12 < 0) && (0.0 < fVar14)) {
            local_48c = 0;
            local_488 = 0;
            local_484 = 0;
            local_478 = 0;
            local_4b8 = 0;
            uStack_4b0 = 0;
            local_4a8 = 0;
            uStack_4a0 = 0;
            local_498 = 0;
            local_470 = DAT_14cb7bd68;
            local_468 = DAT_14cb7bd70;
            local_464 = DAT_14cb7bd80;
            local_45c = DAT_14cb7bd88;
            local_448 = 0;
            local_440 = 0;
            local_438 = 0;
            uStack_450 = 0;
            uStack_458 = 0;
            local_453 = 0;
            local_430 = 0xc000;
            local_3d8 = 0;
            uStack_3d0 = 0;
            local_428 = 0;
            uStack_420 = 0;
            local_418 = 0;
            uStack_410 = 0;
            local_408 = 0;
            uStack_400 = 0;
            local_3f8 = 0;
            uStack_3f0 = 0;
            local_3e8 = 0;
            local_3c8 = 0;
            uStack_3c4 = 0;
            uStack_3c0 = 0;
            uStack_3bc = 0x3ff00000;
            local_3b8 = 0;
            uStack_3b0 = 0;
            local_3a8 = 0;
            uStack_3a0 = 0;
            local_398 = 0;
            uStack_394 = 0x3ff00000;
            uStack_390 = 0;
            uStack_38c = 0x3ff00000;
            local_388 = 0x3ff0000000000000;
            uStack_380 = 0;
            local_378 = 0;
            local_370 = 0;
            local_358 = 0;
            local_368 = 0;
            uStack_360 = 0;
            local_350 = 0xffffffff;
            uStack_34c = 0;
            local_348 = 0;
            local_340 = 0;
            local_334 = 0;
            local_330 = 0;
            local_2c8 = 0;
            local_2c0 = 0;
            local_2e0 = 0;
            local_2f0 = 0;
            uStack_2e8 = 0;
            local_2f8 = 0;
            local_308 = 0;
            puStack_300 = (undefined8 *)0x0;
            local_318 = 0;
            uStack_310 = 0;
            local_328 = 0;
            uStack_320 = 0;
            local_2bc = 0xffffffff00000080;
            local_2b4 = 0;
            local_2a8 = 0;
            local_2a0 = 0;
            local_278 = 0;
            local_270 = 0;
            local_298 = 0;
            uStack_290 = 0;
            local_26c = 0xffffffff00000080;
            local_264 = 0;
            local_258 = 0;
            local_250 = 0;
            local_248 = 0;
            local_240 = 0xffffffff00000000;
            local_218 = 0;
            local_210 = 0;
            local_238 = 0;
            uStack_230 = 0;
            local_20c = 0xffffffff00000080;
            local_204 = 0;
            local_1f8 = 0;
            local_1f0 = 0;
            local_1e8 = 0;
            local_1c0 = 0;
            local_198 = 0;
            local_190 = 0x200000000;
            local_180 = 0;
            local_178 = 0;
            uStack_174 = 0x20;
            uStack_170 = 0xffffffff;
            uStack_16c = 0;
            local_160 = 0;
            local_158 = 0;
            local_130 = 0;
            local_128 = 0x200000000;
            local_118 = 0;
            local_110 = 0;
            uStack_10c = 0x20;
            uStack_108 = 0xffffffff;
            uStack_104 = 0;
            local_f8 = 0;
            local_f0 = 0;
            local_c8 = 0;
            local_c0 = 0x200000000;
            local_b0 = 0;
            local_a8 = 0;
            uStack_a4 = 0x20;
            uStack_a0 = 0xffffffff;
            uStack_9c = 0;
            local_90 = 0;
            local_88 = 0;
            local_80 = 0;
            uVar10 = FUN_14111d03a(param_1);
            FUN_14111cb14(&local_4b8,uVar10);
            FUN_1411f52f4(&local_4a8,param_1 + 0x7938);
            local_378 = CONCAT44(iVar12,fVar14);
            FUN_1406fa324(&local_368,param_1 + 0x7970);
            local_358 = *(undefined8 *)(param_1 + 0x7980);
            local_350 = 0;
            uStack_34c = (undefined4)*(undefined8 *)(param_1 + 0x7988);
            local_348 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x7988) >> 0x20);
            local_340 = *(undefined8 *)(param_1 + 0x7990);
            local_330 = *(undefined1 *)(*(longlong *)(param_1 + 0x3f70) + 0xcc0);
            if (local_2f8 != 3) {
              FUN_1446efa72(&puStack_300,0,3,0x10);
              local_2f8 = 3;
            }
            puVar5 = puStack_300;
            *puStack_300 = &PTR_LAB_149e020b0;
            LOCK();
            UNLOCK();
            lVar13 = DAT_14c758608 + 1;
            lVar1 = DAT_14c758608 + 1;
            if (lVar13 == 0) {
              LOCK();
              UNLOCK();
              lVar13 = DAT_14c758608 + 2;
              lVar1 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar1;
            puStack_300[2] = lVar13;
            *puStack_300 = &PTR_FUN_14b95bba0;
            puStack_300[3] = 0;
            FUN_14485c47a(puStack_300 + 3,param_1);
            puVar5[4] = &LAB_140ebee4e;
            *(undefined4 *)(puVar5 + 5) = 0;
            FUN_14054d68c(&local_2f0,param_1 + 0x7998);
            *(undefined1 *)(param_1 + 0x7923) = 0;
            local_4f0 = 0;
            FUN_14485c47a(&local_4f0,param_1);
            FUN_14111dba4(lVar8,local_4f0,&local_4b8);
            FUN_14111cc7e(&local_4b8);
          }
          if (local_4e8 != 0) {
            FUN_1400020a8();
          }
          if (local_4d8 != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
LAB_148ccd38d:
  if ((local_70 ^ (ulonglong)auStack_518) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ccd40c FUN_148ccd40c body=163 status=ok
// SIG undefined FUN_148ccd40c(void)

void FUN_148ccd40c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = FUN_1403ae46b();
  if ((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x78f0))) {
    iVar2 = FUN_1403ae46b();
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x78e8) + 0x28 + (longlong)iVar2 * 0x48);
    if (plVar1 != (longlong *)0x0 &&
        *(longlong *)(*(longlong *)(param_1 + 0x78e8) + 0x20 + (longlong)iVar2 * 0x48) != 0) {
      lVar3 = (**(code **)(*plVar1 + 8))();
      if (lVar3 != 0) {
        lVar4 = FUN_145a8ebdc();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          FUN_148d601f4(lVar3,param_2,param_3,param_4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148ccd4b0 FUN_148ccd4b0 body=12 status=ok
// SIG undefined FUN_148ccd4b0(void)

void FUN_148ccd4b0(longlong param_1)

{
  FUN_148cd4ad2(param_1 + 0x4ea0);
  return;
}



// FUNCTION 148ccd4c4 FUN_148ccd4c4 body=136 status=ok
// SIG undefined FUN_148ccd4c4(void)

void FUN_148ccd4c4(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if (param_3 == '\0') {
    FUN_1400bc8c2(param_1 + 0x20a0,&local_20);
    if ((*(byte *)(param_1 + 0x5f28) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  else {
    FUN_1400bc96c();
    if ((*(byte *)(param_1 + 0x5f28) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ccd56c FUN_148ccd56c body=69 status=ok
// SIG undefined FUN_148ccd56c(void)

void FUN_148ccd56c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  thunk_FUN_1479980f4();
  FUN_14885ac74(param_1 + 0x40e8,param_2,param_3,param_4);
  return;
}



// FUNCTION 148ccd5be FUN_148ccd5be body=147 status=ok
// SIG undefined FUN_148ccd5be(void)

void FUN_148ccd5be(longlong param_1,uint param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x3bb0);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) {
        return;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    lVar4 = *(longlong *)(param_1 + 0x3ba8);
    if (lVar4 != 0) {
      FUN_148d34808(lVar4,param_3,param_2 ^ 1);
      if (param_4 != '\0') {
        FUN_148d348a8(lVar4,param_3,param_2 ^ 1);
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
                    /* WARNING: Could not recover jumptable at 0x000148ccd641. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148ccd656 FUN_148ccd656 body=36 status=ok
// SIG undefined FUN_148ccd656(void)

void FUN_148ccd656(longlong param_1)

{
  if (*(char *)(param_1 + 0x178) == '\x03') {
    FUN_140d78d10(param_1 + 0x60e8);
  }
  return;
}



// FUNCTION 148ccd67a FUN_148ccd67a body=44 status=ok
// SIG undefined FUN_148ccd67a(void)

void FUN_148ccd67a(longlong param_1)

{
  if (*(char *)(param_1 + 0x178) != '\x03') {
    FUN_140d78b8a(param_1 + 0x60e8);
  }
  return;
}



// FUNCTION 148ccd6c4 FUN_148ccd6c4 body=44 status=ok
// SIG undefined FUN_148ccd6c4(void)

void FUN_148ccd6c4(longlong param_1)

{
  if (*(char *)(param_1 + 0x178) == '\x03') {
    FUN_140d78b8a(param_1 + 0x60e8);
  }
  return;
}



// FUNCTION 148ccd70e FUN_148ccd70e body=152 status=ok
// SIG undefined FUN_148ccd70e(void)

void FUN_148ccd70e(longlong param_1,uint param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar1 = *(byte *)(param_1 + 0x28c0);
  if (((bVar1 >> (param_2 & 0x1f) & 1) != 0) != (bool)(char)param_3) {
    bVar3 = (byte)(1 << ((byte)param_2 & 0x1f));
    bVar2 = ~bVar3 & bVar1;
    if ((char)param_3 != '\0') {
      bVar2 = bVar3 | bVar1;
    }
    *(byte *)(param_1 + 0x28c0) = bVar2;
    FUN_144a62f0c(param_1 + -0x3a38,*(undefined8 *)(param_1 + -0x3a10),0x31);
    FUN_148a184ac(param_1 + 0x26b0,param_2,param_3);
    FUN_148a15367(param_1 + 0x2578,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 148ccd7a6 FUN_148ccd7a6 body=134 status=ok
// SIG undefined FUN_148ccd7a6(void)

void FUN_148ccd7a6(longlong param_1,byte param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  ulonglong unaff_R14;
  
  iVar3 = 0;
  bVar1 = true;
  do {
    bVar4 = bVar1;
    uVar2 = (uint)*(byte *)(param_1 + 0x62f8) & 1 << (sbyte)iVar3;
    if ((uVar2 != 0) != ((param_2 >> iVar3 & 1) != 0)) {
      unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8),uVar2 != 0);
      FUN_148a184ac(param_1 + 0x60e8,iVar3,unaff_R14 & 0xffffffff);
      FUN_148a15367(param_1 + 0x5fb0,iVar3,unaff_R14 & 0xffffffff);
    }
    iVar3 = 1;
    bVar1 = false;
  } while (bVar4);
  return;
}



// FUNCTION 148ccd82c FUN_148ccd82c body=168 status=ok
// SIG undefined FUN_148ccd82c(void)

void FUN_148ccd82c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  FUN_1447f69b6(param_1 + 0x5880);
  if (*(char *)(param_1 + 0x178) == '\x03') {
    lVar2 = FUN_1447210f0(param_1);
    if (lVar2 != 0) {
      FUN_140ee97ae(lVar2);
    }
  }
  if (*(longlong *)(param_1 + 0x3c0) != 0) {
    lVar3 = FUN_144a5dd5e();
    lVar2 = *(longlong *)(param_1 + 0x3c0);
    if ((((lVar2 != 0) && (lVar3 != 0)) && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      plVar4 = (longlong *)FUN_1404281d6(param_1);
      if (plVar4 == (longlong *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar4 + 0x860))(plVar4);
      }
      FUN_140ee9c88(lVar2,uVar5);
      return;
    }
  }
  return;
}



// FUNCTION 148ccd8d4 FUN_148ccd8d4 body=576 status=ok
// SIG undefined FUN_148ccd8d4(void)

undefined8 *
FUN_148ccd8d4(longlong param_1,undefined8 *param_2,longlong param_3,char param_4,undefined1 param_5)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  undefined1 *local_d0;
  undefined1 local_b9;
  longlong local_b8 [4];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_3 != 0) {
    if (*(longlong *)(param_1 + 0x2e20) == 0) {
      lVar8 = *(longlong *)(param_3 + 0xcfc);
LAB_148ccd953:
      bVar2 = false;
    }
    else {
      cVar3 = FUN_144a80e0c();
      lVar8 = *(longlong *)(param_3 + 0xcfc);
      if (cVar3 == '\0') goto LAB_148ccd953;
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x540) + 0xa88);
      if (lVar1 != 0) {
        lVar8 = lVar1;
      }
      bVar2 = true;
    }
    local_d0 = &local_b9;
    local_b9 = 1;
    puVar9 = &DAT_14cbc1cc0;
    if (param_4 != '\0') {
      puVar9 = &DAT_14cbc1cc8;
    }
    local_d8 = (longlong *)CONCAT71(local_d8._1_7_,1);
    plVar4 = (longlong *)
             (**(code **)(*(longlong *)(param_1 + 0xb0) + 0x18))
                       (param_1 + 0xb0,*puVar9,lVar8,param_3);
    if (plVar4 != (longlong *)0x0) {
      plVar7 = (longlong *)(param_1 + -0x2950);
      uVar5 = (**(code **)(*(longlong *)(param_1 + -0x2950) + 0x50))(plVar7);
      if ((char)plVar4[8] == '\x01') {
        local_b8[0] = plVar4[7];
      }
      else {
        (**(code **)(*plVar4 + 0x2e8))(plVar4,local_b8);
      }
      cVar3 = FUN_14103bfd0(uVar5,local_b8);
      if (cVar3 == '\0') {
        local_98 = 0;
        local_90 = 0;
        local_b8[0] = 0;
        local_b8[1] = 0;
        local_8c = 0xffffffff00000080;
        local_84 = 0;
        local_78 = 0;
        local_70 = 0;
        if (!bVar2) {
          if (param_4 == '\0') {
            if (*(char *)(param_3 + 0xd45) == '\x02') {
              fVar10 = 0.0;
            }
            else {
              fVar10 = *(float *)(param_3 + 0xb6c);
              if ((*(longlong *)(param_3 + 0xb18) != 0) &&
                 (*(longlong **)(param_3 + 0xb20) != (longlong *)0x0)) {
                fVar11 = (float)(**(code **)(**(longlong **)(param_3 + 0xb20) + 0x40))();
                fVar10 = fVar10 * fVar11;
              }
            }
          }
          else {
            fVar10 = (float)FUN_145810f44(param_3);
          }
          FUN_140dd037a(local_b8,fVar10);
        }
        uVar6 = (**(code **)(*plVar7 + 0x50))(plVar7);
        local_d8 = local_b8;
        FUN_14122243a(uVar6,param_2,plVar4,
                      (CONCAT71((int7)((ulonglong)uVar5 >> 8),param_5) ^ 1) & 0xffffffff);
        local_70 = 0;
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        FUN_140333f4e(local_b8);
        goto LAB_148ccd9f2;
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_148ccd9f2:
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ccdb16 FUN_148ccdb16 body=41 status=ok
// SIG undefined FUN_148ccdb16(void)

void FUN_148ccdb16(longlong param_1)

{
  if (*(char *)(param_1 + 0x178) == '\x03') {
    FUN_141145750();
    return;
  }
  FUN_1465cf5d6();
  return;
}



// FUNCTION 148ccdb40 FUN_148ccdb40 body=176 status=ok
// SIG undefined FUN_148ccdb40(void)

void FUN_148ccdb40(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_14011c349();
  lVar3 = FUN_14011c2be(lVar2 + 0x250);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar4 = FUN_14011c2be(lVar2 + 0x250);
    local_38 = 0;
    uStack_30 = 0;
    local_1c = 0xff;
    local_20 = 0;
    local_28 = 0;
    FUN_14493679e(param_1 + 0x40e8,&local_38,uVar4,0);
    cVar1 = FUN_1403ae288(&local_38);
    uVar5 = 0;
    if (cVar1 != '\0') {
      uVar5 = FUN_14885b19c(0,0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uVar5);
}



// FUNCTION 148ccdbf2 FUN_148ccdbf2 body=146 status=ok
// SIG undefined FUN_148ccdbf2(void)

void FUN_148ccdbf2(longlong param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  cVar1 = FUN_1403adf14(param_1,0,1);
  if (cVar1 != '\0') {
    uVar2 = FUN_1403ae46b();
    if (((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(param_1 + 0x78f0))) &&
       (lVar3 = (ulonglong)uVar2 * 0x48 + *(longlong *)(param_1 + 0x78e8), lVar3 != 0)) {
      if (*(longlong **)(lVar3 + 0x28) != (longlong *)0x0 && *(longlong *)(lVar3 + 0x20) != 0) {
        lVar3 = (**(code **)(**(longlong **)(lVar3 + 0x28) + 8))();
        if (lVar3 != 0) {
          uVar4 = FUN_1403ae386();
          plVar5 = (longlong *)FUN_144718840(lVar3,uVar4);
          if (plVar5 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148ccdc81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar5 + 0x20))(plVar5,param_2,*(code **)(*plVar5 + 0x20));
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 148ccdc84 FUN_148ccdc84 body=85 status=ok
// SIG undefined FUN_148ccdc84(void)

void FUN_148ccdc84(longlong param_1,char param_2,undefined8 param_3)

{
  char *pcVar1;
  char cVar2;
  
  pcVar1 = (char *)(param_1 + 0x9b30);
  cVar2 = *(char *)(param_1 + 0x9b30);
  if (param_2 == '\0') {
    FUN_1400bc8c2(pcVar1,param_3);
  }
  else {
    FUN_1400bc96c(pcVar1,param_3);
  }
  if (cVar2 == *pcVar1) {
    return;
  }
  FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0x70);
  return;
}



// FUNCTION 148ccdcda FUN_148ccdcda body=22 status=ok
// SIG undefined FUN_148ccdcda(void)

void FUN_148ccdcda(longlong param_1)

{
  if (*(char *)(param_1 + 0x178) == '\x03') {
    FUN_148d0f11e(param_1 + 0x4978);
    return;
  }
  return;
}



// FUNCTION 148ccdcf0 FUN_148ccdcf0 body=22 status=ok
// SIG undefined FUN_148ccdcf0(void)

void FUN_148ccdcf0(longlong param_1)

{
  if (*(char *)(param_1 + 0x178) == '\x03') {
    FUN_1461c006a(param_1 + 0x4978);
    return;
  }
  return;
}



// FUNCTION 148ccdd30 FUN_148ccdd30 body=482 status=ok
// SIG undefined FUN_148ccdd30(void)

void FUN_148ccdd30(longlong param_1,uint param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((-1 < (int)param_2) && (*(char *)(param_1 + -0x3a70) == '\x03')) {
    if ((param_4 < *(uint *)(param_1 + 0x3d08)) &&
       ((-1 < (int)param_4 && ((int)param_2 < (int)*(uint *)(param_1 + 0x3d08))))) {
      lVar1 = param_1 + -0x3be8;
      lVar7 = *(longlong *)(param_1 + 0x3d00) + (ulonglong)param_2 * 0x48;
      lVar8 = *(longlong *)(param_1 + 0x3d00) + (ulonglong)param_4 * 0x48;
      uVar3 = *(undefined8 *)(lVar7 + 0x20);
      uVar4 = *(undefined8 *)(lVar7 + 0x28);
      uVar5 = *(undefined8 *)(lVar8 + 0x28);
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar8 + 0x20);
      *(undefined8 *)(lVar7 + 0x28) = uVar5;
      local_58._0_4_ = (undefined4)uVar3;
      local_58._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar4;
      uStack_50._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      *(undefined4 *)(lVar8 + 0x20) = (undefined4)local_58;
      *(undefined4 *)(lVar8 + 0x24) = local_58._4_4_;
      *(undefined4 *)(lVar8 + 0x28) = (undefined4)uStack_50;
      *(undefined4 *)(lVar8 + 0x2c) = uStack_50._4_4_;
      local_58 = uVar3;
      uStack_50 = uVar4;
      FUN_140705884(param_1 + 0x3bf0,lVar7);
      FUN_140705884(param_1 + 0x3bf0,lVar8);
      if ((*(longlong *)(lVar7 + 0x20) != 0) &&
         (plVar9 = *(longlong **)(lVar7 + 0x28), plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x10))(plVar9,lVar1,param_2,0);
      }
      if ((*(longlong *)(lVar8 + 0x20) != 0) &&
         (plVar9 = *(longlong **)(lVar8 + 0x28), plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x10))(plVar9,lVar1,param_4,0);
      }
      FUN_1401861f4(param_1 + 0x3bd8,(ulonglong)param_2);
      FUN_1401861f4(param_1 + 0x3bd8,param_4);
      uVar6 = FUN_14042831e(lVar1);
      if (uVar6 == param_2) {
        lVar2 = *(longlong *)(lVar7 + 0x20);
        plVar9 = *(longlong **)(lVar7 + 0x28);
      }
      else {
        if (uVar6 != param_4) goto LAB_148ccdecf;
        lVar2 = *(longlong *)(lVar8 + 0x20);
        plVar9 = *(longlong **)(lVar8 + 0x28);
      }
      if (plVar9 != (longlong *)0x0 && lVar2 != 0) {
        lVar7 = (**(code **)(*plVar9 + 8))();
        if (lVar7 != 0) {
          lVar8 = FUN_144a7d050();
          if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
            if (*(char *)(param_1 + -0x3a70) == '\x03') {
              local_68 = 0;
              FUN_141145750(lVar1,lVar7,0,0);
            }
            else {
              local_60 = 0xffffffff;
              local_68 = 0;
              FUN_1465cf5d6(lVar1,lVar7,0,0);
            }
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
          }
        }
      }
    }
  }
LAB_148ccdecf:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ccdf16 FUN_148ccdf16 body=332 status=ok
// SIG undefined FUN_148ccdf16(void)

void FUN_148ccdf16(longlong param_1,undefined4 param_2,int *param_3,int param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined4 local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*param_3 != -1) {
    plVar1 = (longlong *)(param_1 + -0x3be8);
    lVar3 = (**(code **)(*plVar1 + 0x5d8))(plVar1);
    if (lVar3 != 0) {
      lVar4 = FUN_144a5dd5e();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        lVar5 = FUN_14011c349();
        lVar4 = *(longlong *)(lVar3 + 0xc38);
        if (lVar4 != 0) {
          local_48 = *(undefined8 *)(lVar5 + 0x48);
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(lVar3);
          }
          local_50 = lVar3 + 0xe18;
          local_58 = lVar3;
          if ((plVar1 == (longlong *)0x0) || ((DAT_14c950c29 & 1) == 0)) {
            if (plVar1 == (longlong *)0x0) {
              param_1 = 0;
            }
          }
          else {
            FUN_1456cec3c(plVar1);
          }
          local_78 = &local_48;
          local_70 = param_2;
          local_68 = plVar1;
          local_60 = param_1;
          FUN_143db6682(lVar4,param_3,&local_68,&local_58);
          if (param_4 == 0) {
            cVar2 = FUN_140ae5f1a(param_2);
            if (cVar2 != '\0') {
              FUN_14130b0ce(plVar1,param_2,0,0);
            }
          }
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cce064 FUN_148cce064 body=62 status=ok
// SIG undefined FUN_148cce064(void)

int FUN_148cce064(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_140ae5f1a(param_2);
  iVar2 = -1;
  if (cVar1 != '\0') {
    iVar2 = FUN_14042831e(param_1 + -0x3be8);
    iVar2 = -(uint)(iVar2 != param_2);
  }
  return iVar2;
}



// FUNCTION 148cce0a6 FUN_148cce0a6 body=125 status=ok
// SIG undefined FUN_148cce0a6(void)

void FUN_148cce0a6(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar1 = FUN_1403ae46b();
  if (((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x78f0))) &&
     (lVar2 = (ulonglong)uVar1 * 0x48 + *(longlong *)(param_1 + 0x78e8), lVar2 != 0)) {
    if (*(longlong **)(lVar2 + 0x28) != (longlong *)0x0 && *(longlong *)(lVar2 + 0x20) != 0) {
      lVar2 = (**(code **)(**(longlong **)(lVar2 + 0x28) + 8))();
      if (lVar2 != 0) {
        uVar3 = FUN_1403ae386();
        plVar4 = (longlong *)FUN_144718840(lVar2,uVar3);
        if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cce11c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x90))(plVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148cce124 FUN_148cce124 body=27 status=ok
// SIG undefined FUN_148cce124(void)

/* WARNING: Removing unreachable block (ram,0x000140bc20f6) */
/* WARNING: Removing unreachable block (ram,0x000140bc20ff) */
/* WARNING: Removing unreachable block (ram,0x000140bc2110) */
/* WARNING: Removing unreachable block (ram,0x000140bc2190) */
/* WARNING: Removing unreachable block (ram,0x000140bc21a2) */
/* WARNING: Removing unreachable block (ram,0x000140bc2199) */
/* WARNING: Removing unreachable block (ram,0x000140bc21a4) */
/* WARNING: Removing unreachable block (ram,0x000140bc2121) */
/* WARNING: Removing unreachable block (ram,0x000140bc2126) */
/* WARNING: Removing unreachable block (ram,0x000140bc212f) */
/* WARNING: Removing unreachable block (ram,0x000140bc2140) */
/* WARNING: Removing unreachable block (ram,0x000140bc2144) */
/* WARNING: Removing unreachable block (ram,0x000140bc215c) */
/* WARNING: Removing unreachable block (ram,0x000140bc217c) */
/* WARNING: Removing unreachable block (ram,0x000140bc2180) */

void FUN_148cce124(longlong param_1,char param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined8 uStack_50;
  ulonglong uStack_48;
  
  uStack_50 = *param_3;
  if (param_2 != '\0') {
    FUN_1407af814();
    return;
  }
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = param_1 + 0x6358;
  lVar1 = 0;
  do {
    if (((8U >> ((uint)lVar1 & 0x1f) & 1) != 0) &&
       (FUN_1400bc8c2(lVar2 + 0x148,&uStack_50), *(char *)(lVar2 + 0x148) == '\0')) {
      *(uint *)(param_1 + 0x6498) = *(uint *)(param_1 + 0x6498) & ~(1 << ((byte)lVar1 & 0x1f));
    }
    lVar1 = lVar1 + 1;
    lVar2 = lVar2 + 0x28;
  } while (lVar1 != 8);
  if ((uStack_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cce140 FUN_148cce140 body=349 status=ok
// SIG undefined FUN_148cce140(void)

void FUN_148cce140(longlong param_1,longlong *param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    lVar3 = *param_2;
    if (lVar3 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(longlong *)(lVar3 + 0x98);
      if (lVar5 == 0) {
        lVar5 = *(longlong *)(lVar3 + 0x3c);
      }
    }
    if ((param_3 != '\0') && (0 < (longlong)*(int *)(param_1 + 0x78f0))) {
      lVar3 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x78e8) + 0x14 + lVar3) == lVar5)
        goto LAB_148cce205;
        lVar3 = lVar3 + 0x48;
      } while ((longlong)*(int *)(param_1 + 0x78f0) * 0x48 != lVar3);
    }
    uVar2 = (**(code **)(*(longlong *)(param_1 + 0x3be8) + 0xb8))(param_1 + 0x3be8);
    (**(code **)(*(longlong *)(param_1 + 0x3be8) + 0xb0))(param_1 + 0x3be8,uVar2,0,lVar5);
    local_44 = 0xffffffff;
    if (0 < *(int *)(param_1 + 0x78f0)) {
LAB_148cce205:
      local_44 = 0xffffffff;
      iVar4 = 0;
      do {
        if ((param_3 != '\0') || (cVar1 = FUN_140368a1a(param_1,iVar4), cVar1 == '\0')) {
          local_58 = 0;
          local_60 = 0;
          local_68 = 0;
          cVar1 = (**(code **)(*(longlong *)(param_1 + 0x3be8) + 0xa8))
                            ((longlong *)(param_1 + 0x3be8),&local_44,param_2,iVar4);
          if (cVar1 != '\0') break;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x78f0));
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148cce29e FUN_148cce29e body=309 status=ok
// SIG undefined FUN_148cce29e(void)

void FUN_148cce29e(longlong param_1,int param_2,undefined4 param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if ((((*(char *)(param_1 + 0x178) == '\x03') &&
       (*(longlong **)(param_1 + 0x3f70) != (longlong *)0x0)) &&
      (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x3f70) + 0x80))(), cVar2 == '\0')) &&
     (0 < *(int *)(param_1 + 0x78f0))) {
    lVar6 = 0;
    uVar7 = 0;
    iVar5 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x78e8);
      if (((*(longlong *)(lVar3 + 0x20 + lVar6) != 0) &&
          (plVar1 = *(longlong **)(lVar3 + 0x28 + lVar6),
          lVar3 + lVar6 != 0 && plVar1 != (longlong *)0x0)) &&
         (lVar3 = (**(code **)(*plVar1 + 8))(), lVar3 != 0)) {
        lVar4 = FUN_144a7d050();
        if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
           ((*(byte *)(lVar3 + 0x65) & 0x18) == 0x10)) {
          if (iVar5 == param_2) {
            iVar5 = FUN_14042831e(param_1);
            if (iVar5 == (int)uVar7) {
              return;
            }
            FUN_141020220(param_1,uVar7 & 0xffffffff);
            if (*(char *)(param_1 + 0x178) == '\x03') {
              FUN_141145750(param_1,lVar3,0,param_3,(char)param_3);
              return;
            }
            FUN_1465cf5d6(param_1,lVar3,0,param_3,(char)param_3,0xffffffff);
            return;
          }
          iVar5 = iVar5 + 1;
        }
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x48;
    } while ((longlong)uVar7 < (longlong)*(int *)(param_1 + 0x78f0));
  }
  return;
}



// FUNCTION 148cce3d8 FUN_148cce3d8 body=67 status=ok
// SIG undefined FUN_148cce3d8(void)

void FUN_148cce3d8(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_140df74c8();
    lVar2 = FUN_144718840(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_141349942(param_1 + 0x71a8,lVar2,0);
      return;
    }
  }
  return;
}



// FUNCTION 148cce420 FUN_148cce420 body=64 status=ok
// SIG undefined FUN_148cce420(void)

void FUN_148cce420(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_140df74c8();
    lVar2 = FUN_144718840(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_141528b20(param_1 + 0x71a8,lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148cce460 FUN_148cce460 body=138 status=ok
// SIG undefined FUN_148cce460(void)

void FUN_148cce460(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int7 iVar5;
  
  if (*(char *)(param_1 + 0x8358) == '\x01') {
    lVar2 = FUN_1447210f0(param_1);
    if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x178), lVar2 != 0)) {
      lVar3 = FUN_14030d660();
      iVar1 = *(int *)(lVar3 + 0x38);
      if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
          lVar3 + 0x30)) {
        cVar4 = *(char *)(lVar2 + 0x6a0);
        iVar5 = (int7)(int3)((uint)iVar1 >> 8);
        goto LAB_148cce4ad;
      }
    }
  }
  cVar4 = '\0';
  iVar5 = 0;
LAB_148cce4ad:
  if (*(char *)(param_1 + 0x8359) == cVar4) {
    return;
  }
  *(char *)(param_1 + 0x8359) = cVar4;
  FUN_148bf6ff0(param_1 + 0x8378);
  FUN_148cce4f0(param_1,CONCAT71(iVar5,*(undefined1 *)(param_1 + 0x8359)));
  return;
}


