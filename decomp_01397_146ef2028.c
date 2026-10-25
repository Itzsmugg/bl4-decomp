// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146ef2028 FUN_146ef2028 body=703 status=ok
// SIG undefined FUN_146ef2028(void)

void FUN_146ef2028(longlong param_1,double *param_2,float param_3,float param_4,char param_5,
                  char param_6)

{
  char cVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_f8 [40];
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar2 = *(longlong **)(param_1 + 0x48);
  if ((plVar2 == (longlong *)0x0) || (*(byte *)((longlong)plVar2 + 0xc) < 2)) goto LAB_146ef2129;
  cVar1 = *(char *)(*(longlong *)(*plVar2 + 0x2c0) + 0xb + (longlong)(int)plVar2[1] * 0x10);
  if ((cVar1 != '\x04') && (cVar1 != '\x01')) goto LAB_146ef2129;
  FUN_142a5e622(&local_98,param_1);
  local_88 = local_88 - param_2[2];
  local_90 = local_90 - param_2[1];
  local_98 = local_98 - *param_2;
  dVar5 = SQRT(local_88 * local_88 + local_98 * local_98 + local_90 * local_90);
  dVar4 = (double)param_3;
  if (dVar4 < dVar5) goto LAB_146ef2129;
  local_b8 = (double)CONCAT53(local_b8._3_5_,0x10004);
  dStack_b0 = (double)param_1;
  FUN_146ef9756(param_1);
  dVar3 = 1.0 / dVar5;
  dVar7 = 0.0;
  dVar8 = 0.0;
  if (0.0001 <= dVar5) {
    dVar8 = local_88 * dVar3;
    dVar7 = local_90 * dVar3;
  }
  local_b8 = 0.0;
  dStack_b0 = 0.0;
  local_a8 = 0.0;
  if (param_5 == '\x01') {
    dStack_b0 = (double)param_4 * ((dVar4 - dVar5) / dVar4);
LAB_146ef2276:
    local_b8 = (double)(-(ulonglong)(dVar5 < 0.0001) & 0x3ff0000000000000 |
                       ~-(ulonglong)(dVar5 < 0.0001) & (ulonglong)(local_98 * dVar3)) * dStack_b0;
    local_a8 = dVar8 * dStack_b0;
    dStack_b0 = dVar7 * dStack_b0;
  }
  else if (param_5 == '\0') {
    dStack_b0 = (double)param_4;
    goto LAB_146ef2276;
  }
  if (param_6 == '\0') {
    pdVar6 = &local_b8;
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0x48);
    local_d0 = 0.0;
    if ((plVar2 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar2 + 0xc))) {
      local_d0 = *(double *)(*(longlong *)(*plVar2 + 0x3b0) + (longlong)(int)plVar2[1] * 8);
    }
    local_c0 = local_a8 * local_d0;
    local_c8 = dStack_b0 * local_d0;
    local_d0 = local_b8 * local_d0;
    pdVar6 = &local_d0;
  }
  FUN_140933574(param_1,pdVar6,1);
LAB_146ef2129:
  if ((local_80 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ef22e8 FUN_146ef22e8 body=708 status=ok
// SIG undefined FUN_146ef22e8(void)

void FUN_146ef22e8(longlong param_1,double *param_2,float param_3,float param_4,char param_5,
                  char param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_108 [40];
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double *local_98;
  undefined1 local_90;
  longlong local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar4 = *(longlong *)(param_1 + 0x40);
  if ((lVar4 == 0) || (*(byte *)(lVar4 + 0x90) < 2)) goto LAB_146ef23df;
  if ((*(char *)(lVar4 + 0x1ac) != '\x04') && (*(char *)(lVar4 + 0x1ac) != '\x01'))
  goto LAB_146ef23df;
  FUN_14133d41e(&local_b0,param_1);
  local_a0 = local_a0 - param_2[2];
  local_a8 = local_a8 - param_2[1];
  local_b0 = local_b0 - *param_2;
  dVar3 = SQRT(local_a0 * local_a0 + local_b0 * local_b0 + local_a8 * local_a8);
  dVar2 = (double)param_3;
  if (dVar2 < dVar3) goto LAB_146ef23df;
  FUN_140cd4f30(param_1,4,0,1);
  dVar1 = 1.0 / dVar3;
  dVar5 = 0.0;
  dVar6 = 0.0;
  if (0.0001 <= dVar3) {
    dVar6 = local_a0 * dVar1;
    dVar5 = local_a8 * dVar1;
  }
  local_c8 = 0.0;
  dStack_c0 = 0.0;
  local_b8 = 0.0;
  if (param_5 == '\x01') {
    dStack_c0 = (double)param_4 * ((dVar2 - dVar3) / dVar2);
LAB_146ef2525:
    local_c8 = (double)(-(ulonglong)(dVar3 < 0.0001) & 0x3ff0000000000000 |
                       ~-(ulonglong)(dVar3 < 0.0001) & (ulonglong)(local_b0 * dVar1)) * dStack_c0;
    local_b8 = dVar6 * dStack_c0;
    dStack_c0 = dVar5 * dStack_c0;
  }
  else if (param_5 == '\0') {
    dStack_c0 = (double)param_4;
    goto LAB_146ef2525;
  }
  if (param_6 == '\0') {
    local_98 = &local_c8;
    lVar4 = *(longlong *)(param_1 + 0x40);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x40);
    local_e0 = 0.0;
    if ((lVar4 != 0) && (1 < *(byte *)(lVar4 + 0x90))) {
      local_e0 = *(double *)(lVar4 + 0x148);
    }
    local_d0 = local_b8 * local_e0;
    local_d8 = dStack_c0 * local_e0;
    local_e0 = local_c8 * local_e0;
    local_98 = &local_e0;
  }
  local_90 = 1;
  local_88 = param_1;
  FUN_145900236(&local_98,lVar4);
LAB_146ef23df:
  if ((local_80 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ef25ae FUN_146ef25ae body=37 status=ok
// SIG undefined FUN_146ef25ae(void)

void FUN_146ef25ae(longlong *param_1)

{
  longlong lVar1;
  char in_stack_00000028;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  if (in_stack_00000028 != '\0') {
    if (*(longlong *)(lVar1 + 0x48) == 0) {
      lVar1 = 0;
    }
    FUN_146ef25d4(lVar1);
    return;
  }
  FUN_146ef2710();
  return;
}



// FUNCTION 146ef25d4 FUN_146ef25d4 body=314 status=ok
// SIG undefined FUN_146ef25d4(void)

void FUN_146ef25d4(longlong param_1,double *param_2,undefined8 param_3,char param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  longlong *plVar5;
  double *pdVar6;
  undefined1 auStack_e8 [40];
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_88;
  double local_80;
  double local_78;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar5 = *(longlong **)(param_1 + 0x48);
  if (((plVar5 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar5 + 0xc))) &&
     ((cVar4 = *(char *)(*(longlong *)(*plVar5 + 0x2c0) + 0xb + (longlong)(int)plVar5[1] * 0x10),
      cVar4 == '\x04' || (cVar4 == '\x01')))) {
    if (param_4 == '\0') {
      local_98 = param_2[2];
      pdVar6 = &local_a8;
      local_a8 = *param_2;
      dStack_a0 = param_2[1];
    }
    else {
      FUN_140de6c5e(&local_a8,param_1);
      dVar1 = *param_2;
      dVar2 = param_2[1];
      dVar3 = param_2[2];
      local_b0 = local_58 * dVar3 + local_68 * dVar1 + local_60 * dVar2;
      local_b8 = local_78 * dVar3 + local_88 * dVar1 + local_80 * dVar2;
      local_c0 = dVar3 * local_98 + dVar1 * local_a8 + dVar2 * dStack_a0;
      pdVar6 = &local_c0;
    }
    FUN_1409334da(param_1,pdVar6,1);
  }
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ef2710 FUN_146ef2710 body=325 status=ok
// SIG undefined FUN_146ef2710(void)

void FUN_146ef2710(double param_1,double *param_2,undefined8 param_3,char param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 ***pppuVar4;
  longlong lVar5;
  undefined1 auStack_108 [40];
  double local_e0;
  double local_d8;
  double local_d0;
  double *local_c8;
  double dStack_c0;
  double local_b8;
  undefined8 **local_a8;
  undefined1 local_a0;
  undefined7 uStack_9f;
  double local_98;
  double local_88;
  double local_80;
  double local_78;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar5 = *(longlong *)((longlong)param_1 + 0x40);
  if (((lVar5 != 0) && (1 < *(byte *)(lVar5 + 0x90))) &&
     ((*(char *)(lVar5 + 0x1ac) == '\x04' || (*(char *)(lVar5 + 0x1ac) == '\x01')))) {
    if (param_4 == '\0') {
      local_b8 = param_2[2];
      local_a8 = &local_c8;
      local_c8 = (double *)*param_2;
      dStack_c0 = param_2[1];
      pppuVar4 = &local_a8;
      local_a0 = 1;
      local_98 = param_1;
    }
    else {
      FUN_1459a3b28(&local_a8,param_1);
      dVar1 = *param_2;
      dVar2 = param_2[1];
      dVar3 = param_2[2];
      local_d0 = local_58 * dVar3 + local_68 * dVar1 + local_60 * dVar2;
      local_d8 = local_78 * dVar3 + local_88 * dVar1 + local_80 * dVar2;
      local_e0 = dVar3 * local_98 +
                 dVar1 * (double)local_a8 + dVar2 * (double)CONCAT71(uStack_9f,local_a0);
      local_c8 = &local_e0;
      pppuVar4 = (undefined8 ***)&local_c8;
      dStack_c0 = (double)CONCAT71(dStack_c0._1_7_,1);
      lVar5 = *(longlong *)((longlong)param_1 + 0x40);
      local_b8 = param_1;
    }
    FUN_1459001d0(pppuVar4,lVar5);
  }
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ef2856 FUN_146ef2856 body=6 status=ok
// SIG undefined FUN_146ef2856(void)

undefined8 FUN_146ef2856(void)

{
  return 8;
}



// FUNCTION 146ef285c FUN_146ef285c body=68 status=ok
// SIG undefined FUN_146ef285c(void)

undefined8
FUN_146ef285c(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*param_2 + 0x50);
  }
  if (*param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*param_3 + 0x50);
  }
  FUN_140b2ab50(param_1,uVar1,uVar2,param_4,param_5);
  return param_1;
}



// FUNCTION 146ef28a0 FUN_146ef28a0 body=439 status=ok
// SIG undefined FUN_146ef28a0(void)

undefined8 * FUN_146ef28a0(undefined8 *param_1,longlong *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_168 [32];
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar8 = *param_2;
  if (((lVar8 != 0) && (*(longlong *)(lVar8 + 0x10) != 0)) && (*(int *)(lVar8 + 8) == 1)) {
    lVar5 = *(longlong *)(lVar8 + 0x20);
    lVar6 = *(longlong *)(lVar8 + 0x28);
    memcpy(local_e8,(void *)(lVar8 + 0x40),0xc0);
    if (param_3 == 0) {
      if (((lVar5 == 0) || (*(int *)(lVar5 + 0x1c) != 0xb)) ||
         (lVar8 = *(longlong *)(lVar5 + 0x40), lVar8 == 0)) goto LAB_146ef2a21;
      fVar1 = *(float *)(lVar8 + 0x4c);
      fVar2 = *(float *)(lVar8 + 0x48);
      fVar3 = *(float *)(lVar8 + 0x44);
      fVar4 = *(float *)(lVar8 + 0x40);
      local_128 = *(undefined8 *)(lVar8 + 0x20);
      uStack_120 = *(undefined8 *)(lVar8 + 0x28);
      local_118 = *(undefined8 *)(lVar8 + 0x30);
      puVar7 = local_e8;
    }
    else {
      if (((lVar6 == 0) || (*(int *)(lVar6 + 0x1c) != 0xb)) ||
         (lVar8 = *(longlong *)(lVar6 + 0x40), lVar8 == 0)) goto LAB_146ef2a21;
      fVar1 = *(float *)(lVar8 + 0x4c);
      puVar7 = local_88;
      fVar2 = *(float *)(lVar8 + 0x48);
      fVar3 = *(float *)(lVar8 + 0x44);
      fVar4 = *(float *)(lVar8 + 0x40);
      local_128 = *(undefined8 *)(lVar8 + 0x20);
      uStack_120 = *(undefined8 *)(lVar8 + 0x28);
      local_118 = *(undefined8 *)(lVar8 + 0x30);
    }
    dStack_130 = (double)fVar1;
    local_138 = (double)fVar2;
    dStack_140 = (double)fVar3;
    local_148 = (double)fVar4;
    uStack_100 = 0x3ff0000000000000;
    local_108 = 0x3ff0000000000000;
    uStack_f0 = 0;
    local_f8 = 0x3ff0000000000000;
    uStack_110 = 0;
    FUN_1447dc19e(puVar7,param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_168);
  }
LAB_146ef2a21:
  puVar9 = &DAT_14c846480;
  puVar10 = param_1;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  if ((local_28 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ef2a5e FUN_146ef2a5e body=108 status=ok
// SIG undefined FUN_146ef2a5e(void)

void FUN_146ef2a5e(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  param_2[2] = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = uVar2;
  param_3[2] = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  *param_3 = DAT_14c8464e0;
  param_3[1] = uVar2;
  lVar1 = *param_1;
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x10) != 0)) && (*(int *)(lVar1 + 8) == 1)) {
    param_2[2] = *(undefined8 *)(lVar1 + 0x368);
    uVar2 = *(undefined8 *)(lVar1 + 0x360);
    *param_2 = *(undefined8 *)(lVar1 + 0x358);
    param_2[1] = uVar2;
    param_3[2] = *(undefined8 *)(lVar1 + 0x380);
    uVar2 = *(undefined8 *)(lVar1 + 0x378);
    *param_3 = *(undefined8 *)(lVar1 + 0x370);
    param_3[1] = uVar2;
  }
  return;
}



// FUNCTION 146ef2aca FUN_146ef2aca body=192 status=ok
// SIG undefined FUN_146ef2aca(void)

void FUN_146ef2aca(undefined8 param_1)

{
  double dVar1;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_146ef28a0(&local_88,param_1,0);
  FUN_146ef28a0(&local_e8,param_1,1);
  FUN_1449437a2(&local_88,&local_148,&local_e8);
  local_88 = local_148;
  uStack_80 = uStack_140;
  local_78 = local_138;
  uStack_74 = uStack_134;
  uStack_70 = uStack_130;
  uStack_6c = uStack_12c;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0x3ff0000000000000;
  dVar1 = (double)FUN_14010169e(&local_88,&local_e8);
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0((float)dVar1);
}



// FUNCTION 146ef2b8c FUN_146ef2b8c body=200 status=ok
// SIG undefined FUN_146ef2b8c(void)

void FUN_146ef2b8c(undefined8 param_1)

{
  double dVar1;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_146ef28a0(&local_88,param_1,0);
  FUN_146ef28a0(&local_e8,param_1,1);
  FUN_1449437a2(&local_88,&local_148,&local_e8);
  local_88 = local_148;
  uStack_84 = uStack_144;
  uStack_80 = uStack_140;
  uStack_7c = uStack_13c;
  local_78 = local_138;
  uStack_74 = uStack_134;
  uStack_70 = uStack_130;
  uStack_6c = uStack_12c;
  local_e8 = 0;
  local_e0 = 0x3ff0000000000000;
  local_d8 = 0;
  dVar1 = (double)FUN_14010169e(&local_88,&local_e8);
  if ((local_28 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0((float)dVar1);
}



// FUNCTION 146ef2c56 FUN_146ef2c56 body=192 status=ok
// SIG undefined FUN_146ef2c56(void)

void FUN_146ef2c56(undefined8 param_1)

{
  double dVar1;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_146ef28a0(&local_88,param_1,0);
  FUN_146ef28a0(&local_e8,param_1,1);
  FUN_1449437a2(&local_88,&local_148,&local_e8);
  local_88 = local_148;
  uStack_80 = uStack_140;
  local_78 = local_138;
  uStack_74 = uStack_134;
  uStack_70 = uStack_130;
  uStack_6c = uStack_12c;
  local_e8 = 0x3ff0000000000000;
  local_e0 = 0;
  uStack_d8 = 0;
  dVar1 = (double)FUN_14010169e(&local_88,&local_e8);
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0((float)dVar1);
}



// FUNCTION 146ef2d18 FUN_146ef2d18 body=221 status=ok
// SIG undefined FUN_146ef2d18(void)

void FUN_146ef2d18(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_118 [32];
  undefined8 local_f8 [12];
  undefined8 local_98 [12];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar1 = *param_1;
  if (((lVar1 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
     (*(int *)(lVar1 + 8) == 1)) {
    memcpy(local_f8,(void *)(lVar1 + 0x40),0xc0);
    puVar4 = local_98;
    if (param_3 == 0) {
      puVar4 = local_f8;
    }
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar4 = *param_2;
      param_2 = param_2 + 1;
      puVar4 = puVar4 + 1;
    }
    memcpy((void *)(lVar1 + 0x40),local_f8,0xc0);
    *(byte *)(lVar1 + 0x18) = *(byte *)(lVar1 + 0x18) | 0x80;
    if (*(longlong *)(lVar2 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_118);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ef2e12 FUN_146ef2e12 body=70 status=ok
// SIG undefined FUN_146ef2e12(void)

void FUN_146ef2e12(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  lVar1 = *param_1;
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x10) != 0)) && (*(int *)(lVar1 + 8) == 1)) {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *(undefined8 *)(lVar1 + 0x1f8) = *(undefined8 *)(param_2 + 4);
    *(undefined4 *)(lVar1 + 0x1e8) = uVar2;
    *(undefined4 *)(lVar1 + 0x1ec) = uVar3;
    *(undefined4 *)(lVar1 + 0x1f0) = uVar4;
    *(undefined4 *)(lVar1 + 500) = uVar5;
    *(byte *)(lVar1 + 0x18) = *(byte *)(lVar1 + 0x18) | 0x80;
    lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8);
    if (lVar1 != 0) {
      FUN_144a78688(lVar1 + 0x70);
      return;
    }
  }
  return;
}



// FUNCTION 146ef2e9e FUN_146ef2e9e body=70 status=ok
// SIG undefined FUN_146ef2e9e(void)

void FUN_146ef2e9e(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  lVar1 = *param_1;
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x10) != 0)) && (*(int *)(lVar1 + 8) == 1)) {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *(undefined8 *)(lVar1 + 0x210) = *(undefined8 *)(param_2 + 4);
    *(undefined4 *)(lVar1 + 0x200) = uVar2;
    *(undefined4 *)(lVar1 + 0x204) = uVar3;
    *(undefined4 *)(lVar1 + 0x208) = uVar4;
    *(undefined4 *)(lVar1 + 0x20c) = uVar5;
    *(byte *)(lVar1 + 0x18) = *(byte *)(lVar1 + 0x18) | 0x80;
    lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8);
    if (lVar1 != 0) {
      FUN_144a78688(lVar1 + 0x70);
      return;
    }
  }
  return;
}



// FUNCTION 146ef2ee4 FUN_146ef2ee4 body=70 status=ok
// SIG undefined FUN_146ef2ee4(void)

void FUN_146ef2ee4(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  lVar1 = *param_1;
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x10) != 0)) && (*(int *)(lVar1 + 8) == 1)) {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *(undefined8 *)(lVar1 + 0x2a0) = *(undefined8 *)(param_2 + 4);
    *(undefined4 *)(lVar1 + 0x290) = uVar2;
    *(undefined4 *)(lVar1 + 0x294) = uVar3;
    *(undefined4 *)(lVar1 + 0x298) = uVar4;
    *(undefined4 *)(lVar1 + 0x29c) = uVar5;
    *(byte *)(lVar1 + 0x18) = *(byte *)(lVar1 + 0x18) | 0x80;
    lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8);
    if (lVar1 != 0) {
      FUN_144a78688(lVar1 + 0x70);
      return;
    }
  }
  return;
}



// FUNCTION 146ef2f2a FUN_146ef2f2a body=32 status=ok
// SIG undefined FUN_146ef2f2a(void)

undefined8 FUN_146ef2f2a(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  if (((lVar1 == 0) || (*(longlong *)(lVar1 + 0x10) == 0)) || (*(int *)(lVar1 + 8) != 1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x351));
  }
  return uVar2;
}



// FUNCTION 146ef2f4a FUN_146ef2f4a body=533 status=ok
// SIG undefined FUN_146ef2f4a(void)

void FUN_146ef2f4a(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar11 = *(longlong *)(param_1[1] + 0x40);
  local_68 = 0;
  uStack_60 = 0;
  iVar2 = *(int *)(lVar11 + 0x88);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  iVar8 = 0;
  if (iVar2 != 0) {
    FUN_140836c88(&local_68);
    iVar2 = *(int *)(lVar11 + 0x88);
    lVar10 = lVar11 + 0x78;
    if (*(longlong *)(lVar11 + 0x80) != 0) {
      lVar10 = *(longlong *)(lVar11 + 0x80);
    }
    iVar8 = 0;
    if ((longlong)iVar2 != 0) {
      lVar9 = 0;
      local_70 = lVar11;
      do {
        uVar4 = uStack_60;
        if (*(longlong *)(lVar10 + lVar9) == *param_1) {
          lVar11 = (longlong)(int)uStack_60;
          uVar5 = (int)uStack_60 + 1;
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar5);
          if (uStack_60._4_4_ < uVar5) {
            FUN_140619960(&local_68,uVar4 & 0xffffffff);
          }
          *(undefined8 *)(local_68 + lVar11 * 8) = *param_2;
          *param_2 = 0;
        }
        else {
          plVar3 = *(longlong **)(*(longlong *)(lVar10 + lVar9) + 0x10);
          (**(code **)(*plVar3 + 0x28))(plVar3,&local_50);
          uVar4 = uStack_60;
          lVar11 = (longlong)(int)uStack_60;
          uVar5 = (int)uStack_60 + 1;
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar5);
          if (uStack_60._4_4_ < uVar5) {
            FUN_140619960(&local_68,uVar4 & 0xffffffff);
          }
          *(undefined8 **)(local_68 + lVar11 * 8) = local_50;
        }
        lVar9 = lVar9 + 8;
      } while ((longlong)iVar2 * 8 != lVar9);
      iVar8 = *(int *)(local_70 + 0x88);
    }
  }
  if ((int)uStack_60 == iVar8) {
    param_1 = param_1 + 1;
    puVar6 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    FUN_14014f414(puVar6,&local_68);
    if (puVar6 == (undefined8 *)0x0) {
      uVar7 = *(undefined8 *)(*param_1 + 0x40);
      local_50 = (undefined8 *)0x0;
    }
    else {
      LOCK();
      *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
      UNLOCK();
      uVar7 = *(undefined8 *)(*param_1 + 0x40);
      LOCK();
      *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
      UNLOCK();
      local_50 = puVar6;
    }
    FUN_1406188f0(uVar7,&local_50);
    if (((*param_1 != 0) && (lVar11 = *(longlong *)(*param_1 + 8), lVar11 != 0)) &&
       (lVar11 = *(longlong *)(lVar11 + 0x260), lVar11 != 0)) {
      FUN_144840e24(lVar11,param_1);
    }
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar6 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (*(int *)((longlong)puVar6 + 0xc) == 0)) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
  }
  FUN_144756766(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ef317b FUN_146ef317b body=26 status=ok
// SIG undefined FUN_146ef317b(void)

void FUN_146ef317b(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return;
}



// FUNCTION 146ef31d2 FUN_146ef31d2 body=38 status=ok
// SIG undefined FUN_146ef31d2(void)

undefined8 FUN_146ef31d2(undefined8 param_1,int param_2)

{
  FUN_141361ae0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef31f8 FUN_146ef31f8 body=32 status=ok
// SIG undefined FUN_146ef31f8(void)

undefined8 FUN_146ef31f8(undefined8 param_1,undefined8 param_2)

{
  FUN_1400b22c2(param_2,"FChaosScene");
  return param_2;
}



// FUNCTION 146ef32bc FUN_146ef32bc body=59 status=ok
// SIG undefined FUN_146ef32bc(void)

undefined8 FUN_146ef32bc(longlong *param_1)

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



// FUNCTION 146ef33ee FUN_146ef33ee body=59 status=ok
// SIG undefined FUN_146ef33ee(void)

undefined8 FUN_146ef33ee(longlong *param_1)

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



// FUNCTION 146ef34fc FUN_146ef34fc body=59 status=ok
// SIG undefined FUN_146ef34fc(void)

undefined8 FUN_146ef34fc(longlong *param_1)

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



// FUNCTION 146ef359e FUN_146ef359e body=29 status=ok
// SIG undefined FUN_146ef359e(void)

undefined8 FUN_146ef359e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef35d6 FUN_146ef35d6 body=29 status=ok
// SIG undefined FUN_146ef35d6(void)

undefined8 FUN_146ef35d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef3616 FUN_146ef3616 body=29 status=ok
// SIG undefined FUN_146ef3616(void)

undefined8 FUN_146ef3616(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef3656 FUN_146ef3656 body=29 status=ok
// SIG undefined FUN_146ef3656(void)

undefined8 FUN_146ef3656(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef3695 FUN_146ef3695 body=770 status=ok
// SIG undefined FUN_146ef3695(void)

void FUN_146ef3695(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  float param_5,longlong param_6,undefined2 param_7,undefined4 *param_8,
                  undefined8 param_9)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_238 [32];
  double *local_218;
  undefined ***local_210;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined **local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined2 local_168;
  byte local_166;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  longlong local_148;
  undefined4 *local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118 [13];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1a8 = *(undefined8 *)(param_1 + 0x68);
  local_1b8 = *(undefined ***)(param_1 + 0x58);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x60);
  local_1a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_198 = *(undefined8 *)(param_1 + 0x78);
  local_190 = *(undefined8 *)(param_1 + 0x80);
  FUN_1400fd046(&local_1b8,&local_b0);
  local_1b8 = &PTR_FUN_149f74fe0;
  local_1a0 = DAT_14c8464f0;
  uStack_1b0 = DAT_14c8464e0;
  local_1a8 = DAT_14c8464e8;
  uStack_198 = *param_4;
  local_190 = param_4[1];
  local_188 = param_4[2];
  local_170 = (*(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68)) * 0.5;
  local_178 = (*(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60)) * 0.5;
  local_180 = (*(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58)) * 0.5;
  local_168 = param_7;
  local_160 = DAT_14c8464e0;
  uStack_158 = DAT_14c8464e8;
  local_150 = DAT_14c8464f0;
  local_148 = param_6;
  local_140 = param_8;
  local_138 = *param_8;
  local_134 = param_8[1];
  local_130 = param_8[2];
  local_12c = param_8[3];
  local_120 = param_9;
  puVar3 = local_118;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  local_166 = *(byte *)(param_8 + 4) >> 4 & 1;
  *(int *)(param_6 + 0x80) = *(int *)(param_6 + 0x80) + 1;
  local_128 = param_1;
  if ((param_5 != 0.0) || (NAN(param_5))) {
    local_1c0 = (local_88 - local_a0) * 0.5;
    local_1c8 = (local_90 - local_a8) * 0.5;
    local_1d0 = (local_98 - local_b0) * 0.5;
    local_218 = &local_1d0;
    local_1d8 = param_4[2];
    local_1e8 = *(undefined4 *)param_4;
    uStack_1e4 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_1e0 = *(undefined4 *)(param_4 + 1);
    uStack_1dc = *(undefined4 *)((longlong)param_4 + 0xc);
    local_1f0 = local_1c0 + local_a0;
    local_1f8 = local_1c8 + local_a8;
    local_200 = local_1d0 + local_b0;
    local_210 = &local_1b8;
    (**(code **)(*param_2 + 0x58))(param_2,&local_200,&local_1e8,(double)param_5);
  }
  else {
    (**(code **)(*param_2 + 0x60))(param_2,&local_b0,&local_1b8);
  }
  piVar1 = (int *)(param_6 + 0x80);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14480df5d(param_6 + 0x88,param_6 + 8,*(undefined1 *)(param_6 + 0x84));
  }
  if ((local_80 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ef3998 FUN_146ef3998 body=29 status=ok
// SIG undefined FUN_146ef3998(void)

undefined8 FUN_146ef3998(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef39e5 FUN_146ef39e5 body=770 status=ok
// SIG undefined FUN_146ef39e5(void)

void FUN_146ef39e5(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  float param_5,longlong param_6,undefined2 param_7,undefined4 *param_8,
                  undefined8 param_9)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_238 [32];
  double *local_218;
  undefined ***local_210;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined **local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined2 local_168;
  byte local_166;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  longlong local_148;
  undefined4 *local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118 [13];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1a8 = *(undefined8 *)(param_1 + 0x68);
  local_1b8 = *(undefined ***)(param_1 + 0x58);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x60);
  local_1a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_198 = *(undefined8 *)(param_1 + 0x78);
  local_190 = *(undefined8 *)(param_1 + 0x80);
  FUN_1400fd046(&local_1b8,&local_b0);
  local_1b8 = &PTR_FUN_149f75030;
  local_1a0 = DAT_14c8464f0;
  uStack_1b0 = DAT_14c8464e0;
  local_1a8 = DAT_14c8464e8;
  uStack_198 = *param_4;
  local_190 = param_4[1];
  local_188 = param_4[2];
  local_170 = (*(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68)) * 0.5;
  local_178 = (*(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60)) * 0.5;
  local_180 = (*(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58)) * 0.5;
  local_168 = param_7;
  local_160 = DAT_14c8464e0;
  uStack_158 = DAT_14c8464e8;
  local_150 = DAT_14c8464f0;
  local_148 = param_6;
  local_140 = param_8;
  local_138 = *param_8;
  local_134 = param_8[1];
  local_130 = param_8[2];
  local_12c = param_8[3];
  local_120 = param_9;
  puVar3 = local_118;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  local_166 = *(byte *)(param_8 + 4) >> 4 & 1;
  *(int *)(param_6 + 0x80) = *(int *)(param_6 + 0x80) + 1;
  local_128 = param_1;
  if ((param_5 != 0.0) || (NAN(param_5))) {
    local_1c0 = (local_88 - local_a0) * 0.5;
    local_1c8 = (local_90 - local_a8) * 0.5;
    local_1d0 = (local_98 - local_b0) * 0.5;
    local_218 = &local_1d0;
    local_1d8 = param_4[2];
    local_1e8 = *(undefined4 *)param_4;
    uStack_1e4 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_1e0 = *(undefined4 *)(param_4 + 1);
    uStack_1dc = *(undefined4 *)((longlong)param_4 + 0xc);
    local_1f0 = local_1c0 + local_a0;
    local_1f8 = local_1c8 + local_a8;
    local_200 = local_1d0 + local_b0;
    local_210 = &local_1b8;
    (**(code **)(*param_2 + 0x58))(param_2,&local_200,&local_1e8,(double)param_5);
  }
  else {
    (**(code **)(*param_2 + 0x60))(param_2,&local_b0,&local_1b8);
  }
  piVar1 = (int *)(param_6 + 0x80);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14480df5d(param_6 + 0x88,param_6 + 8,*(undefined1 *)(param_6 + 0x84));
  }
  if ((local_80 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ef3ce8 FUN_146ef3ce8 body=29 status=ok
// SIG undefined FUN_146ef3ce8(void)

undefined8 FUN_146ef3ce8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef3d35 FUN_146ef3d35 body=770 status=ok
// SIG undefined FUN_146ef3d35(void)

void FUN_146ef3d35(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  float param_5,longlong param_6,undefined2 param_7,undefined4 *param_8,
                  undefined8 param_9)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_238 [32];
  double *local_218;
  undefined ***local_210;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined **local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined2 local_168;
  byte local_166;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  longlong local_148;
  undefined4 *local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118 [13];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1a8 = *(undefined8 *)(param_1 + 0x68);
  local_1b8 = *(undefined ***)(param_1 + 0x58);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x60);
  local_1a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_198 = *(undefined8 *)(param_1 + 0x78);
  local_190 = *(undefined8 *)(param_1 + 0x80);
  FUN_1400fd046(&local_1b8,&local_b0);
  local_1b8 = &PTR_FUN_149f75080;
  local_1a0 = DAT_14c8464f0;
  uStack_1b0 = DAT_14c8464e0;
  local_1a8 = DAT_14c8464e8;
  uStack_198 = *param_4;
  local_190 = param_4[1];
  local_188 = param_4[2];
  local_170 = (*(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68)) * 0.5;
  local_178 = (*(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60)) * 0.5;
  local_180 = (*(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58)) * 0.5;
  local_168 = param_7;
  local_160 = DAT_14c8464e0;
  uStack_158 = DAT_14c8464e8;
  local_150 = DAT_14c8464f0;
  local_148 = param_6;
  local_140 = param_8;
  local_138 = *param_8;
  local_134 = param_8[1];
  local_130 = param_8[2];
  local_12c = param_8[3];
  local_120 = param_9;
  puVar3 = local_118;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  local_166 = *(byte *)(param_8 + 4) >> 4 & 1;
  *(int *)(param_6 + 0x80) = *(int *)(param_6 + 0x80) + 1;
  local_128 = param_1;
  if ((param_5 != 0.0) || (NAN(param_5))) {
    local_1c0 = (local_88 - local_a0) * 0.5;
    local_1c8 = (local_90 - local_a8) * 0.5;
    local_1d0 = (local_98 - local_b0) * 0.5;
    local_218 = &local_1d0;
    local_1d8 = param_4[2];
    local_1e8 = *(undefined4 *)param_4;
    uStack_1e4 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_1e0 = *(undefined4 *)(param_4 + 1);
    uStack_1dc = *(undefined4 *)((longlong)param_4 + 0xc);
    local_1f0 = local_1c0 + local_a0;
    local_1f8 = local_1c8 + local_a8;
    local_200 = local_1d0 + local_b0;
    local_210 = &local_1b8;
    (**(code **)(*param_2 + 0x58))(param_2,&local_200,&local_1e8,(double)param_5);
  }
  else {
    (**(code **)(*param_2 + 0x60))(param_2,&local_b0,&local_1b8);
  }
  piVar1 = (int *)(param_6 + 0x80);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14480df5d(param_6 + 0x88,param_6 + 8,*(undefined1 *)(param_6 + 0x84));
  }
  if ((local_80 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ef4038 FUN_146ef4038 body=29 status=ok
// SIG undefined FUN_146ef4038(void)

undefined8 FUN_146ef4038(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef4085 FUN_146ef4085 body=770 status=ok
// SIG undefined FUN_146ef4085(void)

void FUN_146ef4085(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  float param_5,longlong param_6,undefined2 param_7,undefined4 *param_8,
                  undefined8 param_9)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_238 [32];
  double *local_218;
  undefined ***local_210;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined **local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined2 local_168;
  byte local_166;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  longlong local_148;
  undefined4 *local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118 [13];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1a8 = *(undefined8 *)(param_1 + 0x68);
  local_1b8 = *(undefined ***)(param_1 + 0x58);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x60);
  local_1a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_198 = *(undefined8 *)(param_1 + 0x78);
  local_190 = *(undefined8 *)(param_1 + 0x80);
  FUN_1400fd046(&local_1b8,&local_b0);
  local_1b8 = &PTR_FUN_149f750d0;
  local_1a0 = DAT_14c8464f0;
  uStack_1b0 = DAT_14c8464e0;
  local_1a8 = DAT_14c8464e8;
  uStack_198 = *param_4;
  local_190 = param_4[1];
  local_188 = param_4[2];
  local_170 = (*(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68)) * 0.5;
  local_178 = (*(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60)) * 0.5;
  local_180 = (*(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58)) * 0.5;
  local_168 = param_7;
  local_160 = DAT_14c8464e0;
  uStack_158 = DAT_14c8464e8;
  local_150 = DAT_14c8464f0;
  local_148 = param_6;
  local_140 = param_8;
  local_138 = *param_8;
  local_134 = param_8[1];
  local_130 = param_8[2];
  local_12c = param_8[3];
  local_120 = param_9;
  puVar3 = local_118;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  local_166 = *(byte *)(param_8 + 4) >> 4 & 1;
  *(int *)(param_6 + 0x80) = *(int *)(param_6 + 0x80) + 1;
  local_128 = param_1;
  if ((param_5 != 0.0) || (NAN(param_5))) {
    local_1c0 = (local_88 - local_a0) * 0.5;
    local_1c8 = (local_90 - local_a8) * 0.5;
    local_1d0 = (local_98 - local_b0) * 0.5;
    local_218 = &local_1d0;
    local_1d8 = param_4[2];
    local_1e8 = *(undefined4 *)param_4;
    uStack_1e4 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_1e0 = *(undefined4 *)(param_4 + 1);
    uStack_1dc = *(undefined4 *)((longlong)param_4 + 0xc);
    local_1f0 = local_1c0 + local_a0;
    local_1f8 = local_1c8 + local_a8;
    local_200 = local_1d0 + local_b0;
    local_210 = &local_1b8;
    (**(code **)(*param_2 + 0x58))(param_2,&local_200,&local_1e8,(double)param_5);
  }
  else {
    (**(code **)(*param_2 + 0x60))(param_2,&local_b0,&local_1b8);
  }
  piVar1 = (int *)(param_6 + 0x80);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14480df5d(param_6 + 0x88,param_6 + 8,*(undefined1 *)(param_6 + 0x84));
  }
  if ((local_80 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ef4388 FUN_146ef4388 body=29 status=ok
// SIG undefined FUN_146ef4388(void)

undefined8 FUN_146ef4388(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef43d5 FUN_146ef43d5 body=881 status=ok
// SIG undefined FUN_146ef43d5(void)

void FUN_146ef43d5(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  float param_5,longlong param_6,undefined2 param_7,undefined4 *param_8,
                  undefined8 param_9)

{
  int *piVar1;
  double dVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_238 [32];
  double *local_218;
  undefined ***local_210;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined **local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double local_198;
  double dStack_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined2 local_168;
  byte local_166;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  longlong local_148;
  undefined4 *local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118 [13];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_238;
  dVar2 = *(double *)(param_1 + 0x10);
  dStack_190 = dVar2 + *(double *)(param_1 + 0x30);
  local_198 = dVar2 + *(double *)(param_1 + 0x28);
  local_1a0 = dVar2 + *(double *)(param_1 + 0x20);
  dStack_1a8 = *(double *)(param_1 + 0x30) - dVar2;
  local_1b0 = *(double *)(param_1 + 0x28) - dVar2;
  local_1b8 = (undefined **)(*(double *)(param_1 + 0x20) - dVar2);
  FUN_1400fd046(&local_1b8,&local_b0);
  local_1b8 = &PTR_FUN_149f75120;
  local_1a0 = (double)DAT_14c8464f0;
  local_1b0 = (double)DAT_14c8464e0;
  dStack_1a8 = (double)DAT_14c8464e8;
  local_198 = (double)*param_4;
  dStack_190 = (double)param_4[1];
  local_188 = param_4[2];
  dVar2 = *(double *)(param_1 + 0x10);
  local_170 = ((dVar2 + *(double *)(param_1 + 0x30)) - (*(double *)(param_1 + 0x30) - dVar2)) * 0.5;
  local_178 = ((dVar2 + *(double *)(param_1 + 0x28)) - (*(double *)(param_1 + 0x28) - dVar2)) * 0.5;
  local_180 = ((dVar2 + *(double *)(param_1 + 0x20)) - (*(double *)(param_1 + 0x20) - dVar2)) * 0.5;
  local_168 = param_7;
  local_150 = DAT_14c8464f0;
  local_160 = DAT_14c8464e0;
  uStack_158 = DAT_14c8464e8;
  local_148 = param_6;
  local_140 = param_8;
  local_138 = *param_8;
  local_134 = param_8[1];
  local_130 = param_8[2];
  local_12c = param_8[3];
  local_120 = param_9;
  puVar4 = local_118;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_3;
    param_3 = param_3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_166 = *(byte *)(param_8 + 4) >> 4 & 1;
  *(int *)(param_6 + 0x80) = *(int *)(param_6 + 0x80) + 1;
  local_128 = param_1;
  if ((param_5 != 0.0) || (NAN(param_5))) {
    local_1c0 = (local_88 - local_a0) * 0.5;
    local_1c8 = (local_90 - local_a8) * 0.5;
    local_1d0 = (local_98 - local_b0) * 0.5;
    local_218 = &local_1d0;
    local_1d8 = param_4[2];
    local_1e8 = *(undefined4 *)param_4;
    uStack_1e4 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_1e0 = *(undefined4 *)(param_4 + 1);
    uStack_1dc = *(undefined4 *)((longlong)param_4 + 0xc);
    local_1f0 = local_1c0 + local_a0;
    local_1f8 = local_1c8 + local_a8;
    local_200 = local_1d0 + local_b0;
    local_210 = &local_1b8;
    (**(code **)(*param_2 + 0x58))(param_2,&local_200,&local_1e8,(double)param_5);
  }
  else {
    (**(code **)(*param_2 + 0x60))(param_2,&local_b0,&local_1b8);
  }
  piVar1 = (int *)(param_6 + 0x80);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_146ef48bd(param_6 + 0x88,param_6 + 8,*(undefined1 *)(param_6 + 0x84));
  }
  if ((local_80 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ef4748 FUN_146ef4748 body=29 status=ok
// SIG undefined FUN_146ef4748(void)

undefined8 FUN_146ef4748(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef4796 FUN_146ef4796 body=144 status=ok
// SIG undefined FUN_146ef4796(void)

void FUN_146ef4796(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x3c08);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x80;
    if (0x80 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x80 < *(uint *)(param_1 + 0x3c0c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x78,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 / 0x78)) {
        uVar4 = uVar3 / 0x78 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x3c0c) = (int)uVar4;
    FUN_146ef4828(param_1,param_2,uVar4,0x78);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146ef4828 FUN_146ef4828 body=149 status=ok
// SIG undefined FUN_146ef4828(void)

void FUN_146ef4828(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x3c00);
  if ((uint)param_3 < 0x81) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x78);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x3c00,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x3c00),param_1,(longlong)param_2 * 0x78);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x3c00,param_2,param_3,param_4);
  return;
}



// FUNCTION 146ef48bd FUN_146ef48bd body=226 status=ok
// SIG undefined FUN_146ef48bd(void)

void FUN_146ef48bd(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(param_1 + 0x3c00);
  if (*(longlong *)(param_1 + 0x3c00) == 0) {
    lVar3 = param_1;
  }
  FUN_146ef4a2b(lVar3,*(undefined4 *)(param_1 + 0x3c08),param_3,&local_21);
  if ((char)param_3 != '\0') {
    lVar3 = (longlong)*(int *)(param_1 + 0x3c08);
    if (lVar3 < 1) {
      uVar4 = (ulonglong)(*(int *)(param_1 + 0x3c08) + 1);
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x3c00);
      if (*(longlong *)(param_1 + 0x3c00) == 0) {
        lVar2 = param_1;
      }
      uVar4 = lVar3 + 1;
      pfVar1 = (float *)(lVar2 + lVar3 * 0x78 + -8);
      do {
        if (*pfVar1 < *(float *)(param_2 + 0xe)) goto LAB_146ef4969;
        uVar4 = uVar4 - 1;
        pfVar1 = pfVar1 + -0x1e;
      } while (1 < uVar4);
      uVar4 = 1;
    }
LAB_146ef4969:
    FUN_146ef49a0(param_1,uVar4 & 0xffffffff,1);
    lVar3 = *(longlong *)(param_1 + 0x3c00);
    if (*(longlong *)(param_1 + 0x3c00) == 0) {
      lVar3 = param_1;
    }
    puVar5 = (undefined8 *)(lVar3 + (longlong)(int)uVar4 * 0x78 + -0x78);
    for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar5 = *param_2;
      param_2 = param_2 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ef49a0 FUN_146ef49a0 body=138 status=ok
// SIG undefined FUN_146ef49a0(void)

void FUN_146ef49a0(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x3c08);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x3c08) = param_2;
    if ((uint)(*(int *)(param_1 + 0x3c0c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146ef4796(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x3c00);
    if (*(longlong *)(param_1 + 0x3c00) == 0) {
      lVar2 = param_1;
    }
    FUN_146ef4f65((longlong)iVar1 * 0x78 + lVar2,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 0x3c08) = param_2, param_3 == '\x01')) {
      FUN_146ef4f96(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146ef4a2b FUN_146ef4a2b body=760 status=ok
// SIG undefined FUN_146ef4a2b(void)

void FUN_146ef4a2b(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  float fVar17;
  undefined1 auStack_3f8 [40];
  undefined8 local_3d0;
  longlong local_3c8;
  longlong local_3c0;
  undefined4 local_3b8 [190];
  undefined8 local_c0 [15];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  local_3d0 = param_4;
  if (1 < (int)param_2) {
    memset(local_3b8,0,0x2f0);
    local_3c0 = (ulonglong)param_2 * 0x78 + param_1 + -0x78;
    local_3c8 = param_1;
    fVar17 = logf((float)(int)param_2);
    local_3b8[0] = (int)(longlong)(fVar17 + fVar17);
    plVar15 = &local_3c8;
    do {
      puVar1 = (undefined8 *)*plVar15;
      puVar13 = (undefined8 *)plVar15[1];
      iVar14 = (int)plVar15[2];
      uVar3 = (int)((ulonglong)((longlong)puVar13 - (longlong)puVar1) >> 3) * -0x11111111 + 1;
      puVar4 = puVar1;
      puVar9 = puVar13;
      if (iVar14 != 0) {
LAB_146ef4b07:
        if (8 < (int)uVar3) {
          puVar6 = puVar1 + (ulonglong)(uVar3 >> 1) * 0xf;
          puVar10 = local_c0;
          for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar10 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar10 = puVar10 + 1;
          }
          puVar6 = puVar1;
          puVar10 = puVar1 + (ulonglong)(uVar3 >> 1) * 0xf;
          for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar10 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar10 = puVar10 + 1;
          }
          puVar6 = local_c0;
          puVar10 = puVar1;
          for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar10 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar10 = puVar10 + 1;
          }
          puVar6 = puVar13 + 0xf;
          puVar10 = puVar1;
          do {
            puVar8 = puVar10 + 0xf;
            puVar11 = puVar10 + 0xf;
            do {
              puVar10 = puVar11;
              puVar5 = puVar8;
              if (puVar13 < puVar10) break;
              puVar8 = puVar5 + 0xf;
              puVar11 = puVar10 + 0xf;
            } while (*(float *)(puVar10 + 0xe) < *(float *)(puVar1 + 0xe) ||
                     *(float *)(puVar10 + 0xe) == *(float *)(puVar1 + 0xe));
            puVar8 = puVar6 + -0x1e;
            do {
              puVar11 = puVar6;
              puVar16 = puVar8;
              puVar6 = puVar11 + -0xf;
              if (puVar6 <= puVar1) break;
              puVar8 = puVar16 + -0xf;
            } while (*(float *)(puVar1 + 0xe) < *(float *)(puVar11 + -1) ||
                     *(float *)(puVar1 + 0xe) == *(float *)(puVar11 + -1));
            lVar2 = 0xf;
            puVar8 = puVar1;
            puVar7 = puVar10;
            puVar12 = local_c0;
            if (puVar6 < puVar10) goto code_r0x000146ef4bd7;
            for (; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar12 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar12 = puVar12 + 1;
            }
            puVar8 = puVar6;
            puVar11 = puVar10;
            for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar11 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar11 = puVar11 + 1;
            }
            puVar8 = local_c0;
            puVar11 = puVar6;
            for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar11 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar11 = puVar11 + 1;
            }
          } while( true );
        }
        while (puVar9 = puVar1, puVar4 = puVar1, puVar1 < puVar13) {
          while (puVar6 = puVar9, puVar4 = puVar4 + 0xf, puVar4 <= puVar13) {
            puVar9 = puVar4;
            if (*(float *)(puVar4 + 0xe) < *(float *)(puVar6 + 0xe) ||
                *(float *)(puVar4 + 0xe) == *(float *)(puVar6 + 0xe)) {
              puVar9 = puVar6;
            }
          }
          puVar4 = puVar13 + -0xf;
          puVar9 = puVar6;
          puVar10 = local_c0;
          for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          puVar9 = puVar13;
          for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar6 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar6 = puVar6 + 1;
          }
          puVar9 = local_c0;
          puVar6 = puVar13;
          for (lVar2 = 0xf; puVar13 = puVar4, lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar6 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        goto LAB_146ef4cf5;
      }
LAB_146ef4d0f:
      FUN_146ef4d24(puVar1,uVar3,puVar1,local_3d0);
LAB_146ef4cf5:
      plVar15 = plVar15 + -3;
    } while (&local_3c8 <= plVar15);
  }
  if ((local_48 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000146ef4bd7:
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar12 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar12 = puVar12 + 1;
  }
  puVar8 = puVar6;
  puVar7 = puVar1;
  for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar7 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar8 = local_c0;
  puVar7 = puVar6;
  for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar7 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar7 = puVar7 + 1;
  }
  iVar14 = iVar14 + -1;
  puVar11 = puVar11 + -0x1e;
  if ((longlong)puVar16 - (longlong)puVar4 < (longlong)puVar9 - (longlong)puVar5) {
    if (puVar10 < puVar13) {
      *plVar15 = (longlong)puVar10;
      plVar15[1] = (longlong)puVar13;
      *(int *)(plVar15 + 2) = iVar14;
      plVar15 = plVar15 + 3;
    }
    puVar5 = puVar1;
    if (puVar6 <= puVar1 + 0xf) goto LAB_146ef4cf5;
  }
  else {
    if (puVar1 + 0xf < puVar6) {
      *plVar15 = (longlong)puVar1;
      plVar15[1] = (longlong)puVar11;
      *(int *)(plVar15 + 2) = iVar14;
      plVar15 = plVar15 + 3;
    }
    puVar1 = puVar10;
    puVar11 = puVar13;
    puVar16 = puVar13;
    if (puVar13 <= puVar10) goto LAB_146ef4cf5;
  }
  uVar3 = (int)((ulonglong)((longlong)puVar16 - (longlong)puVar5) >> 3) * -0x11111111 + 1;
  puVar4 = puVar5;
  puVar13 = puVar11;
  puVar9 = puVar16;
  if (iVar14 == 0) goto LAB_146ef4d0f;
  goto LAB_146ef4b07;
}



// FUNCTION 146ef4d24 FUN_146ef4d24 body=576 status=ok
// SIG undefined FUN_146ef4d24(void)

void FUN_146ef4d24(undefined8 *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [15];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != 0) {
    iVar8 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar1 = iVar8;
joined_r0x000146ef4d6b:
    do {
      iVar5 = iVar1 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar6 = iVar1 * 2 + 2;
        if ((iVar6 < (int)param_2) &&
           (*(float *)(param_1 + (longlong)iVar5 * 0xf + 0xe) <
            *(float *)(param_1 + (longlong)iVar6 * 0xf + 0xe) ||
            *(float *)(param_1 + (longlong)iVar5 * 0xf + 0xe) ==
            *(float *)(param_1 + (longlong)iVar6 * 0xf + 0xe))) {
          iVar5 = iVar6;
        }
        if (*(float *)(param_1 + (longlong)iVar1 * 0xf + 0xe) <=
            *(float *)(param_1 + (longlong)iVar5 * 0xf + 0xe) &&
            *(float *)(param_1 + (longlong)iVar5 * 0xf + 0xe) !=
            *(float *)(param_1 + (longlong)iVar1 * 0xf + 0xe)) {
          puVar3 = param_1 + (longlong)iVar1 * 0xf;
          puVar4 = local_98;
          for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = param_1 + (longlong)iVar5 * 0xf;
          puVar4 = param_1 + (longlong)iVar1 * 0xf;
          for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = local_98;
          puVar4 = param_1 + (longlong)iVar5 * 0xf;
          for (lVar2 = 0xf; iVar1 = iVar5, lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          goto joined_r0x000146ef4d6b;
        }
      }
      bVar9 = iVar8 != 0;
      iVar8 = iVar8 + -1;
      iVar1 = iVar8;
    } while (bVar9);
    if (1 < (int)param_2) {
      puVar3 = param_1;
      puVar4 = local_98;
      for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar3 = param_1 + ((ulonglong)param_2 - 1) * 0xf;
      puVar4 = param_1;
      for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar3 = local_98;
      puVar4 = param_1 + ((ulonglong)param_2 - 1) * 0xf;
      for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      if (param_2 != 2) {
        uVar7 = (ulonglong)param_2 - 1;
        do {
          iVar1 = 0;
          iVar5 = 1;
          iVar8 = 0;
          do {
            iVar1 = iVar1 + 2;
            iVar6 = iVar5;
            if (((longlong)iVar1 < (longlong)uVar7) &&
               (*(float *)(param_1 + (longlong)iVar5 * 0xf + 0xe) <
                *(float *)(param_1 + (longlong)iVar1 * 0xf + 0xe) ||
                *(float *)(param_1 + (longlong)iVar5 * 0xf + 0xe) ==
                *(float *)(param_1 + (longlong)iVar1 * 0xf + 0xe))) {
              iVar6 = iVar1;
            }
            if (*(float *)(param_1 + (longlong)iVar6 * 0xf + 0xe) <
                *(float *)(param_1 + (longlong)iVar8 * 0xf + 0xe) ||
                *(float *)(param_1 + (longlong)iVar6 * 0xf + 0xe) ==
                *(float *)(param_1 + (longlong)iVar8 * 0xf + 0xe)) break;
            puVar3 = param_1 + (longlong)iVar8 * 0xf;
            puVar4 = local_98;
            for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 1;
            }
            puVar3 = param_1 + (longlong)iVar6 * 0xf;
            puVar4 = param_1 + (longlong)iVar8 * 0xf;
            for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 1;
            }
            puVar3 = local_98;
            puVar4 = param_1 + (longlong)iVar6 * 0xf;
            for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 1;
            }
            iVar1 = iVar6 * 2;
            iVar5 = iVar6 * 2 + 1;
            iVar8 = iVar6;
          } while ((longlong)iVar5 < (longlong)uVar7);
          puVar3 = param_1;
          puVar4 = local_98;
          for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = param_1 + (uVar7 - 1) * 0xf;
          puVar4 = param_1;
          for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = local_98;
          puVar4 = param_1 + (uVar7 - 1) * 0xf;
          for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          bVar9 = 2 < uVar7;
          uVar7 = uVar7 - 1;
        } while (bVar9);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ef4f65 FUN_146ef4f65 body=48 status=ok
// SIG undefined FUN_146ef4f65(void)

void FUN_146ef4f65(longlong param_1,int param_2)

{
  undefined2 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined2 *)(param_1 + 0x38);
    do {
      *(undefined4 *)(puVar1 + -0x14) = 0xffffffff;
      *(undefined8 *)(puVar1 + -0x10) = 0;
      *(undefined8 *)(puVar1 + -0xc) = 0;
      *(undefined8 *)(puVar1 + -8) = 0;
      *(undefined4 *)(puVar1 + -4) = 0xffffffff;
      *puVar1 = 0;
      puVar1 = puVar1 + 0x3c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146ef4f96 FUN_146ef4f96 body=74 status=ok
// SIG undefined FUN_146ef4f96(void)

void FUN_146ef4f96(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146ef4fe0(param_1,*(undefined4 *)(param_1 + 0x3c08),*(undefined4 *)(param_1 + 0x3c0c))
  ;
  if (iVar1 == *(int *)(param_1 + 0x3c0c)) {
    return;
  }
  *(int *)(param_1 + 0x3c0c) = iVar1;
  FUN_146ef4828(param_1,*(undefined4 *)(param_1 + 0x3c08),iVar1,0x78);
  return;
}



// FUNCTION 146ef4fe0 FUN_146ef4fe0 body=121 status=ok
// SIG undefined FUN_146ef4fe0(void)

ulonglong FUN_146ef4fe0(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x80;
  if (0x80 < param_2) {
    iVar2 = param_3 - param_2;
    if ((ulonglong)((longlong)iVar2 * 0x78) < 0x4000) {
      if (iVar2 < 0x41 || (int)(param_3 * 2) <= (int)(param_2 * 3)) {
        return (ulonglong)param_3;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_3;
    }
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x78,0);
      uVar1 = uVar1 / 0x78;
    }
  }
  return uVar1;
}



// FUNCTION 146ef5059 FUN_146ef5059 body=765 status=ok
// SIG undefined FUN_146ef5059(void)

void FUN_146ef5059(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  float param_5,longlong param_6,undefined2 param_7,undefined4 *param_8,
                  undefined8 param_9)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_238 [32];
  double *local_218;
  undefined ***local_210;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined **local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined2 local_168;
  byte local_166;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  longlong local_148;
  undefined4 *local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118 [13];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1a8 = *(undefined8 *)(param_1 + 0x30);
  local_1b8 = *(undefined ***)(param_1 + 0x20);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x28);
  local_1a0 = *(undefined8 *)(param_1 + 0x38);
  uStack_198 = *(undefined8 *)(param_1 + 0x40);
  local_190 = *(undefined8 *)(param_1 + 0x48);
  FUN_1400fd046(&local_1b8,&local_b0);
  local_1b8 = &PTR_FUN_149f75170;
  local_1a0 = DAT_14c8464f0;
  uStack_1b0 = DAT_14c8464e0;
  local_1a8 = DAT_14c8464e8;
  uStack_198 = *param_4;
  local_190 = param_4[1];
  local_188 = param_4[2];
  local_170 = (*(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x30)) * 0.5;
  local_178 = (*(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x28)) * 0.5;
  local_180 = (*(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20)) * 0.5;
  local_168 = param_7;
  local_160 = DAT_14c8464e0;
  uStack_158 = DAT_14c8464e8;
  local_150 = DAT_14c8464f0;
  local_148 = param_6;
  local_140 = param_8;
  local_138 = *param_8;
  local_134 = param_8[1];
  local_130 = param_8[2];
  local_12c = param_8[3];
  local_120 = param_9;
  puVar3 = local_118;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  local_166 = *(byte *)(param_8 + 4) >> 4 & 1;
  *(int *)(param_6 + 0x80) = *(int *)(param_6 + 0x80) + 1;
  local_128 = param_1;
  if ((param_5 != 0.0) || (NAN(param_5))) {
    local_1c0 = (local_88 - local_a0) * 0.5;
    local_1c8 = (local_90 - local_a8) * 0.5;
    local_1d0 = (local_98 - local_b0) * 0.5;
    local_218 = &local_1d0;
    local_1d8 = param_4[2];
    local_1e8 = *(undefined4 *)param_4;
    uStack_1e4 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_1e0 = *(undefined4 *)(param_4 + 1);
    uStack_1dc = *(undefined4 *)((longlong)param_4 + 0xc);
    local_1f0 = local_1c0 + local_a0;
    local_1f8 = local_1c8 + local_a8;
    local_200 = local_1d0 + local_b0;
    local_210 = &local_1b8;
    (**(code **)(*param_2 + 0x58))(param_2,&local_200,&local_1e8,(double)param_5);
  }
  else {
    (**(code **)(*param_2 + 0x60))(param_2,&local_b0,&local_1b8);
  }
  piVar1 = (int *)(param_6 + 0x80);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_146ef48bd(param_6 + 0x88,param_6 + 8,*(undefined1 *)(param_6 + 0x84));
  }
  if ((local_80 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ef5358 FUN_146ef5358 body=29 status=ok
// SIG undefined FUN_146ef5358(void)

undefined8 FUN_146ef5358(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef53a5 FUN_146ef53a5 body=760 status=ok
// SIG undefined FUN_146ef53a5(void)

void FUN_146ef53a5(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined4 *param_4,
                  float param_5,longlong param_6,undefined2 param_7,undefined4 *param_8,
                  undefined8 param_9)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_248 [32];
  double *local_228;
  undefined ***local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined **local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  undefined2 local_198;
  byte local_196;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  longlong local_178;
  undefined4 *local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148 [12];
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_248;
  FUN_144b0186e(param_1,&local_1e8);
  FUN_1400fd046(&local_1e8,&local_e8,param_3);
  local_1e8 = &PTR_FUN_149f751c0;
  local_1e0 = DAT_14c8464e0;
  uStack_1d8 = DAT_14c8464e8;
  local_1d0 = DAT_14c8464f0;
  local_1c8 = *param_4;
  uStack_1c4 = param_4[1];
  uStack_1c0 = param_4[2];
  uStack_1bc = param_4[3];
  local_1b8 = *(undefined8 *)(param_4 + 4);
  FUN_144b0186e(param_1,&local_b8);
  local_1a0 = (local_90 - local_a8) * 0.5;
  local_1a8 = (local_98 - (double)CONCAT44(uStack_ac,uStack_b0)) * 0.5;
  local_1b0 = (local_a0 - (double)CONCAT44(uStack_b4,local_b8)) * 0.5;
  local_198 = param_7;
  local_190 = DAT_14c8464e0;
  uStack_188 = DAT_14c8464e8;
  local_180 = DAT_14c8464f0;
  local_178 = param_6;
  local_170 = param_8;
  local_168 = *param_8;
  local_164 = param_8[1];
  local_160 = param_8[2];
  local_15c = param_8[3];
  local_150 = param_9;
  puVar3 = local_148;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  local_196 = *(byte *)(param_8 + 4) >> 4 & 1;
  *(int *)(param_6 + 0x80) = *(int *)(param_6 + 0x80) + 1;
  local_158 = param_1;
  if ((param_5 != 0.0) || (NAN(param_5))) {
    local_1f0 = (local_c0 - local_d8) * 0.5;
    local_1f8 = (local_c8 - local_e0) * 0.5;
    local_200 = (local_d0 - local_e8) * 0.5;
    local_228 = &local_200;
    local_a8 = *(double *)(param_4 + 4);
    local_b8 = *param_4;
    uStack_b4 = param_4[1];
    uStack_b0 = param_4[2];
    uStack_ac = param_4[3];
    local_208 = local_1f0 + local_d8;
    local_210 = local_1f8 + local_e0;
    local_218 = local_200 + local_e8;
    local_220 = &local_1e8;
    (**(code **)(*param_2 + 0x58))(param_2,&local_218,&local_b8,(double)param_5);
  }
  else {
    (**(code **)(*param_2 + 0x60))(param_2,&local_e8,&local_1e8);
  }
  piVar1 = (int *)(param_6 + 0x80);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_146ef48bd(param_6 + 0x88,param_6 + 8,*(undefined1 *)(param_6 + 0x84));
  }
  if ((local_80 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ef569e FUN_146ef569e body=29 status=ok
// SIG undefined FUN_146ef569e(void)

undefined8 FUN_146ef569e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef56eb FUN_146ef56eb body=848 status=ok
// SIG undefined FUN_146ef56eb(void)

void FUN_146ef56eb(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  float param_5,longlong param_6,undefined2 param_7,undefined4 *param_8,
                  undefined8 param_9)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_238 [32];
  double *local_218;
  undefined ***local_210;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined **local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double local_198;
  double dStack_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined2 local_168;
  byte local_166;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  longlong local_148;
  undefined4 *local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118 [13];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_238;
  dStack_190 = (double)*(float *)(param_1 + 0x54);
  local_198 = (double)*(float *)(param_1 + 0x50);
  local_1a0 = (double)*(float *)(param_1 + 0x4c);
  dStack_1a8 = (double)*(float *)(param_1 + 0x48);
  local_1b0 = (double)*(float *)(param_1 + 0x44);
  local_1b8 = (undefined **)(double)*(float *)(param_1 + 0x40);
  FUN_1400fd046(&local_1b8,&local_b0);
  local_1b8 = &PTR_FUN_149f75210;
  local_1a0 = (double)DAT_14c8464f0;
  local_1b0 = (double)DAT_14c8464e0;
  dStack_1a8 = (double)DAT_14c8464e8;
  local_198 = (double)*param_4;
  dStack_190 = (double)param_4[1];
  local_188 = param_4[2];
  local_170 = ((double)*(float *)(param_1 + 0x54) - (double)*(float *)(param_1 + 0x48)) * 0.5;
  local_178 = ((double)*(float *)(param_1 + 0x50) - (double)*(float *)(param_1 + 0x44)) * 0.5;
  local_180 = ((double)*(float *)(param_1 + 0x4c) - (double)*(float *)(param_1 + 0x40)) * 0.5;
  local_168 = param_7;
  local_160 = DAT_14c8464e0;
  uStack_158 = DAT_14c8464e8;
  local_150 = DAT_14c8464f0;
  local_148 = param_6;
  local_140 = param_8;
  local_138 = *param_8;
  local_134 = param_8[1];
  local_130 = param_8[2];
  local_12c = param_8[3];
  local_120 = param_9;
  puVar3 = local_118;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  local_166 = *(byte *)(param_8 + 4) >> 4 & 1;
  *(int *)(param_6 + 0x80) = *(int *)(param_6 + 0x80) + 1;
  local_128 = param_1;
  if ((param_5 != 0.0) || (NAN(param_5))) {
    local_1c0 = (local_88 - local_a0) * 0.5;
    local_1c8 = (local_90 - local_a8) * 0.5;
    local_1d0 = (local_98 - local_b0) * 0.5;
    local_218 = &local_1d0;
    local_1d8 = param_4[2];
    local_1e8 = *(undefined4 *)param_4;
    uStack_1e4 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_1e0 = *(undefined4 *)(param_4 + 1);
    uStack_1dc = *(undefined4 *)((longlong)param_4 + 0xc);
    local_1f0 = local_1c0 + local_a0;
    local_1f8 = local_1c8 + local_a8;
    local_200 = local_1d0 + local_b0;
    local_210 = &local_1b8;
    (**(code **)(*param_2 + 0x58))(param_2,&local_200,&local_1e8,(double)param_5);
  }
  else {
    (**(code **)(*param_2 + 0x60))(param_2,&local_b0,&local_1b8);
  }
  piVar1 = (int *)(param_6 + 0x80);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_146ef48bd(param_6 + 0x88,param_6 + 8,*(undefined1 *)(param_6 + 0x84));
  }
  if ((local_80 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ef5a3c FUN_146ef5a3c body=29 status=ok
// SIG undefined FUN_146ef5a3c(void)

undefined8 FUN_146ef5a3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef5a89 FUN_146ef5a89 body=771 status=ok
// SIG undefined FUN_146ef5a89(void)

void FUN_146ef5a89(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  float param_5,longlong param_6,undefined2 param_7,undefined4 *param_8,
                  undefined8 param_9)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_238 [32];
  double *local_218;
  undefined ***local_210;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined **local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined2 local_168;
  byte local_166;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  longlong local_148;
  undefined4 *local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118 [13];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1a8 = *(undefined8 *)(param_1 + 0x68);
  local_1b8 = *(undefined ***)(param_1 + 0x58);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x60);
  local_1a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_198 = *(undefined8 *)(param_1 + 0x78);
  local_190 = *(undefined8 *)(param_1 + 0x80);
  FUN_1400fd046(&local_1b8,&local_b0);
  local_1b8 = &PTR_FUN_149f75260;
  local_1a0 = DAT_14c8464f0;
  uStack_1b0 = DAT_14c8464e0;
  local_1a8 = DAT_14c8464e8;
  uStack_198 = *param_4;
  local_190 = param_4[1];
  local_188 = param_4[2];
  local_170 = (*(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68)) * 0.5;
  local_178 = (*(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60)) * 0.5;
  local_180 = (*(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58)) * 0.5;
  local_168 = param_7;
  local_160 = DAT_14c8464e0;
  uStack_158 = DAT_14c8464e8;
  local_150 = DAT_14c8464f0;
  local_148 = param_6;
  local_140 = param_8;
  local_138 = *param_8;
  local_134 = param_8[1];
  local_130 = param_8[2];
  local_12c = param_8[3];
  local_120 = param_9;
  puVar3 = local_118;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  local_166 = *(byte *)(param_8 + 4) >> 4 & 1;
  *(int *)(param_6 + 0x80) = *(int *)(param_6 + 0x80) + 1;
  local_128 = param_1;
  if ((param_5 != 0.0) || (NAN(param_5))) {
    local_1c0 = (local_88 - local_a0) * 0.5;
    local_1c8 = (local_90 - local_a8) * 0.5;
    local_1d0 = (local_98 - local_b0) * 0.5;
    local_218 = &local_1d0;
    local_1d8 = param_4[2];
    local_1e8 = *(undefined4 *)param_4;
    uStack_1e4 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_1e0 = *(undefined4 *)(param_4 + 1);
    uStack_1dc = *(undefined4 *)((longlong)param_4 + 0xc);
    local_1f0 = local_1c0 + local_a0;
    local_1f8 = local_1c8 + local_a8;
    local_200 = local_1d0 + local_b0;
    local_210 = &local_1b8;
    (**(code **)(*param_2 + 0x58))(param_2,&local_200,&local_1e8,(double)param_5);
  }
  else {
    (**(code **)(*param_2 + 0x60))(param_2,&local_b0,&local_1b8);
  }
  piVar1 = (int *)(param_6 + 0x80);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_146ef48bd(param_6 + 0x88,param_6 + 8,*(undefined1 *)(param_6 + 0x84));
  }
  if ((local_80 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ef5d8e FUN_146ef5d8e body=29 status=ok
// SIG undefined FUN_146ef5d8e(void)

undefined8 FUN_146ef5d8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef5ddb FUN_146ef5ddb body=771 status=ok
// SIG undefined FUN_146ef5ddb(void)

void FUN_146ef5ddb(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  float param_5,longlong param_6,undefined2 param_7,undefined4 *param_8,
                  undefined8 param_9)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_238 [32];
  double *local_218;
  undefined ***local_210;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined **local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined2 local_168;
  byte local_166;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  longlong local_148;
  undefined4 *local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118 [13];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1a8 = *(undefined8 *)(param_1 + 0x68);
  local_1b8 = *(undefined ***)(param_1 + 0x58);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x60);
  local_1a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_198 = *(undefined8 *)(param_1 + 0x78);
  local_190 = *(undefined8 *)(param_1 + 0x80);
  FUN_1400fd046(&local_1b8,&local_b0);
  local_1b8 = &PTR_FUN_149f752b0;
  local_1a0 = DAT_14c8464f0;
  uStack_1b0 = DAT_14c8464e0;
  local_1a8 = DAT_14c8464e8;
  uStack_198 = *param_4;
  local_190 = param_4[1];
  local_188 = param_4[2];
  local_170 = (*(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68)) * 0.5;
  local_178 = (*(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60)) * 0.5;
  local_180 = (*(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58)) * 0.5;
  local_168 = param_7;
  local_160 = DAT_14c8464e0;
  uStack_158 = DAT_14c8464e8;
  local_150 = DAT_14c8464f0;
  local_148 = param_6;
  local_140 = param_8;
  local_138 = *param_8;
  local_134 = param_8[1];
  local_130 = param_8[2];
  local_12c = param_8[3];
  local_120 = param_9;
  puVar3 = local_118;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  local_166 = *(byte *)(param_8 + 4) >> 4 & 1;
  *(int *)(param_6 + 0x80) = *(int *)(param_6 + 0x80) + 1;
  local_128 = param_1;
  if ((param_5 != 0.0) || (NAN(param_5))) {
    local_1c0 = (local_88 - local_a0) * 0.5;
    local_1c8 = (local_90 - local_a8) * 0.5;
    local_1d0 = (local_98 - local_b0) * 0.5;
    local_218 = &local_1d0;
    local_1d8 = param_4[2];
    local_1e8 = *(undefined4 *)param_4;
    uStack_1e4 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_1e0 = *(undefined4 *)(param_4 + 1);
    uStack_1dc = *(undefined4 *)((longlong)param_4 + 0xc);
    local_1f0 = local_1c0 + local_a0;
    local_1f8 = local_1c8 + local_a8;
    local_200 = local_1d0 + local_b0;
    local_210 = &local_1b8;
    (**(code **)(*param_2 + 0x58))(param_2,&local_200,&local_1e8,(double)param_5);
  }
  else {
    (**(code **)(*param_2 + 0x60))(param_2,&local_b0,&local_1b8);
  }
  piVar1 = (int *)(param_6 + 0x80);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_146ef48bd(param_6 + 0x88,param_6 + 8,*(undefined1 *)(param_6 + 0x84));
  }
  if ((local_80 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ef60e0 FUN_146ef60e0 body=29 status=ok
// SIG undefined FUN_146ef60e0(void)

undefined8 FUN_146ef60e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef612d FUN_146ef612d body=771 status=ok
// SIG undefined FUN_146ef612d(void)

void FUN_146ef612d(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  float param_5,longlong param_6,undefined2 param_7,undefined4 *param_8,
                  undefined8 param_9)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_238 [32];
  double *local_218;
  undefined ***local_210;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined **local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined2 local_168;
  byte local_166;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  longlong local_148;
  undefined4 *local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118 [13];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1a8 = *(undefined8 *)(param_1 + 0x68);
  local_1b8 = *(undefined ***)(param_1 + 0x58);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x60);
  local_1a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_198 = *(undefined8 *)(param_1 + 0x78);
  local_190 = *(undefined8 *)(param_1 + 0x80);
  FUN_1400fd046(&local_1b8,&local_b0);
  local_1b8 = &PTR_FUN_149f75300;
  local_1a0 = DAT_14c8464f0;
  uStack_1b0 = DAT_14c8464e0;
  local_1a8 = DAT_14c8464e8;
  uStack_198 = *param_4;
  local_190 = param_4[1];
  local_188 = param_4[2];
  local_170 = (*(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68)) * 0.5;
  local_178 = (*(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60)) * 0.5;
  local_180 = (*(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58)) * 0.5;
  local_168 = param_7;
  local_160 = DAT_14c8464e0;
  uStack_158 = DAT_14c8464e8;
  local_150 = DAT_14c8464f0;
  local_148 = param_6;
  local_140 = param_8;
  local_138 = *param_8;
  local_134 = param_8[1];
  local_130 = param_8[2];
  local_12c = param_8[3];
  local_120 = param_9;
  puVar3 = local_118;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  local_166 = *(byte *)(param_8 + 4) >> 4 & 1;
  *(int *)(param_6 + 0x80) = *(int *)(param_6 + 0x80) + 1;
  local_128 = param_1;
  if ((param_5 != 0.0) || (NAN(param_5))) {
    local_1c0 = (local_88 - local_a0) * 0.5;
    local_1c8 = (local_90 - local_a8) * 0.5;
    local_1d0 = (local_98 - local_b0) * 0.5;
    local_218 = &local_1d0;
    local_1d8 = param_4[2];
    local_1e8 = *(undefined4 *)param_4;
    uStack_1e4 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_1e0 = *(undefined4 *)(param_4 + 1);
    uStack_1dc = *(undefined4 *)((longlong)param_4 + 0xc);
    local_1f0 = local_1c0 + local_a0;
    local_1f8 = local_1c8 + local_a8;
    local_200 = local_1d0 + local_b0;
    local_210 = &local_1b8;
    (**(code **)(*param_2 + 0x58))(param_2,&local_200,&local_1e8,(double)param_5);
  }
  else {
    (**(code **)(*param_2 + 0x60))(param_2,&local_b0,&local_1b8);
  }
  piVar1 = (int *)(param_6 + 0x80);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_146ef48bd(param_6 + 0x88,param_6 + 8,*(undefined1 *)(param_6 + 0x84));
  }
  if ((local_80 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ef6432 FUN_146ef6432 body=29 status=ok
// SIG undefined FUN_146ef6432(void)

undefined8 FUN_146ef6432(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef647f FUN_146ef647f body=771 status=ok
// SIG undefined FUN_146ef647f(void)

void FUN_146ef647f(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  float param_5,longlong param_6,undefined2 param_7,undefined4 *param_8,
                  undefined8 param_9)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_238 [32];
  double *local_218;
  undefined ***local_210;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined **local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined2 local_168;
  byte local_166;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  longlong local_148;
  undefined4 *local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118 [13];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1a8 = *(undefined8 *)(param_1 + 0x68);
  local_1b8 = *(undefined ***)(param_1 + 0x58);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x60);
  local_1a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_198 = *(undefined8 *)(param_1 + 0x78);
  local_190 = *(undefined8 *)(param_1 + 0x80);
  FUN_1400fd046(&local_1b8,&local_b0);
  local_1b8 = &PTR_FUN_149f75350;
  local_1a0 = DAT_14c8464f0;
  uStack_1b0 = DAT_14c8464e0;
  local_1a8 = DAT_14c8464e8;
  uStack_198 = *param_4;
  local_190 = param_4[1];
  local_188 = param_4[2];
  local_170 = (*(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68)) * 0.5;
  local_178 = (*(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60)) * 0.5;
  local_180 = (*(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58)) * 0.5;
  local_168 = param_7;
  local_160 = DAT_14c8464e0;
  uStack_158 = DAT_14c8464e8;
  local_150 = DAT_14c8464f0;
  local_148 = param_6;
  local_140 = param_8;
  local_138 = *param_8;
  local_134 = param_8[1];
  local_130 = param_8[2];
  local_12c = param_8[3];
  local_120 = param_9;
  puVar3 = local_118;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  local_166 = *(byte *)(param_8 + 4) >> 4 & 1;
  *(int *)(param_6 + 0x80) = *(int *)(param_6 + 0x80) + 1;
  local_128 = param_1;
  if ((param_5 != 0.0) || (NAN(param_5))) {
    local_1c0 = (local_88 - local_a0) * 0.5;
    local_1c8 = (local_90 - local_a8) * 0.5;
    local_1d0 = (local_98 - local_b0) * 0.5;
    local_218 = &local_1d0;
    local_1d8 = param_4[2];
    local_1e8 = *(undefined4 *)param_4;
    uStack_1e4 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_1e0 = *(undefined4 *)(param_4 + 1);
    uStack_1dc = *(undefined4 *)((longlong)param_4 + 0xc);
    local_1f0 = local_1c0 + local_a0;
    local_1f8 = local_1c8 + local_a8;
    local_200 = local_1d0 + local_b0;
    local_210 = &local_1b8;
    (**(code **)(*param_2 + 0x58))(param_2,&local_200,&local_1e8,(double)param_5);
  }
  else {
    (**(code **)(*param_2 + 0x60))(param_2,&local_b0,&local_1b8);
  }
  piVar1 = (int *)(param_6 + 0x80);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_146ef48bd(param_6 + 0x88,param_6 + 8,*(undefined1 *)(param_6 + 0x84));
  }
  if ((local_80 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ef6784 FUN_146ef6784 body=29 status=ok
// SIG undefined FUN_146ef6784(void)

undefined8 FUN_146ef6784(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef67d2 FUN_146ef67d2 body=29 status=ok
// SIG undefined FUN_146ef67d2(void)

undefined8 FUN_146ef67d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef680e FUN_146ef680e body=29 status=ok
// SIG undefined FUN_146ef680e(void)

undefined8 FUN_146ef680e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef6848 FUN_146ef6848 body=29 status=ok
// SIG undefined FUN_146ef6848(void)

undefined8 FUN_146ef6848(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef6884 FUN_146ef6884 body=29 status=ok
// SIG undefined FUN_146ef6884(void)

undefined8 FUN_146ef6884(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef68be FUN_146ef68be body=29 status=ok
// SIG undefined FUN_146ef68be(void)

undefined8 FUN_146ef68be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef68fa FUN_146ef68fa body=29 status=ok
// SIG undefined FUN_146ef68fa(void)

undefined8 FUN_146ef68fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef6934 FUN_146ef6934 body=29 status=ok
// SIG undefined FUN_146ef6934(void)

undefined8 FUN_146ef6934(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef6970 FUN_146ef6970 body=29 status=ok
// SIG undefined FUN_146ef6970(void)

undefined8 FUN_146ef6970(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef69aa FUN_146ef69aa body=666 status=ok
// SIG undefined FUN_146ef69aa(void)

void FUN_146ef69aa(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  longlong *param_5,longlong param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  longlong **pplVar5;
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  longlong local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong local_178;
  double local_170;
  double local_168;
  double local_160;
  undefined2 local_158;
  byte local_156;
  undefined8 local_150;
  undefined8 uStack_148;
  longlong local_140;
  longlong local_138;
  longlong *local_130;
  longlong local_128;
  undefined4 local_120;
  undefined4 local_11c;
  longlong *local_118;
  longlong local_110;
  undefined8 local_108 [12];
  undefined1 local_a8 [48];
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  puVar3 = param_3;
  pppuVar4 = &local_1a8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pppuVar4 = (undefined **)*puVar3;
    puVar3 = puVar3 + 1;
    pppuVar4 = pppuVar4 + 1;
  }
  (**(code **)(*param_1 + 0x80))(param_1,local_78);
  FUN_1400c6592(local_78,local_a8,&local_1a8);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  uVar1 = *(ushort *)(param_5 + 2);
  if ((uVar1 & 0x40) == 0) {
    local_1a8 = &PTR_FUN_149f75670;
    local_160 = (double)param_1[0x10] - (double)param_1[0xd];
    local_168 = (double)param_1[0xf] - (double)param_1[0xc];
    local_170 = (double)param_1[0xe] - (double)param_1[0xb];
    local_150 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_148 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_140 = DAT_14c8464f0;
    local_130 = param_5;
    local_128 = *param_5;
    local_120 = (undefined4)param_5[1];
    local_11c = *(undefined4 *)((longlong)param_5 + 0xc);
    local_110 = param_6;
    puVar3 = local_108;
    for (lVar2 = 0xc; local_138 = param_4, local_118 = param_1, lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *param_3;
      param_3 = param_3 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  else {
    local_1a8 = &PTR_FUN_149f75620;
    local_160 = (double)param_1[0x10] - (double)param_1[0xd];
    local_168 = (double)param_1[0xf] - (double)param_1[0xc];
    local_170 = (double)param_1[0xe] - (double)param_1[0xb];
    uStack_148 = param_5;
    local_140 = *param_5;
    local_138 = param_5[1];
    local_128 = param_6;
    pplVar5 = &local_118;
    for (lVar2 = 0xc; local_150 = param_4, local_130 = param_1, lVar2 != 0; lVar2 = lVar2 + -1) {
      *pplVar5 = (longlong *)*param_3;
      param_3 = param_3 + 1;
      pplVar5 = pplVar5 + 1;
    }
  }
  local_156 = (byte)uVar1 >> 4 & 1;
  local_160 = local_160 * 0.5;
  local_168 = local_168 * 0.5;
  local_170 = local_170 * 0.5;
  _uStack_180 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  _local_188 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  _uStack_198 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  _local_1a0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  local_158 = 0;
  local_190 = DAT_14c8464f0;
  local_178 = local_190;
  (**(code **)(*param_2 + 0x60))(param_2,local_a8,&local_1a8);
  FUN_140213fc0(param_4);
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ef6c46 FUN_146ef6c46 body=29 status=ok
// SIG undefined FUN_146ef6c46(void)

undefined8 FUN_146ef6c46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef6c82 FUN_146ef6c82 body=29 status=ok
// SIG undefined FUN_146ef6c82(void)

undefined8 FUN_146ef6c82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef6ccc FUN_146ef6ccc body=666 status=ok
// SIG undefined FUN_146ef6ccc(void)

void FUN_146ef6ccc(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  longlong *param_5,longlong param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  longlong **pplVar5;
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  longlong local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong local_178;
  double local_170;
  double local_168;
  double local_160;
  undefined2 local_158;
  byte local_156;
  undefined8 local_150;
  undefined8 uStack_148;
  longlong local_140;
  longlong local_138;
  longlong *local_130;
  longlong local_128;
  undefined4 local_120;
  undefined4 local_11c;
  longlong *local_118;
  longlong local_110;
  undefined8 local_108 [12];
  undefined1 local_a8 [48];
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  puVar3 = param_3;
  pppuVar4 = &local_1a8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pppuVar4 = (undefined **)*puVar3;
    puVar3 = puVar3 + 1;
    pppuVar4 = pppuVar4 + 1;
  }
  (**(code **)(*param_1 + 0x80))(param_1,local_78);
  FUN_1400c6592(local_78,local_a8,&local_1a8);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  uVar1 = *(ushort *)(param_5 + 2);
  if ((uVar1 & 0x40) == 0) {
    local_1a8 = &PTR_FUN_149f75710;
    local_160 = (double)param_1[0x10] - (double)param_1[0xd];
    local_168 = (double)param_1[0xf] - (double)param_1[0xc];
    local_170 = (double)param_1[0xe] - (double)param_1[0xb];
    local_150 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_148 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_140 = DAT_14c8464f0;
    local_130 = param_5;
    local_128 = *param_5;
    local_120 = (undefined4)param_5[1];
    local_11c = *(undefined4 *)((longlong)param_5 + 0xc);
    local_110 = param_6;
    puVar3 = local_108;
    for (lVar2 = 0xc; local_138 = param_4, local_118 = param_1, lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *param_3;
      param_3 = param_3 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  else {
    local_1a8 = &PTR_FUN_149f756c0;
    local_160 = (double)param_1[0x10] - (double)param_1[0xd];
    local_168 = (double)param_1[0xf] - (double)param_1[0xc];
    local_170 = (double)param_1[0xe] - (double)param_1[0xb];
    uStack_148 = param_5;
    local_140 = *param_5;
    local_138 = param_5[1];
    local_128 = param_6;
    pplVar5 = &local_118;
    for (lVar2 = 0xc; local_150 = param_4, local_130 = param_1, lVar2 != 0; lVar2 = lVar2 + -1) {
      *pplVar5 = (longlong *)*param_3;
      param_3 = param_3 + 1;
      pplVar5 = pplVar5 + 1;
    }
  }
  local_156 = (byte)uVar1 >> 4 & 1;
  local_160 = local_160 * 0.5;
  local_168 = local_168 * 0.5;
  local_170 = local_170 * 0.5;
  _uStack_180 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  _local_188 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  _uStack_198 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  _local_1a0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  local_158 = 0;
  local_190 = DAT_14c8464f0;
  local_178 = local_190;
  (**(code **)(*param_2 + 0x60))(param_2,local_a8,&local_1a8);
  FUN_140213fc0(param_4);
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ef6f68 FUN_146ef6f68 body=29 status=ok
// SIG undefined FUN_146ef6f68(void)

undefined8 FUN_146ef6f68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef6fa4 FUN_146ef6fa4 body=29 status=ok
// SIG undefined FUN_146ef6fa4(void)

undefined8 FUN_146ef6fa4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef6fee FUN_146ef6fee body=666 status=ok
// SIG undefined FUN_146ef6fee(void)

void FUN_146ef6fee(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  longlong *param_5,longlong param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  longlong **pplVar5;
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  longlong local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong local_178;
  double local_170;
  double local_168;
  double local_160;
  undefined2 local_158;
  byte local_156;
  undefined8 local_150;
  undefined8 uStack_148;
  longlong local_140;
  longlong local_138;
  longlong *local_130;
  longlong local_128;
  undefined4 local_120;
  undefined4 local_11c;
  longlong *local_118;
  longlong local_110;
  undefined8 local_108 [12];
  undefined1 local_a8 [48];
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  puVar3 = param_3;
  pppuVar4 = &local_1a8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pppuVar4 = (undefined **)*puVar3;
    puVar3 = puVar3 + 1;
    pppuVar4 = pppuVar4 + 1;
  }
  (**(code **)(*param_1 + 0x80))(param_1,local_78);
  FUN_1400c6592(local_78,local_a8,&local_1a8);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  uVar1 = *(ushort *)(param_5 + 2);
  if ((uVar1 & 0x40) == 0) {
    local_1a8 = &PTR_FUN_149f757b0;
    local_160 = (double)param_1[0x10] - (double)param_1[0xd];
    local_168 = (double)param_1[0xf] - (double)param_1[0xc];
    local_170 = (double)param_1[0xe] - (double)param_1[0xb];
    local_150 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_148 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_140 = DAT_14c8464f0;
    local_130 = param_5;
    local_128 = *param_5;
    local_120 = (undefined4)param_5[1];
    local_11c = *(undefined4 *)((longlong)param_5 + 0xc);
    local_110 = param_6;
    puVar3 = local_108;
    for (lVar2 = 0xc; local_138 = param_4, local_118 = param_1, lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *param_3;
      param_3 = param_3 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  else {
    local_1a8 = &PTR_FUN_149f75760;
    local_160 = (double)param_1[0x10] - (double)param_1[0xd];
    local_168 = (double)param_1[0xf] - (double)param_1[0xc];
    local_170 = (double)param_1[0xe] - (double)param_1[0xb];
    uStack_148 = param_5;
    local_140 = *param_5;
    local_138 = param_5[1];
    local_128 = param_6;
    pplVar5 = &local_118;
    for (lVar2 = 0xc; local_150 = param_4, local_130 = param_1, lVar2 != 0; lVar2 = lVar2 + -1) {
      *pplVar5 = (longlong *)*param_3;
      param_3 = param_3 + 1;
      pplVar5 = pplVar5 + 1;
    }
  }
  local_156 = (byte)uVar1 >> 4 & 1;
  local_160 = local_160 * 0.5;
  local_168 = local_168 * 0.5;
  local_170 = local_170 * 0.5;
  _uStack_180 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  _local_188 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  _uStack_198 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  _local_1a0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  local_158 = 0;
  local_190 = DAT_14c8464f0;
  local_178 = local_190;
  (**(code **)(*param_2 + 0x60))(param_2,local_a8,&local_1a8);
  FUN_140213fc0(param_4);
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ef728a FUN_146ef728a body=29 status=ok
// SIG undefined FUN_146ef728a(void)

undefined8 FUN_146ef728a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef72c6 FUN_146ef72c6 body=29 status=ok
// SIG undefined FUN_146ef72c6(void)

undefined8 FUN_146ef72c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef7310 FUN_146ef7310 body=29 status=ok
// SIG undefined FUN_146ef7310(void)

undefined8 FUN_146ef7310(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef734c FUN_146ef734c body=29 status=ok
// SIG undefined FUN_146ef734c(void)

undefined8 FUN_146ef734c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef7386 FUN_146ef7386 body=1016 status=ok
// SIG undefined FUN_146ef7386(void)

void FUN_146ef7386(undefined8 *param_1,longlong *param_2,double *param_3,longlong param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  double dVar1;
  ushort uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  double *pdVar8;
  undefined8 **ppuVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_1b8 [32];
  undefined **local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  double local_160;
  double local_158;
  double local_150;
  undefined2 local_148;
  byte local_146;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 *local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 *local_108 [2];
  double local_f8 [13];
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  dVar4 = *param_3;
  dVar5 = param_3[1];
  dVar10 = (double)param_1[4] * param_3[8];
  dVar11 = (double)param_1[5] * param_3[9];
  dVar3 = (double)param_1[6] * param_3[10];
  dVar6 = param_3[2];
  dVar1 = param_3[3];
  dVar12 = dVar11 * dVar4 - dVar5 * dVar10;
  dVar13 = dVar3 * dVar5 - dVar6 * dVar11;
  dVar14 = dVar10 * dVar6 - dVar4 * dVar3;
  dVar13 = dVar13 + dVar13;
  dVar14 = dVar14 + dVar14;
  dVar12 = dVar12 + dVar12;
  local_90 = (dVar12 * dVar5 - dVar14 * dVar6) + dVar1 * dVar13 + dVar10 + param_3[4];
  local_88 = (dVar6 * dVar13 - dVar4 * dVar12) + param_3[3] * dVar14 + dVar11 + param_3[5];
  local_80 = dVar12 * dVar1 + dVar3 + (dVar14 * dVar4 - dVar13 * dVar5) + param_3[6];
  dVar1 = (double)param_1[2];
  local_68 = dVar1 + local_80;
  local_70 = dVar1 + local_88;
  local_78 = dVar1 + local_90;
  local_80 = local_80 - dVar1;
  local_88 = local_88 - dVar1;
  local_90 = local_90 - dVar1;
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  uVar2 = *(ushort *)(param_5 + 2);
  if ((uVar2 & 0x40) == 0) {
    local_198 = &PTR_FUN_149f758f0;
    dVar1 = (double)param_1[2];
    local_150 = (dVar1 + (double)param_1[6]) - ((double)param_1[6] - dVar1);
    local_158 = (dVar1 + (double)param_1[5]) - ((double)param_1[5] - dVar1);
    local_160 = (dVar1 + (double)param_1[4]) - ((double)param_1[4] - dVar1);
    local_140 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_138 = (undefined8 *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_130 = DAT_14c8464f0;
    local_120 = param_5;
    local_118 = *param_5;
    local_110 = *(undefined4 *)(param_5 + 1);
    local_10c = *(undefined4 *)((longlong)param_5 + 0xc);
    local_108[1] = (undefined8 *)param_6;
    pdVar8 = local_f8;
    for (lVar7 = 0xc; local_128 = param_4, local_108[0] = param_1, lVar7 != 0; lVar7 = lVar7 + -1) {
      *pdVar8 = *param_3;
      param_3 = param_3 + 1;
      pdVar8 = pdVar8 + 1;
    }
  }
  else {
    local_198 = &PTR_FUN_149f758a0;
    dVar1 = (double)param_1[2];
    local_150 = (dVar1 + (double)param_1[6]) - ((double)param_1[6] - dVar1);
    local_158 = (dVar1 + (double)param_1[5]) - ((double)param_1[5] - dVar1);
    local_160 = (dVar1 + (double)param_1[4]) - ((double)param_1[4] - dVar1);
    uStack_138 = param_5;
    local_130 = *param_5;
    local_128 = param_5[1];
    local_118 = param_6;
    ppuVar9 = local_108;
    for (lVar7 = 0xc; local_140 = param_4, local_120 = param_1, lVar7 != 0; lVar7 = lVar7 + -1) {
      *ppuVar9 = (undefined8 *)*param_3;
      param_3 = param_3 + 1;
      ppuVar9 = ppuVar9 + 1;
    }
  }
  local_146 = (byte)uVar2 >> 4 & 1;
  local_150 = local_150 * 0.5;
  local_158 = local_158 * 0.5;
  local_160 = local_160 * 0.5;
  _uStack_170 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  _local_178 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  _uStack_188 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  _local_190 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  local_148 = 0;
  local_180 = DAT_14c8464f0;
  local_168 = local_180;
  (**(code **)(*param_2 + 0x60))(param_2,&local_90,&local_198);
  FUN_146ef7780(param_4);
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ef7780 FUN_146ef7780 body=134 status=ok
// SIG undefined FUN_146ef7780(void)

void FUN_146ef7780(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  
  piVar1 = (int *)(param_1 + 0x40);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(char *)(param_1 + 0x44) == '\x01')) {
    iVar3 = *(int *)(param_1 + 0x1c50);
    *(uint *)(param_1 + 0x1c50) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x1c54) < iVar3 + 1U) {
      FUN_146ef7842(param_1 + 0x48,iVar3);
    }
    lVar10 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x1c48) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x1c48);
    }
    lVar9 = (longlong)iVar3 * 0x38;
    *(undefined8 *)(lVar10 + 0x30 + lVar9) = *(undefined8 *)(param_1 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    puVar2 = (undefined8 *)(lVar10 + 0x20 + lVar9);
    *puVar2 = *(undefined8 *)(param_1 + 0x28);
    puVar2[1] = uVar8;
    puVar2 = (undefined8 *)(lVar10 + 0x10 + lVar9);
    *puVar2 = uVar6;
    puVar2[1] = uVar7;
    *(undefined8 *)(lVar10 + lVar9) = uVar4;
    ((undefined8 *)(lVar10 + lVar9))[1] = uVar5;
  }
  return;
}



// FUNCTION 146ef7806 FUN_146ef7806 body=29 status=ok
// SIG undefined FUN_146ef7806(void)

undefined8 FUN_146ef7806(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef7842 FUN_146ef7842 body=144 status=ok
// SIG undefined FUN_146ef7842(void)

void FUN_146ef7842(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x1c08);
  if (param_2 <= (int)uVar1) {
    iVar6 = 0x80;
    if (0x80 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x80 < *(uint *)(param_1 + 0x1c0c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x38,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar4 >> 3;
      iVar5 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x1c0c) = iVar6;
    FUN_146ef78d4(param_1,param_2,iVar6,0x38);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146ef78d4 FUN_146ef78d4 body=149 status=ok
// SIG undefined FUN_146ef78d4(void)

void FUN_146ef78d4(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x1c00);
  if ((uint)param_3 < 0x81) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x38);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x1c00,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x1c00),param_1,(longlong)param_2 * 0x38);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x1c00,param_2,param_3,param_4);
  return;
}



// FUNCTION 146ef796a FUN_146ef796a body=29 status=ok
// SIG undefined FUN_146ef796a(void)

undefined8 FUN_146ef796a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef79b4 FUN_146ef79b4 body=660 status=ok
// SIG undefined FUN_146ef79b4(void)

void FUN_146ef79b4(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  longlong *param_5,longlong param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  longlong **pplVar5;
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  longlong local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong local_178;
  double local_170;
  double local_168;
  double local_160;
  undefined2 local_158;
  byte local_156;
  undefined8 local_150;
  undefined8 uStack_148;
  longlong local_140;
  longlong local_138;
  longlong *local_130;
  longlong local_128;
  undefined4 local_120;
  undefined4 local_11c;
  longlong *local_118;
  longlong local_110;
  undefined8 local_108 [12];
  undefined1 local_a8 [48];
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  puVar3 = param_3;
  pppuVar4 = &local_1a8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pppuVar4 = (undefined **)*puVar3;
    puVar3 = puVar3 + 1;
    pppuVar4 = pppuVar4 + 1;
  }
  (**(code **)(*param_1 + 0x80))(param_1,local_78);
  FUN_1400c6592(local_78,local_a8,&local_1a8);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  uVar1 = *(ushort *)(param_5 + 2);
  if ((uVar1 & 0x40) == 0) {
    local_1a8 = &PTR_FUN_149f75990;
    local_160 = (double)param_1[9] - (double)param_1[6];
    local_168 = (double)param_1[8] - (double)param_1[5];
    local_170 = (double)param_1[7] - (double)param_1[4];
    local_150 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_148 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_140 = DAT_14c8464f0;
    local_130 = param_5;
    local_128 = *param_5;
    local_120 = (undefined4)param_5[1];
    local_11c = *(undefined4 *)((longlong)param_5 + 0xc);
    local_110 = param_6;
    puVar3 = local_108;
    for (lVar2 = 0xc; local_138 = param_4, local_118 = param_1, lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *param_3;
      param_3 = param_3 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  else {
    local_1a8 = &PTR_FUN_149f75940;
    local_160 = (double)param_1[9] - (double)param_1[6];
    local_168 = (double)param_1[8] - (double)param_1[5];
    local_170 = (double)param_1[7] - (double)param_1[4];
    uStack_148 = param_5;
    local_140 = *param_5;
    local_138 = param_5[1];
    local_128 = param_6;
    pplVar5 = &local_118;
    for (lVar2 = 0xc; local_150 = param_4, local_130 = param_1, lVar2 != 0; lVar2 = lVar2 + -1) {
      *pplVar5 = (longlong *)*param_3;
      param_3 = param_3 + 1;
      pplVar5 = pplVar5 + 1;
    }
  }
  local_156 = (byte)uVar1 >> 4 & 1;
  local_160 = local_160 * 0.5;
  local_168 = local_168 * 0.5;
  local_170 = local_170 * 0.5;
  _uStack_180 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  _local_188 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  _uStack_198 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  _local_1a0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  local_158 = 0;
  local_190 = DAT_14c8464f0;
  local_178 = local_190;
  (**(code **)(*param_2 + 0x60))(param_2,local_a8,&local_1a8);
  FUN_146ef7780(param_4);
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ef7c4a FUN_146ef7c4a body=29 status=ok
// SIG undefined FUN_146ef7c4a(void)

undefined8 FUN_146ef7c4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef7c86 FUN_146ef7c86 body=29 status=ok
// SIG undefined FUN_146ef7c86(void)

undefined8 FUN_146ef7c86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef7cd0 FUN_146ef7cd0 body=669 status=ok
// SIG undefined FUN_146ef7cd0(void)

void FUN_146ef7cd0(undefined8 *param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  undefined8 **ppuVar5;
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  double local_170;
  double local_168;
  double local_160;
  undefined2 local_158;
  byte local_156;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 *local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 *local_118 [14];
  undefined1 local_a8 [48];
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  puVar3 = param_3;
  pppuVar4 = &local_1a8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pppuVar4 = (undefined **)*puVar3;
    puVar3 = puVar3 + 1;
    pppuVar4 = pppuVar4 + 1;
  }
  FUN_144b01956(param_1,local_a8);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  if ((*(byte *)(param_5 + 2) & 0x40) == 0) {
    local_1a8 = &PTR_FUN_149f75a30;
    local_1a0 = (undefined4)DAT_14c8464e0;
    uStack_19c = DAT_14c8464e0._4_4_;
    uStack_198 = (undefined4)DAT_14c8464e8;
    uStack_194 = DAT_14c8464e8._4_4_;
    local_190 = DAT_14c8464f0;
    local_188 = (undefined4)DAT_14c8464e0;
    uStack_184 = DAT_14c8464e0._4_4_;
    uStack_180 = (undefined4)DAT_14c8464e8;
    uStack_17c = DAT_14c8464e8._4_4_;
    local_178 = DAT_14c8464f0;
    FUN_144b0186e(param_1,&local_78);
    local_160 = local_50 - local_68;
    local_168 = local_58 - local_70;
    local_170 = local_60 - local_78;
    local_150 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_148 = (undefined8 *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_140 = DAT_14c8464f0;
    local_130 = param_5;
    local_128 = *param_5;
    local_120 = *(undefined4 *)(param_5 + 1);
    local_11c = *(undefined4 *)((longlong)param_5 + 0xc);
    local_118[1] = (undefined8 *)param_6;
    ppuVar5 = local_118 + 2;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *ppuVar5 = (undefined8 *)*param_3;
      param_3 = param_3 + 1;
      ppuVar5 = ppuVar5 + 1;
    }
    bVar1 = *(byte *)(param_5 + 2);
    local_138 = param_4;
    local_118[0] = param_1;
  }
  else {
    local_1a8 = &PTR_FUN_149f759e0;
    local_1a0 = (undefined4)DAT_14c8464e0;
    uStack_19c = DAT_14c8464e0._4_4_;
    uStack_198 = (undefined4)DAT_14c8464e8;
    uStack_194 = DAT_14c8464e8._4_4_;
    local_190 = DAT_14c8464f0;
    local_188 = (undefined4)DAT_14c8464e0;
    uStack_184 = DAT_14c8464e0._4_4_;
    uStack_180 = (undefined4)DAT_14c8464e8;
    uStack_17c = DAT_14c8464e8._4_4_;
    local_178 = DAT_14c8464f0;
    FUN_144b0186e(param_1,&local_78);
    local_160 = local_50 - local_68;
    local_168 = local_58 - local_70;
    local_170 = local_60 - local_78;
    uStack_148 = param_5;
    local_140 = *param_5;
    local_138 = param_5[1];
    local_128 = param_6;
    ppuVar5 = local_118;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *ppuVar5 = (undefined8 *)*param_3;
      param_3 = param_3 + 1;
      ppuVar5 = ppuVar5 + 1;
    }
    bVar1 = *(byte *)(param_5 + 2);
    local_150 = param_4;
    local_130 = param_1;
  }
  local_156 = bVar1 >> 4 & 1;
  local_160 = local_160 * 0.5;
  local_168 = local_168 * 0.5;
  local_170 = local_170 * 0.5;
  local_158 = 0;
  (**(code **)(*param_2 + 0x60))(param_2,local_a8,&local_1a8);
  FUN_146ef7780(param_4);
  if ((local_48 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ef7f6e FUN_146ef7f6e body=29 status=ok
// SIG undefined FUN_146ef7f6e(void)

undefined8 FUN_146ef7f6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef7faa FUN_146ef7faa body=29 status=ok
// SIG undefined FUN_146ef7faa(void)

undefined8 FUN_146ef7faa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef7ff4 FUN_146ef7ff4 body=702 status=ok
// SIG undefined FUN_146ef7ff4(void)

void FUN_146ef7ff4(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  longlong *param_5,longlong param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  longlong **pplVar5;
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  longlong local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong local_178;
  double local_170;
  double local_168;
  double local_160;
  undefined2 local_158;
  byte local_156;
  undefined8 local_150;
  undefined8 uStack_148;
  longlong local_140;
  longlong local_138;
  longlong *local_130;
  longlong local_128;
  undefined4 local_120;
  undefined4 local_11c;
  longlong *local_118;
  longlong local_110;
  undefined8 local_108 [12];
  undefined1 local_a8 [48];
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  puVar3 = param_3;
  pppuVar4 = &local_1a8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pppuVar4 = (undefined **)*puVar3;
    puVar3 = puVar3 + 1;
    pppuVar4 = pppuVar4 + 1;
  }
  (**(code **)(*param_1 + 0x80))(param_1,local_78);
  FUN_1400c6592(local_78,local_a8,&local_1a8);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  uVar1 = *(ushort *)(param_5 + 2);
  if ((uVar1 & 0x40) == 0) {
    local_1a8 = &PTR_FUN_149f75ad0;
    local_160 = (double)*(float *)((longlong)param_1 + 0x54) - (double)*(float *)(param_1 + 9);
    local_168 = (double)*(float *)(param_1 + 10) - (double)*(float *)((longlong)param_1 + 0x44);
    local_170 = (double)*(float *)((longlong)param_1 + 0x4c) - (double)*(float *)(param_1 + 8);
    local_150 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_148 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_140 = DAT_14c8464f0;
    local_130 = param_5;
    local_128 = *param_5;
    local_120 = (undefined4)param_5[1];
    local_11c = *(undefined4 *)((longlong)param_5 + 0xc);
    local_110 = param_6;
    puVar3 = local_108;
    for (lVar2 = 0xc; local_138 = param_4, local_118 = param_1, lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *param_3;
      param_3 = param_3 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  else {
    local_1a8 = &PTR_FUN_149f75a80;
    local_160 = (double)*(float *)((longlong)param_1 + 0x54) - (double)*(float *)(param_1 + 9);
    local_168 = (double)*(float *)(param_1 + 10) - (double)*(float *)((longlong)param_1 + 0x44);
    local_170 = (double)*(float *)((longlong)param_1 + 0x4c) - (double)*(float *)(param_1 + 8);
    uStack_148 = param_5;
    local_140 = *param_5;
    local_138 = param_5[1];
    local_128 = param_6;
    pplVar5 = &local_118;
    for (lVar2 = 0xc; local_150 = param_4, local_130 = param_1, lVar2 != 0; lVar2 = lVar2 + -1) {
      *pplVar5 = (longlong *)*param_3;
      param_3 = param_3 + 1;
      pplVar5 = pplVar5 + 1;
    }
  }
  local_156 = (byte)uVar1 >> 4 & 1;
  local_160 = local_160 * 0.5;
  local_168 = local_168 * 0.5;
  local_170 = local_170 * 0.5;
  _uStack_180 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  _local_188 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  _uStack_198 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  _local_1a0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  local_158 = 0;
  local_190 = DAT_14c8464f0;
  local_178 = local_190;
  (**(code **)(*param_2 + 0x60))(param_2,local_a8,&local_1a8);
  FUN_146ef7780(param_4);
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ef82b4 FUN_146ef82b4 body=29 status=ok
// SIG undefined FUN_146ef82b4(void)

undefined8 FUN_146ef82b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef82f0 FUN_146ef82f0 body=29 status=ok
// SIG undefined FUN_146ef82f0(void)

undefined8 FUN_146ef82f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef833a FUN_146ef833a body=666 status=ok
// SIG undefined FUN_146ef833a(void)

void FUN_146ef833a(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  longlong *param_5,longlong param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  longlong **pplVar5;
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  longlong local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong local_178;
  double local_170;
  double local_168;
  double local_160;
  undefined2 local_158;
  byte local_156;
  undefined8 local_150;
  undefined8 uStack_148;
  longlong local_140;
  longlong local_138;
  longlong *local_130;
  longlong local_128;
  undefined4 local_120;
  undefined4 local_11c;
  longlong *local_118;
  longlong local_110;
  undefined8 local_108 [12];
  undefined1 local_a8 [48];
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  puVar3 = param_3;
  pppuVar4 = &local_1a8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pppuVar4 = (undefined **)*puVar3;
    puVar3 = puVar3 + 1;
    pppuVar4 = pppuVar4 + 1;
  }
  (**(code **)(*param_1 + 0x80))(param_1,local_78);
  FUN_1400c6592(local_78,local_a8,&local_1a8);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  uVar1 = *(ushort *)(param_5 + 2);
  if ((uVar1 & 0x40) == 0) {
    local_1a8 = &PTR_FUN_149f75b70;
    local_160 = (double)param_1[0x10] - (double)param_1[0xd];
    local_168 = (double)param_1[0xf] - (double)param_1[0xc];
    local_170 = (double)param_1[0xe] - (double)param_1[0xb];
    local_150 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_148 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_140 = DAT_14c8464f0;
    local_130 = param_5;
    local_128 = *param_5;
    local_120 = (undefined4)param_5[1];
    local_11c = *(undefined4 *)((longlong)param_5 + 0xc);
    local_110 = param_6;
    puVar3 = local_108;
    for (lVar2 = 0xc; local_138 = param_4, local_118 = param_1, lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *param_3;
      param_3 = param_3 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  else {
    local_1a8 = &PTR_FUN_149f75b20;
    local_160 = (double)param_1[0x10] - (double)param_1[0xd];
    local_168 = (double)param_1[0xf] - (double)param_1[0xc];
    local_170 = (double)param_1[0xe] - (double)param_1[0xb];
    uStack_148 = param_5;
    local_140 = *param_5;
    local_138 = param_5[1];
    local_128 = param_6;
    pplVar5 = &local_118;
    for (lVar2 = 0xc; local_150 = param_4, local_130 = param_1, lVar2 != 0; lVar2 = lVar2 + -1) {
      *pplVar5 = (longlong *)*param_3;
      param_3 = param_3 + 1;
      pplVar5 = pplVar5 + 1;
    }
  }
  local_156 = (byte)uVar1 >> 4 & 1;
  local_160 = local_160 * 0.5;
  local_168 = local_168 * 0.5;
  local_170 = local_170 * 0.5;
  _uStack_180 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  _local_188 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  _uStack_198 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  _local_1a0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  local_158 = 0;
  local_190 = DAT_14c8464f0;
  local_178 = local_190;
  (**(code **)(*param_2 + 0x60))(param_2,local_a8,&local_1a8);
  FUN_146ef7780(param_4);
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ef85d6 FUN_146ef85d6 body=29 status=ok
// SIG undefined FUN_146ef85d6(void)

undefined8 FUN_146ef85d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef8612 FUN_146ef8612 body=29 status=ok
// SIG undefined FUN_146ef8612(void)

undefined8 FUN_146ef8612(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef865c FUN_146ef865c body=666 status=ok
// SIG undefined FUN_146ef865c(void)

void FUN_146ef865c(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  longlong *param_5,longlong param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  longlong **pplVar5;
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  longlong local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong local_178;
  double local_170;
  double local_168;
  double local_160;
  undefined2 local_158;
  byte local_156;
  undefined8 local_150;
  undefined8 uStack_148;
  longlong local_140;
  longlong local_138;
  longlong *local_130;
  longlong local_128;
  undefined4 local_120;
  undefined4 local_11c;
  longlong *local_118;
  longlong local_110;
  undefined8 local_108 [12];
  undefined1 local_a8 [48];
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  puVar3 = param_3;
  pppuVar4 = &local_1a8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pppuVar4 = (undefined **)*puVar3;
    puVar3 = puVar3 + 1;
    pppuVar4 = pppuVar4 + 1;
  }
  (**(code **)(*param_1 + 0x80))(param_1,local_78);
  FUN_1400c6592(local_78,local_a8,&local_1a8);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  uVar1 = *(ushort *)(param_5 + 2);
  if ((uVar1 & 0x40) == 0) {
    local_1a8 = &PTR_FUN_149f75c10;
    local_160 = (double)param_1[0x10] - (double)param_1[0xd];
    local_168 = (double)param_1[0xf] - (double)param_1[0xc];
    local_170 = (double)param_1[0xe] - (double)param_1[0xb];
    local_150 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_148 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_140 = DAT_14c8464f0;
    local_130 = param_5;
    local_128 = *param_5;
    local_120 = (undefined4)param_5[1];
    local_11c = *(undefined4 *)((longlong)param_5 + 0xc);
    local_110 = param_6;
    puVar3 = local_108;
    for (lVar2 = 0xc; local_138 = param_4, local_118 = param_1, lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *param_3;
      param_3 = param_3 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  else {
    local_1a8 = &PTR_FUN_149f75bc0;
    local_160 = (double)param_1[0x10] - (double)param_1[0xd];
    local_168 = (double)param_1[0xf] - (double)param_1[0xc];
    local_170 = (double)param_1[0xe] - (double)param_1[0xb];
    uStack_148 = param_5;
    local_140 = *param_5;
    local_138 = param_5[1];
    local_128 = param_6;
    pplVar5 = &local_118;
    for (lVar2 = 0xc; local_150 = param_4, local_130 = param_1, lVar2 != 0; lVar2 = lVar2 + -1) {
      *pplVar5 = (longlong *)*param_3;
      param_3 = param_3 + 1;
      pplVar5 = pplVar5 + 1;
    }
  }
  local_156 = (byte)uVar1 >> 4 & 1;
  local_160 = local_160 * 0.5;
  local_168 = local_168 * 0.5;
  local_170 = local_170 * 0.5;
  _uStack_180 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  _local_188 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  _uStack_198 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  _local_1a0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  local_158 = 0;
  local_190 = DAT_14c8464f0;
  local_178 = local_190;
  (**(code **)(*param_2 + 0x60))(param_2,local_a8,&local_1a8);
  FUN_146ef7780(param_4);
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ef88f8 FUN_146ef88f8 body=29 status=ok
// SIG undefined FUN_146ef88f8(void)

undefined8 FUN_146ef88f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef8934 FUN_146ef8934 body=29 status=ok
// SIG undefined FUN_146ef8934(void)

undefined8 FUN_146ef8934(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef897e FUN_146ef897e body=666 status=ok
// SIG undefined FUN_146ef897e(void)

void FUN_146ef897e(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  longlong *param_5,longlong param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  longlong **pplVar5;
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  longlong local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong local_178;
  double local_170;
  double local_168;
  double local_160;
  undefined2 local_158;
  byte local_156;
  undefined8 local_150;
  undefined8 uStack_148;
  longlong local_140;
  longlong local_138;
  longlong *local_130;
  longlong local_128;
  undefined4 local_120;
  undefined4 local_11c;
  longlong *local_118;
  longlong local_110;
  undefined8 local_108 [12];
  undefined1 local_a8 [48];
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  puVar3 = param_3;
  pppuVar4 = &local_1a8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pppuVar4 = (undefined **)*puVar3;
    puVar3 = puVar3 + 1;
    pppuVar4 = pppuVar4 + 1;
  }
  (**(code **)(*param_1 + 0x80))(param_1,local_78);
  FUN_1400c6592(local_78,local_a8,&local_1a8);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  uVar1 = *(ushort *)(param_5 + 2);
  if ((uVar1 & 0x40) == 0) {
    local_1a8 = &PTR_FUN_149f75cb0;
    local_160 = (double)param_1[0x10] - (double)param_1[0xd];
    local_168 = (double)param_1[0xf] - (double)param_1[0xc];
    local_170 = (double)param_1[0xe] - (double)param_1[0xb];
    local_150 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_148 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_140 = DAT_14c8464f0;
    local_130 = param_5;
    local_128 = *param_5;
    local_120 = (undefined4)param_5[1];
    local_11c = *(undefined4 *)((longlong)param_5 + 0xc);
    local_110 = param_6;
    puVar3 = local_108;
    for (lVar2 = 0xc; local_138 = param_4, local_118 = param_1, lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *param_3;
      param_3 = param_3 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  else {
    local_1a8 = &PTR_FUN_149f75c60;
    local_160 = (double)param_1[0x10] - (double)param_1[0xd];
    local_168 = (double)param_1[0xf] - (double)param_1[0xc];
    local_170 = (double)param_1[0xe] - (double)param_1[0xb];
    uStack_148 = param_5;
    local_140 = *param_5;
    local_138 = param_5[1];
    local_128 = param_6;
    pplVar5 = &local_118;
    for (lVar2 = 0xc; local_150 = param_4, local_130 = param_1, lVar2 != 0; lVar2 = lVar2 + -1) {
      *pplVar5 = (longlong *)*param_3;
      param_3 = param_3 + 1;
      pplVar5 = pplVar5 + 1;
    }
  }
  local_156 = (byte)uVar1 >> 4 & 1;
  local_160 = local_160 * 0.5;
  local_168 = local_168 * 0.5;
  local_170 = local_170 * 0.5;
  _uStack_180 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  _local_188 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  _uStack_198 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  _local_1a0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  local_158 = 0;
  local_190 = DAT_14c8464f0;
  local_178 = local_190;
  (**(code **)(*param_2 + 0x60))(param_2,local_a8,&local_1a8);
  FUN_146ef7780(param_4);
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ef8c1a FUN_146ef8c1a body=29 status=ok
// SIG undefined FUN_146ef8c1a(void)

undefined8 FUN_146ef8c1a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef8c56 FUN_146ef8c56 body=29 status=ok
// SIG undefined FUN_146ef8c56(void)

undefined8 FUN_146ef8c56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef8ca0 FUN_146ef8ca0 body=666 status=ok
// SIG undefined FUN_146ef8ca0(void)

void FUN_146ef8ca0(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  longlong *param_5,longlong param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  longlong **pplVar5;
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  longlong local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong local_178;
  double local_170;
  double local_168;
  double local_160;
  undefined2 local_158;
  byte local_156;
  undefined8 local_150;
  undefined8 uStack_148;
  longlong local_140;
  longlong local_138;
  longlong *local_130;
  longlong local_128;
  undefined4 local_120;
  undefined4 local_11c;
  longlong *local_118;
  longlong local_110;
  undefined8 local_108 [12];
  undefined1 local_a8 [48];
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  puVar3 = param_3;
  pppuVar4 = &local_1a8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pppuVar4 = (undefined **)*puVar3;
    puVar3 = puVar3 + 1;
    pppuVar4 = pppuVar4 + 1;
  }
  (**(code **)(*param_1 + 0x80))(param_1,local_78);
  FUN_1400c6592(local_78,local_a8,&local_1a8);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  uVar1 = *(ushort *)(param_5 + 2);
  if ((uVar1 & 0x40) == 0) {
    local_1a8 = &PTR_FUN_149f75d50;
    local_160 = (double)param_1[0x10] - (double)param_1[0xd];
    local_168 = (double)param_1[0xf] - (double)param_1[0xc];
    local_170 = (double)param_1[0xe] - (double)param_1[0xb];
    local_150 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_148 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_140 = DAT_14c8464f0;
    local_130 = param_5;
    local_128 = *param_5;
    local_120 = (undefined4)param_5[1];
    local_11c = *(undefined4 *)((longlong)param_5 + 0xc);
    local_110 = param_6;
    puVar3 = local_108;
    for (lVar2 = 0xc; local_138 = param_4, local_118 = param_1, lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *param_3;
      param_3 = param_3 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  else {
    local_1a8 = &PTR_FUN_149f75d00;
    local_160 = (double)param_1[0x10] - (double)param_1[0xd];
    local_168 = (double)param_1[0xf] - (double)param_1[0xc];
    local_170 = (double)param_1[0xe] - (double)param_1[0xb];
    uStack_148 = param_5;
    local_140 = *param_5;
    local_138 = param_5[1];
    local_128 = param_6;
    pplVar5 = &local_118;
    for (lVar2 = 0xc; local_150 = param_4, local_130 = param_1, lVar2 != 0; lVar2 = lVar2 + -1) {
      *pplVar5 = (longlong *)*param_3;
      param_3 = param_3 + 1;
      pplVar5 = pplVar5 + 1;
    }
  }
  local_156 = (byte)uVar1 >> 4 & 1;
  local_160 = local_160 * 0.5;
  local_168 = local_168 * 0.5;
  local_170 = local_170 * 0.5;
  _uStack_180 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  _local_188 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  _uStack_198 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  _local_1a0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  local_158 = 0;
  local_190 = DAT_14c8464f0;
  local_178 = local_190;
  (**(code **)(*param_2 + 0x60))(param_2,local_a8,&local_1a8);
  FUN_146ef7780(param_4);
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ef8f3c FUN_146ef8f3c body=29 status=ok
// SIG undefined FUN_146ef8f3c(void)

undefined8 FUN_146ef8f3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef8f78 FUN_146ef8f78 body=29 status=ok
// SIG undefined FUN_146ef8f78(void)

undefined8 FUN_146ef8f78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef8fc2 FUN_146ef8fc2 body=145 status=ok
// SIG undefined FUN_146ef8fc2(void)

void FUN_146ef8fc2(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x4000);
  if ((uint)param_3 < 0x81) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 7);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x4000,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x4000),param_1,(longlong)param_2 << 7);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x4000,param_2,param_3,param_4);
  return;
}



// FUNCTION 146ef9054 FUN_146ef9054 body=110 status=ok
// SIG undefined FUN_146ef9054(void)

void FUN_146ef9054(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20;
  undefined1 local_1f;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0);
  local_28 = param_2;
  local_20 = param_3;
  local_1f = param_4;
  local_18 = param_1;
  if (lVar1 != 0) {
    FUN_14093365e(lVar1,*(undefined8 *)(param_1 + 0x48));
  }
  FUN_146ef90c4(&local_28,*(undefined8 *)(param_1 + 0x48));
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ef90c4 FUN_146ef90c4 body=222 status=ok
// SIG undefined FUN_146ef90c4(void)

void FUN_146ef90c4(undefined8 *param_1,longlong *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  double *pdVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((param_2 != (longlong *)0x0) && (1 < *(byte *)((longlong)param_2 + 0xc))) {
    lVar9 = *param_2;
    lVar8 = (longlong)(int)param_2[1];
    cVar5 = *(char *)(*(longlong *)(lVar9 + 0x2c0) + 0xb + lVar8 * 0x10);
    if ((cVar5 == '\x04') || (cVar5 == '\x01')) {
      if (*(char *)((longlong)param_1 + 9) == '\x01') {
        FUN_14091cfa4(param_1[2],param_2,4,CONCAT71((int7)((ulonglong)(lVar8 * 0x10) >> 8),1),1);
        lVar9 = *param_2;
        lVar8 = (longlong)(int)param_2[1];
      }
      pdVar6 = (double *)*param_1;
      if (*(char *)(param_1 + 1) == '\x01') {
        lVar9 = *(longlong *)(lVar9 + 0x338);
        *(double *)(lVar9 + 0x10 + lVar8 * 0x18) = pdVar6[2];
        dVar2 = pdVar6[1];
        pdVar1 = (double *)(lVar9 + lVar8 * 0x18);
        *pdVar1 = *pdVar6;
        pdVar1[1] = dVar2;
      }
      else {
        lVar7 = *(longlong *)(lVar9 + 0x338);
        dVar2 = *(double *)(*(longlong *)(lVar9 + 0x3c8) + lVar8 * 8);
        dVar3 = pdVar6[2];
        dVar4 = pdVar6[1];
        *(double *)(lVar7 + lVar8 * 0x18) = dVar2 * *pdVar6;
        *(double *)(lVar7 + 8 + lVar8 * 0x18) = dVar4 * dVar2;
        *(double *)(lVar7 + 0x10 + lVar8 * 0x18) = dVar3 * dVar2;
      }
    }
  }
  return;
}



// FUNCTION 146ef91a2 FUN_146ef91a2 body=110 status=ok
// SIG undefined FUN_146ef91a2(void)

void FUN_146ef91a2(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20;
  undefined1 local_1f;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0);
  local_28 = param_2;
  local_20 = param_3;
  local_1f = param_4;
  local_18 = param_1;
  if (lVar1 != 0) {
    FUN_14093365e(lVar1,*(undefined8 *)(param_1 + 0x48));
  }
  FUN_146ef9212(&local_28,*(undefined8 *)(param_1 + 0x48));
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ef9212 FUN_146ef9212 body=718 status=ok
// SIG undefined FUN_146ef9212(void)

void FUN_146ef9212(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  double *pdVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  double local_100;
  double local_f8;
  double local_f0;
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
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((param_2 != (longlong *)0x0) && (1 < *(byte *)((longlong)param_2 + 0xc))) {
    cVar3 = *(char *)(*(longlong *)(*param_2 + 0x2c0) + 0xb + (longlong)(int)param_2[1] * 0x10);
    if ((cVar3 == '\x04') || (cVar3 == '\x01')) {
      if (*(char *)((longlong)param_1 + 9) == '\x01') {
        local_138 = 1;
        FUN_14091cfa4(param_1[2],param_2,4,1);
      }
      if ((char)param_1[1] == '\x01') {
        puVar4 = (undefined8 *)*param_1;
        lVar16 = param_2[1];
        lVar5 = *(longlong *)(*param_2 + 0x350);
        *(undefined8 *)(lVar5 + 0x10 + (longlong)(int)lVar16 * 0x18) = puVar4[2];
        uVar10 = puVar4[1];
        puVar1 = (undefined8 *)(lVar5 + (longlong)(int)lVar16 * 0x18);
        *puVar1 = *puVar4;
        puVar1[1] = uVar10;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_158);
      }
      lVar5 = *param_2;
      lVar15 = (longlong)(int)param_2[1];
      lVar16 = *(longlong *)(lVar5 + 0x380);
      local_f0 = (double)*(float *)(lVar16 + 8 + lVar15 * 0xc);
      local_f8 = (double)*(float *)(lVar16 + 4 + lVar15 * 0xc);
      local_100 = (double)*(float *)(lVar16 + lVar15 * 0xc);
      lVar16 = *(longlong *)(lVar5 + 0x48);
      lVar17 = lVar15 * 0x10;
      dVar6 = (double)*(float *)(lVar16 + 0xc + lVar17);
      dVar18 = (double)*(float *)(lVar16 + 8 + lVar17);
      dVar8 = (double)*(float *)(lVar16 + 4 + lVar17);
      dVar19 = (double)*(float *)(lVar16 + lVar17);
      pdVar2 = (double *)(*(longlong *)(lVar5 + 0x3f8) + lVar15 * 0x20);
      dVar11 = *pdVar2;
      dVar12 = pdVar2[1];
      pdVar2 = (double *)(*(longlong *)(lVar5 + 0x3f8) + 0x10 + lVar15 * 0x20);
      dVar13 = *pdVar2;
      dVar14 = pdVar2[1];
      dVar9 = dVar11 * dVar18 * 1.0 + dVar14 * dVar8 + dVar19 * dVar13 * -1.0 + dVar6 * dVar12;
      dVar7 = dVar13 * dVar18 * -1.0 + ((dVar19 * dVar11 * -1.0 + dVar6 * dVar14) - dVar8 * dVar12);
      local_128._8_4_ = SUB84(dVar9,0);
      local_128._0_8_ =
           dVar12 * dVar18 * -1.0 + dVar13 * dVar8 + dVar19 * dVar14 * 1.0 + dVar6 * dVar11;
      local_128._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      local_118._8_4_ = SUB84(dVar7,0);
      local_118._0_8_ =
           dVar14 * dVar18 * 1.0 + ((dVar19 * dVar12 * 1.0 + dVar6 * dVar13) - dVar8 * dVar11);
      local_118._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      FUN_1409357f8(&local_e8);
      pdVar2 = (double *)*param_1;
      dVar6 = *pdVar2;
      dVar7 = pdVar2[1];
      dVar8 = pdVar2[2];
      lVar16 = (longlong)(int)param_2[1];
      lVar5 = *(longlong *)(*param_2 + 0x350);
      *(double *)(lVar5 + lVar16 * 0x18) = dVar8 * local_d8 + dVar6 * local_e8 + dVar7 * local_e0;
      *(double *)(lVar5 + 8 + lVar16 * 0x18) =
           local_b8 * dVar8 + local_c8 * dVar6 + local_c0 * dVar7;
      *(double *)(lVar5 + 0x10 + lVar16 * 0x18) =
           local_98 * dVar8 + local_a8 * dVar6 + local_a0 * dVar7;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ef94e6 FUN_146ef94e6 body=623 status=ok
// SIG undefined FUN_146ef94e6(void)

double * FUN_146ef94e6(undefined8 param_1,double *param_2,longlong *param_3)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_148 [32];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  double local_100;
  double local_f8;
  double local_f0;
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
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  dVar11 = 0.0;
  if (param_3 == (longlong *)0x0) {
    dVar14 = 0.0;
    dVar12 = 0.0;
  }
  else {
    dVar14 = 0.0;
    dVar12 = 0.0;
    if (1 < *(byte *)((longlong)param_3 + 0xc)) {
      lVar3 = *param_3;
      lVar8 = (longlong)(int)param_3[1];
      lVar9 = *(longlong *)(lVar3 + 0x368);
      local_f0 = (double)*(float *)(lVar9 + 8 + lVar8 * 0xc);
      local_f8 = (double)*(float *)(lVar9 + 4 + lVar8 * 0xc);
      local_100 = (double)*(float *)(lVar9 + lVar8 * 0xc);
      lVar9 = *(longlong *)(lVar3 + 0x48);
      lVar10 = lVar8 * 0x10;
      dVar11 = (double)*(float *)(lVar9 + 0xc + lVar10);
      dVar13 = (double)*(float *)(lVar9 + 8 + lVar10);
      dVar14 = (double)*(float *)(lVar9 + 4 + lVar10);
      dVar15 = (double)*(float *)(lVar9 + lVar10);
      pdVar1 = (double *)(*(longlong *)(lVar3 + 0x3f8) + lVar8 * 0x20);
      dVar2 = *pdVar1;
      dVar5 = pdVar1[1];
      pdVar1 = (double *)(*(longlong *)(lVar3 + 0x3f8) + 0x10 + lVar8 * 0x20);
      dVar6 = *pdVar1;
      dVar7 = pdVar1[1];
      dVar4 = dVar2 * dVar13 * 1.0 + dVar7 * dVar14 + dVar15 * dVar6 * -1.0 + dVar11 * dVar5;
      dVar12 = dVar6 * dVar13 * -1.0 + ((dVar15 * dVar2 * -1.0 + dVar11 * dVar7) - dVar14 * dVar5);
      local_128._8_4_ = SUB84(dVar4,0);
      local_128._0_8_ =
           dVar5 * dVar13 * -1.0 + dVar6 * dVar14 + dVar15 * dVar7 * 1.0 + dVar11 * dVar2;
      local_128._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      local_118._8_4_ = SUB84(dVar12,0);
      local_118._0_8_ =
           dVar7 * dVar13 * 1.0 + ((dVar15 * dVar5 * 1.0 + dVar11 * dVar6) - dVar14 * dVar2);
      local_118._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      FUN_1409357f8(&local_e8);
      lVar9 = (longlong)(int)param_3[1];
      lVar3 = *(longlong *)(*param_3 + 0x350);
      dVar11 = *(double *)(lVar3 + lVar9 * 0x18);
      dVar4 = *(double *)(lVar3 + 8 + lVar9 * 0x18);
      dVar2 = *(double *)(lVar3 + 0x10 + lVar9 * 0x18);
      dVar12 = local_98 * dVar2 + local_a8 * dVar11 + local_a0 * dVar4;
      dVar14 = local_b8 * dVar2 + local_c8 * dVar11 + local_c0 * dVar4;
      dVar11 = dVar2 * local_d8 + dVar11 * local_e8 + dVar4 * local_e0;
    }
  }
  *param_2 = dVar11;
  param_2[1] = dVar14;
  param_2[2] = dVar12;
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ef9756 FUN_146ef9756 body=83 status=ok
// SIG undefined FUN_146ef9756(void)

void FUN_146ef9756(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0);
  if (lVar1 != 0) {
    FUN_14093365e(lVar1,*(undefined8 *)(param_1 + 0x48));
  }
  lVar1 = *(longlong *)(param_1 + 0x48);
  if ((lVar1 != 0) && (1 < *(byte *)(lVar1 + 0xc))) {
    FUN_14091cfa4(*(undefined8 *)(param_2 + 8),lVar1,*param_2,param_2[1],param_2[2]);
  }
  return;
}



// FUNCTION 146ef97aa FUN_146ef97aa body=84 status=ok
// SIG undefined FUN_146ef97aa(void)

void FUN_146ef97aa(byte *param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_2 != 0) && (1 < *(byte *)(param_2 + 0x90))) {
    *(ushort *)(param_2 + 0x1b4) = *(ushort *)(param_2 + 0x1b4) & 0xfeff | (ushort)*param_1 << 8;
    *(byte *)(param_2 + 0x94) = *(byte *)(param_2 + 0x94) | 8;
    if ((*(longlong *)(param_2 + 0x10) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 8), lVar1 != 0)) {
      FUN_144a78688(lVar1 + 0x70);
      return;
    }
  }
  return;
}



// FUNCTION 146ef97fe FUN_146ef97fe body=119 status=ok
// SIG undefined FUN_146ef97fe(void)

void FUN_146ef97fe(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x20c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x20c) = iVar5;
    FUN_140e4bd60(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146ef9876 FUN_146ef9876 body=64 status=ok
// SIG undefined FUN_146ef9876(void)

void FUN_146ef9876(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  puVar2[1] = param_2;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x70);
    *(undefined8 **)(param_1 + 0x70) = puVar2;
    *puVar1 = puVar2;
  }
  return;
}



// FUNCTION 146ef98c4 FUN_146ef98c4 body=70 status=ok
// SIG undefined FUN_146ef98c4(void)

void FUN_146ef98c4(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  puVar2[1] = param_2;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x90);
    *(undefined8 **)(param_1 + 0x90) = puVar2;
    *puVar1 = puVar2;
  }
  return;
}



// FUNCTION 146ef990a FUN_146ef990a body=38 status=ok
// SIG undefined FUN_146ef990a(void)

undefined8 FUN_146ef990a(undefined8 param_1,int param_2)

{
  FUN_141101d54();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef9930 FUN_146ef9930 body=145 status=ok
// SIG undefined FUN_146ef9930(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_146ef9930(undefined8 param_1,undefined8 param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c997d88) {
    FUN_144b3d300(&DAT_14c997d88);
    if (DAT_14c997d88 == -1) {
      _DAT_14c997d78 = 0x8000000149f760e6;
      _DAT_14c997d80 = FUN_145af9a3a("Untracked Physics Callback",0x1a);
      DAT_14c997d84 = 0;
      _Init_thread_footer(&DAT_14c997d88);
    }
  }
  FUN_1446f57c6(&DAT_14c997d78,param_2);
  return param_2;
}



// FUNCTION 146ef99cc FUN_146ef99cc body=34 status=ok
// SIG undefined FUN_146ef99cc(void)

void FUN_146ef99cc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_149f75fd0;
  return;
}



// FUNCTION 146ef99ee FUN_146ef99ee body=31 status=ok
// SIG undefined FUN_146ef99ee(void)

undefined8 FUN_146ef99ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef9a2a FUN_146ef9a2a body=93 status=ok
// SIG undefined FUN_146ef9a2a(void)

void FUN_146ef9a2a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f75f60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146ef9a88 FUN_146ef9a88 body=126 status=ok
// SIG undefined FUN_146ef9a88(void)

void FUN_146ef9a88(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f75f60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146ef9af7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146ef9b12 FUN_146ef9b12 body=21 status=ok
// SIG undefined FUN_146ef9b12(void)

undefined8 FUN_146ef9b12(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146ef9b28 FUN_146ef9b28 body=29 status=ok
// SIG undefined FUN_146ef9b28(void)

undefined8 FUN_146ef9b28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef9b46 FUN_146ef9b46 body=29 status=ok
// SIG undefined FUN_146ef9b46(void)

undefined8 FUN_146ef9b46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef9b86 FUN_146ef9b86 body=131 status=ok
// SIG undefined FUN_146ef9b86(void)

void FUN_146ef9b86(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x4008);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x80;
    if (0x80 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x80 < *(uint *)(param_1 + 0x400c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 7,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 7)) {
        uVar4 = uVar2 >> 7 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x400c) = (int)uVar4;
    FUN_146ef8fc2(param_1,param_2,uVar4,0x80);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146ef9c0a FUN_146ef9c0a body=29 status=ok
// SIG undefined FUN_146ef9c0a(void)

undefined8 FUN_146ef9c0a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ef9c58 FUN_146ef9c58 body=131 status=ok
// SIG undefined FUN_146ef9c58(void)

void FUN_146ef9c58(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x4008);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x80;
    if (0x80 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x80 < *(uint *)(param_1 + 0x400c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 7,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 7)) {
        uVar4 = uVar2 >> 7 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x400c) = (int)uVar4;
    FUN_146ef9cdc(param_1,param_2,uVar4,0x80);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146ef9cdc FUN_146ef9cdc body=145 status=ok
// SIG undefined FUN_146ef9cdc(void)

void FUN_146ef9cdc(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x4000);
  if ((uint)param_3 < 0x81) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 7);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x4000,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x4000),param_1,(longlong)param_2 << 7);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x4000,param_2,param_3,param_4);
  return;
}



// FUNCTION 146ef9d6d FUN_146ef9d6d body=231 status=ok
// SIG undefined FUN_146ef9d6d(void)

void FUN_146ef9d6d(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  ulonglong uVar1;
  float *pfVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar5 = *(longlong *)(param_1 + 0x4000);
  if (*(longlong *)(param_1 + 0x4000) == 0) {
    lVar5 = param_1;
  }
  FUN_146ef9ee4(lVar5,*(undefined4 *)(param_1 + 0x4008),param_3,&local_21);
  if ((char)param_3 != '\0') {
    lVar5 = (longlong)*(int *)(param_1 + 0x4008);
    if (lVar5 < 1) {
      iVar4 = *(int *)(param_1 + 0x4008) + 1;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x4000);
      if (*(longlong *)(param_1 + 0x4000) == 0) {
        lVar3 = param_1;
      }
      uVar1 = lVar5 + 1;
      pfVar2 = (float *)(lVar3 + lVar5 * 0x80 + -0x10);
      do {
        if (*pfVar2 < *(float *)(param_2 + 0xe)) {
          iVar4 = (int)uVar1;
          goto LAB_146ef9e1a;
        }
        uVar1 = uVar1 - 1;
        pfVar2 = pfVar2 + -0x20;
      } while (1 < uVar1);
      iVar4 = 1;
    }
LAB_146ef9e1a:
    FUN_146ef9e56(param_1,iVar4,1);
    lVar5 = *(longlong *)(param_1 + 0x4000);
    if (*(longlong *)(param_1 + 0x4000) == 0) {
      lVar5 = param_1;
    }
    puVar6 = (undefined8 *)(lVar5 + (longlong)iVar4 * 0x80 + -0x80);
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar6 = *param_2;
      param_2 = param_2 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ef9e56 FUN_146ef9e56 body=141 status=ok
// SIG undefined FUN_146ef9e56(void)

void FUN_146ef9e56(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x4008);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x4008) = param_2;
    if ((uint)(*(int *)(param_1 + 0x400c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146ef9c58(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x4000);
    if (*(longlong *)(param_1 + 0x4000) == 0) {
      lVar2 = param_1;
    }
    FUN_146efa42b((longlong)iVar1 * 0x80 + lVar2,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 0x4008) = param_2, param_3 == '\x01')) {
      FUN_146efa45c(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146ef9ee4 FUN_146ef9ee4 body=767 status=ok
// SIG undefined FUN_146ef9ee4(void)

void FUN_146ef9ee4(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  int iVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  float fVar17;
  undefined1 auStack_3f8 [40];
  undefined8 local_3d0;
  longlong local_3c8;
  longlong local_3c0;
  undefined4 local_3b8 [188];
  undefined8 local_c8 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  local_3d0 = param_4;
  if (1 < (int)param_2) {
    memset(local_3b8,0,0x2f0);
    local_3c0 = (ulonglong)param_2 * 0x80 + param_1 + -0x80;
    local_3c8 = param_1;
    fVar17 = logf((float)(int)param_2);
    local_3b8[0] = (int)(longlong)(fVar17 + fVar17);
    plVar16 = &local_3c8;
    do {
      puVar1 = (undefined8 *)*plVar16;
      puVar3 = (undefined8 *)plVar16[1];
      iVar14 = (int)plVar16[2];
      uVar13 = (int)((ulonglong)((longlong)puVar3 - (longlong)puVar1) >> 7) + 1;
      puVar5 = puVar1;
      puVar10 = puVar3;
      if (iVar14 != 0) {
LAB_146ef9fbf:
        if (8 < (int)uVar13) {
          puVar7 = puVar1 + (ulonglong)(uVar13 >> 1) * 0x10;
          puVar11 = local_c8;
          for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar11 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar11 = puVar11 + 1;
          }
          puVar7 = puVar1;
          puVar11 = puVar1 + (ulonglong)(uVar13 >> 1) * 0x10;
          for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar11 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar11 = puVar11 + 1;
          }
          puVar7 = local_c8;
          puVar11 = puVar1;
          for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar11 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar11 = puVar11 + 1;
          }
          puVar7 = puVar3 + 0x10;
          puVar11 = puVar1;
          do {
            puVar9 = puVar11 + 0x10;
            puVar4 = puVar11 + 0x10;
            do {
              puVar11 = puVar4;
              puVar6 = puVar9;
              if (puVar3 < puVar11) break;
              puVar9 = puVar6 + 0x10;
              puVar4 = puVar11 + 0x10;
            } while (*(float *)(puVar11 + 0xe) < *(float *)(puVar1 + 0xe) ||
                     *(float *)(puVar11 + 0xe) == *(float *)(puVar1 + 0xe));
            puVar9 = puVar7 + -0x20;
            do {
              puVar4 = puVar7;
              puVar15 = puVar9;
              puVar7 = puVar4 + -0x10;
              if (puVar7 <= puVar1) break;
              puVar9 = puVar15 + -0x10;
            } while (*(float *)(puVar1 + 0xe) < *(float *)(puVar4 + -2) ||
                     *(float *)(puVar1 + 0xe) == *(float *)(puVar4 + -2));
            lVar2 = 0x10;
            puVar9 = puVar1;
            puVar8 = puVar11;
            puVar12 = local_c8;
            if (puVar7 < puVar11) goto code_r0x000146efa094;
            for (; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar12 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar12 = puVar12 + 1;
            }
            puVar9 = puVar7;
            puVar4 = puVar11;
            for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar4 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar4 = puVar4 + 1;
            }
            puVar9 = local_c8;
            puVar4 = puVar7;
            for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar4 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar4 = puVar4 + 1;
            }
          } while( true );
        }
        while (puVar10 = puVar1, puVar5 = puVar1, puVar1 < puVar3) {
          while (puVar7 = puVar10, puVar5 = puVar5 + 0x10, puVar5 <= puVar3) {
            puVar10 = puVar5;
            if (*(float *)(puVar5 + 0xe) < *(float *)(puVar7 + 0xe) ||
                *(float *)(puVar5 + 0xe) == *(float *)(puVar7 + 0xe)) {
              puVar10 = puVar7;
            }
          }
          puVar5 = puVar3 + -0x10;
          puVar10 = puVar7;
          puVar11 = local_c8;
          for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar11 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          }
          puVar10 = puVar3;
          for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar7 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar7 = puVar7 + 1;
          }
          puVar10 = local_c8;
          puVar7 = puVar3;
          for (lVar2 = 0x10; puVar3 = puVar5, lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar7 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        goto LAB_146efa1b2;
      }
LAB_146efa1cc:
      FUN_146efa1e4(puVar1,uVar13,puVar1,local_3d0);
LAB_146efa1b2:
      plVar16 = plVar16 + -3;
    } while (&local_3c8 <= plVar16);
  }
  if ((local_48 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000146efa094:
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar12 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar12 = puVar12 + 1;
  }
  puVar9 = puVar7;
  puVar8 = puVar1;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar8 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar9 = local_c8;
  puVar8 = puVar7;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar8 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar8 = puVar8 + 1;
  }
  iVar14 = iVar14 + -1;
  puVar4 = puVar4 + -0x20;
  if ((longlong)puVar15 - (longlong)puVar5 < (longlong)puVar10 - (longlong)puVar6) {
    if (puVar11 < puVar3) {
      *plVar16 = (longlong)puVar11;
      plVar16[1] = (longlong)puVar3;
      *(int *)(plVar16 + 2) = iVar14;
      plVar16 = plVar16 + 3;
    }
    puVar6 = puVar1;
    if (puVar7 <= puVar1 + 0x10) goto LAB_146efa1b2;
  }
  else {
    if (puVar1 + 0x10 < puVar7) {
      *plVar16 = (longlong)puVar1;
      plVar16[1] = (longlong)puVar4;
      *(int *)(plVar16 + 2) = iVar14;
      plVar16 = plVar16 + 3;
    }
    puVar1 = puVar11;
    puVar4 = puVar3;
    puVar15 = puVar3;
    if (puVar3 <= puVar11) goto LAB_146efa1b2;
  }
  uVar13 = (int)((ulonglong)((longlong)puVar15 - (longlong)puVar6) >> 7) + 1;
  puVar3 = puVar4;
  puVar5 = puVar6;
  puVar10 = puVar15;
  if (iVar14 == 0) goto LAB_146efa1cc;
  goto LAB_146ef9fbf;
}



// FUNCTION 146efa1e4 FUN_146efa1e4 body=582 status=ok
// SIG undefined FUN_146efa1e4(void)

void FUN_146efa1e4(undefined8 *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_c8 [40];
  undefined8 local_a0 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 != 0) {
    iVar8 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar1 = iVar8;
joined_r0x000146efa22b:
    do {
      iVar5 = iVar1 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar6 = iVar1 * 2 + 2;
        if ((iVar6 < (int)param_2) &&
           (*(float *)(param_1 + (longlong)iVar5 * 0x10 + 0xe) <
            *(float *)(param_1 + (longlong)iVar6 * 0x10 + 0xe) ||
            *(float *)(param_1 + (longlong)iVar5 * 0x10 + 0xe) ==
            *(float *)(param_1 + (longlong)iVar6 * 0x10 + 0xe))) {
          iVar5 = iVar6;
        }
        if (*(float *)(param_1 + (longlong)iVar1 * 0x10 + 0xe) <=
            *(float *)(param_1 + (longlong)iVar5 * 0x10 + 0xe) &&
            *(float *)(param_1 + (longlong)iVar5 * 0x10 + 0xe) !=
            *(float *)(param_1 + (longlong)iVar1 * 0x10 + 0xe)) {
          puVar3 = param_1 + (longlong)iVar1 * 0x10;
          puVar4 = local_a0;
          for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = param_1 + (longlong)iVar5 * 0x10;
          puVar4 = param_1 + (longlong)iVar1 * 0x10;
          for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = local_a0;
          puVar4 = param_1 + (longlong)iVar5 * 0x10;
          for (lVar2 = 0x10; iVar1 = iVar5, lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          goto joined_r0x000146efa22b;
        }
      }
      bVar9 = iVar8 != 0;
      iVar8 = iVar8 + -1;
      iVar1 = iVar8;
    } while (bVar9);
    if (1 < (int)param_2) {
      puVar3 = param_1;
      puVar4 = local_a0;
      for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar3 = param_1 + ((ulonglong)param_2 - 1) * 0x10;
      puVar4 = param_1;
      for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar3 = local_a0;
      puVar4 = param_1 + ((ulonglong)param_2 - 1) * 0x10;
      for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      if (param_2 != 2) {
        uVar7 = (ulonglong)param_2 - 1;
        do {
          iVar1 = 0;
          iVar5 = 1;
          iVar8 = 0;
          do {
            iVar1 = iVar1 + 2;
            iVar6 = iVar5;
            if (((longlong)iVar1 < (longlong)uVar7) &&
               (*(float *)(param_1 + (longlong)iVar5 * 0x10 + 0xe) <
                *(float *)(param_1 + (longlong)iVar1 * 0x10 + 0xe) ||
                *(float *)(param_1 + (longlong)iVar5 * 0x10 + 0xe) ==
                *(float *)(param_1 + (longlong)iVar1 * 0x10 + 0xe))) {
              iVar6 = iVar1;
            }
            if (*(float *)(param_1 + (longlong)iVar6 * 0x10 + 0xe) <
                *(float *)(param_1 + (longlong)iVar8 * 0x10 + 0xe) ||
                *(float *)(param_1 + (longlong)iVar6 * 0x10 + 0xe) ==
                *(float *)(param_1 + (longlong)iVar8 * 0x10 + 0xe)) break;
            puVar3 = param_1 + (longlong)iVar8 * 0x10;
            puVar4 = local_a0;
            for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 1;
            }
            puVar3 = param_1 + (longlong)iVar6 * 0x10;
            puVar4 = param_1 + (longlong)iVar8 * 0x10;
            for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 1;
            }
            puVar3 = local_a0;
            puVar4 = param_1 + (longlong)iVar6 * 0x10;
            for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 1;
            }
            iVar1 = iVar6 * 2;
            iVar5 = iVar6 * 2 + 1;
            iVar8 = iVar6;
          } while ((longlong)iVar5 < (longlong)uVar7);
          puVar3 = param_1;
          puVar4 = local_a0;
          for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = param_1 + (uVar7 - 1) * 0x10;
          puVar4 = param_1;
          for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = local_a0;
          puVar4 = param_1 + (uVar7 - 1) * 0x10;
          for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          bVar9 = 2 < uVar7;
          uVar7 = uVar7 - 1;
        } while (bVar9);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146efa42b FUN_146efa42b body=48 status=ok
// SIG undefined FUN_146efa42b(void)

void FUN_146efa42b(longlong param_1,int param_2)

{
  undefined2 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined2 *)(param_1 + 0x38);
    do {
      *(undefined4 *)(puVar1 + -0x14) = 0xffffffff;
      *(undefined8 *)(puVar1 + -0x10) = 0;
      *(undefined8 *)(puVar1 + -0xc) = 0;
      *(undefined8 *)(puVar1 + -8) = 0;
      *(undefined4 *)(puVar1 + -4) = 0xffffffff;
      *puVar1 = 0;
      puVar1 = puVar1 + 0x40;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146efa45c FUN_146efa45c body=74 status=ok
// SIG undefined FUN_146efa45c(void)

void FUN_146efa45c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146efa4a6(param_1,*(undefined4 *)(param_1 + 0x4008),*(undefined4 *)(param_1 + 0x400c))
  ;
  if (iVar1 == *(int *)(param_1 + 0x400c)) {
    return;
  }
  *(int *)(param_1 + 0x400c) = iVar1;
  FUN_146ef9cdc(param_1,*(undefined4 *)(param_1 + 0x4008),iVar1,0x80);
  return;
}



// FUNCTION 146efa4a6 FUN_146efa4a6 body=108 status=ok
// SIG undefined FUN_146efa4a6(void)

ulonglong FUN_146efa4a6(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x80;
  if (0x80 < param_2) {
    iVar2 = param_3 - param_2;
    if (((longlong)iVar2 & 0x1ffffffffffff80U) == 0) {
      if (iVar2 < 0x41 || (int)(param_3 * 2) <= (int)(param_2 * 3)) {
        return (ulonglong)param_3;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_3;
    }
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 7,0);
      uVar1 = uVar1 >> 7;
    }
  }
  return uVar1;
}



// FUNCTION 146efa512 FUN_146efa512 body=60 status=ok
// SIG undefined FUN_146efa512(void)

undefined8 * FUN_146efa512(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f760a8;
  if (param_1[0x791] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146efa54e FUN_146efa54e body=60 status=ok
// SIG undefined FUN_146efa54e(void)

undefined8 * FUN_146efa54e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f760b0;
  if (param_1[0x812] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146efa58a FUN_146efa58a body=60 status=ok
// SIG undefined FUN_146efa58a(void)

undefined8 * FUN_146efa58a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f760b8;
  if (param_1[0x389] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146efa5c6 FUN_146efa5c6 body=29 status=ok
// SIG undefined FUN_146efa5c6(void)

void FUN_146efa5c6(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_149f76350;
  param_1[3] = 0;
  return;
}



// FUNCTION 146efa5e4 FUN_146efa5e4 body=23 status=ok
// SIG undefined FUN_146efa5e4(void)

void FUN_146efa5e4(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146efa5f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 146efa604 FUN_146efa604 body=239 status=ok
// SIG undefined FUN_146efa604(void)

undefined8 * FUN_146efa604(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = *param_2;
  lVar3 = param_2[1];
  param_1[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = param_3;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x80;
  *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
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
  return param_1;
}



// FUNCTION 146efa6f4 thunk_FUN_142a6214a body=12 status=ok
// SIG undefined thunk_FUN_142a6214a(void)

void thunk_FUN_142a6214a(void)

{
  LOCK();
  DAT_14c997dd8 = DAT_14c997dd8 + '\x01';
  UNLOCK();
  FUN_142a6214a();
  return;
}



// FUNCTION 146efa700 FUN_146efa700 body=183 status=ok
// SIG undefined FUN_146efa700(void)

undefined8 FUN_146efa700(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_145b0a060();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
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



// FUNCTION 146efa7b8 FUN_146efa7b8 body=262 status=ok
// SIG undefined FUN_146efa7b8(void)

void FUN_146efa7b8(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x150) == '\0') {
    local_30 = param_1 + 0x28;
    local_38 = 0x100000000;
    local_28 = 0xffffffff;
    local_20 = 0;
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_1449c0562(&local_38);
    }
    local_48 = local_28;
    uVar1 = local_48;
    local_40 = local_20;
    local_3c = local_1c;
    local_58 = local_38;
    local_50 = local_30;
    local_48._4_4_ = (int)((ulonglong)local_28 >> 0x20);
    local_60 = (longlong *)(param_1 + 0x18);
    if (local_48._4_4_ < *(int *)(local_30 + 0x18)) {
      iVar2 = local_48._4_4_;
      local_48 = uVar1;
      do {
        (**(code **)(**(longlong **)(*local_60 + 8 + (longlong)iVar2 * 0x20) + 0x10))();
        local_48 = CONCAT44(local_48._4_4_,(uint)local_48 & ~local_58._4_4_);
        FUN_1449c0562(&local_58);
        iVar2 = local_48._4_4_;
        uVar1 = local_48;
      } while (local_48._4_4_ < *(int *)(local_50 + 0x18));
    }
    local_48 = uVar1;
    *(undefined1 *)(param_1 + 0x150) = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146efa8c0 FUN_146efa8c0 body=63 status=ok
// SIG undefined FUN_146efa8c0(void)

void FUN_146efa8c0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  FUN_146efa900(param_1 + 0x110);
  if (*param_2 != 0) {
    plVar1 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000146efa8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 146efa900 FUN_146efa900 body=290 status=ok
// SIG undefined FUN_146efa900(void)

longlong * FUN_146efa900(longlong *param_1,longlong *param_2)

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



// FUNCTION 146efaa2e FUN_146efaa2e body=277 status=ok
// SIG undefined FUN_146efaa2e(void)

void FUN_146efaa2e(longlong param_1,longlong *param_2)

{
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  longlong local_60 [2];
  longlong local_50 [2];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18);
  FUN_1400021e4(&local_40,local_50);
  local_40 = *(longlong *)(param_1 + 0x18);
  FUN_1400021e4(&local_40,local_70);
  FUN_144a882a8(local_60,local_70,&DAT_149e001d8);
  FUN_1401c7f3e(&local_40,local_60,local_50);
  if (&local_40 == param_2) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_40;
    local_40 = 0;
    *(undefined4 *)(param_2 + 1) = (undefined4)local_38;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_38._4_4_;
    local_38 = 0;
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146efab44 FUN_146efab44 body=59 status=ok
// SIG undefined FUN_146efab44(void)

undefined8 *
FUN_146efab44(undefined8 *param_1,undefined8 *param_2,double param_3,undefined1 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_3;
  param_1[3] = (double)*(int *)(param_2 + 1) * param_3;
  *(undefined1 *)(param_1 + 4) = param_4;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0xffffffffffffffff;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  return param_1;
}



// FUNCTION 146efab80 FUN_146efab80 body=66 status=ok
// SIG undefined FUN_146efab80(void)

void FUN_146efab80(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    puVar2 = (undefined8 *)*param_1;
    puVar1 = puVar2 + (longlong)*(int *)(param_1 + 1) * 2;
    do {
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      puVar2 = puVar2 + 2;
    } while (puVar2 != puVar1);
  }
  *(undefined8 *)((longlong)param_1 + 0x24) = 0xffffffffffffffff;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  return;
}



// FUNCTION 146efabc2 FUN_146efabc2 body=154 status=ok
// SIG undefined FUN_146efabc2(void)

void FUN_146efabc2(longlong *param_1,double param_2,double param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  auVar6._0_8_ = param_2 / (double)param_1[3];
  auVar6._8_8_ = 0;
  auVar6 = roundpd(auVar6,auVar6,1);
  uVar4 = (int)param_1[1] - 1;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (param_2 - auVar6._0_8_ * (double)param_1[3]) / (double)param_1[2];
  auVar5 = roundpd(auVar5,auVar5,1);
  if ((int)auVar5._0_8_ < (int)uVar4) {
    uVar4 = (int)auVar5._0_8_;
  }
  if (-1 < (int)uVar4) {
    if (uVar4 != *(uint *)(param_1 + 5)) {
      FUN_146efac5c(param_1,uVar4,param_4);
    }
    lVar2 = *param_1;
    lVar3 = (ulonglong)uVar4 * 0x10;
    *(double *)(lVar2 + lVar3) = *(double *)(lVar2 + lVar3) + param_3;
    piVar1 = (int *)(lVar2 + 8 + lVar3);
    *piVar1 = *piVar1 + 1;
    param_1[6] = (longlong)(param_3 + (double)param_1[6]);
    *(int *)(param_1 + 7) = (int)param_1[7] + 1;
  }
  return;
}



// FUNCTION 146efac5c FUN_146efac5c body=233 status=ok
// SIG undefined FUN_146efac5c(void)

void FUN_146efac5c(longlong *param_1,uint param_2,double *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar4;
  double dVar5;
  uint uVar3;
  
  if ((int)param_1[5] == -1) {
    *(uint *)((longlong)param_1 + 0x24) = param_2;
  }
  else {
    uVar3 = param_2;
    if (param_2 == 0) {
      uVar3 = *(uint *)(param_1 + 1);
    }
    iVar2 = uVar3 - 1;
    if (iVar2 != (int)param_1[5]) {
      do {
        if (iVar2 == *(int *)((longlong)param_1 + 0x24)) {
          dVar5 = (double)param_1[6];
          if ((char)param_1[4] != '\x01') {
            dVar5 = dVar5 / (double)(int)param_1[7];
          }
          *param_3 = dVar5;
          *(undefined1 *)(param_3 + 1) = 1;
        }
        lVar1 = *param_1;
        lVar4 = (longlong)iVar2 * 0x10;
        param_1[6] = (longlong)((double)param_1[6] - *(double *)(lVar1 + lVar4));
        *(int *)(param_1 + 7) = (int)param_1[7] - *(int *)(lVar1 + 8 + lVar4);
        *(undefined8 *)(lVar1 + lVar4) = 0;
        *(undefined4 *)(lVar1 + 8 + lVar4) = 0;
        if (iVar2 == 0) {
          iVar2 = (int)param_1[1];
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != (int)param_1[5]);
    }
    if (*(uint *)((longlong)param_1 + 0x24) == param_2) {
      dVar5 = (double)param_1[6];
      if ((char)param_1[4] != '\x01') {
        dVar5 = dVar5 / (double)(int)param_1[7];
      }
      *param_3 = dVar5;
      *(undefined1 *)(param_3 + 1) = 1;
    }
  }
  lVar1 = *param_1;
  lVar4 = (ulonglong)param_2 * 0x10;
  param_1[6] = (longlong)((double)param_1[6] - *(double *)(lVar1 + lVar4));
  *(int *)(param_1 + 7) = (int)param_1[7] - *(int *)(lVar1 + 8 + lVar4);
  *(undefined8 *)(lVar1 + lVar4) = 0;
  *(undefined4 *)(lVar1 + 8 + lVar4) = 0;
  *(uint *)(param_1 + 5) = param_2;
  return;
}



// FUNCTION 146efad46 FUN_146efad46 body=42 status=ok
// SIG undefined FUN_146efad46(void)

void FUN_146efad46(undefined8 *param_1)

{
  *param_1 = 0x7fefffffffffffff;
  param_1[1] = 0x10000000000000;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 146efad82 FUN_146efad82 body=187 status=ok
// SIG undefined FUN_146efad82(void)

undefined8 * FUN_146efad82(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  param_1[4] = 0;
  param_1[6] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 0xc) = *param_2;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  FUN_1468fbe3e(param_1 + 0xd,*(undefined8 *)(param_2 + 6),*(undefined8 *)(param_2 + 8));
  param_1[0xd] = &PTR_FUN_149f7cf50;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  lVar2 = 0xf8;
  do {
    *(undefined8 *)((longlong)param_1 + lVar2 + -8) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2) = 0;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x1f8);
  uVar1 = *(undefined8 *)(param_2 + 4);
  param_1[0x3e] = *(undefined8 *)(param_2 + 2);
  param_1[0x3f] = uVar1;
  return param_1;
}



// FUNCTION 146efae3e FUN_146efae3e body=78 status=ok
// SIG undefined FUN_146efae3e(void)

void FUN_146efae3e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = param_2[1];
  *(undefined8 *)(param_1 + 0xa0) = *param_2;
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  uVar2 = param_2[3];
  *(undefined8 *)(param_1 + 0xb0) = param_2[2];
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  iVar1 = *(int *)(param_1 + 0x60);
  lVar3 = 0;
  lVar4 = 0;
  do {
    *(longlong *)(param_1 + 0xf0 + lVar4) = param_2[4] + lVar3;
    *(int *)(param_1 + 0xf8 + lVar4) = iVar1;
    lVar4 = lVar4 + 0x10;
    lVar3 = lVar3 + (longlong)iVar1 * 0x10;
  } while (lVar4 != 0x100);
  return;
}



// FUNCTION 146efae8c FUN_146efae8c body=1060 status=ok
// SIG undefined FUN_146efae8c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_146efae8c(longlong *param_1)

{
  undefined2 *puVar1;
  longlong *plVar2;
  uint uVar3;
  wchar_t *_Str;
  longlong lVar4;
  void *_Src;
  undefined4 uVar5;
  undefined4 uVar6;
  size_t sVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  undefined1 auStack_1108 [32];
  undefined8 local_10e8;
  undefined8 local_10e0;
  longlong local_10d8;
  void *local_10d0;
  int local_10c8;
  undefined4 local_10c4;
  undefined4 local_10c0;
  undefined4 uStack_10bc;
  undefined4 uStack_10b8;
  undefined4 uStack_10b4;
  undefined1 local_10b0 [16];
  undefined1 local_10a0 [16];
  undefined8 local_1090;
  wchar_t *local_1088;
  wchar_t *local_1080;
  undefined2 **local_1078;
  char local_1070;
  wchar_t local_1068 [1024];
  undefined2 *local_868;
  undefined2 *local_860;
  ulonglong *local_858;
  char local_850;
  undefined2 local_848 [1024];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1108;
  _Str = (wchar_t *)*param_1;
  lVar4 = param_1[3];
  local_868 = local_848;
  local_850 = '\0';
  local_858 = &local_48;
  if ((int)param_1[2] == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)param_1[1];
  }
  sVar7 = 0;
  local_860 = local_868;
  if (pwVar11 != (wchar_t *)0x0) {
    sVar7 = wcslen(pwVar11);
  }
  FUN_1449668a2(&local_868,pwVar11,sVar7);
  if (local_858 <= local_860 + 1) {
    FUN_140213274(&local_868,1);
  }
  puVar1 = local_860 + 1;
  *local_860 = 0x5f;
  sVar7 = 0;
  local_860 = puVar1;
  if (_Str != (wchar_t *)0x0) {
    sVar7 = wcslen(_Str);
  }
  FUN_1449668a2(&local_868,_Str,sVar7);
  if (local_858 <= local_860 + 1) {
    FUN_140213274(&local_868,1);
  }
  *local_860 = 0x5f;
  local_1090 = *(undefined8 *)(lVar4 + 0x18);
  local_860 = local_860 + 1;
  FUN_1400021e4(&local_1090,&local_1088);
  pwVar11 = local_1088;
  if ((int)local_1080 == 0) {
    pwVar11 = L"";
  }
  sVar7 = 0;
  if (pwVar11 != (wchar_t *)0x0) {
    sVar7 = wcslen(pwVar11);
  }
  FUN_1449668a2(&local_868,pwVar11,sVar7);
  if (local_1088 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  puVar1 = local_868;
  plVar2 = param_1 + 1;
  *local_860 = 0;
  uVar8 = FUN_145a51194();
  plVar9 = (longlong *)FUN_140277b32(uVar8,lVar4,puVar1,0);
  if (plVar9 == (longlong *)0x0) {
    local_1088 = local_1068;
    local_1070 = '\0';
    local_1078 = &local_868;
    local_1080 = local_1088;
    if (1 < (int)param_1[2]) {
      pwVar11 = (wchar_t *)*plVar2;
      sVar7 = 0;
      local_1080 = local_1088;
      if (pwVar11 != (wchar_t *)0x0) {
        sVar7 = wcslen(pwVar11);
      }
      FUN_1449668a2(&local_1088,pwVar11,sVar7);
      if (local_1078 <= local_1080 + 1) {
        FUN_140213274(&local_1088,1);
      }
      *local_1080 = L' ';
      local_1080 = local_1080 + 1;
    }
    sVar7 = 0;
    if (_Str != (wchar_t *)0x0) {
      sVar7 = wcslen(_Str);
    }
    FUN_1449668a2(&local_1088,_Str,sVar7);
    FUN_140056680(local_10a0,puVar1);
    *local_1080 = L'\0';
    FUN_140056680(local_10b0,local_1088);
    local_10d8 = *param_1;
    local_10d0 = (void *)0x0;
    local_10c8 = (int)param_1[2];
    lVar12 = (longlong)local_10c8;
    _Src = (void *)param_1[1];
    if (lVar12 == 0) {
      local_10c4 = 0;
    }
    else {
      FUN_1446dd670(&local_10d0,local_10c8,0);
      memcpy(local_10d0,_Src,lVar12 * 2);
    }
    local_10c0 = (undefined4)param_1[3];
    uStack_10bc = *(undefined4 *)((longlong)param_1 + 0x1c);
    uStack_10b8 = (undefined4)param_1[4];
    uStack_10b4 = *(undefined4 *)((longlong)param_1 + 0x24);
    uVar8 = FUN_146efc44c(&local_10d8,local_10b0,local_10a0);
    FUN_1446f470e(&local_10e0,puVar1,1);
    uVar10 = FUN_1409ffe1d();
    lVar12 = 0;
    local_10e8 = uVar8;
    plVar9 = (longlong *)FUN_146efc57a(uVar10,lVar4,local_10e0,0);
    plVar9[5] = *param_1;
    FUN_144a787a6(plVar9 + 6,plVar2);
    uVar5 = *(undefined4 *)((longlong)param_1 + 0x1c);
    lVar4 = param_1[4];
    uVar6 = *(undefined4 *)((longlong)param_1 + 0x24);
    *(int *)(plVar9 + 8) = (int)param_1[3];
    *(undefined4 *)((longlong)plVar9 + 0x44) = uVar5;
    *(int *)(plVar9 + 9) = (int)lVar4;
    *(undefined4 *)((longlong)plVar9 + 0x4c) = uVar6;
    (**(code **)(*plVar9 + 0x2a0))(plVar9);
    uVar3 = *(uint *)((longlong)plVar9 + 0xc);
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    FUN_1447f71cc(lVar12,0x40000000);
    if (local_1070 == '\x01') {
      FUN_1400020a8(local_1088);
    }
  }
  if (local_850 == '\x01') {
    FUN_1400020a8(local_868);
  }
  if (*plVar2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar9;
}



// FUNCTION 146efb2b2 FUN_146efb2b2 body=108 status=ok
// SIG undefined FUN_146efb2b2(void)

void FUN_146efb2b2(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x20))();
  if (lVar1 != 0) {
    lVar2 = FUN_1446f4bba();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) && (param_2 != 0))
       && (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
      uVar3 = (**(code **)(*param_1 + 0x10))(param_1);
      FUN_1449b16b6(lVar1,param_2,uVar3,1);
      return;
    }
  }
  return;
}



// FUNCTION 146efb31e FUN_146efb31e body=109 status=ok
// SIG undefined FUN_146efb31e(void)

void FUN_146efb31e(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146eff884(param_1,iVar1);
    }
    FUN_146eff868((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_146eff90a(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146efb38c FUN_146efb38c body=107 status=ok
// SIG undefined FUN_146efb38c(void)

void FUN_146efb38c(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146eff9a6(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (iVar1 <= param_2) {
    return;
  }
  *(int *)(param_1 + 1) = param_2;
  FUN_146effa2c(param_1);
  return;
}



// FUNCTION 146efb3f8 FUN_146efb3f8 body=83 status=ok
// SIG undefined FUN_146efb3f8(void)

void FUN_146efb3f8(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x808);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x808) = param_2;
    if ((uint)(*(int *)(param_1 + 0x80c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146effac8();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 0x808) = param_2;
      FUN_146effbd6();
      return;
    }
  }
  return;
}



// FUNCTION 146efb44c FUN_146efb44c body=235 status=ok
// SIG undefined FUN_146efb44c(void)

void FUN_146efb44c(longlong param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  longlong lVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (param_4 == -1) {
    param_4 = *(int *)(param_1 + 0xe8);
  }
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    pcVar6 = (char *)*param_2;
    pcVar5 = pcVar6 + *(int *)(param_2 + 1);
    do {
      cVar2 = *pcVar6;
      lVar12 = (longlong)(int)cVar2 * 0x10;
      lVar8 = (longlong)*(int *)(lVar12 + -8 + param_3);
      if (lVar8 != 0) {
        puVar11 = *(undefined4 **)(lVar12 + -0x10 + param_3);
        puVar9 = puVar11 + lVar8 * 4;
        do {
          *puVar11 = 0;
          *(undefined8 *)(puVar11 + 2) = 0;
          puVar11 = puVar11 + 4;
        } while (puVar11 != puVar9);
      }
      if ('\0' < cVar2) {
        lVar12 = lVar12 + param_3;
        iVar7 = 0;
        do {
          iVar10 = param_4 - iVar7;
          if (iVar10 < 0) {
            iVar10 = iVar10 + *(int *)(param_1 + 0xd0);
          }
          if (0 < *(int *)(lVar12 + -8)) {
            lVar8 = 8;
            lVar13 = 0;
            do {
              lVar3 = *(longlong *)(lVar12 + -0x10);
              lVar4 = *(longlong *)(*(longlong *)(param_1 + 200) + (longlong)iVar10 * 0x10);
              piVar1 = (int *)(lVar3 + -8 + lVar8);
              *piVar1 = *piVar1 + *(int *)(lVar4 + -8 + lVar8);
              *(double *)(lVar3 + lVar8) = *(double *)(lVar4 + lVar8) + *(double *)(lVar3 + lVar8);
              lVar13 = lVar13 + 1;
              lVar8 = lVar8 + 0x10;
            } while (lVar13 < *(int *)(lVar12 + -8));
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 != cVar2);
      }
      pcVar6 = pcVar6 + 1;
    } while (pcVar6 != pcVar5);
  }
  return;
}



// FUNCTION 146efb538 FUN_146efb538 body=239 status=ok
// SIG undefined FUN_146efb538(void)

void FUN_146efb538(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_1 + 0xa8) != 0) {
    puVar4 = *(undefined4 **)(param_1 + 0xa0);
    puVar1 = puVar4 + (longlong)*(int *)(param_1 + 0xa8) * 4;
    do {
      *puVar4 = 0;
      *(undefined8 *)(puVar4 + 2) = 0;
      puVar4 = puVar4 + 4;
    } while (puVar4 != puVar1);
  }
  if ((longlong)*(int *)(param_1 + 0xb8) != 0) {
    puVar4 = *(undefined4 **)(param_1 + 0xb0);
    puVar1 = puVar4 + (longlong)*(int *)(param_1 + 0xb8) * 4;
    do {
      *puVar4 = 0;
      *(undefined8 *)(puVar4 + 2) = 0;
      puVar4 = puVar4 + 4;
    } while (puVar4 != puVar1);
  }
  if ((longlong)*(int *)(param_1 + 0xd0) != 0) {
    puVar5 = *(undefined8 **)(param_1 + 200);
    puVar2 = puVar5 + (longlong)*(int *)(param_1 + 0xd0) * 2;
    do {
      if ((longlong)*(int *)(puVar5 + 1) != 0) {
        puVar4 = (undefined4 *)*puVar5;
        puVar1 = puVar4 + (longlong)*(int *)(puVar5 + 1) * 4;
        do {
          *puVar4 = 0;
          *(undefined8 *)(puVar4 + 2) = 0;
          puVar4 = puVar4 + 4;
        } while (puVar4 != puVar1);
      }
      puVar5 = puVar5 + 2;
    } while (puVar5 != puVar2);
  }
  lVar3 = 0xf0;
  do {
    lVar6 = (longlong)*(int *)(param_1 + 8 + lVar3);
    if (lVar6 != 0) {
      puVar4 = *(undefined4 **)(param_1 + lVar3);
      puVar1 = puVar4 + lVar6 * 4;
      do {
        *puVar4 = 0;
        *(undefined8 *)(puVar4 + 2) = 0;
        puVar4 = puVar4 + 4;
      } while (puVar4 != puVar1);
    }
    lVar3 = lVar3 + 0x10;
  } while (lVar3 != 0x1f0);
  return;
}



// FUNCTION 146efb628 FUN_146efb628 body=543 status=ok
// SIG undefined FUN_146efb628(void)

void FUN_146efb628(longlong param_1,double param_2)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  longlong lVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined4 *puVar14;
  int iVar15;
  longlong lVar16;
  undefined1 auStack_98 [40];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 100) != '\x01') goto LAB_146efb6d3;
  if (0 < *(int *)(param_1 + 0xa8)) {
    lVar11 = 8;
    lVar13 = 0;
    do {
      lVar16 = *(longlong *)(param_1 + 0xa0);
      lVar4 = *(longlong *)(param_1 + 0xb0);
      piVar1 = (int *)(lVar4 + -8 + lVar11);
      *piVar1 = *piVar1 + *(int *)(lVar16 + -8 + lVar11);
      *(double *)(lVar4 + lVar11) = *(double *)(lVar16 + lVar11) + *(double *)(lVar4 + lVar11);
      *(undefined4 *)(lVar16 + -8 + lVar11) = 0;
      *(undefined8 *)(lVar16 + lVar11) = 0;
      lVar13 = lVar13 + 1;
      lVar11 = lVar11 + 0x10;
    } while (lVar13 < *(int *)(param_1 + 0xa8));
  }
  if (param_2 - *(double *)(param_1 + 0xc0) <= 1.0) goto LAB_146efb6d3;
  if ('\0' < *(char *)(param_1 + 0x90)) {
    dVar5 = param_2 - *(double *)(param_1 + 0x98);
    sVar2 = *(short *)(*(longlong *)(param_1 + 0x78) + 0x1a);
    sVar3 = *(short *)(*(longlong *)(param_1 + 0x78) + 0x1c);
    if ((0 < sVar2) && ((double)(int)sVar2 < dVar5)) {
      FUN_140056680(local_60,&DAT_149dfb77a);
      cVar9 = FUN_142a62748(param_1,2,local_60);
      if (cVar9 != '\x02') goto LAB_146efb797;
    }
    if ((0 < sVar3) && ((double)(int)sVar3 < dVar5)) {
      FUN_140056680(local_70,&DAT_149dfb77a);
      FUN_142a62748(param_1,1,local_70);
    }
  }
LAB_146efb797:
  iVar10 = *(int *)(param_1 + 0xe8) + 1;
  iVar15 = 0;
  if (iVar10 < *(int *)(param_1 + 0xd0)) {
    iVar15 = iVar10;
  }
  *(int *)(param_1 + 0xe8) = iVar15;
  lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 200) + 8 + (longlong)iVar15 * 0x10);
  if (lVar11 != 0) {
    lVar13 = *(longlong *)(*(longlong *)(param_1 + 200) + (longlong)iVar15 * 0x10);
    lVar16 = 0;
    do {
      puVar14 = (undefined4 *)(*(longlong *)(param_1 + 0xb0) + lVar16);
      uVar6 = puVar14[1];
      uVar7 = puVar14[2];
      uVar8 = puVar14[3];
      puVar12 = (undefined4 *)(lVar13 + lVar16);
      *puVar12 = *puVar14;
      puVar12[1] = uVar6;
      puVar12[2] = uVar7;
      puVar12[3] = uVar8;
      lVar16 = lVar16 + 0x10;
    } while (lVar11 * 0x10 != lVar16);
  }
  *(double *)(param_1 + 0xc0) = param_2;
  if ((longlong)*(int *)(param_1 + 0xb8) != 0) {
    puVar14 = *(undefined4 **)(param_1 + 0xb0);
    puVar12 = puVar14 + (longlong)*(int *)(param_1 + 0xb8) * 4;
    do {
      *puVar14 = 0;
      *(undefined8 *)(puVar14 + 2) = 0;
      puVar14 = puVar14 + 4;
    } while (puVar14 != puVar12);
  }
  FUN_146efb44c(param_1,*(longlong *)(param_1 + 0x78) + 0x20,param_1 + 0xf0,0xffffffff);
LAB_146efb6d3:
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146efb848 FUN_146efb848 body=360 status=ok
// SIG undefined FUN_146efb848(void)

uint FUN_146efb848(longlong *param_1,int param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  bool bVar14;
  
  uVar3 = *(uint *)(param_1 + 0xc);
  iVar7 = uVar3 + param_2;
  lVar9 = 0xf;
  do {
    lVar10 = param_1[lVar9 * 2 + 0x1e];
    param_1[lVar9 * 2 + 0x1e] = lVar9 * iVar7 * 0x10 + *param_3;
    *(int *)(param_1 + lVar9 * 2 + 0x1f) = iVar7;
    if (0 < (int)uVar3) {
      lVar13 = 0;
      do {
        puVar1 = (undefined4 *)(lVar10 + lVar13);
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        puVar2 = (undefined4 *)(param_1[lVar9 * 2 + 0x1e] + lVar13);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar2[2] = uVar5;
        puVar2[3] = uVar6;
        lVar13 = lVar13 + 0x10;
      } while ((ulonglong)uVar3 << 4 != lVar13);
    }
    bVar14 = lVar9 != 0;
    lVar9 = lVar9 + -1;
  } while (bVar14);
  lVar9 = *param_1;
  uVar11 = 0;
  if ((lVar9 != 0) && (uVar11 = 0, (longlong)*(int *)(lVar9 + 0x80) != 0)) {
    lVar10 = 0;
    uVar11 = 0;
    do {
      lVar13 = *(longlong *)(*(longlong *)(lVar9 + 0x78) + 0x10 + lVar10);
      uVar12 = (int)*(short *)(lVar13 + 0x1a) + (int)*(char *)(lVar13 + 0x1e);
      if ((int)uVar11 < (int)uVar12) {
        uVar11 = uVar12;
      }
      lVar10 = lVar10 + 0x28;
    } while ((longlong)*(int *)(lVar9 + 0x80) * 0x28 != lVar10);
  }
  iVar8 = uVar11 * param_2 + (int)param_1[0x1c];
  if (-1 < iVar8) {
    if (*(int *)((longlong)param_1 + 0xe4) < iVar8) {
      FUN_146effc8a(param_1 + 0x1b);
    }
    if (0 < (int)uVar11) {
      lVar9 = 0;
      lVar10 = 0;
      uVar12 = uVar3;
      do {
        FUN_146efb9b2(param_1 + 0x1b,uVar12,param_2);
        lVar13 = param_1[0x19];
        *(longlong *)(lVar13 + lVar10) = param_1[0x1b] + lVar9;
        *(int *)(lVar13 + 8 + lVar10) = iVar7;
        lVar10 = lVar10 + 0x10;
        lVar9 = lVar9 + (longlong)iVar7 * 0x10;
        uVar12 = uVar12 + iVar7;
      } while ((ulonglong)uVar11 << 4 != lVar10);
    }
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + param_2;
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar8);
}



// FUNCTION 146efb9b2 FUN_146efb9b2 body=108 status=ok
// SIG undefined FUN_146efb9b2(void)

void FUN_146efb9b2(longlong *param_1,int param_2,uint param_3)

{
  int iVar1;
  void *_Src;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_3;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_3) {
    FUN_146eff884(param_1,iVar1);
  }
  _Src = (void *)(*param_1 + (longlong)param_2 * 0x10);
  memmove((void *)((longlong)(int)param_3 * 0x10 + (longlong)_Src),_Src,
          (ulonglong)(uint)(iVar1 - param_2) << 4);
  FUN_146eff868((longlong)param_2 * 0x10 + *param_1,param_3);
  return;
}



// FUNCTION 146efba1e FUN_146efba1e body=198 status=ok
// SIG undefined FUN_146efba1e(void)

void FUN_146efba1e(longlong param_1)

{
  char cVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_40;
  longlong local_38;
  undefined8 *local_30;
  undefined4 *local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar1 = FUN_144729dda(param_1 + 0x70);
  if ((cVar1 != '\0') && (*(longlong **)(param_1 + 0x78) != (longlong *)0x0)) {
    local_40 = param_1 + 0x1f0;
    local_38 = param_1 + 0xf0;
    local_58 = *(undefined8 *)(param_1 + 0xb0);
    uStack_50 = *(undefined8 *)(param_1 + 0xb8);
    local_30 = &local_58;
    local_68 = *(undefined4 *)(param_1 + 0xa0);
    uStack_64 = *(undefined4 *)(param_1 + 0xa4);
    uStack_60 = *(undefined4 *)(param_1 + 0xa8);
    uStack_5c = *(undefined4 *)(param_1 + 0xac);
    local_28 = &local_68;
    local_20 = 0;
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x20))();
    if (cVar1 != '\0') {
      FUN_140056680(local_78,&DAT_149dfb77a);
      FUN_142a62748(param_1,0,local_78);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146efbae6 FUN_146efbae6 body=43 status=ok
// SIG undefined FUN_146efbae6(void)

undefined8 FUN_146efbae6(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FUN_144729dda(param_1 + 0x70);
  if ((cVar2 == '\0') || (lVar1 = *(longlong *)(param_1 + 0x78), lVar1 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x19));
  }
  return uVar3;
}



// FUNCTION 146efbb12 FUN_146efbb12 body=59 status=ok
// SIG undefined FUN_146efbb12(void)

void FUN_146efbb12(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    iVar1 = 0;
  }
  FUN_1402980a2(param_1 + 8,*param_2,iVar1);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146efbb4e FUN_146efbb4e body=148 status=ok
// SIG undefined FUN_146efbb4e(void)

void FUN_146efbb4e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  uVar9 = *param_2;
  uVar10 = param_2[1];
  uVar11 = param_2[2];
  uVar12 = param_2[3];
  uVar13 = param_2[4];
  uVar14 = param_2[5];
  uVar15 = param_2[7];
  *(undefined8 *)(param_1 + 0x50) = param_2[6];
  *(undefined8 *)(param_1 + 0x58) = uVar15;
  *(undefined8 *)(param_1 + 0x40) = uVar13;
  *(undefined8 *)(param_1 + 0x48) = uVar14;
  *(undefined8 *)(param_1 + 0x30) = uVar11;
  *(undefined8 *)(param_1 + 0x38) = uVar12;
  *(undefined8 *)(param_1 + 0x20) = uVar9;
  *(undefined8 *)(param_1 + 0x28) = uVar10;
  local_48._0_4_ = (undefined4)uVar1;
  local_48._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar2;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38._0_4_ = (undefined4)uVar3;
  local_38._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar4;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_28._0_4_ = (undefined4)uVar5;
  local_28._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar6;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_18._0_4_ = (undefined4)uVar7;
  local_18._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_10._0_4_ = (undefined4)uVar8;
  uStack_10._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  *(undefined4 *)(param_2 + 6) = (undefined4)local_18;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_18._4_4_;
  *(undefined4 *)(param_2 + 7) = (undefined4)uStack_10;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_10._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_28._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_20._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_38._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_30._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_48;
  *(undefined4 *)((longlong)param_2 + 4) = local_48._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_40._4_4_;
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
  local_48 = uVar1;
  uStack_40 = uVar2;
  local_38 = uVar3;
  uStack_30 = uVar4;
  local_28 = uVar5;
  uStack_20 = uVar6;
  local_18 = uVar7;
  uStack_10 = uVar8;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146efbbf8 FUN_146efbbf8 body=8 status=ok
// SIG undefined FUN_146efbbf8(void)

wchar_t * FUN_146efbbf8(void)

{
  return L"NetFault";
}



// FUNCTION 146efbc00 FUN_146efbc00 body=33 status=ok
// SIG undefined FUN_146efbc00(void)

void FUN_146efbc00(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144a797b2();
  FUN_140277b32(uVar1,0,L"/Script/Engine.NetFaultConfig",0);
  return;
}



// FUNCTION 146efbc22 FUN_146efbc22 body=702 status=ok
// SIG undefined FUN_146efbc22(void)

undefined8 FUN_146efbc22(longlong param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined2 *)0x0;
  local_38 = *(int *)(param_1 + 0x10);
  lVar2 = (longlong)local_38;
  _Src = *(void **)(param_1 + 8);
  if (lVar2 == 0) {
    local_34 = 0;
    iVar1 = 0;
    puVar5 = &DAT_149dfb77a;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar2 * 2);
    puVar5 = local_40;
    iVar1 = local_38;
    if (local_38 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
  }
  lVar2 = 0;
  while( true ) {
    uVar6 = *(ushort *)((longlong)puVar5 + lVar2);
    uVar10 = (uint)uVar6;
    uVar8 = *(ushort *)((longlong)L"Normal" + lVar2);
    uVar3 = (ulonglong)uVar8;
    if (uVar6 != uVar8) break;
    if (uVar6 == 0) goto LAB_146efbe44;
LAB_146efbcc1:
    lVar2 = lVar2 + 2;
  }
  if ((uVar8 | uVar6) < 0x80) {
    uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar6];
    uVar3 = (ulonglong)(byte)(&DAT_149e05da0)[uVar8];
    if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_146efbcc1;
  }
  if (uVar10 != (uint)uVar3) {
    puVar5 = &DAT_149dfb77a;
    if (iVar1 != 0) {
      puVar5 = local_40;
    }
    lVar2 = 0;
    goto LAB_146efbcfc;
  }
LAB_146efbe44:
  *(undefined1 *)(param_1 + 0x19) = 1;
  *(undefined2 *)(param_1 + 0x32) = 1;
  *(undefined1 *)(param_1 + 0x39) = 1;
  goto LAB_146efbe52;
LAB_146efbcfc:
  uVar6 = *(ushort *)((longlong)puVar5 + lVar2);
  uVar7 = (ulonglong)uVar6;
  uVar8 = *(ushort *)((longlong)L"Fault" + lVar2);
  if (uVar6 == uVar8) {
    if (uVar6 == 0) goto LAB_146efbe97;
LAB_146efbd15:
    lVar2 = lVar2 + 2;
    goto LAB_146efbcfc;
  }
  if ((uVar8 | uVar6) < 0x80) {
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    uVar9 = (ulonglong)uVar8;
    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
    if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar9]) goto LAB_146efbd15;
  }
  if (uVar6 != uVar8) {
    lVar2 = 0;
    goto LAB_146efbd4e;
  }
LAB_146efbe97:
  *(undefined2 *)(param_1 + 0x32) = 8;
  *(undefined2 *)(param_1 + 0x36) = 6;
  *(undefined1 *)(param_1 + 0x39) = 8;
  *(undefined4 *)(param_1 + 0x1a) = 0xb000a;
  goto LAB_146efbe52;
LAB_146efbd4e:
  uVar6 = *(ushort *)((longlong)puVar5 + lVar2);
  uVar7 = (ulonglong)uVar6;
  uVar8 = *(ushort *)((longlong)L"PersistentFault" + lVar2);
  if (uVar6 == uVar8) {
    if (uVar6 == 0) goto LAB_146efbeb0;
LAB_146efbd67:
    lVar2 = lVar2 + 2;
    goto LAB_146efbd4e;
  }
  if ((uVar8 | uVar6) < 0x80) {
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    uVar9 = (ulonglong)uVar8;
    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
    if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar9]) goto LAB_146efbd67;
  }
  if (uVar6 != uVar8) {
    lVar2 = 0;
    goto LAB_146efbda0;
  }
LAB_146efbeb0:
  *(undefined2 *)(param_1 + 0x32) = 0x40;
  *(undefined1 *)(param_1 + 0x34) = 0x32;
  *(undefined4 *)(param_1 + 0x36) = 0x8280030;
  *(undefined4 *)(param_1 + 0x1a) = 0x14000a;
  goto LAB_146efbec8;
LAB_146efbda0:
  uVar6 = *(ushort *)((longlong)puVar5 + lVar2);
  uVar7 = (ulonglong)uVar6;
  uVar8 = *(ushort *)((longlong)L"DisconnectCountdown" + lVar2);
  if (uVar6 == uVar8) {
    if (uVar6 == 0) goto LAB_146efbece;
LAB_146efbdb9:
    lVar2 = lVar2 + 2;
    goto LAB_146efbda0;
  }
  if ((uVar8 | uVar6) < 0x80) {
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    uVar9 = (ulonglong)uVar8;
    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
    if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar9]) goto LAB_146efbdb9;
  }
  if (uVar6 != uVar8) {
    lVar2 = 0;
    goto LAB_146efbdf2;
  }
LAB_146efbece:
  *(undefined1 *)(param_1 + 0x34) = 0x46;
  *(undefined2 *)(param_1 + 0x38) = 0x1038;
  *(undefined4 *)(param_1 + 0x1a) = 0x3c000a;
LAB_146efbec8:
  *(undefined1 *)(param_1 + 0x18) = 1;
  goto LAB_146efbe52;
LAB_146efbdf2:
  uVar6 = *(ushort *)((longlong)puVar5 + lVar2);
  uVar7 = (ulonglong)uVar6;
  uVar8 = *(ushort *)((longlong)L"Disconnect" + lVar2);
  if (uVar6 == uVar8) {
    if (uVar6 == 0) goto LAB_146efbe36;
LAB_146efbe07:
    lVar2 = lVar2 + 2;
    goto LAB_146efbdf2;
  }
  if ((uVar8 | uVar6) < 0x80) {
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    uVar9 = (ulonglong)uVar8;
    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
    if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar9]) goto LAB_146efbe07;
  }
  uVar4 = CONCAT71((int7)(uVar3 >> 8),1);
  if (uVar6 != uVar8) goto LAB_146efbe54;
LAB_146efbe36:
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined1 *)(param_1 + 0x39) = 0;
LAB_146efbe52:
  uVar4 = 0;
LAB_146efbe54:
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146efbee2 FUN_146efbee2 body=183 status=ok
// SIG undefined FUN_146efbee2(void)

void FUN_146efbee2(longlong param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  short sVar4;
  ulonglong uVar5;
  char cVar6;
  
  sVar4 = *(short *)(param_1 + 0x32);
  sVar2 = *(short *)(param_1 + 0x36);
  if (sVar2 < 1 == 0 < sVar4) {
    if (sVar4 < sVar2) {
      sVar4 = sVar2;
    }
    *(short *)(param_1 + 0x32) = sVar4;
    *(short *)(param_1 + 0x36) = sVar4;
  }
  cVar1 = *(char *)(param_1 + 0x34);
  cVar6 = *(char *)(param_1 + 0x38);
  if (cVar6 < '\x01' == '\0' < cVar1) {
    if (cVar1 < cVar6) {
      cVar1 = cVar6;
    }
    *(char *)(param_1 + 0x34) = cVar1;
    *(char *)(param_1 + 0x38) = cVar1;
  }
  if ('\0' < *(char *)(param_1 + 0x39)) {
    FUN_146effcea(param_1 + 0x20);
  }
  uVar3 = *(uint *)(param_1 + 0x28);
  if ((ulonglong)uVar3 == 0) {
    cVar6 = '\0';
  }
  else {
    cVar6 = **(char **)(param_1 + 0x20);
    if (1 < (int)uVar3) {
      uVar5 = 1;
      do {
        cVar1 = (*(char **)(param_1 + 0x20))[uVar5];
        if (cVar1 < cVar6) {
          cVar1 = cVar6;
        }
        cVar6 = cVar1;
        uVar5 = uVar5 + 1;
      } while (uVar3 != uVar5);
    }
  }
  *(char *)(param_1 + 0x1e) = cVar6;
  return;
}



// FUNCTION 146efbf9c FUN_146efbf9c body=9 status=ok
// SIG undefined FUN_146efbf9c(void)

void FUN_146efbf9c(longlong param_1)

{
  FUN_146efbfa6(param_1 + 0x60);
  return;
}



// FUNCTION 146efbfa6 FUN_146efbfa6 body=143 status=ok
// SIG undefined FUN_146efbfa6(void)

undefined8 FUN_146efbfa6(longlong param_1,undefined8 param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar3 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar1 != 0) {
    lVar5 = 0;
    do {
      uVar2 = (**(code **)(**(longlong **)(lVar3 + lVar5) + 0x10))
                        (*(longlong **)(lVar3 + lVar5),param_2);
      if ((char)uVar2 != '\x02') {
        return uVar2;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x60);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return 2;
  }
  plVar4 = (longlong *)(param_1 + 0x80);
  if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x70);
  }
  uVar2 = (**(code **)(*plVar4 + 8))(plVar4);
                    /* WARNING: Could not recover jumptable at 0x000146efc024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar2,param_2);
  return uVar2;
}



// FUNCTION 146efc036 FUN_146efc036 body=444 status=ok
// SIG undefined FUN_146efc036(void)

ulonglong FUN_146efc036(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  
  lVar12 = *(longlong *)(param_1 + 0x10);
  if (lVar12 != 0) {
    cVar5 = FUN_144729dda(lVar12 + 0x70);
    if (((cVar5 != '\0') && (*(longlong *)(lVar12 + 0x78) != 0)) &&
       (*(char *)(*(longlong *)(lVar12 + 0x78) + 0x19) == '\x01')) {
      lVar12 = *(longlong *)(param_1 + 0x28);
      if (lVar12 != 0) {
        *(undefined8 *)(param_1 + 0x28) = 0;
        (**(code **)(lVar12 + -0x10))(lVar12 + -0x10);
      }
      *(undefined4 *)(param_1 + 0x58) = 0;
      if (*(int *)(param_1 + 0x5c) != 0) {
        FUN_146effd44(param_1 + 0x30,0);
      }
    }
  }
  iVar6 = FUN_144a78877((int)((ulonglong)*param_2 >> 0x20) * 0x17 + (int)*param_2);
  lVar12 = param_1 + 0x30;
  lVar8 = *(longlong *)(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x50) == 0) {
    lVar8 = lVar12;
  }
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    lVar11 = 0;
    do {
      if (*(int *)(lVar8 + lVar11) == iVar6) goto LAB_146efc1b7;
      lVar11 = lVar11 + 4;
    } while ((longlong)*(int *)(param_1 + 0x58) * 4 != lVar11);
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    puVar7 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    *puVar7 = FUN_146efe1bf;
    puVar7[1] = FUN_142a64494;
    uVar2 = *(undefined4 *)((longlong)param_2 + 4);
    uVar3 = *(undefined4 *)(param_2 + 1);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
    *(undefined4 *)(puVar7 + 2) = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)puVar7 + 0x14) = uVar2;
    *(undefined4 *)(puVar7 + 3) = uVar3;
    *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar4;
    puVar7[4] = param_2[2];
    puVar7[5] = param_2[3];
    param_2[3] = 0;
    *(undefined4 *)(puVar7 + 6) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((longlong)puVar7 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x24);
    param_2[4] = 0;
    puVar7[7] = param_2[5];
    param_2[5] = 0;
    lVar8 = *(longlong *)(param_1 + 0x28);
    *(undefined8 **)(param_1 + 0x28) = puVar7 + 2;
    if (lVar8 != 0) {
      (**(code **)(lVar8 + -0x10))(lVar8 + -0x10);
    }
  }
  else {
    FUN_146efe122(*(longlong *)(param_1 + 0x28),param_2);
  }
  iVar1 = *(int *)(param_1 + 0x58);
  *(uint *)(param_1 + 0x58) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x5c) < iVar1 + 1U) {
    FUN_140694806(lVar12,iVar1);
  }
  lVar8 = *(longlong *)(param_1 + 0x50);
  if (lVar8 != 0) {
    lVar12 = lVar8;
  }
  *(int *)(lVar12 + (longlong)iVar1 * 4) = iVar6;
LAB_146efc1b7:
  uVar9 = CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar10 = FUN_146efba1e();
    uVar9 = CONCAT71((int7)((ulonglong)uVar10 >> 8),*(undefined1 *)(param_1 + 8)) ^ 1;
  }
  return uVar9;
}



// FUNCTION 146efc1f2 FUN_146efc1f2 body=26 status=ok
// SIG undefined FUN_146efc1f2(void)

void FUN_146efc1f2(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    *(int *)(param_1 + 0xc) = param_2 + *(int *)(param_1 + 0xc);
    return;
  }
  FUN_146efc20c(*(longlong *)(param_1 + 0x10));
  return;
}



// FUNCTION 146efc20c FUN_146efc20c body=225 status=ok
// SIG undefined FUN_146efc20c(void)

void FUN_146efc20c(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146effdaa(param_1 + 0x240);
  FUN_146effdaa(param_1 + 0x2b0,param_2);
  FUN_146effdfa(param_1 + 800,param_2 << 4);
  lVar1 = *(longlong *)(param_1 + 0x2a0);
  if (*(longlong *)(param_1 + 0x2a0) == 0) {
    lVar1 = param_1 + 0x240;
  }
  *(longlong *)(param_1 + 0xa0) = lVar1;
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x2a8);
  lVar1 = *(longlong *)(param_1 + 0x310);
  if (*(longlong *)(param_1 + 0x310) == 0) {
    lVar1 = param_1 + 0x2b0;
  }
  *(longlong *)(param_1 + 0xb0) = lVar1;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x318);
  local_40 = *(longlong *)(param_1 + 0x920);
  if (*(longlong *)(param_1 + 0x920) == 0) {
    local_40 = param_1 + 800;
  }
  local_38 = *(undefined4 *)(param_1 + 0x928);
  FUN_146efb848(param_1,param_2);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146efc2ee FUN_146efc2ee body=54 status=ok
// SIG undefined FUN_146efc2ee(void)

longlong FUN_146efc2ee(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    (**(code **)(*param_1 + 8))(param_1);
    lVar1 = param_1[2];
  }
  return (longlong)param_2 * 0x10 + *(longlong *)(lVar1 + 0xa0);
}



// FUNCTION 146efc324 FUN_146efc324 body=167 status=ok
// SIG undefined FUN_146efc324(void)

void FUN_146efc324(longlong param_1,undefined8 *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0x58);
  lVar3 = (longlong)iVar1;
  *(uint *)(param_1 + 0x58) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x5c) < iVar1 + 1U) {
    FUN_146f001d4((longlong *)(param_1 + 0x50),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x50);
  *(undefined8 *)(lVar2 + lVar3 * 8) = *param_2;
  *param_2 = 0;
  uVar4 = 0;
  if (param_3 != '\0') {
    uVar4 = *(undefined4 *)(param_1 + 0x48);
  }
  local_38 = *(undefined8 *)(lVar2 + lVar3 * 8);
  FUN_146efc3cc(param_1,&local_38,uVar4);
  *(longlong *)(*(longlong *)(lVar2 + lVar3 * 8) + 8) = param_1;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000146efc3bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(lVar2 + lVar3 * 8) + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
}



// FUNCTION 146efc3cc FUN_146efc3cc body=118 status=ok
// SIG undefined FUN_146efc3cc(void)

int FUN_146efc3cc(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
    FUN_146f0025a(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar2 = param_1;
  }
  lVar3 = (longlong)param_3;
  memmove((void *)(lVar2 + lVar3 * 8 + 8),(void *)(lVar2 + lVar3 * 8),
          (ulonglong)(uint)(iVar1 - param_3) << 3);
  lVar2 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar2 = param_1;
  }
  *(undefined8 *)(lVar2 + lVar3 * 8) = *param_2;
  return param_3;
}



// FUNCTION 146efc44c FUN_146efc44c body=301 status=ok
// SIG undefined FUN_146efc44c(void)

longlong * FUN_146efc44c(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_1400020e8(param_3,L"_Archetype",10);
  if ((int)param_3[1] == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_3;
  }
  uVar2 = FUN_145a51194();
  plVar3 = (longlong *)FUN_140277b32(uVar2,uVar1,puVar5,0);
  if (plVar3 == (longlong *)0x0) {
    iVar4 = (int)param_3[1] + -1;
    if ((int)param_3[1] == 0) {
      iVar4 = 0;
    }
    FUN_1446f82e2(&local_40,iVar4,*param_3,1);
    uVar2 = FUN_1409ffe1d();
    local_48 = 0;
    plVar3 = (longlong *)FUN_146efc57a(uVar2,uVar1,local_40,0x20);
    iVar4 = (int)param_2[1] + -1;
    if ((int)param_2[1] == 0) {
      iVar4 = 0;
    }
    FUN_1402980a2(plVar3 + 10,*param_2,iVar4);
    (**(code **)(*plVar3 + 0x2a8))(plVar3);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146efc57a FUN_146efc57a body=207 status=ok
// SIG undefined FUN_146efc57a(void)

undefined8
FUN_146efc57a(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [8];
  undefined8 local_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong *local_78;
  longlong local_68 [6];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  FUN_144a5c54a(local_c8,param_2);
  local_a0 = param_5;
  local_a8 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_c0 = param_1;
  local_b8 = param_3;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(local_c8);
  if (local_88 != 0) {
    if (local_78 == (longlong *)0x0) {
      local_78 = local_68;
    }
    (**(code **)(*local_78 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146efc64a FUN_146efc64a body=63 status=ok
// SIG undefined FUN_146efc64a(void)

longlong FUN_146efc64a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146f003c2(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x28 + *param_1;
  FUN_146f003a4(lVar2);
  return lVar2;
}



// FUNCTION 146efc68a FUN_146efc68a body=196 status=ok
// SIG undefined FUN_146efc68a(void)

void FUN_146efc68a(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_146f0047c();
  if (cVar1 == '\0') {
    if (DAT_14c997e78 == 0) {
      uVar2 = FUN_141298036();
      DAT_14c997e78 = FUN_140002ddd(FUN_146288b04,uVar2,L"StateStruct");
    }
    local_18 = *(undefined8 *)(DAT_14c997e78 + 0x18);
    FUN_1400021e4(&local_18,&local_28);
    puVar3 = local_28;
    if (local_20 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_140033559("Runtime\\CoreUObject\\Public\\UObject/StructOnScope.h",0x105,
                  L"Initialize of %s failed",puVar3);
    if (local_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146efc76e FUN_146efc76e body=91 status=ok
// SIG undefined FUN_146efc76e(void)

void FUN_146efc76e(undefined8 param_1)

{
  undefined1 auStack_38 [44];
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((DAT_14c997ef0 != 0) && (*(int *)(DAT_14c997ef0 + 0x90) != 0)) &&
     (*(char *)(DAT_14c997ef0 + 0x94) == '\0')) {
    FUN_146f00566(DAT_14c997ef0,local_c,param_1);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146efc7ca FUN_146efc7ca body=258 status=ok
// SIG undefined FUN_146efc7ca(void)

uint * FUN_146efc7ca(uint *param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  uVar6 = 0xffffffff;
  if (DAT_14c997ef0 != 0) {
    uVar2 = *(uint *)(DAT_14c997ef0 + 0x60);
    if (uVar2 <= *(uint *)(DAT_14c997ef0 + 0x90)) {
      FUN_146efc8cc(DAT_14c997ef0 + 0x50,*(uint *)(DAT_14c997ef0 + 0x90) + 1);
      FUN_146efc8cc(DAT_14c997ef0 + 0x68,*(int *)(DAT_14c997ef0 + 0x90) + 1);
      uVar2 = *(uint *)(DAT_14c997ef0 + 0x60);
    }
    if ((ulonglong)*(uint *)(DAT_14c997ef0 + 0x58) != 0) {
      lVar7 = 0;
      puVar4 = *(uint **)(DAT_14c997ef0 + 0x50);
      do {
        if (*puVar4 != 0xffffffff) {
          uVar8 = *puVar4 ^ 0xffffffff;
          if (uVar8 == 0) {
            uVar3 = 0x20;
          }
          else {
            uVar3 = 0;
            if (uVar8 != 0) {
              for (; (uVar8 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
              }
            }
          }
          uVar8 = (uint)((ulonglong)uVar3 - lVar7);
          if (uVar8 < uVar2) {
            puVar4 = *(uint **)(DAT_14c997ef0 + 0x50) + ((ulonglong)uVar3 - lVar7 >> 5 & 0x7ffffff);
            *puVar4 = *puVar4 | 1 << ((byte)uVar3 & 0x1f);
            lVar7 = DAT_14c997ef0;
            iVar5 = *(int *)(DAT_14c997ef0 + 0x90) + 1;
            *(int *)(DAT_14c997ef0 + 0x90) = iVar5;
            FUN_146efc90c(lVar7 + 0x80,iVar5,0);
            pbVar1 = (byte *)(*(longlong *)(DAT_14c997ef0 + 0x80) + (longlong)(int)uVar8);
            *pbVar1 = *pbVar1 | 1;
            uVar6 = uVar8;
          }
          break;
        }
        lVar7 = lVar7 + -0x20;
        puVar4 = puVar4 + 1;
      } while ((ulonglong)*(uint *)(DAT_14c997ef0 + 0x58) * 0x20 + lVar7 != 0);
    }
  }
  *param_1 = uVar6;
  return param_1;
}



// FUNCTION 146efc8cc FUN_146efc8cc body=63 status=ok
// SIG undefined FUN_146efc8cc(void)

void FUN_146efc8cc(longlong *param_1,int param_2)

{
  byte bVar1;
  
  *(int *)(param_1 + 2) = param_2;
  FUN_1402d2c96(param_1,param_2 + 0x1fU >> 5,0);
  if ((int)param_1[2] != 0) {
    bVar1 = -(char)(int)param_1[2];
    *(uint *)(*param_1 + -4 + (longlong)(int)param_1[1] * 4) =
         (uint)(*(int *)(*param_1 + -4 + (longlong)(int)param_1[1] * 4) << (bVar1 & 0x1f)) >>
         (bVar1 & 0x1f);
  }
  return;
}



// FUNCTION 146efc90c FUN_146efc90c body=111 status=ok
// SIG undefined FUN_146efc90c(void)

void FUN_146efc90c(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f00a32(param_1,iVar1);
    }
    FUN_146f00a1e((longlong)iVar1 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146f00ab0(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146efc97c FUN_146efc97c body=139 status=ok
// SIG undefined FUN_146efc97c(void)

void FUN_146efc97c(uint param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if ((param_1 != 0xffffffff) && (param_1 < *(uint *)(DAT_14c997ef0 + 0x60))) {
    uVar3 = *(uint *)(*(longlong *)(DAT_14c997ef0 + 0x50) + (ulonglong)(param_1 >> 5) * 4);
    if ((uVar3 >> (param_1 & 0x1f) & 1) != 0) {
      uVar4 = ~(1 << ((byte)param_1 & 0x1f));
      uVar5 = (ulonglong)((param_1 >> 5) << 2);
      *(uint *)(*(longlong *)(DAT_14c997ef0 + 0x50) + uVar5) = uVar3 & uVar4;
      puVar2 = (uint *)(*(longlong *)(DAT_14c997ef0 + 0x68) + uVar5);
      *puVar2 = *puVar2 & uVar4;
      *(undefined1 *)(*(longlong *)(DAT_14c997ef0 + 0x80) + (longlong)(int)param_1) = 0;
      piVar1 = (int *)(DAT_14c997ef0 + 0x90);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_146efca08();
        *(undefined1 *)(DAT_14c997ef0 + 0x94) = 0;
      }
    }
  }
  return;
}



// FUNCTION 146efca08 FUN_146efca08 body=68 status=ok
// SIG undefined FUN_146efca08(void)

void FUN_146efca08(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_146f00b28();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14472eb64(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 146efca4c FUN_146efca4c body=84 status=ok
// SIG undefined FUN_146efca4c(void)

undefined * FUN_146efca4c(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  
  puVar3 = &DAT_14c997ea0;
  if ((DAT_14c997ef0 != (undefined *)0x0) && (uVar2 = *param_1, uVar2 != 0xffffffff)) {
    puVar1 = (uint *)(*(longlong *)(DAT_14c997ef0 + 0x68) + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
    *(byte *)(*(longlong *)(DAT_14c997ef0 + 0x80) + (longlong)(int)*param_1) =
         *(byte *)(*(longlong *)(DAT_14c997ef0 + 0x80) + (longlong)(int)*param_1) | 2;
    puVar3 = DAT_14c997ef0;
  }
  return puVar3;
}



// FUNCTION 146efcaa0 FUN_146efcaa0 body=25 status=ok
// SIG undefined FUN_146efcaa0(void)

void FUN_146efcaa0(int *param_1)

{
  if ((DAT_14c997ef0 != 0) && (*param_1 != -1)) {
    *(undefined1 *)(DAT_14c997ef0 + 0x94) = 1;
  }
  return;
}



// FUNCTION 146efcaba FUN_146efcaba body=91 status=ok
// SIG undefined FUN_146efcaba(void)

void FUN_146efcaba(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  ulonglong uVar4;
  
  if ((DAT_14c997ef0 != 0) && (uVar2 = *param_1, uVar2 != 0xffffffff)) {
    bVar3 = (byte)uVar2 & 0x1f;
    puVar1 = (uint *)(*(longlong *)(DAT_14c997ef0 + 0x68) + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    if ((ulonglong)*(uint *)(DAT_14c997ef0 + 0x70) != 0) {
      uVar4 = 0;
      do {
        if (*(int *)(*(longlong *)(DAT_14c997ef0 + 0x68) + uVar4 * 4) != 0) {
          return;
        }
        uVar4 = uVar4 + 1;
      } while (*(uint *)(DAT_14c997ef0 + 0x70) != uVar4);
    }
    *(undefined1 *)(DAT_14c997ef0 + 0x94) = 0;
    FUN_146efca08();
    return;
  }
  return;
}



// FUNCTION 146efcb16 FUN_146efcb16 body=112 status=ok
// SIG undefined FUN_146efcb16(void)

undefined8 FUN_146efcb16(uint *param_1)

{
  uint *puVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  
  lVar3 = DAT_14c997ef0;
  uVar5 = 0;
  if ((DAT_14c997ef0 != 0) && (*param_1 != 0xffffffff)) {
    uVar5 = 0;
    iVar4 = FUN_146efd25e(*(undefined8 *)(DAT_14c997ef0 + 0x50),
                          *(undefined4 *)(DAT_14c997ef0 + 0x60),0,0xffffffff);
    if (iVar4 == 1) {
      *(undefined1 *)(lVar3 + 0x94) = 0;
      FUN_146efca08(lVar3);
      bVar2 = (byte)*param_1 & 0x1f;
      puVar1 = (uint *)(*(longlong *)(DAT_14c997ef0 + 0x68) + (ulonglong)(*param_1 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
      uVar5 = 1;
    }
  }
  return uVar5;
}



// FUNCTION 146efcb86 FUN_146efcb86 body=134 status=ok
// SIG undefined FUN_146efcb86(void)

undefined8 * FUN_146efcb86(undefined8 *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8d) = 0;
  FUN_146efcc74(local_18,param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146efcc0e FUN_146efcc0e body=102 status=ok
// SIG undefined FUN_146efcc0e(void)

void FUN_146efcc0e(longlong param_1)

{
  FUN_140457ffc(&DAT_14c867438,param_1);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145d14674(param_1);
  return;
}



// FUNCTION 146efcc74 FUN_146efcc74 body=223 status=ok
// SIG undefined FUN_146efcc74(void)

undefined8 FUN_146efcc74(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  *local_30 = &PTR_LAB_149e020b0;
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
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_149f7d070;
  local_30[3] = param_2;
  local_30[4] = FUN_146efcd54;
  FUN_1448b6402(&DAT_14c867438,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146efcd54 FUN_146efcd54 body=73 status=ok
// SIG undefined FUN_146efcd54(void)

void FUN_146efcd54(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x70);
  if ((ulonglong)uVar1 != 0) {
    uVar2 = 0;
    do {
      if (*(int *)((longlong)*(void **)(param_1 + 0x68) + uVar2 * 4) != 0) {
        memset(*(void **)(param_1 + 0x68),0,(longlong)(int)uVar1 << 2);
        FUN_146efca08(param_1);
        *(undefined1 *)(param_1 + 0x94) = 0;
        return;
      }
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  return;
}



// FUNCTION 146efcd9e FUN_146efcd9e body=59 status=ok
// SIG undefined FUN_146efcd9e(void)

longlong FUN_146efcd9e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146f00e60(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x38 + *param_1;
  FUN_146f00e32(lVar2);
  return lVar2;
}



// FUNCTION 146efcdda FUN_146efcdda body=102 status=ok
// SIG undefined FUN_146efcdda(void)

void FUN_146efcdda(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146f00f0a(param_1,iVar1);
    }
    FUN_146f00ef0((longlong)iVar1 * 0x1c + *param_1,param_2 - iVar1);
    return;
  }
  if (iVar1 <= param_2) {
    return;
  }
  *(int *)(param_1 + 1) = param_2;
  FUN_146f00fa8(param_1);
  return;
}



// FUNCTION 146efce40 FUN_146efce40 body=391 status=ok
// SIG undefined FUN_146efce40(void)

bool FUN_146efce40(int *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  double dVar9;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  QueryPerformanceCounter(&local_28);
  dVar9 = (double)local_28.QuadPart * DAT_14c83f420 + 16777216.0;
  iVar7 = (int)((dVar9 - *(double *)(param_1 + 0x28)) * 1000.0);
  iVar2 = *param_1;
  if ((param_1[8] < 1 || iVar2 < param_1[8]) && (param_1[9] < 1 || param_1[2] < param_1[9])) {
    if ((param_1[10] < 1 || param_1[3] < param_1[10]) &&
       ((short)param_1[0xb] < 1 || iVar7 <= (short)param_1[0xb])) {
      if (((char)param_1[0x1a] == '\0') && (0 < (longlong)(char)param_1[0x16])) {
        lVar5 = *(longlong *)(param_1 + 0x12);
        lVar8 = (longlong)(char)param_1[0x16] * 0x38;
        iVar3 = *(int *)(lVar5 + -0x34 + lVar8);
        iVar4 = *(int *)(lVar5 + -0x30 + lVar8);
        if ((iVar3 < 1 || iVar2 < iVar3) && (iVar4 < 1 || param_1[2] < iVar4)) {
          sVar1 = *(short *)(lVar5 + lVar8 + -0x28);
          iVar2 = *(int *)(lVar5 + lVar8 + -0x2c);
          if ((iVar2 < 1 || param_1[3] < iVar2) && (sVar1 < 1 || iVar7 <= sVar1))
          goto LAB_146efcf83;
        }
        *(double *)(param_1 + 0x18) = dVar9;
        *(undefined1 *)(param_1 + 0x1a) = 1;
      }
      goto LAB_146efcf83;
    }
  }
  FUN_142a63524(param_1,CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1));
LAB_146efcf83:
  iVar2 = param_1[0xc];
  bVar6 = true;
  if ((iVar2 != 0) && ((iVar2 < 1 || (*param_1 - param_1[0x2c] < iVar2)))) {
    bVar6 = param_1[0xd] < iVar7 && 0 < param_1[0xd];
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146efcfc8 FUN_146efcfc8 body=366 status=ok
// SIG undefined FUN_146efcfc8(void)

undefined4 * FUN_146efcfc8(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined8 *puVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0xf) = 0xffffffff00000080;
  param_1[0x11] = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  FUN_140492002(param_1 + 4,param_2 + 4);
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x22] = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x23) = 0xffffffff00000080;
  param_1[0x25] = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x2a] = 0;
  FUN_140492002(param_1 + 0x18,param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x2c) = 0;
  iVar1 = param_2[0x2e];
  _Src = *(void **)(param_2 + 0x2c);
  param_1[0x2e] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x2f] = 0;
  }
  else {
    FUN_1447a127e(param_1 + 0x2c,iVar1,0);
    memcpy(*(void **)(param_1 + 0x2c),_Src,(longlong)iVar1);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x32);
  lVar2 = *(longlong *)(param_2 + 0x30);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    puVar3[4] = 0;
    *(undefined4 *)(puVar3 + 5) = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined8 *)((longlong)puVar3 + 0x2c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar3 + 0x34) = 0;
    puVar3[8] = 0;
    *(undefined4 *)(puVar3 + 9) = 0;
    FUN_140cae968(puVar3,lVar2);
    *(undefined8 **)(param_1 + 0x30) = puVar3;
  }
  FUN_140492276(param_1);
  return param_1;
}



// FUNCTION 146efd136 FUN_146efd136 body=23 status=ok
// SIG undefined FUN_146efd136(void)

bool FUN_146efd136(longlong param_1)

{
  return DAT_14c997f10 == param_1 || DAT_14c997f08 == param_1;
}



// FUNCTION 146efd14e FUN_146efd14e body=104 status=ok
// SIG undefined FUN_146efd14e(void)

void FUN_146efd14e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 8) << 6,(longlong)*(int *)(param_1 + 0xc) << 6);
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0x28) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  lVar1 = (longlong)*(int *)(param_1 + 0x48) << 2;
                    /* WARNING: Could not recover jumptable at 0x000146efd1b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2,lVar1,lVar1);
  return;
}



// FUNCTION 146efd1b6 FUN_146efd1b6 body=167 status=ok
// SIG undefined FUN_146efd1b6(void)

void FUN_146efd1b6(longlong param_1,uint param_2,uint param_3,uint param_4,longlong param_5,
                  uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  if (((param_4 != 0) && (param_3 < param_2)) && (param_6 != 0)) {
    uVar8 = ((ulonglong)param_4 + (ulonglong)param_3) - 1;
    uVar4 = (ulonglong)param_2 - 1;
    if (uVar8 < (ulonglong)param_2 - 1) {
      uVar4 = uVar8;
    }
    uVar7 = param_3 & 0xffffffe0;
    uVar3 = (uint)uVar4;
    if (uVar7 <= uVar3) {
      uVar5 = param_3 >> 5;
      uVar2 = 0;
      do {
        uVar6 = *(uint *)(param_1 + (ulonglong)uVar5 * 4);
        uVar1 = uVar2;
        if (uVar6 != 0) {
          do {
            uVar9 = 0;
            if (uVar6 != 0) {
              for (; (uVar6 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
              }
            }
            uVar9 = uVar9 | uVar7;
            uVar2 = (uVar9 <= uVar3 && param_3 <= uVar9) + uVar1;
            *(uint *)(param_5 + (ulonglong)uVar1 * 4) = uVar9;
            uVar6 = uVar6 - 1 & uVar6;
          } while ((uVar6 != 0) && (uVar1 = uVar2, uVar2 < param_6));
        }
        uVar7 = uVar7 + 0x20;
      } while ((uVar7 <= uVar3) && (uVar5 = uVar5 + 1, uVar2 < param_6));
    }
  }
  return;
}



// FUNCTION 146efd25e FUN_146efd25e body=236 status=ok
// SIG undefined FUN_146efd25e(void)

int FUN_146efd25e(longlong param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  iVar1 = 0;
  if (param_4 != 0 && param_3 < param_2) {
    uVar6 = ((ulonglong)param_4 + (ulonglong)param_3) - 1;
    uVar2 = (ulonglong)param_2 - 1;
    if (uVar6 < (ulonglong)param_2 - 1) {
      uVar2 = uVar6;
    }
    uVar6 = uVar2 >> 5 & 0x7ffffff;
    uVar5 = (uint)uVar6;
    if (param_3 >> 5 <= uVar5) {
      uVar4 = -1 << ((byte)param_3 & 0x1f);
      uVar3 = (ulonglong)(param_3 >> 5);
      iVar1 = 0;
      do {
        uVar7 = 0xffffffff;
        if (uVar6 == uVar3) {
          uVar7 = 0xffffffff >> (~(byte)uVar2 & 0x1f);
        }
        uVar4 = uVar7 & uVar4 & *(uint *)(param_1 + uVar3 * 4);
        uVar8 = (ulonglong)uVar4 - (ulonglong)(uVar4 >> 1 & 0x55555555);
        uVar8 = (uVar8 >> 2 & 0x3333333333333333) + (uVar8 & 0x3333333333333333);
        iVar1 = iVar1 + (uint)(byte)(((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                    >> 0x38);
        uVar3 = uVar3 + 1;
        uVar4 = 0xffffffff;
      } while (uVar5 + ((param_3 >> 5) - (param_3 >> 5)) + 1 != uVar3);
    }
  }
  return iVar1;
}



// FUNCTION 146efd34a FUN_146efd34a body=388 status=ok
// SIG undefined FUN_146efd34a(void)

longlong * FUN_146efd34a(longlong *param_1,undefined8 **param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  undefined8 **ppuVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  ulonglong **local_50;
  ulonglong *local_48;
  undefined8 ***local_40;
  undefined8 ***local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  plVar3 = DAT_14c997f58;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (ulonglong *)param_2;
  if (DAT_14c997f58 != (longlong *)0x0) {
    if ((int)DAT_14c997f58[9] != 0) {
      uVar6 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
              -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      plVar7 = DAT_14c997f58 + 7;
      if ((longlong *)DAT_14c997f58[8] != (longlong *)0x0) {
        plVar7 = (longlong *)DAT_14c997f58[8];
      }
      puVar4 = (ulonglong *)
               ((longlong)plVar7 +
               (longlong)(int)((int)DAT_14c997f58[9] - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
      do {
        uVar2 = *puVar4;
        lVar8 = (longlong)(int)uVar2;
        if (lVar8 == -1) goto LAB_146efd41f;
        puVar1 = (ulonglong *)(*DAT_14c997f58 + lVar8 * 0x18);
        puVar4 = puVar1 + 2;
      } while ((undefined8 **)*puVar1 != param_2);
      local_40 = *(undefined8 ****)(*DAT_14c997f58 + 8 + lVar8 * 0x18);
      *param_1 = (longlong)local_40;
      ppuVar5 = (undefined8 **)FUN_1409ca440();
      if (ppuVar5 == param_2) goto LAB_146efd458;
      FUN_146f01392(plVar3,(int)uVar2);
      FUN_146f0145c(DAT_14c997f58 + 10,param_1);
    }
LAB_146efd41f:
    if ((param_2 != (undefined8 **)0x0) && ((*(uint *)(param_2 + 1) >> 0x1e & 1) == 0)) {
      local_40 = (undefined8 ***)0x0;
      FUN_14485c47a(&local_40,param_2);
      local_50 = (ulonglong **)local_40;
      if (local_40 != (undefined8 ***)0x0) {
        local_40 = &local_50;
        local_38 = (undefined8 ***)&local_48;
        FUN_146f015a6(DAT_14c997f58 + 10,local_2c,&local_40);
        local_40 = (undefined8 ***)&local_48;
        local_38 = &local_50;
        FUN_146f019fc(DAT_14c997f58,local_2c,&local_40);
        *param_1 = (longlong)local_50;
        goto LAB_146efd458;
      }
    }
  }
  *param_1 = 0;
LAB_146efd458:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146efd4d0 FUN_146efd4d0 body=134 status=ok
// SIG undefined FUN_146efd4d0(void)

void FUN_146efd4d0(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c997f58 != 0) {
    lVar1 = DAT_14c997f58 + 0x50;
    FUN_146f01e86(lVar1,&local_1c,param_1);
    if (local_1c != -1) {
      FUN_146f014dc(lVar1);
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



// FUNCTION 146efd568 FUN_146efd568 body=85 status=ok
// SIG undefined FUN_146efd568(void)

void FUN_146efd568(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xa0);
  memset(_Dst,0,0xa0);
  *(undefined8 *)((longlong)_Dst + 0x2c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x50) = 0;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x7c) = 0xffffffff00000080;
  DAT_14c997f58 = _Dst;
  return;
}



// FUNCTION 146efd5be FUN_146efd5be body=83 status=ok
// SIG undefined FUN_146efd5be(void)

void FUN_146efd5be(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_146efe3f0(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_146efe47e(param_1);
  return;
}



// FUNCTION 146efd612 FUN_146efd612 body=281 status=ok
// SIG undefined FUN_146efd612(void)

void FUN_146efd612(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  
  uVar2 = (uint)((ulonglong)param_3 >> 0x20);
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = uVar2 >> 0xd ^ (int)param_3 - uVar2;
    uVar6 = uVar3 << 8 ^ (-0x61c88647 - uVar3) - uVar2;
    uVar8 = uVar6 >> 0xd ^ (uVar2 - uVar3) - uVar6;
    uVar3 = uVar8 >> 0xc ^ (uVar3 - uVar6) - uVar8;
    uVar6 = uVar3 << 0x10 ^ (uVar6 - uVar8) - uVar3;
    uVar8 = uVar6 >> 5 ^ (uVar8 - uVar3) - uVar6;
    uVar9 = uVar8 >> 3 ^ (uVar3 - uVar6) - uVar8;
    uVar3 = uVar9 << 10 ^ (uVar6 - uVar8) - uVar9;
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (uVar3 >> 0xf ^ uVar8 - (uVar9 + uVar3))) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      do {
        lVar7 = (longlong)iVar4 * 0x20;
        lVar1 = lVar5 + lVar7;
        if ((*(int *)(lVar5 + lVar7) == (int)param_3) && (*(uint *)(lVar5 + 4 + lVar7) == uVar2)) {
          if (lVar1 != 0) {
            *param_2 = *(undefined8 *)(lVar1 + 8);
            lVar5 = *(longlong *)(lVar1 + 0x10);
            param_2[1] = lVar5;
            if (lVar5 == 0) {
              return;
            }
            LOCK();
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
            UNLOCK();
            return;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x18);
      } while (iVar4 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 146efd72c FUN_146efd72c body=111 status=ok
// SIG undefined FUN_146efd72c(void)

int FUN_146efd72c(longlong param_1,ushort param_2)

{
  ushort *puVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar3 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x60);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x68) - 1U & (uint)param_2) * 4);
    if (iVar2 != -1) {
      do {
        puVar1 = (ushort *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar2 * 0xc);
        if (*puVar1 == param_2) {
          if (puVar1 + 1 == (ushort *)0x0 || puVar1 == (ushort *)0x0) {
            return 0xe;
          }
          return (int)(short)puVar1[1];
        }
        iVar2 = *(int *)(puVar1 + 2);
      } while (iVar2 != -1);
    }
  }
  return 0xe;
}



// FUNCTION 146efd79b thunk_FUN_146f022b6 body=5 status=ok
// SIG undefined thunk_FUN_146f022b6(void)

void thunk_FUN_146f022b6(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 uStack_20;
  undefined4 uStack_18;
  ulonglong uStack_10;
  
  uStack_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != &DAT_14c9980d0) {
    uStack_20 = 0;
    uStack_18 = 0;
    plVar1 = (longlong *)*param_1;
    if (plVar1 != (longlong *)0x0 && (int)param_1[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&uStack_20);
    }
    FUN_144a450dc(&DAT_14c9980d0,&uStack_20);
    FUN_1449db362(&uStack_20);
  }
  if ((uStack_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146efd7a0 thunk_FUN_146f02340 body=5 status=ok
// SIG undefined thunk_FUN_146f02340(void)

void thunk_FUN_146f02340(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 uStack_20;
  undefined4 uStack_18;
  ulonglong uStack_10;
  
  uStack_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != &DAT_14c9980e0) {
    uStack_20 = 0;
    uStack_18 = 0;
    plVar1 = (longlong *)*param_1;
    if (plVar1 != (longlong *)0x0 && (int)param_1[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&uStack_20);
    }
    FUN_144a450dc(&DAT_14c9980e0,&uStack_20);
    FUN_1449db362(&uStack_20);
  }
  if ((uStack_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146efd7a6 FUN_146efd7a6 body=214 status=ok
// SIG undefined FUN_146efd7a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146efd7a6(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c9980f0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c9980f0,4000);
  DAT_14c998138 = 0;
  DAT_14c998140 = 0;
  DAT_14c998118 = 0;
  _DAT_14c998120 = 0;
  _DAT_14c998144 = 0xffffffff00000080;
  DAT_14c99814c = 0;
  DAT_14c998158 = 0;
  DAT_14c998160 = 0;
  _DAT_14c998168 = 0;
  uRam000000014c998170 = 0;
  _DAT_14c998178 = 0;
  uRam000000014c998180 = 0;
  _DAT_14c998186 = 0;
  uRam000000014c998188 = 0;
  if (DAT_14c872d30 == 0) {
    FUN_145bdc178();
    if (0x1ff < (uint)(DAT_14c998120 - DAT_14c99814c)) {
      DAT_14c998190 = 0;
      return;
    }
  }
  DAT_14c998190 = 0;
  FUN_146f023ca();
  if (0x1ff < DAT_14c998160) {
    return;
  }
  DAT_14c998160 = 0x200;
  FUN_146f0259e(&DAT_14c998118);
  return;
}



// FUNCTION 146efd87c FUN_146efd87c body=178 status=ok
// SIG undefined FUN_146efd87c(void)

undefined * FUN_146efd87c(void)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [8];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c998198) {
    FUN_144b3d300(&DAT_14c998198);
    if (DAT_14c998198 == -1) {
      FUN_146efd7a6();
      atexit((_func_5014 *)&LAB_142a643a3);
      _Init_thread_footer(&DAT_14c998198);
    }
  }
  if (DAT_14c998190 == '\0') {
    FUN_14123f5ce(&DAT_14c8687e8,local_10,FUN_146efd972);
    DAT_14c998190 = '\x01';
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return &DAT_14c9980f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146efd930 FUN_146efd930 body=66 status=ok
// SIG undefined FUN_146efd930(void)

void FUN_146efd930(void)

{
  FUN_14004673c(&DAT_14c998168,0);
  DAT_14c998160 = 0;
  if (DAT_14c998158 != 0) {
    FUN_1400020a8();
  }
  FUN_146efea22();
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c9980f0);
  return;
}



// FUNCTION 146efd972 FUN_146efd972 body=32 status=ok
// SIG undefined FUN_146efd972(void)

void FUN_146efd972(void)

{
  FUN_146efd87c();
  FUN_146f0275e();
  FUN_14004673c(&DAT_14c998168,0);
  return;
}



// FUNCTION 146efd992 FUN_146efd992 body=420 status=ok
// SIG undefined FUN_146efd992(void)

ulonglong FUN_146efd992(LPCRITICAL_SECTION param_1,wchar_t *param_2,int param_3,longlong *param_4)

{
  LPCRITICAL_SECTION p_Var1;
  WORD *pWVar2;
  uint uVar3;
  longlong lVar4;
  _RTL_CRITICAL_SECTION *p_Var5;
  int iVar6;
  HANDLE *ppvVar7;
  PRTL_CRITICAL_SECTION_DEBUG p_Var8;
  ulonglong uVar9;
  _RTL_CRITICAL_SECTION **pp_Var10;
  undefined1 auStack_98 [40];
  _RTL_CRITICAL_SECTION *local_70;
  longlong local_68;
  longlong *local_60;
  _RTL_CRITICAL_SECTION **local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = param_3 * 2;
  lVar4 = FUN_1447addd0(param_2,uVar3);
  local_70 = (_RTL_CRITICAL_SECTION *)0x0;
  local_68 = lVar4;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != param_1[2].RecursionCount) {
    ppvVar7 = &param_1[2].OwningThread;
    if (param_1[2].LockSemaphore != (HANDLE *)0x0) {
      ppvVar7 = param_1[2].LockSemaphore;
    }
    iVar6 = *(int *)((longlong)ppvVar7 +
                    (ulonglong)
                    ((int)param_1[2].SpinCount - 1U &
                    (int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) * 4);
    if (iVar6 != -1) {
      do {
        pWVar2 = &(param_1[1].DebugInfo)->Type + (longlong)iVar6 * 0xc;
        if (*(longlong *)pWVar2 == lVar4) {
          if (pWVar2 != (WORD *)0x0) {
            pp_Var10 = (_RTL_CRITICAL_SECTION **)(pWVar2 + 4);
            uVar9 = 0;
            goto LAB_146efdaf8;
          }
          break;
        }
        iVar6 = *(int *)&((LIST_ENTRY *)(pWVar2 + 8))->Flink;
      } while (iVar6 != -1);
    }
  }
  p_Var1 = param_1 + 3;
  p_Var5 = (_RTL_CRITICAL_SECTION *)
           ((ulonglong)&(param_1[3].DebugInfo)->field_0x7 & 0xfffffffffffffff8);
  p_Var8 = (PRTL_CRITICAL_SECTION_DEBUG)((longlong)&p_Var5->OwningThread + (ulonglong)uVar3 + 2);
  if (*(PRTL_CRITICAL_SECTION_DEBUG *)&param_1[3].LockCount < p_Var8) {
    FUN_140023dd8(p_Var1,uVar3 + 0x1a);
    p_Var5 = (_RTL_CRITICAL_SECTION *)
             ((ulonglong)&p_Var1->DebugInfo->field_0x7 & 0xfffffffffffffff8);
    p_Var8 = (PRTL_CRITICAL_SECTION_DEBUG)((longlong)&p_Var5->OwningThread + (ulonglong)uVar3 + 2);
  }
  p_Var1->DebugInfo = p_Var8;
  pp_Var10 = &local_70;
  p_Var5->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var5->OwningThread;
  *(undefined2 *)&p_Var5->LockCount = 0;
  local_60 = &local_68;
  local_70 = p_Var5;
  local_58 = pp_Var10;
  FUN_146f02910(param_1 + 1,local_4c);
  p_Var8 = local_70->DebugInfo;
  wcsncpy((wchar_t *)p_Var8,param_2,(longlong)(param_3 + 1) - 1);
  *(wchar_t *)((longlong)p_Var8 + ((longlong)(param_3 + 1) + -1) * 2) = L'\0';
  uVar9 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
LAB_146efdaf8:
  *param_4 = (longlong)*pp_Var10;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146efdb37 FUN_146efdb37 body=91 status=ok
// SIG undefined FUN_146efdb37(void)

undefined8 FUN_146efdb37(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146efd87c();
  FUN_146efd992(&DAT_14c9980f0,param_1,param_2,&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146efdc1c FUN_146efdc1c body=59 status=ok
// SIG undefined FUN_146efdc1c(void)

undefined8 FUN_146efdc1c(longlong *param_1)

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



// FUNCTION 146efdd30 FUN_146efdd30 body=87 status=ok
// SIG undefined FUN_146efdd30(void)

undefined8 FUN_146efdd30(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      FUN_144a787a6(param_2 + -0x18,param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -5);
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      *(undefined4 *)(param_2 + -5) = uVar1;
      FUN_140bec736(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 146efddb0 FUN_146efddb0 body=59 status=ok
// SIG undefined FUN_146efddb0(void)

undefined8 FUN_146efddb0(longlong *param_1)

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



// FUNCTION 146efddf6 FUN_146efddf6 body=34 status=ok
// SIG undefined FUN_146efddf6(void)

void FUN_146efddf6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_146efe0dc(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 146efde66 FUN_146efde66 body=38 status=ok
// SIG undefined FUN_146efde66(void)

undefined8 FUN_146efde66(undefined8 param_1,int param_2)

{
  FUN_146efe0dc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146efde94 FUN_146efde94 body=57 status=ok
// SIG undefined FUN_146efde94(void)

undefined8 * FUN_146efde94(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f7d360;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146efdf70 FUN_146efdf70 body=103 status=ok
// SIG undefined FUN_146efdf70(void)

undefined8 FUN_146efdf70(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined4 *)(param_3 + 0x18);
    puVar2 = (undefined4 *)(param_2 + 0x18);
    do {
      FUN_144a787a6(puVar2 + -4,puVar3 + -4);
      uVar1 = *(undefined4 *)((longlong)puVar3 + 3);
      *puVar2 = *puVar3;
      *(undefined4 *)((longlong)puVar2 + 3) = uVar1;
      FUN_140bec736(puVar2 + 2,puVar3 + 2);
      *(undefined8 *)(puVar2 + 6) = *(undefined8 *)(puVar3 + 6);
      *(undefined2 *)(puVar2 + 8) = *(undefined2 *)(puVar3 + 8);
      puVar3 = puVar3 + 0x10;
      puVar2 = puVar2 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 146efe000 FUN_146efe000 body=59 status=ok
// SIG undefined FUN_146efe000(void)

undefined8 FUN_146efe000(longlong *param_1)

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



// FUNCTION 146efe046 FUN_146efe046 body=34 status=ok
// SIG undefined FUN_146efe046(void)

void FUN_146efe046(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_146efe0dc(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 146efe0b6 FUN_146efe0b6 body=38 status=ok
// SIG undefined FUN_146efe0b6(void)

undefined8 FUN_146efe0b6(undefined8 param_1,int param_2)

{
  FUN_146efe0dc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146efe0dc FUN_146efe0dc body=68 status=ok
// SIG undefined FUN_146efe0dc(void)

void FUN_146efe0dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f7d330;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149f7d360;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146efe122 FUN_146efe122 body=157 status=ok
// SIG undefined FUN_146efe122(void)

void FUN_146efe122(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  do {
    lVar6 = param_1;
    param_1 = *(longlong *)(lVar6 + 0x28);
  } while (*(longlong *)(lVar6 + 0x28) != 0);
  puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar5 = FUN_146efe1bf;
  puVar5[1] = FUN_142a64494;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(puVar5 + 2) = *param_2;
  *(undefined4 *)((longlong)puVar5 + 0x14) = uVar2;
  *(undefined4 *)(puVar5 + 3) = uVar3;
  *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar4;
  puVar5[4] = *(undefined8 *)(param_2 + 4);
  puVar5[5] = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined4 *)(puVar5 + 6) = param_2[8];
  *(undefined4 *)((longlong)puVar5 + 0x34) = param_2[9];
  *(undefined8 *)(param_2 + 8) = 0;
  puVar5[7] = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_2 + 10) = 0;
  lVar1 = *(longlong *)(lVar6 + 0x28);
  *(undefined8 **)(lVar6 + 0x28) = puVar5 + 2;
  if (lVar1 != 0) {
                    /* WARNING: Jumptable with 0 entries at 0x000146efe1b3 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
    return;
  }
  return;
}



// FUNCTION 146efe1bf FUN_146efe1bf body=51 status=ok
// SIG undefined FUN_146efe1bf(void)

void FUN_146efe1bf(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146efe1f2 FUN_146efe1f2 body=137 status=ok
// SIG undefined FUN_146efe1f2(void)

undefined4 * FUN_146efe1f2(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *(undefined8 *)(param_1 + 6) = 0;
  iVar1 = param_2[8];
  _Src = *(void **)(param_2 + 6);
  param_1[8] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[9] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy(*(void **)(param_1 + 6),_Src,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 10) = 0;
  if (*(longlong *)(param_2 + 10) != 0) {
    uVar5 = (**(code **)(*(longlong *)(param_2 + 10) + -8))();
    *(undefined8 *)(param_1 + 10) = uVar5;
  }
  return param_1;
}



// FUNCTION 146efe2c4 FUN_146efe2c4 body=62 status=ok
// SIG undefined FUN_146efe2c4(void)

undefined1 FUN_146efe2c4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 146efe32a FUN_146efe32a body=59 status=ok
// SIG undefined FUN_146efe32a(void)

undefined8 FUN_146efe32a(longlong *param_1)

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



// FUNCTION 146efe370 FUN_146efe370 body=48 status=ok
// SIG undefined FUN_146efe370(void)

void FUN_146efe370(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_149f7d360;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 146efe3f0 FUN_146efe3f0 body=52 status=ok
// SIG undefined FUN_146efe3f0(void)

void FUN_146efe3f0(longlong *param_1)

{
  FUN_146efe424();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146efe424 FUN_146efe424 body=89 status=ok
// SIG undefined FUN_146efe424(void)

void FUN_146efe424(longlong param_1)

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



// FUNCTION 146efe47e FUN_146efe47e body=52 status=ok
// SIG undefined FUN_146efe47e(void)

void FUN_146efe47e(longlong *param_1)

{
  FUN_146efe4b2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146efe4b2 FUN_146efe4b2 body=89 status=ok
// SIG undefined FUN_146efe4b2(void)

void FUN_146efe4b2(longlong param_1)

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



// FUNCTION 146efe50c FUN_146efe50c body=230 status=ok
// SIG undefined FUN_146efe50c(void)

int * FUN_146efe50c(longlong *param_1,int *param_2)

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
      FUN_1447cc1b4(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xc);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xc) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xc + *param_1;
  return param_2;
}



// FUNCTION 146efe5f2 FUN_146efe5f2 body=148 status=ok
// SIG undefined FUN_146efe5f2(void)

void FUN_146efe5f2(longlong *param_1,uint param_2,short *param_3,int *param_4,undefined1 *param_5)

{
  short *psVar1;
  undefined1 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        psVar1 = (short *)(*param_1 + (longlong)iVar4 * 0xc);
        if (*psVar1 == *param_3) {
          *(undefined4 *)psVar1 = *(undefined4 *)param_3;
          FUN_146efe686(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          goto LAB_146efe65e;
        }
        iVar4 = *(int *)(psVar1 + 2);
      } while (iVar4 != -1);
    }
  }
  uVar2 = 0;
LAB_146efe65e:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 146efe686 FUN_146efe686 body=138 status=ok
// SIG undefined FUN_146efe686(void)

void FUN_146efe686(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0xc + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xc) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146efe710 FUN_146efe710 body=410 status=ok
// SIG undefined FUN_146efe710(void)

void FUN_146efe710(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
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
        uVar8 = (int)param_1[9] - 1U & (uint)*(ushort *)(lVar2 + lVar5 * 0xc);
        *(uint *)(lVar2 + 8 + lVar5 * 0xc) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 4 + lVar5 * 0xc) =
             *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
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



// FUNCTION 146efe8ac FUN_146efe8ac body=31 status=ok
// SIG undefined FUN_146efe8ac(void)

undefined8 FUN_146efe8ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146efe8dc FUN_146efe8dc body=93 status=ok
// SIG undefined FUN_146efe8dc(void)

void FUN_146efe8dc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149f7ca50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}


