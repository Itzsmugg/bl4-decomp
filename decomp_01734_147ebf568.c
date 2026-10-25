// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147ebf568 FUN_147ebf568 body=102 status=ok
// SIG undefined FUN_147ebf568(void)

void FUN_147ebf568(longlong param_1)

{
  longlong lVar1;
  
  FUN_14384afc8();
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x38);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    else if (lVar1 == 0) {
      return;
    }
    lVar1 = FUN_147eac578(lVar1,*(undefined2 *)(param_1 + 0x88));
    if (lVar1 != 0) {
      FUN_147ebf5ce(param_1,lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 147ebf5ce FUN_147ebf5ce body=559 status=ok
// SIG undefined FUN_147ebf5ce(void)

void FUN_147ebf5ce(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x80);
  if (lVar3 == 0) {
LAB_147ebf61f:
    lVar3 = 0;
  }
  else {
    lVar2 = FUN_1411c53f8();
    if (((lVar2 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) goto LAB_147ebf61f;
    lVar3 = *(longlong *)(param_1 + 0x80);
  }
  lVar2 = FUN_145b60b2e();
  if (lVar3 != lVar2) {
    lVar3 = *(longlong *)(param_1 + 0x80);
    if (lVar3 == 0) {
LAB_147ebf65c:
      lVar3 = 0;
    }
    else {
      lVar2 = FUN_1411c53f8();
      if (((lVar2 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) goto LAB_147ebf65c;
      lVar3 = *(longlong *)(param_1 + 0x80);
    }
    lVar2 = FUN_145b60c18();
    if (lVar3 != lVar2) goto LAB_147ebf668;
  }
  lVar3 = *(longlong *)(param_1 + 0x80);
  if (lVar3 == 0) {
LAB_147ebf6ba:
    lVar3 = 0;
  }
  else {
    lVar2 = FUN_1411c53f8();
    if (((lVar2 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) goto LAB_147ebf6ba;
    lVar3 = *(longlong *)(param_1 + 0x80);
  }
  lVar2 = FUN_145b60b2e();
  lVar3 = *(longlong *)((ulonglong)(lVar3 != lVar2) * 0x10 + 0x30 + *(longlong *)(param_2 + 8));
  if (lVar3 != 0) {
    if (*(int *)(param_1 + 0xa0) < 2) {
      if ((-1 < *(int *)(param_1 + 0x90)) && (*(int *)(param_1 + 0x90) < *(int *)(lVar3 + 0x48))) {
        FUN_1427e11c2(lVar3,local_48);
        FUN_1400021e4(local_48,&local_40);
        if ((longlong *)(param_1 + 0x98) == &local_40) {
          if (local_40 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(param_1 + 0x98) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(param_1 + 0x98) = local_40;
          local_40 = 0;
          *(undefined4 *)(param_1 + 0xa0) = local_38;
          *(undefined4 *)(param_1 + 0xa4) = local_34;
        }
        *(undefined4 *)(param_1 + 0x90) =
             *(undefined4 *)
              (*(longlong *)(lVar3 + 0x40) + 8 + (longlong)*(int *)(param_1 + 0x90) * 0x10);
      }
    }
    else {
      FUN_1446f470e(&local_40,*(undefined8 *)(param_1 + 0x98),1);
      uVar1 = FUN_141715768(lVar3,local_40,0);
      *(undefined4 *)(param_1 + 0x90) = uVar1;
    }
  }
LAB_147ebf668:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebf802 FUN_147ebf802 body=270 status=ok
// SIG undefined FUN_147ebf802(void)

void FUN_147ebf802(longlong param_1,longlong param_2)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 **local_58;
  undefined1 local_48 [8];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_2 + 0x118);
  if (lVar2 != 0) {
    uVar1 = *(undefined2 *)(param_1 + 0x88);
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    puVar3 = local_40;
    local_38 = 3;
    *local_40 = &PTR_LAB_14ac04230;
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
    *local_40 = &PTR_FUN_14ac041c0;
    local_40[3] = 0;
    FUN_14485c47a(local_40 + 3,param_1);
    puVar3[4] = &LAB_147ebf912;
    *(undefined4 *)(puVar3 + 5) = 0;
    local_58 = &local_40;
    FUN_147eacb26(lVar2,local_48,uVar1,param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebf938 FUN_147ebf938 body=63 status=ok
// SIG undefined FUN_147ebf938(void)

ulonglong FUN_147ebf938(longlong param_1,undefined8 param_2,short param_3)

{
  longlong lVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  lVar1 = FUN_147eacaa0(param_2);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (*(short *)(param_1 + 0x88) == param_3) {
      FUN_147ea7e9a(lVar1,param_1);
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 147ebf97c FUN_147ebf97c body=37 status=ok
// SIG undefined FUN_147ebf97c(void)

void FUN_147ebf97c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147ebf9a2();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147ebf9a2 FUN_147ebf9a2 body=136 status=ok
// SIG undefined FUN_147ebf9a2(void)

undefined8 FUN_147ebf9a2(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar4 = FUN_14113c790();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      bVar2 = *(byte *)(param_1 + 0x59);
      lVar4 = *(longlong *)(param_1 + 0x48);
      if (bVar2 != 0xff) {
        if ((lVar4 == 0) ||
           (*(uint *)(lVar4 + 0x60) == (uint)bVar2 ||
            (int)*(uint *)(lVar4 + 0x60) < (int)(uint)bVar2)) {
          lVar4 = 0;
        }
        else {
          plVar1 = (longlong *)(lVar4 + 0x58);
          uVar6 = (ulonglong)((uint)bVar2 * 0x30);
          lVar4 = *(longlong *)(*plVar1 + uVar6);
          if (lVar4 == 0) {
            lVar4 = *(longlong *)(*plVar1 + uVar6 + 8);
          }
        }
      }
      uVar5 = FUN_147ea7518(lVar3,lVar4);
      return uVar5;
    }
  }
  return 0;
}



// FUNCTION 147ebfa2e FUN_147ebfa2e body=37 status=ok
// SIG undefined FUN_147ebfa2e(void)

void FUN_147ebfa2e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147ebfa54();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147ebfa54 FUN_147ebfa54 body=76 status=ok
// SIG undefined FUN_147ebfa54(void)

undefined8 FUN_147ebfa54(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar2 = FUN_14113c790();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      uVar3 = FUN_147ea75be(lVar1,param_1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 147ebfabe FUN_147ebfabe body=94 status=ok
// SIG undefined FUN_147ebfabe(void)

void FUN_147ebfabe(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_1446e0b6e();
  if ((*(char *)(param_1 + 100) != '\0') && ((*(byte *)(param_1 + 0x98) & 4) != 0)) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (*(int *)(param_1 + 0x84) < 0) {
      FUN_1402191ca(param_1 + 0x78,0);
    }
    uVar1 = FUN_145993d66();
    FUN_147eb36a0(param_1,uVar1,param_1 + 0x78);
    return;
  }
  return;
}



// FUNCTION 147ebfb1c FUN_147ebfb1c body=81 status=ok
// SIG undefined FUN_147ebfb1c(void)

void FUN_147ebfb1c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x40) = param_2;
  lVar1 = *(longlong *)(param_2 + 0x38);
  if (lVar1 == 0) {
    return;
  }
  uVar2 = FUN_145993d66();
  FUN_147eb382d(param_1,uVar2,lVar1);
  return;
}



// FUNCTION 147ebfb6e FUN_147ebfb6e body=113 status=ok
// SIG undefined FUN_147ebfb6e(void)

void FUN_147ebfb6e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x70) = param_2;
    if (param_2 != 0) goto LAB_147ebfb91;
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 0x70) = param_2;
LAB_147ebfb91:
    lVar1 = FUN_14104c5c4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      goto LAB_147ebfbb3;
    }
  }
  param_2 = 0;
LAB_147ebfbb3:
  *(longlong *)(param_1 + 0x68) = param_2;
  return;
}



// FUNCTION 147ebfbe0 FUN_147ebfbe0 body=503 status=ok
// SIG undefined FUN_147ebfbe0(void)

void FUN_147ebfbe0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined8 **local_78;
  undefined8 *local_70;
  undefined4 local_68;
  short local_5a;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1[0xd];
  if ((*(uint *)(param_1 + 0x13) >> 10 & 1) == 0 || lVar1 == 0) {
    if ((*(uint *)(param_1 + 0x13) >> 9 & 1) == 0) goto LAB_147ebfc72;
    uVar4 = DAT_14cb1f3e0;
    local_58 = param_1[0xe];
  }
  else {
    local_50 = *(undefined8 *)(lVar1 + 0x3d0);
    uVar4 = DAT_14cb1f3f0;
    local_58 = lVar1;
  }
  uVar4 = FUN_14477b072(param_1,uVar4);
  (**(code **)(*param_1 + 0x248))(param_1,uVar4,&local_58);
LAB_147ebfc72:
  if ((~*(uint *)(param_1 + 0x13) & 6) != 0 && (*(uint *)(param_1 + 0x13) & 0x6000) != 0) {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 4;
  }
  lVar1 = *(longlong *)(param_2 + 0x118);
  if ((lVar1 != 0) && (0 < (int)param_1[0x10])) {
    lVar7 = 0;
    lVar6 = 0;
    do {
      FUN_147eacaa8(lVar1,&local_5a,param_1[0xf] + lVar7);
      if (local_5a != -1) {
        local_70 = (undefined8 *)0x0;
        local_68 = 0;
        FUN_1446efa72(&local_70,0,3,0x10);
        puVar2 = local_70;
        local_68 = 3;
        *local_70 = &PTR_LAB_14ac04230;
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
        local_70[2] = lVar5;
        *local_70 = &PTR_FUN_14ac042a0;
        local_70[3] = 0;
        FUN_14485c47a(local_70 + 3,param_1);
        puVar2[4] = FUN_147ebfdd8;
        *(undefined4 *)(puVar2 + 5) = 0;
        local_78 = &local_70;
        FUN_147eacb26(lVar1,&local_58,local_5a,param_1);
      }
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 8;
    } while (lVar6 < (int)param_1[0x10]);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebfdd8 FUN_147ebfdd8 body=125 status=ok
// SIG undefined FUN_147ebfdd8(void)

ulonglong FUN_147ebfdd8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  
  lVar2 = FUN_147eacaa0(param_2);
  if (lVar2 != 0) {
    lVar3 = FUN_14113c790();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      cVar1 = FUN_147ec0178(param_1,lVar2);
      uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      if (cVar1 == '\x02') {
        FUN_147ea7a74(lVar2,param_1);
      }
      else if (cVar1 == '\x01') {
        FUN_147ea7f0a(lVar2,param_1,0);
      }
      goto LAB_147ebfe14;
    }
  }
  uVar4 = 0;
LAB_147ebfe14:
  return uVar4 & 0xffffffff;
}



// FUNCTION 147ebfe56 FUN_147ebfe56 body=214 status=ok
// SIG undefined FUN_147ebfe56(void)

void FUN_147ebfe56(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_2 + 0x118) != 0) {
    FUN_147eacfc4(*(longlong *)(param_2 + 0x118),param_1);
  }
  lVar2 = param_1[0xd];
  if ((*(uint *)(param_1 + 0x13) >> 0xc & 1) == 0 || lVar2 == 0) {
    if ((*(uint *)(param_1 + 0x13) >> 0xb & 1) == 0) goto LAB_147ebfeef;
    uVar3 = DAT_14cb1f400;
    local_28 = param_1[0xe];
  }
  else {
    local_20 = *(undefined8 *)(lVar2 + 0x3d0);
    uVar3 = DAT_14cb1f410;
    local_28 = lVar2;
  }
  uVar3 = FUN_14477b072(param_1,uVar3);
  (**(code **)(*param_1 + 0x248))(param_1,uVar3,&local_28);
LAB_147ebfeef:
  uVar1 = *(uint *)(param_1 + 0x13);
  if ((((uVar1 & 0x18) == 0) && ((uVar1 & 0x6000) != 0)) && ((uVar1 & 6) != 6)) {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfb;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebff2e FUN_147ebff2e body=160 status=ok
// SIG undefined FUN_147ebff2e(void)

void FUN_147ebff2e(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = param_1[0xd];
  if ((*(uint *)(param_1 + 0x13) & 0x40) == 0 || lVar1 == 0) {
    if ((*(uint *)(param_1 + 0x13) & 0x20) == 0) goto LAB_147ebffb1;
    uVar2 = DAT_14cb1f3c0;
    local_28 = param_1[0xe];
  }
  else {
    local_20 = *(undefined8 *)(lVar1 + 0x3d0);
    uVar2 = DAT_14cb1f3d0;
    local_28 = lVar1;
  }
  uVar2 = FUN_14477b072(param_1,uVar2);
  (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_28);
LAB_147ebffb1:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ebffd0 FUN_147ebffd0 body=168 status=ok
// SIG undefined FUN_147ebffd0(void)

void FUN_147ebffd0(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = param_1[0xd];
  if ((*(uint *)(param_1 + 0x13) >> 8 & 1) == 0 || lVar1 == 0) {
    if (-1 < (char)*(uint *)(param_1 + 0x13)) goto LAB_147ec005b;
    local_28 = CONCAT71(local_28._1_7_,param_3);
    uVar2 = DAT_14cb1f3a0;
    local_30 = param_1[0xe];
  }
  else {
    local_28 = *(undefined8 *)(lVar1 + 0x3d0);
    uVar2 = DAT_14cb1f3b0;
    local_30 = lVar1;
    local_20 = param_3;
  }
  uVar2 = FUN_14477b072(param_1,uVar2);
  (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_30);
LAB_147ec005b:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec007a FUN_147ec007a body=252 status=ok
// SIG undefined FUN_147ec007a(void)

void FUN_147ec007a(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = param_1[0xd];
  if ((*(uint *)(param_1 + 0x13) & 0x10) == 0 || lVar1 == 0) {
    if ((*(uint *)(param_1 + 0x13) & 8) == 0) goto LAB_147ec010b;
    local_30 = CONCAT44(local_30._4_4_,param_4);
    uVar3 = DAT_14cb1f420;
    local_38 = param_1[0xe];
  }
  else {
    local_30 = *(undefined8 *)(lVar1 + 0x3d0);
    uVar3 = DAT_14cb1f430;
    local_38 = lVar1;
    local_28 = param_4;
  }
  uVar3 = FUN_14477b072(param_1,uVar3);
  (**(code **)(*param_1 + 0x248))(param_1,uVar3,&local_38);
LAB_147ec010b:
  if ((~*(uint *)(param_1 + 0x13) & 6) != 0 && (*(uint *)(param_1 + 0x13) & 0x6000) != 0) {
    cVar2 = FUN_147ec0178(param_1,param_2);
    if (cVar2 == '\x02') {
      FUN_147ea7a74(param_2,param_1);
    }
    else if (cVar2 == '\x01') {
      FUN_147ea7f0a(param_2,param_1,0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec0178 FUN_147ec0178 body=203 status=ok
// SIG undefined FUN_147ec0178(void)

byte FUN_147ec0178(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if ((*(byte *)((longlong)param_1 + 0x99) & 0x60) == 0) {
    return 3;
  }
  if (*(char *)((longlong)param_1 + 100) != '\0') {
    bVar3 = *(byte *)((longlong)param_1 + 0x59);
    lVar5 = param_1[9];
    if (bVar3 != 0xff) {
      if ((lVar5 == 0) ||
         (*(uint *)(lVar5 + 0x60) == (uint)bVar3 || (int)*(uint *)(lVar5 + 0x60) < (int)(uint)bVar3)
         ) {
        lVar5 = 0;
      }
      else {
        plVar1 = (longlong *)(lVar5 + 0x58);
        uVar4 = (ulonglong)((uint)bVar3 * 0x30);
        lVar5 = *(longlong *)(*plVar1 + uVar4);
        if (lVar5 == 0) {
          lVar5 = *(longlong *)(*plVar1 + uVar4 + 8);
        }
      }
    }
    cVar2 = FUN_147ea7518(param_2,lVar5);
    if (cVar2 == '\0') {
      if ((*(byte *)((longlong)param_1 + 100) | 2) == 3) {
        bVar3 = (**(code **)(*param_1 + 800))(param_1,param_2,0);
        return *(byte *)(param_1 + 0xc) >> 7 ^ bVar3;
      }
    }
    else if ((*(byte *)((longlong)param_1 + 100) & 0xfe) == 2) {
      bVar3 = (**(code **)(*param_1 + 800))(param_1,param_2,0);
      return (*(byte *)(param_1 + 0xc) >> 7 ^ bVar3 ^ 1) * '\x02';
    }
  }
  return 0;
}



// FUNCTION 147ec0244 FUN_147ec0244 body=217 status=ok
// SIG undefined FUN_147ec0244(void)

undefined1 FUN_147ec0244(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(uint *)(param_1 + 0x13);
  if ((uVar1 & 0x6000) != 0) {
    lVar2 = param_1[0xd];
    if ((uVar1 >> 0xe & 1) != 0 && lVar2 != 0) {
      local_28 = *(ulonglong *)(lVar2 + 0x3d0);
      local_20 = 0;
      local_30 = lVar2;
      uVar4 = FUN_14477b072(param_1,DAT_14cb1f390);
      (**(code **)(*param_1 + 0x248))(param_1,uVar4,&local_30);
      uVar3 = local_20;
      goto LAB_147ec0288;
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      local_30 = param_1[0xe];
      local_28 = local_28 & 0xffffffffffffff00;
      uVar4 = FUN_14477b072(param_1,DAT_14cb1f380);
      (**(code **)(*param_1 + 0x248))(param_1,uVar4,&local_30);
      uVar3 = (undefined1)local_28;
      goto LAB_147ec0288;
    }
  }
  uVar3 = 0;
LAB_147ec0288:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec031e FUN_147ec031e body=235 status=ok
// SIG undefined FUN_147ec031e(void)

undefined8 FUN_147ec031e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147ebb5ca();
  plVar1 = *(longlong **)(param_1 + 0x10);
  lVar4 = plVar1[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar4 = plVar1[0x22];
  }
  if ((lVar4 != 0) && ((*(uint *)(param_1 + 0x98) & 1) != 0)) {
    uVar3 = FUN_145993d66();
    FUN_147eb39a3(&local_38,param_1,uVar3,lVar4 + 0x88);
    if (1 < local_30) {
      FUN_1400020e8(param_2,&DAT_14abed5a8,3);
      iVar2 = local_30 - 1;
      if (local_30 == 0) {
        iVar2 = 0;
      }
      FUN_1400020e8(param_2,local_38,iVar2);
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec040a FUN_147ec040a body=97 status=ok
// SIG undefined FUN_147ec040a(void)

void FUN_147ec040a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 in_stack_00000028;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
    if (lVar2 == 0) {
      return;
    }
  }
  if (*(int *)(lVar2 + 0x90) == 0) {
    return;
  }
  FUN_147eb3c56(param_1,lVar2 + 0x88,in_stack_00000028);
  return;
}



// FUNCTION 147ec0484 FUN_147ec0484 body=149 status=ok
// SIG undefined FUN_147ec0484(void)

undefined8 FUN_147ec0484(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = &DAT_149dfb77a;
  if (*(int *)(param_1 + 0xc0) != 0) {
    puVar1 = *(undefined2 **)(param_1 + 0xb8);
  }
  FUN_147ebb5ca(param_1,&local_38);
  puVar2 = &DAT_149dfb77a;
  if (local_30 != 0) {
    puVar2 = local_38;
  }
  FUN_140002266(param_2,L"%s: %s",puVar2,puVar1);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec051a FUN_147ec051a body=123 status=ok
// SIG undefined FUN_147ec051a(void)

void FUN_147ec051a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  
  bVar2 = DAT_14c950c29;
  if (param_2 == 0 || DAT_14c950c29 != 1) {
    *(longlong *)(param_1 + 0x40) = param_2;
    if (param_2 == 0) {
      return;
    }
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 0x40) = param_2;
    bVar2 = DAT_14c950c29;
  }
  lVar1 = *(longlong *)(param_2 + 0x38);
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c(lVar1);
  }
  else if (lVar1 == 0) {
    return;
  }
  FUN_14384992e(param_1 + 0x68,lVar1);
  return;
}



// FUNCTION 147ec059a FUN_147ec059a body=138 status=ok
// SIG undefined FUN_147ec059a(void)

void FUN_147ec059a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  
  bVar2 = DAT_14c950c29;
  if (param_2 == 0 || DAT_14c950c29 != 1) {
    *(longlong *)(param_1 + 0x40) = param_2;
    if (param_2 == 0) {
      return;
    }
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 0x40) = param_2;
    bVar2 = DAT_14c950c29;
  }
  lVar1 = *(longlong *)(param_2 + 0x38);
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c(lVar1);
  }
  else if (lVar1 == 0) {
    return;
  }
  FUN_14384992e(param_1 + 0x70,lVar1);
  FUN_14384992e(param_1 + 0x98,lVar1);
  return;
}



// FUNCTION 147ec0624 FUN_147ec0624 body=294 status=ok
// SIG undefined FUN_147ec0624(void)

bool FUN_147ec0624(longlong param_1,longlong param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar7 = *(longlong *)(param_1 + 0x88);
  if (lVar7 == 0) {
LAB_147ec0674:
    lVar7 = 0;
  }
  else {
    lVar5 = FUN_1411c53f8();
    if (((lVar5 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar5 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) goto LAB_147ec0674;
    lVar7 = *(longlong *)(param_1 + 0x88);
  }
  lVar5 = *(longlong *)(param_1 + 0xb0);
  if (lVar5 != 0) {
    lVar6 = FUN_1411c53f8();
    if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30)) {
      lVar5 = *(longlong *)(param_1 + 0xb0);
      goto LAB_147ec06aa;
    }
  }
  lVar5 = 0;
LAB_147ec06aa:
  if ((lVar7 == lVar5) && (lVar7 = *(longlong *)(param_2 + 0x118), lVar7 != 0)) {
    uVar1 = *(undefined2 *)(param_1 + 0xb8);
    uVar2 = *(undefined2 *)(param_1 + 0x90);
    local_38 = *(longlong *)(param_1 + 0x88);
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar4 = FUN_147ead764(lVar7,&local_38,uVar2,uVar1);
    bVar3 = (iVar4 != 0) != (*(char *)(param_1 + 0x68) == '\0');
  }
  else {
    bVar3 = false;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec074c FUN_147ec074c body=279 status=ok
// SIG undefined FUN_147ec074c(void)

undefined8 FUN_147ec074c(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  wchar_t *pwVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_a8 [32];
  undefined2 *local_88;
  wchar_t *local_80;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  pwVar2 = L"NOT EQUAL";
  if (*(char *)(param_1 + 0x68) == '\0') {
    pwVar2 = L"EQUAL";
  }
  FUN_1400021e4(param_1 + 0xa8,&local_50);
  puVar3 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar3 = local_50;
  }
  FUN_1400021e4(param_1 + 0x80,&local_60);
  puVar4 = &DAT_149dfb77a;
  if (local_58 != 0) {
    puVar4 = local_60;
  }
  FUN_147ebb5ca(param_1,&local_70);
  puVar1 = &DAT_149dfb77a;
  if (local_68 != 0) {
    puVar1 = local_70;
  }
  local_88 = puVar3;
  local_80 = pwVar2;
  FUN_140002266(param_2,L"%s:\n%s and %s\ncontain %s values",puVar1,puVar4);
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec0864 FUN_147ec0864 body=441 status=ok
// SIG undefined FUN_147ec0864(void)

void FUN_147ec0864(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined8 **local_78;
  undefined8 *local_70;
  undefined4 local_68;
  undefined1 local_60 [8];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_2 + 0x118);
  if (lVar1 != 0) {
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    puVar2 = local_58;
    local_50 = 3;
    *local_58 = &PTR_LAB_14ac04230;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_58[2] = lVar4;
    *local_58 = &PTR_FUN_14ac04310;
    local_58[3] = 0;
    FUN_14485c47a(local_58 + 3,param_1);
    *(undefined4 *)(puVar2 + 5) = 0;
    puVar2[4] = &LAB_147ec0a1e;
    local_78 = &local_58;
    FUN_147eacb26(lVar1,local_60,*(undefined2 *)(param_1 + 0x90),param_1);
    local_70 = (undefined8 *)0x0;
    local_68 = 0;
    FUN_1446efa72(&local_70,0,3,0x10);
    puVar2 = local_70;
    local_68 = 3;
    *local_70 = &PTR_LAB_14ac04230;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_70[2] = lVar4;
    *local_70 = &PTR_FUN_14ac04310;
    local_70[3] = 0;
    FUN_14485c47a(local_70 + 3,param_1);
    puVar2[4] = &LAB_147ec0a1e;
    *(undefined4 *)(puVar2 + 5) = 0;
    local_78 = &local_70;
    FUN_147eacb26(lVar1,local_60,*(undefined2 *)(param_1 + 0xb8),param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec0a44 FUN_147ec0a44 body=71 status=ok
// SIG undefined FUN_147ec0a44(void)

ulonglong FUN_147ec0a44(longlong param_1,undefined8 param_2,short param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = FUN_147eacaa0(param_2);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else if ((*(short *)(param_1 + 0x90) == param_3) ||
          (uVar2 = CONCAT71((int7)((ulonglong)param_2 >> 8),1),
          *(short *)(param_1 + 0xb8) == param_3)) {
    FUN_147ea7e9a(lVar1,param_1);
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 147ec0a98 FUN_147ec0a98 body=136 status=ok
// SIG undefined FUN_147ec0a98(void)

void FUN_147ec0a98(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)
           (*(longlong *)(*param_2 + 0x168) + 0x30 + (ulonglong)*(ushort *)(*param_2 + 0x2d8) * 0x58
           );
  if ((*(int *)(lVar1 + (ulonglong)*(ushort *)(param_1 + 0x52)) !=
       *(int *)((longlong)param_2 + 0x34)) &&
     (*(int *)(lVar1 + (ulonglong)*(ushort *)(param_1 + 0x52)) = *(int *)((longlong)param_2 + 0x34),
     param_3 != 2)) {
    cVar2 = '\0';
    if (*(longlong *)(*param_2 + 0x118) != 0) {
      cVar2 = FUN_147ebf1e8(param_1);
    }
    if ((bool)cVar2 != ((*(uint *)(param_1 + 0x60) >> 7 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000147ec0b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x2f0))
                (*(longlong **)(param_1 + 0x48),param_2,*(undefined1 *)(param_1 + 0x59));
      return;
    }
  }
  return;
}



// FUNCTION 147ec0b3c FUN_147ec0b3c body=153 status=ok
// SIG undefined FUN_147ec0b3c(void)

void FUN_147ec0b3c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  
  bVar2 = DAT_14c950c29;
  if (param_2 == 0 || DAT_14c950c29 != 1) {
    *(longlong *)(param_1 + 0x40) = param_2;
    if (param_2 == 0) {
      return;
    }
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 0x40) = param_2;
    bVar2 = DAT_14c950c29;
  }
  lVar1 = *(longlong *)(param_2 + 0x38);
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c(lVar1);
  }
  else if (lVar1 == 0) {
    return;
  }
  FUN_14384992e(param_1 + 0x78,lVar1);
  FUN_14384992e(param_1 + 0xa0,lVar1);
  FUN_14384992e(param_1 + 200,lVar1);
  return;
}



// FUNCTION 147ec0bd6 FUN_147ec0bd6 body=457 status=ok
// SIG undefined FUN_147ec0bd6(void)

undefined8 FUN_147ec0bd6(longlong param_1,longlong param_2,longlong param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  char cVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  double local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  double local_58;
  double dStack_50;
  double local_48;
  double local_38;
  double dStack_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_28 = DAT_14c8464f0;
  local_38 = DAT_14c8464e0;
  dStack_30 = DAT_14c8464e8;
  local_48 = DAT_14c8464f0;
  local_58 = DAT_14c8464e0;
  dStack_50 = DAT_14c8464e8;
  local_68 = DAT_14c846508;
  local_78 = (undefined4)DAT_14c8464f8;
  uStack_74 = DAT_14c8464f8._4_4_;
  uStack_70 = (undefined4)DAT_14c846500;
  uStack_6c = DAT_14c846500._4_4_;
  if (param_1 != 0) {
    if (((*(byte *)(param_3 + 0x24) & 1) == 0) || (*(short *)(param_3 + 0x20) != -1)) {
      cVar3 = FUN_147eb085c(param_1,*(undefined2 *)(param_2 + 0x20),&local_38);
      if ((cVar3 != '\0') &&
         (cVar3 = FUN_147eb085c(param_1,*(undefined2 *)(param_3 + 0x20),&local_58), cVar3 != '\0'))
      {
        dVar1 = local_48 - local_28;
        dVar7 = dStack_50 - dStack_30;
        dVar5 = local_58 - local_38;
        dVar9 = dVar1 * dVar1 + dVar5 * dVar5 + dVar7 * dVar7;
        if (((dVar9 != 1.0) || (dVar6 = dVar5, dVar8 = dVar7, dVar2 = dVar1, NAN(dVar9))) &&
           (dVar6 = DAT_14c8464e0, dVar8 = DAT_14c8464e8, dVar2 = DAT_14c8464f0,
           9.99999993922529e-09 <= dVar9)) {
          dVar9 = 1.0 / SQRT(dVar9);
          dVar6 = dVar5 * dVar9;
          dVar8 = dVar7 * dVar9;
          dVar2 = dVar1 * dVar9;
        }
        *param_4 = dVar6;
        param_4[1] = dVar8;
        param_4[2] = dVar2;
        goto LAB_147ec0c93;
      }
    }
    else {
      cVar3 = FUN_147eb095a(param_1,*(undefined2 *)(param_2 + 0x20),&local_78);
      if (cVar3 != '\0') {
        FUN_144a76660(&local_78,&local_90);
        param_4[2] = local_80;
        *(undefined4 *)param_4 = local_90;
        *(undefined4 *)((longlong)param_4 + 4) = uStack_8c;
        *(undefined4 *)(param_4 + 1) = uStack_88;
        *(undefined4 *)((longlong)param_4 + 0xc) = uStack_84;
LAB_147ec0c93:
        uVar4 = 1;
        goto LAB_147ec0d35;
      }
    }
  }
  uVar4 = 0;
LAB_147ec0d35:
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 147ec0da0 FUN_147ec0da0 body=127 status=ok
// SIG undefined FUN_147ec0da0(void)

void FUN_147ec0da0(undefined4 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *in_RCX;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  char local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_2 + 0x118);
  if ((lVar1 != 0) &&
     ((*in_RCX == 0 ||
      (FUN_147ed5c18(&local_28,lVar1,in_RCX,in_RCX + 1), param_1 = local_28, local_24 != '\x01'))))
  {
    param_1 = *(undefined4 *)((longlong)in_RCX + 0xc);
  }
  if (lVar1 == 0) {
    param_1 = *(undefined4 *)((longlong)in_RCX + 0xc);
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(param_1);
  }
  return;
}



// FUNCTION 147ec0e20 FUN_147ec0e20 body=383 status=ok
// SIG undefined FUN_147ec0e20(void)

bool FUN_147ec0e20(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_a8 [40];
  double local_80;
  double local_78;
  double local_68;
  double local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined8 *)(param_2 + 0x118);
  cVar2 = FUN_147ec0bd6(uVar1,param_1 + 0x78,param_1 + 200,&local_80);
  if (cVar2 != '\0') {
    cVar2 = FUN_147ec0bd6(uVar1,param_1 + 0x78,param_1 + 0xa0,&local_68);
    if (cVar2 != '\0') {
      dVar5 = local_68 * local_68 + local_60 * local_60;
      dVar6 = 0.0;
      if (dVar5 <= 9.99999993922529e-09) {
        dVar5 = 0.0;
      }
      else {
        dVar5 = 1.0 / SQRT(dVar5);
        local_68 = local_68 * dVar5;
        local_60 = local_60 * dVar5;
        dVar5 = dVar5 * 0.0;
      }
      dVar7 = local_80 * local_80 + local_78 * local_78;
      if (9.99999993922529e-09 < dVar7) {
        dVar6 = 1.0 / SQRT(dVar7);
        local_80 = local_80 * dVar6;
        local_78 = local_78 * dVar6;
        dVar6 = dVar6 * 0.0;
      }
      fVar4 = (float)FUN_147ec0da0(param_1 + 0x68,param_2);
      fVar4 = cosf(fVar4 * 0.017453292);
      bVar3 = (double)fVar4 < local_60 * local_78 + local_68 * local_80 + dVar5 * dVar6;
      goto LAB_147ec0e75;
    }
  }
  bVar3 = false;
LAB_147ec0e75:
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec0fa0 FUN_147ec0fa0 body=392 status=ok
// SIG undefined FUN_147ec0fa0(void)

void FUN_147ec0fa0(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_a8 [40];
  double local_80;
  double local_78;
  double local_68;
  double local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined8 *)(param_2 + 0x118);
  cVar2 = FUN_147ec0bd6(uVar1,param_1 + 0x78,param_1 + 200,&local_80);
  if (cVar2 != '\0') {
    cVar2 = FUN_147ec0bd6(uVar1,param_1 + 0x78,param_1 + 0xa0,&local_68);
    if (cVar2 != '\0') {
      dVar5 = local_68 * local_68 + local_60 * local_60;
      dVar6 = 0.0;
      if (dVar5 <= 9.99999993922529e-09) {
        dVar5 = 0.0;
      }
      else {
        dVar5 = 1.0 / SQRT(dVar5);
        local_68 = local_68 * dVar5;
        local_60 = local_60 * dVar5;
        dVar5 = dVar5 * 0.0;
      }
      dVar7 = local_80 * local_80 + local_78 * local_78;
      if (9.99999993922529e-09 < dVar7) {
        dVar6 = 1.0 / SQRT(dVar7);
        local_80 = local_80 * dVar6;
        local_78 = local_78 * dVar6;
        dVar6 = dVar6 * 0.0;
      }
      fVar4 = (float)FUN_147ec0da0(param_1 + 0x68,param_2);
      fVar4 = cosf(fVar4 * 0.017453292);
      bVar3 = (double)fVar4 < local_60 * local_78 + local_68 * local_80 + dVar5 * dVar6;
      goto LAB_147ec0ffa;
    }
  }
  bVar3 = false;
LAB_147ec0ffa:
  *(bool *)param_3 = bVar3;
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec112a FUN_147ec112a body=410 status=ok
// SIG undefined FUN_147ec112a(void)

void FUN_147ec112a(longlong param_1,longlong param_2,char *param_3)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_a8 [40];
  double local_80;
  double local_78;
  double local_68;
  double local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined8 *)(param_2 + 0x118);
  cVar2 = FUN_147ec0bd6(uVar1,param_1 + 0x78,param_1 + 200,&local_80);
  if (cVar2 != '\0') {
    cVar2 = FUN_147ec0bd6(uVar1,param_1 + 0x78,param_1 + 0xa0,&local_68);
    if (cVar2 != '\0') {
      dVar5 = local_68 * local_68 + local_60 * local_60;
      dVar6 = 0.0;
      if (dVar5 <= 9.99999993922529e-09) {
        dVar5 = 0.0;
      }
      else {
        dVar5 = 1.0 / SQRT(dVar5);
        local_68 = local_68 * dVar5;
        local_60 = local_60 * dVar5;
        dVar5 = dVar5 * 0.0;
      }
      dVar7 = local_80 * local_80 + local_78 * local_78;
      if (9.99999993922529e-09 < dVar7) {
        dVar6 = 1.0 / SQRT(dVar7);
        local_80 = local_80 * dVar6;
        local_78 = local_78 * dVar6;
        dVar6 = dVar6 * 0.0;
      }
      fVar4 = (float)FUN_147ec0da0(param_1 + 0x68,param_2);
      fVar4 = cosf(fVar4 * 0.017453292);
      bVar3 = (double)fVar4 < local_60 * local_78 + local_68 * local_80 + dVar5 * dVar6;
      goto LAB_147ec1184;
    }
  }
  bVar3 = false;
LAB_147ec1184:
  if ((bool)*param_3 != bVar3) {
    *param_3 = bVar3;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_a8);
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec12e8 FUN_147ec12e8 body=418 status=ok
// SIG undefined FUN_147ec12e8(void)

undefined8 FUN_147ec12e8(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined2 *local_b0;
  undefined2 *local_a8;
  undefined2 *local_98;
  int local_90;
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1400021e4(param_1 + 0xb0,&local_58);
  puVar4 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar4 = local_58;
  }
  FUN_1400021e4(param_1 + 0x88,&local_68);
  puVar3 = &DAT_149dfb77a;
  if (local_60 != 0) {
    puVar3 = local_68;
  }
  if (*(longlong *)(param_1 + 0x68) == 0) {
    FUN_140002266(&local_78,L"%.2f",(double)*(float *)(param_1 + 0x74));
  }
  else {
    FUN_147eca584(param_1 + 0x68,&local_78);
  }
  puVar2 = &DAT_149dfb77a;
  if (local_70 != 0) {
    puVar2 = local_78;
  }
  FUN_1400021e4(param_1 + 0xd8,&local_88);
  puVar5 = &DAT_149dfb77a;
  if (local_80 != 0) {
    puVar5 = local_88;
  }
  FUN_147ebb5ca(param_1,&local_98);
  puVar1 = &DAT_149dfb77a;
  if (local_90 != 0) {
    puVar1 = local_98;
  }
  local_b8 = puVar2;
  local_b0 = puVar3;
  local_a8 = puVar4;
  FUN_140002266(param_2,L"%s: is %s in +- %s degrees %s-%s cone",puVar1,puVar5);
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec148c FUN_147ec148c body=590 status=ok
// SIG undefined FUN_147ec148c(void)

/* WARNING: Removing unreachable block (ram,0x000147ec16d1) */

void FUN_147ec148c(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 local_88;
  double local_80;
  double local_78;
  double local_68;
  double local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar2 = *(undefined8 *)(param_2 + 0x118);
  cVar4 = FUN_147ec0bd6(uVar2,param_1 + 0x78,param_1 + 200,&local_80);
  if ((cVar4 != '\0') &&
     (cVar4 = FUN_147ec0bd6(uVar2,param_1 + 0x78,param_1 + 0xa0,&local_68), cVar4 != '\0')) {
    dVar8 = local_68 * local_68 + local_60 * local_60;
    dVar9 = 0.0;
    if (dVar8 <= 9.99999993922529e-09) {
      dVar8 = 0.0;
    }
    else {
      dVar8 = 1.0 / SQRT(dVar8);
      local_68 = local_68 * dVar8;
      local_60 = local_60 * dVar8;
      dVar8 = dVar8 * 0.0;
    }
    dVar10 = local_80 * local_80 + local_78 * local_78;
    if (9.99999993922529e-09 < dVar10) {
      dVar9 = 1.0 / SQRT(dVar10);
      local_80 = local_80 * dVar9;
      local_78 = local_78 * dVar9;
      dVar9 = dVar9 * 0.0;
    }
    dVar8 = local_60 * local_78 + local_68 * local_80 + dVar8 * dVar9;
    dVar9 = dVar8;
    if (1.0 <= dVar8) {
      dVar9 = 1.0;
    }
    dVar9 = acos((double)(-(ulonglong)(dVar8 < -1.0) & 0xbff0000000000000 |
                         ~-(ulonglong)(dVar8 < -1.0) & (ulonglong)dVar9));
    fVar7 = (float)FUN_147ec0da0(param_1 + 0x68,param_2);
    fVar7 = cosf(fVar7 * 0.017453292);
    pwVar6 = L"inside";
    if (dVar8 < (double)fVar7) {
      pwVar6 = L"outside";
    }
    FUN_140002266(&local_90,L"Angle: %.0f (%s cone)",dVar9 * 57.29577951308232,pwVar6);
    iVar1 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(param_5,iVar1);
    }
    lVar3 = *param_5;
    lVar5 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar5) = 0;
    *(undefined8 *)(lVar3 + lVar5) = local_90;
    local_90 = 0;
    *(undefined4 *)(lVar3 + 8 + lVar5) = (undefined4)local_88;
    *(undefined4 *)(lVar3 + 0xc + lVar5) = local_88._4_4_;
    local_88 = 0;
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ec16f4 FUN_147ec16f4 body=40 status=ok
// SIG undefined FUN_147ec16f4(void)

void FUN_147ec16f4(longlong param_1)

{
  FUN_1446e0b6e();
  *(byte *)(param_1 + 0x58) =
       *(byte *)(param_1 + 0x58) & 0xfb | (*(char *)(param_1 + 100) != '\0') << 2;
  return;
}



// FUNCTION 147ec171c FUN_147ec171c body=92 status=ok
// SIG undefined FUN_147ec171c(void)

bool FUN_147ec171c(longlong param_1,longlong param_2,double *param_3)

{
  double dVar1;
  longlong lVar2;
  float extraout_XMM0_Da;
  
  lVar2 = *(longlong *)(param_2 + 0xb0);
  if (lVar2 == 0) {
    lVar2 = FUN_1448abda6(param_2);
  }
  dVar1 = *(double *)(lVar2 + 0x6d0);
  FUN_147ec0da0(param_1 + 0x68,param_2);
  return *param_3 <= dVar1 - (double)extraout_XMM0_Da;
}



// FUNCTION 147ec1778 FUN_147ec1778 body=82 status=ok
// SIG undefined FUN_147ec1778(void)

void FUN_147ec1778(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *param_2;
  lVar4 = *(longlong *)(lVar3 + 0xb0);
  lVar3 = *(longlong *)
           (*(longlong *)(lVar3 + 0x168) + 0x30 + (ulonglong)*(ushort *)(lVar3 + 0x2d8) * 0x58);
  uVar2 = *(ushort *)(param_1 + 0x52);
  if (lVar4 == 0) {
    lVar4 = FUN_1448abda6();
  }
  *(undefined8 *)(lVar3 + (ulonglong)uVar2) = *(undefined8 *)(lVar4 + 0x6d0);
  pbVar1 = (byte *)(lVar3 + 8 + (ulonglong)uVar2);
  *pbVar1 = *pbVar1 & 0xfe;
  return;
}



// FUNCTION 147ec17ca FUN_147ec17ca body=123 status=ok
// SIG undefined FUN_147ec17ca(void)

void FUN_147ec17ca(longlong param_1,longlong param_2,double *param_3)

{
  double dVar1;
  longlong lVar2;
  float fVar3;
  
  if (((ulonglong)param_3[1] & 1) == 0) {
    lVar2 = *(longlong *)(param_2 + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6(param_2);
    }
    dVar1 = *(double *)(lVar2 + 0x6d0);
    fVar3 = (float)FUN_147ec0da0(param_1 + 0x68,param_2);
    if (*param_3 <= dVar1 - (double)fVar3) {
      *(byte *)(param_3 + 1) = *(byte *)(param_3 + 1) | 1;
      FUN_147ea7e9a(param_2,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 147ec1846 FUN_147ec1846 body=282 status=ok
// SIG undefined FUN_147ec1846(void)

undefined8 FUN_147ec1846(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_147eaa2f6(&local_48,1);
  puVar2 = local_48;
  if (local_40 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  if (*(longlong *)(param_1 + 0x68) == 0) {
    FUN_140002266(&local_58,L"%.2f",(double)*(float *)(param_1 + 0x74));
  }
  else {
    FUN_147eca584(param_1 + 0x68,&local_58);
  }
  puVar1 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar1 = local_58;
  }
  FUN_147ebb5ca(param_1,&local_68);
  puVar3 = &DAT_149dfb77a;
  if (local_60 != 0) {
    puVar3 = local_68;
  }
  local_78 = puVar2;
  FUN_140002266(param_2,L"%s: lock for %s s after execution and return %s",puVar3,puVar1);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147ec1962 FUN_147ec1962 body=360 status=ok
// SIG undefined FUN_147ec1962(void)

/* WARNING: Removing unreachable block (ram,0x000147ec1aae) */

void FUN_147ec1962(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  longlong *param_5)

{
  int iVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  undefined2 *puVar8;
  float fVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined2 *local_60;
  int local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = param_5;
  FUN_147eba12c();
  lVar5 = *(longlong *)(param_2 + 0xb0);
  if (lVar5 == 0) {
    lVar5 = FUN_1448abda6(param_2);
  }
  dVar2 = *(double *)(lVar5 + 0x6d0) - *param_3;
  fVar9 = (float)FUN_147ec0da0(param_1 + 0x68,param_2);
  uVar3 = local_50;
  uVar4 = local_48;
  if (dVar2 < (double)fVar9) {
    fVar9 = (float)FUN_147ec0da0(param_1 + 0x68,param_2);
    FUN_1406112c4(&local_60,(double)fVar9 - dVar2,1);
    puVar8 = local_60;
    if (local_58 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    pwVar7 = L"restart";
    if (*(char *)(param_1 + 100) == '\0') {
      pwVar7 = L"unlock";
    }
    FUN_140002266(&local_50,L"%s in %ss",pwVar7,puVar8);
    iVar1 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(param_5,iVar1);
    }
    lVar5 = *param_5;
    lVar6 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar5 + lVar6) = 0;
    *(undefined8 *)(lVar5 + lVar6) = local_50;
    local_50 = 0;
    uVar3 = local_50;
    *(undefined4 *)(lVar5 + 8 + lVar6) = (undefined4)local_48;
    *(undefined4 *)(lVar5 + 0xc + lVar6) = local_48._4_4_;
    local_48 = 0;
    uVar4 = local_48;
    local_48 = 0;
    local_50 = 0;
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
      uVar3 = local_50;
      uVar4 = local_48;
    }
  }
  local_48 = uVar4;
  local_50 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec1b0a FUN_147ec1b0a body=154 status=ok
// SIG undefined FUN_147ec1b0a(void)

void FUN_147ec1b0a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x40) = param_2;
  if ((*(uint *)(param_1 + 0xb8) & 1) != 0) {
    *(undefined8 *)(param_1 + 0x78) = DAT_14cb1f058;
    *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 0xfffffffe;
  }
  if (param_2 == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_2 + 0x38);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  else if (lVar1 == 0) {
    return;
  }
  FUN_14384992e(param_1 + 0x68,lVar1);
  FUN_14384992e(param_1 + 0x90,lVar1);
  return;
}



// FUNCTION 147ec1ba4 FUN_147ec1ba4 body=968 status=ok
// SIG undefined FUN_147ec1ba4(void)

ulonglong FUN_147ec1ba4(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong *plVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_1e8 [32];
  byte *local_1c8;
  undefined8 *local_1c0;
  undefined8 *local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  undefined8 local_198;
  longlong *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_170 [175];
  byte local_c1;
  longlong local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong local_60;
  char local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar2 = *(longlong *)(param_2 + 0x118);
  if (lVar2 != 0) {
    local_78 = DAT_14c8464f0;
    local_88 = (undefined4)DAT_14c8464e0;
    uStack_84 = DAT_14c8464e0._4_4_;
    uStack_80 = (undefined4)DAT_14c8464e8;
    uStack_7c = DAT_14c8464e8._4_4_;
    local_98 = DAT_14c8464f0;
    local_a8 = (undefined4)DAT_14c8464e0;
    uStack_a4 = DAT_14c8464e0._4_4_;
    uStack_a0 = (undefined4)DAT_14c8464e8;
    uStack_9c = DAT_14c8464e8._4_4_;
    bVar6 = FUN_147eb085c(lVar2,*(undefined2 *)(param_1 + 0x88));
    bVar7 = FUN_147eb085c(lVar2,*(undefined2 *)(param_1 + 0xb0),&local_a8);
    lVar10 = *(longlong *)(param_2 + 0xb0);
    if (((lVar10 != 0) || (lVar10 = FUN_1448abda6(param_2), lVar10 != 0)) &&
       (plVar3 = *(longlong **)(lVar10 + 0x168), plVar3 != (longlong *)0x0)) {
      lVar10 = FUN_1409035a4();
      if (*(int *)(lVar10 + 0x38) <= *(int *)(plVar3[2] + 0x38)) {
        uVar13 = 0;
        if (((bVar6 & bVar7) != 1) ||
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
            != lVar10 + 0x30)) goto LAB_147ec1c5e;
        lVar10 = *(longlong *)(param_2 + 0x120);
        if (lVar10 != 0) {
          (**(code **)(*(longlong *)(lVar10 + 0x390) + 0x18))(lVar10 + 0x390,&local_60);
          uVar11 = (**(code **)(*(longlong *)(lVar10 + 0x390) + 0x10))(lVar10 + 0x390);
          lVar12 = (**(code **)(*plVar3 + 0x340))(plVar3,uVar11,&local_60,&DAT_14c8464e0);
          if (lVar12 != 0) {
            local_c0 = *(longlong *)(param_1 + 0xf8);
            if ((*(longlong *)(param_1 + 0xe8) != 0) &&
               (FUN_147ed5a7d(&local_60,lVar2,param_1 + 0xe8,param_1 + 0xf0), local_58 == '\x01')) {
              local_c0 = local_60;
            }
            if ((local_c0 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(local_c0);
            }
            FUN_147e6f964(&local_b8,lVar12,lVar10,&local_c0);
            cVar8 = FUN_147eca6c4(param_1 + 0xc0,param_2);
            plVar5 = local_b0;
            if (cVar8 == '\0') {
              local_c1 = 0;
              if (local_b0 == (longlong *)0x0) {
                local_1c0 = &local_70;
                local_70 = local_b8;
                local_68 = (longlong *)0x0;
                local_1b8 = (undefined8 *)0x0;
                local_1c8 = &local_c1;
                uVar9 = (**(code **)(lVar12 + 0x460))(lVar12,&local_88,&local_a8,&local_60);
                uVar13 = (ulonglong)uVar9;
              }
              else {
                LOCK();
                *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
                UNLOCK();
                pcVar4 = *(code **)(lVar12 + 0x460);
                local_1c0 = &local_70;
                local_70 = local_b8;
                local_68 = local_b0;
                LOCK();
                *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
                UNLOCK();
                local_1c8 = &local_c1;
                local_1b8 = (undefined8 *)0x0;
                uVar9 = (*pcVar4)(lVar12,&local_88,&local_a8,&local_60);
                uVar13 = (ulonglong)uVar9;
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
              uVar13 = CONCAT71((int7)(uVar13 >> 8),((byte)uVar13 ^ 1) & local_c1);
            }
            else {
              local_188 = 0;
              uStack_180 = 0;
              local_198 = local_b8;
              local_190 = local_b0;
              if (local_b0 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
                UNLOCK();
              }
              local_1b0 = 0x7fefffffffffffff;
              local_1b8 = &local_188;
              local_1c0 = &local_198;
              local_1a8 = 1;
              local_1c8 = (byte *)&local_a8;
              FUN_147e6fa80(local_170,lVar10,lVar12,&local_88);
              uVar9 = FUN_1438367d8(plVar3,local_170,cVar8 == '\x01',0);
              uVar13 = (ulonglong)uVar9;
            }
            if (local_b0 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_b0 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_b0)(local_b0);
                LOCK();
                piVar1 = (int *)((longlong)local_b0 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_b0 + 0x10))(local_b0);
                }
              }
            }
            goto LAB_147ec1c5e;
          }
        }
      }
    }
  }
  uVar13 = 0;
LAB_147ec1c5e:
  if ((local_48 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13;
}



// FUNCTION 147ec1f6e FUN_147ec1f6e body=310 status=ok
// SIG undefined FUN_147ec1f6e(void)

undefined8 FUN_147ec1f6e(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  undefined2 *local_90;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_147ec20a6(param_1 + 0xc0,&local_50);
  puVar2 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar2 = local_50;
  }
  FUN_1400021e4(param_1 + 0xa0,&local_60);
  puVar3 = &DAT_149dfb77a;
  if (local_58 != 0) {
    puVar3 = local_60;
  }
  FUN_1400021e4(param_1 + 0x78,&local_70);
  puVar4 = &DAT_149dfb77a;
  if (local_68 != 0) {
    puVar4 = local_70;
  }
  FUN_147ebb5ca(param_1,&local_80);
  puVar1 = &DAT_149dfb77a;
  if (local_78 != 0) {
    puVar1 = local_80;
  }
  local_98 = puVar3;
  local_90 = puVar2;
  FUN_140002266(param_2,L"%s: Find path from %s to %s (mode:%s)",puVar1,puVar4);
  if (local_80 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec20a6 FUN_147ec20a6 body=75 status=ok
// SIG undefined FUN_147ec20a6(void)

undefined8 FUN_147ec20a6(longlong *param_1,undefined8 param_2)

{
  if (*param_1 == 0) {
    if (param_1[2] == 0) {
      FUN_140056680(param_2,L"Invalid Enum");
    }
    else {
      FUN_1401cfad2(param_1[2],param_2,*(undefined1 *)((longlong)param_1 + 0xc));
    }
  }
  else {
    FUN_147eca584(param_1,param_2);
  }
  return param_2;
}



// FUNCTION 147ec218c FUN_147ec218c body=1273 status=ok
// SIG undefined FUN_147ec218c(void)

undefined8 FUN_147ec218c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  float *pfVar6;
  longlong lVar7;
  undefined8 uVar8;
  double *pdVar9;
  float *pfVar10;
  double *pdVar11;
  bool bVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_2 + 0x120);
  if ((lVar1 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x468), lVar2 == 0)) goto LAB_147ec2276;
  uVar8 = *(undefined8 *)(param_2 + 0x118);
  fVar18 = *(float *)(param_1 + 0x90);
  if (((*(byte *)(param_1 + 0xd4) & 1) != 0) &&
     ((*(longlong *)(lVar1 + 0x3d0) != 0 &&
      (plVar3 = *(longlong **)(param_1 + 0xa8), plVar3 != (longlong *)0x0)))) {
    (**(code **)(*plVar3 + 0x2a0))(plVar3,*(longlong *)(lVar1 + 0x3d0),0xffffffff);
    lVar7 = FUN_144a87586(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x10),
                          *(undefined8 *)(param_1 + 0xb0));
    *(longlong *)(param_1 + 0xa0) = lVar7;
    if (lVar7 == 0) {
      pfVar6 = (float *)0x0;
    }
    else {
      pfVar6 = (float *)((longlong)*(int *)(lVar7 + 0x44) + *(longlong *)(param_1 + 0xa8));
    }
    pfVar10 = (float *)(param_1 + 200);
    if (pfVar6 != (float *)0x0) {
      pfVar10 = pfVar6;
    }
    fVar18 = *pfVar10;
  }
  lVar7 = *(longlong *)(param_1 + 0x80);
  if (lVar7 == 0) {
LAB_147ec2222:
    lVar7 = 0;
  }
  else {
    lVar5 = FUN_1411c53f8();
    if (((lVar5 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar5 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) goto LAB_147ec2222;
    lVar7 = *(longlong *)(param_1 + 0x80);
  }
  lVar5 = FUN_1412dbfa6();
  if (lVar7 == lVar5) {
    lVar7 = FUN_147eb9650(uVar8,*(undefined2 *)(param_1 + 0x88));
    if (lVar7 != 0) {
      lVar5 = FUN_144a6c4d8();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) == lVar5 + 0x30)) {
        cVar4 = FUN_147ec26d0(param_1 + 0xe8,param_2);
        if (cVar4 != '\0') {
          local_78 = FUN_147ec26d0(param_1 + 0xd8,param_2);
          FUN_147efaa92(lVar2,lVar7,3,fVar18);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_98);
        }
        if (*(longlong *)(lVar1 + 0x3d0) == 0) goto LAB_147ec2276;
        lVar2 = *(longlong *)(lVar7 + 0x1c8);
        if (lVar2 == 0) {
          pdVar9 = (double *)&DAT_14c8464e0;
          dVar14 = DAT_14c8464f0;
        }
        else {
          pdVar9 = (double *)(lVar2 + 0x260);
          dVar14 = *(double *)(lVar2 + 0x270);
        }
        lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x3d0) + 0x1c8);
        if (lVar1 == 0) {
          pdVar11 = (double *)&DAT_14c8464e0;
          dVar17 = DAT_14c8464f0;
        }
        else {
          pdVar11 = (double *)(lVar1 + 0x260);
          dVar17 = *(double *)(lVar1 + 0x270);
        }
        cVar4 = *(char *)(param_1 + 0xd0);
        if (cVar4 == '\x02') {
          dVar14 = (dVar17 - dVar14) * (dVar17 - dVar14);
        }
        else if (cVar4 == '\x01') {
          dVar14 = *pdVar9 - *pdVar11;
          dVar17 = pdVar9[1] - pdVar11[1];
          dVar14 = dVar14 * dVar14 + dVar17 * dVar17;
        }
        else if (cVar4 == '\0') {
          dVar15 = *pdVar9 - *pdVar11;
          dVar16 = pdVar9[1] - pdVar11[1];
          dVar14 = (dVar14 - dVar17) * (dVar14 - dVar17) + dVar15 * dVar15 + dVar16 * dVar16;
        }
        else {
          dVar14 = 1.79769313486232e+308;
        }
        bVar13 = (double)(fVar18 * fVar18) == dVar14;
        bVar12 = (double)(fVar18 * fVar18) < dVar14;
LAB_147ec25e1:
        uVar8 = CONCAT71((int7)((ulonglong)pdVar9 >> 8),!bVar12 && !bVar13);
        goto LAB_147ec2278;
      }
    }
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x80);
    if (lVar7 == 0) {
LAB_147ec2265:
      lVar7 = 0;
    }
    else {
      lVar5 = FUN_1411c53f8();
      if (((lVar5 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar5 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
          lVar5 + 0x30)) goto LAB_147ec2265;
      lVar7 = *(longlong *)(param_1 + 0x80);
    }
    lVar5 = FUN_1458b8ba0();
    if (lVar7 == lVar5) {
      FUN_147eb02a8(uVar8,&local_68,*(undefined2 *)(param_1 + 0x88));
      uVar8 = 0;
      if ((local_68 <= -DAT_14cb1f0a0) || (DAT_14cb1f0a0 <= local_68)) goto LAB_147ec2278;
      uVar8 = 0;
      if ((local_60 <= -DAT_14cb1f0a8) || (uVar8 = 0, DAT_14cb1f0a8 <= local_60))
      goto LAB_147ec2278;
      uVar8 = 0;
      if ((local_58 <= -DAT_14cb1f0b0) || (DAT_14cb1f0b0 <= local_58)) goto LAB_147ec2278;
      cVar4 = FUN_147ec26d0(param_1 + 0xe8,param_2);
      if (cVar4 != '\0') {
        uVar8 = FUN_147efa850(lVar2,&local_68,1,fVar18);
        goto LAB_147ec2278;
      }
      if (*(longlong *)(lVar1 + 0x3d0) != 0) {
        lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x3d0) + 0x1c8);
        if (lVar1 == 0) {
          pdVar9 = (double *)&DAT_14c8464e0;
          dVar14 = DAT_14c8464f0;
        }
        else {
          pdVar9 = (double *)(lVar1 + 0x260);
          dVar14 = *(double *)(lVar1 + 0x270);
        }
        cVar4 = *(char *)(param_1 + 0xd0);
        if (cVar4 == '\x02') {
          dVar14 = (dVar14 - local_58) * (dVar14 - local_58);
        }
        else if (cVar4 == '\x01') {
          local_68 = local_68 - *pdVar9;
          local_60 = local_60 - pdVar9[1];
          dVar14 = local_60 * local_60 + local_68 * local_68;
        }
        else if (cVar4 == '\0') {
          local_68 = local_68 - *pdVar9;
          local_60 = local_60 - pdVar9[1];
          dVar14 = (local_58 - dVar14) * (local_58 - dVar14) +
                   local_60 * local_60 + local_68 * local_68;
        }
        else {
          dVar14 = 1.79769313486232e+308;
        }
        bVar13 = (double)(fVar18 * fVar18) == dVar14;
        bVar12 = (double)(fVar18 * fVar18) < dVar14;
        goto LAB_147ec25e1;
      }
    }
  }
LAB_147ec2276:
  uVar8 = 0;
LAB_147ec2278:
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec268e FUN_147ec268e body=66 status=ok
// SIG undefined FUN_147ec268e(void)

void FUN_147ec268e(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0 && *(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x2a0))();
    uVar1 = FUN_144a87586(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10),
                          *(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 8) = uVar1;
  }
  return;
}



// FUNCTION 147ec26d0 FUN_147ec26d0 body=128 status=ok
// SIG undefined FUN_147ec26d0(void)

ulonglong FUN_147ec26d0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [38];
  byte local_22;
  char local_21;
  ulonglong local_20;
  
  uVar2 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_2 + 0x118);
  local_20 = uVar2;
  if (lVar1 != 0) {
    if ((*param_1 == 0) || (FUN_147ed59b0(&local_22,lVar1,param_1,param_1 + 1), local_21 != '\x01'))
    {
      uVar2 = (ulonglong)*(byte *)((longlong)param_1 + 0xc);
    }
    else {
      uVar2 = (ulonglong)local_22;
    }
  }
  if (lVar1 == 0) {
    uVar2 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
  }
  else {
    uVar2 = uVar2 & 0xff;
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2 & 0xffffffffffffff01;
}



// FUNCTION 147ec2752 FUN_147ec2752 body=387 status=ok
// SIG undefined FUN_147ec2752(void)

undefined8 FUN_147ec2752(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined4 local_44;
  undefined2 *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400b22c2(&local_40,"invalid");
  lVar2 = *(longlong *)(param_1 + 0x80);
  if ((((lVar2 == 0) || (lVar1 = FUN_1411c53f8(), lVar1 == 0)) ||
      (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x80);
  }
  lVar1 = FUN_1412dbfa6();
  if (lVar2 != lVar1) {
    lVar2 = *(longlong *)(param_1 + 0x80);
    if (((lVar2 == 0) || (lVar1 = FUN_1411c53f8(), lVar1 == 0)) ||
       ((*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
         lVar1 + 0x30)))) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x80);
    }
    lVar1 = FUN_1458b8ba0();
    if (lVar2 != lVar1) goto LAB_147ec2800;
  }
  FUN_1400021e4(param_1 + 0x78,&local_50);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_40 = local_50;
  local_38 = local_48;
  local_34 = local_44;
LAB_147ec2800:
  puVar3 = local_40;
  if (local_38 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_147ebb5ca(param_1,&local_50);
  puVar4 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar4 = local_50;
  }
  FUN_140002266(param_2,L"%s: %s",puVar4,puVar3);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147ec28da FUN_147ec28da body=196 status=ok
// SIG undefined FUN_147ec28da(void)

undefined8 FUN_147ec28da(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_2 + 0x118);
  if (lVar2 != 0) {
    lVar3 = FUN_147eb9650(lVar2,*(undefined2 *)(param_1 + 0x88));
    if (lVar3 != 0) {
      lVar3 = *(longlong *)(lVar3 + 0x10);
      lVar5 = *(longlong *)(param_1 + 0xa0);
      if (*(longlong *)(param_1 + 0x90) != 0) {
        FUN_147ed5a7d(&local_40,lVar2,param_1 + 0x90,param_1 + 0x98);
        if (local_38 == '\x01') {
          lVar5 = local_40;
        }
      }
      if (lVar5 != 0) {
        iVar1 = *(int *)(lVar5 + 0x38);
        if (iVar1 <= *(int *)(lVar3 + 0x38)) {
          uVar4 = CONCAT71((int7)(int3)((uint)iVar1 >> 8),
                           *(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
                           lVar5 + 0x30);
          goto LAB_147ec2902;
        }
      }
    }
  }
  uVar4 = 0;
LAB_147ec2902:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec29a0 FUN_147ec29a0 body=77 status=ok
// SIG undefined FUN_147ec29a0(void)

undefined1 FUN_147ec29a0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  byte bVar2;
  
  uVar1 = FUN_147eacaa0(param_2);
  bVar2 = (**(code **)(*param_1 + 800))(param_1,uVar1,0);
  if (bVar2 != *(byte *)(param_1 + 0xc) >> 7) {
    uVar1 = FUN_147eacaa0(param_2);
    FUN_147ea7e9a(uVar1,param_1);
  }
  return 1;
}



// FUNCTION 147ec29ee FUN_147ec29ee body=157 status=ok
// SIG undefined FUN_147ec29ee(void)

/* WARNING: Removing unreachable block (ram,0x000147ec2a69) */

void FUN_147ec29ee(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *in_stack_00000028;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x2e0))(param_1,&local_28);
  iVar1 = (int)in_stack_00000028[1];
  *(uint *)(in_stack_00000028 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)in_stack_00000028 + 0xc) < iVar1 + 1U) {
    FUN_1447a1bd6(in_stack_00000028,iVar1);
  }
  lVar2 = *in_stack_00000028;
  lVar3 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar3) = 0;
  *(undefined8 *)(lVar2 + lVar3) = local_28;
  *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_20;
  *(undefined4 *)(lVar2 + 0xc + lVar3) = local_20._4_4_;
  local_20 = 0;
  local_28 = 0;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ec2a8c FUN_147ec2a8c body=457 status=ok
// SIG undefined FUN_147ec2a8c(void)

longlong * FUN_147ec2a8c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
  int local_58;
  longlong local_50;
  undefined8 local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x40) == 0) {
LAB_147ec2b50:
    FUN_1400b22c2(param_2,"invalid");
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x38);
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
  }
  else if (lVar2 == 0) goto LAB_147ec2b50;
  lVar2 = FUN_147eac578(lVar2,*(undefined2 *)(param_1 + 0x88));
  FUN_1400b22c2(param_2,"invalid");
  if (lVar2 == 0) goto LAB_147ec2b39;
  lVar1 = *(longlong *)(*(longlong *)(lVar2 + 8) + 0x10);
  lVar4 = *(longlong *)(param_1 + 0x80);
  if (lVar4 == 0) {
LAB_147ec2b32:
    lVar4 = 0;
  }
  else {
    lVar3 = FUN_1411c53f8();
    if (((lVar3 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) goto LAB_147ec2b32;
    lVar4 = *(longlong *)(param_1 + 0x80);
  }
  if (lVar1 == lVar4) {
    FUN_1400021e4(lVar2,&local_40);
    FUN_147ec2c56(param_1 + 0x90,&local_60);
    puVar6 = &DAT_149dfb77a;
    if (local_58 != 0) {
      puVar6 = local_60;
    }
    puVar5 = &DAT_149dfb77a;
    if (local_38 != 0) {
      puVar5 = local_40;
    }
    FUN_140002266(&local_50,L"Check if %s is of class %s",puVar5,puVar6);
    if (&local_50 == param_2) {
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_50;
      local_50 = 0;
      *(undefined4 *)(param_2 + 1) = (undefined4)local_48;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_48._4_4_;
      local_48 = 0;
    }
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_147ec2b39:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147ec2c56 FUN_147ec2c56 body=127 status=ok
// SIG undefined FUN_147ec2c56(void)

undefined8 FUN_147ec2c56(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*param_1 == 0) {
    if (param_1[2] != 0) {
      local_18 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&local_18,param_2);
      if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
    FUN_140056680(param_2,&DAT_149e01fe8);
  }
  else {
    FUN_147eca584(param_1,param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 147ec2cea FUN_147ec2cea body=191 status=ok
// SIG undefined FUN_147ec2cea(void)

void FUN_147ec2cea(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  
  if ((param_2 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x40) = param_2;
  uVar2 = *(uint *)(param_1 + 200);
  if ((uVar2 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x88) = DAT_14cb1f058;
    uVar2 = uVar2 & 0xfffffffe;
    *(uint *)(param_1 + 200) = uVar2;
  }
  if ((uVar2 & 2) != 0) {
    *(undefined8 *)(param_1 + 0xb0) = DAT_14cb1f058;
    *(uint *)(param_1 + 200) = uVar2 & 0xfffffffd;
  }
  if (param_2 == 0) {
    return;
  }
  lVar1 = *(longlong *)(param_2 + 0x38);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  else if (lVar1 == 0) {
    return;
  }
  FUN_14384992e(param_1 + 0x78,lVar1);
  FUN_14384992e(param_1 + 0xa0,lVar1);
  return;
}



// FUNCTION 147ec2daa FUN_147ec2daa body=333 status=ok
// SIG undefined FUN_147ec2daa(void)

byte FUN_147ec2daa(longlong param_1,longlong param_2,double *param_3)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_88 [32];
  double local_68;
  double dStack_60;
  double local_58;
  double local_48;
  double dStack_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_2 + 0x118);
  if (lVar1 == 0) {
    bVar3 = 0;
  }
  else {
    local_38 = DAT_14c8464f0;
    local_48 = DAT_14c8464e0;
    dStack_40 = DAT_14c8464e8;
    local_58 = DAT_14c8464f0;
    local_68 = DAT_14c8464e0;
    dStack_60 = DAT_14c8464e8;
    bVar2 = FUN_147eb085c(lVar1,*(undefined2 *)(param_1 + 0x98));
    bVar3 = FUN_147eb085c(lVar1,*(undefined2 *)(param_1 + 0xc0),&local_68);
    bVar3 = bVar3 & bVar2;
    if (bVar3 == 1) {
      dVar4 = local_58 - local_38;
      dVar8 = dStack_60 - dStack_40;
      dVar6 = local_68 - local_48;
      dVar10 = dVar4 * dVar4 + dVar6 * dVar6 + dVar8 * dVar8;
      if (((dVar10 != 1.0) || (dVar5 = dVar4, dVar7 = dVar6, dVar9 = dVar8, NAN(dVar10))) &&
         (dVar5 = DAT_14c8464f0, dVar7 = DAT_14c8464e0, dVar9 = DAT_14c8464e8,
         9.99999993922529e-09 <= dVar10)) {
        dVar10 = 1.0 / SQRT(dVar10);
        dVar5 = dVar4 * dVar10;
        dVar7 = dVar6 * dVar10;
        dVar9 = dVar8 * dVar10;
      }
      *param_3 = dVar7;
      param_3[1] = dVar9;
      param_3[2] = dVar5;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar3;
}



// FUNCTION 147ec2ef8 FUN_147ec2ef8 body=100 status=ok
// SIG undefined FUN_147ec2ef8(void)

void FUN_147ec2ef8(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0x3ff0000000000000;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_147ec2daa(0,param_2,&local_30);
  *param_3 = (undefined4)local_30;
  param_3[1] = local_30._4_4_;
  param_3[2] = (undefined4)uStack_28;
  param_3[3] = uStack_28._4_4_;
  *(undefined8 *)(param_3 + 4) = uStack_20;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec2f5e FUN_147ec2f5e body=370 status=ok
// SIG undefined FUN_147ec2f5e(void)

void FUN_147ec2f5e(longlong param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  char cVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 1.0;
  local_50 = 0.0;
  uStack_48 = 0;
  cVar3 = FUN_147ec2daa();
  if (cVar3 != '\0') {
    dVar1 = *param_3;
    dVar2 = param_3[1];
    dVar7 = dVar1 * dVar1 + dVar2 * dVar2;
    dVar8 = 0.0;
    if (dVar7 <= 9.99999993922529e-09) {
      dVar7 = 0.0;
    }
    else {
      dVar7 = 1.0 / SQRT(dVar7);
      dVar1 = dVar1 * dVar7;
      dVar2 = dVar2 * dVar7;
      dVar7 = dVar7 * 0.0;
    }
    dVar9 = local_58 * local_58 + local_50 * local_50;
    dVar5 = local_50;
    dVar6 = local_58;
    if (9.99999993922529e-09 < dVar9) {
      dVar8 = 1.0 / SQRT(dVar9);
      dVar6 = local_58 * dVar8;
      dVar5 = local_50 * dVar8;
      dVar8 = dVar8 * 0.0;
    }
    dVar1 = dVar2 * dVar5 + dVar1 * dVar6 + dVar7 * dVar8;
    fVar4 = (float)FUN_147ec0da0(param_1 + 0x68,param_2);
    fVar4 = cosf(fVar4 * 0.017453292);
    if ((dVar1 < (double)fVar4) ||
       (((double)fVar4 < dVar1 && ((*(uint *)(param_1 + 0x60) & 0x80) != 0)))) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ec30ee FUN_147ec30ee body=419 status=ok
// SIG undefined FUN_147ec30ee(void)

undefined8 FUN_147ec30ee(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined2 *local_b0;
  undefined2 *local_a8;
  undefined2 *local_98;
  int local_90;
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1400021e4(param_1 + 0xb0,&local_58);
  puVar4 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar4 = local_58;
  }
  FUN_1400021e4(param_1 + 0x88,&local_68);
  puVar3 = &DAT_149dfb77a;
  if (local_60 != 0) {
    puVar3 = local_68;
  }
  if (*(longlong *)(param_1 + 0x68) == 0) {
    FUN_140002266(&local_78,L"%.2f",(double)*(float *)(param_1 + 0x74));
  }
  else {
    FUN_147eca584(param_1 + 0x68,&local_78);
  }
  puVar2 = &DAT_149dfb77a;
  if (local_70 != 0) {
    puVar2 = local_78;
  }
  FUN_1400021e4(param_1 + 0xb0,&local_88);
  puVar1 = &DAT_149dfb77a;
  if (local_80 != 0) {
    puVar1 = local_88;
  }
  FUN_147ebb5ca(param_1,&local_98);
  puVar5 = &DAT_149dfb77a;
  if (local_90 != 0) {
    puVar5 = local_98;
  }
  local_b8 = puVar2;
  local_b0 = puVar3;
  local_a8 = puVar4;
  FUN_140002266(param_2,L"%s: %s in +- %s degree cone of initial direction [%s-%s]",puVar5,puVar1);
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec3292 FUN_147ec3292 body=544 status=ok
// SIG undefined FUN_147ec3292(void)

/* WARNING: Removing unreachable block (ram,0x000147ec34a9) */

void FUN_147ec3292(longlong param_1,undefined8 param_2,double *param_3,undefined8 param_4,
                  longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  double local_58;
  double local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 1.0;
  local_50 = 0.0;
  uStack_48 = 0;
  cVar3 = FUN_147ec2daa();
  if (cVar3 != '\0') {
    dVar7 = *param_3;
    dVar9 = param_3[1];
    dVar11 = dVar7 * dVar7 + dVar9 * dVar9;
    dVar12 = 0.0;
    if (dVar11 <= 9.99999993922529e-09) {
      dVar11 = 0.0;
    }
    else {
      dVar11 = 1.0 / SQRT(dVar11);
      dVar7 = dVar7 * dVar11;
      dVar9 = dVar9 * dVar11;
      dVar11 = dVar11 * 0.0;
    }
    dVar13 = local_58 * local_58 + local_50 * local_50;
    dVar8 = local_50;
    dVar10 = local_58;
    if (9.99999993922529e-09 < dVar13) {
      dVar12 = 1.0 / SQRT(dVar13);
      dVar10 = local_58 * dVar12;
      dVar8 = local_50 * dVar12;
      dVar12 = dVar12 * 0.0;
    }
    dVar7 = dVar9 * dVar8 + dVar7 * dVar10 + dVar11 * dVar12;
    dVar9 = dVar7;
    if (1.0 <= dVar7) {
      dVar9 = 1.0;
    }
    dVar9 = acos((double)(-(ulonglong)(dVar7 < -1.0) & 0xbff0000000000000 |
                         ~-(ulonglong)(dVar7 < -1.0) & (ulonglong)dVar9));
    fVar6 = (float)FUN_147ec0da0(param_1 + 0x68,param_2);
    fVar6 = cosf(fVar6 * 0.017453292);
    pwVar5 = L"inside";
    if (dVar7 < (double)fVar6) {
      pwVar5 = L"outside";
    }
    FUN_140002266(&local_68,L"Angle: %.0f (%s cone)",dVar9 * 57.29577951308232,pwVar5);
    iVar1 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(param_5,iVar1);
    }
    lVar2 = *param_5;
    lVar4 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar4) = 0;
    *(undefined8 *)(lVar2 + lVar4) = local_68;
    local_68 = 0;
    *(undefined4 *)(lVar2 + 8 + lVar4) = (undefined4)local_60;
    *(undefined4 *)(lVar2 + 0xc + lVar4) = local_60._4_4_;
    local_60 = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ec34de FUN_147ec34de body=346 status=ok
// SIG undefined FUN_147ec34de(void)

void FUN_147ec34de(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  double dVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  
  lVar1 = *(longlong *)
           (*(longlong *)(*param_2 + 0x168) + 0x30 + (ulonglong)*(ushort *)(*param_2 + 0x2d8) * 0x58
           );
  uVar8 = (ulonglong)*(ushort *)((longlong)param_1 + 0x52);
  lVar7 = param_1[9];
  uVar9 = (ulonglong)*(ushort *)(lVar7 + 0x52);
  lVar6 = FUN_145b6127e();
  lVar7 = *(longlong *)(lVar7 + 0x10);
  if ((*(int *)(lVar7 + 0x38) < *(int *)(lVar6 + 0x38)) ||
     (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
      lVar6 + 0x30)) {
    if ((int)*(char *)(lVar1 + uVar9) != (uint)*(byte *)((longlong)param_1 + 0x59))
    goto LAB_147ec35bb;
  }
  else if (*(char *)(lVar1 + uVar9) == -1) {
LAB_147ec35bb:
    uVar4 = FUN_147ec3638(param_1 + 0xd,*param_2);
    *(undefined1 *)(lVar1 + 4 + uVar8) = uVar4;
    lVar7 = (**(code **)(*param_1 + 0x180))(param_1);
    *(undefined8 *)(lVar1 + 8 + uVar8) = *(undefined8 *)(lVar7 + 0x6d0);
  }
  if ((char)param_1[0xf] == '\x01') {
    iVar5 = *(int *)((longlong)param_2 + 0x34);
    if (iVar5 != *(int *)(lVar1 + uVar8)) {
      fVar10 = (float)FUN_147ec0da0((longlong)param_1 + 0x7c,*param_2);
      if ((fVar10 < 0.0) ||
         (dVar2 = (double)fVar10 + *(double *)(lVar1 + 8 + uVar8),
         lVar7 = (**(code **)(*param_1 + 0x180))(param_1),
         *(double *)(lVar7 + 0x6d0) <= dVar2 && dVar2 != *(double *)(lVar7 + 0x6d0))) {
        *(undefined4 *)(lVar1 + uVar8) = *(undefined4 *)((longlong)param_2 + 0x34);
        goto LAB_147ec358a;
      }
      iVar5 = *(int *)((longlong)param_2 + 0x34);
    }
    *(int *)(lVar1 + uVar8) = iVar5;
    return;
  }
  cVar3 = *(char *)(lVar1 + 4 + uVar8);
  if (cVar3 == '\0') {
    return;
  }
  cVar3 = cVar3 + -1;
  *(char *)(lVar1 + 4 + uVar8) = cVar3;
  if (cVar3 == '\0') {
    return;
  }
LAB_147ec358a:
                    /* WARNING: Could not recover jumptable at 0x000147ec35b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1[9] + 0x2f0))
            ((longlong *)param_1[9],param_2,*(undefined1 *)((longlong)param_1 + 0x59));
  return;
}



// FUNCTION 147ec3638 FUN_147ec3638 body=121 status=ok
// SIG undefined FUN_147ec3638(void)

ulonglong FUN_147ec3638(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  uint local_28;
  char local_24;
  ulonglong local_20;
  
  uVar2 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_2 + 0x118);
  local_20 = uVar2;
  if (lVar1 != 0) {
    if ((*param_1 == 0) || (FUN_147ed5ce7(&local_28,lVar1,param_1,param_1 + 1), local_24 != '\x01'))
    {
      uVar2 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
    }
    else {
      uVar2 = (ulonglong)local_28;
    }
  }
  if (lVar1 == 0) {
    uVar2 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 147ec36b2 FUN_147ec36b2 body=390 status=ok
// SIG undefined FUN_147ec36b2(void)

undefined8 FUN_147ec36b2(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x78) == '\x01') {
    if (*(longlong *)(param_1 + 0x7c) == 0) {
      if (*(float *)(param_1 + 0x88) <= 0.0) {
        FUN_147ebb5ca(param_1,&local_40);
        puVar2 = local_40;
        if (local_38 == 0) {
          puVar2 = &DAT_149dfb77a;
        }
        FUN_140002266(param_2,L"%s: infinite",puVar2);
        goto LAB_147ec3780;
      }
      FUN_140002266(&local_40,L"%.2f",(double)*(float *)(param_1 + 0x88));
    }
    else {
      FUN_147eca584(param_1 + 0x7c,&local_40);
    }
    puVar2 = &DAT_149dfb77a;
    if (local_38 != 0) {
      puVar2 = local_40;
    }
    FUN_147ebb5ca(param_1,&local_50);
    puVar3 = &DAT_149dfb77a;
    if (local_48 != 0) {
      puVar3 = local_50;
    }
    pwVar1 = L"%s: loop for %s seconds";
  }
  else {
    FUN_147ed1a14(param_1 + 0x68,&local_40,param_1 + 0x74);
    puVar2 = &DAT_149dfb77a;
    if (local_38 != 0) {
      puVar2 = local_40;
    }
    FUN_147ebb5ca(param_1,&local_50);
    puVar3 = &DAT_149dfb77a;
    if (local_48 != 0) {
      puVar3 = local_50;
    }
    pwVar1 = L"%s: %s loops";
  }
  FUN_140002266(param_2,pwVar1,puVar3,puVar2);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_147ec3780:
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147ec383a FUN_147ec383a body=437 status=ok
// SIG undefined FUN_147ec383a(void)

/* WARNING: Removing unreachable block (ram,0x000147ec39e1) */

void FUN_147ec383a(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *puVar4;
  float fVar5;
  double dVar6;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined2 *local_60;
  int local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = param_5;
  FUN_147eba12c();
  fVar5 = (float)FUN_147ec0da0((longlong)param_1 + 0x7c,param_2);
  if ((char)param_1[0xf] == '\0') {
    FUN_140002266(&local_50,L"loops remaining: %d",*(undefined1 *)(param_3 + 4));
    iVar1 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(param_5,iVar1);
    }
    lVar2 = *param_5;
    lVar3 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar3) = 0;
    *(undefined8 *)(lVar2 + lVar3) = local_50;
    *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_48;
    *(undefined4 *)(lVar2 + 0xc + lVar3) = local_48._4_4_;
    local_60 = (undefined2 *)0x0;
  }
  else {
    if (fVar5 <= 0.0) goto LAB_147ec3950;
    lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
    dVar6 = (*(double *)(param_3 + 8) - *(double *)(lVar2 + 0x6d0)) + (double)fVar5;
    if (dVar6 <= 0.0) {
      dVar6 = 0.0;
    }
    FUN_1406112c4(&local_60,dVar6,1);
    puVar4 = local_60;
    if (local_58 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_50,L"time remaining: %s",puVar4);
    iVar1 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(param_5,iVar1);
    }
    lVar2 = *param_5;
    lVar3 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar3) = 0;
    *(undefined8 *)(lVar2 + lVar3) = local_50;
    *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_48;
    *(undefined4 *)(lVar2 + 0xc + lVar3) = local_48._4_4_;
  }
  local_48 = 0;
  local_50 = 0;
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_147ec3950:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec3a40 FUN_147ec3a40 body=72 status=ok
// SIG undefined FUN_147ec3a40(void)

void FUN_147ec3a40(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_2;
  uVar2 = FUN_147ec26d0(param_1 + 0x80,uVar1);
  uVar3 = FUN_147ec0da0(param_1 + 0x70,*param_2);
  FUN_147ea61be(uVar1,*(undefined8 *)(param_1 + 0x68),uVar3,uVar2);
  return;
}



// FUNCTION 147ec3a88 FUN_147ec3a88 body=231 status=ok
// SIG undefined FUN_147ec3a88(void)

undefined8 FUN_147ec3a88(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x70) == 0) {
    FUN_140002266(&local_40,L"%.2f",(double)*(float *)(param_1 + 0x7c));
  }
  else {
    FUN_147eca584(param_1 + 0x70,&local_40);
  }
  puVar1 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar1 = local_40;
  }
  FUN_1400021e4(param_1 + 0x68,&local_50);
  puVar2 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar2 = local_50;
  }
  FUN_140002266(param_2,L"%s: set to %s s after execution",puVar2,puVar1);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec3b74 FUN_147ec3b74 body=40 status=ok
// SIG undefined FUN_147ec3b74(void)

void FUN_147ec3b74(longlong param_1)

{
  FUN_1446e0b6e();
  *(byte *)(param_1 + 0x58) =
       *(byte *)(param_1 + 0x58) & 0xfb | (*(char *)(param_1 + 100) != '\0') << 2;
  return;
}



// FUNCTION 147ec3b9c FUN_147ec3b9c body=91 status=ok
// SIG undefined FUN_147ec3b9c(void)

bool FUN_147ec3b9c(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  double extraout_XMM0_Qa;
  
  FUN_147ea63b6(param_2,*(undefined8 *)(param_1 + 0x68));
  bVar1 = true;
  if ((extraout_XMM0_Qa != 0.0) || (NAN(extraout_XMM0_Qa))) {
    lVar2 = *(longlong *)(param_2 + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6(param_2);
    }
    bVar1 = extraout_XMM0_Qa <= *(double *)(lVar2 + 0x6d0);
  }
  return bVar1;
}



// FUNCTION 147ec3c12 FUN_147ec3c12 body=134 status=ok
// SIG undefined FUN_147ec3c12(void)

void FUN_147ec3c12(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pbVar1 = (byte *)(*(longlong *)
                     (*(longlong *)(*param_2 + 0x168) + 0x30 +
                     (ulonglong)*(ushort *)(*param_2 + 0x2d8) * 0x58) +
                   (ulonglong)*(ushort *)(param_1 + 0x52));
  *pbVar1 = *pbVar1 & 0xfe;
  cVar3 = FUN_147ec26d0(param_1 + 0x90,*param_2);
  if (cVar3 == '\0') {
    return;
  }
  lVar2 = *param_2;
  uVar4 = FUN_147ec26d0(param_1 + 0x80,lVar2);
  uVar5 = FUN_147ec0da0(param_1 + 0x70,*param_2);
  FUN_147ea61be(lVar2,*(undefined8 *)(param_1 + 0x68),uVar5,uVar4);
  return;
}



// FUNCTION 147ec3c98 FUN_147ec3c98 body=60 status=ok
// SIG undefined FUN_147ec3c98(void)

void FUN_147ec3c98(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  char cVar1;
  
  if ((*param_3 & 1) == 0) {
    cVar1 = FUN_147ec3b9c();
    if (cVar1 != '\0') {
      *param_3 = *param_3 | 1;
      FUN_147ea7e9a(param_2,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 147ec3cd4 FUN_147ec3cd4 body=344 status=ok
// SIG undefined FUN_147ec3cd4(void)

undefined8 FUN_147ec3cd4(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  undefined2 *local_90;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_147eaa2f6(&local_50,1);
  puVar2 = local_50;
  if (local_48 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  if (*(longlong *)(param_1 + 0x70) == 0) {
    FUN_140002266(&local_60,L"%.2f",(double)*(float *)(param_1 + 0x7c));
  }
  else {
    FUN_147eca584(param_1 + 0x70,&local_60);
  }
  puVar3 = &DAT_149dfb77a;
  if (local_58 != 0) {
    puVar3 = local_60;
  }
  FUN_1400021e4(param_1 + 0x68,&local_70);
  puVar4 = &DAT_149dfb77a;
  if (local_68 != 0) {
    puVar4 = local_70;
  }
  FUN_147ebb5ca(param_1,&local_80);
  puVar1 = &DAT_149dfb77a;
  if (local_78 != 0) {
    puVar1 = local_80;
  }
  local_98 = puVar3;
  local_90 = puVar2;
  FUN_140002266(param_2,L"%s %s: lock for %s s after execution and return %s",puVar1,puVar4);
  if (local_80 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147ec3e2e FUN_147ec3e2e body=393 status=ok
// SIG undefined FUN_147ec3e2e(void)

/* WARNING: Removing unreachable block (ram,0x000147ec3f9b) */

void FUN_147ec3e2e(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined2 *puVar7;
  float fVar8;
  double dVar9;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined2 *local_70;
  int local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = param_5;
  FUN_147eba12c();
  dVar9 = (double)FUN_147ea63b6(param_2,*(undefined8 *)(param_1 + 0x68));
  uVar2 = local_60;
  uVar3 = local_58;
  if (0.0 < dVar9) {
    lVar4 = *(longlong *)(param_2 + 0xb0);
    if (lVar4 == 0) {
      lVar4 = FUN_1448abda6(param_2);
    }
    dVar9 = *(double *)(lVar4 + 0x6d0) - dVar9;
    fVar8 = (float)FUN_147ec0da0(param_1 + 0x70,param_2);
    uVar2 = local_60;
    uVar3 = local_58;
    if (dVar9 < (double)fVar8) {
      fVar8 = (float)FUN_147ec0da0(param_1 + 0x70,param_2);
      FUN_1406112c4(&local_70,(double)fVar8 - dVar9,1);
      puVar7 = local_70;
      if (local_68 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      pwVar6 = L"restart";
      if (*(char *)(param_1 + 100) == '\0') {
        pwVar6 = L"unlock";
      }
      FUN_140002266(&local_60,L"%s in %ss",pwVar6,puVar7);
      iVar1 = (int)param_5[1];
      *(uint *)(param_5 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_5 + 0xc) < iVar1 + 1U) {
        FUN_1447a1bd6(param_5,iVar1);
      }
      lVar4 = *param_5;
      lVar5 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar4 + lVar5) = 0;
      *(undefined8 *)(lVar4 + lVar5) = local_60;
      local_60 = 0;
      uVar2 = local_60;
      *(undefined4 *)(lVar4 + 8 + lVar5) = (undefined4)local_58;
      *(undefined4 *)(lVar4 + 0xc + lVar5) = local_58._4_4_;
      local_58 = 0;
      uVar3 = local_58;
      local_58 = 0;
      local_60 = 0;
      if (local_70 != (undefined2 *)0x0) {
        FUN_1400020a8();
        uVar2 = local_60;
        uVar3 = local_58;
      }
    }
  }
  local_58 = uVar3;
  local_60 = uVar2;
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec3fd6 FUN_147ec3fd6 body=85 status=ok
// SIG undefined FUN_147ec3fd6(void)

void FUN_147ec3fd6(longlong *param_1,undefined8 param_2,longlong param_3)

{
  ushort uVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  uVar3 = FUN_147ec0da0(param_1 + 0xd);
  if ((*(byte *)(param_1 + 0xb) & 8) != 0) {
    uVar1 = (**(code **)(*param_1 + 0x2d8))(param_1);
    lVar2 = 0;
    if (uVar1 != 0) {
      lVar2 = param_3 - (ulonglong)(uVar1 + 3 & 0xfffffffc);
    }
    *(undefined4 *)(lVar2 + 4) = uVar3;
  }
  return;
}



// FUNCTION 147ec4038 FUN_147ec4038 body=146 status=ok
// SIG undefined FUN_147ec4038(void)

void FUN_147ec4038(longlong *param_1,undefined8 param_2,undefined1 *param_3,float param_4)

{
  ushort uVar1;
  longlong lVar2;
  float fVar3;
  
  fVar3 = (float)FUN_147ec0da0(param_1 + 0xd);
  if ((param_4 < fVar3) && (0.0001 < ABS(param_4 - fVar3))) {
    (**(code **)(*param_1 + 0x2d8))(param_1);
  }
  *param_3 = 1;
  if ((*(byte *)(param_1 + 0xb) & 8) != 0) {
    uVar1 = (**(code **)(*param_1 + 0x2d8))(param_1);
    lVar2 = 0;
    if (uVar1 != 0) {
      lVar2 = (longlong)param_3 - (ulonglong)(uVar1 + 3 & 0xfffffffc);
    }
    *(undefined4 *)(lVar2 + 4) = 0x7f7fffff;
  }
  FUN_147ea7e9a(param_2,param_1);
  return;
}



// FUNCTION 147ec40ca FUN_147ec40ca body=277 status=ok
// SIG undefined FUN_147ec40ca(void)

undefined8 FUN_147ec40ca(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x68) == 0) {
    FUN_140002266(&local_48,L"%.2f",(double)*(float *)(param_1 + 0x74));
  }
  else {
    FUN_147eca584(param_1 + 0x68,&local_48);
  }
  puVar2 = &DAT_149dfb77a;
  if (local_40 != 0) {
    puVar2 = local_48;
  }
  FUN_147eaa2f6(&local_58,1);
  puVar3 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar3 = local_58;
  }
  FUN_147ebb5ca(param_1,&local_68);
  puVar1 = &DAT_149dfb77a;
  if (local_60 != 0) {
    puVar1 = local_68;
  }
  local_78 = puVar2;
  FUN_140002266(param_2,L"%s: %s after %s s",puVar1,puVar3);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec41e0 FUN_147ec41e0 body=381 status=ok
// SIG undefined FUN_147ec41e0(void)

/* WARNING: Removing unreachable block (ram,0x000147ec4307) */

void FUN_147ec41e0(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  int iVar1;
  ushort uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = param_5;
  FUN_147eba12c();
  uVar2 = (**(code **)(*param_1 + 0x2d8))(param_1);
  lVar6 = 0;
  if (uVar2 != 0) {
    lVar6 = param_3 - (ulonglong)(uVar2 + 3 & 0xfffffffc);
  }
  if ((*(longlong *)(param_2 + 0xb0) != 0) || (lVar5 = FUN_1448abda6(param_2), lVar5 != 0)) {
    fVar7 = *(float *)(lVar6 + 4);
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    FUN_1406112c4(&local_48,(double)fVar7,1);
    puVar4 = &DAT_149dfb77a;
    if (local_40 != 0) {
      puVar4 = local_48;
    }
    FUN_147eaa2f6(&local_58,1);
    puVar3 = &DAT_149dfb77a;
    if (local_50 != 0) {
      puVar3 = local_58;
    }
    FUN_140002266(&local_38,L"%s in %ss",puVar3,puVar4);
    iVar1 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(param_5,iVar1);
    }
    lVar6 = *param_5;
    lVar5 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar6 + lVar5) = 0;
    *(undefined8 *)(lVar6 + lVar5) = local_38;
    *(undefined4 *)(lVar6 + 8 + lVar5) = (undefined4)local_30;
    *(undefined4 *)(lVar6 + 0xc + lVar5) = local_30._4_4_;
    local_30 = 0;
    local_38 = 0;
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec4362 FUN_147ec4362 body=123 status=ok
// SIG undefined FUN_147ec4362(void)

void FUN_147ec4362(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  
  bVar2 = DAT_14c950c29;
  if (param_2 == 0 || DAT_14c950c29 != 1) {
    *(longlong *)(param_1 + 0x40) = param_2;
    if (param_2 == 0) {
      return;
    }
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 0x40) = param_2;
    bVar2 = DAT_14c950c29;
  }
  lVar1 = *(longlong *)(param_2 + 0x38);
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c(lVar1);
  }
  else if (lVar1 == 0) {
    return;
  }
  FUN_14384992e(param_1 + 0x70,lVar1);
  return;
}



// FUNCTION 147ec43e2 FUN_147ec43e2 body=37 status=ok
// SIG undefined FUN_147ec43e2(void)

void FUN_147ec43e2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147ec4408();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147ec4408 FUN_147ec4408 body=69 status=ok
// SIG undefined FUN_147ec4408(void)

void FUN_147ec4408(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar1 = FUN_14113c790();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_147ec443c;
  }
  lVar2 = 0;
LAB_147ec443c:
  FUN_147ea75be(lVar2,param_1);
  return;
}



// FUNCTION 147ec4460 FUN_147ec4460 body=81 status=ok
// SIG undefined FUN_147ec4460(void)

void FUN_147ec4460(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x40) = param_2;
  lVar1 = *(longlong *)(param_2 + 0x38);
  if (lVar1 == 0) {
    return;
  }
  uVar2 = FUN_1459eb55e();
  FUN_147eb382d(param_1,uVar2,lVar1);
  return;
}



// FUNCTION 147ec44b2 FUN_147ec44b2 body=113 status=ok
// SIG undefined FUN_147ec44b2(void)

void FUN_147ec44b2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x78) = param_2;
    if (param_2 != 0) goto LAB_147ec44d5;
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 0x78) = param_2;
LAB_147ec44d5:
    lVar1 = FUN_14104c5c4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      goto LAB_147ec44f7;
    }
  }
  param_2 = 0;
LAB_147ec44f7:
  *(longlong *)(param_1 + 0x70) = param_2;
  return;
}



// FUNCTION 147ec4524 FUN_147ec4524 body=160 status=ok
// SIG undefined FUN_147ec4524(void)

void FUN_147ec4524(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = param_1[0xe];
  if ((*(uint *)(param_1 + 0x12) & 0x20) == 0 || lVar1 == 0) {
    if ((*(uint *)(param_1 + 0x12) & 0x10) == 0) goto LAB_147ec45a7;
    uVar2 = DAT_14cb1f610;
    local_28 = param_1[0xf];
  }
  else {
    local_20 = *(undefined8 *)(lVar1 + 0x3d0);
    uVar2 = DAT_14cb1f620;
    local_28 = lVar1;
  }
  uVar2 = FUN_14477b072(param_1,uVar2);
  (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_28);
LAB_147ec45a7:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec45c6 FUN_147ec45c6 body=169 status=ok
// SIG undefined FUN_147ec45c6(void)

void FUN_147ec45c6(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *(uint *)(param_1 + 0x12);
  if ((uVar1 & 0x300) != 0) {
    lVar2 = param_1[0xe];
    if ((uVar1 >> 9 & 1) == 0 || lVar2 == 0) {
      if ((uVar1 >> 8 & 1) == 0) goto LAB_147ec4652;
      uVar3 = DAT_14cb1f650;
      local_28 = param_1[0xf];
    }
    else {
      local_20 = *(undefined8 *)(lVar2 + 0x3d0);
      uVar3 = DAT_14cb1f660;
      local_28 = lVar2;
    }
    uVar3 = FUN_14477b072(param_1,uVar3);
    (**(code **)(*param_1 + 0x248))(param_1,uVar3,&local_28);
  }
LAB_147ec4652:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec4670 FUN_147ec4670 body=192 status=ok
// SIG undefined FUN_147ec4670(void)

void FUN_147ec4670(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x318))();
  lVar1 = param_1[0xe];
  if ((*(uint *)(param_1 + 0x12) & 8) == 0 || lVar1 == 0) {
    if ((*(uint *)(param_1 + 0x12) & 4) == 0) goto LAB_147ec470e;
    local_40 = CONCAT44(local_40._4_4_,param_4);
    uVar2 = DAT_14cb1f670;
    local_48 = param_1[0xf];
  }
  else {
    local_40 = *(undefined8 *)(lVar1 + 0x3d0);
    uVar2 = DAT_14cb1f680;
    local_48 = lVar1;
    local_38 = param_4;
  }
  uVar2 = FUN_14477b072(param_1,uVar2);
  (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_48);
LAB_147ec470e:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec4732 FUN_147ec4732 body=629 status=ok
// SIG undefined FUN_147ec4732(void)

undefined8 * FUN_147ec4732(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  wchar_t *pwVar7;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  plVar2 = *(longlong **)(param_1 + 0x10);
  lVar5 = plVar2[0x22];
  if (lVar5 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar5 = plVar2[0x22];
    if (lVar5 == 0) goto LAB_147ec479b;
  }
  uVar1 = *(uint *)(param_1 + 0x90);
  if ((uVar1 & 2) == 0) {
    if ((uVar1 & 0xc) != 0) {
      FUN_147ebe4ea(param_1,&local_50);
      iVar3 = local_48 - 1;
      if (local_48 == 0) {
        iVar3 = 0;
      }
      FUN_1400020e8(param_2,local_50,iVar3);
      if (local_50 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_140002184(param_2,10);
  }
  else {
    local_70 = L"Search Start";
    if ((uVar1 & 0x300) == 0) {
      local_70 = L"No Search Start";
    }
    local_78 = L"Deactivation";
    if ((uVar1 & 0xc0) == 0) {
      local_78 = L"No Deactivation";
    }
    pwVar7 = L"Activation";
    if ((uVar1 & 0x30) == 0) {
      pwVar7 = L"No Activation";
    }
    if ((uVar1 & 0xc) == 0) {
      FUN_140002266(&local_50,L"%s, %s, %s, %s\n",L"No tick",pwVar7);
      iVar3 = local_48 - 1;
      if (local_48 == 0) {
        iVar3 = 0;
      }
      FUN_1400020e8(param_2,local_50,iVar3);
      local_60 = local_50;
    }
    else {
      FUN_147ebe4ea(param_1,&local_60);
      puVar6 = local_60;
      if (local_58 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      FUN_140002266(&local_50,L"%s, %s, %s, %s\n",puVar6,pwVar7);
      iVar3 = local_48 - 1;
      if (local_48 == 0) {
        iVar3 = 0;
      }
      FUN_1400020e8(param_2,local_50,iVar3);
      if (local_50 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((*(byte *)(param_1 + 0x90) & 1) != 0) {
    uVar4 = FUN_1459eb55e();
    FUN_147eb39a3(&local_50,param_1,uVar4,lVar5 + 0x80);
    if (1 < local_48) {
      FUN_1400020e8(param_2,&DAT_149e01f72,1);
      iVar3 = local_48 - 1;
      if (local_48 == 0) {
        iVar3 = 0;
      }
      FUN_1400020e8(param_2,local_50,iVar3);
    }
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_147ec479b:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147ec49a8 FUN_147ec49a8 body=110 status=ok
// SIG undefined FUN_147ec49a8(void)

void FUN_147ec49a8(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 in_stack_00000028;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
    if (lVar2 == 0) {
      return;
    }
  }
  if (*(int *)(lVar2 + 0x88) == 0) {
    return;
  }
  FUN_1459eb55e();
  FUN_147eb3c56(param_1,lVar2 + 0x80,in_stack_00000028);
  return;
}



// FUNCTION 147ec4a28 FUN_147ec4a28 body=570 status=ok
// SIG undefined FUN_147ec4a28(void)

void FUN_147ec4a28(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  undefined8 **local_88;
  undefined8 *local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_3 = 0;
  uVar6 = DAT_14cb1f0a8._4_4_;
  uVar5 = (undefined4)DAT_14cb1f0a8;
  uVar4 = DAT_14cb1f0a0._4_4_;
  *(undefined4 *)(param_3 + 1) = (undefined4)DAT_14cb1f0a0;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar4;
  *(undefined4 *)(param_3 + 2) = uVar5;
  *(undefined4 *)((longlong)param_3 + 0x14) = uVar6;
  param_3[3] = DAT_14cb1f0b0;
  *(undefined1 *)(param_3 + 4) = 0;
  lVar2 = *(longlong *)(param_2 + 0x118);
  plVar3 = *(longlong **)(param_2 + 0x120);
  if (lVar2 == 0 || plVar3 == (longlong *)0x0) goto LAB_147ec4a89;
  lVar9 = *(longlong *)(param_1 + 0x88);
  if (lVar9 == 0) {
LAB_147ec4ae9:
    lVar9 = 0;
  }
  else {
    lVar8 = FUN_1411c53f8();
    if (((lVar8 == 0) || (*(int *)(lVar9 + 0x38) < *(int *)(lVar8 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
        lVar8 + 0x30)) goto LAB_147ec4ae9;
    lVar9 = *(longlong *)(param_1 + 0x88);
  }
  lVar8 = FUN_1412dbfa6();
  if (lVar9 == lVar8) {
    lVar9 = FUN_147eb9650(lVar2,*(undefined2 *)(param_1 + 0x90));
    if (lVar9 != 0) {
      lVar8 = FUN_144a6c4d8();
      if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8
           ) == lVar8 + 0x30)) {
        (**(code **)(*plVar3 + 0x828))(plVar3,lVar9,*(undefined1 *)(param_1 + 0x98));
        *param_3 = lVar9;
        *(undefined1 *)(param_3 + 4) = 1;
      }
    }
  }
  else {
    FUN_147eb02a8(lVar2,&local_48,*(undefined2 *)(param_1 + 0x90));
    local_58 = local_38;
    local_68 = local_48;
    uStack_64 = uStack_44;
    uStack_60 = uStack_40;
    uStack_5c = uStack_3c;
    (**(code **)(*plVar3 + 0x820))(plVar3,&local_68,*(undefined1 *)(param_1 + 0x98));
    param_3[3] = local_38;
    *(undefined4 *)(param_3 + 1) = local_48;
    *(undefined4 *)((longlong)param_3 + 0xc) = uStack_44;
    *(undefined4 *)(param_3 + 2) = uStack_40;
    *(undefined4 *)((longlong)param_3 + 0x14) = uStack_3c;
  }
  uVar1 = *(undefined2 *)(param_1 + 0x90);
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  FUN_1446efa72(&local_78,0,3,0x10);
  puVar7 = local_78;
  local_70 = 3;
  *local_78 = &PTR_LAB_14ac04230;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_78[2] = lVar8;
  *local_78 = &PTR_FUN_14ac04380;
  local_78[3] = 0;
  FUN_14485c47a(local_78 + 3,param_1);
  puVar7[4] = FUN_147ec4c64;
  *(undefined4 *)(puVar7 + 5) = 0;
  local_88 = &local_78;
  FUN_147eacb26(lVar2,&local_48,uVar1,param_1);
LAB_147ec4a89:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec4c64 FUN_147ec4c64 body=496 status=ok
// SIG undefined FUN_147ec4c64(void)

undefined8 FUN_147ec4c64(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = FUN_147eacaa0(param_2);
  if (lVar6 == 0) goto LAB_147ec4cc5;
  lVar7 = FUN_14113c790();
  if (((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
       != lVar7 + 0x30)) || (plVar1 = *(longlong **)(lVar6 + 0x120), plVar1 == (longlong *)0x0))
  goto LAB_147ec4cc5;
  uVar5 = FUN_147ea72f6(lVar6,param_1);
  if (((int)uVar5 < 0) || (*(int *)(lVar6 + 0x170) <= (int)uVar5)) {
    plVar8 = (longlong *)0x0;
  }
  else {
    plVar8 = (longlong *)
             ((ulonglong)*(ushort *)(param_1 + 0x52) +
             *(longlong *)(*(longlong *)(lVar6 + 0x168) + 0x30 + (ulonglong)uVar5 * 0x58));
  }
  *plVar8 = 0;
  uVar4 = DAT_14cb1f0a8._4_4_;
  uVar3 = (undefined4)DAT_14cb1f0a8;
  uVar2 = DAT_14cb1f0a0._4_4_;
  *(undefined4 *)(plVar8 + 1) = (undefined4)DAT_14cb1f0a0;
  *(undefined4 *)((longlong)plVar8 + 0xc) = uVar2;
  *(undefined4 *)(plVar8 + 2) = uVar3;
  *(undefined4 *)((longlong)plVar8 + 0x14) = uVar4;
  plVar8[3] = DAT_14cb1f0b0;
  *(undefined1 *)(plVar8 + 4) = 0;
  (**(code **)(*plVar1 + 0x830))(plVar1,*(undefined1 *)(param_1 + 0x98));
  lVar6 = *(longlong *)(param_1 + 0x88);
  if (lVar6 == 0) {
LAB_147ec4d90:
    lVar6 = 0;
  }
  else {
    lVar7 = FUN_1411c53f8();
    if (((lVar7 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
        lVar7 + 0x30)) goto LAB_147ec4d90;
    lVar6 = *(longlong *)(param_1 + 0x88);
  }
  lVar7 = FUN_1412dbfa6();
  if (lVar6 == lVar7) {
    lVar6 = FUN_147eb9650(param_2,param_3);
    if (lVar6 != 0) {
      lVar7 = FUN_144a6c4d8();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) == lVar7 + 0x30)) {
        (**(code **)(*plVar1 + 0x828))(plVar1,lVar6,*(undefined1 *)(param_1 + 0x98));
        *plVar8 = lVar6;
        *(undefined1 *)(plVar8 + 4) = 1;
      }
    }
  }
  else {
    FUN_147eb02a8(param_2,&local_50,param_3);
    local_58 = local_40;
    local_68 = local_50;
    uStack_64 = uStack_4c;
    uStack_60 = uStack_48;
    uStack_5c = uStack_44;
    (**(code **)(*plVar1 + 0x820))(plVar1,&local_68,*(undefined1 *)(param_1 + 0x98));
    plVar8[3] = local_40;
    *(undefined4 *)(plVar8 + 1) = local_50;
    *(undefined4 *)((longlong)plVar8 + 0xc) = uStack_4c;
    *(undefined4 *)(plVar8 + 2) = uStack_48;
    *(undefined4 *)((longlong)plVar8 + 0x14) = uStack_44;
  }
LAB_147ec4cc5:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec4e56 FUN_147ec4e56 body=244 status=ok
// SIG undefined FUN_147ec4e56(void)

void FUN_147ec4e56(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_2 + 0x120);
  if (plVar1 == (longlong *)0x0) goto LAB_147ec4f14;
  if ((char)param_3[4] == '\x01') {
    lVar2 = *param_3;
    if ((int)(uint)*(byte *)(param_1 + 0x98) < (int)plVar1[0x8b]) {
      lVar3 = FUN_14479d2ce((ulonglong)*(byte *)(param_1 + 0x98) * 0x20 + plVar1[0x8a]);
    }
    else {
      lVar3 = 0;
    }
    if (lVar2 != lVar3) goto LAB_147ec4f14;
  }
  else {
    FUN_147ea331e(plVar1,&local_48,*(undefined1 *)(param_1 + 0x98));
    if (((((double)param_3[1] != local_48) || (NAN((double)param_3[1]) || NAN(local_48))) ||
        ((double)param_3[2] != local_40)) || (NAN((double)param_3[2]) || NAN(local_40)))
    goto LAB_147ec4f14;
    if (((double)param_3[3] != local_38) || (NAN((double)param_3[3]) || NAN(local_38)))
    goto LAB_147ec4f14;
  }
  (**(code **)(*plVar1 + 0x830))(plVar1,*(undefined1 *)(param_1 + 0x98));
LAB_147ec4f14:
  if (*(longlong *)(param_2 + 0x118) != 0) {
    FUN_147eacfc4(*(longlong *)(param_2 + 0x118),param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ec4f4c FUN_147ec4f4c body=336 status=ok
// SIG undefined FUN_147ec4f4c(void)

undefined8 FUN_147ec4f4c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined4 local_34;
  undefined2 *local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400b22c2(&local_30,"invalid");
  lVar2 = *(longlong *)(param_1 + 0x88);
  if ((((lVar2 == 0) || (lVar1 = FUN_1411c53f8(), lVar1 == 0)) ||
      (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x88);
  }
  lVar1 = FUN_1412dbfa6();
  if (lVar2 != lVar1) {
    lVar2 = *(longlong *)(param_1 + 0x88);
    if (((lVar2 == 0) || (lVar1 = FUN_1411c53f8(), lVar1 == 0)) ||
       ((*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
         lVar1 + 0x30)))) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x88);
    }
    lVar1 = FUN_1458b8ba0();
    if (lVar2 != lVar1) goto LAB_147ec5038;
  }
  FUN_1400021e4(param_1 + 0x80,&local_40);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_30 = local_40;
  local_28 = local_38;
  local_24 = local_34;
LAB_147ec5038:
  puVar3 = &DAT_149dfb77a;
  if (local_28 != 0) {
    puVar3 = local_30;
  }
  FUN_140002266(param_2,L"Set default focus to %s",puVar3);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147ec50c8 FUN_147ec50c8 body=79 status=ok
// SIG undefined FUN_147ec50c8(void)

void FUN_147ec50c8(longlong param_1)

{
  longlong lVar1;
  
  FUN_147ec4362();
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x38);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
  }
  FUN_147ee02da(param_1 + 0x98,param_1,lVar1);
  return;
}



// FUNCTION 147ec5118 FUN_147ec5118 body=152 status=ok
// SIG undefined FUN_147ec5118(void)

void FUN_147ec5118(longlong *param_1,longlong param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_2 + 0xa8);
  if (lVar3 != 0) {
    lVar2 = FUN_14490fee6();
    if ((((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) != lVar2 + 0x30)) || (lVar3 = *(longlong *)(lVar3 + 0x3d0), lVar3 != 0)) &&
       (((*(byte *)((longlong)param_1 + 0xdc) & 2) != 0 && (*param_3 == -1)))) {
      iVar1 = FUN_147ee03dc(param_1 + 0x13,lVar3,*(undefined8 *)(param_2 + 0x118),param_1 + 0x1d);
      *param_3 = iVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147ec519f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x318))(param_1,param_2,param_3);
  return;
}



// FUNCTION 147ec51b0 FUN_147ec51b0 body=433 status=ok
// SIG undefined FUN_147ec51b0(void)

undefined8 FUN_147ec51b0(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(byte *)(param_1 + 0xdc) & 1) == 0) {
    FUN_1400021e4(param_1 + 0x80,&local_48);
    puVar4 = local_48;
    if (local_40 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    if (*(longlong *)(param_1 + 0x98) == 0) {
      FUN_140056680(&local_58,&DAT_149e01fe8);
    }
    else {
      local_68 = *(undefined2 **)(*(longlong *)(param_1 + 0x98) + 0x18);
      FUN_1400021e4(&local_68,&local_58);
    }
    puVar3 = &DAT_149dfb77a;
    if (local_50 != 0) {
      puVar3 = local_58;
    }
    FUN_147ebe642(param_1,&local_68);
    puVar2 = &DAT_149dfb77a;
    if (local_60 != 0) {
      puVar2 = local_68;
    }
    pwVar1 = L"%s: %s\nResult Blackboard key: %s";
    local_78 = puVar4;
  }
  else {
    FUN_1400021e4(param_1 + 0x80,&local_48);
    puVar4 = &DAT_149dfb77a;
    if (local_40 != 0) {
      puVar4 = local_48;
    }
    FUN_1400021e4(param_1 + 0xc0,&local_58);
    puVar3 = &DAT_149dfb77a;
    if (local_50 != 0) {
      puVar3 = local_58;
    }
    FUN_147ebe642(param_1,&local_68);
    puVar2 = &DAT_149dfb77a;
    if (local_60 != 0) {
      puVar2 = local_68;
    }
    pwVar1 = L"%s: EQS query indicated by %s blackboard key\nResult Blackboard key: %s";
    local_78 = puVar4;
  }
  FUN_140002266(param_2,pwVar1,puVar2,puVar3);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147ec5362 FUN_147ec5362 body=102 status=ok
// SIG undefined FUN_147ec5362(void)

void FUN_147ec5362(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14113c790();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec53ca FUN_147ec53ca body=117 status=ok
// SIG undefined FUN_147ec53ca(void)

void FUN_147ec53ca(undefined8 param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*param_3 == -1) {
    return;
  }
  lVar2 = *(longlong *)(param_2 + 0xb0);
  if ((lVar2 == 0) && (lVar2 = FUN_1448abda6(param_2), lVar2 == 0)) goto LAB_147ec541a;
  lVar2 = *(longlong *)(lVar2 + 0x180);
  if (lVar2 == 0) {
LAB_147ec5411:
    uVar3 = 0;
  }
  else {
    lVar1 = FUN_1413f6fa8();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        != lVar1 + 0x30)) goto LAB_147ec5411;
    uVar3 = *(undefined8 *)(lVar2 + 0x110);
  }
  FUN_14384b5d0(uVar3,*param_3);
LAB_147ec541a:
  *param_3 = -1;
  return;
}



// FUNCTION 147ec5440 FUN_147ec5440 body=71 status=ok
// SIG undefined FUN_147ec5440(void)

undefined8 FUN_147ec5440(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_1 != 0) && (lVar1 = *(longlong *)(param_1 + 0x180), lVar1 != 0)) {
    lVar2 = FUN_1413f6fa8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return *(undefined8 *)(lVar1 + 0x110);
    }
  }
  return 0;
}



// FUNCTION 147ec54ac FUN_147ec54ac body=127 status=ok
// SIG undefined FUN_147ec54ac(void)

void FUN_147ec54ac(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar1 = FUN_14113c790();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_147ec54e0;
  }
  lVar3 = 0;
LAB_147ec54e0:
  if ((*(uint *)(param_1 + 0xa0) >> 8 & 1) == 0) {
    if ((char)*(uint *)(param_1 + 0xa0) < '\0' && lVar3 != 0) {
      uVar2 = FUN_147ea92c6(lVar3,param_1);
      FUN_147ea6e12(lVar3,uVar2,2);
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x88) = 2;
  }
  return;
}



// FUNCTION 147ec5530 FUN_147ec5530 body=158 status=ok
// SIG undefined FUN_147ec5530(void)

void FUN_147ec5530(undefined8 param_1,longlong param_2)

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
  FUN_147ec55d0(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec55d0 FUN_147ec55d0 body=134 status=ok
// SIG undefined FUN_147ec55d0(void)

void FUN_147ec55d0(longlong param_1,byte param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar1 = FUN_14113c790();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_147ec5607;
  }
  lVar3 = 0;
LAB_147ec5607:
  if ((*(uint *)(param_1 + 0xa0) >> 8 & 1) == 0) {
    if (-1 < (char)*(uint *)(param_1 + 0xa0) && lVar3 != 0) {
      uVar2 = FUN_147ea92c6(lVar3,param_1);
      FUN_147ea6e12(lVar3,uVar2,param_2 ^ 1);
      return;
    }
  }
  else {
    *(byte *)(param_1 + 0x88) = param_2 ^ 1;
  }
  return;
}



// FUNCTION 147ec567c FUN_147ec567c body=37 status=ok
// SIG undefined FUN_147ec567c(void)

void FUN_147ec567c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147ec56a2();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147ec56a2 FUN_147ec56a2 body=75 status=ok
// SIG undefined FUN_147ec56a2(void)

bool FUN_147ec56a2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar2 = FUN_14113c790();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_147ec56d6;
  }
  lVar3 = 0;
LAB_147ec56d6:
  iVar1 = FUN_147ea768c(lVar3,param_1);
  return iVar1 == 0;
}



// FUNCTION 147ec56ee FUN_147ec56ee body=156 status=ok
// SIG undefined FUN_147ec56ee(void)

void FUN_147ec56ee(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ec578c(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec578c FUN_147ec578c body=83 status=ok
// SIG undefined FUN_147ec578c(void)

void FUN_147ec578c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar2 = FUN_14113c790();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_147ea8b2e(lVar1,param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 147ec57e0 FUN_147ec57e0 body=231 status=ok
// SIG undefined FUN_147ec57e0(void)

void FUN_147ec57e0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
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
  FUN_147ec58c8(param_1,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec58c8 FUN_147ec58c8 body=95 status=ok
// SIG undefined FUN_147ec58c8(void)

void FUN_147ec58c8(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar2 = FUN_14113c790();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_147ea8c78(lVar1,param_1,param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 147ec5932 FUN_147ec5932 body=81 status=ok
// SIG undefined FUN_147ec5932(void)

void FUN_147ec5932(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x40) = param_2;
  lVar1 = *(longlong *)(param_2 + 0x38);
  if (lVar1 == 0) {
    return;
  }
  uVar2 = FUN_1459eb64a();
  FUN_147eb382d(param_1,uVar2,lVar1);
  return;
}



// FUNCTION 147ec5984 FUN_147ec5984 body=113 status=ok
// SIG undefined FUN_147ec5984(void)

void FUN_147ec5984(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x78) = param_2;
    if (param_2 != 0) goto LAB_147ec59a7;
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 0x78) = param_2;
LAB_147ec59a7:
    lVar1 = FUN_14104c5c4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      goto LAB_147ec59c9;
    }
  }
  param_2 = 0;
LAB_147ec59c9:
  *(longlong *)(param_1 + 0x70) = param_2;
  return;
}



// FUNCTION 147ec59f6 FUN_147ec59f6 body=231 status=ok
// SIG undefined FUN_147ec59f6(void)

char FUN_147ec59f6(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *(uint *)(param_1 + 0x14);
  cVar4 = ((uVar1 & 0x1e) != 0) * '\x02' + '\x01';
  *(char *)(param_1 + 0x11) = cVar4;
  *(uint *)(param_1 + 0x14) = uVar1 & 0xffffff7f;
  if ((uVar1 & 0x18) == 0) goto LAB_147ec5abd;
  *(uint *)(param_1 + 0x14) = uVar1 & 0xfffffe7f | 0x100;
  lVar2 = param_1[0xe];
  if ((uVar1 & 0x10) == 0 || lVar2 == 0) {
    if ((uVar1 & 8) != 0) {
      uVar3 = DAT_14cb1f730;
      local_28 = param_1[0xf];
      goto LAB_147ec5a95;
    }
  }
  else {
    local_20 = *(undefined8 *)(lVar2 + 0x3d0);
    uVar3 = DAT_14cb1f740;
    local_28 = lVar2;
LAB_147ec5a95:
    uVar3 = FUN_14477b072(param_1,uVar3);
    (**(code **)(*param_1 + 0x248))(param_1,uVar3,&local_28);
  }
  *(byte *)((longlong)param_1 + 0xa1) = *(byte *)((longlong)param_1 + 0xa1) & 0xfe;
  cVar4 = (char)param_1[0x11];
LAB_147ec5abd:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return cVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec5ade FUN_147ec5ade body=236 status=ok
// SIG undefined FUN_147ec5ade(void)

undefined1 FUN_147ec5ade(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147eb3d35(param_2,param_1);
  uVar1 = *(uint *)(param_1 + 0x14);
  *(byte *)(param_1 + 0x11) = (uVar1 & 0x60) == 0 ^ 3;
  *(uint *)(param_1 + 0x14) = uVar1 | 0x80;
  if ((uVar1 & 0x60) == 0) {
    uVar3 = 2;
    goto LAB_147ec5bad;
  }
  *(uint *)(param_1 + 0x14) = uVar1 | 0x180;
  lVar2 = param_1[0xe];
  if ((uVar1 & 0x40) == 0 || lVar2 == 0) {
    if ((uVar1 & 0x20) != 0) {
      uVar4 = DAT_14cb1f710;
      local_28 = param_1[0xf];
      goto LAB_147ec5b84;
    }
  }
  else {
    local_20 = *(undefined8 *)(lVar2 + 0x3d0);
    uVar4 = DAT_14cb1f720;
    local_28 = lVar2;
LAB_147ec5b84:
    uVar4 = FUN_14477b072(param_1,uVar4);
    (**(code **)(*param_1 + 0x248))(param_1,uVar4,&local_28);
  }
  *(byte *)((longlong)param_1 + 0xa1) = *(byte *)((longlong)param_1 + 0xa1) & 0xfe;
  uVar3 = (undefined1)param_1[0x11];
LAB_147ec5bad:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec5bcc FUN_147ec5bcc body=244 status=ok
// SIG undefined FUN_147ec5bcc(void)

void FUN_147ec5bcc(longlong *param_1,undefined8 param_2,undefined8 param_3,float param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  float fVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  fVar4 = *(float *)((longlong)param_1 + 0x84) - param_4;
  *(float *)((longlong)param_1 + 0x84) = fVar4;
  if (0.0 < fVar4) goto LAB_147ec5ca3;
  uVar3 = -(uint)(0.0 < *(float *)(param_1 + 0x10));
  uVar3 = ~uVar3 & (uint)param_4 | (uint)(*(float *)(param_1 + 0x10) - fVar4) & uVar3;
  lVar1 = param_1[0xe];
  if ((*(uint *)(param_1 + 0x14) & 4) == 0 || lVar1 == 0) {
    if ((*(uint *)(param_1 + 0x14) & 2) != 0) {
      local_28 = CONCAT44(local_28._4_4_,uVar3);
      uVar2 = DAT_14cb1f750;
      local_30 = param_1[0xf];
      goto LAB_147ec5c78;
    }
  }
  else {
    local_28 = *(undefined8 *)(lVar1 + 0x3d0);
    uVar2 = DAT_14cb1f760;
    local_30 = lVar1;
    local_20 = uVar3;
LAB_147ec5c78:
    uVar2 = FUN_14477b072(param_1,uVar2);
    (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_30);
  }
  *(int *)((longlong)param_1 + 0x84) = (int)param_1[0x10];
LAB_147ec5ca3:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec5ce2 FUN_147ec5ce2 body=241 status=ok
// SIG undefined FUN_147ec5ce2(void)

undefined8 FUN_147ec5ce2(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147eaa516(param_2,param_1);
  plVar1 = *(longlong **)(param_1 + 0x10);
  lVar4 = plVar1[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar4 = plVar1[0x22];
  }
  if ((lVar4 != 0) && ((*(uint *)(param_1 + 0xa0) & 1) != 0)) {
    uVar3 = FUN_1459eb64a();
    FUN_147eb39a3(&local_38,param_1,uVar3,lVar4 + 0x90);
    if (1 < local_30) {
      FUN_1400020e8(param_2,&DAT_14abed5a8,3);
      iVar2 = local_30 - 1;
      if (local_30 == 0) {
        iVar2 = 0;
      }
      FUN_1400020e8(param_2,local_38,iVar2);
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec5dd4 FUN_147ec5dd4 body=97 status=ok
// SIG undefined FUN_147ec5dd4(void)

void FUN_147ec5dd4(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 in_stack_00000028;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
    if (lVar2 == 0) {
      return;
    }
  }
  if (*(int *)(lVar2 + 0x98) == 0) {
    return;
  }
  FUN_147eb3c56(param_1,lVar2 + 0x90,in_stack_00000028);
  return;
}



// FUNCTION 147ec5e48 FUN_147ec5e48 body=21 status=ok
// SIG undefined FUN_147ec5e48(void)

undefined1 FUN_147ec5e48(longlong param_1)

{
  undefined1 uVar1;
  
  uVar1 = FUN_147eca6c4(param_1 + 0x70);
  return uVar1;
}



// FUNCTION 147ec5e5e FUN_147ec5e5e body=186 status=ok
// SIG undefined FUN_147ec5e5e(void)

undefined8 FUN_147ec5e5e(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147ec20a6(param_1 + 0x70,&local_40);
  puVar2 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar2 = local_40;
  }
  FUN_147eaa516(&local_50,param_1);
  puVar1 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar1 = local_50;
  }
  FUN_140002266(param_2,L"%s %s",puVar1,puVar2);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec5f1e FUN_147ec5f1e body=92 status=ok
// SIG undefined FUN_147ec5f1e(void)

undefined8 FUN_147ec5f1e(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  
  *(byte *)(param_3 + 8) = *(byte *)(param_3 + 8) & 0xfe;
  plVar2 = (longlong *)FUN_14479d2ce(param_3);
  if ((plVar2 != (longlong *)0x0) && (*(char *)((longlong)plVar2 + 0x39) != '\x04')) {
    cVar1 = FUN_147ec26d0(param_1 + 0x70,param_2);
    if (cVar1 == '\0') {
      *(byte *)((longlong)plVar2 + 0x3c) = *(byte *)((longlong)plVar2 + 0x3c) | 0x80;
    }
    else {
      (**(code **)(*plVar2 + 0x2c0))(plVar2);
    }
  }
  return 2;
}



// FUNCTION 147ec5f86 FUN_147ec5f86 body=219 status=ok
// SIG undefined FUN_147ec5f86(void)

void FUN_147ec5f86(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (param_2 != 0) {
    lVar5 = FUN_145993f3e();
    if ((((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
        (*(longlong *)(param_2 + 0x68) != 0)) && (*(char *)(param_2 + 0x39) != '\x02')) {
      lVar5 = FUN_147ebe440(param_2);
      if (lVar5 != 0) {
        plVar1 = (longlong *)(param_1 + -0x28);
        uVar3 = FUN_147ea72f6(lVar5,plVar1);
        if (((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(lVar5 + 0x170))) &&
           ((lVar7 = (ulonglong)*(ushort *)(param_1 + 0x2a) +
                     *(longlong *)(*(longlong *)(lVar5 + 0x168) + 0x30 + (ulonglong)uVar3 * 0x58),
            lVar7 != 0 && ((*(byte *)(lVar7 + 8) & 1) != 0)))) {
          cVar2 = FUN_147ec6062(lVar7,param_2);
          if (cVar2 != '\0') {
            uVar4 = (**(code **)(*plVar1 + 0x318))(plVar1,param_2);
            uVar6 = FUN_147ea92c6(lVar5,plVar1);
            FUN_147ea6e12(lVar5,uVar6,uVar4);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 147ec6062 FUN_147ec6062 body=118 status=ok
// SIG undefined FUN_147ec6062(void)

ulonglong FUN_147ec6062(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if ((*param_1 != (int)local_20) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != local_20._4_4_)) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(&local_20);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec60fe FUN_147ec60fe body=204 status=ok
// SIG undefined FUN_147ec60fe(void)

undefined8 FUN_147ec60fe(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_2 + 0xa8);
  uVar3 = 1;
  if (lVar1 != 0) {
    lVar2 = FUN_14490fee6();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (lVar1 = *(longlong *)(lVar1 + 0x3d0), lVar1 != 0)) {
      local_38 = DAT_14c8464f0;
      local_48 = (undefined4)DAT_14c8464e0;
      uStack_44 = DAT_14c8464e0._4_4_;
      uStack_40 = (undefined4)DAT_14c8464e8;
      uStack_3c = DAT_14c8464e8._4_4_;
      uVar4 = FUN_147ec0da0(param_1 + 0x70,param_2);
      local_50 = 0;
      local_58 = 0;
      FUN_1478b8698(lVar1,uVar4,lVar1,&local_48);
      uVar3 = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec61dc FUN_147ec61dc body=421 status=ok
// SIG undefined FUN_147ec61dc(void)

int FUN_147ec61dc(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 **local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_3 + 8) = DAT_14cb1f0b0;
  uVar4 = DAT_14cb1f0a8._4_4_;
  uVar3 = (undefined4)DAT_14cb1f0a8;
  uVar2 = DAT_14cb1f0a0._4_4_;
  param_3[4] = (undefined4)DAT_14cb1f0a0;
  param_3[5] = uVar2;
  param_3[6] = uVar3;
  param_3[7] = uVar4;
  *param_3 = DAT_14cb1eff8;
  if (*(longlong *)(param_2 + 0x120) == 0) {
    iVar7 = 1;
  }
  else {
    iVar7 = (**(code **)(*param_1 + 0x318))();
    if (((iVar7 == 3) && (iVar7 = 3, (*(byte *)(param_1 + 0x2b) & 2) != 0)) &&
       (lVar1 = *(longlong *)(param_2 + 0x118), lVar1 != 0)) {
      if (*(longlong *)(param_3 + 2) != 0) {
        FUN_147eacd70(lVar1,(short)param_1[0x12]);
      }
      local_50 = (undefined8 *)0x0;
      local_48 = 0;
      iVar7 = 3;
      FUN_1446efa72(&local_50,0,3,0x10);
      puVar5 = local_50;
      local_48 = 3;
      *local_50 = &PTR_LAB_14ac04230;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar6 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar6 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar6;
      local_50[2] = lVar8;
      *local_50 = &PTR_FUN_14ac04460;
      local_50[3] = 0;
      FUN_14485c47a(local_50 + 3,param_1);
      puVar5[4] = FUN_147ec6382;
      *(undefined4 *)(puVar5 + 5) = 0;
      local_58 = &local_50;
      FUN_147eacb26(lVar1,&local_40,(short)param_1[0x12],param_1);
      *(undefined8 *)(param_3 + 2) = local_40;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec6382 FUN_147ec6382 body=593 status=ok
// SIG undefined FUN_147ec6382(void)

ulonglong FUN_147ec6382(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 unaff_RBX;
  ulonglong uVar11;
  int *piVar12;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  double local_70;
  double local_68;
  double local_60;
  float local_58;
  char local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = FUN_147eacaa0(param_2);
  if (lVar7 != 0) {
    lVar8 = FUN_14113c790();
    if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
        == lVar8 + 0x30)) {
      uVar5 = FUN_147ea72f6(lVar7,param_1);
      if (((int)uVar5 < 0) || (*(int *)(lVar7 + 0x170) <= (int)uVar5)) {
        piVar12 = (int *)0x0;
      }
      else {
        piVar12 = (int *)((ulonglong)*(ushort *)((longlong)param_1 + 0x52) +
                         *(longlong *)
                          (*(longlong *)(lVar7 + 0x168) + 0x30 + (ulonglong)uVar5 * 0x58));
      }
      iVar6 = FUN_147ea768c(lVar7,param_1);
      if (iVar6 == 0) {
        uVar11 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
        if ((piVar12 == (int *)0x0) || (*(longlong *)(lVar7 + 0x120) == 0)) goto LAB_147ec63dd;
        lVar8 = param_1[0x11];
        if ((lVar8 == 0) ||
           (((lVar9 = FUN_1411c53f8(), lVar9 == 0 ||
             (*(int *)(lVar8 + 0x38) < *(int *)(lVar9 + 0x38))) ||
            (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
             lVar9 + 0x30)))) {
          lVar8 = 0;
        }
        else {
          lVar8 = param_1[0x11];
        }
        lVar9 = FUN_1458b8ba0();
        if (lVar8 == lVar9) {
          FUN_147eb02a8(param_2,&local_70,(short)param_1[0x12]);
          dVar1 = *(double *)(piVar12 + 4);
          dVar2 = *(double *)(piVar12 + 6);
          dVar3 = *(double *)(piVar12 + 8);
          if (param_1[0x19] == 0) {
LAB_147ec6587:
            local_58 = *(float *)((longlong)param_1 + 0xd4);
          }
          else {
            FUN_147ed5c18(&local_58,param_2,param_1 + 0x19,param_1 + 0x1a);
            if (local_54 != '\x01') goto LAB_147ec6587;
          }
          if ((dVar3 - local_60) * (dVar3 - local_60) +
              (dVar2 - local_68) * (dVar2 - local_68) + (dVar1 - local_70) * (dVar1 - local_70) <=
              (double)(local_58 * local_58)) goto LAB_147ec63dd;
        }
        if (*piVar12 != -1) {
          FUN_147ea6da2(lVar7,param_1);
          plVar4 = *(longlong **)(*(longlong *)(lVar7 + 0x120) + 0x468);
          local_78 = 1;
          (**(code **)(*plVar4 + 0x498))(plVar4,param_1,0x80,*piVar12);
        }
        iVar6 = (**(code **)(*param_1 + 0x318))(param_1,lVar7,piVar12);
        if (iVar6 != 3) {
          uVar10 = FUN_147ea92c6(lVar7,param_1);
          FUN_147ea6e12(lVar7,uVar10,iVar6);
        }
        goto LAB_147ec63dd;
      }
      piVar12[2] = 0;
      piVar12[3] = 0;
    }
  }
  uVar11 = 0;
LAB_147ec63dd:
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 147ec65d4 FUN_147ec65d4 body=1895 status=ok
// SIG undefined FUN_147ec65d4(void)

undefined1 FUN_147ec65d4(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined1 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  uint local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar14 = *(longlong *)(param_2 + 0x118);
  lVar15 = *(longlong *)(param_2 + 0x120);
  uVar17 = 1;
  if (lVar14 == 0 || lVar15 == 0) goto LAB_147ec68da;
  lVar13 = param_1[0x17];
  if (param_1[0x15] != 0) {
    FUN_147ed5a7d(&local_98,lVar14,param_1 + 0x15,param_1 + 0x16);
    if ((char)local_90 == '\x01') {
      lVar13 = local_98;
    }
  }
  if ((lVar13 == 0) || (DAT_14c950c29 == 0)) {
    local_98 = 0;
    local_90 = DAT_14cb1e7b0;
    uStack_88 = DAT_14cb1e7b8;
    local_80 = DAT_14cb1e7c0;
    local_78 = 0;
    local_70 = 0x35c;
    local_6c = 0x7f7fffffbf800000;
    local_64 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    if (lVar13 != 0) goto LAB_147ec66a0;
LAB_147ec66c6:
    lVar13 = *(longlong *)(lVar15 + 0x498);
    if ((lVar13 != 0 & DAT_14c950c29) == 1) {
LAB_147ec69b5:
      FUN_1456cec3c(lVar13);
    }
  }
  else {
    FUN_1456cec3c(lVar13);
LAB_147ec66a0:
    uStack_50 = 0;
    uStack_54 = 0;
    uStack_58 = 0;
    uStack_5c = 0;
    local_64 = 0;
    local_6c = 0x7f7fffffbf800000;
    local_70 = 0x35c;
    local_98 = 0;
    local_90 = DAT_14cb1e7b0;
    uStack_88 = DAT_14cb1e7b8;
    local_80 = DAT_14cb1e7c0;
    lVar12 = FUN_14118cf76();
    if (((lVar12 == 0) || (*(int *)(lVar13 + 0x38) < *(int *)(lVar12 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) !=
        lVar12 + 0x30)) goto LAB_147ec66c6;
    if ((lVar13 != 0 & DAT_14c950c29) != 0) goto LAB_147ec69b5;
  }
  if (((DAT_14c950c29 & 1) != 0) && (lVar13 != 0)) {
    FUN_1456cec3c(lVar13);
  }
  local_78 = lVar13;
  if (param_1[0x1d] == 0) {
LAB_147ec6704:
    bVar6 = *(byte *)((longlong)param_1 + 0xf4);
  }
  else {
    FUN_147ed59b0(&local_b0,lVar14,param_1 + 0x1d,param_1 + 0x1e);
    if (local_b0._1_1_ != '\x01') goto LAB_147ec6704;
    bVar6 = (byte)local_b0;
  }
  uVar11 = (bVar6 & 1) * 8 + 0x354;
  local_70 = uVar11;
  if (param_1[0x13] == 0) {
LAB_147ec6729:
    uVar18 = *(undefined4 *)((longlong)param_1 + 0xa4);
  }
  else {
    FUN_147ed5c18(&local_b0,lVar14,param_1 + 0x13,param_1 + 0x14);
    uVar18 = local_b0;
    if ((char)uStack_ac != '\x01') goto LAB_147ec6729;
  }
  local_6c = CONCAT44(local_6c._4_4_,uVar18);
  if (param_1[0x1b] == 0) {
LAB_147ec6745:
    bVar6 = *(byte *)((longlong)param_1 + 0xe4);
  }
  else {
    FUN_147ed59b0(&local_b0,lVar14,param_1 + 0x1b,param_1 + 0x1c);
    if (local_b0._1_1_ != '\x01') goto LAB_147ec6745;
    bVar6 = (byte)local_b0;
  }
  uVar10 = (bVar6 & 1) << 10;
  if (param_1[0x25] == 0) {
LAB_147ec6764:
    bVar6 = *(byte *)((longlong)param_1 + 0x134);
  }
  else {
    FUN_147ed59b0(&local_b0,lVar14,param_1 + 0x25,param_1 + 0x26);
    if (local_b0._1_1_ != '\x01') goto LAB_147ec6764;
    bVar6 = (byte)local_b0;
  }
  uVar5 = uVar11 & 0x45c;
  if ((bVar6 & 1) != 0) {
    uVar5 = uVar11;
  }
  if (param_1[0x27] == 0) {
LAB_147ec6788:
    bVar6 = *(byte *)((longlong)param_1 + 0x144);
  }
  else {
    FUN_147ed59b0(&local_b0,lVar14,param_1 + 0x27,param_1 + 0x28);
    if (local_b0._1_1_ != '\x01') goto LAB_147ec6788;
    bVar6 = (byte)local_b0;
  }
  uVar11 = (bVar6 & 1) << 9;
  local_70 = uVar5 & 0x55c | uVar10 | uVar11;
  if (param_1[0x21] == 0) {
LAB_147ec67b4:
    bVar6 = *(byte *)((longlong)param_1 + 0x114);
  }
  else {
    FUN_147ed59b0(&local_b0,lVar14,param_1 + 0x21,param_1 + 0x22);
    if (local_b0._1_1_ != '\x01') goto LAB_147ec67b4;
    bVar6 = (byte)local_b0;
  }
  if (param_1[0x23] == 0) {
LAB_147ec67db:
    bVar7 = *(byte *)((longlong)param_1 + 0x124);
  }
  else {
    FUN_147ed59b0(&local_b0,lVar14,param_1 + 0x23,param_1 + 0x24);
    if (local_b0._1_1_ != '\x01') goto LAB_147ec67db;
    bVar7 = (byte)local_b0;
  }
  uVar3 = *(uint *)(param_1 + 0x2b);
  if (param_1[0x29] == 0) {
LAB_147ec6808:
    bVar8 = *(byte *)((longlong)param_1 + 0x154);
  }
  else {
    FUN_147ed59b0(&local_b0,lVar14,param_1 + 0x29,param_1 + 0x2a);
    if (local_b0._1_1_ != '\x01') goto LAB_147ec6808;
    bVar8 = (byte)local_b0;
  }
  uVar11 = (uVar5 & 0x508 | uVar10 | uVar11 | (bVar6 & 1) << 4 | (bVar7 & 1) << 6) + (uVar3 & 1) * 4
           | (bVar8 & 1) << 7;
  lVar15 = param_1[0x11];
  local_70 = uVar11;
  if (((lVar15 == 0) || (lVar13 = FUN_1411c53f8(), lVar13 == 0)) ||
     ((*(int *)(lVar15 + 0x38) < *(int *)(lVar13 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) !=
       lVar13 + 0x30)))) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1[0x11];
  }
  lVar13 = FUN_1412dbfa6();
  if (lVar15 == lVar13) {
    lVar15 = FUN_147eb9650(lVar14,(short)param_1[0x12]);
    if (lVar15 != 0) {
      lVar13 = FUN_144a6c4d8();
      if ((*(int *)(lVar13 + 0x38) <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar13 + 0x38) * 8) == lVar13 + 0x30)) {
        if (param_1[0x1f] == 0) {
LAB_147ec6c57:
          local_b0._0_1_ = *(byte *)((longlong)param_1 + 0x104);
        }
        else {
          local_b0._0_2_ = local_b0._1_2_;
          FUN_147ed59b0(&local_b0,lVar14,param_1 + 0x1f,param_1 + 0x20);
          if (local_b0._1_1_ != '\x01') goto LAB_147ec6c57;
        }
        if (((byte)local_b0 & 1) == 0) {
          lVar14 = *(longlong *)(lVar15 + 0x1c8);
          if (lVar14 == 0) {
            puVar16 = &DAT_14c8464e0;
            uVar18 = (undefined4)DAT_14c8464f0;
            uVar19 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
          }
          else {
            uVar18 = (undefined4)*(undefined8 *)(lVar14 + 0x270);
            uVar19 = (undefined4)((ulonglong)*(undefined8 *)(lVar14 + 0x270) >> 0x20);
            puVar16 = (undefined8 *)(lVar14 + 0x260);
          }
          local_90 = *puVar16;
          uStack_88 = puVar16[1];
          local_80 = CONCAT44(uVar19,uVar18);
          uVar11 = uVar11 | 1;
          local_70 = uVar11;
        }
        else {
          FUN_14485c47a(&local_98,lVar15);
          uVar11 = local_70 | 3;
          local_70 = uVar11;
        }
      }
    }
  }
  else {
    lVar15 = param_1[0x11];
    if ((((lVar15 == 0) || (lVar13 = FUN_1411c53f8(), lVar13 == 0)) ||
        (*(int *)(lVar15 + 0x38) < *(int *)(lVar13 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) !=
        lVar13 + 0x30)) {
      lVar15 = 0;
    }
    else {
      lVar15 = param_1[0x11];
    }
    lVar13 = FUN_1458b8ba0();
    if (lVar15 == lVar13) {
      FUN_147eb02a8(lVar14,&local_b0,(short)param_1[0x12]);
      local_80 = local_a0;
      local_90 = CONCAT44(uStack_ac,local_b0);
      uStack_88 = CONCAT44(uStack_a4,uStack_a8);
      uVar11 = uVar11 | 1;
      *(undefined8 *)(param_3 + 0x20) = local_a0;
      *(undefined4 *)(param_3 + 0x10) = local_b0;
      *(undefined4 *)(param_3 + 0x14) = uStack_ac;
      *(undefined4 *)(param_3 + 0x18) = uStack_a8;
      *(undefined4 *)(param_3 + 0x1c) = uStack_a4;
      local_70 = uVar11;
    }
  }
  uVar17 = 1;
  if (((uVar11 & 1) != 0) &&
     (((uVar11 & 2) == 0 || (cVar9 = FUN_144729dda(&local_98), cVar9 != '\0')))) {
    lVar14 = FUN_14479d2ce(param_3 + 0x28);
    lVar15 = (**(code **)(*param_1 + 800))(param_1,param_2,lVar14,&local_98);
    if (lVar15 != 0) {
      *(byte *)(param_3 + 0x30) = *(byte *)(param_3 + 0x30) & 0xfe;
      if (lVar14 == 0) {
        FUN_14485c47a(param_3 + 0x28,lVar15);
        FUN_147e95592(lVar15);
      }
      else if (*(char *)(lVar15 + 0x39) == '\x03') {
        FUN_147f081e6(lVar15);
      }
      *(byte *)(param_3 + 0x30) = *(byte *)(param_3 + 0x30) | 1;
      uVar17 = 3;
      if (*(char *)(lVar15 + 0x39) == '\x04') {
        uVar17 = *(char *)(lVar15 + 0x118) != '\0';
      }
    }
  }
  plVar4 = (longlong *)CONCAT44(uStack_54,uStack_58);
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
LAB_147ec68da:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17;
}



// FUNCTION 147ec6d3c FUN_147ec6d3c body=155 status=ok
// SIG undefined FUN_147ec6d3c(void)

longlong FUN_147ec6d3c(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == 0) {
    *(byte *)(param_1 + 0x55) = *(byte *)(param_1 + 0x55) | 8;
    FUN_1446f470e(&local_30,L"Behavior",1);
    param_3 = FUN_147ed4a12(*(undefined8 *)(param_2 + 0x120),param_1 + 0x28,local_30);
    if (param_3 == 0) {
      param_3 = 0;
      goto LAB_147ec6d6e;
    }
  }
  FUN_147f0809e(param_3,*(undefined8 *)(param_3 + 0x68),param_4);
LAB_147ec6d6e:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec6dd8 FUN_147ec6dd8 body=109 status=ok
// SIG undefined FUN_147ec6dd8(void)

undefined8 FUN_147ec6dd8(undefined8 param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  
  if (*param_3 == -1) {
    *(byte *)(param_3 + 0xc) = *(byte *)(param_3 + 0xc) & 0xfe;
    plVar1 = (longlong *)FUN_14479d2ce(param_3 + 10);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x2c0))(plVar1);
    }
  }
  else if ((*(longlong *)(param_2 + 0x120) != 0) &&
          (plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x120) + 0x468),
          plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x498))(plVar1,param_1,0x10,*param_3,0);
  }
  return 2;
}



// FUNCTION 147ec6e46 FUN_147ec6e46 body=75 status=ok
// SIG undefined FUN_147ec6e46(void)

void FUN_147ec6e46(longlong param_1,longlong param_2,longlong param_3)

{
  *(undefined8 *)(param_3 + 0x28) = 0;
  if ((*(byte *)(param_1 + 0x158) & 2) != 0) {
    if ((*(longlong *)(param_2 + 0x118) != 0) && (*(longlong *)(param_3 + 8) != 0)) {
      FUN_147eacd70(*(longlong *)(param_2 + 0x118),*(undefined2 *)(param_1 + 0x90));
    }
    *(undefined8 *)(param_3 + 8) = 0;
  }
  return;
}



// FUNCTION 147ec6e92 FUN_147ec6e92 body=33 status=ok
// SIG undefined FUN_147ec6e92(void)

void FUN_147ec6e92(void)

{
  FUN_147ebeaae();
  return;
}



// FUNCTION 147ec6eb4 FUN_147ec6eb4 body=211 status=ok
// SIG undefined FUN_147ec6eb4(void)

void FUN_147ec6eb4(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (param_2 != 0) {
    lVar3 = FUN_14599402a();
    if ((((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
        (*(longlong *)(param_2 + 0x68) != 0)) && (*(char *)(param_2 + 0x39) != '\x02')) {
      lVar3 = FUN_147ebe440(param_2);
      if (lVar3 != 0) {
        uVar2 = FUN_147ea72f6(lVar3,param_1 + -0x28);
        if (((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar3 + 0x170))) &&
           ((lVar5 = (ulonglong)*(ushort *)(param_1 + 0x2a) +
                     *(longlong *)(*(longlong *)(lVar3 + 0x168) + 0x30 + (ulonglong)uVar2 * 0x58),
            lVar5 != 0 && ((*(byte *)(lVar5 + 0x30) & 1) != 0)))) {
          cVar1 = FUN_147ec6f88(lVar5 + 0x28,param_2);
          if (cVar1 != '\0') {
            cVar1 = *(char *)(param_2 + 0x118);
            uVar4 = FUN_147ea92c6(lVar3,param_1 + -0x28);
            FUN_147ea6e12(lVar3,uVar4,cVar1 != '\0');
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 147ec6f88 FUN_147ec6f88 body=118 status=ok
// SIG undefined FUN_147ec6f88(void)

ulonglong FUN_147ec6f88(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if ((*param_1 != (int)local_20) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != local_20._4_4_)) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(&local_20);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec7000 FUN_147ec7000 body=393 status=ok
// SIG undefined FUN_147ec7000(void)

undefined8 FUN_147ec7000(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined4 local_44;
  undefined2 *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400b22c2(&local_40,"invalid");
  lVar2 = *(longlong *)(param_1 + 0x88);
  if ((((lVar2 == 0) || (lVar1 = FUN_1411c53f8(), lVar1 == 0)) ||
      (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x88);
  }
  lVar1 = FUN_1412dbfa6();
  if (lVar2 != lVar1) {
    lVar2 = *(longlong *)(param_1 + 0x88);
    if (((lVar2 == 0) || (lVar1 = FUN_1411c53f8(), lVar1 == 0)) ||
       ((*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
         lVar1 + 0x30)))) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x88);
    }
    lVar1 = FUN_1458b8ba0();
    if (lVar2 != lVar1) goto LAB_147ec70f0;
  }
  FUN_1400021e4(param_1 + 0x80,&local_50);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_40 = local_50;
  local_38 = local_48;
  local_34 = local_44;
LAB_147ec70f0:
  puVar3 = local_40;
  if (local_38 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_147eaa516(&local_50,param_1);
  puVar4 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar4 = local_50;
  }
  FUN_140002266(param_2,L"%s: %s",puVar4,puVar3);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147ec718a FUN_147ec718a body=310 status=ok
// SIG undefined FUN_147ec718a(void)

/* WARNING: Removing unreachable block (ram,0x000147ec7280) */

void FUN_147ec718a(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  wchar_t *pwVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined2 *local_38;
  int local_30;
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_2 + 0x118) != 0) {
    FUN_147ead8a4(*(longlong *)(param_2 + 0x118),&local_28,*(undefined2 *)(param_1 + 0x90),0);
    cVar3 = FUN_144729dda(param_3 + 0x28);
    pwVar4 = L"(task)";
    if (cVar3 == '\0') {
      pwVar4 = L"";
    }
    FUN_140056680(&local_38,pwVar4);
    puVar7 = &DAT_149dfb77a;
    if (local_30 != 0) {
      puVar7 = local_38;
    }
    puVar5 = &DAT_149dfb77a;
    if (local_20 != 0) {
      puVar5 = local_28;
    }
    FUN_140002266(&local_48,L"move target: %s%s",puVar5,puVar7);
    iVar1 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(param_5,iVar1);
    }
    lVar2 = *param_5;
    lVar6 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar6) = 0;
    *(undefined8 *)(lVar2 + lVar6) = local_48;
    *(undefined4 *)(lVar2 + 8 + lVar6) = (undefined4)local_40;
    *(undefined4 *)(lVar2 + 0xc + lVar6) = local_40._4_4_;
    local_40 = 0;
    local_48 = 0;
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ec72f6 FUN_147ec72f6 body=66 status=ok
// SIG undefined FUN_147ec72f6(void)

int FUN_147ec72f6(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 2;
  if ((*(longlong *)(param_2 + 0x120) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x120) + 0x480), lVar1 != 0)) {
    iVar2 = FUN_147e9fdbc(lVar1,param_1,1);
    iVar2 = 3 - (uint)(iVar2 == 0);
  }
  return iVar2;
}



// FUNCTION 147ec7338 FUN_147ec7338 body=369 status=ok
// SIG undefined FUN_147ec7338(void)

int FUN_147ec7338(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_2 + 0xa8);
  iVar6 = 1;
  if (lVar1 != 0) {
    lVar4 = FUN_14104c5c4();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      if (*(longlong **)(param_3 + 0x68) != (longlong *)0x0 && *(int *)(param_3 + 0x70) != 0) {
        (**(code **)(**(longlong **)(param_3 + 0x68) + 0x30))();
      }
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar2 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14ac04550;
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
      *local_48 = &PTR_FUN_14ac044e0;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,param_1);
      puVar2[4] = &LAB_147ec74aa;
      *(undefined4 *)(puVar2 + 5) = 0;
      FUN_147ed1ad6(param_3 + 0x68,&local_48);
      FUN_1449db362(&local_48);
      bVar3 = FUN_147ea52ee(lVar1,param_3,1,param_1);
      iVar6 = (uint)bVar3 * 2 + 1;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec74b8 FUN_147ec74b8 body=54 status=ok
// SIG undefined FUN_147ec74b8(void)

void FUN_147ec74b8(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_147ec74ee();
  if (cVar1 == '\x03') {
                    /* WARNING: Could not recover jumptable at 0x000147ec74e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 800))(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 147ec74ee FUN_147ec74ee body=294 status=ok
// SIG undefined FUN_147ec74ee(void)

undefined8 FUN_147ec74ee(undefined8 param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_147e9e5a2(param_2);
  if (lVar3 != 0) {
    lVar4 = FUN_14104c5c4();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
         == lVar4 + 0x30)) && (*(longlong *)(lVar3 + 0x470) != 0)) {
      lVar4 = FUN_14113c790();
      lVar3 = *(longlong *)(lVar3 + 0x470);
      if (lVar3 != 0) {
        if (lVar4 == 0) {
          return 0;
        }
        lVar1 = *(longlong *)(lVar3 + 0x10);
        if (lVar1 == 0) {
          return 0;
        }
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)) {
          iVar2 = FUN_147ea768c(lVar3,param_1);
          if (iVar2 == 1) {
            if (4 < param_3) {
              return 0;
            }
            if ((0x1aU >> (param_3 & 0x1f) & 1) != 0) {
              uVar5 = FUN_147ea92c6(lVar3,param_1);
              FUN_147ea6e12(lVar3,uVar5,2);
              return 2;
            }
            return 0;
          }
          if (iVar2 == 0) {
            if (param_3 != 4) {
              if (param_3 == 3) {
                return 3;
              }
              if (param_3 != 1) {
                return 0;
              }
            }
            iVar2 = *(int *)(param_2 + 0x88);
            uVar5 = FUN_147ea92c6(lVar3,param_1);
            FUN_147ea6e12(lVar3,uVar5,iVar2 != 2);
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 147ec7614 FUN_147ec7614 body=162 status=ok
// SIG undefined FUN_147ec7614(void)

void FUN_147ec7614(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_147e9e5a2(param_2);
  if (lVar2 != 0) {
    lVar3 = FUN_14104c5c4();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         == lVar3 + 0x30)) && (*(longlong *)(lVar2 + 0x470) != 0)) {
      lVar3 = FUN_14113c790();
      lVar2 = *(longlong *)(lVar2 + 0x470);
      if (((lVar2 != 0) && (lVar3 != 0)) &&
         ((lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0 &&
          ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)))))) {
        uVar4 = FUN_147ea92c6(lVar2,param_1);
        FUN_147ea6e12(lVar2,uVar4,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147ec76ba FUN_147ec76ba body=98 status=ok
// SIG undefined FUN_147ec76ba(void)

void FUN_147ec76ba(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if (lVar2 != 0) {
    if ((*(longlong *)(param_1 + 0xb8) != 0) && (*(int *)(param_1 + 0xc0) == 0)) {
      FUN_14073397e(*(longlong *)(param_1 + 0xb8),0,1);
      lVar2 = *(longlong *)(param_1 + 0xb0);
    }
    uVar1 = FUN_147ea92c6(lVar2,param_1);
    FUN_147ea6e12(lVar2,uVar1,0);
    return;
  }
  return;
}



// FUNCTION 147ec771c FUN_147ec771c body=557 status=ok
// SIG undefined FUN_147ec771c(void)

undefined8 FUN_147ec771c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  float fVar10;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined2 local_b0 [2];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar7 = *(longlong *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0xb0) = param_2;
  plVar4 = (longlong *)FUN_147ec794a(param_1 + 0x70,param_2);
  uVar9 = 1;
  if ((lVar7 != 0 && plVar4 != (longlong *)0x0) &&
     (lVar6 = *(longlong *)(lVar7 + 0x3d0), lVar6 != 0)) {
    lVar5 = FUN_144a7cacc();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) {
      lVar6 = FUN_140849bbe(*(undefined8 *)(lVar7 + 0x3d0));
    }
    else {
      lVar6 = *(longlong *)(lVar6 + 0x428);
    }
    if (lVar6 != 0) {
      uVar3 = FUN_14164d60e(lVar6);
      *(undefined4 *)(param_1 + 0xc0) = uVar3;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar6);
      }
      *(longlong *)(param_1 + 0xb8) = lVar6;
      uVar3 = FUN_147ec26d0(param_1 + 0x90,param_2);
      FUN_14348c25a(lVar6,plVar4,uVar3);
      fVar10 = (float)(**(code **)(*plVar4 + 0x2b0))(plVar4);
      cVar2 = FUN_147ec26d0(param_1 + 0xa0,param_2);
      uVar9 = 0;
      if ((0.0 < fVar10) && (cVar2 == '\0')) {
        cVar2 = FUN_147ec26d0(param_1 + 0x90,param_2);
        uVar9 = 3;
        if (cVar2 == '\0') {
          lVar7 = FUN_1447210f0(lVar7);
          if (*(longlong *)(lVar7 + 0x1f0) == 0) {
            puVar8 = (undefined8 *)(lVar7 + 0x458);
          }
          else {
            puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x1f0) + 0xf0);
          }
          uVar1 = *puVar8;
          local_a8 = 0;
          local_a0 = 0;
          FUN_14487d8d8(&local_a8,param_1 + 200);
          local_68 = 1;
          local_b8 = local_b0;
          local_b0[0] = 0;
          local_ac = 0xbf800000;
          FUN_1406f4044(uVar1,param_1 + 0xd8,&local_a8,fVar10);
          (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec794a FUN_147ec794a body=147 status=ok
// SIG undefined FUN_147ec794a(void)

longlong FUN_147ec794a(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = param_1[2];
  if ((*(longlong *)(param_2 + 0x118) != 0) && (*param_1 != 0)) {
    FUN_147ed5f73(&local_28,*(longlong *)(param_2 + 0x118),param_1,param_1 + 1);
    if (local_20 == '\x01') {
      lVar2 = local_28;
    }
  }
  if (lVar2 != 0) {
    lVar1 = FUN_14018aba8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_147ec799f;
  }
  lVar2 = 0;
LAB_147ec799f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec79de FUN_147ec79de body=176 status=ok
// SIG undefined FUN_147ec79de(void)

undefined8 FUN_147ec79de(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar3 = *(longlong *)(param_2 + 0x120);
  lVar2 = FUN_147ec794a(param_1 + 0x70);
  if (((lVar3 != 0) && (lVar2 != 0)) && (*(longlong *)(param_1 + 0xd8) != 0)) {
    lVar3 = FUN_1447210f0(lVar3);
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x458);
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    uVar1 = *puVar4;
    lVar3 = FUN_144a61814(uVar1,(undefined8 *)(param_1 + 0xd8));
    if (lVar3 != 0) {
      FUN_1405a424c(uVar1,*(undefined8 *)(param_1 + 0xd8));
    }
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
  if ((*(longlong *)(param_1 + 0xb8) != 0) && (*(int *)(param_1 + 0xc0) == 0)) {
    FUN_14073397e(*(longlong *)(param_1 + 0xb8),0,1);
  }
  return 2;
}



// FUNCTION 147ec7a8e FUN_147ec7a8e body=324 status=ok
// SIG undefined FUN_147ec7a8e(void)

undefined8 FUN_147ec7a8e(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  undefined2 *local_90;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_147ed1b5a(param_1 + 0xa0,&local_50,param_1 + 0xac);
  puVar2 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar2 = local_50;
  }
  FUN_147ed1b5a(param_1 + 0x90,&local_60,param_1 + 0x9c);
  puVar3 = &DAT_149dfb77a;
  if (local_58 != 0) {
    puVar3 = local_60;
  }
  FUN_147ec7bd4(param_1 + 0x70,&local_70);
  puVar4 = &DAT_149dfb77a;
  if (local_68 != 0) {
    puVar4 = local_70;
  }
  FUN_147eaa516(&local_80,param_1);
  puVar1 = &DAT_149dfb77a;
  if (local_78 != 0) {
    puVar1 = local_80;
  }
  local_98 = puVar3;
  local_90 = puVar2;
  FUN_140002266(param_2,L"%s: Anim:\'%s\' Looping:%s Blocking:%s",puVar1,puVar4);
  if (local_80 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec7bd4 FUN_147ec7bd4 body=127 status=ok
// SIG undefined FUN_147ec7bd4(void)

undefined8 FUN_147ec7bd4(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*param_1 == 0) {
    if (param_1[2] != 0) {
      local_18 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&local_18,param_2);
      if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
    FUN_140056680(param_2,&DAT_149e01fe8);
  }
  else {
    FUN_147eca584(param_1,param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 147ec7c58 FUN_147ec7c58 body=239 status=ok
// SIG undefined FUN_147ec7c58(void)

bool FUN_147ec7c58(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = *(longlong *)(param_2 + 0x120);
  lVar1 = FUN_147ec7d48(param_1 + 0x70);
  bVar3 = true;
  if ((lVar2 != 0 && lVar1 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x3d0), lVar2 != 0)) {
    local_98 = &local_28;
    local_18 = DAT_14c846508;
    local_28 = DAT_14c8464f8;
    uStack_20 = DAT_14c846500;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_70 = 0;
    local_78 = 0x3f800000;
    local_80 = 0x3f800000;
    local_90 = 0;
    local_58 = 1;
    local_88 = 0;
    lVar2 = FUN_1434f6e2c(lVar1,*(undefined8 *)(lVar2 + 0x1c8),0);
    bVar3 = lVar2 == 0;
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec7d48 FUN_147ec7d48 body=147 status=ok
// SIG undefined FUN_147ec7d48(void)

longlong FUN_147ec7d48(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = param_1[2];
  if ((*(longlong *)(param_2 + 0x118) != 0) && (*param_1 != 0)) {
    FUN_147ed5f73(&local_28,*(longlong *)(param_2 + 0x118),param_1,param_1 + 1);
    if (local_20 == '\x01') {
      lVar2 = local_28;
    }
  }
  if (lVar2 != 0) {
    lVar1 = FUN_145992be8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_147ec7d9d;
  }
  lVar2 = 0;
LAB_147ec7d9d:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec7ddc FUN_147ec7ddc body=186 status=ok
// SIG undefined FUN_147ec7ddc(void)

undefined8 FUN_147ec7ddc(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147ec7bd4(param_1 + 0x70,&local_40);
  puVar2 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar2 = local_40;
  }
  FUN_147eaa516(&local_50,param_1);
  puVar1 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar1 = local_50;
  }
  FUN_140002266(param_2,L"%s: \'%s\'",puVar1,puVar2);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec7e9c FUN_147ec7e9c body=83 status=ok
// SIG undefined FUN_147ec7e9c(void)

undefined8 FUN_147ec7e9c(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x70);
  if (lVar2 != 0) {
    uVar1 = FUN_1410df250();
    lVar2 = FUN_14092e757(uVar1,lVar2,param_2,0);
    if (lVar2 != 0) {
      uVar1 = FUN_147ec7338(param_1,param_2,lVar2);
      return uVar1;
    }
  }
  return 1;
}



// FUNCTION 147ec7ef0 FUN_147ec7ef0 body=155 status=ok
// SIG undefined FUN_147ec7ef0(void)

undefined8 FUN_147ec7ef0(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x70) == 0) {
    FUN_140056680(&local_28,&DAT_149e01fe8);
  }
  else {
    local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x18);
    FUN_1400021e4(&local_18,&local_28);
  }
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"Push Action: %s",puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147ec7f90 FUN_147ec7f90 body=2583 status=ok
// SIG undefined FUN_147ec7f90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_147ec7f90(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  double *pdVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_158 [40];
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  plVar1 = *(longlong **)(param_2 + 0x120);
  uVar7 = 1;
  if ((plVar1 == (longlong *)0x0) || (plVar1[0x7a] == 0)) goto LAB_147ec8008;
  *param_3 = 0;
  uVar20 = DAT_14cb1f0a8._4_4_;
  uVar19 = (undefined4)DAT_14cb1f0a8;
  uVar18 = DAT_14cb1f0a0._4_4_;
  *(undefined4 *)(param_3 + 1) = (undefined4)DAT_14cb1f0a0;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar18;
  *(undefined4 *)(param_3 + 2) = uVar19;
  *(undefined4 *)((longlong)param_3 + 0x14) = uVar20;
  param_3[3] = (longlong)DAT_14cb1f0b0;
  *(undefined1 *)(param_3 + 4) = 0;
  fVar8 = (float)FUN_147ec0da0(param_1 + 0x98);
  fVar8 = cosf(fVar8 * 0.017453292);
  lVar2 = plVar1[0x7a];
  lVar6 = *(longlong *)(lVar2 + 0x1c8);
  if (lVar6 == 0) {
    pdVar4 = (double *)&DAT_14c8464e0;
    uVar18 = (undefined4)DAT_14c8464f0;
    uVar19 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar18 = (undefined4)*(undefined8 *)(lVar6 + 0x270);
    uVar19 = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x270) >> 0x20);
    pdVar4 = (double *)(lVar6 + 0x260);
  }
  dVar9 = *pdVar4;
  dVar13 = pdVar4[1];
  uVar3 = *(undefined8 *)(param_2 + 0x118);
  lVar6 = *(longlong *)(param_1 + 0x88);
  if (lVar6 == 0) {
LAB_147ec8118:
    lVar6 = 0;
  }
  else {
    lVar5 = FUN_1411c53f8();
    if (((lVar5 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar5 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) goto LAB_147ec8118;
    lVar6 = *(longlong *)(param_1 + 0x88);
  }
  lVar5 = FUN_1412dbfa6();
  if (lVar6 == lVar5) {
    lVar6 = FUN_147eb9650(uVar3,*(undefined2 *)(param_1 + 0x90));
    if (lVar6 == 0) goto LAB_147ec8008;
    lVar5 = FUN_144a6c4d8();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_147ec8008;
    lVar5 = *(longlong *)(lVar6 + 0x1c8);
    if (lVar5 == 0) {
      pdVar4 = (double *)&DAT_14c8464e0;
      uVar20 = (undefined4)DAT_14c8464f0;
      uVar21 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar20 = (undefined4)*(undefined8 *)(lVar5 + 0x270);
      uVar21 = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x270) >> 0x20);
      pdVar4 = (double *)(lVar5 + 0x260);
    }
    dVar17 = *pdVar4;
    dVar14 = pdVar4[1];
    if (*(longlong *)(lVar2 + 0x1c8) == 0) {
      local_a8 = DAT_14c8462e8;
      local_b8 = DAT_14c8462d8;
      uStack_b0 = DAT_14c8462e0;
    }
    else {
      FUN_14141a100(*(longlong *)(lVar2 + 0x1c8),&local_b8);
    }
    if (((9.999999747378752e-05 < ABS(local_b8)) || (9.999999747378752e-05 < ABS(uStack_b0))) ||
       (9.999999747378752e-05 < ABS(local_a8))) {
      dVar17 = dVar17 - dVar9;
      dVar14 = dVar14 - dVar13;
      if (((ABS(dVar17) <= 9.999999747378752e-05) && (ABS(dVar14) <= 9.999999747378752e-05)) &&
         (ABS((double)CONCAT44(uVar21,uVar20) - (double)CONCAT44(uVar19,uVar18)) <=
          9.999999747378752e-05)) goto LAB_147ec845d;
      dVar9 = local_b8 * local_b8 + uStack_b0 * uStack_b0;
      dVar13 = 0.0;
      if (dVar9 <= 9.99999993922529e-09) {
        dVar15 = 0.0;
        dVar11 = uStack_b0;
        dVar9 = local_b8;
      }
      else {
        dVar9 = 1.0 / SQRT(dVar9);
        dVar15 = dVar9 * 0.0;
        dVar11 = uStack_b0 * dVar9;
        dVar9 = local_b8 * dVar9;
      }
      dVar16 = dVar17 * dVar17 + dVar14 * dVar14;
      if (9.99999993922529e-09 < dVar16) {
        dVar13 = 1.0 / SQRT(dVar16);
        dVar17 = dVar17 * dVar13;
        dVar14 = dVar14 * dVar13;
        dVar13 = dVar13 * 0.0;
      }
      dVar9 = dVar11 * dVar14 + dVar9 * dVar17 + dVar15 * dVar13;
    }
    else {
LAB_147ec845d:
      dVar9 = 1.0;
    }
    uVar7 = 0;
    if ((double)fVar8 <= dVar9) goto LAB_147ec8008;
    (**(code **)(*plVar1 + 0x828))(plVar1,lVar6,2);
    *param_3 = lVar6;
    *(undefined1 *)(param_3 + 4) = 1;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x88);
    if (lVar6 == 0) {
LAB_147ec815b:
      lVar6 = 0;
    }
    else {
      lVar5 = FUN_1411c53f8();
      if (((lVar5 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar5 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
          lVar5 + 0x30)) goto LAB_147ec815b;
      lVar6 = *(longlong *)(param_1 + 0x88);
    }
    lVar5 = FUN_1458b8ba0();
    if (lVar6 == lVar5) {
      FUN_147eb02a8(uVar3,&local_b8,*(undefined2 *)(param_1 + 0x90));
      dVar11 = local_a8;
      dVar14 = uStack_b0;
      dVar17 = local_b8;
      uVar7 = 1;
      if ((local_b8 <= -(double)CONCAT44(DAT_14cb1f0a0._4_4_,(undefined4)DAT_14cb1f0a0)) ||
         ((double)CONCAT44(DAT_14cb1f0a0._4_4_,(undefined4)DAT_14cb1f0a0) <= local_b8))
      goto LAB_147ec8008;
      if ((uStack_b0 <= -(double)CONCAT44(DAT_14cb1f0a8._4_4_,(undefined4)DAT_14cb1f0a8)) ||
         ((double)CONCAT44(DAT_14cb1f0a8._4_4_,(undefined4)DAT_14cb1f0a8) <= uStack_b0))
      goto LAB_147ec8008;
      if ((local_a8 <= -DAT_14cb1f0b0) || (DAT_14cb1f0b0 <= local_a8)) goto LAB_147ec8008;
      if (*(longlong *)(lVar2 + 0x1c8) == 0) {
        local_c8 = DAT_14c8462e8;
        local_d8 = DAT_14c8462d8;
        dStack_d0 = DAT_14c8462e0;
      }
      else {
        FUN_14141a100(*(longlong *)(lVar2 + 0x1c8),&local_d8);
      }
      if (((9.999999747378752e-05 < ABS(local_d8)) || (9.999999747378752e-05 < ABS(dStack_d0))) ||
         (9.999999747378752e-05 < ABS(local_c8))) {
        dVar17 = dVar17 - dVar9;
        dVar14 = dVar14 - dVar13;
        if (((ABS(dVar17) <= 9.999999747378752e-05) && (ABS(dVar14) <= 9.999999747378752e-05)) &&
           (ABS(dVar11 - (double)CONCAT44(uVar19,uVar18)) <= 9.999999747378752e-05))
        goto LAB_147ec860e;
        dVar9 = local_d8 * local_d8 + dStack_d0 * dStack_d0;
        dVar13 = 0.0;
        if (dVar9 <= 9.99999993922529e-09) {
          dVar15 = 0.0;
          dVar11 = dStack_d0;
          dVar9 = local_d8;
        }
        else {
          dVar9 = 1.0 / SQRT(dVar9);
          dVar15 = dVar9 * 0.0;
          dVar11 = dStack_d0 * dVar9;
          dVar9 = local_d8 * dVar9;
        }
        dVar16 = dVar17 * dVar17 + dVar14 * dVar14;
        if (9.99999993922529e-09 < dVar16) {
          dVar13 = 1.0 / SQRT(dVar16);
          dVar17 = dVar17 * dVar13;
          dVar14 = dVar14 * dVar13;
          dVar13 = dVar13 * 0.0;
        }
        dVar9 = dVar11 * dVar14 + dVar9 * dVar17 + dVar15 * dVar13;
      }
      else {
LAB_147ec860e:
        dVar9 = 1.0;
      }
      uVar7 = 0;
      if ((double)fVar8 <= dVar9) goto LAB_147ec8008;
      local_e8 = local_a8;
      local_f8 = (undefined4)local_b8;
      uStack_f4 = local_b8._4_4_;
      uStack_f0 = (undefined4)uStack_b0;
      uStack_ec = uStack_b0._4_4_;
      (**(code **)(*plVar1 + 0x820))(plVar1,&local_f8,2);
      param_3[3] = (longlong)local_a8;
      *(undefined4 *)(param_3 + 1) = (undefined4)local_b8;
      *(undefined4 *)((longlong)param_3 + 0xc) = local_b8._4_4_;
      *(undefined4 *)(param_3 + 2) = (undefined4)uStack_b0;
      *(undefined4 *)((longlong)param_3 + 0x14) = uStack_b0._4_4_;
    }
    else {
      lVar6 = *(longlong *)(param_1 + 0x88);
      if (lVar6 == 0) {
LAB_147ec819e:
        lVar6 = 0;
      }
      else {
        lVar5 = FUN_1411c53f8();
        if (((lVar5 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar5 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
            lVar5 + 0x30)) goto LAB_147ec819e;
        lVar6 = *(longlong *)(param_1 + 0x88);
      }
      lVar5 = FUN_145a752c0();
      if (lVar6 != lVar5) goto LAB_147ec8008;
      FUN_147eb9d30(uVar3,&local_b8,*(undefined2 *)(param_1 + 0x90));
      if ((local_b8 == DAT_14cb1f060) && (!NAN(local_b8) && !NAN(DAT_14cb1f060))) {
        if ((uStack_b0 == DAT_14cb1f068) && (!NAN(uStack_b0) && !NAN(DAT_14cb1f068))) {
          if ((local_a8 == _DAT_14cb1f070) && (!NAN(local_a8) && !NAN(_DAT_14cb1f070))) {
            uVar7 = 1;
            goto LAB_147ec8008;
          }
        }
      }
      FUN_144a76660(&local_b8,&local_d8);
      if (*(longlong *)(lVar2 + 0x1c8) == 0) {
        local_108 = DAT_14c8462e8;
        local_118 = DAT_14c8462d8;
        dStack_110 = DAT_14c8462e0;
      }
      else {
        FUN_14141a100(*(longlong *)(lVar2 + 0x1c8),&local_118);
      }
      if (((9.999999747378752e-05 < ABS(local_118)) || (9.999999747378752e-05 < ABS(dStack_110))) ||
         (9.999999747378752e-05 < ABS(local_108))) {
        if (((ABS(local_d8) <= 9.999999747378752e-05) && (ABS(dStack_d0) <= 9.999999747378752e-05))
           && (ABS(local_c8) <= 9.999999747378752e-05)) goto LAB_147ec86d9;
        dVar14 = local_118 * local_118 + dStack_110 * dStack_110;
        dVar17 = 0.0;
        if (dVar14 <= 9.99999993922529e-09) {
          dVar15 = 0.0;
          dVar11 = dStack_110;
          dVar14 = local_118;
        }
        else {
          dVar14 = 1.0 / SQRT(dVar14);
          dVar15 = dVar14 * 0.0;
          dVar11 = dStack_110 * dVar14;
          dVar14 = local_118 * dVar14;
        }
        dVar16 = local_d8 * local_d8 + dStack_d0 * dStack_d0;
        dVar10 = dStack_d0;
        dVar12 = local_d8;
        if (9.99999993922529e-09 < dVar16) {
          dVar17 = 1.0 / SQRT(dVar16);
          dVar12 = local_d8 * dVar17;
          dVar10 = dStack_d0 * dVar17;
          dVar17 = dVar17 * 0.0;
        }
        dVar17 = dVar11 * dVar10 + dVar14 * dVar12 + dVar15 * dVar17;
      }
      else {
LAB_147ec86d9:
        dVar17 = 1.0;
      }
      uVar7 = 0;
      if ((double)fVar8 <= dVar17) goto LAB_147ec8008;
      dVar17 = (double)CONCAT44(uVar19,uVar18) + local_c8 * 10000.0;
      dVar13 = dVar13 + dStack_d0 * 10000.0;
      dVar9 = local_d8 * 10000.0 + dVar9;
      local_130 = dVar9;
      local_128 = dVar13;
      local_120 = dVar17;
      (**(code **)(*plVar1 + 0x820))(plVar1,&local_130,2);
      param_3[1] = (longlong)dVar9;
      param_3[2] = (longlong)dVar13;
      param_3[3] = (longlong)dVar17;
    }
  }
  uVar7 = 3;
LAB_147ec8008:
  if ((local_a0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec89a8 FUN_147ec89a8 body=738 status=ok
// SIG undefined FUN_147ec89a8(void)

void FUN_147ec89a8(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  double *pdVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_b8 [40];
  double local_90;
  double local_88;
  double local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(param_2 + 0x120);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x3d0) == 0)) {
    FUN_147ea92c6(param_2,param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_b8);
  }
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x3d0) + 0x1c8);
  if (lVar2 == 0) {
    local_68 = DAT_14c8462e8;
    local_78 = (undefined4)DAT_14c8462d8;
    uStack_74 = DAT_14c8462d8._4_4_;
    uStack_70 = (undefined4)DAT_14c8462e0;
    uStack_6c = DAT_14c8462e0._4_4_;
  }
  else {
    FUN_14141a100(lVar2,&local_78);
  }
  FUN_147ea331e(lVar1,&local_90,2);
  if ((((local_90 != DAT_14cb1f0a0) || (NAN(local_90) || NAN(DAT_14cb1f0a0))) ||
      (local_88 != DAT_14cb1f0a8)) || (NAN(local_88) || NAN(DAT_14cb1f0a8))) {
LAB_147ec8ab9:
    lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x3d0) + 0x1c8);
    if (lVar2 == 0) {
      pdVar3 = (double *)&DAT_14c8464e0;
      dVar8 = DAT_14c8464f0;
    }
    else {
      dVar8 = *(double *)(lVar2 + 0x270);
      pdVar3 = (double *)(lVar2 + 0x260);
    }
    local_88 = local_88 - pdVar3[1];
    local_90 = local_90 - *pdVar3;
    dVar7 = (double)CONCAT44(uStack_74,local_78);
    if ((((ABS(dVar7) <= 9.999999747378752e-05) &&
         (ABS((double)CONCAT44(uStack_6c,uStack_70)) <= 9.999999747378752e-05)) &&
        (ABS(local_68) <= 9.999999747378752e-05)) ||
       (((ABS(local_90) <= 9.999999747378752e-05 && (ABS(local_88) <= 9.999999747378752e-05)) &&
        (ABS(local_80 - dVar8) <= 9.999999747378752e-05)))) {
      dVar8 = 1.0;
    }
    else {
      dVar8 = (double)CONCAT44(uStack_6c,uStack_70);
      dVar9 = dVar7 * dVar7 + dVar8 * dVar8;
      dVar10 = 0.0;
      if (dVar9 <= 9.99999993922529e-09) {
        dVar9 = 0.0;
      }
      else {
        dVar9 = 1.0 / SQRT(dVar9);
        dVar7 = dVar7 * dVar9;
        dVar8 = dVar8 * dVar9;
        dVar9 = dVar9 * 0.0;
      }
      dVar11 = local_90 * local_90 + local_88 * local_88;
      if (9.99999993922529e-09 < dVar11) {
        dVar10 = 1.0 / SQRT(dVar11);
        local_90 = local_90 * dVar10;
        local_88 = local_88 * dVar10;
        dVar10 = dVar10 * 0.0;
      }
      dVar8 = dVar8 * local_88 + dVar7 * local_90 + dVar9 * dVar10;
    }
    fVar6 = (float)FUN_147ec0da0(param_1 + 0x98,param_2);
    fVar6 = cosf(fVar6 * 0.017453292);
    if (dVar8 < (double)fVar6) goto LAB_147ec8bb1;
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
    if ((local_80 != DAT_14cb1f0b0) || (NAN(local_80) || NAN(DAT_14cb1f0b0))) goto LAB_147ec8ab9;
  }
  FUN_147ec8cb6(lVar1,param_3);
  uVar4 = FUN_147ea92c6(param_2,param_1);
  FUN_147ea6e12(param_2,uVar4,uVar5);
LAB_147ec8bb1:
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec8cb6 FUN_147ec8cb6 body=179 status=ok
// SIG undefined FUN_147ec8cb6(void)

void FUN_147ec8cb6(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((char)param_2[4] == '\x01') {
    lVar1 = *param_2;
    if ((int)param_1[0x8b] < 3) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_14479d2ce(param_1[0x8a] + 0x40);
    }
    if (lVar1 != lVar2) goto LAB_147ec8d4b;
  }
  else {
    FUN_147ea331e(param_1,&local_38,2);
    if (((((double)param_2[1] != local_38) || (NAN((double)param_2[1]) || NAN(local_38))) ||
        ((double)param_2[2] != local_30)) || (NAN((double)param_2[2]) || NAN(local_30)))
    goto LAB_147ec8d4b;
    if (((double)param_2[3] != local_28) || (NAN((double)param_2[3]) || NAN(local_28)))
    goto LAB_147ec8d4b;
  }
  (**(code **)(*param_1 + 0x830))(param_1,2);
LAB_147ec8d4b:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ec8d6a FUN_147ec8d6a body=36 status=ok
// SIG undefined FUN_147ec8d6a(void)

undefined8 FUN_147ec8d6a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  if (*(longlong *)(param_2 + 0x120) != 0) {
    FUN_147ec8cb6(*(longlong *)(param_2 + 0x120),param_3);
  }
  return 2;
}



// FUNCTION 147ec8d8e FUN_147ec8d8e body=1187 status=ok
// SIG undefined FUN_147ec8d8e(void)

/* WARNING: Removing unreachable block (ram,0x000147ec8e7d) */
/* WARNING: Removing unreachable block (ram,0x000147ec90ba) */

void FUN_147ec8d8e(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  double *pdVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined4 uStack_94;
  double local_90;
  double local_88;
  undefined8 uStack_80;
  double local_78;
  undefined2 *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1400021e4(param_1 + 0x80,&local_70);
  puVar5 = &DAT_149dfb77a;
  if (local_68 != 0) {
    puVar5 = local_70;
  }
  FUN_147eaa516(&local_a0,param_1);
  puVar7 = &DAT_149dfb77a;
  if (local_98 != 0) {
    puVar7 = local_a0;
  }
  FUN_140002266(&local_88,L"%s: %s",puVar7,puVar5);
  iVar1 = (int)param_5[1];
  *(uint *)(param_5 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_5 + 0xc) < iVar1 + 1U) {
    FUN_1447a1bd6(param_5,iVar1);
  }
  lVar2 = *param_5;
  lVar6 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar6) = 0;
  *(double *)(lVar2 + lVar6) = local_88;
  *(undefined4 *)(lVar2 + 8 + lVar6) = (undefined4)uStack_80;
  *(undefined4 *)(lVar2 + 0xc + lVar6) = uStack_80._4_4_;
  uStack_80 = 0.0;
  local_88 = 0.0;
  if (local_a0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar2 = *(longlong *)(param_2 + 0x120);
  if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x3d0) == 0)) {
    FUN_140056680(&local_88,L"Controller or Pawn is NULL");
    iVar1 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(param_5,iVar1);
    }
    lVar2 = *param_5;
    lVar6 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar6) = 0;
    *(double *)(lVar2 + lVar6) = local_88;
    local_88 = 0.0;
    *(undefined4 *)(lVar2 + 8 + lVar6) = (undefined4)uStack_80;
    *(undefined4 *)(lVar2 + 0xc + lVar6) = uStack_80._4_4_;
    uStack_80 = 0.0;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(lVar2 + 0x3d0) + 0x1c8);
    if (lVar6 == 0) {
      local_78 = DAT_14c8462e8;
      local_88 = DAT_14c8462d8;
      uStack_80 = DAT_14c8462e0;
    }
    else {
      FUN_14141a100(lVar6,&local_88);
    }
    FUN_147ea331e(lVar2,&local_a0,2);
    if (((((double)local_a0 != DAT_14cb1f0a0) || (NAN((double)local_a0) || NAN(DAT_14cb1f0a0))) ||
        ((double)CONCAT44(uStack_94,local_98) != DAT_14cb1f0a8)) ||
       (((NAN((double)CONCAT44(uStack_94,local_98)) || NAN(DAT_14cb1f0a8) ||
         (local_90 != DAT_14cb1f0b0)) || (NAN(local_90) || NAN(DAT_14cb1f0b0))))) {
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x3d0) + 0x1c8);
      if (lVar2 == 0) {
        pdVar4 = (double *)&DAT_14c8464e0;
        dVar8 = DAT_14c8464f0;
      }
      else {
        pdVar4 = (double *)(lVar2 + 0x260);
        dVar8 = *(double *)(lVar2 + 0x270);
      }
      dVar10 = (double)CONCAT44(uStack_94,local_98) - pdVar4[1];
      dVar9 = (double)local_a0 - *pdVar4;
      if ((((ABS(local_88) <= 9.999999747378752e-05) && (ABS(uStack_80) <= 9.999999747378752e-05))
          && (ABS(local_78) <= 9.999999747378752e-05)) ||
         (((ABS(dVar9) <= 9.999999747378752e-05 && (ABS(dVar10) <= 9.999999747378752e-05)) &&
          (ABS(local_90 - dVar8) <= 9.999999747378752e-05)))) {
        dVar8 = 1.0;
      }
      else {
        dVar12 = local_88 * local_88 + uStack_80 * uStack_80;
        dVar8 = 0.0;
        if (dVar12 <= 9.99999993922529e-09) {
          dVar13 = 0.0;
          dVar11 = local_88;
          dVar12 = uStack_80;
        }
        else {
          dVar12 = 1.0 / SQRT(dVar12);
          dVar13 = dVar12 * 0.0;
          dVar11 = local_88 * dVar12;
          dVar12 = uStack_80 * dVar12;
        }
        dVar3 = dVar9 * dVar9 + dVar10 * dVar10;
        if (9.99999993922529e-09 < dVar3) {
          dVar8 = 1.0 / SQRT(dVar3);
          dVar9 = dVar9 * dVar8;
          dVar10 = dVar10 * dVar8;
          dVar8 = dVar8 * 0.0;
        }
        dVar8 = dVar12 * dVar10 + dVar11 * dVar9 + dVar13 * dVar8;
      }
      dVar9 = dVar8;
      if (1.0 <= dVar8) {
        dVar9 = 1.0;
      }
      dVar8 = acos((double)(~-(ulonglong)(dVar8 < -1.0) & (ulonglong)dVar9 |
                           -(ulonglong)(dVar8 < -1.0) & 0xbff0000000000000));
      FUN_140002266(&local_b0,L"Current angle: %.2f",dVar8 * 57.29577951308232);
    }
    else {
      FUN_140056680(&local_b0,L"FocalPoint is an Invalid Location");
    }
    iVar1 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(param_5,iVar1);
    }
    lVar2 = *param_5;
    lVar6 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar6) = 0;
    *(undefined8 *)(lVar2 + lVar6) = local_b0;
    local_b0 = 0;
    *(undefined4 *)(lVar2 + 8 + lVar6) = (undefined4)local_a8;
    *(undefined4 *)(lVar2 + 0xc + lVar6) = local_a8._4_4_;
    local_a8 = 0;
  }
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ec9232 FUN_147ec9232 body=189 status=ok
// SIG undefined FUN_147ec9232(void)

undefined8 FUN_147ec9232(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400021e4(param_1 + 0x80,&local_40);
  puVar2 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar2 = local_40;
  }
  FUN_147eaa516(&local_50,param_1);
  puVar1 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar1 = local_50;
  }
  FUN_140002266(param_2,L"%s: %s",puVar1,puVar2);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec9312 FUN_147ec9312 body=241 status=ok
// SIG undefined FUN_147ec9312(void)

undefined8 FUN_147ec9312(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  uVar6 = 1;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    cVar3 = FUN_1438465cc(param_2);
    if ((cVar3 != '\0') && (0 < (longlong)*(int *)(param_2 + 0x170))) {
      lVar5 = *(longlong *)(param_2 + 0x168);
      lVar4 = (longlong)*(int *)(param_2 + 0x170) * 0x58;
      lVar1 = lVar5 + lVar4;
      plVar7 = (longlong *)(lVar1 + -0x10);
      if (*(int *)(lVar1 + -8) != 3) {
        FUN_1446efa72(plVar7,0,3,0x10);
        *(undefined4 *)(lVar5 + lVar4 + -8) = 3;
      }
      puVar2 = (undefined8 *)*plVar7;
      *puVar2 = &PTR_LAB_14ac046a0;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      puVar2[2] = lVar5;
      *puVar2 = &PTR_FUN_14ac04630;
      puVar2[3] = 0;
      FUN_14485c47a(puVar2 + 3,param_1);
      puVar2[4] = &LAB_147ec9404;
      *(undefined4 *)(puVar2 + 5) = 0;
      uVar6 = 3;
    }
  }
  return uVar6;
}



// FUNCTION 147ec9412 FUN_147ec9412 body=94 status=ok
// SIG undefined FUN_147ec9412(void)

void FUN_147ec9412(longlong *param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = FUN_147ea72f6(param_2,param_1);
  lVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_2 + 0x170))) {
    lVar2 = (ulonglong)*(ushort *)((longlong)param_1 + 0x52) +
            *(longlong *)(*(longlong *)(param_2 + 0x168) + 0x30 + (ulonglong)uVar1 * 0x58);
  }
                    /* WARNING: Could not recover jumptable at 0x000147ec946d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x310))(param_1,param_2,lVar2,param_3);
  return;
}



// FUNCTION 147ec9470 FUN_147ec9470 body=371 status=ok
// SIG undefined FUN_147ec9470(void)

undefined8 FUN_147ec9470(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined2 *puVar4;
  wchar_t *pwVar5;
  undefined2 *puVar6;
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  pwVar5 = L" (Blackboard not compatible)";
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x38);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    else if (lVar1 == 0) goto LAB_147ec9500;
    lVar3 = *(longlong *)(param_1 + 0x70);
    if (lVar3 != 0) {
      lVar3 = (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x10))(lVar3 + 0x28);
      if (lVar3 != 0) {
        if (lVar1 == lVar3) {
          pwVar5 = L"";
        }
        else {
          cVar2 = FUN_147eb0c88(lVar1,lVar3);
          pwVar5 = L" (Blackboard not compatible)";
          if (cVar2 != '\0') {
            pwVar5 = L"";
          }
        }
      }
    }
  }
LAB_147ec9500:
  if (*(longlong *)(param_1 + 0x70) == 0) {
    FUN_140056680(&local_48,&DAT_149e01fe8);
  }
  else {
    local_58 = *(undefined2 **)(*(longlong *)(param_1 + 0x70) + 0x18);
    FUN_1400021e4(&local_58,&local_48);
  }
  puVar4 = &DAT_149dfb77a;
  if (local_40 != 0) {
    puVar4 = local_48;
  }
  FUN_147eaa516(&local_58,param_1);
  puVar6 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar6 = local_58;
  }
  local_68 = pwVar5;
  FUN_140002266(param_2,L"%s: %s%s",puVar6,puVar4);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec95f6 FUN_147ec95f6 body=52 status=ok
// SIG undefined FUN_147ec95f6(void)

void FUN_147ec95f6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_1 + 0x78);
    }
  }
  *(longlong *)(param_1 + 0x80) = lVar1;
  return;
}



// FUNCTION 147ec962a FUN_147ec962a body=94 status=ok
// SIG undefined FUN_147ec962a(void)

void FUN_147ec962a(longlong *param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = FUN_147ea72f6(param_2,param_1);
  lVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_2 + 0x170))) {
    lVar2 = (ulonglong)*(ushort *)((longlong)param_1 + 0x52) +
            *(longlong *)(*(longlong *)(param_2 + 0x168) + 0x30 + (ulonglong)uVar1 * 0x58);
  }
                    /* WARNING: Could not recover jumptable at 0x000147ec9685. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x310))(param_1,param_2,lVar2,param_3);
  return;
}



// FUNCTION 147ec9688 FUN_147ec9688 body=186 status=ok
// SIG undefined FUN_147ec9688(void)

undefined8 FUN_147ec9688(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400021e4(param_1 + 0x70,&local_40);
  puVar2 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar2 = local_40;
  }
  FUN_147eaa516(&local_50,param_1);
  puVar1 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar1 = local_50;
  }
  FUN_140002266(param_2,L"%s: %s",puVar1,puVar2);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec9744 FUN_147ec9744 body=436 status=ok
// SIG undefined FUN_147ec9744(void)

/* WARNING: Removing unreachable block (ram,0x000147ec9804) */
/* WARNING: Removing unreachable block (ram,0x000147ec98c6) */

void FUN_147ec9744(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong *in_stack_00000028;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x80) == 0) {
    FUN_140056680(&local_40,&DAT_149e01fe8);
  }
  else {
    local_30 = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x18);
    FUN_1400021e4(&local_30,&local_40);
  }
  puVar4 = local_40;
  if (local_38 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_30,L"subtree: %s",puVar4);
  iVar1 = (int)in_stack_00000028[1];
  *(uint *)(in_stack_00000028 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)in_stack_00000028 + 0xc) < iVar1 + 1U) {
    FUN_1447a1bd6(in_stack_00000028,iVar1);
  }
  lVar2 = *in_stack_00000028;
  lVar3 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar3) = 0;
  *(undefined8 *)(lVar2 + lVar3) = local_30;
  *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_28;
  *(undefined4 *)(lVar2 + 0xc + lVar3) = local_28._4_4_;
  local_28 = 0;
  local_30 = 0;
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_14010318a(*(longlong *)(param_1 + 0x80),&local_40,0);
    puVar4 = local_40;
    if (local_38 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_30,L"subtree path: %s",puVar4);
    iVar1 = (int)in_stack_00000028[1];
    *(uint *)(in_stack_00000028 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)in_stack_00000028 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(in_stack_00000028,iVar1);
    }
    lVar2 = *in_stack_00000028;
    lVar3 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar3) = 0;
    *(undefined8 *)(lVar2 + lVar3) = local_30;
    *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_28;
    *(undefined4 *)(lVar2 + 0xc + lVar3) = local_28._4_4_;
    local_28 = 0;
    local_30 = 0;
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec990e FUN_147ec990e body=79 status=ok
// SIG undefined FUN_147ec990e(void)

void FUN_147ec990e(longlong param_1)

{
  longlong lVar1;
  
  FUN_14384b66a();
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x38);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
  }
  FUN_147ee02da(param_1 + 0xf8,param_1,lVar1);
  return;
}



// FUNCTION 147ec995e FUN_147ec995e body=168 status=ok
// SIG undefined FUN_147ec995e(void)

undefined8 FUN_147ec995e(longlong param_1,longlong param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_2 + 0xa8);
  uVar3 = 1;
  if (lVar4 != 0) {
    lVar2 = FUN_14490fee6();
    if ((((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) != lVar2 + 0x30)) || (lVar4 = *(longlong *)(lVar4 + 0x3d0), lVar4 != 0)) &&
       ((*(byte *)(param_1 + 0x13c) & 2) != 0)) {
      iVar1 = FUN_147ee03dc(param_1 + 0xf8,lVar4,*(undefined8 *)(param_2 + 0x118),param_1 + 0x148);
      *param_3 = iVar1;
      if (-1 < iVar1) {
        FUN_147ea8c78(param_2,param_1,DAT_14cb1f8e0,iVar1);
        uVar3 = 3;
      }
    }
  }
  return uVar3;
}



// FUNCTION 147ec9a06 FUN_147ec9a06 body=62 status=ok
// SIG undefined FUN_147ec9a06(void)

undefined8 FUN_147ec9a06(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0xb0);
  if (lVar1 == 0) {
    lVar1 = FUN_1448abda6(param_2);
  }
  lVar1 = FUN_147ec5440(lVar1);
  if (lVar1 != 0) {
    FUN_14384b5d0(lVar1,*param_3);
  }
  return 2;
}



// FUNCTION 147ec9a44 FUN_147ec9a44 body=437 status=ok
// SIG undefined FUN_147ec9a44(void)

undefined8 FUN_147ec9a44(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(byte *)(param_1 + 0x13c) & 1) == 0) {
    FUN_1400021e4(param_1 + 0x80,&local_48);
    puVar4 = local_48;
    if (local_40 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    if (*(longlong *)(param_1 + 0xf8) == 0) {
      FUN_140056680(&local_58,&DAT_149e01fe8);
    }
    else {
      local_68 = *(undefined2 **)(*(longlong *)(param_1 + 0xf8) + 0x18);
      FUN_1400021e4(&local_68,&local_58);
    }
    puVar3 = &DAT_149dfb77a;
    if (local_50 != 0) {
      puVar3 = local_58;
    }
    FUN_147eaa516(&local_68,param_1);
    puVar2 = &DAT_149dfb77a;
    if (local_60 != 0) {
      puVar2 = local_68;
    }
    pwVar1 = L"%s: %s\nResult Blackboard key: %s";
    local_78 = puVar4;
  }
  else {
    FUN_1400021e4(param_1 + 0x80,&local_48);
    puVar4 = &DAT_149dfb77a;
    if (local_40 != 0) {
      puVar4 = local_48;
    }
    FUN_1400021e4(param_1 + 0x120,&local_58);
    puVar3 = &DAT_149dfb77a;
    if (local_50 != 0) {
      puVar3 = local_58;
    }
    FUN_147eaa516(&local_68,param_1);
    puVar2 = &DAT_149dfb77a;
    if (local_60 != 0) {
      puVar2 = local_68;
    }
    pwVar1 = L"%s: EQS query indicated by %s blackboard key\nResult Blackboard key: %s";
    local_78 = puVar4;
  }
  FUN_140002266(param_2,pwVar1,puVar2,puVar3);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147ec9bfa FUN_147ec9bfa body=169 status=ok
// SIG undefined FUN_147ec9bfa(void)

/* WARNING: Removing unreachable block (ram,0x000147ec9c81) */

void FUN_147ec9bfa(undefined8 param_1,undefined8 param_2,undefined4 *param_3,int param_4,
                  longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_4 == 1) {
    FUN_140002266(&local_28,L"request: %d",*param_3);
    iVar1 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar1 + 1U) {
      FUN_1447a1bd6(param_5,iVar1);
    }
    lVar2 = *param_5;
    lVar3 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar3) = 0;
    *(undefined8 *)(lVar2 + lVar3) = local_28;
    local_28 = 0;
    *(undefined4 *)(lVar2 + 8 + lVar3) = (undefined4)local_20;
    *(undefined4 *)(lVar2 + 0xc + lVar3) = local_20._4_4_;
    local_20 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ec9cbc FUN_147ec9cbc body=228 status=ok
// SIG undefined FUN_147ec9cbc(void)

void FUN_147ec9cbc(longlong param_1)

{
  longlong lVar1;
  
  FUN_1446e0b6e();
  if (0 < *(int *)(param_1 + 0xa8)) {
    FUN_147ee0214(param_1,param_1 + 0xb0,param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0xa8) = 0;
    if (*(int *)(param_1 + 0xac) != 0) {
      FUN_147ed5950(param_1 + 0xa0,0);
    }
  }
  if ((*(longlong *)(param_1 + 0xf8) == 0) && ((*(byte *)(param_1 + 0x13c) & 1) == 0)) {
    lVar1 = *(longlong *)(param_1 + 0x98);
    if (DAT_14c950c29 == '\x01') {
      if (lVar1 == 0) {
        lVar1 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar1 = *(longlong *)(param_1 + 0x98);
      }
    }
    *(longlong *)(param_1 + 0xf8) = lVar1;
    FUN_147e9c936(param_1 + 0x100,param_1 + 0xb0);
    *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_1 + 0xc0);
    FUN_147e9c640(param_1 + 0x110,param_1 + 200);
    *(uint *)(param_1 + 0x13c) =
         *(uint *)(param_1 + 0x13c) & 0xfffffffe | (uint)*(byte *)(param_1 + 0xf0);
  }
  return;
}



// FUNCTION 147ec9da4 FUN_147ec9da4 body=67 status=ok
// SIG undefined FUN_147ec9da4(void)

undefined8 FUN_147ec9da4(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_147ec26d0(param_1 + 0x78);
  uVar2 = FUN_147ec0da0(param_1 + 0x88,param_2);
  FUN_147ea61be(param_2,*(undefined8 *)(param_1 + 0x70),uVar2,uVar1);
  return 0;
}



// FUNCTION 147ec9de8 FUN_147ec9de8 body=292 status=ok
// SIG undefined FUN_147ec9de8(void)

undefined8 FUN_147ec9de8(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x88) == 0) {
    FUN_140002266(&local_48,L"%.2f",(double)*(float *)(param_1 + 0x94));
  }
  else {
    FUN_147eca584(param_1 + 0x88,&local_48);
  }
  puVar2 = &DAT_149dfb77a;
  if (local_40 != 0) {
    puVar2 = local_48;
  }
  FUN_1400021e4(param_1 + 0x70,&local_58);
  puVar3 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar3 = local_58;
  }
  FUN_147eaa516(&local_68,param_1);
  puVar1 = &DAT_149dfb77a;
  if (local_60 != 0) {
    puVar1 = local_68;
  }
  local_78 = puVar2;
  FUN_140002266(param_2,L"%s %s: %s s",puVar1,puVar3);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ec9f12 FUN_147ec9f12 body=179 status=ok
// SIG undefined FUN_147ec9f12(void)

undefined8 FUN_147ec9f12(longlong *param_1,undefined8 param_2,longlong param_3)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = (float)FUN_147ec0da0(param_1 + 0xe);
  fVar5 = (float)FUN_147ec0da0(param_1 + 0x10,param_2);
  uVar2 = rand();
  if ((*(byte *)((longlong)param_1 + 0x6c) & 1) != 0) {
    fVar6 = 0.0;
    if (0.0 <= fVar4 - fVar5) {
      fVar6 = fVar4 - fVar5;
    }
    uVar1 = (**(code **)(*param_1 + 0x2d8))(param_1);
    lVar3 = 0;
    if (uVar1 != 0) {
      lVar3 = param_3 - (ulonglong)(uVar1 + 3 & 0xfffffffc);
    }
    *(float *)(lVar3 + 4) = ((float)(uVar2 & 0x7fff) / 32767.0) * ((fVar4 + fVar5) - fVar6) + fVar6;
  }
  return 3;
}



// FUNCTION 147ec9fc6 FUN_147ec9fc6 body=52 status=ok
// SIG undefined FUN_147ec9fc6(void)

void FUN_147ec9fc6(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  (**(code **)(*param_1 + 0x2d8))();
  uVar1 = FUN_147ea92c6(param_2,param_1);
  FUN_147ea6e12(param_2,uVar1,0);
  return;
}



// FUNCTION 147ec9ffa FUN_147ec9ffa body=518 status=ok
// SIG undefined FUN_147ec9ffa(void)

undefined8 FUN_147ec9ffa(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x80) == 0) {
    if (ABS(*(float *)(param_1 + 0x8c)) <= 1e-08) {
      if (*(longlong *)(param_1 + 0x70) == 0) {
        FUN_140002266(&local_48,L"%.2f",(double)*(float *)(param_1 + 0x7c));
      }
      else {
        FUN_147eca584(param_1 + 0x70,&local_48);
      }
      puVar1 = &DAT_149dfb77a;
      if (local_40 != 0) {
        puVar1 = local_48;
      }
      FUN_147eaa516(&local_58,param_1);
      puVar2 = &DAT_149dfb77a;
      if (local_50 != 0) {
        puVar2 = local_58;
      }
      FUN_140002266(param_2,L"%s: %s s",puVar2,puVar1);
      goto LAB_147eca0eb;
    }
    FUN_140002266(&local_48,L"%.2f",(double)*(float *)(param_1 + 0x8c));
  }
  else {
    FUN_147eca584(param_1 + 0x80,&local_48);
  }
  puVar1 = local_48;
  if (local_40 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  if (*(longlong *)(param_1 + 0x70) == 0) {
    FUN_140002266(&local_58,L"%.2f",(double)*(float *)(param_1 + 0x7c));
  }
  else {
    FUN_147eca584(param_1 + 0x70,&local_58);
  }
  puVar2 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar2 = local_58;
  }
  FUN_147eaa516(&local_68,param_1);
  puVar3 = &DAT_149dfb77a;
  if (local_60 != 0) {
    puVar3 = local_68;
  }
  local_78 = puVar1;
  FUN_140002266(param_2,L"%s: %s s +- %s s",puVar3,puVar2);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_147eca0eb:
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147eca202 FUN_147eca202 body=276 status=ok
// SIG undefined FUN_147eca202(void)

/* WARNING: Removing unreachable block (ram,0x000147eca2e5) */

void FUN_147eca202(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  float fVar1;
  int iVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = (**(code **)(*param_1 + 0x2d8))();
  lVar4 = 0;
  if (uVar3 != 0) {
    lVar4 = param_3 - (ulonglong)(uVar3 + 3 & 0xfffffffc);
  }
  fVar1 = *(float *)(lVar4 + 4);
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    FUN_1406112c4(&local_38,(double)fVar1,1);
    puVar6 = local_38;
    if (local_30 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_28,L"remaining: %ss",puVar6);
    iVar2 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar2 + 1U) {
      FUN_1447a1bd6(param_5,iVar2);
    }
    lVar4 = *param_5;
    lVar5 = (longlong)iVar2 * 0x10;
    *(undefined8 *)(lVar4 + lVar5) = 0;
    *(undefined8 *)(lVar4 + lVar5) = local_28;
    *(undefined4 *)(lVar4 + 8 + lVar5) = (undefined4)local_20;
    *(undefined4 *)(lVar4 + 0xc + lVar5) = local_20._4_4_;
    local_20 = 0;
    local_28 = 0;
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eca31c FUN_147eca31c body=127 status=ok
// SIG undefined FUN_147eca31c(void)

void FUN_147eca31c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  
  bVar2 = DAT_14c950c29;
  if (param_2 == 0 || DAT_14c950c29 != 1) {
    *(longlong *)(param_1 + 0x40) = param_2;
    if (param_2 == 0) {
      return;
    }
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 0x40) = param_2;
    bVar2 = DAT_14c950c29;
  }
  lVar1 = *(longlong *)(param_2 + 0x38);
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c(lVar1);
  }
  else if (lVar1 == 0) {
    return;
  }
  FUN_14384992e(param_1 + 0x90,lVar1);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0xa0);
  return;
}



// FUNCTION 147eca39b FUN_147eca39b body=226 status=ok
// SIG undefined FUN_147eca39b(void)

undefined8 *
FUN_147eca39b(undefined8 *param_1,undefined8 param_2,undefined8 param_3,short *param_4,
             longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [46];
  short local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_4 == -1) {
    FUN_147eacaa8(param_2,&local_2a);
    *param_4 = local_2a;
  }
  lVar2 = FUN_147ea3df6(param_2);
  if (lVar2 != 0) {
    lVar2 = FUN_147eac578(lVar2,*param_4);
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
      lVar3 = FUN_145b603de();
      lVar2 = *(longlong *)(lVar2 + 8);
      if (((lVar2 != 0) &&
          (((lVar3 != 0 && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
           (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))))) &&
         ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30 && (*(longlong *)(lVar2 + 0x30) == param_5)))) {
        FUN_147eca47e(param_2,param_1,*param_4);
        goto LAB_147eca449;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_147eca449:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eca47e FUN_147eca47e body=182 status=ok
// SIG undefined FUN_147eca47e(void)

undefined8 * FUN_147eca47e(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((((*(longlong *)(param_1 + 0x120) != 0) &&
       (lVar2 = FUN_147eac578(*(longlong *)(param_1 + 0x120),param_3 & 0xffffffff), lVar2 != 0)) &&
      (*(longlong *)(lVar2 + 8) != 0)) &&
     (lVar4 = *(longlong *)(*(longlong *)(lVar2 + 8) + 0x10), lVar3 = FUN_145b603de(),
     lVar4 == lVar3)) {
    lVar2 = *(longlong *)(lVar2 + 8);
    pbVar1 = (byte *)(lVar2 + 0x2b);
    param_3 = param_3 & 0xffff;
    if ((*pbVar1 & 2) != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x148) + param_3 * 8);
    }
    if ((*(int *)(param_1 + 0x130) == 0) || (*(int *)(param_1 + 0x140) <= (int)param_3)) {
      lVar4 = 0;
    }
    else {
      lVar4 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x138) + param_3 * 2) +
              *(longlong *)(param_1 + 0x128);
    }
    if ((ulonglong)((uint)*pbVar1 * 2 & 4) + lVar4 != 0) {
      FUN_147eb284e(param_2,lVar2);
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 147eca534 FUN_147eca534 body=79 status=ok
// SIG undefined FUN_147eca534(void)

longlong *
FUN_147eca534(longlong *param_1,longlong param_2,longlong *param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  
  if ((((*(longlong *)(param_2 + 0x118) == 0) || (*param_3 == 0)) ||
      (FUN_147eca39b(param_1), param_1[1] == 0)) || (*param_1 == 0)) {
    lVar1 = param_5[1];
    *param_1 = *param_5;
    param_1[1] = lVar1;
  }
  return param_1;
}



// FUNCTION 147eca584 FUN_147eca584 body=204 status=ok
// SIG undefined FUN_147eca584(void)

undefined8 FUN_147eca584(undefined8 param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  int local_60;
  undefined1 *local_58;
  ulonglong *local_50;
  longlong local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400021e4(param_1,&local_68);
  puVar1 = local_68;
  if (local_60 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140230a18(local_38,puVar1);
  local_50 = &local_18;
  local_58 = local_38;
  FUN_1407adb6e(&local_48);
  FUN_140230a2e(param_2,L"Key: {0}",&local_48);
  FUN_1407adb3e(local_48,local_40);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147eca652 FUN_147eca652 body=113 status=ok
// SIG undefined FUN_147eca652(void)

longlong FUN_147eca652(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = param_1[2];
  if (((param_2 != 0) && (*(longlong *)(param_2 + 0x118) != 0)) && (*param_1 != 0)) {
    FUN_147ed5a7d(&local_28,*(longlong *)(param_2 + 0x118),param_1,param_1 + 1);
    if (local_20 == '\x01') {
      lVar1 = local_28;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eca6c4 FUN_147eca6c4 body=126 status=ok
// SIG undefined FUN_147eca6c4(void)

ulonglong FUN_147eca6c4(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [38];
  byte local_22;
  char local_21;
  ulonglong local_20;
  
  uVar2 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_2 + 0x118);
  local_20 = uVar2;
  if (lVar1 != 0) {
    if ((*param_1 == 0) || (FUN_147ed5b4b(&local_22,lVar1,param_1,param_1 + 1), local_21 != '\x01'))
    {
      uVar2 = (ulonglong)*(byte *)((longlong)param_1 + 0xc);
    }
    else {
      uVar2 = (ulonglong)local_22;
    }
  }
  if (lVar1 == 0) {
    uVar2 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
  }
  else {
    uVar2 = uVar2 & 0xff;
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 147eca743 FUN_147eca743 body=98 status=ok
// SIG undefined FUN_147eca743(void)

undefined8 *
FUN_147eca743(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  int local_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    FUN_147ed5db4(&local_20);
    if (local_20 != -1) {
      uVar1 = CONCAT44(uStack_1c,local_20);
      goto LAB_147eca769;
    }
  }
  uVar1 = *param_5;
LAB_147eca769:
  *param_1 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eca7a6 FUN_147eca7a6 body=246 status=ok
// SIG undefined FUN_147eca7a6(void)

undefined8 *
FUN_147eca7a6(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  int iVar1;
  void *_Src;
  undefined1 auStack_58 [40];
  void *local_30;
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_3 != 0) {
    FUN_147ed5e84(&local_30);
    if (local_24 != -1) {
      *param_1 = 0;
      *(int *)(param_1 + 1) = local_28;
      if ((longlong)local_28 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,local_28,0);
        memcpy((void *)*param_1,local_30,(longlong)local_28 * 2);
      }
      if (local_30 != (void *)0x0) {
        FUN_1400020a8(local_30);
      }
      goto LAB_147eca820;
    }
  }
  *param_1 = 0;
  iVar1 = *(int *)(param_5 + 1);
  _Src = (void *)*param_5;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
LAB_147eca820:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147eca89d FUN_147eca89d body=114 status=ok
// SIG undefined FUN_147eca89d(void)

undefined8 *
FUN_147eca89d(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  int iVar1;
  void *_Src;
  
  if (*(longlong *)(param_2 + 0x118) == 0) {
    *param_1 = 0;
    iVar1 = *(int *)(param_5 + 1);
    _Src = (void *)*param_5;
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
    }
  }
  else {
    FUN_147eca7a6(param_1);
  }
  return param_1;
}



// FUNCTION 147eca910 FUN_147eca910 body=120 status=ok
// SIG undefined FUN_147eca910(void)

undefined8 * FUN_147eca910(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  void *_Src;
  
  if (param_3 == 0) {
    *param_2 = 0;
    iVar1 = *(int *)(param_1 + 0x18);
    _Src = *(void **)(param_1 + 0x10);
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
    }
  }
  else {
    FUN_147eca89d(param_2,param_3,param_1,param_1 + 8,param_1 + 0x10);
  }
  return param_2;
}



// FUNCTION 147eca988 FUN_147eca988 body=113 status=ok
// SIG undefined FUN_147eca988(void)

longlong FUN_147eca988(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = param_1[2];
  if (((param_2 != 0) && (*(longlong *)(param_2 + 0x118) != 0)) && (*param_1 != 0)) {
    FUN_147ed5f73(&local_28,*(longlong *)(param_2 + 0x118),param_1,param_1 + 1);
    if (local_20 == '\x01') {
      lVar1 = local_28;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eca9fa FUN_147eca9fa body=160 status=ok
// SIG undefined FUN_147eca9fa(void)

undefined4 *
FUN_147eca9fa(undefined4 *param_1,longlong param_2,longlong *param_3,undefined8 param_4,
             undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_2 + 0x118) == 0) {
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_5 + 4);
    uVar1 = param_5[1];
    uVar2 = param_5[2];
    uVar3 = param_5[3];
    *param_1 = *param_5;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  if (*param_3 != 0) {
    FUN_147ed6041(&local_40);
    if (local_28 == '\x01') {
      *(undefined8 *)(param_1 + 4) = local_30;
      goto LAB_147ecaa38;
    }
  }
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_5 + 4);
  local_40 = *param_5;
  uStack_3c = param_5[1];
  uStack_38 = param_5[2];
  uStack_34 = param_5[3];
LAB_147ecaa38:
  *param_1 = local_40;
  param_1[1] = uStack_3c;
  param_1[2] = uStack_38;
  param_1[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147ecaa9b FUN_147ecaa9b body=160 status=ok
// SIG undefined FUN_147ecaa9b(void)

undefined4 *
FUN_147ecaa9b(undefined4 *param_1,longlong param_2,longlong *param_3,undefined8 param_4,
             undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_2 + 0x118) == 0) {
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_5 + 4);
    uVar1 = param_5[1];
    uVar2 = param_5[2];
    uVar3 = param_5[3];
    *param_1 = *param_5;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  if (*param_3 != 0) {
    FUN_147ed6110(&local_40);
    if (local_28 == '\x01') {
      *(undefined8 *)(param_1 + 4) = local_30;
      goto LAB_147ecaad9;
    }
  }
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_5 + 4);
  local_40 = *param_5;
  uStack_3c = param_5[1];
  uStack_38 = param_5[2];
  uStack_34 = param_5[3];
LAB_147ecaad9:
  *param_1 = local_40;
  param_1[1] = uStack_3c;
  param_1[2] = uStack_38;
  param_1[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147ecab3c FUN_147ecab3c body=105 status=ok
// SIG undefined FUN_147ecab3c(void)

bool FUN_147ecab3c(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_2c,3);
  if (uVar1 == local_2c) {
    *(bool *)(param_1 + 0xc) = *(char *)(param_2 + 0x71) != '\0';
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1 == local_2c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecaba6 FUN_147ecaba6 body=120 status=ok
// SIG undefined FUN_147ecaba6(void)

bool FUN_147ecaba6(longlong param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_2c,5);
  if (uVar1 == local_2c) {
    (**(code **)(**(longlong **)(*param_3 + 8) + 0x138))
              (*(longlong **)(*param_3 + 8),param_1 + 0x10);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1 == local_2c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecac20 FUN_147ecac20 body=345 status=ok
// SIG undefined FUN_147ecac20(void)

undefined8 FUN_147ecac20(longlong param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_40,0x22);
  if ((uVar1 == ((ulonglong)local_40 & 0xffffffff)) ||
     (uVar1 = *(ulonglong *)(param_2 + 0xc), FUN_1401a700c(&local_40,1),
     uVar1 == ((ulonglong)local_40 & 0xffffffff))) {
    local_48[0] = *(undefined4 *)(param_2 + 8);
    iVar3 = FUN_14281b48e();
    if (0 < iVar3) {
      local_4c = *(undefined4 *)(param_2 + 8);
      FUN_14122db64(&local_4c,&local_40,0);
      FUN_14122db38(&local_40,local_48);
      FUN_1400021e4(local_48,&local_40);
      puVar6 = local_40;
      if (local_38 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      uVar4 = FUN_140851d9a();
      local_58 = 0;
      lVar5 = FUN_140277cc4(uVar4,puVar6,4,0);
      if (local_40 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (lVar5 != 0) {
        local_40 = (undefined2 *)0x0;
        (**(code **)(**(longlong **)(*param_3 + 8) + 0x160))(*(longlong **)(*param_3 + 8),&local_40)
        ;
        uVar2 = FUN_141715768(lVar5,local_40,0);
        *(undefined1 *)(param_1 + 0xc) = uVar2;
        uVar4 = 1;
        goto LAB_147ecad57;
      }
    }
  }
  uVar4 = 0;
LAB_147ecad57:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 147ecad7a FUN_147ecad7a body=112 status=ok
// SIG undefined FUN_147ecad7a(void)

bool FUN_147ecad7a(longlong param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_2c,4);
  if (uVar1 == local_2c) {
    FUN_144aa025c(*param_3,param_1 + 0xc);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1 == local_2c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecadec FUN_147ecadec body=149 status=ok
// SIG undefined FUN_147ecadec(void)

undefined8 FUN_147ecadec(longlong param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_34,0x15);
  if (uVar1 != local_34) {
    uVar1 = *(ulonglong *)(param_2 + 0xc);
    FUN_1401a700c(&local_34,2);
    if (uVar1 != local_34) {
      uVar2 = 0;
      goto LAB_147ecae5b;
    }
  }
  FUN_144aa02de(*param_3,param_1 + 0xc);
  uVar2 = 1;
LAB_147ecae5b:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecae82 FUN_147ecae82 body=120 status=ok
// SIG undefined FUN_147ecae82(void)

bool FUN_147ecae82(longlong param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_2c,6);
  if (uVar1 == local_2c) {
    (**(code **)(**(longlong **)(*param_3 + 8) + 0x160))(*(longlong **)(*param_3 + 8),param_1 + 0xc)
    ;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1 == local_2c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecaefc FUN_147ecaefc body=116 status=ok
// SIG undefined FUN_147ecaefc(void)

bool FUN_147ecaefc(longlong param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_2c,0xd);
  if (uVar1 == local_2c) {
    FUN_14021219d(*(undefined8 *)(*param_3 + 8),param_1 + 0x10);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1 == local_2c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecaf72 FUN_147ecaf72 body=120 status=ok
// SIG undefined FUN_147ecaf72(void)

bool FUN_147ecaf72(longlong param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_2c,5);
  if (uVar1 == local_2c) {
    (**(code **)(**(longlong **)(*param_3 + 8) + 0x138))
              (*(longlong **)(*param_3 + 8),param_1 + 0x10);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1 == local_2c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecafec FUN_147ecafec body=116 status=ok
// SIG undefined FUN_147ecafec(void)

bool FUN_147ecafec(longlong param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_2c,0xc);
  if (uVar1 == local_2c) {
    FUN_1401fb57a(*(undefined8 *)(*param_3 + 8),param_1 + 0x10);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1 == local_2c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecb062 FUN_147ecb062 body=404 status=ok
// SIG undefined FUN_147ecb062(void)

ulonglong FUN_147ecb062(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  void *_Dst;
  undefined2 *puVar4;
  ulonglong uVar5;
  size_t _Size;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined1 local_48 [8];
  uint local_40;
  undefined4 uStack_3c;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_40,10);
  if (uVar5 == local_40) {
    local_40 = *(uint *)(param_2 + 8);
    iVar1 = FUN_14281b48e();
    if (0 < iVar1) {
      local_4c = *(undefined4 *)(param_2 + 8);
      FUN_14122db64(&local_4c,&local_40,0);
      FUN_14122db38(&local_40,local_48);
      FUN_1400021e4(local_48,&local_40);
      if (local_38 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      else {
        puVar4 = (undefined2 *)CONCAT44(uStack_3c,local_40);
      }
      uVar2 = FUN_1446f4bba();
      local_58 = 0;
      plVar3 = (longlong *)FUN_140277cc4(uVar2,puVar4,4,0);
      if (CONCAT44(uStack_3c,local_40) != 0) {
        FUN_1400020a8();
      }
      if ((plVar3 != (longlong *)0x0) &&
         (plVar3 == *(longlong **)(param_1 + 0x10) ||
          *(longlong **)(param_1 + 0x10) == (longlong *)0x0)) {
        _Size = (size_t)(int)(-*(int *)((longlong)plVar3 + 0x5c) &
                             ((int)plVar3[0xb] + *(int *)((longlong)plVar3 + 0x5c)) - 1U);
        _Dst = (void *)FUN_144a7d36f(_Size);
        memset(_Dst,0,_Size);
        (**(code **)(*plVar3 + 0x2e8))(plVar3,_Dst,1);
        FUN_14483b62e(plVar3,param_3,_Dst,0);
        FUN_1401fa0f0(param_1 + 0x10,plVar3,_Dst);
        uVar5 = CONCAT71((int7)((ulonglong)(param_1 + 0x10) >> 8),1);
        if (_Dst != (void *)0x0) {
          thunk_FUN_1400020a8(_Dst);
        }
        goto LAB_147ecb1d2;
      }
    }
  }
  uVar5 = 0;
LAB_147ecb1d2:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecb1f8 FUN_147ecb1f8 body=112 status=ok
// SIG undefined FUN_147ecb1f8(void)

bool FUN_147ecb1f8(longlong param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_2c,0xb);
  if (uVar1 == local_2c) {
    FUN_144afe965(param_3,param_1 + 0x10);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1 == local_2c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecb26a FUN_147ecb26a body=13 status=ok
// SIG undefined FUN_147ecb26a(void)

ulonglong FUN_147ecb26a(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [38];
  byte bStack_22;
  char cStack_21;
  ulonglong uStack_20;
  
  if (param_2 == 0) {
    return (ulonglong)*(byte *)((longlong)param_1 + 0xc);
  }
  uVar2 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_2 + 0x118);
  uStack_20 = uVar2;
  if (lVar1 != 0) {
    if ((*param_1 == 0) ||
       (FUN_147ed59b0(&bStack_22,lVar1,param_1,param_1 + 1), cStack_21 != '\x01')) {
      uVar2 = (ulonglong)*(byte *)((longlong)param_1 + 0xc);
    }
    else {
      uVar2 = (ulonglong)bStack_22;
    }
  }
  if (lVar1 == 0) {
    uVar2 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
  }
  else {
    uVar2 = uVar2 & 0xff;
  }
  if ((uStack_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2 & 0xffffffffffffff01;
}



// FUNCTION 147ecb278 thunk_FUN_147eca652 body=5 status=ok
// SIG undefined thunk_FUN_147eca652(void)

longlong thunk_FUN_147eca652(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong lStack_28;
  char cStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = param_1[2];
  if (((param_2 != 0) && (*(longlong *)(param_2 + 0x118) != 0)) && (*param_1 != 0)) {
    FUN_147ed5a7d(&lStack_28,*(longlong *)(param_2 + 0x118),param_1,param_1 + 1);
    if (cStack_20 == '\x01') {
      lVar1 = lStack_28;
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecb27e FUN_147ecb27e body=13 status=ok
// SIG undefined FUN_147ecb27e(void)

ulonglong FUN_147ecb27e(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [38];
  byte bStack_22;
  char cStack_21;
  ulonglong uStack_20;
  
  if (param_2 == 0) {
    return (ulonglong)*(byte *)((longlong)param_1 + 0xc);
  }
  uVar2 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_2 + 0x118);
  uStack_20 = uVar2;
  if (lVar1 != 0) {
    if ((*param_1 == 0) ||
       (FUN_147ed5b4b(&bStack_22,lVar1,param_1,param_1 + 1), cStack_21 != '\x01')) {
      uVar2 = (ulonglong)*(byte *)((longlong)param_1 + 0xc);
    }
    else {
      uVar2 = (ulonglong)bStack_22;
    }
  }
  if (lVar1 == 0) {
    uVar2 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
  }
  else {
    uVar2 = uVar2 & 0xff;
  }
  if ((uStack_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 147ecb28c FUN_147ecb28c body=15 status=ok
// SIG undefined FUN_147ecb28c(void)

ulonglong FUN_147ecb28c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *in_RCX;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  undefined4 uStack_28;
  char cStack_24;
  ulonglong uStack_20;
  
  uVar3 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar2 = (undefined4)param_1;
  if (param_2 == 0) {
    return (ulonglong)*(uint *)((longlong)in_RCX + 0xc);
  }
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_2 + 0x118);
  if (lVar1 != 0) {
    if ((*in_RCX == 0) || (FUN_147ed5c18(&uStack_28,lVar1,in_RCX,in_RCX + 1), cStack_24 != '\x01'))
    {
      uVar3 = 0;
      uVar2 = *(undefined4 *)((longlong)in_RCX + 0xc);
    }
    else {
      uVar3 = 0;
      uVar2 = uStack_28;
    }
  }
  if (lVar1 == 0) {
    uVar2 = *(undefined4 *)((longlong)in_RCX + 0xc);
    uVar3 = 0;
  }
  if ((uStack_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(uVar2);
  }
  return CONCAT44(uVar3,uVar2);
}



// FUNCTION 147ecb29c FUN_147ecb29c body=13 status=ok
// SIG undefined FUN_147ecb29c(void)

ulonglong FUN_147ecb29c(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  uint uStack_28;
  char cStack_24;
  ulonglong uStack_20;
  
  if (param_2 == 0) {
    return (ulonglong)*(uint *)((longlong)param_1 + 0xc);
  }
  uVar2 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_2 + 0x118);
  uStack_20 = uVar2;
  if (lVar1 != 0) {
    if ((*param_1 == 0) ||
       (FUN_147ed5ce7(&uStack_28,lVar1,param_1,param_1 + 1), cStack_24 != '\x01')) {
      uVar2 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
    }
    else {
      uVar2 = (ulonglong)uStack_28;
    }
  }
  if (lVar1 == 0) {
    uVar2 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
  }
  if ((uStack_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 147ecb2aa FUN_147ecb2aa body=75 status=ok
// SIG undefined FUN_147ecb2aa(void)

undefined8 * FUN_147ecb2aa(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = *(undefined8 *)(param_2 + 0xc);
  }
  else {
    if (*(longlong *)(param_3 + 0x118) != 0) {
      FUN_147eca743(param_1,*(longlong *)(param_3 + 0x118),param_2,param_2 + 8,
                    (undefined8 *)(param_2 + 0xc));
      return param_1;
    }
    uVar1 = *(undefined8 *)(param_2 + 0xc);
  }
  *param_1 = uVar1;
  return param_1;
}



// FUNCTION 147ecb2f6 FUN_147ecb2f6 body=28 status=ok
// SIG undefined FUN_147ecb2f6(void)

undefined8 FUN_147ecb2f6(undefined8 param_1,undefined8 param_2)

{
  FUN_147eca910(param_2,param_1);
  return param_1;
}



// FUNCTION 147ecb312 thunk_FUN_147eca988 body=5 status=ok
// SIG undefined thunk_FUN_147eca988(void)

longlong thunk_FUN_147eca988(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong lStack_28;
  char cStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = param_1[2];
  if (((param_2 != 0) && (*(longlong *)(param_2 + 0x118) != 0)) && (*param_1 != 0)) {
    FUN_147ed5f73(&lStack_28,*(longlong *)(param_2 + 0x118),param_1,param_1 + 1);
    if (cStack_20 == '\x01') {
      lVar1 = lStack_28;
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecb318 FUN_147ecb318 body=68 status=ok
// SIG undefined FUN_147ecb318(void)

undefined8 * FUN_147ecb318(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_1[2] = *(undefined8 *)(param_2 + 0x20);
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *param_1 = *(undefined8 *)(param_2 + 0x10);
    param_1[1] = uVar1;
  }
  else {
    FUN_147eca9fa(param_1,param_3,param_2,param_2 + 8,(undefined8 *)(param_2 + 0x10));
  }
  return param_1;
}



// FUNCTION 147ecb35c FUN_147ecb35c body=68 status=ok
// SIG undefined FUN_147ecb35c(void)

undefined8 * FUN_147ecb35c(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_1[2] = *(undefined8 *)(param_2 + 0x20);
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *param_1 = *(undefined8 *)(param_2 + 0x10);
    param_1[1] = uVar1;
  }
  else {
    FUN_147ecaa9b(param_1,param_3,param_2,param_2 + 8,(undefined8 *)(param_2 + 0x10));
  }
  return param_1;
}



// FUNCTION 147ecb3a0 FUN_147ecb3a0 body=123 status=ok
// SIG undefined FUN_147ecb3a0(void)

undefined8 FUN_147ecb3a0(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == 0) {
    local_30 = *(undefined4 *)(param_2 + 0x10);
    uStack_2c = *(undefined4 *)(param_2 + 0x14);
    uStack_28 = *(undefined4 *)(param_2 + 0x18);
    uStack_24 = *(undefined4 *)(param_2 + 0x1c);
  }
  else {
    local_20 = *(undefined4 *)(param_2 + 0x10);
    uStack_1c = *(undefined4 *)(param_2 + 0x14);
    uStack_18 = *(undefined4 *)(param_2 + 0x18);
    uStack_14 = *(undefined4 *)(param_2 + 0x1c);
    local_38 = &local_20;
    FUN_147eca534(&local_30,param_3,param_2,param_2 + 8);
  }
  FUN_14688bdf4(param_1,&local_30);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecb422 FUN_147ecb422 body=610 status=ok
// SIG undefined FUN_147ecb422(void)

void FUN_147ecb422(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
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
  local_28 = 0;
  FUN_1446f4b16();
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
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_50 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_40;
  uStack_64 = uStack_3c;
  uStack_60 = uStack_38;
  uStack_5c = uStack_34;
  local_58 = local_30;
  local_70 = local_50 != 0;
  local_78 = local_4c;
  uVar1 = FUN_14384bc80(local_20,local_28,&local_68,local_48);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecb686 FUN_147ecb686 body=156 status=ok
// SIG undefined FUN_147ecb686(void)

void FUN_147ecb686(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_147ecb724(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecb724 FUN_147ecb724 body=102 status=ok
// SIG undefined FUN_147ecb724(void)

longlong FUN_147ecb724(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_144a7cbb2();
    if (((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30)) ||
       (param_1 = *(longlong *)(param_1 + 0x3c0), param_1 != 0)) {
      lVar1 = FUN_14104c5c4();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) {
        return param_1;
      }
    }
  }
  return 0;
}



// FUNCTION 147ecb78a FUN_147ecb78a body=156 status=ok
// SIG undefined FUN_147ecb78a(void)

void FUN_147ecb78a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_147ecb828(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecb828 FUN_147ecb828 body=90 status=ok
// SIG undefined FUN_147ecb828(void)

longlong FUN_147ecb828(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_144a7cbb2();
    if ((((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30)) ||
        (*(longlong *)(param_1 + 0x3c0) == 0)) || (lVar1 = FUN_147ea2fb2(), lVar1 == 0)) {
      lVar1 = FUN_147ea2fb2(param_1);
      return lVar1;
    }
  }
  return lVar1;
}



// FUNCTION 147ecb882 FUN_147ecb882 body=156 status=ok
// SIG undefined FUN_147ecb882(void)

void FUN_147ecb882(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_147ecb920(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecb920 FUN_147ecb920 body=241 status=ok
// SIG undefined FUN_147ecb920(void)

undefined8 FUN_147ecb920(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    lVar5 = FUN_14104c5c4();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
         ) != lVar5 + 0x30)) {
      lVar5 = FUN_147ecd24c(param_1);
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0x468);
    }
    if (lVar5 != 0) {
      lVar3 = *(longlong *)(lVar5 + 0x178);
      plVar4 = *(longlong **)(lVar5 + 0x180);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if (lVar3 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_147e7992d(DAT_14c951640);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        local_30 = lVar3;
        local_28 = plVar4;
        FUN_147e748da(uVar6,&local_30);
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
      goto LAB_147ecb9b2;
    }
  }
  uVar6 = 0;
LAB_147ecb9b2:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecba12 FUN_147ecba12 body=173 status=ok
// SIG undefined FUN_147ecba12(void)

void FUN_147ecba12(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
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
  lVar2 = FUN_147ecd2b4(local_20);
  if (lVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 0x2d8);
  }
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecbac0 FUN_147ecbac0 body=249 status=ok
// SIG undefined FUN_147ecbac0(void)

void FUN_147ecbac0(undefined8 param_1,longlong param_2,void **param_3)

{
  void *_Src;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
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
  FUN_147ecbbba(&local_38,local_28);
  _Src = local_38;
  if (&local_38 != param_3) {
    *(int *)(param_3 + 1) = local_30;
    if (local_30 == 0 && *(int *)((longlong)param_3 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    }
    else {
      FUN_1405b70fe(param_3,local_30);
      if (local_30 != 0) {
        memcpy(*param_3,_Src,(longlong)local_30 * 0x18);
      }
    }
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecbbba FUN_147ecbbba body=363 status=ok
// SIG undefined FUN_147ecbbba(void)

longlong * FUN_147ecbbba(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar11 = FUN_147ecd2b4(param_2);
  if (lVar11 == 0) {
    return param_1;
  }
  lVar13 = *(longlong *)(lVar11 + 0x178);
  plVar12 = *(longlong **)(lVar11 + 0x180);
  if (plVar12 == (longlong *)0x0) {
    if (lVar13 == 0) {
      return param_1;
    }
  }
  else {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar12 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
    if (lVar13 == 0) {
      return param_1;
    }
    lVar13 = *(longlong *)(lVar11 + 0x178);
    plVar12 = *(longlong **)(lVar11 + 0x180);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      bVar10 = false;
      goto LAB_147ecbc49;
    }
  }
  bVar10 = true;
  plVar12 = (longlong *)0x0;
LAB_147ecbc49:
  iVar5 = *(int *)(lVar13 + 0x30);
  if (-1 < iVar5) {
    if (*(int *)((longlong)param_1 + 0xc) < iVar5) {
      FUN_1447a8aa0(param_1);
    }
    if (!bVar10) {
      LOCK();
      plVar1 = plVar12 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    lVar13 = *(longlong *)(lVar11 + 0x178);
    plVar12 = *(longlong **)(lVar11 + 0x180);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar12 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    lVar11 = (longlong)*(int *)(lVar13 + 0x30);
    if (lVar11 != 0) {
      lVar13 = *(longlong *)(lVar13 + 0x28);
      lVar14 = 0;
      do {
        iVar5 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
          FUN_1403e3958(param_1,iVar5);
        }
        puVar3 = (undefined4 *)(lVar13 + lVar14);
        lVar6 = *param_1;
        *(undefined8 *)(lVar6 + 0x10 + (longlong)iVar5 * 0x18) = *(undefined8 *)(puVar3 + 4);
        uVar7 = puVar3[1];
        uVar8 = puVar3[2];
        uVar9 = puVar3[3];
        puVar4 = (undefined4 *)(lVar6 + (longlong)iVar5 * 0x18);
        *puVar4 = *puVar3;
        puVar4[1] = uVar7;
        puVar4[2] = uVar8;
        puVar4[3] = uVar9;
        lVar14 = lVar14 + 0x30;
      } while (lVar11 * 0x30 != lVar14);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar5);
}



// FUNCTION 147ecbd26 FUN_147ecbd26 body=155 status=ok
// SIG undefined FUN_147ecbd26(void)

void FUN_147ecbd26(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = FUN_147ecbdc2(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecbdc2 FUN_147ecbdc2 body=165 status=ok
// SIG undefined FUN_147ecbdc2(void)

int FUN_147ecbdc2(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  byte *pbVar8;
  
  lVar7 = FUN_147ecd2b4();
  if (lVar7 == 0) {
    iVar6 = -1;
  }
  else {
    lVar4 = *(longlong *)(lVar7 + 0x178);
    plVar5 = *(longlong **)(lVar7 + 0x180);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    iVar6 = -1;
    if (lVar4 != 0) {
      iVar3 = *(int *)(lVar7 + 0x2d8);
      if (iVar3 < *(int *)(lVar4 + 0x30)) {
        pbVar8 = (byte *)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar3 * 0x30 + 0x20);
        lVar7 = 0;
        do {
          if ((*pbVar8 & 4) != 0) {
            iVar6 = iVar3 - (int)lVar7;
            break;
          }
          lVar7 = lVar7 + -1;
          pbVar8 = pbVar8 + 0x30;
        } while ((longlong)iVar3 - (longlong)*(int *)(lVar4 + 0x30) != lVar7);
      }
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
  }
  return iVar6;
}



// FUNCTION 147ecbe6e FUN_147ecbe6e body=163 status=ok
// SIG undefined FUN_147ecbe6e(void)

void FUN_147ecbe6e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  local_38 = local_20;
  local_48 = local_30;
  uStack_44 = uStack_2c;
  uStack_40 = uStack_28;
  uStack_3c = uStack_24;
  uVar1 = FUN_147ecbf12();
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecbf12 FUN_147ecbf12 body=155 status=ok
// SIG undefined FUN_147ecbf12(void)

byte FUN_147ecbf12(double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  byte bVar4;
  
  dVar1 = *param_1;
  bVar4 = 0;
  if ((-DAT_14cb1f0a0 < dVar1) && (dVar1 < DAT_14cb1f0a0)) {
    dVar2 = param_1[1];
    bVar4 = 0;
    if ((-DAT_14cb1f0a8 < dVar2) && (bVar4 = 0, dVar2 < DAT_14cb1f0a8)) {
      dVar3 = param_1[2];
      bVar4 = 0;
      if ((-DAT_14cb1f0b0 < dVar3) && (dVar3 < DAT_14cb1f0b0)) {
        bVar4 = dVar3 != 0.0 | -(dVar1 != 0.0) | -(dVar2 != 0.0);
      }
    }
  }
  return bVar4 & 1;
}



// FUNCTION 147ecbfb4 FUN_147ecbfb4 body=266 status=ok
// SIG undefined FUN_147ecbfb4(void)

void FUN_147ecbfb4(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  undefined1 auStack_58 [40];
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  bVar1 = false;
  if ((-DAT_14cb1f0a0 < local_30) && (bVar1 = false, local_30 < DAT_14cb1f0a0)) {
    bVar1 = false;
    if ((-DAT_14cb1f0a8 < local_28) && (local_28 < DAT_14cb1f0a8)) {
      if (local_20 <= -DAT_14cb1f0b0) {
        bVar1 = false;
      }
      else {
        bVar1 = local_20 < DAT_14cb1f0b0;
      }
    }
  }
  *(bool *)param_3 = bVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecc0c6 FUN_147ecc0c6 body=216 status=ok
// SIG undefined FUN_147ecc0c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147ecc0c6(undefined8 param_1,longlong param_2,byte *param_3)

{
  undefined1 auStack_58 [40];
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  *param_3 = local_20 != _DAT_14cb1f070 |
             -(DAT_14cb1f068 != local_28 || local_30 != DAT_14cb1f060) & 1U;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecc1ac FUN_147ecc1ac body=308 status=ok
// SIG undefined FUN_147ecc1ac(void)

void FUN_147ecc1ac(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
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
  FUN_147ecc2e2(local_20,iVar1 != 0,local_28 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecc2e2 FUN_147ecc2e2 body=194 status=ok
// SIG undefined FUN_147ecc2e2(void)

void FUN_147ecc2e2(longlong *param_1,char param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_1 + 0x2a0))();
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x3c0) != 0)) {
      lVar3 = FUN_14104c5c4();
      lVar2 = *(longlong *)(lVar2 + 0x3c0);
      if ((lVar2 != 0) &&
         ((((lVar3 != 0 && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
           (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
          (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30)))) {
        if ((param_2 != '\0') && (lVar3 = *(longlong *)(lVar2 + 0x468), lVar3 != 0)) {
          (**(code **)(*(longlong *)(lVar3 + 0x110) + 0x10))(lVar3 + 0x110,2);
        }
        if ((param_3 != '\0') && (lVar2 = *(longlong *)(lVar2 + 0x470), lVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000147ecc3a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(longlong *)(lVar2 + 0x110) + 0x10))(lVar2 + 0x110,2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 147ecc3aa FUN_147ecc3aa body=427 status=ok
// SIG undefined FUN_147ecc3aa(void)

void FUN_147ecc3aa(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [36];
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_23;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
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
  local_54 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  uVar2 = local_40;
  iVar1 = local_54;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_48;
  local_30 = 0;
  FUN_14485c47a(&local_30,local_50);
  local_24 = iVar1 != 0;
  local_28 = 0;
  local_23 = 0;
  FUN_147ecd1f6(uVar2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecc556 FUN_147ecc556 body=230 status=ok
// SIG undefined FUN_147ecc556(void)

void FUN_147ecc556(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  FUN_14384c508(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecc63e FUN_147ecc63e body=234 status=ok
// SIG undefined FUN_147ecc63e(void)

void FUN_147ecc63e(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  puVar1 = local_30;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14384ccca(local_18,puVar1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecc730 FUN_147ecc730 body=771 status=ok
// SIG undefined FUN_147ecc730(void)

void FUN_147ecc730(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  int local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
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
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  iVar1 = local_74;
  local_80 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  uVar2 = local_40;
  uVar3 = local_80;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = local_70;
  uStack_90 = uStack_68;
  local_88 = local_60;
  local_b8 = local_58;
  uStack_b4 = uStack_54;
  uStack_b0 = uStack_50;
  uStack_ac = uStack_4c;
  local_a8 = local_48;
  local_c0 = local_38;
  if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_d0 = iVar1 != 0;
  local_c8 = uVar3;
  local_d8 = &local_98;
  uVar3 = FUN_147ecca34(local_30,&local_c0,uVar2,&local_b8);
  *param_3 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecca34 FUN_147ecca34 body=459 status=ok
// SIG undefined FUN_147ecca34(void)

longlong *
FUN_147ecca34(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,byte param_6,undefined8 param_7)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  char local_98;
  longlong local_88;
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if ((lVar2 != 0) && (lVar5 = *param_2, lVar5 != 0)) {
    lVar3 = FUN_144a7cbb2();
    if ((lVar3 != 0) &&
       (((*(int *)(lVar3 + 0x38) <= *(int *)(lVar5 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) && (*param_2 != 0)))) {
      FUN_1411371f6(local_c8);
      local_b8 = param_7;
      local_98 = (param_6 ^ 1) * '\x02' + '\x01';
      lVar5 = *param_2;
      if (lVar5 == 0) {
LAB_147eccb49:
        lVar5 = 0;
      }
      else {
        lVar3 = FUN_144a7cbb2();
        if (((lVar3 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar3 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
            lVar3 + 0x30)) goto LAB_147eccb49;
        lVar5 = *param_2;
      }
      local_d8 = local_c8;
      plVar4 = (longlong *)FUN_141137228(lVar2,lVar5,param_4,param_5);
      if (plVar4 != (longlong *)0x0) {
        if (plVar4[0x78] == 0) {
          (**(code **)(*plVar4 + 0x740))(plVar4);
        }
        if ((param_3 != 0) && (plVar4[0x78] != 0)) {
          lVar2 = FUN_14104c5c4();
          plVar1 = (longlong *)plVar4[0x78];
          if (((plVar1 != (longlong *)0x0) &&
              (((lVar2 != 0 && (lVar5 = plVar1[2], lVar5 != 0)) &&
               (*(int *)(lVar2 + 0x38) <= *(int *)(lVar5 + 0x38))))) &&
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
              lVar2 + 0x30)) {
            (**(code **)(*plVar1 + 0x7e0))(plVar1,param_3);
          }
        }
      }
      if (local_88 != 0) {
        if (local_78 == (longlong *)0x0) {
          local_78 = local_68;
        }
        (**(code **)(*local_78 + 0x10))();
      }
      goto LAB_147eccaab;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_147eccaab:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return plVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eccc0c FUN_147eccc0c body=308 status=ok
// SIG undefined FUN_147eccc0c(void)

void FUN_147eccc0c(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
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
  FUN_147eccd42(local_20,iVar1 != 0,local_28 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eccd42 FUN_147eccd42 body=194 status=ok
// SIG undefined FUN_147eccd42(void)

void FUN_147eccd42(longlong *param_1,char param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_1 + 0x2a0))();
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x3c0) != 0)) {
      lVar3 = FUN_14104c5c4();
      lVar2 = *(longlong *)(lVar2 + 0x3c0);
      if ((lVar2 != 0) &&
         ((((lVar3 != 0 && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
           (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
          (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30)))) {
        if ((param_2 != '\0') && (lVar3 = *(longlong *)(lVar2 + 0x468), lVar3 != 0)) {
          (**(code **)(*(longlong *)(lVar3 + 0x110) + 0x18))(lVar3 + 0x110,2);
        }
        if ((param_3 != '\0') && (lVar2 = *(longlong *)(lVar2 + 0x470), lVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000147ecce01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(longlong *)(lVar2 + 0x110) + 0x18))(lVar2 + 0x110,2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 147ecce08 FUN_147ecce08 body=329 status=ok
// SIG undefined FUN_147ecce08(void)

void FUN_147ecce08(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0x50);
  if ((param_2 != -1 && iVar1 != -1) && (((iVar1 == 0 || (param_2 == 0)) || (iVar1 == param_2)))) {
    cVar2 = FUN_144b00e3a(param_1 + 0x48,1,0);
    if (cVar2 != '\0') {
      lVar3 = FUN_14479d2ce(param_1 + 0x48);
      FUN_147eccf52(&local_38);
      FUN_1409ca370(lVar3 + 0x4a0,param_1,local_38);
      FUN_144a7b126(lVar3 + 0x4a0,&local_30,1);
      FUN_147e9a63f(param_1 + (ulonglong)(param_3 != 0) * 0x10 + 0x28,param_3);
      lVar3 = FUN_14479d2ce(param_1 + 0x54);
      if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x180), lVar3 != 0)) {
        lVar4 = FUN_1413f6fa8();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          local_30 = param_1;
          if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(param_1);
          }
          FUN_147ed1d60(lVar3 + 0x120,&local_30);
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



// FUNCTION 147eccf52 FUN_147eccf52 body=176 status=ok
// SIG undefined FUN_147eccf52(void)

undefined8 * FUN_147eccf52(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb1fcc0) {
    FUN_144b3d300(&DAT_14cb1fcc0);
    if (DAT_14cb1fcc0 == -1) {
      builtin_wcsncpy(local_38 + 8,L"mpleted",8);
      builtin_wcsncpy(local_38,L"OnMoveCo",8);
      FUN_1446f470e(&DAT_14cb1fcb8,local_38,1);
      _Init_thread_footer(&DAT_14cb1fcc0);
    }
  }
  *param_1 = DAT_14cb1fcb8;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecd004 FUN_147ecd004 body=174 status=ok
// SIG undefined FUN_147ecd004(void)

void FUN_147ecd004(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147e9a63f(param_1 + 0x38,3);
  lVar1 = FUN_14479d2ce(param_1 + 0x54);
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x180), lVar1 != 0)) {
    lVar2 = FUN_1413f6fa8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      local_20 = param_1;
      if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_1);
      }
      FUN_147ed1d60(lVar1 + 0x120,&local_20);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecd0b4 FUN_147ecd0b4 body=171 status=ok
// SIG undefined FUN_147ecd0b4(void)

void FUN_147ecd0b4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147e9a63f(param_1 + 0x28,0);
  lVar1 = FUN_14479d2ce(param_1 + 0x54);
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x180), lVar1 != 0)) {
    lVar2 = FUN_1413f6fa8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      local_20 = param_1;
      if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_1);
      }
      FUN_147ed1d60(lVar1 + 0x120,&local_20);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecd160 FUN_147ecd160 body=148 status=ok
// SIG undefined FUN_147ecd160(void)

undefined8 FUN_147ecd160(undefined8 param_1)

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
  uVar1 = FUN_14590970c();
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



// FUNCTION 147ecd1f6 FUN_147ecd1f6 body=86 status=ok
// SIG undefined FUN_147ecd1f6(void)

void FUN_147ecd1f6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  if ((param_1 != 0) &&
     (((*(longlong *)(param_1 + 0x3c0) != 0 &&
       (plVar1 = (longlong *)FUN_147e9e818(), plVar1 != (longlong *)0x0)) ||
      (plVar1 = (longlong *)FUN_147e9e818(param_1), plVar1 != (longlong *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x000147ecd249. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x4c0))(plVar1,param_2,*(code **)(*plVar1 + 0x4c0));
    return;
  }
  return;
}



// FUNCTION 147ecd24c FUN_147ecd24c body=102 status=ok
// SIG undefined FUN_147ecd24c(void)

void FUN_147ecd24c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14585dbdc();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecd2b4 FUN_147ecd2b4 body=75 status=ok
// SIG undefined FUN_147ecd2b4(void)

undefined8 FUN_147ecd2b4(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_14104c5c4();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) != lVar1 + 0x30)) {
      uVar2 = FUN_147ecd24c(param_1);
      return uVar2;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x468);
  }
  return uVar2;
}



// FUNCTION 147ecd304 FUN_147ecd304 body=41 status=ok
// SIG undefined FUN_147ecd304(void)

void FUN_147ecd304(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x4b8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147ecd332 FUN_147ecd332 body=41 status=ok
// SIG undefined FUN_147ecd332(void)

void FUN_147ecd332(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x4b0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147ecd390 FUN_147ecd390 body=175 status=ok
// SIG undefined FUN_147ecd390(void)

void FUN_147ecd390(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x490))(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ecd444 FUN_147ecd444 body=53 status=ok
// SIG undefined FUN_147ecd444(void)

void FUN_147ecd444(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  if (param_1 != 0) {
    plVar1 = (longlong *)FUN_147e9e818();
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147ecd476. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x4c0))(plVar1,param_2,*(code **)(*plVar1 + 0x4c0));
      return;
    }
  }
  return;
}



// FUNCTION 147ecd47a FUN_147ecd47a body=417 status=ok
// SIG undefined FUN_147ecd47a(void)

undefined8 * FUN_147ecd47a(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 == 0) {
    return param_1;
  }
  plVar3 = (longlong *)FUN_14001cc68(0x38,0x10);
  *plVar3 = 0;
  plVar3[1] = 0;
  *(undefined4 *)(plVar3 + 3) = 0xffffffff;
  plVar3[4] = 0;
  *(undefined4 *)(plVar3 + 5) = 0;
  plVar3[6] = 0;
  plVar3[2] = param_3;
  *(undefined1 *)((longlong)plVar3 + 0x1c) = 0;
  FUN_147ed644c(plVar3 + 4,param_4);
  FUN_147ecd7c4(plVar3,param_2);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14ac04880;
  plVar4[2] = (longlong)plVar3;
  if ((plVar3 == (longlong *)0x0) ||
     (((*plVar3 != 0 && (plVar3[1] != 0)) && (0 < *(int *)(plVar3[1] + 8))))) goto LAB_147ecd5ae;
  if (plVar4 == (longlong *)0x0) {
    *plVar3 = (longlong)plVar3;
    plVar5 = (longlong *)plVar3[1];
    if (plVar5 == (longlong *)0x0) goto LAB_147ecd5ae;
LAB_147ecd568:
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
    plVar3[1] = (longlong)plVar4;
    if (plVar4 == (longlong *)0x0) goto LAB_147ecd5ae;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *plVar3 = (longlong)plVar3;
    if ((longlong *)plVar3[1] != plVar4) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar5 = (longlong *)plVar3[1];
      if (plVar5 != (longlong *)0x0) goto LAB_147ecd568;
      plVar3[1] = (longlong)plVar4;
    }
  }
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
LAB_147ecd5ae:
  *param_1 = plVar3;
  plVar3 = (longlong *)param_1[1];
  if (plVar4 == plVar3) {
    if (plVar4 == (longlong *)0x0) {
      return param_1;
    }
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) {
      return param_1;
    }
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    param_1[1] = plVar4;
    if (plVar3 == (longlong *)0x0) {
      return param_1;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) {
      return param_1;
    }
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
  return param_1;
}



// FUNCTION 147ecd61c FUN_147ecd61c body=423 status=ok
// SIG undefined FUN_147ecd61c(void)

undefined8 *
FUN_147ecd61c(undefined8 *param_1,longlong param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 == 0) {
    return param_1;
  }
  plVar3 = (longlong *)FUN_14001cc68(0x38,0x10);
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[4] = 0;
  *(undefined4 *)(plVar3 + 5) = 0;
  plVar3[6] = 0;
  plVar3[2] = param_3;
  *(undefined4 *)(plVar3 + 3) = param_4;
  *(undefined1 *)((longlong)plVar3 + 0x1c) = 1;
  FUN_147ed644c(plVar3 + 4,param_5);
  FUN_147ecd7c4(plVar3,param_2);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14ac04880;
  plVar4[2] = (longlong)plVar3;
  if ((plVar3 == (longlong *)0x0) ||
     (((*plVar3 != 0 && (plVar3[1] != 0)) && (0 < *(int *)(plVar3[1] + 8))))) goto LAB_147ecd756;
  if (plVar4 == (longlong *)0x0) {
    *plVar3 = (longlong)plVar3;
    plVar5 = (longlong *)plVar3[1];
    if (plVar5 == (longlong *)0x0) goto LAB_147ecd756;
LAB_147ecd710:
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
    plVar3[1] = (longlong)plVar4;
    if (plVar4 == (longlong *)0x0) goto LAB_147ecd756;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *plVar3 = (longlong)plVar3;
    if ((longlong *)plVar3[1] != plVar4) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar5 = (longlong *)plVar3[1];
      if (plVar5 != (longlong *)0x0) goto LAB_147ecd710;
      plVar3[1] = (longlong)plVar4;
    }
  }
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
LAB_147ecd756:
  *param_1 = plVar3;
  plVar3 = (longlong *)param_1[1];
  if (plVar4 == plVar3) {
    if (plVar4 == (longlong *)0x0) {
      return param_1;
    }
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) {
      return param_1;
    }
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    param_1[1] = plVar4;
    if (plVar3 == (longlong *)0x0) {
      return param_1;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) {
      return param_1;
    }
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
  return param_1;
}



// FUNCTION 147ecd7c4 FUN_147ecd7c4 body=86 status=ok
// SIG undefined FUN_147ecd7c4(void)

void FUN_147ecd7c4(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x140);
  *(uint *)(param_2 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x144) < iVar1 + 1U) {
    FUN_147ed6520(param_2 + 0x138,iVar1);
  }
  *(longlong *)(*(longlong *)(param_2 + 0x138) + (longlong)iVar1 * 8) = param_1;
  FUN_14485c47a(param_1 + 0x30,param_2);
  return;
}



// FUNCTION 147ecd81a FUN_147ecd81a body=56 status=ok
// SIG undefined FUN_147ecd81a(void)

void FUN_147ecd81a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_147ecd852();
  FUN_1449db362(param_1 + 0x20);
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147ecd847. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 147ecd852 FUN_147ecd852 body=142 status=ok
// SIG undefined FUN_147ecd852(void)

void FUN_147ecd852(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar3 = FUN_14479d2ce(param_1 + 0x30);
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x140);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(lVar3 + 0x138);
      lVar4 = (longlong)iVar1 * 8;
      lVar5 = 0;
      lVar6 = 0;
      do {
        if (*(longlong *)(lVar2 + lVar5 * 8) == param_1) {
          if ((uint)lVar5 == 0xffffffff) {
            return;
          }
          memmove((void *)(lVar2 + (lVar6 >> 0x20) * 8),(void *)(lVar2 + (lVar6 >> 0x20) * 8 + 8),
                  (longlong)(int)(~(uint)lVar5 + iVar1) << 3);
          *(int *)(lVar3 + 0x140) = *(int *)(lVar3 + 0x140) + -1;
          return;
        }
        lVar6 = lVar6 + 0x100000000;
        lVar5 = lVar5 + 1;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
  }
  return;
}


