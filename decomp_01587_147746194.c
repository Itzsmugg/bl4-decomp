// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147746194 FUN_147746194 body=38 status=ok
// SIG undefined FUN_147746194(void)

void FUN_147746194(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1477461ba();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1477461ba FUN_1477461ba body=218 status=ok
// SIG undefined FUN_1477461ba(void)

longlong FUN_1477461ba(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = param_1 + 0x96;
  if (*(char *)((longlong)param_1 + 0x494) != '\0') {
    plVar1 = param_1 + 0x38;
  }
  lVar3 = *plVar1;
  if (lVar3 != 0) {
    lVar2 = FUN_1402d2740();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      lVar2 = FUN_144a772c4();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        return lVar3;
      }
      if (*(char *)((longlong)param_1 + 0x494) == '\0') {
        *(undefined1 *)((longlong)param_1 + 0x494) = 1;
        FUN_140a5e6b8(param_1 + 0x36,param_1 + 0x94);
      }
      lVar3 = FUN_14090ceee(lVar3,param_1,0);
      if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar3);
      }
      param_1[0x38] = lVar3;
      (**(code **)(*param_1 + 0x370))(param_1);
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 147746294 FUN_147746294 body=107 status=ok
// SIG undefined FUN_147746294(void)

void FUN_147746294(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147746300(param_1,local_28);
  FUN_140008f88(param_3,local_28);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147746300 FUN_147746300 body=124 status=ok
// SIG undefined FUN_147746300(void)

longlong * FUN_147746300(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x7a0);
  if (lVar1 == 0) {
    plVar3 = *(longlong **)(param_1 + 0x188);
    *param_2 = (longlong)plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = (longlong *)(param_1 + 400);
  }
  else {
    plVar3 = (longlong *)FUN_140e82300();
    if (*(char *)(lVar1 + 0x1f0) == '\x01') {
      plVar3 = (longlong *)FUN_14142e2d2(lVar1 + 0x1e0);
    }
    plVar2 = (longlong *)*plVar3;
    *param_2 = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar3 = plVar3 + 1;
  }
  *(int *)(param_2 + 1) = (int)*plVar3;
  return param_2;
}



// FUNCTION 1477463be FUN_1477463be body=158 status=ok
// SIG undefined FUN_1477463be(void)

void FUN_1477463be(undefined8 param_1,longlong param_2)

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
  FUN_14774645e(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774645e FUN_14774645e body=112 status=ok
// SIG undefined FUN_14774645e(void)

void FUN_14774645e(longlong param_1,byte param_2)

{
  undefined1 auStack_48 [32];
  byte local_28 [8];
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(byte *)(param_1 + 0x16d) = *(byte *)(param_1 + 0x16d) & 0xfe | param_2;
  if (*(longlong *)(param_1 + 0x7a0) != 0) {
    local_28[1] = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28[0] = param_2;
    FUN_146aead52(*(longlong *)(param_1 + 0x7a0),local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477464d0 FUN_1477464d0 body=180 status=ok
// SIG undefined FUN_1477464d0(void)

void FUN_1477464d0(undefined8 param_1,longlong param_2)

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
  FUN_147746586(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147746586 FUN_147746586 body=253 status=ok
// SIG undefined FUN_147746586(void)

void FUN_147746586(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14774876e(param_1 + 0x34);
  param_1[0xf2] = 0;
  plVar3 = (longlong *)param_1[0xf3];
  if (plVar3 != (longlong *)0x0) {
    param_1[0xf3] = 0;
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
  (**(code **)(*param_1 + 0x350))(param_1);
  if (param_1[0xf4] != 0) {
    local_28 = 0;
    uStack_20 = 0;
    (**(code **)(*param_1 + 0x358))(param_1,&local_28);
    FUN_146aeb18e(param_1[0xf4],param_1[0xf2]);
    local_38 = local_28;
    local_30 = (undefined4)uStack_20;
    FUN_146aeb20a(param_1[0xf4]);
    FUN_146a497c9(local_28,uStack_20 & 0xffffffff);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147746684 FUN_147746684 body=245 status=ok
// SIG undefined FUN_147746684(void)

void FUN_147746684(longlong *param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2c = 0x3f800000;
  uStack_28 = 0;
  uStack_24 = 0x3f800000;
  uStack_20 = 0x3f800000;
  local_1c = local_1c & 0xffffff00;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_1c;
  local_48 = local_2c;
  uStack_44 = uStack_28;
  uStack_40 = uStack_24;
  uStack_3c = uStack_20;
  if (*(char *)((longlong)param_1 + 0x494) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x494) = 1;
    FUN_140a5e6b8(param_1 + 0x36,param_1 + 0x94);
  }
  *(uint *)(param_1 + 0x45) = local_38;
  *(undefined4 *)(param_1 + 0x43) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uStack_44;
  *(undefined4 *)(param_1 + 0x44) = uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x224) = uStack_3c;
  (**(code **)(*param_1 + 0x370))(param_1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774677a FUN_14774677a body=338 status=ok
// SIG undefined FUN_14774677a(void)

void FUN_14774677a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [96];
  undefined8 local_88;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_79 = 0;
  uStack_78 = 0;
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0x3f800000;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  local_48 = 0;
  local_40 = 0x41c00000;
  local_38 = 0;
  local_34 = 2;
  local_32 = 0;
  local_30 = 0x3f800000;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144a87366(local_e8,&local_88);
  FUN_1477468ce(param_1,local_e8);
  plVar3 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477468ce FUN_1477468ce body=127 status=ok
// SIG undefined FUN_1477468ce(void)

void FUN_1477468ce(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)((longlong)param_1 + 0x494) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x494) = 1;
    FUN_140a5e6b8(param_1 + 0x36,param_1 + 0x94);
  }
  FUN_1412cc59c(param_1 + 0x37,param_2);
  (**(code **)(*param_1 + 0x370))(param_1);
  plVar3 = *(longlong **)(param_2 + 0x38);
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
                    /* WARNING: Could not recover jumptable at 0x000147746941. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14774694e FUN_14774694e body=156 status=ok
// SIG undefined FUN_14774694e(void)

void FUN_14774694e(undefined8 param_1,longlong param_2)

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
  FUN_1477469ec(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477469ec FUN_1477469ec body=97 status=ok
// SIG undefined FUN_1477469ec(void)

void FUN_1477469ec(longlong *param_1,longlong param_2)

{
  if (*(char *)((longlong)param_1 + 0x494) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x494) = 1;
    FUN_140a5e6b8(param_1 + 0x36,param_1 + 0x94);
  }
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  param_1[0x38] = param_2;
                    /* WARNING: Could not recover jumptable at 0x000147746a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x370))(param_1);
  return;
}



// FUNCTION 147746a4e FUN_147746a4e body=210 status=ok
// SIG undefined FUN_147746a4e(void)

void FUN_147746a4e(longlong *param_1,longlong param_2)

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
  if (*(char *)((longlong)param_1 + 0x494) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x494) = 1;
    FUN_140a5e6b8(param_1 + 0x36,param_1 + 0x94);
  }
  *(undefined4 *)((longlong)param_1 + 0x234) = local_38;
  *(undefined4 *)(param_1 + 0x47) = uStack_34;
  *(undefined4 *)((longlong)param_1 + 0x23c) = uStack_30;
  *(undefined4 *)(param_1 + 0x48) = uStack_2c;
  (**(code **)(*param_1 + 0x370))(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147746b22 FUN_147746b22 body=247 status=ok
// SIG undefined FUN_147746b22(void)

void FUN_147746b22(longlong *param_1,longlong param_2)

{
  undefined1 auStack_78 [40];
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  if (*(char *)((longlong)param_1 + 0x494) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x494) = 1;
    FUN_140a5e6b8(param_1 + 0x36,param_1 + 0x94);
  }
  *(float *)((longlong)param_1 + 0x22c) = (float)local_50;
  *(float *)(param_1 + 0x46) = (float)local_48;
  (**(code **)(*param_1 + 0x370))(param_1);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147746c1a FUN_147746c1a body=382 status=ok
// SIG undefined FUN_147746c1a(void)

void FUN_147746c1a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_f8 [32];
  undefined **local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined4 local_64;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_44;
  undefined8 local_40;
  longlong *plStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = &PTR_FUN_149ed05f0;
  local_d0 = &DAT_3f8000003f800000;
  puStack_c8 = &DAT_3f8000003f800000;
  local_c0 = 0;
  local_bc = 3;
  local_b8 = 0x4200000042000000;
  local_64 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  local_60 = 1;
  local_50 = DAT_14c84635c;
  local_58 = DAT_14c84635c;
  local_48 = 0;
  local_44 = 4;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  pppuVar4 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar4 = &local_d8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147746d9a(param_1,pppuVar4);
  plVar3 = plStack_38;
  local_d8 = &PTR_FUN_149ed05f0;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147746d9a FUN_147746d9a body=81 status=ok
// SIG undefined FUN_147746d9a(void)

void FUN_147746d9a(longlong *param_1,undefined8 param_2)

{
  if (*(char *)((longlong)param_1 + 0x494) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x494) = 1;
    FUN_140a5e6b8(param_1 + 0x36,param_1 + 0x94);
  }
  FUN_140f13d9e(param_1 + 100,param_2);
                    /* WARNING: Could not recover jumptable at 0x000147746de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x370))(param_1);
  return;
}



// FUNCTION 147746dec FUN_147746dec body=190 status=ok
// SIG undefined FUN_147746dec(void)

void FUN_147746dec(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_328 [32];
  undefined1 local_308 [744];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_328;
  FUN_140a581a0(local_308);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_308);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_308);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  if (*(undefined1 **)(param_2 + 0x38) == (undefined1 *)0x0) {
    puVar1 = local_308;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147746eac(param_1,puVar1);
  FUN_140e9e952(local_308);
  if ((local_20 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147746eac FUN_147746eac body=81 status=ok
// SIG undefined FUN_147746eac(void)

void FUN_147746eac(longlong *param_1,undefined8 param_2)

{
  if (*(char *)((longlong)param_1 + 0x494) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x494) = 1;
    FUN_140a5e6b8(param_1 + 0x36,param_1 + 0x94);
  }
  FUN_140a5e6b8(param_1 + 0x36,param_2);
                    /* WARNING: Could not recover jumptable at 0x000147746ef6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x370))(param_1);
  return;
}



// FUNCTION 147746efe FUN_147746efe body=156 status=ok
// SIG undefined FUN_147746efe(void)

void FUN_147746efe(undefined8 param_1,longlong param_2)

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
  FUN_147746f9c(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147746f9c FUN_147746f9c body=106 status=ok
// SIG undefined FUN_147746f9c(void)

void FUN_147746f9c(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 0x490) = param_2;
  if (*(longlong *)(param_1 + 0x7a0) != 0) {
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146aeb17c(*(longlong *)(param_1 + 0x7a0),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147747008 FUN_147747008 body=193 status=ok
// SIG undefined FUN_147747008(void)

void FUN_147747008(longlong *param_1,longlong param_2)

{
  longlong **pplVar1;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a5dc74(local_30);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  pplVar1 = local_30;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar1 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x348))(param_1,pplVar1);
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477470ca FUN_1477470ca body=177 status=ok
// SIG undefined FUN_1477470ca(void)

void FUN_1477470ca(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [45];
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1b = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1b);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1b);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x496) = local_1b;
  if (*(longlong *)(param_1 + 0x7a0) != 0) {
    local_1a = local_1b;
    local_19 = 1;
    FUN_146aeb2f2();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774717c FUN_14774717c body=156 status=ok
// SIG undefined FUN_14774717c(void)

void FUN_14774717c(undefined8 param_1,longlong param_2)

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
  FUN_14774721a(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774721a FUN_14774721a body=117 status=ok
// SIG undefined FUN_14774721a(void)

void FUN_14774721a(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x198) != param_2) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x198) = param_2;
    FUN_147748102(param_1);
    if (*(longlong *)(param_1 + 0x7a0) != 0) {
      FUN_146aeb18e(*(longlong *)(param_1 + 0x7a0),*(undefined8 *)(param_1 + 0x790));
      FUN_146aeb158(*(undefined8 *)(param_1 + 0x7a0),param_1 + 0x4a0);
      return;
    }
  }
  return;
}



// FUNCTION 147747290 FUN_147747290 body=151 status=ok
// SIG undefined FUN_147747290(void)

void FUN_147747290(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147747328(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147747328 FUN_147747328 body=102 status=ok
// SIG undefined FUN_147747328(void)

void FUN_147747328(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x495) = param_2;
  if (*(longlong *)(param_1 + 0x7a0) != 0) {
    local_27 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146aeaee4(*(longlong *)(param_1 + 0x7a0),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147747390 FUN_147747390 body=91 status=ok
// SIG undefined FUN_147747390(void)

void FUN_147747390(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147746300(param_1,local_28);
  FUN_140008f88(param_2,local_28);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774740e FUN_14774740e body=104 status=ok
// SIG undefined FUN_14774740e(void)

void FUN_14774740e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_318 [32];
  undefined1 local_2f8 [736];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_318;
  FUN_140e9ea3a(local_2f8,param_1 + 0x1b0);
  FUN_140a5e6b8(param_2,local_2f8);
  FUN_140e9e952(local_2f8);
  if ((local_18 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477474a0 FUN_1477474a0 body=7 status=ok
// SIG undefined FUN_1477474a0(void)

undefined1 FUN_1477474a0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x495);
}



// FUNCTION 1477474ba FUN_1477474ba body=82 status=ok
// SIG undefined FUN_1477474ba(void)

void FUN_1477474ba(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 auStack_38 [46];
  undefined1 local_a;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 0x496) = uVar1;
  if (*(longlong *)(param_1 + 0x7a0) != 0) {
    local_9 = 1;
    local_a = uVar1;
    FUN_146aeb2f2();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147747518 FUN_147747518 body=870 status=ok
// SIG undefined FUN_147747518(void)

longlong * FUN_147747518(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 auStack_448 [32];
  longlong local_428;
  undefined1 local_411;
  undefined1 local_410 [8];
  longlong *local_408;
  undefined8 local_3f8;
  longlong *local_3f0;
  longlong local_3e8;
  longlong *local_3e0;
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  undefined8 local_3b8;
  int local_3b0;
  undefined4 local_3ac;
  undefined8 local_3a8;
  longlong *local_3a0;
  longlong local_398;
  ulonglong uStack_390;
  undefined1 local_388 [640];
  longlong *local_108;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_448;
  (**(code **)(*param_1 + 0x350))();
  local_398 = 0;
  uStack_390 = 0;
  (**(code **)(*param_1 + 0x358))(param_1,&local_398);
  uVar6 = uStack_390;
  lVar5 = local_398;
  lVar3 = param_1[0xf2];
  local_3b8 = 0;
  local_3b0 = (int)uStack_390;
  if ((int)uStack_390 == 0) {
    local_3ac = 0;
  }
  else {
    FUN_146af7af8(&local_3b8,uStack_390 & 0xffffffff,0);
    FUN_146af7b5a(local_3b8,lVar5,uVar6 & 0xffffffff);
  }
  (**(code **)(*param_1 + 0x368))(param_1,local_3c8);
  (**(code **)(*param_1 + 0x360))(param_1,local_3d8);
  local_428 = lVar3;
  FUN_146a2081c(&local_3a8,local_3d8,local_3c8,&local_3b8);
  FUN_147747880(local_388);
  local_108 = param_1 + 0x94;
  if (*(char *)((longlong)param_1 + 0x494) != '\0') {
    local_108 = param_1 + 0x36;
  }
  local_3f8 = local_3a8;
  local_3f0 = local_3a0;
  if (local_3a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_3a0 + 1) = (int)local_3a0[1] + 1;
    UNLOCK();
  }
  FUN_147747a62(local_388,&local_3f8);
  FUN_1477737ac(local_410,&local_411);
  FUN_147747ae8(local_410,&local_3e8,local_388);
  plVar4 = local_3e0;
  if (local_3e0 == (longlong *)0x0) {
    param_1[0xf4] = local_3e8;
    plVar7 = (longlong *)param_1[0xf5];
    if (plVar7 == (longlong *)0x0) goto LAB_1477476c3;
    param_1[0xf5] = 0;
LAB_147747847:
    LOCK();
    plVar4 = plVar7 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1477476c3;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_3e0 + 1) = (int)local_3e0[1] + 1;
    UNLOCK();
    param_1[0xf4] = local_3e8;
    plVar7 = (longlong *)param_1[0xf5];
    if (local_3e0 != plVar7) {
      param_1[0xf5] = (longlong)local_3e0;
      if (plVar7 == (longlong *)0x0) goto LAB_1477476c3;
      goto LAB_147747847;
    }
    LOCK();
    plVar7 = local_3e0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_1477476c3;
    (**(code **)*local_3e0)(local_3e0);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar7 = plVar4;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
LAB_1477476c3:
  if (local_3e0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_3e0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_3e0)(local_3e0);
      LOCK();
      piVar1 = (int *)((longlong)local_3e0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_3e0 + 0x10))(local_3e0);
      }
    }
  }
  if (local_408 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_408 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_408)(local_408);
      LOCK();
      piVar1 = (int *)((longlong)local_408 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_408 + 0x10))(local_408);
      }
    }
  }
  FUN_147747b5c(local_388);
  lVar3 = param_1[0xf4];
  plVar4 = (longlong *)param_1[0xf5];
  if (plVar4 == (longlong *)0x0) {
    *param_2 = lVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = lVar3;
    param_2[1] = (longlong)plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar4 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if (local_3a0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_3a0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_3a0)(local_3a0);
      LOCK();
      piVar1 = (int *)((longlong)local_3a0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_3a0 + 0x10))(local_3a0);
      }
    }
  }
  FUN_146a497c9(local_398,uStack_390 & 0xffffffff);
  if (local_398 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_448) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147747880 FUN_147747880 body=480 status=ok
// SIG undefined FUN_147747880(void)

longlong FUN_147747880(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140a5071c();
  FUN_144a5dc74(param_1 + 0x1a8);
  *(undefined1 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  FUN_144a5dc74(param_1 + 0x1d0);
  *(undefined1 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined1 *)(param_1 + 0x1fc) = 1;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined2 *)(param_1 + 0x210) = 0x100;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined2 *)(param_1 + 0x228) = 0x100;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined2 *)(param_1 + 0x240) = 0x100;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x264) = 0;
  *(undefined8 *)(param_1 + 0x26c) = 0;
  lVar1 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar1 == 0) {
    lVar1 = DAT_14c96b350;
  }
  *(longlong *)(param_1 + 0x278) = lVar1;
  lVar1 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar1 == 0) {
    lVar1 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_48,"NormalText",1);
  uVar2 = FUN_140a57516(lVar1,local_48,0,0);
  *(undefined8 *)(param_1 + 0x280) = uVar2;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined1 *)(param_1 + 0x298) = 1;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x2b4) = 1;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined2 *)(param_1 + 0x2c8) = 0x101;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  *(undefined1 *)(param_1 + 0x2e4) = 1;
  *(undefined1 *)(param_1 + 0x2f9) = 0;
  *(undefined1 *)(param_1 + 0x2fb) = 0;
  *(undefined1 *)(param_1 + 0x321) = 0;
  *(undefined4 *)(param_1 + 0x328) = 0;
  *(undefined1 *)(param_1 + 0x32c) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined1 *)(param_1 + 0xa2) = 4;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147747a62 FUN_147747a62 body=133 status=ok
// SIG undefined FUN_147747a62(void)

longlong FUN_147747a62(longlong param_1,undefined8 *param_2)

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
  plVar5 = *(longlong **)(param_1 + 0x260);
  *(undefined8 *)(param_1 + 600) = uVar3;
  *(longlong *)(param_1 + 0x260) = lVar4;
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
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  return param_1;
}



// FUNCTION 147747ae8 FUN_147747ae8 body=115 status=ok
// SIG undefined FUN_147747ae8(void)

longlong * FUN_147747ae8(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146ae99ca(*param_1,param_3);
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



// FUNCTION 147747b5c FUN_147747b5c body=403 status=ok
// SIG undefined FUN_147747b5c(void)

void FUN_147747b5c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_146a497c9(*(undefined8 *)(param_1 + 0x340),*(undefined4 *)(param_1 + 0x348));
  if (*(longlong *)(param_1 + 0x340) != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(param_1 + 0x330);
  if (*(char *)(param_1 + 0x321) == '\x01') {
    *(undefined1 *)(param_1 + 0x321) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x318);
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
  FUN_146a497c9(*(undefined8 *)(param_1 + 0x300),*(undefined4 *)(param_1 + 0x308));
  if (*(longlong *)(param_1 + 0x300) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x2fb) == '\x01') {
    *(undefined1 *)(param_1 + 0x2fb) = 0;
  }
  if (*(char *)(param_1 + 0x2f9) == '\x01') {
    *(undefined1 *)(param_1 + 0x2f9) = 0;
  }
  FUN_1449db362(param_1 + 0x2e8);
  FUN_1449db362(param_1 + 0x2d0);
  FUN_1449db362(param_1 + 0x2b8);
  FUN_1449db362(param_1 + 0x2a0);
  FUN_1449db362(param_1 + 0x268);
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
  FUN_1449db362(param_1 + 0x248);
  FUN_1449db362(param_1 + 0x230);
  FUN_1449db362(param_1 + 0x218);
  FUN_1449db362(param_1 + 0x200);
  FUN_1449db362(param_1 + 0x1e8);
  if (*(longlong **)(param_1 + 0x1d0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1d0) + 0x10))();
  }
  FUN_1449db362(param_1 + 0x1c0);
  if (*(longlong **)(param_1 + 0x1a8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x10))();
  }
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 147747cf0 FUN_147747cf0 body=323 status=ok
// SIG undefined FUN_147747cf0(void)

void FUN_147747cf0(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_42;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1412719b8();
  lVar1 = *(longlong *)(param_1 + 0x7a0);
  if (lVar1 != 0) {
    local_70 = *(longlong **)(param_1 + 0x188);
    if (local_70 != (longlong *)0x0) {
      (**(code **)(*local_70 + 8))();
    }
    local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(param_1 + 400));
    uStack_60 = CONCAT71(uStack_60._1_7_,1);
    local_58 = 0;
    uStack_50 = 0;
    FUN_146aeab3a(lVar1,&local_70);
    FUN_1449db362(&local_58);
    if (local_70 != (longlong *)0x0) {
      (**(code **)(*local_70 + 0x10))();
    }
    local_70._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0x495));
    local_68 = 0;
    uStack_60 = 0;
    FUN_146aeaee4(*(undefined8 *)(param_1 + 0x7a0),&local_70);
    FUN_1449db362(&local_68);
    local_70._0_5_ = CONCAT14(1,*(undefined4 *)(param_1 + 0x490));
    local_68 = 0;
    uStack_60 = 0;
    FUN_146aeb17c(*(undefined8 *)(param_1 + 0x7a0),&local_70);
    FUN_1449db362(&local_68);
    local_42 = *(undefined1 *)(param_1 + 0x496);
    local_41 = 1;
    FUN_146aeb2f2(*(undefined8 *)(param_1 + 0x7a0));
    FUN_147747e34(param_1,*(undefined8 *)(param_1 + 0x7a0));
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147747e34 FUN_147747e34 body=435 status=ok
// SIG undefined FUN_147747e34(void)

void FUN_147747e34(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1477487d6(param_1 + 0x168);
  local_68 = (float)(uint)*(byte *)(param_1 + 0x16b);
  uStack_64._0_1_ = 1;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_146aeb092(param_2,&local_68);
  FUN_1449db362(&uStack_60);
  local_68 = (float)(CONCAT31(local_68._1_3_,*(undefined1 *)(param_1 + 0x16d)) & 0xffffff01);
  local_68._0_2_ = CONCAT11(1,(undefined1)local_68);
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_146aead52(param_2,&local_68);
  FUN_1449db362(&uStack_60);
  local_68 = *(float *)(param_1 + 0x170);
  bVar1 = local_68 != 0.0;
  if ((!bVar1) && (!NAN(local_68))) {
    local_68 = 0.0;
  }
  uStack_64 = CONCAT31(uStack_64._1_3_,bVar1);
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_146aeac78(param_2,&local_68);
  FUN_1449db362(&uStack_60);
  local_68._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0x16c));
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_146aeae22(param_2,&local_68);
  FUN_1449db362(&uStack_60);
  local_68 = *(float *)(param_1 + 0x174);
  uStack_64 = *(undefined4 *)(param_1 + 0x178);
  uStack_60 = *(undefined8 *)(param_1 + 0x17c);
  uStack_58 = CONCAT71(uStack_58._1_7_,1);
  local_50 = 0;
  uStack_48 = 0;
  FUN_146aeafca(param_2,&local_68);
  FUN_1449db362(&local_50);
  local_68 = *(float *)(param_1 + 0x184);
  uStack_64 = CONCAT31(uStack_64._1_3_,1);
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_146aeafa6(param_2,&local_68);
  FUN_1449db362(&uStack_60);
  local_68._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0x16e));
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_146aeafb8(param_2,&local_68);
  FUN_1449db362(&uStack_60);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147747fe8 FUN_147747fe8 body=282 status=ok
// SIG undefined FUN_147747fe8(void)

void FUN_147747fe8(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 0x790) == 0) {
    FUN_147748102();
    iVar1 = *(int *)(param_1 + 0x1a8);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x1a0);
      lVar6 = 0;
      do {
        lVar5 = *(longlong *)(lVar3 + lVar6);
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar5);
LAB_147748066:
          lVar4 = FUN_145893162();
          if ((((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
              (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
               lVar4 + 0x30)) && ((*(byte *)(lVar5 + 0xd4) & 1) == 0)) {
            lVar5 = FUN_147748393(param_1,lVar5);
            if ((lVar5 != 0) && (DAT_14c950c29 != 0)) {
              FUN_1456cec3c(lVar5);
            }
            iVar2 = *(int *)(param_1 + 0x788);
            *(uint *)(param_1 + 0x788) = iVar2 + 1U;
            if (*(uint *)(param_1 + 0x78c) < iVar2 + 1U) {
              FUN_1477739c2((longlong *)(param_1 + 0x780),iVar2);
            }
            *(longlong *)(*(longlong *)(param_1 + 0x780) + (longlong)iVar2 * 8) = lVar5;
            if ((lVar5 != 0) && (DAT_14c950c29 != 0)) {
              FUN_1456cec3c(lVar5);
            }
          }
        }
        else if (lVar5 != 0) goto LAB_147748066;
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
  }
  return;
}



// FUNCTION 147748102 FUN_147748102 body=656 status=ok
// SIG undefined FUN_147748102(void)

void FUN_147748102(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_b8 [32];
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = FUN_14001cc68(0x3b0,0x10);
  FUN_1446f470e(&local_90,L"RichTextStyle",1);
  FUN_145c1c3e8(lVar5,&local_90);
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14a542290;
  plVar6[2] = lVar5;
  *(longlong *)(param_1 + 0x790) = lVar5;
  plVar2 = *(longlong **)(param_1 + 0x798);
  if (plVar6 == plVar2) {
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
        iVar8 = *piVar1;
        UNLOCK();
        plVar2 = plVar6;
        goto joined_r0x0001477481d8;
      }
    }
  }
  else {
    *(longlong **)(param_1 + 0x798) = plVar6;
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
        iVar8 = *piVar1;
        UNLOCK();
joined_r0x0001477481d8:
        if (iVar8 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
  }
  uVar7 = local_78;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x198) + 0x28);
    if (DAT_14cab8260 == 0) {
      uVar7 = FUN_140eaaf27();
      DAT_14cab8260 = FUN_140002ddd(FUN_146356295,uVar7,L"RichTextStyleRow");
      uVar7 = local_78;
      if (DAT_14cab8260 == 0) goto LAB_147748216;
    }
    uVar7 = local_78;
    if ((*(int *)(DAT_14cab8260 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cab8260 + 0x38) * 8) ==
        DAT_14cab8260 + 0x30)) {
      plVar6 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x198) + 0x2b8))();
      plVar2 = plVar6 + 2;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_60 = plVar2;
      if ((int)plVar6[5] == 0) {
        iVar8 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar8 = (int)plVar6[5];
      }
      local_88 = (undefined4)local_68;
      uStack_84 = local_68._4_4_;
      uStack_80 = (undefined4)uStack_60;
      uStack_7c = uStack_60._4_4_;
      uStack_70 = CONCAT44(uStack_4c,uStack_50);
      local_78 = local_58;
      uVar7 = local_78;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      local_90 = plVar6;
      if ((local_78._4_4_ != iVar8) || (uStack_60 != plVar2)) {
        iVar4 = local_78._4_4_;
        local_78 = uVar7;
        do {
          lVar5 = *(longlong *)(*local_90 + (longlong)iVar4 * 0x18);
          lVar3 = *(longlong *)(*local_90 + 8 + (longlong)iVar4 * 0x18);
          FUN_1446f470e(&local_98,L"Default",1);
          if (lVar5 == local_98) {
            FUN_140a5e6b8(param_1 + 0x4a0,lVar3 + 0x10);
          }
          FUN_1412cc702(*(undefined8 *)(param_1 + 0x790),lVar5,lVar3 + 0x10);
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
          FUN_1449c0562(&local_88);
          iVar4 = local_78._4_4_;
          uVar7 = local_78;
        } while (local_90 != plVar6 ||
                 ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar2 || local_78._4_4_ != iVar8));
      }
    }
  }
LAB_147748216:
  local_78 = uVar7;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147748393 FUN_147748393 body=185 status=ok
// SIG undefined FUN_147748393(void)

undefined8 FUN_147748393(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
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
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
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



// FUNCTION 14774844e FUN_14774844e body=204 status=ok
// SIG undefined FUN_14774844e(void)

void FUN_14774844e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)*param_2;
  plVar2 = *(longlong **)(param_1 + 0x188);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x188) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  uVar4 = (undefined4)param_2[1];
  *(undefined4 *)(param_1 + 400) = uVar4;
  lVar3 = *(longlong *)(param_1 + 0x7a0);
  if (lVar3 != 0) {
    local_48 = (longlong *)*param_2;
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 8))();
      uVar4 = (undefined4)param_2[1];
    }
    local_38 = 1;
    local_30 = 0;
    uStack_28 = 0;
    local_40 = uVar4;
    FUN_146aeab3a(lVar3,&local_48);
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



// FUNCTION 14774851c FUN_14774851c body=26 status=ok
// SIG undefined FUN_14774851c(void)

longlong FUN_14774851c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0x4a0;
  if (*(char *)(param_1 + 0x494) != '\0') {
    lVar1 = param_1 + 0x1b0;
  }
  return lVar1;
}



// FUNCTION 147748536 FUN_147748536 body=303 status=ok
// SIG undefined FUN_147748536(void)

void FUN_147748536(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = *(int *)(param_1 + 0x788);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x780);
    lVar9 = 0;
    do {
      plVar6 = *(longlong **)(lVar5 + lVar9);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x2a0))(plVar6,&local_58,param_1);
        plVar6 = local_50;
        lVar8 = local_58;
        if (local_58 != 0) {
          if (local_50 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_50 + 1) = (int)local_50[1] + 1;
            UNLOCK();
          }
          iVar4 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar4 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
            FUN_146af7a72(param_2,iVar4);
          }
          lVar7 = *param_2;
          *(longlong *)(lVar7 + (longlong)iVar4 * 0x10) = lVar8;
          *(longlong **)(lVar7 + 8 + (longlong)iVar4 * 0x10) = plVar6;
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
        }
        plVar6 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar3 * 8 != lVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147748666 FUN_147748666 body=131 status=ok
// SIG undefined FUN_147748666(void)

undefined8 * FUN_147748666(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146a212b8(&local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477486ea FUN_1477486ea body=131 status=ok
// SIG undefined FUN_1477486ea(void)

undefined8 * FUN_1477486ea(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146a21390(&local_28);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774876e FUN_14774876e body=79 status=ok
// SIG undefined FUN_14774876e(void)

undefined8 * FUN_14774876e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147773ad8(param_1,iVar1);
      FUN_147773b3a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1477487d6 FUN_1477487d6 body=124 status=ok
// SIG undefined FUN_1477487d6(void)

void FUN_1477487d6(byte *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [44];
  byte local_1c;
  undefined1 local_1b;
  byte local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = (*param_1 & 1) != 0;
  if ((bool)local_19) {
    local_1a = param_1[1];
  }
  FUN_146aeabdc(param_2);
  local_1b = (*param_1 & 2) != 0;
  if ((bool)local_1b) {
    local_1c = param_1[2];
  }
  FUN_146aeac2a(param_2);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147748854 FUN_147748854 body=96 status=ok
// SIG undefined FUN_147748854(void)

void FUN_147748854(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x7a0) != 0) {
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146aeb092(*(longlong *)(param_1 + 0x7a0),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477488b6 FUN_1477488b6 body=96 status=ok
// SIG undefined FUN_1477488b6(void)

void FUN_1477488b6(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x7a0) != 0) {
    local_27 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146aeae22(*(longlong *)(param_1 + 0x7a0),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147748918 FUN_147748918 body=96 status=ok
// SIG undefined FUN_147748918(void)

void FUN_147748918(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x7a0) != 0) {
    local_27 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146aead52(*(longlong *)(param_1 + 0x7a0),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774897a FUN_14774897a body=98 status=ok
// SIG undefined FUN_14774897a(void)

void FUN_14774897a(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x7a0) != 0) {
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146aeac78(*(longlong *)(param_1 + 0x7a0),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477489de FUN_1477489de body=98 status=ok
// SIG undefined FUN_1477489de(void)

void FUN_1477489de(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x7a0) != 0) {
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146aeafa6(*(longlong *)(param_1 + 0x7a0),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147748a42 FUN_147748a42 body=96 status=ok
// SIG undefined FUN_147748a42(void)

void FUN_147748a42(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x7a0) != 0) {
    local_27 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146aeafb8(*(longlong *)(param_1 + 0x7a0),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147748aa4 FUN_147748aa4 body=100 status=ok
// SIG undefined FUN_147748aa4(void)

void FUN_147748aa4(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x7a0) != 0) {
    local_38 = *param_2;
    uStack_30 = param_2[1];
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_146aeafca(*(longlong *)(param_1 + 0x7a0),&local_38);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147748b0a FUN_147748b0a body=46 status=ok
// SIG undefined FUN_147748b0a(void)

void FUN_147748b0a(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x7a0) != 0) {
    lVar1 = param_1 + 0x4a0;
    if (*(char *)(param_1 + 0x494) != '\0') {
      lVar1 = param_1 + 0x1b0;
    }
    FUN_146aeb158(*(longlong *)(param_1 + 0x7a0),lVar1);
    return;
  }
  return;
}



// FUNCTION 147748b3c FUN_147748b3c body=2054 status=ok
// SIG undefined FUN_147748b3c(void)

undefined8 *
FUN_147748b3c(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,longlong *param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_4c8 [32];
  longlong **local_4a8;
  undefined8 *local_4a0;
  undefined8 *local_498;
  undefined8 local_490;
  longlong *local_488;
  longlong local_480;
  longlong *local_478;
  undefined8 local_470;
  longlong *local_468;
  undefined4 local_460;
  longlong *local_458;
  undefined8 uStack_450;
  uint local_448;
  int iStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  longlong *local_420;
  longlong *local_3f8;
  longlong *local_3f0;
  void *local_3e8;
  undefined8 uStack_3e0;
  int local_3d0;
  int local_3cc;
  longlong *local_3c8;
  undefined4 local_3c0;
  undefined4 uStack_3bc;
  longlong *local_3b8;
  undefined8 local_3b0;
  undefined2 uStack_3a8;
  undefined1 uStack_3a6;
  undefined1 uStack_3a5;
  undefined4 uStack_3a4;
  uint local_3a0;
  int iStack_39c;
  ulonglong uStack_398;
  undefined1 local_380;
  undefined7 uStack_37f;
  float local_358;
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong *local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  local_3cc = 0xffffffff;
  uVar6 = 0;
  local_3d0 = *(int *)(*param_6 + 8) + -1;
  if (*(int *)(*param_6 + 8) == 0) {
    local_3d0 = 0;
  }
  local_498 = param_2;
  local_490 = param_3;
  FUN_144a63a7c(param_5,&local_458,*(int *)(param_4 + 3),
                *(int *)((longlong)param_4 + 0x1c) - *(int *)(param_4 + 3));
  FUN_140233b1a(&local_3b8,&local_458);
  local_3e8 = (void *)0x0;
  uStack_3e0._0_4_ = *(int *)(param_4 + 1);
  lVar10 = (longlong)(int)uStack_3e0;
  _Src = (void *)*param_4;
  if (lVar10 == 0) {
    local_c8 = 0;
    local_d0 = (void *)0x0;
  }
  else {
    FUN_1446dd670(&local_3e8,(int)uStack_3e0,0);
    memcpy(local_3e8,_Src,lVar10 * 2);
    local_d0 = local_3e8;
    local_c8 = (int)uStack_3e0;
    uVar6 = uStack_3e0._4_4_;
  }
  local_3e8 = (void *)0x0;
  uStack_3e0 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_98 = 0x8000000000;
  local_90 = 0xffffffff;
  local_70 = local_3b8;
  local_c4 = uVar6;
  if (local_3b8 == (longlong *)0x0) {
    local_68 = (undefined4)local_3b0;
  }
  else {
    (**(code **)(*local_3b8 + 8))();
    local_68 = (undefined4)local_3b0;
    if (local_3e8 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_3b8 != (longlong *)0x0) {
    (**(code **)(*local_3b8 + 0x10))();
  }
  if (local_458 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  plVar9 = param_4 + 4;
  plVar8 = param_4 + 6;
  local_458 = (longlong *)&DAT_100000000;
  local_448 = 0xffffffff;
  iStack_444 = 0;
  uStack_440 = 0;
  local_488 = param_1;
  uStack_450 = plVar8;
  if (*(int *)(param_4 + 9) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_458);
    iVar7 = *(int *)(param_4 + 9);
  }
  uStack_398 = CONCAT44(uStack_43c,uStack_440);
  local_3a0 = local_448;
  iStack_39c = iStack_444;
  local_3b0 = local_458;
  uStack_3a8 = SUB82(uStack_450,0);
  uStack_3a6 = (undefined1)((ulonglong)uStack_450 >> 0x10);
  uStack_3a5 = (undefined1)((ulonglong)uStack_450 >> 0x18);
  uStack_3a4 = uStack_450._4_4_;
  local_3b8 = plVar9;
  if ((iStack_444 != iVar7) || (uStack_450 != plVar8)) {
    do {
      lVar10 = *local_3b8;
      lVar5 = (longlong)iStack_39c * 0x20;
      iVar3 = *(int *)(lVar10 + 0x10 + lVar5);
      FUN_144a63a7c(param_5,&local_470,iVar3,*(int *)(lVar10 + 0x14 + lVar5) - iVar3);
      local_458 = (longlong *)(lVar10 + lVar5);
      uStack_450 = &local_470;
      FUN_140dbdf0c(&local_c0,&local_3c8,&local_458,0);
      if (local_470 != 0) {
        FUN_1400020a8();
      }
      local_3a0 = local_3a0 & ~local_3b0._4_4_;
      FUN_1449c0562(&local_3b0);
    } while (local_3b8 != plVar9 ||
             ((longlong *)CONCAT44(uStack_3a4,CONCAT13(uStack_3a5,CONCAT12(uStack_3a6,uStack_3a8)))
              != plVar8 || iStack_39c != iVar7));
  }
  plVar9 = local_488;
  lVar10 = local_488[1];
  lVar5 = lVar10 + 0x4a0;
  if (*(char *)(lVar10 + 0x494) != '\0') {
    lVar5 = lVar10 + 0x1b0;
  }
  (**(code **)(*local_488 + 0x18))(local_488,&local_3f8,&local_d0,lVar5);
  if (local_3f8 == (longlong *)0x0) {
    FUN_140e9ea3a(&local_3b8,lVar5);
    (**(code **)(*plVar9 + 0x20))(plVar9,&local_d0,&local_3b8,*param_6);
    local_470 = *param_6;
    local_3cc = *(int *)(local_470 + 8) + -1;
    if (*(int *)(local_470 + 8) == 0) {
      local_3cc = 0;
    }
    local_468 = (longlong *)param_6[1];
    if (local_468 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_468 + 1) = (int)local_468[1] + 1;
      UNLOCK();
    }
    local_4a8 = (longlong **)&local_3d0;
    FUN_146a4dc7e(&local_458,&local_d0,&local_470,&local_3b8);
    plVar9 = uStack_450;
    plVar8 = local_458;
    puVar11 = local_498;
    if (uStack_450 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_450 + 1) = (int)uStack_450[1] + 1;
      plVar4 = uStack_450;
      UNLOCK();
      if (uStack_450 != (longlong *)0x0) {
        LOCK();
        plVar1 = uStack_450 + 1;
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
    plVar4 = local_468;
    if (local_468 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_468 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_468)(local_468);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    FUN_140e9e952(&local_3b8);
  }
  else {
    FUN_140002184(*param_6,0x200b);
    local_3cc = *(int *)(*param_6 + 8) + -1;
    if (*(int *)(*param_6 + 8) == 0) {
      local_3cc = 0;
    }
    FUN_144a87366(&local_458,lVar5 + 8);
    local_358 = 0.0;
    if (*(float *)(lVar5 + 0x80) <= 0.0) {
      local_358 = *(float *)(lVar5 + 0x80);
    }
    FUN_144a87366(&local_3b8,&local_458);
    local_3c8 = (longlong *)0x0;
    local_3c0 = 0;
    FUN_1446efa72(&local_3c8,0,8,0x10);
    plVar9 = local_3c8;
    local_3c0 = 8;
    *local_3c8 = (longlong)&PTR_LAB_14a542320;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_3c8[2] = lVar5;
    *local_3c8 = (longlong)&PTR_FUN_14a5422b0;
    FUN_144a87366(local_3c8 + 3,&local_3b8);
    *(float *)(plVar9 + 0xf) = local_358;
    local_470 = CONCAT53((int5)((ulonglong)local_470 >> 0x18),0x10000);
    local_468 = (longlong *)0x0;
    local_460 = 0;
    FUN_146a26884(&local_468,&local_3c8);
    FUN_1449db362(&local_3c8);
    plVar9 = (longlong *)CONCAT71(uStack_37f,local_380);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar9 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    plVar9 = local_3f0;
    if (local_3f0 == (longlong *)0x0) {
      local_3b0 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_3f0 + 1) = (int)local_3f0[1] + 1;
      UNLOCK();
      local_3b0 = local_3f0;
      LOCK();
      *(int *)(local_3f0 + 1) = (int)local_3f0[1] + 1;
      UNLOCK();
    }
    local_3b8 = local_3f8;
    uStack_3a6 = local_470._2_1_;
    uStack_3a8 = (undefined2)local_470;
    local_3a0 = 0;
    iStack_39c = 0;
    uStack_398 = uStack_398 & 0xffffffff00000000;
    FUN_146a26884(&local_3a0,&local_468);
    local_380 = 0;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar9 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    local_480 = *param_6;
    local_478 = (longlong *)param_6[1];
    if (local_478 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_478 + 1) = (int)local_478[1] + 1;
      UNLOCK();
    }
    local_4a0 = (undefined8 *)&local_3d0;
    local_4a8 = &local_3b8;
    FUN_146a4ed44(&local_3c8,local_490,&local_d0,&local_480);
    plVar8 = local_3c8;
    plVar9 = (longlong *)CONCAT44(uStack_3bc,local_3c0);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      plVar4 = (longlong *)CONCAT44(uStack_3bc,local_3c0);
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
    plVar4 = local_478;
    if (local_478 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_478 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_478)(local_478);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    FUN_146a50166(&local_3b8);
    FUN_1449db362(&local_468);
    puVar11 = local_498;
    if (local_420 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_420 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_420)(local_420);
        LOCK();
        piVar2 = (int *)((longlong)local_420 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        puVar11 = local_498;
        if (*piVar2 == 0) {
          (**(code **)(*local_420 + 0x10))(local_420);
          puVar11 = local_498;
        }
      }
    }
  }
  *puVar11 = plVar8;
  puVar11[1] = plVar9;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  if (local_3f0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_3f0 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_3f0)(local_3f0);
      LOCK();
      piVar2 = (int *)((longlong)local_3f0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_3f0 + 0x10))(local_3f0);
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar9 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 0x10))();
  }
  FUN_141720dbc(&local_d0);
  if ((local_60 ^ (ulonglong)auStack_4c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar11;
}



// FUNCTION 14774935e FUN_14774935e body=41 status=ok
// SIG undefined FUN_14774935e(void)

longlong FUN_14774935e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_143336d06();
  }
  lVar2 = lVar1 + 0x10;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 147749388 FUN_147749388 body=117 status=ok
// SIG undefined FUN_147749388(void)

undefined8 * FUN_147749388(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar1[1] = param_3;
  *puVar1 = &PTR_FUN_14a53f6f0;
  puVar1[2] = param_1;
  *param_2 = puVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14a542390;
  puVar2[2] = puVar1;
  param_2[1] = puVar2;
  return param_2;
}



// FUNCTION 147749414 FUN_147749414 body=410 status=ok
// SIG undefined FUN_147749414(void)

void FUN_147749414(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar3 = local_34;
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  iVar2 = local_38;
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  iVar1 = local_3c;
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_40 != 0;
  FUN_1477495b0(param_1,iVar3 != 0,iVar2 != 0,iVar1 != 0);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477495b0 FUN_1477495b0 body=59 status=ok
// SIG undefined FUN_1477495b0(void)

void FUN_1477495b0(longlong param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  
  *(undefined1 *)(param_1 + 0x180) = param_2;
  *(undefined1 *)(param_1 + 0x181) = param_3;
  *(undefined1 *)(param_1 + 0x182) = param_4;
  *(undefined1 *)(param_1 + 0x183) = param_5;
  lVar1 = *(longlong *)(param_1 + 0x188);
  if ((lVar1 != 0) && (0 < *(int *)(param_1 + 0x170))) {
    *(undefined1 *)(lVar1 + 0x271) = param_2;
    *(undefined1 *)(lVar1 + 0x272) = param_3;
    *(undefined1 *)(lVar1 + 0x273) = param_4;
    *(undefined1 *)(lVar1 + 0x274) = param_5;
    FUN_145ff5568();
    return;
  }
  return;
}



// FUNCTION 1477495f6 FUN_1477495f6 body=50 status=ok
// SIG undefined FUN_1477495f6(void)

void FUN_1477495f6(longlong param_1,char *param_2)

{
  if (*(char *)(param_1 + 0x180) != *param_2) {
    FUN_1477495b0(param_1,*param_2,*(undefined1 *)(param_1 + 0x181),*(undefined1 *)(param_1 + 0x182)
                  ,*(undefined1 *)(param_1 + 0x183));
  }
  return;
}



// FUNCTION 147749632 FUN_147749632 body=51 status=ok
// SIG undefined FUN_147749632(void)

void FUN_147749632(longlong param_1,char *param_2)

{
  if (*(char *)(param_1 + 0x181) != *param_2) {
    FUN_1477495b0(param_1,*(undefined1 *)(param_1 + 0x180),*param_2,*(undefined1 *)(param_1 + 0x182)
                  ,*(undefined1 *)(param_1 + 0x183));
  }
  return;
}



// FUNCTION 147749670 FUN_147749670 body=51 status=ok
// SIG undefined FUN_147749670(void)

void FUN_147749670(longlong param_1,char *param_2)

{
  if (*(char *)(param_1 + 0x182) != *param_2) {
    FUN_1477495b0(param_1,*(undefined1 *)(param_1 + 0x180),*(undefined1 *)(param_1 + 0x181),*param_2
                  ,*(undefined1 *)(param_1 + 0x183));
  }
  return;
}



// FUNCTION 1477496ae FUN_1477496ae body=50 status=ok
// SIG undefined FUN_1477496ae(void)

void FUN_1477496ae(longlong param_1,char *param_2)

{
  if (*(char *)(param_1 + 0x183) != *param_2) {
    FUN_1477495b0(param_1,*(undefined1 *)(param_1 + 0x180),*(undefined1 *)(param_1 + 0x181),
                  *(undefined1 *)(param_1 + 0x182),*param_2);
  }
  return;
}



// FUNCTION 147749704 FUN_147749704 body=102 status=ok
// SIG undefined FUN_147749704(void)

void FUN_147749704(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x188);
  if (lVar1 != 0) {
    local_10 = *(longlong *)(param_1 + 400);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    local_18 = lVar1;
    FUN_14774976e(param_2,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774976e FUN_14774976e body=397 status=ok
// SIG undefined FUN_14774976e(void)

void FUN_14774976e(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_31;
  code *local_30;
  undefined1 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar3 = *param_2;
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  plVar2 = (longlong *)param_2[1];
  plVar4 = *(longlong **)(param_1 + 0x68);
  if (plVar4 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(param_1 + 0x68);
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x68) = plVar2;
    uVar3 = *param_2;
  }
  thunk_FUN_145ff5568(uVar3,*(undefined1 *)(param_1 + 0x38));
  local_48 = *(undefined4 *)(param_1 + 0x3c);
  uStack_44 = *(undefined4 *)(param_1 + 0x40);
  uStack_40 = *(undefined4 *)(param_1 + 0x44);
  uStack_3c = *(undefined4 *)(param_1 + 0x48);
  FUN_146a90770(*param_2);
  FUN_145e28fbc(*param_2,*(undefined1 *)(param_1 + 0x4c));
  FUN_145e2904a(*param_2,*(undefined1 *)(param_1 + 0x4d));
  local_78 = *(undefined8 *)(param_1 + 0x50);
  uStack_70 = *(undefined8 *)(param_1 + 0x58);
  local_68 = 1;
  local_60 = 0;
  uStack_58 = 0;
  FUN_145e29126(*param_2);
  uVar3 = *param_2;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    local_88 = DAT_14c98dec8;
    local_80 = DAT_14c98ded0;
    if (DAT_14c98ded0 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
      UNLOCK();
    }
  }
  else {
    local_28 = &local_31;
    local_30 = FUN_143336ee2;
    FUN_1407616b4(*(longlong *)(param_1 + 0x30),&local_88);
  }
  FUN_145cfad50(uVar3,&local_88);
  plVar2 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_80 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774991e FUN_14774991e body=233 status=ok
// SIG undefined FUN_14774991e(void)

void FUN_14774991e(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(longlong *)(param_1 + 0x188) != 0) && (0 < *(int *)(param_1 + 0x170))) {
    lVar1 = **(longlong **)(param_1 + 0x168);
    local_28 = *(undefined4 *)(lVar1 + 0x3c);
    uStack_24 = *(undefined4 *)(lVar1 + 0x40);
    uStack_20 = *(undefined4 *)(lVar1 + 0x44);
    uStack_1c = *(undefined4 *)(lVar1 + 0x48);
    FUN_146a90770();
    thunk_FUN_145ff5568(*(undefined8 *)(param_1 + 0x188),*(undefined1 *)(lVar1 + 0x38));
    FUN_145e28fbc(*(undefined8 *)(param_1 + 0x188),*(undefined1 *)(lVar1 + 0x4c));
    FUN_145e2904a(*(undefined8 *)(param_1 + 0x188),*(undefined1 *)(lVar1 + 0x4d));
    local_58 = *(undefined8 *)(lVar1 + 0x50);
    uStack_50 = *(undefined8 *)(lVar1 + 0x58);
    local_48 = 1;
    local_40 = 0;
    uStack_38 = 0;
    FUN_145e29126(*(undefined8 *)(param_1 + 0x188));
    local_68 = *(undefined1 *)(param_1 + 0x183);
    FUN_146a9074c(*(undefined8 *)(param_1 + 0x188),*(undefined1 *)(param_1 + 0x180),
                  *(undefined1 *)(param_1 + 0x181),*(undefined1 *)(param_1 + 0x182));
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147749a08 FUN_147749a08 body=1166 status=ok
// SIG undefined FUN_147749a08(void)

undefined8 * FUN_147749a08(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_2e8 [32];
  undefined8 *local_2c8;
  undefined8 local_2b8;
  longlong local_2b0;
  code *local_2a8;
  longlong *local_2a0;
  undefined8 local_290;
  longlong *local_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined1 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  longlong *local_250;
  undefined8 local_241;
  ulonglong local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  longlong *local_60;
  undefined1 local_58;
  undefined1 *local_54;
  undefined1 *puStack_4c;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if (*(int *)(param_1 + 0x170) < 1) {
LAB_147749ad9:
    FUN_14635688a((longlong)&local_241 + 1);
    local_58 = 0;
    local_54 = &DAT_3f8000003f800000;
    puStack_4c = &DAT_3f8000003f800000;
    local_98 = 0;
    uStack_274 = 0;
    bVar5 = true;
    lVar7 = 0;
    uStack_278 = 0;
    uStack_27c = 0;
    local_280 = 0;
  }
  else {
    lVar7 = **(longlong **)(param_1 + 0x168);
    if ((lVar7 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar7);
    }
    else if (lVar7 == 0) goto LAB_147749ad9;
    lVar6 = FUN_1459e615c();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) goto LAB_147749ad9;
    FUN_14635688a((longlong)&local_241 + 1);
    local_58 = *(undefined1 *)(lVar7 + 0x38);
    local_54 = *(undefined1 **)(lVar7 + 0x3c);
    puStack_4c = *(undefined1 **)(lVar7 + 0x44);
    local_98 = (ulonglong)CONCAT14(*(undefined1 *)(lVar7 + 0x4d),(uint)*(byte *)(lVar7 + 0x4c));
    local_280 = *(undefined4 *)(lVar7 + 0x50);
    uStack_27c = *(undefined4 *)(lVar7 + 0x54);
    uStack_278 = *(undefined4 *)(lVar7 + 0x58);
    uStack_274 = *(undefined4 *)(lVar7 + 0x5c);
    bVar5 = false;
  }
  local_270 = 1;
  local_268 = 0;
  uStack_260 = 0;
  local_80 = 1;
  local_90 = local_280;
  uStack_8c = uStack_27c;
  uStack_88 = uStack_278;
  uStack_84 = uStack_274;
  FUN_144a450dc(local_78,&local_268);
  FUN_1449db362(&local_268);
  local_44 = *(undefined1 *)(param_1 + 0x180);
  local_43 = *(undefined1 *)(param_1 + 0x181);
  local_42 = *(undefined1 *)(param_1 + 0x182);
  local_41 = *(undefined1 *)(param_1 + 0x183);
  if (((*(int *)(param_1 + 0x170) < 1) || (**(longlong **)(param_1 + 0x168) == 0)) ||
     (lVar6 = *(longlong *)(**(longlong **)(param_1 + 0x168) + 0x30), lVar6 == 0)) {
    local_290 = DAT_14c98dec8;
    local_288 = DAT_14c98ded0;
    if (DAT_14c98ded0 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
      UNLOCK();
    }
  }
  else {
    local_2a0 = &local_241;
    local_2a8 = FUN_143336ee2;
    FUN_1407616b4(lVar6,&local_290);
  }
  plVar4 = local_60;
  if (local_288 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_288 + 1) = (int)local_288[1] + 1;
    UNLOCK();
  }
  local_68 = local_290;
  local_60 = local_288;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  local_2c8 = &local_241;
  FUN_14611196c(&local_2a8,"SSafeZone",".\\Runtime/UMG/Private/Components/SafeZone.cpp",0x70);
  FUN_145ff525e(&local_2a8,&local_258,(longlong)&local_241 + 1);
  plVar4 = local_250;
  if (local_250 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x188) = local_258;
    plVar8 = *(longlong **)(param_1 + 400);
    if (plVar8 == (longlong *)0x0) goto LAB_147749cab;
    *(undefined8 *)(param_1 + 400) = 0;
LAB_147749e07:
    LOCK();
    plVar4 = plVar8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_147749cab;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_250 + 1) = (int)local_250[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x188) = local_258;
    plVar8 = *(longlong **)(param_1 + 400);
    if (local_250 != plVar8) {
      *(longlong **)(param_1 + 400) = local_250;
      if (plVar8 == (longlong *)0x0) goto LAB_147749cab;
      goto LAB_147749e07;
    }
    LOCK();
    plVar8 = local_250 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_147749cab;
    (**(code **)*local_250)(local_250);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar8 = plVar4;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
LAB_147749cab:
  if (local_250 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_250 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_250)(local_250);
      LOCK();
      piVar1 = (int *)((longlong)local_250 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_250 + 0x10))(local_250);
      }
    }
  }
  plVar4 = local_2a0;
  if (local_2a0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_2a0 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_2a0)(local_2a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = local_288;
  if (local_288 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_288 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_288)(local_288);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  FUN_146356908((longlong)&local_241 + 1);
  if (!bVar5) {
    local_2b8 = *(undefined8 *)(param_1 + 0x188);
    local_2b0 = *(longlong *)(param_1 + 400);
    if (local_2b0 != 0) {
      LOCK();
      *(int *)(local_2b0 + 8) = *(int *)(local_2b0 + 8) + 1;
      UNLOCK();
    }
    FUN_14774976e(lVar7,&local_2b8);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x188);
  plVar4 = *(longlong **)(param_1 + 400);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    param_2[1] = plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147749e98 FUN_147749e98 body=155 status=ok
// SIG undefined FUN_147749e98(void)

void FUN_147749e98(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  if ((param_2 != '\0') && (iVar4 = *(int *)(param_1 + 0x170), 0 < iVar4)) {
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x168) + lVar5 * 8);
      if ((plVar3 != (longlong *)0x0) && (plVar3[6] != 0)) {
        (**(code **)(*plVar3 + 0x2a0))(plVar3,1);
        iVar4 = *(int *)(param_1 + 0x170);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
  }
  *(undefined8 *)(param_1 + 0x188) = 0;
  plVar3 = *(longlong **)(param_1 + 400);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 400) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000147749f2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147749f42 FUN_147749f42 body=112 status=ok
// SIG undefined FUN_147749f42(void)

void FUN_147749f42(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  *(undefined1 *)(param_1 + 0x38) = param_2;
  if (((*(longlong *)(param_1 + 0x60) != 0) &&
      (plVar3 = *(longlong **)(param_1 + 0x68), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1]))
  {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        thunk_FUN_145ff5568(0);
        return;
      }
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
    thunk_FUN_145ff5568(*(undefined8 *)(param_1 + 0x60));
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
                    /* WARNING: Could not recover jumptable at 0x000147749f9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147749fc0 FUN_147749fc0 body=169 status=ok
// SIG undefined FUN_147749fc0(void)

void FUN_147749fc0(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *(undefined4 *)(param_1 + 0x3c) = *param_2;
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  *(undefined4 *)(param_1 + 0x44) = uVar5;
  *(undefined4 *)(param_1 + 0x48) = uVar6;
  if (((*(longlong *)(param_1 + 0x60) != 0) &&
      (plVar3 = *(longlong **)(param_1 + 0x68), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1]))
  {
    iVar8 = (int)plVar3[1];
    do {
      if (iVar8 == 0) {
        local_28 = *(undefined4 *)(param_1 + 0x3c);
        uStack_24 = *(undefined4 *)(param_1 + 0x40);
        uStack_20 = *(undefined4 *)(param_1 + 0x44);
        uStack_1c = *(undefined4 *)(param_1 + 0x48);
        FUN_146a90770(0);
        goto LAB_14774a04d;
      }
      LOCK();
      iVar7 = (int)plVar3[1];
      bVar9 = iVar8 == iVar7;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar9);
    local_28 = *(undefined4 *)(param_1 + 0x3c);
    uStack_24 = *(undefined4 *)(param_1 + 0x40);
    uStack_20 = *(undefined4 *)(param_1 + 0x44);
    uStack_1c = *(undefined4 *)(param_1 + 0x48);
    FUN_146a90770(*(undefined8 *)(param_1 + 0x60));
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
LAB_14774a04d:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14774a078 FUN_14774a078 body=121 status=ok
// SIG undefined FUN_14774a078(void)

void FUN_14774a078(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  *(undefined1 *)(param_1 + 0x4c) = param_2;
  if (((*(longlong *)(param_1 + 0x60) != 0) &&
      (plVar3 = *(longlong **)(param_1 + 0x68), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1]))
  {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        FUN_145e28fbc(0,*(undefined1 *)(param_1 + 0x4c));
        return;
      }
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
    FUN_145e28fbc(*(undefined8 *)(param_1 + 0x60),*(undefined1 *)(param_1 + 0x4c));
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
                    /* WARNING: Could not recover jumptable at 0x00014774a0d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14774a100 FUN_14774a100 body=121 status=ok
// SIG undefined FUN_14774a100(void)

void FUN_14774a100(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  *(undefined1 *)(param_1 + 0x4d) = param_2;
  if (((*(longlong *)(param_1 + 0x60) != 0) &&
      (plVar3 = *(longlong **)(param_1 + 0x68), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1]))
  {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        FUN_145e2904a(0,*(undefined1 *)(param_1 + 0x4d));
        return;
      }
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
    FUN_145e2904a(*(undefined8 *)(param_1 + 0x60),*(undefined1 *)(param_1 + 0x4d));
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
                    /* WARNING: Could not recover jumptable at 0x00014774a15e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14774a188 FUN_14774a188 body=187 status=ok
// SIG undefined FUN_14774a188(void)

void FUN_14774a188(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = *(undefined4 *)((longlong)param_2 + 4);
  uVar5 = *(undefined4 *)(param_2 + 1);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x54) = uVar4;
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  *(undefined4 *)(param_1 + 0x5c) = uVar6;
  if (((*(longlong *)(param_1 + 0x60) != 0) &&
      (plVar3 = *(longlong **)(param_1 + 0x68), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1]))
  {
    iVar8 = (int)plVar3[1];
    do {
      if (iVar8 == 0) {
        local_38 = *param_2;
        uStack_30 = param_2[1];
        local_28 = 1;
        local_20 = 0;
        uStack_18 = 0;
        FUN_145e29126(0);
        goto LAB_14774a227;
      }
      LOCK();
      iVar7 = (int)plVar3[1];
      bVar9 = iVar8 == iVar7;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar9);
    local_38 = *param_2;
    uStack_30 = param_2[1];
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_145e29126(*(undefined8 *)(param_1 + 0x60));
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
LAB_14774a227:
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14774a26c FUN_14774a26c body=177 status=ok
// SIG undefined FUN_14774a26c(void)

void FUN_14774a26c(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x188) = local_1c != 0;
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_146a9092a(*(longlong *)(param_1 + 400),local_1c != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774a31e FUN_14774a31e body=167 status=ok
// SIG undefined FUN_14774a31e(void)

void FUN_14774a31e(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x180) = local_19;
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_146a90880();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774a3c6 FUN_14774a3c6 body=167 status=ok
// SIG undefined FUN_14774a3c6(void)

void FUN_14774a3c6(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x181) = local_19;
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_146a90836();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774a46e FUN_14774a46e body=173 status=ok
// SIG undefined FUN_14774a46e(void)

void FUN_14774a46e(longlong param_1,longlong param_2)

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
  *(undefined4 *)(param_1 + 0x184) = local_1c;
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_146a908ca();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774a5be FUN_14774a5be body=99 status=ok
// SIG undefined FUN_14774a5be(void)

void FUN_14774a5be(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  plVar1 = (longlong *)FUN_144aff0e0();
  switchD_143c3d4dc::caseD_21(param_1,plVar1);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e3cc28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774a622 FUN_14774a622 body=41 status=ok
// SIG undefined FUN_14774a622(void)

void FUN_14774a622(undefined8 param_1,longlong *param_2)

{
  switchD_143c3d4dc::caseD_21();
                    /* WARNING: Could not recover jumptable at 0x00014774a648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc28);
  return;
}



// FUNCTION 14774a64c FUN_14774a64c body=155 status=ok
// SIG undefined FUN_14774a64c(void)

void FUN_14774a64c(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  if ((param_2 != '\0') && (iVar4 = *(int *)(param_1 + 0x170), 0 < iVar4)) {
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x168) + lVar5 * 8);
      if ((plVar3 != (longlong *)0x0) && (plVar3[6] != 0)) {
        (**(code **)(*plVar3 + 0x2a0))(plVar3,1);
        iVar4 = *(int *)(param_1 + 0x170);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
  }
  *(undefined8 *)(param_1 + 400) = 0;
  plVar3 = *(longlong **)(param_1 + 0x198);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x198) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014774a6e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14774a6e8 FUN_14774a6e8 body=603 status=ok
// SIG undefined FUN_14774a6e8(void)

undefined8 * FUN_14774a6e8(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_2c8 [32];
  undefined1 *local_2a8;
  undefined8 local_298;
  longlong local_290;
  undefined1 local_281;
  undefined1 local_280 [8];
  longlong *local_278;
  undefined8 local_268;
  longlong *local_260;
  undefined1 local_258 [544];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  FUN_145ff9e3e(local_258);
  local_2a8 = &local_281;
  FUN_145ffa146(local_280,"SScaleBox",".\\Runtime/UMG/Private/Components/ScaleBox.cpp",0x25);
  FUN_145ff9564(local_280,&local_268,local_258);
  plVar4 = local_260;
  if (local_260 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 400) = local_268;
    plVar6 = *(longlong **)(param_1 + 0x198);
    if (plVar6 == (longlong *)0x0) goto LAB_14774a790;
    *(undefined8 *)(param_1 + 0x198) = 0;
LAB_14774a8bd:
    LOCK();
    plVar4 = plVar6 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14774a790;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_260 + 1) = (int)local_260[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 400) = local_268;
    plVar6 = *(longlong **)(param_1 + 0x198);
    if (local_260 != plVar6) {
      *(longlong **)(param_1 + 0x198) = local_260;
      if (plVar6 == (longlong *)0x0) goto LAB_14774a790;
      goto LAB_14774a8bd;
    }
    LOCK();
    plVar6 = local_260 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_14774a790;
    (**(code **)*local_260)(local_260);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar6 = plVar4;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
LAB_14774a790:
  if (local_260 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_260 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_260)(local_260);
      LOCK();
      piVar1 = (int *)((longlong)local_260 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_260 + 0x10))(local_260);
      }
    }
  }
  if (local_278 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_278 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_278)(local_278);
      LOCK();
      piVar1 = (int *)((longlong)local_278 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_278 + 0x10))(local_278);
      }
    }
  }
  FUN_145ff94f2(local_258);
  if (0 < *(int *)(param_1 + 0x170)) {
    lVar5 = **(longlong **)(param_1 + 0x168);
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar5);
    }
    local_298 = *(undefined8 *)(param_1 + 400);
    local_290 = *(longlong *)(param_1 + 0x198);
    if (local_290 != 0) {
      LOCK();
      *(int *)(local_290 + 8) = *(int *)(local_290 + 8) + 1;
      UNLOCK();
    }
    FUN_14774a944(lVar5,&local_298);
  }
  uVar3 = *(undefined8 *)(param_1 + 400);
  plVar4 = *(longlong **)(param_1 + 0x198);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    param_2[1] = plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  if ((local_38 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774a944 FUN_14774a944 body=271 status=ok
// SIG undefined FUN_14774a944(void)

void FUN_14774a944(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined1 local_31;
  code *local_30;
  undefined1 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *param_2;
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  plVar2 = (longlong *)param_2[1];
  plVar4 = *(longlong **)(param_1 + 0x48);
  if (plVar4 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(param_1 + 0x48);
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x48) = plVar2;
    uVar3 = *param_2;
  }
  FUN_146a907fa(uVar3,*(undefined1 *)(param_1 + 0x38));
  FUN_146a90818(*param_2,*(undefined1 *)(param_1 + 0x39));
  uVar3 = *param_2;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    local_48 = DAT_14c98dec8;
    local_40 = DAT_14c98ded0;
    if (DAT_14c98ded0 != 0) {
      LOCK();
      *(int *)(DAT_14c98ded0 + 8) = *(int *)(DAT_14c98ded0 + 8) + 1;
      UNLOCK();
    }
  }
  else {
    local_28 = &local_31;
    local_30 = FUN_143336ee2;
    FUN_1407616b4(*(longlong *)(param_1 + 0x30),&local_48);
  }
  FUN_146a907b2(uVar3,&local_48);
  plVar2 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774aa54 FUN_14774aa54 body=106 status=ok
// SIG undefined FUN_14774aa54(void)

void FUN_14774aa54(longlong param_1)

{
  FUN_1412719b8();
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_146a90836(*(longlong *)(param_1 + 400),*(undefined1 *)(param_1 + 0x181));
    FUN_146a90880(*(undefined8 *)(param_1 + 400),*(undefined1 *)(param_1 + 0x180));
    FUN_146a908ca(*(undefined8 *)(param_1 + 400),*(undefined4 *)(param_1 + 0x184));
    FUN_146a9092a(*(undefined8 *)(param_1 + 400),*(undefined1 *)(param_1 + 0x188));
    return;
  }
  return;
}



// FUNCTION 14774aac4 FUN_14774aac4 body=102 status=ok
// SIG undefined FUN_14774aac4(void)

void FUN_14774aac4(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 400);
  if (lVar1 != 0) {
    local_10 = *(longlong *)(param_1 + 0x198);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    local_18 = lVar1;
    FUN_14774a944(param_2,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774ab2c FUN_14774ab2c body=101 status=ok
// SIG undefined FUN_14774ab2c(void)

void FUN_14774ab2c(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 400);
  if (lVar1 != 0) {
    local_18 = DAT_14c98dec8;
    local_10 = DAT_14c98ded0;
    if (DAT_14c98ded0 != 0) {
      LOCK();
      *(int *)(DAT_14c98ded0 + 8) = *(int *)(DAT_14c98ded0 + 8) + 1;
      UNLOCK();
    }
    FUN_146a907b2(lVar1,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774ab92 FUN_14774ab92 body=152 status=ok
// SIG undefined FUN_14774ab92(void)

void FUN_14774ab92(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14774ac2c(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774ac2c FUN_14774ac2c body=112 status=ok
// SIG undefined FUN_14774ac2c(void)

void FUN_14774ac2c(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  *(undefined1 *)(param_1 + 0x38) = param_2;
  if (((*(longlong *)(param_1 + 0x40) != 0) &&
      (plVar3 = *(longlong **)(param_1 + 0x48), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1]))
  {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        FUN_146a907fa(0);
        return;
      }
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
    FUN_146a907fa(*(undefined8 *)(param_1 + 0x40));
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
                    /* WARNING: Could not recover jumptable at 0x00014774ac85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14774ac9c FUN_14774ac9c body=137 status=ok
// SIG undefined FUN_14774ac9c(void)

void FUN_14774ac9c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774ad26 FUN_14774ad26 body=152 status=ok
// SIG undefined FUN_14774ad26(void)

void FUN_14774ad26(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14774adc0(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774adc0 FUN_14774adc0 body=112 status=ok
// SIG undefined FUN_14774adc0(void)

void FUN_14774adc0(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  *(undefined1 *)(param_1 + 0x39) = param_2;
  if (((*(longlong *)(param_1 + 0x40) != 0) &&
      (plVar3 = *(longlong **)(param_1 + 0x48), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1]))
  {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        FUN_146a90818(0);
        return;
      }
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
    FUN_146a90818(*(undefined8 *)(param_1 + 0x40));
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
                    /* WARNING: Could not recover jumptable at 0x00014774ae19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14774ae44 FUN_14774ae44 body=34 status=ok
// SIG undefined FUN_14774ae44(void)

void FUN_14774ae44(longlong param_1)

{
  FUN_14774ac2c(param_1,*(undefined1 *)(param_1 + 0x38));
  FUN_14774adc0(param_1,*(undefined1 *)(param_1 + 0x39));
  return;
}



// FUNCTION 14774ae66 FUN_14774ae66 body=262 status=ok
// SIG undefined FUN_14774ae66(void)

void FUN_14774ae66(longlong param_1,longlong param_2)

{
  longlong *plVar1;
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
  plVar1 = *(longlong **)(param_1 + 0x7e8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x248))(plVar1,local_1c,local_20,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774af6e FUN_14774af6e body=104 status=ok
// SIG undefined FUN_14774af6e(void)

void FUN_14774af6e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_688 [32];
  undefined1 local_668 [1616];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_688;
  FUN_141479436(local_668,param_1 + 0x170);
  FUN_1412cc8ca(param_2,local_668);
  FUN_140ffd8aa(local_668);
  if ((local_18 ^ (ulonglong)auStack_688) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774afd8 FUN_14774afd8 body=58 status=ok
// SIG undefined FUN_14774afd8(void)

void FUN_14774afd8(longlong param_1,undefined8 param_2)

{
  FUN_1412cc8ca(param_1 + 0x170);
  if (*(longlong *)(param_1 + 0x7e8) != 0) {
    FUN_146a91b6c(*(longlong *)(param_1 + 0x7e8),param_2);
    return;
  }
  return;
}



// FUNCTION 14774b064 FUN_14774b064 body=8 status=ok
// SIG undefined FUN_14774b064(void)

undefined1 FUN_14774b064(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x7c2);
}



// FUNCTION 14774b078 FUN_14774b078 body=95 status=ok
// SIG undefined FUN_14774b078(void)

void FUN_14774b078(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x7c8) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x7cc) = uVar1;
  *(undefined4 *)(param_1 + 2000) = uVar2;
  *(undefined4 *)(param_1 + 0x7d4) = uVar3;
  if (*(longlong *)(param_1 + 0x7e8) != 0) {
    local_38 = *param_2;
    uStack_30 = param_2[1];
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_146a92d62();
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774b0e4 FUN_14774b0e4 body=95 status=ok
// SIG undefined FUN_14774b0e4(void)

void FUN_14774b0e4(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x7d8) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x7dc) = uVar1;
  *(undefined4 *)(param_1 + 0x7e0) = uVar2;
  *(undefined4 *)(param_1 + 0x7e4) = uVar3;
  if (*(longlong *)(param_1 + 0x7e8) != 0) {
    local_38 = *param_2;
    uStack_30 = param_2[1];
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_145ab4ba4();
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774b158 FUN_14774b158 body=80 status=ok
// SIG undefined FUN_14774b158(void)

void FUN_14774b158(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x7e8) = 0;
  plVar3 = *(longlong **)(param_1 + 0x7f0);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x7f0) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014774b1a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14774b1a8 FUN_14774b1a8 body=724 status=ok
// SIG undefined FUN_14774b1a8(void)

undefined8 * FUN_14774b1a8(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_338 [32];
  undefined1 *local_318;
  undefined1 local_301;
  undefined1 local_300 [8];
  longlong *local_2f8;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined1 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined1 local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  longlong *local_288;
  undefined1 local_280 [424];
  longlong local_d8;
  undefined1 local_b0;
  undefined1 local_af;
  uint local_ac;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 local_90;
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68;
  undefined1 local_60 [16];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_338;
  FUN_146a6ef34(local_280);
  local_d8 = param_1 + 0x170;
  local_b0 = *(undefined1 *)(param_1 + 0x7c0);
  local_af = *(undefined1 *)(param_1 + 0x7c1);
  local_ac = (uint)*(byte *)(param_1 + 0x7c2);
  uVar3 = *(undefined8 *)(param_1 + 0x7c8);
  uVar5 = *(undefined8 *)(param_1 + 2000);
  local_2a8 = 1;
  local_2a0 = 0;
  uStack_298 = 0;
  local_90 = 1;
  local_2b8._0_4_ = (undefined4)uVar3;
  local_2b8._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_2b0._0_4_ = (undefined4)uVar5;
  uStack_2b0._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_a0 = (undefined4)local_2b8;
  uStack_9c = local_2b8._4_4_;
  uStack_98 = (undefined4)uStack_2b0;
  uStack_94 = uStack_2b0._4_4_;
  local_2b8 = uVar3;
  uStack_2b0 = uVar5;
  FUN_144a450dc(local_88,&local_2a0);
  FUN_1449db362(&local_2a0);
  local_2e8 = *(undefined4 *)(param_1 + 0x7d8);
  uStack_2e4 = *(undefined4 *)(param_1 + 0x7dc);
  uStack_2e0 = *(undefined4 *)(param_1 + 0x7e0);
  uStack_2dc = *(undefined4 *)(param_1 + 0x7e4);
  local_2d8 = 1;
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_68 = 1;
  local_78 = local_2e8;
  uStack_74 = uStack_2e4;
  uStack_70 = uStack_2e0;
  uStack_6c = uStack_2dc;
  FUN_144a450dc(local_60,&local_2d0);
  FUN_1449db362(&local_2d0);
  local_318 = &local_301;
  FUN_146a7fc04(local_300,"SScrollBar",".\\Runtime/UMG/Private/Components/ScrollBar.cpp",0x30);
  FUN_146a6f02a(local_300,&local_290,local_280);
  plVar4 = local_288;
  if (local_288 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x7e8) = local_290;
    plVar6 = *(longlong **)(param_1 + 0x7f0);
    if (plVar6 == (longlong *)0x0) goto LAB_14774b31a;
    *(undefined8 *)(param_1 + 0x7f0) = 0;
LAB_14774b445:
    LOCK();
    plVar4 = plVar6 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14774b31a;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_288 + 1) = (int)local_288[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x7e8) = local_290;
    plVar6 = *(longlong **)(param_1 + 0x7f0);
    if (local_288 != plVar6) {
      *(longlong **)(param_1 + 0x7f0) = local_288;
      if (plVar6 == (longlong *)0x0) goto LAB_14774b31a;
      goto LAB_14774b445;
    }
    LOCK();
    plVar6 = local_288 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_14774b31a;
    (**(code **)*local_288)(local_288);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar6 = plVar4;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
LAB_14774b31a:
  if (local_288 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_288 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_288)(local_288);
      LOCK();
      piVar1 = (int *)((longlong)local_288 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_288 + 0x10))(local_288);
      }
    }
  }
  if (local_2f8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_2f8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_2f8)(local_2f8);
      LOCK();
      piVar1 = (int *)((longlong)local_2f8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2f8 + 0x10))(local_2f8);
      }
    }
  }
  FUN_146a6f09e(local_280);
  uVar3 = *(undefined8 *)(param_1 + 0x7e8);
  plVar4 = *(longlong **)(param_1 + 0x7f0);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    param_2[1] = plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  if ((local_50 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774b4a6 FUN_14774b4a6 body=56 status=ok
// SIG undefined FUN_14774b4a6(void)

void FUN_14774b4a6(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0xb38) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_146a98762();
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 14774b4de FUN_14774b4de body=56 status=ok
// SIG undefined FUN_14774b4de(void)

void FUN_14774b4de(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0xb38) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_146a9876c();
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 14774b516 FUN_14774b516 body=56 status=ok
// SIG undefined FUN_14774b516(void)

void FUN_14774b516(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0xb38) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_146a98876();
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 14774b54e FUN_14774b54e body=56 status=ok
// SIG undefined FUN_14774b54e(void)

void FUN_14774b54e(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0xb38) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_146a989b0();
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 14774b5d0 FUN_14774b5d0 body=392 status=ok
// SIG undefined FUN_14774b5d0(void)

void FUN_14774b5d0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_34;
  undefined1 local_2d;
  int local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_1446f4b16();
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
  local_2d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2d);
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_34;
  FUN_14774b75a(param_1,local_28,iVar1 != 0,local_2d);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774b75a FUN_14774b75a body=208 status=ok
// SIG undefined FUN_14774b75a(void)

void FUN_14774b75a(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  if (param_2 == 0) {
    local_40 = (longlong *)0x0;
  }
  else {
    FUN_140760c2c(param_2,&local_48);
    local_38 = local_48;
    if (local_40 != (longlong *)0x0) {
      plStack_30 = local_40;
    }
  }
  if (*(longlong *)(param_1 + 0xb38) != 0) {
    local_58 = param_5;
    FUN_146a98b20(*(longlong *)(param_1 + 0xb38),&local_38,param_3,param_4);
    local_40 = plStack_30;
  }
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774b830 FUN_14774b830 body=177 status=ok
// SIG undefined FUN_14774b830(void)

void FUN_14774b830(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    piVar1 = &local_1c;
    FUN_144a5ded6(param_2,piVar1);
  }
  else {
    piVar1 = *(int **)(param_2 + 0x18);
    FUN_14470e992(param_2,piVar1,&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)(param_1 + 0xafa) = local_1c != 0;
  if (*(longlong *)(param_1 + 0xb38) != 0) {
    FUN_146a9b494(*(longlong *)(param_1 + 0xb38),
                  CONCAT71((int7)((ulonglong)piVar1 >> 8),local_1c != 0) ^ 1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774b8e6 FUN_14774b8e6 body=177 status=ok
// SIG undefined FUN_14774b8e6(void)

void FUN_14774b8e6(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0xaf8) = local_1c != 0;
  if (*(longlong *)(param_1 + 0xb38) != 0) {
    FUN_146a99270(*(longlong *)(param_1 + 0xb38),local_1c != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774b99c FUN_14774b99c body=177 status=ok
// SIG undefined FUN_14774b99c(void)

void FUN_14774b99c(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0xafd) = local_1c != 0;
  if (*(longlong *)(param_1 + 0xb38) != 0) {
    FUN_146a9b4ac(*(longlong *)(param_1 + 0xb38),local_1c != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774ba4e FUN_14774ba4e body=166 status=ok
// SIG undefined FUN_14774ba4e(void)

void FUN_14774ba4e(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0xad2) = local_19;
  if (*(longlong *)(param_1 + 0xb38) != 0) {
    FUN_146a990c6();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774bafa FUN_14774bafa body=177 status=ok
// SIG undefined FUN_14774bafa(void)

void FUN_14774bafa(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x184) = local_1c != 0;
  if (*(longlong *)(param_1 + 0xb38) != 0) {
    FUN_146a9b4d2(*(longlong *)(param_1 + 0xb38),local_1c != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774bbac FUN_14774bbac body=166 status=ok
// SIG undefined FUN_14774bbac(void)

void FUN_14774bbac(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0xafe) = local_19;
  if (*(longlong *)(param_1 + 0xb38) != 0) {
    FUN_146a990be();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774bc54 FUN_14774bc54 body=167 status=ok
// SIG undefined FUN_14774bc54(void)

void FUN_14774bc54(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0xad0) = local_19;
  if (*(longlong *)(param_1 + 0xb38) != 0) {
    FUN_146a990ce();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774bcfc FUN_14774bcfc body=173 status=ok
// SIG undefined FUN_14774bcfc(void)

void FUN_14774bcfc(longlong param_1,longlong param_2)

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
  *(undefined4 *)(param_1 + 0x180) = local_1c;
  if (*(longlong *)(param_1 + 0xb38) != 0) {
    FUN_146a9b4be();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774bdaa FUN_14774bdaa body=197 status=ok
// SIG undefined FUN_14774bdaa(void)

void FUN_14774bdaa(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar4 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = *(undefined4 *)((longlong)puVar4 + 4);
  uVar2 = *(undefined4 *)(puVar4 + 1);
  uVar3 = *(undefined4 *)((longlong)puVar4 + 0xc);
  *(undefined4 *)(param_1 + 0xae8) = *(undefined4 *)puVar4;
  *(undefined4 *)(param_1 + 0xaec) = uVar1;
  *(undefined4 *)(param_1 + 0xaf0) = uVar2;
  *(undefined4 *)(param_1 + 0xaf4) = uVar3;
  if (*(longlong *)(param_1 + 0xb38) != 0) {
    FUN_146a99340(*(longlong *)(param_1 + 0xb38),param_1 + 0xae8);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774be70 FUN_14774be70 body=220 status=ok
// SIG undefined FUN_14774be70(void)

void FUN_14774be70(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar4 = local_28;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *(undefined4 *)(param_1 + 0xad8) = *puVar4;
  *(undefined4 *)(param_1 + 0xadc) = uVar1;
  *(undefined4 *)(param_1 + 0xae0) = uVar2;
  *(undefined4 *)(param_1 + 0xae4) = uVar3;
  if (*(longlong *)(param_1 + 0xb38) != 0) {
    FUN_146a9928a(*(longlong *)(param_1 + 0xb38),
                  CONCAT44((float)*(double *)(param_1 + 0xae0),(float)*(double *)(param_1 + 0xad8)))
    ;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774bf4e FUN_14774bf4e body=151 status=ok
// SIG undefined FUN_14774bf4e(void)

void FUN_14774bf4e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14774bfe6(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774bfe6 FUN_14774bfe6 body=53 status=ok
// SIG undefined FUN_14774bfe6(void)

void FUN_14774bfe6(longlong param_1,byte param_2)

{
  *(byte *)(param_1 + 0xad1) = param_2;
  if (param_2 < 5 && *(longlong *)(param_1 + 0xb38) != 0) {
    FUN_146a99202(*(longlong *)(param_1 + 0xb38),CONCAT71(0x14a5451,*(&PTR_DAT_14a5451d8)[param_2]))
    ;
    return;
  }
  return;
}



// FUNCTION 14774c01c FUN_14774c01c body=173 status=ok
// SIG undefined FUN_14774c01c(void)

void FUN_14774c01c(longlong param_1,longlong param_2)

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
  *(undefined4 *)(param_1 + 0xb30) = local_1c;
  if (*(longlong *)(param_1 + 0xb38) != 0) {
    FUN_146a98ae4();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774c0ca FUN_14774c0ca body=166 status=ok
// SIG undefined FUN_14774c0ca(void)

void FUN_14774c0ca(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0xb04) = local_19;
  if (*(longlong *)(param_1 + 0xb38) != 0) {
    FUN_146a9b4da();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774c172 FUN_14774c172 body=173 status=ok
// SIG undefined FUN_14774c172(void)

void FUN_14774c172(longlong param_1,longlong param_2)

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
  *(undefined4 *)(param_1 + 0xb08) = local_1c;
  if (*(longlong *)(param_1 + 0xb38) != 0) {
    FUN_146a9b4c8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774c270 FUN_14774c270 body=104 status=ok
// SIG undefined FUN_14774c270(void)

void FUN_14774c270(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_328 [32];
  undefined1 local_308 [752];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_328;
  FUN_14627d4c8(local_308,param_1 + 400);
  FUN_1458d9ec6(param_2,local_308);
  FUN_1458e4f8c(local_308);
  if ((local_18 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774c2da FUN_14774c2da body=8 status=ok
// SIG undefined FUN_14774c2da(void)

longlong FUN_14774c2da(longlong param_1)

{
  return param_1 + 400;
}



// FUNCTION 14774c2e2 FUN_14774c2e2 body=49 status=ok
// SIG undefined FUN_14774c2e2(void)

void FUN_14774c2e2(longlong param_1)

{
  FUN_1458d9ec6(param_1 + 400);
  if (*(longlong *)(param_1 + 0xb38) != 0) {
    thunk_FUN_140163244();
    return;
  }
  return;
}



// FUNCTION 14774c314 FUN_14774c314 body=104 status=ok
// SIG undefined FUN_14774c314(void)

void FUN_14774c314(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_688 [32];
  undefined1 local_668 [1616];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_688;
  FUN_141479436(local_668,param_1 + 0x480);
  FUN_1412cc8ca(param_2,local_668);
  FUN_140ffd8aa(local_668);
  if ((local_18 ^ (ulonglong)auStack_688) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774c37e FUN_14774c37e body=8 status=ok
// SIG undefined FUN_14774c37e(void)

longlong FUN_14774c37e(longlong param_1)

{
  return param_1 + 0x480;
}



// FUNCTION 14774c386 FUN_14774c386 body=49 status=ok
// SIG undefined FUN_14774c386(void)

void FUN_14774c386(longlong param_1)

{
  FUN_1412cc8ca(param_1 + 0x480);
  if (*(longlong *)(param_1 + 0xb38) != 0) {
    FUN_146a990aa();
    return;
  }
  return;
}



// FUNCTION 14774c3c2 FUN_14774c3c2 body=8 status=ok
// SIG undefined FUN_14774c3c2(void)

undefined1 FUN_14774c3c2(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0xad0);
}



// FUNCTION 14774c400 FUN_14774c400 body=7 status=ok
// SIG undefined FUN_14774c400(void)

undefined1 FUN_14774c400(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0xad2);
}



// FUNCTION 14774c532 FUN_14774c532 body=7 status=ok
// SIG undefined FUN_14774c532(void)

undefined1 FUN_14774c532(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0xafd);
}



// FUNCTION 14774c55e FUN_14774c55e body=7 status=ok
// SIG undefined FUN_14774c55e(void)

undefined1 FUN_14774c55e(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0xafe);
}



// FUNCTION 14774c58e FUN_14774c58e body=9 status=ok
// SIG undefined FUN_14774c58e(void)

undefined4 FUN_14774c58e(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xb00);
}



// FUNCTION 14774c5a2 FUN_14774c5a2 body=7 status=ok
// SIG undefined FUN_14774c5a2(void)

undefined1 FUN_14774c5a2(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0xb04);
}



// FUNCTION 14774c5f6 FUN_14774c5f6 body=9 status=ok
// SIG undefined FUN_14774c5f6(void)

undefined4 FUN_14774c5f6(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xb08);
}



// FUNCTION 14774c660 FUN_14774c660 body=155 status=ok
// SIG undefined FUN_14774c660(void)

void FUN_14774c660(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  if ((param_2 != '\0') && (iVar4 = *(int *)(param_1 + 0x170), 0 < iVar4)) {
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x168) + lVar5 * 8);
      if ((plVar3 != (longlong *)0x0) && (plVar3[6] != 0)) {
        (**(code **)(*plVar3 + 0x2a0))(plVar3,1);
        iVar4 = *(int *)(param_1 + 0x170);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
  }
  *(undefined8 *)(param_1 + 0xb38) = 0;
  plVar3 = *(longlong **)(param_1 + 0xb40);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xb40) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014774c6f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14774c702 FUN_14774c702 body=102 status=ok
// SIG undefined FUN_14774c702(void)

void FUN_14774c702(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0xb38);
  if (lVar1 != 0) {
    local_10 = *(longlong *)(param_1 + 0xb40);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    local_18 = lVar1;
    FUN_14774c76a(param_2,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774c76a FUN_14774c76a body=537 status=ok
// SIG undefined FUN_14774c76a(void)

void FUN_14774c76a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_238 [40];
  undefined8 local_210;
  longlong *local_208;
  undefined4 local_200 [2];
  undefined4 local_1f8;
  undefined1 local_1f4;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e0;
  undefined1 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined1 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined1 local_199;
  code *local_198;
  undefined1 *local_190;
  undefined4 local_188;
  undefined4 local_180;
  undefined1 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined1 local_164;
  undefined8 local_160;
  undefined4 local_158;
  undefined1 local_150;
  undefined8 local_148 [3];
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 local_120;
  undefined1 local_118 [16];
  uint local_108;
  undefined1 local_104;
  uint local_100;
  undefined1 local_fc;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_146a985ac(*param_2,local_148);
  local_1c8 = *(undefined4 *)(param_1 + 0x40);
  uStack_1c4 = *(undefined4 *)(param_1 + 0x44);
  uStack_1c0 = *(undefined4 *)(param_1 + 0x48);
  uStack_1bc = *(undefined4 *)(param_1 + 0x4c);
  local_1b8 = 1;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_120 = 1;
  local_130 = local_1c8;
  uStack_12c = uStack_1c4;
  uStack_128 = uStack_1c0;
  uStack_124 = uStack_1bc;
  FUN_144a450dc(local_118,&local_1b0);
  FUN_1449db362(&local_1b0);
  local_108 = (uint)*(byte *)(param_1 + 0x50);
  local_104 = 1;
  local_100 = (uint)*(byte *)(param_1 + 0x51);
  local_fc = 1;
  *(undefined8 *)(param_1 + 0x58) = local_148[0];
  FUN_14772ea74(local_200,param_1 + 0x38);
  local_188 = local_200[0];
  local_180 = local_1f8;
  local_17c = local_1f4;
  local_178 = local_1f0;
  local_1f0 = 0;
  local_170 = local_1e8;
  local_1e8 = 0;
  local_168 = local_1e0;
  local_164 = local_1dc;
  local_160 = local_1d8;
  local_1d8 = 0;
  local_158 = local_1d0;
  local_1d0 = 0;
  local_150 = 1;
  FUN_14774d472(local_148);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    local_210 = DAT_14c98dec8;
    local_208 = DAT_14c98ded0;
    if (DAT_14c98ded0 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
      UNLOCK();
    }
  }
  else {
    local_190 = &local_199;
    local_198 = FUN_143336ee2;
    FUN_1407616b4(*(longlong *)(param_1 + 0x30),&local_210);
  }
  FUN_146a0979e(local_148,&local_210);
  plVar3 = local_208;
  if (local_208 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_208 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_208)(local_208);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_1449db362(&local_1d8);
  FUN_1449db362(&local_1f0);
  FUN_146b0f82e(local_148);
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
  if ((local_38 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774c984 FUN_14774c984 body=222 status=ok
// SIG undefined FUN_14774c984(void)

void FUN_14774c984(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0xb38) != 0) && (*(longlong *)(param_2 + 0x30) != 0)) {
    FUN_140760c2c(*(longlong *)(param_2 + 0x30),&local_28);
    if (local_28 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0xb38);
      local_38 = local_28;
      local_30 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      FUN_146a98724(uVar4,&local_38);
      plVar3 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_30)(local_30);
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
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_20 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774ca64 FUN_14774ca64 body=1224 status=ok
// SIG undefined FUN_14774ca64(void)

undefined8 * FUN_14774ca64(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_308 [32];
  undefined1 *local_2e8;
  undefined8 local_2e0;
  longlong local_2d8;
  undefined1 local_2c9;
  undefined1 local_2c8 [8];
  longlong *local_2c0;
  undefined8 *local_2b0;
  undefined4 local_2a8;
  undefined8 *local_2a0;
  undefined4 local_298;
  undefined8 local_290;
  longlong *local_288;
  undefined1 local_280 [440];
  longlong local_c8;
  longlong local_c0;
  uint local_a8;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_308;
  FUN_146a095be(local_280);
  local_c8 = param_1 + 400;
  local_c0 = param_1 + 0x480;
  local_a8 = (uint)*(byte *)(param_1 + 0xad0);
  local_50 = *(undefined1 *)(param_1 + 0xad2);
  local_7b = *(undefined1 *)(param_1 + 0xafe);
  local_78 = *(undefined4 *)(param_1 + 0xb00);
  local_74 = *(undefined1 *)(param_1 + 0xb04);
  local_87 = *(undefined1 *)(param_1 + 0xafb);
  local_86 = *(undefined1 *)(param_1 + 0xafc);
  local_85 = *(undefined1 *)(param_1 + 0xafd);
  local_84 = *(undefined4 *)(param_1 + 0x180);
  local_80 = *(undefined4 *)(param_1 + 0xb08);
  local_7c = *(undefined1 *)(param_1 + 0x184);
  local_2a0 = (undefined8 *)0x0;
  local_298 = 0;
  FUN_1446efa72(&local_2a0,0,3,0x10);
  puVar7 = local_2a0;
  local_298 = 3;
  *local_2a0 = &PTR_LAB_149e01f80;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_2a0[2] = lVar8;
  *local_2a0 = &PTR_FUN_14a5423d0;
  local_2a0[3] = 0;
  FUN_14485c47a(local_2a0 + 3,param_1);
  *(undefined4 *)(puVar7 + 5) = 0;
  puVar7[4] = FUN_14774cf2e;
  FUN_144a450dc(local_70,&local_2a0);
  local_2b0 = (undefined8 *)0x0;
  local_2a8 = 0;
  FUN_1446efa72(&local_2b0,0,3,0x10);
  puVar7 = local_2b0;
  local_2a8 = 3;
  *local_2b0 = &PTR_LAB_149f198b0;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_2b0[2] = lVar8;
  *local_2b0 = &PTR_FUN_14a542440;
  local_2b0[3] = 0;
  FUN_14485c47a(local_2b0 + 3,param_1);
  puVar7[4] = FUN_14774cf72;
  *(undefined4 *)(puVar7 + 5) = 0;
  FUN_144a450dc(local_60,&local_2b0);
  local_2e8 = &local_2c9;
  FUN_146a3d09a(local_2c8,"SScrollBox",".\\Runtime/UMG/Private/Components/ScrollBox.cpp",0x5e);
  FUN_146a09826(local_2c8,&local_290,local_280);
  plVar6 = local_288;
  if (local_288 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xb38) = local_290;
    plVar10 = *(longlong **)(param_1 + 0xb40);
    if (plVar10 == (longlong *)0x0) goto LAB_14774ccee;
    *(undefined8 *)(param_1 + 0xb40) = 0;
LAB_14774cec7:
    LOCK();
    plVar6 = plVar10 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_14774ccee;
    (**(code **)*plVar10)(plVar10);
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_288 + 1) = (int)local_288[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0xb38) = local_290;
    plVar10 = *(longlong **)(param_1 + 0xb40);
    if (local_288 != plVar10) {
      *(longlong **)(param_1 + 0xb40) = local_288;
      if (plVar10 == (longlong *)0x0) goto LAB_14774ccee;
      goto LAB_14774cec7;
    }
    LOCK();
    plVar10 = local_288 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 != 0) goto LAB_14774ccee;
    (**(code **)*local_288)(local_288);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar10 = plVar6;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
LAB_14774ccee:
  if (local_288 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_288 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_288)(local_288);
      LOCK();
      piVar1 = (int *)((longlong)local_288 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_288 + 0x10))(local_288);
      }
    }
  }
  if (local_2c0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_2c0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_2c0)(local_2c0);
      LOCK();
      piVar1 = (int *)((longlong)local_2c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2c0 + 0x10))(local_2c0);
      }
    }
  }
  FUN_1449db362(&local_2b0);
  FUN_1449db362(&local_2a0);
  FUN_146a09906(local_280);
  iVar2 = *(int *)(param_1 + 0x170);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x168);
    lVar8 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar8);
      if (lVar4 != 0) {
        lVar9 = FUN_145991122();
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
          if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(param_1);
          }
          *(longlong *)(lVar4 + 0x28) = param_1;
          local_2e0 = *(undefined8 *)(param_1 + 0xb38);
          local_2d8 = *(longlong *)(param_1 + 0xb40);
          if (local_2d8 != 0) {
            LOCK();
            *(int *)(local_2d8 + 8) = *(int *)(local_2d8 + 8) + 1;
            UNLOCK();
          }
          FUN_14774c76a(lVar4,&local_2e0);
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar2 * 8 != lVar8);
  }
  uVar5 = *(undefined8 *)(param_1 + 0xb38);
  plVar6 = *(longlong **)(param_1 + 0xb40);
  if (plVar6 == (longlong *)0x0) {
    *param_2 = uVar5;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *param_2 = uVar5;
    param_2[1] = plVar6;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar10 = plVar6 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774cf2e FUN_14774cf2e body=67 status=ok
// SIG undefined FUN_14774cf2e(void)

void FUN_14774cf2e(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_1447cd2ec(param_1 + 0xb10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774cf72 FUN_14774cf72 body=119 status=ok
// SIG undefined FUN_14774cf72(void)

void FUN_14774cf72(longlong param_1,char param_2)

{
  undefined1 auStack_38 [47];
  char local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (DAT_14c96b238 == param_2) {
    local_9 = '\0';
  }
  else {
    local_9 = '\x01';
    if (((DAT_14c96b1e1 != param_2) && (local_9 = '\x02', DAT_14c96b23b != param_2)) &&
       (local_9 = '\x03', DAT_14c96b23a != param_2)) {
      local_9 = (DAT_14c96b23c == param_2) << 2;
    }
  }
  FUN_1447cd2ec(param_1 + 0xb20);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774cfea FUN_14774cfea body=413 status=ok
// SIG undefined FUN_14774cfea(void)

void FUN_14774cfea(longlong param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  FUN_1412719b8();
  if (*(longlong *)(param_1 + 0xb38) != 0) {
    FUN_146a98ae4(*(longlong *)(param_1 + 0xb38),*(undefined4 *)(param_1 + 0xb30));
    FUN_146a990ce(*(undefined8 *)(param_1 + 0xb38),*(undefined1 *)(param_1 + 0xad0));
    bVar1 = *(char *)(param_1 + 0xad1) - 1;
    if (bVar1 < 4) {
      puVar2 = (&PTR_DAT_14a545290)[bVar1];
    }
    else {
      puVar2 = &DAT_14c96b238;
    }
    FUN_146a99202(*(undefined8 *)(param_1 + 0xb38),*puVar2);
    FUN_146a9928a(*(undefined8 *)(param_1 + 0xb38),
                  CONCAT44((float)*(double *)(param_1 + 0xae0),(float)*(double *)(param_1 + 0xad8)))
    ;
    lVar3 = param_1 + 0xae8;
    FUN_146a99340(*(undefined8 *)(param_1 + 0xb38),lVar3);
    uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(param_1 + 0xaf8));
    FUN_146a99270(*(undefined8 *)(param_1 + 0xb38),uVar4);
    uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),*(undefined1 *)(param_1 + 0xaf9));
    FUN_146a9927c(*(undefined8 *)(param_1 + 0xb38),uVar4);
    FUN_146a9b494(*(undefined8 *)(param_1 + 0xb38),
                  CONCAT71((int7)((ulonglong)uVar4 >> 8),*(undefined1 *)(param_1 + 0xafa)) ^ 1);
    FUN_146a993d4(*(undefined8 *)(param_1 + 0xb38),*(undefined1 *)(param_1 + 0xb05));
    FUN_146a990c6(*(undefined8 *)(param_1 + 0xb38),*(undefined1 *)(param_1 + 0xad2));
    FUN_146a9b4ac(*(undefined8 *)(param_1 + 0xb38),*(undefined1 *)(param_1 + 0xafd));
    FUN_146a9b4be(*(undefined8 *)(param_1 + 0xb38),*(undefined4 *)(param_1 + 0x180));
    FUN_146a9b4c8(*(undefined8 *)(param_1 + 0xb38),*(undefined4 *)(param_1 + 0xb08));
    FUN_146a9b4d2(*(undefined8 *)(param_1 + 0xb38),*(undefined1 *)(param_1 + 0x184));
    FUN_146a99060(*(undefined8 *)(param_1 + 0xb38),param_1 + 400);
    thunk_FUN_140163244(*(undefined8 *)(param_1 + 0xb38));
    FUN_146a99080(*(undefined8 *)(param_1 + 0xb38),param_1 + 0x480);
    FUN_146a990aa(*(undefined8 *)(param_1 + 0xb38));
    return;
  }
  return;
}



// FUNCTION 14774d188 FUN_14774d188 body=171 status=ok
// SIG undefined FUN_14774d188(void)

void FUN_14774d188(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [47];
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x50) = local_19;
  lVar1 = *(longlong *)(param_1 + 0x58);
  if ((lVar1 != 0) && (*(uint *)(lVar1 + 0x38) != (uint)local_19)) {
    *(uint *)(lVar1 + 0x38) = (uint)local_19;
    FUN_14156c56c(lVar1,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774d234 FUN_14774d234 body=163 status=ok
// SIG undefined FUN_14774d234(void)

void FUN_14774d234(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
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
  local_38 = (undefined4)local_28;
  uStack_34 = local_28._4_4_;
  uStack_30 = (undefined4)uStack_20;
  uStack_2c = uStack_20._4_4_;
  FUN_14774d2d8(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774d2d8 FUN_14774d2d8 body=117 status=ok
// SIG undefined FUN_14774d2d8(void)

void FUN_14774d2d8(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 != 0) {
    local_38 = *param_2;
    uStack_30 = param_2[1];
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_140a55872(lVar1 + 0x28,lVar1 + 0x20,&local_38);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774d34e FUN_14774d34e body=171 status=ok
// SIG undefined FUN_14774d34e(void)

void FUN_14774d34e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [47];
  byte local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x51) = local_19;
  lVar1 = *(longlong *)(param_1 + 0x58);
  if ((lVar1 != 0) && (*(uint *)(lVar1 + 0x3c) != (uint)local_19)) {
    *(uint *)(lVar1 + 0x3c) = (uint)local_19;
    FUN_14156c56c(lVar1,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774d40a FUN_14774d40a body=99 status=ok
// SIG undefined FUN_14774d40a(void)

void FUN_14774d40a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [56];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_1 + 0x38) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x58);
  local_20 = param_2;
  if (lVar1 != 0) {
    FUN_14772ea74(local_58,&local_20);
    FUN_146a94478(lVar1,local_58);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774d472 FUN_14774d472 body=59 status=ok
// SIG undefined FUN_14774d472(void)

longlong FUN_14774d472(longlong param_1,longlong param_2)

{
  FUN_146a46c74(param_1 + 0x50);
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1449db362(param_2 + 0x28);
    FUN_1449db362(param_2 + 0x10);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return param_1;
}



// FUNCTION 14774d4ae FUN_14774d4ae body=137 status=ok
// SIG undefined FUN_14774d4ae(void)

void FUN_14774d4ae(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined4 *)(param_1 + 0x40);
  uStack_24 = *(undefined4 *)(param_1 + 0x44);
  uStack_20 = *(undefined4 *)(param_1 + 0x48);
  uStack_1c = *(undefined4 *)(param_1 + 0x4c);
  FUN_14774d2d8();
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 != 0) {
    if (*(uint *)(lVar1 + 0x38) != (uint)*(byte *)(param_1 + 0x50)) {
      *(uint *)(lVar1 + 0x38) = (uint)*(byte *)(param_1 + 0x50);
      FUN_14156c56c(lVar1,1);
      lVar1 = *(longlong *)(param_1 + 0x58);
      if (lVar1 == 0) goto LAB_14774d4df;
    }
    if (*(uint *)(lVar1 + 0x3c) != (uint)*(byte *)(param_1 + 0x51)) {
      *(uint *)(lVar1 + 0x3c) = (uint)*(byte *)(param_1 + 0x51);
      FUN_14156c56c(lVar1,1);
    }
  }
LAB_14774d4df:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_14774d40a(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48,*(undefined8 *)(param_1 + 0x38));
}



// FUNCTION 14774d538 FUN_14774d538 body=108 status=ok
// SIG undefined FUN_14774d538(void)

void FUN_14774d538(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x1b0) = *(byte *)(param_1 + 0x1b0) & 0xfd;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_20 = 0xbf800000;
    local_1c = 1;
    local_18 = 0;
    uStack_10 = 0;
    FUN_145d09c5c();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774d5a6 FUN_14774d5a6 body=108 status=ok
// SIG undefined FUN_14774d5a6(void)

void FUN_14774d5a6(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x1b0) = *(byte *)(param_1 + 0x1b0) & 0x7f;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_20 = 0xbf800000;
    local_1c = 1;
    local_18 = 0;
    uStack_10 = 0;
    FUN_145d09d64();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774d614 FUN_14774d614 body=108 status=ok
// SIG undefined FUN_14774d614(void)

void FUN_14774d614(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x1b0) = *(byte *)(param_1 + 0x1b0) & 0xdf;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_20 = 0xbf800000;
    local_1c = 1;
    local_18 = 0;
    uStack_10 = 0;
    FUN_145d09d0c();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774d682 FUN_14774d682 body=108 status=ok
// SIG undefined FUN_14774d682(void)

void FUN_14774d682(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x1b0) = *(byte *)(param_1 + 0x1b0) & 0xef;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_20 = 0xbf800000;
    local_1c = 1;
    local_18 = 0;
    uStack_10 = 0;
    FUN_145d09ce0();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774d6f0 FUN_14774d6f0 body=108 status=ok
// SIG undefined FUN_14774d6f0(void)

void FUN_14774d6f0(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x1b0) = *(byte *)(param_1 + 0x1b0) & 0xbf;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_20 = 0xbf800000;
    local_1c = 1;
    local_18 = 0;
    uStack_10 = 0;
    FUN_145d09d38();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774d75e FUN_14774d75e body=108 status=ok
// SIG undefined FUN_14774d75e(void)

void FUN_14774d75e(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x1b0) = *(byte *)(param_1 + 0x1b0) & 0xf7;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_20 = 0xbf800000;
    local_1c = 1;
    local_18 = 0;
    uStack_10 = 0;
    FUN_145d09cb4();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774d7cc FUN_14774d7cc body=108 status=ok
// SIG undefined FUN_14774d7cc(void)

void FUN_14774d7cc(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x1b0) = *(byte *)(param_1 + 0x1b0) & 0xfb;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_20 = 0xbf800000;
    local_1c = 1;
    local_18 = 0;
    uStack_10 = 0;
    FUN_145d09c88();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774d83a FUN_14774d83a body=108 status=ok
// SIG undefined FUN_14774d83a(void)

void FUN_14774d83a(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x1b0) = *(byte *)(param_1 + 0x1b0) & 0xfe;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_20 = 0xbf800000;
    local_1c = 1;
    local_18 = 0;
    uStack_10 = 0;
    FUN_145d09c30();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774d8a8 FUN_14774d8a8 body=203 status=ok
// SIG undefined FUN_14774d8a8(void)

void FUN_14774d8a8(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x1b0) = *(byte *)(param_1 + 0x1b0) | 2;
  *(undefined4 *)(param_1 + 0x194) = local_34;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_30 = local_34;
    local_2c = 1;
    local_28 = 0;
    uStack_20 = 0;
    FUN_145d09c5c();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774d974 FUN_14774d974 body=98 status=ok
// SIG undefined FUN_14774d974(void)

void FUN_14774d974(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(byte *)(param_1 + 0x1b0) = *(byte *)(param_1 + 0x1b0) | 2;
  *(undefined4 *)(param_1 + 0x194) = param_2;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_1c = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = param_2;
    FUN_145d09c5c();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774d9d8 FUN_14774d9d8 body=203 status=ok
// SIG undefined FUN_14774d9d8(void)

void FUN_14774d9d8(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x1b0) = *(byte *)(param_1 + 0x1b0) | 0x80;
  *(undefined4 *)(param_1 + 0x1ac) = local_34;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_30 = local_34;
    local_2c = 1;
    local_28 = 0;
    uStack_20 = 0;
    FUN_145d09d64();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774daa4 FUN_14774daa4 body=203 status=ok
// SIG undefined FUN_14774daa4(void)

void FUN_14774daa4(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x1b0) = *(byte *)(param_1 + 0x1b0) | 0x20;
  *(undefined4 *)(param_1 + 0x1a4) = local_34;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_30 = local_34;
    local_2c = 1;
    local_28 = 0;
    uStack_20 = 0;
    FUN_145d09d0c();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774db70 FUN_14774db70 body=203 status=ok
// SIG undefined FUN_14774db70(void)

void FUN_14774db70(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x1b0) = *(byte *)(param_1 + 0x1b0) | 0x10;
  *(undefined4 *)(param_1 + 0x1a0) = local_34;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_30 = local_34;
    local_2c = 1;
    local_28 = 0;
    uStack_20 = 0;
    FUN_145d09ce0();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774dc3c FUN_14774dc3c body=203 status=ok
// SIG undefined FUN_14774dc3c(void)

void FUN_14774dc3c(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x1b0) = *(byte *)(param_1 + 0x1b0) | 0x40;
  *(undefined4 *)(param_1 + 0x1a8) = local_34;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_30 = local_34;
    local_2c = 1;
    local_28 = 0;
    uStack_20 = 0;
    FUN_145d09d38();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774dd08 FUN_14774dd08 body=203 status=ok
// SIG undefined FUN_14774dd08(void)

void FUN_14774dd08(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x1b0) = *(byte *)(param_1 + 0x1b0) | 8;
  *(undefined4 *)(param_1 + 0x19c) = local_34;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_30 = local_34;
    local_2c = 1;
    local_28 = 0;
    uStack_20 = 0;
    FUN_145d09cb4();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774ddd4 FUN_14774ddd4 body=203 status=ok
// SIG undefined FUN_14774ddd4(void)

void FUN_14774ddd4(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x1b0) = *(byte *)(param_1 + 0x1b0) | 4;
  *(undefined4 *)(param_1 + 0x198) = local_34;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_30 = local_34;
    local_2c = 1;
    local_28 = 0;
    uStack_20 = 0;
    FUN_145d09c88();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774dea0 FUN_14774dea0 body=203 status=ok
// SIG undefined FUN_14774dea0(void)

void FUN_14774dea0(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x1b0) = *(byte *)(param_1 + 0x1b0) | 1;
  *(undefined4 *)(param_1 + 400) = local_34;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_30 = local_34;
    local_2c = 1;
    local_28 = 0;
    uStack_20 = 0;
    FUN_145d09c30();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774df6c FUN_14774df6c body=98 status=ok
// SIG undefined FUN_14774df6c(void)

void FUN_14774df6c(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(byte *)(param_1 + 0x1b0) = *(byte *)(param_1 + 0x1b0) | 1;
  *(undefined4 *)(param_1 + 400) = param_2;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_1c = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = param_2;
    FUN_145d09c30();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774dfde FUN_14774dfde body=102 status=ok
// SIG undefined FUN_14774dfde(void)

void FUN_14774dfde(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  *(byte *)(param_1 + 0x1b0) = *(byte *)(param_1 + 0x1b0) | 1;
  *(undefined4 *)(param_1 + 400) = uVar1;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_1c = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = uVar1;
    FUN_145d09c30();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774e054 FUN_14774e054 body=102 status=ok
// SIG undefined FUN_14774e054(void)

void FUN_14774e054(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  *(byte *)(param_1 + 0x1b0) = *(byte *)(param_1 + 0x1b0) | 2;
  *(undefined4 *)(param_1 + 0x194) = uVar1;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_1c = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = uVar1;
    FUN_145d09c5c();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774e0ca FUN_14774e0ca body=102 status=ok
// SIG undefined FUN_14774e0ca(void)

void FUN_14774e0ca(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  *(byte *)(param_1 + 0x1b0) = *(byte *)(param_1 + 0x1b0) | 4;
  *(undefined4 *)(param_1 + 0x198) = uVar1;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_1c = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = uVar1;
    FUN_145d09c88();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774e140 FUN_14774e140 body=102 status=ok
// SIG undefined FUN_14774e140(void)

void FUN_14774e140(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  *(byte *)(param_1 + 0x1b0) = *(byte *)(param_1 + 0x1b0) | 8;
  *(undefined4 *)(param_1 + 0x19c) = uVar1;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_1c = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = uVar1;
    FUN_145d09cb4();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774e1b6 FUN_14774e1b6 body=102 status=ok
// SIG undefined FUN_14774e1b6(void)

void FUN_14774e1b6(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  *(byte *)(param_1 + 0x1b0) = *(byte *)(param_1 + 0x1b0) | 0x10;
  *(undefined4 *)(param_1 + 0x1a0) = uVar1;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_1c = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = uVar1;
    FUN_145d09ce0();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774e22c FUN_14774e22c body=102 status=ok
// SIG undefined FUN_14774e22c(void)

void FUN_14774e22c(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  *(byte *)(param_1 + 0x1b0) = *(byte *)(param_1 + 0x1b0) | 0x20;
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_1c = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = uVar1;
    FUN_145d09d0c();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774e2a2 FUN_14774e2a2 body=102 status=ok
// SIG undefined FUN_14774e2a2(void)

void FUN_14774e2a2(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  *(byte *)(param_1 + 0x1b0) = *(byte *)(param_1 + 0x1b0) | 0x40;
  *(undefined4 *)(param_1 + 0x1a8) = uVar1;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_1c = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = uVar1;
    FUN_145d09d38();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774e318 FUN_14774e318 body=102 status=ok
// SIG undefined FUN_14774e318(void)

void FUN_14774e318(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  *(byte *)(param_1 + 0x1b0) = *(byte *)(param_1 + 0x1b0) | 0x80;
  *(undefined4 *)(param_1 + 0x1ac) = uVar1;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    local_1c = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = uVar1;
    FUN_145d09d64();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774e3ce FUN_14774e3ce body=102 status=ok
// SIG undefined FUN_14774e3ce(void)

void FUN_14774e3ce(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1 + 0x180);
  if (lVar1 != 0) {
    local_10 = *(longlong *)(param_1 + 0x188);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    local_18 = lVar1;
    FUN_145e28d22(param_2,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774e450 FUN_14774e450 body=152 status=ok
// SIG undefined FUN_14774e450(void)

void FUN_14774e450(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145e28f4c(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774e4ea FUN_14774e4ea body=163 status=ok
// SIG undefined FUN_14774e4ea(void)

void FUN_14774e4ea(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
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
  local_38 = (undefined4)local_28;
  uStack_34 = local_28._4_4_;
  uStack_30 = (undefined4)uStack_20;
  uStack_2c = uStack_20._4_4_;
  FUN_145e29068(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774e58e FUN_14774e58e body=152 status=ok
// SIG undefined FUN_14774e58e(void)

void FUN_14774e58e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145e28fda(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774e628 FUN_14774e628 body=62 status=ok
// SIG undefined FUN_14774e628(void)

void FUN_14774e628(undefined8 param_1,undefined4 *param_2)

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
  FUN_145e29068();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774e67c FUN_14774e67c body=11 status=ok
// SIG undefined FUN_14774e67c(void)

undefined8 * FUN_14774e67c(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *param_2 = *(undefined8 *)(param_1 + 0x38);
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 14774e688 FUN_14774e688 body=5 status=ok
// SIG undefined FUN_14774e688(void)

undefined1 FUN_14774e688(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x58);
}



// FUNCTION 14774e68e FUN_14774e68e body=5 status=ok
// SIG undefined FUN_14774e68e(void)

undefined1 FUN_14774e68e(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x59);
}



// FUNCTION 14774e6af FUN_14774e6af body=60 status=ok
// SIG undefined FUN_14774e6af(void)

void FUN_14774e6af(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_1447cd2ec();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774e6ec FUN_14774e6ec body=109 status=ok
// SIG undefined FUN_14774e6ec(void)

void FUN_14774e6ec(longlong param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x650) == 0) {
    fVar2 = *(float *)(param_1 + 0x17c);
    fVar1 = *(float *)(param_1 + 0x180);
    if ((fVar2 != fVar1) || (NAN(fVar2) || NAN(fVar1))) {
      fVar2 = (*(float *)(param_1 + 0x168) - fVar2) / (fVar1 - fVar2);
    }
    else {
      fVar2 = 1.0;
    }
  }
  else {
    fVar2 = (float)FUN_146a85512(*(longlong *)(param_1 + 0x650));
  }
  *param_3 = fVar2;
  return;
}



// FUNCTION 14774e75a FUN_14774e75a body=64 status=ok
// SIG undefined FUN_14774e75a(void)

void FUN_14774e75a(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x650) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x168);
  }
  else {
    uVar1 = FUN_146a86a1e(*(longlong *)(param_1 + 0x650));
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 14774e79e FUN_14774e79e body=195 status=ok
// SIG undefined FUN_14774e79e(void)

void FUN_14774e79e(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [36];
  int local_34;
  undefined1 local_30;
  undefined1 local_2f;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)(param_1 + 0x5f4) = local_34 != 0;
  if (*(longlong *)(param_1 + 0x650) != 0) {
    local_2f = 1;
    local_28 = 0;
    uStack_20 = 0;
    local_30 = local_34 != 0;
    FUN_146a86a8e();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774e866 FUN_14774e866 body=195 status=ok
// SIG undefined FUN_14774e866(void)

void FUN_14774e866(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [36];
  int local_34;
  undefined1 local_30;
  undefined1 local_2f;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)(param_1 + 0x5f5) = local_34 != 0;
  if (*(longlong *)(param_1 + 0x650) != 0) {
    local_2f = 1;
    local_28 = 0;
    uStack_20 = 0;
    local_30 = local_34 != 0;
    FUN_146a86aba();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774e92a FUN_14774e92a body=181 status=ok
// SIG undefined FUN_14774e92a(void)

void FUN_14774e92a(longlong param_1,longlong param_2)

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
  *(undefined4 *)(param_1 + 0x180) = local_1c;
  if (*(longlong *)(param_1 + 0x650) != 0) {
    FUN_146a86a54(*(longlong *)(param_1 + 0x650),*(undefined4 *)(param_1 + 0x17c));
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774e9e0 FUN_14774e9e0 body=181 status=ok
// SIG undefined FUN_14774e9e0(void)

void FUN_14774e9e0(longlong param_1,longlong param_2)

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
  *(undefined4 *)(param_1 + 0x17c) = local_1c;
  if (*(longlong *)(param_1 + 0x650) != 0) {
    FUN_146a86a54(*(longlong *)(param_1 + 0x650),local_1c,*(undefined4 *)(param_1 + 0x180));
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774ea96 FUN_14774ea96 body=194 status=ok
// SIG undefined FUN_14774ea96(void)

void FUN_14774ea96(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x5d4) = local_58;
  *(undefined4 *)(param_1 + 0x5d8) = uStack_54;
  *(undefined4 *)(param_1 + 0x5dc) = uStack_50;
  *(undefined4 *)(param_1 + 0x5e0) = uStack_4c;
  if (*(longlong *)(param_1 + 0x650) != 0) {
    local_38 = 0;
    local_34 = 1;
    local_30 = 0;
    uStack_28 = 0;
    FUN_146a86afc();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774eb5a FUN_14774eb5a body=194 status=ok
// SIG undefined FUN_14774eb5a(void)

void FUN_14774eb5a(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x5e4) = local_58;
  *(undefined4 *)(param_1 + 0x5e8) = uStack_54;
  *(undefined4 *)(param_1 + 0x5ec) = uStack_50;
  *(undefined4 *)(param_1 + 0x5f0) = uStack_4c;
  if (*(longlong *)(param_1 + 0x650) != 0) {
    local_38 = 0;
    local_34 = 1;
    local_30 = 0;
    uStack_28 = 0;
    FUN_146a86b28();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774ec1e FUN_14774ec1e body=196 status=ok
// SIG undefined FUN_14774ec1e(void)

void FUN_14774ec1e(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x5f8) = local_34;
  if (*(longlong *)(param_1 + 0x650) != 0) {
    local_30 = local_34;
    local_2c = 1;
    local_28 = 0;
    uStack_20 = 0;
    FUN_146a86bac();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774ece4 FUN_14774ece4 body=156 status=ok
// SIG undefined FUN_14774ece4(void)

void FUN_14774ece4(undefined8 param_1,longlong param_2)

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
  FUN_14774ed82(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774ed82 FUN_14774ed82 body=186 status=ok
// SIG undefined FUN_14774ed82(void)

void FUN_14774ed82(longlong param_1,float param_2)

{
  undefined1 auStack_78 [32];
  float local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x650) != 0) {
    local_54 = 1;
    local_50 = 0;
    uStack_48 = 0;
    local_58 = param_2;
    FUN_146a86a28();
  }
  if ((*(float *)(param_1 + 0x168) != param_2) || (NAN(*(float *)(param_1 + 0x168)) || NAN(param_2))
     ) {
    *(float *)(param_1 + 0x168) = param_2;
    local_40 = CONCAT44(local_40._4_4_,param_2);
    FUN_1447cd2ec(param_1 + 0x640,&local_40);
    local_40 = DAT_14cab8690;
    local_38 = DAT_14cab8698;
    FUN_140e2f5f4(param_1 + 0x28,&local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774ee3e FUN_14774ee3e body=48 status=ok
// SIG undefined FUN_14774ee3e(void)

void FUN_14774ee3e(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x650) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x168);
  }
  else {
    uVar1 = FUN_146a86a1e();
  }
  *param_2 = uVar1;
  return;
}



// FUNCTION 14774ef18 FUN_14774ef18 body=104 status=ok
// SIG undefined FUN_14774ef18(void)

void FUN_14774ef18(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_478 [32];
  undefined1 local_458 [1088];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_478;
  FUN_145c1e400(local_458,param_1 + 400);
  FUN_145931d36(param_2,local_458);
  FUN_14130c426(local_458);
  if ((local_18 ^ (ulonglong)auStack_478) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774ef82 FUN_14774ef82 body=8 status=ok
// SIG undefined FUN_14774ef82(void)

longlong FUN_14774ef82(longlong param_1)

{
  return param_1 + 400;
}



// FUNCTION 14774ef8a FUN_14774ef8a body=58 status=ok
// SIG undefined FUN_14774ef8a(void)

void FUN_14774ef8a(longlong param_1)

{
  FUN_145931d36(param_1 + 400);
  if (*(longlong *)(param_1 + 0x650) != 0) {
    FUN_146a8562a(*(longlong *)(param_1 + 0x650),param_1 + 400);
    return;
  }
  return;
}



// FUNCTION 14774eff4 FUN_14774eff4 body=109 status=ok
// SIG undefined FUN_14774eff4(void)

void FUN_14774eff4(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_40 = param_2[1];
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x5d4) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x5d8) = uVar1;
  *(undefined4 *)(param_1 + 0x5dc) = uVar2;
  *(undefined4 *)(param_1 + 0x5e0) = uVar3;
  if (*(longlong *)(param_1 + 0x650) != 0) {
    local_28 = 0;
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_38 = local_48;
    uStack_30 = uStack_40;
    FUN_146a86afc();
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774f06e FUN_14774f06e body=109 status=ok
// SIG undefined FUN_14774f06e(void)

void FUN_14774f06e(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_40 = param_2[1];
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x5e4) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x5e8) = uVar1;
  *(undefined4 *)(param_1 + 0x5ec) = uVar2;
  *(undefined4 *)(param_1 + 0x5f0) = uVar3;
  if (*(longlong *)(param_1 + 0x650) != 0) {
    local_28 = 0;
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_38 = local_48;
    uStack_30 = uStack_40;
    FUN_146a86b28();
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774f0e6 FUN_14774f0e6 body=89 status=ok
// SIG undefined FUN_14774f0e6(void)

void FUN_14774f0e6(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20;
  undefined1 local_1f;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 0x5f4) = uVar1;
  if (*(longlong *)(param_1 + 0x650) != 0) {
    local_1f = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = uVar1;
    FUN_146a86a8e();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774f14a FUN_14774f14a body=89 status=ok
// SIG undefined FUN_14774f14a(void)

void FUN_14774f14a(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20;
  undefined1 local_1f;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 0x5f5) = uVar1;
  if (*(longlong *)(param_1 + 0x650) != 0) {
    local_1f = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = uVar1;
    FUN_146a86aba();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774f1a4 FUN_14774f1a4 body=48 status=ok
// SIG undefined FUN_14774f1a4(void)

void FUN_14774f1a4(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 0x650) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x5f8);
  }
  else {
    uVar1 = FUN_146a86b54();
  }
  *param_2 = uVar1;
  return;
}



// FUNCTION 14774f1d4 FUN_14774f1d4 body=95 status=ok
// SIG undefined FUN_14774f1d4(void)

void FUN_14774f1d4(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x5f8) = uVar1;
  if (*(longlong *)(param_1 + 0x650) != 0) {
    local_1c = 1;
    local_18 = 0;
    uStack_10 = 0;
    local_20 = uVar1;
    FUN_146a86bac();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774f260 FUN_14774f260 body=1413 status=ok
// SIG undefined FUN_14774f260(void)

undefined8 * FUN_14774f260(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_3b8 [32];
  undefined1 *local_398;
  undefined1 local_389;
  undefined1 local_388 [8];
  longlong *local_380;
  undefined8 *local_370;
  undefined4 local_368;
  undefined8 *local_360;
  undefined4 local_358;
  undefined8 *local_350;
  undefined4 local_348;
  undefined8 *local_340;
  undefined4 local_338;
  undefined8 *local_330;
  undefined4 local_328;
  undefined8 local_320;
  longlong *local_318;
  undefined1 local_310 [568];
  longlong local_d8;
  undefined1 local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  FUN_146a8a032(local_310);
  local_d8 = param_1 + 400;
  local_98 = *(undefined1 *)(param_1 + 0x5fc);
  local_330 = (undefined8 *)0x0;
  local_328 = 0;
  FUN_1446efa72(&local_330,0,3,0x10);
  puVar5 = local_330;
  local_328 = 3;
  *local_330 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_330[2] = lVar7;
  *local_330 = &PTR_FUN_14a5424b0;
  local_330[3] = 0;
  FUN_14485c47a(local_330 + 3,param_1);
  *(undefined4 *)(puVar5 + 5) = 0;
  puVar5[4] = &LAB_14774f7e6;
  FUN_144a450dc(local_90,&local_330);
  local_340 = (undefined8 *)0x0;
  local_338 = 0;
  FUN_1446efa72(&local_340,0,3,0x10);
  puVar5 = local_340;
  local_338 = 3;
  *local_340 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_340[2] = lVar7;
  *local_340 = &PTR_FUN_14a5424b0;
  local_340[3] = 0;
  FUN_14485c47a(local_340 + 3,param_1);
  *(undefined4 *)(puVar5 + 5) = 0;
  puVar5[4] = &LAB_14774f7f4;
  FUN_144a450dc(local_80,&local_340);
  local_350 = (undefined8 *)0x0;
  local_348 = 0;
  FUN_1446efa72(&local_350,0,3,0x10);
  puVar5 = local_350;
  local_348 = 3;
  *local_350 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_350[2] = lVar7;
  *local_350 = &PTR_FUN_14a5424b0;
  local_350[3] = 0;
  FUN_14485c47a(local_350 + 3,param_1);
  *(undefined4 *)(puVar5 + 5) = 0;
  puVar5[4] = &LAB_14774f802;
  FUN_144a450dc(local_70,&local_350);
  local_360 = (undefined8 *)0x0;
  local_358 = 0;
  FUN_1446efa72(&local_360,0,3,0x10);
  puVar5 = local_360;
  local_358 = 3;
  *local_360 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_360[2] = lVar7;
  *local_360 = &PTR_FUN_14a5424b0;
  local_360[3] = 0;
  FUN_14485c47a(local_360 + 3,param_1);
  *(undefined4 *)(puVar5 + 5) = 0;
  puVar5[4] = &LAB_14774f810;
  FUN_144a450dc(local_60,&local_360);
  local_370 = (undefined8 *)0x0;
  local_368 = 0;
  FUN_1446efa72(&local_370,0,3,0x10);
  puVar5 = local_370;
  local_368 = 3;
  *local_370 = &PTR_LAB_149e01f80;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_370[2] = lVar7;
  *local_370 = &PTR_FUN_14a542520;
  local_370[3] = 0;
  FUN_14485c47a(local_370 + 3,param_1);
  puVar5[4] = FUN_14774f81e;
  *(undefined4 *)(puVar5 + 5) = 0;
  FUN_144a450dc(local_50,&local_370);
  local_398 = &local_389;
  FUN_146abe50e(local_388,"SSlider",".\\Runtime/UMG/Private/Components/Slider.cpp",0x32);
  FUN_146a8a1be(local_388,&local_320,local_310);
  plVar4 = local_318;
  if (local_318 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x650) = local_320;
    plVar8 = *(longlong **)(param_1 + 0x658);
    if (plVar8 == (longlong *)0x0) goto LAB_14774f5e5;
    *(undefined8 *)(param_1 + 0x658) = 0;
LAB_14774f740:
    LOCK();
    plVar4 = plVar8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14774f5e5;
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(local_318 + 1) = (int)local_318[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x650) = local_320;
    plVar8 = *(longlong **)(param_1 + 0x658);
    if (local_318 != plVar8) {
      *(longlong **)(param_1 + 0x658) = local_318;
      if (plVar8 == (longlong *)0x0) goto LAB_14774f5e5;
      goto LAB_14774f740;
    }
    LOCK();
    plVar8 = local_318 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 != 0) goto LAB_14774f5e5;
    (**(code **)*local_318)(local_318);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar8 = plVar4;
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
LAB_14774f5e5:
  if (local_318 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_318 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_318)(local_318);
      LOCK();
      piVar1 = (int *)((longlong)local_318 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_318 + 0x10))(local_318);
      }
    }
  }
  if (local_380 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_380 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_380)(local_380);
      LOCK();
      piVar1 = (int *)((longlong)local_380 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_380 + 0x10))(local_380);
      }
    }
  }
  FUN_1449db362(&local_370);
  FUN_1449db362(&local_360);
  FUN_1449db362(&local_350);
  FUN_1449db362(&local_340);
  FUN_1449db362(&local_330);
  FUN_146a8a232(local_310);
  uVar3 = *(undefined8 *)(param_1 + 0x650);
  plVar4 = *(longlong **)(param_1 + 0x658);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    param_2[1] = plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_3b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774f81e FUN_14774f81e body=116 status=ok
// SIG undefined FUN_14774f81e(void)

void FUN_14774f81e(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 0x168) = param_2;
  local_14 = param_2;
  FUN_1447cd2ec(param_1 + 0x640);
  local_20 = DAT_14cab8690;
  local_18 = DAT_14cab8698;
  FUN_140e2f5f4(param_1 + 0x28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774f894 FUN_14774f894 body=626 status=ok
// SIG undefined FUN_14774f894(void)

void FUN_14774f894(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined1 local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_100;
  undefined1 local_ff;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8;
  undefined1 local_e7;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8;
  undefined1 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_1412719b8();
  if (*(longlong *)(param_1 + 0x650) != 0) {
    cVar1 = FUN_14113f0c0(param_1 + 0x16c);
    if (cVar1 == '\0') {
      local_58 = *(undefined4 *)(param_1 + 0x168);
      local_54 = 1;
      local_50 = 0;
      uStack_48 = 0;
    }
    else {
      local_60 = *(undefined8 *)(param_1 + 0x174);
      uVar2 = FUN_14479d2ce(param_1 + 0x16c);
      local_58 = 0;
      local_50 = 0;
      uStack_48 = 0;
      local_54 = 1;
      FUN_1446efa72(&local_50,0,3,0x10);
      uStack_48 = CONCAT44(uStack_48._4_4_,3);
      FUN_147772e02(local_50,uVar2,&local_60);
    }
    FUN_146a86ae6(*(undefined8 *)(param_1 + 0x650),*(undefined1 *)(param_1 + 0x5d0));
    FUN_146a86be2(*(undefined8 *)(param_1 + 0x650),*(undefined1 *)(param_1 + 0x5f6));
    FUN_146a86bea(*(undefined8 *)(param_1 + 0x650),*(undefined1 *)(param_1 + 0x5f7));
    local_88 = *(undefined4 *)(param_1 + 0x5d4);
    uStack_84 = *(undefined4 *)(param_1 + 0x5d8);
    uStack_80 = *(undefined4 *)(param_1 + 0x5dc);
    uStack_7c = *(undefined4 *)(param_1 + 0x5e0);
    local_78 = 0;
    local_74 = 1;
    local_70 = 0;
    uStack_68 = 0;
    FUN_146a86afc(*(undefined8 *)(param_1 + 0x650));
    local_b8 = *(undefined4 *)(param_1 + 0x5e4);
    uStack_b4 = *(undefined4 *)(param_1 + 0x5e8);
    uStack_b0 = *(undefined4 *)(param_1 + 0x5ec);
    uStack_ac = *(undefined4 *)(param_1 + 0x5f0);
    local_a8 = 0;
    local_a4 = 1;
    local_a0 = 0;
    uStack_98 = 0;
    FUN_146a86b28(*(undefined8 *)(param_1 + 0x650));
    uVar2 = *(undefined8 *)(param_1 + 0x650);
    local_cc = local_54;
    local_d0 = local_58;
    local_c8 = 0;
    local_c0 = 0;
    FUN_140a52b3c(&local_c8,&local_50);
    FUN_146a86a28(uVar2,&local_d0);
    FUN_146a86a54(*(undefined8 *)(param_1 + 0x650),*(undefined4 *)(param_1 + 0x17c),
                  *(undefined4 *)(param_1 + 0x180));
    local_e8 = *(undefined1 *)(param_1 + 0x5f5);
    local_e7 = 1;
    local_e0 = 0;
    uStack_d8 = 0;
    FUN_146a86aba(*(undefined8 *)(param_1 + 0x650));
    local_100 = *(undefined1 *)(param_1 + 0x5f4);
    local_ff = 1;
    local_f8 = 0;
    uStack_f0 = 0;
    FUN_146a86a8e(*(undefined8 *)(param_1 + 0x650));
    local_118 = *(undefined4 *)(param_1 + 0x5f8);
    local_114 = 1;
    local_110 = 0;
    uStack_108 = 0;
    FUN_146a86bac(*(undefined8 *)(param_1 + 0x650));
    FUN_1449db362(&local_50);
  }
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774fb2a FUN_14774fb2a body=190 status=ok
// SIG undefined FUN_14774fb2a(void)

void FUN_14774fb2a(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x168) = local_58;
  *(undefined4 *)(param_1 + 0x16c) = uStack_54;
  *(undefined4 *)(param_1 + 0x170) = uStack_50;
  *(undefined4 *)(param_1 + 0x174) = uStack_4c;
  if (*(longlong *)(param_1 + 0x178) != 0) {
    local_38 = 1;
    local_30 = 0;
    uStack_28 = 0;
    FUN_140a50d48();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774fbea FUN_14774fbea body=80 status=ok
// SIG undefined FUN_14774fbea(void)

void FUN_14774fbea(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x178);
  if (lVar1 == 0) {
    puVar3 = (undefined8 *)(param_1 + 0x168);
  }
  else {
    if (*(char *)(lVar1 + 0x1f0) == '\x01') {
      FUN_145ab0088(lVar1 + 0x1e0,lVar1,0);
    }
    puVar3 = (undefined8 *)(lVar1 + 0x1e0);
  }
  uVar2 = puVar3[1];
  *param_2 = *puVar3;
  param_2[1] = uVar2;
  return;
}



// FUNCTION 14774fc3a FUN_14774fc3a body=105 status=ok
// SIG undefined FUN_14774fc3a(void)

void FUN_14774fc3a(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_40 = param_2[1];
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x16c) = uVar1;
  *(undefined4 *)(param_1 + 0x170) = uVar2;
  *(undefined4 *)(param_1 + 0x174) = uVar3;
  if (*(longlong *)(param_1 + 0x178) != 0) {
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_38 = local_48;
    uStack_30 = uStack_40;
    FUN_140a50d48();
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774fca8 FUN_14774fca8 body=573 status=ok
// SIG undefined FUN_14774fca8(void)

undefined8 * FUN_14774fca8(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_298 [32];
  undefined1 *local_278;
  undefined1 local_261;
  undefined1 local_260 [8];
  longlong *local_258;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined1 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_218;
  longlong *local_210;
  undefined1 local_208 [424];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_50;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_298;
  FUN_140a50678(local_208);
  local_248 = *(undefined4 *)(param_1 + 0x168);
  uStack_244 = *(undefined4 *)(param_1 + 0x16c);
  uStack_240 = *(undefined4 *)(param_1 + 0x170);
  uStack_23c = *(undefined4 *)(param_1 + 0x174);
  local_238 = 1;
  local_230 = 0;
  uStack_228 = 0;
  local_50 = 1;
  local_60 = local_248;
  uStack_5c = uStack_244;
  uStack_58 = uStack_240;
  uStack_54 = uStack_23c;
  FUN_144a450dc(local_48,&local_230);
  FUN_1449db362(&local_230);
  local_278 = &local_261;
  FUN_140a52ce6(local_260,"SSpacer",".\\Runtime/UMG/Private/Components/Spacer.cpp",0x36);
  FUN_140a50c6a(local_260,&local_218,local_208);
  plVar4 = local_210;
  if (local_210 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x178) = local_218;
    plVar5 = *(longlong **)(param_1 + 0x180);
    if (plVar5 == (longlong *)0x0) goto LAB_14774fe09;
    *(undefined8 *)(param_1 + 0x180) = 0;
LAB_14774fdcf:
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14774fe09;
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
    *(int *)(local_210 + 1) = (int)local_210[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x178) = local_218;
    plVar5 = *(longlong **)(param_1 + 0x180);
    if (local_210 != plVar5) {
      *(longlong **)(param_1 + 0x180) = local_210;
      if (plVar5 == (longlong *)0x0) goto LAB_14774fe09;
      goto LAB_14774fdcf;
    }
    LOCK();
    plVar5 = local_210 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_14774fe09;
    (**(code **)*local_210)(local_210);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_14774fe09:
  if (local_210 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_210 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_210)(local_210);
      LOCK();
      piVar1 = (int *)((longlong)local_210 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_210 + 0x10))(local_210);
      }
    }
  }
  if (local_258 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_258 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_258)(local_258);
      LOCK();
      piVar1 = (int *)((longlong)local_258 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_258 + 0x10))(local_258);
      }
    }
  }
  FUN_1449db362(local_48);
  FUN_140a4ff8c(local_208);
  uVar3 = *(undefined8 *)(param_1 + 0x178);
  plVar4 = *(longlong **)(param_1 + 0x180);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    param_2[1] = plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  if ((local_38 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774fee6 FUN_14774fee6 body=99 status=ok
// SIG undefined FUN_14774fee6(void)

void FUN_14774fee6(longlong param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1412719b8();
  if (*(longlong *)(param_1 + 0x178) != 0) {
    local_38 = *(undefined8 *)(param_1 + 0x168);
    uStack_30 = *(undefined8 *)(param_1 + 0x170);
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_140a50d48();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774ff60 FUN_14774ff60 body=106 status=ok
// SIG undefined FUN_14774ff60(void)

void FUN_14774ff60(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [4];
  undefined1 local_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(byte *)(param_1 + 0x778) = *(byte *)(param_1 + 0x778) & 0xf7;
  if (*(longlong *)(param_1 + 0x790) != 0) {
    local_2c = 0;
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_146b05bf6(*(longlong *)(param_1 + 0x790),local_30);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14774ffe2 FUN_14774ffe2 body=106 status=ok
// SIG undefined FUN_14774ffe2(void)

void FUN_14774ffe2(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [4];
  undefined1 local_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(byte *)(param_1 + 0x778) = *(byte *)(param_1 + 0x778) & 0xfd;
  if (*(longlong *)(param_1 + 0x790) != 0) {
    local_2c = 0;
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_14775229a(*(longlong *)(param_1 + 0x790),local_30);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147750064 FUN_147750064 body=106 status=ok
// SIG undefined FUN_147750064(void)

void FUN_147750064(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [4];
  undefined1 local_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(byte *)(param_1 + 0x778) = *(byte *)(param_1 + 0x778) & 0xfb;
  if (*(longlong *)(param_1 + 0x790) != 0) {
    local_2c = 0;
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_146b05c72(*(longlong *)(param_1 + 0x790),local_30);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477500e6 FUN_1477500e6 body=106 status=ok
// SIG undefined FUN_1477500e6(void)

void FUN_1477500e6(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [4];
  undefined1 local_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(byte *)(param_1 + 0x778) = *(byte *)(param_1 + 0x778) & 0xfe;
  if (*(longlong *)(param_1 + 0x790) != 0) {
    local_2c = 0;
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_14775223a(*(longlong *)(param_1 + 0x790),local_30);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147750156 FUN_147750156 body=60 status=ok
// SIG undefined FUN_147750156(void)

void FUN_147750156(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*(longlong *)(param_1 + 0x790) == 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x6a8);
  }
  else {
    uVar1 = FUN_146b0ae2c(*(longlong *)(param_1 + 0x790));
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 1477502ce FUN_1477502ce body=190 status=ok
// SIG undefined FUN_1477502ce(void)

void FUN_1477502ce(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)(param_1 + 0x6a8) = local_20 != 0;
  if (*(longlong *)(param_1 + 0x790) != 0) {
    local_19 = local_20 != 0;
    FUN_147774e76(*(longlong *)(param_1 + 0x790) + 0x488);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775038e FUN_14775038e body=191 status=ok
// SIG undefined FUN_14775038e(void)

void FUN_14775038e(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  *(undefined4 *)(param_1 + 0x6ac) = local_20;
  if (*(longlong *)(param_1 + 0x790) != 0) {
    local_1c = local_20;
    FUN_146a8a31c(*(longlong *)(param_1 + 0x790) + 0x338);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775044e FUN_14775044e body=179 status=ok
// SIG undefined FUN_14775044e(void)

void FUN_14775044e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2c = 0x3f800000;
  uStack_28 = 0;
  uStack_24 = 0x3f800000;
  uStack_20 = 0x3f800000;
  local_1c = local_1c & 0xffffff00;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_1c;
  local_48 = local_2c;
  uStack_44 = uStack_28;
  uStack_40 = uStack_24;
  uStack_3c = uStack_20;
  FUN_147750502(param_1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147750502 FUN_147750502 body=135 status=ok
// SIG undefined FUN_147750502(void)

void FUN_147750502(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 0x734) = *(undefined4 *)(param_2 + 2);
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x724) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x728) = uVar2;
  *(undefined4 *)(param_1 + 0x72c) = uVar3;
  *(undefined4 *)(param_1 + 0x730) = uVar4;
  lVar1 = *(longlong *)(param_1 + 0x790);
  if (lVar1 != 0) {
    local_28 = *(undefined4 *)(param_2 + 2);
    local_38 = *param_2;
    uStack_30 = param_2[1];
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_140a5c8a2(lVar1 + 0x250,lVar1,&local_38);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775058a FUN_14775058a body=154 status=ok
// SIG undefined FUN_14775058a(void)

void FUN_14775058a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147750626(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147750626 FUN_147750626 body=115 status=ok
// SIG undefined FUN_147750626(void)

void FUN_147750626(longlong param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  int local_30;
  undefined1 local_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = 0;
  if (0 < param_2) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0x6a4) = iVar1;
  if (*(longlong *)(param_1 + 0x790) != 0) {
    local_2c = 1;
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_30 = iVar1;
    FUN_146b0cc2a(*(longlong *)(param_1 + 0x790),&local_30);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775069a FUN_14775069a body=156 status=ok
// SIG undefined FUN_14775069a(void)

void FUN_14775069a(undefined8 param_1,longlong param_2)

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
  FUN_147750738(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147750738 FUN_147750738 body=119 status=ok
// SIG undefined FUN_147750738(void)

void FUN_147750738(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(byte *)(param_1 + 0x778) = *(byte *)(param_1 + 0x778) | 8;
  *(undefined4 *)(param_1 + 0x788) = param_2;
  if (*(longlong *)(param_1 + 0x790) != 0) {
    local_2c = 1;
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_30 = param_2;
    FUN_146b05bf6(*(longlong *)(param_1 + 0x790),&local_30);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477507b0 FUN_1477507b0 body=156 status=ok
// SIG undefined FUN_1477507b0(void)

void FUN_1477507b0(undefined8 param_1,longlong param_2)

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
  FUN_14775084e(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775084e FUN_14775084e body=119 status=ok
// SIG undefined FUN_14775084e(void)

void FUN_14775084e(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(byte *)(param_1 + 0x778) = *(byte *)(param_1 + 0x778) | 2;
  *(undefined4 *)(param_1 + 0x780) = param_2;
  if (*(longlong *)(param_1 + 0x790) != 0) {
    local_2c = 1;
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_30 = param_2;
    FUN_14775229a(*(longlong *)(param_1 + 0x790),&local_30);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477508c6 FUN_1477508c6 body=154 status=ok
// SIG undefined FUN_1477508c6(void)

void FUN_1477508c6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147750962(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147750962 FUN_147750962 body=115 status=ok
// SIG undefined FUN_147750962(void)

void FUN_147750962(longlong param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  int local_30;
  undefined1 local_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = 0;
  if (0 < param_2) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0x6a0) = iVar1;
  if (*(longlong *)(param_1 + 0x790) != 0) {
    local_2c = 1;
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_30 = iVar1;
    FUN_146b0cd02(*(longlong *)(param_1 + 0x790),&local_30);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477509d6 FUN_1477509d6 body=156 status=ok
// SIG undefined FUN_1477509d6(void)

void FUN_1477509d6(undefined8 param_1,longlong param_2)

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
  FUN_147750a74(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147750a74 FUN_147750a74 body=119 status=ok
// SIG undefined FUN_147750a74(void)

void FUN_147750a74(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(byte *)(param_1 + 0x778) = *(byte *)(param_1 + 0x778) | 4;
  *(undefined4 *)(param_1 + 0x784) = param_2;
  if (*(longlong *)(param_1 + 0x790) != 0) {
    local_2c = 1;
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_30 = param_2;
    FUN_146b05c72(*(longlong *)(param_1 + 0x790),&local_30);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147750aec FUN_147750aec body=156 status=ok
// SIG undefined FUN_147750aec(void)

void FUN_147750aec(undefined8 param_1,longlong param_2)

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
  FUN_147750b8a(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147750b8a FUN_147750b8a body=119 status=ok
// SIG undefined FUN_147750b8a(void)

void FUN_147750b8a(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(byte *)(param_1 + 0x778) = *(byte *)(param_1 + 0x778) | 1;
  *(undefined4 *)(param_1 + 0x77c) = param_2;
  if (*(longlong *)(param_1 + 0x790) != 0) {
    local_2c = 1;
    local_28 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_30 = param_2;
    FUN_14775223a(*(longlong *)(param_1 + 0x790),&local_30);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147750c02 FUN_147750c02 body=156 status=ok
// SIG undefined FUN_147750c02(void)

void FUN_147750c02(undefined8 param_1,longlong param_2)

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
  FUN_147750ca0(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147750ca0 FUN_147750ca0 body=172 status=ok
// SIG undefined FUN_147750ca0(void)

void FUN_147750ca0(longlong param_1,float param_2)

{
  undefined1 auStack_68 [32];
  float local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(float *)(param_1 + 0x168) != param_2) || (NAN(*(float *)(param_1 + 0x168)) || NAN(param_2))
     ) {
    *(float *)(param_1 + 0x168) = param_2;
    local_28 = DAT_14cab87b0;
    local_30 = DAT_14cab87a8;
    FUN_140e2f5f4(param_1 + 0x28);
    if (*(longlong *)(param_1 + 0x790) != 0) {
      local_44 = 1;
      local_40 = 0;
      uStack_38 = 0;
      local_48 = param_2;
      FUN_1477521a4(*(longlong *)(param_1 + 0x790),&local_48);
      FUN_1449db362(&local_40);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147750d66 FUN_147750d66 body=104 status=ok
// SIG undefined FUN_147750d66(void)

void FUN_147750d66(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_558 [32];
  undefined1 local_538 [1312];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_558;
  FUN_14627c160(local_538,param_1 + 0x180);
  FUN_14134d094(param_2,local_538);
  FUN_141147850(local_538);
  if ((local_18 ^ (ulonglong)auStack_558) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147750dd0 FUN_147750dd0 body=51 status=ok
// SIG undefined FUN_147750dd0(void)

void FUN_147750dd0(longlong param_1)

{
  FUN_14134d094(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x790) != 0) {
    FUN_140163244(*(longlong *)(param_1 + 0x790),1);
    return;
  }
  return;
}



// FUNCTION 147750e28 FUN_147750e28 body=44 status=ok
// SIG undefined FUN_147750e28(void)

void FUN_147750e28(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  if (*(longlong *)(param_1 + 0x790) == 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x6a8);
  }
  else {
    uVar1 = FUN_146b0ae2c();
  }
  *param_2 = uVar1;
  return;
}



// FUNCTION 147750e54 FUN_147750e54 body=87 status=ok
// SIG undefined FUN_147750e54(void)

void FUN_147750e54(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 0x6a8) = uVar1;
  if (*(longlong *)(param_1 + 0x790) != 0) {
    local_9 = uVar1;
    FUN_147774e76(*(longlong *)(param_1 + 0x790) + 0x488);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147750eb6 FUN_147750eb6 body=87 status=ok
// SIG undefined FUN_147750eb6(void)

void FUN_147750eb6(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 0x6a9) = uVar1;
  if (*(longlong *)(param_1 + 0x790) != 0) {
    local_9 = uVar1;
    FUN_147774e76(*(longlong *)(param_1 + 0x790) + 0x4a0);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147750f1c FUN_147750f1c body=93 status=ok
// SIG undefined FUN_147750f1c(void)

void FUN_147750f1c(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x6ac) = uVar1;
  if (*(longlong *)(param_1 + 0x790) != 0) {
    local_c = uVar1;
    FUN_146a8a31c(*(longlong *)(param_1 + 0x790) + 0x338);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147750f92 FUN_147750f92 body=127 status=ok
// SIG undefined FUN_147750f92(void)

void FUN_147750f92(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 0x6b0) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x790);
  if (lVar1 != 0) {
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    *(undefined1 *)(lVar1 + 0x39c) = 1;
    *(undefined4 *)(lVar1 + 0x398) = param_2;
    local_28 = param_2;
    FUN_140a52b3c(lVar1 + 0x3a0,&local_20);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147751012 FUN_147751012 body=134 status=ok
// SIG undefined FUN_147751012(void)

void FUN_147751012(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [56];
  longlong *local_40;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a87366(local_78,param_1 + 0x6b8);
  FUN_1412cc59c(param_2,local_78);
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
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477510a0 FUN_1477510a0 body=123 status=ok
// SIG undefined FUN_1477510a0(void)

void FUN_1477510a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [96];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1412cc59c(param_1 + 0x6b8);
  lVar1 = *(longlong *)(param_1 + 0x790);
  if (lVar1 != 0) {
    FUN_144a87366(local_80,param_2);
    FUN_1477520be(lVar1,local_80);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147751158 FUN_147751158 body=127 status=ok
// SIG undefined FUN_147751158(void)

void FUN_147751158(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 0x71c) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x790);
  if (lVar1 != 0) {
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    *(undefined1 *)(lVar1 + 0x52c) = 1;
    *(undefined4 *)(lVar1 + 0x528) = param_2;
    local_28 = param_2;
    FUN_140a52b3c(lVar1 + 0x530,&local_20);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477511ea FUN_1477511ea body=109 status=ok
// SIG undefined FUN_1477511ea(void)

void FUN_1477511ea(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x721) = param_2;
  if (*(longlong *)(param_1 + 0x790) != 0) {
    local_27 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146a65922(*(undefined8 *)(*(longlong *)(param_1 + 0x790) + 0x2d0),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14775126a FUN_14775126a body=109 status=ok
// SIG undefined FUN_14775126a(void)

void FUN_14775126a(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x722) = param_2;
  if (*(longlong *)(param_1 + 0x790) != 0) {
    local_27 = 1;
    local_20 = 0;
    uStack_18 = 0;
    local_28 = param_2;
    FUN_146a6593c(*(undefined8 *)(*(longlong *)(param_1 + 0x790) + 0x2d0),&local_28);
    FUN_1449db362(&local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477512ec FUN_1477512ec body=71 status=ok
// SIG undefined FUN_1477512ec(void)

void FUN_1477512ec(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  FUN_147750502(local_28,&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


