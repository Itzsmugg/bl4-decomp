// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147c6896e FUN_147c6896e body=391 status=ok
// SIG undefined FUN_147c6896e(void)

undefined1
FUN_147c6896e(longlong param_1,longlong param_2,double *param_3,double *param_4,undefined8 param_5,
             undefined8 param_6,undefined1 param_7)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  double *local_a8;
  double *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  float *local_88;
  undefined1 *local_80;
  longlong local_78;
  double *local_70;
  undefined1 *local_68;
  code *local_60;
  longlong **local_58;
  float local_4c;
  double local_48;
  double local_40;
  double local_38;
  undefined1 local_29;
  longlong local_28;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_19 = param_7;
  dVar1 = *param_3;
  dVar2 = param_3[1];
  *(double *)(param_1 + 0x80) = param_3[2];
  *(double *)(param_1 + 0x70) = dVar1;
  *(double *)(param_1 + 0x78) = dVar2;
  dVar1 = *param_4;
  dVar2 = param_4[1];
  *(double *)(param_1 + 0x98) = param_4[2];
  *(double *)(param_1 + 0x88) = dVar1;
  *(double *)(param_1 + 0x90) = dVar2;
  local_29 = 0;
  local_38 = param_4[2] - param_3[2];
  local_40 = param_4[1] - param_3[1];
  local_48 = *param_4 - *param_3;
  local_4c = (float)SQRT(local_38 * local_38 + local_48 * local_48 + local_40 * local_40);
  local_28 = param_2;
  if (local_4c <= 0.0001) {
    local_29 = 0;
  }
  else {
    local_b0 = &local_28;
    local_58 = &local_b0;
    local_a0 = &local_48;
    local_98 = param_6;
    local_90 = param_5;
    local_88 = &local_4c;
    local_80 = &local_19;
    local_68 = &local_29;
    local_60 = FUN_1436388ac;
    local_a8 = param_3;
    local_78 = param_1;
    local_70 = param_4;
    FUN_1448e6002(param_2 + 0x138,&local_60);
  }
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return local_29;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c68af6 FUN_147c68af6 body=401 status=ok
// SIG undefined FUN_147c68af6(void)

undefined1
FUN_147c68af6(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,double *param_6,double *param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined1 uVar1;
  undefined1 auStack_d8 [32];
  double *local_b8;
  float *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  double *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 *local_78;
  double *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  code *local_58;
  double **local_50;
  float local_44;
  double local_40;
  double local_38;
  double local_30;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_21 = param_10;
  local_23 = 0;
  local_30 = param_7[2] - param_6[2];
  local_38 = param_7[1] - param_6[1];
  local_40 = *param_7 - *param_6;
  local_44 = (float)SQRT(local_30 * local_30 + local_40 * local_40 + local_38 * local_38);
  local_22 = param_3;
  uVar1 = 0;
  if ((param_1 != 0) && (0.0001 < local_44)) {
    if (*(longlong *)(param_1 + 0x260) == 0) {
      uVar1 = 0;
    }
    else {
      local_b8 = &local_40;
      local_50 = &local_b8;
      local_b0 = &local_44;
      local_a8 = param_5;
      local_90 = param_6;
      local_88 = param_9;
      local_80 = param_8;
      local_78 = &local_21;
      local_70 = param_7;
      local_68 = &local_23;
      local_60 = &local_22;
      local_58 = FUN_1436392cc;
      local_a0 = param_4;
      local_98 = param_2;
      FUN_1400d1732();
      uVar1 = local_23;
    }
  }
  local_23 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return local_23;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c68c88 FUN_147c68c88 body=466 status=ok
// SIG undefined FUN_147c68c88(void)

ulonglong FUN_147c68c88(longlong param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4,
                       double param_5,longlong *param_6,undefined8 param_7,double param_8,
                       undefined1 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 extraout_AL;
  undefined8 uVar7;
  undefined7 uVar8;
  undefined7 extraout_var;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  double local_d0;
  undefined1 local_c8;
  longlong *local_c0;
  undefined4 *local_b8;
  undefined8 *local_b0;
  double local_a8;
  longlong *local_a0;
  double local_98;
  undefined8 local_90;
  longlong *local_88;
  longlong local_80;
  undefined1 *local_78;
  code *local_70;
  undefined8 **local_68;
  longlong local_60;
  undefined1 local_51;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_51 = 0;
  local_50 = param_2;
  (**(code **)(*param_6 + 0x80))(param_6,&local_c0);
  if (((9.999999747378752e-05 < ABS(local_a8 - (double)local_c0)) ||
      (9.999999747378752e-05 < ABS((double)local_a0 - (double)local_b8))) ||
     (9.999999747378752e-05 < ABS(local_98 - (double)local_b0))) {
    uVar7 = *param_3;
    uVar5 = param_3[1];
    *(undefined8 *)(param_1 + 0x80) = param_3[2];
    *(undefined8 *)(param_1 + 0x70) = uVar7;
    *(undefined8 *)(param_1 + 0x78) = uVar5;
    uVar1 = *param_4;
    uVar2 = param_4[1];
    uVar3 = param_4[2];
    uVar4 = param_4[3];
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_4 + 4);
    *(undefined4 *)(param_1 + 0x88) = uVar1;
    *(undefined4 *)(param_1 + 0x8c) = uVar2;
    *(undefined4 *)(param_1 + 0x90) = uVar3;
    *(undefined4 *)(param_1 + 0x94) = uVar4;
    local_60 = *(longlong *)(param_2 + 0x108);
    if (*(longlong *)(param_2 + 0x108) == 0) {
      local_60 = param_2;
    }
    local_a0 = &local_60;
    local_c0 = &local_50;
    local_a8 = param_5;
    local_98 = param_8;
    local_90 = param_7;
    local_88 = param_6;
    local_78 = &local_51;
    local_70 = FUN_14363a308;
    local_b8 = param_4;
    local_b0 = param_3;
    local_80 = param_1;
    local_68 = &local_c0;
    uVar7 = FUN_1448e6002(local_60 + 0x138);
    uVar8 = (undefined7)((ulonglong)uVar7 >> 8);
    uVar6 = local_51;
  }
  else {
    local_c8 = param_9;
    local_d0 = param_8;
    local_d8 = param_7;
    FUN_147c6896e(param_1,param_2,param_3,param_4);
    uVar6 = extraout_AL;
    uVar8 = extraout_var;
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return CONCAT71(uVar8,uVar6) & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c68e5c FUN_147c68e5c body=684 status=ok
// SIG undefined FUN_147c68e5c(void)

undefined1
FUN_147c68e5c(longlong param_1,double param_2,undefined4 param_3,double param_4,double param_5,
             double *param_6,double *param_7,double param_8,longlong *param_9,undefined8 param_10,
             undefined8 param_11,undefined1 param_12)

{
  undefined1 uVar1;
  undefined1 auStack_158 [32];
  double local_138;
  double *local_130;
  double *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_110;
  double *local_100;
  float *local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  double *local_b0;
  longlong *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code *local_90;
  double **local_88;
  float local_7c;
  double local_78;
  double local_70;
  double local_68;
  undefined1 local_59;
  longlong local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_49 = (undefined1)param_3;
  local_58 = param_1;
  (**(code **)(*param_9 + 0x80))(param_9,&local_100);
  if (((9.999999747378752e-05 < ABS(local_e8 - (double)local_100)) ||
      (9.999999747378752e-05 < ABS(local_e0 - (double)local_f8))) ||
     (9.999999747378752e-05 < ABS(local_d8 - local_f0))) {
    local_59 = 0;
    local_68 = param_7[2] - param_6[2];
    local_70 = param_7[1] - param_6[1];
    local_78 = *param_7 - *param_6;
    local_7c = (float)SQRT(local_68 * local_68 + local_78 * local_78 + local_70 * local_70);
    uVar1 = 0;
    if ((param_1 != 0) && (0.0001 < local_7c)) {
      if (*(longlong *)(param_1 + 0x260) == 0) {
        uVar1 = 0;
      }
      else {
        local_100 = &local_78;
        local_f8 = &local_7c;
        local_f0 = param_5;
        local_d8 = param_8;
        local_d0 = param_6;
        local_c8 = param_11;
        local_c0 = param_10;
        local_b8 = param_9;
        local_b0 = param_7;
        local_a8 = &local_58;
        local_a0 = &local_59;
        local_98 = &local_49;
        local_90 = FUN_14363b488;
        local_e8 = param_4;
        local_e0 = param_2;
        local_88 = &local_100;
        FUN_1400d1732();
        uVar1 = local_59;
      }
    }
  }
  else {
    local_110 = param_12;
    local_118 = param_11;
    local_120 = param_10;
    local_128 = param_7;
    local_130 = param_6;
    local_138 = param_5;
    uVar1 = FUN_147c68af6(param_1,param_2,param_3,param_4);
  }
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c6910a FUN_147c6910a body=172 status=ok
// SIG undefined FUN_147c6910a(void)

undefined1
FUN_147c6910a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 *local_38;
  code *local_30;
  longlong **local_28;
  undefined1 local_19;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_18 = *(longlong *)(param_1 + 0x108);
  if (*(longlong *)(param_1 + 0x108) == 0) {
    local_18 = param_1;
  }
  if (*(longlong *)(local_18 + 0x138) == 0) {
    uVar1 = 0;
  }
  else {
    local_38 = &local_19;
    local_19 = 0;
    local_60 = &local_18;
    local_28 = &local_60;
    local_58 = param_5;
    local_30 = FUN_14363cafa;
    local_50 = param_4;
    local_48 = param_2;
    local_40 = param_3;
    FUN_1448e6002(local_18 + 0x138);
    uVar1 = local_19;
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c691b8 FUN_147c691b8 body=293 status=ok
// SIG undefined FUN_147c691b8(void)

undefined1
FUN_147c691b8(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined1 *local_48;
  code *local_40;
  undefined8 *local_38;
  undefined1 local_29;
  longlong local_28;
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_28 = param_1;
  local_1a = param_3;
  local_19 = param_4;
  if (param_1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6();
      if (lVar2 == 0) goto LAB_147c692b8;
    }
    if (*(longlong *)(lVar2 + 0x260) != 0) {
      local_68 = &local_29;
      local_29 = 0;
      local_38 = &local_90;
      local_88 = param_9;
      local_80 = param_8;
      local_78 = param_6;
      local_70 = param_7;
      local_60 = &local_19;
      local_58 = param_5;
      local_50 = &local_28;
      local_48 = &local_1a;
      local_40 = FUN_14363d22e;
      local_90 = param_2;
      FUN_1400d1732();
      uVar1 = local_29;
      goto LAB_147c692ba;
    }
  }
LAB_147c692b8:
  uVar1 = 0;
LAB_147c692ba:
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c692de FUN_147c692de body=170 status=ok
// SIG undefined FUN_147c692de(void)

longlong * FUN_147c692de(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = (longlong)L"FPhysScene::AsyncCreatePhysicStateQueue";
  lVar2 = *(longlong *)(param_2 + 0x48);
  if (lVar2 != 0) {
    lVar1 = FUN_144a7757c();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_147c69351;
  }
  lVar2 = 0;
LAB_147c69351:
  FUN_147c6938a(lVar2 + 0x558,local_20,param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c6938a FUN_147c6938a body=228 status=ok
// SIG undefined FUN_147c6938a(void)

undefined8 FUN_147c6938a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
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
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14aa2a7f0;
  local_38[3] = param_3;
  local_38[4] = &LAB_147c69470;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c69476 FUN_147c69476 body=218 status=ok
// SIG undefined FUN_147c69476(void)

void FUN_147c69476(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(*param_1 + 0x48);
  if (lVar4 != 0) {
    lVar3 = FUN_144a7757c();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) goto LAB_147c694ad;
  }
  lVar4 = 0;
LAB_147c694ad:
  FUN_140457ffc(lVar4 + 0x558,param_1);
  FUN_143629e6a(param_1);
  FUN_14362aaee(param_1);
  FUN_142972845(param_1 + 4,0x7fffffffffffffff);
  FUN_147c69550(param_1);
  if ((char)param_1[7] == '\x01') {
    puVar2 = (undefined8 *)param_1[6];
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    *(undefined1 *)(param_1 + 7) = 0;
  }
  FUN_14473400f(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_147c807bb(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_147c806f0(param_1[1]);
  return;
}



// FUNCTION 147c69550 FUN_147c69550 body=188 status=ok
// SIG undefined FUN_147c69550(void)

void FUN_147c69550(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x18);
  uVar4 = 0;
  if ((longlong)iVar2 != 0) {
    lVar6 = 0;
    do {
      FUN_14362a964(*(undefined8 *)(lVar5 + lVar6));
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 * 8 != lVar6);
    uVar4 = *(undefined4 *)(param_1 + 0x18);
    lVar5 = *(longlong *)(param_1 + 0x10);
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  FUN_147c807bb(lVar5,uVar4);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    FUN_147c8097c(param_1 + 0x10);
  }
  iVar2 = *(int *)(param_1 + 0x2c);
  FUN_14473400f(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x2c) != 0)) {
    FUN_14714c25e(param_1 + 0x20,0);
  }
  if (*(char *)(param_1 + 0x38) == '\x01') {
    puVar3 = *(undefined8 **)(param_1 + 0x30);
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 147c6960c FUN_147c6960c body=81 status=ok
// SIG undefined FUN_147c6960c(void)

void FUN_147c6960c(longlong *param_1)

{
  longlong lVar1;
  
  if ((((longlong *)*param_1 != (longlong *)0x0) &&
      (lVar1 = (**(code **)(*(longlong *)*param_1 + 0x18))(), lVar1 != 0)) &&
     ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) {
    if ((int)param_1[1] == 0) {
      lVar1 = 0x30;
    }
    else {
      if ((int)param_1[1] != 1) {
        return;
      }
      lVar1 = 0x48;
    }
                    /* WARNING: Could not recover jumptable at 0x000147c69659. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + lVar1))();
    return;
  }
  return;
}



// FUNCTION 147c6965e FUN_147c6965e body=12 status=ok
// SIG undefined FUN_147c6965e(void)

void FUN_147c6965e(longlong param_1)

{
  FUN_14479d2ce(param_1 + 0x348);
  return;
}



// FUNCTION 147c6966a FUN_147c6966a body=74 status=ok
// SIG undefined FUN_147c6966a(void)

void FUN_147c6966a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1409e9912(param_1 + 0x110,local_14,&local_10,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c696b6 FUN_147c696b6 body=12 status=ok
// SIG undefined FUN_147c696b6(void)

void FUN_147c696b6(longlong param_1)

{
  FUN_1406f7bf0(param_1 + 0x110);
  return;
}



// FUNCTION 147c696c2 FUN_147c696c2 body=74 status=ok
// SIG undefined FUN_147c696c2(void)

void FUN_147c696c2(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1409e9912(param_1 + 0x160,local_14,&local_10,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c6970e FUN_147c6970e body=12 status=ok
// SIG undefined FUN_147c6970e(void)

void FUN_147c6970e(longlong param_1)

{
  FUN_1406f7bf0(param_1 + 0x160);
  return;
}



// FUNCTION 147c6971a FUN_147c6971a body=35 status=ok
// SIG undefined FUN_147c6971a(void)

void FUN_147c6971a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14075bef6();
  FUN_146ed0b8a(*(undefined8 *)(param_1 + 0x38),param_3);
  return;
}



// FUNCTION 147c6973e FUN_147c6973e body=81 status=ok
// SIG undefined FUN_147c6973e(void)

void FUN_147c6973e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 8);
  FUN_1401ba9dc(param_1,*(undefined8 *)(param_2 + 0x128));
  if (lVar1 != 0) {
    FUN_1448b734e(lVar1,*(undefined8 *)(param_2 + 0x128),0);
    FUN_146ed0c8e(lVar1,param_2);
  }
  FUN_1448b7762(param_1,param_2);
  return;
}



// FUNCTION 147c69830 FUN_147c69830 body=199 status=ok
// SIG undefined FUN_147c69830(void)

void FUN_147c69830(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  if ((param_2 != 0) && (iVar1 = *(int *)(param_2 + 0xc64), iVar1 != -1)) {
    lVar2 = FUN_14479d2ce((longlong)(*(int *)(param_1 + 0x220) + -1) * 0xc +
                          *(longlong *)(param_1 + 0x218));
    if (lVar2 != 0) {
      *(int *)(lVar2 + 0xc64) = iVar1;
    }
    iVar1 = *(int *)(param_1 + 0x220);
    iVar3 = ~*(uint *)(param_2 + 0xc64) + iVar1;
    if (iVar3 != 0) {
      iVar4 = 1;
      if (iVar3 < 1) {
        iVar4 = iVar3;
      }
      memmove((void *)(*(longlong *)(param_1 + 0x218) +
                      (longlong)(int)*(uint *)(param_2 + 0xc64) * 0xc),
              (void *)(*(longlong *)(param_1 + 0x218) + (longlong)(iVar1 - iVar4) * 0xc),
              (longlong)iVar4 * 0xc);
      iVar1 = *(int *)(param_1 + 0x220);
    }
    *(int *)(param_1 + 0x220) = iVar1 + -1;
    FUN_147c80f02(param_1 + 0x218);
    *(undefined4 *)(param_2 + 0xc64) = 0xffffffff;
  }
  return;
}



// FUNCTION 147c69970 FUN_147c69970 body=7 status=ok
// SIG undefined FUN_147c69970(void)

undefined1 FUN_147c69970(void)

{
  return DAT_14c992a90;
}



// FUNCTION 147c69978 FUN_147c69978 body=190 status=ok
// SIG undefined FUN_147c69978(void)

ulonglong FUN_147c69978(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),DAT_14c992a90);
  if (DAT_14c992a90 == '\x01') {
    lVar2 = *(longlong *)(param_1 + 0x278);
    if (lVar2 == 0) {
      lVar2 = FUN_14001cc68(0x60,0x10);
      FUN_147c692de(lVar2,param_1);
      lVar1 = *(longlong *)(param_1 + 0x278);
      *(longlong *)(param_1 + 0x278) = lVar2;
      if (lVar1 != 0) {
        FUN_147c69476(lVar1);
        FUN_1400020a8(lVar1);
        lVar2 = *(longlong *)(param_1 + 0x278);
      }
    }
    local_38 = 0;
    local_40 = param_2;
    FUN_14362a848(lVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c69a38 FUN_147c69a38 body=184 status=ok
// SIG undefined FUN_147c69a38(void)

undefined8 FUN_147c69a38(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c992a90 == '\x01') {
    lVar2 = *(longlong *)(param_1 + 0x278);
    if (lVar2 == 0) {
      lVar2 = FUN_14001cc68(0x60,0x10);
      FUN_147c692de(lVar2,param_1);
      lVar1 = *(longlong *)(param_1 + 0x278);
      *(longlong *)(param_1 + 0x278) = lVar2;
      if (lVar1 != 0) {
        FUN_147c69476(lVar1);
        FUN_1400020a8(lVar1);
        lVar2 = *(longlong *)(param_1 + 0x278);
      }
    }
    local_30 = 1;
    local_38 = param_2;
    FUN_14362a848(lVar2);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c69af2 FUN_147c69af2 body=120 status=ok
// SIG undefined FUN_147c69af2(void)

void FUN_147c69af2(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x278) != 0) {
    local_28 = 0;
    local_30 = param_2;
    FUN_14362a8da(*(longlong *)(param_1 + 0x278),&local_30);
    local_28 = 1;
    local_30 = param_2;
    FUN_14362a8da(*(undefined8 *)(param_1 + 0x278),&local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c69b6c FUN_147c69b6c body=104 status=ok
// SIG undefined FUN_147c69b6c(void)

void FUN_147c69b6c(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x278) != 0) {
    FUN_14362ab32();
    lVar1 = *(longlong *)(param_1 + 0x278);
    if ((((*(longlong *)(lVar1 + 8) == 0) && (*(longlong *)(lVar1 + 0x48) == 0)) &&
        (*(int *)(lVar1 + 0x18) == 0)) && ((lVar1 != 0 && (*(int *)(lVar1 + 0x28) == 0)))) {
      *(undefined8 *)(param_1 + 0x278) = 0;
      FUN_147c69476(lVar1);
      FUN_1400020a8(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 147c69bd4 FUN_147c69bd4 body=3 status=ok
// SIG undefined FUN_147c69bd4(void)

undefined8 FUN_147c69bd4(void)

{
  return 0;
}



// FUNCTION 147c69bd8 FUN_147c69bd8 body=1 status=ok
// SIG undefined FUN_147c69bd8(void)

void FUN_147c69bd8(void)

{
  return;
}



// FUNCTION 147c69bda FUN_147c69bda body=93 status=ok
// SIG undefined FUN_147c69bda(void)

void * FUN_147c69bda(longlong param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x160);
  memset(_Dst,0,0x160);
  FUN_147c8148a(_Dst);
  if ((*(byte *)((longlong)_Dst + 0x41) & 1) != 0) {
    *(undefined1 *)(param_1 + 0x1e8) = 1;
  }
  *(longlong *)((longlong)_Dst + 0x18) = param_1;
  FUN_141300b68(param_1 + 0x70,_Dst);
  return _Dst;
}



// FUNCTION 147c69caa FUN_147c69caa body=132 status=ok
// SIG undefined FUN_147c69caa(void)

void FUN_147c69caa(longlong *param_1,ulonglong param_2)

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
          FUN_147c81e6c(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x10 + *param_1 + 8);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147c69d2e FUN_147c69d2e body=399 status=ok
// SIG undefined FUN_147c69d2e(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff88 : 0x000147c69e62 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_147c69d2e(longlong param_1,undefined4 param_2,undefined8 param_3,longlong *param_4,
                  undefined1 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  longlong local_98;
  undefined8 local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = *(longlong *)(param_1 + 0x378);
  if (lVar3 == 0) {
    lVar3 = FUN_147c69bda(*(undefined8 *)(param_1 + 0x38));
    *(longlong *)(param_1 + 0x378) = lVar3;
  }
  uStack_a4 = 0;
  uStack_a0 = 0;
  local_a8 = param_2;
  FUN_14485c47a(&uStack_a4,param_3);
  local_98 = *param_4;
  local_88[0] = 0;
  if (local_98 != 0) {
    plVar5 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_4[2];
    }
    (**(code **)*plVar5)(plVar5,local_88);
  }
  local_58 = param_5;
  iVar2 = *(int *)(lVar3 + 0x150);
  *(uint *)(lVar3 + 0x150) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x154) < iVar2 + 1U) {
    FUN_147c81d72((longlong *)(lVar3 + 0x148),iVar2);
  }
  lVar3 = *(longlong *)(lVar3 + 0x148);
  lVar4 = (longlong)iVar2 * 0x60;
  *(undefined4 *)(lVar3 + 8 + lVar4) = uStack_a0;
  *(ulonglong *)(lVar3 + lVar4) = CONCAT44(uStack_a4,local_a8);
  *(longlong *)(lVar3 + 0x10 + lVar4) = local_98;
  *(undefined8 *)(lVar3 + 0x20 + lVar4) = local_88[0];
  local_88[0] = 0;
  puVar1 = (undefined4 *)(lVar3 + 0x40 + lVar4);
  *puVar1 = local_68;
  puVar1[1] = uStack_64;
  puVar1[2] = uStack_60;
  puVar1[3] = uStack_5c;
  puVar1 = (undefined4 *)(lVar3 + 0x30 + lVar4);
  *puVar1 = local_78;
  puVar1[1] = uStack_74;
  puVar1[2] = uStack_70;
  puVar1[3] = uStack_6c;
  if (*(longlong *)(lVar3 + 0x10 + lVar4) != 0) {
    local_98 = 0;
  }
  *(undefined1 *)(lVar3 + lVar4 + 0x50) = local_58;
  if (local_98 != 0) {
    (**(code **)(CONCAT44(uStack_74,local_78) + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c69ecc FUN_147c69ecc body=37 status=ok
// SIG undefined FUN_147c69ecc(void)

void FUN_147c69ecc(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  lVar1 = FUN_147c69ef2();
  if (lVar1 != 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(lVar1 + 0x58);
  }
  return;
}



// FUNCTION 147c69ef2 FUN_147c69ef2 body=178 status=ok
// SIG undefined FUN_147c69ef2(void)

undefined8 FUN_147c69ef2(undefined4 *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_1;
  local_34 = param_1[1];
  plVar2 = (longlong *)FUN_14479d2ce();
  if (plVar2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar2 + 0x360))(plVar2);
    if (cVar1 != '\0') {
      uVar3 = (**(code **)(plVar2[0x57] + 0x10))(plVar2 + 0x57,param_1[2]);
      FUN_1457e87ce(&local_38,uVar3);
      uVar3 = FUN_146e202c6(local_20,uVar3);
      if ((char)local_38 == '\x01') {
        FUN_1447e63de(&local_38);
      }
      goto LAB_147c69f84;
    }
  }
  uVar3 = 0;
LAB_147c69f84:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c69fa6 FUN_147c69fa6 body=1 status=ok
// SIG undefined FUN_147c69fa6(void)

void FUN_147c69fa6(void)

{
  return;
}



// FUNCTION 147c69fa7 FUN_147c69fa7 body=33 status=ok
// SIG undefined FUN_147c69fa7(void)

void FUN_147c69fa7(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_144a78877(*param_1,param_1[1]);
  FUN_144a78877(uVar1,param_1[2]);
  return;
}



// FUNCTION 147c69fc8 FUN_147c69fc8 body=604 status=ok
// SIG undefined FUN_147c69fc8(void)

void FUN_147c69fc8(double *param_1,undefined8 *param_2,double *param_3,void *param_4,
                  undefined8 **param_5,longlong *param_6)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_e8 [32];
  longlong local_c8 [12];
  undefined8 *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  dVar2 = *param_1;
  uVar10 = SUB84(dVar2,0);
  uVar11 = (undefined4)((ulonglong)dVar2 >> 0x20);
  dVar3 = param_1[1];
  if (dVar2 <= dVar3) {
    uVar10 = SUB84(dVar3,0);
    uVar11 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  dVar2 = param_1[2];
  if ((double)CONCAT44(uVar11,uVar10) <= dVar2) {
    uVar10 = SUB84(dVar2,0);
    uVar11 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  local_68 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  local_68[1] = 0;
  *(undefined2 *)(local_68 + 3) = 0x101;
  *(undefined1 *)((longlong)local_68 + 0x1a) = 1;
  *(undefined2 *)((longlong)local_68 + 0x1c) = 0;
  *local_68 = &PTR_FUN_149f48e60;
  local_68[4] = 0;
  local_68[5] = 0;
  local_68[6] = 0;
  local_68[2] = CONCAT44(uVar11,uVar10);
  if (local_68 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_68 + 1) = *(int *)(local_68 + 1) + 1;
    UNLOCK();
  }
  FUN_1447f6f78(local_c8,(int)param_6[1],&local_68);
  plVar8 = &DAT_14c846480;
  plVar9 = local_c8;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *plVar9 = *plVar8;
    plVar8 = plVar8 + 1;
    plVar9 = plVar9 + 1;
  }
  if ((*(byte *)(local_c8[0] + 8) & 3) == 0) {
    FUN_14484a332(local_c8[0],local_c8);
  }
  else {
    FUN_146e226b0(local_c8[0],local_c8);
  }
  uVar6 = *(uint *)(local_c8[0] + 8);
  if ((uVar6 & 3) == 0) {
    FUN_14142a816(local_c8[0],0);
    uVar6 = *(uint *)(local_c8[0] + 8);
  }
  else {
    *(undefined8 *)(local_c8[0] + 0x68) = 0;
  }
  if ((uVar6 & 3) == 0) {
    FUN_144aa583e(local_c8[0],0);
    uVar6 = *(uint *)(local_c8[0] + 8);
  }
  else {
    *(byte *)(local_c8[0] + 0x71) = *(byte *)(local_c8[0] + 0x71) & 0xfd;
  }
  if ((uVar6 & 3) == 0) {
    FUN_144b04ec8(local_c8[0],0);
  }
  else {
    *(byte *)(local_c8[0] + 0x71) = *(byte *)(local_c8[0] + 0x71) & 0xfe;
  }
  *param_2 = 0x3ff0000000000000;
  dVar2 = (double)CONCAT44(uVar11,uVar10) * 0.4 * (double)CONCAT44(uVar11,uVar10);
  *param_3 = dVar2;
  param_3[1] = dVar2;
  param_3[2] = dVar2;
  memmove(param_4,&DAT_14c846480,0x60);
  iVar4 = (int)param_6[1];
  *(uint *)(param_6 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_6 + 0xc) < iVar4 + 1U) {
    FUN_147c81ecc(param_6,iVar4);
  }
  *(longlong *)(*param_6 + (longlong)iVar4 * 8) = local_c8[0];
  if (&local_68 != param_5) {
    puVar5 = *param_5;
    *param_5 = local_68;
    local_68 = (undefined8 *)0x0;
    if (puVar5 == (undefined8 *)0x0) goto LAB_147c6a19b;
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar5 + 0xc) == 0)) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  if (local_68 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_68 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)local_68 + 0xc) == 0)) {
      (**(code **)*local_68)(local_68,1);
    }
  }
LAB_147c6a19b:
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c6a225 FUN_147c6a225 body=342 status=ok
// SIG undefined FUN_147c6a225(void)

longlong * FUN_147c6a225(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar3 = FUN_144b048e0(param_2);
  uVar4 = FUN_144b048e0(param_2);
  FUN_144b048e0(param_2);
  if ((bVar3 & 0x1f) == 4) {
    if (((param_2 != 0) && (*(char *)(param_2 + 0x1c) == '\x04')) &&
       (puVar2 = *(undefined8 **)(param_2 + 0x20), *(char *)((longlong)puVar2 + 0x1c) == '\f')) {
      lVar5 = FUN_14001cc68(0xc0,0x10);
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
        UNLOCK();
      }
      local_38 = puVar2;
      FUN_147c81f52(lVar5,&local_38,param_2 + 0x30);
      *param_1 = lVar5;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
LAB_147c6a302:
      if (local_38 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_38 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) && (*(int *)((longlong)local_38 + 0xc) == 0)) {
          (**(code **)*local_38)(local_38,1);
        }
      }
      goto LAB_147c6a289;
    }
  }
  else if (((((bVar3 & 0x1f) == 0xb) && ((uVar4 & 0x40) != 0)) && (param_2 != 0)) &&
          (*(char *)(param_2 + 0x1c) == 'K')) {
    local_38 = *(undefined8 **)(param_2 + 0x28);
    if (local_38 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = *(int *)(local_38 + 1) + 1;
      UNLOCK();
    }
    lVar5 = FUN_14001cc68(0x30,0x10);
    FUN_1429b41c6(lVar5,&local_38,0);
    *param_1 = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    goto LAB_147c6a302;
  }
  *param_1 = 0;
LAB_147c6a289:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c6a37c FUN_147c6a37c body=332 status=ok
// SIG undefined FUN_147c6a37c(void)

void FUN_147c6a37c(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  void *param_5,longlong *param_6,undefined8 param_7)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((param_1 != 0) && ((*(byte *)(param_1 + 8) & 1) == 0)) &&
     (*(longlong *)(param_1 + 0x138) != 0)) {
    *param_3 = 0;
    uVar4 = DAT_14c8464e8;
    uVar3 = DAT_14c8464e0;
    param_4[2] = DAT_14c8464f0;
    *param_4 = uVar3;
    param_4[1] = uVar4;
    memmove(param_5,&DAT_14c846480,0x60);
    FUN_147c6a225(&local_48,
                  *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x138) + 0x40) + 0x50));
    puVar5 = local_48;
    puVar2 = (undefined8 *)*param_6;
    *param_6 = (longlong)local_48;
    local_48 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
        (**(code **)*puVar2)(puVar2,1);
      }
      if (local_48 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_48 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) && (*(int *)((longlong)local_48 + 0xc) == 0)) {
          (**(code **)*local_48)(local_48,1);
        }
      }
      puVar5 = (undefined8 *)*param_6;
    }
    if (puVar5 != (undefined8 *)0x0) {
      if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
  local_50 = param_7;
  local_58 = param_6;
  FUN_147c69fc8(param_2,param_3,param_4,param_5);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
}



// FUNCTION 147c6a4c9 FUN_147c6a4c9 body=1338 status=ok
// SIG undefined FUN_147c6a4c9(void)

ulonglong FUN_147c6a4c9(longlong param_1,int param_2,undefined4 *param_3,undefined8 *param_4,
                       undefined8 *param_5,undefined8 *param_6,longlong *param_7,longlong *param_8)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  byte bVar13;
  ulonglong uVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  undefined1 auStack_368 [32];
  undefined8 *local_348;
  longlong *local_340;
  longlong *local_338;
  int local_324;
  undefined8 *local_320;
  longlong local_318;
  undefined8 uStack_310;
  longlong *local_308;
  ulonglong uStack_300;
  byte local_2f8 [4];
  undefined4 local_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 local_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 local_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 local_2c4;
  uint local_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined8 local_298;
  undefined4 local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_278 [12];
  undefined8 local_218 [12];
  longlong local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158 [4];
  byte local_148;
  undefined7 uStack_147;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_d0;
  undefined8 local_a8;
  undefined1 local_78 [8];
  undefined1 *local_70;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_368;
  *param_4 = 0;
  uVar3 = DAT_14c8464e8;
  uVar9 = DAT_14c8464e0;
  param_5[2] = DAT_14c8464f0;
  *param_5 = uVar9;
  param_5[1] = uVar3;
  memmove(param_6,&DAT_14c846480,0x60);
  if (((param_1 == 0) || (cVar5 = FUN_147c48224(param_1,0), cVar5 != '\0')) ||
     (lVar8 = FUN_14479d2ce(param_1), *(char *)(lVar8 + 0x31) == '\x03')) {
    local_338 = param_8;
    local_340 = param_7;
    local_348 = param_6;
    FUN_147c6a37c(param_1,param_3,param_4,param_5);
    uVar14 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
    goto LAB_147c6a57d;
  }
  local_324 = param_2;
  local_320 = param_4;
  lVar8 = FUN_140aa2aee(param_1);
  local_168 = 0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0xffff00000000;
  uStack_180 = 0xffff00000000;
  local_158[0] = 1;
  uVar9 = FUN_14479d2ce(param_1);
  FUN_144b0760a(uVar9,local_2f8);
  uVar6 = FUN_144b261ba(param_1);
  FUN_147c48a7c(local_158,uVar6,
                CONCAT71((int7)((ulonglong)param_5 >> 8),local_2f8[0] == 3) & 0xffffffff);
  local_298 = 0;
  local_290 = 0;
  local_288 = 0;
  local_280 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_190 = 0xffffffff;
  local_2f8[0] = *(byte *)(lVar8 + 0xb8) >> 3 & 1;
  local_2f4 = (undefined4)local_188;
  uStack_2f0 = local_188._4_4_;
  uStack_2ec = (undefined4)uStack_180;
  uStack_2e8 = uStack_180._4_4_;
  local_2e4 = (undefined4)local_178;
  uStack_2e0 = local_178._4_4_;
  uStack_2dc = (undefined4)uStack_170;
  uStack_2d8 = uStack_170._4_4_;
  local_2d4 = (undefined4)local_168;
  uStack_2d0 = local_168._4_4_;
  uStack_2cc = (undefined4)uStack_160;
  uStack_2c8 = uStack_160._4_4_;
  local_2c4 = local_158[0];
  FUN_144b0760a(lVar8,&local_148);
  local_2c0 = (uint)local_148;
  local_2b8 = *param_3;
  uStack_2b4 = param_3[1];
  uStack_2b0 = param_3[2];
  uStack_2ac = param_3[3];
  local_2a8 = *(undefined8 *)(param_3 + 4);
  puVar12 = &DAT_14c846480;
  puVar16 = local_278;
  for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar16 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar16 = puVar16 + 1;
  }
  FUN_1447f067c(param_1,&local_148,1,0);
  pbVar15 = &local_148;
  puVar12 = local_218;
  for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar12 = *(undefined8 *)pbVar15;
    pbVar15 = pbVar15 + 8;
    puVar12 = puVar12 + 1;
  }
  local_1b8 = lVar8 + 0x38;
  local_1a0 = *(undefined8 *)(lVar8 + 0xf8);
  local_198 = *(undefined4 *)(lVar8 + 0x100);
  local_308 = (longlong *)0x0;
  uStack_300 = 0;
  local_70 = (undefined1 *)0x0;
  local_68 = 0x100000000;
  FUN_143627594(local_2f8,&local_308,local_78);
  uVar14 = CONCAT71((int7)((ulonglong)&local_308 >> 8),(int)uStack_300 != 0);
  if ((int)uStack_300 != 0) {
    if (local_324 == 2) {
      local_318 = 0;
      uStack_310 = 0;
      if ((int)local_68 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(local_68 & 0xffffffff);
      }
      if ((local_68 & 0xffffffff) != 0) {
        FUN_14475e67c(&local_318);
        if (0 < (int)local_68) {
          lVar8 = 0;
          do {
            uVar4 = uStack_310;
            puVar10 = local_70;
            if (local_70 == (undefined1 *)0x0) {
              puVar10 = local_78;
            }
            piVar2 = *(int **)(*(longlong *)(puVar10 + lVar8 * 8) + 0x68 +
                              (ulonglong)
                              ((*(byte *)(*(longlong *)(puVar10 + lVar8 * 8) + 8) & 3) == 0) * 8);
            if (((piVar2 == (int *)0x0) || (*piVar2 != 6)) || (*(longlong *)(piVar2 + 2) == 0)) {
              bVar13 = 0;
            }
            else {
              bVar13 = *(byte *)(*(longlong *)(piVar2 + 2) + 0x18) & 1;
            }
            lVar11 = (longlong)(int)uStack_310;
            uVar7 = (int)uStack_310 + 1;
            uStack_310 = CONCAT44(uStack_310._4_4_,uVar7);
            if (uStack_310._4_4_ < uVar7) {
              FUN_1401c3474(&local_318,uVar4 & 0xffffffff);
            }
            *(byte *)(local_318 + lVar11) = bVar13;
            lVar8 = lVar8 + 1;
          } while (lVar8 < (int)local_68);
        }
      }
      local_348 = &DAT_14c846480;
      local_340 = (longlong *)CONCAT71(local_340._1_7_,1);
      FUN_147c4d0d0(&local_148,param_1,local_78,&local_318);
      *local_320 = CONCAT71(uStack_147,local_148);
      *param_5 = local_f8;
      param_5[1] = local_d0;
      param_5[2] = local_a8;
      *param_6 = local_118;
      param_6[1] = uStack_110;
      *(undefined4 *)(param_6 + 2) = local_108;
      *(undefined4 *)((longlong)param_6 + 0x14) = uStack_104;
      *(undefined4 *)(param_6 + 3) = uStack_100;
      *(undefined4 *)((longlong)param_6 + 0x1c) = uStack_fc;
      *(undefined4 *)(param_6 + 4) = local_138;
      *(undefined4 *)((longlong)param_6 + 0x24) = uStack_134;
      *(int *)(param_6 + 5) = (int)uStack_130;
      *(int *)((longlong)param_6 + 0x2c) = (int)((ulonglong)uStack_130 >> 0x20);
      param_6[6] = local_128;
      param_6[7] = 0;
      param_6[8] = 0x3ff0000000000000;
      param_6[9] = 0x3ff0000000000000;
      param_6[10] = 0x3ff0000000000000;
      param_6[0xb] = 0;
      if (local_318 != 0) {
        FUN_1400020a8();
      }
    }
    if ((int)uStack_300 == 1) {
      if (local_308 != param_7) {
        puVar12 = (undefined8 *)*param_7;
        *param_7 = *local_308;
        *local_308 = 0;
        goto LAB_147c6a950;
      }
    }
    else {
      lVar8 = FUN_14001cc68(0x70,0x10);
      FUN_14014f414(lVar8,&local_308);
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
      }
      puVar12 = (undefined8 *)*param_7;
      *param_7 = lVar8;
LAB_147c6a950:
      if (puVar12 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar12 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((*piVar2 == 0) && (*(int *)((longlong)puVar12 + 0xc) == 0)) {
          (**(code **)*puVar12)(puVar12,1);
        }
      }
    }
    puVar10 = local_78;
    if (local_70 != (undefined1 *)0x0) {
      puVar10 = local_70;
    }
    lVar8 = (longlong)(int)local_68;
    if (lVar8 != 0) {
      lVar11 = 0;
      do {
        iVar1 = (int)param_8[1];
        *(uint *)(param_8 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_8 + 0xc) < iVar1 + 1U) {
          FUN_147c81ecc(param_8,iVar1);
        }
        *(undefined8 *)(*param_8 + (longlong)iVar1 * 8) = *(undefined8 *)(puVar10 + lVar11);
        *(undefined8 *)(puVar10 + lVar11) = 0;
        lVar11 = lVar11 + 8;
      } while (lVar8 * 8 != lVar11);
    }
  }
  FUN_140711b04(local_78);
  FUN_144756766(local_308,uStack_300 & 0xffffffff);
  if (local_308 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_147c6a57d:
  if ((local_60 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffffff;
}



// FUNCTION 147c6aa06 FUN_147c6aa06 body=1763 status=ok
// SIG undefined FUN_147c6aa06(void)

void FUN_147c6aa06(longlong param_1,longlong param_2,int param_3,undefined8 param_4,double param_5,
                  double *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  double *pdVar2;
  byte *pbVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  ushort uVar7;
  int iVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  byte bVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_148 [32];
  longlong *local_128;
  longlong *local_120;
  undefined1 local_118 [16];
  double local_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  byte bStack_6f;
  undefined6 uStack_6e;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_3 == 0) {
    plVar12 = *(longlong **)(param_1 + 8);
    local_120 = &local_98;
    local_98 = (ulonglong)local_98._1_7_ << 8;
    local_128 = plVar12;
    FUN_144833e08(plVar12,local_118,1,0);
LAB_147c6aac8:
    FUN_1447dd35a(plVar12);
  }
  else {
    if (param_3 != 2) {
      if (param_3 != 1) goto LAB_147c6aae4;
      plVar12 = *(longlong **)(param_1 + 8);
      local_120 = &local_98;
      local_98 = (ulonglong)local_98._1_7_ << 8;
      local_128 = plVar12 + 2;
      FUN_146ee4e7c(plVar12,local_118,1,0);
      goto LAB_147c6aac8;
    }
    local_128 = &local_98;
    local_98 = CONCAT44(local_98._4_4_,0x10000);
    FUN_142a10a5a(*(undefined8 *)(param_1 + 8),local_118,1,0);
  }
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)local_118._0_8_;
  if ((undefined8 *)local_118._0_8_ != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_147c6aae4:
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_147c6b0ea(param_1,param_4);
    plVar12 = (longlong *)**(undefined8 **)(param_1 + 0x10);
    (**(code **)(*plVar12 + 0x10))
              (plVar12,*(undefined4 *)(*(undefined8 **)(param_1 + 0x10) + 1),
               (longlong *)(param_1 + 0x28));
    uStack_80 = 0;
    local_78 = 0;
    uStack_77 = 0;
    uStack_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    bStack_6f = bStack_6f & 0xf8 | 3;
    local_88 = 0xfffff00000000;
    uStack_7c = 0xfffff;
    lVar17 = *(longlong *)(**(longlong **)(param_1 + 0x10) + 0xf8) +
             (longlong)(int)(*(longlong **)(param_1 + 0x10))[1] * 0x18;
    lVar14 = *(longlong *)(lVar17 + 8);
    if (*(longlong *)(lVar17 + 8) == 0) {
      lVar14 = lVar17;
    }
    iVar8 = *(int *)(lVar17 + 0x10);
    if ((longlong)iVar8 != 0) {
      lVar17 = 0;
      do {
        lVar15 = *(longlong *)(lVar14 + lVar17);
        if ((*(byte *)(lVar15 + 8) & 3) == 0) {
          FUN_146285926(lVar15,&local_98);
        }
        else {
          *(ulonglong *)(lVar15 + 0x68) = CONCAT71(uStack_77,local_78);
          *(ulonglong *)(lVar15 + 0x70) = CONCAT62(uStack_6e,CONCAT11(bStack_6f,uStack_70));
          *(undefined8 *)(lVar15 + 0x58) = local_88;
          *(ulonglong *)(lVar15 + 0x60) = CONCAT44(uStack_7c,uStack_80);
          *(longlong *)(lVar15 + 0x48) = local_98;
          *(undefined8 *)(lVar15 + 0x50) = uStack_90;
        }
        lVar17 = lVar17 + 8;
      } while ((longlong)iVar8 * 8 != lVar17);
    }
    lVar17 = *(longlong *)(param_1 + 0x28);
    if ((lVar17 != 0) && (*(char *)(lVar17 + 0x1a) == '\x01')) {
      *(undefined1 *)
       (*(longlong *)(**(longlong **)(param_1 + 0x10) + 0x158) +
       (longlong)(int)(*(longlong **)(param_1 + 0x10))[1]) = 1;
      plVar12 = *(longlong **)(param_1 + 0x10);
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x80))
                (*(longlong **)(param_1 + 0x28),local_118);
      lVar17 = *(longlong *)(*plVar12 + 0x110);
      lVar14 = (longlong)(int)plVar12[1] * 0x30;
      *(double *)(lVar17 + 0x10 + lVar14) = local_108;
      *(undefined8 *)(lVar17 + lVar14) = local_118._0_8_;
      ((undefined8 *)(lVar17 + lVar14))[1] = local_118._8_8_;
      pdVar2 = (double *)(lVar17 + 0x18 + lVar14);
      *pdVar2 = dStack_100;
      pdVar2[1] = dStack_f8;
      *(double *)(lVar17 + 0x28 + lVar14) = dStack_f0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      lVar17 = **(longlong **)(param_1 + 0x10);
      lVar15 = (longlong)(int)(*(longlong **)(param_1 + 0x10))[1];
      lVar14 = *(longlong *)(lVar17 + 0x48);
      lVar16 = lVar15 * 0x10;
      dStack_100 = (double)*(float *)(lVar14 + 0xc + lVar16);
      local_108 = (double)*(float *)(lVar14 + 8 + lVar16);
      dVar21 = (double)*(float *)(lVar14 + 4 + lVar16);
      local_118._8_4_ = SUB84(dVar21,0);
      local_118._0_8_ = (double)*(float *)(lVar14 + lVar16);
      local_118._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
      pdVar2 = (double *)(*(longlong *)(lVar17 + 0x28) + lVar15 * 0x18);
      dStack_f8 = *pdVar2;
      dStack_f0 = pdVar2[1];
      local_e8 = *(undefined8 *)(*(longlong *)(lVar17 + 0x28) + 0x10 + lVar15 * 0x18);
      uStack_e0 = 0;
      local_d8 = 0x3ff0000000000000;
      uStack_d0 = 0x3ff0000000000000;
      local_c8 = 0x3ff0000000000000;
      uStack_c0 = 0;
      FUN_144aa485a(lVar17,lVar15,local_118);
    }
    uVar4 = DAT_14c846330;
    plVar12 = *(longlong **)(param_1 + 0x10);
    bVar13 = *(byte *)((longlong)plVar12 + 0xc);
    if (plVar12 != (longlong *)0x0 && bVar13 != 0) {
      lVar14 = plVar12[1];
      lVar17 = *(longlong *)(*plVar12 + 0x278);
      *(undefined4 *)(lVar17 + 8 + (longlong)(int)lVar14 * 0xc) = DAT_14c846338;
      *(undefined8 *)(lVar17 + (longlong)(int)lVar14 * 0xc) = uVar4;
      uVar4 = DAT_14c846330;
      lVar14 = plVar12[1];
      lVar17 = *(longlong *)(*plVar12 + 0x290);
      *(undefined4 *)(lVar17 + 8 + (longlong)(int)lVar14 * 0xc) = DAT_14c846338;
      *(undefined8 *)(lVar17 + (longlong)(int)lVar14 * 0xc) = uVar4;
      plVar12 = *(longlong **)(param_1 + 0x10);
      bVar13 = *(byte *)((longlong)plVar12 + 0xc);
    }
    if (plVar12 != (longlong *)0x0 && 1 < bVar13) {
      if (*(char *)(*(longlong *)(*plVar12 + 0x2c0) + 0xb + (longlong)(int)plVar12[1] * 0x10) ==
          '\x04') {
        dVar22 = DAT_14c8464f0;
        dVar21 = DAT_14c8464e0;
        dVar9 = DAT_14c8464e8;
        if (0.0 < param_5) {
          uVar18 = -(ulonglong)(*param_6 != 0.0);
          uVar19 = -(ulonglong)(param_6[1] != 0.0);
          uVar20 = -(ulonglong)(param_6[2] != 0.0);
          dVar22 = (double)(~uVar20 & 0x47eff933c0000000 | (ulonglong)(1.0 / param_6[2]) & uVar20);
          dVar21 = (double)(~uVar18 & 0x47eff933c0000000 | (ulonglong)(1.0 / *param_6) & uVar18);
          dVar9 = (double)(~uVar19 & 0x47eff933c0000000 | (ulonglong)(1.0 / param_6[1]) & uVar19);
        }
        *(double *)(*(longlong *)(*plVar12 + 0x3b0) + (longlong)(int)plVar12[1] * 8) = param_5;
        *(ulonglong *)(*(longlong *)(*plVar12 + 0x3c8) + (longlong)(int)plVar12[1] * 8) =
             -(ulonglong)(0.0 < param_5) & (ulonglong)(1.0 / param_5);
        uVar10 = param_7[5];
        uVar4 = param_7[6];
        lVar14 = plVar12[1];
        lVar17 = *(longlong *)(*plVar12 + 0x3e0);
        puVar1 = (undefined8 *)(lVar17 + (longlong)(int)lVar14 * 0x18);
        *puVar1 = param_7[4];
        puVar1[1] = uVar10;
        *(undefined8 *)(lVar17 + 0x10 + (longlong)(int)lVar14 * 0x18) = uVar4;
        uVar4 = param_7[1];
        uVar10 = param_7[2];
        uVar11 = param_7[3];
        lVar17 = *(longlong *)(*plVar12 + 0x3f8);
        lVar14 = (longlong)(int)plVar12[1] * 0x20;
        puVar1 = (undefined8 *)(lVar17 + lVar14);
        *puVar1 = *param_7;
        puVar1[1] = uVar4;
        puVar1 = (undefined8 *)(lVar17 + 0x10 + lVar14);
        *puVar1 = uVar10;
        puVar1[1] = uVar11;
        dVar5 = param_6[2];
        dVar6 = param_6[1];
        lVar14 = (longlong)(int)plVar12[1];
        lVar17 = *(longlong *)(*plVar12 + 0x368);
        *(float *)(lVar17 + lVar14 * 0xc) = (float)*param_6;
        *(float *)(lVar17 + 4 + lVar14 * 0xc) = (float)dVar6;
        *(float *)(lVar17 + 8 + lVar14 * 0xc) = (float)dVar5;
        lVar14 = (longlong)(int)plVar12[1];
        lVar17 = *(longlong *)(*plVar12 + 0x380);
        *(float *)(lVar17 + lVar14 * 0xc) = (float)dVar21;
        *(float *)(lVar17 + 4 + lVar14 * 0xc) = (float)dVar9;
        *(float *)(lVar17 + 8 + lVar14 * 0xc) = (float)dVar22;
        if (param_2 != 0) {
          lVar17 = *plVar12;
          lVar14 = (longlong)(int)plVar12[1];
          uVar7 = *(ushort *)(*(longlong *)(lVar17 + 0x2c0) + 8 + lVar14 * 0x10);
          if ((char)*(byte *)(param_2 + 0x3d) < '\0' != SUB41((uVar7 & 0x10) >> 4,0)) {
            *(ushort *)(*(longlong *)(lVar17 + 0x2c0) + lVar14 * 0x10 + 8) =
                 uVar7 & 0xffef | *(byte *)(param_2 + 0x3d) >> 3 & 0xfff0;
            pbVar3 = (byte *)(*(longlong *)(*plVar12 + 0x2c0) + 10 +
                             (longlong)(int)plVar12[1] * 0x10);
            *pbVar3 = *pbVar3 | 1;
            lVar17 = *plVar12;
            lVar14 = (longlong)(int)plVar12[1];
          }
          *(double *)(*(longlong *)(lVar17 + 0x410) + lVar14 * 8) =
               (double)*(float *)(param_2 + 0xa8);
          *(double *)(*(longlong *)(*plVar12 + 0x428) + (longlong)(int)plVar12[1] * 8) =
               (double)*(float *)(param_2 + 0xac);
          lVar17 = (longlong)(int)plVar12[1] * 0x10;
          *(ushort *)(*(longlong *)(*plVar12 + 0x2c0) + 8 + lVar17) =
               *(ushort *)(*(longlong *)(*plVar12 + 0x2c0) + 8 + lVar17) & 0xfffe |
               *(byte *)(param_2 + 8) >> 2 & 1;
          lVar17 = (longlong)(int)plVar12[1] * 0x10;
          *(ushort *)(*(longlong *)(*plVar12 + 0x2c0) + 8 + lVar17) =
               *(ushort *)(*(longlong *)(*plVar12 + 0x2c0) + 8 + lVar17) & 0xff1f |
               (ushort)(byte)(*(int *)(param_2 + 0xe4) << 5);
          lVar17 = (longlong)(int)plVar12[1] * 0x10;
          *(ushort *)(*(longlong *)(*plVar12 + 0x2c0) + 8 + lVar17) =
               *(ushort *)(*(longlong *)(*plVar12 + 0x2c0) + 8 + lVar17) & 0xfeff |
               (*(byte *)(param_2 + 8) & 8) << 5;
        }
        *(undefined1 *)(*(longlong *)(*plVar12 + 0x2c0) + 0xd + (longlong)(int)plVar12[1] * 0x10) =
             1;
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c6b0ea FUN_147c6b0ea body=385 status=ok
// SIG undefined FUN_147c6b0ea(void)

void FUN_147c6b0ea(longlong param_1,double *param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  
  dVar8 = param_2[5];
  dVar7 = param_2[6];
  lVar12 = (longlong)(int)(*(longlong **)(param_1 + 0x10))[1];
  lVar14 = *(longlong *)(**(longlong **)(param_1 + 0x10) + 0x28);
  pdVar1 = (double *)(lVar14 + lVar12 * 0x18);
  *pdVar1 = param_2[4];
  pdVar1[1] = dVar8;
  *(double *)(lVar14 + 0x10 + lVar12 * 0x18) = dVar7;
  dVar7 = param_2[3];
  dVar8 = param_2[2];
  dVar9 = param_2[1];
  lVar14 = *(longlong *)(**(longlong **)(param_1 + 0x10) + 0x48);
  lVar12 = (longlong)(int)(*(longlong **)(param_1 + 0x10))[1] * 0x10;
  *(float *)(lVar14 + lVar12) = (float)*param_2;
  *(float *)(lVar14 + 4 + lVar12) = (float)dVar9;
  *(float *)(lVar14 + 8 + lVar12) = (float)dVar8;
  *(float *)(lVar14 + 0xc + lVar12) = (float)dVar7;
  plVar10 = *(longlong **)(param_1 + 0x10);
  if ((plVar10 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar10 + 0xc))) {
    lVar14 = *plVar10;
    if (*(char *)(*(longlong *)(lVar14 + 0x2c0) + 0xb + (longlong)(int)plVar10[1] * 0x10) == '\x04')
    {
      lVar12 = *(longlong *)(lVar14 + 0x28);
      lVar13 = (longlong)(int)plVar10[1] * 0x18;
      lVar14 = *(longlong *)(lVar14 + 0x530);
      *(undefined8 *)(lVar14 + 0x10 + lVar13) = *(undefined8 *)(lVar12 + 0x10 + lVar13);
      puVar2 = (undefined8 *)(lVar12 + lVar13);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar14 + lVar13);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      lVar14 = (longlong)(int)plVar10[1] * 0x10;
      puVar2 = (undefined8 *)(*(longlong *)(*plVar10 + 0x48) + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(*(longlong *)(*plVar10 + 0x548) + lVar14);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      lVar13 = plVar10[1];
      lVar14 = *(longlong *)(*plVar10 + 0x530);
      lVar15 = plVar10[2];
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8);
      *(undefined8 *)(lVar12 + 0x10 + (longlong)(int)lVar15 * 0x18) =
           *(undefined8 *)(lVar14 + 0x10 + (longlong)(int)lVar13 * 0x18);
      puVar2 = (undefined8 *)(lVar14 + (longlong)(int)lVar13 * 0x18);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar12 + (longlong)(int)lVar15 * 0x18);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      lVar14 = *(longlong *)(*plVar10 + 0x548);
      lVar15 = (longlong)(int)plVar10[1] * 0x10;
      fVar4 = *(float *)(lVar14 + 0xc + lVar15);
      fVar5 = *(float *)(lVar14 + 8 + lVar15);
      fVar6 = *(float *)(lVar14 + 4 + lVar15);
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8);
      lVar13 = (longlong)(int)plVar10[2] * 0x20;
      *(double *)(lVar12 + lVar13) = (double)*(float *)(lVar14 + lVar15);
      *(double *)(lVar12 + 8 + lVar13) = (double)fVar6;
      *(double *)(lVar12 + 0x10 + lVar13) = (double)fVar5;
      *(double *)(lVar12 + 0x18 + lVar13) = (double)fVar4;
    }
  }
  return;
}



// FUNCTION 147c6b26c FUN_147c6b26c body=425 status=ok
// SIG undefined FUN_147c6b26c(void)

undefined8 *
FUN_147c6b26c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 *param_7)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_198 [32];
  undefined4 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_138 [12];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
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
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_198;
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = param_3;
  param_1[4] = param_4;
  local_168 = param_1 + 5;
  local_160 = param_1 + 6;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  local_98 = *param_7;
  uStack_90 = param_7[1];
  local_88 = *(undefined4 *)(param_7 + 2);
  uStack_84 = *(undefined4 *)((longlong)param_7 + 0x14);
  uStack_80 = *(undefined4 *)(param_7 + 3);
  uStack_7c = *(undefined4 *)((longlong)param_7 + 0x1c);
  local_78 = *(undefined4 *)(param_7 + 4);
  uStack_74 = *(undefined4 *)((longlong)param_7 + 0x24);
  uStack_70 = *(undefined4 *)(param_7 + 5);
  uStack_6c = *(undefined4 *)((longlong)param_7 + 0x2c);
  local_68 = param_7[6];
  uStack_60 = 0;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0x3ff0000000000000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  local_b8 = param_7[8];
  uStack_b0 = param_7[9];
  local_a8 = param_7[10];
  local_c0 = (undefined4 *)0x0;
  local_178 = &local_d8;
  local_c8 = DAT_14c846520;
  local_d8 = (undefined4)DAT_14c846510;
  uStack_d4 = DAT_14c846510._4_4_;
  uStack_d0 = (undefined4)DAT_14c846518;
  uStack_cc = DAT_14c846518._4_4_;
  puVar3 = &DAT_14c846480;
  puVar4 = local_138;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_170 = local_138;
  cVar1 = FUN_147c6a4c9(param_6,param_5);
  if (cVar1 != '\0') {
    local_170 = &local_158;
    local_148 = local_c8;
    local_158 = CONCAT44(uStack_d4,local_d8);
    uStack_150 = CONCAT44(uStack_cc,uStack_d0);
    local_178 = local_c0;
    local_168 = local_138;
    FUN_147c6aa06(param_1,param_6,param_5,&local_98);
  }
  if ((local_38 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c6b416 FUN_147c6b416 body=145 status=ok
// SIG undefined FUN_147c6b416(void)

void FUN_147c6b416(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1447dcb4c(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 0x10) = 0;
    puVar2 = *(undefined8 **)(param_1 + 0x28);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  FUN_140711b38(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000147c6b4a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 147c6b4a8 FUN_147c6b4a8 body=338 status=ok
// SIG undefined FUN_147c6b4a8(void)

void FUN_147c6b4a8(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_147c6b0ea();
  plVar4 = *(longlong **)(param_1 + 0x10);
  if ((plVar4 != (longlong *)0x0) && (*(char *)((longlong)plVar4 + 0xc) != '\0')) {
    lVar3 = plVar4[1];
    lVar2 = *(longlong *)(*plVar4 + 0x278);
    *(undefined8 *)(lVar2 + (longlong)(int)lVar3 * 0xc) = 0;
    *(undefined4 *)(lVar2 + 8 + (longlong)(int)lVar3 * 0xc) = 0;
    lVar3 = plVar4[1];
    lVar2 = *(longlong *)(*plVar4 + 0x290);
    *(undefined8 *)(lVar2 + (longlong)(int)lVar3 * 0xc) = 0;
    *(undefined4 *)(lVar2 + 8 + (longlong)(int)lVar3 * 0xc) = 0;
    lVar2 = *(longlong *)(*plVar4 + 0x2a8);
    lVar3 = (longlong)(int)plVar4[1] * 0x40;
    *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0;
    *(undefined8 *)(lVar2 + lVar3) = 0;
    ((undefined8 *)(lVar2 + lVar3))[1] = 0;
    puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar3);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(lVar2 + 0x30 + lVar3) = 0;
    plVar4 = *(longlong **)(param_1 + 0x10);
  }
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  lVar5 = (longlong)(int)plVar4[1];
  lVar2 = *(longlong *)(*plVar4 + 0x28);
  lVar3 = *(longlong *)(*plVar4 + 0x48);
  lVar6 = lVar5 * 0x10;
  dStack_70 = (double)*(float *)(lVar3 + 0xc + lVar6);
  local_78 = (double)*(float *)(lVar3 + 8 + lVar6);
  dStack_80 = (double)*(float *)(lVar3 + 4 + lVar6);
  local_88 = (double)*(float *)(lVar3 + lVar6);
  puVar1 = (undefined8 *)(lVar2 + lVar5 * 0x18);
  local_68 = *puVar1;
  uStack_60 = puVar1[1];
  local_58 = *(undefined8 *)(lVar2 + 0x10 + lVar5 * 0x18);
  uStack_50 = 0;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0x3ff0000000000000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  FUN_144aa485a();
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c6b5fc FUN_147c6b5fc body=145 status=ok
// SIG undefined FUN_147c6b5fc(void)

void FUN_147c6b5fc(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  longlong lVar7;
  double dVar8;
  longlong lVar9;
  
  plVar6 = *(longlong **)(param_1 + 0x10);
  if (plVar6 != (longlong *)0x0 && *(byte *)((longlong)plVar6 + 0xc) != 0) {
    if ((*(byte *)((longlong)plVar6 + 0xc) < 2) ||
       (*(char *)(*(longlong *)(*plVar6 + 0x2c0) + 0xb + (longlong)(int)plVar6[1] * 0x10) == '\x02')
       ) {
      dVar1 = param_2[3];
      dVar8 = param_2[5];
      dVar2 = param_2[2];
      lVar7 = *(longlong *)(*plVar6 + 0x2a8);
      dVar3 = param_2[1];
      lVar9 = (longlong)(int)plVar6[1] * 0x40;
      dVar4 = *param_2;
      dVar5 = param_2[6];
      *(double *)(lVar7 + lVar9) = param_2[4];
      ((double *)(lVar7 + lVar9))[1] = dVar8;
      *(double *)(lVar7 + 0x10 + lVar9) = dVar5;
      *(float *)(lVar7 + 0x20 + lVar9) = (float)dVar4;
      *(float *)(lVar7 + 0x24 + lVar9) = (float)dVar3;
      *(float *)(lVar7 + 0x28 + lVar9) = (float)dVar2;
      *(float *)(lVar7 + 0x2c + lVar9) = (float)dVar1;
      *(undefined4 *)(lVar7 + 0x30 + lVar9) = 2;
    }
  }
  return;
}



// FUNCTION 147c6b68e FUN_147c6b68e body=148 status=ok
// SIG undefined FUN_147c6b68e(void)

undefined8 * FUN_147c6b68e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  local_28 = uVar2;
  FUN_144b017f6(&local_28,&local_48);
  puVar5 = (undefined4 *)FUN_146d46f8e(uVar2);
  uVar3 = *puVar5;
  uVar4 = puVar5[1];
  uVar2 = *(undefined8 *)(puVar5 + 2);
  uVar1 = *(undefined8 *)(puVar5 + 4);
  *param_2 = local_48;
  param_2[1] = uStack_40;
  *(undefined4 *)(param_2 + 2) = local_38;
  *(undefined4 *)((longlong)param_2 + 0x14) = uStack_34;
  *(undefined4 *)(param_2 + 3) = uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_2c;
  *(undefined4 *)(param_2 + 4) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar4;
  *(int *)(param_2 + 5) = (int)uVar2;
  *(int *)((longlong)param_2 + 0x2c) = (int)((ulonglong)uVar2 >> 0x20);
  param_2[6] = uVar1;
  param_2[7] = 0;
  param_2[8] = 0x3ff0000000000000;
  param_2[9] = 0x3ff0000000000000;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c6b724 FUN_147c6b724 body=65 status=ok
// SIG undefined FUN_147c6b724(void)

void FUN_147c6b724(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  if ((plVar3 != (longlong *)0x0) && (*(char *)((longlong)plVar3 + 0xc) != '\0')) {
    dVar1 = param_2[2];
    lVar5 = (longlong)(int)plVar3[1];
    dVar2 = param_2[1];
    lVar4 = *(longlong *)(*plVar3 + 0x278);
    *(float *)(lVar4 + lVar5 * 0xc) = (float)*param_2;
    *(float *)(lVar4 + 4 + lVar5 * 0xc) = (float)dVar2;
    *(float *)(lVar4 + 8 + lVar5 * 0xc) = (float)dVar1;
  }
  return;
}



// FUNCTION 147c6b766 FUN_147c6b766 body=108 status=ok
// SIG undefined FUN_147c6b766(void)

void FUN_147c6b766(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  plVar4 = *(longlong **)(param_1 + 0x10);
  if ((plVar4 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar4 + 0xc))) {
    lVar6 = (longlong)(int)plVar4[1];
    lVar5 = *(longlong *)(*plVar4 + 0x308);
    dVar1 = *(double *)(*(longlong *)(*plVar4 + 0x3c8) + lVar6 * 8);
    dVar2 = param_2[2];
    dVar3 = param_2[1];
    *(double *)(lVar5 + lVar6 * 0x18) = dVar1 * *param_2 + *(double *)(lVar5 + lVar6 * 0x18);
    *(double *)(lVar5 + 8 + lVar6 * 0x18) = dVar3 * dVar1 + *(double *)(lVar5 + 8 + lVar6 * 0x18);
    *(double *)(lVar5 + 0x10 + lVar6 * 0x18) =
         dVar2 * dVar1 + *(double *)(lVar5 + 0x10 + lVar6 * 0x18);
  }
  return;
}



// FUNCTION 147c6b7d2 FUN_147c6b7d2 body=91 status=ok
// SIG undefined FUN_147c6b7d2(void)

void FUN_147c6b7d2(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 != 0) && (1 < *(byte *)(lVar1 + 0xc))) {
    local_18 = *(undefined8 *)(param_2 + 4);
    local_28 = *param_2;
    uStack_24 = param_2[1];
    uStack_20 = param_2[2];
    uStack_1c = param_2[3];
    FUN_1409339b8(lVar1,&local_28,CONCAT71((int7)((ulonglong)local_18 >> 8),1));
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c6b82e FUN_147c6b82e body=605 status=ok
// SIG undefined FUN_147c6b82e(void)

void FUN_147c6b82e(longlong param_1,double *param_2,double param_3,double param_4,int param_5,
                  uint param_6)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [32];
  double local_b8;
  double local_b0;
  double local_a8;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar1 = *(longlong **)(param_1 + 0x10);
  if ((plVar1 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar1 + 0xc))) {
    FUN_147c6ba8c(local_d8,plVar1);
    local_a8 = local_a8 - param_2[2];
    local_b0 = local_b0 - param_2[1];
    local_b8 = local_b8 - *param_2;
    dVar6 = local_a8 * local_a8 + local_b8 * local_b8 + local_b0 * local_b0;
    dVar7 = SQRT(dVar6);
    if (dVar7 <= param_4) {
      dVar4 = 1.0 / dVar7;
      if (9.99999993922529e-09 < dVar6) {
        local_b8 = local_b8 * dVar4;
        local_b0 = local_b0 * dVar4;
      }
      if (param_5 == 1) {
        param_3 = param_3 * (1.0 - dVar7 / param_4);
      }
      dVar6 = (double)(~-(ulonglong)(9.99999993922529e-09 < dVar6) & (ulonglong)local_a8 |
                      (ulonglong)(local_a8 * dVar4) & -(ulonglong)(9.99999993922529e-09 < dVar6)) *
              param_3;
      local_b0 = local_b0 * param_3;
      local_b8 = local_b8 * param_3;
      lVar2 = *plVar1;
      lVar5 = (longlong)(int)plVar1[1];
      if ((param_6 & 0xfffffffd) != 1) {
        dVar7 = *(double *)(*(longlong *)(lVar2 + 0x3c8) + lVar5 * 8);
        dVar6 = dVar6 * dVar7;
        local_b0 = local_b0 * dVar7;
        local_b8 = local_b8 * dVar7;
      }
      if ((param_6 & 0xfffffffe) == 2) {
        lVar2 = *(longlong *)(lVar2 + 0x278);
        *(float *)(lVar2 + lVar5 * 0xc) =
             (float)(local_b8 + (double)*(float *)(lVar2 + lVar5 * 0xc));
        *(float *)(lVar2 + 4 + lVar5 * 0xc) =
             (float)(local_b0 + (double)*(float *)(lVar2 + 4 + lVar5 * 0xc));
        *(float *)(lVar2 + 8 + lVar5 * 0xc) =
             (float)(dVar6 + (double)*(float *)(lVar2 + 8 + lVar5 * 0xc));
      }
      else {
        lVar3 = *(longlong *)(lVar2 + 0x308);
        dVar7 = *(double *)(*(longlong *)(lVar2 + 0x3c8) + lVar5 * 8);
        *(double *)(lVar3 + lVar5 * 0x18) = local_b8 * dVar7 + *(double *)(lVar3 + lVar5 * 0x18);
        *(double *)(lVar3 + 8 + lVar5 * 0x18) =
             local_b0 * dVar7 + *(double *)(lVar3 + 8 + lVar5 * 0x18);
        *(double *)(lVar3 + 0x10 + lVar5 * 0x18) =
             dVar6 * dVar7 + *(double *)(lVar3 + 0x10 + lVar5 * 0x18);
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c6ba8c FUN_147c6ba8c body=371 status=ok
// SIG undefined FUN_147c6ba8c(void)

undefined1 (*) [16] FUN_147c6ba8c(undefined1 (*param_1) [16],longlong *param_2)

{
  double *pdVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar11 = *(longlong *)(*param_2 + 0x548);
  lVar12 = (longlong)(int)param_2[1] * 0x10;
  dVar14 = (double)*(float *)(lVar11 + 0xc + lVar12);
  dVar13 = (double)*(float *)(lVar11 + 8 + lVar12);
  dVar16 = (double)*(float *)(lVar11 + 4 + lVar12);
  lVar2 = *(longlong *)(*param_2 + 0x3f8);
  dVar15 = (double)*(float *)(lVar11 + lVar12);
  lVar11 = (longlong)(int)param_2[1] * 0x20;
  pdVar1 = (double *)(lVar2 + lVar11);
  dVar7 = *pdVar1;
  dVar8 = pdVar1[1];
  pdVar1 = (double *)(lVar2 + 0x10 + lVar11);
  dVar9 = *pdVar1;
  dVar10 = pdVar1[1];
  dVar6 = dVar7 * dVar13 * 1.0 + dVar10 * dVar16 + dVar15 * dVar9 * -1.0 + dVar14 * dVar8;
  dVar4 = dVar9 * dVar13 * -1.0 + ((dVar15 * dVar7 * -1.0 + dVar14 * dVar10) - dVar16 * dVar8);
  FUN_144b26898(&local_78);
  auVar5._8_4_ = SUB84(dVar6,0);
  auVar5._0_8_ = dVar8 * dVar13 * -1.0 + dVar9 * dVar16 + dVar15 * dVar10 * 1.0 + dVar14 * dVar7;
  auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *param_1 = auVar5;
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = dVar10 * dVar13 * 1.0 + ((dVar15 * dVar8 * 1.0 + dVar14 * dVar9) - dVar16 * dVar7);
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  param_1[1] = auVar3;
  *(undefined4 *)param_1[2] = local_78;
  *(undefined4 *)(param_1[2] + 4) = uStack_74;
  *(int *)(param_1[2] + 8) = (int)uStack_70;
  *(int *)(param_1[2] + 0xc) = (int)((ulonglong)uStack_70 >> 0x20);
  *(undefined8 *)param_1[3] = local_68;
  *(undefined8 *)(param_1[3] + 8) = 0;
  *(undefined8 *)param_1[4] = 0x3ff0000000000000;
  *(undefined8 *)(param_1[4] + 8) = 0x3ff0000000000000;
  *(undefined8 *)param_1[5] = 0x3ff0000000000000;
  *(undefined8 *)(param_1[5] + 8) = 0;
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c6bc00 FUN_147c6bc00 body=512 status=ok
// SIG undefined FUN_147c6bc00(void)

void FUN_147c6bc00(longlong param_1,double *param_2,double *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_108 [32];
  double local_e8;
  double local_e0;
  double local_d8;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar1 = *(longlong **)(param_1 + 0x10);
  if ((plVar1 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar1 + 0xc))) {
    FUN_144b26898(&local_e8,plVar1);
    dVar5 = local_d8;
    dVar4 = local_e0;
    dVar3 = local_e8;
    FUN_147c6be02(&local_e8,plVar1);
    lVar6 = (longlong)(int)plVar1[1];
    dVar7 = *(double *)(*(longlong *)(*plVar1 + 0x3c8) + lVar6 * 8);
    dVar8 = param_2[2];
    dVar9 = param_2[1];
    lVar2 = *(longlong *)(*plVar1 + 0x338);
    *(double *)(lVar2 + lVar6 * 0x18) = dVar7 * *param_2 + *(double *)(lVar2 + lVar6 * 0x18);
    *(double *)(lVar2 + 8 + lVar6 * 0x18) = dVar9 * dVar7 + *(double *)(lVar2 + 8 + lVar6 * 0x18);
    *(double *)(lVar2 + 0x10 + lVar6 * 0x18) =
         dVar8 * dVar7 + *(double *)(lVar2 + 0x10 + lVar6 * 0x18);
    dVar8 = (*param_3 - dVar3) * param_2[1] - *param_2 * (param_3[1] - dVar4);
    dVar9 = (param_3[2] - dVar5) * *param_2 - (*param_3 - dVar3) * param_2[2];
    dVar7 = (param_3[1] - dVar4) * param_2[2] - (param_3[2] - dVar5) * param_2[1];
    lVar6 = (longlong)(int)plVar1[1];
    lVar2 = *(longlong *)(*plVar1 + 0x350);
    *(double *)(lVar2 + lVar6 * 0x18) =
         dVar8 * local_d8 + dVar7 * local_e8 + dVar9 * local_e0 + *(double *)(lVar2 + lVar6 * 0x18);
    *(double *)(lVar2 + 8 + lVar6 * 0x18) =
         local_b8 * dVar8 + local_c8 * dVar7 + local_c0 * dVar9 +
         *(double *)(lVar2 + 8 + lVar6 * 0x18);
    *(double *)(lVar2 + 0x10 + lVar6 * 0x18) =
         local_98 * dVar8 + local_a8 * dVar7 + local_a0 * dVar9 +
         *(double *)(lVar2 + 0x10 + lVar6 * 0x18);
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c6be02 FUN_147c6be02 body=960 status=ok
// SIG undefined FUN_147c6be02(void)

undefined8 FUN_147c6be02(undefined8 param_1,longlong *param_2)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_218 [40];
  double local_1f0;
  undefined1 local_1e8 [16];
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  undefined8 local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  undefined8 local_190;
  double local_188;
  double local_180;
  double local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar2 = *param_2;
  lVar12 = (longlong)(int)param_2[1];
  lVar3 = *(longlong *)(lVar2 + 0x380);
  dVar7 = (double)*(float *)(lVar3 + 8 + lVar12 * 0xc);
  dVar5 = (double)*(float *)(lVar3 + 4 + lVar12 * 0xc);
  local_1f0 = (double)*(float *)(lVar3 + lVar12 * 0xc);
  lVar3 = *(longlong *)(lVar2 + 0x548);
  lVar13 = lVar12 * 0x10;
  dVar14 = (double)*(float *)(lVar3 + 0xc + lVar13);
  dVar15 = (double)*(float *)(lVar3 + 8 + lVar13);
  dVar4 = (double)*(float *)(lVar3 + 4 + lVar13);
  dVar16 = (double)*(float *)(lVar3 + lVar13);
  pdVar1 = (double *)(*(longlong *)(lVar2 + 0x3f8) + lVar12 * 0x20);
  dVar8 = *pdVar1;
  dVar9 = pdVar1[1];
  pdVar1 = (double *)(*(longlong *)(lVar2 + 0x3f8) + 0x10 + lVar12 * 0x20);
  dVar10 = *pdVar1;
  dVar11 = pdVar1[1];
  dVar6 = dVar8 * dVar15 * 1.0 + dVar11 * dVar4 + dVar16 * dVar10 * -1.0 + dVar14 * dVar9;
  local_1d8 = dVar11 * dVar15 * 1.0 + ((dVar16 * dVar9 * 1.0 + dVar14 * dVar10) - dVar4 * dVar8);
  dStack_1d0 = dVar10 * dVar15 * -1.0 + ((dVar16 * dVar8 * -1.0 + dVar14 * dVar11) - dVar4 * dVar9);
  local_1e8._8_4_ = SUB84(dVar6,0);
  local_1e8._0_8_ = dVar9 * dVar15 * -1.0 + dVar10 * dVar4 + dVar16 * dVar11 * 1.0 + dVar14 * dVar8;
  local_1e8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0.0;
  uStack_f0 = 0;
  local_108 = 0.0;
  dStack_100 = 0.0;
  local_118 = 0.0;
  uStack_110 = 0;
  local_128 = 0.0;
  dStack_120 = 0.0;
  local_138 = 0.0;
  uStack_130 = 0;
  local_148 = 0.0;
  dStack_140 = 0.0;
  FUN_14076d742(local_1e8,&local_148);
  local_178 = dVar7 * local_f8 + local_138 * 0.0 + local_118 * 0.0;
  local_198 = dVar7 * dStack_100 + dStack_140 * 0.0 + dStack_120 * 0.0;
  local_1b8 = dVar7 * local_108 + local_148 * 0.0 + local_128 * 0.0;
  local_180 = local_118 * dVar5 + local_138 * 0.0 + local_f8 * 0.0;
  local_188 = local_138 * local_1f0 + local_118 * 0.0 + local_f8 * 0.0;
  local_1a0 = dStack_120 * dVar5 + dStack_140 * 0.0 + dStack_100 * 0.0;
  local_1a8 = dStack_140 * local_1f0 + dStack_120 * 0.0 + dStack_100 * 0.0;
  local_1c0 = local_128 * dVar5 + local_148 * 0.0 + local_108 * 0.0;
  local_1c8 = local_1f0 * local_148 + local_128 * 0.0 + local_108 * 0.0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  local_150 = 0x3ff0000000000000;
  local_1b0 = 0;
  local_190 = 0;
  local_170 = 0;
  FUN_14363f449(param_1,&local_148);
  if ((local_c0 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c6c1c4 FUN_147c6c1c4 body=68 status=ok
// SIG undefined FUN_147c6c1c4(void)

undefined8 FUN_147c6c1c4(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  uVar3 = 0;
  if ((plVar2 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar2 + 0xc))) {
    cVar1 = *(char *)(*(longlong *)(*plVar2 + 0x2c0) + 0xb + (longlong)(int)plVar2[1] * 0x10);
    if ((cVar1 == '\x04') || (cVar1 == '\x01')) {
      uVar3 = *(undefined8 *)(*(longlong *)(*plVar2 + 0x3c8) + (longlong)(int)plVar2[1] * 8);
    }
  }
  return uVar3;
}



// FUNCTION 147c6c208 FUN_147c6c208 body=68 status=ok
// SIG undefined FUN_147c6c208(void)

undefined8 FUN_147c6c208(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  uVar3 = 0;
  if ((plVar2 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar2 + 0xc))) {
    cVar1 = *(char *)(*(longlong *)(*plVar2 + 0x2c0) + 0xb + (longlong)(int)plVar2[1] * 0x10);
    if ((cVar1 == '\x04') || (cVar1 == '\x01')) {
      uVar3 = *(undefined8 *)(*(longlong *)(*plVar2 + 0x3b0) + (longlong)(int)plVar2[1] * 8);
    }
  }
  return uVar3;
}



// FUNCTION 147c6c24c FUN_147c6c24c body=126 status=ok
// SIG undefined FUN_147c6c24c(void)

void FUN_147c6c24c(longlong param_1,double *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  dVar5 = 0.0;
  if ((plVar2 == (longlong *)0x0) || (*(byte *)((longlong)plVar2 + 0xc) < 2)) {
    dVar6 = 0.0;
    dVar7 = 0.0;
  }
  else {
    lVar4 = (longlong)(int)plVar2[1];
    cVar1 = *(char *)(*(longlong *)(*plVar2 + 0x2c0) + 0xb + lVar4 * 0x10);
    if (cVar1 != '\x04') {
      dVar6 = 0.0;
      dVar7 = 0.0;
      if (cVar1 != '\x01') goto LAB_147c6c2bb;
    }
    lVar3 = *(longlong *)(*plVar2 + 0x380);
    dVar5 = (double)*(float *)(lVar3 + 8 + lVar4 * 0xc);
    dVar6 = (double)*(float *)(lVar3 + 4 + lVar4 * 0xc);
    dVar7 = (double)*(float *)(lVar3 + lVar4 * 0xc);
  }
LAB_147c6c2bb:
  *param_2 = dVar7;
  param_2[1] = dVar6;
  param_2[2] = dVar5;
  return;
}



// FUNCTION 147c6c2ca FUN_147c6c2ca body=126 status=ok
// SIG undefined FUN_147c6c2ca(void)

void FUN_147c6c2ca(longlong param_1,double *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  dVar5 = 0.0;
  if ((plVar2 == (longlong *)0x0) || (*(byte *)((longlong)plVar2 + 0xc) < 2)) {
    dVar6 = 0.0;
    dVar7 = 0.0;
  }
  else {
    lVar4 = (longlong)(int)plVar2[1];
    cVar1 = *(char *)(*(longlong *)(*plVar2 + 0x2c0) + 0xb + lVar4 * 0x10);
    if (cVar1 != '\x04') {
      dVar6 = 0.0;
      dVar7 = 0.0;
      if (cVar1 != '\x01') goto LAB_147c6c339;
    }
    lVar3 = *(longlong *)(*plVar2 + 0x368);
    dVar5 = (double)*(float *)(lVar3 + 8 + lVar4 * 0xc);
    dVar6 = (double)*(float *)(lVar3 + 4 + lVar4 * 0xc);
    dVar7 = (double)*(float *)(lVar3 + lVar4 * 0xc);
  }
LAB_147c6c339:
  *param_2 = dVar7;
  param_2[1] = dVar6;
  param_2[2] = dVar5;
  return;
}



// FUNCTION 147c6c348 FUN_147c6c348 body=214 status=ok
// SIG undefined FUN_147c6c348(void)

void FUN_147c6c348(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0x3ff00000;
  uVar7 = 0;
  if (plVar3 == (longlong *)0x0) {
    uVar10 = 0;
    uVar8 = 0;
    uVar9 = 0;
  }
  else {
    uVar10 = 0;
    uVar8 = 0;
    uVar9 = 0;
    if (1 < *(byte *)((longlong)plVar3 + 0xc)) {
      lVar4 = *plVar3;
      lVar6 = (longlong)(int)plVar3[1];
      cVar2 = *(char *)(*(longlong *)(lVar4 + 0x2c0) + 0xb + lVar6 * 0x10);
      if ((cVar2 == '\x04') || (uVar7 = 0, cVar2 == '\x01')) {
        lVar5 = *(longlong *)(lVar4 + 0x3e0);
        uVar7 = *(undefined8 *)(lVar5 + lVar6 * 0x18);
        uVar8 = (undefined4)uVar7;
        uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
        uVar10 = *(undefined8 *)(lVar5 + 8 + lVar6 * 0x18);
        uVar7 = *(undefined8 *)(lVar5 + 0x10 + lVar6 * 0x18);
      }
      if ((cVar2 == '\x04') || (cVar2 == '\x01')) {
        puVar1 = (undefined4 *)(*(longlong *)(lVar4 + 0x3f8) + lVar6 * 0x20);
        uVar11 = *puVar1;
        uVar12 = puVar1[1];
        uVar13 = puVar1[2];
        uVar14 = puVar1[3];
        puVar1 = (undefined4 *)(*(longlong *)(lVar4 + 0x3f8) + 0x10 + lVar6 * 0x20);
        uVar15 = *puVar1;
        uVar16 = puVar1[1];
        uVar17 = puVar1[2];
        uVar18 = puVar1[3];
      }
      else {
        uVar15 = 0;
        uVar16 = 0;
        uVar17 = 0;
        uVar18 = 0x3ff00000;
      }
    }
  }
  *param_2 = uVar11;
  param_2[1] = uVar12;
  param_2[2] = uVar13;
  param_2[3] = uVar14;
  param_2[4] = uVar15;
  param_2[5] = uVar16;
  param_2[6] = uVar17;
  param_2[7] = uVar18;
  param_2[8] = uVar8;
  param_2[9] = uVar9;
  param_2[10] = (int)uVar10;
  param_2[0xb] = (int)((ulonglong)uVar10 >> 0x20);
  *(undefined8 *)(param_2 + 0xc) = uVar7;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0x12) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0x14) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0x16) = 0;
  return;
}



// FUNCTION 147c6c41e FUN_147c6c41e body=2057 status=ok
// SIG undefined FUN_147c6c41e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c6c41e(float *param_1,longlong param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_146ef1400();
  *(undefined8 *)(param_2 + 0xc0) = uVar2;
  uVar8 = 0;
  dVar10 = 0.0;
  if (((uint)param_1[0x20] & 8) != 0) {
    dVar10 = (double)param_1[2];
  }
  *(double *)(param_2 + 200) = dVar10;
  dVar10 = 0.0;
  if (((uint)param_1[0x20] & 8) != 0) {
    dVar10 = (double)param_1[3];
  }
  *(double *)(param_2 + 0xd0) = dVar10;
  dVar10 = 0.0;
  if (((uint)param_1[0x20] & 4) != 0) {
    dVar10 = (double)param_1[4];
  }
  *(double *)(param_2 + 0xd8) = dVar10;
  dVar9 = -1.0;
  dVar10 = -1.0;
  if (((uint)param_1[0x20] & 8) != 0) {
    dVar10 = (double)*param_1;
  }
  *(double *)(param_2 + 0xe0) = dVar10;
  if (((uint)param_1[0x20] & 8) != 0) {
    dVar9 = (double)(param_1[1] * 0.017453292);
  }
  *(double *)(param_2 + 0xe8) = dVar9;
  if (((uint)param_1[0x20] & 2) == 0) {
    uVar8 = 0x3ff00000;
  }
  *(ulonglong *)(param_2 + 0xf0) = (ulonglong)uVar8 << 0x20;
  *(byte *)(param_2 + 0xf8) = ~*(byte *)(param_1 + 0x20) & 1;
  *(byte *)(param_2 + 0xf9) = *(byte *)(param_1 + 0x20) >> 3 & 1;
  *(byte *)(param_2 + 0xfa) = *(byte *)(param_1 + 0x20) >> 2 & 1;
  *(byte *)(param_2 + 0xfb) = *(byte *)(param_1 + 0x20) >> 4 & 1;
  fVar7 = param_1[0x10];
  if (1 < SUB41(param_1[0x10],0)) {
    fVar7 = 2.8026e-45;
  }
  *(uint *)(param_2 + 0xfc) = (uint)fVar7 & 0xff;
  uVar8 = (uint)*(byte *)((longlong)param_1 + 0x41);
  if (1 < *(byte *)((longlong)param_1 + 0x41)) {
    uVar8 = 2;
  }
  *(uint *)(param_2 + 0x100) = uVar8;
  uVar8 = (uint)*(byte *)((longlong)param_1 + 0x42);
  if (1 < *(byte *)((longlong)param_1 + 0x42)) {
    uVar8 = 2;
  }
  *(uint *)(param_2 + 0x104) = uVar8;
  *(double *)(param_2 + 0x108) = (double)param_1[0xf];
  fVar7 = param_1[0x1f];
  if (1 < SUB41(fVar7,0)) {
    fVar7 = 2.8026e-45;
  }
  *(uint *)(param_2 + 0x110) = (uint)fVar7 & 0xff;
  fVar7 = param_1[0x18];
  if (1 < SUB41(fVar7,0)) {
    fVar7 = 2.8026e-45;
  }
  *(uint *)(param_2 + 0x118) = (uint)fVar7 & 0xff;
  uVar8 = 2;
  if (*(byte *)((longlong)param_1 + 0x61) < 2) {
    uVar8 = (uint)*(byte *)((longlong)param_1 + 0x61);
  }
  *(uint *)(param_2 + 0x114) = uVar8;
  *(double *)(param_2 + 0x120) = (double)(param_1[0x1e] * 0.017453292);
  *(double *)(param_2 + 0x130) = (double)(param_1[0x16] * 0.017453292);
  *(double *)(param_2 + 0x128) = (double)(param_1[0x17] * 0.017453292);
  *(byte *)(param_2 + 0x138) = *(byte *)(param_1 + 0xe) & 1;
  *(byte *)(param_2 + 0x139) = *(byte *)(param_1 + 0x1d) & 1;
  *(byte *)(param_2 + 0x13a) = *(byte *)(param_1 + 0x15) & 1;
  iVar5 = FUN_146ef140a();
  *(uint *)(param_2 + 0x13c) = (uint)(iVar5 != 0);
  iVar5 = FUN_146ef1412();
  *(uint *)(param_2 + 0x140) = (uint)(iVar5 != 0);
  *(double *)(param_2 + 0x148) = (double)param_1[10] * (double)_DAT_14c75f408;
  *(double *)(param_2 + 0x150) = (double)param_1[0xb] * (double)_DAT_14c75f40c;
  dVar10 = (double)_DAT_14c75f410;
  *(double *)(param_2 + 0x158) = (double)param_1[0x19] * dVar10;
  dVar9 = (double)_DAT_14c75f414;
  *(double *)(param_2 + 0x160) = (double)param_1[0x1a] * dVar9;
  *(double *)(param_2 + 0x168) = (double)param_1[0x11] * dVar10;
  *(double *)(param_2 + 0x170) = (double)param_1[0x12] * dVar9;
  *(double *)(param_2 + 0x178) = (double)param_1[0xc];
  *(double *)(param_2 + 0x180) = (double)param_1[0x1b];
  *(double *)(param_2 + 0x188) = (double)param_1[0x13];
  *(double *)(param_2 + 400) = (double)param_1[0xd];
  *(double *)(param_2 + 0x198) = (double)param_1[0x1c];
  *(double *)(param_2 + 0x1a0) = (double)param_1[0x14];
  uVar2 = *(undefined8 *)(param_1 + 0x22);
  uVar3 = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)(param_2 + 0x1b8) = *(undefined8 *)(param_1 + 0x26);
  *(undefined8 *)(param_2 + 0x1a8) = uVar2;
  *(undefined8 *)(param_2 + 0x1b0) = uVar3;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x2a);
  *(undefined8 *)(param_2 + 0x1d0) = *(undefined8 *)(param_1 + 0x2c);
  *(undefined8 *)(param_2 + 0x1c0) = uVar2;
  *(undefined8 *)(param_2 + 0x1c8) = uVar3;
  *(byte *)(param_2 + 0x1d8) = *(byte *)(param_1 + 0x31) & 1;
  *(byte *)(param_2 + 0x1d9) = *(byte *)(param_1 + 0x35) & 1;
  *(byte *)(param_2 + 0x1da) = *(byte *)(param_1 + 0x39) & 1;
  *(byte *)(param_2 + 0x1db) = *(byte *)(param_1 + 0x31) >> 1 & 1;
  *(byte *)(param_2 + 0x1dc) = *(byte *)(param_1 + 0x35) >> 1 & 1;
  *(byte *)(param_2 + 0x1dd) = *(byte *)(param_1 + 0x39) >> 1 & 1;
  *(undefined4 *)(param_2 + 0x1e0) = 0;
  fVar7 = param_1[0x36];
  fVar1 = param_1[0x32];
  dVar10 = (double)DAT_14c75f3f8;
  *(double *)(param_2 + 0x1e8) = (double)param_1[0x2e] * dVar10;
  *(double *)(param_2 + 0x1f0) = (double)fVar1 * dVar10;
  *(double *)(param_2 + 0x1f8) = (double)fVar7 * dVar10;
  fVar7 = param_1[0x37];
  fVar1 = param_1[0x33];
  dVar10 = (double)DAT_14c75f3fc;
  *(double *)(param_2 + 0x200) = (double)param_1[0x2f] * dVar10;
  *(double *)(param_2 + 0x208) = (double)fVar1 * dVar10;
  *(double *)(param_2 + 0x210) = (double)fVar7 * dVar10;
  *(double *)(param_2 + 0x218) = (double)param_1[0x30];
  *(double *)(param_2 + 0x220) = (double)param_1[0x34];
  *(double *)(param_2 + 0x228) = (double)param_1[0x38];
  FUN_144a7484c(param_1 + 0x48,&local_68);
  *(undefined8 *)(param_2 + 0x240) = local_58;
  *(undefined8 *)(param_2 + 0x248) = uStack_50;
  *(undefined8 *)(param_2 + 0x230) = local_68;
  *(undefined8 *)(param_2 + 0x238) = uStack_60;
  dVar10 = *(double *)(param_1 + 0x52);
  dVar9 = *(double *)(param_1 + 0x50);
  *(double *)(param_2 + 0x250) = *(double *)(param_1 + 0x4e) * 6.2831854820251465;
  *(double *)(param_2 + 600) = dVar9 * 6.2831854820251465;
  *(double *)(param_2 + 0x260) = dVar10 * 6.2831854820251465;
  *(undefined4 *)(param_2 + 0x270) = 0;
  if (*(char *)(param_1 + 0x54) == '\0') {
    dVar10 = (double)param_1[0x44] * (double)DAT_14c75f400;
    *(double *)(param_2 + 0x278) = dVar10;
    *(double *)(param_2 + 0x280) = dVar10;
    *(double *)(param_2 + 0x288) = dVar10;
    dVar10 = (double)param_1[0x45] * (double)DAT_14c75f404;
    *(double *)(param_2 + 0x290) = dVar10;
    *(double *)(param_2 + 0x298) = dVar10;
    *(double *)(param_2 + 0x2a0) = dVar10;
    dVar10 = (double)param_1[0x46];
    *(double *)(param_2 + 0x2a8) = dVar10;
    *(double *)(param_2 + 0x2b0) = dVar10;
    *(double *)(param_2 + 0x2b8) = dVar10;
    *(byte *)(param_2 + 0x268) = *(byte *)(param_1 + 0x47) & 1;
    *(byte *)(param_2 + 0x269) = *(byte *)(param_1 + 0x47) >> 1 & 1;
    *(undefined2 *)(param_2 + 0x26a) = 0;
    *(undefined1 *)(param_2 + 0x26c) = 0;
    bVar4 = 0;
  }
  else {
    dVar10 = (double)param_1[0x40] * (double)DAT_14c75f400;
    *(double *)(param_2 + 0x278) = (double)param_1[0x3c] * (double)DAT_14c75f400;
    *(double *)(param_2 + 0x280) = dVar10;
    *(double *)(param_2 + 0x288) = dVar10;
    dVar10 = (double)param_1[0x41] * (double)DAT_14c75f404;
    *(double *)(param_2 + 0x290) = (double)param_1[0x3d] * (double)DAT_14c75f404;
    *(double *)(param_2 + 0x298) = dVar10;
    *(double *)(param_2 + 0x2a0) = dVar10;
    *(double *)(param_2 + 0x2a8) = (double)param_1[0x3e];
    *(double *)(param_2 + 0x2b0) = (double)param_1[0x42];
    *(double *)(param_2 + 0x2b8) = (double)param_1[0x42];
    *(undefined2 *)(param_2 + 0x268) = 0;
    *(byte *)(param_2 + 0x26a) = *(byte *)(param_1 + 0x3f) & 1;
    *(byte *)(param_2 + 0x26b) = *(byte *)(param_1 + 0x3f) >> 1 & 1;
    *(byte *)(param_2 + 0x26c) = *(byte *)(param_1 + 0x43) & 1;
    bVar4 = *(byte *)(param_1 + 0x43) >> 1 & 1;
  }
  *(byte *)(param_2 + 0x26d) = bVar4;
  dVar9 = 3.4028234663852886e+38;
  dVar10 = dVar9;
  if (*(char *)(param_1 + 0x20) < '\0') {
    dVar10 = (double)FUN_146ef141a();
    dVar10 = (double)param_1[5] * dVar10;
  }
  *(double *)(param_2 + 0x2c0) = dVar10;
  dVar10 = dVar9;
  if ((*(byte *)((longlong)param_1 + 0x81) & 1) != 0) {
    fVar7 = param_1[6];
    if (1.0 <= fVar7) {
      fVar7 = 1.0;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    dVar10 = (double)fVar7;
  }
  *(double *)(param_2 + 0x2d0) = dVar10;
  uVar8 = 2;
  if (*(char *)(param_1 + 0x56) != '\x02') {
    uVar8 = (uint)(*(char *)(param_1 + 0x56) == '\x01');
  }
  *(uint *)(param_2 + 0x2d8) = uVar8;
  dVar10 = dVar9;
  if (((uint)param_1[0x20] & 0x20) != 0) {
    dVar10 = (double)FUN_146ef1424();
    dVar10 = (double)param_1[7] * dVar10;
  }
  *(double *)(param_2 + 0x2e8) = dVar10;
  if (((uint)param_1[0x20] & 0x40) != 0) {
    fVar7 = param_1[8];
    if (1.0 <= fVar7) {
      fVar7 = 1.0;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    dVar9 = (double)fVar7;
  }
  *(double *)(param_2 + 0x2f8) = dVar9;
  *(double *)(param_2 + 0x300) = (double)param_1[9];
  if (*(double *)(param_2 + 0x108) <= 0.1 && *(double *)(param_2 + 0x108) != 0.1) {
    lVar6 = 0;
    do {
      if (*(int *)(param_2 + 0xfc + lVar6 * 4) == 1) {
        *(undefined4 *)(param_2 + 0xfc + lVar6 * 4) = 2;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 3);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c6cc28 FUN_147c6cc28 body=812 status=ok
// SIG undefined FUN_147c6cc28(void)

longlong *
FUN_147c6cc28(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  double *pdVar7;
  double *pdVar8;
  undefined1 auStack_4b8 [32];
  undefined8 local_498;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  double local_3d8;
  undefined8 uStack_3d0;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined8 local_378 [4];
  undefined1 local_358 [16];
  double local_348;
  double dStack_340;
  double local_318 [4];
  undefined1 local_2f8 [16];
  double local_2e8;
  double dStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_298;
  undefined8 local_290;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined8 local_270;
  undefined1 local_240;
  undefined4 local_23c;
  undefined8 local_230;
  undefined8 local_228;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_4b8;
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = param_2;
  FUN_1408c9ee8(local_378);
  if (param_3 == 0) {
    uVar1 = *(undefined8 *)(param_5 + 0x10);
    local_438 = uVar1;
    FUN_144b017f6(&local_438,&local_3d8);
    puVar4 = (undefined4 *)FUN_146d46f8e(uVar1);
    local_418 = *puVar4;
    uStack_414 = puVar4[1];
    uStack_410 = (undefined4)*(undefined8 *)(puVar4 + 2);
    uStack_40c = (undefined4)((ulonglong)*(undefined8 *)(puVar4 + 2) >> 0x20);
    local_408 = *(undefined8 *)(puVar4 + 4);
    uStack_430 = (undefined4)uStack_3d0;
    uStack_42c = uStack_3d0._4_4_;
    uStack_400 = 0;
    local_3f8 = 0x3ff0000000000000;
    uStack_3f0 = 0x3ff0000000000000;
    local_3e8 = 0x3ff0000000000000;
    uStack_3e0 = 0;
    uVar1 = *(undefined8 *)(param_4 + 0x10);
    local_498 = uVar1;
    FUN_144b017f6(&local_498,&local_3d8);
    puVar5 = (undefined8 *)FUN_146d46f8e(uVar1);
    local_478 = *puVar5;
    uStack_470 = puVar5[1];
    local_468 = puVar5[2];
    uStack_490 = (undefined4)uStack_3d0;
    uStack_48c = uStack_3d0._4_4_;
    local_488 = local_3c8;
    uStack_484 = uStack_3c4;
    uStack_480 = uStack_3c0;
    uStack_47c = uStack_3bc;
    uStack_460 = 0;
    local_458 = 0x3ff0000000000000;
    uStack_450 = 0x3ff0000000000000;
    local_448 = 0x3ff0000000000000;
    uStack_440 = 0;
    FUN_1449437a2(&local_438,&local_3d8,&local_498);
    pdVar7 = &local_3d8;
    pdVar8 = (double *)local_378;
    for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
      *pdVar8 = *pdVar7;
      pdVar7 = pdVar7 + 1;
      pdVar8 = pdVar8 + 1;
    }
    local_318[0] = 0.0;
    local_318[1] = 0.0;
    local_318[2] = 0.0;
    local_318[3] = 1.0;
    local_2f8 = ZEXT816(0);
    local_2e8 = 0.0;
    dStack_2e0 = 0.0;
    local_2d8 = 0x3ff0000000000000;
    uStack_2d0 = 0x3ff0000000000000;
    local_2c8 = 0x3ff0000000000000;
    uStack_2c0 = 0;
    local_27c = 1;
    local_278 = 1;
    local_274 = 1;
    local_270 = 0x3fb99999a0000000;
    local_230 = 0x407f400000000000;
    local_228 = 0x4059000000000000;
    local_240 = 1;
    local_23c = 0;
    local_2b0 = 0;
    uStack_2a8 = 0;
    local_298 = 0xbff0000000000000;
    local_290 = 0xbff0000000000000;
  }
  else {
    FUN_147c6c41e(param_3 + 0x118,local_378);
    dVar3 = (double)*(float *)(param_3 + 0x60);
    FUN_140b26490(param_3,&local_3d8,0);
    pdVar7 = &local_3d8;
    pdVar8 = (double *)local_378;
    for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
      *pdVar8 = *pdVar7;
      pdVar7 = pdVar7 + 1;
      pdVar8 = pdVar8 + 1;
    }
    FUN_140b26490(param_3,&local_3d8,1);
    pdVar7 = &local_3d8;
    pdVar8 = local_318;
    for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
      *pdVar8 = *pdVar7;
      pdVar7 = pdVar7 + 1;
      pdVar8 = pdVar8 + 1;
    }
    dVar2 = (double)local_358._8_8_ * dVar3;
    local_348 = local_348 * dVar3;
    dStack_340 = dStack_340 * 0.0;
    local_358._8_4_ = SUB84(dVar2,0);
    local_358._0_8_ = (double)local_358._0_8_ * dVar3;
    local_358._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    dVar2 = dVar3 * (double)local_2f8._8_8_;
    local_2e8 = dVar3 * local_2e8;
    dStack_2e0 = dStack_2e0 * 0.0;
    local_2f8._8_4_ = SUB84(dVar2,0);
    local_2f8._0_8_ = dVar3 * (double)local_2f8._0_8_;
    local_2f8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  }
  FUN_140baa8d8(local_378);
  local_3d8 = *(double *)(param_4 + 0x10);
  uStack_3d0 = *(undefined8 *)(param_5 + 0x10);
  lVar6 = FUN_1408c9c86(param_1[2],&local_3d8,local_378);
  param_1[3] = lVar6;
  FUN_147c6cf56(param_1);
  if ((local_60 ^ (ulonglong)auStack_4b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c6cf56 FUN_147c6cf56 body=84 status=ok
// SIG undefined FUN_147c6cf56(void)

void FUN_147c6cf56(longlong *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(*param_1 + 0x10);
  if ((plVar2 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar2 + 0xc))) {
    pbVar1 = (byte *)(*(longlong *)(*plVar2 + 0x2c0) + 10 + (longlong)(int)plVar2[1] * 0x10);
    *pbVar1 = *pbVar1 | 1;
  }
  plVar2 = *(longlong **)(param_1[1] + 0x10);
  if ((plVar2 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar2 + 0xc))) {
    pbVar1 = (byte *)(*(longlong *)(*plVar2 + 0x2c0) + 10 + (longlong)(int)plVar2[1] * 0x10);
    *pbVar1 = *pbVar1 | 1;
  }
  return;
}



// FUNCTION 147c6cfaa FUN_147c6cfaa body=555 status=ok
// SIG undefined FUN_147c6cfaa(void)

longlong FUN_147c6cfaa(longlong *param_1,undefined4 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  char cVar9;
  longlong lVar10;
  double *pdVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  
  lVar10 = FUN_14001cc68(0x48,0x10);
  lVar12 = *param_1;
  FUN_147c6b26c(lVar10,lVar12 + 0xb8,lVar12 + 0x68,lVar12 + 0x80,param_2,param_3,param_4);
  lVar12 = *param_1;
  iVar6 = *(int *)(lVar12 + 0xce8);
  *(uint *)(lVar12 + 0xce8) = iVar6 + 1U;
  if (*(uint *)(lVar12 + 0xcec) < iVar6 + 1U) {
    FUN_147500bfa((longlong *)(lVar12 + 0xce0),iVar6);
  }
  *(longlong *)(*(longlong *)(lVar12 + 0xce0) + (longlong)iVar6 * 8) = lVar10;
  pdVar11 = (double *)FUN_14001cc68(0x80,0x10);
  *pdVar11 = 0.5;
  pdVar11[1] = 0.0;
  pdVar11[2] = 0.10000000149011612;
  pdVar11[3] = 1.0;
  pdVar11[4] = 0.0;
  pdVar11[5] = 0.0;
  pdVar11[6] = 1.0;
  pdVar11[7] = 1.0;
  pdVar11[8] = 0.0;
  pdVar11[9] = 0.0;
  *(undefined4 *)(pdVar11 + 10) = 0;
  pdVar11[0xb] = 0.0;
  *(undefined8 *)((longlong)pdVar11 + 0x5e) = 0;
  *(undefined4 *)(pdVar11 + 0xd) = 0x469c4000;
  *(undefined4 *)((longlong)pdVar11 + 0x6c) = 0x48435000;
  *(undefined4 *)(pdVar11 + 0xe) = 0x476a6000;
  *(undefined4 *)((longlong)pdVar11 + 0x74) = 0x3f800000;
  *(undefined1 *)(pdVar11 + 0xf) = 0;
  *(undefined4 *)((longlong)pdVar11 + 0x7c) = 0;
  if (param_3 != 0) {
    cVar9 = FUN_144a61b4f();
    if (cVar9 != '\0') {
      lVar12 = FUN_14034b308(param_3);
      if (lVar12 != 0) {
        *pdVar11 = (double)*(float *)(lVar12 + 0x28);
        pdVar11[2] = (double)*(float *)(lVar12 + 0x34);
      }
    }
  }
  *(double **)
   (*(longlong *)(*param_1 + 0x40) + (longlong)*(int *)(*(longlong *)(lVar10 + 0x10) + 0x10) * 8) =
       pdVar11;
  lVar14 = (longlong)*(int *)(*(longlong *)(lVar10 + 0x10) + 0x10);
  lVar12 = *(longlong *)(*(longlong *)(*param_1 + 0x58) + lVar14 * 8);
  *(double **)(*(longlong *)(*param_1 + 0x58) + lVar14 * 8) = pdVar11;
  if (lVar12 != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)
   (*(longlong *)(*param_1 + 0x28) + (longlong)*(int *)(*(longlong *)(lVar10 + 0x10) + 0x10)) = 0;
  plVar7 = *(longlong **)(lVar10 + 0x10);
  lVar13 = plVar7[1];
  lVar12 = *(longlong *)(*plVar7 + 0x28);
  lVar15 = plVar7[2];
  lVar14 = *(longlong *)(*param_1 + 0x70);
  *(undefined8 *)(lVar14 + 0x10 + (longlong)(int)lVar15 * 0x18) =
       *(undefined8 *)(lVar12 + 0x10 + (longlong)(int)lVar13 * 0x18);
  puVar1 = (undefined8 *)(lVar12 + (longlong)(int)lVar13 * 0x18);
  uVar8 = puVar1[1];
  puVar2 = (undefined8 *)(lVar14 + (longlong)(int)lVar15 * 0x18);
  *puVar2 = *puVar1;
  puVar2[1] = uVar8;
  plVar7 = *(longlong **)(lVar10 + 0x10);
  lVar12 = *(longlong *)(*plVar7 + 0x48);
  lVar15 = (longlong)(int)plVar7[1] * 0x10;
  fVar3 = *(float *)(lVar12 + 0xc + lVar15);
  fVar4 = *(float *)(lVar12 + 8 + lVar15);
  fVar5 = *(float *)(lVar12 + 4 + lVar15);
  lVar14 = *(longlong *)(*param_1 + 0x88);
  lVar13 = (longlong)(int)plVar7[2] * 0x20;
  *(double *)(lVar14 + lVar13) = (double)*(float *)(lVar12 + lVar15);
  *(double *)(lVar14 + 8 + lVar13) = (double)fVar5;
  *(double *)(lVar14 + 0x10 + lVar13) = (double)fVar4;
  *(double *)(lVar14 + 0x18 + lVar13) = (double)fVar3;
  *(undefined1 *)(*param_1 + 0xe48) = 1;
  return lVar10;
}



// FUNCTION 147c6d1d6 FUN_147c6d1d6 body=451 status=ok
// SIG undefined FUN_147c6d1d6(void)

void FUN_147c6d1d6(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar8 = *param_1;
  iVar1 = *(int *)(lVar8 + 0xd60);
  if ((longlong)iVar1 != 0) {
    lVar8 = *(longlong *)(lVar8 + 0xd58);
    lVar5 = 0;
    do {
      if ((*(longlong *)(lVar8 + lVar5) == *(longlong *)(param_2 + 0x10)) ||
         (*(longlong *)(lVar8 + 8 + lVar5) == *(longlong *)(param_2 + 0x10))) {
        *(undefined8 *)(lVar8 + lVar5) = 0;
        ((undefined8 *)(lVar8 + lVar5))[1] = 0;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar5);
    lVar8 = *param_1;
  }
  *(undefined1 *)(lVar8 + 0xe48) = 1;
  local_58 = param_2;
  FUN_1447eb164(*param_1 + 0x968,*(undefined8 *)(param_2 + 0x10));
  local_68 = 0;
  uStack_60 = 0;
  lVar8 = (longlong)*(int *)(*param_1 + 0xd00);
  if (lVar8 != 0) {
    lVar5 = *(longlong *)(*param_1 + 0xcf8);
    lVar6 = 0;
    do {
      uVar3 = uStack_60;
      plVar2 = *(longlong **)(lVar5 + lVar6);
      if ((plVar2 != (longlong *)0x0) && ((*plVar2 == param_2 || (plVar2[1] == param_2)))) {
        lVar7 = (longlong)(int)uStack_60;
        uVar4 = (int)uStack_60 + 1;
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar4);
        if (uStack_60._4_4_ < uVar4) {
          FUN_147c847d2(&local_68,uVar3 & 0xffffffff);
        }
        *(longlong **)(local_68 + lVar7 * 8) = plVar2;
      }
      lVar7 = local_68;
      lVar6 = lVar6 + 8;
    } while (lVar8 * 8 != lVar6);
    lVar8 = (longlong)(int)uStack_60;
    if (lVar8 != 0) {
      lVar5 = 0;
      do {
        FUN_147c6d39a(param_1,*(undefined8 *)(lVar7 + lVar5));
        lVar5 = lVar5 + 8;
      } while (lVar8 * 8 != lVar5);
    }
  }
  uVar3 = uStack_60 >> 0x20;
  uStack_60 = uStack_60 & 0xffffffff00000000;
  if ((int)uVar3 != 0) {
    FUN_147c84772(&local_68,0);
  }
  local_50 = &local_58;
  FUN_147c84858(*param_1 + 0xce0);
  lVar8 = local_58;
  if (local_58 != 0) {
    FUN_147c6b416(local_58);
    FUN_1400020a8(lVar8);
  }
  *(undefined1 *)(*param_1 + 0xe48) = 1;
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c6d39a FUN_147c6d39a body=133 status=ok
// SIG undefined FUN_147c6d39a(void)

void FUN_147c6d39a(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = &local_20;
  local_20 = param_2;
  FUN_147c84922(*param_1 + 0xcf8);
  lVar2 = local_20;
  if (local_20 != 0) {
    FUN_145a366a8(*(undefined8 *)(*(longlong *)(local_20 + 0x18) + 8),
                  *(undefined4 *)(*(longlong *)(local_20 + 0x18) + 0x18),0);
    lVar1 = *(longlong *)(lVar2 + 0x18);
    FUN_14081b730(*(undefined8 *)(lVar1 + 8),*(undefined4 *)(lVar1 + 0x18));
    FUN_1400020a8(lVar2);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c6d420 FUN_147c6d420 body=136 status=ok
// SIG undefined FUN_147c6d420(void)

undefined8 FUN_147c6d420(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0x20,0x10);
  FUN_147c6cc28(uVar3,*param_1 + 2000,param_2,param_3,param_4);
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0xd00);
  *(uint *)(lVar2 + 0xd00) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0xd04) < iVar1 + 1U) {
    FUN_147c847d2((longlong *)(lVar2 + 0xcf8),iVar1);
  }
  *(undefined8 *)(*(longlong *)(lVar2 + 0xcf8) + (longlong)iVar1 * 8) = uVar3;
  return uVar3;
}



// FUNCTION 147c6d4a8 FUN_147c6d4a8 body=476 status=ok
// SIG undefined FUN_147c6d4a8(void)

void FUN_147c6d4a8(longlong *param_1,int param_2,longlong *param_3)

{
  byte bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  if ((*(int *)(*param_1 + 0xcf0) != param_2) || (DAT_14c76174c != 0)) {
    *(undefined4 *)(*param_1 + 0xcf0) = 0;
    lVar6 = *param_1;
    if (0 < *(int *)(lVar6 + 0xce8)) {
      uVar3 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(lVar6 + 0xce0) + uVar3 * 8) + 0x10);
        bVar1 = *(byte *)((longlong)plVar2 + 0xc);
        if ((plVar2 == (longlong *)0x0 || bVar1 == 0) ||
           ((1 < bVar1 &&
            (*(char *)(*(longlong *)(*plVar2 + 0x2c0) + 0xb + (longlong)(int)plVar2[1] * 0x10) !=
             '\x02')))) {
          if (DAT_14c76174c == 0) {
            iVar5 = *(int *)(lVar6 + 0xcf0);
            if (iVar5 < param_2) {
              if (1 < bVar1 && plVar2 != (longlong *)0x0) {
                lVar4 = (longlong)(int)plVar2[1] * 0x10;
                if (*(char *)(*(longlong *)(*plVar2 + 0x2c0) + 0xb + lVar4) == '\x04') {
                  *(undefined1 *)(*(longlong *)(*plVar2 + 0x2c0) + 0xd + lVar4) = 0;
                  lVar6 = *param_1;
                  iVar5 = *(int *)(lVar6 + 0xcf0);
                }
              }
              *(int *)(lVar6 + 0xcf0) = iVar5 + 1;
            }
            else if (1 < bVar1 && plVar2 != (longlong *)0x0) goto LAB_147c6d554;
          }
          else {
            if ((longlong)(int)param_3[1] != 0) {
              lVar4 = 0;
              do {
                if (uVar3 == *(uint *)(*param_3 + lVar4)) {
                  if (1 < bVar1 && plVar2 != (longlong *)0x0) {
                    lVar4 = (longlong)(int)plVar2[1] * 0x10;
                    if (*(char *)(*(longlong *)(*plVar2 + 0x2c0) + 0xb + lVar4) == '\x04') {
                      *(undefined1 *)(*(longlong *)(*plVar2 + 0x2c0) + 0xd + lVar4) = 0;
                      lVar6 = *param_1;
                    }
                  }
                  *(int *)(lVar6 + 0xcf0) = *(int *)(lVar6 + 0xcf0) + 1;
                  goto LAB_147c6d640;
                }
                lVar4 = lVar4 + 4;
              } while ((longlong)(int)param_3[1] * 4 != lVar4);
            }
            if (1 < bVar1 && plVar2 != (longlong *)0x0) {
LAB_147c6d554:
              lVar6 = (longlong)(int)plVar2[1] * 0x10;
              if (*(char *)(*(longlong *)(*plVar2 + 0x2c0) + 0xb + lVar6) == '\x04') {
                *(undefined1 *)(*(longlong *)(*plVar2 + 0x2c0) + 0xd + lVar6) = 1;
              }
            }
          }
        }
LAB_147c6d640:
        uVar3 = uVar3 + 1;
        lVar6 = *param_1;
      } while ((longlong)uVar3 < (longlong)*(int *)(lVar6 + 0xce8));
    }
    *(undefined1 *)(lVar6 + 0xe48) = 1;
  }
  if (*param_3 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 147c6d684 FUN_147c6d684 body=191 status=ok
// SIG undefined FUN_147c6d684(void)

void FUN_147c6d684(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = *param_1;
  iVar1 = *(int *)(lVar6 + 0xce8);
  if ((longlong)iVar1 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    lVar6 = *(longlong *)(lVar6 + 0xce0);
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(lVar6 + lVar7);
      if (((lVar4 != param_2) && (lVar4 = *(longlong *)(lVar4 + 0x10), lVar4 != 0)) &&
         (1 < *(byte *)(lVar4 + 0xc))) {
        lVar5 = *param_1;
        iVar2 = *(int *)(lVar5 + 0xd60);
        *(uint *)(lVar5 + 0xd60) = iVar2 + 1U;
        if (*(uint *)(lVar5 + 0xd64) < iVar2 + 1U) {
          FUN_1408ca0e2((longlong *)(lVar5 + 0xd58),iVar2);
        }
        lVar5 = *(longlong *)(lVar5 + 0xd58);
        *(undefined8 *)(lVar5 + (longlong)iVar2 * 0x10) = uVar3;
        *(longlong *)(lVar5 + 8 + (longlong)iVar2 * 0x10) = lVar4;
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
    lVar6 = *param_1;
  }
  *(undefined1 *)(lVar6 + 0xe48) = 1;
  return;
}



// FUNCTION 147c6d744 FUN_147c6d744 body=208 status=ok
// SIG undefined FUN_147c6d744(void)

void FUN_147c6d744(longlong *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  lVar6 = *param_1;
  uVar11 = (ulonglong)*(uint *)(lVar6 + 0xd60);
  if (0 < (int)*(uint *)(lVar6 + 0xd60)) {
    uVar12 = 1;
    lVar7 = 0;
    uVar13 = 0;
    do {
      lVar2 = *(longlong *)(lVar6 + 0xd58);
      lVar8 = lVar7 * 0x10;
      lVar7 = lVar7 + 1;
      if (*(longlong *)(lVar2 + lVar8) == 0) {
        uVar10 = uVar13;
        if ((int)uVar13 < (int)(uint)lVar7) {
          uVar10 = (uint)lVar7;
        }
        if ((int)uVar11 <= (int)uVar10) {
LAB_147c6d800:
          FUN_147c6d814(lVar6 + 0xd58);
          return;
        }
        puVar9 = (undefined4 *)(lVar8 + lVar2);
        uVar14 = (ulonglong)uVar13;
        if ((int)uVar13 <= (int)uVar12) {
          uVar14 = uVar12;
        }
        lVar8 = uVar14 << 4;
        while (*(longlong *)(lVar2 + lVar8) == 0) {
          uVar14 = uVar14 + 1;
          lVar8 = lVar8 + 0x10;
          if ((longlong)(int)uVar11 <= (longlong)uVar14) goto LAB_147c6d800;
        }
        puVar1 = (undefined4 *)(lVar2 + lVar8);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *puVar9 = *puVar1;
        puVar9[1] = uVar3;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        *(undefined8 *)(*(longlong *)(*param_1 + 0xd58) + lVar8) = 0;
        *(undefined8 *)(*(longlong *)(*param_1 + 0xd58) + 8 + lVar8) = 0;
        uVar13 = (int)uVar14 + 1;
        lVar6 = *param_1;
      }
      uVar11 = (ulonglong)*(int *)(lVar6 + 0xd60);
      uVar12 = (ulonglong)((int)uVar12 + 1);
    } while (lVar7 < (longlong)uVar11);
  }
  return;
}



// FUNCTION 147c6d814 FUN_147c6d814 body=72 status=ok
// SIG undefined FUN_147c6d814(void)

void FUN_147c6d814(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1408ca0e2();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_14081bb22();
      return;
    }
  }
  return;
}



// FUNCTION 147c6d85e FUN_147c6d85e body=891 status=ok
// SIG undefined FUN_147c6d85e(void)

void FUN_147c6d85e(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  ulonglong local_68;
  undefined1 local_5c [4];
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = *param_1;
  if (*(int *)(lVar7 + 0xd10) != *(int *)(lVar7 + 0xd3c)) {
    FUN_147c849ec(lVar7 + 0xd08);
    FUN_147c84b34(lVar7 + 0xd08);
  }
  lVar7 = param_2[1];
  if ((longlong)(int)lVar7 != 0) {
    lVar8 = *param_2;
    lVar11 = 0;
    do {
      lVar2 = *(longlong *)(lVar8 + lVar11);
      if ((lVar2 != 0) && (lVar3 = *(longlong *)(lVar8 + 8 + lVar11), lVar3 != 0)) {
        local_50 = *(ulonglong *)(lVar2 + 0x10);
        local_58 = *(ulonglong *)(lVar3 + 0x10);
        uVar5 = ((uint)(local_50 >> 0x14) & 0xffff ^ (uint)(local_50 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar6 = FUN_147c84c74(*param_1 + 0xd08,uVar5 >> 0x10 ^ uVar5,&local_50);
        FUN_147c853f0(uVar6,local_5c,&local_58);
        uVar5 = ((uint)(local_58 >> 0x14) & 0xffff ^ (uint)(local_58 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar6 = FUN_147c84c74(*param_1 + 0xd08,uVar5 >> 0x10 ^ uVar5,&local_58);
        FUN_147c853f0(uVar6,local_5c,&local_50);
      }
      lVar11 = lVar11 + 0x10;
    } while ((longlong)(int)lVar7 * 0x10 != lVar11);
  }
  lVar7 = *param_1;
  *(undefined4 *)(lVar7 + 0xd60) = 0;
  if (*(int *)(lVar7 + 0xd64) != 0) {
    FUN_146dfac6a(lVar7 + 0xd58,0);
  }
  lVar7 = *param_1;
  uVar12 = (ulonglong)*(int *)(lVar7 + 0xce8);
  if (0 < (longlong)uVar12) {
    local_70 = 1;
    local_68 = 0;
    do {
      uVar1 = local_68 + 1;
      if (uVar1 < uVar12) {
        uVar4 = *(ulonglong *)(*(longlong *)(*(longlong *)(*param_1 + 0xce0) + local_68 * 8) + 0x10)
        ;
        uVar5 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar13 = local_70;
        local_68 = uVar1;
LAB_147c6da0c:
        lVar7 = *param_1;
        uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(lVar7 + 0xce0) + uVar13 * 8) + 0x10);
        if (*(int *)(lVar7 + 0xd10) != *(int *)(lVar7 + 0xd3c)) {
          lVar8 = lVar7 + 0xd40;
          if (*(longlong *)(lVar7 + 0xd48) != 0) {
            lVar8 = *(longlong *)(lVar7 + 0xd48);
          }
          iVar9 = *(int *)(lVar8 + (ulonglong)
                                   (*(int *)(lVar7 + 0xd50) - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
          if (iVar9 != -1) {
            do {
              lVar8 = *(longlong *)(lVar7 + 0xd08) + (longlong)iVar9 * 0x60;
              if (*(ulonglong *)(*(longlong *)(lVar7 + 0xd08) + (longlong)iVar9 * 0x60) == uVar4) {
                if (((longlong *)(lVar8 + 8) != (longlong *)0x0 && lVar8 != 0) &&
                   (*(int *)(lVar8 + 0x10) != *(int *)(lVar8 + 0x3c))) {
                  uVar10 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
                  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
                  lVar11 = lVar8 + 0x40;
                  if (*(longlong *)(lVar8 + 0x48) != 0) {
                    lVar11 = *(longlong *)(lVar8 + 0x48);
                  }
                  iVar9 = *(int *)(lVar11 + (ulonglong)
                                            (*(int *)(lVar8 + 0x50) - 1U & (uVar10 >> 0x10 ^ uVar10)
                                            ) * 4);
                  if (iVar9 != -1) {
                    lVar8 = *(longlong *)(lVar8 + 8);
                    goto LAB_147c6db45;
                  }
                }
                break;
              }
              iVar9 = *(int *)(lVar8 + 0x58);
            } while (iVar9 != -1);
          }
        }
        goto LAB_147c6da2c;
      }
LAB_147c6db66:
      local_68 = uVar1;
      local_70 = local_70 + 1;
    } while (local_68 != uVar12);
    lVar7 = *param_1;
  }
  *(undefined1 *)(lVar7 + 0xe48) = 1;
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar9 = *(int *)((longlong)iVar9 * 0x10 + lVar8 + 8), iVar9 != -1) {
LAB_147c6db45:
    if (*(ulonglong *)(lVar8 + (longlong)iVar9 * 0x10) == uVar1) goto LAB_147c6da65;
  }
LAB_147c6da2c:
  iVar9 = *(int *)(lVar7 + 0xd60);
  *(uint *)(lVar7 + 0xd60) = iVar9 + 1U;
  if (*(uint *)(lVar7 + 0xd64) < iVar9 + 1U) {
    FUN_1408ca0e2((longlong *)(lVar7 + 0xd58),iVar9);
  }
  lVar7 = *(longlong *)(lVar7 + 0xd58);
  *(ulonglong *)(lVar7 + (longlong)iVar9 * 0x10) = uVar4;
  *(ulonglong *)(lVar7 + 8 + (longlong)iVar9 * 0x10) = uVar1;
LAB_147c6da65:
  uVar13 = uVar13 + 1;
  uVar1 = local_68;
  if (uVar13 == uVar12) goto LAB_147c6db66;
  goto LAB_147c6da0c;
}



// FUNCTION 147c6dbda FUN_147c6dbda body=93 status=ok
// SIG undefined FUN_147c6dbda(void)

void FUN_147c6dbda(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(lVar1 + lVar4) + 0x10);
      if ((plVar2 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar2 + 0xc))) {
        lVar5 = (longlong)(int)plVar2[1] * 0x10;
        if (*(char *)(*(longlong *)(*plVar2 + 0x2c0) + 0xb + lVar5) == '\x04') {
          *(undefined4 *)(*(longlong *)(*plVar2 + 0x2c0) + lVar5) = 0xffffffff;
        }
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar4);
  }
  *(undefined1 *)(*param_1 + 0xe48) = 1;
  return;
}



// FUNCTION 147c6dc38 FUN_147c6dc38 body=411 status=ok
// SIG undefined FUN_147c6dc38(void)

void FUN_147c6dc38(longlong *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  char cVar11;
  bool bVar12;
  byte bVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  
  lVar17 = *param_1;
  *(undefined4 *)(lVar17 + 8) = 0;
  if (*(int *)(lVar17 + 0xc) < 0) {
    FUN_146dfac6a();
  }
  lVar17 = (longlong)*(int *)(*param_1 + 0xd60);
  if (lVar17 != 0) {
    lVar4 = *(longlong *)(*param_1 + 0xd58);
    lVar16 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + lVar16);
      if ((plVar5 != (longlong *)0x0) &&
         (plVar6 = *(longlong **)(lVar4 + 8 + lVar16), plVar6 != (longlong *)0x0)) {
        if (*(byte *)((longlong)plVar5 + 0xc) < 2) {
LAB_147c6dcc1:
          bVar13 = *(byte *)((longlong)plVar6 + 0xc);
          if (bVar13 < 2) {
            cVar11 = '\0';
          }
          else {
            cVar11 = *(char *)(*(longlong *)(*plVar6 + 0x2c0) + 0xd +
                              (longlong)(int)plVar6[1] * 0x10);
          }
          if (1 < *(byte *)((longlong)plVar5 + 0xc)) {
            lVar14 = (longlong)(int)plVar5[1];
            lVar15 = *(longlong *)(*plVar5 + 0x2c0);
            goto LAB_147c6dd05;
          }
LAB_147c6dcec:
          if (bVar13 < 2) {
            bVar12 = false;
          }
          else {
            cVar3 = *(char *)(*(longlong *)(*plVar6 + 0x2c0) + 0xb + (longlong)(int)plVar6[1] * 0x10
                             );
            bVar12 = cVar3 == '\x01' || cVar3 == '\x04';
          }
        }
        else {
          lVar14 = (longlong)(int)plVar5[1];
          lVar15 = *(longlong *)(*plVar5 + 0x2c0);
          cVar11 = '\x01';
          if (*(char *)(lVar15 + 0xd + lVar14 * 0x10) == '\0') goto LAB_147c6dcc1;
LAB_147c6dd05:
          cVar3 = *(char *)(lVar15 + 0xb + lVar14 * 0x10);
          bVar12 = true;
          if ((cVar3 != '\x01') && (cVar3 != '\x04')) {
            bVar13 = *(byte *)((longlong)plVar6 + 0xc);
            goto LAB_147c6dcec;
          }
        }
        if (*(char *)(*(longlong *)(*plVar5 + 0xe0) + (longlong)(int)plVar5[1]) == '\x01') {
          if (cVar11 == '\0' &&
              (bVar12 & *(byte *)(*(longlong *)(*plVar6 + 0xe0) + (longlong)(int)plVar6[1])) == 1) {
            plVar5 = (longlong *)*param_1;
            lVar15 = plVar5[1];
            uVar10 = (int)lVar15 + 1;
            *(uint *)(plVar5 + 1) = uVar10;
            if (*(uint *)((longlong)plVar5 + 0xc) < uVar10) {
              FUN_1408ca0e2(plVar5);
            }
            puVar1 = (undefined4 *)(lVar4 + lVar16);
            uVar7 = puVar1[1];
            uVar8 = puVar1[2];
            uVar9 = puVar1[3];
            puVar2 = (undefined4 *)(*plVar5 + (longlong)(int)lVar15 * 0x10);
            *puVar2 = *puVar1;
            puVar2[1] = uVar7;
            puVar2[2] = uVar8;
            puVar2[3] = uVar9;
          }
        }
      }
      lVar16 = lVar16 + 0x10;
    } while (lVar17 * 0x10 != lVar16);
  }
  return;
}



// FUNCTION 147c6ddd4 FUN_147c6ddd4 body=173 status=ok
// SIG undefined FUN_147c6ddd4(void)

void FUN_147c6ddd4(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  undefined7 uVar8;
  
  lVar6 = (longlong)*(int *)(*param_1 + 0xd00);
  if (lVar6 != 0) {
    lVar1 = *(longlong *)(*param_1 + 0xcf8);
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar5);
      plVar3 = *(longlong **)(*plVar2 + 0x10);
      bVar4 = 1;
      uVar8 = (undefined7)((ulonglong)param_3 >> 8);
      bVar7 = 1;
      if ((plVar3 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar3 + 0xc))) {
        uVar8 = (undefined7)((ulonglong)*(longlong *)(*plVar3 + 0x2c0) >> 8);
        bVar7 = *(byte *)(*(longlong *)(*plVar3 + 0x2c0) + 0xd + (longlong)(int)plVar3[1] * 0x10) ^
                1;
      }
      plVar3 = *(longlong **)(plVar2[1] + 0x10);
      if ((plVar3 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar3 + 0xc))) {
        bVar4 = *(byte *)(*(longlong *)(*plVar3 + 0x2c0) + 0xd + (longlong)(int)plVar3[1] * 0x10) ^
                1;
      }
      param_3 = CONCAT71(uVar8,bVar7 & bVar4);
      FUN_145a366a8(*(undefined8 *)(plVar2[3] + 8),*(undefined4 *)(plVar2[3] + 0x18),param_3);
      lVar5 = lVar5 + 8;
    } while (lVar6 * 8 != lVar5);
  }
  return;
}



// FUNCTION 147c6de82 FUN_147c6de82 body=206 status=ok
// SIG undefined FUN_147c6de82(void)

void FUN_147c6de82(longlong *param_1,double param_2,double param_3,double param_4,int param_5,
                  uint param_6,uint param_7,uint param_8,int param_9)

{
  uint uVar1;
  
  if (0.0 <= param_2) {
    *(double *)(*param_1 + 0xe30) = param_2;
  }
  if (0.0 <= param_3) {
    *(double *)(*param_1 + 0xa50) = param_3;
  }
  if (0.0 <= param_4) {
    if (param_4 <= 0.0) {
      param_4 = 0.0;
    }
    *(double *)(*param_1 + 0xa30) = param_4;
  }
  if (-1 < (int)param_6) {
    uVar1 = 0x7f;
    if (param_6 < 0x7f) {
      uVar1 = param_6;
    }
    *(char *)(*param_1 + 0xb90) = (char)uVar1;
  }
  if (-1 < (int)param_7) {
    uVar1 = 0x7f;
    if (param_7 < 0x7f) {
      uVar1 = param_7;
    }
    *(char *)(*param_1 + 0xb91) = (char)uVar1;
  }
  if (-1 < (int)param_8) {
    uVar1 = 0x7f;
    if (param_8 < 0x7f) {
      uVar1 = param_8;
    }
    *(char *)(*param_1 + 0xb92) = (char)uVar1;
  }
  if (-1 < param_5) {
    *(bool *)(*param_1 + 0x830) = param_5 != 0;
    *(undefined1 *)(*param_1 + 0x831) = DAT_14c7617fc;
  }
  if (-1 < param_9) {
    *(bool *)(*param_1 + 0xa7a) = param_9 != 0;
  }
  return;
}



// FUNCTION 147c6df54 FUN_147c6df54 body=124 status=ok
// SIG undefined FUN_147c6df54(void)

void FUN_147c6df54(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)0x0;
  uStack_20 = 0;
  FUN_140a2b238(&local_28);
  uVar1 = FUN_14477b072(param_1,DAT_14caf75d0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)(local_28,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c6dfd2 FUN_147c6dfd2 body=180 status=ok
// SIG undefined FUN_147c6dfd2(void)

void FUN_147c6dfd2(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)0x0;
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
  (**(code **)(*param_1 + 0x488))(param_1,&local_28);
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)(local_28,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c6e088 FUN_147c6e088 body=124 status=ok
// SIG undefined FUN_147c6e088(void)

void FUN_147c6e088(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)0x0;
  uStack_20 = 0;
  FUN_140a2b238(&local_28);
  uVar1 = FUN_14477b072(param_1,DAT_14caf75e0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)(local_28,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c6e106 FUN_147c6e106 body=180 status=ok
// SIG undefined FUN_147c6e106(void)

void FUN_147c6e106(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)0x0;
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
  (**(code **)(*param_1 + 0x480))(param_1,&local_28);
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)(local_28,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c6e1bc FUN_147c6e1bc body=124 status=ok
// SIG undefined FUN_147c6e1bc(void)

void FUN_147c6e1bc(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)0x0;
  uStack_20 = 0;
  FUN_140a2b238(&local_28);
  uVar1 = FUN_14477b072(param_1,DAT_14caf7600);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)(local_28,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c6e23a FUN_147c6e23a body=180 status=ok
// SIG undefined FUN_147c6e23a(void)

void FUN_147c6e23a(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)0x0;
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
  (**(code **)(*param_1 + 0x490))(param_1,&local_28);
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)(local_28,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c6e2f0 FUN_147c6e2f0 body=180 status=ok
// SIG undefined FUN_147c6e2f0(void)

void FUN_147c6e2f0(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)0x0;
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
  (**(code **)(*param_1 + 0x478))(param_1,&local_28);
  if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)(local_28,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c6e3a8 FUN_147c6e3a8 body=107 status=ok
// SIG undefined FUN_147c6e3a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c6e3a8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf77f8) {
    FUN_144b3d300(&DAT_14caf77f8);
    if (DAT_14caf77f8 == -1) {
      _DAT_14caf77e8 = &PTR_LAB_14a40dd10;
      _DAT_14caf77f0 = DAT_14caf77e0;
      _Init_thread_footer(&DAT_14caf77f8);
      return;
    }
  }
  return;
}



// FUNCTION 147c6e413 FUN_147c6e413 body=107 status=ok
// SIG undefined FUN_147c6e413(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c6e413(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf7838) {
    FUN_144b3d300(&DAT_14caf7838);
    if (DAT_14caf7838 == -1) {
      _DAT_14caf7828 = &PTR_LAB_14a40dd10;
      _DAT_14caf7830 = DAT_14caf7820;
      _Init_thread_footer(&DAT_14caf7838);
      return;
    }
  }
  return;
}



// FUNCTION 147c6e47e FUN_147c6e47e body=107 status=ok
// SIG undefined FUN_147c6e47e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c6e47e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf7878) {
    FUN_144b3d300(&DAT_14caf7878);
    if (DAT_14caf7878 == -1) {
      _DAT_14caf7868 = &PTR_LAB_14a40dd10;
      _DAT_14caf7870 = DAT_14caf7860;
      _Init_thread_footer(&DAT_14caf7878);
      return;
    }
  }
  return;
}



// FUNCTION 147c6e4e9 FUN_147c6e4e9 body=107 status=ok
// SIG undefined FUN_147c6e4e9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c6e4e9(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf78b8) {
    FUN_144b3d300(&DAT_14caf78b8);
    if (DAT_14caf78b8 == -1) {
      _DAT_14caf78a8 = &PTR_LAB_14a40dd10;
      _DAT_14caf78b0 = DAT_14caf78a0;
      _Init_thread_footer(&DAT_14caf78b8);
      return;
    }
  }
  return;
}



// FUNCTION 147c6e556 FUN_147c6e556 body=306 status=ok
// SIG undefined FUN_147c6e556(void)

void FUN_147c6e556(longlong *param_1,int param_2)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong local_58 [5];
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((((char)param_1[0x34] != '\0') ||
       ((plVar2 = (longlong *)(**(code **)(*param_1 + 0x4a0))(param_1), plVar2 != (longlong *)0x0 &&
        (cVar1 = (**(code **)(*plVar2 + 0x6c8))(plVar2), cVar1 != '\0')))) &&
      (cVar1 = FUN_140a8394a(param_1), cVar1 == '\0')) &&
     (plVar2 = (longlong *)param_1[0x2b], plVar2 != (longlong *)0x0)) {
    local_58[4] = 0;
    uStack_30 = 0;
    local_58[2] = 0;
    local_58[3] = 0;
    local_68 = local_58;
    local_58[0] = 0;
    local_58[1] = 0;
    (**(code **)(*plVar2 + 0xc0))(plVar2,param_1[0x28]);
    if (0 < (longlong)(int)uStack_30) {
      lVar4 = 0;
      do {
        iVar3 = *(int *)(local_58[2] + lVar4 * 4) - *(int *)(local_58[0] + lVar4 * 4);
        if (param_2 < iVar3) {
          iVar3 = param_2;
        }
        param_2 = iVar3;
        lVar4 = lVar4 + 1;
      } while ((int)uStack_30 != lVar4);
    }
    lVar4 = (**(code **)(*param_1 + 0x4a0))(param_1);
    *(int *)(lVar4 + 0x918) = param_2;
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] != 0) {
      FUN_1400020a8();
    }
    if (local_58[4] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c6e698 FUN_147c6e698 body=209 status=ok
// SIG undefined FUN_147c6e698(void)

void FUN_147c6e698(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x150) != 0) && (*param_2 != 0)) {
    lVar2 = FUN_14496b220();
    if (lVar2 != 0) {
      (**(code **)(*(longlong *)*param_2 + 0x18))();
      if ((*(char *)(param_1 + 0x1a4) == '\x01') && (*(longlong *)(param_1 + 400) != 0)) {
        (**(code **)(*(longlong *)*param_2 + 0xa8))();
      }
      (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,&local_30);
      iVar1 = *(int *)(lVar2 + 0x90);
      *(uint *)(lVar2 + 0x90) = iVar1 + 1U;
      if (*(uint *)(lVar2 + 0x94) < iVar1 + 1U) {
        FUN_147c85734((longlong *)(lVar2 + 0x88),iVar1);
      }
      *(undefined8 *)(*(longlong *)(lVar2 + 0x88) + (longlong)iVar1 * 8) = local_30;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c6e76a FUN_147c6e76a body=181 status=ok
// SIG undefined FUN_147c6e76a(void)

void FUN_147c6e76a(longlong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar2 = FUN_140a8394a();
  if (((cVar2 == '\0') && (*(longlong *)(param_1 + 0x150) != 0)) && (*param_2 != 0)) {
    lVar3 = FUN_14496b220();
    if (lVar3 != 0) {
      (**(code **)(*(longlong *)*param_2 + 0x18))();
      (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,&local_28);
      iVar1 = *(int *)(lVar3 + 0x90);
      *(uint *)(lVar3 + 0x90) = iVar1 + 1U;
      if (*(uint *)(lVar3 + 0x94) < iVar1 + 1U) {
        FUN_147c85734((longlong *)(lVar3 + 0x88),iVar1);
      }
      *(undefined8 *)(*(longlong *)(lVar3 + 0x88) + (longlong)iVar1 * 8) = local_28;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c6e820 FUN_147c6e820 body=181 status=ok
// SIG undefined FUN_147c6e820(void)

void FUN_147c6e820(longlong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar2 = FUN_140a8394a();
  if (((cVar2 == '\0') && (*(longlong *)(param_1 + 0x150) != 0)) && (*param_2 != 0)) {
    lVar3 = FUN_14496b220();
    if (lVar3 != 0) {
      (**(code **)(*(longlong *)*param_2 + 0x18))();
      (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,&local_28);
      iVar1 = *(int *)(lVar3 + 0xa0);
      *(uint *)(lVar3 + 0xa0) = iVar1 + 1U;
      if (*(uint *)(lVar3 + 0xa4) < iVar1 + 1U) {
        FUN_147c85734((longlong *)(lVar3 + 0x98),iVar1);
      }
      *(undefined8 *)(*(longlong *)(lVar3 + 0x98) + (longlong)iVar1 * 8) = local_28;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c6e8e0 FUN_147c6e8e0 body=423 status=ok
// SIG undefined FUN_147c6e8e0(void)

void FUN_147c6e8e0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  longlong *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14134c582();
  *(undefined8 *)(param_1 + 0x260) = 0;
  lVar6 = *(longlong *)(param_1 + 0xb0);
  if ((((lVar6 != 0) || (lVar6 = FUN_1448abda6(param_1), lVar6 != 0)) &&
      (*(longlong *)(lVar6 + 0x260) != 0)) &&
     (*(longlong *)(*(longlong *)(lVar6 + 0x260) + 0x38) != 0)) {
    lVar6 = FUN_147c6ea88();
    *(longlong *)(param_1 + 0x260) = lVar6;
    if (((lVar6 != 0) && (*(longlong *)(param_1 + 0xa8) != 0)) &&
       (lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x1c8), lVar6 != 0)) {
      lVar7 = FUN_144a3a302();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) == lVar7 + 0x30)) {
        local_38 = (longlong *)0x0;
        lVar6 = (**(code **)(*(longlong *)(lVar6 + 0x2b8) + 0x18))(lVar6 + 0x2b8);
        if (lVar6 != 0) {
          lVar7 = FUN_14496b220(*(undefined8 *)(param_1 + 0x260));
          *(longlong *)(lVar7 + 0x10) = lVar6;
          *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(param_1 + 0x110);
          uVar1 = *(undefined4 *)(param_1 + 0x118);
          uVar2 = *(undefined4 *)(param_1 + 0x11c);
          uVar3 = *(undefined4 *)(param_1 + 0x120);
          uVar4 = *(undefined4 *)(param_1 + 0x124);
          uVar5 = *(undefined8 *)(param_1 + 0x130);
          *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)(param_1 + 0x128);
          *(undefined8 *)(lVar7 + 0x38) = uVar5;
          *(undefined4 *)(lVar7 + 0x20) = uVar1;
          *(undefined4 *)(lVar7 + 0x24) = uVar2;
          *(undefined4 *)(lVar7 + 0x28) = uVar3;
          *(undefined4 *)(lVar7 + 0x2c) = uVar4;
          puVar8 = (undefined8 *)(param_1 + 0x1b8);
          puVar9 = (undefined8 *)(lVar7 + 0xc0);
          for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar8 = (undefined8 *)(param_1 + 0x138);
          puVar9 = (undefined8 *)(lVar7 + 0x40);
          for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          puVar8 = (undefined8 *)(param_1 + 0x218);
          puVar9 = (undefined8 *)(lVar7 + 0x120);
          for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
        }
      }
    }
  }
  local_40 = *(longlong *)(param_1 + 0xa8);
  if (local_40 != 0) {
    local_30 = &local_48;
    local_38 = &local_40;
    local_48 = param_1;
    FUN_147c85ec4(local_24);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c6ea88 FUN_147c6ea88 body=115 status=ok
// SIG undefined FUN_147c6ea88(void)

undefined8 * FUN_147c6ea88(longlong param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x200);
  memset(_Dst,0,0x200);
  FUN_147c85a76(_Dst);
  *_Dst = &PTR_FUN_14aa2afc0;
  FUN_1458e258c(_Dst + 0x15);
  if ((*(byte *)((longlong)_Dst + 0x41) & 1) != 0) {
    *(undefined1 *)(param_1 + 0x1e8) = 1;
  }
  _Dst[3] = param_1;
  FUN_141300b68(param_1 + 0x70,_Dst);
  return _Dst;
}



// FUNCTION 147c6eafc FUN_147c6eafc body=116 status=ok
// SIG undefined FUN_147c6eafc(void)

void FUN_147c6eafc(longlong param_1)

{
  longlong lVar1;
  
  FUN_140674fee();
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if ((((lVar1 != 0) || (lVar1 = FUN_1448abda6(param_1), lVar1 != 0)) &&
      (*(longlong *)(lVar1 + 0x260) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x260) + 0x38), lVar1 != 0)) {
    FUN_1411dc7ca(lVar1 + 0x70,*(undefined8 *)(param_1 + 0x260));
  }
  *(undefined8 *)(param_1 + 0x260) = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_147c8643a();
    return;
  }
  return;
}



// FUNCTION 147c6eb70 FUN_147c6eb70 body=88 status=ok
// SIG undefined FUN_147c6eb70(void)

void FUN_147c6eb70(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  
  FUN_1401c3ca6();
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    if ((-1 < (int)DAT_14c76181c || (*(uint *)(param_1 + 0x110) & 1) != 0) &&
       (*(char *)(lVar1 + 0x178) == '\x01')) {
      uVar2 = DAT_14c76181c;
      if ((*(uint *)(param_1 + 0x110) & 1) != 0) {
        uVar2 = (uint)*(byte *)(param_1 + 0x114);
      }
      FUN_14056a50a(lVar1,uVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147c6ebc8 FUN_147c6ebc8 body=167 status=ok
// SIG undefined FUN_147c6ebc8(void)

void FUN_147c6ebc8(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_198 [32];
  undefined1 local_178 [336];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    memcpy((void *)(param_1 + 0xa8),(void *)(lVar1 + 0x18),0x150);
    if ((*(longlong *)(param_1 + 0x18) != 0) &&
       (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x1d0), plVar2 != (longlong *)0x0))
    {
      memmove(local_178,(void *)(lVar1 + 0x18),0x150);
      (**(code **)(*plVar2 + 0xf8))(plVar2,*(undefined8 *)(lVar1 + 0x10),local_178);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c6ec70 FUN_147c6ec70 body=214 status=ok
// SIG undefined FUN_147c6ec70(void)

longlong * FUN_147c6ec70(longlong *param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar4 = (int)param_2[1];
  if (-1 < iVar4) {
    if (iVar4 != 0) {
      FUN_1447a8aa0(param_1);
      lVar7 = param_2[1];
      if ((longlong)(int)lVar7 != 0) {
        lVar5 = *param_2;
        lVar9 = 0;
        do {
          fVar1 = *(float *)(lVar5 + 8 + lVar9);
          fVar2 = *(float *)(lVar5 + 4 + lVar9);
          fVar3 = *(float *)(lVar5 + lVar9);
          iVar4 = (int)param_1[1];
          lVar8 = (longlong)iVar4;
          *(uint *)(param_1 + 1) = iVar4 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
            FUN_1403e3958(param_1,iVar4);
          }
          lVar6 = *param_1;
          *(double *)(lVar6 + lVar8 * 0x18) = (double)fVar3;
          *(double *)(lVar6 + 8 + lVar8 * 0x18) = (double)fVar2;
          *(double *)(lVar6 + 0x10 + lVar8 * 0x18) = (double)fVar1;
          lVar9 = lVar9 + 0xc;
        } while ((longlong)(int)lVar7 * 0xc != lVar9);
      }
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar4);
}



// FUNCTION 147c6ed48 FUN_147c6ed48 body=85 status=ok
// SIG undefined FUN_147c6ed48(void)

void FUN_147c6ed48(void)

{
  float in_XMM3_Da;
  undefined4 in_stack_00000028;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  double local_20;
  double local_18;
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (double)in_XMM3_Da;
  local_28 = in_stack_00000028;
  local_18 = local_20;
  local_10 = local_20;
  FUN_147c6ed9e();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c6ed9e FUN_147c6ed9e body=1418 status=ok
// SIG undefined FUN_147c6ed9e(void)

void FUN_147c6ed9e(longlong param_1,undefined8 param_2,double *param_3,double *param_4,uint param_5)

{
  double dVar1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_1d8 [32];
  undefined4 *local_1b8;
  double local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  undefined1 local_188;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  float local_16c;
  undefined1 local_168 [16];
  double local_158;
  undefined1 local_148 [16];
  double local_138;
  undefined1 local_128 [16];
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_f0;
  double dVar2;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_108 = param_3[4];
  dStack_100 = param_3[5];
  local_f8 = param_3[6];
  dVar11 = *param_3;
  dVar12 = param_3[1];
  dVar13 = param_3[2];
  dVar18 = param_3[8];
  dVar19 = param_3[9];
  dVar8 = dVar18 * 1.0;
  dVar10 = dVar19 * 0.0;
  dVar20 = param_3[10] * 0.0;
  dVar1 = param_3[3];
  dVar2 = param_3[3];
  dVar3 = dVar10 * dVar11 - dVar8 * dVar12;
  dVar4 = dVar20 * dVar12 - dVar10 * dVar13;
  dVar5 = dVar8 * dVar13 - dVar20 * dVar11;
  dVar4 = dVar4 + dVar4;
  dVar5 = dVar5 + dVar5;
  dVar3 = dVar3 + dVar3;
  local_118 = dVar3 * dVar1 + dVar20 + (dVar5 * dVar11 - dVar4 * dVar12);
  dVar10 = (dVar13 * dVar4 - dVar11 * dVar3) + dVar2 * dVar5 + dVar10;
  local_128._8_4_ = SUB84(dVar10,0);
  local_128._0_8_ = (dVar3 * dVar12 - dVar5 * dVar13) + dVar1 * dVar4 + dVar8;
  local_128._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  dVar8 = dVar18 * 0.0;
  dVar10 = dVar19 * 1.0;
  dVar6 = dVar10 * dVar11 - dVar8 * dVar12;
  dVar7 = dVar20 * dVar12 - dVar10 * dVar13;
  dVar9 = dVar8 * dVar13 - dVar20 * dVar11;
  dVar7 = dVar7 + dVar7;
  dVar9 = dVar9 + dVar9;
  dVar6 = dVar6 + dVar6;
  dVar18 = dVar18 * 0.0;
  dVar19 = dVar19 * 0.0;
  dVar17 = param_3[10] * 1.0;
  dVar3 = dVar19 * dVar11 - dVar18 * dVar12;
  dVar4 = dVar17 * dVar12 - dVar19 * dVar13;
  dVar5 = dVar18 * dVar13 - dVar11 * dVar17;
  dVar4 = dVar4 + dVar4;
  dVar5 = dVar5 + dVar5;
  dVar3 = dVar3 + dVar3;
  local_138 = dVar6 * dVar1 + dVar20 + (dVar9 * dVar11 - dVar7 * dVar12);
  dVar10 = (dVar13 * dVar7 - dVar11 * dVar6) + dVar2 * dVar9 + dVar10;
  local_148._8_4_ = SUB84(dVar10,0);
  local_148._0_8_ = (dVar6 * dVar12 - dVar9 * dVar13) + dVar1 * dVar7 + dVar8;
  local_148._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  local_158 = dVar3 * dVar1 + dVar17 + (dVar5 * dVar11 - dVar4 * dVar12);
  dVar2 = (dVar13 * dVar4 - dVar11 * dVar3) + dVar2 * dVar5 + dVar19;
  local_168._8_4_ = SUB84(dVar2,0);
  local_168._0_8_ = (dVar3 * dVar12 - dVar5 * dVar13) + dVar1 * dVar4 + dVar18;
  local_168._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  dVar1 = ABS(*param_4);
  if (ABS(param_4[1]) <= ABS(*param_4)) {
    dVar1 = ABS(param_4[1]);
  }
  if (ABS(param_4[2]) <= dVar1) {
    dVar1 = ABS(param_4[2]);
  }
  fVar21 = (float)dVar1;
  local_1b0 = (double)(*(float *)(param_1 + 0x48) * fVar21);
  uVar16 = (ulonglong)(param_5 >> 0xe & 0x3fc);
  local_178 = *(undefined4 *)((longlong)&DAT_14c758c60 + uVar16);
  uVar15 = param_5 >> 8 & 0xff;
  local_174 = (&DAT_14c758c60)[uVar15];
  uVar14 = param_5 & 0xff;
  local_170 = (&DAT_14c758c60)[uVar14];
  fVar22 = (float)(param_5 >> 0x18) * 0.003921569;
  local_188 = 0;
  local_190 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_1a8 = 0x20;
  local_1b8 = &local_178;
  local_16c = fVar22;
  FUN_147cb7c40(param_2,&local_108,local_128,local_148);
  local_1b0 = (double)(*(float *)(param_1 + 0x48) * fVar21);
  local_178 = *(undefined4 *)((longlong)&DAT_14c758c60 + uVar16);
  local_174 = (&DAT_14c758c60)[uVar15];
  local_170 = (&DAT_14c758c60)[uVar14];
  local_188 = 0;
  local_190 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_1a8 = 0x20;
  local_1b8 = &local_178;
  local_16c = fVar22;
  FUN_147cb7c40(param_2,&local_108,local_128,local_168);
  local_1b0 = (double)(fVar21 * *(float *)(param_1 + 0x48));
  local_178 = *(undefined4 *)((longlong)&DAT_14c758c60 + uVar16);
  local_174 = (&DAT_14c758c60)[uVar15];
  local_170 = (&DAT_14c758c60)[uVar14];
  local_188 = 0;
  local_190 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_1a8 = 0x20;
  local_1b8 = &local_178;
  local_16c = fVar22;
  FUN_147cb7c40(param_2,&local_108,local_148,local_168);
  if ((local_f0 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c6f32a FUN_147c6f32a body=87 status=ok
// SIG undefined FUN_147c6f32a(void)

void FUN_147c6f32a(void)

{
  float in_XMM3_Da;
  undefined8 in_stack_00000028;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  double local_20;
  double local_18;
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (double)in_XMM3_Da;
  local_28 = in_stack_00000028;
  local_18 = local_20;
  local_10 = local_20;
  FUN_147c6f382();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c6f382 FUN_147c6f382 body=218 status=ok
// SIG undefined FUN_147c6f382(void)

void FUN_147c6f382(longlong param_1,undefined8 param_2,longlong param_3,double *param_4,
                  undefined8 param_5)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined1 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  double local_20;
  double local_18;
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = ABS(*param_4);
  if (ABS(param_4[1]) <= ABS(*param_4)) {
    local_20 = ABS(param_4[1]);
  }
  if (ABS(param_4[2]) <= local_20) {
    local_20 = ABS(param_4[2]);
  }
  local_20 = local_20 * (double)*(float *)(param_1 + 0x48);
  local_38 = *(undefined8 *)(param_3 + 0x20);
  uStack_30 = *(undefined8 *)(param_3 + 0x28);
  local_28 = *(undefined8 *)(param_3 + 0x30);
  local_48 = 0;
  local_50 = 0;
  local_58 = param_5;
  local_60 = 0x10;
  local_68 = 0x20;
  local_18 = local_20;
  local_10 = local_20;
  FUN_147cb3c8b(param_2,&local_38,&DAT_14c8464f8);
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c6f45e FUN_147c6f45e body=85 status=ok
// SIG undefined FUN_147c6f45e(void)

void FUN_147c6f45e(void)

{
  float in_XMM3_Da;
  undefined4 in_stack_00000028;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  double local_20;
  double local_18;
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (double)in_XMM3_Da;
  local_28 = in_stack_00000028;
  local_18 = local_20;
  local_10 = local_20;
  FUN_147c6f4b4();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c6f4b4 FUN_147c6f4b4 body=2438 status=ok
// SIG undefined FUN_147c6f4b4(void)

void FUN_147c6f4b4(longlong param_1,longlong *param_2,double *param_3,double *param_4,uint param_5)

{
  double dVar1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double *pdVar10;
  uint uVar11;
  double *pdVar12;
  undefined4 in_XMM2_Dc;
  uint in_XMM2_Dd;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_248 [32];
  undefined1 local_228;
  undefined4 local_220;
  undefined4 local_218;
  undefined1 local_210;
  float local_1fc;
  longlong *local_1f8;
  double *local_1f0;
  ulonglong local_1e8;
  ulonglong local_1e0;
  ulonglong local_1d8;
  uint local_1d0;
  uint local_1cc;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  double local_168;
  undefined1 local_158 [16];
  double local_148;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  float local_12c;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double dStack_108;
  double local_100;
  ulonglong local_f0;
  double dVar2;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_128 = (double)*(float *)(param_1 + 0x60) * *param_4 * 0.5;
  dVar6 = (double)*(float *)(param_1 + 100) * param_4[1] * 0.5;
  local_1a8 = (double)*(float *)(param_1 + 0x68) * param_4[2] * 0.5;
  local_120 = dVar6;
  local_118 = local_1a8;
  uStack_1a0 = 0;
  dVar3 = -local_1a8;
  local_1b8 = -dVar6;
  local_198._8_4_ = in_XMM2_Dc;
  local_198._0_8_ = local_128;
  local_198._12_4_ = in_XMM2_Dd;
  local_1c8._8_4_ = in_XMM2_Dc;
  local_1c8._0_8_ = -local_128;
  local_1c8._12_4_ = in_XMM2_Dd ^ 0x80000000;
  uStack_1b0 = 0x8000000000000000;
  local_110 = -local_128;
  dStack_108 = local_1b8;
  local_100 = dVar3;
  local_1e8 = (ulonglong)(param_5 >> 0x10 & 0xff);
  local_1e0 = (ulonglong)(param_5 >> 8 & 0xff);
  local_1d8 = (ulonglong)(param_5 & 0xff);
  local_1fc = (float)(param_5 >> 0x18) * 0.003921569;
  local_1f8 = param_2;
  local_1f0 = &local_128;
  uVar11 = 1;
  do {
    local_1d0 = uVar11;
    local_188 = *local_1f0;
    uStack_180 = 0;
    pdVar12 = &local_128;
    uVar11 = 1;
    do {
      local_1cc = uVar11;
      local_138 = (&DAT_14c758c60)[local_1e8];
      local_134 = (&DAT_14c758c60)[local_1e0];
      local_130 = (&DAT_14c758c60)[local_1d8];
      dVar4 = local_188 * param_3[8];
      dVar5 = pdVar12[1] * param_3[9];
      dVar14 = dVar3 * param_3[10];
      dVar1 = param_3[3];
      dVar2 = param_3[3];
      dVar8 = *param_3;
      dVar9 = param_3[1];
      dVar16 = param_3[2];
      dVar13 = dVar4 * dVar16 - dVar14 * dVar8;
      dVar7 = dVar5 * dVar8 - dVar4 * dVar9;
      dVar17 = dVar14 * dVar9 - dVar5 * dVar16;
      dVar17 = dVar17 + dVar17;
      dVar13 = dVar13 + dVar13;
      dVar7 = dVar7 + dVar7;
      dVar15 = (dVar16 * dVar17 - dVar8 * dVar7) + dVar2 * dVar13 + dVar5 + param_3[5];
      local_158._8_4_ = SUB84(dVar15,0);
      local_158._0_8_ = (dVar7 * dVar9 - dVar13 * dVar16) + dVar1 * dVar17 + dVar4 + param_3[4];
      local_158._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
      local_148 = dVar7 * dVar1 + dVar14 + (dVar13 * dVar8 - dVar17 * dVar9) + param_3[6];
      dVar13 = param_3[10] * local_1a8;
      dVar7 = dVar4 * dVar16 - dVar8 * dVar13;
      dVar15 = dVar5 * dVar8 - dVar4 * dVar9;
      dVar17 = dVar13 * dVar9 - dVar5 * dVar16;
      dVar17 = dVar17 + dVar17;
      dVar7 = dVar7 + dVar7;
      dVar15 = dVar15 + dVar15;
      local_178._8_8_ = (dVar16 * dVar17 - dVar8 * dVar15) + dVar2 * dVar7 + dVar5 + param_3[5];
      local_178._0_8_ = (dVar15 * dVar9 - dVar7 * dVar16) + dVar1 * dVar17 + dVar4 + param_3[4];
      local_168 = dVar15 * dVar1 + dVar13 + (dVar7 * dVar8 - dVar17 * dVar9) + param_3[6];
      local_210 = 0;
      local_218 = 0;
      local_220 = 0;
      local_228 = 0;
      local_12c = local_1fc;
      (**(code **)(*param_2 + 0x30))(local_1f8,local_178,local_158,&local_138);
      pdVar10 = local_1f0;
      local_138 = (&DAT_14c758c60)[local_1e8];
      local_134 = (&DAT_14c758c60)[local_1e0];
      local_130 = (&DAT_14c758c60)[local_1d8];
      local_12c = local_1fc;
      dVar5 = (double)local_1c8._0_8_ * param_3[8];
      dVar7 = local_1f0[1] * param_3[9];
      dVar4 = pdVar12[2] * param_3[10];
      dVar1 = param_3[3];
      dVar2 = param_3[3];
      dVar13 = *param_3;
      dVar8 = param_3[1];
      dVar9 = param_3[2];
      dVar15 = dVar7 * dVar13 - dVar5 * dVar8;
      dVar16 = dVar4 * dVar8 - dVar7 * dVar9;
      dVar17 = dVar5 * dVar9 - dVar13 * dVar4;
      dVar16 = dVar16 + dVar16;
      dVar17 = dVar17 + dVar17;
      dVar15 = dVar15 + dVar15;
      dVar7 = (dVar9 * dVar16 - dVar13 * dVar15) + dVar2 * dVar17 + dVar7 + param_3[5];
      local_158._8_4_ = SUB84(dVar7,0);
      local_158._0_8_ = (dVar15 * dVar8 - dVar17 * dVar9) + dVar1 * dVar16 + dVar5 + param_3[4];
      local_158._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      local_148 = dVar15 * dVar1 + dVar4 + (dVar17 * dVar13 - dVar16 * dVar8) + param_3[6];
      dVar17 = (double)local_198._0_8_ * param_3[8];
      dVar16 = local_1f0[1] * param_3[9];
      dVar7 = dVar16 * dVar13 - dVar17 * dVar8;
      dVar15 = dVar4 * dVar8 - dVar16 * dVar9;
      dVar5 = dVar17 * dVar9 - dVar13 * dVar4;
      dVar15 = dVar15 + dVar15;
      dVar5 = dVar5 + dVar5;
      dVar7 = dVar7 + dVar7;
      dVar2 = (dVar9 * dVar15 - dVar13 * dVar7) + dVar2 * dVar5 + dVar16 + param_3[5];
      local_178._8_4_ = SUB84(dVar2,0);
      local_178._0_8_ = (dVar7 * dVar8 - dVar5 * dVar9) + dVar1 * dVar15 + dVar17 + param_3[4];
      local_178._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      local_168 = dVar7 * dVar1 + dVar4 + (dVar5 * dVar13 - dVar15 * dVar8) + param_3[6];
      local_210 = 0;
      local_218 = 0;
      local_220 = 0;
      local_228 = 0;
      (**(code **)(*local_1f8 + 0x30))(local_1f8,local_178,local_158,&local_138);
      param_2 = local_1f8;
      local_138 = (&DAT_14c758c60)[local_1e8];
      local_134 = (&DAT_14c758c60)[local_1e0];
      local_130 = (&DAT_14c758c60)[local_1d8];
      local_12c = local_1fc;
      dVar4 = pdVar10[2] * param_3[10];
      dVar5 = *pdVar12 * param_3[8];
      dVar7 = local_1b8 * param_3[9];
      dVar1 = param_3[3];
      dVar2 = param_3[3];
      dVar13 = *param_3;
      dVar8 = param_3[1];
      dVar9 = param_3[2];
      dVar15 = dVar7 * dVar13 - dVar5 * dVar8;
      dVar16 = dVar4 * dVar8 - dVar7 * dVar9;
      dVar17 = dVar5 * dVar9 - dVar13 * dVar4;
      dVar16 = dVar16 + dVar16;
      dVar17 = dVar17 + dVar17;
      dVar15 = dVar15 + dVar15;
      dVar7 = (dVar9 * dVar16 - dVar13 * dVar15) + dVar2 * dVar17 + dVar7 + param_3[5];
      local_158._8_4_ = SUB84(dVar7,0);
      local_158._0_8_ = (dVar15 * dVar8 - dVar17 * dVar9) + dVar1 * dVar16 + dVar5 + param_3[4];
      local_158._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      local_148 = dVar15 * dVar1 + dVar4 + (dVar17 * dVar13 - dVar16 * dVar8) + param_3[6];
      dVar17 = *pdVar12 * param_3[8];
      dVar16 = dVar6 * param_3[9];
      dVar7 = dVar16 * dVar13 - dVar17 * dVar8;
      dVar15 = dVar4 * dVar8 - dVar16 * dVar9;
      dVar5 = dVar17 * dVar9 - dVar13 * dVar4;
      dVar15 = dVar15 + dVar15;
      dVar5 = dVar5 + dVar5;
      dVar7 = dVar7 + dVar7;
      dVar2 = (dVar9 * dVar15 - dVar13 * dVar7) + dVar2 * dVar5 + dVar16 + param_3[5];
      local_178._8_4_ = SUB84(dVar2,0);
      local_178._0_8_ = (dVar7 * dVar8 - dVar5 * dVar9) + dVar1 * dVar15 + dVar17 + param_3[4];
      local_178._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      local_168 = dVar7 * dVar1 + dVar4 + (dVar5 * dVar13 - dVar15 * dVar8) + param_3[6];
      local_210 = 0;
      local_218 = 0;
      local_220 = 0;
      local_228 = 0;
      (**(code **)(*local_1f8 + 0x30))(local_1f8,local_178,local_158,&local_138);
      pdVar12 = &local_110;
      uVar11 = 0;
    } while ((local_1cc & 1) != 0);
    local_1f0 = pdVar12;
  } while ((local_1d0 & 1) != 0);
  if ((local_f0 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c6fe3c FUN_147c6fe3c body=87 status=ok
// SIG undefined FUN_147c6fe3c(void)

void FUN_147c6fe3c(void)

{
  float in_XMM3_Da;
  undefined8 in_stack_00000028;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  double local_20;
  double local_18;
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (double)in_XMM3_Da;
  local_28 = in_stack_00000028;
  local_18 = local_20;
  local_10 = local_20;
  FUN_147c6fe94();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c6fe94 FUN_147c6fe94 body=560 status=ok
// SIG undefined FUN_147c6fe94(void)

void FUN_147c6fe94(longlong param_1,undefined8 param_2,double *param_3,double *param_4,
                  undefined8 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  undefined8 uStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  undefined8 uStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_f0 = (double)*(float *)(param_1 + 0x68) * param_4[2] * 0.5;
  local_f8 = (double)*(float *)(param_1 + 100) * param_4[1] * 0.5;
  local_100 = (double)*(float *)(param_1 + 0x60) * *param_4 * 0.5;
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar1 = param_3[2];
  local_d8 = param_3[8];
  dVar4 = param_3[9];
  dStack_a0 = param_3[10];
  dVar9 = dVar3 + dVar3;
  dVar5 = dVar1 + dVar1;
  dVar8 = dVar2 * (dVar2 + dVar2);
  local_e8 = (1.0 - (dVar1 * dVar5 + dVar3 * dVar9)) * local_d8;
  dVar1 = (1.0 - (dVar1 * dVar5 + dVar8)) * dVar4;
  local_98 = (1.0 - (dVar8 + dVar3 * dVar9)) * dStack_a0;
  dVar8 = param_3[3];
  dVar6 = dVar5 * dVar8;
  dVar7 = (dVar2 + dVar2) * param_3[3];
  dVar8 = dVar9 * dVar8;
  dStack_e0 = (dVar9 * dVar2 + dVar6) * local_d8;
  local_b8 = (dVar5 * dVar3 + dVar7) * dVar4;
  local_a8 = (dVar8 + *param_3 * dVar5) * dStack_a0;
  local_d8 = (*param_3 * dVar5 - dVar8) * local_d8;
  dStack_a0 = (dVar5 * dVar3 - dVar7) * dStack_a0;
  uStack_d0 = 0;
  local_c8._8_4_ = SUB84(dVar1,0);
  local_c8._0_8_ = (dVar9 * dVar2 - dVar6) * dVar4;
  local_c8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  uStack_b0 = 0;
  uStack_90 = 0;
  local_88 = param_3[4];
  dStack_80 = param_3[5];
  local_78 = param_3[6];
  uStack_70 = 0x3ff0000000000000;
  local_108 = 0;
  FUN_147cb2f0b(param_2,&local_e8,&local_100,param_5);
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c700c6 FUN_147c700c6 body=576 status=ok
// SIG undefined FUN_147c700c6(void)

void FUN_147c700c6(longlong param_1,double *param_2,double *param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined8 local_110;
  undefined8 local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  undefined8 uStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  undefined8 uStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_f0 = (double)*(float *)(param_1 + 0x68) * param_3[2] * 0.5;
  local_f8 = (double)*(float *)(param_1 + 100) * param_3[1] * 0.5;
  local_100 = (double)*(float *)(param_1 + 0x60) * *param_3 * 0.5;
  dVar2 = *param_2;
  dVar3 = param_2[1];
  dVar1 = param_2[2];
  local_d8 = param_2[8];
  dVar4 = param_2[9];
  dStack_a0 = param_2[10];
  dVar9 = dVar3 + dVar3;
  dVar5 = dVar1 + dVar1;
  dVar8 = dVar2 * (dVar2 + dVar2);
  local_e8 = (1.0 - (dVar1 * dVar5 + dVar3 * dVar9)) * local_d8;
  dVar1 = (1.0 - (dVar1 * dVar5 + dVar8)) * dVar4;
  local_98 = (1.0 - (dVar8 + dVar3 * dVar9)) * dStack_a0;
  dVar8 = param_2[3];
  dVar6 = dVar5 * dVar8;
  dVar7 = (dVar2 + dVar2) * param_2[3];
  dVar8 = dVar9 * dVar8;
  dStack_e0 = (dVar9 * dVar2 + dVar6) * local_d8;
  local_b8 = (dVar5 * dVar3 + dVar7) * dVar4;
  local_a8 = (dVar8 + *param_2 * dVar5) * dStack_a0;
  local_d8 = (*param_2 * dVar5 - dVar8) * local_d8;
  dStack_a0 = (dVar5 * dVar3 - dVar7) * dStack_a0;
  uStack_d0 = 0;
  local_c8._8_4_ = SUB84(dVar1,0);
  local_c8._0_8_ = (dVar9 * dVar2 - dVar6) * dVar4;
  local_c8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  uStack_b0 = 0;
  uStack_90 = 0;
  local_88 = param_2[4];
  dStack_80 = param_2[5];
  local_78 = param_2[6];
  uStack_70 = 0x3ff0000000000000;
  local_110 = param_6;
  local_118 = param_5;
  local_108 = 0;
  FUN_147cb2ad9(&local_e8,&local_100,param_4,0);
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c70308 FUN_147c70308 body=85 status=ok
// SIG undefined FUN_147c70308(void)

void FUN_147c70308(void)

{
  float in_XMM3_Da;
  undefined4 in_stack_00000028;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  double local_20;
  double local_18;
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (double)in_XMM3_Da;
  local_28 = in_stack_00000028;
  local_18 = local_20;
  local_10 = local_20;
  FUN_147c7035e();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c7035e FUN_147c7035e body=2562 status=ok
// SIG undefined FUN_147c7035e(void)

void FUN_147c7035e(undefined8 param_1,longlong *param_2,double *param_3,undefined8 param_4,
                  uint param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  uint uVar22;
  undefined1 auStack_248 [32];
  undefined1 *local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined1 local_210;
  undefined4 local_208;
  undefined4 local_200;
  undefined1 local_1f8;
  ulonglong local_1e8;
  ulonglong local_1e0;
  ulonglong local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  float local_194;
  undefined1 local_190 [16];
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  undefined1 local_148 [16];
  double local_138;
  undefined1 local_128 [16];
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  dVar7 = *param_3;
  dVar8 = param_3[1];
  dVar9 = param_3[2];
  dVar17 = param_3[8];
  dVar18 = param_3[9];
  dVar20 = dVar17 * 1.0;
  dVar21 = dVar18 * 0.0;
  dVar15 = param_3[10] * 0.0;
  dVar1 = param_3[3];
  dVar16 = param_3[3];
  dVar4 = dVar21 * dVar7 - dVar20 * dVar8;
  dVar5 = dVar15 * dVar8 - dVar21 * dVar9;
  dVar19 = dVar20 * dVar9 - dVar15 * dVar7;
  dVar5 = dVar5 + dVar5;
  dVar19 = dVar19 + dVar19;
  dVar4 = dVar4 + dVar4;
  dVar2 = param_3[6];
  local_f8 = dVar4 * dVar1 + dVar15 + (dVar19 * dVar7 - dVar5 * dVar8);
  dVar3 = param_3[4];
  local_108 = (dVar4 * dVar8 - dVar19 * dVar9) + dVar1 * dVar5 + dVar20;
  dStack_100 = (dVar9 * dVar5 - dVar7 * dVar4) + dVar16 * dVar19 + dVar21;
  dVar4 = param_3[5];
  dVar21 = dVar17 * 0.0;
  dVar6 = dVar18 * 1.0;
  dVar5 = dVar6 * dVar7 - dVar21 * dVar8;
  dVar19 = dVar15 * dVar8 - dVar6 * dVar9;
  dVar20 = dVar21 * dVar9 - dVar15 * dVar7;
  dVar19 = dVar19 + dVar19;
  dVar20 = dVar20 + dVar20;
  dVar5 = dVar5 + dVar5;
  local_118 = dVar5 * dVar1 + dVar15 + (dVar20 * dVar7 - dVar19 * dVar8);
  dVar15 = (dVar9 * dVar19 - dVar7 * dVar5) + dVar16 * dVar20 + dVar6;
  local_128._8_4_ = SUB84(dVar15,0);
  local_128._0_8_ = (dVar5 * dVar8 - dVar20 * dVar9) + dVar1 * dVar19 + dVar21;
  local_128._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  dVar17 = dVar17 * 0.0;
  dVar18 = dVar18 * 0.0;
  dVar21 = param_3[10] * 1.0;
  dVar5 = dVar18 * dVar7 - dVar17 * dVar8;
  dVar19 = dVar21 * dVar8 - dVar18 * dVar9;
  dVar15 = dVar17 * dVar9 - dVar7 * dVar21;
  dVar19 = dVar19 + dVar19;
  dVar20 = dVar15 + dVar15;
  dVar5 = dVar5 + dVar5;
  dVar21 = dVar5 * dVar1 + dVar21 + (dVar20 * dVar7 - dVar19 * dVar8);
  dVar1 = (dVar5 * dVar8 - dVar20 * dVar9) + dVar1 * dVar19 + dVar17;
  dVar5 = (dVar9 * dVar19 - dVar7 * dVar5) + dVar16 * dVar20 + dVar18;
  uVar22 = (uint)((ulonglong)dVar5 >> 0x20);
  local_148._8_4_ = SUB84(dVar5,0);
  local_148._0_8_ = dVar1;
  local_148._12_4_ = uVar22;
  local_138 = dVar21;
  fVar13 = (float)FUN_147c4b1b2(dVar15,param_4);
  fVar14 = (float)FUN_147c4b146(param_1,param_4);
  dVar16 = (double)(fVar13 * 0.5);
  local_150 = dVar2 + dVar21 * dVar16;
  local_158 = dVar4 + dVar5 * dVar16;
  local_160 = dVar3 + dVar16 * dVar1;
  local_168 = dVar2 - dVar21 * dVar16;
  local_170 = dVar4 - dVar5 * dVar16;
  local_178 = dVar3 - dVar16 * dVar1;
  dVar16 = (double)fVar14;
  uVar10 = (ulonglong)(param_5 >> 0xe & 0x3fc);
  uVar11 = (ulonglong)(param_5 >> 8 & 0xff);
  local_190._4_4_ = (&DAT_14c758c60)[uVar11];
  local_190._0_4_ = *(undefined4 *)((longlong)&DAT_14c758c60 + uVar10);
  uVar12 = (ulonglong)(param_5 & 0xff);
  local_190._8_4_ = (&DAT_14c758c60)[uVar12];
  fVar13 = (float)(param_5 >> 0x18) * 0.003921569;
  local_190._12_4_ = fVar13;
  local_1f8 = 0;
  local_200 = 0;
  local_208 = 0;
  local_210 = 0;
  local_218 = 0x20;
  local_228 = local_190;
  local_220 = dVar16;
  local_1e8 = uVar11;
  local_1e0 = uVar12;
  FUN_147cb7c40(param_2,&local_160,&local_108,local_128);
  local_190._4_4_ = (&DAT_14c758c60)[uVar11];
  local_190._0_4_ = *(undefined4 *)((longlong)&DAT_14c758c60 + uVar10);
  local_190._8_4_ = (&DAT_14c758c60)[uVar12];
  local_1f8 = 0;
  local_200 = 0;
  local_208 = 0;
  local_210 = 0;
  local_218 = 0x20;
  local_228 = local_190;
  local_220 = dVar16;
  local_1d8 = uVar10;
  FUN_147cb7c40(param_2,&local_178,&local_108,local_128);
  local_228._0_4_ = param_5;
  local_220._0_4_ = fVar14;
  FUN_143634129(param_2,&local_160,local_128,local_148);
  local_228._0_4_ = param_5;
  local_220._0_4_ = fVar14;
  FUN_143634129(param_2,&local_160,&local_108,local_148);
  local_180 = -dVar21;
  local_190._8_4_ = SUB84(dVar5,0);
  local_190._0_8_ = -dVar1;
  local_190._12_4_ = uVar22 ^ 0x80000000;
  local_228._0_4_ = param_5;
  local_220._0_4_ = fVar14;
  FUN_143634129(param_2,&local_178,local_128,local_190);
  local_228 = (undefined1 *)CONCAT44(local_228._4_4_,param_5);
  local_220._0_4_ = fVar14;
  FUN_143634129(param_2,&local_178,&local_108,local_190);
  uVar12 = local_1e0;
  uVar11 = local_1e8;
  local_1a0 = *(undefined4 *)((longlong)&DAT_14c758c60 + uVar10);
  local_19c = (&DAT_14c758c60)[local_1e8];
  local_198 = (&DAT_14c758c60)[local_1e0];
  local_1a8 = local_168 + local_f8 * dVar16;
  local_1b0 = local_170 + dStack_100 * dVar16;
  local_1b8 = local_178 + local_108 * dVar16;
  local_1c0 = local_f8 * dVar16 + local_150;
  local_1c8 = dStack_100 * dVar16 + local_158;
  local_1d0 = local_108 * dVar16 + local_160;
  local_210 = 0;
  local_218 = 0;
  local_220._0_4_ = 0.0;
  local_228 = (undefined1 *)((ulonglong)local_228 & 0xffffffffffffff00);
  local_194 = fVar13;
  (**(code **)(*param_2 + 0x30))(param_2,&local_1d0,&local_1b8,&local_1a0);
  local_1a0 = *(undefined4 *)((longlong)&DAT_14c758c60 + local_1d8);
  local_19c = (&DAT_14c758c60)[uVar11];
  local_198 = (&DAT_14c758c60)[uVar12];
  local_1a8 = local_168 - local_f8 * dVar16;
  local_1b0 = local_170 - dStack_100 * dVar16;
  local_1b8 = local_178 - local_108 * dVar16;
  local_1c0 = local_150 - local_f8 * dVar16;
  local_1c8 = local_158 - dStack_100 * dVar16;
  local_1d0 = local_160 - local_108 * dVar16;
  local_210 = 0;
  local_218 = 0;
  local_220._0_4_ = 0.0;
  local_228 = (undefined1 *)((ulonglong)local_228 & 0xffffffffffffff00);
  local_194 = fVar13;
  (**(code **)(*param_2 + 0x30))(param_2,&local_1d0,&local_1b8,&local_1a0);
  uVar10 = local_1d8;
  local_1a0 = *(undefined4 *)((longlong)&DAT_14c758c60 + local_1d8);
  local_19c = (&DAT_14c758c60)[uVar11];
  local_198 = (&DAT_14c758c60)[uVar12];
  local_1a8 = local_168 + local_118 * dVar16;
  local_1b0 = local_170 + (double)local_128._8_8_ * dVar16;
  local_1b8 = local_178 + (double)local_128._0_8_ * dVar16;
  local_1c0 = local_118 * dVar16 + local_150;
  local_1c8 = (double)local_128._8_8_ * dVar16 + local_158;
  local_1d0 = (double)local_128._0_8_ * dVar16 + local_160;
  local_210 = 0;
  local_218 = 0;
  local_220._0_4_ = 0.0;
  local_228 = (undefined1 *)((ulonglong)local_228 & 0xffffffffffffff00);
  local_194 = fVar13;
  (**(code **)(*param_2 + 0x30))(param_2,&local_1d0,&local_1b8,&local_1a0);
  local_1a0 = *(undefined4 *)((longlong)&DAT_14c758c60 + uVar10);
  local_19c = (&DAT_14c758c60)[local_1e8];
  local_198 = (&DAT_14c758c60)[local_1e0];
  local_1a8 = local_168 - local_118 * dVar16;
  local_1b0 = local_170 - (double)local_128._8_8_ * dVar16;
  local_1b8 = local_178 - dVar16 * (double)local_128._0_8_;
  local_1c0 = local_150 - local_118 * dVar16;
  local_1c8 = local_158 - (double)local_128._8_8_ * dVar16;
  local_1d0 = local_160 - dVar16 * (double)local_128._0_8_;
  local_210 = 0;
  local_218 = 0;
  local_220 = (double)((ulonglong)local_220._4_4_ << 0x20);
  local_228 = (undefined1 *)((ulonglong)local_228 & 0xffffffffffffff00);
  local_194 = fVar13;
  (**(code **)(*param_2 + 0x30))(param_2,&local_1d0,&local_1b8,&local_1a0);
  if ((local_f0 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c70d62 FUN_147c70d62 body=87 status=ok
// SIG undefined FUN_147c70d62(void)

void FUN_147c70d62(void)

{
  float in_XMM3_Da;
  undefined8 in_stack_00000028;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  double local_20;
  double local_18;
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (double)in_XMM3_Da;
  local_28 = in_stack_00000028;
  local_18 = local_20;
  local_10 = local_20;
  FUN_147c70dba();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c70dba FUN_147c70dba body=2025 status=ok
// SIG undefined FUN_147c70dba(void)

void FUN_147c70dba(longlong param_1,longlong param_2,double *param_3,double *param_4,
                  undefined8 param_5)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  float fVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar33;
  float fVar34;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auStack_228 [32];
  undefined1 local_208;
  ulonglong local_200;
  undefined1 local_1f8;
  undefined4 local_1f0;
  longlong local_1e0;
  longlong local_1d8;
  double *local_1d0;
  undefined4 local_1c8;
  float local_1c4;
  float local_1c0;
  undefined4 uStack_1bc;
  longlong local_1b8;
  float local_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 uStack_188;
  undefined4 local_184;
  undefined4 uStack_180;
  undefined4 local_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158 [8];
  float fStack_150;
  float fStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  dVar24 = ABS(*param_4);
  if (ABS(*param_4) <= ABS(param_4[1])) {
    dVar24 = ABS(param_4[1]);
  }
  dVar1 = param_4[2];
  local_1d8 = param_2;
  local_1d0 = param_3;
  local_1e0 = FUN_14001cc68(0xcc30,0);
  puVar13 = (undefined4 *)FUN_14001cc68(0x630,0);
  uVar21 = 0;
  puVar15 = puVar13;
  do {
    dVar2 = (double)(&DAT_14aa1ecb0)[8 < uVar21];
    fVar39 = *(float *)(param_1 + 100);
    fVar38 = (float)(int)((int)uVar21 - (uint)(8 < uVar21)) * 0.0625 * 3.1415927;
    fVar40 = *(float *)(param_1 + 0x60);
    fVar23 = sinf(fVar38);
    fVar23 = fVar23 * fVar40 * (float)dVar24;
    fVar40 = *(float *)(param_1 + 0x60);
    uStack_170._0_4_ = cosf(fVar38);
    uStack_170._0_4_ = (float)uStack_170 * fVar40 * (float)dVar24;
    *puVar15 = 0;
    puVar15[1] = fVar23 + 0.0;
    puVar15[2] = (float)((double)fVar39 * dVar2 * (double)ABS((float)dVar1)) + (float)uStack_170;
    uStack_178._0_4_ = 0.0;
    local_1c4 = -(float)uStack_170;
    local_1c8 = 0;
    local_184 = 0x3f800000;
    uStack_180 = 0;
    local_17c = 0;
    local_1c0 = fVar23;
    uStack_178._4_4_ = fVar23;
    FUN_147c71d8a(puVar15,&local_184,&local_1c8,&uStack_178);
    puVar15[3] = 0;
    puVar15[4] = (float)(int)uVar21 / 17.0;
    uVar21 = uVar21 + 1;
    puVar15 = puVar15 + 0x16;
  } while (uVar21 != 0x12);
  lVar17 = 0;
  lVar22 = local_1e0;
  do {
    fVar39 = (float)(int)lVar17 * 0.03125;
    local_1c4 = fVar39 * 360.0;
    local_1c8 = 0;
    local_1c0 = 0.0;
    FUN_1413df99e(&uStack_178,&local_1c8);
    lVar19 = 0;
    do {
      fVar12 = (float)uStack_178;
      fVar40 = *(float *)((longlong)puVar13 + lVar19);
      fVar23 = *(float *)((longlong)puVar13 + lVar19 + 4);
      fVar38 = *(float *)((longlong)puVar13 + lVar19 + 8);
      auVar28._0_4_ = fVar40 * (float)uStack_178;
      auVar28._4_4_ = fVar40 * uStack_178._4_4_;
      auVar28._8_4_ = fVar40 * (float)uStack_170;
      auVar28._12_4_ = fVar40 * uStack_170._4_4_;
      fVar40 = fVar38 * (float)local_158._0_4_ + fVar23 * (float)local_168 + auVar28._0_4_ +
               (float)local_148;
      fVar41 = fVar38 * (float)local_158._4_4_ + fVar23 * local_168._4_4_ + auVar28._4_4_ +
               local_148._4_4_;
      fVar42 = fVar38 * fStack_150 + fVar23 * (float)uStack_160 + auVar28._8_4_ + (float)uStack_140;
      fVar23 = fVar38 * fStack_14c + fVar23 * uStack_160._4_4_ + auVar28._12_4_ + uStack_140._4_4_;
      *(float *)(lVar22 + lVar19) = fVar40;
      auVar7._4_4_ = fVar41;
      auVar7._0_4_ = fVar40;
      auVar7._8_4_ = fVar42;
      auVar7._12_4_ = fVar23;
      uVar3 = extractps(auVar7,1);
      *(undefined8 *)(lVar22 + 4 + lVar19) = uVar3;
      auVar8._4_4_ = fVar41;
      auVar8._0_4_ = fVar40;
      auVar8._8_4_ = fVar42;
      auVar8._12_4_ = fVar23;
      uVar3 = extractps(auVar8,2);
      *(undefined8 *)(lVar22 + 8 + lVar19) = uVar3;
      auVar29 = pmovsxbd(auVar28,*(undefined4 *)((longlong)puVar13 + lVar19 + 0x50));
      fVar40 = (float)auVar29._0_4_ * 0.007874016;
      fVar23 = (float)auVar29._4_4_ * 0.007874016;
      fVar38 = (float)auVar29._8_4_ * 0.007874016;
      fVar41 = (float)local_148 * 0.0;
      fVar42 = local_148._4_4_ * 0.0;
      fVar25 = (float)uStack_140 * 0.0;
      fVar26 = uStack_140._4_4_ * 0.0;
      auVar30._0_4_ =
           fVar38 * (float)local_158._0_4_ + fVar23 * (float)local_168 + fVar40 * (float)uStack_178
           + fVar41;
      auVar30._4_4_ =
           fVar38 * (float)local_158._4_4_ + fVar23 * local_168._4_4_ + fVar40 * uStack_178._4_4_ +
           fVar42;
      auVar30._8_4_ =
           fVar38 * fStack_150 + fVar23 * (float)uStack_160 + fVar40 * (float)uStack_170 + fVar25;
      auVar30._12_4_ =
           fVar38 * fStack_14c + fVar23 * uStack_160._4_4_ + fVar40 * uStack_170._4_4_ + fVar26;
      uVar3 = extractps(auVar30,1);
      uStack_180 = (undefined4)uVar3;
      uVar3 = extractps(auVar30,2);
      local_17c = (undefined4)uVar3;
      uStack_178._0_4_ = (float)((ulonglong)uVar3 >> 0x20);
      auVar31 = pmovsxbd(auVar30,*(undefined4 *)((longlong)puVar13 + lVar19 + 0x4c));
      fVar27 = (float)auVar31._0_4_ * 0.007874016;
      fVar33 = (float)auVar31._4_4_ * 0.007874016;
      fVar34 = (float)auVar31._8_4_ * 0.007874016;
      fVar35 = (float)auVar29._0_4_ * 0.007874016;
      fVar36 = (float)auVar29._4_4_ * 0.007874016;
      fVar23 = (float)auVar29._8_4_ * 0.007874016;
      fVar38 = (float)auVar29._12_4_ * 0.007874016;
      fVar40 = (fVar27 * fVar23 - fVar35 * fVar34) * fVar38;
      fVar23 = (fVar36 * fVar34 - fVar23 * fVar33) * fVar38;
      fVar38 = (fVar35 * fVar33 - fVar36 * fVar27) * fVar38;
      fVar35 = fVar38 * (float)local_158._0_4_ + fVar40 * (float)local_168 + fVar23 * fVar12 +
               fVar41;
      fVar36 = fVar38 * (float)local_158._4_4_ +
               fVar40 * local_168._4_4_ + fVar23 * uStack_178._4_4_ + fVar42;
      fVar37 = fVar38 * fStack_150 + fVar40 * (float)uStack_160 + fVar23 * (float)uStack_170 +
               fVar25;
      fVar40 = fVar38 * fStack_14c + fVar40 * uStack_160._4_4_ + fVar23 * uStack_170._4_4_ + fVar26;
      auVar29._4_4_ = fVar36;
      auVar29._0_4_ = fVar35;
      auVar29._8_4_ = fVar37;
      auVar29._12_4_ = fVar40;
      uVar3 = extractps(auVar29,1);
      local_18c = (undefined4)uVar3;
      auVar31._4_4_ = fVar36;
      auVar31._0_4_ = fVar35;
      auVar31._8_4_ = fVar37;
      auVar31._12_4_ = fVar40;
      uVar3 = extractps(auVar31,2);
      uStack_188 = (undefined4)uVar3;
      local_184 = (undefined4)((ulonglong)uVar3 >> 0x20);
      auVar32._0_4_ =
           fVar34 * (float)local_158._0_4_ + fVar33 * (float)local_168 + fVar27 * fVar12 + fVar41;
      auVar32._4_4_ =
           fVar34 * (float)local_158._4_4_ + fVar33 * local_168._4_4_ + fVar27 * uStack_178._4_4_ +
           fVar42;
      auVar32._8_4_ =
           fVar34 * fStack_150 + fVar33 * (float)uStack_160 + fVar27 * (float)uStack_170 + fVar25;
      auVar32._12_4_ =
           fVar34 * fStack_14c + fVar33 * uStack_160._4_4_ + fVar27 * uStack_170._4_4_ + fVar26;
      uVar3 = extractps(auVar32,1);
      local_198 = (undefined4)uVar3;
      uVar3 = extractps(auVar32,2);
      uStack_194 = (undefined4)uVar3;
      local_190 = (undefined4)((ulonglong)uVar3 >> 0x20);
      local_19c = auVar32._0_4_;
      FUN_147c71d8a(lVar22 + lVar19,&local_19c,&local_190,&local_184);
      *(float *)(lVar22 + 0xc + lVar19) = fVar39;
      *(undefined4 *)(lVar22 + 0x10 + lVar19) = *(undefined4 *)((longlong)puVar13 + lVar19 + 0x10);
      lVar19 = lVar19 + 0x58;
    } while (lVar19 != 0x630);
    lVar17 = lVar17 + 1;
    lVar22 = lVar22 + 0x630;
  } while (lVar17 != 0x21);
  local_200 = 0;
  local_208 = 0;
  lVar17 = 0;
  FUN_140d3493e(&local_1c8,*(undefined4 *)(*(longlong *)(local_1d8 + 8) + 0x3090),1,0);
  lVar22 = local_1e0;
  do {
    FUN_147a7d5d8(&local_1c8,lVar22 + lVar17);
    lVar17 = lVar17 + 0x58;
  } while (lVar17 != 0xcc30);
  iVar14 = 0;
  iVar20 = 0x12;
  do {
    iVar14 = iVar14 + 1;
    iVar18 = 0x11;
    iVar16 = iVar20;
    do {
      FUN_140d3489c(&local_1c8,iVar16 + -0x12,iVar16,iVar16 + -0x11);
      FUN_140d3489c(&local_1c8,iVar16,iVar16 + 1,iVar16 + -0x11);
      iVar18 = iVar18 + -1;
      iVar16 = iVar16 + 1;
    } while (iVar18 != 0);
    iVar20 = iVar20 + 0x12;
  } while (iVar14 != 0x20);
  dVar9 = *local_1d0;
  dVar10 = local_1d0[1];
  dVar2 = local_1d0[2];
  local_168 = local_1d0[8];
  dVar11 = local_1d0[9];
  dStack_130 = local_1d0[10];
  dVar5 = dVar10 + dVar10;
  dVar1 = dVar2 + dVar2;
  dVar24 = dVar9 * (dVar9 + dVar9);
  uStack_178 = (1.0 - (dVar2 * dVar1 + dVar10 * dVar5)) * local_168;
  dVar6 = (1.0 - (dVar2 * dVar1 + dVar24)) * dVar11;
  local_128 = (1.0 - (dVar24 + dVar10 * dVar5)) * dStack_130;
  dVar24 = local_1d0[3];
  dVar2 = dVar1 * dVar24;
  dVar4 = (dVar9 + dVar9) * local_1d0[3];
  dVar24 = dVar5 * dVar24;
  uStack_170 = (dVar5 * dVar9 + dVar2) * local_168;
  local_148 = (dVar1 * dVar10 + dVar4) * dVar11;
  local_138 = (dVar24 + *local_1d0 * dVar1) * dStack_130;
  local_168 = (*local_1d0 * dVar1 - dVar24) * local_168;
  dStack_130 = (dVar1 * dVar10 - dVar4) * dStack_130;
  uStack_160 = 0;
  fStack_150 = (float)SUB84(dVar6,0);
  local_158 = (dVar5 * dVar9 - dVar2) * dVar11;
  fStack_14c = (float)(int)((ulonglong)dVar6 >> 0x20);
  uStack_140 = 0;
  uStack_120 = 0;
  local_118 = local_1d0[4];
  dStack_110 = local_1d0[5];
  local_108 = local_1d0[6];
  uStack_100 = 0x3ff0000000000000;
  local_200 = local_200 & 0xffffffffffffff00;
  local_208 = 0;
  local_1f0 = 0xffffffff;
  local_1f8 = 1;
  FUN_1434d8d42(&local_1c8,local_1d8,&uStack_178,param_5);
  FUN_1400020a8(local_1e0);
  FUN_1400020a8(puVar13);
  if (local_1b8 != 0) {
    (*(code *)**(undefined8 **)(local_1b8 + 8))(local_1b8 + 8,1);
  }
  lVar22 = CONCAT44(uStack_1bc,local_1c0);
  if (lVar22 != 0) {
    (*(code *)**(undefined8 **)(lVar22 + 8))(lVar22 + 8,1);
  }
  if ((local_f0 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c715a4 FUN_147c715a4 body=2020 status=ok
// SIG undefined FUN_147c715a4(void)

void FUN_147c715a4(longlong param_1,double *param_2,double *param_3,undefined8 param_4,
                  undefined4 param_5,longlong param_6)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  undefined4 *puVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined4 *puVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  float fVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar33;
  float fVar34;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auStack_228 [32];
  undefined1 local_208;
  ulonglong local_200;
  undefined4 local_1f8;
  longlong local_1f0;
  longlong local_1e0;
  double *local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  float local_1c4;
  float local_1c0;
  undefined4 uStack_1bc;
  longlong local_1b8;
  float local_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 uStack_188;
  undefined4 local_184;
  undefined4 uStack_180;
  undefined4 local_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158 [8];
  float fStack_150;
  float fStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  dVar24 = ABS(*param_3);
  if (ABS(*param_3) <= ABS(param_3[1])) {
    dVar24 = ABS(param_3[1]);
  }
  dVar1 = param_3[2];
  local_1d8 = param_2;
  local_1d0 = param_4;
  local_1e0 = FUN_14001cc68(0xcc30,0);
  puVar14 = (undefined4 *)FUN_14001cc68(0x630,0);
  uVar16 = 0;
  puVar18 = puVar14;
  do {
    dVar2 = (double)(&DAT_14aa1ecb0)[8 < uVar16];
    fVar39 = *(float *)(param_1 + 100);
    fVar38 = (float)(int)((int)uVar16 - (uint)(8 < uVar16)) * 0.0625 * 3.1415927;
    fVar40 = *(float *)(param_1 + 0x60);
    fVar23 = sinf(fVar38);
    fVar23 = fVar23 * fVar40 * (float)dVar24;
    fVar40 = *(float *)(param_1 + 0x60);
    uStack_170._0_4_ = cosf(fVar38);
    uStack_170._0_4_ = (float)uStack_170 * fVar40 * (float)dVar24;
    *puVar18 = 0;
    puVar18[1] = fVar23 + 0.0;
    puVar18[2] = (float)((double)fVar39 * dVar2 * (double)ABS((float)dVar1)) + (float)uStack_170;
    uStack_178._0_4_ = 0.0;
    local_1c4 = -(float)uStack_170;
    local_1c8 = 0;
    local_184 = 0x3f800000;
    uStack_180 = 0;
    local_17c = 0;
    local_1c0 = fVar23;
    uStack_178._4_4_ = fVar23;
    FUN_147c71d8a(puVar18,&local_184,&local_1c8,&uStack_178);
    puVar18[3] = 0;
    puVar18[4] = (float)(int)uVar16 / 17.0;
    uVar16 = uVar16 + 1;
    puVar18 = puVar18 + 0x16;
  } while (uVar16 != 0x12);
  lVar22 = 0;
  lVar17 = local_1e0;
  do {
    fVar39 = (float)(int)lVar22 * 0.03125;
    local_1c4 = fVar39 * 360.0;
    local_1c8 = 0;
    local_1c0 = 0.0;
    FUN_1413df99e(&uStack_178,&local_1c8);
    lVar20 = 0;
    do {
      fVar13 = (float)uStack_178;
      fVar40 = *(float *)((longlong)puVar14 + lVar20);
      fVar23 = *(float *)((longlong)puVar14 + lVar20 + 4);
      fVar38 = *(float *)((longlong)puVar14 + lVar20 + 8);
      auVar28._0_4_ = fVar40 * (float)uStack_178;
      auVar28._4_4_ = fVar40 * uStack_178._4_4_;
      auVar28._8_4_ = fVar40 * (float)uStack_170;
      auVar28._12_4_ = fVar40 * uStack_170._4_4_;
      fVar40 = fVar38 * (float)local_158._0_4_ + fVar23 * (float)local_168 + auVar28._0_4_ +
               (float)local_148;
      fVar41 = fVar38 * (float)local_158._4_4_ + fVar23 * local_168._4_4_ + auVar28._4_4_ +
               local_148._4_4_;
      fVar42 = fVar38 * fStack_150 + fVar23 * (float)uStack_160 + auVar28._8_4_ + (float)uStack_140;
      fVar23 = fVar38 * fStack_14c + fVar23 * uStack_160._4_4_ + auVar28._12_4_ + uStack_140._4_4_;
      *(float *)(lVar17 + lVar20) = fVar40;
      auVar7._4_4_ = fVar41;
      auVar7._0_4_ = fVar40;
      auVar7._8_4_ = fVar42;
      auVar7._12_4_ = fVar23;
      uVar3 = extractps(auVar7,1);
      *(undefined8 *)(lVar17 + 4 + lVar20) = uVar3;
      auVar8._4_4_ = fVar41;
      auVar8._0_4_ = fVar40;
      auVar8._8_4_ = fVar42;
      auVar8._12_4_ = fVar23;
      uVar3 = extractps(auVar8,2);
      *(undefined8 *)(lVar17 + 8 + lVar20) = uVar3;
      auVar29 = pmovsxbd(auVar28,*(undefined4 *)((longlong)puVar14 + lVar20 + 0x50));
      fVar40 = (float)auVar29._0_4_ * 0.007874016;
      fVar23 = (float)auVar29._4_4_ * 0.007874016;
      fVar38 = (float)auVar29._8_4_ * 0.007874016;
      fVar41 = (float)local_148 * 0.0;
      fVar42 = local_148._4_4_ * 0.0;
      fVar25 = (float)uStack_140 * 0.0;
      fVar26 = uStack_140._4_4_ * 0.0;
      auVar30._0_4_ =
           fVar38 * (float)local_158._0_4_ + fVar23 * (float)local_168 + fVar40 * (float)uStack_178
           + fVar41;
      auVar30._4_4_ =
           fVar38 * (float)local_158._4_4_ + fVar23 * local_168._4_4_ + fVar40 * uStack_178._4_4_ +
           fVar42;
      auVar30._8_4_ =
           fVar38 * fStack_150 + fVar23 * (float)uStack_160 + fVar40 * (float)uStack_170 + fVar25;
      auVar30._12_4_ =
           fVar38 * fStack_14c + fVar23 * uStack_160._4_4_ + fVar40 * uStack_170._4_4_ + fVar26;
      uVar3 = extractps(auVar30,1);
      uStack_180 = (undefined4)uVar3;
      uVar3 = extractps(auVar30,2);
      local_17c = (undefined4)uVar3;
      uStack_178._0_4_ = (float)((ulonglong)uVar3 >> 0x20);
      auVar31 = pmovsxbd(auVar30,*(undefined4 *)((longlong)puVar14 + lVar20 + 0x4c));
      fVar27 = (float)auVar31._0_4_ * 0.007874016;
      fVar33 = (float)auVar31._4_4_ * 0.007874016;
      fVar34 = (float)auVar31._8_4_ * 0.007874016;
      fVar35 = (float)auVar29._0_4_ * 0.007874016;
      fVar36 = (float)auVar29._4_4_ * 0.007874016;
      fVar23 = (float)auVar29._8_4_ * 0.007874016;
      fVar38 = (float)auVar29._12_4_ * 0.007874016;
      fVar40 = (fVar27 * fVar23 - fVar35 * fVar34) * fVar38;
      fVar23 = (fVar36 * fVar34 - fVar23 * fVar33) * fVar38;
      fVar38 = (fVar35 * fVar33 - fVar36 * fVar27) * fVar38;
      fVar35 = fVar38 * (float)local_158._0_4_ + fVar40 * (float)local_168 + fVar23 * fVar13 +
               fVar41;
      fVar36 = fVar38 * (float)local_158._4_4_ +
               fVar40 * local_168._4_4_ + fVar23 * uStack_178._4_4_ + fVar42;
      fVar37 = fVar38 * fStack_150 + fVar40 * (float)uStack_160 + fVar23 * (float)uStack_170 +
               fVar25;
      fVar40 = fVar38 * fStack_14c + fVar40 * uStack_160._4_4_ + fVar23 * uStack_170._4_4_ + fVar26;
      auVar29._4_4_ = fVar36;
      auVar29._0_4_ = fVar35;
      auVar29._8_4_ = fVar37;
      auVar29._12_4_ = fVar40;
      uVar3 = extractps(auVar29,1);
      local_18c = (undefined4)uVar3;
      auVar31._4_4_ = fVar36;
      auVar31._0_4_ = fVar35;
      auVar31._8_4_ = fVar37;
      auVar31._12_4_ = fVar40;
      uVar3 = extractps(auVar31,2);
      uStack_188 = (undefined4)uVar3;
      local_184 = (undefined4)((ulonglong)uVar3 >> 0x20);
      auVar32._0_4_ =
           fVar34 * (float)local_158._0_4_ + fVar33 * (float)local_168 + fVar27 * fVar13 + fVar41;
      auVar32._4_4_ =
           fVar34 * (float)local_158._4_4_ + fVar33 * local_168._4_4_ + fVar27 * uStack_178._4_4_ +
           fVar42;
      auVar32._8_4_ =
           fVar34 * fStack_150 + fVar33 * (float)uStack_160 + fVar27 * (float)uStack_170 + fVar25;
      auVar32._12_4_ =
           fVar34 * fStack_14c + fVar33 * uStack_160._4_4_ + fVar27 * uStack_170._4_4_ + fVar26;
      uVar3 = extractps(auVar32,1);
      local_198 = (undefined4)uVar3;
      uVar3 = extractps(auVar32,2);
      uStack_194 = (undefined4)uVar3;
      local_190 = (undefined4)((ulonglong)uVar3 >> 0x20);
      local_19c = auVar32._0_4_;
      FUN_147c71d8a(lVar17 + lVar20,&local_19c,&local_190,&local_184);
      *(float *)(lVar17 + 0xc + lVar20) = fVar39;
      *(undefined4 *)(lVar17 + 0x10 + lVar20) = *(undefined4 *)((longlong)puVar14 + lVar20 + 0x10);
      lVar20 = lVar20 + 0x58;
    } while (lVar20 != 0x630);
    lVar22 = lVar22 + 1;
    lVar17 = lVar17 + 0x630;
  } while (lVar22 != 0x21);
  local_200 = 0;
  local_208 = 0;
  lVar22 = 0;
  FUN_140d3493e(&local_1c8,*(undefined4 *)(param_6 + 0x118),1,0);
  lVar17 = local_1e0;
  do {
    FUN_147a7d5d8(&local_1c8,lVar17 + lVar22);
    lVar22 = lVar22 + 0x58;
  } while (lVar22 != 0xcc30);
  iVar19 = 0;
  iVar15 = 0x12;
  do {
    iVar19 = iVar19 + 1;
    iVar21 = 0x11;
    iVar9 = iVar15;
    do {
      FUN_140d3489c(&local_1c8,iVar9 + -0x12,iVar9,iVar9 + -0x11);
      FUN_140d3489c(&local_1c8,iVar9,iVar9 + 1,iVar9 + -0x11);
      iVar21 = iVar21 + -1;
      iVar9 = iVar9 + 1;
    } while (iVar21 != 0);
    iVar15 = iVar15 + 0x12;
  } while (iVar19 != 0x20);
  dVar10 = *local_1d8;
  dVar11 = local_1d8[1];
  dVar2 = local_1d8[2];
  local_168 = local_1d8[8];
  dVar12 = local_1d8[9];
  dStack_130 = local_1d8[10];
  dVar5 = dVar11 + dVar11;
  dVar1 = dVar2 + dVar2;
  dVar24 = dVar10 * (dVar10 + dVar10);
  uStack_178 = (1.0 - (dVar2 * dVar1 + dVar11 * dVar5)) * local_168;
  dVar6 = (1.0 - (dVar2 * dVar1 + dVar24)) * dVar12;
  local_128 = (1.0 - (dVar24 + dVar11 * dVar5)) * dStack_130;
  dVar24 = local_1d8[3];
  dVar2 = dVar1 * dVar24;
  dVar4 = (dVar10 + dVar10) * local_1d8[3];
  dVar24 = dVar5 * dVar24;
  uStack_170 = (dVar5 * dVar10 + dVar2) * local_168;
  local_148 = (dVar1 * dVar11 + dVar4) * dVar12;
  local_138 = (dVar24 + *local_1d8 * dVar1) * dStack_130;
  local_168 = (*local_1d8 * dVar1 - dVar24) * local_168;
  dStack_130 = (dVar1 * dVar11 - dVar4) * dStack_130;
  uStack_160 = 0;
  fStack_150 = (float)SUB84(dVar6,0);
  local_158 = (dVar5 * dVar10 - dVar2) * dVar12;
  fStack_14c = (float)(int)((ulonglong)dVar6 >> 0x20);
  uStack_140 = 0;
  uStack_120 = 0;
  local_118 = local_1d8[4];
  dStack_110 = local_1d8[5];
  local_108 = local_1d8[6];
  uStack_100 = 0x3ff0000000000000;
  local_1f0 = param_6;
  local_1f8 = param_5;
  local_200 = local_200 & 0xffffffffffffff00;
  local_208 = 0;
  FUN_147a7d716(&local_1c8,&uStack_178,local_1d0,0);
  FUN_1400020a8(local_1e0);
  FUN_1400020a8(puVar14);
  if (local_1b8 != 0) {
    (*(code *)**(undefined8 **)(local_1b8 + 8))(local_1b8 + 8,1);
  }
  lVar17 = CONCAT44(uStack_1bc,local_1c0);
  if (lVar17 != 0) {
    (*(code *)**(undefined8 **)(lVar17 + 8))(lVar17 + 8,1);
  }
  if ((local_f0 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c71d8a FUN_147c71d8a body=1028 status=ok
// SIG undefined FUN_147c71d8a(void)

void FUN_147c71d8a(longlong param_1,float *param_2,float *param_3,float *param_4)

{
  undefined1 uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_e8 [32];
  double local_c8;
  double local_c0;
  double local_b8;
  undefined8 local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  undefined8 local_90;
  double local_88;
  double local_80;
  double local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar7 = (int)ROUND(*param_2 * 127.0 + *param_2 * 127.0 + 0.5) >> 1;
  if (0x7e < iVar7) {
    iVar7 = 0x7f;
  }
  if (iVar7 < -0x7f) {
    iVar7 = -0x80;
  }
  *(char *)(param_1 + 0x4c) = (char)iVar7;
  iVar7 = (int)ROUND(param_2[1] * 127.0 + param_2[1] * 127.0 + 0.5) >> 1;
  if (0x7e < iVar7) {
    iVar7 = 0x7f;
  }
  uVar1 = (undefined1)iVar7;
  if (iVar7 < -0x7f) {
    uVar1 = 0x80;
  }
  *(undefined1 *)(param_1 + 0x4d) = uVar1;
  iVar7 = (int)ROUND(param_2[2] * 127.0 + param_2[2] * 127.0 + 0.5) >> 1;
  if (0x7e < iVar7) {
    iVar7 = 0x7f;
  }
  uVar1 = (undefined1)iVar7;
  if (iVar7 < -0x7f) {
    uVar1 = 0x80;
  }
  *(undefined1 *)(param_1 + 0x4e) = uVar1;
  *(undefined1 *)(param_1 + 0x4f) = 0x7f;
  iVar7 = (int)ROUND(*param_4 * 127.0 + *param_4 * 127.0 + 0.5) >> 1;
  if (0x7e < iVar7) {
    iVar7 = 0x7f;
  }
  uVar1 = (undefined1)iVar7;
  if (iVar7 < -0x7f) {
    uVar1 = 0x80;
  }
  *(undefined1 *)(param_1 + 0x50) = uVar1;
  iVar7 = (int)ROUND(param_4[1] * 127.0 + param_4[1] * 127.0 + 0.5) >> 1;
  if (0x7e < iVar7) {
    iVar7 = 0x7f;
  }
  uVar1 = (undefined1)iVar7;
  if (iVar7 < -0x7f) {
    uVar1 = 0x80;
  }
  *(undefined1 *)(param_1 + 0x51) = uVar1;
  iVar7 = (int)ROUND(param_4[2] * 127.0 + param_4[2] * 127.0 + 0.5) >> 1;
  if (0x7e < iVar7) {
    iVar7 = 0x7f;
  }
  uVar1 = (undefined1)iVar7;
  if (iVar7 < -0x7f) {
    uVar1 = 0x80;
  }
  *(undefined1 *)(param_1 + 0x52) = uVar1;
  *(undefined1 *)(param_1 + 0x53) = 0x7f;
  uVar2 = (int)ROUND(*param_4 * 127.0 + *param_4 * 127.0 + 0.5) >> 1;
  if (0x7e < (int)uVar2) {
    uVar2 = 0x7f;
  }
  uVar4 = 0xffffff80;
  uVar3 = (ulonglong)uVar2;
  if ((int)uVar2 < -0x7f) {
    uVar3 = 0xffffff80;
  }
  uVar2 = (int)ROUND(param_4[1] * 127.0 + param_4[1] * 127.0 + 0.5) >> 1;
  if (0x7e < (int)uVar2) {
    uVar2 = 0x7f;
  }
  if ((int)uVar2 < -0x7f) {
    uVar2 = uVar4;
  }
  uVar6 = (int)ROUND(param_4[2] * 127.0 + param_4[2] * 127.0 + 0.5) >> 1;
  if (0x7e < (int)uVar6) {
    uVar6 = 0x7f;
  }
  if ((int)uVar6 < -0x7f) {
    uVar6 = uVar4;
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ =
       uVar3 & 0xff | 0x7f000000 | ((ulonglong)uVar2 & 0xff) << 8 |
       ((ulonglong)uVar6 & 0xff) << 0x10;
  uVar2 = (int)ROUND(*param_3 * 127.0 + *param_3 * 127.0 + 0.5) >> 1;
  if (0x7e < (int)uVar2) {
    uVar2 = 0x7f;
  }
  if ((int)uVar2 < -0x7f) {
    uVar2 = uVar4;
  }
  uVar6 = (int)ROUND(param_3[1] * 127.0 + param_3[1] * 127.0 + 0.5) >> 1;
  if (0x7e < (int)uVar6) {
    uVar6 = 0x7f;
  }
  if ((int)uVar6 < -0x7f) {
    uVar6 = uVar4;
  }
  uVar5 = (int)ROUND(param_3[2] * 127.0 + param_3[2] * 127.0 + 0.5) >> 1;
  if (0x7e < (int)uVar5) {
    uVar5 = 0x7f;
  }
  if ((int)uVar5 < -0x7f) {
    uVar5 = uVar4;
  }
  auVar12._8_8_ = 0;
  auVar12._0_8_ =
       (ulonglong)uVar2 & 0xff | 0x7f000000 | ((ulonglong)uVar6 & 0xff) << 8 |
       ((ulonglong)uVar5 & 0xff) << 0x10;
  uVar2 = (int)ROUND(*param_2 * 127.0 + *param_2 * 127.0 + 0.5) >> 1;
  if (0x7e < (int)uVar2) {
    uVar2 = 0x7f;
  }
  if ((int)uVar2 < -0x7f) {
    uVar2 = uVar4;
  }
  uVar6 = (int)ROUND(param_2[1] * 127.0 + param_2[1] * 127.0 + 0.5) >> 1;
  if (0x7e < (int)uVar6) {
    uVar6 = 0x7f;
  }
  if ((int)uVar6 < -0x7f) {
    uVar6 = uVar4;
  }
  fVar8 = param_2[2] * 127.0 + param_2[2] * 127.0 + 0.5;
  uVar4 = (int)ROUND(fVar8) >> 1;
  if (0x7e < (int)uVar4) {
    uVar4 = 0x7f;
  }
  uVar3 = (ulonglong)uVar4;
  if ((int)uVar4 < -0x7f) {
    uVar3 = 0xffffff80;
  }
  auVar11._8_8_ = 0;
  auVar11._0_8_ =
       (ulonglong)uVar2 & 0xff | 0x7f000000 | ((ulonglong)uVar6 & 0xff) << 8 |
       (uVar3 & 0xff) << 0x10;
  auVar10 = pmovsxbd(ZEXT416((uint)fVar8),auVar10);
  local_88 = (double)((float)auVar10._0_4_ * 0.007874016);
  local_78 = (double)((float)auVar10._8_4_ * 0.007874016);
  local_80 = (double)((float)auVar10._4_4_ * 0.007874016);
  auVar10 = pmovsxbd(auVar12,auVar12);
  local_a8 = (double)((float)auVar10._0_4_ * 0.007874016);
  local_98 = (double)((float)auVar10._8_4_ * 0.007874016);
  local_a0 = (double)((float)auVar10._4_4_ * 0.007874016);
  auVar10 = pmovsxbd(auVar11,auVar11);
  local_c8 = (double)((float)auVar10._0_4_ * 0.007874016);
  local_b8 = (double)((float)auVar10._8_4_ * 0.007874016);
  local_c0 = (double)((float)auVar10._4_4_ * 0.007874016);
  local_b0 = 0;
  local_90 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0x3ff0000000000000;
  dVar9 = (double)FUN_144a91046();
  *(char *)(param_1 + 0x53) = (dVar9 < 0.0) * '\x02' + '\x7f';
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c72190 FUN_147c72190 body=2495 status=ok
// SIG undefined FUN_147c72190(void)

void FUN_147c72190(longlong *param_1,undefined1 (*param_2) [16],double *param_3,double *param_4,
                  float param_5,float param_6,byte *param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float _X;
  undefined4 uVar19;
  undefined1 auStack_228 [32];
  undefined1 local_208;
  undefined4 local_200;
  undefined4 local_1f8;
  undefined1 local_1f0;
  float local_1e8;
  float local_1e4;
  double *local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  float local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  dVar12 = param_4[2] - param_3[2];
  dVar13 = param_4[1] - param_3[1];
  dVar3 = *param_4 - *param_3;
  if (((9.999999747378752e-05 < ABS(dVar3)) || (9.999999747378752e-05 < ABS(dVar13))) ||
     (9.999999747378752e-05 < ABS(dVar12))) {
    fVar10 = (float)SQRT(dVar12 * dVar12 + dVar3 * dVar3 + dVar13 * dVar13);
    if (ABS(param_5 - param_6) < fVar10) {
      auVar1 = *param_2;
      dVar3 = auVar1._0_8_;
      dVar13 = auVar1._8_8_;
      uVar19 = auVar1._8_4_;
      auVar2 = param_2[1];
      dVar12 = auVar2._0_8_;
      dVar5 = auVar2._8_8_;
      fVar10 = (param_6 - param_5) / fVar10;
      local_1e4 = 1.0 - fVar10 * fVar10;
      if (local_1e4 < 0.0) {
        local_1e4 = sqrtf(local_1e4);
      }
      else {
        local_1e4 = SQRT(local_1e4);
      }
      local_1d8 = (double)fVar10;
      dVar14 = (double)local_1e4;
      uVar9 = auVar1._12_4_;
      local_148._8_4_ = uVar19;
      local_148._0_8_ = -dVar13;
      local_148._12_4_ = uVar9 ^ 0x80000000;
      dVar17 = dVar3 * 0.0 - dVar13 * dVar14;
      local_158._8_4_ = uVar19;
      local_158._0_8_ = -dVar3;
      local_158._12_4_ = uVar9 ^ 0x80000000;
      dVar16 = -dVar3 * local_1d8;
      local_168._8_4_ = uVar19;
      local_168._0_8_ = dVar16;
      local_168._12_4_ = uVar9 ^ 0x80000000;
      dVar16 = dVar12 * dVar14 + dVar16;
      local_1c8 = -dVar12;
      dStack_1c0 = -dVar5;
      dVar4 = dVar13 * local_1d8 + dVar12 * -0.0;
      dVar17 = dVar17 + dVar17;
      dVar16 = dVar16 + dVar16;
      dVar4 = dVar4 + dVar4;
      local_178._8_4_ = auVar2._8_4_;
      local_178._0_8_ = dVar5;
      local_178._12_4_ = auVar2._12_4_;
      local_188._8_4_ = uVar19;
      local_188._0_8_ = dVar13;
      local_188._12_4_ = uVar9;
      local_1d0 = (double)param_5;
      local_1b0 = (double)param_6;
      local_1e8 = 11.25;
      dVar18 = (dVar3 * dVar16 - dVar4 * dVar13) + dVar5 * dVar17 + local_1d8;
      dVar3 = (dVar12 * dVar4 - dVar17 * dVar3) + dVar5 * dVar16 + 0.0;
      dVar12 = (dVar13 * dVar17 - dVar16 * dVar12) + dVar5 * dVar4 + dVar14;
      local_1e0 = param_4;
      local_1a8 = auVar2;
      local_198 = auVar1;
      do {
        _X = local_1e8 * 0.017453292;
        fVar11 = sinf(_X);
        fVar10 = local_1e4;
        dVar16 = (double)(fVar11 * local_1e4);
        fVar11 = cosf(_X);
        dVar14 = local_1b0;
        dVar13 = (double)(fVar11 * fVar10);
        dVar5 = (double)local_198._0_8_ * dVar16 + (double)local_148._0_8_ * dVar13;
        dVar4 = (double)local_1a8._0_8_ * dVar13 + (double)local_168._0_8_;
        local_1b8 = (double)local_188._0_8_ * local_1d8;
        dVar15 = local_1c8 * dVar16 + local_1b8;
        dVar5 = dVar5 + dVar5;
        dVar4 = dVar4 + dVar4;
        dVar15 = dVar15 + dVar15;
        dVar17 = (double)local_198._0_8_ * dVar4 + dVar15 * (double)local_148._0_8_ +
                 (double)local_178._0_8_ * dVar5 + local_1d8;
        dVar16 = dVar5 * (double)local_158._0_8_ + (double)local_1a8._0_8_ * dVar15 +
                 (double)local_178._0_8_ * dVar4 + dVar16;
        local_100 = (&DAT_14c758c60)[param_7[2]];
        local_fc = (&DAT_14c758c60)[param_7[1]];
        local_f8 = (&DAT_14c758c60)[*param_7];
        dVar13 = dVar4 * local_1c8 + (double)local_188._0_8_ * dVar5 +
                 (double)local_178._0_8_ * dVar15 + dVar13;
        local_f4 = (float)param_7[3] * 0.003921569;
        local_118 = dVar13 * local_1d0 + *param_3;
        local_110 = dVar16 * local_1d0 + param_3[1];
        local_108 = dVar17 * local_1d0 + param_3[2];
        local_120 = dVar18 * local_1d0 + param_3[2];
        local_128 = dVar3 * local_1d0 + param_3[1];
        local_130 = dVar12 * local_1d0 + *param_3;
        local_1f0 = 0;
        local_1f8 = 0;
        local_200 = 0;
        local_208 = 0;
        (**(code **)(*param_1 + 0x30))(param_1,&local_130,&local_118,&local_100);
        local_100 = (&DAT_14c758c60)[param_7[2]];
        local_fc = (&DAT_14c758c60)[param_7[1]];
        local_f8 = (&DAT_14c758c60)[*param_7];
        local_f4 = (float)param_7[3] * 0.003921569;
        local_108 = dVar17 * dVar14 + local_1e0[2];
        local_110 = dVar16 * dVar14 + local_1e0[1];
        local_118 = dVar13 * dVar14 + *local_1e0;
        local_120 = dVar18 * dVar14 + local_1e0[2];
        local_128 = dVar3 * dVar14 + local_1e0[1];
        local_130 = dVar12 * dVar14 + *local_1e0;
        local_1f0 = 0;
        local_1f8 = 0;
        local_200 = 0;
        local_208 = 0;
        (**(code **)(*param_1 + 0x30))(param_1,&local_130,&local_118,&local_100);
        dVar4 = local_1b8;
        dVar5 = local_1d8;
        pdVar6 = local_1e0;
        fVar10 = local_1e4;
        local_1e8 = local_1e8 + 11.25;
        dVar18 = dVar17;
        dVar3 = dVar16;
        dVar12 = dVar13;
      } while (local_1e8 <= 360.0);
      uVar9 = 0;
      uVar8 = local_198._0_8_;
      uVar7 = local_1a8._0_8_;
      do {
        uVar9 = uVar9 + 0x5a;
        fVar11 = sinf((float)(int)uVar9 * 0.017453292);
        dVar12 = (double)(fVar11 * fVar10);
        fVar11 = cosf((float)(int)uVar9 * 0.017453292);
        dVar16 = (double)(fVar11 * fVar10);
        dVar13 = (double)uVar8 * dVar12 + (double)local_148._0_8_ * dVar16;
        dVar3 = (double)uVar7 * dVar16 + (double)local_168._0_8_;
        dVar18 = local_1c8 * dVar12 + dVar4;
        dVar13 = dVar13 + dVar13;
        dVar3 = dVar3 + dVar3;
        dVar18 = dVar18 + dVar18;
        dVar17 = (double)uVar8 * dVar3 + dVar18 * (double)local_148._0_8_ +
                 (double)local_178._0_8_ * dVar13 + dVar5;
        dVar12 = dVar13 * (double)local_158._0_8_ + (double)uVar7 * dVar18 +
                 (double)local_178._0_8_ * dVar3 + dVar12;
        local_100 = (&DAT_14c758c60)[param_7[2]];
        local_fc = (&DAT_14c758c60)[param_7[1]];
        local_f8 = (&DAT_14c758c60)[*param_7];
        dVar3 = dVar3 * local_1c8 + (double)local_188._0_8_ * dVar13 +
                (double)local_178._0_8_ * dVar18 + dVar16;
        local_f4 = (float)param_7[3] * 0.003921569;
        local_108 = dVar17 * dVar14 + pdVar6[2];
        local_110 = dVar12 * dVar14 + pdVar6[1];
        local_118 = dVar3 * dVar14 + *pdVar6;
        local_120 = dVar17 * local_1d0 + param_3[2];
        local_128 = dVar12 * local_1d0 + param_3[1];
        local_130 = dVar3 * local_1d0 + *param_3;
        local_1f0 = 0;
        local_1f8 = 0;
        local_200 = 0;
        local_208 = 0;
        (**(code **)(*param_1 + 0x30))(param_1,&local_130,&local_118,&local_100);
      } while (uVar9 < 0x10f);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c72b50 FUN_147c72b50 body=85 status=ok
// SIG undefined FUN_147c72b50(void)

void FUN_147c72b50(void)

{
  float in_XMM3_Da;
  undefined4 in_stack_00000028;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  double local_20;
  double local_18;
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (double)in_XMM3_Da;
  local_28 = in_stack_00000028;
  local_18 = local_20;
  local_10 = local_20;
  FUN_147c72ba6();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c72ba6 FUN_147c72ba6 body=3403 status=ok
// SIG undefined FUN_147c72ba6(void)

void FUN_147c72ba6(undefined8 param_1,undefined8 param_2,double *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  double dVar1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  byte bVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined4 uVar24;
  uint uVar25;
  float fVar26;
  undefined1 auStack_348 [32];
  undefined4 *local_328;
  double local_320;
  undefined8 *local_318;
  uint local_310;
  undefined8 local_308;
  uint local_300;
  undefined1 local_2f8;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  double local_2d8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  double local_2b8;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  double local_278;
  undefined8 local_268;
  undefined8 uStack_260;
  double local_258;
  double local_248;
  double dStack_240;
  double local_238;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  double local_218;
  undefined1 local_210 [16];
  double local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  double local_1c8;
  undefined1 local_1c0 [16];
  double local_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  float local_184;
  undefined8 local_180;
  undefined8 uStack_178;
  double local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  float local_150;
  float local_14c;
  undefined1 local_148 [16];
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined1 local_108 [16];
  double local_f8;
  ulonglong local_f0;
  double dVar2;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_348;
  dVar9 = *param_3;
  dVar10 = param_3[1];
  dVar8 = param_3[2];
  dVar20 = param_3[8];
  dVar3 = param_3[9];
  dVar18 = dVar20 * 1.0;
  dVar7 = dVar3 * 0.0;
  dVar4 = param_3[10] * 0.0;
  dVar1 = param_3[3];
  dVar2 = param_3[3];
  dVar5 = dVar7 * dVar9 - dVar18 * dVar10;
  dVar6 = dVar4 * dVar10 - dVar7 * dVar8;
  dVar19 = dVar18 * dVar8 - dVar4 * dVar9;
  dVar6 = dVar6 + dVar6;
  dVar19 = dVar19 + dVar19;
  dVar5 = dVar5 + dVar5;
  dVar22 = param_3[6];
  local_f8 = dVar5 * dVar1 + dVar4 + (dVar19 * dVar9 - dVar6 * dVar10);
  dVar23 = param_3[4];
  dVar21 = (dVar8 * dVar6 - dVar9 * dVar5) + dVar2 * dVar19 + dVar7;
  dVar7 = param_3[5];
  local_108._8_4_ = SUB84(dVar21,0);
  local_108._0_8_ = (dVar5 * dVar10 - dVar19 * dVar8) + dVar1 * dVar6 + dVar18;
  local_108._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  dVar18 = dVar20 * 0.0;
  dVar21 = dVar3 * 1.0;
  dVar6 = dVar21 * dVar9 - dVar18 * dVar10;
  dVar19 = dVar4 * dVar10 - dVar21 * dVar8;
  dVar5 = dVar18 * dVar8 - dVar4 * dVar9;
  dVar19 = dVar19 + dVar19;
  dVar5 = dVar5 + dVar5;
  dVar6 = dVar6 + dVar6;
  local_118 = dVar6 * dVar1 + dVar4 + (dVar5 * dVar9 - dVar19 * dVar10);
  local_128 = (dVar6 * dVar10 - dVar5 * dVar8) + dVar1 * dVar19 + dVar18;
  dStack_120 = (dVar8 * dVar19 - dVar9 * dVar6) + dVar2 * dVar5 + dVar21;
  dVar20 = dVar20 * 0.0;
  dVar3 = dVar3 * 0.0;
  dVar4 = param_3[10] * 1.0;
  dVar5 = dVar3 * dVar9 - dVar20 * dVar10;
  dVar6 = dVar4 * dVar10 - dVar3 * dVar8;
  dVar19 = dVar20 * dVar8 - dVar9 * dVar4;
  dVar6 = dVar6 + dVar6;
  dVar19 = dVar19 + dVar19;
  dVar5 = dVar5 + dVar5;
  dVar18 = dVar19 * dVar9 - dVar6 * dVar10;
  dVar4 = dVar5 * dVar1 + dVar4 + dVar18;
  dVar1 = (dVar5 * dVar10 - dVar19 * dVar8) + dVar1 * dVar6 + dVar20;
  dVar2 = (dVar8 * dVar6 - dVar9 * dVar5) + dVar2 * dVar19 + dVar3;
  uVar24 = SUB84(dVar2,0);
  uVar25 = (uint)((ulonglong)dVar2 >> 0x20);
  local_148._8_4_ = uVar24;
  local_148._0_8_ = dVar1;
  local_148._12_4_ = uVar25;
  local_138 = dVar4;
  fVar16 = (float)FUN_147c4cd32(dVar18,param_4);
  FUN_147c4cc80(param_1,param_4,&local_14c,&local_150);
  bVar11 = (byte)param_5;
  dVar20 = (double)(fVar16 * 0.5);
  local_158 = dVar22 + dVar4 * dVar20;
  uStack_160 = dVar7 + dVar2 * dVar20;
  local_168 = dVar23 + dVar20 * dVar1;
  local_170 = dVar22 - dVar4 * dVar20;
  uStack_178 = dVar7 - dVar2 * dVar20;
  local_180 = dVar23 - dVar20 * dVar1;
  dVar22 = local_158 - local_170;
  dVar23 = uStack_160 - uStack_178;
  dVar2 = local_168 - local_180;
  if (((9.999999747378752e-05 < ABS(dVar2)) || (9.999999747378752e-05 < ABS(dVar23))) ||
     (9.999999747378752e-05 < ABS(dVar22))) {
    fVar16 = (float)SQRT(dVar22 * dVar22 + dVar2 * dVar2 + dVar23 * dVar23);
    if (ABS(local_14c - local_150) < fVar16) {
      if (local_14c <= local_150) {
        local_190 = (&DAT_14c758c60)[param_5._2_1_];
        local_18c = (&DAT_14c758c60)[param_5._1_1_];
        local_188 = (&DAT_14c758c60)[(byte)param_5];
        puVar12 = &local_180;
        fVar17 = local_150;
      }
      else {
        local_190 = (&DAT_14c758c60)[param_5._2_1_];
        local_18c = (&DAT_14c758c60)[param_5._1_1_];
        local_188 = (&DAT_14c758c60)[(byte)param_5];
        puVar12 = &local_168;
        fVar17 = local_14c;
      }
      local_320 = (double)fVar17;
      local_328 = &local_190;
      fVar26 = (float)param_5._3_1_ * 0.003921569;
      local_2f8 = 0;
      local_300 = 0;
      local_308 = (undefined4 *)((ulonglong)local_308._4_4_ << 0x20);
      local_310 = (uint)local_310._1_3_ << 8;
      local_318 = (undefined8 *)CONCAT44(local_318._4_4_,0x20);
      uVar15 = (ulonglong)param_5._2_1_;
      uVar14 = (ulonglong)(byte)param_5;
      uVar13 = (ulonglong)param_5._1_1_;
      local_184 = fVar26;
      FUN_147cb7c40(param_2,puVar12,local_108,&local_128);
      local_200 = -dVar4;
      fVar17 = (((local_14c - local_150) * local_14c) / fVar16) / local_14c;
      fVar16 = fVar17;
      if (1.0 <= fVar17) {
        fVar16 = 1.0;
      }
      fVar16 = asinf((float)(-(uint)(fVar17 < -1.0) & 0xbf800000 |
                            ~-(uint)(fVar17 < -1.0) & (uint)fVar16));
      fVar16 = fVar16 * -57.295776 + 90.0;
      local_190 = (&DAT_14c758c60)[uVar15];
      local_18c = (&DAT_14c758c60)[uVar13];
      local_188 = (&DAT_14c758c60)[uVar14];
      local_318 = (undefined8 *)(double)local_14c;
      local_1a8 = local_128;
      dStack_1a0 = dStack_120;
      local_198 = local_118;
      uVar25 = uVar25 ^ 0x80000000;
      local_1c0._8_4_ = uVar24;
      local_1c0._0_8_ = -dVar1;
      local_1c0._12_4_ = uVar25;
      local_1d8 = (undefined4)local_168;
      uStack_1d4 = local_168._4_4_;
      uStack_1d0 = (undefined4)uStack_160;
      uStack_1cc = uStack_160._4_4_;
      local_1c8 = local_158;
      local_300 = local_300 & 0xffffff00;
      local_310 = 0x20;
      local_308 = &local_190;
      local_1b0 = local_200;
      local_184 = fVar26;
      local_320._0_4_ = 360.0 - fVar16;
      local_328._0_4_ = fVar16;
      FUN_147cb7eb6(param_2);
      local_190 = (&DAT_14c758c60)[uVar15];
      local_18c = (&DAT_14c758c60)[uVar13];
      local_188 = (&DAT_14c758c60)[uVar14];
      local_318 = (undefined8 *)(double)local_14c;
      local_1f8 = local_108._0_8_;
      uStack_1f0 = local_108._8_8_;
      local_1e8 = local_f8;
      local_210._8_4_ = uVar24;
      local_210._0_8_ = -dVar1;
      local_210._12_4_ = uVar25;
      local_228 = (undefined4)local_168;
      uStack_224 = local_168._4_4_;
      uStack_220 = (undefined4)uStack_160;
      uStack_21c = uStack_160._4_4_;
      local_218 = local_158;
      local_300 = local_300 & 0xffffff00;
      local_310 = 0x20;
      local_308 = &local_190;
      local_184 = fVar26;
      local_320._0_4_ = 360.0 - fVar16;
      local_328._0_4_ = fVar16;
      FUN_147cb7eb6(param_2);
      fVar16 = 180.0 - fVar16;
      local_190 = (&DAT_14c758c60)[uVar15];
      local_18c = (&DAT_14c758c60)[uVar13];
      local_188 = (&DAT_14c758c60)[uVar14];
      local_318 = (undefined8 *)(double)local_150;
      local_248 = local_128;
      dStack_240 = dStack_120;
      local_238 = local_118;
      local_268 = local_148._0_8_;
      uStack_260 = local_148._8_8_;
      local_258 = local_138;
      local_278 = local_170;
      local_288 = (undefined4)local_180;
      uStack_284 = local_180._4_4_;
      uStack_280 = (undefined4)uStack_178;
      uStack_27c = uStack_178._4_4_;
      local_300 = local_300 & 0xffffff00;
      local_310 = 0x20;
      local_308 = &local_190;
      local_184 = fVar26;
      local_320._0_4_ = 360.0 - fVar16;
      local_328._0_4_ = fVar16;
      FUN_147cb7eb6(param_2);
      local_190 = (&DAT_14c758c60)[uVar15];
      local_18c = (&DAT_14c758c60)[uVar13];
      local_188 = (&DAT_14c758c60)[uVar14];
      local_318 = (undefined8 *)(double)local_150;
      local_2a8 = local_108._0_8_;
      uStack_2a0 = local_108._8_8_;
      local_298 = local_f8;
      local_2c8 = local_148._0_8_;
      uStack_2c0 = local_148._8_8_;
      local_2b8 = local_138;
      local_2d8 = local_170;
      local_2e8 = (undefined4)local_180;
      uStack_2e4 = local_180._4_4_;
      uStack_2e0 = (undefined4)uStack_178;
      uStack_2dc = uStack_178._4_4_;
      local_300 = local_300 & 0xffffff00;
      local_310 = 0x20;
      local_308 = &local_190;
      local_184 = fVar26;
      local_320._0_4_ = 360.0 - fVar16;
      local_328._0_4_ = fVar16;
      FUN_147cb7eb6(param_2);
      local_318 = &param_5;
      local_320 = (double)CONCAT44(local_320._4_4_,local_150);
      local_328 = (undefined4 *)CONCAT44(local_328._4_4_,local_14c);
      FUN_147c72190(param_2,param_3,&local_168,&local_180);
      goto LAB_147c73346;
    }
  }
  if (local_14c <= local_150) {
    local_190 = (&DAT_14c758c60)[param_5._2_1_];
    local_18c = (&DAT_14c758c60)[param_5._1_1_];
    uVar13 = (ulonglong)(byte)param_5;
    local_188 = (&DAT_14c758c60)[uVar13];
    local_320 = (double)local_150;
    fVar16 = (float)param_5._3_1_ * 0.003921569;
    local_2f8 = 0;
    local_300 = 0;
    local_308 = (undefined4 *)((ulonglong)local_308._4_4_ << 0x20);
    local_310 = (uint)local_310._1_3_ << 8;
    local_318._0_4_ = 0x20;
    puVar12 = &local_180;
    local_328 = &local_190;
    local_184 = fVar16;
    FUN_147cb7c40(param_2,puVar12,local_108,&local_128);
    local_320 = (double)local_150;
    local_190 = (&DAT_14c758c60)[param_5._2_1_];
    local_18c = (&DAT_14c758c60)[param_5._1_1_];
    local_188 = (&DAT_14c758c60)[uVar13];
    local_2f8 = 0;
    local_300 = 0;
    local_308 = (undefined4 *)((ulonglong)local_308 & 0xffffffff00000000);
    local_310 = local_310 & 0xffffff00;
    local_318 = (undefined8 *)CONCAT44(local_318._4_4_,0x20);
    local_328 = &local_190;
    local_184 = fVar16;
    FUN_147cb7c40(param_2,puVar12,local_108,local_148);
    local_14c = local_150;
  }
  else {
    local_190 = (&DAT_14c758c60)[param_5._2_1_];
    local_18c = (&DAT_14c758c60)[param_5._1_1_];
    uVar13 = (ulonglong)(byte)param_5;
    local_188 = (&DAT_14c758c60)[uVar13];
    local_320 = (double)local_14c;
    fVar16 = (float)param_5._3_1_ * 0.003921569;
    local_2f8 = 0;
    local_300 = 0;
    local_308 = (undefined4 *)((ulonglong)local_308._4_4_ << 0x20);
    local_310 = (uint)local_310._1_3_ << 8;
    local_318._0_4_ = 0x20;
    puVar12 = &local_168;
    local_328 = &local_190;
    local_184 = fVar16;
    FUN_147cb7c40(param_2,puVar12,local_108,&local_128);
    local_320 = (double)local_14c;
    local_190 = (&DAT_14c758c60)[param_5._2_1_];
    local_18c = (&DAT_14c758c60)[param_5._1_1_];
    local_188 = (&DAT_14c758c60)[uVar13];
    local_2f8 = 0;
    local_300 = 0;
    local_308 = (undefined4 *)((ulonglong)local_308 & 0xffffffff00000000);
    local_310 = local_310 & 0xffffff00;
    local_318 = (undefined8 *)CONCAT44(local_318._4_4_,0x20);
    local_328 = &local_190;
    local_184 = fVar16;
    FUN_147cb7c40(param_2,puVar12,local_108,local_148);
  }
  local_328 = &local_190;
  local_320 = (double)local_14c;
  local_190 = (&DAT_14c758c60)[param_5._2_1_];
  local_18c = (&DAT_14c758c60)[param_5._1_1_];
  local_188 = (&DAT_14c758c60)[bVar11];
  local_2f8 = 0;
  local_300 = 0;
  local_308 = (undefined4 *)((ulonglong)local_308 & 0xffffffff00000000);
  local_310 = local_310 & 0xffffff00;
  local_318 = (undefined8 *)CONCAT44(local_318._4_4_,0x20);
  local_184 = fVar16;
  FUN_147cb7c40(param_2,puVar12,&local_128,local_148);
LAB_147c73346:
  if ((local_f0 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c738f2 FUN_147c738f2 body=87 status=ok
// SIG undefined FUN_147c738f2(void)

void FUN_147c738f2(void)

{
  float in_XMM3_Da;
  undefined8 in_stack_00000028;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  double local_20;
  double local_18;
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (double)in_XMM3_Da;
  local_28 = in_stack_00000028;
  local_18 = local_20;
  local_10 = local_20;
  FUN_147c7394a();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c7394a FUN_147c7394a body=627 status=ok
// SIG undefined FUN_147c7394a(void)

void FUN_147c7394a(undefined8 param_1,longlong param_2,double *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  undefined1 local_160;
  undefined1 local_158;
  undefined4 local_150;
  undefined1 local_140 [8];
  longlong local_138;
  longlong local_130;
  undefined8 local_118;
  undefined8 local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  undefined8 uStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined8 uStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_147c73e20(local_140,param_1,param_4,*(undefined4 *)(*(longlong *)(param_2 + 8) + 0x3090));
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar1 = param_3[2];
  local_f8 = param_3[8];
  dVar4 = param_3[9];
  dStack_c0 = param_3[10];
  dVar9 = dVar3 + dVar3;
  dVar5 = dVar1 + dVar1;
  dVar8 = dVar2 * (dVar2 + dVar2);
  local_108 = (1.0 - (dVar1 * dVar5 + dVar3 * dVar9)) * local_f8;
  dVar1 = (1.0 - (dVar1 * dVar5 + dVar8)) * dVar4;
  local_b8 = (1.0 - (dVar8 + dVar3 * dVar9)) * dStack_c0;
  dVar8 = param_3[3];
  dVar6 = dVar5 * dVar8;
  dVar7 = (dVar2 + dVar2) * param_3[3];
  dVar8 = dVar9 * dVar8;
  dStack_100 = (dVar9 * dVar2 + dVar6) * local_f8;
  local_d8 = (dVar5 * dVar3 + dVar7) * dVar4;
  local_c8 = (dVar8 + *param_3 * dVar5) * dStack_c0;
  local_f8 = (*param_3 * dVar5 - dVar8) * local_f8;
  dStack_c0 = (dVar5 * dVar3 - dVar7) * dStack_c0;
  uStack_f0 = 0;
  local_e8._8_4_ = SUB84(dVar1,0);
  local_e8._0_8_ = (dVar9 * dVar2 - dVar6) * dVar4;
  local_e8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  uStack_d0 = 0;
  uStack_b0 = 0;
  local_a8 = param_3[4];
  dStack_a0 = param_3[5];
  local_98 = param_3[6];
  uStack_90 = 0x3ff0000000000000;
  local_160 = 0;
  local_168 = 0;
  local_150 = 0xffffffff;
  local_158 = 1;
  FUN_1434d8d42(local_140,param_2,&local_108,param_5);
  FUN_1400020a8(local_118);
  FUN_1400020a8(local_110);
  if (local_130 != 0) {
    (*(code *)**(undefined8 **)(local_130 + 8))(local_130 + 8,1);
  }
  if (local_138 != 0) {
    (*(code *)**(undefined8 **)(local_138 + 8))(local_138 + 8,1);
  }
  if ((local_80 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c73bbe FUN_147c73bbe body=608 status=ok
// SIG undefined FUN_147c73bbe(void)

void FUN_147c73bbe(undefined8 param_1,double *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,longlong param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  undefined1 local_160;
  undefined4 local_158;
  longlong local_150;
  undefined1 local_140 [8];
  longlong local_138;
  longlong local_130;
  undefined8 local_118;
  undefined8 local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  undefined8 uStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined8 uStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_147c73e20(local_140,param_1,param_3,*(undefined4 *)(param_6 + 0x118));
  dVar2 = *param_2;
  dVar3 = param_2[1];
  dVar1 = param_2[2];
  local_f8 = param_2[8];
  dVar4 = param_2[9];
  dStack_c0 = param_2[10];
  dVar9 = dVar3 + dVar3;
  dVar5 = dVar1 + dVar1;
  dVar8 = dVar2 * (dVar2 + dVar2);
  local_108 = (1.0 - (dVar1 * dVar5 + dVar3 * dVar9)) * local_f8;
  dVar1 = (1.0 - (dVar1 * dVar5 + dVar8)) * dVar4;
  local_b8 = (1.0 - (dVar8 + dVar3 * dVar9)) * dStack_c0;
  dVar8 = param_2[3];
  dVar6 = dVar5 * dVar8;
  dVar7 = (dVar2 + dVar2) * param_2[3];
  dVar8 = dVar9 * dVar8;
  dStack_100 = (dVar9 * dVar2 + dVar6) * local_f8;
  local_d8 = (dVar5 * dVar3 + dVar7) * dVar4;
  local_c8 = (dVar8 + *param_2 * dVar5) * dStack_c0;
  local_f8 = (*param_2 * dVar5 - dVar8) * local_f8;
  dStack_c0 = (dVar5 * dVar3 - dVar7) * dStack_c0;
  uStack_f0 = 0;
  local_e8._8_4_ = SUB84(dVar1,0);
  local_e8._0_8_ = (dVar9 * dVar2 - dVar6) * dVar4;
  local_e8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  uStack_d0 = 0;
  uStack_b0 = 0;
  local_a8 = param_2[4];
  dStack_a0 = param_2[5];
  local_98 = param_2[6];
  uStack_90 = 0x3ff0000000000000;
  local_150 = param_6;
  local_158 = param_5;
  local_160 = 0;
  local_168 = 0;
  FUN_147a7d716(local_140,&local_108,param_4,0);
  FUN_1400020a8(local_118);
  FUN_1400020a8(local_110);
  if (local_130 != 0) {
    (*(code *)**(undefined8 **)(local_130 + 8))(local_130 + 8,1);
  }
  if (local_138 != 0) {
    (*(code *)**(undefined8 **)(local_138 + 8))(local_138 + 8,1);
  }
  if ((local_80 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c73e20 FUN_147c73e20 body=1768 status=ok
// SIG undefined FUN_147c73e20(void)

longlong FUN_147c73e20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  double dVar22;
  float fVar26;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  undefined8 local_180;
  float local_170;
  undefined4 local_16c;
  undefined4 uStack_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_180 = 0;
  local_188 = 0;
  FUN_140d3493e(param_1,param_4,1,0);
  fVar16 = (float)FUN_147c4cd32(param_2,param_3);
  fVar29 = fVar16 * 0.5;
  FUN_147c4cc80(param_2,param_3,&local_13c,&local_140);
  fVar30 = -fVar29;
  if ((ABS(fVar16) <= 1e-08) || (fVar16 <= ABS(local_13c - local_140))) {
    if (local_13c <= local_140) {
      local_13c = local_140;
      fVar29 = fVar30;
    }
    else {
      local_140 = local_13c;
      fVar30 = fVar29;
    }
  }
  uVar7 = FUN_14001cc68(0xcc30,0);
  *(undefined8 *)(param_1 + 0x28) = uVar7;
  uVar7 = FUN_14001cc68(0x630,0);
  *(undefined8 *)(param_1 + 0x30) = uVar7;
  fVar17 = (((local_13c - local_140) * local_13c) / fVar16) / local_13c;
  fVar16 = fVar17;
  if (1.0 <= fVar17) {
    fVar16 = 1.0;
  }
  fVar16 = asinf((float)(-(uint)(fVar17 < -1.0) & 0xbf800000 |
                        ~-(uint)(fVar17 < -1.0) & (uint)fVar16));
  auVar31._0_12_ = ZEXT812(0x41880000);
  auVar31._12_4_ = 0;
  lVar13 = 0;
  lVar10 = 0;
  do {
    fVar21 = local_13c;
    fVar17 = local_140;
    lVar9 = *(longlong *)(param_1 + 0x30);
    iVar14 = (int)lVar10;
    if ((int)(((fVar16 * 57.295776 + -90.0 + 180.0) / 180.0) * 17.0) < lVar10) {
      fVar28 = (float)(iVar14 + -1) * 0.0625 * 3.1415927;
      fVar18 = sinf(fVar28);
      fVar21 = local_140;
      fVar18 = fVar18 * fVar17;
      fStack_130 = cosf(fVar28);
      fStack_130 = fStack_130 * fVar21;
      fVar17 = fVar30;
    }
    else {
      fVar28 = (float)iVar14 * 0.0625 * 3.1415927;
      fVar18 = sinf(fVar28);
      fVar17 = local_13c;
      fVar18 = fVar18 * fVar21;
      fStack_130 = cosf(fVar28);
      fStack_130 = fStack_130 * fVar17;
      fVar17 = fVar29;
    }
    *(undefined4 *)(lVar9 + lVar13) = 0;
    *(float *)(lVar9 + 4 + lVar13) = fVar18 + 0.0;
    *(float *)(lVar9 + 8 + lVar13) = fVar17 + fStack_130;
    local_138 = 0.0;
    local_148 = -fStack_130;
    uStack_14c = 0;
    local_158 = 0x3f800000;
    uStack_154 = 0;
    local_150 = 0;
    local_144 = fVar18;
    fStack_134 = fVar18;
    FUN_147c71d8a(lVar9 + lVar13,&local_158,&uStack_14c,&local_138);
    *(undefined4 *)(lVar9 + 0xc + lVar13) = 0;
    *(float *)(lVar9 + 0x10 + lVar13) = (float)iVar14 / 17.0;
    lVar10 = lVar10 + 1;
    lVar13 = lVar13 + 0x58;
  } while (lVar13 != 0x630);
  lVar10 = 0;
  lVar13 = 0;
  do {
    fVar29 = (float)(int)lVar13 * 0.03125;
    local_148 = fVar29 * 360.0;
    uStack_14c = 0;
    local_144 = 0.0;
    FUN_1413df99e(&local_138,&uStack_14c);
    lVar9 = 0;
    do {
      lVar8 = *(longlong *)(param_1 + 0x30);
      fVar30 = *(float *)(lVar8 + lVar9);
      fVar16 = *(float *)(lVar8 + 4 + lVar9);
      fVar17 = *(float *)(lVar8 + 8 + lVar9);
      auVar19._0_4_ = fVar30 * local_138;
      auVar19._4_4_ = fVar30 * fStack_134;
      auVar19._8_4_ = fVar30 * fStack_130;
      auVar19._12_4_ = fVar30 * fStack_12c;
      fVar30 = fVar17 * local_118 + fVar16 * local_128 + auVar19._0_4_ + local_108;
      fVar21 = fVar17 * fStack_114 + fVar16 * fStack_124 + auVar19._4_4_ + fStack_104;
      fVar18 = fVar17 * fStack_110 + fVar16 * fStack_120 + auVar19._8_4_ + fStack_100;
      fVar16 = fVar17 * fStack_10c + fVar16 * fStack_11c + auVar19._12_4_ + fStack_fc;
      lVar8 = *(longlong *)(param_1 + 0x28) + lVar10;
      *(float *)(lVar9 + lVar8) = fVar30;
      auVar20._4_4_ = fVar21;
      auVar20._0_4_ = fVar30;
      auVar20._8_4_ = fVar18;
      auVar20._12_4_ = fVar16;
      uVar7 = extractps(auVar20,1);
      *(undefined8 *)(lVar9 + 4 + lVar8) = uVar7;
      auVar1._4_4_ = fVar21;
      auVar1._0_4_ = fVar30;
      auVar1._8_4_ = fVar18;
      auVar1._12_4_ = fVar16;
      uVar7 = extractps(auVar1,2);
      *(undefined8 *)(lVar9 + 8 + lVar8) = uVar7;
      lVar8 = *(longlong *)(param_1 + 0x30);
      auVar20 = pmovsxbd(auVar19,*(undefined4 *)(lVar8 + 0x50 + lVar9));
      fVar18 = (float)auVar20._0_4_ * 0.007874016;
      fVar28 = (float)auVar20._4_4_ * 0.007874016;
      fVar26 = (float)auVar20._8_4_ * 0.007874016;
      fVar30 = local_108 * 0.0;
      fVar16 = fStack_104 * 0.0;
      fVar17 = fStack_100 * 0.0;
      fVar21 = fStack_fc * 0.0;
      auVar23._0_4_ = fVar26 * local_118 + fVar28 * local_128 + fVar18 * local_138 + fVar30;
      auVar23._4_4_ = fVar26 * fStack_114 + fVar28 * fStack_124 + fVar18 * fStack_134 + fVar16;
      auVar23._8_4_ = fVar26 * fStack_110 + fVar28 * fStack_120 + fVar18 * fStack_130 + fVar17;
      auVar23._12_4_ = fVar26 * fStack_10c + fVar28 * fStack_11c + fVar18 * fStack_12c + fVar21;
      uVar7 = extractps(auVar23,1);
      uStack_154 = (undefined4)uVar7;
      uVar7 = extractps(auVar23,2);
      local_150 = (undefined4)uVar7;
      uStack_14c = (undefined4)((ulonglong)uVar7 >> 0x20);
      auVar20 = pmovsxbd(auVar23,*(undefined4 *)(lVar8 + 0x4c + lVar9));
      dVar27 = (double)((float)auVar20._0_4_ * 0.007874016);
      dVar4 = (double)((float)auVar20._8_4_ * 0.007874016);
      auVar31 = pmovsxbd(auVar31,*(undefined4 *)(lVar8 + 0x50 + lVar9));
      dVar22 = (double)((float)auVar20._4_4_ * 0.007874016);
      dVar2 = (double)((float)auVar31._0_4_ * 0.007874016);
      dVar5 = (double)((float)auVar31._12_4_ * 0.007874016);
      dVar3 = (double)((float)auVar31._8_4_ * 0.007874016);
      dVar6 = (double)((float)auVar31._4_4_ * 0.007874016);
      auVar31._0_8_ = (dVar3 * dVar27 - dVar4 * dVar2) * dVar5;
      auVar31._8_8_ = 0;
      fVar18 = (float)((dVar2 * dVar22 - dVar27 * dVar6) * dVar5);
      fVar28 = (float)auVar31._0_8_;
      fVar26 = (float)((dVar6 * dVar4 - dVar22 * dVar3) * dVar5);
      auVar24._0_4_ = fVar18 * local_118 + fVar28 * local_128 + fVar26 * local_138 + fVar30;
      auVar24._4_4_ = fVar18 * fStack_114 + fVar28 * fStack_124 + fVar26 * fStack_134 + fVar16;
      auVar24._8_4_ = fVar18 * fStack_110 + fVar28 * fStack_120 + fVar26 * fStack_130 + fVar17;
      auVar24._12_4_ = fVar18 * fStack_10c + fVar28 * fStack_11c + fVar26 * fStack_12c + fVar21;
      uVar7 = extractps(auVar24,1);
      local_160 = (undefined4)uVar7;
      uVar7 = extractps(auVar24,2);
      uStack_15c = (undefined4)uVar7;
      local_158 = (undefined4)((ulonglong)uVar7 >> 0x20);
      auVar20 = pmovsxbd(auVar24,*(undefined4 *)(lVar8 + 0x4c + lVar9));
      fVar18 = (float)auVar20._0_4_ * 0.007874016;
      fVar28 = (float)auVar20._4_4_ * 0.007874016;
      fVar26 = (float)auVar20._8_4_ * 0.007874016;
      auVar25._0_4_ = fVar26 * local_118 + fVar28 * local_128 + fVar18 * local_138 + fVar30;
      auVar25._4_4_ = fVar26 * fStack_114 + fVar28 * fStack_124 + fVar18 * fStack_134 + fVar16;
      auVar25._8_4_ = fVar26 * fStack_110 + fVar28 * fStack_120 + fVar18 * fStack_130 + fVar17;
      auVar25._12_4_ = fVar26 * fStack_10c + fVar28 * fStack_11c + fVar18 * fStack_12c + fVar21;
      uVar7 = extractps(auVar25,1);
      local_16c = (undefined4)uVar7;
      uVar7 = extractps(auVar25,2);
      uStack_168 = (undefined4)uVar7;
      local_164 = (undefined4)((ulonglong)uVar7 >> 0x20);
      local_170 = auVar25._0_4_;
      FUN_147c71d8a(*(longlong *)(param_1 + 0x28) + lVar10 + lVar9,&local_170,&local_164,&local_158)
      ;
      *(float *)(lVar9 + 0xc + *(longlong *)(param_1 + 0x28) + lVar10) = fVar29;
      *(undefined4 *)(lVar9 + 0x10 + *(longlong *)(param_1 + 0x28) + lVar10) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x10 + lVar9);
      lVar9 = lVar9 + 0x58;
    } while (lVar9 != 0x630);
    lVar13 = lVar13 + 1;
    lVar10 = lVar10 + 0x630;
  } while (lVar13 != 0x21);
  lVar10 = 0;
  do {
    FUN_147a7d5d8(param_1,*(longlong *)(param_1 + 0x28) + lVar10);
    lVar10 = lVar10 + 0x58;
  } while (lVar10 != 0xcc30);
  iVar14 = 0;
  iVar15 = 0x12;
  do {
    iVar14 = iVar14 + 1;
    iVar12 = 0x11;
    iVar11 = iVar15;
    do {
      FUN_140d3489c(param_1,iVar11 + -0x12,iVar11,iVar11 + -0x11);
      FUN_140d3489c(param_1,iVar11,iVar11 + 1,iVar11 + -0x11);
      iVar12 = iVar12 + -1;
      iVar11 = iVar11 + 1;
    } while (iVar12 != 0);
    iVar15 = iVar15 + 0x12;
  } while (iVar14 != 0x20);
  if ((local_f0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c7450a FUN_147c7450a body=1000 status=ok
// SIG undefined FUN_147c7450a(void)

void FUN_147c7450a(undefined8 param_1,longlong *param_2,double *param_3,undefined8 param_4,
                  uint param_5)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined1 local_190;
  ulonglong local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  float local_16c;
  longlong local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined8 uStack_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_168 = 0;
  uStack_160 = 0;
  FUN_1479b2692(param_1,&local_158);
  iVar6 = (int)local_158;
  if ((int)local_158 < local_158._4_4_) {
    iVar6 = local_158._4_4_;
  }
  if (iVar6 < dStack_150._0_4_) {
    iVar6 = dStack_150._0_4_;
  }
  if (iVar6 < 0x1e) {
    FUN_1479b29d0(param_1,&local_168,0x3f1a36e2e0000000);
  }
  else {
    FUN_1479b25e6(param_1,&local_158);
    uVar4 = uStack_160;
    lVar7 = (longlong)(int)uStack_160;
    uVar5 = (int)uStack_160 + 1;
    uStack_160 = CONCAT44(uStack_160._4_4_,uVar5);
    if (uStack_160._4_4_ < uVar5) {
      FUN_140555802(&local_168,uVar4 & 0xffffffff);
    }
    lVar7 = lVar7 * 0x38;
    *(double *)(local_168 + 0x30 + lVar7) = local_128;
    pdVar1 = (double *)(local_168 + 0x20 + lVar7);
    *pdVar1 = local_138;
    pdVar1[1] = dStack_130;
    pdVar1 = (double *)(local_168 + 0x10 + lVar7);
    *pdVar1 = local_148;
    pdVar1[1] = dStack_140;
    *(double *)(local_168 + lVar7) = local_158;
    ((double *)(local_168 + lVar7))[1] = dStack_150;
  }
  local_1a8 = 0;
  (**(code **)(*param_2 + 0x20))(param_2,0,(int)uStack_160 * 0xc,0);
  if ((longlong)(int)uStack_160 != 0) {
    local_180 = (ulonglong)(param_5 >> 8 & 0xff);
    lVar8 = (longlong)(int)uStack_160 * 0x38;
    lVar7 = local_168;
    do {
      local_178 = (&DAT_14c758c60)[param_5 >> 0x10 & 0xff];
      local_174 = (&DAT_14c758c60)[local_180];
      local_170 = (&DAT_14c758c60)[param_5 & 0xff];
      dVar2 = *param_3;
      dVar3 = param_3[1];
      dVar10 = param_3[2];
      local_148 = param_3[8];
      local_138 = param_3[9];
      dStack_110 = param_3[10];
      dVar13 = dVar3 + dVar3;
      dVar9 = dVar10 + dVar10;
      dVar12 = dVar2 * (dVar2 + dVar2);
      local_158 = (1.0 - (dVar10 * dVar9 + dVar3 * dVar13)) * local_148;
      dStack_130 = (1.0 - (dVar10 * dVar9 + dVar12)) * local_138;
      local_108 = (1.0 - (dVar12 + dVar3 * dVar13)) * dStack_110;
      dVar12 = param_3[3];
      dVar10 = dVar9 * dVar12;
      dVar11 = (dVar2 + dVar2) * param_3[3];
      dVar12 = dVar13 * dVar12;
      dStack_150 = (dVar13 * dVar2 + dVar10) * local_148;
      local_128 = (dVar9 * dVar3 + dVar11) * local_138;
      local_118 = (dVar12 + *param_3 * dVar9) * dStack_110;
      local_148 = (*param_3 * dVar9 - dVar12) * local_148;
      local_138 = (dVar13 * dVar2 - dVar10) * local_138;
      dStack_110 = (dVar9 * dVar3 - dVar11) * dStack_110;
      dStack_140 = 0.0;
      uStack_120 = 0;
      uStack_100 = 0;
      local_f8 = param_3[4];
      dStack_f0 = param_3[5];
      local_e8 = param_3[6];
      uStack_e0 = 0x3ff0000000000000;
      local_190 = 0;
      local_198 = 0;
      local_1a0 = 0;
      local_1a8 = 0;
      local_16c = (float)(param_5 >> 0x18) * 0.003921569;
      FUN_147cb76de(param_2,&local_158,lVar7,&local_178);
      lVar7 = lVar7 + 0x38;
      lVar8 = lVar8 + -0x38;
    } while (lVar8 != 0);
  }
  if (local_168 != 0) {
    FUN_1400020a8(local_168);
  }
  if ((local_d0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c748f4 FUN_147c748f4 body=840 status=ok
// SIG undefined FUN_147c748f4(void)

void FUN_147c748f4(undefined8 param_1,longlong param_2,double *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  ulonglong local_180;
  undefined1 local_178;
  undefined4 local_170;
  undefined1 local_160 [8];
  longlong local_158;
  longlong local_150;
  longlong local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  double local_e8;
  undefined8 uStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined8 uStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  FUN_1479b2c0e(param_1,&local_128);
  local_180 = 0;
  local_188 = 0;
  FUN_140d3493e(local_160,*(undefined4 *)(*(longlong *)(param_2 + 8) + 0x3090),1,0);
  if ((longlong)(int)uStack_120 != 0) {
    lVar6 = (longlong)(int)uStack_120 * 0xc;
    lVar5 = local_128;
    do {
      FUN_1415874d8(&local_118,lVar5);
      FUN_147a7d5d8(local_160,&local_118);
      lVar5 = lVar5 + 0xc;
      lVar6 = lVar6 + -0xc;
    } while (lVar6 != 0);
  }
  lVar6 = local_138;
  lVar5 = (longlong)(int)uStack_130;
  if (lVar5 != 0) {
    lVar7 = 0;
    do {
      FUN_140d3489c(local_160,*(undefined4 *)(lVar6 + lVar7),*(undefined4 *)(lVar6 + 4 + lVar7),
                    *(undefined4 *)(lVar6 + 8 + lVar7));
      lVar7 = lVar7 + 0xc;
    } while (lVar5 * 0xc != lVar7);
  }
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar1 = param_3[2];
  local_108 = param_3[8];
  dVar4 = param_3[9];
  dStack_d0 = param_3[10];
  dVar12 = dVar3 + dVar3;
  dVar8 = dVar1 + dVar1;
  dVar11 = dVar2 * (dVar2 + dVar2);
  local_118 = (1.0 - (dVar1 * dVar8 + dVar3 * dVar12)) * local_108;
  dVar1 = (1.0 - (dVar1 * dVar8 + dVar11)) * dVar4;
  local_c8 = (1.0 - (dVar11 + dVar3 * dVar12)) * dStack_d0;
  dVar11 = param_3[3];
  dVar9 = dVar8 * dVar11;
  dVar10 = (dVar2 + dVar2) * param_3[3];
  dVar11 = dVar12 * dVar11;
  dStack_110 = (dVar12 * dVar2 + dVar9) * local_108;
  local_e8 = (dVar8 * dVar3 + dVar10) * dVar4;
  local_d8 = (dVar11 + *param_3 * dVar8) * dStack_d0;
  local_108 = (*param_3 * dVar8 - dVar11) * local_108;
  dStack_d0 = (dVar8 * dVar3 - dVar10) * dStack_d0;
  uStack_100 = 0;
  local_f8._8_4_ = SUB84(dVar1,0);
  local_f8._0_8_ = (dVar12 * dVar2 - dVar9) * dVar4;
  local_f8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  uStack_e0 = 0;
  uStack_c0 = 0;
  local_b8 = param_3[4];
  dStack_b0 = param_3[5];
  local_a8 = param_3[6];
  uStack_a0 = 0x3ff0000000000000;
  local_180 = local_180 & 0xffffffffffffff00;
  local_188 = 0;
  local_170 = 0xffffffff;
  local_178 = 1;
  FUN_1434d8d42(local_160,param_2,&local_118,param_5);
  if (local_150 != 0) {
    (*(code *)**(undefined8 **)(local_150 + 8))(local_150 + 8,1);
  }
  if (local_158 != 0) {
    (*(code *)**(undefined8 **)(local_158 + 8))(local_158 + 8,1);
  }
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c74c3e FUN_147c74c3e body=830 status=ok
// SIG undefined FUN_147c74c3e(void)

void FUN_147c74c3e(undefined8 param_1,double *param_2,undefined8 param_3,undefined4 param_4,
                  longlong param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  ulonglong local_190;
  undefined4 local_188;
  longlong local_180;
  undefined1 local_170 [8];
  longlong local_168;
  longlong local_160;
  longlong local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  undefined1 local_108 [16];
  double local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined8 uStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  FUN_1479b2c0e(param_1,&local_138);
  local_190 = 0;
  local_198 = 0;
  FUN_140d3493e(local_170,*(undefined4 *)(param_5 + 0x118),1,0);
  if ((longlong)(int)uStack_130 != 0) {
    lVar5 = (longlong)(int)uStack_130 * 0xc;
    lVar7 = local_138;
    do {
      FUN_1415874d8(&local_128,lVar7);
      FUN_147a7d5d8(local_170,&local_128);
      lVar7 = lVar7 + 0xc;
      lVar5 = lVar5 + -0xc;
    } while (lVar5 != 0);
  }
  lVar5 = local_148;
  lVar7 = (longlong)(int)uStack_140;
  if (lVar7 != 0) {
    lVar6 = 0;
    do {
      FUN_140d3489c(local_170,*(undefined4 *)(lVar5 + lVar6),*(undefined4 *)(lVar5 + 4 + lVar6),
                    *(undefined4 *)(lVar5 + 8 + lVar6));
      lVar6 = lVar6 + 0xc;
    } while (lVar7 * 0xc != lVar6);
  }
  dVar2 = *param_2;
  dVar3 = param_2[1];
  dVar1 = param_2[2];
  local_118 = param_2[8];
  dVar4 = param_2[9];
  dStack_e0 = param_2[10];
  dVar12 = dVar3 + dVar3;
  dVar8 = dVar1 + dVar1;
  dVar11 = dVar2 * (dVar2 + dVar2);
  local_128 = (1.0 - (dVar1 * dVar8 + dVar3 * dVar12)) * local_118;
  dVar1 = (1.0 - (dVar1 * dVar8 + dVar11)) * dVar4;
  local_d8 = (1.0 - (dVar11 + dVar3 * dVar12)) * dStack_e0;
  dVar11 = param_2[3];
  dVar9 = dVar8 * dVar11;
  dVar10 = (dVar2 + dVar2) * param_2[3];
  dVar11 = dVar12 * dVar11;
  dStack_120 = (dVar12 * dVar2 + dVar9) * local_118;
  local_f8 = (dVar8 * dVar3 + dVar10) * dVar4;
  local_e8 = (dVar11 + *param_2 * dVar8) * dStack_e0;
  local_118 = (*param_2 * dVar8 - dVar11) * local_118;
  dStack_e0 = (dVar8 * dVar3 - dVar10) * dStack_e0;
  uStack_110 = 0;
  local_108._8_4_ = SUB84(dVar1,0);
  local_108._0_8_ = (dVar12 * dVar2 - dVar9) * dVar4;
  local_108._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  uStack_f0 = 0;
  uStack_d0 = 0;
  local_c8 = param_2[4];
  dStack_c0 = param_2[5];
  local_b8 = param_2[6];
  uStack_b0 = 0x3ff0000000000000;
  local_180 = param_5;
  local_190 = local_190 & 0xffffffffffffff00;
  local_198 = 0;
  local_188 = param_4;
  FUN_147a7d716(local_170,&local_128,param_3,0);
  if (local_160 != 0) {
    (*(code *)**(undefined8 **)(local_160 + 8))(local_160 + 8,1);
  }
  if (local_168 != 0) {
    (*(code *)**(undefined8 **)(local_168 + 8))(local_168 + 8,1);
  }
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c74f7e FUN_147c74f7e body=4338 status=ok
// SIG undefined FUN_147c74f7e(void)

void FUN_147c74f7e(longlong param_1,longlong *param_2,double *param_3,undefined8 param_4,
                  uint param_5)

{
  undefined4 uVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  ulonglong uVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  ulonglong uVar30;
  int iVar31;
  longlong lVar32;
  ulonglong uVar33;
  bool bVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  float fVar40;
  undefined1 auStack_2a8 [32];
  undefined1 local_288;
  undefined4 local_280;
  undefined4 local_278;
  undefined1 local_270;
  int local_260;
  int local_25c;
  ulonglong local_258;
  int local_250;
  uint local_24c;
  ulonglong local_248;
  uint local_23c;
  longlong local_238;
  ulonglong local_230;
  ulonglong local_228;
  ulonglong local_220;
  ulonglong local_218;
  ulonglong local_210;
  undefined1 local_204 [16];
  uint local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  float local_1d4;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  double local_188;
  double dStack_180;
  double local_178;
  double local_170;
  double dStack_168;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  float local_108;
  float local_104;
  longlong local_100;
  undefined8 uStack_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    local_104 = (float)(param_5 >> 0x18) * 0.003921569;
    local_108 = (float)(param_5 & 0xff) * 0.003921569;
    local_110 = CONCAT44((float)(param_5 >> 8 & 0xff) * 0.003921569,
                         (float)(param_5 >> 0x10 & 0xff) * 0.003921569);
    FUN_1467edb3c(&local_110,&local_1f0);
    local_1f0 = local_1f0 + 240.0;
    local_1f0 = (float)(~-(uint)(local_1f0 < 360.0) & (uint)(local_1f0 + -360.0) |
                       (uint)local_1f0 & -(uint)(local_1f0 < 360.0));
    local_1ec = local_1ec * 0.5;
    local_1e8 = local_1e8 * 0.8;
    local_1e4 = local_1e4 * 0.5;
    lVar32 = *(longlong *)(param_1 + 0x30);
    FUN_1467eda2e(&local_1f0,local_204);
    FUN_1411ab38a(local_204,&local_1f4);
    dVar12 = *param_3;
    dVar13 = param_3[1];
    dVar35 = param_3[2];
    dVar14 = param_3[4];
    dVar15 = param_3[5];
    dVar16 = param_3[6];
    dVar36 = dVar13 + dVar13;
    dVar3 = dVar35 + dVar35;
    dVar37 = dVar12 * (dVar12 + dVar12);
    dVar38 = param_3[8];
    dVar5 = param_3[9];
    dVar7 = (1.0 - (dVar35 * dVar3 + dVar13 * dVar36)) * dVar38;
    dVar8 = (1.0 - (dVar35 * dVar3 + dVar37)) * dVar5;
    dVar6 = param_3[10];
    dVar9 = (1.0 - (dVar37 + dVar13 * dVar36)) * dVar6;
    dVar35 = param_3[3];
    dVar37 = dVar3 * dVar35;
    dVar4 = (dVar12 + dVar12) * param_3[3];
    dVar35 = dVar36 * dVar35;
    dVar10 = (dVar36 * dVar12 + dVar37) * dVar38;
    dVar11 = (dVar3 * dVar13 + dVar4) * dVar5;
    dVar39 = (dVar35 + *param_3 * dVar3) * dVar6;
    dVar38 = (*param_3 * dVar3 - dVar35) * dVar38;
    dVar5 = (dVar36 * dVar12 - dVar37) * dVar5;
    dVar6 = (dVar3 * dVar13 - dVar4) * dVar6;
    local_248 = (ulonglong)local_1f4;
    uVar27 = 0xffffffff;
    if ((int)DAT_14c761820 < *(int *)(lVar32 + 0xa0)) {
      uVar27 = DAT_14c761820;
    }
    local_110 = 0;
    local_108 = 0.0;
    local_100 = 0;
    uStack_f8 = 0;
    if (-1 < (int)uVar27) {
      iVar18 = *(int *)(lVar32 + 0x50) + 1;
      iVar23 = *(int *)(lVar32 + 0x54) + 1;
      local_108 = (float)(*(int *)(lVar32 + 0x58) + 1);
      local_110 = CONCAT44(iVar23,iVar18);
      FUN_144a84024(&local_100,iVar23 * iVar18 * (int)local_108,
                    CONCAT71((uint7)(uint3)((uint)local_108 >> 8),1));
      local_260 = *(int *)(lVar32 + 0x50);
      if (-1 < local_260) {
        local_258 = CONCAT44(local_258._4_4_,*(undefined4 *)(lVar32 + 0x54));
        iVar18 = *(int *)(lVar32 + 0x58);
        iVar23 = 0;
        do {
          if (-1 < (int)local_258) {
            iVar28 = 0;
            do {
              if (-1 < iVar18) {
                lVar21 = 0;
                do {
                  iVar29 = (int)lVar21;
                  *(undefined4 *)
                   (local_100 +
                   (longlong)((local_110._4_4_ * iVar23 + iVar28) * (int)local_108 + iVar29) * 4) =
                       0;
                  iVar24 = (*(int *)(lVar32 + 0x7c) * iVar23 + iVar28) * *(int *)(lVar32 + 0x80);
                  uVar22 = (ulonglong)
                           *(byte *)(*(longlong *)(lVar32 + 0x88) +
                                    (longlong)(iVar24 + iVar29) * 0x4c);
                  if (uVar22 != 0) {
                    lVar19 = *(longlong *)(lVar32 + 0x88) + (iVar24 + lVar21) * 0x4c;
                    uVar26 = 0;
                    do {
                      if (uVar27 == *(ushort *)(lVar19 + 2 + uVar26 * 2)) {
                        uVar1 = *(undefined4 *)(lVar19 + 0x1c + uVar26 * 4);
                        *(undefined4 *)
                         (local_100 +
                         (longlong)((local_110._4_4_ * iVar23 + iVar28) * (int)local_108 + iVar29) *
                         4) = uVar1;
                        local_140 = (double)CONCAT44(uVar1,uVar1);
                        uStack_138 = (double)CONCAT44(0x3f800000,uVar1);
                        lVar19 = *(longlong *)(lVar32 + 400);
                        lVar20 = (longlong)
                                 ((*(int *)(lVar32 + 0x184) * iVar23 + iVar28) *
                                  *(int *)(lVar32 + 0x188) + iVar29);
                        dVar35 = *(double *)(lVar19 + lVar20 * 0x18);
                        dVar3 = *(double *)(lVar19 + 8 + lVar20 * 0x18);
                        dVar37 = *(double *)(lVar19 + 0x10 + lVar20 * 0x18);
                        local_128 = dVar37 * dVar39 + dVar3 * dVar5 + dVar35 * dVar7 + dVar14;
                        dStack_120 = dVar37 * dVar6 + dVar3 * dVar8 + dVar35 * dVar10 + dVar15;
                        local_118 = dVar35 * dVar38 + dVar3 * dVar11 + dVar37 * dVar9 + dVar16;
                        local_288 = 0;
                        (**(code **)(*param_2 + 0x40))(param_2,&local_128,&local_140,&DAT_40a00000);
                        break;
                      }
                      uVar26 = uVar26 + 1;
                    } while (uVar22 != uVar26);
                  }
                  lVar21 = lVar21 + 1;
                } while (iVar29 != iVar18);
              }
              bVar34 = iVar28 != (int)local_258;
              iVar28 = iVar28 + 1;
            } while (bVar34);
          }
          bVar34 = iVar23 != local_260;
          iVar23 = iVar23 + 1;
        } while (bVar34);
      }
    }
    local_23c = *(uint *)(lVar32 + 0x50);
    if (0 < (int)local_23c) {
      local_250 = *(int *)(lVar32 + 0x54);
      uVar26 = (ulonglong)*(uint *)(lVar32 + 0x58);
      local_230 = local_248 >> 0x10 & 0xff;
      uVar30 = local_248 >> 8 & 0xff;
      fVar40 = (float)(byte)(local_248 >> 0x18) * 0.003921569;
      local_25c = 1;
      uVar22 = 0;
      local_248 = local_248 & 0xff;
      local_238 = lVar32;
      local_228 = uVar30;
      local_220 = uVar26;
      do {
        local_24c = (int)uVar22 + 1;
        if (0 < local_250) {
          uVar33 = 0;
          local_260 = 1;
          local_218 = uVar22;
          do {
            local_258 = (ulonglong)((int)uVar33 + 1);
            if (0 < (int)uVar26) {
              lVar21 = 0;
              local_210 = uVar33;
              do {
                iVar18 = (int)uVar22;
                iVar23 = (int)uVar33;
                if (*(char *)(lVar21 + (longlong)(*(int *)(lVar32 + 0x124) * iVar18 + iVar23) *
                                       (longlong)*(int *)(lVar32 + 0x128) +
                                       *(longlong *)(lVar32 + 0x130)) == '\0') {
                  iVar28 = (int)lVar21;
                  if ((int)uStack_f8 == 0) {
LAB_147c75652:
                    iVar25 = iVar28 + 1;
                    iVar24 = *(int *)(lVar32 + 0x184);
                    iVar29 = *(int *)(lVar32 + 0x188);
                    iVar18 = iVar24 * iVar18;
                    iVar31 = (iVar18 + iVar23) * iVar29;
                    lVar19 = *(longlong *)(lVar32 + 400);
                    lVar32 = iVar31 + lVar21;
                    dVar35 = *(double *)(lVar19 + lVar32 * 0x18);
                    dVar3 = *(double *)(lVar19 + 8 + lVar32 * 0x18);
                    dVar37 = *(double *)(lVar19 + 0x10 + lVar32 * 0x18);
                    local_128 = dVar37 * dVar39 + dVar3 * dVar5 + dVar35 * dVar7 + dVar14;
                    dStack_120 = dVar37 * dVar6 + dVar3 * dVar8 + dVar35 * dVar10 + dVar15;
                    local_118 = dVar35 * dVar38 + dVar3 * dVar11 + dVar37 * dVar9 + dVar16;
                    lVar32 = (longlong)(iVar31 + iVar25);
                    dVar35 = *(double *)(lVar19 + lVar32 * 0x18);
                    dVar3 = *(double *)(lVar19 + 8 + lVar32 * 0x18);
                    dVar37 = *(double *)(lVar19 + 0x10 + lVar32 * 0x18);
                    local_140 = dVar37 * dVar39 + dVar3 * dVar5 + dVar35 * dVar7 + dVar14;
                    uStack_138 = dVar37 * dVar6 + dVar3 * dVar8 + dVar35 * dVar10 + dVar15;
                    local_130 = dVar35 * dVar38 + dVar3 * dVar11 + dVar37 * dVar9 + dVar16;
                    lVar32 = (longlong)((iVar18 + local_260) * iVar29 + iVar28);
                    dVar35 = *(double *)(lVar19 + lVar32 * 0x18);
                    dVar3 = *(double *)(lVar19 + 8 + lVar32 * 0x18);
                    dVar37 = *(double *)(lVar19 + 0x10 + lVar32 * 0x18);
                    local_158 = dVar37 * dVar39 + dVar3 * dVar5 + dVar35 * dVar7 + dVar14;
                    dStack_150 = dVar37 * dVar6 + dVar3 * dVar8 + dVar35 * dVar10 + dVar15;
                    local_148 = dVar35 * dVar38 + dVar3 * dVar11 + dVar37 * dVar9 + dVar16;
                    lVar32 = (longlong)((iVar18 + (int)local_258) * iVar29 + iVar25);
                    dVar35 = *(double *)(lVar19 + lVar32 * 0x18);
                    dVar3 = *(double *)(lVar19 + 8 + lVar32 * 0x18);
                    dVar37 = *(double *)(lVar19 + 0x10 + lVar32 * 0x18);
                    local_170 = dVar37 * dVar39 + dVar3 * dVar5 + dVar35 * dVar7 + dVar14;
                    dStack_168 = dVar37 * dVar6 + dVar3 * dVar8 + dVar35 * dVar10 + dVar15;
                    local_160 = dVar35 * dVar38 + dVar3 * dVar11 + dVar37 * dVar9 + dVar16;
                    lVar32 = (longlong)((iVar23 + local_25c * iVar24) * iVar29 + iVar28);
                    dVar35 = *(double *)(lVar19 + lVar32 * 0x18);
                    dVar3 = *(double *)(lVar19 + 8 + lVar32 * 0x18);
                    dVar37 = *(double *)(lVar19 + 0x10 + lVar32 * 0x18);
                    local_188 = dVar37 * dVar39 + dVar3 * dVar5 + dVar35 * dVar7 + dVar14;
                    dStack_180 = dVar37 * dVar6 + dVar3 * dVar8 + dVar35 * dVar10 + dVar15;
                    local_178 = dVar35 * dVar38 + dVar3 * dVar11 + dVar37 * dVar9 + dVar16;
                    lVar32 = (longlong)(int)((iVar24 * local_24c + iVar23) * iVar29 + iVar25);
                    dVar35 = *(double *)(lVar19 + lVar32 * 0x18);
                    dVar3 = *(double *)(lVar19 + 8 + lVar32 * 0x18);
                    dVar37 = *(double *)(lVar19 + 0x10 + lVar32 * 0x18);
                    local_1a0 = dVar37 * dVar39 + dVar3 * dVar5 + dVar35 * dVar7 + dVar14;
                    dStack_198 = dVar37 * dVar6 + dVar3 * dVar8 + dVar35 * dVar10 + dVar15;
                    local_190 = dVar35 * dVar38 + dVar3 * dVar11 + dVar37 * dVar9 + dVar16;
                    lVar32 = (longlong)((local_25c * iVar24 + local_260) * iVar29 + iVar28);
                    dVar35 = *(double *)(lVar19 + lVar32 * 0x18);
                    dVar3 = *(double *)(lVar19 + 8 + lVar32 * 0x18);
                    dVar37 = *(double *)(lVar19 + 0x10 + lVar32 * 0x18);
                    local_1b8 = dVar37 * dVar39 + dVar3 * dVar5 + dVar35 * dVar7 + dVar14;
                    dStack_1b0 = dVar37 * dVar6 + dVar3 * dVar8 + dVar35 * dVar10 + dVar15;
                    local_1a8 = dVar35 * dVar38 + dVar3 * dVar11 + dVar37 * dVar9 + dVar16;
                    lVar32 = (longlong)
                             (int)((iVar24 * local_24c + (int)local_258) * iVar29 + iVar25);
                    dVar35 = *(double *)(lVar19 + lVar32 * 0x18);
                    dVar3 = *(double *)(lVar19 + 8 + lVar32 * 0x18);
                    dVar37 = *(double *)(lVar19 + 0x10 + lVar32 * 0x18);
                    local_1d0 = dVar37 * dVar39 + dVar3 * dVar5 + dVar35 * dVar7 + dVar14;
                    dStack_1c8 = dVar37 * dVar6 + dVar3 * dVar8 + dVar35 * dVar10 + dVar15;
                    local_1c0 = dVar35 * dVar38 + dVar3 * dVar11 + dVar37 * dVar9 + dVar16;
                    local_288 = 0;
                    (**(code **)(*param_2 + 0x20))(param_2,0,0xc,0);
                    uVar17 = local_230;
                    uVar26 = local_248;
                    local_1e0 = (&DAT_14c758c60)[local_230];
                    local_1dc = (&DAT_14c758c60)[uVar30];
                    local_1d8 = (&DAT_14c758c60)[local_248];
                    local_270 = 0;
                    local_278 = 0;
                    local_280 = 0;
                    local_288 = 0;
                    local_1d4 = fVar40;
                    (**(code **)(*param_2 + 0x30))(param_2,&local_128,&local_140);
                    local_1e0 = (&DAT_14c758c60)[uVar17];
                    local_1dc = (&DAT_14c758c60)[uVar30];
                    local_1d8 = (&DAT_14c758c60)[uVar26];
                    local_270 = 0;
                    local_278 = 0;
                    local_280 = 0;
                    local_288 = 0;
                    local_1d4 = fVar40;
                    (**(code **)(*param_2 + 0x30))(param_2,&local_128,&local_158,&local_1e0);
                    local_1e0 = (&DAT_14c758c60)[uVar17];
                    local_1dc = (&DAT_14c758c60)[uVar30];
                    local_1d8 = (&DAT_14c758c60)[uVar26];
                    local_270 = 0;
                    local_278 = 0;
                    local_280 = 0;
                    local_288 = 0;
                    local_1d4 = fVar40;
                    (**(code **)(*param_2 + 0x30))(param_2,&local_128,&local_188,&local_1e0);
                    local_1e0 = (&DAT_14c758c60)[uVar17];
                    local_1dc = (&DAT_14c758c60)[uVar30];
                    local_1d8 = (&DAT_14c758c60)[uVar26];
                    local_270 = 0;
                    local_278 = 0;
                    local_280 = 0;
                    local_288 = 0;
                    local_1d4 = fVar40;
                    (**(code **)(*param_2 + 0x30))(param_2,&local_140,&local_170,&local_1e0);
                    local_1e0 = (&DAT_14c758c60)[uVar17];
                    local_1dc = (&DAT_14c758c60)[uVar30];
                    local_1d8 = (&DAT_14c758c60)[uVar26];
                    local_270 = 0;
                    local_278 = 0;
                    local_280 = 0;
                    local_288 = 0;
                    local_1d4 = fVar40;
                    (**(code **)(*param_2 + 0x30))(param_2,&local_140,&local_1a0,&local_1e0);
                    local_1e0 = (&DAT_14c758c60)[uVar17];
                    local_1dc = (&DAT_14c758c60)[uVar30];
                    local_1d8 = (&DAT_14c758c60)[uVar26];
                    local_270 = 0;
                    local_278 = 0;
                    local_280 = 0;
                    local_288 = 0;
                    local_1d4 = fVar40;
                    (**(code **)(*param_2 + 0x30))(param_2,&local_158,&local_170,&local_1e0);
                    local_1e0 = (&DAT_14c758c60)[uVar17];
                    local_1dc = (&DAT_14c758c60)[uVar30];
                    local_1d8 = (&DAT_14c758c60)[uVar26];
                    local_270 = 0;
                    local_278 = 0;
                    local_280 = 0;
                    local_288 = 0;
                    local_1d4 = fVar40;
                    (**(code **)(*param_2 + 0x30))(param_2,&local_158,&local_1b8,&local_1e0);
                    local_1e0 = (&DAT_14c758c60)[uVar17];
                    local_1dc = (&DAT_14c758c60)[uVar30];
                    local_1d8 = (&DAT_14c758c60)[uVar26];
                    local_270 = 0;
                    local_278 = 0;
                    local_280 = 0;
                    local_288 = 0;
                    local_1d4 = fVar40;
                    (**(code **)(*param_2 + 0x30))(param_2,&local_170,&local_1d0,&local_1e0);
                    local_1e0 = (&DAT_14c758c60)[uVar17];
                    local_1dc = (&DAT_14c758c60)[uVar30];
                    local_1d8 = (&DAT_14c758c60)[uVar26];
                    local_270 = 0;
                    local_278 = 0;
                    local_280 = 0;
                    local_288 = 0;
                    local_1d4 = fVar40;
                    (**(code **)(*param_2 + 0x30))(param_2,&local_188,&local_1a0,&local_1e0);
                    local_1e0 = (&DAT_14c758c60)[uVar17];
                    local_1dc = (&DAT_14c758c60)[uVar30];
                    local_1d8 = (&DAT_14c758c60)[uVar26];
                    local_270 = 0;
                    local_278 = 0;
                    local_280 = 0;
                    local_288 = 0;
                    local_1d4 = fVar40;
                    (**(code **)(*param_2 + 0x30))(param_2,&local_188,&local_1b8,&local_1e0);
                    local_1e0 = (&DAT_14c758c60)[uVar17];
                    local_1dc = (&DAT_14c758c60)[uVar30];
                    local_1d8 = (&DAT_14c758c60)[uVar26];
                    local_270 = 0;
                    local_278 = 0;
                    local_280 = 0;
                    local_288 = 0;
                    local_1d4 = fVar40;
                    (**(code **)(*param_2 + 0x30))(param_2,&local_1a0,&local_1d0,&local_1e0);
                    uVar33 = local_210;
                    uVar22 = local_218;
                    lVar32 = local_238;
                    local_1e0 = (&DAT_14c758c60)[uVar17];
                    local_1dc = (&DAT_14c758c60)[uVar30];
                    local_1d8 = (&DAT_14c758c60)[uVar26];
                    local_270 = 0;
                    local_278 = 0;
                    local_280 = 0;
                    local_288 = 0;
                    local_1d4 = fVar40;
                    (**(code **)(*param_2 + 0x30))(param_2,&local_1b8,&local_1d0,&local_1e0);
                    uVar26 = local_220;
                  }
                  else {
                    iVar24 = (iVar23 + iVar18 * local_110._4_4_) * (int)local_108;
                    fVar2 = *(float *)(local_100 + (iVar24 + lVar21) * 4);
                    if (((fVar2 != 0.0) || (NAN(fVar2))) &&
                       ((fVar2 = *(float *)(local_100 + (longlong)(iVar24 + iVar28 + 1) * 4),
                        fVar2 != 0.0 || (NAN(fVar2))))) {
                      iVar24 = (iVar18 * local_110._4_4_ + local_260) * (int)local_108;
                      fVar2 = *(float *)(local_100 + (longlong)(iVar24 + iVar28) * 4);
                      if (((fVar2 != 0.0) || (NAN(fVar2))) &&
                         ((fVar2 = *(float *)(local_100 + (longlong)(iVar24 + iVar28 + 1) * 4),
                          fVar2 != 0.0 || (NAN(fVar2))))) {
                        iVar24 = (iVar23 + local_110._4_4_ * local_25c) * (int)local_108;
                        fVar2 = *(float *)(local_100 + (longlong)(iVar24 + iVar28) * 4);
                        if (((fVar2 != 0.0) || (NAN(fVar2))) &&
                           ((fVar2 = *(float *)(local_100 + (longlong)(iVar24 + iVar28 + 1) * 4),
                            fVar2 != 0.0 || (NAN(fVar2))))) {
                          iVar24 = (int)local_108 * (local_110._4_4_ * local_25c + local_260);
                          fVar2 = *(float *)(local_100 + (longlong)(iVar24 + iVar28) * 4);
                          if (((fVar2 != 0.0) || (NAN(fVar2))) &&
                             ((fVar2 = *(float *)(local_100 + (longlong)(iVar24 + iVar28 + 1) * 4),
                              fVar2 != 0.0 || (NAN(fVar2))))) goto LAB_147c75652;
                        }
                      }
                    }
                  }
                }
                lVar21 = lVar21 + 1;
              } while ((int)uVar26 != (int)lVar21);
            }
            local_260 = local_260 + 1;
            uVar33 = local_258 & 0xffffffff;
          } while ((int)local_258 != local_250);
        }
        local_25c = local_25c + 1;
        uVar22 = (ulonglong)local_24c;
      } while (local_24c != local_23c);
    }
    if (local_100 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c76072 FUN_147c76072 body=1055 status=ok
// SIG undefined FUN_147c76072(void)

void FUN_147c76072(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_208 [32];
  undefined1 local_1e8;
  ulonglong local_1e0;
  undefined1 local_1d8;
  undefined4 local_1d0;
  double *local_1c0;
  longlong local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  float local_17c;
  float local_178;
  float local_174;
  undefined1 local_170 [8];
  longlong local_168;
  longlong local_160;
  longlong local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  undefined1 local_128 [16];
  double local_118;
  undefined8 uStack_110;
  undefined1 local_108 [16];
  double local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined8 uStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    local_138 = 0;
    uStack_130 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_1c0 = param_3;
    FUN_146dd3016(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x230),&local_138);
    local_1e0 = 0;
    local_1e8 = 0;
    local_1b8 = param_2;
    FUN_140d3493e(local_170,*(undefined4 *)(*(longlong *)(param_2 + 8) + 0x3090),1,0);
    lVar11 = local_138;
    lVar12 = (longlong)(int)uStack_130;
    if (lVar12 != 0) {
      lVar13 = 0;
      do {
        local_1a0 = (double)*(float *)(lVar11 + 8 + lVar13);
        local_1a8 = (double)*(float *)(lVar11 + 4 + lVar13);
        local_1b0 = (double)*(float *)(lVar11 + lVar13);
        FUN_146e46828(*(undefined8 *)(param_1 + 0x30),&local_198,&local_1b0);
        local_174 = (float)local_188;
        local_178 = (float)local_190;
        local_17c = (float)local_198;
        FUN_1415874d8(local_128,&local_17c);
        FUN_147a7d5d8(local_170,local_128);
        lVar13 = lVar13 + 0xc;
      } while (lVar12 * 0xc != lVar13);
    }
    lVar11 = local_148;
    lVar12 = (longlong)(int)uStack_140;
    if (lVar12 != 0) {
      lVar13 = 0;
      do {
        FUN_140d3489c(local_170,*(undefined4 *)(lVar11 + lVar13),
                      *(undefined4 *)(lVar11 + 4 + lVar13),*(undefined4 *)(lVar11 + 8 + lVar13));
        lVar13 = lVar13 + 0xc;
      } while (lVar12 * 0xc != lVar13);
    }
    dVar6 = *local_1c0;
    dVar7 = local_1c0[1];
    dVar8 = local_1c0[2];
    dVar9 = local_1c0[8];
    dVar10 = local_1c0[9];
    dStack_e0 = local_1c0[10];
    dVar15 = dVar7 + dVar7;
    dVar1 = dVar8 + dVar8;
    dVar14 = dVar6 * (dVar6 + dVar6);
    dVar4 = (1.0 - (dVar8 * dVar1 + dVar14)) * dVar10;
    local_d8 = (1.0 - (dVar14 + dVar7 * dVar15)) * dStack_e0;
    dVar14 = local_1c0[3];
    dVar2 = dVar1 * dVar14;
    dVar3 = (dVar6 + dVar6) * local_1c0[3];
    dVar14 = dVar15 * dVar14;
    dVar5 = (dVar15 * dVar6 + dVar2) * dVar9;
    local_f8 = (dVar1 * dVar7 + dVar3) * dVar10;
    local_e8 = (dVar14 + *local_1c0 * dVar1) * dStack_e0;
    local_118 = (*local_1c0 * dVar1 - dVar14) * dVar9;
    dStack_e0 = (dVar1 * dVar7 - dVar3) * dStack_e0;
    local_128._8_4_ = SUB84(dVar5,0);
    local_128._0_8_ = (1.0 - (dVar8 * dVar1 + dVar7 * dVar15)) * dVar9;
    local_128._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    uStack_110 = 0;
    local_108._8_4_ = SUB84(dVar4,0);
    local_108._0_8_ = (dVar15 * dVar6 - dVar2) * dVar10;
    local_108._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    uStack_f0 = 0;
    uStack_d0 = 0;
    local_c8 = local_1c0[4];
    dStack_c0 = local_1c0[5];
    local_b8 = local_1c0[6];
    uStack_b0 = 0x3ff0000000000000;
    local_1e0 = local_1e0 & 0xffffffffffffff00;
    local_1e8 = 0;
    local_1d0 = 0xffffffff;
    local_1d8 = 1;
    FUN_1434d8d42(local_170,local_1b8,local_128,param_5);
    if (local_160 != 0) {
      (*(code *)**(undefined8 **)(local_160 + 8))(local_160 + 8,1);
    }
    if (local_168 != 0) {
      (*(code *)**(undefined8 **)(local_168 + 8))(local_168 + 8,1);
    }
    if (local_148 != 0) {
      FUN_1400020a8();
    }
    if (local_138 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c76492 FUN_147c76492 body=1080 status=ok
// SIG undefined FUN_147c76492(void)

void FUN_147c76492(longlong param_1,double *param_2,undefined8 param_3,int param_4,longlong param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_208 [32];
  undefined1 local_1e8;
  ulonglong local_1e0;
  int local_1d8;
  longlong local_1d0;
  int local_1c4;
  double *local_1c0;
  undefined8 local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  float local_17c;
  float local_178;
  float local_174;
  undefined1 local_170 [8];
  longlong local_168;
  longlong local_160;
  longlong local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  undefined1 local_128 [16];
  double local_118;
  undefined8 uStack_110;
  undefined1 local_108 [16];
  double local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined8 uStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    local_138 = 0;
    uStack_130 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_1c0 = param_2;
    local_1b8 = param_3;
    FUN_146dd3016(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x230),&local_138);
    lVar11 = param_5 + 0x50;
    if (*(longlong *)(param_5 + 0x60) != 0) {
      lVar11 = *(longlong *)(param_5 + 0x60);
    }
    local_1e0 = 0;
    local_1e8 = 0;
    local_1c4 = param_4;
    FUN_140d3493e(local_170,
                  *(undefined4 *)
                   (*(longlong *)(*(longlong *)(lVar11 + (longlong)param_4 * 8) + 8) + 0x3090),1,0);
    lVar11 = local_138;
    lVar12 = (longlong)(int)uStack_130;
    if (lVar12 != 0) {
      lVar13 = 0;
      do {
        local_1a0 = (double)*(float *)(lVar11 + 8 + lVar13);
        local_1a8 = (double)*(float *)(lVar11 + 4 + lVar13);
        local_1b0 = (double)*(float *)(lVar11 + lVar13);
        FUN_146e46828(*(undefined8 *)(param_1 + 0x30),&local_198,&local_1b0);
        local_174 = (float)local_188;
        local_178 = (float)local_190;
        local_17c = (float)local_198;
        FUN_1415874d8(local_128,&local_17c);
        FUN_147a7d5d8(local_170,local_128);
        lVar13 = lVar13 + 0xc;
      } while (lVar12 * 0xc != lVar13);
    }
    lVar11 = local_148;
    lVar12 = (longlong)(int)uStack_140;
    if (lVar12 != 0) {
      lVar13 = 0;
      do {
        FUN_140d3489c(local_170,*(undefined4 *)(lVar11 + lVar13),
                      *(undefined4 *)(lVar11 + 4 + lVar13),*(undefined4 *)(lVar11 + 8 + lVar13));
        lVar13 = lVar13 + 0xc;
      } while (lVar12 * 0xc != lVar13);
    }
    dVar6 = *local_1c0;
    dVar7 = local_1c0[1];
    dVar8 = local_1c0[2];
    dVar9 = local_1c0[8];
    dVar10 = local_1c0[9];
    dStack_e0 = local_1c0[10];
    dVar15 = dVar7 + dVar7;
    dVar1 = dVar8 + dVar8;
    dVar14 = dVar6 * (dVar6 + dVar6);
    dVar4 = (1.0 - (dVar8 * dVar1 + dVar14)) * dVar10;
    local_d8 = (1.0 - (dVar14 + dVar7 * dVar15)) * dStack_e0;
    dVar14 = local_1c0[3];
    dVar2 = dVar1 * dVar14;
    dVar3 = (dVar6 + dVar6) * local_1c0[3];
    dVar14 = dVar15 * dVar14;
    dVar5 = (dVar15 * dVar6 + dVar2) * dVar9;
    local_f8 = (dVar1 * dVar7 + dVar3) * dVar10;
    local_e8 = (dVar14 + *local_1c0 * dVar1) * dStack_e0;
    local_118 = (*local_1c0 * dVar1 - dVar14) * dVar9;
    dStack_e0 = (dVar1 * dVar7 - dVar3) * dStack_e0;
    local_128._8_4_ = SUB84(dVar5,0);
    local_128._0_8_ = (1.0 - (dVar8 * dVar1 + dVar7 * dVar15)) * dVar9;
    local_128._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    uStack_110 = 0;
    local_108._8_4_ = SUB84(dVar4,0);
    local_108._0_8_ = (dVar15 * dVar6 - dVar2) * dVar10;
    local_108._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    uStack_f0 = 0;
    uStack_d0 = 0;
    local_c8 = local_1c0[4];
    dStack_c0 = local_1c0[5];
    local_b8 = local_1c0[6];
    uStack_b0 = 0x3ff0000000000000;
    local_1d0 = param_5;
    local_1d8 = local_1c4;
    local_1e0 = local_1e0 & 0xffffffffffffff00;
    local_1e8 = 0;
    FUN_147a7d716(local_170,local_128,local_1b8,0);
    if (local_160 != 0) {
      (*(code *)**(undefined8 **)(local_160 + 8))(local_160 + 8,1);
    }
    if (local_168 != 0) {
      (*(code *)**(undefined8 **)(local_168 + 8))(local_168 + 8,1);
    }
    if (local_148 != 0) {
      FUN_1400020a8();
    }
    if (local_138 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c768cc FUN_147c768cc body=14323 status=ok
// SIG undefined FUN_147c768cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c768cc(longlong *param_1,double *param_2,undefined4 param_3,double *param_4,char param_5
                  ,char param_6,undefined1 param_7,uint param_8,double *param_9,uint param_10)

{
  longlong *plVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  void *_Dst;
  undefined8 *puVar19;
  int iVar20;
  uint uVar21;
  undefined1 *puVar22;
  longlong lVar23;
  longlong *plVar24;
  double *pdVar25;
  double *pdVar26;
  double *pdVar27;
  undefined8 *puVar28;
  longlong lVar29;
  longlong lVar30;
  bool bVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar53;
  undefined1 auVar52 [16];
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar58;
  undefined1 auVar57 [16];
  double dVar68;
  undefined1 auVar59 [16];
  double dVar69;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar70;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar71;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  double dVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  double dVar90;
  double dVar91;
  double dVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  double dVar101;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  double dVar102;
  double dVar103;
  undefined4 uVar104;
  double dVar105;
  double dVar106;
  undefined1 auVar107 [16];
  double dVar108;
  double dVar109;
  double dVar110;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  double dVar114;
  undefined4 uVar115;
  undefined4 uVar116;
  undefined4 uVar117;
  undefined4 uVar118;
  undefined1 auStack_518 [32];
  double *local_4f8;
  double *local_4f0;
  uint local_4e8;
  uint local_4e0;
  double *local_4d8;
  undefined1 local_4d0;
  longlong *local_4c8;
  undefined4 local_4bc;
  double *local_4b8;
  longlong local_4b0;
  double *local_4a8;
  double dStack_4a0;
  undefined1 local_498 [16];
  undefined1 local_488 [16];
  undefined1 local_478 [16];
  undefined1 local_468 [16];
  double local_458;
  double dStack_450;
  undefined1 local_448 [16];
  double local_438;
  double dStack_430;
  double local_428;
  double dStack_420;
  double local_418;
  double dStack_410;
  double local_408;
  double dStack_400;
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [16];
  double local_3d8;
  double dStack_3d0;
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [24];
  double *local_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  undefined1 local_378 [16];
  double *local_368;
  double dStack_360;
  undefined1 local_358 [16];
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  double local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  double local_2a8;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [12];
  undefined4 uStack_24c;
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  double dStack_1e0;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  double *local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  double *local_158;
  double dStack_150;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  double *local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_518;
  local_2b8 = param_2[8];
  uStack_2b0 = SUB84(param_2[9],0);
  uStack_2ac = (undefined4)((ulonglong)param_2[9] >> 0x20);
  local_2a8 = param_2[10];
  dVar55 = *param_2;
  dVar70 = param_2[1];
  dVar35 = param_2[2];
  dVar34 = param_2[3];
  local_4a8 = (double *)param_2[4];
  dStack_4a0 = param_2[5];
  local_458 = param_2[6];
  dStack_450 = param_2[7];
  dVar54 = dVar35 * dVar35 + dVar55 * dVar55;
  dVar58 = dVar34 * dVar34 + dVar70 * dVar70;
  auVar75._0_8_ = dVar54 + dVar58;
  auVar75._8_8_ = dVar54 + dVar58;
  auVar36._8_8_ = -(ulonglong)(1e-08 <= auVar75._8_8_);
  auVar36._0_8_ = -(ulonglong)(1e-08 <= auVar75._0_8_);
  auVar57 = sqrtpd(auVar75,auVar75);
  auVar57 = divpd(_DAT_149934d80,auVar57);
  auVar93._0_8_ = auVar57._0_8_ * dVar35;
  auVar93._8_8_ = auVar57._8_8_ * dVar34;
  local_468 = blendvpd(_DAT_149935300,auVar93,auVar36);
  local_488._0_8_ = (ulonglong)(dVar55 * auVar57._0_8_) & -(ulonglong)(1e-08 <= auVar75._0_8_);
  local_488._8_8_ = (ulonglong)(dVar70 * auVar57._8_8_) & -(ulonglong)(1e-08 <= auVar75._8_8_);
  local_448._8_4_ = (int)local_488._0_8_;
  local_448._0_8_ = local_488._0_8_;
  local_448._12_4_ = (int)((ulonglong)local_488._0_8_ >> 0x20);
  local_478._0_8_ = local_468._8_8_;
  local_478._8_4_ = local_468._8_4_;
  local_478._12_4_ = local_468._12_4_;
  local_3e8._8_4_ = (int)local_488._8_8_;
  local_3e8._0_8_ = local_488._8_8_;
  local_3e8._12_4_ = (int)((ulonglong)local_488._8_8_ >> 0x20);
  local_3f8._0_8_ = local_468._0_8_;
  local_3f8._8_4_ = local_468._0_4_;
  local_3f8._12_4_ = local_468._4_4_;
  auVar57._8_8_ = local_488._8_8_;
  auVar57._0_8_ = local_488._0_8_;
  local_3b8._0_16_ = blendpd(auVar57,local_468,2);
  auVar2._16_16_ = local_468;
  auVar2._0_16_ = local_488;
  local_3c8 = auVar2._8_16_;
  local_4b0 = (longlong)(int)param_8;
  pdVar25 = param_2;
  local_4c8 = param_1;
  local_4bc = param_3;
  local_4b8 = param_4;
  if (0 < (int)param_1[1]) {
    auVar36 = minpd(_DAT_149934d80,_DAT_149934d80);
    auVar57 = minpd(ZEXT816(0x3ff0000000000000),ZEXT816(0x3ff0000000000000));
    auVar75 = ZEXT816(0);
    auVar37._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
    auVar37._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
    iVar14 = movmskpd(param_8,auVar37);
    auVar51._8_8_ = -(ulonglong)(auVar57._8_8_ < 0.0);
    auVar51._0_8_ = -(ulonglong)(auVar57._0_8_ < 0.0);
    iVar20 = movmskpd((int)param_1,auVar51);
    dVar54 = (double)local_488._8_8_ + (double)local_488._8_8_;
    dVar58 = (double)local_3f8._0_8_ + (double)local_3f8._0_8_;
    dVar55 = ((double)local_488._0_8_ + (double)local_488._0_8_) * (double)local_488._0_8_;
    local_418 = (double)DAT_149934d80 -
                (dVar58 * (double)local_3f8._0_8_ + dVar54 * (double)local_488._8_8_);
    dVar35 = DAT_149934d80._8_8_ - (dVar58 * (double)local_3f8._0_8_ + dVar55);
    local_438 = 1.0 - (dVar55 + dVar54 * (double)local_488._8_8_);
    dVar55 = dVar58 * (double)local_488._8_8_;
    dVar56 = (double)local_488._0_8_ * dVar58;
    dVar53 = ((double)local_488._0_8_ + (double)local_488._0_8_) * (double)local_478._8_8_;
    dVar34 = dVar54 * (double)local_478._0_8_;
    dStack_410 = dVar54 * (double)local_488._0_8_ + dVar58 * (double)local_478._0_8_;
    dVar70 = dVar55 - dVar53;
    local_408 = dVar56 - dVar34;
    dStack_430 = 0.0;
    dStack_400 = 0.0;
    local_498._8_4_ = SUB84(dVar35,0);
    local_498._0_8_ = dVar54 * (double)local_488._0_8_ - dVar58 * (double)local_478._0_8_;
    local_498._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
    dStack_420 = 1.0;
    local_3d8 = (double)local_3f8._0_8_ * 0.0 * -1.0 +
                (double)local_488._8_8_ * 0.0 +
                (double)local_488._0_8_ * 1.0 * 1.0 + (double)local_478._0_8_ * 0.0;
    dStack_3d0 = (double)local_3f8._0_8_ * 0.0 * 1.0 +
                 (double)local_3e8._8_8_ * 1.0 +
                 (double)local_448._8_8_ * 0.0 * -1.0 + (double)local_478._8_8_ * 0.0;
    local_398 = (double)local_3f8._0_8_ * 1.0 * 1.0 +
                (((double)local_488._0_8_ * 0.0 * 1.0 + (double)local_478._0_8_ * 0.0) -
                (double)local_488._8_8_ * 0.0);
    dStack_390 = (double)local_3f8._8_8_ * 0.0 * -1.0 +
                 (((double)local_488._0_8_ * 0.0 * -1.0 + (double)local_478._8_8_ * 1.0) -
                 (double)local_3e8._8_8_ * 0.0);
    local_3a0 = param_9 + 10;
    uVar32 = DAT_149931180;
    lVar29 = 0;
    lVar30 = 0;
    local_428 = local_458;
    do {
      lVar23 = *local_4c8;
      pdVar25 = (double *)(lVar23 + 0x30 + lVar29);
      dVar35 = *pdVar25 * local_2b8;
      dVar54 = pdVar25[1] * (double)CONCAT44(uStack_2ac,uStack_2b0);
      dVar58 = *(double *)(lVar23 + 0x40 + lVar29) * local_2a8;
      if (iVar14 + iVar20 * 4 == 0) {
        dVar68 = dVar54 * (double)local_488._0_8_ - dVar35 * (double)local_3c8._0_8_;
        dVar90 = dVar58 * (double)local_488._8_8_ - dVar54 * (double)local_3c8._8_8_;
        dVar101 = dVar35 * (double)local_468._0_8_ - dVar58 * (double)local_3b8._0_8_;
        dVar69 = (double)local_468._8_8_ * 0.0 - (double)local_3b8._8_8_ * 0.0;
        dVar90 = dVar90 + dVar90;
        dVar101 = dVar101 + dVar101;
        dVar68 = dVar68 + dVar68;
        dVar69 = dVar69 + dVar69;
        local_158 = (double *)
                    ((dVar68 * (double)local_488._8_8_ - dVar101 * (double)local_3c8._8_8_) +
                     (double)local_478._0_8_ * dVar90 + dVar35 + (double)local_4a8);
        dStack_150 = (dVar90 * (double)local_468._0_8_ - dVar68 * (double)local_3b8._0_8_) +
                     (double)local_478._8_8_ * dVar101 + dVar54 + dStack_4a0;
        local_148._0_8_ =
             (dVar101 * (double)local_488._0_8_ - dVar90 * (double)local_3c8._0_8_) +
             (double)local_478._0_8_ * dVar68 + dVar58 + local_458;
        local_148._8_8_ =
             (dVar69 * (double)local_468._8_8_ - dVar69 * (double)local_3b8._8_8_) +
             (double)local_478._8_8_ * dVar69 + 0.0 + dStack_450;
        local_178._8_8_ = dStack_3d0;
        local_178._0_8_ = local_3d8;
        local_168._8_8_ = dStack_390;
        local_168._0_8_ = local_398;
      }
      else {
        local_1f8._8_8_ = dStack_410;
        local_1f8._0_8_ = local_418;
        local_1e8 = local_408;
        dStack_1e0 = dStack_400;
        local_1d8 = local_498;
        local_1c8._8_8_ = 0;
        local_1c8._0_8_ = dVar55 + dVar53;
        local_1b8._8_4_ = SUB84(dVar70,0);
        local_1b8._0_8_ = dVar56 + dVar34;
        local_1b8._12_4_ = (int)((ulonglong)dVar70 >> 0x20);
        local_1a8._8_8_ = dStack_430;
        local_1a8._0_8_ = local_438;
        local_198 = local_4a8;
        dStack_190 = dStack_4a0;
        local_188 = local_428;
        dStack_180 = dStack_420;
        local_278 = ZEXT816(0x3ff0000000000000);
        local_258 = ZEXT812(0);
        uStack_24c = 0x3ff00000;
        local_228 = 1.0;
        uStack_220 = 0;
        uStack_200 = 0x3ff0000000000000;
        local_268 = auVar75;
        local_248 = auVar75;
        local_238 = auVar75;
        local_218 = dVar35;
        dStack_210 = dVar54;
        local_208 = dVar58;
        FUN_1447fea8d(local_178,local_278,local_1f8);
        FUN_144a1c686(local_178,0x3e45798ee0000000);
        FUN_14481fd10(local_328,local_178);
        dVar35 = local_318._0_8_;
        dVar54 = local_318._8_8_;
        dVar58 = dVar35 * dVar35 + (double)local_328._0_8_ * (double)local_328._0_8_;
        dVar68 = dVar54 * dVar54 + (double)local_328._8_8_ * (double)local_328._8_8_;
        auVar59._0_8_ = dVar58 + dVar68;
        auVar59._8_8_ = dVar58 + dVar68;
        auVar38._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar59._8_8_);
        auVar38._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar59._0_8_);
        auVar36 = sqrtpd(auVar59,auVar59);
        auVar36 = divpd(_DAT_149934d80,auVar36);
        auVar73._0_8_ = auVar36._0_8_ * dVar35;
        auVar73._8_8_ = auVar36._8_8_ * dVar54;
        local_178._0_8_ =
             (ulonglong)((double)local_328._0_8_ * auVar36._0_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar59._0_8_);
        local_178._8_8_ =
             (ulonglong)((double)local_328._8_8_ * auVar36._8_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar59._8_8_);
        local_168 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar73,auVar38);
        local_148._8_8_ = 0;
        local_148._0_8_ = local_108;
        lVar23 = *local_4c8;
        local_158 = local_118;
        dStack_150 = dStack_110;
      }
      local_138 = _DAT_149934d80;
      local_128 = ZEXT816(0x3ff0000000000000);
      if (param_6 == '\0') {
        param_1 = (longlong *)(lVar23 + lVar29);
        pdVar25 = (double *)param_9[0xc];
        if ((double *)param_9[0xc] == (double *)0x0) {
          pdVar25 = local_3a0;
        }
        pdVar25 = (double *)pdVar25[local_4b0];
        local_4f8 = (double *)CONCAT44(local_4f8._4_4_,local_4bc);
        FUN_147c6ed9e(param_1,pdVar25,local_178,&local_2b8);
      }
      else {
        dVar35 = (double)(CONCAT44(uStack_2ac,uStack_2b0) & uVar32);
        local_1e8 = (double)((ulonglong)local_2b8 & uVar32);
        if (dVar35 <= (double)((ulonglong)local_2b8 & uVar32)) {
          local_1e8 = dVar35;
        }
        if ((double)((ulonglong)local_2a8 & uVar32) <= local_1e8) {
          local_1e8 = (double)((ulonglong)local_2a8 & uVar32);
        }
        local_1e8 = local_1e8 * (double)*(float *)(lVar23 + 0x48 + lVar29);
        local_1f8._8_8_ = local_1e8;
        local_1f8._0_8_ = local_1e8;
        local_278._8_8_ = dStack_150;
        local_278._0_8_ = local_158;
        local_268._0_8_ = local_148._0_8_;
        local_4d8 = param_9;
        local_4e0 = param_8;
        local_4e8 = local_4e8 & 0xffffff00;
        local_4f0 = (double *)((ulonglong)local_4f0 & 0xffffffffffffff00);
        local_4f8 = local_4b8;
        param_1 = (longlong *)local_278;
        pdVar25 = (double *)local_1f8;
        FUN_147cb3c06(local_278,local_1f8,0x20,0x10);
      }
      lVar30 = lVar30 + 1;
      lVar29 = lVar29 + 0x50;
    } while (lVar30 < (int)local_4c8[1]);
  }
  uVar104 = local_4bc;
  uVar15 = SUB84(param_1,0);
  local_438 = (double)local_488._0_8_ + (double)local_488._0_8_;
  dStack_430 = (double)local_488._8_8_ + (double)local_488._8_8_;
  uVar115 = (undefined4)DAT_149934d80;
  uVar116 = DAT_149934d80._4_4_;
  uVar117 = DAT_149934d80._8_4_;
  uVar118 = DAT_149934d80._12_4_;
  if (0 < (int)local_4c8[3]) {
    dVar35 = (double)local_468._0_8_ + (double)local_468._0_8_;
    local_428 = (double)DAT_149934d80 -
                (dVar35 * (double)local_468._0_8_ + dStack_430 * (double)local_488._8_8_);
    auVar36 = ZEXT816(0x3ff0000000000000);
    local_408 = 1.0 - (local_438 * (double)local_488._0_8_ + dStack_430 * (double)local_488._8_8_);
    dVar55 = dVar35 * (double)local_488._8_8_;
    dVar54 = (double)local_448._0_8_ * dVar35;
    dVar34 = local_438 * (double)local_478._8_8_;
    dVar58 = dStack_430 * (double)local_478._0_8_;
    dStack_420 = dStack_430 * (double)local_488._0_8_ + dVar35 * (double)local_478._0_8_;
    dVar70 = dVar55 - dVar34;
    local_418 = dVar54 - dVar58;
    dStack_400 = 0.0;
    dStack_410 = 0.0;
    local_498._8_8_ =
         DAT_149934d80._8_8_ -
         (dVar35 * (double)local_468._0_8_ + local_438 * (double)local_488._0_8_);
    local_498._0_8_ = dStack_430 * (double)local_488._0_8_ - dVar35 * (double)local_478._0_8_;
    local_3d8 = local_458;
    dStack_3d0 = 1.0;
    lVar30 = 0;
    lVar29 = 0;
    do {
      FUN_140492472(local_4c8[2] + lVar30,local_328,&local_2b8,&DAT_14c846480);
      puVar22 = local_2e8 + 8;
      uVar15 = FUN_144a7484c(puVar22,local_178);
      auVar57 = _DAT_149934d80;
      auVar74._4_4_ = uVar116;
      auVar74._0_4_ = uVar115;
      auVar74._12_4_ = uVar118;
      auVar74._8_4_ = uVar117;
      auVar4._4_4_ = uVar116;
      auVar4._0_4_ = uVar115;
      auVar4._8_4_ = uVar117;
      auVar4._12_4_ = uVar118;
      auVar75 = minpd(auVar74,auVar4);
      auVar93 = minpd(auVar36,auVar36);
      auVar76._8_8_ = -(ulonglong)(auVar75._8_8_ < 0.0);
      auVar76._0_8_ = -(ulonglong)(auVar75._0_8_ < 0.0);
      iVar14 = movmskpd(uVar15,auVar76);
      auVar94._8_8_ = -(ulonglong)(auVar93._8_8_ < 0.0);
      auVar94._0_8_ = -(ulonglong)(auVar93._0_8_ < 0.0);
      uVar21 = movmskpd((int)puVar22,auVar94);
      if ((uVar21 & 0x3fffffff) == 0 && iVar14 == 0) {
        dVar35 = local_478._0_8_;
        dVar53 = local_478._8_8_;
        local_388 = (double)local_178._8_8_ * (double)local_3f8._0_8_ * -1.0 +
                    (double)local_448._0_8_ * (double)local_168._8_8_ * 1.0 +
                    dVar35 * (double)local_178._0_8_ +
                    (double)local_3e8._0_8_ * (double)local_168._0_8_;
        dStack_380 = (double)local_178._0_8_ * (double)local_3f8._8_8_ * 1.0 +
                     (double)local_448._8_8_ * (double)local_168._0_8_ * -1.0 +
                     dVar53 * (double)local_178._8_8_ +
                     (double)local_3e8._8_8_ * (double)local_168._8_8_;
        auVar95._8_8_ = 0;
        auVar95._0_8_ = local_2f8._0_8_;
        local_378._8_8_ =
             (double)local_168._0_8_ * (double)local_3f8._8_8_ * -1.0 +
             (((double)local_448._8_8_ * (double)local_178._0_8_ * -1.0 +
              dVar53 * (double)local_168._8_8_) - (double)local_3e8._8_8_ * (double)local_178._8_8_)
        ;
        local_378._0_8_ =
             (double)local_168._8_8_ * (double)local_3f8._0_8_ * 1.0 +
             (((double)local_448._0_8_ * (double)local_178._8_8_ * 1.0 +
              dVar35 * (double)local_168._0_8_) - (double)local_3e8._0_8_ * (double)local_178._0_8_)
        ;
        auVar39._0_8_ = (double)local_2e8._0_8_ * 1.0;
        auVar39._8_8_ = 0;
        auVar57 = blendpd(auVar95,auVar39,2);
        dVar56 = (double)local_2f8._8_8_ * (double)local_488._0_8_ -
                 (double)local_2f8._0_8_ * (double)local_3c8._0_8_;
        dVar68 = auVar39._0_8_ * (double)local_488._8_8_ -
                 (double)local_2f8._8_8_ * (double)local_3c8._8_8_;
        dVar90 = auVar57._0_8_ * (double)local_468._0_8_ - auVar39._0_8_ * (double)local_3b8._0_8_;
        dVar101 = auVar57._8_8_ * (double)local_468._8_8_ - (double)local_3b8._8_8_ * 0.0;
        dVar68 = dVar68 + dVar68;
        dVar90 = dVar90 + dVar90;
        dVar56 = dVar56 + dVar56;
        dVar101 = dVar101 + dVar101;
        local_358._0_8_ =
             (dVar90 * (double)local_488._0_8_ - dVar68 * (double)local_3c8._0_8_) +
             dVar35 * dVar56 + auVar39._0_8_ + local_458;
        local_358._8_8_ =
             (dVar101 * (double)local_468._8_8_ - dVar101 * (double)local_3b8._8_8_) +
             dVar53 * dVar101 + 0.0 + dStack_450;
        local_368 = (double *)
                    ((dVar56 * (double)local_488._8_8_ - dVar90 * (double)local_3c8._8_8_) +
                     dVar35 * dVar68 + (double)local_2f8._0_8_ + (double)local_4a8);
        dStack_360 = (dVar68 * (double)local_468._0_8_ - dVar56 * (double)local_3b8._0_8_) +
                     dVar53 * dVar90 + (double)local_2f8._8_8_ + dStack_4a0;
      }
      else {
        dVar35 = (double)local_178._8_8_ + (double)local_178._8_8_;
        dVar56 = (double)local_168._0_8_ + (double)local_168._0_8_;
        dVar53 = (double)local_178._0_8_ * ((double)local_178._0_8_ + (double)local_178._0_8_);
        uVar115 = (undefined4)DAT_149934d80;
        uVar116 = DAT_149934d80._4_4_;
        uVar117 = DAT_149934d80._8_4_;
        uVar118 = DAT_149934d80._12_4_;
        local_228 = 1.0 - (dVar53 + (double)local_178._8_8_ * dVar35);
        dVar68 = ((double)local_178._0_8_ + (double)local_178._0_8_) * (double)local_168._8_8_;
        local_278._8_8_ = dVar35 * (double)local_178._0_8_ + dVar56 * (double)local_168._8_8_;
        local_278._0_8_ =
             1.0 - ((double)local_168._0_8_ * dVar56 + (double)local_178._8_8_ * dVar35);
        local_268._8_8_ = 0;
        local_268._0_8_ = (double)local_178._0_8_ * dVar56 - dVar35 * (double)local_168._8_8_;
        stack0xfffffffffffffdb0 = 1.0 - ((double)local_168._0_8_ * dVar56 + dVar53);
        local_258._0_8_ = dVar35 * (double)local_178._0_8_ - dVar56 * (double)local_168._8_8_;
        local_248._8_8_ = 0;
        local_248._0_8_ = dVar56 * (double)local_178._8_8_ + dVar68;
        local_238._8_8_ = dVar56 * (double)local_178._8_8_ - dVar68;
        local_238._0_8_ = dVar35 * (double)local_168._8_8_ + (double)local_178._0_8_ * dVar56;
        uStack_220 = 0;
        local_218 = (double)local_2f8._0_8_;
        dStack_210 = (double)local_2f8._8_8_;
        local_208 = (double)local_2e8._0_8_;
        uStack_200 = 0x3ff0000000000000;
        local_1f8._8_8_ = dStack_420;
        local_1f8._0_8_ = local_428;
        local_1e8 = local_418;
        dStack_1e0 = dStack_410;
        local_1d8 = local_498;
        local_1c8._8_8_ = 0;
        local_1c8._0_8_ = dVar55 + dVar34;
        local_1b8._8_4_ = SUB84(dVar70,0);
        local_1b8._0_8_ = dVar54 + dVar58;
        local_1b8._12_4_ = (int)((ulonglong)dVar70 >> 0x20);
        local_1a8._8_8_ = dStack_400;
        local_1a8._0_8_ = local_408;
        local_198 = local_4a8;
        dStack_190 = dStack_4a0;
        local_188 = local_3d8;
        dStack_180 = dStack_3d0;
        FUN_1447fea8d(local_178,local_278,local_1f8);
        FUN_144a1c686(local_178,0x3e45798ee0000000);
        FUN_14481fd10(&local_298,local_178);
        dVar35 = local_288 * local_288 + local_298 * local_298;
        dVar53 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
        auVar60._0_8_ = dVar35 + dVar53;
        auVar60._8_8_ = dVar35 + dVar53;
        auVar40._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar60._8_8_);
        auVar40._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar60._0_8_);
        auVar75 = sqrtpd(auVar60,auVar60);
        auVar57 = divpd(auVar57,auVar75);
        auVar77._0_8_ = auVar57._0_8_ * local_288;
        auVar77._8_8_ = auVar57._8_8_ * dStack_280;
        local_388 = (double)((ulonglong)(local_298 * auVar57._0_8_) &
                            -(ulonglong)(9.99999993922529e-09 <= auVar60._0_8_));
        dStack_380 = (double)((ulonglong)(dStack_290 * auVar57._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar60._8_8_));
        local_378 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar77,auVar40);
        local_358._8_8_ = 0;
        local_358._0_8_ = local_108;
        local_368 = local_118;
        dStack_360 = dStack_110;
      }
      lVar23 = local_4c8[2] + lVar30;
      local_348 = uVar115;
      uStack_344 = uVar116;
      uStack_340 = uVar117;
      uStack_33c = uVar118;
      local_338 = auVar36;
      if (param_6 == '\0') {
        pdVar25 = (double *)param_9[0xc];
        if ((double *)param_9[0xc] == (double *)0x0) {
          pdVar25 = param_9 + 10;
        }
        pdVar25 = (double *)pdVar25[local_4b0];
        local_4f8 = (double *)CONCAT44(local_4f8._4_4_,uVar104);
        FUN_147c6f4b4(lVar23,pdVar25,&local_388,&local_2b8);
        uVar15 = (undefined4)lVar23;
      }
      else {
        local_4f0 = param_9;
        local_4f8 = (double *)CONCAT44(local_4f8._4_4_,param_8);
        pdVar25 = &local_388;
        FUN_147c700c6(lVar23,&local_388,&local_2b8,local_4b8);
        uVar15 = (undefined4)lVar23;
      }
      lVar29 = lVar29 + 1;
      lVar30 = lVar30 + 0x70;
    } while (lVar29 < (int)local_4c8[3]);
  }
  if (0 < (int)local_4c8[5]) {
    dVar35 = (double)local_468._0_8_ + (double)local_468._0_8_;
    local_428 = (double)CONCAT44(uVar116,uVar115) -
                (dVar35 * (double)local_468._0_8_ + dStack_430 * (double)local_488._8_8_);
    auVar36 = ZEXT816(0x3ff0000000000000);
    local_408 = 1.0 - (local_438 * (double)local_488._0_8_ + dStack_430 * (double)local_488._8_8_);
    dVar55 = dVar35 * (double)local_488._8_8_;
    dVar54 = (double)local_448._0_8_ * dVar35;
    dVar34 = local_438 * (double)local_478._8_8_;
    dVar58 = dStack_430 * (double)local_478._0_8_;
    dStack_420 = dStack_430 * (double)local_488._0_8_ + dVar35 * (double)local_478._0_8_;
    dVar70 = dVar55 - dVar34;
    local_418 = dVar54 - dVar58;
    dStack_400 = 0.0;
    dStack_410 = 0.0;
    local_498._8_8_ =
         (double)CONCAT44(uVar118,uVar117) -
         (dVar35 * (double)local_468._0_8_ + local_438 * (double)local_488._0_8_);
    local_498._0_8_ = dStack_430 * (double)local_488._0_8_ - dVar35 * (double)local_478._0_8_;
    local_3d8 = local_458;
    dStack_3d0 = 1.0;
    lVar30 = 0;
    lVar29 = 0;
    do {
      FUN_1417e5e4c(local_4c8[4] + lVar30,local_328,&local_2b8,&DAT_14c846480);
      puVar22 = local_2e8 + 8;
      uVar15 = FUN_144a7484c(puVar22,local_178);
      auVar57 = _DAT_149934d80;
      auVar78._4_4_ = uVar116;
      auVar78._0_4_ = uVar115;
      auVar78._12_4_ = uVar118;
      auVar78._8_4_ = uVar117;
      auVar5._4_4_ = uVar116;
      auVar5._0_4_ = uVar115;
      auVar5._8_4_ = uVar117;
      auVar5._12_4_ = uVar118;
      auVar75 = minpd(auVar78,auVar5);
      auVar93 = minpd(auVar36,auVar36);
      auVar79._8_8_ = -(ulonglong)(auVar75._8_8_ < 0.0);
      auVar79._0_8_ = -(ulonglong)(auVar75._0_8_ < 0.0);
      iVar14 = movmskpd(uVar15,auVar79);
      auVar96._8_8_ = -(ulonglong)(auVar93._8_8_ < 0.0);
      auVar96._0_8_ = -(ulonglong)(auVar93._0_8_ < 0.0);
      uVar21 = movmskpd((int)puVar22,auVar96);
      if ((uVar21 & 0x3fffffff) == 0 && iVar14 == 0) {
        dVar35 = local_478._0_8_;
        dVar53 = local_478._8_8_;
        local_388 = (double)local_178._8_8_ * (double)local_3f8._0_8_ * -1.0 +
                    (double)local_448._0_8_ * (double)local_168._8_8_ * 1.0 +
                    dVar35 * (double)local_178._0_8_ +
                    (double)local_3e8._0_8_ * (double)local_168._0_8_;
        dStack_380 = (double)local_178._0_8_ * (double)local_3f8._8_8_ * 1.0 +
                     (double)local_448._8_8_ * (double)local_168._0_8_ * -1.0 +
                     dVar53 * (double)local_178._8_8_ +
                     (double)local_3e8._8_8_ * (double)local_168._8_8_;
        auVar97._8_8_ = 0;
        auVar97._0_8_ = local_2f8._0_8_;
        local_378._8_8_ =
             (double)local_168._0_8_ * (double)local_3f8._8_8_ * -1.0 +
             (((double)local_448._8_8_ * (double)local_178._0_8_ * -1.0 +
              dVar53 * (double)local_168._8_8_) - (double)local_3e8._8_8_ * (double)local_178._8_8_)
        ;
        local_378._0_8_ =
             (double)local_168._8_8_ * (double)local_3f8._0_8_ * 1.0 +
             (((double)local_448._0_8_ * (double)local_178._8_8_ * 1.0 +
              dVar35 * (double)local_168._0_8_) - (double)local_3e8._0_8_ * (double)local_178._0_8_)
        ;
        auVar41._0_8_ = (double)local_2e8._0_8_ * 1.0;
        auVar41._8_8_ = 0;
        auVar57 = blendpd(auVar97,auVar41,2);
        dVar56 = (double)local_2f8._8_8_ * (double)local_488._0_8_ -
                 (double)local_2f8._0_8_ * (double)local_3c8._0_8_;
        dVar68 = auVar41._0_8_ * (double)local_488._8_8_ -
                 (double)local_2f8._8_8_ * (double)local_3c8._8_8_;
        dVar90 = auVar57._0_8_ * (double)local_468._0_8_ - auVar41._0_8_ * (double)local_3b8._0_8_;
        dVar101 = auVar57._8_8_ * (double)local_468._8_8_ - (double)local_3b8._8_8_ * 0.0;
        dVar68 = dVar68 + dVar68;
        dVar90 = dVar90 + dVar90;
        dVar56 = dVar56 + dVar56;
        dVar101 = dVar101 + dVar101;
        local_358._0_8_ =
             (dVar90 * (double)local_488._0_8_ - dVar68 * (double)local_3c8._0_8_) +
             dVar35 * dVar56 + auVar41._0_8_ + local_458;
        local_358._8_8_ =
             (dVar101 * (double)local_468._8_8_ - dVar101 * (double)local_3b8._8_8_) +
             dVar53 * dVar101 + 0.0 + dStack_450;
        local_368 = (double *)
                    ((dVar56 * (double)local_488._8_8_ - dVar90 * (double)local_3c8._8_8_) +
                     dVar35 * dVar68 + (double)local_2f8._0_8_ + (double)local_4a8);
        dStack_360 = (dVar68 * (double)local_468._0_8_ - dVar56 * (double)local_3b8._0_8_) +
                     dVar53 * dVar90 + (double)local_2f8._8_8_ + dStack_4a0;
      }
      else {
        dVar35 = (double)local_178._8_8_ + (double)local_178._8_8_;
        dVar56 = (double)local_168._0_8_ + (double)local_168._0_8_;
        dVar53 = (double)local_178._0_8_ * ((double)local_178._0_8_ + (double)local_178._0_8_);
        uVar115 = (undefined4)DAT_149934d80;
        uVar116 = DAT_149934d80._4_4_;
        uVar117 = DAT_149934d80._8_4_;
        uVar118 = DAT_149934d80._12_4_;
        local_228 = 1.0 - (dVar53 + (double)local_178._8_8_ * dVar35);
        dVar68 = ((double)local_178._0_8_ + (double)local_178._0_8_) * (double)local_168._8_8_;
        local_278._8_8_ = dVar35 * (double)local_178._0_8_ + dVar56 * (double)local_168._8_8_;
        local_278._0_8_ =
             1.0 - ((double)local_168._0_8_ * dVar56 + (double)local_178._8_8_ * dVar35);
        local_268._8_8_ = 0;
        local_268._0_8_ = (double)local_178._0_8_ * dVar56 - dVar35 * (double)local_168._8_8_;
        stack0xfffffffffffffdb0 = 1.0 - ((double)local_168._0_8_ * dVar56 + dVar53);
        local_258._0_8_ = dVar35 * (double)local_178._0_8_ - dVar56 * (double)local_168._8_8_;
        local_248._8_8_ = 0;
        local_248._0_8_ = dVar56 * (double)local_178._8_8_ + dVar68;
        local_238._8_8_ = dVar56 * (double)local_178._8_8_ - dVar68;
        local_238._0_8_ = dVar35 * (double)local_168._8_8_ + (double)local_178._0_8_ * dVar56;
        uStack_220 = 0;
        local_218 = (double)local_2f8._0_8_;
        dStack_210 = (double)local_2f8._8_8_;
        local_208 = (double)local_2e8._0_8_;
        uStack_200 = 0x3ff0000000000000;
        local_1f8._8_8_ = dStack_420;
        local_1f8._0_8_ = local_428;
        local_1e8 = local_418;
        dStack_1e0 = dStack_410;
        local_1d8 = local_498;
        local_1c8._8_8_ = 0;
        local_1c8._0_8_ = dVar55 + dVar34;
        local_1b8._8_4_ = SUB84(dVar70,0);
        local_1b8._0_8_ = dVar54 + dVar58;
        local_1b8._12_4_ = (int)((ulonglong)dVar70 >> 0x20);
        local_1a8._8_8_ = dStack_400;
        local_1a8._0_8_ = local_408;
        local_198 = local_4a8;
        dStack_190 = dStack_4a0;
        local_188 = local_3d8;
        dStack_180 = dStack_3d0;
        FUN_1447fea8d(local_178,local_278,local_1f8);
        FUN_144a1c686(local_178,0x3e45798ee0000000);
        FUN_14481fd10(&local_298,local_178);
        dVar35 = local_288 * local_288 + local_298 * local_298;
        dVar53 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
        auVar61._0_8_ = dVar35 + dVar53;
        auVar61._8_8_ = dVar35 + dVar53;
        auVar42._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar61._8_8_);
        auVar42._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar61._0_8_);
        auVar75 = sqrtpd(auVar61,auVar61);
        auVar57 = divpd(auVar57,auVar75);
        auVar80._0_8_ = auVar57._0_8_ * local_288;
        auVar80._8_8_ = auVar57._8_8_ * dStack_280;
        local_388 = (double)((ulonglong)(local_298 * auVar57._0_8_) &
                            -(ulonglong)(9.99999993922529e-09 <= auVar61._0_8_));
        dStack_380 = (double)((ulonglong)(dStack_290 * auVar57._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar61._8_8_));
        local_378 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar80,auVar42);
        local_358._8_8_ = 0;
        local_358._0_8_ = local_108;
        local_368 = local_118;
        dStack_360 = dStack_110;
      }
      lVar23 = local_4c8[4] + lVar30;
      local_348 = uVar115;
      uStack_344 = uVar116;
      uStack_340 = uVar117;
      uStack_33c = uVar118;
      local_338 = auVar36;
      if (param_6 == '\0') {
        pdVar25 = (double *)param_9[0xc];
        if ((double *)param_9[0xc] == (double *)0x0) {
          pdVar25 = param_9 + 10;
        }
        pdVar25 = (double *)pdVar25[local_4b0];
        local_4f8 = (double *)CONCAT44(local_4f8._4_4_,uVar104);
        FUN_147c7035e(lVar23,pdVar25,&local_388,&local_2b8);
        uVar15 = (undefined4)lVar23;
      }
      else {
        local_4f0 = param_9;
        local_4f8 = (double *)CONCAT44(local_4f8._4_4_,param_8);
        pdVar25 = &local_388;
        FUN_147c715a4(lVar23,&local_388,&local_2b8,local_4b8);
        uVar15 = (undefined4)lVar23;
      }
      lVar29 = lVar29 + 1;
      lVar30 = lVar30 + 0x68;
    } while (lVar29 < (int)local_4c8[5]);
  }
  plVar17 = local_4c8;
  iVar14 = (int)local_4c8[7];
  if (0 < iVar14) {
    if (param_6 == '\0') {
      local_498._0_8_ = param_9 + 10;
      lVar29 = 0;
      uVar32 = 0;
      do {
        auVar36 = _DAT_149934d80;
        if ((0x1f < uVar32) || ((param_10 >> ((uint)uVar32 & 0x1f) & 1) != 0)) {
          uVar15 = uVar104;
          if (param_5 != '\0') {
            uVar15 = *(undefined4 *)(&DAT_14aa2a290 + (ulonglong)((uint)uVar32 & 0x1f) * 4);
          }
          lVar30 = plVar17[6];
          puVar19 = (undefined8 *)(lVar30 + lVar29 + 0x90);
          puVar28 = (undefined8 *)local_328;
          for (lVar23 = 0xc; dVar70 = dStack_2d0, dVar55 = local_2d8, lVar23 != 0;
              lVar23 = lVar23 + -1) {
            *puVar28 = *puVar19;
            puVar19 = puVar19 + 1;
            puVar28 = puVar28 + 1;
          }
          auVar57 = *(undefined1 (*) [16])(param_2 + 8);
          dVar35 = auVar57._0_8_;
          dVar58 = auVar57._8_8_;
          auVar75 = *(undefined1 (*) [16])(param_2 + 10);
          dVar34 = auVar75._0_8_;
          dVar54 = local_2e8._0_8_;
          dVar53 = local_2e8._8_8_;
          auVar11._8_8_ = dStack_2d0;
          auVar11._0_8_ = local_2d8;
          auVar57 = minpd(local_2e8,auVar57);
          auVar93 = minpd(auVar11,auVar75);
          auVar66._8_8_ = -(ulonglong)(auVar57._8_8_ < 0.0);
          auVar66._0_8_ = -(ulonglong)(auVar57._0_8_ < 0.0);
          iVar14 = movmskpd(0,auVar66);
          auVar88._8_8_ = -(ulonglong)(auVar93._8_8_ < 0.0);
          auVar88._0_8_ = -(ulonglong)(auVar93._0_8_ < 0.0);
          uVar21 = movmskpd((int)pdVar25,auVar88);
          if ((uVar21 & 0x3fffffff) == 0 && iVar14 == 0) {
            dVar9 = *param_2;
            dVar72 = param_2[1];
            dVar103 = param_2[2];
            dVar109 = param_2[3];
            dVar68 = param_2[3];
            dVar56 = param_2[3];
            dVar106 = (double)local_318._8_8_ * *param_2;
            dVar108 = (double)local_318._0_8_ * *param_2;
            dVar90 = param_2[1];
            dVar101 = param_2[1];
            dVar91 = (double)local_318._0_8_ * dVar90;
            dVar92 = (double)local_318._8_8_ * dVar101;
            dVar69 = param_2[2];
            dVar71 = param_2[2];
            dVar110 = (double)local_328._8_8_ * dVar69;
            dVar102 = (double)local_318._0_8_ * dVar71;
            local_318._0_8_ =
                 (double)local_318._8_8_ * dVar69 * 1.0 +
                 ((*param_2 * (double)local_328._8_8_ * 1.0 + (double)local_318._0_8_ * dVar68) -
                 (double)local_328._0_8_ * dVar90);
            local_318._8_8_ =
                 dVar102 * -1.0 +
                 ((*param_2 * (double)local_328._0_8_ * -1.0 + (double)local_318._8_8_ * dVar56) -
                 (double)local_328._8_8_ * dVar101);
            dVar114 = (double)local_308._0_8_ * dVar35;
            dVar105 = (double)local_308._8_8_ * dVar58;
            dVar7 = (double)local_2f8._0_8_ * dVar34;
            dVar8 = (double)local_2f8._8_8_ * auVar75._8_8_;
            dVar90 = dVar105 * dVar9 - dVar72 * dVar114;
            dVar69 = dVar7 * dVar72 - dVar103 * dVar105;
            dVar102 = dVar114 * dVar103 - dVar9 * dVar7;
            dVar101 = dVar8 * dVar109 - dVar109 * dVar8;
            dVar69 = dVar69 + dVar69;
            dVar102 = dVar102 + dVar102;
            dVar90 = dVar90 + dVar90;
            dVar101 = dVar101 + dVar101;
            dVar105 = (dVar69 * dVar103 - dVar90 * dVar9) + dVar56 * dVar102 + dVar105 + param_2[5];
            dVar101 = (dVar101 * dVar109 - dVar101 * dVar109) + dVar56 * dVar101 + dVar8 +
                      param_2[7];
            local_328._8_8_ =
                 (double)local_328._0_8_ * dVar71 * 1.0 +
                 dVar92 + dVar108 * -1.0 + (double)local_328._8_8_ * dVar56;
            local_328._0_8_ =
                 dVar110 * -1.0 + dVar91 + dVar106 * 1.0 + (double)local_328._0_8_ * dVar68;
            local_308._8_4_ = SUB84(dVar105,0);
            local_308._0_8_ =
                 (dVar90 * dVar72 - dVar103 * dVar102) + dVar68 * dVar69 + dVar114 + param_2[4];
            local_308._12_4_ = (int)((ulonglong)dVar105 >> 0x20);
            uVar115 = 0;
            uVar116 = 0x3ff00000;
            uVar117 = 0;
            uVar118 = 0x3ff00000;
            local_2f8._8_4_ = SUB84(dVar101,0);
            local_2f8._0_8_ =
                 (dVar102 * dVar9 - dVar72 * dVar69) + dVar68 * dVar90 + dVar7 + param_2[6];
            local_2f8._12_4_ = (int)((ulonglong)dVar101 >> 0x20);
          }
          else {
            dVar90 = *param_2;
            dVar101 = param_2[1];
            dVar69 = param_2[2];
            dVar71 = dVar101 + dVar101;
            dVar91 = dVar69 + dVar69;
            dVar68 = dVar90 * (dVar90 + dVar90);
            dVar56 = param_2[3];
            dVar92 = dVar91 * dVar56;
            dVar102 = (dVar90 + dVar90) * param_2[3];
            dVar56 = dVar71 * dVar56;
            dVar105 = dVar34 * local_2d8;
            dVar106 = (dVar71 * dVar90 + dVar92) * dVar35;
            local_1e8 = (*param_2 * dVar91 - dVar56) * dVar35;
            local_1c8._8_8_ = 0;
            local_1c8._0_8_ = (dVar91 * dVar101 + dVar102) * dVar58;
            local_1f8._8_4_ = SUB84(dVar106,0);
            local_1f8._0_8_ =
                 ((double)CONCAT44(uVar116,uVar115) - (dVar69 * dVar91 + dVar101 * dVar71)) * dVar35
            ;
            local_1f8._12_4_ = (int)((ulonglong)dVar106 >> 0x20);
            dStack_1e0 = 0.0;
            local_1d8._8_8_ =
                 ((double)CONCAT44(uVar118,uVar117) - (dVar69 * dVar91 + dVar68)) * dVar58;
            local_1d8._0_8_ = (dVar71 * dVar90 - dVar92) * dVar58;
            local_1b8._8_8_ = (dVar91 * dVar101 - dVar102) * dVar34;
            local_1b8._0_8_ = (dVar56 + *param_2 * dVar91) * dVar34;
            local_1a8._8_8_ = 0;
            local_1a8._0_8_ = (1.0 - (dVar68 + dVar101 * dVar71)) * dVar34;
            local_198 = (double *)param_2[4];
            dStack_190 = param_2[5];
            local_188 = param_2[6];
            dStack_180 = 1.0;
            dVar68 = (double)local_328._8_8_ + (double)local_328._8_8_;
            dVar90 = (double)local_318._0_8_ + (double)local_318._0_8_;
            dVar56 = (double)local_328._0_8_ * ((double)local_328._0_8_ + (double)local_328._0_8_);
            local_228 = (1.0 - (dVar56 + (double)local_328._8_8_ * dVar68)) * local_2d8;
            dVar101 = ((double)local_328._0_8_ + (double)local_328._0_8_) * (double)local_318._8_8_;
            dVar56 = (1.0 - ((double)local_318._0_8_ * dVar90 + dVar56)) * dVar53;
            local_278._8_8_ =
                 (dVar68 * (double)local_328._0_8_ + dVar90 * (double)local_318._8_8_) * dVar54;
            local_278._0_8_ =
                 (1.0 - ((double)local_318._0_8_ * dVar90 + (double)local_328._8_8_ * dVar68)) *
                 dVar54;
            local_268._8_8_ = 0;
            local_268._0_8_ =
                 ((double)local_328._0_8_ * dVar90 - dVar68 * (double)local_318._8_8_) * dVar54;
            local_258._8_4_ = SUB84(dVar56,0);
            local_258._0_8_ =
                 (dVar68 * (double)local_328._0_8_ - dVar90 * (double)local_318._8_8_) * dVar53;
            uStack_24c = (int)((ulonglong)dVar56 >> 0x20);
            uVar115 = (undefined4)DAT_149934d80;
            uVar116 = DAT_149934d80._4_4_;
            uVar117 = DAT_149934d80._8_4_;
            uVar118 = DAT_149934d80._12_4_;
            local_248._8_8_ = 0;
            local_248._0_8_ = (dVar90 * (double)local_328._8_8_ + dVar101) * dVar53;
            local_238._8_8_ = (dVar90 * (double)local_328._8_8_ - dVar101) * local_2d8;
            local_238._0_8_ =
                 (dVar68 * (double)local_318._8_8_ + (double)local_328._0_8_ * dVar90) * local_2d8;
            uStack_220 = 0;
            local_218 = (double)local_308._0_8_;
            dStack_210 = (double)local_308._8_8_;
            local_208 = (double)local_2f8._0_8_;
            uStack_200 = 0x3ff0000000000000;
            FUN_1447fea8d(local_178,local_278,local_1f8);
            FUN_144a1c686(local_178,0x3e45798ee0000000);
            auVar49._8_8_ = -(ulonglong)(0.0 <= dVar58 * dVar53);
            auVar49._0_8_ = -(ulonglong)(0.0 <= dVar35 * dVar54);
            auVar57 = blendvpd(_DAT_149936790,auVar36,auVar49);
            uVar33 = -(ulonglong)(0.0 <= dVar105);
            dVar56 = (double)(~uVar33 & 0xbff0000000000000 | uVar33 & 0x3ff0000000000000);
            dVar68 = auVar57._0_8_;
            local_178._8_8_ = (double)local_178._8_8_ * dVar68;
            local_178._0_8_ = (double)local_178._0_8_ * dVar68;
            local_168._0_8_ = (double)local_168._0_8_ * dVar68;
            dVar68 = auVar57._8_8_;
            dStack_150 = dStack_150 * dVar68;
            local_158 = (double *)(dVar68 * (double)local_158);
            local_148._0_8_ = (double)local_148._0_8_ * dVar68;
            local_138._8_8_ = (double)local_138._8_8_ * dVar56;
            local_138._0_8_ = dVar56 * (double)local_138._0_8_;
            local_128._0_8_ = (double)local_128._0_8_ * dVar56;
            FUN_14481fd10(&local_388,local_178);
            dVar56 = (double)local_378._0_8_ * (double)local_378._0_8_ + local_388 * local_388;
            dVar68 = (double)local_378._8_8_ * (double)local_378._8_8_ + dStack_380 * dStack_380;
            auVar67._0_8_ = dVar56 + dVar68;
            auVar67._8_8_ = dVar56 + dVar68;
            auVar50._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar67._8_8_);
            auVar50._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar67._0_8_);
            auVar57 = sqrtpd(auVar67,auVar67);
            auVar36 = divpd(auVar36,auVar57);
            auVar89._0_8_ = auVar36._0_8_ * (double)local_378._0_8_;
            auVar89._8_8_ = auVar36._8_8_ * (double)local_378._8_8_;
            local_318 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar89,auVar50);
            local_328._8_8_ =
                 (ulonglong)(dStack_380 * auVar36._8_8_) &
                 -(ulonglong)(9.99999993922529e-09 <= auVar67._8_8_);
            local_328._0_8_ =
                 (ulonglong)(local_388 * auVar36._0_8_) &
                 -(ulonglong)(9.99999993922529e-09 <= auVar67._0_8_);
            local_2f8._8_8_ = 0;
            local_2f8._0_8_ = local_108;
            local_308._8_8_ = dStack_110;
            local_308._0_8_ = local_118;
            lVar30 = plVar17[6];
          }
          dStack_2d0 = auVar75._8_8_ * dVar70;
          local_2d8 = dVar34 * dVar55;
          local_2e8._8_8_ = dVar58 * dVar53;
          local_2e8._0_8_ = dVar35 * dVar54;
          dVar55 = param_9[0xc];
          if (param_9[0xc] == 0.0) {
            dVar55 = (double)local_498._0_8_;
          }
          pdVar25 = *(double **)((longlong)dVar55 + local_4b0 * 8);
          local_4f8 = (double *)CONCAT44(local_4f8._4_4_,uVar15);
          (**(code **)(*(longlong *)(lVar30 + lVar29) + 8))(lVar30 + lVar29,pdVar25,local_328);
          iVar14 = (int)plVar17[7];
        }
        uVar32 = uVar32 + 1;
        lVar29 = lVar29 + 0x100;
      } while ((longlong)uVar32 < (longlong)iVar14);
    }
    else {
      pdVar26 = (double *)param_9[0x22];
      plVar18 = (longlong *)local_4c8[0xe];
      if (plVar18 == (longlong *)0x0) {
        plVar24 = local_4c8 + 0xf;
        LOCK();
        bVar31 = (char)local_4c8[0xf] == '\0';
        if (bVar31) {
          *(char *)(local_4c8 + 0xf) = '\x01';
        }
        UNLOCK();
        if (!bVar31) {
          FUN_1447d2058();
        }
        plVar18 = (longlong *)local_4c8[0xe];
        plVar17 = local_4c8;
        if (plVar18 == (longlong *)0x0) {
          plVar18 = (longlong *)FUN_14001cc68(0x18,0x10);
          plVar18[2] = 0;
          _Dst = (void *)FUN_14001cc68(0x108);
          memset(_Dst,0,0x108);
          FUN_1415eaa34(_Dst);
          FUN_1415ea9c8((longlong)_Dst + 0x88);
          FUN_1415ea9fe((longlong)_Dst + 200);
          *plVar18 = (longlong)_Dst;
          pdVar25 = (double *)&DAT_00000010;
          puVar19 = (undefined8 *)FUN_14001cc68(0x28);
          *puVar19 = 0;
          puVar19[1] = 0;
          *(undefined4 *)(puVar19 + 1) = 0xffffffff;
          *(undefined2 *)((longlong)puVar19 + 0xc) = 0x105;
          puVar19[2] = 0;
          *puVar19 = &PTR_FUN_14a83cdc0;
          puVar19[3] = 0;
          puVar19[4] = 0;
          plVar18[1] = (longlong)puVar19;
          local_178 = ZEXT816(0);
          iVar14 = (int)local_4c8[7];
          plVar17 = local_4c8;
          if (0 < iVar14) {
            lVar29 = 0;
            uVar32 = 0;
            do {
              if ((0x1f < uVar32) || ((param_10 >> ((uint)uVar32 & 0x1f) & 1) != 0)) {
                pdVar25 = (double *)local_178;
                FUN_143634b84(plVar17[6] + lVar29,local_178,plVar18[1] + 0x18);
                iVar14 = (int)local_4c8[7];
                plVar17 = local_4c8;
              }
              uVar32 = uVar32 + 1;
              lVar29 = lVar29 + 0x100;
            } while ((longlong)uVar32 < (longlong)iVar14);
          }
          if ((((*plVar18 != 0) && (plVar1 = (longlong *)plVar18[1], plVar1 != (longlong *)0x0)) &&
              (0 < (int)local_178._8_4_)) && (0 < (int)plVar1[4])) {
            (**(code **)(*plVar1 + 0x18))(plVar1,pdVar26);
            lVar29 = FUN_14001cc68(0x220,0x10);
            FUN_147c7a0c0(lVar29,*(undefined4 *)(param_9 + 0x23));
            plVar18[2] = lVar29;
            local_4f8 = (double *)local_178;
            local_4e8 = 0;
            local_4f0 = (double *)CONCAT44(local_4f0._4_4_,1);
            FUN_1413269d8(*plVar18,pdVar26,0,lVar29);
            pdVar25 = pdVar26;
            plVar17 = local_4c8;
          }
          uVar104 = local_4bc;
          plVar17[0xe] = (longlong)plVar18;
          if ((double)local_178._0_8_ != 0.0) {
            FUN_1400020a8();
            plVar17 = local_4c8;
          }
        }
        uVar15 = 0;
        LOCK();
        bVar31 = (char)*plVar24 == '\x01';
        if (bVar31) {
          *(char *)plVar24 = '\0';
        }
        UNLOCK();
        if (!bVar31) {
          FUN_14008cdb0();
          uVar15 = SUB84(plVar24,0);
          plVar17 = local_4c8;
        }
      }
      dVar70 = local_2a8;
      uVar13 = uStack_2ac;
      dVar55 = local_2b8;
      auVar36 = _DAT_149934d80;
      if (((*plVar18 != 0) && (*(int *)(*plVar18 + 0xbc) != 0)) &&
         ((lVar29 = plVar18[1], lVar29 != 0 && (0 < *(int *)(lVar29 + 0x20))))) {
        auVar98._8_8_ = 0;
        auVar98._0_8_ = DAT_14c8464e0;
        dVar35 = (double)CONCAT44(uStack_2ac,uStack_2b0);
        auVar3._8_4_ = uStack_2b0;
        auVar3._0_8_ = local_2b8;
        auVar12._8_4_ = uStack_2b0;
        auVar12._0_8_ = local_2b8;
        auVar12._12_4_ = uStack_2ac;
        local_308 = ZEXT816(0);
        local_2f8 = ZEXT816(0);
        auVar57 = minpd(auVar12,_DAT_149934d80);
        auVar111._8_8_ = 0;
        auVar111._0_8_ = local_2a8;
        auVar75 = minpd(auVar111,ZEXT816(0x3ff0000000000000));
        auVar107._8_8_ = -(ulonglong)(auVar57._8_8_ < 0.0);
        auVar107._0_8_ = -(ulonglong)(auVar57._0_8_ < 0.0);
        iVar14 = movmskpd((int)lVar29,auVar107);
        auVar112._8_8_ = -(ulonglong)(auVar75._8_8_ < 0.0);
        auVar112._0_8_ = -(ulonglong)(auVar75._0_8_ < 0.0);
        uVar21 = movmskpd(uVar15,auVar112);
        if ((uVar21 & 0x3fffffff) == 0 && iVar14 == 0) {
          uVar115 = 0;
          uVar116 = 0x3ff00000;
          uVar117 = 0;
          uVar118 = 0x3ff00000;
          local_328._8_8_ =
               DAT_14c8463d0 * (double)local_3f8._8_8_ * 1.0 +
               (double)local_448._8_8_ * DAT_14c8463e0 * -1.0 +
               (double)local_478._8_8_ * DAT_14c8463d8 + (double)local_3e8._8_8_ * DAT_14c8463e8;
          local_328._0_8_ =
               DAT_14c8463d8 * (double)local_3f8._0_8_ * -1.0 +
               (double)local_448._0_8_ * DAT_14c8463e8 * 1.0 +
               (double)local_478._0_8_ * DAT_14c8463d0 + (double)local_3e8._0_8_ * DAT_14c8463e0;
          local_318._8_8_ =
               DAT_14c8463e0 * (double)local_3f8._8_8_ * -1.0 +
               (((double)local_448._8_8_ * DAT_14c8463d0 * -1.0 +
                (double)local_478._8_8_ * DAT_14c8463e8) - (double)local_3e8._8_8_ * DAT_14c8463d8);
          local_318._0_8_ =
               DAT_14c8463e8 * (double)local_3f8._0_8_ * 1.0 +
               (((double)local_448._0_8_ * DAT_14c8463d8 * 1.0 +
                (double)local_478._0_8_ * DAT_14c8463e0) - (double)local_3e8._0_8_ * DAT_14c8463d0);
          auVar52._0_8_ = DAT_14c8464f0 * 1.0;
          auVar52._8_8_ = 0;
          auVar36 = blendpd(auVar98,auVar52,2);
          dVar55 = DAT_14c8464e8 * (double)local_488._0_8_ - DAT_14c8464e0 * (double)local_3c8._0_8_
          ;
          dVar35 = auVar52._0_8_ * (double)local_488._8_8_ - DAT_14c8464e8 * (double)local_3c8._8_8_
          ;
          dVar34 = auVar36._0_8_ * (double)local_468._0_8_ - auVar52._0_8_ * (double)local_3b8._0_8_
          ;
          dVar54 = auVar36._8_8_ * (double)local_468._8_8_ - (double)local_3b8._8_8_ * 0.0;
          dVar35 = dVar35 + dVar35;
          dVar34 = dVar34 + dVar34;
          dVar55 = dVar55 + dVar55;
          dVar54 = dVar54 + dVar54;
          local_308._8_8_ =
               (dVar35 * (double)local_468._0_8_ - dVar55 * (double)local_3b8._0_8_) +
               (double)local_478._8_8_ * dVar34 + DAT_14c8464e8 + dStack_4a0;
          local_308._0_8_ =
               (dVar55 * (double)local_488._8_8_ - dVar34 * (double)local_3c8._8_8_) +
               (double)local_478._0_8_ * dVar35 + DAT_14c8464e0 + (double)local_4a8;
          local_2f8._8_8_ =
               (dVar54 * (double)local_468._8_8_ - dVar54 * (double)local_3b8._8_8_) +
               (double)local_478._8_8_ * dVar54 + 0.0 + dStack_450;
          local_2f8._0_8_ =
               (dVar34 * (double)local_488._0_8_ - dVar35 * (double)local_3c8._0_8_) +
               (double)local_478._0_8_ * dVar55 + auVar52._0_8_ + local_458;
        }
        else {
          dVar54 = (double)local_468._0_8_ + (double)local_468._0_8_;
          dVar34 = dStack_430 * (double)local_488._0_8_ + dVar54 * (double)local_478._0_8_;
          local_1e8 = (double)local_448._0_8_ * dVar54 - dStack_430 * (double)local_478._0_8_;
          local_1f8._8_4_ = SUB84(dVar34,0);
          local_1f8._0_8_ =
               (double)CONCAT44(uVar116,uVar115) -
               (dVar54 * (double)local_468._0_8_ + dStack_430 * (double)local_488._8_8_);
          local_1f8._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
          dStack_1e0 = 0.0;
          local_1d8._8_8_ =
               (double)CONCAT44(uVar118,uVar117) -
               (dVar54 * (double)local_468._0_8_ + local_438 * (double)local_488._0_8_);
          local_1d8._0_8_ = dStack_430 * (double)local_488._0_8_ - dVar54 * (double)local_478._0_8_;
          local_1c8._8_8_ = 0;
          local_1c8._0_8_ = dVar54 * (double)local_488._8_8_ + local_438 * (double)local_478._8_8_;
          local_1b8._8_8_ = dVar54 * (double)local_488._8_8_ - local_438 * (double)local_478._8_8_;
          local_1b8._0_8_ = (double)local_448._0_8_ * dVar54 + dStack_430 * (double)local_478._0_8_;
          local_1a8._8_8_ = 0;
          local_1a8._0_8_ =
               1.0 - (local_438 * (double)local_488._0_8_ + dStack_430 * (double)local_488._8_8_);
          local_198 = local_4a8;
          dStack_190 = dStack_4a0;
          local_188 = local_458;
          dStack_180 = 1.0;
          dVar58 = DAT_14c8463d8 + DAT_14c8463d8;
          dVar34 = DAT_14c8463e0 + DAT_14c8463e0;
          dVar53 = DAT_14c8463d0 * (DAT_14c8463d0 + DAT_14c8463d0);
          dVar54 = (DAT_14c8463d0 + DAT_14c8463d0) * DAT_14c8463e8;
          uVar115 = (undefined4)DAT_149934d80;
          uVar116 = DAT_149934d80._4_4_;
          uVar117 = DAT_149934d80._8_4_;
          uVar118 = DAT_149934d80._12_4_;
          local_278._8_8_ = (dVar58 * DAT_14c8463d0 + dVar34 * DAT_14c8463e8) * local_2b8;
          local_278._0_8_ = (1.0 - (DAT_14c8463e0 * dVar34 + DAT_14c8463d8 * dVar58)) * local_2b8;
          local_268._8_8_ = 0;
          local_268._0_8_ = (DAT_14c8463d0 * dVar34 - dVar58 * DAT_14c8463e8) * local_2b8;
          stack0xfffffffffffffdb0 = (1.0 - (DAT_14c8463e0 * dVar34 + dVar53)) * dVar35;
          local_258._0_8_ = (dVar58 * DAT_14c8463d0 - dVar34 * DAT_14c8463e8) * dVar35;
          local_248._8_8_ = 0;
          local_248._0_8_ = (dVar34 * DAT_14c8463d8 + dVar54) * dVar35;
          local_238._8_8_ = (dVar34 * DAT_14c8463d8 - dVar54) * local_2a8;
          local_238._0_8_ = (dVar58 * DAT_14c8463e8 + DAT_14c8463d0 * dVar34) * local_2a8;
          local_228 = (1.0 - (dVar53 + DAT_14c8463d8 * dVar58)) * local_2a8;
          uStack_220 = 0;
          local_218 = DAT_14c8464e0;
          dStack_210 = DAT_14c8464e8;
          local_208 = DAT_14c8464f0;
          uStack_200 = 0x3ff0000000000000;
          dVar34 = local_2a8 * 1.0;
          FUN_1447fea8d(local_178);
          FUN_144a1c686(local_178,0x3e45798ee0000000);
          auVar43._8_8_ = -(ulonglong)(0.0 <= dVar35);
          auVar43._0_8_ = -(ulonglong)(0.0 <= dVar55);
          auVar57 = blendvpd(_DAT_149936790,auVar36,auVar43);
          uVar32 = -(ulonglong)(0.0 <= dVar34);
          dVar55 = (double)(~uVar32 & 0xbff0000000000000 | uVar32 & 0x3ff0000000000000);
          dVar35 = auVar57._0_8_;
          local_178._8_8_ = (double)local_178._8_8_ * dVar35;
          local_178._0_8_ = (double)local_178._0_8_ * dVar35;
          local_168._0_8_ = (double)local_168._0_8_ * dVar35;
          dVar35 = auVar57._8_8_;
          dStack_150 = dStack_150 * dVar35;
          local_158 = (double *)(dVar35 * (double)local_158);
          local_148._0_8_ = (double)local_148._0_8_ * dVar35;
          local_138._8_8_ = (double)local_138._8_8_ * dVar55;
          local_138._0_8_ = dVar55 * (double)local_138._0_8_;
          local_128._0_8_ = (double)local_128._0_8_ * dVar55;
          FUN_14481fd10(&local_388,local_178);
          dVar55 = (double)local_378._0_8_ * (double)local_378._0_8_ + local_388 * local_388;
          dVar35 = (double)local_378._8_8_ * (double)local_378._8_8_ + dStack_380 * dStack_380;
          auVar62._0_8_ = dVar55 + dVar35;
          auVar62._8_8_ = dVar55 + dVar35;
          auVar44._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar62._8_8_);
          auVar44._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar62._0_8_);
          auVar57 = sqrtpd(auVar62,auVar62);
          auVar36 = divpd(auVar36,auVar57);
          auVar81._0_8_ = auVar36._0_8_ * (double)local_378._0_8_;
          auVar81._8_8_ = auVar36._8_8_ * (double)local_378._8_8_;
          local_318 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar81,auVar44);
          local_328._8_8_ =
               (ulonglong)(dStack_380 * auVar36._8_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar62._8_8_);
          local_328._0_8_ =
               (ulonglong)(local_388 * auVar36._0_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar62._0_8_);
          local_308._8_8_ = dStack_110;
          local_308._0_8_ = local_118;
          local_2f8._8_8_ = 0;
          local_2f8._0_8_ = local_108;
        }
        local_2d8 = dVar70 * 1.0;
        auVar3._12_4_ = uVar13;
        dStack_2d0 = 0.0;
        local_2e8 = auVar3;
        iVar14 = FUN_14470b8a2(param_9,1);
        plVar17 = local_4c8;
        lVar29 = *(longlong *)((longlong)*param_9 + (longlong)(iVar14 / 0x44) * 8);
        lVar23 = (ulonglong)(uint)(iVar14 % 0x44) * 0xf0;
        local_498._0_8_ = lVar29 + lVar23;
        lVar30 = *(longlong *)(lVar29 + 0xa8 + lVar23);
        if (lVar30 == 0) {
          lVar30 = lVar29 + lVar23;
        }
        *(longlong *)(lVar30 + 0x18) = plVar18[1];
        *(longlong *)(lVar29 + 0xb8 + lVar23) = plVar18[2];
        *(double **)(lVar29 + 0xc0 + lVar23) = local_4b8;
        FUN_14016b8ba(local_4c8,local_278,local_328);
        FUN_14016b8ba(plVar17,&local_388,&DAT_14c846480);
        lVar16 = FUN_14337cb52(param_9[0x1d]);
        FUN_1436a1a18(lVar16);
        dVar35 = (double)local_328._8_8_ + (double)local_328._8_8_;
        dVar55 = (double)local_318._0_8_ + (double)local_318._0_8_;
        dVar54 = (double)local_328._0_8_ * ((double)local_328._0_8_ + (double)local_328._0_8_);
        dVar34 = ((double)CONCAT44(uVar116,uVar115) -
                 ((double)local_318._0_8_ * dVar55 + (double)local_328._8_8_ * dVar35)) *
                 (double)local_2e8._0_8_;
        dStack_150 = ((double)CONCAT44(uVar118,uVar117) -
                     ((double)local_318._0_8_ * dVar55 + dVar54)) * (double)local_2e8._8_8_;
        dVar70 = ((double)local_328._0_8_ + (double)local_328._0_8_) * (double)local_318._8_8_;
        dVar58 = (dVar35 * (double)local_328._0_8_ + dVar55 * (double)local_318._8_8_) *
                 (double)local_2e8._0_8_;
        local_148._0_8_ = (dVar55 * (double)local_328._8_8_ + dVar70) * (double)local_2e8._8_8_;
        local_138._0_8_ =
             (dVar35 * (double)local_318._8_8_ + (double)local_328._0_8_ * dVar55) * local_2d8;
        local_1e8 = ((double)local_328._0_8_ * dVar55 - dVar35 * (double)local_318._8_8_) *
                    (double)local_2e8._0_8_;
        local_158 = (double *)
                    ((dVar35 * (double)local_328._0_8_ - dVar55 * (double)local_318._8_8_) *
                    (double)local_2e8._8_8_);
        local_138._8_8_ = (dVar55 * (double)local_328._8_8_ - dVar70) * local_2d8;
        local_1a8._8_8_ = 0;
        local_1a8._0_8_ = (1.0 - (dVar54 + (double)local_328._8_8_ * dVar35)) * local_2d8;
        uVar104 = SUB84(dVar58,0);
        uVar15 = (undefined4)((ulonglong)dVar58 >> 0x20);
        uVar115 = 0;
        uVar116 = 0x3ff00000;
        uVar117 = 0;
        uVar118 = 0x3ff00000;
        local_178._8_4_ = uVar104;
        local_178._0_8_ = dVar34;
        local_178._12_4_ = uVar15;
        local_168._8_8_ = 0;
        local_168._0_8_ = local_1e8;
        local_148._8_8_ = 0;
        local_118 = (double *)local_308._0_8_;
        dStack_110 = (double)local_308._8_8_;
        local_108 = (double)local_2f8._0_8_;
        uStack_100 = 0x3ff0000000000000;
        local_1f8._8_4_ = uVar104;
        local_1f8._0_8_ = dVar34;
        local_1f8._12_4_ = uVar15;
        dStack_1e0 = 0.0;
        local_1d8._8_8_ = dStack_150;
        local_1d8._0_8_ = local_158;
        local_1c8._8_8_ = 0;
        local_1c8._0_8_ = local_148._0_8_;
        local_1b8._8_8_ = local_138._8_8_;
        local_1b8._0_8_ = local_138._0_8_;
        local_198 = (double *)local_308._0_8_;
        dStack_190 = (double)local_308._8_8_;
        local_188 = (double)local_2f8._0_8_;
        dStack_180 = 1.0;
        local_4d0 = param_7;
        local_4d8 = (double *)((ulonglong)local_4d8 & 0xffffffffffffff00);
        local_4e8 = local_4e8 & 0xffffff00;
        local_4f0 = &local_388;
        local_4f8 = (double *)local_278;
        local_4e0 = CONCAT31(local_4e0._1_3_,1);
        local_128 = local_1a8;
        FUN_147ceee92(lVar16,param_9[0x22]);
        *(longlong *)(lVar30 + 8) = lVar16 + 8;
        *(undefined4 *)(lVar30 + 0x58) = 0;
        *(int *)(lVar30 + 0x5c) = *(int *)(plVar18[1] + 0x20) / 3;
        *(undefined4 *)(lVar30 + 0x68) = 0;
        *(int *)(lVar30 + 0x6c) = *(int *)(*plVar18 + 0xbc) + -1;
        *(uint *)(lVar29 + 0xe4 + lVar23) =
             *(uint *)(lVar29 + 0xe4 + lVar23) & 0xffe03fbf |
             (uint)((double)local_2e8._0_8_ * (double)local_2e8._8_8_ * local_2d8 < 0.0) << 6;
        pdVar25 = (double *)(ulonglong)param_8;
        FUN_1436a14f8(param_9,pdVar25,local_498._0_8_);
        plVar17 = local_4c8;
        uVar104 = local_4bc;
      }
    }
  }
  if (0 < (int)plVar17[9]) {
    dVar34 = (double)local_468._0_8_ + (double)local_468._0_8_;
    dVar53 = dStack_430 * (double)local_488._8_8_;
    local_418 = (double)CONCAT44(uVar116,uVar115) - (dVar34 * (double)local_468._0_8_ + dVar53);
    auVar36 = ZEXT816(0x3ff0000000000000);
    dVar55 = dStack_430 * (double)local_488._0_8_;
    dVar70 = dVar34 * (double)local_488._8_8_;
    dVar58 = (double)local_448._0_8_ * dVar34;
    dVar54 = local_438 * (double)local_478._8_8_;
    dVar56 = dStack_430 * (double)local_478._0_8_;
    dStack_410 = dVar55 + dVar34 * (double)local_478._0_8_;
    dVar35 = dVar70 - dVar54;
    local_408 = dVar58 - dVar56;
    dStack_430 = 0.0;
    dStack_400 = 0.0;
    local_498._8_8_ =
         (double)CONCAT44(uVar118,uVar117) -
         (dVar34 * (double)local_468._0_8_ + local_438 * (double)local_488._0_8_);
    local_498._0_8_ = dVar55 - dVar34 * (double)local_478._0_8_;
    local_428 = local_458;
    dStack_420 = 1.0;
    lVar30 = 0;
    lVar29 = 0;
    local_438 = 1.0 - (local_438 * (double)local_488._0_8_ + dVar53);
    do {
      FUN_147c4c3ac(plVar17[8] + lVar30,local_328,&local_2b8,&DAT_14c846480);
      puVar22 = local_2e8 + 8;
      uVar15 = FUN_144a7484c(puVar22,local_178);
      auVar57 = _DAT_149934d80;
      auVar82._4_4_ = uVar116;
      auVar82._0_4_ = uVar115;
      auVar82._12_4_ = uVar118;
      auVar82._8_4_ = uVar117;
      auVar6._4_4_ = uVar116;
      auVar6._0_4_ = uVar115;
      auVar6._8_4_ = uVar117;
      auVar6._12_4_ = uVar118;
      auVar75 = minpd(auVar82,auVar6);
      auVar93 = minpd(auVar36,auVar36);
      auVar83._8_8_ = -(ulonglong)(auVar75._8_8_ < 0.0);
      auVar83._0_8_ = -(ulonglong)(auVar75._0_8_ < 0.0);
      iVar14 = movmskpd(uVar15,auVar83);
      auVar99._8_8_ = -(ulonglong)(auVar93._8_8_ < 0.0);
      auVar99._0_8_ = -(ulonglong)(auVar93._0_8_ < 0.0);
      uVar21 = movmskpd((int)puVar22,auVar99);
      if ((uVar21 & 0x3fffffff) == 0 && iVar14 == 0) {
        local_388 = (double)local_178._8_8_ * (double)local_3f8._0_8_ * -1.0 +
                    (double)local_448._0_8_ * (double)local_168._8_8_ * 1.0 +
                    (double)local_478._0_8_ * (double)local_178._0_8_ +
                    (double)local_3e8._0_8_ * (double)local_168._0_8_;
        dStack_380 = (double)local_178._0_8_ * (double)local_3f8._8_8_ * 1.0 +
                     (double)local_448._8_8_ * (double)local_168._0_8_ * -1.0 +
                     (double)local_478._8_8_ * (double)local_178._8_8_ +
                     (double)local_3e8._8_8_ * (double)local_168._8_8_;
        auVar100._8_8_ = 0;
        auVar100._0_8_ = local_2f8._0_8_;
        local_378._8_8_ =
             (double)local_168._0_8_ * (double)local_3f8._8_8_ * -1.0 +
             (((double)local_448._8_8_ * (double)local_178._0_8_ * -1.0 +
              (double)local_478._8_8_ * (double)local_168._8_8_) -
             (double)local_3e8._8_8_ * (double)local_178._8_8_);
        local_378._0_8_ =
             (double)local_168._8_8_ * (double)local_3f8._0_8_ * 1.0 +
             (((double)local_448._0_8_ * (double)local_178._8_8_ * 1.0 +
              (double)local_478._0_8_ * (double)local_168._0_8_) -
             (double)local_3e8._0_8_ * (double)local_178._0_8_);
        auVar45._0_8_ = (double)local_2e8._0_8_ * 1.0;
        auVar45._8_8_ = 0;
        auVar57 = blendpd(auVar100,auVar45,2);
        dVar55 = (double)local_2f8._8_8_ * (double)local_488._0_8_ -
                 (double)local_2f8._0_8_ * (double)local_3c8._0_8_;
        dVar34 = auVar45._0_8_ * (double)local_488._8_8_ -
                 (double)local_2f8._8_8_ * (double)local_3c8._8_8_;
        dVar53 = auVar57._0_8_ * (double)local_468._0_8_ - auVar45._0_8_ * (double)local_3b8._0_8_;
        dVar68 = auVar57._8_8_ * (double)local_468._8_8_ - (double)local_3b8._8_8_ * 0.0;
        dVar34 = dVar34 + dVar34;
        dVar53 = dVar53 + dVar53;
        dVar55 = dVar55 + dVar55;
        dVar68 = dVar68 + dVar68;
        local_358._8_8_ =
             (dVar68 * (double)local_468._8_8_ - dVar68 * (double)local_3b8._8_8_) +
             (double)local_478._8_8_ * dVar68 + 0.0 + dStack_450;
        local_368 = (double *)
                    ((dVar55 * (double)local_488._8_8_ - dVar53 * (double)local_3c8._8_8_) +
                     (double)local_478._0_8_ * dVar34 + (double)local_2f8._0_8_ + (double)local_4a8)
        ;
        dStack_360 = (dVar34 * (double)local_468._0_8_ - dVar55 * (double)local_3b8._0_8_) +
                     (double)local_478._8_8_ * dVar53 + (double)local_2f8._8_8_ + dStack_4a0;
        local_358._0_8_ =
             (dVar53 * (double)local_488._0_8_ - dVar34 * (double)local_3c8._0_8_) +
             (double)local_478._0_8_ * dVar55 + auVar45._0_8_ + local_458;
      }
      else {
        dVar55 = (double)local_178._8_8_ + (double)local_178._8_8_;
        dVar53 = (double)local_168._0_8_ + (double)local_168._0_8_;
        dVar34 = (double)local_178._0_8_ * ((double)local_178._0_8_ + (double)local_178._0_8_);
        uVar115 = (undefined4)DAT_149934d80;
        uVar116 = DAT_149934d80._4_4_;
        uVar117 = DAT_149934d80._8_4_;
        uVar118 = DAT_149934d80._12_4_;
        local_228 = 1.0 - (dVar34 + (double)local_178._8_8_ * dVar55);
        dVar68 = ((double)local_178._0_8_ + (double)local_178._0_8_) * (double)local_168._8_8_;
        local_278._8_8_ = dVar55 * (double)local_178._0_8_ + dVar53 * (double)local_168._8_8_;
        local_278._0_8_ =
             1.0 - ((double)local_168._0_8_ * dVar53 + (double)local_178._8_8_ * dVar55);
        local_268._8_8_ = 0;
        local_268._0_8_ = (double)local_178._0_8_ * dVar53 - dVar55 * (double)local_168._8_8_;
        stack0xfffffffffffffdb0 = 1.0 - ((double)local_168._0_8_ * dVar53 + dVar34);
        local_258._0_8_ = dVar55 * (double)local_178._0_8_ - dVar53 * (double)local_168._8_8_;
        local_248._8_8_ = 0;
        local_248._0_8_ = dVar53 * (double)local_178._8_8_ + dVar68;
        local_238._8_8_ = dVar53 * (double)local_178._8_8_ - dVar68;
        local_238._0_8_ = dVar55 * (double)local_168._8_8_ + (double)local_178._0_8_ * dVar53;
        uStack_220 = 0;
        local_218 = (double)local_2f8._0_8_;
        dStack_210 = (double)local_2f8._8_8_;
        local_208 = (double)local_2e8._0_8_;
        uStack_200 = 0x3ff0000000000000;
        local_1f8._8_8_ = dStack_410;
        local_1f8._0_8_ = local_418;
        local_1e8 = local_408;
        dStack_1e0 = dStack_400;
        local_1d8 = local_498;
        local_1c8._8_8_ = 0;
        local_1c8._0_8_ = dVar70 + dVar54;
        local_1b8._8_4_ = SUB84(dVar35,0);
        local_1b8._0_8_ = dVar58 + dVar56;
        local_1b8._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
        local_1a8._8_8_ = dStack_430;
        local_1a8._0_8_ = local_438;
        local_198 = local_4a8;
        dStack_190 = dStack_4a0;
        local_188 = local_428;
        dStack_180 = dStack_420;
        FUN_1447fea8d(local_178,local_278,local_1f8);
        FUN_144a1c686(local_178,0x3e45798ee0000000);
        FUN_14481fd10(&local_298,local_178);
        dVar55 = local_288 * local_288 + local_298 * local_298;
        dVar34 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
        auVar63._0_8_ = dVar55 + dVar34;
        auVar63._8_8_ = dVar55 + dVar34;
        auVar46._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar63._8_8_);
        auVar46._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar63._0_8_);
        auVar75 = sqrtpd(auVar63,auVar63);
        auVar57 = divpd(auVar57,auVar75);
        auVar84._0_8_ = auVar57._0_8_ * local_288;
        auVar84._8_8_ = auVar57._8_8_ * dStack_280;
        local_388 = (double)((ulonglong)(local_298 * auVar57._0_8_) &
                            -(ulonglong)(9.99999993922529e-09 <= auVar63._0_8_));
        dStack_380 = (double)((ulonglong)(dStack_290 * auVar57._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar63._8_8_));
        local_378 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar84,auVar46);
        local_358._8_8_ = 0.0;
        local_368 = local_118;
        dStack_360 = dStack_110;
        local_358._0_8_ = local_108;
      }
      local_348 = uVar115;
      uStack_344 = uVar116;
      uStack_340 = uVar117;
      uStack_33c = uVar118;
      local_338 = auVar36;
      if (param_6 == '\0') {
        pdVar25 = (double *)param_9[0xc];
        if ((double *)param_9[0xc] == (double *)0x0) {
          pdVar25 = param_9 + 10;
        }
        pdVar25 = (double *)pdVar25[local_4b0];
        local_4f8 = (double *)CONCAT44(local_4f8._4_4_,uVar104);
        FUN_147c72ba6(local_4c8[8] + lVar30,pdVar25,&local_388,&local_2b8);
      }
      else {
        local_4f0 = param_9;
        local_4f8 = (double *)CONCAT44(local_4f8._4_4_,param_8);
        pdVar25 = &local_388;
        FUN_147c73bbe(local_4c8[8] + lVar30,&local_388,&local_2b8,local_4b8);
      }
      lVar29 = lVar29 + 1;
      lVar30 = lVar30 + 0x70;
      plVar17 = local_4c8;
    } while (lVar29 < (int)local_4c8[9]);
  }
  if (0 < (int)plVar17[0xb]) {
    local_4a8 = param_9 + 10;
    lVar29 = 0;
    lVar30 = 0;
    do {
      lVar23 = plVar17[10];
      pdVar26 = (double *)(lVar23 + lVar29 + 0x30);
      pdVar27 = (double *)local_328;
      for (lVar16 = 0xc; dVar70 = dStack_2d0, dVar55 = local_2d8, lVar16 != 0; lVar16 = lVar16 + -1)
      {
        *pdVar27 = *pdVar26;
        pdVar26 = pdVar26 + 1;
        pdVar27 = pdVar27 + 1;
      }
      auVar36 = *(undefined1 (*) [16])(param_2 + 8);
      dVar35 = auVar36._0_8_;
      dVar58 = auVar36._8_8_;
      auVar57 = *(undefined1 (*) [16])(param_2 + 10);
      dVar34 = auVar57._0_8_;
      dVar54 = local_2e8._0_8_;
      dVar53 = local_2e8._8_8_;
      auVar10._8_8_ = dStack_2d0;
      auVar10._0_8_ = local_2d8;
      auVar36 = minpd(local_2e8,auVar36);
      auVar75 = minpd(auVar10,auVar57);
      auVar64._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
      auVar64._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
      iVar14 = movmskpd(0,auVar64);
      auVar85._8_8_ = -(ulonglong)(auVar75._8_8_ < 0.0);
      auVar85._0_8_ = -(ulonglong)(auVar75._0_8_ < 0.0);
      uVar21 = movmskpd((int)pdVar25,auVar85);
      if ((uVar21 & 0x3fffffff) == 0 && iVar14 == 0) {
        dVar108 = *param_2;
        dVar7 = param_2[1];
        dVar8 = param_2[2];
        dVar9 = param_2[3];
        dVar56 = param_2[3];
        dVar68 = param_2[3];
        dVar91 = *param_2 * (double)local_328._8_8_;
        dVar92 = *param_2 * (double)local_328._0_8_;
        dVar101 = param_2[1];
        dVar90 = param_2[1];
        dVar109 = (double)local_328._0_8_ * dVar101;
        dVar114 = (double)local_328._8_8_ * dVar90;
        dVar71 = param_2[2];
        dVar69 = param_2[2];
        dVar102 = (double)local_328._0_8_ * dVar69;
        dVar72 = (double)local_318._8_8_ * dVar71;
        local_328._0_8_ =
             (double)local_328._8_8_ * dVar71 * -1.0 +
             (double)local_318._0_8_ * dVar101 +
             (double)local_318._8_8_ * *param_2 * 1.0 + (double)local_328._0_8_ * dVar56;
        local_328._8_8_ =
             dVar102 * 1.0 +
             (double)local_318._8_8_ * dVar90 +
             (double)local_318._0_8_ * *param_2 * -1.0 + (double)local_328._8_8_ * dVar68;
        dVar110 = (double)local_308._0_8_ * dVar35;
        dVar106 = (double)local_308._8_8_ * dVar58;
        dVar90 = (double)local_2f8._0_8_ * dVar34;
        dVar101 = (double)local_2f8._8_8_ * auVar57._8_8_;
        dVar71 = dVar106 * dVar108 - dVar7 * dVar110;
        dVar102 = dVar90 * dVar7 - dVar8 * dVar106;
        dVar105 = dVar110 * dVar8 - dVar108 * dVar90;
        dVar103 = dVar101 * dVar9 - dVar9 * dVar101;
        dVar102 = dVar102 + dVar102;
        dVar105 = dVar105 + dVar105;
        dVar71 = dVar71 + dVar71;
        dVar103 = dVar103 + dVar103;
        uVar115 = 0;
        uVar116 = 0x3ff00000;
        uVar117 = 0;
        uVar118 = 0x3ff00000;
        dVar106 = (dVar102 * dVar8 - dVar71 * dVar108) + dVar68 * dVar105 + dVar106 + param_2[5];
        local_318._8_8_ =
             (double)local_318._0_8_ * dVar69 * -1.0 +
             ((dVar92 * -1.0 + (double)local_318._8_8_ * dVar68) - dVar114);
        local_318._0_8_ =
             dVar72 * 1.0 + ((dVar91 * 1.0 + (double)local_318._0_8_ * dVar56) - dVar109);
        local_308._8_4_ = SUB84(dVar106,0);
        local_308._0_8_ =
             (dVar71 * dVar7 - dVar8 * dVar105) + dVar56 * dVar102 + dVar110 + param_2[4];
        local_308._12_4_ = (int)((ulonglong)dVar106 >> 0x20);
        local_2f8._8_8_ =
             (dVar103 * dVar9 - dVar103 * dVar9) + dVar68 * dVar103 + dVar101 + param_2[7];
        local_2f8._0_8_ =
             (dVar105 * dVar108 - dVar7 * dVar102) + dVar56 * dVar71 + dVar90 + param_2[6];
      }
      else {
        dVar90 = *param_2;
        dVar101 = param_2[1];
        dVar69 = param_2[2];
        dVar71 = dVar101 + dVar101;
        dVar91 = dVar69 + dVar69;
        dVar106 = dVar90 * (dVar90 + dVar90);
        dVar56 = param_2[3];
        dVar92 = dVar91 * dVar56;
        dVar102 = (dVar90 + dVar90) * param_2[3];
        dVar56 = dVar71 * dVar56;
        dVar105 = dVar34 * local_2d8;
        dVar68 = ((double)CONCAT44(uVar118,uVar117) - (dVar69 * dVar91 + dVar106)) * dVar58;
        dVar108 = (dVar71 * dVar90 + dVar92) * dVar35;
        local_1e8 = (*param_2 * dVar91 - dVar56) * dVar35;
        local_1f8._8_4_ = SUB84(dVar108,0);
        local_1f8._0_8_ =
             ((double)CONCAT44(uVar116,uVar115) - (dVar69 * dVar91 + dVar101 * dVar71)) * dVar35;
        local_1f8._12_4_ = (int)((ulonglong)dVar108 >> 0x20);
        dStack_1e0 = 0.0;
        local_1d8._8_4_ = SUB84(dVar68,0);
        local_1d8._0_8_ = (dVar71 * dVar90 - dVar92) * dVar58;
        local_1d8._12_4_ = (int)((ulonglong)dVar68 >> 0x20);
        local_1c8._8_8_ = 0;
        local_1c8._0_8_ = (dVar91 * dVar101 + dVar102) * dVar58;
        local_1b8._8_8_ = (dVar91 * dVar101 - dVar102) * dVar34;
        local_1b8._0_8_ = (dVar56 + *param_2 * dVar91) * dVar34;
        local_1a8._8_8_ = 0;
        local_1a8._0_8_ = (1.0 - (dVar106 + dVar101 * dVar71)) * dVar34;
        local_198 = (double *)param_2[4];
        dStack_190 = param_2[5];
        local_188 = param_2[6];
        dStack_180 = 1.0;
        dVar68 = (double)local_328._8_8_ + (double)local_328._8_8_;
        dVar90 = (double)local_318._0_8_ + (double)local_318._0_8_;
        dVar56 = (double)local_328._0_8_ * ((double)local_328._0_8_ + (double)local_328._0_8_);
        local_228 = (1.0 - (dVar56 + (double)local_328._8_8_ * dVar68)) * local_2d8;
        auVar113._8_8_ = CONCAT44(uVar118,uVar117);
        auVar113._0_8_ = CONCAT44(uVar116,uVar115);
        dVar101 = ((double)local_328._0_8_ + (double)local_328._0_8_) * (double)local_318._8_8_;
        dVar56 = ((double)CONCAT44(uVar118,uVar117) - ((double)local_318._0_8_ * dVar90 + dVar56)) *
                 dVar53;
        local_278._8_8_ =
             (dVar68 * (double)local_328._0_8_ + dVar90 * (double)local_318._8_8_) * dVar54;
        local_278._0_8_ =
             ((double)CONCAT44(uVar116,uVar115) -
             ((double)local_318._0_8_ * dVar90 + (double)local_328._8_8_ * dVar68)) * dVar54;
        local_268._8_8_ = 0;
        local_268._0_8_ =
             ((double)local_328._0_8_ * dVar90 - dVar68 * (double)local_318._8_8_) * dVar54;
        local_258._8_4_ = SUB84(dVar56,0);
        local_258._0_8_ =
             (dVar68 * (double)local_328._0_8_ - dVar90 * (double)local_318._8_8_) * dVar53;
        uStack_24c = (int)((ulonglong)dVar56 >> 0x20);
        local_248._8_8_ = 0;
        local_248._0_8_ = (dVar90 * (double)local_328._8_8_ + dVar101) * dVar53;
        local_238._8_8_ = (dVar90 * (double)local_328._8_8_ - dVar101) * local_2d8;
        local_238._0_8_ =
             (dVar68 * (double)local_318._8_8_ + (double)local_328._0_8_ * dVar90) * local_2d8;
        uStack_220 = 0;
        local_218 = (double)local_308._0_8_;
        dStack_210 = (double)local_308._8_8_;
        local_208 = (double)local_2f8._0_8_;
        uStack_200 = 0x3ff0000000000000;
        FUN_1447fea8d(local_178,local_278,local_1f8);
        FUN_144a1c686(local_178,0x3e45798ee0000000);
        auVar47._8_8_ = -(ulonglong)(0.0 <= dVar58 * dVar53);
        auVar47._0_8_ = -(ulonglong)(0.0 <= dVar35 * dVar54);
        auVar36 = blendvpd(_DAT_149936790,auVar113,auVar47);
        uVar32 = -(ulonglong)(0.0 <= dVar105);
        dVar56 = (double)(~uVar32 & 0xbff0000000000000 | uVar32 & 0x3ff0000000000000);
        dVar68 = auVar36._0_8_;
        local_178._8_8_ = (double)local_178._8_8_ * dVar68;
        local_178._0_8_ = (double)local_178._0_8_ * dVar68;
        local_168._0_8_ = (double)local_168._0_8_ * dVar68;
        dVar68 = auVar36._8_8_;
        dStack_150 = dStack_150 * dVar68;
        local_158 = (double *)(dVar68 * (double)local_158);
        local_148._0_8_ = (double)local_148._0_8_ * dVar68;
        local_138._8_8_ = (double)local_138._8_8_ * dVar56;
        local_138._0_8_ = dVar56 * (double)local_138._0_8_;
        local_128._0_8_ = (double)local_128._0_8_ * dVar56;
        FUN_14481fd10(&local_388,local_178);
        dVar56 = (double)local_378._0_8_ * (double)local_378._0_8_ + local_388 * local_388;
        dVar68 = (double)local_378._8_8_ * (double)local_378._8_8_ + dStack_380 * dStack_380;
        auVar65._0_8_ = dVar56 + dVar68;
        auVar65._8_8_ = dVar56 + dVar68;
        auVar48._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar65._8_8_);
        auVar48._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar65._0_8_);
        auVar36 = sqrtpd(auVar65,auVar65);
        auVar86._8_8_ = CONCAT44(uVar118,uVar117);
        auVar86._0_8_ = CONCAT44(uVar116,uVar115);
        auVar36 = divpd(auVar86,auVar36);
        auVar87._0_8_ = auVar36._0_8_ * (double)local_378._0_8_;
        auVar87._8_8_ = auVar36._8_8_ * (double)local_378._8_8_;
        local_318 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar87,auVar48);
        local_328._8_8_ =
             (ulonglong)(dStack_380 * auVar36._8_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar65._8_8_);
        local_328._0_8_ =
             (ulonglong)(local_388 * auVar36._0_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar65._0_8_);
        local_308._8_8_ = dStack_110;
        local_308._0_8_ = local_118;
        local_2f8._8_8_ = 0;
        local_2f8._0_8_ = local_108;
        lVar23 = local_4c8[10];
      }
      dStack_2d0 = auVar57._8_8_ * dVar70;
      local_2d8 = dVar34 * dVar55;
      local_2e8._8_8_ = dVar58 * dVar53;
      local_2e8._0_8_ = dVar35 * dVar54;
      plVar17 = (longlong *)(lVar23 + lVar29);
      if (param_6 == '\0') {
        pdVar25 = (double *)param_9[0xc];
        if ((double *)param_9[0xc] == (double *)0x0) {
          pdVar25 = local_4a8;
        }
        pdVar25 = (double *)pdVar25[local_4b0];
        local_4f8 = (double *)CONCAT44(local_4f8._4_4_,uVar104);
        (**(code **)(*plVar17 + 8))(plVar17,pdVar25,local_328);
      }
      else {
        local_4f8 = param_9;
        pdVar25 = (double *)local_328;
        FUN_147c74c3e(plVar17,local_328,local_4b8,param_8);
      }
      lVar30 = lVar30 + 1;
      lVar29 = lVar29 + 0xa0;
      plVar17 = local_4c8;
    } while (lVar30 < (int)local_4c8[0xb]);
  }
  if (0 < (int)plVar17[0xd]) {
    lVar30 = 0;
    lVar29 = 0;
    do {
      plVar17 = (longlong *)(plVar17[0xc] + lVar30);
      if (param_6 == '\0') {
        pdVar25 = (double *)param_9[0xc];
        if ((double *)param_9[0xc] == (double *)0x0) {
          pdVar25 = param_9 + 10;
        }
        local_4f8 = (double *)CONCAT44(local_4f8._4_4_,uVar104);
        (**(code **)(*plVar17 + 8))(plVar17,pdVar25[local_4b0],param_2,0x3f800000);
      }
      else {
        local_4f8 = param_9;
        FUN_147c76492(plVar17,param_2,local_4b8,param_8);
      }
      lVar29 = lVar29 + 1;
      lVar30 = lVar30 + 0x38;
      plVar17 = local_4c8;
    } while (lVar29 < (int)local_4c8[0xd]);
  }
  if ((local_f0 ^ (ulonglong)auStack_518) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c7a0c0 FUN_147c7a0c0 body=166 status=ok
// SIG undefined FUN_147c7a0c0(void)

undefined8 * FUN_147c7a0c0(undefined8 *param_1)

{
  FUN_144b1dcb8();
  *param_1 = &PTR_FUN_14a1ca480;
  param_1[0x34] = 0x400000000;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1ec) = 0xff;
  *(undefined1 *)((longlong)param_1 + 0x1ee) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x21c) = 0;
  return param_1;
}



// FUNCTION 147c7a166 FUN_147c7a166 body=1869 status=ok
// SIG undefined FUN_147c7a166(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_147c7a166(double *param_1,int param_2,longlong *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  int iVar30;
  longlong lVar31;
  uint uVar32;
  longlong lVar33;
  double *pdVar34;
  ulonglong uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  double dVar42;
  undefined1 auVar41 [16];
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auStack_288 [32];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if ((param_2 == -1) || ((int)param_3[1] <= param_2)) {
    pdVar34 = (double *)&DAT_14c846480;
    for (lVar31 = 0xc; lVar31 != 0; lVar31 = lVar31 + -1) {
      *param_1 = *pdVar34;
      pdVar34 = pdVar34 + 1;
      param_1 = param_1 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_288);
  }
  lVar31 = *param_3;
  lVar33 = (longlong)param_2 * 0x60;
  pdVar34 = (double *)(lVar31 + lVar33);
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  auVar13 = _DAT_149934d80;
  auVar40 = *(undefined1 (*) [16])(param_4 + 8);
  dVar5 = auVar40._0_8_;
  dVar14 = auVar40._8_8_;
  auVar48 = *(undefined1 (*) [16])(param_4 + 10);
  dVar6 = auVar48._0_8_;
  dVar12 = auVar48._8_8_;
  auVar43 = *(undefined1 (*) [16])(lVar31 + 0x40 + lVar33);
  dVar7 = auVar43._0_8_;
  dVar39 = auVar43._8_8_;
  auVar3 = *(undefined1 (*) [16])(lVar31 + 0x50 + lVar33);
  dVar8 = auVar3._0_8_;
  auVar40 = minpd(auVar43,auVar40);
  auVar43 = minpd(auVar3,auVar48);
  auVar48._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
  auVar48._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
  iVar30 = movmskpd((int)lVar31,auVar48);
  auVar40._8_8_ = -(ulonglong)(auVar43._8_8_ < 0.0);
  auVar40._0_8_ = -(ulonglong)(auVar43._0_8_ < 0.0);
  uVar32 = movmskpd((int)lVar33,auVar40);
  if ((uVar32 & 0x3fffffff) == 0 && iVar30 == 0) {
    dVar22 = *pdVar34;
    dVar23 = pdVar34[1];
    dVar24 = pdVar34[2];
    dVar25 = pdVar34[3];
    dVar26 = *param_4;
    dVar27 = param_4[1];
    dVar28 = param_4[2];
    dVar29 = param_4[3];
    dVar15 = param_4[3];
    dVar38 = param_4[3];
    dVar1 = *param_4;
    dVar16 = *param_4;
    dVar44 = param_4[1];
    dVar2 = param_4[1];
    dVar45 = param_4[2];
    dVar42 = param_4[2];
    dVar17 = pdVar34[4] * dVar5;
    dVar47 = pdVar34[5] * dVar14;
    dVar18 = pdVar34[6] * dVar6;
    dVar19 = pdVar34[7] * dVar12;
    dVar9 = dVar47 * dVar26 - dVar27 * dVar17;
    dVar10 = dVar18 * dVar27 - dVar28 * dVar47;
    dVar20 = dVar17 * dVar28 - dVar26 * dVar18;
    dVar21 = dVar19 * dVar29 - dVar29 * dVar19;
    dVar10 = dVar10 + dVar10;
    dVar20 = dVar20 + dVar20;
    dVar9 = dVar9 + dVar9;
    dVar21 = dVar21 + dVar21;
    dVar46 = param_4[4];
    dVar11 = (dVar10 * dVar28 - dVar9 * dVar26) + dVar38 * dVar20 + dVar47 + param_4[5];
    dVar47 = param_4[6];
    dVar4 = param_4[7];
    *param_1 = dVar23 * dVar45 * -1.0 + dVar24 * dVar44 + dVar25 * dVar1 * 1.0 + dVar22 * dVar15;
    param_1[1] = dVar22 * dVar42 * 1.0 + dVar25 * dVar2 + dVar24 * dVar16 * -1.0 + dVar23 * dVar38;
    param_1[2] = dVar25 * dVar45 * 1.0 +
                 ((dVar1 * dVar23 * 1.0 + dVar24 * dVar15) - dVar22 * dVar44);
    param_1[3] = dVar24 * dVar42 * -1.0 +
                 ((dVar16 * dVar22 * -1.0 + dVar25 * dVar38) - dVar23 * dVar2);
    auVar43._8_4_ = SUB84(dVar11,0);
    auVar43._0_8_ = (dVar9 * dVar27 - dVar28 * dVar20) + dVar15 * dVar10 + dVar17 + dVar46;
    auVar43._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 4) = auVar43;
    param_1[6] = (dVar20 * dVar26 - dVar27 * dVar10) + dVar15 * dVar9 + dVar18 + dVar47;
    param_1[7] = (dVar21 * dVar29 - dVar21 * dVar29) + dVar38 * dVar21 + dVar19 + dVar4;
    param_1[8] = dVar7 * dVar5;
    param_1[9] = dVar39 * dVar14;
    param_1[10] = dVar8 * dVar6;
    param_1[0xb] = auVar3._8_8_ * dVar12;
  }
  else {
    dVar1 = *param_4;
    dVar2 = param_4[1];
    dVar44 = param_4[2];
    dVar42 = dVar2 + dVar2;
    dVar45 = dVar44 + dVar44;
    dVar15 = dVar1 * (dVar1 + dVar1);
    local_178 = (1.0 - (dVar15 + dVar2 * dVar42)) * dVar6;
    dVar38 = param_4[3];
    dVar46 = dVar45 * dVar38;
    dVar47 = (dVar1 + dVar1) * param_4[3];
    dVar38 = dVar42 * dVar38;
    local_188 = (dVar38 + *param_4 * dVar45) * dVar6;
    dVar12 = dVar12 * auVar3._8_8_;
    dVar15 = (DAT_149934d80._8_8_ - (dVar44 * dVar45 + dVar15)) * dVar14;
    dVar16 = (dVar42 * dVar1 + dVar46) * dVar5;
    local_198 = (dVar45 * dVar2 + dVar47) * dVar14;
    dStack_180 = (dVar45 * dVar2 - dVar47) * dVar6;
    local_1b8 = (*param_4 * dVar45 - dVar38) * dVar5;
    local_1c8._8_4_ = SUB84(dVar16,0);
    local_1c8._0_8_ = ((double)DAT_149934d80 - (dVar44 * dVar45 + dVar2 * dVar42)) * dVar5;
    local_1c8._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    uStack_1b0 = 0;
    local_1a8._8_4_ = SUB84(dVar15,0);
    local_1a8._0_8_ = (dVar42 * dVar1 - dVar46) * dVar14;
    local_1a8._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    uStack_190 = 0;
    uStack_170 = 0;
    local_168 = param_4[4];
    dStack_160 = param_4[5];
    local_158 = param_4[6];
    uStack_150 = 0x3ff0000000000000;
    dVar16 = *pdVar34;
    dVar1 = pdVar34[1];
    dVar2 = pdVar34[2];
    dVar44 = dVar1 + dVar1;
    dVar42 = dVar2 + dVar2;
    dVar15 = dVar16 * (dVar16 + dVar16);
    local_1f8 = (1.0 - (dVar15 + dVar1 * dVar44)) * dVar8;
    dVar38 = pdVar34[3];
    dVar45 = dVar42 * dVar38;
    dVar46 = (dVar16 + dVar16) * pdVar34[3];
    dVar38 = dVar44 * dVar38;
    local_208 = (dVar38 + *pdVar34 * dVar42) * dVar8;
    dStack_200 = (dVar42 * dVar1 - dVar46) * dVar8;
    dVar14 = dVar14 * dVar39;
    local_248 = ((double)DAT_149934d80 - (dVar2 * dVar42 + dVar1 * dVar44)) * dVar7;
    dVar15 = (DAT_149934d80._8_8_ - (dVar2 * dVar42 + dVar15)) * dVar39;
    dStack_240 = (dVar44 * dVar16 + dVar45) * dVar7;
    local_218 = (dVar42 * dVar1 + dVar46) * dVar39;
    local_238 = (*pdVar34 * dVar42 - dVar38) * dVar7;
    uStack_230 = 0;
    local_228._8_4_ = SUB84(dVar15,0);
    local_228._0_8_ = (dVar44 * dVar16 - dVar45) * dVar39;
    local_228._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    uStack_210 = 0;
    uStack_1f0 = 0;
    local_1e8 = pdVar34[4];
    dStack_1e0 = pdVar34[5];
    local_1d8 = pdVar34[6];
    uStack_1d0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_148);
    FUN_144a1c686(&local_148,0x3e45798ee0000000);
    auVar36._8_8_ = -(ulonglong)(0.0 <= dVar14);
    auVar36._0_8_ = -(ulonglong)(0.0 <= dVar5 * dVar7);
    auVar40 = blendvpd(_DAT_149936790,auVar13,auVar36);
    uVar35 = -(ulonglong)(0.0 <= dVar6 * dVar8);
    dVar39 = (double)(~uVar35 & 0xbff0000000000000 | uVar35 & 0x3ff0000000000000);
    dVar38 = auVar40._0_8_;
    local_138 = local_138 * dVar38;
    local_140 = local_140 * dVar38;
    local_148 = local_148 * dVar38;
    dVar38 = auVar40._8_8_;
    local_118 = local_118 * dVar38;
    local_120 = local_120 * dVar38;
    local_128 = dVar38 * local_128;
    local_f8 = local_f8 * dVar39;
    local_100 = local_100 * dVar39;
    local_108 = dVar39 * local_108;
    FUN_14481fd10(&local_268,&local_148);
    dVar39 = local_258 * local_258 + local_268 * local_268;
    dVar38 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
    auVar41._0_8_ = dVar39 + dVar38;
    auVar41._8_8_ = dVar39 + dVar38;
    auVar37._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_);
    auVar37._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_);
    auVar40 = sqrtpd(auVar41,auVar41);
    auVar48 = divpd(auVar13,auVar40);
    auVar49._0_8_ = auVar48._0_8_ * local_258;
    auVar49._8_8_ = auVar48._8_8_ * dStack_250;
    auVar40 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar49,auVar37);
    auVar13._8_4_ = SUB84(dVar14,0);
    auVar13._0_8_ = dVar5 * dVar7;
    auVar13._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 8) = auVar13;
    auVar3._8_4_ = SUB84(dVar12,0);
    auVar3._0_8_ = dVar6 * dVar8;
    auVar3._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 10) = auVar3;
    *param_1 = (double)((ulonglong)(local_268 * auVar48._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_));
    param_1[1] = (double)((ulonglong)(dStack_260 * auVar48._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_));
    *(undefined1 (*) [16])(param_1 + 2) = auVar40;
    param_1[4] = local_e8;
    param_1[5] = dStack_e0;
    param_1[6] = local_d8;
    param_1[7] = 0.0;
  }
  if ((local_c0 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147c7a8b4 FUN_147c7a8b4 body=257 status=ok
// SIG undefined FUN_147c7a8b4(void)

void FUN_147c7a8b4(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined1 local_e0;
  undefined1 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b0;
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_b0 = param_3;
  if (0 < *(int *)(param_1 + 0x48)) {
    lVar4 = 0;
    do {
      uVar3 = FUN_144a750a0(param_4,*(longlong *)(*(longlong *)(param_1 + 0x40) + lVar4 * 8) + 0x28)
      ;
      lVar1 = *(longlong *)(param_1 + 0x40);
      FUN_147c7a166(local_a8,uVar3,param_5,param_6);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + lVar4 * 8);
      if ((*(byte *)(lVar2 + 0xb9) & 1) != 0) {
        local_c8 = local_b0;
        local_e0 = 0;
        local_e8 = 0;
        local_c0 = 0xffffffff;
        local_d8 = 1;
        local_d0 = param_2;
        FUN_147c768cc(lVar2 + 0x38,local_a8,*(undefined4 *)(lVar1 + lVar4 * 8),0);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x48));
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c7a9c8 FUN_147c7a9c8 body=395 status=ok
// SIG undefined FUN_147c7a9c8(void)

void FUN_147c7a9c8(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_38;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  iVar1 = local_34;
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_38 != 0;
  FUN_147c7ab54(param_1,local_28,local_30,iVar1 != 0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c7ab54 FUN_147c7ab54 body=237 status=ok
// SIG undefined FUN_147c7ab54(void)

void FUN_147c7ab54(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  code **local_78;
  undefined1 local_70 [4];
  undefined8 local_6c;
  longlong local_60;
  longlong local_58;
  char *local_50;
  code *local_48;
  undefined1 *local_40;
  char local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong **)(param_1 + 0x118) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0xb98))();
    if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x118) != 0)) {
      local_58 = param_1 + 0x130;
      local_50 = &local_31;
      local_31 = '\0';
      local_40 = local_70;
      local_70[0] = param_5;
      local_78 = &local_48;
      local_48 = FUN_143640486;
      local_6c = param_3;
      local_60 = lVar1;
      FUN_14593616e(*(longlong *)(param_1 + 0x118),param_2,param_4,0);
      if (local_31 == '\x01') {
        if (*(longlong **)(param_1 + 0x118) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 0x118) + 0x870))();
        }
        *(undefined1 *)(param_1 + 0x148) = 1;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c7ac42 FUN_147c7ac42 body=257 status=ok
// SIG undefined FUN_147c7ac42(void)

void FUN_147c7ac42(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined8 local_2c;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_48 = 0;
  local_40 = 0xff;
  local_3c = 0;
  uStack_34 = 0;
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c7ad44(param_1,local_20,puVar1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c7ad44 FUN_147c7ad44 body=105 status=ok
// SIG undefined FUN_147c7ad44(void)

void FUN_147c7ad44(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  
  if (*(longlong **)(param_1 + 0x118) != (longlong *)0x0) {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0xb98))();
    if (lVar2 != 0) {
      cVar1 = FUN_147c7bcfe(param_2,param_3,param_1 + 0x130,lVar2);
      if (cVar1 != '\0') {
        if (*(longlong **)(param_1 + 0x118) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 0x118) + 0x870))();
        }
        *(undefined1 *)(param_1 + 0x148) = 1;
      }
    }
  }
  return;
}



// FUNCTION 147c7adb4 FUN_147c7adb4 body=338 status=ok
// SIG undefined FUN_147c7adb4(void)

void FUN_147c7adb4(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [36];
  int local_54;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_50 = 0;
  local_48 = 0xff;
  local_44 = 0;
  uStack_3c = 0;
  local_34 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_54 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  puVar2 = &local_50;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147c7af08(param_1,local_28,puVar2,local_54 != 0);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c7af08 FUN_147c7af08 body=268 status=ok
// SIG undefined FUN_147c7af08(void)

void FUN_147c7af08(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined1 auStack_b8 [32];
  code **local_98;
  longlong local_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  char *local_50;
  code *local_48;
  longlong *local_40;
  char local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong **)(param_1 + 0x118) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0xb98))();
    if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x118) != 0)) {
      local_80 = param_1 + 0x130;
      local_50 = &local_31;
      local_31 = '\0';
      local_40 = &local_88;
      local_78 = *param_3;
      uStack_74 = param_3[1];
      uStack_70 = param_3[2];
      uStack_6c = param_3[3];
      local_68 = param_3[4];
      uStack_64 = param_3[5];
      uStack_60 = param_3[6];
      uStack_5c = param_3[7];
      local_58 = param_3[8];
      local_98 = &local_48;
      local_48 = FUN_14364044e;
      local_88 = lVar1;
      FUN_14593616e(*(longlong *)(param_1 + 0x118),param_2,param_4,0);
      if (local_31 == '\x01') {
        if (*(longlong **)(param_1 + 0x118) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 0x118) + 0x870))();
        }
        *(undefined1 *)(param_1 + 0x148) = 1;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c7b016 FUN_147c7b016 body=204 status=ok
// SIG undefined FUN_147c7b016(void)

void FUN_147c7b016(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [12];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
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
  FUN_147c7b0e4(param_1,local_88,local_28);
  puVar2 = local_88;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c7b0e4 FUN_147c7b0e4 body=2134 status=ok
// SIG undefined FUN_147c7b0e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_147c7b0e4(longlong param_1,double *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  uint uVar32;
  longlong *plVar33;
  longlong lVar34;
  int iVar35;
  longlong lVar36;
  double *pdVar37;
  longlong lVar38;
  ulonglong uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  double dVar43;
  undefined1 auVar44 [16];
  double dVar46;
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auStack_298 [32];
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  lVar34 = *(longlong *)(param_1 + 0x118);
  if (lVar34 != 0) {
    if (0 < (longlong)*(int *)(param_1 + 0x138)) {
      plVar33 = *(longlong **)(param_1 + 0x130);
      lVar36 = 0;
      do {
        if (*plVar33 == param_3) {
          lVar36 = *(longlong *)(*(longlong *)(param_1 + 0x120) + 8 + lVar36);
          if (lVar36 != 0) {
            lVar34 = *(longlong *)(lVar36 + 0x40);
            fVar1 = *(float *)(lVar34 + 0x4c);
            fVar2 = *(float *)(lVar34 + 0x48);
            fVar3 = *(float *)(lVar34 + 0x44);
            *param_2 = (double)*(float *)(lVar34 + 0x40);
            param_2[1] = (double)fVar3;
            param_2[2] = (double)fVar2;
            param_2[3] = (double)fVar1;
            dVar7 = *(double *)(lVar34 + 0x28);
            dVar4 = *(double *)(lVar34 + 0x30);
            param_2[4] = *(double *)(lVar34 + 0x20);
            param_2[5] = dVar7;
            param_2[6] = dVar4;
            param_2[7] = 0.0;
            param_2[8] = 1.0;
            param_2[9] = 1.0;
            param_2[10] = 1.0;
            param_2[0xb] = 0.0;
            goto LAB_147c7b735;
          }
          break;
        }
        lVar36 = lVar36 + 0x10;
        plVar33 = (longlong *)((longlong)plVar33 + 0x24);
      } while ((longlong)*(int *)(param_1 + 0x138) * 0x10 != lVar36);
    }
    iVar35 = *(int *)(lVar34 + 0x718);
    uVar32 = FUN_144909502(lVar34,param_3);
    if ((-1 < (int)uVar32) &&
       (lVar34 = lVar34 + (longlong)iVar35 * 0x10, (int)uVar32 < *(int *)(lVar34 + 0x6d8))) {
      lVar34 = *(longlong *)(lVar34 + 0x6d0);
      lVar38 = (ulonglong)uVar32 * 0x60;
      pdVar37 = (double *)(lVar34 + lVar38);
      lVar36 = *(longlong *)(param_1 + 0x118);
      param_2[6] = 0.0;
      param_2[7] = 0.0;
      param_2[4] = 0.0;
      param_2[5] = 0.0;
      auVar14 = _DAT_149934d80;
      auVar44 = *(undefined1 (*) [16])(lVar36 + 0x280);
      dVar4 = auVar44._0_8_;
      dVar15 = auVar44._8_8_;
      auVar53 = *(undefined1 (*) [16])(lVar36 + 0x290);
      dVar7 = auVar53._0_8_;
      dVar13 = auVar53._8_8_;
      auVar47 = *(undefined1 (*) [16])(lVar34 + 0x40 + lVar38);
      dVar8 = auVar47._0_8_;
      dVar43 = auVar47._8_8_;
      auVar6 = *(undefined1 (*) [16])(lVar34 + 0x50 + lVar38);
      dVar9 = auVar6._0_8_;
      auVar44 = minpd(auVar47,auVar44);
      auVar47 = minpd(auVar6,auVar53);
      auVar53._8_8_ = -(ulonglong)(auVar44._8_8_ < 0.0);
      auVar53._0_8_ = -(ulonglong)(auVar44._0_8_ < 0.0);
      iVar35 = movmskpd((int)lVar34,auVar53);
      auVar44._8_8_ = -(ulonglong)(auVar47._8_8_ < 0.0);
      auVar44._0_8_ = -(ulonglong)(auVar47._0_8_ < 0.0);
      uVar32 = movmskpd((int)lVar38,auVar44);
      if ((uVar32 & 0x3fffffff) == 0 && iVar35 == 0) {
        dVar24 = *pdVar37;
        dVar25 = pdVar37[1];
        dVar26 = pdVar37[2];
        dVar27 = pdVar37[3];
        dVar28 = *(double *)(lVar36 + 0x240);
        dVar29 = *(double *)(lVar36 + 0x248);
        dVar30 = *(double *)(lVar36 + 0x250);
        dVar31 = *(double *)(lVar36 + 600);
        dVar42 = *(double *)(lVar36 + 600);
        dVar16 = *(double *)(lVar36 + 600);
        dVar17 = *(double *)(lVar36 + 0x240);
        dVar19 = *(double *)(lVar36 + 0x240);
        dVar48 = *(double *)(lVar36 + 0x248);
        dVar5 = *(double *)(lVar36 + 0x248);
        dVar46 = *(double *)(lVar36 + 0x250);
        dVar51 = *(double *)(lVar36 + 0x250);
        dVar18 = pdVar37[4] * dVar4;
        dVar50 = pdVar37[5] * dVar15;
        dVar20 = pdVar37[6] * dVar7;
        dVar21 = pdVar37[7] * dVar13;
        dVar10 = dVar50 * dVar28 - dVar29 * dVar18;
        dVar11 = dVar20 * dVar29 - dVar30 * dVar50;
        dVar22 = dVar18 * dVar30 - dVar28 * dVar20;
        dVar23 = dVar21 * dVar31 - dVar31 * dVar21;
        dVar11 = dVar11 + dVar11;
        dVar22 = dVar22 + dVar22;
        dVar10 = dVar10 + dVar10;
        dVar23 = dVar23 + dVar23;
        dVar49 = *(double *)(lVar36 + 0x260);
        dVar12 = (dVar11 * dVar30 - dVar10 * dVar28) + dVar16 * dVar22 + dVar50 +
                 *(double *)(lVar36 + 0x268);
        dVar50 = *(double *)(lVar36 + 0x270);
        dVar52 = *(double *)(lVar36 + 0x278);
        *param_2 = dVar25 * dVar46 * -1.0 +
                   dVar26 * dVar48 + dVar27 * dVar17 * 1.0 + dVar24 * dVar42;
        param_2[1] = dVar24 * dVar51 * 1.0 +
                     dVar27 * dVar5 + dVar26 * dVar19 * -1.0 + dVar25 * dVar16;
        param_2[2] = dVar27 * dVar46 * 1.0 +
                     ((dVar17 * dVar25 * 1.0 + dVar26 * dVar42) - dVar24 * dVar48);
        param_2[3] = dVar26 * dVar51 * -1.0 +
                     ((dVar19 * dVar24 * -1.0 + dVar27 * dVar16) - dVar25 * dVar5);
        auVar47._8_4_ = SUB84(dVar12,0);
        auVar47._0_8_ = (dVar10 * dVar29 - dVar30 * dVar22) + dVar42 * dVar11 + dVar18 + dVar49;
        auVar47._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        *(undefined1 (*) [16])(param_2 + 4) = auVar47;
        param_2[6] = (dVar22 * dVar28 - dVar29 * dVar11) + dVar42 * dVar10 + dVar20 + dVar50;
        param_2[7] = (dVar23 * dVar31 - dVar23 * dVar31) + dVar16 * dVar23 + dVar21 + dVar52;
        param_2[8] = dVar8 * dVar4;
        param_2[9] = dVar43 * dVar15;
        param_2[10] = dVar9 * dVar7;
        param_2[0xb] = auVar6._8_8_ * dVar13;
      }
      else {
        dVar5 = *(double *)(lVar36 + 0x240);
        dVar48 = *(double *)(lVar36 + 0x248);
        dVar51 = *(double *)(lVar36 + 0x250);
        dVar46 = dVar48 + dVar48;
        dVar49 = dVar51 + dVar51;
        dVar16 = dVar5 * (dVar5 + dVar5);
        local_188 = (1.0 - (dVar16 + dVar48 * dVar46)) * dVar7;
        dVar19 = *(double *)(lVar36 + 0x240) * dVar49;
        dVar42 = *(double *)(lVar36 + 600);
        dVar50 = dVar49 * dVar42;
        dVar52 = (dVar5 + dVar5) * *(double *)(lVar36 + 600);
        dVar42 = dVar46 * dVar42;
        local_198 = (dVar42 + dVar19) * dVar7;
        dVar13 = dVar13 * auVar6._8_8_;
        dVar16 = (DAT_149934d80._8_8_ - (dVar51 * dVar49 + dVar16)) * dVar15;
        dVar17 = (dVar46 * dVar5 + dVar50) * dVar4;
        local_1a8 = (dVar49 * dVar48 + dVar52) * dVar15;
        dStack_190 = (dVar49 * dVar48 - dVar52) * dVar7;
        local_1c8 = (dVar19 - dVar42) * dVar4;
        local_1d8._8_4_ = SUB84(dVar17,0);
        local_1d8._0_8_ = ((double)DAT_149934d80 - (dVar51 * dVar49 + dVar48 * dVar46)) * dVar4;
        local_1d8._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
        uStack_1c0 = 0;
        local_1b8._8_4_ = SUB84(dVar16,0);
        local_1b8._0_8_ = (dVar46 * dVar5 - dVar50) * dVar15;
        local_1b8._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
        uStack_1a0 = 0;
        uStack_180 = 0;
        local_178 = *(undefined8 *)(lVar36 + 0x260);
        uStack_170 = *(undefined8 *)(lVar36 + 0x268);
        local_168 = *(undefined8 *)(lVar36 + 0x270);
        uStack_160 = 0x3ff0000000000000;
        dVar17 = *pdVar37;
        dVar19 = pdVar37[1];
        dVar5 = pdVar37[2];
        dVar48 = dVar19 + dVar19;
        dVar51 = dVar5 + dVar5;
        dVar16 = dVar17 * (dVar17 + dVar17);
        local_208 = (1.0 - (dVar16 + dVar19 * dVar48)) * dVar9;
        dVar42 = pdVar37[3];
        dVar46 = dVar51 * dVar42;
        dVar49 = (dVar17 + dVar17) * pdVar37[3];
        dVar42 = dVar48 * dVar42;
        local_218 = (dVar42 + *pdVar37 * dVar51) * dVar9;
        dStack_210 = (dVar51 * dVar19 - dVar49) * dVar9;
        dVar15 = dVar15 * dVar43;
        local_258 = ((double)DAT_149934d80 - (dVar5 * dVar51 + dVar19 * dVar48)) * dVar8;
        dVar16 = (DAT_149934d80._8_8_ - (dVar5 * dVar51 + dVar16)) * dVar43;
        dStack_250 = (dVar48 * dVar17 + dVar46) * dVar8;
        local_228 = (dVar51 * dVar19 + dVar49) * dVar43;
        local_248 = (*pdVar37 * dVar51 - dVar42) * dVar8;
        uStack_240 = 0;
        local_238._8_4_ = SUB84(dVar16,0);
        local_238._0_8_ = (dVar48 * dVar17 - dVar46) * dVar43;
        local_238._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
        uStack_220 = 0;
        uStack_200 = 0;
        local_1f8 = pdVar37[4];
        dStack_1f0 = pdVar37[5];
        local_1e8 = pdVar37[6];
        uStack_1e0 = 0x3ff0000000000000;
        FUN_1447fea8d(&local_158);
        FUN_144a1c686(&local_158,0x3e45798ee0000000);
        auVar40._8_8_ = -(ulonglong)(0.0 <= dVar15);
        auVar40._0_8_ = -(ulonglong)(0.0 <= dVar4 * dVar8);
        auVar44 = blendvpd(_DAT_149936790,auVar14,auVar40);
        uVar39 = -(ulonglong)(0.0 <= dVar7 * dVar9);
        dVar43 = (double)(~uVar39 & 0xbff0000000000000 | uVar39 & 0x3ff0000000000000);
        dVar42 = auVar44._0_8_;
        local_148 = local_148 * dVar42;
        local_150 = local_150 * dVar42;
        local_158 = local_158 * dVar42;
        dVar42 = auVar44._8_8_;
        local_128 = local_128 * dVar42;
        local_130 = local_130 * dVar42;
        local_138 = dVar42 * local_138;
        local_108 = local_108 * dVar43;
        local_110 = local_110 * dVar43;
        local_118 = dVar43 * local_118;
        FUN_14481fd10(&local_278,&local_158);
        dVar43 = local_268 * local_268 + local_278 * local_278;
        dVar42 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
        auVar45._0_8_ = dVar43 + dVar42;
        auVar45._8_8_ = dVar43 + dVar42;
        auVar41._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar45._8_8_);
        auVar41._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar45._0_8_);
        auVar44 = sqrtpd(auVar45,auVar45);
        auVar53 = divpd(auVar14,auVar44);
        auVar54._0_8_ = auVar53._0_8_ * local_268;
        auVar54._8_8_ = auVar53._8_8_ * dStack_260;
        auVar44 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar54,auVar41);
        auVar14._8_4_ = SUB84(dVar15,0);
        auVar14._0_8_ = dVar4 * dVar8;
        auVar14._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
        *(undefined1 (*) [16])(param_2 + 8) = auVar14;
        auVar6._8_4_ = SUB84(dVar13,0);
        auVar6._0_8_ = dVar7 * dVar9;
        auVar6._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        *(undefined1 (*) [16])(param_2 + 10) = auVar6;
        *param_2 = (double)((ulonglong)(local_278 * auVar53._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar45._0_8_));
        param_2[1] = (double)((ulonglong)(dStack_270 * auVar53._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar45._8_8_));
        *(undefined1 (*) [16])(param_2 + 2) = auVar44;
        param_2[4] = local_f8;
        param_2[5] = dStack_f0;
        param_2[6] = local_e8;
        param_2[7] = 0.0;
      }
LAB_147c7b735:
      if ((local_d0 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
  }
  pdVar37 = (double *)&DAT_14c846480;
  for (lVar34 = 0xc; lVar34 != 0; lVar34 = lVar34 + -1) {
    *param_2 = *pdVar37;
    pdVar37 = pdVar37 + 1;
    param_2 = param_2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_298);
}



// FUNCTION 147c7b93c FUN_147c7b93c body=156 status=ok
// SIG undefined FUN_147c7b93c(void)

void FUN_147c7b93c(undefined8 param_1,longlong param_2)

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
  FUN_147c7b9da(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c7b9da FUN_147c7b9da body=128 status=ok
// SIG undefined FUN_147c7b9da(void)

void FUN_147c7b9da(longlong param_1,longlong param_2)

{
  if ((*(longlong *)(param_1 + 0x118) != 0) && (*(longlong *)(param_1 + 0x140) != 0)) {
    FUN_147a0cb56(*(longlong *)(param_1 + 0x118),param_1 + 0x140);
  }
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x118) = param_2;
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(int *)(param_1 + 0x13c) != 0) {
    FUN_147c8680e(param_1 + 0x130);
  }
  FUN_14606e08a(param_1);
  FUN_147c7bb8e(param_1);
  return;
}



// FUNCTION 147c7ba5a FUN_147c7ba5a body=156 status=ok
// SIG undefined FUN_147c7ba5a(void)

void FUN_147c7ba5a(undefined8 param_1,longlong param_2)

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
  FUN_147c7baf8(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c7baf8 FUN_147c7baf8 body=120 status=ok
// SIG undefined FUN_147c7baf8(void)

void FUN_147c7baf8(longlong param_1,float param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  char local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0.0 <= param_2) {
    *(float *)(param_1 + 0x110) = param_2;
    local_38 = param_1;
    FUN_14071837e(local_30,*(undefined8 *)(param_1 + 0x118),1);
    FUN_143640c38(&local_38);
    if (local_30[0] == '\x01') {
      FUN_1447e63de(local_30);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c7bb74 FUN_147c7bb74 body=26 status=ok
// SIG undefined FUN_147c7bb74(void)

void FUN_147c7bb74(undefined8 param_1)

{
  FUN_14134c582();
  FUN_147c7bb8e(param_1);
  return;
}



// FUNCTION 147c7bb8e FUN_147c7bb8e body=326 status=ok
// SIG undefined FUN_147c7bb8e(void)

void FUN_147c7bb8e(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    puVar2 = local_40;
    local_38 = 3;
    *local_40 = &PTR_LAB_149e020b0;
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
    local_40[2] = lVar4;
    *local_40 = &PTR_FUN_14aa2b210;
    local_40[3] = 0;
    FUN_14485c47a(local_40 + 3,param_1);
    puVar2[4] = FUN_147c7bcd6;
    *(undefined4 *)(puVar2 + 5) = 0;
    FUN_147a0cadc(lVar1,&local_30,&local_40);
    *(undefined8 *)(param_1 + 0x140) = local_30;
    FUN_1449db362(&local_40);
    FUN_14082bc44(param_1 + 0x40,*(longlong *)(param_1 + 0x118),
                  *(longlong *)(param_1 + 0x118) + 0x40);
    if (*(longlong **)(param_1 + 0x118) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x118) + 0x870))();
    }
    *(undefined1 *)(param_1 + 0x148) = 1;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c7bcd6 FUN_147c7bcd6 body=40 status=ok
// SIG undefined FUN_147c7bcd6(void)

void FUN_147c7bcd6(longlong param_1)

{
  if (*(char *)(param_1 + 0x148) == '\x01') {
    FUN_147c7d4b0(param_1);
  }
  FUN_147c7d3c0(param_1,1);
  return;
}



// FUNCTION 147c7bcfe FUN_147c7bcfe body=166 status=ok
// SIG undefined FUN_147c7bcfe(void)

bool FUN_147c7bcfe(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar3 = FUN_144992686(param_4,param_1);
  if (iVar3 != -1) {
    plVar4 = (longlong *)*param_3;
    iVar1 = *(int *)(param_3 + 1);
    lVar7 = (longlong)iVar1;
    if (lVar7 != 0) {
      lVar6 = lVar7 * 0x24;
      plVar5 = plVar4;
      do {
        if (*plVar5 == param_1) {
          if (plVar5 != (longlong *)0x0) goto LAB_147c7bd64;
          break;
        }
        plVar5 = (longlong *)((longlong)plVar5 + 0x24);
        lVar6 = lVar6 + -0x24;
      } while (lVar6 != 0);
    }
    *(uint *)(param_3 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
      FUN_147c8683e(param_3,iVar1);
      plVar4 = (longlong *)*param_3;
    }
    plVar5 = (longlong *)((longlong)plVar4 + lVar7 * 0x24);
LAB_147c7bd64:
    lVar7 = param_2[1];
    lVar6 = param_2[2];
    lVar2 = param_2[3];
    *plVar5 = *param_2;
    plVar5[1] = lVar7;
    *(int *)(plVar5 + 4) = (int)param_2[4];
    plVar5[2] = lVar6;
    plVar5[3] = lVar2;
    *plVar5 = param_1;
  }
  return iVar3 != -1;
}



// FUNCTION 147c7bda4 FUN_147c7bda4 body=1857 status=ok
// SIG undefined FUN_147c7bda4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_147c7bda4(double *param_1,longlong param_2,longlong *param_3,int param_4)

{
  double *pdVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  int iVar31;
  uint uVar32;
  longlong lVar33;
  ulonglong uVar34;
  undefined1 auVar35 [16];
  double dVar36;
  undefined1 auVar37 [16];
  double dVar39;
  double dVar40;
  undefined1 auVar38 [16];
  undefined1 auVar41 [16];
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auStack_288 [32];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  lVar5 = *param_3;
  lVar33 = (longlong)param_4 * 0x60;
  pdVar1 = (double *)(lVar5 + lVar33);
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  auVar12 = _DAT_149934d80;
  auVar37 = *(undefined1 (*) [16])(param_2 + 0x280);
  dVar6 = auVar37._0_8_;
  dVar10 = auVar37._8_8_;
  auVar3 = *(undefined1 (*) [16])(param_2 + 0x290);
  dVar7 = auVar3._0_8_;
  auVar47 = *(undefined1 (*) [16])(lVar5 + 0x40 + lVar33);
  dVar8 = auVar47._0_8_;
  dVar11 = auVar47._8_8_;
  auVar4 = *(undefined1 (*) [16])(lVar5 + 0x50 + lVar33);
  dVar9 = auVar4._0_8_;
  auVar37 = minpd(auVar47,auVar37);
  auVar41 = minpd(auVar4,auVar3);
  auVar47._8_8_ = -(ulonglong)(auVar37._8_8_ < 0.0);
  auVar47._0_8_ = -(ulonglong)(auVar37._0_8_ < 0.0);
  iVar31 = movmskpd((int)lVar5,auVar47);
  auVar37._8_8_ = -(ulonglong)(auVar41._8_8_ < 0.0);
  auVar37._0_8_ = -(ulonglong)(auVar41._0_8_ < 0.0);
  uVar32 = movmskpd((int)lVar33,auVar37);
  if ((uVar32 & 0x3fffffff) == 0 && iVar31 == 0) {
    dVar23 = *pdVar1;
    dVar24 = pdVar1[1];
    dVar25 = pdVar1[2];
    dVar26 = pdVar1[3];
    dVar27 = *(double *)(param_2 + 0x240);
    dVar28 = *(double *)(param_2 + 0x248);
    dVar29 = *(double *)(param_2 + 0x250);
    dVar30 = *(double *)(param_2 + 600);
    dVar36 = *(double *)(param_2 + 600);
    dVar40 = *(double *)(param_2 + 600);
    dVar16 = *(double *)(param_2 + 0x240);
    dVar18 = *(double *)(param_2 + 0x240);
    dVar2 = *(double *)(param_2 + 0x248);
    dVar42 = *(double *)(param_2 + 0x248);
    dVar39 = *(double *)(param_2 + 0x250);
    dVar45 = *(double *)(param_2 + 0x250);
    dVar17 = pdVar1[4] * dVar6;
    dVar44 = pdVar1[5] * dVar10;
    dVar19 = pdVar1[6] * dVar7;
    dVar20 = pdVar1[7] * auVar3._8_8_;
    dVar13 = dVar44 * dVar27 - dVar28 * dVar17;
    dVar14 = dVar19 * dVar28 - dVar29 * dVar44;
    dVar21 = dVar17 * dVar29 - dVar27 * dVar19;
    dVar22 = dVar20 * dVar30 - dVar30 * dVar20;
    dVar14 = dVar14 + dVar14;
    dVar21 = dVar21 + dVar21;
    dVar13 = dVar13 + dVar13;
    dVar22 = dVar22 + dVar22;
    dVar43 = *(double *)(param_2 + 0x260);
    dVar15 = (dVar14 * dVar29 - dVar13 * dVar27) + dVar40 * dVar21 + dVar44 +
             *(double *)(param_2 + 0x268);
    dVar44 = *(double *)(param_2 + 0x270);
    dVar46 = *(double *)(param_2 + 0x278);
    *param_1 = dVar24 * dVar39 * -1.0 + dVar25 * dVar2 + dVar26 * dVar16 * 1.0 + dVar23 * dVar36;
    param_1[1] = dVar23 * dVar45 * 1.0 + dVar26 * dVar42 + dVar25 * dVar18 * -1.0 + dVar24 * dVar40;
    param_1[2] = dVar26 * dVar39 * 1.0 +
                 ((dVar16 * dVar24 * 1.0 + dVar25 * dVar36) - dVar23 * dVar2);
    param_1[3] = dVar25 * dVar45 * -1.0 +
                 ((dVar18 * dVar23 * -1.0 + dVar26 * dVar40) - dVar24 * dVar42);
    auVar12._8_4_ = SUB84(dVar15,0);
    auVar12._0_8_ = (dVar13 * dVar28 - dVar29 * dVar21) + dVar36 * dVar14 + dVar17 + dVar43;
    auVar12._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 4) = auVar12;
    param_1[6] = (dVar21 * dVar27 - dVar28 * dVar14) + dVar36 * dVar13 + dVar19 + dVar44;
    param_1[7] = (dVar22 * dVar30 - dVar22 * dVar30) + dVar40 * dVar22 + dVar20 + dVar46;
  }
  else {
    dVar2 = *(double *)(param_2 + 0x240);
    dVar42 = *(double *)(param_2 + 0x248);
    dVar45 = *(double *)(param_2 + 0x250);
    dVar39 = dVar42 + dVar42;
    dVar43 = dVar45 + dVar45;
    dVar40 = dVar2 * (dVar2 + dVar2);
    local_178 = (1.0 - (dVar40 + dVar42 * dVar39)) * dVar7;
    dVar18 = *(double *)(param_2 + 0x240) * dVar43;
    dVar36 = *(double *)(param_2 + 600);
    dVar44 = dVar43 * dVar36;
    dVar46 = (dVar2 + dVar2) * *(double *)(param_2 + 600);
    dVar36 = dVar39 * dVar36;
    local_188 = (dVar36 + dVar18) * dVar7;
    dVar40 = (DAT_149934d80._8_8_ - (dVar45 * dVar43 + dVar40)) * dVar10;
    dVar16 = (dVar39 * dVar2 + dVar44) * dVar6;
    local_198 = (dVar43 * dVar42 + dVar46) * dVar10;
    dStack_180 = (dVar43 * dVar42 - dVar46) * dVar7;
    local_1b8 = (dVar18 - dVar36) * dVar6;
    local_1c8._8_4_ = SUB84(dVar16,0);
    local_1c8._0_8_ = ((double)DAT_149934d80 - (dVar45 * dVar43 + dVar42 * dVar39)) * dVar6;
    local_1c8._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    uStack_1b0 = 0;
    local_1a8._8_4_ = SUB84(dVar40,0);
    local_1a8._0_8_ = (dVar39 * dVar2 - dVar44) * dVar10;
    local_1a8._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
    uStack_190 = 0;
    uStack_170 = 0;
    local_168 = *(undefined8 *)(param_2 + 0x260);
    uStack_160 = *(undefined8 *)(param_2 + 0x268);
    local_158 = *(undefined8 *)(param_2 + 0x270);
    uStack_150 = 0x3ff0000000000000;
    dVar16 = *pdVar1;
    dVar18 = pdVar1[1];
    dVar2 = pdVar1[2];
    dVar42 = dVar18 + dVar18;
    dVar45 = dVar2 + dVar2;
    dVar40 = dVar16 * (dVar16 + dVar16);
    local_1f8 = (1.0 - (dVar40 + dVar18 * dVar42)) * dVar9;
    dVar36 = pdVar1[3];
    dVar39 = dVar45 * dVar36;
    dVar43 = (dVar16 + dVar16) * pdVar1[3];
    dVar36 = dVar42 * dVar36;
    local_208 = (dVar36 + *pdVar1 * dVar45) * dVar9;
    dStack_200 = (dVar45 * dVar18 - dVar43) * dVar9;
    local_248 = ((double)DAT_149934d80 - (dVar2 * dVar45 + dVar18 * dVar42)) * dVar8;
    dVar40 = (DAT_149934d80._8_8_ - (dVar2 * dVar45 + dVar40)) * dVar11;
    dStack_240 = (dVar42 * dVar16 + dVar39) * dVar8;
    local_218 = (dVar45 * dVar18 + dVar43) * dVar11;
    local_238 = (*pdVar1 * dVar45 - dVar36) * dVar8;
    uStack_230 = 0;
    local_228._8_4_ = SUB84(dVar40,0);
    local_228._0_8_ = (dVar42 * dVar16 - dVar39) * dVar11;
    local_228._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
    uStack_210 = 0;
    uStack_1f0 = 0;
    local_1e8 = pdVar1[4];
    dStack_1e0 = pdVar1[5];
    local_1d8 = pdVar1[6];
    uStack_1d0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_148);
    FUN_144a1c686(&local_148,0x3e45798ee0000000);
    auVar41._8_8_ = -(ulonglong)(0.0 <= dVar10 * dVar11);
    auVar41._0_8_ = -(ulonglong)(0.0 <= dVar6 * dVar8);
    auVar37 = blendvpd(_DAT_149936790,auVar12,auVar41);
    uVar34 = -(ulonglong)(0.0 <= dVar7 * dVar9);
    dVar36 = (double)(~uVar34 & 0xbff0000000000000 | uVar34 & 0x3ff0000000000000);
    dVar40 = auVar37._0_8_;
    local_138 = local_138 * dVar40;
    local_140 = local_140 * dVar40;
    local_148 = local_148 * dVar40;
    dVar40 = auVar37._8_8_;
    local_118 = local_118 * dVar40;
    local_120 = local_120 * dVar40;
    local_128 = dVar40 * local_128;
    local_f8 = local_f8 * dVar36;
    local_100 = local_100 * dVar36;
    local_108 = dVar36 * local_108;
    FUN_14481fd10(&local_268,&local_148);
    dVar36 = local_258 * local_258 + local_268 * local_268;
    dVar40 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
    auVar38._0_8_ = dVar36 + dVar40;
    auVar38._8_8_ = dVar36 + dVar40;
    auVar35._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_);
    auVar35._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_);
    auVar37 = sqrtpd(auVar38,auVar38);
    auVar47 = divpd(auVar12,auVar37);
    auVar48._0_8_ = auVar47._0_8_ * local_258;
    auVar48._8_8_ = auVar47._8_8_ * dStack_250;
    auVar37 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar48,auVar35);
    *param_1 = (double)((ulonglong)(local_268 * auVar47._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_));
    param_1[1] = (double)((ulonglong)(dStack_260 * auVar47._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_));
    *(undefined1 (*) [16])(param_1 + 2) = auVar37;
    param_1[4] = local_e8;
    param_1[5] = dStack_e0;
    param_1[6] = local_d8;
    param_1[7] = 0.0;
  }
  dVar36 = auVar3._8_8_ * auVar4._8_8_;
  auVar4._8_4_ = SUB84(dVar10 * dVar11,0);
  auVar4._0_8_ = dVar6 * dVar8;
  auVar4._12_4_ = (int)((ulonglong)(dVar10 * dVar11) >> 0x20);
  *(undefined1 (*) [16])(param_1 + 8) = auVar4;
  auVar3._8_4_ = SUB84(dVar36,0);
  auVar3._0_8_ = dVar7 * dVar9;
  auVar3._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 10) = auVar3;
  if ((local_c0 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c7c4e6 FUN_147c7c4e6 body=3801 status=ok
// SIG undefined FUN_147c7c4e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_147c7c4e6(double *param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                      uint param_5)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  longlong *plVar19;
  longlong lVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  undefined8 uVar24;
  double *pdVar25;
  double *pdVar26;
  double *pdVar27;
  ulonglong uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar33;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar39;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar50;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar51;
  undefined1 auVar47 [16];
  double dVar52;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  undefined4 uVar63;
  undefined1 auStack_368 [32];
  undefined1 local_348 [24];
  double *local_330;
  double local_328;
  double dStack_320;
  undefined1 local_318 [16];
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  undefined8 uStack_210;
  undefined1 local_208 [16];
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_368;
  local_330 = param_1;
  plVar19 = (longlong *)FUN_144a81888(param_2);
  lVar20 = (**(code **)(*plVar19 + 0x310))(plVar19);
  if ((-1 < (int)param_5) && (iVar18 = *(int *)(lVar20 + 0x28), (int)param_5 < iVar18)) {
    lVar1 = *param_4;
    lVar23 = (ulonglong)param_5 * 0x60;
    pdVar25 = (double *)(lVar1 + 0x50 + lVar23);
    dVar10 = *pdVar25;
    dVar41 = pdVar25[1];
    local_348._0_16_ = *(undefined1 (*) [16])(lVar1 + 0x40 + lVar23);
    dVar34 = *(double *)(lVar1 + lVar23);
    dVar39 = ((double *)(lVar1 + lVar23))[1];
    auVar35 = *(undefined1 (*) [16])(lVar1 + 0x10 + lVar23);
    pdVar25 = (double *)(lVar1 + 0x20 + lVar23);
    dVar59 = *pdVar25;
    dVar62 = pdVar25[1];
    pdVar25 = (double *)(lVar1 + 0x30 + lVar23);
    dVar8 = *pdVar25;
    dVar40 = pdVar25[1];
    uVar28 = (ulonglong)param_5;
    while( true ) {
      uVar63 = (undefined4)((ulonglong)dVar62 >> 0x20);
      uVar22 = *(uint *)(*(longlong *)(lVar20 + 0x20) + 8 + (uVar28 & 0xffffffff) * 0xc);
      uVar28 = (ulonglong)(int)uVar22;
      if ((uVar28 == 0xffffffffffffffff) || (uVar22 == param_5)) break;
      uVar17 = (undefined4)*(undefined8 *)(*(longlong *)(lVar20 + 0x20) + uVar28 * 0xc);
      uVar16 = FUN_144992686(param_3);
      auVar45 = _DAT_149934d80;
      dVar58 = auVar35._0_8_;
      dVar60 = auVar35._8_8_;
      if ((-1 < (int)uVar16) && ((int)uVar16 < *(int *)(param_2 + 0xd78))) {
        uVar24 = *(undefined8 *)(*(longlong *)(param_2 + 0xd70) + (ulonglong)uVar16 * 8);
        uVar17 = FUN_143605ce2(uVar24,&local_2f8,1,0);
        pdVar25 = local_330;
        local_330[6] = 0.0;
        local_330[7] = 0.0;
        local_330[4] = 0.0;
        local_330[5] = 0.0;
        auVar35 = _DAT_149934d80;
        dVar55 = local_2b8._0_8_;
        dVar57 = local_2b8._8_8_;
        dVar7 = local_2a8._0_8_;
        dVar2 = local_2a8._8_8_;
        auVar45 = minpd(local_348._0_16_,local_2b8);
        auVar47._8_8_ = dVar41;
        auVar47._0_8_ = dVar10;
        auVar47 = minpd(auVar47,local_2a8);
        auVar43._8_8_ = -(ulonglong)(auVar45._8_8_ < 0.0);
        auVar43._0_8_ = -(ulonglong)(auVar45._0_8_ < 0.0);
        iVar18 = movmskpd(uVar17,auVar43);
        auVar45._8_8_ = -(ulonglong)(auVar47._8_8_ < 0.0);
        auVar45._0_8_ = -(ulonglong)(auVar47._0_8_ < 0.0);
        uVar22 = movmskpd((int)uVar24,auVar45);
        uVar24 = local_348._0_8_;
        uVar15 = local_348._8_8_;
        if ((uVar22 & 0x3fffffff) == 0 && iVar18 == 0) {
          dVar59 = dVar59 * dVar55;
          dVar62 = dVar62 * dVar57;
          dVar8 = dVar8 * dVar7;
          dVar40 = dVar40 * dVar2;
          dVar33 = dVar62 * local_2f8 - dVar59 * dStack_2f0;
          dVar53 = dVar8 * dStack_2f0 - dVar62 * local_2e8;
          dVar50 = dVar59 * local_2e8 - dVar8 * local_2f8;
          dVar52 = dVar40 * dStack_2e0 - dVar40 * dStack_2e0;
          dVar53 = dVar53 + dVar53;
          dVar50 = dVar50 + dVar50;
          dVar33 = dVar33 + dVar33;
          dVar52 = dVar52 + dVar52;
          *local_330 = dVar39 * local_2e8 * -1.0 +
                       dVar58 * dStack_2f0 + dVar60 * local_2f8 * 1.0 + dVar34 * dStack_2e0;
          local_330[1] = dVar34 * local_2e8 * 1.0 +
                         dVar60 * dStack_2f0 + dVar58 * local_2f8 * -1.0 + dVar39 * dStack_2e0;
          local_330[2] = dVar60 * local_2e8 * 1.0 +
                         ((local_2f8 * dVar39 * 1.0 + dVar58 * dStack_2e0) - dVar34 * dStack_2f0);
          local_330[3] = dVar58 * local_2e8 * -1.0 +
                         ((local_2f8 * dVar34 * -1.0 + dVar60 * dStack_2e0) - dVar39 * dStack_2f0);
          local_330[4] = (dVar33 * dStack_2f0 - local_2e8 * dVar50) + dStack_2e0 * dVar53 + dVar59 +
                         local_2d8;
          local_330[5] = (dVar53 * local_2e8 - dVar33 * local_2f8) + dStack_2e0 * dVar50 + dVar62 +
                         dStack_2d0;
          local_330[6] = (dVar50 * local_2f8 - dStack_2f0 * dVar53) + dStack_2e0 * dVar33 + dVar8 +
                         local_2c8;
          local_330[7] = (dVar52 * dStack_2e0 - dVar52 * dStack_2e0) + dStack_2e0 * dVar52 + dVar40
                         + dStack_2c0;
        }
        else {
          dStack_320 = dVar41 * dVar2;
          dVar52 = dStack_2f0 + dStack_2f0;
          dVar50 = local_2e8 + local_2e8;
          dVar40 = local_2f8 * (local_2f8 + local_2f8);
          local_318._8_4_ = SUB84(dVar62,0);
          local_318._0_8_ = dVar59;
          local_318._12_4_ = uVar63;
          local_1a8 = (1.0 - (dVar40 + dStack_2f0 * dVar52)) * dVar7;
          dVar53 = (local_2f8 + local_2f8) * dStack_2e0;
          local_1b8 = (dVar52 * dStack_2e0 + local_2f8 * dVar50) * dVar7;
          local_1d8 = (dVar52 * local_2f8 - dVar50 * dStack_2e0) * dVar57;
          dStack_1b0 = (dVar50 * dStack_2f0 - dVar53) * dVar7;
          dVar62 = (double)local_348._0_8_ * dVar55;
          dVar33 = (double)local_348._8_8_ * dVar57;
          local_1f8 = (1.0 - (local_2e8 * dVar50 + dStack_2f0 * dVar52)) * dVar55;
          dStack_1d0 = (1.0 - (local_2e8 * dVar50 + dVar40)) * dVar57;
          dStack_1f0 = (dVar52 * local_2f8 + dVar50 * dStack_2e0) * dVar55;
          local_1c8 = (dVar50 * dStack_2f0 + dVar53) * dVar57;
          local_1e8 = (local_2f8 * dVar50 - dVar52 * dStack_2e0) * dVar55;
          uStack_1e0 = 0;
          uStack_1c0 = 0;
          uStack_1a0 = 0;
          local_198 = local_2d8;
          dStack_190 = dStack_2d0;
          local_188 = local_2c8;
          uStack_180 = 0x3ff0000000000000;
          dVar40 = dVar39 + dVar39;
          dVar50 = dVar58 + dVar58;
          dVar52 = dVar34 * (dVar34 + dVar34);
          local_228 = (1.0 - (dVar52 + dVar39 * dVar40)) * dVar10;
          dVar53 = (dVar34 + dVar34) * dVar60;
          local_238 = (dVar40 * dVar60 + dVar34 * dVar50) * dVar10;
          local_258 = (dVar40 * dVar34 - dVar50 * dVar60) * (double)local_348._8_8_;
          dStack_230 = (dVar50 * dVar39 - dVar53) * dVar10;
          local_278 = ((double)DAT_149934d80 - (dVar58 * dVar50 + dVar39 * dVar40)) *
                      (double)local_348._0_8_;
          dStack_250 = (DAT_149934d80._8_8_ - (dVar58 * dVar50 + dVar52)) * (double)local_348._8_8_;
          dStack_270 = (dVar40 * dVar34 + dVar50 * dVar60) * (double)local_348._0_8_;
          local_248 = (dVar50 * dVar39 + dVar53) * (double)local_348._8_8_;
          local_268 = (dVar34 * dVar50 - dVar40 * dVar60) * (double)local_348._0_8_;
          uStack_260 = 0;
          uStack_240 = 0;
          uStack_220 = 0;
          uStack_210 = local_318._8_8_;
          local_208._8_4_ = 0;
          local_208._0_8_ = dVar8;
          local_208._12_4_ = 0x3ff00000;
          local_328 = dVar10 * dVar7;
          local_308 = dVar62;
          dStack_300 = dVar33;
          local_218 = dVar59;
          FUN_1447fea8d(&local_178);
          FUN_144a1c686(&local_178,0x3e45798ee0000000);
          auVar31._8_8_ = -(ulonglong)(0.0 <= dVar33);
          auVar31._0_8_ = -(ulonglong)(0.0 <= dVar62);
          auVar45 = blendvpd(_DAT_149936790,auVar35,auVar31);
          uVar28 = -(ulonglong)(0.0 <= dVar10 * dVar7);
          dVar34 = (double)(~uVar28 & 0xbff0000000000000 | uVar28 & 0x3ff0000000000000);
          dVar39 = auVar45._0_8_;
          local_168 = local_168 * dVar39;
          local_170 = local_170 * dVar39;
          local_178 = local_178 * dVar39;
          dVar39 = auVar45._8_8_;
          local_148 = local_148 * dVar39;
          local_150 = local_150 * dVar39;
          local_158 = dVar39 * local_158;
          local_128 = local_128 * dVar34;
          local_130 = local_130 * dVar34;
          local_138 = dVar34 * local_138;
          FUN_14481fd10(&local_298,&local_178);
          auVar38._0_8_ = local_298 * local_298;
          auVar38._8_8_ = dStack_290 * dStack_290;
          dVar34 = local_288 * local_288 + auVar38._0_8_;
          dVar39 = dStack_280 * dStack_280 + auVar38._8_8_;
          auVar48._0_8_ = dVar34 + dVar39;
          auVar48._8_8_ = dVar34 + dVar39;
          auVar32._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar48._8_8_);
          auVar32._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar48._0_8_);
          auVar45 = sqrtpd(auVar38,auVar48);
          auVar45 = divpd(auVar35,auVar45);
          auVar49._0_8_ = auVar45._0_8_ * local_288;
          auVar49._8_8_ = auVar45._8_8_ * dStack_280;
          auVar35 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar49,auVar32);
          *pdVar25 = (double)((ulonglong)(local_298 * auVar45._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar48._0_8_));
          pdVar25[1] = (double)((ulonglong)(dStack_290 * auVar45._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar48._8_8_));
          *(undefined1 (*) [16])(pdVar25 + 2) = auVar35;
          pdVar25[4] = local_118;
          pdVar25[5] = dStack_110;
          pdVar25[6] = local_108;
          pdVar25[7] = 0.0;
        }
        pdVar25[8] = (double)uVar24 * dVar55;
        pdVar25[9] = (double)uVar15 * dVar57;
        auVar9._8_4_ = SUB84(dVar41 * dVar2,0);
        auVar9._0_8_ = dVar10 * dVar7;
        auVar9._12_4_ = (int)((ulonglong)(dVar41 * dVar2) >> 0x20);
        *(undefined1 (*) [16])(pdVar25 + 10) = auVar9;
        goto LAB_147c7ccf0;
      }
      lVar1 = *param_4;
      lVar23 = uVar28 * 0x60;
      pdVar25 = (double *)(lVar1 + lVar23);
      auVar35 = *(undefined1 (*) [16])(lVar1 + 0x40 + lVar23);
      dVar55 = auVar35._0_8_;
      dVar57 = auVar35._8_8_;
      auVar43 = *(undefined1 (*) [16])(lVar1 + 0x50 + lVar23);
      dVar7 = auVar43._0_8_;
      dVar2 = auVar43._8_8_;
      auVar35 = minpd(local_348._0_16_,auVar35);
      auVar42._8_8_ = dVar41;
      auVar42._0_8_ = dVar10;
      auVar43 = minpd(auVar42,auVar43);
      auVar36._8_8_ = -(ulonglong)(auVar35._8_8_ < 0.0);
      auVar36._0_8_ = -(ulonglong)(auVar35._0_8_ < 0.0);
      iVar21 = movmskpd((int)lVar1,auVar36);
      auVar44._8_8_ = -(ulonglong)(auVar43._8_8_ < 0.0);
      auVar44._0_8_ = -(ulonglong)(auVar43._0_8_ < 0.0);
      uVar16 = movmskpd(uVar17,auVar44);
      if ((uVar16 & 0x3fffffff) == 0 && iVar21 == 0) {
        dVar11 = *pdVar25;
        dVar12 = pdVar25[1];
        dVar13 = pdVar25[2];
        dVar14 = pdVar25[3];
        dVar52 = pdVar25[3];
        dVar33 = pdVar25[3];
        dVar3 = *pdVar25 * dVar39;
        dVar4 = *pdVar25 * dVar34;
        dVar53 = pdVar25[1];
        dVar50 = pdVar25[1];
        dVar5 = dVar34 * dVar53;
        dVar6 = dVar39 * dVar50;
        dVar54 = pdVar25[2];
        dVar56 = pdVar25[2];
        dVar51 = dVar34 * dVar56;
        dVar34 = dVar39 * dVar54 * -1.0 +
                 dVar58 * dVar53 + dVar60 * *pdVar25 * 1.0 + dVar34 * dVar52;
        dVar39 = dVar51 * 1.0 + dVar60 * dVar50 + dVar58 * *pdVar25 * -1.0 + dVar39 * dVar33;
        dVar59 = dVar59 * dVar55;
        dVar62 = dVar62 * dVar57;
        dVar8 = dVar8 * dVar7;
        dVar40 = dVar40 * dVar2;
        dVar51 = dVar62 * dVar11 - dVar59 * dVar12;
        dVar61 = dVar8 * dVar12 - dVar62 * dVar13;
        dVar50 = dVar59 * dVar13 - dVar8 * dVar11;
        dVar53 = dVar40 * dVar14 - dVar40 * dVar14;
        dVar61 = dVar61 + dVar61;
        dVar50 = dVar50 + dVar50;
        dVar51 = dVar51 + dVar51;
        dVar53 = dVar53 + dVar53;
        local_348._8_8_ = (double)local_348._8_8_ * dVar57;
        local_348._0_8_ = (double)local_348._0_8_ * dVar55;
        dVar59 = (dVar51 * dVar12 - dVar13 * dVar50) + dVar52 * dVar61 + dVar59 + pdVar25[4];
        dVar62 = (dVar61 * dVar13 - dVar51 * dVar11) + dVar33 * dVar50 + dVar62 + pdVar25[5];
        dVar8 = (dVar50 * dVar11 - dVar12 * dVar61) + dVar52 * dVar51 + dVar8 + pdVar25[6];
        dVar40 = (dVar53 * dVar14 - dVar53 * dVar14) + dVar33 * dVar53 + dVar40 + pdVar25[7];
        dVar10 = dVar10 * dVar7;
        dVar41 = dVar41 * dVar2;
        auVar35._8_8_ = dVar58 * dVar56 * -1.0 + ((dVar4 * -1.0 + dVar60 * dVar33) - dVar6);
        auVar35._0_8_ = dVar60 * dVar54 * 1.0 + ((dVar3 * 1.0 + dVar58 * dVar52) - dVar5);
      }
      else {
        local_328 = dVar10 * dVar7;
        dStack_320 = dVar41 * dVar2;
        dVar2 = *pdVar25;
        dVar33 = pdVar25[1];
        dVar52 = pdVar25[2];
        dVar50 = dVar33 + dVar33;
        dVar53 = dVar52 + dVar52;
        dVar41 = dVar2 * (dVar2 + dVar2);
        local_318._8_4_ = SUB84(dVar62,0);
        local_318._0_8_ = dVar59;
        local_318._12_4_ = uVar63;
        local_1a8 = (1.0 - (dVar41 + dVar33 * dVar50)) * dVar7;
        dVar40 = pdVar25[3];
        dVar54 = dVar53 * dVar40;
        dVar56 = (dVar2 + dVar2) * pdVar25[3];
        dVar40 = dVar50 * dVar40;
        local_1b8 = (dVar40 + *pdVar25 * dVar53) * dVar7;
        local_1d8 = (dVar50 * dVar2 - dVar54) * dVar57;
        dStack_1b0 = (dVar53 * dVar33 - dVar56) * dVar7;
        dVar62 = (double)local_348._0_8_ * dVar55;
        dVar7 = (double)local_348._8_8_ * dVar57;
        local_1f8 = (1.0 - (dVar52 * dVar53 + dVar33 * dVar50)) * dVar55;
        dStack_1d0 = (1.0 - (dVar52 * dVar53 + dVar41)) * dVar57;
        dStack_1f0 = (dVar50 * dVar2 + dVar54) * dVar55;
        local_1c8 = (dVar53 * dVar33 + dVar56) * dVar57;
        local_1e8 = (*pdVar25 * dVar53 - dVar40) * dVar55;
        uStack_1e0 = 0;
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = pdVar25[4];
        dStack_190 = pdVar25[5];
        local_188 = pdVar25[6];
        uStack_180 = 0x3ff0000000000000;
        dVar40 = dVar39 + dVar39;
        dVar55 = dVar58 + dVar58;
        dVar41 = dVar34 * (dVar34 + dVar34);
        local_228 = (1.0 - (dVar41 + dVar39 * dVar40)) * dVar10;
        dVar57 = (dVar34 + dVar34) * dVar60;
        local_238 = (dVar40 * dVar60 + dVar34 * dVar55) * dVar10;
        local_258 = (dVar40 * dVar34 - dVar55 * dVar60) * (double)local_348._8_8_;
        dStack_230 = (dVar55 * dVar39 - dVar57) * dVar10;
        local_278 = ((double)DAT_149934d80 - (dVar58 * dVar55 + dVar39 * dVar40)) *
                    (double)local_348._0_8_;
        dStack_250 = (DAT_149934d80._8_8_ - (dVar58 * dVar55 + dVar41)) * (double)local_348._8_8_;
        dStack_270 = (dVar40 * dVar34 + dVar55 * dVar60) * (double)local_348._0_8_;
        local_248 = (dVar55 * dVar39 + dVar57) * (double)local_348._8_8_;
        local_268 = (dVar34 * dVar55 - dVar40 * dVar60) * (double)local_348._0_8_;
        uStack_260 = 0;
        uStack_240 = 0;
        uStack_220 = 0;
        uStack_210 = local_318._8_8_;
        local_208._8_4_ = 0;
        local_208._0_8_ = dVar8;
        local_208._12_4_ = 0x3ff00000;
        local_218 = dVar59;
        FUN_1447fea8d(&local_178,&local_278,&local_1f8);
        FUN_144a1c686(&local_178,0x3e45798ee0000000);
        dVar41 = dStack_320;
        dVar10 = local_328;
        auVar29._8_8_ = -(ulonglong)(0.0 <= dVar7);
        auVar29._0_8_ = -(ulonglong)(0.0 <= dVar62);
        auVar35 = blendvpd(_DAT_149936790,auVar45,auVar29);
        dVar34 = (double)(~-(ulonglong)(0.0 <= local_328) & 0xbff0000000000000 |
                         -(ulonglong)(0.0 <= local_328) & 0x3ff0000000000000);
        dVar39 = auVar35._0_8_;
        local_168 = local_168 * dVar39;
        local_170 = local_170 * dVar39;
        local_178 = local_178 * dVar39;
        dVar39 = auVar35._8_8_;
        local_148 = local_148 * dVar39;
        local_150 = local_150 * dVar39;
        local_158 = dVar39 * local_158;
        local_128 = local_128 * dVar34;
        local_130 = local_130 * dVar34;
        local_138 = dVar34 * local_138;
        FUN_14481fd10(&local_2f8,&local_178);
        dVar34 = local_2e8 * local_2e8 + local_2f8 * local_2f8;
        dVar39 = dStack_2e0 * dStack_2e0 + dStack_2f0 * dStack_2f0;
        auVar37._0_8_ = dVar34 + dVar39;
        auVar37._8_8_ = dVar34 + dVar39;
        auVar30._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_);
        auVar30._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_);
        auVar35 = sqrtpd(auVar37,auVar37);
        auVar45 = divpd(auVar45,auVar35);
        auVar46._0_8_ = auVar45._0_8_ * local_2e8;
        auVar46._8_8_ = auVar45._8_8_ * dStack_2e0;
        auVar35 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar46,auVar30);
        dVar34 = (double)((ulonglong)(local_2f8 * auVar45._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_));
        dVar39 = (double)((ulonglong)(dStack_2f0 * auVar45._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_));
        dVar40 = 0.0;
        iVar18 = *(int *)(lVar20 + 0x28);
        local_348._8_4_ = SUB84(dVar7,0);
        local_348._0_8_ = dVar62;
        local_348._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        dVar8 = local_108;
        dVar59 = local_118;
        dVar62 = dStack_110;
      }
      if (((int)uVar22 < 0) || (iVar18 <= (int)uVar22)) break;
    }
  }
  pdVar26 = (double *)&DAT_14c846480;
  pdVar27 = local_330;
  for (lVar20 = 0xc; pdVar25 = local_330, lVar20 != 0; lVar20 = lVar20 + -1) {
    *pdVar27 = *pdVar26;
    pdVar26 = pdVar26 + 1;
    pdVar27 = pdVar27 + 1;
  }
LAB_147c7ccf0:
  if ((local_f0 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pdVar25;
}



// FUNCTION 147c7d3c0 FUN_147c7d3c0 body=238 status=ok
// SIG undefined FUN_147c7d3c0(void)

void FUN_147c7d3c0(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong local_50;
  undefined1 *local_48;
  longlong local_40;
  undefined1 local_31;
  char local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_31 = param_2;
  if (*(longlong **)(param_1 + 0x118) != (longlong *)0x0) {
    local_40 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0xb98))();
    if (local_40 != 0) {
      lVar1 = FUN_144a81888(*(undefined8 *)(param_1 + 0x118));
      if (lVar1 != 0) {
        plVar2 = (longlong *)FUN_144a81888(*(undefined8 *)(param_1 + 0x118));
        local_60 = (**(code **)(*plVar2 + 0x310))(plVar2);
        lVar1 = *(longlong *)(param_1 + 0x118);
        local_50 = (longlong)*(int *)(lVar1 + 0x714) * 0x10 + lVar1 + 0x6d0;
        local_58 = &local_40;
        local_48 = &local_31;
        local_68 = param_1;
        FUN_14071837e(local_30,lVar1,1);
        FUN_1436405c4(&local_68);
        if (local_30[0] == '\x01') {
          FUN_1447e63de(local_30);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c7d4b0 FUN_147c7d4b0 body=319 status=ok
// SIG undefined FUN_147c7d4b0(void)

void FUN_147c7d4b0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong local_40;
  char local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined1 *)(param_1 + 0x148) = 0;
  if (*(longlong **)(param_1 + 0x118) != (longlong *)0x0) {
    local_40 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0xb98))();
    if (local_40 != 0) {
      lVar2 = FUN_144a81888(*(undefined8 *)(param_1 + 0x118));
      if (lVar2 != 0) {
        iVar1 = *(int *)(param_1 + 0x128);
        *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x138);
        uVar4 = *(int *)(param_1 + 0x138) - iVar1;
        if ((uint)(*(int *)(param_1 + 300) - iVar1) < uVar4) {
          FUN_147c868d2(param_1 + 0x120);
        }
        memset((void *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x120)),0,
               (longlong)(int)uVar4 << 4);
        lVar2 = *(longlong *)(param_1 + 0x118);
        iVar1 = *(int *)(lVar2 + 0x714);
        plVar3 = (longlong *)FUN_144a81888();
        (**(code **)(*plVar3 + 0x310))(plVar3);
        local_50 = &local_40;
        local_58 = param_1;
        local_48 = lVar2 + (longlong)iVar1 * 0x10 + 0x6d0;
        FUN_14071837e(local_38,*(undefined8 *)(param_1 + 0x118),1);
        FUN_1436407c4(&local_58);
        if (local_38[0] == '\x01') {
          FUN_1447e63de(local_38);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c7d5f0 FUN_147c7d5f0 body=40 status=ok
// SIG undefined FUN_147c7d5f0(void)

void FUN_147c7d5f0(longlong param_1)

{
  if (*(char *)(param_1 + 0x148) == '\x01') {
    FUN_147c7d4b0(param_1);
  }
  FUN_147c7d3c0(param_1,0);
  return;
}



// FUNCTION 147c7d618 FUN_147c7d618 body=181 status=ok
// SIG undefined FUN_147c7d618(void)

void FUN_147c7d618(undefined8 param_1,longlong param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = DAT_14c75f3fc;
  fVar3 = DAT_14c75f3f8;
  FUN_147c547e6(param_1,DAT_14c75f400 * param_3 * *(float *)(param_2 + 0xc),
                DAT_14c75f404 * param_3 * *(float *)(param_2 + 0x10),
                *(float *)(param_2 + 0x20) * param_3);
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    fVar1 = param_3 * *(float *)(param_2 + 0x1c);
    fVar2 = fVar2 * param_3 * *(float *)(param_2 + 0x18);
    fVar3 = fVar3 * param_3 * *(float *)(param_2 + 0x14);
  }
  else {
    fVar3 = 0.0;
    fVar2 = 0.0;
    fVar1 = 0.0;
  }
  FUN_147c5454e(param_1,fVar3,fVar2,fVar1);
  return;
}



// FUNCTION 147c7d6fc FUN_147c7d6fc body=263 status=ok
// SIG undefined FUN_147c7d6fc(void)

void FUN_147c7d6fc(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  int *local_28;
  undefined1 *local_20;
  undefined1 local_14 [4];
  int local_10;
  int iStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != param_3) {
    iStack_c = param_2;
    local_10 = param_3;
    if (param_2 < param_3) {
      iStack_c = param_3;
      local_10 = param_2;
    }
    if (*(int *)(param_1 + 0xf0) != *(int *)(param_1 + 0x11c)) {
      lVar3 = param_1 + 0x120;
      if (*(longlong *)(param_1 + 0x128) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x128);
      }
      iVar2 = *(int *)(lVar3 + (ulonglong)
                               (*(int *)(param_1 + 0x130) - 1U & iStack_c * 0x17 + local_10) * 4);
      if (iVar2 != -1) {
        lVar3 = *(longlong *)(param_1 + 0xe8);
        do {
          piVar1 = (int *)(lVar3 + (longlong)iVar2 * 0x14);
          if ((*piVar1 == local_10) && (*(int *)(lVar3 + 4 + (longlong)iVar2 * 0x14) == iStack_c)) {
            if ((piVar1 != (int *)0x0) && (piVar1 != (int *)&DAT_fffffffffffffff8))
            goto LAB_147c7d717;
            break;
          }
          iVar2 = piVar1[3];
        } while (iVar2 != -1);
      }
    }
    local_20 = &local_29;
    local_29 = 0;
    local_28 = &local_10;
    FUN_147c86a5a((longlong *)(param_1 + 0xe8),local_14,&local_28,0);
  }
LAB_147c7d717:
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c7d804 FUN_147c7d804 body=61 status=ok
// SIG undefined FUN_147c7d804(void)

undefined8 FUN_147c7d804(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_2 + 0x308))(param_2);
    uVar1 = FUN_1436354f6(param_1,uVar1,param_3);
    return uVar1;
  }
  return 0xffffffff;
}



// FUNCTION 147c7d842 FUN_147c7d842 body=43 status=ok
// SIG undefined FUN_147c7d842(void)

ulonglong FUN_147c7d842(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  if (0 < (longlong)*(int *)(param_1 + 0x58)) {
    uVar1 = 0;
    do {
      if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + uVar1 * 8) + 0x70) == param_2)
      {
        return uVar1 & 0xffffffff;
      }
      uVar1 = uVar1 + 1;
    } while ((longlong)*(int *)(param_1 + 0x58) != uVar1);
  }
  return 0xffffffff;
}



// FUNCTION 147c7d86e FUN_147c7d86e body=37 status=ok
// SIG undefined FUN_147c7d86e(void)

void FUN_147c7d86e(longlong param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (((int)param_3 < 0) || (*(int *)(param_1 + 0x58) <= (int)param_3)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x50) + (ulonglong)param_3 * 8) + 0x78);
  }
  *param_2 = uVar1;
  return;
}



// FUNCTION 147c7d894 FUN_147c7d894 body=40 status=ok
// SIG undefined FUN_147c7d894(void)

undefined8 FUN_147c7d894(longlong param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"%d Bodies, %d Constraints",*(undefined4 *)(param_1 + 0x48),
                *(undefined4 *)(param_1 + 0x58));
  return param_2;
}



// FUNCTION 147c7d8c2 FUN_147c7d8c2 body=310 status=ok
// SIG undefined FUN_147c7d8c2(void)

void FUN_147c7d8c2(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = 0;
  uStack_70 = 0;
  FUN_144a83b10(&local_78,*(undefined4 *)(param_1 + 0x48));
  FUN_1446ddc76(&local_80,"Bodies",1);
  local_60 = local_80;
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  uStack_50 = (undefined4)uStack_70;
  uStack_4c = uStack_70._4_4_;
  local_78 = 0;
  uStack_70 = 0;
  local_48 = 2;
  FUN_1407c67d8(param_2);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  local_78 = 0;
  uStack_70 = 0;
  FUN_144a83b10(&local_78,*(undefined4 *)(param_1 + 0x58));
  FUN_1446ddc76(&local_a8,"Constraints",1);
  local_a0 = local_a8;
  local_98 = (undefined4)local_78;
  uStack_94 = local_78._4_4_;
  uStack_90 = (undefined4)uStack_70;
  uStack_8c = uStack_70._4_4_;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 2;
  FUN_1407c67d8(param_2);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1427dc336(local_b0,param_2);
  switchD_143c3d4dc::caseD_3d(param_1,local_b0);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c7d9fa FUN_147c7d9fa body=150 status=ok
// SIG undefined FUN_147c7d9fa(void)

void FUN_147c7d9fa(longlong param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    FUN_14481578e(param_3,0);
  }
  iVar3 = *(int *)(param_1 + 0x58);
  if (0 < iVar3) {
    lVar1 = *(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)param_2 * 8) + 0x28);
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x50) + lVar4 * 8);
      if ((*(longlong *)(lVar2 + 0x78) == lVar1) || (*(longlong *)(lVar2 + 0x80) == lVar1)) {
        iVar3 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
          FUN_1446f48e2(param_3,iVar3);
        }
        *(int *)(*param_3 + (longlong)iVar3 * 4) = (int)lVar4;
        iVar3 = *(int *)(param_1 + 0x58);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  return;
}



// FUNCTION 147c7da96 FUN_147c7da96 body=157 status=ok
// SIG undefined FUN_147c7da96(void)

void FUN_147c7da96(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  switchD_143c3d4dc::caseD_38();
  lVar1 = (longlong)*(int *)(param_1 + 0xe0) * 4;
  if ((ulonglong)(longlong)*(int *)(param_1 + 0xe0) < 2) {
    lVar1 = 0;
  }
  FUN_14484255c(param_2,lVar1 + (ulonglong)(*(int *)(param_1 + 0xc4) + 0x1fU >> 5) * 4 +
                                (longlong)*(int *)(param_1 + 0xa4) * 0x14);
  lVar1 = (longlong)*(int *)(param_1 + 0x130) * 4;
  if ((ulonglong)(longlong)*(int *)(param_1 + 0x130) < 2) {
    lVar1 = 0;
  }
  FUN_14484255c(param_2,lVar1 + (ulonglong)(*(int *)(param_1 + 0x114) + 0x1fU >> 5) * 4 +
                                (longlong)*(int *)(param_1 + 0xf4) * 0x14);
  return;
}



// FUNCTION 147c7db34 FUN_147c7db34 body=45 status=ok
// SIG undefined FUN_147c7db34(void)

longlong FUN_147c7db34(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1459ac6ce(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c7db62 FUN_147c7db62 body=45 status=ok
// SIG undefined FUN_147c7db62(void)

longlong FUN_147c7db62(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145cdd78c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c7db90 FUN_147c7db90 body=45 status=ok
// SIG undefined FUN_147c7db90(void)

longlong FUN_147c7db90(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1407a8102(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c7dc52 FUN_147c7dc52 body=59 status=ok
// SIG undefined FUN_147c7dc52(void)

undefined8 FUN_147c7dc52(longlong *param_1)

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



// FUNCTION 147c7ddb4 FUN_147c7ddb4 body=59 status=ok
// SIG undefined FUN_147c7ddb4(void)

undefined8 FUN_147c7ddb4(longlong *param_1)

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



// FUNCTION 147c7df26 FUN_147c7df26 body=59 status=ok
// SIG undefined FUN_147c7df26(void)

undefined8 FUN_147c7df26(longlong *param_1)

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



// FUNCTION 147c7e088 FUN_147c7e088 body=59 status=ok
// SIG undefined FUN_147c7e088(void)

undefined8 FUN_147c7e088(longlong *param_1)

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



// FUNCTION 147c7e12a FUN_147c7e12a body=68 status=ok
// SIG undefined FUN_147c7e12a(void)

longlong FUN_147c7e12a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1403e3958(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_14051b40a(lVar2,1);
  return lVar2;
}



// FUNCTION 147c7e16e FUN_147c7e16e body=57 status=ok
// SIG undefined FUN_147c7e16e(void)

void FUN_147c7e16e(undefined8 *param_1,int param_2)

{
  FUN_1400d7bbd(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_147c7e1a8(param_1,param_2);
  return;
}



// FUNCTION 147c7e1a8 FUN_147c7e1a8 body=95 status=ok
// SIG undefined FUN_147c7e1a8(void)

void FUN_147c7e1a8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 147c7e208 FUN_147c7e208 body=403 status=ok
// SIG undefined FUN_147c7e208(void)

longlong * FUN_147c7e208(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 1) << 4,
             (longlong)*(int *)((longlong)param_2 + 0xc) << 4);
  local_24 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_24 = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    }
    else {
      FUN_14572512c(param_1,&local_24);
    }
  }
  else {
    local_24 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_24 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1408652ee(param_2,0);
    }
  }
  else if ((((int)local_24 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x100000 < local_24 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else {
    *(uint *)(param_2 + 1) = local_24;
    if ((((*(byte *)(param_1 + 5) & 1) == 0) ||
        (FUN_144721d4c(param_2,local_24,*(undefined4 *)((longlong)param_2 + 0xc)),
        (*(byte *)(param_1 + 5) & 1) == 0)) || (0x3eb < *(int *)((longlong)param_1 + 0x44))) {
      (**(code **)(*param_1 + 0x170))(param_1,*param_2,(longlong)*(int *)(param_2 + 1) << 4);
    }
    else {
      if ((int)local_24 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(local_24);
      }
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(uint *)((longlong)param_2 + 0xc) != local_24) {
        FUN_1408652ee(param_2);
      }
      if (0 < (int)local_24) {
        iVar4 = 0;
        do {
          uVar3 = FUN_147c7e39e(param_2);
          FUN_14010abd4(param_1,uVar3);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)local_24);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147c7e39e FUN_147c7e39e body=64 status=ok
// SIG undefined FUN_147c7e39e(void)

longlong FUN_147c7e39e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14489624a(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_1407fef46(lVar2,1);
  return lVar2;
}



// FUNCTION 147c7e49e FUN_147c7e49e body=164 status=ok
// SIG undefined FUN_147c7e49e(void)

undefined8 FUN_147c7e49e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  
  if (param_4 != 0) {
    lVar11 = 0;
    bVar8 = DAT_14c950c29;
    do {
      lVar7 = param_3 + 0x58 + lVar11;
      puVar1 = (undefined8 *)(param_2 + lVar11);
      *(undefined4 *)(param_2 + 0x48 + lVar11) = *(undefined4 *)(lVar7 + -0x10);
      puVar9 = (undefined8 *)(lVar7 + -0x58);
      puVar10 = puVar1;
      for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      lVar7 = *(longlong *)(lVar7 + -8);
      if ((bVar8 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(param_3 + 0x50 + lVar11);
          bVar8 = DAT_14c950c29;
        }
      }
      puVar1[10] = lVar7;
      puVar2 = (undefined4 *)(param_3 + 0x58 + lVar11);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(puVar1 + 0xb) = *puVar2;
      *(undefined4 *)((longlong)puVar1 + 0x5c) = uVar3;
      *(undefined4 *)(puVar1 + 0xc) = uVar4;
      *(undefined4 *)((longlong)puVar1 + 100) = uVar5;
      *(undefined4 *)(puVar1 + 0xd) = *(undefined4 *)(param_3 + 0x68 + lVar11);
      lVar11 = lVar11 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147c7e56a FUN_147c7e56a body=59 status=ok
// SIG undefined FUN_147c7e56a(void)

undefined8 FUN_147c7e56a(longlong *param_1)

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



// FUNCTION 147c7e840 FUN_147c7e840 body=63 status=ok
// SIG undefined FUN_147c7e840(void)

undefined1 FUN_147c7e840(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147c7e954(param_2,param_3);
    param_3 = param_3 + 0x130;
    param_2 = param_2 + 0x130;
  }
  return 1;
}



// FUNCTION 147c7e8a8 FUN_147c7e8a8 body=59 status=ok
// SIG undefined FUN_147c7e8a8(void)

undefined8 FUN_147c7e8a8(longlong *param_1)

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



// FUNCTION 147c7e954 FUN_147c7e954 body=262 status=ok
// SIG undefined FUN_147c7e954(void)

undefined8 * FUN_147c7e954(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  byte bVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar7 = param_2;
  puVar8 = param_1;
  for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  puVar7 = param_2 + 10;
  puVar8 = param_1 + 10;
  for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  lVar6 = param_2[0x14];
  if (DAT_14c950c29 == 1) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = param_2[0x14];
    }
  }
  bVar5 = DAT_14c950c29;
  param_1[0x14] = lVar6;
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xac);
  uVar2 = *(undefined4 *)(param_2 + 0x16);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar1;
  *(undefined4 *)(param_1 + 0x16) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar3;
  puVar7 = param_2 + 0x18;
  puVar8 = param_1 + 0x18;
  for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
  lVar6 = param_2[0x22];
  if ((bVar5 & 1) != 0) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = param_2[0x22];
    }
  }
  param_1[0x22] = lVar6;
  uVar4 = param_2[0x24];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = uVar4;
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
  return param_1;
}



// FUNCTION 147c7eb58 FUN_147c7eb58 body=132 status=ok
// SIG undefined FUN_147c7eb58(void)

undefined8 FUN_147c7eb58(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    bVar3 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar6);
      if ((bVar3 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar6);
          bVar3 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar6);
      *plVar1 = lVar2;
      lVar2 = 0xd;
      plVar5 = plVar1;
      plVar4 = (longlong *)(param_3 + lVar6);
      while( true ) {
        plVar4 = plVar4 + 1;
        plVar5 = plVar5 + 1;
        if (lVar2 == 0) break;
        lVar2 = lVar2 + -1;
        *plVar5 = *plVar4;
      }
      *(char *)(plVar1 + 0xe) = (char)((longlong *)(param_3 + lVar6))[0xe];
      lVar6 = lVar6 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147c7ec04 FUN_147c7ec04 body=59 status=ok
// SIG undefined FUN_147c7ec04(void)

undefined8 FUN_147c7ec04(longlong *param_1)

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



// FUNCTION 147c7ed0a FUN_147c7ed0a body=113 status=ok
// SIG undefined FUN_147c7ed0a(void)

undefined1 FUN_147c7ed0a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      puVar3 = (undefined4 *)(param_3 + 0x14 + lVar13);
      uVar7 = *puVar3;
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      *(undefined4 *)(plVar1 + 1) = *puVar2;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar4;
      *(undefined4 *)(plVar1 + 2) = uVar5;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar6;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar7;
      *(undefined4 *)(plVar1 + 3) = uVar8;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar9;
      *(undefined4 *)(plVar1 + 4) = uVar10;
      lVar13 = lVar13 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147c7eda4 FUN_147c7eda4 body=59 status=ok
// SIG undefined FUN_147c7eda4(void)

undefined8 FUN_147c7eda4(longlong *param_1)

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



// FUNCTION 147c7ef82 FUN_147c7ef82 body=63 status=ok
// SIG undefined FUN_147c7ef82(void)

undefined1 FUN_147c7ef82(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14749d108(param_2,param_3);
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
  }
  return 1;
}



// FUNCTION 147c7efea FUN_147c7efea body=59 status=ok
// SIG undefined FUN_147c7efea(void)

undefined8 FUN_147c7efea(longlong *param_1)

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



// FUNCTION 147c7f036 FUN_147c7f036 body=47 status=ok
// SIG undefined FUN_147c7f036(void)

void FUN_147c7f036(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    if (*(longlong *)(param_2 + 0xb0) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 147c7f0b6 FUN_147c7f0b6 body=340 status=ok
// SIG undefined FUN_147c7f0b6(void)

undefined4 * FUN_147c7f0b6(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147c7f20c(param_1,local_48);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)local_40 = *param_3;
  *(undefined4 *)((longlong)local_40 + 4) = uVar1;
  *(undefined4 *)(local_40 + 1) = uVar2;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar3;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = ((uint)(*local_40 >> 0x14) & 0xffff ^ (uint)(*local_40 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  uVar5 = (uVar5 >> 2) + uVar5 * 0x40 + (int)local_40[1] + 0x9e3779b9 ^ uVar5;
  cVar4 = FUN_147c7f2f2(param_1,uVar5,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_40 + 0x14) = uVar5;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_147c7f3ec(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c7f20c FUN_147c7f20c body=230 status=ok
// SIG undefined FUN_147c7f20c(void)

int * FUN_147c7f20c(longlong *param_1,int *param_2)

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



// FUNCTION 147c7f2f2 FUN_147c7f2f2 body=136 status=ok
// SIG undefined FUN_147c7f2f2(void)

undefined8 FUN_147c7f2f2(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if ((*plVar5 == *param_3) &&
           (*(int *)(*param_1 + 8 + (longlong)iVar6 * 0x18) == (int)param_3[1])) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_147c7f37a((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 147c7f37a FUN_147c7f37a body=114 status=ok
// SIG undefined FUN_147c7f37a(void)

void FUN_147c7f37a(longlong *param_1,int param_2)

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



// FUNCTION 147c7f3ec FUN_147c7f3ec body=506 status=ok
// SIG undefined FUN_147c7f3ec(void)

void FUN_147c7f3ec(longlong *param_1)

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
        uVar8 = uVar8 >> 0x10 ^ uVar8;
        uVar10 = (longlong)
                 (int)(uVar8 * 0x40 + *(int *)(lVar2 + 8 + lVar5 * 0x18) + (uVar8 >> 2) + 0x9e3779b9
                      ^ uVar8) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 147c7f5e8 FUN_147c7f5e8 body=195 status=ok
// SIG undefined FUN_147c7f5e8(void)

undefined8 FUN_147c7f5e8(longlong *param_1,ulonglong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = *param_2;
    uVar4 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 +
                    ((longlong)
                     (int)(uVar4 * 0x40 + (int)param_2[1] + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      lVar3 = *param_1;
      do {
        lVar6 = (longlong)iVar1;
        if ((*(ulonglong *)(lVar3 + lVar6 * 0x18) == uVar2) &&
           (*(int *)(lVar3 + 8 + lVar6 * 0x18) == (int)param_2[1])) {
          FUN_147c7f6ac();
          return 1;
        }
        iVar1 = *(int *)(lVar3 + lVar6 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 147c7f6ac FUN_147c7f6ac body=87 status=ok
// SIG undefined FUN_147c7f6ac(void)

void FUN_147c7f6ac(longlong *param_1,int param_2)

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
  FUN_147c7f37a();
  return;
}



// FUNCTION 147c7f704 FUN_147c7f704 body=38 status=ok
// SIG undefined FUN_147c7f704(void)

undefined8 FUN_147c7f704(undefined8 param_1,int param_2)

{
  FUN_1410c966c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c7f768 FUN_147c7f768 body=54 status=ok
// SIG undefined FUN_147c7f768(void)

undefined1 FUN_147c7f768(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140a2b238(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147c7f7c6 FUN_147c7f7c6 body=59 status=ok
// SIG undefined FUN_147c7f7c6(void)

undefined8 FUN_147c7f7c6(longlong *param_1)

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



// FUNCTION 147c7f80c FUN_147c7f80c body=42 status=ok
// SIG undefined FUN_147c7f80c(void)

void FUN_147c7f80c(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((char)param_2[2] == '\x01') {
    puVar1 = (undefined8 *)*param_2;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 147c7f8bc FUN_147c7f8bc body=59 status=ok
// SIG undefined FUN_147c7f8bc(void)

undefined8 FUN_147c7f8bc(longlong *param_1)

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



// FUNCTION 147c7f902 FUN_147c7f902 body=42 status=ok
// SIG undefined FUN_147c7f902(void)

void FUN_147c7f902(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((char)param_2[2] == '\x01') {
    puVar1 = (undefined8 *)*param_2;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 147c7f9d2 FUN_147c7f9d2 body=59 status=ok
// SIG undefined FUN_147c7f9d2(void)

undefined8 FUN_147c7f9d2(longlong *param_1)

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



// FUNCTION 147c7fa18 FUN_147c7fa18 body=42 status=ok
// SIG undefined FUN_147c7fa18(void)

void FUN_147c7fa18(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((char)param_2[2] == '\x01') {
    puVar1 = (undefined8 *)*param_2;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 147c7fac4 FUN_147c7fac4 body=104 status=ok
// SIG undefined FUN_147c7fac4(void)

undefined8 FUN_147c7fac4(void)

{
  undefined8 in_stack_00000028;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_48 [2];
  undefined8 local_38;
  undefined **local_28;
  undefined8 local_20;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = local_48;
  local_38 = 0;
  local_28 = &PTR_LAB_14aa2aca0;
  local_20 = in_stack_00000028;
  local_48[0] = FUN_14363fad2;
  FUN_140b24bb2();
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c7fb36 FUN_147c7fb36 body=54 status=ok
// SIG undefined FUN_147c7fb36(void)

undefined1 FUN_147c7fb36(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140a2b238(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147c7fb6c FUN_147c7fb6c body=31 status=ok
// SIG undefined FUN_147c7fb6c(void)

undefined1
FUN_147c7fb6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_140a4b76c(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 147c7fba8 FUN_147c7fba8 body=59 status=ok
// SIG undefined FUN_147c7fba8(void)

undefined8 FUN_147c7fba8(longlong *param_1)

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



// FUNCTION 147c7fbee FUN_147c7fbee body=42 status=ok
// SIG undefined FUN_147c7fbee(void)

void FUN_147c7fbee(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((char)param_2[2] == '\x01') {
    puVar1 = (undefined8 *)*param_2;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 147c7fc9a FUN_147c7fc9a body=104 status=ok
// SIG undefined FUN_147c7fc9a(void)

undefined8 FUN_147c7fc9a(void)

{
  undefined8 in_stack_00000028;
  undefined1 auStack_78 [32];
  code **local_58;
  code *local_48 [2];
  undefined8 local_38;
  undefined **local_28;
  undefined8 local_20;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = local_48;
  local_38 = 0;
  local_28 = &PTR_LAB_14aa2acc0;
  local_20 = in_stack_00000028;
  local_48[0] = FUN_14363fb2e;
  FUN_140b24bb2();
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c7fd0c FUN_147c7fd0c body=54 status=ok
// SIG undefined FUN_147c7fd0c(void)

undefined1 FUN_147c7fd0c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140a2b238(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147c7fd42 FUN_147c7fd42 body=31 status=ok
// SIG undefined FUN_147c7fd42(void)

undefined1
FUN_147c7fd42(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_140a4b76c(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 147c7fd7e FUN_147c7fd7e body=59 status=ok
// SIG undefined FUN_147c7fd7e(void)

undefined8 FUN_147c7fd7e(longlong *param_1)

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



// FUNCTION 147c7fdc4 FUN_147c7fdc4 body=42 status=ok
// SIG undefined FUN_147c7fdc4(void)

void FUN_147c7fdc4(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((char)param_2[2] == '\x01') {
    puVar1 = (undefined8 *)*param_2;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 147c7feee FUN_147c7feee body=59 status=ok
// SIG undefined FUN_147c7feee(void)

undefined8 FUN_147c7feee(longlong *param_1)

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



// FUNCTION 147c7ff8e FUN_147c7ff8e body=29 status=ok
// SIG undefined FUN_147c7ff8e(void)

undefined8 FUN_147c7ff8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c7ffce FUN_147c7ffce body=32 status=ok
// SIG undefined FUN_147c7ffce(void)

undefined8 FUN_147c7ffce(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2," - DebugData() not implemented - ");
  return param_2;
}



// FUNCTION 147c800a0 FUN_147c800a0 body=59 status=ok
// SIG undefined FUN_147c800a0(void)

undefined8 FUN_147c800a0(longlong *param_1)

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



// FUNCTION 147c80140 FUN_147c80140 body=29 status=ok
// SIG undefined FUN_147c80140(void)

undefined8 FUN_147c80140(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c80160 FUN_147c80160 body=48 status=ok
// SIG undefined FUN_147c80160(void)

undefined8 * FUN_147c80160(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa2a210;
  FUN_14580f0c2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c80190 FUN_147c80190 body=25 status=ok
// SIG undefined FUN_147c80190(void)

void FUN_147c80190(void)

{
  FUN_147c6e3a8();
  FUN_146f09d18(&DAT_14caf77e8);
  return;
}



// FUNCTION 147c801aa FUN_147c801aa body=48 status=ok
// SIG undefined FUN_147c801aa(void)

undefined8 * FUN_147c801aa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa2a230;
  FUN_14580f0c2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c801da FUN_147c801da body=25 status=ok
// SIG undefined FUN_147c801da(void)

void FUN_147c801da(void)

{
  FUN_147c6e413();
  FUN_146f09d18(&DAT_14caf7828);
  return;
}



// FUNCTION 147c801f4 FUN_147c801f4 body=48 status=ok
// SIG undefined FUN_147c801f4(void)

undefined8 * FUN_147c801f4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa2a250;
  FUN_14580f0c2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c80224 FUN_147c80224 body=25 status=ok
// SIG undefined FUN_147c80224(void)

void FUN_147c80224(void)

{
  FUN_147c6e47e();
  FUN_146f09d18(&DAT_14caf7868);
  return;
}



// FUNCTION 147c8023e FUN_147c8023e body=48 status=ok
// SIG undefined FUN_147c8023e(void)

undefined8 * FUN_147c8023e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa2a270;
  FUN_14580f0c2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c8026e FUN_147c8026e body=25 status=ok
// SIG undefined FUN_147c8026e(void)

void FUN_147c8026e(void)

{
  FUN_147c6e4e9();
  FUN_146f09d18(&DAT_14caf78a8);
  return;
}



// FUNCTION 147c80324 FUN_147c80324 body=59 status=ok
// SIG undefined FUN_147c80324(void)

undefined8 FUN_147c80324(longlong *param_1)

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



// FUNCTION 147c80482 FUN_147c80482 body=59 status=ok
// SIG undefined FUN_147c80482(void)

undefined8 FUN_147c80482(longlong *param_1)

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



// FUNCTION 147c805b2 FUN_147c805b2 body=59 status=ok
// SIG undefined FUN_147c805b2(void)

undefined8 FUN_147c805b2(longlong *param_1)

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



// FUNCTION 147c80654 FUN_147c80654 body=62 status=ok
// SIG undefined FUN_147c80654(void)

void FUN_147c80654(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147c80692(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147c80692 FUN_147c80692 body=93 status=ok
// SIG undefined FUN_147c80692(void)

ulonglong FUN_147c80692(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147c806f0 FUN_147c806f0 body=61 status=ok
// SIG undefined FUN_147c806f0(void)

void FUN_147c806f0(longlong param_1)

{
  if (param_1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_147c8072e(param_1);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 147c8072e FUN_147c8072e body=52 status=ok
// SIG undefined FUN_147c8072e(void)

void FUN_147c8072e(longlong *param_1)

{
  FUN_147c80762();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147c80762 FUN_147c80762 body=89 status=ok
// SIG undefined FUN_147c80762(void)

void FUN_147c80762(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 147c807bb FUN_147c807bb body=42 status=ok
// SIG undefined FUN_147c807bb(void)

void FUN_147c807bb(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      FUN_147c806f0(*(undefined8 *)(param_1 + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 147c807e6 FUN_147c807e6 body=29 status=ok
// SIG undefined FUN_147c807e6(void)

undefined8 FUN_147c807e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c80820 FUN_147c80820 body=93 status=ok
// SIG undefined FUN_147c80820(void)

void FUN_147c80820(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa2a7f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147c8087e FUN_147c8087e body=93 status=ok
// SIG undefined FUN_147c8087e(void)

void FUN_147c8087e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa2a7f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147c808dc FUN_147c808dc body=126 status=ok
// SIG undefined FUN_147c808dc(void)

void FUN_147c808dc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aa2a7f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147c8094b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147c80966 FUN_147c80966 body=21 status=ok
// SIG undefined FUN_147c80966(void)

undefined8 FUN_147c80966(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147c8097c FUN_147c8097c body=48 status=ok
// SIG undefined FUN_147c8097c(void)

void FUN_147c8097c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147c809ac FUN_147c809ac body=132 status=ok
// SIG undefined FUN_147c809ac(void)

void FUN_147c809ac(longlong param_1,int param_2)

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



// FUNCTION 147c80a32 FUN_147c80a32 body=92 status=ok
// SIG undefined FUN_147c80a32(void)

void FUN_147c80a32(longlong *param_1,uint param_2)

{
  int *piVar1;
  void *_Dst;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  
  lVar2 = *param_1;
  puVar3 = *(undefined8 **)(lVar2 + (longlong)(int)param_2 * 8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  iVar4 = (int)param_1[1];
  if (~param_2 + iVar4 != 0) {
    _Dst = (void *)(lVar2 + (longlong)(int)param_2 * 8);
    memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~param_2 + iVar4) << 3);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  return;
}



// FUNCTION 147c80a8e FUN_147c80a8e body=96 status=ok
// SIG undefined FUN_147c80a8e(void)

void FUN_147c80a8e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147c80aee FUN_147c80aee body=132 status=ok
// SIG undefined FUN_147c80aee(void)

void FUN_147c80aee(longlong param_1,int param_2)

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



// FUNCTION 147c80b74 FUN_147c80b74 body=143 status=ok
// SIG undefined FUN_147c80b74(void)

bool FUN_147c80b74(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(param_1 + 0x18);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 8),&local_30);
    if (&local_30 == param_2) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_30;
      *(undefined4 *)(param_2 + 1) = local_28;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return pcVar1 != (code *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c80c0a FUN_147c80c0a body=143 status=ok
// SIG undefined FUN_147c80c0a(void)

bool FUN_147c80c0a(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(param_1 + 0x18);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 8),&local_30);
    if (&local_30 == param_2) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_30;
      *(undefined4 *)(param_2 + 1) = local_28;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return pcVar1 != (code *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c80ca0 FUN_147c80ca0 body=143 status=ok
// SIG undefined FUN_147c80ca0(void)

bool FUN_147c80ca0(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(param_1 + 0x18);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 8),&local_30);
    if (&local_30 == param_2) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_30;
      *(undefined4 *)(param_2 + 1) = local_28;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return pcVar1 != (code *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c80d44 FUN_147c80d44 body=143 status=ok
// SIG undefined FUN_147c80d44(void)

bool FUN_147c80d44(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(param_1 + 0x18);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(undefined8 *)(param_1 + 8),&local_30);
    if (&local_30 == param_2) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_30;
      *(undefined4 *)(param_2 + 1) = local_28;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return pcVar1 != (code *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c80dda FUN_147c80dda body=146 status=ok
// SIG undefined FUN_147c80dda(void)

void FUN_147c80dda(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x130,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x130)) {
      uVar5 = uVar4 / 0x130 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x130,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147c80e6e FUN_147c80e6e body=147 status=ok
// SIG undefined FUN_147c80e6e(void)

void FUN_147c80e6e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147c80f02 FUN_147c80f02 body=62 status=ok
// SIG undefined FUN_147c80f02(void)

void FUN_147c80f02(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147c80f40(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc,4);
  }
  return;
}



// FUNCTION 147c80f40 FUN_147c80f40 body=112 status=ok
// SIG undefined FUN_147c80f40(void)

ulonglong FUN_147c80f40(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xc) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147c80f7a;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xc,4);
      param_2 = param_2 / 0xc;
    }
  }
LAB_147c80f7a:
  return param_2 & 0xffffffff;
}



// FUNCTION 147c80fb0 FUN_147c80fb0 body=89 status=ok
// SIG undefined FUN_147c80fb0(void)

void FUN_147c80fb0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,0);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 2)) {
    uVar2 = uVar1 >> 2 & 0xffffffff;
  }
  if ((int)uVar2 == *(int *)(param_1 + 0x10c)) {
    return;
  }
  *(int *)(param_1 + 0x10c) = (int)uVar2;
  FUN_147c8100a(param_1,*(undefined4 *)(param_1 + 0x108),uVar2,4);
  return;
}



// FUNCTION 147c8100a FUN_147c8100a body=142 status=ok
// SIG undefined FUN_147c8100a(void)

void FUN_147c8100a(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x41) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,param_4);
  return;
}



// FUNCTION 147c81098 FUN_147c81098 body=125 status=ok
// SIG undefined FUN_147c81098(void)

void FUN_147c81098(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x40;
    if (0x40 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x40 < *(uint *)(param_1 + 0x10c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 2,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 2)) {
        uVar4 = uVar2 >> 2 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x10c) = (int)uVar4;
    FUN_147c8100a(param_1,param_2,uVar4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147c81116 FUN_147c81116 body=119 status=ok
// SIG undefined FUN_147c81116(void)

void FUN_147c81116(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x40;
    if (0x40 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x40 < *(uint *)(param_1 + 0x20c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x20c) = iVar5;
    FUN_147c8118e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147c8118e FUN_147c8118e body=141 status=ok
// SIG undefined FUN_147c8118e(void)

void FUN_147c8118e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if ((uint)param_3 < 0x41) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,8);
  return;
}



// FUNCTION 147c8121c FUN_147c8121c body=125 status=ok
// SIG undefined FUN_147c8121c(void)

void FUN_147c8121c(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x40;
    if (0x40 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x40 < *(uint *)(param_1 + 0x20c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x20c) = (int)uVar4;
    FUN_1404265e2(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}


