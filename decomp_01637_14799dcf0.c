// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14799dcf0 FUN_14799dcf0 body=173 status=ok
// SIG undefined FUN_14799dcf0(void)

void FUN_14799dcf0(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (*(char *)(param_1 + 0x43) == '\x01') {
    dVar1 = *(double *)(param_1 + 0x68);
    dVar2 = *(double *)(param_1 + 0x70);
    dVar3 = (param_3[2] - *(double *)(param_1 + 0x58)) * dVar2 +
            (*param_3 - *(double *)(param_1 + 0x48)) * *(double *)(param_1 + 0x60) +
            (param_3[1] - *(double *)(param_1 + 0x50)) * dVar1;
    *param_3 = *param_3 - dVar3 * *(double *)(param_1 + 0x60);
    param_3[1] = param_3[1] - dVar1 * dVar3;
    param_3[2] = param_3[2] - dVar2 * dVar3;
  }
  param_2[2] = param_3[2];
  dVar1 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = dVar1;
  return;
}



// FUNCTION 14799dd9e FUN_14799dd9e body=216 status=ok
// SIG undefined FUN_14799dd9e(void)

void FUN_14799dd9e(longlong param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar3 = *(double *)(param_2 + 0xb0);
  dVar4 = 0.0;
  if ((dVar3 != 0.0) || (NAN(dVar3))) {
    if (*(char *)(param_1 + 0x9c) == '\0') {
      dVar1 = *(double *)(param_2 + 0xa0);
      dVar2 = *(double *)(param_2 + 0xa8);
      dVar7 = dVar1 * dVar1 + dVar2 * dVar2;
      if (((dVar7 != 1.0) || (dVar4 = 0.0, dVar5 = dVar1, dVar6 = dVar2, NAN(dVar7))) &&
         (dVar4 = DAT_14c8464f0, dVar5 = DAT_14c8464e0, dVar6 = DAT_14c8464e8,
         9.99999993922529e-09 <= dVar7)) {
        dVar4 = 0.0;
        dVar5 = dVar1 * (1.0 / SQRT(dVar7));
        dVar6 = dVar2 * (1.0 / SQRT(dVar7));
      }
      dVar3 = SQRT(dVar3 * dVar3 + dVar7);
      dVar4 = dVar4 * dVar3;
      *(double *)(param_2 + 0xa0) = dVar5 * dVar3;
      *(double *)(param_2 + 0xa8) = dVar6 * dVar3;
    }
    *(double *)(param_2 + 0xb0) = dVar4;
  }
  return;
}



// FUNCTION 14799de76 FUN_14799de76 body=203 status=ok
// SIG undefined FUN_14799de76(void)

void FUN_14799de76(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4,
                  longlong param_5,undefined8 param_6,undefined1 param_7)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  longlong *local_90;
  longlong local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  local_68 = *(undefined8 *)(param_2 + 4);
  (**(code **)(*param_1 + 0x90))(local_78,local_58);
  local_a0 = *(undefined4 *)(param_5 + 0xd4);
  local_88 = param_5;
  local_98 = param_7;
  local_a8 = param_6;
  local_90 = param_1;
  (**(code **)(*(longlong *)param_1[0x54] + 8))((longlong *)param_1[0x54],param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14799df42 FUN_14799df42 body=280 status=ok
// SIG undefined FUN_14799df42(void)

undefined4
FUN_14799df42(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5,longlong param_6,undefined1 param_7)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  undefined1 local_68;
  undefined1 local_60 [24];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(uint *)(param_6 + 0xd4);
  uVar3 = uVar1 | 0xc;
  if (DAT_14cad1f8c != 0) {
    uVar3 = uVar1;
  }
  *(uint *)(param_6 + 0xd4) = uVar3;
  local_68 = param_7;
  local_70 = param_5;
  local_78 = param_6;
  uVar4 = (**(code **)(*param_1 + 0xa8))(param_1);
  *(uint *)(param_6 + 0xd4) = uVar1;
  if ((*(byte *)(param_5 + 0xad) & 2) != 0) {
    (**(code **)(*param_1 + 0x140))(param_1,local_60,param_5);
    local_78 = param_6;
    cVar2 = (**(code **)(*param_1 + 0x148))(param_1,local_60,param_5,param_3);
    if (cVar2 != '\0') {
      local_68 = param_7;
      local_70 = param_5;
      local_78 = param_6;
      uVar4 = (**(code **)(*param_1 + 0xa8))(param_1,param_2,param_3,param_4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14799e05c FUN_14799e05c body=336 status=ok
// SIG undefined FUN_14799e05c(void)

void FUN_14799e05c(longlong *param_1,float param_2,longlong param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  
  if ((*(double *)(param_3 + 0x100) == 0.0) && (!NAN(*(double *)(param_3 + 0x100)))) {
    dVar5 = *(double *)(param_3 + 0xe8);
    uVar3 = SUB84(dVar5,0);
    uVar4 = (undefined4)((ulonglong)dVar5 >> 0x20);
    if ((dVar5 == 0.0) && (!NAN(dVar5))) goto LAB_14799e101;
  }
  cVar2 = (**(code **)(*param_1 + 0x278))(param_1,param_3);
  dVar5 = *(double *)(param_3 + 0xe8);
  uVar3 = SUB84(dVar5,0);
  uVar4 = (undefined4)((ulonglong)dVar5 >> 0x20);
  if (cVar2 != '\0') {
    if (9.99999993922529e-09 <
        (double)(*(float *)((longlong)param_1 + 0x8c) * param_2) +
        (double)param_2 * dVar5 + *(double *)(param_3 + 0x100)) {
      (**(code **)(*param_1 + 200))(param_1,3,param_3,0);
      uVar3 = (undefined4)*(undefined8 *)(param_3 + 0xe8);
      uVar4 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0xe8) >> 0x20);
    }
  }
LAB_14799e101:
  dVar5 = (double)param_2;
  *(double *)(param_3 + 0xa0) =
       dVar5 * *(double *)(param_3 + 0xd8) + *(double *)(param_3 + 0xf0) +
       *(double *)(param_3 + 0xa0);
  *(double *)(param_3 + 0xa8) =
       *(double *)(param_3 + 0xe0) * dVar5 + *(double *)(param_3 + 0xf8) +
       *(double *)(param_3 + 0xa8);
  *(double *)(param_3 + 0xb0) =
       (double)CONCAT44(uVar4,uVar3) * dVar5 + *(double *)(param_3 + 0x100) +
       *(double *)(param_3 + 0xb0);
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_3 + 0xf0) = DAT_14c8464e0;
  *(undefined8 *)(param_3 + 0xf8) = uVar1;
  *(undefined8 *)(param_3 + 0x100) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_3 + 0xd8) = DAT_14c8464e0;
  *(undefined8 *)(param_3 + 0xe0) = uVar1;
  *(undefined8 *)(param_3 + 0xe8) = DAT_14c8464f0;
  return;
}



// FUNCTION 14799e202 FUN_14799e202 body=88 status=ok
// SIG undefined FUN_14799e202(void)

void FUN_14799e202(longlong *param_1,int param_2,longlong param_3,char param_4)

{
  if (param_2 != 6) {
    param_4 = '\0';
  }
  if (*(int *)(param_3 + 0x1c) != param_2 || param_4 != *(char *)(param_3 + 0x24) && param_2 == 6) {
    *(int *)(param_3 + 0x1c) = param_2;
    *(char *)(param_3 + 0x24) = param_4;
    if ((char)param_1[0xf] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00014799e253. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xd0))();
      return;
    }
  }
  return;
}



// FUNCTION 14799e25a FUN_14799e25a body=424 status=ok
// SIG undefined FUN_14799e25a(void)

void FUN_14799e25a(longlong *param_1,undefined4 param_2,undefined1 param_3,longlong param_4)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((char)param_1[0xf] != '\x01') goto LAB_14799e35f;
  if (*(int *)(param_4 + 0x1c) == 1) {
    *(undefined8 *)(param_4 + 0xb0) = 0;
    *(undefined1 *)(param_4 + 0x120) = 1;
    *(undefined4 *)(param_4 + 0x20) = 1;
    if ((*(longlong *)(param_1[0x54] + 0xc0) == 0) ||
       (plVar2 = *(longlong **)(*(longlong *)(param_1[0x54] + 0xc0) + 0x48),
       plVar2 == (longlong *)0x0)) {
      local_38 = DAT_14c8464f0;
      local_48 = (undefined4)DAT_14c8464e0;
      uStack_44 = DAT_14c8464e0._4_4_;
      uStack_40 = (undefined4)DAT_14c8464e8;
      uStack_3c = DAT_14c8464e8._4_4_;
    }
    else {
      local_38 = *(undefined8 *)
                  (*(longlong *)(*plVar2 + 0x28) + 0x10 + (longlong)(int)plVar2[1] * 0x18);
      puVar1 = (undefined4 *)(*(longlong *)(*plVar2 + 0x28) + (longlong)(int)plVar2[1] * 0x18);
      local_48 = *puVar1;
      uStack_44 = puVar1[1];
      uStack_40 = puVar1[2];
      uStack_3c = puVar1[3];
    }
    local_50 = 0;
    local_58 = param_4;
    (**(code **)(*param_1 + 0xd8))(param_1,&local_48,param_4 + 0x130,0);
    (**(code **)(*param_1 + 0x1b8))(param_1,param_4);
    if ((~*(uint *)(param_4 + 0x130) & 3) != 0) goto LAB_14799e33b;
    uVar3 = FUN_14479d2ce(param_4 + 0x218);
    *(undefined8 *)(param_4 + 0x338) = uVar3;
    uVar3 = FUN_14485cccc(param_4 + 0x1f8);
    *(undefined8 *)(param_4 + 0x340) = uVar3;
  }
  else {
    *(byte *)(param_4 + 0x130) = *(byte *)(param_4 + 0x130) & 0xf8;
    *(undefined8 *)(param_4 + 0x134) = 0;
    memset((void *)(param_4 + 0x140),0,0x100);
    *(undefined4 *)(param_4 + 0x210) = 0xffffffff;
    *(undefined4 *)(param_4 + 0x1e4) = 0xffffffff;
    *(undefined4 *)(param_4 + 0x144) = 0x3f800000;
    *(undefined1 *)(param_4 + 0x120) = 0;
LAB_14799e33b:
    *(undefined8 *)(param_4 + 0x338) = 0;
    *(undefined8 *)(param_4 + 0x340) = 0;
  }
  local_58 = CONCAT71(local_58._1_7_,param_3);
  (**(code **)(*(longlong *)param_1[0x55] + 0x30))
            ((longlong *)param_1[0x55],param_2,param_1,param_4);
LAB_14799e35f:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14799e404 FUN_14799e404 body=658 status=ok
// SIG undefined FUN_14799e404(void)

void FUN_14799e404(longlong *param_1,undefined8 param_2,uint *param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6)

{
  char cVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_1b8 [32];
  uint *local_198;
  longlong local_190;
  longlong local_188;
  undefined8 local_180;
  uint local_170;
  undefined8 local_16c;
  undefined1 local_160 [4];
  undefined4 local_15c;
  undefined4 local_bc;
  undefined4 local_90;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (((char)param_1[0xf] == '\x01') && (*(char *)(param_1[0x54] + 8) != '\0')) {
    cVar1 = (**(code **)(*param_1 + 0x278))(param_1,param_5);
    if (cVar1 == '\0') {
      fVar5 = -2.4;
    }
    else {
      fVar5 = 2.4001;
    }
    fVar2 = *(float *)((longlong)param_1 + 0x7c) + fVar5;
    fVar4 = 2.4;
    if (2.4 <= fVar2) {
      fVar4 = fVar2;
    }
    if (0.0 < fVar4) {
      *(undefined1 *)(param_5 + 0x98) = 0;
      local_180 = param_6;
      local_188 = param_5;
      local_190 = CONCAT44(local_190._4_4_,*(undefined4 *)(param_5 + 0x124));
      local_198 = param_3;
      (**(code **)(*param_1 + 0xe0))(param_1,param_2,*param_1,fVar4);
    }
    if ((*param_3 & 5) == 1) {
      cVar1 = (**(code **)(*param_1 + 0x1c0))(param_1,param_3 + 4,param_5,1);
      if (cVar1 != '\0') {
        fVar5 = fVar5 + *(float *)((longlong)param_1 + 0x7c);
        fVar4 = 2.4;
        if (2.4 <= fVar5) {
          fVar4 = fVar5;
        }
        cVar1 = (**(code **)(*param_1 + 0x278))(param_1);
        if (cVar1 != '\0') {
          fVar5 = 0.0;
          if (0.0 <= *(float *)((longlong)param_1 + 0x104)) {
            fVar5 = *(float *)((longlong)param_1 + 0x104);
          }
          fVar4 = fVar4 + fVar5;
        }
        local_170 = 0;
        local_16c = 0;
        memset(local_160,0,0x100);
        local_90 = 0xffffffff;
        local_bc = 0xffffffff;
        local_15c = 0x3f800000;
        uVar3 = (**(code **)(*param_1 + 0x1d0))(param_1,param_5);
        local_190 = param_5;
        local_198 = &local_170;
        cVar1 = (**(code **)(*param_1 + 0x1c8))(param_1,uVar3,param_3 + 4,fVar4);
        if (cVar1 == '\0') {
          *(byte *)param_3 = (byte)*param_3 & 0xfd;
        }
        else {
          fVar5 = (float)param_3[1];
          if (fVar4 <= (2.15 - fVar5) + (float)local_16c) {
            param_3[1] = 0x4009999a;
            fVar5 = 2.15;
          }
          if ((*param_3 & 2) == 0) {
            fVar4 = fVar5;
            if (fVar5 <= 1.9) {
              fVar4 = 1.9;
            }
            local_198 = (uint *)CONCAT71(local_198._1_7_,1);
            FUN_1407b691e(param_3,local_160,fVar5,fVar4);
          }
        }
      }
    }
  }
  else {
    *(byte *)param_3 = (byte)*param_3 & 0xf8;
    param_3[1] = 0;
    param_3[2] = 0;
    memset(param_3 + 4,0,0x100);
    param_3[0x38] = 0xffffffff;
    param_3[0x2d] = 0xffffffff;
    param_3[5] = 0x3f800000;
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14799e698 FUN_14799e698 body=1654 status=ok
// SIG undefined FUN_14799e698(void)

void FUN_14799e698(longlong *param_1,double *param_2,float param_3,float param_4,uint *param_5,
                  float param_6,longlong param_7,longlong param_8)

{
  double dVar1;
  double dVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_238 [32];
  undefined4 local_218;
  longlong *local_210;
  longlong *local_208;
  longlong *local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  double local_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined1 local_1c0 [4];
  float local_1bc;
  undefined1 local_198 [124];
  undefined4 local_11c;
  byte local_113;
  undefined4 local_f0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  *(byte *)param_5 = (byte)*param_5 & 0xf8;
  param_5[1] = 0;
  param_5[2] = 0;
  memset(param_5 + 4,0,0x100);
  param_5[0x38] = 0xffffffff;
  param_5[0x2d] = 0xffffffff;
  param_5[5] = 0x3f800000;
  fVar10 = *(float *)(param_7 + 0x124);
  fVar8 = *(float *)(param_7 + 0x128);
  bVar3 = 1;
  if ((((param_8 != 0) && ((*(byte *)(param_8 + 0xad) & 3) == 1)) &&
      (*(double *)(param_8 + 0x98) <= *(double *)(param_8 + 0x80) &&
       *(double *)(param_8 + 0x80) != *(double *)(param_8 + 0x98))) &&
     ((dVar2 = *(double *)(param_8 + 0x78) - *(double *)(param_8 + 0x90),
      dVar1 = *(double *)(param_8 + 0x70) - *(double *)(param_8 + 0x88),
      dVar1 * dVar1 + dVar2 * dVar2 <= 9.999999747378752e-05 &&
      (cVar4 = (**(code **)(*param_1 + 0xf0))(param_1,param_8 + 0x10,param_8 + 0x28,fVar10),
      cVar4 != '\0')))) {
    uVar5 = (**(code **)(*param_1 + 0xf8))(param_1,param_8);
    FUN_143431ca4(param_5,param_8,(float)(param_2[2] - *(double *)(param_8 + 0x20)),uVar5);
    if ((char)uVar5 != '\0') goto LAB_14799e828;
    bVar3 = 0;
  }
  if (param_4 < param_3) goto LAB_14799e828;
  if ((0.0 < param_6) && ((bool)(0.0 < param_4 & bVar3))) {
    fVar12 = (fVar8 - fVar10) * 0.100000024;
    fVar11 = fVar12 + param_4;
    local_1f0 = (double)CONCAT44(param_6,3);
    local_1e8 = (double)CONCAT44(local_1e8._4_4_,fVar8 - fVar12);
    memset(local_1c0,0,0x100);
    local_f0 = 0xffffffff;
    local_11c = 0xffffffff;
    local_1bc = 1.0;
    local_218 = (undefined4)param_1[0x6c];
    local_1c8 = param_2[2] - (double)fVar11;
    dStack_1d0 = param_2[1] + 0.0;
    local_1d8 = *param_2 + 0.0;
    local_1f8 = param_7;
    local_210 = &local_1f0;
    local_208 = param_1 + 0x57;
    local_200 = param_1 + 0x68;
    cVar4 = (**(code **)(*param_1 + 0xe8))(param_1,local_1c0,param_2);
    if (cVar4 != '\0') {
      if ((local_113 & 2) == 0) {
        cVar4 = (**(code **)(*param_1 + 0xf0))(param_1,param_2,local_198,local_1f0._4_4_);
        if (cVar4 == '\0') goto LAB_14799e9db;
      }
      else {
LAB_14799e9db:
        fVar9 = local_1f0._4_4_ + -0.15 + -0.0001;
        fVar7 = 0.0;
        if (0.0 <= fVar9) {
          fVar7 = fVar9;
        }
        local_1f0 = (double)CONCAT44(fVar7,(int)local_1f0);
        fVar9 = fVar7;
        if ((int)local_1f0 - 2U < 2) {
LAB_14799ea12:
          if (0.0001 < fVar9) {
LAB_14799ea23:
            fVar12 = (fVar8 - fVar10) * 0.9;
            fVar11 = fVar12 + param_4;
            fVar9 = fVar8 - fVar12;
            if (fVar8 - fVar12 <= fVar7) {
              fVar9 = fVar7;
            }
            local_1e8 = (double)CONCAT44(local_1e8._4_4_,fVar9);
            memset(local_1c0,0,0x100);
            local_f0 = 0xffffffff;
            local_11c = 0xffffffff;
            local_1bc = 1.0;
            local_218 = (undefined4)param_1[0x6c];
            local_1c8 = param_2[2] - (double)fVar11;
            dStack_1d0 = param_2[1] + 0.0;
            local_1d8 = *param_2 + 0.0;
            local_1f8 = param_7;
            local_210 = &local_1f0;
            local_208 = param_1 + 0x57;
            local_200 = param_1 + 0x68;
            (**(code **)(*param_1 + 0xe8))(param_1,local_1c0,param_2);
          }
        }
        else if ((int)local_1f0 == 1) {
          if ((fVar7 <= 0.0001) && (fVar9 = local_1e8._4_4_, (float)local_1e8 <= 0.0001))
          goto LAB_14799ea12;
          goto LAB_14799ea23;
        }
      }
      fVar12 = fVar11 * local_1bc - fVar12;
      fVar11 = (float)(~-(uint)(fVar10 < 2.4) & (uint)-fVar10 | -(uint)(fVar10 < 2.4) & 0xc019999a);
      if (fVar11 <= fVar12) {
        fVar11 = fVar12;
      }
      FUN_143431ca4(param_5,local_1c0,fVar11,0);
      if ((((local_113 & 3) == 1) &&
          (cVar4 = (**(code **)(*param_1 + 0xf8))(param_1), fVar11 <= param_4)) && (cVar4 != '\0'))
      {
        *(byte *)param_5 = (byte)*param_5 | 2;
        goto LAB_14799e828;
      }
    }
  }
  uVar6 = *param_5;
  if (((uVar6 & 1) == 0) && ((*(byte *)((longlong)param_5 + 0xbd) & 2) == 0)) {
    param_5[1] = (uint)param_4;
  }
  else {
    if (0.0 < param_3) {
      local_1c8 = param_2[2];
      local_1d8 = *param_2;
      dStack_1d0 = param_2[1];
      memset(local_1c0,0,0x100);
      local_f0 = 0xffffffff;
      local_11c = 0xffffffff;
      local_1bc = 1.0;
      local_208 = param_1 + 0x68;
      local_210 = param_1 + 0x57;
      local_218 = (undefined4)param_1[0x6c];
      local_1e0 = local_1c8 - (double)(fVar8 + param_3);
      local_1e8 = dStack_1d0 + 0.0;
      local_1f0 = local_1d8 + 0.0;
      cVar4 = FUN_1400b50cc(param_1[0x56],local_1c0,&local_1d8);
      uVar6 = *param_5;
      if ((cVar4 != '\0') && (0.0 < local_1bc)) {
        fVar8 = local_1bc * (fVar8 + param_3) - fVar8;
        fVar10 = (float)(~-(uint)(fVar10 < 2.4) & (uint)-fVar10 | -(uint)(fVar10 < 2.4) & 0xc019999a
                        );
        if (fVar10 <= fVar8) {
          fVar10 = fVar8;
        }
        uVar6 = uVar6 | 1;
        *param_5 = uVar6;
        if (fVar10 <= param_3) {
          cVar4 = (**(code **)(*param_1 + 0xf8))(param_1,local_1c0);
          if (cVar4 != '\0') {
            local_218 = CONCAT31(local_218._1_3_,1);
            FUN_1407b691e(param_5,local_1c0,param_5[1],fVar10);
            goto LAB_14799e828;
          }
          uVar6 = *param_5;
        }
      }
    }
    *param_5 = uVar6 & 0xfffffffd;
  }
LAB_14799e828:
  if ((local_c0 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14799ed10 FUN_14799ed10 body=442 status=ok
// SIG undefined FUN_14799ed10(void)

undefined8
FUN_14799ed10(longlong param_1,void *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,longlong param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined4 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x88) == '\0') {
    local_88 = param_8;
    local_90 = param_7;
    local_98 = (undefined4 *)param_6;
    local_a0 = param_5;
    local_a8 = &DAT_14c8463d0;
    FUN_14021655c(*(undefined8 *)(param_1 + 0x2b0),param_2,param_3,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
  }
  local_4c = *(undefined4 *)(param_6 + 8);
  local_54 = *(float *)(param_6 + 4) * 0.707;
  local_58 = 1;
  local_a8 = &local_78;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0xbfd87de2b185d541;
  local_60 = 0x3fed906bccf3cb87;
  local_88 = param_8;
  local_90 = param_7;
  local_a0 = param_5;
  local_98 = &local_58;
  local_50 = local_54;
  cVar1 = FUN_14021655c(*(undefined8 *)(param_1 + 0x2b0),param_2,param_3,param_4);
  uVar2 = 1;
  if (cVar1 == '\0') {
    memset(param_2,0,0x100);
    *(undefined4 *)((longlong)param_2 + 0xd0) = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 0xa4) = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 4) = 0x3f800000;
    local_88 = param_8;
    local_90 = param_7;
    local_a0 = param_5;
    local_a8 = &DAT_14c8463d0;
    local_98 = &local_58;
    uVar2 = FUN_14021655c(*(undefined8 *)(param_1 + 0x2b0),param_2,param_3,param_4);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14799efa2 FUN_14799efa2 body=2493 status=ok
// SIG undefined FUN_14799efa2(void)

void FUN_14799efa2(longlong *param_1,undefined8 param_2,float param_3,char param_4,
                  undefined4 param_5,longlong param_6)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_148 [32];
  longlong local_128;
  undefined4 local_120;
  undefined4 *local_118;
  float *local_110;
  longlong local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  float local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((char)param_1[0xf] == '\x01') {
    fVar13 = (float)param_2;
    if (((1e-06 <= fVar13) && ((char)param_1[0x28] == '\0')) &&
       ((*(int *)(param_1[0x55] + 0x10) != 1 || (*(char *)((longlong)param_1 + 0x32) == '\x01')))) {
      fVar20 = 0.0;
      if (0.0 <= param_3) {
        fVar20 = param_3;
      }
      fVar19 = *(float *)(param_1 + 7);
      uVar11 = (**(code **)(*param_1 + 600))(param_1,param_6);
      local_118 = &local_d8;
      local_c8 = DAT_14c8464f0;
      local_d8 = (undefined4)DAT_14c8464e0;
      uStack_d4 = DAT_14c8464e0._4_4_;
      uStack_d0 = (undefined4)DAT_14c8464e8;
      uStack_cc = DAT_14c8464e8._4_4_;
      local_110 = &local_dc;
      local_dc = 0.0;
      local_108 = param_6;
      local_120 = param_5;
      local_128 = CONCAT44(local_128._4_4_,fVar20);
      bVar5 = (**(code **)(*param_1 + 0x118))(param_1,param_2,fVar19,uVar11);
      if (*(char *)((longlong)param_1 + 0x34) == '\x01') {
        dVar14 = *(double *)(param_6 + 0x28);
        dVar15 = *(double *)(param_6 + 0x30);
        dVar17 = *(double *)(param_6 + 0x38);
        dVar16 = dVar17 * dVar17 + dVar14 * dVar14 + dVar15 * dVar15;
        if (dVar16 <= 9.99999993922529e-09) {
          dVar14 = *(double *)(param_6 + 0xa0);
          dVar15 = *(double *)(param_6 + 0xa8);
          dVar17 = *(double *)(param_6 + 0xb0);
          dVar16 = dVar17 * dVar17 + dVar14 * dVar14 + dVar15 * dVar15;
          if (dVar16 < 9.99999993922529e-09) {
            FUN_14799f960(param_1[0x54],&local_f8);
          }
          else if ((dVar16 != 1.0) || (NAN(dVar16))) {
            local_f8 = 1.0 / SQRT(dVar16);
            local_e8 = dVar17 * local_f8;
            dStack_f0 = dVar15 * local_f8;
            local_f8 = dVar14 * local_f8;
          }
          else {
            local_e8 = *(double *)(param_6 + 0xb0);
            local_f8 = *(double *)(param_6 + 0xa0);
            dStack_f0 = *(double *)(param_6 + 0xa8);
          }
          dVar14 = (double)fVar19;
          *(double *)(param_6 + 0x28) = dVar14 * local_f8;
          *(double *)(param_6 + 0x30) = dStack_f0 * dVar14;
          *(double *)(param_6 + 0x38) = local_e8 * dVar14;
        }
        else {
          if ((dVar16 != 1.0) || (NAN(dVar16))) {
            if (9.99999993922529e-09 <= dVar16) {
              dVar16 = 1.0 / SQRT(dVar16);
              dVar17 = dVar17 * dVar16;
              dVar15 = dVar15 * dVar16;
              dVar14 = dVar14 * dVar16;
            }
            else {
              dVar14 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
              dVar15 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
              dVar17 = DAT_14c8464f0;
            }
          }
          dVar16 = (double)fVar19;
          *(double *)(param_6 + 0x28) = dVar14 * dVar16;
          *(double *)(param_6 + 0x30) = dVar15 * dVar16;
          *(double *)(param_6 + 0x38) = dVar17 * dVar16;
        }
        *(undefined4 *)(param_6 + 0x40) = 0x3f800000;
      }
      fVar9 = (float)(**(code **)(*param_1 + 0x128))(param_1,param_6);
      fVar19 = *(float *)(param_6 + 0x40) * (float)uVar11;
      if (fVar19 <= fVar9) {
        fVar19 = fVar9;
      }
      fVar9 = local_dc;
      if (local_dc <= fVar19) {
        fVar9 = fVar19;
      }
      bVar7 = false;
      bVar8 = false;
      if ((((*(double *)(param_6 + 0x28) == 0.0) &&
           (bVar8 = bVar7, !NAN(*(double *)(param_6 + 0x28)))) &&
          (*(double *)(param_6 + 0x30) == 0.0)) && (!NAN(*(double *)(param_6 + 0x30)))) {
        bVar8 = *(double *)(param_6 + 0x38) == 0.0;
      }
      cVar6 = (**(code **)(*param_1 + 0x280))(param_1,fVar9,param_6);
      if (((bVar8 & (bVar5 ^ 1)) == 0) && (cVar6 == '\0')) {
        if (bVar8 == false) {
          dVar14 = *(double *)(param_6 + 0x28);
          dVar15 = *(double *)(param_6 + 0x30);
          dVar17 = *(double *)(param_6 + 0x38);
          dVar16 = dVar17 * dVar17 + dVar14 * dVar14 + dVar15 * dVar15;
          if ((dVar16 != 1.0) || (NAN(dVar16))) {
            if (9.99999993922529e-09 <= dVar16) {
              dVar16 = 1.0 / SQRT(dVar16);
              dVar17 = dVar17 * dVar16;
              dVar15 = dVar15 * dVar16;
              dVar14 = dVar14 * dVar16;
            }
            else {
              dVar14 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
              dVar15 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
              dVar17 = DAT_14c8464f0;
            }
          }
          dVar16 = *(double *)(param_6 + 0xa0);
          dVar18 = *(double *)(param_6 + 0xa8);
          dVar2 = *(double *)(param_6 + 0xb0);
          dVar4 = (double)(float)SQRT(dVar2 * dVar2 + dVar16 * dVar16 + dVar18 * dVar18);
          fVar9 = fVar20 * fVar13;
          if (1.0 <= fVar9) {
            fVar9 = 1.0;
          }
          dVar3 = (double)fVar9;
          *(double *)(param_6 + 0xa0) = dVar16 - (dVar16 - dVar14 * dVar4) * dVar3;
          *(double *)(param_6 + 0xa8) = dVar18 - (dVar18 - dVar15 * dVar4) * dVar3;
          *(double *)(param_6 + 0xb0) = dVar2 - (dVar2 - dVar17 * dVar4) * dVar3;
        }
      }
      else {
        fVar1 = fVar20;
        if (*(char *)((longlong)param_1 + 0x9d) == '\x01') {
          fVar1 = *(float *)(param_1 + 0x15);
        }
        dVar14 = *(double *)(param_6 + 0xa0);
        dVar15 = *(double *)(param_6 + 0xa8);
        dVar17 = *(double *)(param_6 + 0xb0);
        local_128 = param_6;
        (**(code **)(*param_1 + 0x138))(param_1,param_2,fVar1,param_5);
        if (((cVar6 != '\0') &&
            (*(double *)(param_6 + 0xb0) * *(double *)(param_6 + 0xb0) +
             *(double *)(param_6 + 0xa0) * *(double *)(param_6 + 0xa0) +
             *(double *)(param_6 + 0xa8) * *(double *)(param_6 + 0xa8) < (double)(fVar9 * fVar9)))
           && (0.0 < *(double *)(param_6 + 0x38) * dVar17 +
                     *(double *)(param_6 + 0x28) * dVar14 + *(double *)(param_6 + 0x30) * dVar15)) {
          dVar16 = dVar17 * dVar17 + dVar14 * dVar14 + dVar15 * dVar15;
          if ((dVar16 != 1.0) || (NAN(dVar16))) {
            if (9.99999993922529e-09 <= dVar16) {
              dVar16 = 1.0 / SQRT(dVar16);
              dVar17 = dVar17 * dVar16;
              dVar15 = dVar15 * dVar16;
              dVar14 = dVar14 * dVar16;
            }
            else {
              dVar14 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
              dVar15 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
              dVar17 = DAT_14c8464f0;
            }
          }
          dVar16 = (double)fVar9;
          *(double *)(param_6 + 0xa0) = dVar14 * dVar16;
          *(double *)(param_6 + 0xa8) = dVar15 * dVar16;
          *(double *)(param_6 + 0xb0) = dVar17 * dVar16;
        }
      }
      if (param_4 != '\0') {
        fVar20 = fVar20 * fVar13;
        if (1.0 <= fVar20) {
          fVar20 = 1.0;
        }
        dVar14 = (double)(1.0 - fVar20);
        *(double *)(param_6 + 0xa0) = dVar14 * *(double *)(param_6 + 0xa0);
        *(double *)(param_6 + 0xa8) = *(double *)(param_6 + 0xa8) * dVar14;
        *(double *)(param_6 + 0xb0) = *(double *)(param_6 + 0xb0) * dVar14;
      }
      if (bVar8 == false) {
        cVar6 = (**(code **)(*param_1 + 0x280))(param_1,fVar19,param_6);
        dVar14 = *(double *)(param_6 + 0xa0);
        dVar15 = *(double *)(param_6 + 0xa8);
        if (cVar6 == '\0') {
          dVar17 = *(double *)(param_6 + 0xb0);
        }
        else {
          dVar17 = *(double *)(param_6 + 0xb0);
          fVar19 = (float)SQRT(dVar17 * dVar17 + dVar14 * dVar14 + dVar15 * dVar15);
        }
        if (0.0001 <= fVar19) {
          dVar16 = (double)fVar13;
          dVar17 = dVar17 + *(double *)(param_6 + 0x38) * dVar16;
          dVar14 = dVar14 + dVar16 * *(double *)(param_6 + 0x28);
          dVar15 = dVar15 + *(double *)(param_6 + 0x30) * dVar16;
          dVar16 = (double)fVar19;
          dVar18 = dVar17 * dVar17 + dVar14 * dVar14 + dVar15 * dVar15;
          if (dVar16 * dVar16 < dVar18) {
            dVar16 = (1.0 / SQRT(dVar18)) * dVar16;
            dVar17 = dVar17 * dVar16;
            dVar15 = dVar15 * dVar16;
            dVar14 = dVar14 * dVar16;
          }
        }
        else {
          dVar14 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          dVar15 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          dVar17 = DAT_14c8464f0;
        }
        *(double *)(param_6 + 0xa0) = dVar14;
        *(double *)(param_6 + 0xa8) = dVar15;
        *(double *)(param_6 + 0xb0) = dVar17;
      }
      if (bVar5 != 0) {
        cVar6 = (**(code **)(*param_1 + 0x280))(param_1,local_dc,param_6);
        if (cVar6 == '\0') {
          uVar10 = (undefined4)*(undefined8 *)(param_6 + 0xa0);
          uVar12 = (undefined4)((ulonglong)*(undefined8 *)(param_6 + 0xa0) >> 0x20);
          dVar14 = *(double *)(param_6 + 0xa8);
          dVar15 = *(double *)(param_6 + 0xb0);
          fVar20 = local_dc;
        }
        else {
          dVar17 = *(double *)(param_6 + 0xa0);
          uVar10 = SUB84(dVar17,0);
          uVar12 = (undefined4)((ulonglong)dVar17 >> 0x20);
          dVar14 = *(double *)(param_6 + 0xa8);
          dVar15 = *(double *)(param_6 + 0xb0);
          fVar20 = (float)SQRT(dVar15 * dVar15 + dVar17 * dVar17 + dVar14 * dVar14);
        }
        if (0.0001 <= fVar20) {
          dVar17 = (double)fVar13;
          dVar15 = dVar15 + local_c8 * dVar17;
          dVar14 = dVar14 + (double)CONCAT44(uStack_cc,uStack_d0) * dVar17;
          dVar17 = (double)CONCAT44(uVar12,uVar10) + dVar17 * (double)CONCAT44(uStack_d4,local_d8);
          dVar16 = (double)fVar20;
          dVar18 = dVar15 * dVar15 + dVar17 * dVar17 + dVar14 * dVar14;
          if (dVar16 * dVar16 < dVar18) {
            dVar16 = (1.0 / SQRT(dVar18)) * dVar16;
            dVar15 = dVar15 * dVar16;
            dVar14 = dVar14 * dVar16;
            dVar17 = dVar17 * dVar16;
          }
        }
        else {
          dVar17 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          dVar14 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          dVar15 = DAT_14c8464f0;
        }
        *(double *)(param_6 + 0xa0) = dVar17;
        *(double *)(param_6 + 0xa8) = dVar14;
        *(double *)(param_6 + 0xb0) = dVar15;
      }
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14799f960 FUN_14799f960 body=317 status=ok
// SIG undefined FUN_14799f960(void)

void FUN_14799f960(longlong param_1,double *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar5 = DAT_14c8463d0;
  dVar6 = DAT_14c8463d8;
  dVar7 = DAT_14c8463e8;
  dVar8 = DAT_14c8463e0;
  if ((*(longlong *)(param_1 + 0xc0) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x48), plVar1 != (longlong *)0x0)) {
    lVar2 = *(longlong *)(*plVar1 + 0x48);
    lVar4 = (longlong)(int)plVar1[1] * 0x10;
    dVar5 = (double)*(float *)(lVar2 + lVar4);
    dVar6 = (double)*(float *)(lVar2 + 4 + lVar4);
    dVar7 = (double)*(float *)(lVar2 + 0xc + lVar4);
    dVar8 = (double)*(float *)(lVar2 + 8 + lVar4);
  }
  dVar9 = dVar8 - dVar5 * 0.0;
  dVar10 = dVar5 * 0.0 - dVar6;
  dVar3 = dVar6 * 0.0 + dVar8 * -0.0;
  dVar10 = dVar10 + dVar10;
  dVar9 = dVar9 + dVar9;
  dVar3 = dVar3 + dVar3;
  *param_2 = (dVar6 * dVar10 - dVar9 * dVar8) + dVar7 * dVar3 + 1.0;
  param_2[1] = (dVar8 * dVar3 - dVar10 * dVar5) + dVar7 * dVar9 + 0.0;
  param_2[2] = (dVar5 * dVar9 - dVar3 * dVar6) + dVar7 * dVar10 + 0.0;
  return;
}



// FUNCTION 14799fa9e FUN_14799fa9e body=973 status=ok
// SIG undefined FUN_14799fa9e(void)

undefined8
FUN_14799fa9e(longlong *param_1,float param_2,float param_3,undefined8 param_4,float param_5,
             undefined8 param_6,double *param_7,float *param_8,longlong param_9)

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
  char cVar10;
  float fVar11;
  float fVar12;
  uint uVar14;
  double dVar13;
  uint uVar15;
  uint uVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  uint uVar20;
  uint uVar21;
  undefined8 in_XMM3_Qb;
  uint uVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  
  dVar6 = DAT_14c8464f0;
  dVar5 = DAT_14c8464e8;
  dVar24 = DAT_14c8464e0;
  if (*(char *)(param_9 + 0x240) == '\x01') {
    dVar23 = *(double *)(param_9 + 0x248);
    dVar18 = *(double *)(param_9 + 0x250);
    dVar13 = *(double *)(param_9 + 600);
    dVar4 = dVar13 * dVar13 + dVar23 * dVar23 + dVar18 * dVar18;
    fVar11 = (float)dVar4;
    if (0.0001 <= fVar11) {
      fVar11 = SQRT(fVar11);
      dVar17 = 1.0 / (double)fVar11;
      fVar19 = (float)param_4;
      uVar20 = (uint)((ulonglong)param_4 >> 0x20);
      uVar21 = (uint)in_XMM3_Qb;
      uVar22 = (uint)((ulonglong)in_XMM3_Qb >> 0x20);
      fVar12 = fVar19;
      uVar14 = uVar20;
      uVar15 = uVar21;
      uVar16 = uVar22;
      if (*(char *)(param_9 + 0x241) == '\0') {
        uVar15 = 0;
        uVar16 = 0;
        fVar12 = fVar11;
        uVar14 = (uint)((ulonglong)dVar4 >> 0x20);
      }
      auVar25._0_4_ = -(uint)(fVar19 < fVar11) & (uint)fVar19;
      auVar25._4_4_ = uVar20;
      auVar25._8_4_ = uVar21;
      auVar25._12_4_ = uVar22;
      auVar3._4_4_ = ~uVar20 & uVar14;
      auVar3._0_4_ = ~-(uint)(fVar19 < fVar11) & (uint)fVar12;
      auVar3._8_4_ = ~uVar21 & uVar15;
      auVar3._12_4_ = ~uVar22 & uVar16;
      fVar11 = SUB164(auVar25 | auVar3,0);
      dVar8 = (double)fVar11;
      dVar9 = dVar13 * dVar17 * dVar8;
      dVar7 = dVar18 * dVar17 * dVar8;
      dVar8 = dVar8 * dVar23 * dVar17;
      dVar4 = *(double *)(param_9 + 0xa0);
      dVar1 = *(double *)(param_9 + 0xa8);
      dVar2 = *(double *)(param_9 + 0xb0);
      cVar10 = (**(code **)(*param_1 + 0x120))
                         (SUB84(DAT_14c8464f0,0),SUB168(auVar25 | auVar3,0),param_9);
      if (cVar10 == '\0') {
        *(double *)(param_9 + 0xa0) = dVar8;
        *(double *)(param_9 + 0xa8) = dVar7;
        *(double *)(param_9 + 0xb0) = dVar9;
      }
      else {
        dVar5 = (double)SQRT((float)(dVar2 * dVar2 + dVar4 * dVar4 + dVar1 * dVar1));
        param_5 = param_5 * param_2;
        if (1.0 <= param_5) {
          param_5 = 1.0;
        }
        dVar6 = (double)param_5;
        dVar13 = *(double *)(param_9 + 0xb0) -
                 (*(double *)(param_9 + 0xb0) - dVar13 * dVar17 * dVar5) * dVar6;
        dVar18 = *(double *)(param_9 + 0xa8) -
                 (*(double *)(param_9 + 0xa8) - dVar18 * dVar17 * dVar5) * dVar6;
        dVar23 = *(double *)(param_9 + 0xa0) -
                 (*(double *)(param_9 + 0xa0) - dVar23 * dVar17 * dVar5) * dVar6;
        *(double *)(param_9 + 0xa0) = dVar23;
        *(double *)(param_9 + 0xa8) = dVar18;
        *(double *)(param_9 + 0xb0) = dVar13;
        dVar24 = DAT_14c8464e0;
        dVar6 = DAT_14c8464f0;
        dVar5 = DAT_14c8464e8;
        if (0.0001 <= param_3) {
          dVar24 = 1.0 / (double)param_2;
          dVar6 = (dVar9 - dVar13) * dVar24;
          dVar5 = (dVar7 - dVar18) * dVar24;
          dVar24 = dVar24 * (dVar8 - dVar23);
          dVar23 = (double)param_3;
          dVar18 = dVar6 * dVar6 + dVar24 * dVar24 + dVar5 * dVar5;
          if (dVar23 * dVar23 < dVar18) {
            dVar23 = (1.0 / SQRT(dVar18)) * dVar23;
            dVar24 = dVar24 * dVar23;
            dVar6 = dVar6 * dVar23;
            dVar5 = dVar5 * dVar23;
          }
        }
      }
      *param_8 = fVar11;
      *param_7 = dVar24;
      param_7[1] = dVar5;
      param_7[2] = dVar6;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14799ff18 FUN_14799ff18 body=1052 status=ok
// SIG undefined FUN_14799ff18(void)

void FUN_14799ff18(longlong param_1,float param_2,float param_3,float param_4,longlong param_5)

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
  float fVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  
  dVar1 = *(double *)(param_5 + 0xa0);
  dVar2 = *(double *)(param_5 + 0xa8);
  dVar3 = *(double *)(param_5 + 0xb0);
  if ((((((dVar1 != 0.0) || (NAN(dVar1))) || (dVar2 != 0.0)) || ((NAN(dVar2) || (dVar3 != 0.0)))) ||
      (NAN(dVar3))) &&
     (((*(char *)(param_1 + 0x78) == '\x01' && (1e-06 <= param_2)) &&
      (*(char *)(param_1 + 0x140) == '\0')))) {
    fVar14 = 0.0;
    if (0.0 <= *(float *)(param_1 + 0xa4)) {
      fVar14 = *(float *)(param_1 + 0xa4);
    }
    fVar12 = 0.0;
    if (0.0 <= fVar14 * param_3) {
      fVar12 = fVar14 * param_3;
    }
    fVar14 = 0.0;
    if (0.0 <= param_4) {
      fVar14 = param_4;
    }
    if ((((fVar14 != 0.0) || (NAN(fVar14))) || (fVar12 != 0.0)) || (NAN(fVar12))) {
      fVar11 = *(float *)(param_1 + 0xac);
      if (0.05 <= fVar11) {
        fVar11 = 0.05;
      }
      if ((fVar14 != 0.0) ||
         (dVar4 = DAT_14c8464f0, dVar9 = DAT_14c8464e8, dVar10 = DAT_14c8464e0, NAN(fVar14))) {
        dVar4 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
        if (((dVar4 != 1.0) || (dVar9 = dVar3, dVar10 = dVar2, dVar6 = dVar1, NAN(dVar4))) &&
           (dVar9 = DAT_14c8464f0, dVar10 = DAT_14c8464e8, dVar6 = DAT_14c8464e0,
           9.99999993922529e-09 <= dVar4)) {
          dVar4 = 1.0 / SQRT(dVar4);
          dVar9 = dVar3 * dVar4;
          dVar10 = dVar2 * dVar4;
          dVar6 = dVar4 * dVar1;
        }
        dVar7 = (double)-fVar14;
        dVar4 = dVar9 * dVar7;
        dVar9 = dVar10 * dVar7;
        dVar10 = dVar6 * dVar7;
      }
      if (fVar11 <= 0.013333334) {
        fVar11 = 0.013333334;
      }
      dVar7 = (double)-fVar12;
      dVar6 = dVar3;
      dVar8 = dVar2;
      dVar13 = dVar1;
      do {
        if (param_2 < 1e-06) {
          fVar12 = (float)(dVar6 * dVar6 + dVar13 * dVar13 + dVar8 * dVar8);
          if ((0.0001 < fVar12) && (fVar14 == 0.0 || 100.0 < fVar12)) {
            return;
          }
          break;
        }
        fVar15 = fVar11;
        if (param_2 * 0.5 <= fVar11) {
          fVar15 = param_2 * 0.5;
        }
        fVar15 = (float)(-(uint)(fVar12 == 0.0) & (uint)param_2 |
                        ~-(uint)(fVar12 == 0.0) &
                        (-(uint)(param_2 <= fVar11) & (uint)param_2 |
                        ~-(uint)(param_2 <= fVar11) & (uint)fVar15));
        dVar5 = (double)fVar15;
        dVar6 = dVar6 + (dVar6 * dVar7 + dVar4) * dVar5;
        dVar8 = dVar8 + (dVar8 * dVar7 + dVar9) * dVar5;
        dVar13 = dVar13 + (dVar13 * dVar7 + dVar10) * dVar5;
        param_2 = param_2 - fVar15;
        *(double *)(param_5 + 0xa0) = dVar13;
        *(double *)(param_5 + 0xa8) = dVar8;
        *(double *)(param_5 + 0xb0) = dVar6;
      } while (0.0 < dVar6 * dVar3 + dVar13 * dVar1 + dVar2 * dVar8);
      *(double *)(param_5 + 0xb0) = DAT_14c8464f0;
      dVar1 = DAT_14c8464e8;
      *(double *)(param_5 + 0xa0) = DAT_14c8464e0;
      *(double *)(param_5 + 0xa8) = dVar1;
    }
  }
  return;
}



// FUNCTION 1479a0334 FUN_1479a0334 body=291 status=ok
// SIG undefined FUN_1479a0334(void)

double * FUN_1479a0334(longlong param_1,double *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  
  FUN_1479a0458();
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x2a8) + 0x10);
  fVar9 = *(float *)(param_1 + 0xc0 + (ulonglong)(iVar1 != 1) * 4);
  lVar2 = FUN_14485cccc(param_3 + 0xb8);
  if (lVar2 != 0) {
    lVar3 = FUN_144a7cbb2();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      fVar9 = *(float *)(param_1 + 200 + (ulonglong)(iVar1 == 1) * 4);
    }
  }
  dVar4 = DAT_14c8464e0;
  dVar5 = DAT_14c8464e8;
  dVar6 = DAT_14c8464f0;
  if (0.0001 <= fVar9) {
    dVar7 = (double)fVar9;
    dVar4 = *param_2;
    dVar5 = param_2[1];
    dVar6 = param_2[2];
    dVar8 = dVar6 * dVar6 + dVar4 * dVar4 + dVar5 * dVar5;
    if (dVar7 * dVar7 < dVar8) {
      dVar7 = (1.0 / SQRT(dVar8)) * dVar7;
      dVar4 = dVar4 * dVar7;
      dVar5 = dVar5 * dVar7;
      dVar6 = dVar6 * dVar7;
    }
  }
  *param_2 = dVar4;
  param_2[1] = dVar5;
  param_2[2] = dVar6;
  return param_2;
}



// FUNCTION 1479a0458 FUN_1479a0458 body=224 status=ok
// SIG undefined FUN_1479a0458(void)

undefined4 * FUN_1479a0458(longlong *param_1,undefined4 *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auStack_48 [32];
  double local_28;
  double local_20;
  double local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_3 + 0xad) & 2) == 0) {
    *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
    uVar3 = DAT_14c8464e8._4_4_;
    uVar2 = (undefined4)DAT_14c8464e8;
    uVar1 = DAT_14c8464e0._4_4_;
    *param_2 = (undefined4)DAT_14c8464e0;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  uVar4 = -(uint)(0.0 < *(float *)(param_3 + 0xa0));
  local_28 = (double)((float)(~uVar4 & 0x3e000000 | (uint)*(float *)(param_3 + 0xa0) & uVar4) +
                     ABS(DAT_14c761408));
  local_18 = *(double *)(param_3 + 0x50) * local_28;
  local_20 = *(double *)(param_3 + 0x48) * local_28;
  local_28 = local_28 * *(double *)(param_3 + 0x40);
  (**(code **)(*param_1 + 0x90))(SUB84(local_28,0),param_2);
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1479a053a FUN_1479a053a body=1156 status=ok
// SIG undefined FUN_1479a053a(void)

ulonglong FUN_1479a053a(longlong *param_1,undefined4 *param_2,longlong param_3,undefined8 param_4,
                       longlong param_5)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  undefined8 unaff_RBP;
  undefined7 uVar6;
  ulonglong uVar5;
  undefined1 auStack_218 [32];
  longlong local_1f8;
  undefined8 *local_1f0;
  longlong local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  undefined8 local_198;
  double local_190;
  double local_188;
  undefined4 local_f4;
  byte local_eb;
  undefined4 local_c8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_98 = *param_2;
  uStack_94 = param_2[1];
  uStack_90 = param_2[2];
  uStack_8c = param_2[3];
  local_88 = *(undefined8 *)(param_2 + 4);
  (**(code **)(*param_1 + 0x90))(local_98,&local_78);
  if (((((local_78 == 0.0) && (!NAN(local_78))) && (local_70 == 0.0)) &&
      (((!NAN(local_70) && (local_68 == 0.0)) && (!NAN(local_68))))) ||
     (lVar2 = param_1[0x54], *(longlong *)(lVar2 + 0xb8) == 0)) {
    uVar5 = 0;
    goto LAB_1479a05d2;
  }
  local_1e8 = lVar2 + 0x98;
  local_1f0 = (undefined8 *)(lVar2 + 0x10);
  local_1f8 = lVar2 + 200;
  local_188 = local_68 + *(double *)(param_3 + 0x80);
  local_190 = local_70 + *(double *)(param_3 + 0x78);
  local_198 = local_78 + *(double *)(param_3 + 0x70);
  cVar3 = FUN_140ad659e(param_1[0x56],&local_198,param_4,(int)param_1[0x6c]);
  uVar6 = (undefined7)((ulonglong)unaff_RBP >> 8);
  if (cVar3 == '\0') {
    uVar5 = CONCAT71(uVar6,1);
    local_1e8 = CONCAT71(local_1e8._1_7_,1);
    local_1f8 = param_5;
    local_1f0 = (undefined8 *)0x0;
    (**(code **)(*param_1 + 0xa8))(param_1,&local_78,param_4,0);
    *(undefined1 *)(param_5 + 0x121) = 1;
    goto LAB_1479a05d2;
  }
  uVar1 = *(uint *)(param_5 + 0xd4);
  *(uint *)(param_5 + 0xd4) = uVar1 & 0xfffffffb;
  memset(&local_198,0,0x100);
  local_c8 = 0xffffffff;
  local_f4 = 0xffffffff;
  local_198 = (double)CONCAT44(0x3f800000,(undefined4)local_198);
  local_1f8 = param_5;
  local_1e8 = CONCAT71(local_1e8._1_7_,1);
  uVar5 = CONCAT71(uVar6,1);
  local_1f0 = &local_198;
  cVar3 = (**(code **)(*param_1 + 0xa8))(param_1,&local_78,param_4,1);
  if (cVar3 == '\0') {
    if ((local_eb & 2) != 0) {
      (**(code **)(*param_1 + 0x140))(param_1,&local_1b0,&local_198);
      local_1b8 = local_68 + local_1a0;
      local_1c0 = local_70 + local_1a8;
      local_1c8 = local_78 + local_1b0;
      if ((local_1b0 == local_78) && (!NAN(local_1b0) && !NAN(local_78))) {
        if ((local_1a8 == local_70) && (!NAN(local_1a8) && !NAN(local_70))) {
          if ((local_1a0 == local_68) && (!NAN(local_1a0) && !NAN(local_68))) goto LAB_1479a0768;
        }
      }
      if ((local_1c8 != 0.0) ||
         ((((NAN(local_1c8) || (local_1c0 != 0.0)) || (NAN(local_1c0))) ||
          ((local_1b8 != 0.0 || (NAN(local_1b8))))))) {
        local_1f8 = param_5;
        local_1e8 = CONCAT71(local_1e8._1_7_,1);
        local_1f0 = (undefined8 *)0x0;
        uVar5 = CONCAT71(uVar6,1);
        cVar3 = (**(code **)(*param_1 + 0xa8))(param_1,&local_1c8,param_4,1);
        if (cVar3 != '\0') goto LAB_1479a0705;
      }
    }
LAB_1479a0768:
    local_1d0 = *(double *)(param_3 + 0x98) - *(double *)(param_3 + 0x80);
    local_1d8 = *(double *)(param_3 + 0x90) - *(double *)(param_3 + 0x78);
    local_1e0 = *(double *)(param_3 + 0x88) - *(double *)(param_3 + 0x70);
    (**(code **)(*param_1 + 0x90))(param_1,&local_1b0);
    if (((local_1b0 != 0.0) || (NAN(local_1b0))) ||
       ((local_1a8 != 0.0 || (((NAN(local_1a8) || (local_1a0 != 0.0)) || (NAN(local_1a0))))))) {
      local_1b8 = local_1a0 + local_68;
      local_1c0 = local_1a8 + local_70;
      local_1c8 = local_1b0 + local_78;
      local_1f8 = param_5;
      local_1e8 = CONCAT71(local_1e8._1_7_,1);
      local_1f0 = (undefined8 *)0x0;
      uVar5 = CONCAT71(uVar6,1);
      cVar3 = (**(code **)(*param_1 + 0xa8))(param_1,&local_1c8,param_4,1);
      if (cVar3 == '\0') {
        if (local_1a0 * local_68 + local_1b0 * local_78 + local_1a8 * local_70 <= 0.0)
        goto LAB_1479a07fe;
        local_1f8 = param_5;
        local_1e8 = CONCAT71(local_1e8._1_7_,1);
        local_1f0 = (undefined8 *)0x0;
        uVar4 = (**(code **)(*param_1 + 0xa8))(param_1,&local_1b0,param_4,1);
        uVar5 = (ulonglong)uVar4;
      }
    }
    else {
LAB_1479a07fe:
      uVar5 = 0;
    }
  }
LAB_1479a0705:
  *(byte *)(param_5 + 0x121) = *(byte *)(param_5 + 0x121) | (byte)uVar5;
  *(uint *)(param_5 + 0xd4) = uVar1;
LAB_1479a05d2:
  if ((local_60 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1479a09c0 FUN_1479a09c0 body=802 status=ok
// SIG undefined FUN_1479a09c0(void)

float FUN_1479a09c0(longlong *param_1,double *param_2,undefined8 param_3,double *param_4,
                   double *param_5,double *param_6,char param_7)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_f8 [32];
  double *local_d8;
  double *local_d0;
  double *local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  double dStack_a0;
  double local_90;
  double local_88;
  double local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  fVar5 = 0.0;
  if ((*(byte *)((longlong)param_5 + 0xad) & 1) != 0) {
    local_68 = param_4[2];
    local_78 = *(undefined4 *)param_4;
    uStack_74 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_70 = *(undefined4 *)(param_4 + 1);
    uStack_6c = *(undefined4 *)((longlong)param_4 + 0xc);
    local_c8 = param_6;
    local_d0 = param_5;
    local_d8 = param_4;
    (**(code **)(*param_1 + 0x160))(local_78,&local_90,param_2,param_3);
    fVar5 = 0.0;
    if (0.0 < local_80 * param_2[2] + local_90 * *param_2 + local_88 * param_2[1]) {
      if ((*(longlong *)(param_1[0x54] + 0xc0) == 0) ||
         (plVar1 = *(longlong **)(*(longlong *)(param_1[0x54] + 0xc0) + 0x48),
         plVar1 == (longlong *)0x0)) {
        local_a8 = DAT_14c8463e0;
        dStack_a0 = DAT_14c8463e8;
        local_b8 = (double)CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
        uStack_b0 = (double)CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
      }
      else {
        lVar2 = *(longlong *)(*plVar1 + 0x48);
        lVar3 = (longlong)(int)plVar1[1] * 0x10;
        dStack_a0 = (double)*(float *)(lVar2 + 0xc + lVar3);
        local_a8 = (double)*(float *)(lVar2 + 8 + lVar3);
        uStack_b0 = (double)*(float *)(lVar2 + 4 + lVar3);
        local_b8 = (double)*(float *)(lVar2 + lVar3);
      }
      local_d0 = param_6;
      local_d8 = param_5;
      local_c8 = (double *)((ulonglong)local_c8 & 0xffffffffffffff00);
      (**(code **)(*param_1 + 0xb0))(param_1,&local_90,&local_b8,1);
      fVar5 = *(float *)((longlong)param_5 + 4);
      if ((*(byte *)((longlong)param_5 + 0xad) & 3) == 1) {
        if (param_7 != '\0') {
          local_d8 = &local_90;
          (**(code **)(*param_1 + 0x150))(param_1,param_5,param_6,fVar5 * (float)param_3);
        }
        local_d8 = param_6;
        FUN_14799c7fa(param_1,&local_90,param_5,&local_78);
        if ((((0.0010000000474974513 < ABS(local_90)) || (0.0010000000474974513 < ABS(local_88))) ||
            (0.0010000000474974513 < ABS(local_80))) &&
           (0.0 < local_80 * param_2[2] + local_90 * *param_2 + local_88 * param_2[1])) {
          local_d0 = param_6;
          local_d8 = param_5;
          local_c8 = (double *)((ulonglong)local_c8 & 0xffffffffffffff00);
          (**(code **)(*param_1 + 0xb0))(param_1,&local_90,&local_b8,1);
          fVar4 = (1.0 - fVar5) * *(float *)((longlong)param_5 + 4);
          fVar5 = fVar5 + fVar4;
          if ((param_7 != '\0') && ((*(byte *)((longlong)param_5 + 0xad) & 1) != 0)) {
            local_d8 = &local_90;
            (**(code **)(*param_1 + 0x150))(param_1,param_5,param_6,fVar4 * (float)param_3);
          }
        }
      }
      if (1.0 <= fVar5) {
        fVar5 = 1.0;
      }
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return fVar5;
}



// FUNCTION 1479a0ce4 FUN_1479a0ce4 body=333 status=ok
// SIG undefined FUN_1479a0ce4(void)

double * FUN_1479a0ce4(longlong *param_1,double *param_2,double *param_3,float param_4,
                      double *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_78;
  double local_68;
  double local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)((longlong)param_1 + 0x43) == '\0') {
    dVar4 = *param_3;
    uVar1 = SUB84(dVar4,0);
    uVar2 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar3 = param_3[1];
    local_68 = *param_5;
    local_60 = param_5[1];
    dVar6 = dVar4 * local_68 + dVar3 * local_60;
    dVar4 = param_3[2];
    uVar7 = SUB84(param_5[2],0);
    uVar8 = (undefined4)((ulonglong)param_5[2] >> 0x20);
  }
  else {
    local_88 = *(undefined4 *)param_5;
    uStack_84 = *(undefined4 *)((longlong)param_5 + 4);
    uStack_80 = *(undefined4 *)(param_5 + 1);
    uStack_7c = *(undefined4 *)((longlong)param_5 + 0xc);
    local_78 = param_5[2];
    (**(code **)(*param_1 + 0x98))(local_88,&local_68);
    dVar4 = *param_3;
    uVar1 = SUB84(dVar4,0);
    uVar2 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar3 = param_3[1];
    dVar6 = dVar4 * local_68 + dVar3 * local_60;
    dVar4 = param_3[2];
    uVar7 = (undefined4)local_58;
    uVar8 = (undefined4)((ulonglong)local_58 >> 0x20);
  }
  dVar6 = dVar4 * (double)CONCAT44(uVar8,uVar7) + dVar6;
  dVar5 = (double)param_4;
  *param_2 = ((double)CONCAT44(uVar2,uVar1) - dVar6 * local_68) * dVar5;
  param_2[1] = (dVar3 - local_60 * dVar6) * dVar5;
  param_2[2] = (dVar4 - (double)CONCAT44(uVar8,uVar7) * dVar6) * dVar5;
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a0e32 FUN_1479a0e32 body=3816 status=ok
// SIG undefined FUN_1479a0e32(void)

ulonglong FUN_1479a0e32(longlong *param_1,double *param_2,double *param_3,ulonglong param_4,
                       undefined4 *param_5,undefined4 param_6,undefined8 param_7,longlong param_8,
                       longlong param_9)

{
  undefined4 *puVar1;
  float *pfVar2;
  undefined8 *puVar3;
  byte bVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  longlong lVar12;
  char cVar13;
  char cVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  double dVar22;
  ulonglong uVar23;
  undefined7 uVar24;
  void *_Src;
  undefined7 in_register_00000091;
  undefined4 uVar25;
  bool bVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_648 [32];
  double *local_628;
  double *local_620;
  longlong *local_618;
  char local_601;
  uint local_600;
  undefined4 local_5fc;
  undefined4 local_5f8;
  undefined4 local_5f4;
  undefined4 local_5f0;
  undefined4 local_5ec;
  undefined4 local_5e8;
  undefined4 local_5e4;
  undefined4 local_5e0;
  undefined4 local_5dc;
  undefined4 local_5d8;
  undefined4 local_5d4;
  undefined8 local_5d0;
  undefined8 local_5c8;
  undefined8 local_5c0;
  undefined8 local_5b8;
  ulonglong local_5b0;
  int local_5a4;
  undefined2 local_59e;
  undefined4 local_59c;
  double *local_598;
  undefined8 local_590;
  undefined8 local_588;
  undefined8 uStack_580;
  double local_578;
  longlong local_568;
  undefined8 uStack_560;
  double local_558;
  double dStack_550;
  double local_548;
  double dStack_540;
  double local_530;
  double dStack_528;
  double local_520;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  double local_508;
  undefined2 local_4f4;
  undefined1 local_4f2;
  undefined1 local_4f0 [8];
  undefined1 local_4e8 [184];
  undefined8 local_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined4 local_418;
  undefined1 local_414;
  undefined4 local_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 local_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined8 local_3f0;
  undefined1 local_3e8 [792];
  longlong local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  param_4 = param_4 & 0xffffffff;
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_648;
  lVar16 = param_1[0x18];
  if ((lVar16 == 0) || (plVar5 = *(longlong **)(lVar16 + 0x48), plVar5 == (longlong *)0x0)) {
    local_508 = DAT_14c8464f0;
    dVar22 = DAT_14c8464f0;
    local_518 = (undefined4)DAT_14c8464e0;
    uStack_514 = DAT_14c8464e0._4_4_;
    uStack_510 = (undefined4)DAT_14c8464e8;
    uStack_50c = DAT_14c8464e8._4_4_;
  }
  else {
    lVar21 = (longlong)(int)plVar5[1];
    local_508 = *(double *)(*(longlong *)(*plVar5 + 0x28) + 0x10 + lVar21 * 0x18);
    puVar1 = (undefined4 *)(*(longlong *)(*plVar5 + 0x28) + lVar21 * 0x18);
    dVar22 = (double)(lVar21 * 3);
    local_518 = *puVar1;
    uStack_514 = puVar1[1];
    uStack_510 = puVar1[2];
    uStack_50c = puVar1[3];
  }
  local_520 = local_508 + param_2[2];
  dStack_528 = (double)CONCAT44(uStack_50c,uStack_510) + param_2[1];
  local_530 = (double)CONCAT44(uStack_514,local_518) + *param_2;
  dVar8 = dStack_528 - (double)CONCAT44(uStack_50c,uStack_510);
  dVar9 = local_530 - (double)CONCAT44(uStack_514,local_518);
  if ((lVar16 == 0) || (plVar5 = *(longlong **)(lVar16 + 0x48), plVar5 == (longlong *)0x0)) {
    lVar16 = 0;
    local_548 = DAT_14c8463e0;
    dStack_540 = DAT_14c8463e8;
    local_558 = DAT_14c8463d0;
    dStack_550 = DAT_14c8463d8;
  }
  else {
    dVar22 = *(double *)(*plVar5 + 0x48);
    lVar16 = (longlong)(int)plVar5[1] * 0x10;
    dStack_540 = (double)*(float *)((longlong)dVar22 + 0xc + lVar16);
    local_548 = (double)*(float *)((longlong)dVar22 + 8 + lVar16);
    dStack_550 = (double)*(float *)((longlong)dVar22 + 4 + lVar16);
    local_558 = (double)*(float *)((longlong)dVar22 + lVar16);
  }
  fVar28 = (float)((local_520 - local_508) * (local_520 - local_508) + dVar9 * dVar9 + dVar8 * dVar8
                  );
  cVar14 = (char)param_4;
  if (cVar14 == '\0') {
    fVar29 = 0.0;
  }
  else {
    fVar29 = 1.5999998e-07;
  }
  if (fVar28 <= fVar29) {
    lVar21 = -(ulonglong)(9.99999993922529e-09 < ABS(param_3[1] - dStack_550));
    auVar11._8_4_ = (int)lVar21;
    auVar11._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(*param_3 - local_558));
    auVar11._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
    uVar15 = movmskpd((int)lVar16,auVar11);
    lVar16 = -(ulonglong)(9.99999993922529e-09 < ABS(param_3[3] - dStack_540));
    auVar10._8_4_ = (int)lVar16;
    auVar10._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(param_3[2] - local_548));
    auVar10._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
    iVar19 = movmskpd(SUB84(dVar22,0),auVar10);
    uVar20 = iVar19 << 2 | uVar15;
    if (uVar20 != 0) {
      lVar16 = -(ulonglong)(9.99999993922529e-09 < ABS(param_3[1] + dStack_550));
      auVar6._8_4_ = (int)lVar16;
      auVar6._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(*param_3 + local_558));
      auVar6._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
      iVar19 = movmskpd(uVar15,auVar6);
      lVar16 = -(ulonglong)(9.99999993922529e-09 < ABS(param_3[3] + dStack_540));
      auVar7._8_4_ = (int)lVar16;
      auVar7._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(param_3[2] + local_548));
      auVar7._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
      uVar15 = movmskpd(uVar20,auVar7);
      if ((uVar15 & 0x3fffffff) != 0 || iVar19 != 0) {
        fVar28 = 0.0;
        goto LAB_1479a11ad;
      }
    }
    param_4 = CONCAT71((int7)(param_4 >> 8),1);
    if (param_5 != (undefined4 *)0x0) {
      memset(param_5,0,0x100);
      param_5[0x34] = 0xffffffff;
      param_5[1] = 0x3f800000;
      *(ulonglong *)(param_5 + 0x1c) = CONCAT44(uStack_514,local_518);
      *(ulonglong *)(param_5 + 0x1e) = CONCAT44(uStack_50c,uStack_510);
      *(double *)(param_5 + 0x20) = local_508;
      *(double *)(param_5 + 0x22) = local_530;
      *(double *)(param_5 + 0x24) = dStack_528;
      *(double *)(param_5 + 0x26) = local_520;
      param_5[0x29] = 0xffffffff;
    }
    goto LAB_1479a113c;
  }
LAB_1479a11ad:
  local_d0 = 0;
  local_c8 = 0x300000000;
  if (cVar14 == '\0') {
    FUN_1479a1d1c(param_1,&local_530);
    FUN_1479a1e2e(param_1);
    if ((fVar28 == 0.0) && (!NAN(fVar28))) {
      (**(code **)(*param_1 + 0x10))
                (param_1,&local_558,param_3,*(longlong *)(param_8 + 0x2a0) + 0xe0);
    }
    if (param_5 != (undefined4 *)0x0) {
LAB_1479a12e1:
      memset(param_5,0,0x100);
      param_5[0x34] = 0xffffffff;
      param_5[1] = 0x3f800000;
      *(ulonglong *)(param_5 + 0x1c) = CONCAT44(uStack_514,local_518);
      *(ulonglong *)(param_5 + 0x1e) = CONCAT44(uStack_50c,uStack_510);
      *(double *)(param_5 + 0x20) = local_508;
      *(double *)(param_5 + 0x22) = local_530;
      *(double *)(param_5 + 0x24) = dStack_528;
      *(double *)(param_5 + 0x26) = local_520;
      uVar25 = 0xffffffff;
      lVar16 = 0xa4;
      goto LAB_1479a1348;
    }
  }
  else {
    local_568 = 0;
    uStack_560 = 0;
    local_578 = local_508;
    local_588 = (double)CONCAT44(uStack_514,local_518);
    uStack_580 = (double)CONCAT44(uStack_50c,uStack_510);
    if (fVar28 <= 0.0 || (*(byte *)(param_1 + 1) ^ 1) != 0) {
      if (fVar28 <= 0.0) {
        local_600 = 0xffffffff;
        if (fVar28 == 0.0 && (*(byte *)(param_1 + 1) ^ 1) == 0) {
          (**(code **)(*param_1 + 0x10))
                    (param_1,&local_558,param_3,*(longlong *)(param_8 + 0x2a0) + 0xe0);
        }
      }
      else {
        local_588 = *param_2 + local_588;
        uStack_580 = param_2[1] + uStack_580;
        local_578 = param_2[2] + local_508;
        local_600 = 0xffffffff;
      }
      fVar28 = 1.0;
      local_5b0 = 0;
      local_5f4 = 0;
      local_5f0 = 0;
      local_5ec = 0;
      local_5e8 = 0;
      local_5e4 = 0;
      local_5c8 = 0;
      local_5c0 = 0;
      local_5b8 = 0;
      local_5e0 = 0;
      local_5fc = 0;
      local_5f8 = 0;
      local_5dc = 0;
      local_5d8 = 0;
      local_5d4 = 0;
      local_5d0 = local_5d0 & 0xffffffff00000000;
      uVar25 = 0;
      bVar26 = false;
    }
    else {
      local_618 = param_1 + 2;
      local_620 = &local_558;
      local_628 = &local_530;
      cVar13 = FUN_14342a83e(*(undefined8 *)(param_8 + 0x2b0),&local_568,param_1[0x17],&local_518);
      if ((int)uStack_560 < 1) {
LAB_1479a152c:
        bVar26 = false;
      }
      else {
        if (fVar28 < 0.0) {
          fVar28 = sqrtf(fVar28);
        }
        else {
          fVar28 = SQRT(fVar28);
        }
        if ((int)uStack_560 < 1) goto LAB_1479a152c;
        fVar30 = 0.1;
        if (1.0 / fVar28 <= 0.1) {
          fVar30 = 1.0 / fVar28;
        }
        if (fVar30 <= 0.1 / fVar28) {
          fVar30 = 0.1 / fVar28;
        }
        lVar16 = 4;
        lVar21 = 0;
        do {
          fVar28 = *(float *)(local_568 + lVar16) - (fVar30 + 0.001);
          if (1.0 <= fVar28) {
            fVar28 = 1.0;
          }
          if (fVar28 <= 0.0) {
            fVar28 = 0.0;
          }
          *(float *)(local_568 + lVar16) = fVar28;
          lVar21 = lVar21 + 1;
          lVar16 = lVar16 + 0x100;
        } while (lVar21 < (int)uStack_560);
        bVar26 = 0 < (int)uStack_560;
      }
      if (((cVar13 == '\0') && (*(char *)((longlong)param_1 + 0xd9) != '\x01')) ||
         (fVar28 = 1.0, !bVar26)) {
        fVar28 = 1.0;
        local_600 = 0xffffffff;
        bVar26 = false;
        uVar25 = 0;
        local_5d0 = (ulonglong)local_5d0._4_4_ << 0x20;
        local_5d4 = 0;
        local_5d8 = 0;
        local_5dc = 0;
        local_5f8 = 0;
        local_5fc = 0;
        local_5e0 = 0;
        local_5b8 = 0;
        local_5c0 = 0;
        local_5c8 = 0;
        local_5e4 = 0;
        local_5e8 = 0;
        local_5ec = 0;
        local_5f0 = 0;
        local_5f4 = 0;
        local_5b0 = 0;
LAB_1479a182f:
        local_578 = local_520;
        local_588 = local_530;
        uStack_580 = dStack_528;
      }
      else {
        local_5d0 = param_9 + 0x348;
        local_600 = 0xffffffff;
        lVar16 = 0xd8;
        lVar21 = 0;
        local_5a4 = -1;
        fVar30 = 3.4e+38;
        local_601 = cVar14;
        local_598 = param_3;
        do {
          lVar12 = local_568;
          _Src = (void *)(local_568 + lVar16 + -0xd8);
          bVar4 = *(byte *)(local_568 + lVar16 + -0x2b);
          fVar27 = fVar30;
          if ((bVar4 & 1) == 0) {
            uVar15 = local_600;
            if (*(char *)((longlong)param_1 + 0xd9) == '\x01') {
              puVar1 = (undefined4 *)(local_568 + lVar16);
              lVar17 = FUN_14479d2ce(puVar1);
              uVar15 = local_600;
              if (((lVar17 != 0) &&
                  (lVar18 = FUN_14485cccc(lVar12 + lVar16 + -0x20), uVar15 = local_600, lVar18 != 0)
                  ) && ((param_1[0x17] != lVar17 && (*(longlong *)(param_8 + 0x2b0) != 0)))) {
                if ((-1 < (int)local_600) &&
                   (fVar30 = *(float *)(lVar12 + -0xd4 + lVar16), uVar23 = (ulonglong)local_600,
                   pfVar2 = (float *)(local_568 + 4 + uVar23 * 0x100),
                   *pfVar2 <= fVar30 && fVar30 != *pfVar2)) {
                  param_4 = CONCAT71((int7)((ulonglong)lVar16 >> 8),local_601);
                  goto LAB_1479a1a21;
                }
                iVar19 = 0;
                if ((local_5a4 == -1) && (iVar19 = -1, 0.0 < *(float *)(lVar12 + -0xd4 + lVar16))) {
                  iVar19 = 0;
                }
                local_4f0[0] = 1;
                memcpy(local_4e8,_Src,0xb8);
                local_430 = *(undefined8 *)(lVar12 + -0x20 + lVar16);
                puVar3 = (undefined8 *)(lVar12 + -0x18 + lVar16);
                local_428 = *puVar3;
                uStack_420 = puVar3[1];
                local_418 = *(undefined4 *)(lVar12 + -8 + lVar16);
                local_414 = *(undefined1 *)(lVar12 + -4 + lVar16);
                local_3f0 = *(undefined8 *)(puVar1 + 8);
                local_410 = *puVar1;
                uStack_40c = puVar1[1];
                uStack_408 = puVar1[2];
                uStack_404 = puVar1[3];
                local_400 = puVar1[4];
                uStack_3fc = puVar1[5];
                uStack_3f8 = puVar1[6];
                uStack_3f4 = puVar1[7];
                FUN_1479a2000(local_5d0,local_4f0);
                uVar15 = local_600;
                local_5a4 = iVar19;
              }
            }
          }
          else {
            cVar14 = FUN_1479a1f1e(_Src,param_2,param_6);
            uVar15 = local_600;
            if (cVar14 == '\0') {
              if ((bVar4 & 2) == 0) {
                bVar26 = local_600 == 0xffffffff;
                local_600 = (uint)lVar21;
                if (bVar26) break;
              }
              else {
                fVar27 = (float)(*(double *)(lVar12 + -0x70 + lVar16) * param_2[2] +
                                *(double *)(lVar12 + -0x80 + lVar16) * *param_2 +
                                *(double *)(lVar12 + -0x78 + lVar16) * param_2[1]);
                uVar15 = (uint)lVar21;
                if (fVar30 <= fVar27) {
                  fVar27 = fVar30;
                  uVar15 = local_600;
                }
              }
            }
          }
          local_600 = uVar15;
          lVar21 = lVar21 + 1;
          lVar16 = lVar16 + 0x100;
          fVar30 = fVar27;
        } while (lVar21 < (int)uStack_560);
        uVar24 = (undefined7)((ulonglong)lVar16 >> 8);
        if ((int)local_600 < 0) {
          local_600 = 0xffffffff;
          bVar26 = false;
          uVar25 = 0;
          local_5d0 = local_5d0 & 0xffffffff00000000;
          local_5d4 = 0;
          local_5d8 = 0;
          local_5dc = 0;
          local_5f8 = 0;
          local_5fc = 0;
          local_5e0 = 0;
          local_5b8 = 0;
          local_5c0 = 0;
          local_5c8 = 0;
          local_5e4 = 0;
          local_5e8 = 0;
          local_5ec = 0;
          local_5f0 = 0;
          local_5f4 = 0;
          local_5b0 = 0;
          param_4 = CONCAT71(uVar24,local_601);
          param_3 = local_598;
          goto LAB_1479a182f;
        }
        uVar23 = (ulonglong)local_600;
        param_4 = CONCAT71(uVar24,local_601);
LAB_1479a1a21:
        param_3 = local_598;
        puVar1 = (undefined4 *)(local_568 + uVar23 * 0x100);
        local_59c = *puVar1;
        fVar28 = (float)puVar1[1];
        memcpy(local_4f0,puVar1 + 2,0xa5);
        local_59e = *(undefined2 *)((longlong)puVar1 + 0xae);
        local_5e4 = puVar1[0x2c];
        local_5e8 = puVar1[0x2d];
        local_5ec = puVar1[0x2e];
        local_5f0 = puVar1[0x2f];
        local_5f4 = puVar1[0x30];
        local_5b0 = (ulonglong)(uint)puVar1[0x31];
        local_5c0 = *(undefined8 *)(puVar1 + 0x32);
        local_600 = puVar1[0x34];
        local_5b8 = CONCAT71((int7)((ulonglong)local_5c0 >> 8),*(undefined1 *)(puVar1 + 0x35));
        local_4f2 = *(undefined1 *)((longlong)puVar1 + 0xd7);
        local_4f4 = *(undefined2 *)((longlong)puVar1 + 0xd5);
        local_5e0 = puVar1[0x36];
        local_5fc = puVar1[0x37];
        local_5f8 = puVar1[0x38];
        local_5dc = puVar1[0x39];
        local_590 = *(undefined8 *)(puVar1 + 0x3a);
        local_5d8 = puVar1[0x3c];
        local_5d4 = puVar1[0x3d];
        uVar25 = puVar1[0x3f];
        local_5c8 = CONCAT71(in_register_00000091,*(byte *)((longlong)puVar1 + 0xad));
        local_5d0 = CONCAT44(local_5d0._4_4_,puVar1[0x3e]);
        if ((*(byte *)((longlong)puVar1 + 0xad) & 1) == 0) {
          bVar26 = true;
          goto LAB_1479a182f;
        }
        dVar8 = (double)CONCAT44(uStack_514,local_518);
        dVar9 = (double)CONCAT44(uStack_50c,uStack_510);
        dVar22 = (double)fVar28;
        local_578 = (local_520 - local_508) * dVar22 + local_508;
        uStack_580 = (dStack_528 - dVar9) * dVar22 + dVar9;
        local_588 = (local_530 - dVar8) * dVar22 + dVar8;
        bVar26 = true;
        if ((local_578 - local_508) * (local_578 - local_508) +
            (local_588 - dVar8) * (local_588 - dVar8) + (uStack_580 - dVar9) * (uStack_580 - dVar9)
            <= (double)fVar29) {
          local_578 = local_508;
          local_588 = (double)CONCAT44(uStack_514,local_518);
          uStack_580 = (double)CONCAT44(uStack_50c,uStack_510);
          fVar28 = 0.0;
          if (local_5a4 != -1) {
            FUN_1479a214c(local_3e8,0,0);
          }
        }
      }
      (**(code **)(*param_1 + 0x10))
                (param_1,&local_558,param_3,*(longlong *)(param_8 + 0x2a0) + 0xe0);
    }
    FUN_1479a1d1c(param_1,&local_588);
    FUN_1479a1e2e(param_1);
    if (local_568 != 0) {
      FUN_1400020a8();
    }
    if (param_5 != (undefined4 *)0x0) {
      if (!bVar26) goto LAB_1479a12e1;
      *param_5 = local_59c;
      param_5[1] = fVar28;
      memcpy(param_5 + 2,local_4f0,0xa5);
      *(char *)((longlong)param_5 + 0xad) = (char)local_5c8;
      *(undefined2 *)((longlong)param_5 + 0xae) = local_59e;
      param_5[0x2c] = local_5e4;
      param_5[0x2d] = local_5e8;
      param_5[0x2e] = local_5ec;
      param_5[0x2f] = local_5f0;
      param_5[0x30] = local_5f4;
      param_5[0x31] = (int)local_5b0;
      *(undefined8 *)(param_5 + 0x32) = local_5c0;
      param_5[0x34] = local_600;
      *(char *)(param_5 + 0x35) = (char)local_5b8;
      *(undefined2 *)((longlong)param_5 + 0xd5) = local_4f4;
      *(undefined1 *)((longlong)param_5 + 0xd7) = local_4f2;
      param_5[0x36] = local_5e0;
      param_5[0x37] = local_5fc;
      param_5[0x38] = local_5f8;
      param_5[0x39] = local_5dc;
      *(undefined8 *)(param_5 + 0x3a) = local_590;
      param_5[0x3c] = local_5d8;
      param_5[0x3d] = local_5d4;
      param_5[0x3e] = (undefined4)local_5d0;
      lVar16 = 0xfc;
LAB_1479a1348:
      *(undefined4 *)((longlong)param_5 + lVar16) = uVar25;
    }
  }
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
LAB_1479a113c:
  if ((local_c0 ^ (ulonglong)auStack_648) == DAT_14c707940) {
    return param_4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a1d1c FUN_1479a1d1c body=272 status=ok
// SIG undefined FUN_1479a1d1c(void)

void FUN_1479a1d1c(longlong param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  plVar4 = *(longlong **)(lVar3 + 0x48);
  if ((lVar3 != 0 && plVar4 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar4 + 0xc))) {
    local_38 = *(undefined8 *)(param_2 + 4);
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    FUN_14091cc6a(lVar3,&local_48,1);
    plVar5 = *(longlong **)(lVar3 + 0x48);
    if ((plVar5 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar5 + 0xc))) {
      lVar10 = plVar5[1];
      lVar3 = *(longlong *)(*plVar5 + 0x530);
      *(undefined8 *)(lVar3 + 0x10 + (longlong)(int)lVar10 * 0x18) = local_38;
      puVar1 = (undefined8 *)(lVar3 + (longlong)(int)lVar10 * 0x18);
      *puVar1 = CONCAT44(uStack_44,local_48);
      puVar1[1] = CONCAT44(uStack_3c,uStack_40);
    }
    lVar10 = plVar4[1];
    lVar3 = *(longlong *)(*plVar4 + 0x530);
    uVar6 = *param_2;
    uVar7 = param_2[1];
    uVar8 = param_2[2];
    uVar9 = param_2[3];
    *(undefined8 *)(lVar3 + 0x10 + (longlong)(int)lVar10 * 0x18) = *(undefined8 *)(param_2 + 4);
    puVar2 = (undefined4 *)(lVar3 + (longlong)(int)lVar10 * 0x18);
    *puVar2 = uVar6;
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    if (*(char *)(*(longlong *)(*plVar4 + 0x2c0) + 0xb + (longlong)(int)plVar4[1] * 0x10) == '\x02')
    {
      FUN_1456cc230(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 8) + 0x2b0,plVar4,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a1e2e FUN_1479a1e2e body=238 status=ok
// SIG undefined FUN_1479a1e2e(void)

void FUN_1479a1e2e(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(param_1 + 0xc0);
  plVar5 = *(longlong **)(lVar4 + 0x48);
  if ((lVar4 != 0 && plVar5 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar5 + 0xc))) {
    local_48 = *(undefined4 *)param_2;
    uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_40 = *(undefined4 *)(param_2 + 1);
    uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_38 = *(undefined4 *)(param_2 + 2);
    uStack_34 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_30 = *(undefined4 *)(param_2 + 3);
    uStack_2c = *(undefined4 *)((longlong)param_2 + 0x1c);
    FUN_14091cc06(lVar4,&local_48,1);
    dVar1 = param_2[3];
    dVar2 = param_2[2];
    dVar3 = param_2[1];
    lVar4 = *(longlong *)(*plVar5 + 0x548);
    lVar6 = (longlong)(int)plVar5[1] * 0x10;
    *(float *)(lVar4 + lVar6) = (float)*param_2;
    *(float *)(lVar4 + 4 + lVar6) = (float)dVar3;
    *(float *)(lVar4 + 8 + lVar6) = (float)dVar2;
    *(float *)(lVar4 + 0xc + lVar6) = (float)dVar1;
    if (*(char *)(*(longlong *)(*plVar5 + 0x2c0) + 0xb + (longlong)(int)plVar5[1] * 0x10) == '\x02')
    {
      FUN_1456cc230(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 8) + 0x2b0,plVar5,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a1f1e FUN_1479a1f1e body=226 status=ok
// SIG undefined FUN_1479a1f1e(void)

undefined8 FUN_1479a1f1e(longlong param_1,double *param_2,byte param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 in_RAX;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if ((*(byte *)(param_1 + 0xad) & 1) != 0) {
    if (((param_3 & 4) == 0) &&
       (uVar4 = CONCAT71((int7)((ulonglong)in_RAX >> 8),*(byte *)(param_1 + 0xad)) &
                0xffffffffffffff02,
       (char)uVar4 != '\0' ||
       *(float *)(param_1 + 8) <= DAT_14cad1f90 && DAT_14cad1f90 != *(float *)(param_1 + 8))) {
      dVar1 = *param_2;
      dVar2 = param_2[1];
      dVar3 = param_2[2];
      dVar8 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
      if (((dVar8 != 1.0) || (dVar5 = dVar1, dVar6 = dVar2, dVar7 = dVar3, NAN(dVar8))) &&
         (dVar5 = DAT_14c8464e0, dVar6 = DAT_14c8464e8, dVar7 = DAT_14c8464f0,
         9.99999993922529e-09 <= dVar8)) {
        dVar8 = 1.0 / SQRT(dVar8);
        dVar5 = dVar1 * dVar8;
        dVar6 = dVar2 * dVar8;
        dVar7 = dVar3 * dVar8;
      }
      if (DAT_14cad1f94 <
          (float)(dVar7 * *(double *)(param_1 + 0x68) +
                 dVar5 * *(double *)(param_1 + 0x58) + dVar6 * *(double *)(param_1 + 0x60))) {
        return CONCAT71((int7)(uVar4 >> 8),1);
      }
    }
  }
  return 0;
}



// FUNCTION 1479a2000 FUN_1479a2000 body=332 status=ok
// SIG undefined FUN_1479a2000(void)

void FUN_1479a2000(longlong *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar6 = *param_1;
  iVar2 = (int)param_1[1];
  lVar7 = (longlong)iVar2;
  if (lVar7 != 0) {
    uVar8 = 0;
    do {
      if (((*(int *)(param_2 + 0xe0) == *(int *)(lVar6 + 0xe0 + uVar8)) &&
          (*(int *)(param_2 + 0xe4) == *(int *)(lVar6 + 0xe4 + uVar8))) &&
         (*(int *)(param_2 + 0xb0) == *(int *)(lVar6 + 0xb0 + uVar8))) {
        if ((int)(uVar8 >> 3) * 0x3e0f83e1 != -1) {
          return;
        }
        break;
      }
      uVar8 = uVar8 + 0x108;
    } while (lVar7 * 0x108 != uVar8);
  }
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1417bb506(param_1,iVar2);
    lVar6 = *param_1;
  }
  puVar1 = (undefined1 *)(lVar6 + lVar7 * 0x108);
  *puVar1 = *param_2;
  memcpy(puVar1 + 8,param_2 + 8,0xb8);
  *(undefined8 *)(puVar1 + 0xc0) = 0;
  *(undefined8 *)(puVar1 + 200) = 0;
  *(undefined8 *)(puVar1 + 0xd0) = 0;
  *(undefined4 *)(puVar1 + 0xd8) = 0xffffffff;
  puVar1[0xdc] = 0;
  *(undefined8 *)(puVar1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  uVar3 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(puVar1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(puVar1 + 0xd0) = uVar3;
  *(undefined4 *)(puVar1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  puVar1[0xdc] = param_2[0xdc];
  *(undefined8 *)(puVar1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  uVar3 = *(undefined8 *)(param_2 + 0xe0);
  uVar4 = *(undefined8 *)(param_2 + 0xe8);
  uVar5 = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(puVar1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(puVar1 + 0xf8) = uVar5;
  *(undefined8 *)(puVar1 + 0xe0) = uVar3;
  *(undefined8 *)(puVar1 + 0xe8) = uVar4;
  return;
}



// FUNCTION 1479a214c FUN_1479a214c body=145 status=ok
// SIG undefined FUN_1479a214c(void)

void FUN_1479a214c(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 800);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 800) = param_2;
    if ((uint)(*(int *)(param_1 + 0x324) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14011d10e(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x318);
    if (*(longlong *)(param_1 + 0x318) == 0) {
      lVar2 = param_1;
    }
    FUN_1479af1a0((longlong)iVar1 * 0x108 + lVar2,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 800) = param_2, param_3 == '\x01')) {
      FUN_1479af1f0(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1479a21de FUN_1479a21de body=694 status=ok
// SIG undefined FUN_1479a21de(void)

bool FUN_1479a21de(undefined8 param_1,double *param_2,double *param_3,double *param_4)

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
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  if ((*param_4 == param_4[1]) && (!NAN(*param_4) && !NAN(param_4[1]))) {
    dVar1 = param_2[2];
    dVar2 = *param_2;
    dVar3 = param_2[1];
    dVar14 = dVar2 * 0.0 + dVar3 * -0.0;
    dVar13 = dVar3 - dVar1 * 0.0;
    dVar12 = dVar1 * 0.0 - dVar2;
    dVar14 = dVar14 + dVar14;
    dVar12 = dVar12 + dVar12;
    dVar13 = dVar13 + dVar13;
    dVar4 = param_2[3];
    dVar5 = param_3[2];
    dVar6 = *param_3;
    dVar7 = param_3[1];
    dVar11 = dVar6 * 0.0 + dVar7 * -0.0;
    dVar9 = dVar7 - dVar5 * 0.0;
    dVar10 = dVar5 * 0.0 - dVar6;
    dVar11 = dVar11 + dVar11;
    dVar10 = dVar10 + dVar10;
    dVar9 = dVar9 + dVar9;
    dVar8 = param_3[3];
    if ((ABS(((dVar3 * dVar14 - dVar12 * dVar1) + dVar13 * dVar4 + 0.0) -
             ((dVar7 * dVar11 - dVar10 * dVar5) + dVar9 * dVar8 + 0.0)) <= 9.999999747378752e-05) &&
       (ABS((dVar1 * dVar13 + -dVar2 * dVar14 + dVar4 * dVar12 + 0.0) -
            (dVar5 * dVar9 + -dVar6 * dVar11 + dVar8 * dVar10 + 0.0)) <= 9.999999747378752e-05)) {
      return ABS(((dVar2 * dVar12 - dVar13 * dVar3) + dVar4 * dVar14 + 1.0) -
                 ((dVar6 * dVar10 - dVar9 * dVar7) + dVar8 * dVar11 + 1.0)) <= 9.999999747378752e-05
      ;
    }
  }
  return false;
}



// FUNCTION 1479a2496 FUN_1479a2496 body=655 status=ok
// SIG undefined FUN_1479a2496(void)

void FUN_1479a2496(longlong *param_1,double *param_2,undefined8 param_3,double *param_4,
                  longlong param_5,undefined1 param_6,longlong param_7)

{
  double dVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  undefined1 local_78;
  double local_68;
  double dStack_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar4 = 0;
  if ((*(byte *)(param_5 + 0xad) & 1) != 0) {
    local_58 = param_4[2];
    local_68 = *param_4;
    dStack_60 = param_4[1];
    cVar3 = (**(code **)(*param_1 + 0x278))(*(undefined4 *)param_4,param_7);
    dVar1 = local_68;
    dVar7 = dStack_60;
    if (cVar3 != '\0') {
      if (local_58 <= 0.0) {
        if (((local_58 < -9.999999747378752e-05) &&
            (*(float *)(param_7 + 0x134) <= 1.9 && *(float *)(param_7 + 0x134) != 1.9)) &&
           ((*(byte *)(param_7 + 0x130) & 1) != 0)) {
          dVar1 = *(double *)(param_7 + 0x180);
          uVar4 = SUB84(dVar1,0);
          uVar5 = (undefined4)((ulonglong)dVar1 >> 0x20);
          dVar7 = *(double *)(param_7 + 400);
          bVar2 = 0.0 <= param_2[2] * dVar7 +
                         *param_2 * dVar1 + param_2[1] * *(double *)(param_7 + 0x188);
          dVar6 = *(double *)(param_7 + 0x188);
          if (0.9999899864196777 <= dVar7 || bVar2) {
            uVar4 = SUB84(local_68,0);
            uVar5 = (undefined4)((ulonglong)local_68 >> 0x20);
            dVar6 = dStack_60;
          }
          dVar8 = (double)CONCAT44(uVar5,uVar4) * (double)CONCAT44(uVar5,uVar4) + dVar6 * dVar6;
          if ((dVar8 != 1.0) || (NAN(dVar8))) {
            dVar1 = DAT_14c8464e0;
            dVar7 = DAT_14c8464e8;
            local_58 = DAT_14c8464f0;
            if (9.99999993922529e-09 <= dVar8) {
              local_58 = 0.0;
              dVar1 = (double)CONCAT44(uVar5,uVar4) * (1.0 / SQRT(dVar8));
              dVar7 = dVar6 * (1.0 / SQRT(dVar8));
            }
          }
          else {
            if (0.9999899864196777 <= dVar7 || bVar2) {
              dVar7 = local_58;
            }
            local_58 = (double)(-(ulonglong)(dVar7 == 0.0) & (ulonglong)dVar7);
            dVar1 = (double)CONCAT44(uVar5,uVar4);
            dVar7 = dVar6;
          }
        }
      }
      else {
        cVar3 = (**(code **)(*param_1 + 0xf8))(param_1,param_5);
        dVar1 = local_68;
        dVar7 = dStack_60;
        if (cVar3 == '\0') {
          dVar6 = local_68 * local_68 + dStack_60 * dStack_60;
          if (((dVar6 != 1.0) || (local_58 = 0.0, NAN(dVar6))) &&
             (dVar1 = DAT_14c8464e0, dVar7 = DAT_14c8464e8, local_58 = DAT_14c8464f0,
             9.99999993922529e-09 <= dVar6)) {
            dVar1 = local_68 * (1.0 / SQRT(dVar6));
            dVar7 = dStack_60 * (1.0 / SQRT(dVar6));
            local_58 = 0.0;
          }
        }
      }
    }
    dStack_60 = dVar7;
    local_68 = dVar1;
    local_78 = param_6;
    local_80 = param_7;
    local_88 = param_5;
    uVar4 = FUN_1479a09c0(param_1,param_2,param_3,&local_68);
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(uVar4);
  }
  return;
}



// FUNCTION 1479a2726 FUN_1479a2726 body=201 status=ok
// SIG undefined FUN_1479a2726(void)

undefined4 *
FUN_1479a2726(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = param_5;
  FUN_1479a0ce4();
  cVar1 = (**(code **)(*param_1 + 0x268))(param_1,param_7);
  if (cVar1 != '\0') {
    local_60 = param_7;
    local_68 = param_6;
    local_70 = param_5;
    local_78 = CONCAT44(local_78._4_4_,param_4);
    (**(code **)(*param_1 + 0x168))(param_1,&local_58,param_2,param_3);
    *(undefined8 *)(param_2 + 4) = local_48;
    *param_2 = local_58;
    param_2[1] = uStack_54;
    param_2[2] = uStack_50;
    param_2[3] = uStack_4c;
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a27f0 FUN_1479a27f0 body=583 status=ok
// SIG undefined FUN_1479a27f0(void)

double * FUN_1479a27f0(undefined8 param_1,double *param_2,double *param_3,longlong param_4,
                      float param_5,double *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  double dVar9;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_2[2] = param_3[2];
  dVar1 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = dVar1;
  dVar1 = param_2[2];
  if (dVar1 <= 0.0) goto LAB_1479a2875;
  fVar8 = (float)((double)param_5 * *(double *)(param_4 + 0x10));
  dVar2 = (double)fVar8;
  if (dVar1 - dVar2 <= 9.999999747378752e-05) goto LAB_1479a2875;
  if (fVar8 <= 0.0) {
    param_2[2] = DAT_14c8464f0;
    dVar1 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    *param_2 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    param_2[1] = dVar1;
    dVar1 = param_2[2];
    dVar2 = *param_2;
    dVar3 = param_2[1];
  }
  else {
    dVar3 = (double)(float)(dVar2 / dVar1);
    dVar2 = *param_2 * dVar3;
    *param_2 = dVar2;
    dVar1 = dVar1 * dVar3;
    dVar3 = dVar3 * param_2[1];
    param_2[1] = dVar3;
    param_2[2] = dVar1;
  }
  local_60 = param_3[1] - dVar3;
  local_68 = *param_3 - dVar2;
  local_58 = (param_3[2] - dVar1) * 0.0;
  local_88 = *param_6;
  uStack_80 = param_6[1];
  dVar9 = local_88 * local_88 + uStack_80 * uStack_80;
  if ((dVar9 != 1.0) || (NAN(dVar9))) {
    if (9.99999993922529e-09 <= dVar9) {
      uStack_80 = uStack_80 * (1.0 / SQRT(dVar9));
      local_88 = local_88 * (1.0 / SQRT(dVar9));
      goto LAB_1479a29dc;
    }
    local_78 = DAT_14c8464f0;
    uVar4 = (undefined4)DAT_14c8464e0;
    uVar5 = DAT_14c8464e0._4_4_;
    uVar6 = (undefined4)DAT_14c8464e8;
    uVar7 = DAT_14c8464e8._4_4_;
LAB_1479a29b9:
    local_88 = (double)CONCAT44(uVar5,uVar4);
    uStack_80 = (double)CONCAT44(uVar7,uVar6);
  }
  else {
    if ((param_6[2] == 0.0) && (!NAN(param_6[2]))) {
      local_78 = param_6[2];
      uVar4 = *(undefined4 *)param_6;
      uVar5 = *(undefined4 *)((longlong)param_6 + 4);
      uVar6 = *(undefined4 *)(param_6 + 1);
      uVar7 = *(undefined4 *)((longlong)param_6 + 0xc);
      goto LAB_1479a29b9;
    }
LAB_1479a29dc:
    uVar4 = SUB84(uStack_80,0);
    local_78 = 0.0;
  }
  local_a8 = &local_88;
  FUN_1479a0ce4(uVar4,&local_a0,&local_68,0x3f800000);
  *param_2 = dVar2 + local_a0;
  param_2[1] = dVar3 + local_98;
  param_2[2] = dVar1 + local_90;
LAB_1479a2875:
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a2a42 FUN_1479a2a42 body=80 status=ok
// SIG undefined FUN_1479a2a42(void)

undefined8 FUN_1479a2a42(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((((*(byte *)(param_2 + 0xad) & 3) == 1) && (*(char *)(param_1 + 0x78) == '\x01')) &&
     (*(int *)(param_3 + 0x1c) != 3)) {
    lVar1 = FUN_14479d2ce(param_2 + 0xd8);
    uVar2 = 1;
    if (lVar1 != 0) {
      FUN_14485cccc(param_2 + 0xb8);
    }
  }
  return uVar2;
}



// FUNCTION 1479a2a92 FUN_1479a2a92 body=2222 status=ok
// SIG undefined FUN_1479a2a92(void)

undefined8
FUN_1479a2a92(longlong *param_1,double *param_2,double *param_3,longlong param_4,undefined8 *param_5
             ,void *param_6)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong *plVar12;
  longlong lVar13;
  char cVar14;
  double *pdVar15;
  longlong lVar16;
  undefined8 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_488 [32];
  undefined8 *local_468;
  undefined8 *local_460;
  undefined8 *local_458;
  double local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined4 local_38c;
  undefined4 local_360;
  undefined8 local_328;
  undefined8 uStack_320;
  double local_318;
  undefined8 local_308;
  undefined1 local_2f8 [16];
  double local_2e8;
  undefined1 local_2e0 [16];
  double local_2d0;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  undefined4 local_264;
  byte local_25b;
  undefined4 local_238;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  undefined8 local_1e0;
  undefined4 local_13c;
  byte local_133;
  undefined4 local_110;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_488;
  cVar14 = (**(code **)(*param_1 + 0x178))(param_1,param_4,param_5);
  uStack_440 = (double)CONCAT44(uStack_440._4_4_,(uint)uStack_440);
  local_438 = (double)CONCAT44(local_438._4_4_,(undefined4)local_438);
  if ((cVar14 != '\0') &&
     (fVar27 = *(float *)((longlong)param_1 + 0x7c),
     uStack_440 = (double)CONCAT44(uStack_440._4_4_,(uint)uStack_440),
     local_438 = (double)CONCAT44(local_438._4_4_,(undefined4)local_438), 0.0 < fVar27)) {
    pdVar15 = &DAT_14c8464f0;
    if ((*(longlong *)(param_1[0x54] + 0xc0) != 0) &&
       (plVar12 = *(longlong **)(*(longlong *)(param_1[0x54] + 0xc0) + 0x48),
       plVar12 != (longlong *)0x0)) {
      pdVar15 = (double *)(*(longlong *)(*plVar12 + 0x28) + (longlong)(int)plVar12[1] * 0x18 + 0x10)
      ;
    }
    dVar4 = *pdVar15;
    fVar2 = *(float *)((longlong)param_5 + 0x124);
    dVar5 = *(double *)(param_4 + 0x38);
    uStack_440 = (double)CONCAT44(uStack_440._4_4_,(uint)uStack_440);
    local_438 = (double)CONCAT44(local_438._4_4_,(undefined4)local_438);
    if ((double)(float)dVar5 <= (double)(*(float *)(param_5 + 0x25) - fVar2) + dVar4) {
      dVar6 = *param_2;
      dVar7 = param_2[1];
      dVar8 = param_2[2];
      if ((((dVar6 != 0.0) || (NAN(dVar6))) || (dVar7 != 0.0)) ||
         (((NAN(dVar7) || (dVar8 != 0.0)) ||
          (uStack_440 = (double)CONCAT44(uStack_440._4_4_,(uint)uStack_440),
          local_438 = (double)CONCAT44(local_438._4_4_,(undefined4)local_438), NAN(dVar8))))) {
        dVar9 = *(double *)(param_4 + 0x60);
        dVar10 = *(double *)(param_4 + 0x58);
        dVar11 = *(double *)(param_4 + 0x68);
        fVar24 = (float)(dVar4 - (double)*(float *)(param_5 + 0x25));
        cVar14 = (**(code **)(*param_1 + 0x278))(param_1);
        fVar25 = fVar24;
        fVar23 = fVar27;
        if ((cVar14 != '\0') && ((~*(uint *)(param_5 + 0x26) & 3) == 0)) {
          fVar25 = *(float *)((longlong)param_5 + (ulonglong)(*(uint *)(param_5 + 0x26) & 4) + 0x134
                             );
          fVar26 = 0.0;
          if (0.0 <= fVar25) {
            fVar26 = fVar25;
          }
          fVar3 = *(float *)((longlong)param_1 + 0x7c);
          cVar14 = (**(code **)(*param_1 + 0xf0))(param_1,param_4 + 0x10,param_4 + 0x28,fVar2);
          fVar18 = fVar24 - *(float *)((longlong)param_5 + 0x134);
          fVar25 = fVar18;
          if ((*(byte *)(param_5 + 0x26) & 4) == 0) {
            fVar25 = (float)(double)param_5[0x2f];
          }
          fVar23 = fVar27 - fVar26;
          if (cVar14 == '\0') {
            fVar25 = fVar18;
          }
          fVar24 = fVar24 - fVar26;
          if (fVar23 <= 0.0) {
            fVar23 = 0.0;
          }
          fVar27 = fVar3 + 4.8;
        }
        if (fVar24 < (float)dVar5) {
          memset(&local_1e0,0,0x100);
          local_110 = 0xffffffff;
          local_13c = 0xffffffff;
          local_1e0._4_4_ = 0x3f800000;
          if ((*(longlong *)(param_1[0x54] + 0xc0) == 0) ||
             (plVar12 = *(longlong **)(*(longlong *)(param_1[0x54] + 0xc0) + 0x48),
             plVar12 == (longlong *)0x0)) {
            local_1f8 = DAT_14c8463e0;
            dStack_1f0 = DAT_14c8463e8;
            local_208 = DAT_14c8463d0;
            dStack_200 = DAT_14c8463d8;
          }
          else {
            lVar13 = *(longlong *)(*plVar12 + 0x48);
            lVar16 = (longlong)(int)plVar12[1] * 0x10;
            dStack_1f0 = (double)*(float *)(lVar13 + 0xc + lVar16);
            local_1f8 = (double)*(float *)(lVar13 + 8 + lVar16);
            dStack_200 = (double)*(float *)(lVar13 + 4 + lVar16);
            local_208 = (double)*(float *)(lVar13 + lVar16);
          }
          local_448 = (double)fVar23;
          local_438 = -param_2[2] * local_448;
          uStack_440 = -param_2[1] * local_448;
          local_448 = -*param_2 * local_448;
          local_468 = param_5;
          local_458 = (undefined8 *)((ulonglong)local_458 & 0xffffffffffffff00);
          local_460 = &local_1e0;
          (**(code **)(*param_1 + 0xa8))(param_1,&local_448,&local_208,1);
          if ((local_133 & 2) == 0) {
            memset(&local_308,0,0x100);
            local_238 = 0xffffffff;
            local_264 = 0xffffffff;
            local_308._4_4_ = 1.0;
            local_468 = param_5;
            local_458 = (undefined8 *)((ulonglong)local_458 & 0xffffffffffffff00);
            local_460 = &local_308;
            (**(code **)(*param_1 + 0xa8))(param_1,param_3,&local_208,1);
            if ((local_25b & 1) == 0) {
LAB_1479a2ed4:
              if ((*(longlong *)(param_1[0x54] + 0xc0) == 0) ||
                 (plVar12 = *(longlong **)(*(longlong *)(param_1[0x54] + 0xc0) + 0x48),
                 plVar12 == (longlong *)0x0)) {
                uStack_430 = DAT_14c8463e8;
                local_448 = DAT_14c8463d0;
                uStack_440 = DAT_14c8463d8;
                local_438 = DAT_14c8463e0;
              }
              else {
                lVar13 = *(longlong *)(*plVar12 + 0x48);
                lVar16 = (longlong)(int)plVar12[1] * 0x10;
                uStack_430 = (double)*(float *)(lVar13 + 0xc + lVar16);
                local_448 = (double)*(float *)(lVar13 + lVar16);
                uStack_440 = (double)*(float *)(lVar13 + 4 + lVar16);
                local_438 = (double)*(float *)(lVar13 + 8 + lVar16);
              }
              local_328 = (double)fVar27;
              local_318 = param_2[2] * local_328;
              uStack_320 = param_2[1] * local_328;
              local_328 = local_328 * *param_2;
              local_468 = param_5;
              local_458 = (undefined8 *)((ulonglong)local_458 & 0xffffffffffffff00);
              local_460 = &local_308;
              (**(code **)(*param_1 + 0xa8))(param_1,&local_328,&local_448,1);
              uVar17 = 0;
              dVar5 = local_438;
              if ((local_25b & 2) != 0) goto LAB_1479a2bc3;
              local_448 = (double)((ulonglong)local_448 & 0xffffffff00000000);
              uStack_440._0_4_ = 0;
              uStack_440._4_4_ = 0;
              local_438._0_4_ = 0;
              memset(&uStack_430,0,0x100);
              local_360 = 0xffffffff;
              local_38c = 0xffffffff;
              uStack_430 = (double)CONCAT44(0x3f800000,(undefined4)uStack_430);
              if ((local_25b & 1) == 0) {
                if (param_6 != (void *)0x0) {
LAB_1479a315b:
                  memcpy(param_6,&local_448,0x118);
                }
LAB_1479a316e:
                *(byte *)((longlong)param_5 + 0x121) =
                     *(byte *)((longlong)param_5 + 0x121) | *(byte *)((longlong)param_1 + 0x9c) ^ 1;
                uVar17 = 1;
                uStack_440 = (double)CONCAT44(uStack_440._4_4_,(uint)uStack_440);
                dVar5 = (double)CONCAT44(local_438._4_4_,(undefined4)local_438);
                goto LAB_1479a2bc3;
              }
              fVar27 = (float)(local_2d0 - (double)fVar25);
              if (fVar27 < *(float *)((longlong)param_1 + 0x7c) ||
                  fVar27 == *(float *)((longlong)param_1 + 0x7c)) {
                cVar14 = (**(code **)(*param_1 + 0xf8))(param_1,&local_308);
                if ((cVar14 == '\0') &&
                   ((uVar17 = 0, uStack_440 = (double)CONCAT44(uStack_440._4_4_,(uint)uStack_440),
                    dVar5 = (double)CONCAT44(local_438._4_4_,(undefined4)local_438),
                    param_3[2] * local_2a0 + *param_3 * local_2b0 + param_3[1] * local_2a8 < 0.0 ||
                    (uStack_440 = (double)CONCAT44(uStack_440._4_4_,(uint)uStack_440),
                    dVar5 = (double)CONCAT44(local_438._4_4_,(undefined4)local_438),
                    dVar4 < local_2e8)))) goto LAB_1479a2bc3;
                cVar14 = (**(code **)(*param_1 + 0xf0))(param_1,local_2f8,local_2e0,fVar2);
                if (cVar14 != '\0') {
                  if (0.0 < fVar27) {
                    cVar14 = (**(code **)(*param_1 + 0x178))(param_1,&local_308,param_5);
                    if (cVar14 == '\0') goto LAB_1479a2bc1;
                  }
                  if (param_6 == (void *)0x0) goto LAB_1479a316e;
                  if ((*(longlong *)(param_1[0x54] + 0xc0) == 0) ||
                     (plVar12 = *(longlong **)(*(longlong *)(param_1[0x54] + 0xc0) + 0x48),
                     plVar12 == (longlong *)0x0)) {
                    local_318 = DAT_14c8464f0;
                    uVar19 = (undefined4)DAT_14c8464e0;
                    uVar20 = DAT_14c8464e0._4_4_;
                    uVar21 = (undefined4)DAT_14c8464e8;
                    uVar22 = DAT_14c8464e8._4_4_;
                  }
                  else {
                    local_318 = *(double *)
                                 (*(longlong *)(*plVar12 + 0x28) + 0x10 +
                                 (longlong)(int)plVar12[1] * 0x18);
                    puVar1 = (undefined4 *)
                             (*(longlong *)(*plVar12 + 0x28) + (longlong)(int)plVar12[1] * 0x18);
                    uVar19 = *puVar1;
                    uVar20 = puVar1[1];
                    uVar21 = puVar1[2];
                    uVar22 = puVar1[3];
                  }
                  local_328 = (double)CONCAT44(uVar20,uVar19);
                  uStack_320 = (double)CONCAT44(uVar22,uVar21);
                  local_468 = param_5;
                  local_460 = &local_308;
                  (**(code **)(*param_1 + 0xd8))(param_1,&local_328,&uStack_440,0);
                  if (((local_2e8 <= dVar4) ||
                      ((float)(dVar8 * dVar11 + dVar6 * dVar10 + dVar7 * dVar9) <= -0.08)) ||
                     (((uint)uStack_440 & 1) != 0)) {
                    local_448 = (double)((ulonglong)local_448 | 1);
                    goto LAB_1479a315b;
                  }
                }
              }
            }
            else if ((local_25b & 2) == 0) {
              if ((local_133 & 1) != 0) {
                local_468 = &DAT_14c8464e0;
                (**(code **)(*param_1 + 0x150))(param_1,&local_1e0,param_5,0);
              }
              local_468 = &DAT_14c8464e0;
              (**(code **)(*param_1 + 0x150))(param_1,&local_308,param_5,0);
              cVar14 = (**(code **)(*param_1 + 0x268))(param_1,param_5);
              fVar23 = local_308._4_4_;
              uVar17 = 1;
              dVar5 = local_438;
              if (cVar14 != '\0') goto LAB_1479a2bc3;
              local_458 = param_5;
              local_460 = (undefined8 *)CONCAT71(local_460._1_7_,1);
              local_468 = &local_308;
              fVar24 = (float)(**(code **)(*param_1 + 0x158))(param_1,param_3,1.0 - local_308._4_4_)
              ;
              cVar14 = (**(code **)(*param_1 + 0x268))(param_1,param_5);
              if ((cVar14 == '\0') &&
                 ((((fVar23 != 0.0 || (NAN(fVar23))) || (fVar24 != 0.0)) || (NAN(fVar24)))))
              goto LAB_1479a2ed4;
            }
          }
        }
      }
    }
  }
LAB_1479a2bc1:
  uVar17 = 0;
  dVar5 = local_438;
LAB_1479a2bc3:
  if ((local_e0 ^ (ulonglong)auStack_488) != DAT_14c707940) {
    local_438 = dVar5;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17;
}



// FUNCTION 1479a3360 FUN_1479a3360 body=347 status=ok
// SIG undefined FUN_1479a3360(void)

undefined4 *
FUN_1479a3360(longlong *param_1,undefined4 *param_2,undefined8 param_3,double *param_4,
             undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_48 [12];
  undefined4 uStack_3c;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((char)param_1[0xf] != '\x01') {
LAB_1479a33ba:
    *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
    uVar6 = DAT_14c8464e8._4_4_;
    uVar5 = (undefined4)DAT_14c8464e8;
    uVar4 = DAT_14c8464e0._4_4_;
    *param_2 = (undefined4)DAT_14c8464e0;
    param_2[1] = uVar4;
    param_2[2] = uVar5;
    param_2[3] = uVar6;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  dVar1 = *param_4;
  local_48._0_8_ = param_4[1];
  if ((((dVar1 == 0.0) && (!NAN(dVar1))) && ((double)local_48._0_8_ == 0.0)) &&
     (!NAN((double)local_48._0_8_))) {
    if ((param_4[2] == 0.0) && (!NAN(param_4[2]))) goto LAB_1479a33ba;
  }
  stack0xffffffffffffffc0 = -dVar1;
  local_38 = 0;
  local_58 = param_6;
  cVar3 = (**(code **)(*param_1 + 0x198))(param_1,param_3,local_48,param_5);
  if (cVar3 == '\0') {
    uVar2 = local_48._12_4_;
    local_48._8_4_ = local_48._8_4_;
    local_48._0_8_ = local_48._0_8_ ^ 0x8000000000000000;
    uStack_3c = uVar2 ^ 0x80000000;
    local_38 = local_38 ^ 0x8000000000000000;
    local_58 = param_6;
    cVar3 = (**(code **)(*param_1 + 0x198))(param_1,param_3,local_48,param_5);
    if (cVar3 == '\0') {
      *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
      uVar4 = (undefined4)DAT_14c8464e0;
      uVar5 = DAT_14c8464e0._4_4_;
      uVar6 = (undefined4)DAT_14c8464e8;
      uVar7 = DAT_14c8464e8._4_4_;
      goto LAB_1479a348a;
    }
  }
  *(ulonglong *)(param_2 + 4) = local_38;
  uVar4 = local_48._0_4_;
  uVar5 = local_48._4_4_;
  uVar6 = local_48._8_4_;
  uVar7 = uStack_3c;
LAB_1479a348a:
  *param_2 = uVar4;
  param_2[1] = uVar5;
  param_2[2] = uVar6;
  param_2[3] = uVar7;
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1479a34bc FUN_1479a34bc body=543 status=ok
// SIG undefined FUN_1479a34bc(void)

undefined8
FUN_1479a34bc(longlong *param_1,double *param_2,double *param_3,double *param_4,longlong param_5)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  undefined4 local_1b0;
  undefined4 *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  double local_188;
  double local_180;
  double local_178;
  undefined1 local_170 [4];
  float local_16c;
  undefined4 local_cc;
  byte local_c3;
  undefined4 local_a0;
  undefined4 local_70;
  undefined8 local_6c;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_50 = param_2[2] + param_3[2];
  local_58 = param_2[1] + param_3[1];
  local_60 = *param_2 + *param_3;
  local_6c = *(undefined8 *)(param_5 + 0x124);
  local_70 = 3;
  memset(local_170,0,0x100);
  local_a0 = 0xffffffff;
  local_cc = 0xffffffff;
  local_16c = 1.0;
  local_1b0 = (undefined4)param_1[0x6c];
  local_1b8 = &DAT_14c8463d0;
  local_1a8 = &local_70;
  local_1a0 = param_1 + 0x57;
  local_198 = param_1 + 0x68;
  FUN_14021655c(param_1[0x56],local_170,param_2,&local_60);
  if (((local_c3 & 1) == 0) ||
     (cVar1 = (**(code **)(*param_1 + 0xf8))(param_1,local_170), cVar1 != '\0')) {
    if ((local_c3 & 1) == 0) {
      dVar3 = (double)(*(float *)((longlong)param_1 + 0x7c) + *(float *)((longlong)param_1 + 0xd4));
      local_1b0 = (undefined4)param_1[0x6c];
      local_178 = param_4[2] * dVar3 + local_50;
      local_180 = param_4[1] * dVar3 + local_58;
      local_188 = dVar3 * *param_4 + local_60;
      local_1b8 = &DAT_14c8463d0;
      local_1a8 = &local_70;
      local_1a0 = param_1 + 0x57;
      local_198 = param_1 + 0x68;
      FUN_14021655c(param_1[0x56],local_170);
    }
    if (local_16c < 1.0) {
      cVar1 = (**(code **)(*param_1 + 0xf8))(param_1,local_170);
      uVar2 = 1;
      if (cVar1 != '\0') goto LAB_1479a36ae;
    }
  }
  uVar2 = 0;
LAB_1479a36ae:
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1479a36e2 FUN_1479a36e2 body=298 status=ok
// SIG undefined FUN_1479a36e2(void)

void FUN_1479a36e2(longlong *param_1,undefined4 param_2,float param_3,undefined8 param_4,
                  double *param_5,double *param_6,undefined8 param_7)

{
  longlong *plVar1;
  char cVar2;
  double *pdVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  
  fVar4 = (float)SQRT(param_5[2] * param_5[2] + *param_5 * *param_5 + param_5[1] * param_5[1]);
  pdVar3 = (double *)&DAT_14c8464e0;
  if ((*(longlong *)(param_1[0x54] + 0xc0) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1[0x54] + 0xc0) + 0x48), plVar1 != (longlong *)0x0
     )) {
    pdVar3 = (double *)((longlong)(int)plVar1[1] * 0x18 + *(longlong *)(*plVar1 + 0x28));
  }
  fVar5 = 0.0;
  uVar6 = 0;
  if (0.0001 <= fVar4) {
    fVar4 = (float)SQRT((*pdVar3 - *param_6) * (*pdVar3 - *param_6) +
                        (pdVar3[1] - param_6[1]) * (pdVar3[1] - param_6[1])) / fVar4;
    fVar5 = 1.0;
    if (fVar4 <= 1.0) {
      fVar5 = fVar4;
    }
    fVar5 = (float)param_4 * (1.0 - fVar5) + param_3;
    uVar6 = (int)((ulonglong)param_4 >> 0x20);
  }
  cVar2 = (**(code **)(*param_1 + 0x278))(param_1,param_7);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 200))(param_1,3,param_7,0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001479a3809. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1,CONCAT44(uVar6,fVar5),param_2,param_7);
  return;
}



// FUNCTION 1479a380c FUN_1479a380c body=792 status=ok
// SIG undefined FUN_1479a380c(void)

void FUN_1479a380c(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  double *pdVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined1 auStack_1d8 [32];
  undefined1 *local_1b8;
  longlong local_1b0;
  undefined1 local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  double local_188;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  undefined1 local_150 [4];
  undefined4 local_14c;
  double local_130;
  undefined4 local_ac;
  byte local_a3;
  undefined4 local_80;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (((~*(uint *)(param_2 + 0x130) & 3) == 0) &&
     ((((fVar7 = *(float *)(param_2 + 0x134), (*(uint *)(param_2 + 0x130) & 4) == 0 ||
        (fVar7 = *(float *)(param_2 + 0x138), 1.9 <= *(float *)(param_2 + 0x134))) || (fVar7 < 1.9))
      && ((fVar7 < 1.9 || (2.4 < fVar7)))))) {
    memset(local_150,0,0x100);
    local_80 = 0xffffffff;
    local_ac = 0xffffffff;
    local_14c = 0x3f800000;
    if ((*(longlong *)(param_1[0x54] + 0xc0) == 0) ||
       (plVar2 = *(longlong **)(*(longlong *)(param_1[0x54] + 0xc0) + 0x48),
       plVar2 == (longlong *)0x0)) {
      uVar8 = (undefined4)DAT_14c8464f0;
      uVar9 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      local_168 = DAT_14c8463e0;
      dStack_160 = DAT_14c8463e8;
      local_178 = DAT_14c8463d0;
      dStack_170 = DAT_14c8463d8;
    }
    else {
      uVar1 = *(undefined8 *)
               (*(longlong *)(*plVar2 + 0x28) + 0x10 + (longlong)(int)plVar2[1] * 0x18);
      uVar8 = (undefined4)uVar1;
      uVar9 = (undefined4)((ulonglong)uVar1 >> 0x20);
      lVar3 = *(longlong *)(*plVar2 + 0x48);
      lVar5 = (longlong)(int)plVar2[1] * 0x10;
      dStack_160 = (double)*(float *)(lVar3 + 0xc + lVar5);
      local_168 = (double)*(float *)(lVar3 + 8 + lVar5);
      dStack_170 = (double)*(float *)(lVar3 + 4 + lVar5);
      local_178 = (double)*(float *)(lVar3 + lVar5);
    }
    fVar10 = 2.15 - fVar7;
    local_188 = (double)fVar10;
    local_198 = 0;
    uStack_190 = 0;
    local_1a8 = 0;
    local_1b8 = local_150;
    local_1b0 = param_2;
    (**(code **)(*param_1 + 0xb0))(param_1,&local_198,&local_178,1);
    if ((local_a3 & 3) == 1) {
      lVar3 = *(longlong *)(param_1[0x54] + 0xc0);
      if (fVar10 <= 0.0) {
        pdVar6 = (double *)&DAT_14c8464f0;
        if ((lVar3 != 0) && (plVar2 = *(longlong **)(lVar3 + 0x48), plVar2 != (longlong *)0x0)) {
          pdVar6 = (double *)
                   (*(longlong *)(*plVar2 + 0x28) + (longlong)(int)plVar2[1] * 0x18 + 0x10);
        }
        *(float *)(param_2 + 0x134) = (float)((double)(float)*pdVar6 - local_130);
        cVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
        if (cVar4 != '\0') {
          FUN_143431ca4(param_2 + 0x130,local_150,*(undefined4 *)(param_2 + 0x134),1);
        }
      }
      else {
        pdVar6 = (double *)&DAT_14c8464f0;
        if ((lVar3 != 0) && (plVar2 = *(longlong **)(lVar3 + 0x48), plVar2 != (longlong *)0x0)) {
          pdVar6 = (double *)
                   (*(longlong *)(*plVar2 + 0x28) + (longlong)(int)plVar2[1] * 0x18 + 0x10);
        }
        *(float *)(param_2 + 0x134) =
             ((float)*pdVar6 - (float)(double)CONCAT44(uVar9,uVar8)) + *(float *)(param_2 + 0x134);
      }
    }
    else {
      *(float *)(param_2 + 0x134) = fVar10 + *(float *)(param_2 + 0x134);
    }
    *(byte *)(param_2 + 0x121) =
         *(byte *)(param_2 + 0x121) | *(byte *)((longlong)param_1 + 0x9c) ^ 1 | fVar7 < 0.0;
    if (*(int *)(param_1[0x55] + 0x10) != 1) {
      *(undefined1 *)(param_2 + 0x98) = 1;
    }
  }
  if ((local_50 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479a3b26 FUN_1479a3b26 body=126 status=ok
// SIG undefined FUN_1479a3b26(void)

undefined8 FUN_1479a3b26(longlong *param_1,longlong param_2,undefined8 param_3,char param_4)

{
  float fVar1;
  float extraout_XMM0_Da;
  double dVar2;
  double dVar3;
  
  if ((*(byte *)(param_2 + 0xad) & 3) == 1) {
    fVar1 = 0.0;
    if (0.0 <= *(float *)(param_1 + 0x1b)) {
      fVar1 = *(float *)(param_1 + 0x1b);
    }
    if ((0.15 < fVar1) &&
       ((param_4 == '\0' ||
        (dVar3 = *(double *)(param_2 + 0x30) - *(double *)(param_2 + 0x18),
        dVar2 = *(double *)(param_2 + 0x28) - *(double *)(param_2 + 0x10),
        dVar2 = dVar2 * dVar2 + dVar3 * dVar3, (**(code **)(*param_1 + 0x1d0))(dVar2,param_3),
        extraout_XMM0_Da * extraout_XMM0_Da < (float)dVar2)))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1479a3ba4 FUN_1479a3ba4 body=199 status=ok
// SIG undefined FUN_1479a3ba4(void)

undefined8
FUN_1479a3ba4(longlong *param_1,undefined4 param_2,longlong param_3,float param_4,uint *param_5,
             longlong param_6)

{
  uint uVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  double dVar5;
  
  if (0.0 < param_4) {
    dVar5 = *(double *)(param_3 + 0x38) -
            (*(double *)(param_3 + 0x20) - (double)*(float *)(param_6 + 0x128));
    dVar3 = 0.0;
    if (0.0 <= dVar5) {
      dVar3 = dVar5;
    }
    fVar2 = param_4 - (float)dVar3;
    fVar4 = 0.0;
    if (0.0 <= fVar2) {
      fVar4 = fVar2;
    }
    (**(code **)(*param_1 + 0xe0))
              (fVar2,param_3 + 0x10,fVar4,*(float *)(param_6 + 0x124) + param_4,param_5,param_2,
               param_6,0);
    uVar1 = ~*param_5;
    if ((uVar1 & 3) == 0) {
      if ((float)dVar3 + (float)param_5[1] <= param_4) {
        return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
      }
      *param_5 = *param_5 & 0xfffffffd;
    }
  }
  return 0;
}



// FUNCTION 1479a3c94 FUN_1479a3c94 body=214 status=ok
// SIG undefined FUN_1479a3c94(void)

ulonglong FUN_1479a3c94(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       char param_9,undefined8 param_10)

{
  char cVar1;
  undefined8 unaff_RBP;
  ulonglong uVar2;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  if ((char)param_1[0xf] == '\x01') {
    if (param_9 == '\0') {
      cVar1 = (**(code **)(*param_1 + 0x188))(param_1,param_10);
      if (cVar1 == '\0') goto LAB_1479a3d54;
    }
    (**(code **)(*param_1 + 0x1a0))
              (param_1,param_2 + 0x68,param_2 + 0x50,param_5,CONCAT44(uVar3,param_7));
    cVar1 = (**(code **)(*param_1 + 0x278))(param_1,param_10);
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x1b0))(param_1,param_8,param_6,param_7,param_4,param_5,param_10);
    }
  }
  else {
LAB_1479a3d54:
    uVar2 = 0;
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1479a3d6a FUN_1479a3d6a body=333 status=ok
// SIG undefined FUN_1479a3d6a(void)

double * FUN_1479a3d6a(longlong *param_1,double *param_2,undefined8 param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_68 [32];
  double *local_48;
  longlong local_40;
  double local_38;
  double dStack_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  dVar1 = *(double *)(param_4 + 0x28);
  dVar2 = *(double *)(param_4 + 0x30);
  *param_2 = dVar1;
  param_2[1] = dVar2;
  param_2[2] = 0.0;
  if (((char)param_1[0x28] == '\0') && (dVar1 = dVar1 * dVar1 + dVar2 * dVar2, 0.0 < dVar1)) {
    local_48 = param_2;
    local_40 = param_4;
    (**(code **)(*param_1 + 0x1e8))
              (SUB84(dVar1,0),&local_38,param_3,*(undefined4 *)((longlong)param_1 + 0xdc));
    param_2[2] = local_28;
    *param_2 = local_38;
    param_2[1] = dStack_30;
    dVar2 = DAT_14c8464e8;
    dVar3 = DAT_14c8464f0;
    dVar1 = DAT_14c8464e0;
    if (0.0001 <= *(float *)(param_1 + 7)) {
      dVar4 = (double)*(float *)(param_1 + 7);
      dVar1 = *param_2;
      dVar2 = param_2[1];
      dVar3 = param_2[2];
      dVar5 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
      if (dVar4 * dVar4 < dVar5) {
        dVar4 = (1.0 / SQRT(dVar5)) * dVar4;
        dVar2 = dVar2 * dVar4;
        dVar3 = dVar3 * dVar4;
        dVar1 = dVar1 * dVar4;
      }
    }
    *param_2 = dVar1;
    param_2[1] = dVar2;
    param_2[2] = dVar3;
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1479a3f38 FUN_1479a3f38 body=566 status=ok
// SIG undefined FUN_1479a3f38(void)

undefined4 *
FUN_1479a3f38(longlong *param_1,undefined4 *param_2,undefined8 param_3,double *param_4,
             longlong param_5,char param_6,undefined8 param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  char cVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_78 [32];
  double local_58;
  double dStack_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_4[2];
  local_58 = *param_4;
  dStack_50 = param_4[1];
  if (((*(byte *)(param_5 + 0xad) & 3) != 1) ||
     (dVar11 = *(double *)(param_5 + 0x50), dVar11 <= 0.0010000000474974513)) {
    if ((*(byte *)(param_5 + 0xad) & 2) != 0) {
      pdVar8 = &DAT_14c8464e0;
      if (0.0 < param_4[2] * *(double *)(param_5 + 0x50) +
                *param_4 * *(double *)(param_5 + 0x40) + param_4[1] * *(double *)(param_5 + 0x48)) {
        pdVar8 = &local_58;
      }
      goto LAB_1479a40a7;
    }
LAB_1479a40a2:
    pdVar8 = &local_58;
  }
  else {
    if (param_6 != '\0') {
      cVar7 = (**(code **)(*param_1 + 0x210))(*(undefined4 *)param_4,param_5 + 0x10,param_5,param_7)
      ;
      if (cVar7 != '\0') goto LAB_1479a40a2;
      dVar11 = *(double *)(param_5 + 0x50);
    }
    dVar1 = *param_4;
    dVar2 = param_4[1];
    dVar10 = *(double *)(param_5 + 0x40);
    dVar9 = *(double *)(param_5 + 0x48);
    dVar3 = param_4[2];
    pdVar8 = &local_58;
    if (dVar3 * dVar11 + dVar1 * dVar10 + dVar2 * dVar9 < 0.0) {
      dVar4 = dVar10 * dVar10 + dVar9 * dVar9;
      if ((dVar4 != 1.0) || (NAN(dVar4))) {
        if (9.99999993922529e-09 <= dVar4) {
          dVar9 = dVar9 * (1.0 / SQRT(dVar4));
          dVar10 = dVar10 * (1.0 / SQRT(dVar4));
          uVar12 = 0;
          uVar13 = 0;
        }
        else {
          uVar12 = (undefined4)DAT_14c8464f0;
          uVar13 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
          dVar9 = DAT_14c8464e8;
          dVar10 = DAT_14c8464e0;
        }
      }
      else {
        uVar5 = -(ulonglong)(dVar11 == 0.0) & (ulonglong)dVar11;
        uVar12 = (undefined4)uVar5;
        uVar13 = (undefined4)(uVar5 >> 0x20);
      }
      dVar11 = dVar3 * (double)CONCAT44(uVar13,uVar12) + dVar1 * dVar10 + dVar2 * dVar9;
      local_58 = dVar1 - dVar11 * dVar10;
      dStack_50 = dVar2 - dVar9 * dVar11;
      local_48 = dVar3 - (double)CONCAT44(uVar13,uVar12) * dVar11;
    }
  }
LAB_1479a40a7:
  *(double *)(param_2 + 4) = pdVar8[2];
  uVar12 = *(undefined4 *)((longlong)pdVar8 + 4);
  uVar13 = *(undefined4 *)(pdVar8 + 1);
  uVar6 = *(undefined4 *)((longlong)pdVar8 + 0xc);
  *param_2 = *(undefined4 *)pdVar8;
  param_2[1] = uVar12;
  param_2[2] = uVar13;
  param_2[3] = uVar6;
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1479a4170 FUN_1479a4170 body=563 status=ok
// SIG undefined FUN_1479a4170(void)

void FUN_1479a4170(longlong param_1,double *param_2,double *param_3,double *param_4,float param_5)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  param_2[2] = param_3[2];
  dVar2 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = dVar2;
  if (0.0 < param_5) {
    dVar2 = param_4[2];
    dVar7 = (double)param_5;
    dVar3 = *param_4;
    dVar4 = param_4[1];
    dVar8 = dVar7 * dVar3 + *param_2;
    *param_2 = dVar8;
    dVar11 = dVar4 * dVar7 + param_2[1];
    param_2[1] = dVar11;
    dVar7 = dVar2 * dVar7 + param_2[2];
    param_2[2] = dVar7;
    fVar1 = *(float *)(param_1 + 0xec);
    if ((double)(fVar1 * fVar1) < dVar7 * dVar7 + dVar8 * dVar8 + dVar11 * dVar11) {
      dVar5 = dVar2 * dVar2 + dVar3 * dVar3 + dVar4 * dVar4;
      if (((dVar5 != 1.0) || (dVar9 = dVar3, dVar10 = dVar4, dVar6 = dVar2, NAN(dVar5))) &&
         (dVar9 = DAT_14c8464e0, dVar10 = DAT_14c8464e8, dVar6 = DAT_14c8464f0,
         9.99999993922529e-09 <= dVar5)) {
        dVar5 = 1.0 / SQRT(dVar5);
        dVar9 = dVar3 * dVar5;
        dVar10 = dVar4 * dVar5;
        dVar6 = dVar2 * dVar5;
      }
      dVar2 = (double)ABS(fVar1);
      if (dVar2 < dVar7 * dVar6 + dVar8 * dVar9 + dVar11 * dVar10) {
        dVar3 = (dVar7 - DAT_14c8464f0) * dVar6 +
                (dVar8 - DAT_14c8464e0) * dVar9 + (dVar11 - DAT_14c8464e8) * dVar10;
        *param_2 = dVar9 * dVar2 + (dVar8 - dVar3 * dVar9);
        param_2[1] = dVar10 * dVar2 + (dVar11 - dVar10 * dVar3);
        param_2[2] = dVar6 * dVar2 + (dVar7 - dVar6 * dVar3);
      }
    }
  }
  return;
}



// FUNCTION 1479a43a4 FUN_1479a43a4 body=332 status=ok
// SIG undefined FUN_1479a43a4(void)

bool FUN_1479a43a4(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong local_150;
  uint local_148 [4];
  undefined1 local_138 [4];
  undefined4 local_134;
  undefined4 local_94;
  undefined4 local_68;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((*(byte *)(param_3 + 0xad) & 1) != 0) {
    if ((*(byte *)(param_3 + 0xad) & 2) == 0) {
      cVar1 = (**(code **)(*param_1 + 0xf8))(param_1,param_3);
      if (((cVar1 != '\0') &&
          (*(double *)(param_3 + 0x38) <
           (double)*(float *)(param_4 + 0x124) +
           (*(double *)(param_3 + 0x20) - (double)*(float *)(param_4 + 0x128)))) &&
         (cVar1 = (**(code **)(*param_1 + 0xf0))(param_1,param_3 + 0x10,param_3 + 0x28),
         cVar1 != '\0')) {
LAB_1479a447f:
        local_148[0] = 0;
        local_148[1] = 0;
        local_148[2] = 0;
        memset(local_138,0,0x100);
        local_68 = 0xffffffff;
        local_94 = 0xffffffff;
        local_134 = 0x3f800000;
        local_158 = param_4;
        local_150 = param_3;
        (**(code **)(*param_1 + 0xd8))(param_1,param_2,local_148,0);
        bVar2 = ((local_148[0] ^ 0xffffffff) & 3) == 0;
        goto LAB_1479a43d2;
      }
    }
    else if (9.999999747378752e-05 < *(double *)(param_3 + 0x50) ||
             *(double *)(param_3 + 0x50) == 9.999999747378752e-05) goto LAB_1479a447f;
  }
  bVar2 = false;
LAB_1479a43d2:
  if ((local_38 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar2;
}



// FUNCTION 1479a44f2 FUN_1479a44f2 body=104 status=ok
// SIG undefined FUN_1479a44f2(void)

void FUN_1479a44f2(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x268))(param_1,param_5);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x220))(param_1,param_2,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x0001479a4557. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1,param_3,param_4,param_5);
  return;
}



// FUNCTION 1479a455a FUN_1479a455a body=93 status=ok
// SIG undefined FUN_1479a455a(void)

void FUN_1479a455a(longlong *param_1,undefined8 param_2,longlong param_3)

{
  (**(code **)(*param_1 + 0x268))(param_1,param_3);
  if (*(int *)((longlong)param_1 + 0xf4) - 1U < 3) {
                    /* WARNING: Could not recover jumptable at 0x0001479a459b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 200))(param_1,*(undefined4 *)(param_3 + 0x20),param_3,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001479a45b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x228))(param_1,param_3);
  return;
}



// FUNCTION 1479a45b8 FUN_1479a45b8 body=133 status=ok
// SIG undefined FUN_1479a45b8(void)

void FUN_1479a45b8(longlong *param_1,longlong param_2)

{
  double dVar1;
  
  if (*(int *)(param_2 + 0x1c) != *(int *)((longlong)param_1 + 0xf4)) {
    dVar1 = *(double *)(param_2 + 0xb0);
    (**(code **)(*param_1 + 200))(param_1,*(int *)((longlong)param_1 + 0xf4),param_2,0);
    if ((*(int *)(param_2 + 0x1c) == 1) && (*(longlong *)(param_2 + 0x338) == 0)) {
      *(double *)(param_2 + 0xb0) = (double)(float)dVar1;
                    /* WARNING: Could not recover jumptable at 0x0001479a463a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 200))(param_1,3,param_2,0);
      return;
    }
  }
  return;
}



// FUNCTION 1479a463e FUN_1479a463e body=281 status=ok
// SIG undefined FUN_1479a463e(void)

undefined8
FUN_1479a463e(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             longlong param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((9.999999747378752e-05 < *(double *)(param_4 + 0x50)) &&
     (((9.999999747378752e-05 < ABS(*(double *)(param_4 + 0x40) - *(double *)(param_4 + 0x58)) ||
       (9.999999747378752e-05 < ABS(*(double *)(param_4 + 0x48) - *(double *)(param_4 + 0x60)))) ||
      (9.999999747378752e-05 < ABS(*(double *)(param_4 + 0x50) - *(double *)(param_4 + 0x68)))))) {
    if ((*(longlong *)(param_1[0x54] + 0xc0) == 0) ||
       (plVar2 = *(longlong **)(*(longlong *)(param_1[0x54] + 0xc0) + 0x48),
       plVar2 == (longlong *)0x0)) {
      local_18 = DAT_14c8464f0;
      local_28 = DAT_14c8464e0;
      uStack_20 = DAT_14c8464e8;
    }
    else {
      local_18 = *(undefined8 *)
                  (*(longlong *)(*plVar2 + 0x28) + 0x10 + (longlong)(int)plVar2[1] * 0x18);
      puVar1 = (undefined8 *)(*(longlong *)(*plVar2 + 0x28) + (longlong)(int)plVar2[1] * 0x18);
      local_28 = *puVar1;
      uStack_20 = puVar1[1];
    }
    cVar3 = (**(code **)(*param_1 + 0xf0))
                      (local_28,&local_28,param_4 + 0x28,*(undefined4 *)(param_5 + 0x128));
    uVar4 = 1;
    if (cVar3 != '\0') goto LAB_1479a473c;
  }
  uVar4 = 0;
LAB_1479a473c:
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a4758 FUN_1479a4758 body=59 status=ok
// SIG undefined FUN_1479a4758(void)

undefined8 FUN_1479a4758(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x278))();
  if (cVar1 != '\0') {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001479a4790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x268))(param_1,param_2);
  return uVar2;
}



// FUNCTION 1479a4794 FUN_1479a4794 body=96 status=ok
// SIG undefined FUN_1479a4794(void)

undefined8 FUN_1479a4794(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((((char)param_1[0x21] == '\x01') && (*(char *)((longlong)param_1 + 0x109) == '\x01')) &&
     (*(char *)(param_2 + 0x12d) == '\0')) {
    cVar1 = (**(code **)(*param_1 + 0x278))(param_1,param_2);
    uVar2 = 1;
    if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001479a47f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*param_1 + 0x268))(param_1,param_2);
      return uVar2;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1479a47f4 FUN_1479a47f4 body=130 status=ok
// SIG undefined FUN_1479a47f4(void)

undefined8 FUN_1479a47f4(longlong *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  
  cVar1 = (**(code **)(*(longlong *)param_1[0x55] + 0x20))((longlong *)param_1[0x55],param_1);
  if ((cVar1 == '\0') ||
     (((*(char *)((longlong)param_1 + 0x43) == '\x01' && (ABS((double)param_1[0xe]) == 1.0)) &&
      (!NAN(ABS((double)param_1[0xe])))))) {
    uVar2 = 0;
  }
  else {
    dVar3 = *(double *)(param_3 + 0xb0);
    if (*(double *)(param_3 + 0xb0) <= (double)*(float *)((longlong)param_1 + 0xfc)) {
      dVar3 = (double)*(float *)((longlong)param_1 + 0xfc);
    }
    *(double *)(param_3 + 0xb0) = dVar3;
    (**(code **)(*param_1 + 200))(param_1,3,param_3,0);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1479a4876 FUN_1479a4876 body=111 status=ok
// SIG undefined FUN_1479a4876(void)

undefined4 FUN_1479a4876(longlong *param_1,longlong param_2)

{
  byte bVar1;
  undefined4 uVar2;
  
  switch(*(undefined4 *)(param_2 + 0x1c)) {
  case 1:
  case 2:
    bVar1 = (**(code **)(*param_1 + 0x260))(param_1);
    uVar2 = *(undefined4 *)((longlong)param_1 + (ulonglong)(bVar1 ^ 1) * 4 + 0x10c);
    break;
  case 3:
    uVar2 = (undefined4)param_1[0x22];
    break;
  case 4:
    uVar2 = *(undefined4 *)((longlong)param_1 + 0x114);
    break;
  case 5:
    uVar2 = (undefined4)param_1[0x23];
    break;
  case 6:
    uVar2 = *(undefined4 *)((longlong)param_1 + 0x11c);
    break;
  default:
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1479a4958 FUN_1479a4958 body=384 status=ok
// SIG undefined FUN_1479a4958(void)

undefined8 *
FUN_1479a4958(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6)

{
  undefined8 uVar1;
  double *pdVar2;
  double dVar3;
  undefined1 auStack_48 [32];
  double local_28;
  double dStack_20;
  double local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(double *)(param_6 + 0x28);
  dStack_20 = *(double *)(param_6 + 0x30);
  local_18 = *(double *)(param_6 + 0x38);
  dVar3 = local_18 * local_18 + local_28 * local_28 + dStack_20 * dStack_20;
  if (9.999999747378752e-05 <= dVar3) {
    if ((dVar3 != 1.0) || (NAN(dVar3))) {
LAB_1479a4a82:
      if (9.99999993922529e-09 <= dVar3) {
        dVar3 = 1.0 / SQRT(dVar3);
        local_18 = local_18 * dVar3;
        dStack_20 = dStack_20 * dVar3;
        local_28 = local_28 * dVar3;
      }
      else {
        local_18 = DAT_14c8464f0;
        local_28 = DAT_14c8464e0;
        dStack_20 = DAT_14c8464e8;
      }
      goto LAB_1479a4a37;
    }
    pdVar2 = (double *)(param_6 + 0x28);
  }
  else {
    if (*(char *)(param_6 + 0x240) != '\x01') {
LAB_1479a4a5b:
      param_2[2] = param_3[2];
      uVar1 = param_3[1];
      *param_2 = *param_3;
      param_2[1] = uVar1;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
    }
    local_28 = *(double *)(param_6 + 0x248);
    dStack_20 = *(double *)(param_6 + 0x250);
    local_18 = *(double *)(param_6 + 600);
    dVar3 = local_18 * local_18 + local_28 * local_28 + dStack_20 * dStack_20;
    if (dVar3 <= 9.999999747378752e-05) goto LAB_1479a4a5b;
    if ((dVar3 != 1.0) || (NAN(dVar3))) goto LAB_1479a4a82;
    pdVar2 = (double *)(param_6 + 0x248);
  }
  local_18 = pdVar2[2];
  local_28 = *pdVar2;
  dStack_20 = pdVar2[1];
LAB_1479a4a37:
  FUN_144a79a9c(&local_28,param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a4ada FUN_1479a4ada body=108 status=ok
// SIG undefined FUN_1479a4ada(void)

double * FUN_1479a4ada(longlong *param_1,double *param_2,undefined8 param_3,undefined8 param_4,
                      double *param_5,undefined8 param_6)

{
  double dVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  
  fVar3 = (float)param_4;
  if ((fVar3 != 0.0) || (NAN(fVar3))) {
    fVar3 = (float)(**(code **)(*param_1 + 0x1f0))(0,param_3,param_4,param_5,param_6);
  }
  dVar4 = (double)fVar3;
  dVar1 = param_5[2];
  dVar2 = param_5[1];
  *param_2 = dVar4 * *param_5;
  param_2[1] = dVar2 * dVar4;
  param_2[2] = dVar1 * dVar4;
  return param_2;
}



// FUNCTION 1479a4bb0 FUN_1479a4bb0 body=185 status=ok
// SIG undefined FUN_1479a4bb0(void)

void FUN_1479a4bb0(longlong *param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  
  *(undefined4 *)(*(longlong *)(param_4 + 0x358) + 0x20) =
       *(undefined4 *)(*(longlong *)(param_4 + 0x358) + 0x24);
  if (*(char *)(*(longlong *)(param_4 + 0x358) + 0x31) == '\x01') {
    if (*(int *)(*(longlong *)(param_4 + 0x358) + 0x24) == 0) {
      cVar2 = (**(code **)(*param_3 + 0x268))(param_3,param_4);
      if (cVar2 != '\0') {
        piVar1 = (int *)(*(longlong *)(param_4 + 0x358) + 0x24);
        *piVar1 = *piVar1 + 1;
      }
    }
    cVar2 = (**(code **)(*param_1 + 0x20))(param_1,param_3,param_4);
    if (cVar2 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      cVar2 = (**(code **)(*param_3 + 0x250))(param_3,0,param_4);
      if (cVar2 != '\0') {
        uVar3 = 1;
        if (*(char *)(*(longlong *)(param_4 + 0x358) + 0x30) == '\0') {
          piVar1 = (int *)(*(longlong *)(param_4 + 0x358) + 0x24);
          *piVar1 = *piVar1 + 1;
          *(int *)(*(longlong *)(param_4 + 0x358) + 0x28) = (int)param_1[1];
        }
      }
    }
    *(undefined1 *)(*(longlong *)(param_4 + 0x358) + 0x30) = uVar3;
  }
  return;
}



// FUNCTION 1479a4cb6 FUN_1479a4cb6 body=168 status=ok
// SIG undefined FUN_1479a4cb6(void)

ulonglong FUN_1479a4cb6(undefined8 param_1,longlong *param_2,longlong param_3)

{
  float fVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  ulonglong uVar5;
  int iVar6;
  
  cVar4 = *(char *)(param_3 + 300);
  cVar3 = (**(code **)(*param_2 + 0x248))(param_2,param_3);
  uVar5 = 0;
  if ((cVar4 == '\0') && (cVar3 != '\0')) {
    lVar2 = *(longlong *)(param_3 + 0x358);
    if (*(char *)(lVar2 + 0x30) == '\x01') {
      fVar1 = *(float *)(param_2[0x55] + 8);
      if (0.0 < fVar1) {
        if ((*(char *)(lVar2 + 0x31) == '\x01') &&
           (*(float *)(lVar2 + 0x2c) <= fVar1 && fVar1 != *(float *)(lVar2 + 0x2c))) {
          return (ulonglong)
                 CONCAT31((int3)((uint)*(int *)(lVar2 + 0x24) >> 8),
                          *(int *)(lVar2 + 0x24) <= *(int *)(param_2[0x55] + 0xc));
        }
        return 0;
      }
    }
    iVar6 = *(int *)(lVar2 + 0x24);
    if (iVar6 == 0) {
      cVar4 = (**(code **)(*param_2 + 0x268))(param_2,param_3);
      iVar6 = *(int *)(*(longlong *)(param_3 + 0x358) + 0x24);
      if (cVar4 != '\0') {
        iVar6 = iVar6 + 1;
      }
    }
    uVar5 = CONCAT71((int7)((ulonglong)param_2[0x55] >> 8),iVar6 < *(int *)(param_2[0x55] + 0xc));
  }
  return uVar5;
}



// FUNCTION 1479a4d5e FUN_1479a4d5e body=116 status=ok
// SIG undefined FUN_1479a4d5e(void)

void FUN_1479a4d5e(undefined8 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_3 + 0x358);
  if (*(char *)(lVar2 + 0x31) == '\x01') {
    *(undefined1 *)(lVar2 + 0x32) = 1;
    lVar2 = *(longlong *)(param_3 + 0x358);
  }
  *(undefined1 *)(lVar2 + 0x31) = 0;
  *(undefined1 *)(*(longlong *)(param_3 + 0x358) + 0x30) = 0;
  *(undefined4 *)(*(longlong *)(param_3 + 0x358) + 0x2c) = 0;
  *(undefined4 *)(*(longlong *)(param_3 + 0x358) + 0x28) = 0;
  cVar1 = (**(code **)(*param_2 + 0x268))(param_2,param_3);
  if (cVar1 == '\0') {
    *(undefined4 *)(*(longlong *)(param_3 + 0x358) + 0x24) = 0;
    *(undefined4 *)(*(longlong *)(param_3 + 0x358) + 0x20) = 0;
  }
  return;
}



// FUNCTION 1479a4dd2 FUN_1479a4dd2 body=82 status=ok
// SIG undefined FUN_1479a4dd2(void)

void FUN_1479a4dd2(longlong *param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  char cVar1;
  
  if (*(char *)(*(longlong *)(param_4 + 0x358) + 0x31) == '\x01') {
    cVar1 = (**(code **)(*param_3 + 0x268))(param_3,param_4);
    if (cVar1 != '\0') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001479a4e21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1,param_3,param_4);
  return;
}



// FUNCTION 1479a4e24 FUN_1479a4e24 body=145 status=ok
// SIG undefined FUN_1479a4e24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1479a4e24(undefined8 param_1,undefined8 param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cacf940) {
    FUN_144b3d300(&DAT_14cacf940);
    if (DAT_14cacf940 == -1) {
      _DAT_14cacf930 = 0x800000014a8132d8;
      _DAT_14cacf938 = FUN_145af9a3a("FCharacterMovementComponentAsyncCallback",0x28);
      DAT_14cacf93c = 0;
      _Init_thread_footer(&DAT_14cacf940);
    }
  }
  FUN_1446f57c6(&DAT_14cacf930,param_2);
  return param_2;
}



// FUNCTION 1479a4ebb FUN_1479a4ebb body=257 status=ok
// SIG undefined FUN_1479a4ebb(void)

void FUN_1479a4ebb(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = *(longlong **)(param_1 + 0x28);
  if ((plVar2 != (longlong *)0x0) && ((char)plVar2[2] == '\x01')) {
    lVar4 = plVar2[0x7e];
    *(char *)(lVar4 + 0x12d) = (char)plVar2[0x80];
    if (*(char *)((longlong)plVar2 + 0x401) == '\x01') {
      *(undefined4 *)(lVar4 + 0x1c) = *(undefined4 *)((longlong)plVar2 + 0x404);
    }
    lVar3 = plVar2[0x81];
    *(char *)(*(longlong *)(lVar4 + 0x358) + 0x31) = (char)lVar3;
    lVar4 = *(longlong *)(plVar2[0x7e] + 0x358);
    if (*(char *)(lVar4 + 0x32) == '\x01') {
      if ((char)lVar3 == '\0') {
        *(undefined1 *)(lVar4 + 0x32) = 0;
      }
      else {
        *(undefined1 *)(lVar4 + 0x31) = 0;
      }
    }
    *(float *)(plVar2[0x7e] + 0x2e0) = (float)*(double *)(param_1 + 0x38);
    if ((1 < *(int *)(plVar2[0x55] + 0x10)) && (*(char *)(plVar2[0x55] + 0x18) == '\x01')) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
    lVar4 = *(longlong *)(param_1 + 0x20);
    if (lVar4 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      lVar4 = FUN_1479af2a8(param_1 + 0x80,param_1 + 0x70);
      *(undefined8 *)(lVar4 + 0x10) = uVar1;
      if (lVar4 != 0) {
        lVar4 = lVar4 + 0x10;
      }
      *(longlong *)(param_1 + 0x20) = lVar4;
    }
    FUN_1479a4fbc(lVar4 + -0x10,plVar2[0x7e]);
    return;
  }
  return;
}



// FUNCTION 1479a4fbc FUN_1479a4fbc body=874 status=ok
// SIG undefined FUN_1479a4fbc(void)

void FUN_1479a4fbc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  *(undefined1 *)(param_1 + 0x360) = *(undefined1 *)(param_2 + 0x360);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar7;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  uVar7 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x60);
  uVar8 = *(undefined8 *)(param_2 + 0x68);
  uVar9 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = uVar9;
  *(undefined8 *)(param_1 + 0x60) = uVar7;
  *(undefined8 *)(param_1 + 0x68) = uVar8;
  uVar7 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = uVar7;
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  uVar7 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = uVar7;
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
  *(undefined1 *)(param_1 + 0xd1) = *(undefined1 *)(param_2 + 0xd1);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  uVar7 = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe0) = uVar7;
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  uVar7 = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xf8) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x110) = uVar7;
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 0x118);
  *(undefined1 *)(param_1 + 0x120) = *(undefined1 *)(param_2 + 0x120);
  *(undefined1 *)(param_1 + 0x121) = *(undefined1 *)(param_2 + 0x121);
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_2 + 0x124);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
  *(undefined1 *)(param_1 + 300) = *(undefined1 *)(param_2 + 300);
  *(undefined1 *)(param_1 + 0x12d) = *(undefined1 *)(param_2 + 0x12d);
  *(undefined1 *)(param_1 + 0x12e) = *(undefined1 *)(param_2 + 0x12e);
  memcpy((void *)(param_1 + 0x130),(void *)(param_2 + 0x130),0x110);
  *(undefined1 *)(param_1 + 0x240) = *(undefined1 *)(param_2 + 0x240);
  *(undefined1 *)(param_1 + 0x241) = *(undefined1 *)(param_2 + 0x241);
  *(undefined8 *)(param_1 + 600) = *(undefined8 *)(param_2 + 600);
  uVar7 = *(undefined8 *)(param_2 + 0x250);
  *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(param_2 + 0x248);
  *(undefined8 *)(param_1 + 0x250) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x268);
  *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_2 + 0x260);
  *(undefined8 *)(param_1 + 0x268) = uVar7;
  *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_2 + 0x270);
  *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_2 + 0x278);
  uVar7 = *(undefined8 *)(param_2 + 0x288);
  *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_2 + 0x280);
  *(undefined8 *)(param_1 + 0x288) = uVar7;
  *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_2 + 0x290);
  *(undefined1 *)(param_1 + 0x298) = *(undefined1 *)(param_2 + 0x298);
  *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_2 + 0x2b0);
  uVar7 = *(undefined8 *)(param_2 + 0x2a8);
  *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(param_2 + 0x2a0);
  *(undefined8 *)(param_1 + 0x2a8) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x2c8);
  uVar3 = *(undefined4 *)(param_2 + 0x2d0);
  uVar4 = *(undefined4 *)(param_2 + 0x2d4);
  uVar5 = *(undefined4 *)(param_2 + 0x2d8);
  uVar6 = *(undefined4 *)(param_2 + 0x2dc);
  *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(param_2 + 0x2c0);
  *(undefined8 *)(param_1 + 0x2c8) = uVar7;
  *(undefined4 *)(param_1 + 0x2d0) = uVar3;
  *(undefined4 *)(param_1 + 0x2d4) = uVar4;
  *(undefined4 *)(param_1 + 0x2d8) = uVar5;
  *(undefined4 *)(param_1 + 0x2dc) = uVar6;
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_2 + 0x2e0);
  *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_2 + 0x2f8);
  uVar7 = *(undefined8 *)(param_2 + 0x2f0);
  *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_2 + 0x2e8);
  *(undefined8 *)(param_1 + 0x2f0) = uVar7;
  *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_2 + 0x310);
  uVar7 = *(undefined8 *)(param_2 + 0x308);
  *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_2 + 0x300);
  *(undefined8 *)(param_1 + 0x308) = uVar7;
  uVar3 = *(undefined4 *)(param_2 + 0x31c);
  uVar4 = *(undefined4 *)(param_2 + 800);
  uVar5 = *(undefined4 *)(param_2 + 0x324);
  *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_2 + 0x318);
  *(undefined4 *)(param_1 + 0x31c) = uVar3;
  *(undefined4 *)(param_1 + 800) = uVar4;
  *(undefined4 *)(param_1 + 0x324) = uVar5;
  *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_2 + 0x328);
  *(undefined1 *)(param_1 + 0x330) = *(undefined1 *)(param_2 + 0x330);
  *(undefined1 *)(param_1 + 0x331) = *(undefined1 *)(param_2 + 0x331);
  *(undefined1 *)(param_1 + 0x332) = *(undefined1 *)(param_2 + 0x332);
  *(undefined1 *)(param_1 + 0x333) = *(undefined1 *)(param_2 + 0x333);
  *(undefined1 *)(param_1 + 0x334) = *(undefined1 *)(param_2 + 0x334);
  *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(param_2 + 0x338);
  *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_2 + 0x340);
  FUN_1479ad08c(param_1 + 0x348,param_2 + 0x348);
  lVar1 = *(longlong *)(param_2 + 0x358);
  lVar2 = *(longlong *)(param_1 + 0x358);
  uVar7 = *(undefined8 *)(lVar1 + 8);
  uVar8 = *(undefined8 *)(lVar1 + 0x10);
  uVar9 = *(undefined8 *)(lVar1 + 0x18);
  uVar10 = *(undefined8 *)(lVar1 + 0x20);
  uVar11 = *(undefined8 *)(lVar1 + 0x2b);
  *(undefined8 *)(lVar2 + 0x23) = *(undefined8 *)(lVar1 + 0x23);
  *(undefined8 *)(lVar2 + 0x2b) = uVar11;
  *(undefined8 *)(lVar2 + 0x18) = uVar9;
  *(undefined8 *)(lVar2 + 0x20) = uVar10;
  *(undefined8 *)(lVar2 + 8) = uVar7;
  *(undefined8 *)(lVar2 + 0x10) = uVar8;
  return;
}



// FUNCTION 1479a5326 FUN_1479a5326 body=814 status=ok
// SIG undefined FUN_1479a5326(void)

void FUN_1479a5326(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  longlong lVar14;
  wchar_t *pwVar15;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar14 = param_1 + 0xf8;
  lVar1 = param_1 + 0xe8;
  FUN_145c232fc(lVar1,lVar14);
  FUN_140ded26a(lVar1);
  FUN_140ded312(lVar1);
  FUN_140ded26a(lVar14);
  FUN_140ded312(lVar14);
  FUN_14626e280(local_40);
  FUN_140e64772(local_40,&local_30);
  if ((longlong *)(param_1 + 0x108) == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x108) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x108) = local_30;
    local_30 = 0;
    *(undefined4 *)(param_1 + 0x110) = (undefined4)local_28;
    *(undefined4 *)(param_1 + 0x114) = local_28._4_4_;
    local_28 = 0;
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  FUN_14626e29e(local_40);
  FUN_140e64772(local_40,&local_30);
  if ((longlong *)(param_1 + 0x118) == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x118) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x118) = local_30;
    local_30 = 0;
    *(undefined4 *)(param_1 + 0x120) = (undefined4)local_28;
    *(undefined4 *)(param_1 + 0x124) = local_28._4_4_;
    local_28 = 0;
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1461924c8(local_40);
  FUN_140e64772(local_40,&local_30);
  if ((longlong *)(param_1 + 0x128) == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x128) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x128) = local_30;
    local_30 = 0;
    *(undefined4 *)(param_1 + 0x130) = (undefined4)local_28;
    *(undefined4 *)(param_1 + 0x134) = local_28._4_4_;
    local_28 = 0;
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140ded208(&DAT_14ca84da0,&local_30);
  if ((longlong *)(param_1 + 0x138) == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x138) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x138) = local_30;
    local_30 = 0;
    *(undefined4 *)(param_1 + 0x140) = (undefined4)local_28;
    *(undefined4 *)(param_1 + 0x144) = local_28._4_4_;
  }
  lVar14 = FUN_141283ace(DAT_14cb0d2b0);
  uVar2 = *(undefined4 *)(lVar14 + 0x34);
  uVar3 = *(undefined4 *)(lVar14 + 0x38);
  uVar4 = *(undefined4 *)(lVar14 + 0x3c);
  uVar5 = *(undefined4 *)(lVar14 + 0x40);
  uVar6 = *(undefined4 *)(lVar14 + 0x44);
  uVar7 = *(undefined4 *)(lVar14 + 0x48);
  uVar8 = *(undefined4 *)(lVar14 + 0x4c);
  uVar9 = *(undefined4 *)(lVar14 + 0x50);
  uVar10 = *(undefined4 *)(lVar14 + 0x54);
  uVar11 = *(undefined4 *)(lVar14 + 0x58);
  uVar12 = *(undefined4 *)(lVar14 + 0x5c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(lVar14 + 0x30);
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  *(undefined4 *)(param_1 + 0x80) = uVar3;
  *(undefined4 *)(param_1 + 0x84) = uVar4;
  *(undefined4 *)(param_1 + 0x88) = uVar5;
  *(undefined4 *)(param_1 + 0x8c) = uVar6;
  *(undefined4 *)(param_1 + 0x90) = uVar7;
  *(undefined4 *)(param_1 + 0x94) = uVar8;
  *(undefined4 *)(param_1 + 0x98) = uVar9;
  *(undefined4 *)(param_1 + 0x9c) = uVar10;
  *(undefined4 *)(param_1 + 0xa0) = uVar11;
  *(undefined4 *)(param_1 + 0xa4) = uVar12;
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(lVar14 + 0x60);
  FUN_144a67f5c(param_1 + 0xb0,lVar14 + 0x68);
  FUN_144a67f5c(param_1 + 0xc0,lVar14 + 0x78);
  FUN_1459c9ffc(lVar14,&local_30);
  *(longlong *)(param_1 + 0xd0) = local_30;
  uVar13 = FUN_147ac9414(lVar14);
  if (uVar13 < 3) {
    pwVar15 = (wchar_t *)(&PTR_u_Fullscreen_14a819e58)[uVar13];
  }
  else {
    pwVar15 = L"Unknown";
  }
  FUN_14020fad6(param_1 + 0xd8,pwVar15);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a5656 FUN_1479a5656 body=268 status=ok
// SIG undefined FUN_1479a5656(void)

void FUN_1479a5656(longlong *param_1,longlong *param_2,int param_3)

{
  undefined8 uVar1;
  double dVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = (longlong)param_3 * 0x20;
  uVar1 = *(undefined8 *)(*param_2 + lVar5);
  dVar2 = *(double *)(*param_2 + 8 + lVar5);
  if ((dVar2 != 3.4028234663852886e+38) || (NAN(dVar2))) {
    FUN_140002266(&local_40,L"%0.2fs - %0.2fs",uVar1,dVar2);
  }
  else {
    FUN_140002266(&local_40,L"%0.2fs - inf",uVar1);
  }
  puVar3 = local_40;
  local_48 = *(undefined8 *)(*param_2 + 0x10 + lVar5);
  puVar4 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar4 = local_40;
  }
  FUN_140002266(&local_40,L"Bucket: %s  Count: %i  Time: %.2f s",puVar4,
                *(undefined4 *)(*param_2 + 0x18 + lVar5));
  (**(code **)(*param_1 + 8))(param_1,&local_40);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (puVar3 != (undefined2 *)0x0) {
    FUN_1400020a8(puVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a5764 FUN_1479a5764 body=698 status=ok
// SIG undefined FUN_1479a5764(void)

void FUN_1479a5764(longlong *param_1,int param_2)

{
  longlong lVar1;
  double dVar2;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140002266(local_40,L"Total hitch count:  %i",param_2);
  (**(code **)(*param_1 + 8))(param_1,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1479a5a20(param_1[1]);
  FUN_140002266(local_40,L"Total hitch time:  %.2f s (%0.2f %%)");
  (**(code **)(*param_1 + 8))(param_1,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (param_2 < 1) {
    dVar2 = 0.0;
  }
  else {
    dVar2 = 1.0 / (double)param_2;
  }
  FUN_140002266(local_40,L"Hitch frames bound by game thread:  %i  (%0.1f %%)",
                *(int *)(param_1[1] + 0x144),(double)*(int *)(param_1[1] + 0x144) * dVar2);
  (**(code **)(*param_1 + 8))(param_1,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140002266(local_40,L"Hitch frames bound by render thread:  %i  (%0.1f %%)",
                *(int *)(param_1[1] + 0x148),(double)*(int *)(param_1[1] + 0x148) * dVar2);
  (**(code **)(*param_1 + 8))(param_1,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140002266(local_40,L"Hitch frames bound by RHI thread:  %i  (%0.1f %%)",
                *(int *)(param_1[1] + 0x14c),(double)*(int *)(param_1[1] + 0x14c) * dVar2);
  (**(code **)(*param_1 + 8))(param_1,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140002266(local_40,L"Hitch frames bound by GPU:  %i  (%0.1f %%)",*(int *)(param_1[1] + 0x150),
                dVar2 * (double)*(int *)(param_1[1] + 0x150));
  (**(code **)(*param_1 + 8))(param_1,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  dVar2 = *(double *)(param_1[1] + 0x28);
  FUN_140002266(local_40,L"Hitches / min:  %.2f",
                -(ulonglong)(0.0 < dVar2) &
                (ulonglong)((double)*(int *)(param_1[1] + 0x60) / (dVar2 / 60.0)));
  (**(code **)(*param_1 + 8))(param_1,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (0 < param_2) {
    lVar1 = *(longlong *)(param_1[1] + 0x60);
    if (lVar1 < 1) {
      dVar2 = 0.0;
    }
    else {
      dVar2 = *(double *)(param_1[1] + 0x58) / (double)lVar1;
    }
    FUN_140002266(local_40,L"Avg. hitch frame length:  %.2f s",dVar2);
    (**(code **)(*param_1 + 8))(param_1,local_40);
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a5a20 FUN_1479a5a20 body=87 status=ok
// SIG undefined FUN_1479a5a20(void)

ulonglong FUN_1479a5a20(longlong param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = *(double *)(param_1 + 0x58);
  if (0 < *(int *)(param_1 + 0x50)) {
    dVar2 = **(double **)(param_1 + 0x48);
    if (**(double **)(param_1 + 0x48) <= (double)DAT_14c75b138 / 1000.0) {
      dVar2 = (double)DAT_14c75b138 / 1000.0;
    }
    dVar1 = dVar1 - (double)*(longlong *)(param_1 + 0x60) * dVar2;
  }
  return -(ulonglong)(0.0 < *(double *)(param_1 + 0x28)) &
         (ulonglong)((dVar1 * 100.0) / *(double *)(param_1 + 0x28));
}



// FUNCTION 1479a5a78 FUN_1479a5a78 body=110 status=ok
// SIG undefined FUN_1479a5a78(void)

void FUN_1479a5a78(longlong *param_1,undefined4 param_2,float param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_28,L"  Target %d FPS: %.2f %% syncs missed",param_2,(double)param_3);
  (**(code **)(*param_1 + 8))(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a5ae8 FUN_1479a5ae8 body=110 status=ok
// SIG undefined FUN_1479a5ae8(void)

void FUN_1479a5ae8(longlong *param_1,undefined4 param_2,float param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140002266(local_28,L"DynamicRes above %d%% : %.2f%% of frames",param_2,(double)param_3);
  (**(code **)(*param_1 + 8))(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a5b58 FUN_1479a5b58 body=2348 status=ok
// SIG undefined FUN_1479a5b58(void)

void FUN_1479a5b58(longlong *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined2 *puVar9;
  ushort uVar10;
  ulonglong uVar11;
  ushort uVar12;
  ulonglong uVar13;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  double local_68;
  undefined1 local_60 [8];
  undefined2 *local_58;
  int local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((int)param_1[4] == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)param_1[3];
  }
  FUN_140002266(local_48,L"--- Begin : FPS chart dump for level \'%s\'",puVar9);
  (**(code **)(*param_1 + 8))(param_1,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar3 = FUN_14681f999();
  uVar4 = FUN_140e82e72();
  uVar5 = FUN_1457ba796(uVar4);
  uVar6 = thunk_FUN_145c581c1();
  FUN_1402160b8(local_60);
  FUN_14170a840(local_60,&local_58);
  puVar9 = local_58;
  if (local_50 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  local_78 = uVar5;
  local_70 = uVar3;
  FUN_140002266(local_48,
                L"Dumping FPS chart at %s using build %s in config %s built from changelist %i",
                puVar9,uVar6);
  (**(code **)(*param_1 + 8))(param_1,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_48,L"Machine info:");
  (**(code **)(*param_1 + 8))(param_1,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  puVar7 = &DAT_149dfb77a;
  puVar9 = &DAT_149dfb77a;
  if ((int)param_1[0x20] != 0) {
    puVar9 = (undefined2 *)param_1[0x1f];
  }
  if ((int)param_1[0x1e] != 0) {
    puVar7 = (undefined2 *)param_1[0x1d];
  }
  FUN_140002266(local_48,L"\tOS: %s %s",puVar7,puVar9);
  (**(code **)(*param_1 + 8))(param_1,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  puVar7 = &DAT_149dfb77a;
  puVar9 = &DAT_149dfb77a;
  if ((int)param_1[0x24] != 0) {
    puVar9 = (undefined2 *)param_1[0x23];
  }
  if ((int)param_1[0x22] != 0) {
    puVar7 = (undefined2 *)param_1[0x21];
  }
  FUN_140002266(local_48,L"\tCPU: %s %s",puVar7,puVar9);
  (**(code **)(*param_1 + 8))(param_1,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((int)param_1[6] == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)param_1[5];
  }
  FUN_140002266(local_48,L"\tDeviceProfile: %s",puVar9);
  (**(code **)(*param_1 + 8))(param_1,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140002266(local_48,L"\tGPU: %s");
  iVar2 = (int)param_1[0x26];
  iVar1 = (int)param_1[0x28];
  if (iVar1 == iVar2) {
    if (1 < iVar1) {
      lVar8 = 0;
      while( true ) {
        uVar10 = *(ushort *)(param_1[0x27] + lVar8);
        uVar11 = (ulonglong)uVar10;
        uVar12 = *(ushort *)(param_1[0x25] + lVar8);
        if (uVar10 != uVar12) break;
        if (uVar10 == 0) goto LAB_1479a5e04;
LAB_1479a5dc8:
        lVar8 = lVar8 + 2;
      }
      if ((uVar12 | uVar10) < 0x80) {
        uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
        uVar13 = (ulonglong)uVar12;
        uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
        if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar13]) goto LAB_1479a5dc8;
      }
      if (uVar10 != uVar12) goto LAB_1479a642c;
    }
  }
  else if (iVar1 + iVar2 != 1) {
LAB_1479a642c:
    if (iVar2 == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    else {
      puVar9 = (undefined2 *)param_1[0x25];
    }
    FUN_140002266(&local_58,L" (desktop adapter %s)",puVar9);
    iVar2 = local_50 + -1;
    if (local_50 == 0) {
      iVar2 = 0;
    }
    FUN_1400020e8(local_48,local_58,iVar2);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1479a5e04:
  (**(code **)(*param_1 + 8))(param_1,local_48);
  FUN_140002266(&local_58,L"\tResolution Quality: %.2f",(double)*(float *)(param_1 + 0xf));
  (**(code **)(*param_1 + 8))(param_1,&local_58);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_58,L"\tView Distance Quality: %d",*(undefined4 *)((longlong)param_1 + 0x7c));
  (**(code **)(*param_1 + 8))(param_1,&local_58);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_58,L"\tAnti-Aliasing Quality: %d",(int)param_1[0x10]);
  (**(code **)(*param_1 + 8))(param_1,&local_58);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_58,L"\tShadow Quality: %d",*(undefined4 *)((longlong)param_1 + 0x84));
  (**(code **)(*param_1 + 8))(param_1,&local_58);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_58,L"\tGlobal Illumination Quality: %d",(int)param_1[0x11]);
  (**(code **)(*param_1 + 8))(param_1,&local_58);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_58,L"\tReflection Quality: %d",*(undefined4 *)((longlong)param_1 + 0x8c));
  (**(code **)(*param_1 + 8))(param_1,&local_58);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_58,L"\tPost-Process Quality: %d",(int)param_1[0x12]);
  (**(code **)(*param_1 + 8))(param_1,&local_58);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_58,L"\tTexture Quality: %d",*(undefined4 *)((longlong)param_1 + 0x94));
  (**(code **)(*param_1 + 8))(param_1,&local_58);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_58,L"\tEffects Quality: %d",(int)param_1[0x13]);
  (**(code **)(*param_1 + 8))(param_1,&local_58);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_58,L"\tFoliage Quality: %d",*(undefined4 *)((longlong)param_1 + 0x9c));
  (**(code **)(*param_1 + 8))(param_1,&local_58);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_58,L"\tHair Quality: %d",(int)param_1[0x14]);
  (**(code **)(*param_1 + 8))(param_1,&local_58);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((int)param_1[0x1c] == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)param_1[0x1b];
  }
  FUN_140002266(&local_58,L"\tWindow Mode: %s",puVar9);
  (**(code **)(*param_1 + 8))(param_1,&local_58);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_58,L"\tResolution: %dx%d",(int)param_1[0x1a],
                *(undefined4 *)((longlong)param_1 + 0xd4));
  (**(code **)(*param_1 + 8))(param_1,&local_58);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar8 = param_1[1];
  local_68 = (double)*(longlong *)(lVar8 + 0x30) / *(double *)(lVar8 + 0x28);
  local_70 = *(undefined4 *)(lVar8 + 0x1a0);
  local_78 = *(undefined8 *)(lVar8 + 0x198);
  FUN_140002266(&local_58,
                L"%lld frames collected over %4.2f seconds, disregarding %4.2f seconds (%d frames) for a %4.2f FPS average"
                ,*(longlong *)(lVar8 + 0x30),param_1[2]);
  (**(code **)(*param_1 + 8))(param_1,&local_58);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_58,L"Average GPU frametime: %4.2f ms",(double)*(float *)(param_1 + 7));
  (**(code **)(*param_1 + 8))(param_1,&local_58);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_58,L"Average RenderThread frametime: %4.2f ms",
                (double)*(float *)((longlong)param_1 + 0x3c));
  (**(code **)(*param_1 + 8))(param_1,&local_58);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_58,L"Average GameThread frametime: %4.2f ms",(double)*(float *)(param_1 + 8))
  ;
  (**(code **)(*param_1 + 8))(param_1,&local_58);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_58,L"Total time spent flushing async loading: %4.2f ms",param_1[9]);
  (**(code **)(*param_1 + 8))(param_1,&local_58);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_58,L"Total flushing async loading calls: %d",(int)param_1[10]);
  (**(code **)(*param_1 + 8))(param_1,&local_58);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_58,L"Max flush async loading time: %4.2f ms",param_1[0xb]);
  (**(code **)(*param_1 + 8))(param_1,&local_58);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_58,L"Average flush async loading time: %4.2f ms",param_1[0xc]);
  (**(code **)(*param_1 + 8))(param_1,&local_58);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_58,L"Total sync loads: %d",(int)param_1[0xd]);
  (**(code **)(*param_1 + 8))(param_1,&local_58);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_58,L"BoundGameThreadPct: %4.2f",(double)*(float *)((longlong)param_1 + 0x6c))
  ;
  (**(code **)(*param_1 + 8))(param_1,&local_58);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_58,L"BoundRenderThreadPct: %4.2f",(double)*(float *)(param_1 + 0xe));
  (**(code **)(*param_1 + 8))(param_1,&local_58);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_58,L"BoundGPUPct: %4.2f",(double)*(float *)((longlong)param_1 + 0x74));
  (**(code **)(*param_1 + 8))(param_1,&local_58);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_58,L"ExcludeIdleTime: %d",*DAT_14cacf970);
  (**(code **)(*param_1 + 8))(param_1,&local_58);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a6486 FUN_1479a6486 body=159 status=ok
// SIG undefined FUN_1479a6486(void)

undefined8 * FUN_1479a6486(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = &PTR_FUN_14a814480;
  param_1[1] = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  param_1[0x31] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  FUN_1479a6526(param_1,param_2);
  return param_1;
}



// FUNCTION 1479a6526 FUN_1479a6526 body=1093 status=ok
// SIG undefined FUN_1479a6526(void)

void FUN_1479a6526(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined8 *)(param_1 + 0x188) = *param_2;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x124) = 0;
  *(undefined8 *)(param_1 + 300) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0x7fffffff;
  *(undefined8 *)(param_1 + 0x160) = 0x7fffffff00000000;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0x7fffffff;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined8 *)(param_1 + 0x1cc) = 0;
  *(undefined8 *)(param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1ec) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x1f0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  local_98 = 0x3fb999999999999a;
  uStack_90 = 0x3ff0000000000000;
  local_a8 = 0x3fa1eb851eb851ec;
  uStack_a0 = 0x3faeb851eb851eb8;
  local_b8 = 0x3f947ae147ae147b;
  uStack_b0 = 0x3f9eb851eb851eb8;
  local_c8 = 0;
  uStack_c0 = 0x3f8eb851eb851eb8;
  local_d0 = 8;
  local_d8 = &local_c8;
  FUN_14681f83c();
  plVar1 = (longlong *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x70) = 0xffefffffffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) < 0) {
    FUN_146821058(plVar1,0);
  }
  lVar8 = 0;
  dVar3 = 0.0;
  do {
    dVar2 = *(double *)((longlong)&DAT_14a8144e0 + lVar8) * 0.001;
    iVar7 = *(int *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x50) = iVar7 + 1U;
    if (*(uint *)(param_1 + 0x54) < iVar7 + 1U) {
      FUN_14577dc82(plVar1,iVar7);
    }
    lVar6 = *plVar1;
    lVar5 = (longlong)iVar7 * 0x20;
    *(double *)(lVar6 + lVar5) = dVar3;
    *(double *)(lVar6 + 8 + lVar5) = dVar2;
    *(undefined8 *)(lVar6 + 0x10 + lVar5) = 0;
    *(undefined4 *)(lVar6 + 0x18 + lVar5) = 0;
    lVar8 = lVar8 + 8;
    dVar3 = dVar2;
  } while (lVar8 != 0x68);
  iVar7 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar7 + 1U) {
    FUN_14577dc82(plVar1,iVar7);
  }
  lVar8 = *(longlong *)(param_1 + 0x48);
  lVar6 = (longlong)iVar7 * 0x20;
  *(double *)(lVar8 + lVar6) = dVar2;
  *(undefined8 *)(lVar8 + 8 + lVar6) = 0x47efffffe0000000;
  *(undefined8 *)(lVar8 + 0x10 + lVar6) = 0;
  *(undefined4 *)(lVar8 + 0x18 + lVar6) = 0;
  plVar1 = (longlong *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0xa0) = 0xffefffffffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) < 0) {
    FUN_146821058(plVar1,0);
  }
  local_c8 = 0x404e000000000000;
  uStack_c0 = 0x4051800000000000;
  local_b8 = 0x4054000000000000;
  uStack_b0 = 0x4056800000000000;
  local_a8 = 0x4059000000000000;
  uVar9 = 0;
  uVar10 = 0;
  lVar8 = 0;
  do {
    uVar4 = *(undefined8 *)((longlong)&local_c8 + lVar8);
    iVar7 = *(int *)(param_1 + 0x80);
    *(uint *)(param_1 + 0x80) = iVar7 + 1U;
    if (*(uint *)(param_1 + 0x84) < iVar7 + 1U) {
      FUN_14577dc82(plVar1,iVar7);
    }
    lVar6 = *plVar1;
    lVar5 = (longlong)iVar7 * 0x20;
    *(ulonglong *)(lVar6 + lVar5) = CONCAT44(uVar10,uVar9);
    *(undefined8 *)(lVar6 + 8 + lVar5) = uVar4;
    *(undefined8 *)(lVar6 + 0x10 + lVar5) = 0;
    *(undefined4 *)(lVar6 + 0x18 + lVar5) = 0;
    lVar8 = lVar8 + 8;
    uVar9 = (undefined4)uVar4;
    uVar10 = (undefined4)((ulonglong)uVar4 >> 0x20);
  } while (lVar8 != 0x28);
  iVar7 = *(int *)(param_1 + 0x80);
  *(uint *)(param_1 + 0x80) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x84) < iVar7 + 1U) {
    FUN_14577dc82(plVar1,iVar7);
  }
  lVar8 = *(longlong *)(param_1 + 0x78);
  lVar6 = (longlong)iVar7 * 0x20;
  *(undefined8 *)(lVar8 + lVar6) = uVar4;
  *(undefined8 *)(lVar8 + 8 + lVar6) = 0x47efffffe0000000;
  *(undefined8 *)(lVar8 + 0x10 + lVar6) = 0;
  *(undefined4 *)(lVar8 + 0x18 + lVar6) = 0;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0x406f400000000000;
  local_b8 = 0x407f400000000000;
  local_d0 = 3;
  local_d8 = &local_c8;
  FUN_14681f83c(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0x1a4) = 0xbf800000bf800000;
  *(undefined8 *)(param_1 + 0x1ac) = 0xffffffffffffffff;
  uVar4 = FUN_140032b16(0);
  FUN_145c3cfe0(uVar4,&local_c8);
  iVar7 = (int)uStack_c0 + -1;
  if ((int)uStack_c0 == 0) {
    iVar7 = 0;
  }
  FUN_1402980a2(param_1 + 0x1b8,local_c8,iVar7);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(param_1 + 0x1c8) = 0;
  if ((local_80 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a696c FUN_1479a696c body=120 status=ok
// SIG undefined FUN_1479a696c(void)

void FUN_1479a696c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a814480;
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1479a69e4 FUN_1479a69e4 body=150 status=ok
// SIG undefined FUN_1479a69e4(void)

void FUN_1479a69e4(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = FUN_1467b7b66();
  *(undefined4 *)(param_1 + 0x1a4) = uVar3;
  *(undefined4 *)(param_1 + 0x1ac) = 0xffffffff;
  uVar2 = FUN_140032b16(0);
  FUN_145c3cfe0(uVar2,&local_30);
  iVar1 = local_28 + -1;
  if (local_28 == 0) {
    iVar1 = 0;
  }
  FUN_1402980a2(param_1 + 0x1b8,local_30,iVar1);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(param_1 + 0x1c8) = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a6a7c FUN_1479a6a7c body=37 status=ok
// SIG undefined FUN_1479a6a7c(void)

void FUN_1479a6a7c(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1467b7b66();
  *(undefined4 *)(param_1 + 0x1a8) = uVar1;
  *(undefined4 *)(param_1 + 0x1b0) = 0xffffffff;
  return;
}



// FUNCTION 1479a6aa2 FUN_1479a6aa2 body=517 status=ok
// SIG undefined FUN_1479a6aa2(void)

void FUN_1479a6aa2(longlong param_1,undefined4 param_2,longlong *param_3,undefined8 *param_4)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_208 [40];
  longlong local_1e0;
  void *local_1d8;
  int local_1d0;
  undefined4 local_1cc;
  void *local_1c8;
  int local_1c0;
  undefined4 local_1bc;
  undefined **local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 local_140 [48];
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
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
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar2 = param_3[1];
  if ((longlong)(int)lVar2 != 0) {
    local_1e0 = *param_3;
    lVar4 = 0;
    do {
      local_1b0 = *(undefined8 *)(local_1e0 + lVar4);
      local_1b8 = &PTR_LAB_14a819750;
      local_190 = 0;
      uStack_188 = 0;
      local_1a0 = 0;
      uStack_198 = 0;
      local_110 = 0xbf800000bf800000;
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      FUN_145880926(local_140);
      local_80 = 0;
      uStack_78 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_1b8 = &PTR_FUN_14a819710;
      local_1c8 = (void *)0x0;
      local_1c0 = *(int *)(param_1 + 0x1c0);
      lVar3 = (longlong)local_1c0;
      pvVar1 = *(void **)(param_1 + 0x1b8);
      if (lVar3 == 0) {
        local_1bc = 0;
      }
      else {
        FUN_1446dd670(&local_1c8,local_1c0,0);
        memcpy(local_1c8,pvVar1,lVar3 * 2);
      }
      local_1d8 = (void *)0x0;
      local_1d0 = *(int *)(param_4 + 1);
      lVar3 = (longlong)local_1d0;
      pvVar1 = (void *)*param_4;
      if (lVar3 == 0) {
        local_1cc = 0;
      }
      else {
        FUN_1446dd670(&local_1d8,local_1d0,0);
        memcpy(local_1d8,pvVar1,lVar3 * 2);
      }
      FUN_143421378(&local_1b8,param_2,&local_1d8,&local_1c8);
      FUN_1479a6e1e(&local_1b8);
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar4);
  }
  if ((local_70 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a6ca8 FUN_1479a6ca8 body=277 status=ok
// SIG undefined FUN_1479a6ca8(void)

undefined8 * FUN_1479a6ca8(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  longlong local_58;
  int local_50;
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14170a840(param_2,&local_48);
  FUN_145eefa7e(&local_68);
  FUN_1412cfe60(&local_58,&local_68,(local_60 == 0) + '\x0e');
  FUN_1401aebe8(&local_58,L"FPSChartStats",0xd);
  iVar3 = local_40 + -1;
  if (local_40 == 0) {
    iVar3 = 0;
  }
  FUN_1412cfe60(param_1,&local_58,iVar3 + 1 + (uint)(local_50 == 0));
  FUN_1401aebe8(param_1,local_48,iVar3);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)FUN_14054d1d4();
  if (*(int *)(param_1 + 1) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*param_1;
  }
  (**(code **)(*plVar1 + 0x58))(plVar1,puVar2,1);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a6dbe FUN_1479a6dbe body=96 status=ok
// SIG undefined FUN_1479a6dbe(void)

longlong * FUN_1479a6dbe(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_146b17f35(param_1 + 2,*param_3);
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 1479a6e1e FUN_1479a6e1e body=211 status=ok
// SIG undefined FUN_1479a6e1e(void)

void FUN_1479a6e1e(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14a819750;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1479a6f40 FUN_1479a6f40 body=85 status=ok
// SIG undefined FUN_1479a6f40(void)

void FUN_1479a6f40(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cacfa08);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001479a6f82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001479a6f8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2a8))(param_1);
  return;
}



// FUNCTION 1479a6fb4 FUN_1479a6fb4 body=175 status=ok
// SIG undefined FUN_1479a6fb4(void)

void FUN_1479a6fb4(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x3f0))(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a7064 FUN_1479a7064 body=549 status=ok
// SIG undefined FUN_1479a7064(void)

void FUN_1479a7064(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong local_78 [5];
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1446dcc8c();
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
    FUN_144a5ded6(param_2,local_78 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 4);
  }
  local_78[2] = 0;
  local_78[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 2);
  }
  plVar1 = local_78 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_78[0] = 0;
  local_78[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  local_c8 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    local_c8 = local_78;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = local_48;
  local_98 = local_78[4];
  uStack_90 = uStack_50;
  local_b8 = local_40;
  uStack_b4 = uStack_3c;
  uStack_b0 = uStack_38;
  uStack_ac = uStack_34;
  local_a8 = local_30;
  (**(code **)(*param_1 + 0x3f8))(param_1,&local_b8,&local_98,plVar1);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a728a FUN_1479a728a body=160 status=ok
// SIG undefined FUN_1479a728a(void)

void FUN_1479a728a(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2c0))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a732c FUN_1479a732c body=260 status=ok
// SIG undefined FUN_1479a732c(void)

void FUN_1479a732c(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  _Src = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_30;
  local_40 = (int)uStack_30;
  if (lVar1 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,uStack_30 & 0xffffffff,0);
    memcpy(local_48,_Src,lVar1 * 2);
  }
  FUN_1434226c2(param_1,&local_48);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a7432 FUN_1479a7432 body=160 status=ok
// SIG undefined FUN_1479a7432(void)

void FUN_1479a7432(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2f0))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a7508 FUN_1479a7508 body=156 status=ok
// SIG undefined FUN_1479a7508(void)

void FUN_1479a7508(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x390))(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a75c4 FUN_1479a75c4 body=162 status=ok
// SIG undefined FUN_1479a75c4(void)

void FUN_1479a75c4(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x398))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a7682 FUN_1479a7682 body=242 status=ok
// SIG undefined FUN_1479a7682(void)

void FUN_1479a7682(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x388))(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a7776 FUN_1479a7776 body=191 status=ok
// SIG undefined FUN_1479a7776(void)

void FUN_1479a7776(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
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
  local_28 = local_20;
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  (**(code **)(*param_1 + 0x300))(param_1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a7850 FUN_1479a7850 body=191 status=ok
// SIG undefined FUN_1479a7850(void)

void FUN_1479a7850(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
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
  local_28 = local_20;
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  (**(code **)(*param_1 + 0x310))(param_1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a7a10 FUN_1479a7a10 body=160 status=ok
// SIG undefined FUN_1479a7a10(void)

void FUN_1479a7a10(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2b0))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a7b3e FUN_1479a7b3e body=160 status=ok
// SIG undefined FUN_1479a7b3e(void)

void FUN_1479a7b3e(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x350))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a7bfa FUN_1479a7bfa body=47 status=ok
// SIG undefined FUN_1479a7bfa(void)

void FUN_1479a7bfa(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cacfb68);
                    /* WARNING: Could not recover jumptable at 0x0001479a7c26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 1479a7c2a FUN_1479a7c2a body=72 status=ok
// SIG undefined FUN_1479a7c2a(void)

void FUN_1479a7c2a(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x2a0))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001479a7c5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2a8))(param_1);
    return;
  }
  FUN_1468998ea(L"ServerToggleAILogging_Validate");
  return;
}



// FUNCTION 1479a7ca2 FUN_1479a7ca2 body=233 status=ok
// SIG undefined FUN_1479a7ca2(void)

void FUN_1479a7ca2(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  double *pdVar3;
  longlong *plVar4;
  double dVar5;
  undefined1 auStack_88 [44];
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined1 local_50 [24];
  double local_38;
  double dStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    plVar4 = (longlong *)param_1[4];
  }
  else {
    plVar4 = (longlong *)0x0;
  }
  (**(code **)(*plVar4 + 0x718))(plVar4,&local_38,local_50);
  dVar5 = dStack_30;
  if (plVar4[0x7a] != 0) {
    lVar1 = *(longlong *)(plVar4[0x7a] + 0x1c8);
    pdVar3 = (double *)&DAT_14c8464e0;
    if (lVar1 != 0) {
      pdVar3 = (double *)(lVar1 + 0x260);
    }
    local_38 = *pdVar3;
    dStack_30 = pdVar3[1];
    dVar5 = pdVar3[1];
  }
  local_28 = 0;
  local_5c = (int)local_38 + *(int *)(lVar2 + 0x710);
  local_58 = (int)dVar5 + *(int *)(lVar2 + 0x714);
  local_54 = *(undefined4 *)(lVar2 + 0x718);
  FUN_147dab1a0(lVar2);
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479a7d8c FUN_1479a7d8c body=160 status=ok
// SIG undefined FUN_1479a7d8c(void)

void FUN_1479a7d8c(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x2e8))(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a7e2e FUN_1479a7e2e body=47 status=ok
// SIG undefined FUN_1479a7e2e(void)

void FUN_1479a7e2e(longlong *param_1,longlong param_2)

{
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_143422b68();
                    /* WARNING: Could not recover jumptable at 0x0001479a7e56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}



// FUNCTION 1479a7e5e FUN_1479a7e5e body=160 status=ok
// SIG undefined FUN_1479a7e5e(void)

void FUN_1479a7e5e(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x348))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a7f00 FUN_1479a7f00 body=160 status=ok
// SIG undefined FUN_1479a7f00(void)

void FUN_1479a7f00(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x358))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a7fa2 FUN_1479a7fa2 body=175 status=ok
// SIG undefined FUN_1479a7fa2(void)

void FUN_1479a7fa2(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x318))(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a80d0 FUN_1479a80d0 body=73 status=ok
// SIG undefined FUN_1479a80d0(void)

void FUN_1479a80d0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (((*(uint *)(param_1 + 8) & 0x10) == 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    uVar1 = FUN_144a79cc8();
    uVar2 = FUN_140c13342();
    lVar3 = FUN_140277b32(uVar2,uVar1,L"ServerStatReplicatorInst",0);
    if (lVar3 != 0) {
      *(byte *)(lVar3 + 0x391) = *(byte *)(lVar3 + 0x391) ^ 1;
    }
  }
  return;
}



// FUNCTION 1479a8130 FUN_1479a8130 body=73 status=ok
// SIG undefined FUN_1479a8130(void)

void FUN_1479a8130(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (((*(uint *)(param_1 + 8) & 0x10) == 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    uVar1 = FUN_144a79cc8();
    uVar2 = FUN_140c13342();
    lVar3 = FUN_140277b32(uVar2,uVar1,L"ServerStatReplicatorInst",0);
    if (lVar3 != 0) {
      *(byte *)(lVar3 + 0x390) = *(byte *)(lVar3 + 0x390) ^ 1;
    }
  }
  return;
}



// FUNCTION 1479a8196 FUN_1479a8196 body=160 status=ok
// SIG undefined FUN_1479a8196(void)

void FUN_1479a8196(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x338))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a8238 FUN_1479a8238 body=191 status=ok
// SIG undefined FUN_1479a8238(void)

void FUN_1479a8238(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
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
  local_28 = local_20;
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  (**(code **)(*param_1 + 0x340))(param_1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a82f8 FUN_1479a82f8 body=175 status=ok
// SIG undefined FUN_1479a82f8(void)

void FUN_1479a82f8(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x330))(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a83e0 FUN_1479a83e0 body=60 status=ok
// SIG undefined FUN_1479a83e0(void)

undefined8 FUN_1479a83e0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  cVar1 = FUN_144a792c0(param_1,0x30);
  if (cVar1 != '\0') {
    return 0;
  }
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    plVar3 = *(longlong **)(param_1 + 0x20);
  }
  else {
    plVar3 = (longlong *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001479a8415. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar3 + 0x180))();
  return uVar2;
}



// FUNCTION 1479a8422 FUN_1479a8422 body=386 status=ok
// SIG undefined FUN_1479a8422(void)

void FUN_1479a8422(longlong *param_1,float param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = (**(code **)(*param_1 + 0x180))();
  if ((lVar4 != 0) && (plVar1 = *(longlong **)(lVar4 + 0x170), plVar1 != (longlong *)0x0)) {
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
      lVar7 = param_1[4];
    }
    else {
      lVar7 = 0;
    }
    lVar6 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    puVar2 = local_60;
    local_58 = 3;
    *local_60 = &DAT_149efe500;
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
    local_60[2] = lVar5;
    *local_60 = &PTR_FUN_14a819900;
    local_60[3] = 0;
    FUN_14485c47a(local_60 + 3,lVar7);
    *(undefined4 *)(puVar2 + 5) = 0;
    puVar2[4] = &LAB_1479a85a6;
    local_70 = 0;
    local_68 = 0;
    FUN_14096c7c0(&local_70,&local_60);
    if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
      lVar6 = param_1[4];
    }
    (**(code **)(*plVar1 + 0x6d8))(plVar1,lVar6,&local_70);
    *(double *)(lVar4 + 0x708) = (double)param_2 + *(double *)(lVar4 + 0x6d0);
    FUN_1449db362(&local_60);
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a85b4 FUN_1479a85b4 body=621 status=ok
// SIG undefined FUN_1479a85b4(void)

void FUN_1479a85b4(longlong param_1,float param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  longlong lVar9;
  double dVar10;
  double *pdVar11;
  undefined4 uVar12;
  uint uVar13;
  longlong *plVar14;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    lVar9 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar9 = 0;
  }
  plVar1 = *(longlong **)(lVar9 + 0x3d0);
  if (plVar1 == (longlong *)0x0) goto LAB_1479a861c;
  lVar9 = FUN_144a7cacc();
  plVar14 = (longlong *)plVar1[2];
  if (((int)plVar14[7] < *(int *)(lVar9 + 0x38)) ||
     (*(longlong *)(plVar14[6] + (longlong)*(int *)(lVar9 + 0x38) * 8) != lVar9 + 0x30))
  goto LAB_1479a861c;
  lVar9 = plVar14[0x22];
  if (lVar9 == 0) {
    (**(code **)(*plVar14 + 1000))(plVar14);
    lVar9 = plVar14[0x22];
  }
  dVar10 = (double)FUN_140d491fc(plVar1[0x87],
                                 *(float *)(*(longlong *)(lVar9 + 0x438) + 0x644) * param_2,
                                 *(float *)(*(longlong *)(lVar9 + 0x438) + 0x640) * param_2,1);
  plVar14 = (longlong *)plVar1[0x85];
  if (plVar14 != (longlong *)0x0) {
    local_90 = (double)param_2;
    local_88 = local_90;
    local_80 = local_90;
    dVar10 = (double)(**(code **)(*plVar14 + 0x478))();
  }
  uVar12 = SUB84(plVar14,0);
  lVar9 = plVar1[0x39];
  if (lVar9 == 0) {
    local_48 = DAT_14c846508;
    local_58 = DAT_14c8464f8;
    dStack_50 = DAT_14c846500;
LAB_1479a879e:
    local_68 = (double)DAT_14c8464f0;
    local_78 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_70 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  }
  else {
    dVar4 = *(double *)(lVar9 + 0x240);
    dVar5 = *(double *)(lVar9 + 0x248);
    dVar6 = *(double *)(lVar9 + 0x250);
    dVar7 = *(double *)(lVar9 + 600);
    pdVar11 = *(double **)(lVar9 + 0x228);
    local_78 = dVar4;
    uStack_70 = dVar5;
    local_68 = dVar6;
    uStack_60 = dVar7;
    if (pdVar11 == (double *)0x0) {
      uVar12 = 0x40;
      pdVar11 = (double *)FUN_14001cc68(0x40,0x10);
      dVar10 = DAT_14c8463d8;
      *pdVar11 = DAT_14c8463d0;
      pdVar11[1] = dVar10;
      dVar10 = DAT_14c8463e8;
      pdVar11[2] = DAT_14c8463e0;
      pdVar11[3] = dVar10;
      dVar10 = DAT_14c846500;
      pdVar11[4] = DAT_14c8464f8;
      pdVar11[5] = dVar10;
      dVar10 = DAT_14c846508;
      pdVar11[6] = DAT_14c846508;
      *(double **)(lVar9 + 0x228) = pdVar11;
    }
    auVar2._8_4_ = (int)-(ulonglong)(dVar5 != pdVar11[1]);
    auVar2._0_8_ = -(ulonglong)(dVar4 != *pdVar11);
    auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar11[1]) >> 0x20);
    iVar8 = movmskpd(SUB84(dVar10,0),auVar2);
    auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar11[3]);
    auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar11[2]);
    auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar11[3]) >> 0x20);
    uVar13 = movmskpd(uVar12,auVar3);
    if ((uVar13 & 0x3fffffff) != 0 || iVar8 != 0) {
      *(undefined4 *)(pdVar11 + 2) = (undefined4)local_68;
      *(undefined4 *)((longlong)pdVar11 + 0x14) = local_68._4_4_;
      *(undefined4 *)(pdVar11 + 3) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)pdVar11 + 0x1c) = uStack_60._4_4_;
      *(undefined4 *)pdVar11 = (undefined4)local_78;
      *(undefined4 *)((longlong)pdVar11 + 4) = local_78._4_4_;
      *(undefined4 *)(pdVar11 + 1) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)pdVar11 + 0xc) = uStack_70._4_4_;
      FUN_1448052ee(&local_78,&local_58);
      pdVar11[6] = local_48;
      pdVar11[4] = local_58;
      pdVar11[5] = dStack_50;
    }
    local_48 = pdVar11[6];
    local_58 = pdVar11[4];
    dStack_50 = pdVar11[5];
    lVar9 = plVar1[0x39];
    if (lVar9 == 0) goto LAB_1479a879e;
    local_78 = *(double *)(lVar9 + 0x260);
    uStack_70 = *(double *)(lVar9 + 0x268);
    local_68 = *(double *)(lVar9 + 0x270);
  }
  local_98 = 0;
  (**(code **)(*plVar1 + 0x4d0))(plVar1,&local_78,&local_58,0);
LAB_1479a861c:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a8822 FUN_1479a8822 body=240 status=ok
// SIG undefined FUN_1479a8822(void)

void FUN_1479a8822(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    lVar3 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar3 = 0;
  }
  plVar1 = *(longlong **)(lVar3 + 0x3d0);
  if (plVar1 != (longlong *)0x0) {
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
    else {
      uVar4 = 0;
    }
    FUN_140056680(local_30,L"You feel much lighter");
    FUN_1417e897c(uVar4,local_30,0,0);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
    lVar3 = FUN_144a7cacc();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      uVar4 = FUN_14477b072(plVar1,DAT_14cacf630);
      (**(code **)(*plVar1 + 0x248))(plVar1,uVar4,0);
      cVar2 = (**(code **)(*plVar1 + 0x700))(plVar1);
      if (cVar2 == '\0') {
        (**(code **)(*plVar1 + 0x8b8))(plVar1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a8914 FUN_1479a8914 body=138 status=ok
// SIG undefined FUN_1479a8914(void)

void FUN_1479a8914(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    lVar3 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar3 = 0;
  }
  plVar1 = *(longlong **)(lVar3 + 0x3d0);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = FUN_144a7cacc();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      uVar4 = FUN_14477b072(plVar1,DAT_14cacf650);
      (**(code **)(*plVar1 + 0x248))(plVar1,uVar4,0);
      cVar2 = (**(code **)(*plVar1 + 0x700))(plVar1);
      if (cVar2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001479a8997. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x8b0))(plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1479a899e FUN_1479a899e body=548 status=ok
// SIG undefined FUN_1479a899e(void)

void FUN_1479a899e(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  lVar7 = DAT_14cacfc58;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    lVar5 = param_1[4];
  }
  else {
    lVar5 = 0;
  }
  plVar2 = *(longlong **)(lVar5 + 0x3d0);
  if (plVar2 != (longlong *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar6 = 0;
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar6 = (ulonglong)(bVar3 ^ 1);
    }
    iVar1 = *(int *)(lVar7 + uVar6 * 4);
    lVar7 = FUN_144a7cacc();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
        lVar7 + 0x30)) {
      lVar7 = FUN_144a7cacc();
      if ((*(int *)(plVar2[2] + 0x38) < *(int *)(lVar7 + 0x38)) ||
         (plVar9 = plVar2,
         *(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
         lVar7 + 0x30)) {
        plVar9 = (longlong *)0x0;
      }
      if (plVar9[0x86] != 0) {
        lVar7 = FUN_144a7cacc();
        if ((*(int *)(plVar2[2] + 0x38) < *(int *)(lVar7 + 0x38)) ||
           (plVar9 = plVar2,
           *(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
           lVar7 + 0x30)) {
          plVar9 = (longlong *)0x0;
        }
        if ((0 < iVar1) && ((*(byte *)(plVar9[0x86] + 0x5b5) & 0x10) != 0)) {
          if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
            lVar7 = param_1[4];
          }
          else {
            lVar7 = 0;
          }
          FUN_140056680(local_30,L"You feel solid");
          FUN_1417e897c(lVar7,local_30,0,0);
          if (local_30[0] != 0) {
            FUN_1400020a8();
          }
          (**(code **)(*param_1 + 0x2d0))(param_1);
          goto LAB_1479a8a96;
        }
      }
    }
    if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
      lVar7 = param_1[4];
    }
    else {
      lVar7 = 0;
    }
    FUN_140056680(local_30,L"You feel ethereal");
    FUN_1417e897c(lVar7,local_30,0,0);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
    lVar7 = FUN_144a7cacc();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
        lVar7 + 0x30)) {
      uVar8 = FUN_14477b072(plVar2,DAT_14cacf640);
      (**(code **)(*plVar2 + 0x248))(plVar2,uVar8,0);
      cVar4 = (**(code **)(*plVar2 + 0x700))(plVar2);
      if (cVar4 == '\0') {
        (**(code **)(*plVar2 + 0x8c0))(plVar2);
      }
    }
  }
LAB_1479a8a96:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a8bc4 FUN_1479a8bc4 body=251 status=ok
// SIG undefined FUN_1479a8bc4(void)

void FUN_1479a8bc4(longlong param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar1 = 0;
  }
  lVar1 = *(longlong *)(lVar1 + 0x3d0);
  if (lVar1 == 0) {
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    else {
      uVar3 = 0;
    }
    pwVar2 = L"No APawn* possessed";
  }
  else {
    if ((*(byte *)(lVar1 + 0x62) & 4) != 0) {
      uVar3 = 0;
      FUN_1403121a6(lVar1,0);
      if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
      }
      FUN_140056680(local_28,L"God mode on");
      FUN_1417e897c(uVar3,local_28,0,0);
      goto LAB_1479a8c8d;
    }
    FUN_1403121a6(lVar1,1);
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    else {
      uVar3 = 0;
    }
    pwVar2 = L"God Mode off";
  }
  FUN_140056680(local_28,pwVar2);
  FUN_1417e897c(uVar3,local_28,0,0);
LAB_1479a8c8d:
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a8cc0 FUN_1479a8cc0 body=60 status=ok
// SIG undefined FUN_1479a8cc0(void)

void FUN_1479a8cc0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar2 = 0;
  }
  plVar1 = (longlong *)FUN_14093f908(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001479a8cf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x678))(plVar1,param_2);
  return;
}



// FUNCTION 1479a8cfc FUN_1479a8cfc body=514 status=ok
// SIG undefined FUN_1479a8cfc(void)

void FUN_1479a8cfc(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_2d8 [32];
  longlong *local_2b8;
  undefined1 local_2b0 [16];
  double local_2a0;
  longlong local_298;
  undefined1 local_290 [304];
  undefined1 local_160 [4];
  undefined4 local_15c;
  undefined4 local_bc;
  undefined4 local_90;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    lVar5 = param_1[4];
  }
  else {
    lVar5 = 0;
  }
  memset(local_160,0,0x100);
  local_90 = 0xffffffff;
  local_15c = 0x3f800000;
  local_bc = 0xffffffff;
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x458))(param_1,lVar5,local_160);
  if (plVar4 != (longlong *)0x0) {
    lVar1 = plVar4[0x39];
    if (lVar1 == 0) {
      uVar8 = 0;
      uVar9 = 0;
      uVar10 = 0;
      uVar11 = 0;
      uVar12 = 0;
      uVar13 = 0;
      uVar14 = 0;
      uVar15 = 0x3ff00000;
    }
    else {
      uVar8 = *(undefined4 *)(lVar1 + 0x240);
      uVar9 = *(undefined4 *)(lVar1 + 0x244);
      uVar10 = *(undefined4 *)(lVar1 + 0x248);
      uVar11 = *(undefined4 *)(lVar1 + 0x24c);
      uVar12 = *(undefined4 *)(lVar1 + 0x250);
      uVar13 = *(undefined4 *)(lVar1 + 0x254);
      uVar14 = *(undefined4 *)(lVar1 + 600);
      uVar15 = *(undefined4 *)(lVar1 + 0x25c);
    }
    dVar2 = (double)CONCAT44(uVar11,uVar10);
    dVar6 = dVar2 + dVar2;
    dVar7 = (double)CONCAT44(uVar13,uVar12) + (double)CONCAT44(uVar13,uVar12);
    dVar3 = (double)CONCAT44(uVar15,uVar14) * dVar7 + (double)CONCAT44(uVar9,uVar8) * dVar6;
    local_298 = FUN_1411311bc();
    if ((local_298 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_298);
    }
    local_2a0 = -((double)CONCAT44(uVar9,uVar8) * dVar7 - dVar6 * (double)CONCAT44(uVar15,uVar14));
    local_2b0._8_4_ = SUB84(dVar3,0);
    local_2b0._0_8_ = -(1.0 - ((double)CONCAT44(uVar13,uVar12) * dVar7 + dVar2 * dVar6));
    local_2b0._12_4_ = (uint)((ulonglong)dVar3 >> 0x20) ^ 0x80000000;
    local_2b8 = &local_298;
    FUN_1479a8f00(local_290,param_2,local_160);
    local_2b8 = *(longlong **)(lVar5 + 0x3d0);
    (**(code **)(*plVar4 + 0x540))(plVar4,param_2,local_290,lVar5);
  }
  if ((local_60 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a8f00 FUN_1479a8f00 body=321 status=ok
// SIG undefined FUN_1479a8f00(void)

undefined8 *
FUN_1479a8f00(undefined8 *param_1,undefined4 param_2,void *param_3,undefined8 *param_4,
             longlong *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  
  lVar1 = *param_5;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  bVar5 = DAT_14c950c29;
  *param_1 = &PTR_FUN_14a819ae0;
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar5) == 1) {
    FUN_1456cec3c(lVar1);
  }
  *param_1 = &PTR_FUN_14a819a60;
  *(undefined4 *)(param_1 + 2) = param_2;
  uVar2 = param_4[1];
  param_1[3] = *param_4;
  param_1[4] = uVar2;
  param_1[5] = param_4[2];
  memcpy(param_1 + 6,param_3,0xb8);
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x1d] = *(undefined8 *)((longlong)param_3 + 0xb8);
  uVar2 = *(undefined8 *)((longlong)param_3 + 200);
  param_1[0x1e] = *(undefined8 *)((longlong)param_3 + 0xc0);
  param_1[0x1f] = uVar2;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((longlong)param_3 + 0xd0);
  *(undefined1 *)((longlong)param_1 + 0x104) = *(undefined1 *)((longlong)param_3 + 0xd4);
  param_1[0x25] = *(undefined8 *)((longlong)param_3 + 0xf8);
  uVar2 = *(undefined8 *)((longlong)param_3 + 0xd8);
  uVar3 = *(undefined8 *)((longlong)param_3 + 0xe0);
  uVar4 = *(undefined8 *)((longlong)param_3 + 0xf0);
  param_1[0x23] = *(undefined8 *)((longlong)param_3 + 0xe8);
  param_1[0x24] = uVar4;
  param_1[0x21] = uVar2;
  param_1[0x22] = uVar3;
  return param_1;
}



// FUNCTION 1479a9042 FUN_1479a9042 body=275 status=ok
// SIG undefined FUN_1479a9042(void)

void FUN_1479a9042(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_148 [40];
  undefined1 local_120 [4];
  undefined4 local_11c;
  undefined4 local_7c;
  undefined4 local_50;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    lVar2 = param_1[4];
  }
  else {
    lVar2 = 0;
  }
  memset(local_120,0,0x100);
  local_50 = 0xffffffff;
  local_11c = 0x3f800000;
  local_7c = 0xffffffff;
  lVar2 = (**(code **)(*param_1 + 0x458))(param_1,lVar2,local_120);
  if (lVar2 != 0) {
    lVar3 = FUN_144a7cbb2();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         == lVar3 + 0x30)) && (*(longlong *)(lVar2 + 0x3c0) != 0)) {
      lVar4 = FUN_144a75eb4();
      lVar3 = *(longlong *)(lVar2 + 0x3c0);
      if (((lVar3 == 0) || (lVar4 == 0)) ||
         ((lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 == 0 ||
          ((*(int *)(lVar1 + 0x38) < *(int *)(lVar4 + 0x38) ||
           (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
            lVar4 + 0x30)))))) {
        FUN_140aeefbc(lVar3,0,1);
      }
    }
    FUN_140aeefbc(lVar2,0,1);
  }
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a9156 FUN_1479a9156 body=338 status=ok
// SIG undefined FUN_1479a9156(void)

void FUN_1479a9156(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined1 local_78 [8];
  undefined1 local_70 [28];
  char local_54;
  longlong local_48;
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = *param_2;
  if ((local_80 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  uVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  FUN_14146ff3c(local_78,uVar3,&local_80,5);
  if (local_54 == '\0') {
    do {
      lVar2 = local_48;
      if ((*(uint *)(local_48 + 8) >> 0x1e & 1) == 0) {
        if (local_48 != 0) {
          lVar4 = FUN_144a7cbb2();
          if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
             (*(longlong *)(lVar2 + 0x3c0) != 0)) {
            lVar5 = FUN_144a75eb4();
            lVar4 = *(longlong *)(lVar2 + 0x3c0);
            if (((lVar4 == 0) || (lVar5 == 0)) ||
               ((lVar1 = *(longlong *)(lVar4 + 0x10), lVar1 == 0 ||
                ((*(int *)(lVar1 + 0x38) < *(int *)(lVar5 + 0x38) ||
                 (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
                  != lVar5 + 0x30)))))) {
              FUN_140aeefbc(lVar4,0,1);
            }
          }
        }
        FUN_140aeefbc(lVar2,0,1);
      }
      FUN_14146ffc0(local_78);
    } while (local_54 == '\0');
  }
  if (local_20 == '\x01') {
    FUN_14024445c(local_70);
  }
  if ((local_18 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479a92aa FUN_1479a92aa body=451 status=ok
// SIG undefined FUN_1479a92aa(void)

void FUN_1479a92aa(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  undefined1 local_180 [4];
  undefined4 local_17c;
  undefined4 local_dc;
  undefined4 local_b0;
  undefined1 local_80 [8];
  undefined1 local_78 [28];
  char local_5c;
  longlong local_50;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    lVar3 = param_1[4];
  }
  else {
    lVar3 = 0;
  }
  memset(local_180,0,0x100);
  local_b0 = 0xffffffff;
  local_17c = 0x3f800000;
  local_dc = 0xffffffff;
  lVar3 = (**(code **)(*param_1 + 0x458))(param_1,lVar3,local_180);
  if (lVar3 != 0) {
    lVar4 = FUN_144a7cbb2();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      local_188 = FUN_144a7cbb2();
      if ((local_188 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(local_188);
      }
      uVar5 = (**(code **)(*param_1 + 0x180))(param_1);
      FUN_140946424(local_80,uVar5,&local_188,5);
      if (local_5c == '\0') {
        do {
          lVar4 = local_50;
          if ((local_50 != lVar3) && ((*(uint *)(local_50 + 8) & 0x40000000) == 0)) {
            if (*(longlong *)(local_50 + 0x3c0) != 0) {
              lVar6 = FUN_144a75eb4();
              lVar1 = *(longlong *)(lVar4 + 0x3c0);
              if (lVar1 != 0) {
                if ((((lVar6 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
                    (*(int *)(lVar6 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
                   (*(longlong *)
                     (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
                    lVar6 + 0x30)) goto LAB_1479a942b;
                FUN_140aeefbc(lVar1,0,1);
              }
            }
            FUN_140aeefbc(lVar4,0,1);
          }
LAB_1479a942b:
          FUN_1409464a8(local_80);
        } while (local_5c == '\0');
      }
      if (local_28 == '\x01') {
        FUN_14024445c(local_78);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a946e FUN_1479a946e body=388 status=ok
// SIG undefined FUN_1479a946e(void)

void FUN_1479a946e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined1 local_80 [8];
  undefined1 local_78 [28];
  char local_5c;
  longlong local_50;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *param_2;
  if ((((lVar1 == 0) || (lVar3 = FUN_144a7cbb2(), lVar3 == 0)) ||
      (*(int *)(lVar1 + 0x38) < *(int *)(lVar3 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
       lVar3 + 0x30 || (local_88 = *param_2, local_88 == 0)))) {
    local_88 = FUN_144a7cbb2();
    if ((local_88 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_88);
    }
    *param_2 = local_88;
  }
  if ((local_88 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_88);
  }
  uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  FUN_140946424(local_80,uVar4,&local_88,5);
  if (local_5c == '\0') {
    do {
      lVar1 = local_50;
      if (*(longlong *)(local_50 + 0x3c0) == 0) {
LAB_1479a9573:
        FUN_140aeefbc(lVar1,0,1);
      }
      else {
        lVar5 = FUN_144a75eb4();
        lVar3 = *(longlong *)(lVar1 + 0x3c0);
        if (lVar3 == 0) goto LAB_1479a9573;
        if ((((lVar5 == 0) || (lVar2 = *(longlong *)(lVar3 + 0x10), lVar2 == 0)) ||
            (*(int *)(lVar2 + 0x38) < *(int *)(lVar5 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
            lVar5 + 0x30)) {
          FUN_140aeefbc(lVar3,0,1);
          goto LAB_1479a9573;
        }
      }
      FUN_1409464a8(local_80);
    } while (local_5c == '\0');
  }
  if (local_28 == '\x01') {
    FUN_14024445c(local_78);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479a95f4 FUN_1479a95f4 body=148 status=ok
// SIG undefined FUN_1479a95f4(void)

void FUN_1479a95f4(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if (((*(byte *)(lVar2 + 0x155) & 4) == 0) &&
     (lVar2 = (**(code **)(*param_1 + 0x180))(param_1), (*(byte *)(lVar2 + 0x155) & 8) == 0)) {
    lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
    bVar1 = *(byte *)(lVar2 + 0x155);
    lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
    *(byte *)(lVar2 + 0x155) = (*(byte *)(lVar2 + 0x155) & 0xf7 | bVar1 & 8) ^ 8;
    return;
  }
  lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
  *(byte *)(lVar2 + 0x155) = *(byte *)(lVar2 + 0x155) & 0xfb;
  lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
  *(byte *)(lVar2 + 0x155) = *(byte *)(lVar2 + 0x155) & 0xf7;
  return;
}



// FUNCTION 1479a9688 FUN_1479a9688 body=433 status=ok
// SIG undefined FUN_1479a9688(void)

void FUN_1479a9688(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined1 auStack_98 [40];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_48;
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    plVar3 = *(longlong **)(param_1 + 0x20);
  }
  else {
    plVar3 = (longlong *)0x0;
  }
  (**(code **)(*plVar3 + 0xec8))();
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar1 = 0;
  }
  if (*(longlong *)(lVar1 + 0x3d0) == 0) {
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      plVar3 = *(longlong **)(param_1 + 0x20);
    }
    else {
      plVar3 = (longlong *)0x0;
    }
    local_60 = 0;
    local_5c = 1;
    local_58 = 0x40000000;
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
    else {
      uVar4 = 0;
    }
    lVar1 = *plVar3;
    puVar5 = &local_60;
  }
  else {
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      plVar3 = *(longlong **)(param_1 + 0x20);
    }
    else {
      plVar3 = (longlong *)0x0;
    }
    local_50 = 0;
    local_4c = 1;
    local_48 = 0x40000000;
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      lVar1 = *(longlong *)(param_1 + 0x20);
    }
    else {
      lVar1 = 0;
    }
    uVar4 = *(undefined8 *)(lVar1 + 0x3d0);
    lVar1 = *plVar3;
    puVar5 = &local_50;
  }
  (**(code **)(lVar1 + 0xe38))(plVar3,uVar4,puVar5);
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar4 = 0;
  }
  FUN_1446f470e(&local_68,L"Event",1);
  local_40 = L"OwnCamera";
  local_38 = 9;
  FUN_1446e940c(local_6c,&local_40);
  local_40 = L"CheatManager";
  local_38 = 0xc;
  FUN_1446e940c(local_70,&local_40);
  FUN_140208bae(&local_40,local_70,local_6c,L"Viewing from own camera");
  uVar2 = FUN_1447a1f4a(&local_40);
  FUN_1417e897c(uVar4,uVar2,local_68,0);
  if (local_40 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_40 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479a983a FUN_1479a983a body=949 status=ok
// SIG undefined FUN_1479a983a(void)

void FUN_1479a983a(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined2 *puVar13;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined1 local_104;
  undefined4 local_100;
  byte local_fc;
  undefined1 local_f8 [4];
  undefined1 local_f4 [4];
  longlong *local_f0 [2];
  undefined8 local_e0;
  longlong *local_d8;
  longlong local_d0 [2];
  longlong *local_c0 [2];
  longlong *local_b0 [2];
  undefined8 local_a0;
  undefined8 local_98;
  longlong *local_90;
  wchar_t **local_88;
  ulonglong *local_80;
  undefined2 *local_78;
  int local_70;
  wchar_t *local_68;
  uint local_60;
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar5 = (**(code **)(*param_1 + 0x180))();
  FUN_1462469b6(uVar5,&local_68);
  if ((-1 < (int)local_60) && ((int)local_60 < *(int *)(local_68 + 4))) {
    do {
      lVar6 = FUN_14479d2ce((ulonglong)local_60 * 8 + *(longlong *)local_68);
      if (*(longlong *)(lVar6 + 0x398) != 0) {
        puVar13 = &DAT_149dfb77a;
        if (*(int *)(param_2 + 1) != 0) {
          puVar13 = (undefined2 *)*param_2;
        }
        FUN_141220240();
        puVar7 = local_78;
        if (local_70 == 0) {
          puVar7 = &DAT_149dfb77a;
        }
        lVar9 = 0;
        while( true ) {
          uVar2 = *(ushort *)((longlong)puVar7 + lVar9);
          uVar10 = (uint)uVar2;
          uVar3 = *(ushort *)((longlong)puVar13 + lVar9);
          uVar12 = (uint)uVar3;
          if (uVar2 != uVar3) {
            if ((uVar3 | uVar2) < 0x80) {
              uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar3];
              if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_1479a9911;
            }
            iVar11 = uVar10 - uVar12;
            goto LAB_1479a993d;
          }
          if (uVar2 == 0) break;
LAB_1479a9911:
          lVar9 = lVar9 + 2;
        }
        iVar11 = 0;
LAB_1479a993d:
        if (local_78 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (iVar11 == 0) goto LAB_1479a9972;
      }
      uVar10 = local_60 + 1;
      bVar4 = (int)local_60 < -1;
      local_60 = uVar10;
      if ((bVar4) || (*(int *)(local_68 + 4) <= (int)uVar10)) goto LAB_1479a9972;
    } while( true );
  }
LAB_1479a9bc2:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1479a9972:
  if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x3d0) != 0)) {
    if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
      lVar9 = param_1[4];
    }
    else {
      lVar9 = 0;
    }
    FUN_1446f470e(&local_a0,L"Event",1);
    FUN_141220240(*(undefined8 *)(lVar6 + 0x398),local_d0);
    FUN_140233b1a(local_c0,local_d0);
    local_68 = L"ViewPlayer";
    local_60 = 10;
    FUN_1446e940c(local_f4,&local_68);
    local_68 = L"CheatManager";
    local_60 = 0xc;
    FUN_1446e940c(local_f8,&local_68);
    FUN_140208bae(local_f0,local_f8,local_f4,L"Viewing from {0}");
    FUN_14023409e(&local_e0,local_f0,1);
    local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
    FUN_14023423e(local_58,local_c0);
    local_80 = &local_48;
    local_88 = &local_68;
    FUN_14010d304(&local_78);
    local_98 = local_e0;
    local_90 = local_d8;
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_b0,&local_98,&local_78);
    FUN_14007f2db(local_78,local_70);
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_58[0] != (longlong *)0x0) {
      (**(code **)(*local_58[0] + 0x10))();
    }
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_d8 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar1 = (int *)((longlong)local_d8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_d8 + 0x10))(local_d8);
        }
      }
    }
    if (local_c0[0] != (longlong *)0x0) {
      (**(code **)(*local_c0[0] + 0x10))();
    }
    uVar5 = FUN_1447a1f4a(local_b0);
    FUN_1417e897c(lVar9,uVar5,local_a0,0);
    if (local_b0[0] != (longlong *)0x0) {
      (**(code **)(*local_b0[0] + 0x10))();
    }
    if (local_f0[0] != (longlong *)0x0) {
      (**(code **)(*local_f0[0] + 0x10))();
    }
    if (local_d0[0] != 0) {
      FUN_1400020a8();
    }
    if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
      plVar8 = (longlong *)param_1[4];
    }
    else {
      plVar8 = (longlong *)0x0;
    }
    local_108 = 0;
    local_104 = 1;
    local_100 = 0x40000000;
    local_fc = local_fc & 0xfe;
    (**(code **)(*plVar8 + 0xe38))(plVar8,*(undefined8 *)(lVar6 + 0x3d0));
  }
  goto LAB_1479a9bc2;
}



// FUNCTION 1479a9bf0 FUN_1479a9bf0 body=352 status=ok
// SIG undefined FUN_1479a9bf0(void)

void FUN_1479a9bf0(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined1 local_80 [8];
  undefined1 local_78 [28];
  char local_5c;
  longlong local_50;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = (**(code **)(*param_1 + 0x180))();
  FUN_1405f0e9c(local_80,uVar1,5);
  if (local_5c == '\0') {
    do {
      if (((local_50 != 0) && ((*(uint *)(local_50 + 8) >> 0x1e & 1) == 0)) &&
         (*(longlong *)(local_50 + 0x18) == param_2)) {
        if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
          plVar2 = (longlong *)param_1[4];
        }
        else {
          plVar2 = (longlong *)0x0;
        }
        local_90 = 0;
        local_8c = 1;
        local_88 = 0x40000000;
        (**(code **)(*plVar2 + 0xe38))();
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cacfc68) && (FUN_144b3d300(), DAT_14cacfc68 == -1)) {
          FUN_1446f470e(&DAT_14cacfc60,L"ThirdPerson",1);
          _Init_thread_footer();
        }
        if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
          plVar2 = (longlong *)param_1[4];
        }
        else {
          plVar2 = (longlong *)0x0;
        }
        (**(code **)(*plVar2 + 0xec0))(plVar2,DAT_14cacfc60);
        break;
      }
      FUN_14059e512();
    } while (local_5c != '\x01');
  }
  if (local_28 == '\x01') {
    FUN_14024445c(local_78);
  }
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479a9d52 FUN_1479a9d52 body=923 status=ok
// SIG undefined FUN_1479a9d52(void)

void FUN_1479a9d52(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_178 [40];
  undefined4 local_150;
  undefined1 local_14c;
  undefined4 local_148;
  byte local_144;
  undefined1 local_140 [4];
  undefined1 local_13c [4];
  longlong *local_138 [2];
  undefined8 local_128;
  longlong *local_120;
  longlong local_118 [2];
  longlong *local_108 [2];
  longlong *local_f8 [2];
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  wchar_t **local_c8;
  undefined1 *local_c0;
  longlong local_b8;
  undefined4 local_b0;
  wchar_t *local_a8;
  undefined4 local_a0 [2];
  longlong *local_98 [2];
  undefined1 local_88 [4];
  char local_84;
  longlong *local_78;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_e0 = *param_2;
  if ((local_e0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  uVar2 = (**(code **)(*param_1 + 0x180))(param_1);
  FUN_14146ff3c(&local_a8,uVar2,&local_e0,5);
  if (local_84 == '\0') {
    bVar7 = false;
    plVar4 = (longlong *)0x0;
    do {
      plVar5 = local_78;
      if ((*(uint *)(local_78 + 1) >> 0x1e & 1) == 0) {
        plVar6 = plVar4;
        if (plVar4 == (longlong *)0x0) {
          plVar6 = local_78;
        }
        plVar4 = local_78;
        if (bVar7) break;
        if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
          lVar3 = param_1[4];
        }
        else {
          lVar3 = 0;
        }
        plVar4 = (longlong *)FUN_1447e6586(*(undefined8 *)(lVar3 + 0x448));
        bVar7 = plVar5 == plVar4;
        plVar4 = plVar6;
      }
      FUN_14146ffc0(&local_a8);
    } while (local_84 != '\x01');
  }
  else {
    plVar4 = (longlong *)0x0;
  }
  if (local_50 == '\x01') {
    FUN_14024445c(local_a0);
  }
  if (plVar4 == (longlong *)0x0) {
    (**(code **)(*param_1 + 0x328))(param_1);
  }
  else {
    if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
      lVar3 = param_1[4];
    }
    else {
      lVar3 = 0;
    }
    FUN_1446f470e(&local_e8,L"Event",1);
    (**(code **)(*plVar4 + 0x568))(plVar4,local_118);
    FUN_140233b1a(local_108,local_118);
    local_a8 = L"ViewPlayer";
    local_a0[0] = 10;
    FUN_1446e940c(local_13c,&local_a8);
    local_a8 = L"CheatManager";
    local_a0[0] = 0xc;
    FUN_1446e940c(local_140,&local_a8);
    FUN_140208bae(local_138,local_140,local_13c,L"Viewing from {0}");
    FUN_14023409e(&local_128,local_138,1);
    local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
    FUN_14023423e(local_98,local_108);
    local_c0 = local_88;
    local_c8 = &local_a8;
    FUN_14010d304(&local_b8);
    local_d8 = local_128;
    local_d0 = local_120;
    if (local_120 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_120 + 1) = (int)local_120[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_f8,&local_d8,&local_b8);
    FUN_14007f2db(local_b8,local_b0);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    if (local_98[0] != (longlong *)0x0) {
      (**(code **)(*local_98[0] + 0x10))();
    }
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_120 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_120)(local_120);
        LOCK();
        piVar1 = (int *)((longlong)local_120 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_120 + 0x10))(local_120);
        }
      }
    }
    if (local_108[0] != (longlong *)0x0) {
      (**(code **)(*local_108[0] + 0x10))();
    }
    uVar2 = FUN_1447a1f4a(local_f8);
    FUN_1417e897c(lVar3,uVar2,local_e8,0);
    if (local_f8[0] != (longlong *)0x0) {
      (**(code **)(*local_f8[0] + 0x10))();
    }
    if (local_138[0] != (longlong *)0x0) {
      (**(code **)(*local_138[0] + 0x10))();
    }
    if (local_118[0] != 0) {
      FUN_1400020a8();
    }
    if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
      plVar5 = (longlong *)param_1[4];
    }
    else {
      plVar5 = (longlong *)0x0;
    }
    local_150 = 0;
    local_14c = 1;
    local_148 = 0x40000000;
    local_144 = local_144 & 0xfe;
    (**(code **)(*plVar5 + 0xe38))(plVar5,plVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479aa0ee FUN_1479aa0ee body=629 status=ok
// SIG undefined FUN_1479aa0ee(void)

void FUN_1479aa0ee(longlong *param_1,ulonglong param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined1 local_b0;
  undefined1 local_a1;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_a1 = param_4;
  local_a0 = (**(code **)(*param_1 + 0x180))();
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (DAT_14c892ed8 == param_2) {
    FUN_144a7d35a(local_a0,&local_70);
    if (-1 < (int)local_68) {
      do {
        if ((int)local_70[1] <= (int)local_68) break;
        lVar8 = FUN_14479d2ce((ulonglong)local_68 * 8 + *local_70);
        if (lVar8 != 0) {
          local_88 = 0;
          uStack_80 = 0;
          iVar1 = *(int *)(local_a0 + 0x90);
          if ((longlong)iVar1 != 0) {
            lVar2 = *(longlong *)(local_a0 + 0x88);
            lVar10 = 0;
            do {
              uVar6 = uStack_80;
              plVar3 = *(longlong **)(lVar2 + lVar10);
              lVar9 = (longlong)(int)uStack_80;
              uVar7 = (int)uStack_80 + 1;
              uStack_80 = CONCAT44(uStack_80._4_4_,uVar7);
              if (uStack_80._4_4_ < uVar7) {
                FUN_1463b3652(&local_88,uVar6 & 0xffffffff);
              }
              lVar5 = local_88;
              lVar9 = lVar9 * 0x10;
              *(undefined8 *)(local_88 + lVar9) = 0;
              ((undefined8 *)(local_88 + lVar9))[1] = 0;
              (**(code **)(*plVar3 + 0x2d0))(plVar3,&local_98);
              FUN_14098f2e8(lVar8,&local_90,local_98,0);
              *(undefined8 *)(lVar5 + lVar9) = local_90;
              *(char *)(lVar5 + 0xc + lVar9) = (char)param_3;
              *(undefined1 *)(lVar5 + 0xd + lVar9) = local_a1;
              *(undefined2 *)(lVar5 + 0xe + lVar9) = 0;
              *(undefined4 *)(lVar5 + 8 + lVar9) = 0xffffffff;
              lVar10 = lVar10 + 8;
            } while ((longlong)iVar1 * 8 != lVar10);
          }
          FUN_14608609a(lVar8,&local_88);
          if (local_88 != 0) {
            FUN_1400020a8();
          }
        }
        uVar7 = local_68 + 1;
        bVar4 = -2 < (int)local_68;
        local_68 = uVar7;
      } while (bVar4);
    }
  }
  else {
    FUN_144a7d35a(local_a0,&local_70);
    if (-1 < (int)local_68) {
      do {
        if ((int)local_70[1] <= (int)local_68) break;
        lVar8 = FUN_14479d2ce((ulonglong)local_68 * 8 + *local_70);
        if (lVar8 != 0) {
          FUN_14098f2e8(lVar8,&local_78,param_2,0);
          local_b0 = 0;
          local_c8 = 0;
          local_b8 = 0;
          local_c0 = 0xffffffff;
          FUN_147c970c0(lVar8,local_78,param_3);
        }
        uVar7 = local_68 + 1;
        bVar4 = -2 < (int)local_68;
        local_68 = uVar7;
      } while (bVar4);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479aa3a0 FUN_1479aa3a0 body=39 status=ok
// SIG undefined FUN_1479aa3a0(void)

void FUN_1479aa3a0(longlong *param_1)

{
  byte bVar1;
  
  bVar1 = (**(code **)(*param_1 + 0x368))();
                    /* WARNING: Could not recover jumptable at 0x0001479aa3bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x448 + (ulonglong)bVar1 * 8))(param_1);
  return;
}



// FUNCTION 1479aa3c8 FUN_1479aa3c8 body=57 status=ok
// SIG undefined FUN_1479aa3c8(void)

undefined8 FUN_1479aa3c8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar2 = FUN_14129154a();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) {
      return CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),
                      *(longlong *)
                       (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
                      lVar2 + 0x30);
    }
  }
  return 0;
}



// FUNCTION 1479aa402 FUN_1479aa402 body=502 status=ok
// SIG undefined FUN_1479aa402(void)

void FUN_1479aa402(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong local_88;
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (((((*(uint *)(param_1 + 1) & 0x10) == 0) &&
       (plVar1 = (longlong *)param_1[4], plVar1 != (longlong *)0x0)) && (plVar1[0x86] != 0)) &&
     (((*(byte *)(plVar1 + 0x84) & 2) != 0 &&
      (cVar3 = (**(code **)(*plVar1 + 0x6c8))(plVar1), cVar3 != '\0')))) {
    plVar6 = (longlong *)param_1[5];
    if (plVar6 == (longlong *)0x0) {
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_98 = 0x800000100;
      lVar5 = 0;
      local_88 = 0;
      local_78 = (longlong *)0x0;
      lStack_b0 = plVar1[0x36];
      uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
      lVar2 = param_1[6];
      if (lVar2 != 0) {
        lVar5 = FUN_14129154a();
        if (((lVar5 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar5 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
            lVar5 + 0x30)) {
          lVar5 = 0;
        }
        else {
          lVar5 = param_1[6];
        }
      }
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      uStack_10c = 0x3ff00000;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      uStack_e4 = 0x3ff00000;
      uStack_e0 = 0;
      uStack_dc = 0x3ff00000;
      local_d8 = 0x3ff0000000000000;
      uStack_d0 = 0;
      plVar6 = (longlong *)FUN_141037e38(uVar4,lVar5,&local_128,&local_c8);
      if ((plVar6 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(plVar6);
      }
      param_1[5] = (longlong)plVar6;
      if (local_88 != 0) {
        plVar6 = local_78;
        if (local_78 == (longlong *)0x0) {
          plVar6 = local_68;
        }
        (**(code **)(*plVar6 + 0x10))();
        plVar6 = (longlong *)param_1[5];
      }
      if (plVar6 == (longlong *)0x0) goto LAB_1479aa48c;
    }
    (**(code **)(*plVar6 + 0xf38))(plVar6,plVar1);
    (**(code **)(*(longlong *)plVar1[0x86] + 0x2a0))((longlong *)plVar1[0x86],param_1[5]);
  }
LAB_1479aa48c:
  if ((local_40 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479aa5fa FUN_1479aa5fa body=113 status=ok
// SIG undefined FUN_1479aa5fa(void)

void FUN_1479aa5fa(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_14129154a();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) && ((longlong *)plVar1[0x150] != (longlong *)0x0)) && (plVar1[0x14f] != 0))
    {
      (**(code **)(*(longlong *)plVar1[0x150] + 0x2a0))();
                    /* WARNING: Could not recover jumptable at 0x0001479aa668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0xf40))(plVar1,plVar1[0x14f]);
      return;
    }
  }
  return;
}



// FUNCTION 1479aa674 FUN_1479aa674 body=150 status=ok
// SIG undefined FUN_1479aa674(void)

void FUN_1479aa674(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = uVar1 ^ 1;
  if ((uVar1 & 1) != 0) {
    iVar3 = *(int *)(param_1 + 0x58);
    iVar2 = ~*(uint *)(param_1 + 0x70) + iVar3;
    if (iVar2 != 0) {
      lVar4 = (longlong)(int)*(uint *)(param_1 + 0x70) * 0xa0;
      memmove((void *)(*(longlong *)(param_1 + 0x50) + lVar4),
              (void *)(lVar4 + *(longlong *)(param_1 + 0x50) + 0xa0),(longlong)iVar2 * 0xa0);
      iVar3 = *(int *)(param_1 + 0x58);
    }
    *(int *)(param_1 + 0x58) = iVar3 + -1;
    FUN_1479afb42(param_1 + 0x50);
    return;
  }
  iVar3 = *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x70) = iVar3;
  *(int *)(param_1 + 0x58) = iVar3 + 1;
  if (*(int *)(param_1 + 0x5c) != iVar3) {
    return;
  }
  FUN_1479afaae(param_1 + 0x50);
  return;
}



// FUNCTION 1479aa786 FUN_1479aa786 body=154 status=ok
// SIG undefined FUN_1479aa786(void)

void FUN_1479aa786(longlong param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_1479afbf0(param_1 + 0x50);
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_1479afbf0(param_1 + 0x60);
  }
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    iVar1 = *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = iVar1 + 1;
    if (*(int *)(param_1 + 0x5c) == iVar1) {
      FUN_1479afaae(param_1 + 0x50);
    }
  }
  if (DAT_14cacfc28 == '\x01') {
    *(undefined4 *)(param_1 + 0x74) = 0;
    iVar1 = *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x68) = iVar1 + 10;
    if ((uint)(*(int *)(param_1 + 0x6c) - iVar1) < 10) {
      FUN_1479afaae(param_1 + 0x60);
      return;
    }
  }
  return;
}



// FUNCTION 1479aa822 FUN_1479aa822 body=54 status=ok
// SIG undefined FUN_1479aa822(void)

void FUN_1479aa822(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_140489acc();
  uVar2 = (**(code **)(*param_1 + 0x180))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001479aa855. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x3c8))(plVar1,uVar2,*(code **)(*plVar1 + 0x3c8));
  return;
}



// FUNCTION 1479aa858 FUN_1479aa858 body=54 status=ok
// SIG undefined FUN_1479aa858(void)

void FUN_1479aa858(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_140489acc();
  uVar2 = (**(code **)(*param_1 + 0x180))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001479aa88b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x3d0))(plVar1,uVar2,*(code **)(*plVar1 + 0x3d0));
  return;
}



// FUNCTION 1479aa88e FUN_1479aa88e body=54 status=ok
// SIG undefined FUN_1479aa88e(void)

void FUN_1479aa88e(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_140489acc();
  uVar2 = (**(code **)(*param_1 + 0x180))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001479aa8c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x3e0))(plVar1,uVar2,*(code **)(*plVar1 + 0x3e0));
  return;
}



// FUNCTION 1479aa8c4 FUN_1479aa8c4 body=514 status=ok
// SIG undefined FUN_1479aa8c4(void)

void FUN_1479aa8c4(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  double dVar1;
  wchar_t *pwVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_d8 [40];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_2 + 1) == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)*param_2;
  }
  dVar3 = _wtof(pwVar2);
  pwVar2 = wcsstr(pwVar2,L",");
  dVar4 = 0.0;
  if (pwVar2 == (wchar_t *)0x0) {
    dVar1 = 0.0;
  }
  else {
    dVar4 = _wtof(pwVar2 + 1);
    dVar1 = (double)(float)dVar4;
    pwVar2 = wcsstr(pwVar2 + 1,L",");
    dVar4 = 0.0;
    if (pwVar2 != (wchar_t *)0x0) {
      dVar4 = _wtof(pwVar2 + 1);
      dVar4 = (double)(float)dVar4;
    }
  }
  if (*(int *)(param_3 + 1) == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)*param_3;
  }
  dVar5 = _wtof(pwVar2);
  pwVar2 = wcsstr(pwVar2,L",");
  local_88 = 0.0;
  if (pwVar2 == (wchar_t *)0x0) {
    dVar6 = 0.0;
  }
  else {
    dVar6 = _wtof(pwVar2 + 1);
    dVar6 = (double)(float)dVar6;
    pwVar2 = wcsstr(pwVar2 + 1,L",");
    local_88 = 0.0;
    if (pwVar2 != (wchar_t *)0x0) {
      dVar7 = _wtof(pwVar2 + 1);
      local_88 = (double)(float)dVar7;
    }
  }
  local_98 = (double)(float)dVar5;
  local_b0 = (double)(float)dVar3;
  local_a8 = dVar1;
  local_a0 = dVar4;
  local_90 = dVar6;
  (**(code **)(*param_1 + 0x420))(param_1);
  if ((local_80 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479aaac8 FUN_1479aaac8 body=887 status=ok
// SIG undefined FUN_1479aaac8(void)

void FUN_1479aaac8(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  longlong local_f8 [2];
  undefined2 *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong local_98 [2];
  undefined2 *local_88;
  int local_80;
  longlong local_78 [2];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    plVar3 = (longlong *)param_1[4];
  }
  else {
    plVar3 = (longlong *)0x0;
  }
  FUN_1468176ae(&local_48);
  plVar2 = (longlong *)FUN_14054d1d4();
  puVar4 = local_48;
  if (local_40 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  (**(code **)(*plVar2 + 0x58))(plVar2,puVar4,0);
  FUN_1400b22c2(&local_58,&DAT_14a8178a0);
  puVar4 = local_58;
  if (*(int *)(param_2 + 1) < 2) {
    local_68 = (void *)0x0;
    local_60 = local_50;
    if ((longlong)local_50 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1446dd670(&local_68,local_50,0);
      memcpy(local_68,puVar4,(longlong)local_50 * 2);
    }
  }
  else {
    if (local_50 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_68,L".%s%s",*param_2,puVar4);
  }
  FUN_14681fa06(local_78,&local_68,0);
  FUN_140474144(&local_88,&local_48,local_78);
  puVar4 = local_88;
  if (local_80 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_b8,L"BUGSCREENSHOTWITHHUDINFO %s",puVar4);
  (**(code **)(*plVar3 + 0xd40))(plVar3,local_98,&local_b8,1);
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  (**(code **)(*plVar3 + 0x718))(plVar3,&local_b8,&local_d0);
  if (plVar3[0x7a] != 0) {
    lVar1 = *(longlong *)(plVar3[0x7a] + 0x1c8);
    if (lVar1 == 0) {
      plVar3 = &DAT_14c8464e0;
      uVar5 = (undefined4)DAT_14c8464f0;
      uVar6 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar5 = (undefined4)*(undefined8 *)(lVar1 + 0x270);
      uVar6 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x270) >> 0x20);
      plVar3 = (longlong *)(lVar1 + 0x260);
    }
    local_b8 = *plVar3;
    uStack_b0 = plVar3[1];
    local_a8 = CONCAT44(uVar6,uVar5);
  }
  local_e8 = (undefined2 *)0x0;
  uStack_e0 = 0;
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_118 = local_d0;
  uStack_110 = uStack_c8;
  local_108 = local_c0;
  local_138 = (undefined4)local_b8;
  uStack_134 = local_b8._4_4_;
  uStack_130 = (undefined4)uStack_b0;
  uStack_12c = uStack_b0._4_4_;
  local_128 = local_a8;
  local_148 = local_f8;
  (**(code **)(*param_1 + 0x3f8))(param_1,&local_138,&local_118,local_f8 + 2);
  puVar4 = local_e8;
  if ((int)uStack_e0 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_142855b70(puVar4);
  local_148 = local_f8;
  (**(code **)(*param_1 + 0x428))(param_1,param_2,&local_88,local_f8 + 2);
  if (local_f8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479aae40 FUN_1479aae40 body=36 status=ok
// SIG undefined FUN_1479aae40(void)

void FUN_1479aae40(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144a82cde();
  FUN_1400e4168(uVar1,0);
  uVar1 = FUN_144a82cde();
  FUN_14626bd28(uVar1);
  return;
}



// FUNCTION 1479aae64 FUN_1479aae64 body=318 status=ok
// SIG undefined FUN_1479aae64(void)

void FUN_1479aae64(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong local_78 [5];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    plVar3 = (longlong *)param_1[4];
  }
  else {
    plVar3 = (longlong *)0x0;
  }
  (**(code **)(*plVar3 + 0x718))(plVar3,&local_38,&local_50);
  if (plVar3[0x7a] != 0) {
    lVar1 = *(longlong *)(plVar3[0x7a] + 0x1c8);
    if (lVar1 == 0) {
      puVar2 = &DAT_14c8464e0;
      uVar4 = (undefined4)DAT_14c8464f0;
      uVar5 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar4 = (undefined4)*(undefined8 *)(lVar1 + 0x270);
      uVar5 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x270) >> 0x20);
      puVar2 = (undefined8 *)(lVar1 + 0x260);
    }
    local_38 = *puVar2;
    uStack_30 = puVar2[1];
    local_28 = CONCAT44(uVar5,uVar4);
  }
  local_78[2] = 0;
  local_78[3] = 0;
  local_c8 = local_78;
  local_78[0] = 0;
  local_78[1] = 0;
  local_98 = local_50;
  uStack_90 = uStack_48;
  local_88 = local_40;
  local_b8 = (undefined4)local_38;
  uStack_b4 = local_38._4_4_;
  uStack_b0 = (undefined4)uStack_30;
  uStack_ac = uStack_30._4_4_;
  local_a8 = local_28;
  (**(code **)(*param_1 + 0x3f8))(param_1);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479aafa4 FUN_1479aafa4 body=208 status=ok
// SIG undefined FUN_1479aafa4(void)

void FUN_1479aafa4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar2 = 0;
  }
  lVar2 = *(longlong *)(lVar2 + 0x508);
  if (lVar2 != 0) {
    plVar3 = (longlong *)FUN_140389788();
    lVar4 = plVar3[0x22];
    if (lVar4 == 0) {
      (**(code **)(*plVar3 + 1000))(plVar3);
      lVar4 = plVar3[0x22];
    }
    iVar1 = *(int *)(lVar4 + 0x30);
    if ((longlong)iVar1 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x28);
      lVar5 = 0;
      do {
        if (*(longlong *)(lVar4 + lVar5) == DAT_14c964cb0) {
          uVar6 = FUN_147d94162(lVar2);
          uVar7 = *(undefined4 *)(lVar4 + 0xc + lVar5);
LAB_1479ab032:
          FUN_147d941f2(lVar2,uVar7,uVar6);
        }
        else if (*(longlong *)(lVar4 + lVar5) == DAT_14c964cc8) {
          uVar6 = *(undefined4 *)(lVar4 + 0xc + lVar5);
          uVar7 = FUN_147d940d2(lVar2);
          goto LAB_1479ab032;
        }
        lVar5 = lVar5 + 0x18;
      } while ((longlong)iVar1 * 0x18 != lVar5);
    }
  }
  return;
}



// FUNCTION 1479ab074 FUN_1479ab074 body=116 status=ok
// SIG undefined FUN_1479ab074(void)

void FUN_1479ab074(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
  }
  else {
    lVar1 = 0;
  }
  lVar1 = *(longlong *)(lVar1 + 0x508);
  if (lVar1 != 0) {
    local_20 = (undefined4)DAT_14c964cc8;
    uStack_1c = DAT_14c964cc8._4_4_;
    uStack_18 = (undefined4)DAT_14c964cd0;
    uStack_14 = DAT_14c964cd0._4_4_;
    local_10 = DAT_14c964cd8;
    if (DAT_14c964cd8 != 0) {
      LOCK();
      *(int *)(DAT_14c964cd8 + 8) = *(int *)(DAT_14c964cd8 + 8) + 1;
      UNLOCK();
    }
    FUN_147d935c6(lVar1,&local_20);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ab0ea FUN_1479ab0ea body=77 status=ok
// SIG undefined FUN_1479ab0ea(void)

undefined8 FUN_1479ab0ea(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x80);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x78);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2b0))(plVar3,param_2);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return 1;
}



// FUNCTION 1479ab138 FUN_1479ab138 body=73 status=ok
// SIG undefined FUN_1479ab138(void)

void FUN_1479ab138(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0xc);
    iVar2 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
      FUN_1447de67e(param_1 + 0x60,iVar2);
    }
    lVar3 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x70);
    }
    *(undefined4 *)(lVar3 + (longlong)iVar2 * 4) = uVar1;
  }
  return;
}



// FUNCTION 1479ab182 FUN_1479ab182 body=116 status=ok
// SIG undefined FUN_1479ab182(void)

void FUN_1479ab182(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = (int)param_2[1];
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(*param_2 + lVar4 * 8);
      if (lVar3 != 0) {
        uVar1 = *(undefined4 *)(lVar3 + 0xc);
        iVar2 = *(int *)(param_1 + 0x78);
        *(uint *)(param_1 + 0x78) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
          FUN_1447de67e(param_1 + 0x60,iVar2);
        }
        lVar3 = *(longlong *)(param_1 + 0x70);
        if (*(longlong *)(param_1 + 0x70) == 0) {
          lVar3 = param_1 + 0x60;
        }
        *(undefined4 *)(lVar3 + (longlong)iVar2 * 4) = uVar1;
        iVar2 = (int)param_2[1];
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
  return;
}



// FUNCTION 1479ab1f6 FUN_1479ab1f6 body=127 status=ok
// SIG undefined FUN_1479ab1f6(void)

void FUN_1479ab1f6(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x28) = param_2;
    if ((uint)(*(int *)(param_1 + 0x2c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140694806(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar2 = param_1;
    }
    memset((void *)(lVar2 + (longlong)iVar1 * 4),0,(longlong)(param_2 - iVar1) << 2);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 0x28) = param_2, param_3 == '\x01')) {
      FUN_146f30ff2(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1479ab276 FUN_1479ab276 body=68 status=ok
// SIG undefined FUN_1479ab276(void)

undefined8 FUN_1479ab276(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *(longlong *)(*(longlong *)(*param_1 + 200) + (longlong)(int)param_1[1] * 8);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x1c);
    if (iVar1 == 2) {
      uVar3 = FUN_142a2527c(lVar2,*(undefined4 *)(lVar2 + 0x180));
      return uVar3;
    }
    if (iVar1 == 0xb) {
      return *(undefined8 *)(lVar2 + 0x40);
    }
    if (iVar1 == 0xc) {
      return *(undefined8 *)(lVar2 + 0x128);
    }
  }
  return 0;
}



// FUNCTION 1479ab2ba thunk_FUN_1400b2b4d body=5 status=ok
// SIG undefined thunk_FUN_1400b2b4d(void)

undefined8
thunk_FUN_1400b2b4d(undefined8 param_1,longlong *param_2,undefined4 *param_3,float param_4,
                   undefined8 param_5,double *param_6,double *param_7,longlong param_8,
                   longlong param_9,byte param_10,byte param_11)

{
  undefined8 *puVar1;
  double *pdVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  ushort uVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  char cVar20;
  int iVar21;
  int iVar22;
  undefined4 uVar23;
  longlong lVar24;
  byte bVar25;
  undefined8 uVar26;
  bool bVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined4 uVar39;
  uint uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  uint uVar45;
  undefined1 auStack_1c8 [32];
  undefined4 *puStack_1a8;
  byte bStack_1a0;
  longlong lStack_190;
  double dStack_188;
  undefined8 uStack_180;
  double dStack_178;
  double dStack_170;
  undefined1 auStack_168 [16];
  undefined8 uStack_158;
  undefined8 uStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  undefined1 auStack_128 [16];
  double dStack_118;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  ulonglong uStack_f0;
  
  uStack_f0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  uVar6 = *(ushort *)(param_2 + 7);
  lVar24 = *param_2;
  lVar7 = param_2[1];
  iVar22 = (int)param_2[2];
  fVar3 = *(float *)(param_2 + 0xe);
  if ((param_8 == 0) || (0.0 < fVar3)) {
    if (lVar24 == 0 || lVar7 == 0) {
LAB_1400b2cef:
      dStack_f8 = *(double *)(param_3 + 0x20);
      dStack_108 = *(double *)(param_3 + 0x1c);
      dStack_100 = *(double *)(param_3 + 0x1e);
      dStack_118 = *(double *)(param_3 + 0x26);
      auStack_128 = *(undefined1 (*) [16])(param_3 + 0x22);
      memset(param_3,0,0x100);
      param_3[0x34] = 0xffffffff;
      param_3[0x29] = 0xffffffff;
      param_3[1] = 0x3f800000;
      *(double *)(param_3 + 0x20) = dStack_f8;
      *(double *)(param_3 + 0x1c) = dStack_108;
      *(double *)(param_3 + 0x1e) = dStack_100;
      *(double *)(param_3 + 0x26) = dStack_118;
      *(undefined8 *)(param_3 + 0x22) = auStack_128._0_8_;
      *(undefined8 *)(param_3 + 0x24) = auStack_128._8_8_;
      uVar26 = 1;
      goto LAB_1400b34ac;
    }
    dStack_188 = (double)CONCAT44(dStack_188._4_4_,iVar22);
    puVar1 = (undefined8 *)(lVar7 + 0x48 + (ulonglong)((*(byte *)(lVar7 + 8) & 3) == 0) * 8);
    uStack_158 = *puVar1;
    uStack_150 = puVar1[1];
    lStack_190 = lVar24;
    cVar20 = FUN_144b2633e(param_5,&uStack_158,0);
    *(byte *)((longlong)param_3 + 0xad) =
         (fVar3 <= 0.0) * '\x02' | cVar20 == '\x02' | *(byte *)((longlong)param_3 + 0xad) & 0xfc;
    fVar4 = *(float *)(param_2 + 0xe);
    param_3[1] = fVar4 / param_4;
    param_3[2] = (int)param_2[0xe];
    dVar32 = param_6[2];
    dVar31 = param_7[2] - dVar32;
    dVar29 = param_6[1];
    dVar15 = param_7[1] - dVar29;
    dVar35 = *param_7 - *param_6;
    dVar28 = (double)(fVar4 / param_4);
    *(double *)(param_3 + 4) = dVar28 * dVar35 + *param_6;
    *(double *)(param_3 + 6) = dVar15 * dVar28 + dVar29;
    *(double *)(param_3 + 8) = dVar31 * dVar28 + dVar32;
    if ((uVar6 & 1) == 0 || fVar3 <= 0.0) {
      uVar23 = SUB84(*param_6,0);
      uVar39 = (undefined4)((ulonglong)*param_6 >> 0x20);
      uVar41 = SUB84(param_6[1],0);
      uVar42 = (undefined4)((ulonglong)param_6[1] >> 0x20);
      uVar43 = SUB84(param_6[2],0);
      uVar44 = (undefined4)((ulonglong)param_6[2] >> 0x20);
    }
    else {
      dVar32 = (double)param_2[8];
      uVar23 = SUB84(dVar32,0);
      uVar39 = (undefined4)((ulonglong)dVar32 >> 0x20);
      dVar29 = (double)param_2[9];
      uVar41 = SUB84(dVar29,0);
      uVar42 = (undefined4)((ulonglong)dVar29 >> 0x20);
      dVar28 = (double)param_2[10];
      uVar43 = SUB84(dVar28,0);
      uVar44 = (undefined4)((ulonglong)dVar28 >> 0x20);
      iVar22 = _finite(dVar32);
      if (((iVar22 == 0) || (iVar22 = _finite(dVar29), iVar22 == 0)) ||
         (iVar22 = _finite(dVar28), iVar22 == 0)) goto LAB_1400b2cef;
    }
    *(ulonglong *)(param_3 + 10) = CONCAT44(uVar39,uVar23);
    *(ulonglong *)(param_3 + 0xc) = CONCAT44(uVar42,uVar41);
    *(ulonglong *)(param_3 + 0xe) = CONCAT44(uVar44,uVar43);
    bVar27 = (uVar6 & 2) != 0;
    if (bVar27 && 0.0 < fVar3) {
      auVar5 = *(undefined1 (*) [16])(param_2 + 0xb);
      dVar29 = auVar5._0_8_;
      uVar39 = auVar5._0_4_;
      uVar41 = auVar5._4_4_;
      uVar42 = auVar5._8_4_;
      uVar45 = auVar5._12_4_;
      dVar32 = (double)param_2[0xd];
      uVar23 = SUB84(dVar32,0);
      uVar40 = (uint)((ulonglong)dVar32 >> 0x20);
      iVar21 = _finite(dVar29);
      iVar22 = dStack_188._0_4_;
      if (((iVar21 == 0) || (iVar21 = _finite(auVar5._8_8_), iVar21 == 0)) ||
         (iVar21 = _finite(dVar32), iVar21 == 0)) goto LAB_1400b2cef;
    }
    else {
      uVar40 = (uint)((ulonglong)dVar31 >> 0x20) ^ 0x80000000;
      uVar23 = SUB84(dVar31,0);
      uVar45 = (uint)((ulonglong)dVar15 >> 0x20) ^ 0x80000000;
      uVar42 = SUB84(dVar15,0);
      dVar29 = -dVar35;
      uVar39 = SUB84(dVar35,0);
      uVar41 = (undefined4)((ulonglong)dVar29 >> 0x20);
      iVar22 = dStack_188._0_4_;
    }
    dVar32 = (double)CONCAT44(uVar40,uVar23) * (double)CONCAT44(uVar40,uVar23) +
             dVar29 * dVar29 + (double)CONCAT44(uVar45,uVar42) * (double)CONCAT44(uVar45,uVar42);
    if (((dVar32 != 1.0) ||
        (dVar28 = (double)CONCAT44(uVar40,uVar23), dVar30 = (double)CONCAT44(uVar41,uVar39),
        dVar14 = (double)CONCAT44(uVar45,uVar42), NAN(dVar32))) &&
       (dVar28 = DAT_14c8464f0, dVar30 = DAT_14c8464e0, dVar14 = DAT_14c8464e8,
       9.99999993922529e-09 <= dVar32)) {
      dVar32 = 1.0 / SQRT(dVar32);
      dVar28 = (double)CONCAT44(uVar40,uVar23) * dVar32;
      dVar30 = dVar29 * dVar32;
      dVar14 = (double)CONCAT44(uVar45,uVar42) * dVar32;
    }
    uVar23 = (undefined4)((ulonglong)dVar14 >> 0x20);
    auVar5._8_4_ = SUB84(dVar14,0);
    auVar5._0_8_ = dVar30;
    auVar5._12_4_ = uVar23;
    *(undefined1 (*) [16])(param_3 + 0x10) = auVar5;
    *(double *)(param_3 + 0x14) = dVar28;
    auVar10._8_4_ = SUB84(dVar14,0);
    auVar10._0_8_ = dVar30;
    auVar10._12_4_ = uVar23;
    *(undefined1 (*) [16])(param_3 + 0x16) = auVar10;
    *(double *)(param_3 + 0x1a) = dVar28;
    dVar32 = *param_6;
    dVar29 = param_6[1];
    *(double *)(param_3 + 0x20) = param_6[2];
    *(double *)(param_3 + 0x1c) = dVar32;
    *(double *)(param_3 + 0x1e) = dVar29;
    dVar32 = *param_7;
    dVar29 = param_7[1];
    *(double *)(param_3 + 0x26) = param_7[2];
    *(double *)(param_3 + 0x22) = dVar32;
    *(double *)(param_3 + 0x24) = dVar29;
    bStack_1a0 = param_11;
    puStack_1a8 = param_3;
    FUN_143426011(lVar7,lStack_190,iVar22,param_3 + 10);
    if ((bVar27 && 0.0 < fVar3) &&
       (0.009999999776482582 <= ABS(1.0 - (dVar28 * dVar28 + dVar30 * dVar30 + dVar14 * dVar14)))) {
      dVar32 = dVar31 * dVar31 + dVar35 * dVar35 + dVar15 * dVar15;
      if (((dVar32 != 1.0) || (dVar28 = dVar31, dVar30 = dVar35, dVar29 = dVar15, NAN(dVar32))) &&
         (dVar28 = DAT_14c8464f0, dVar30 = DAT_14c8464e0, dVar29 = DAT_14c8464e8,
         9.99999993922529e-09 <= dVar32)) {
        dVar32 = 1.0 / SQRT(dVar32);
        dVar28 = dVar31 * dVar32;
        dVar30 = dVar32 * dVar35;
        dVar29 = dVar15 * dVar32;
      }
      dVar28 = -dVar28;
      dVar30 = -dVar30;
      dVar14 = -dVar29;
      uVar23 = (undefined4)((ulonglong)dVar14 >> 0x20);
      auVar11._8_4_ = SUB84(dVar29,0);
      auVar11._0_8_ = dVar30;
      auVar11._12_4_ = uVar23;
      *(undefined1 (*) [16])(param_3 + 0x10) = auVar11;
      *(double *)(param_3 + 0x14) = dVar28;
      auVar12._8_4_ = SUB84(dVar29,0);
      auVar12._0_8_ = dVar30;
      auVar12._12_4_ = uVar23;
      *(undefined1 (*) [16])(param_3 + 0x16) = auVar12;
      *(double *)(param_3 + 0x1a) = dVar28;
    }
    if (param_8 != 0) {
      bVar25 = *(byte *)(param_8 + 0x1c) & 0x1f;
      if (bVar25 == 4) {
        do {
          param_8 = *(longlong *)(param_8 + 0x20);
          bVar25 = *(byte *)(param_8 + 0x1c) & 0x1f;
        } while (param_8 != 0 && bVar25 == 4);
      }
      if (((bVar25 == 3) || (bVar25 == 0)) && (lVar24 = param_2[1], lVar24 != 0)) {
        cVar20 = (**(code **)(**(longlong **)(lVar24 + 0x10) + 8))();
        if ((cVar20 != '\x05') ||
           (((ABS((double)param_2[3]) <= 9.999999747378752e-05 &&
             (ABS((double)param_2[4]) <= 9.999999747378752e-05)) &&
            (ABS((double)param_2[5]) <= 9.999999747378752e-05)))) {
          lVar9 = *param_2;
          dVar17 = (double)*(float *)(lVar9 + 0x4c);
          dVar18 = (double)*(float *)(lVar9 + 0x48);
          dStack_188 = (double)*(float *)(lVar9 + 0x44);
          uStack_180 = 0;
          dVar16 = (double)*(float *)(lVar9 + 0x40);
          auStack_168._8_4_ = SUB84(dStack_188,0);
          auStack_168._0_8_ = dVar16;
          auStack_168._12_4_ = (int)((ulonglong)dStack_188 >> 0x20);
          dVar33 = dVar18 * -1.0;
          dVar34 = dVar17 * 1.0;
          dVar37 = dVar14 * -dVar16 - dVar30 * -dStack_188;
          dVar38 = dVar28 * -dStack_188 - dVar14 * dVar33;
          dVar36 = dVar30 * dVar33 - dVar28 * -dVar16;
          dVar38 = dVar38 + dVar38;
          dVar36 = dVar36 + dVar36;
          dVar37 = dVar37 + dVar37;
          dStack_118 = dVar37 * dVar34 + dVar28 + (dVar36 * -dVar16 - dVar38 * -dStack_188);
          dVar14 = dVar16 * dVar37 + dVar33 * dVar38 + dVar34 * dVar36 + dVar14;
          dVar32 = dVar15 * -dVar16 - dVar35 * -dStack_188;
          dVar29 = dVar31 * -dStack_188 - dVar15 * dVar33;
          dVar28 = dVar35 * dVar33 - dVar31 * -dVar16;
          dVar29 = dVar29 + dVar29;
          dVar28 = dVar28 + dVar28;
          dVar32 = dVar32 + dVar32;
          dStack_138 = dVar32 * dVar34 + dVar31 + (dVar28 * -dVar16 - dVar29 * -dStack_188);
          dStack_148 = (dVar32 * -dStack_188 - dVar28 * dVar33) + dVar34 * dVar29 + dVar35;
          dStack_140 = dVar16 * dVar32 + dVar33 * dVar29 + dVar34 * dVar28 + dVar15;
          puStack_1a8 = (undefined4 *)auStack_128;
          auStack_128._8_4_ = SUB84(dVar14,0);
          auStack_128._0_8_ = (dVar37 * -dStack_188 - dVar36 * dVar33) + dVar34 * dVar38 + dVar30;
          auStack_128._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
          dStack_178 = dVar18;
          dStack_170 = dVar17;
          (**(code **)(**(longlong **)(lVar24 + 0x10) + 0xc0))
                    (*(longlong **)(lVar24 + 0x10),&dStack_108,&dStack_148,(int)param_2[2]);
          dVar32 = dStack_100 * (double)auStack_168._0_8_ - dStack_188 * dStack_108;
          dVar29 = dStack_f8 * (double)auStack_168._8_8_ - dVar18 * dStack_100;
          dVar31 = dStack_108 * dStack_178 - dVar16 * dStack_f8;
          dVar32 = dVar32 + dVar32;
          dVar29 = dVar29 + dVar29;
          dVar31 = dVar31 + dVar31;
          dVar28 = dVar17 * dVar32 + dStack_f8 +
                   (dVar31 * (double)auStack_168._0_8_ - dVar29 * dStack_188);
          dVar30 = (dVar32 * (double)auStack_168._8_8_ - dVar31 * dVar18) +
                   dVar17 * dVar29 + dStack_108;
          dVar14 = (dVar18 * dVar29 - dVar32 * dVar16) + dVar17 * dVar31 + dStack_100;
        }
        else {
          dVar30 = (double)param_2[3];
          dVar14 = (double)param_2[4];
          dVar28 = (double)param_2[5];
        }
      }
    }
    auVar13._8_4_ = SUB84(dVar14,0);
    auVar13._0_8_ = dVar30;
    auVar13._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    *(undefined1 (*) [16])(param_3 + 0x16) = auVar13;
    *(double *)(param_3 + 0x1a) = dVar28;
    lVar24 = *(longlong *)(lVar7 + 0x10);
    bVar25 = *(byte *)(lVar24 + 0x1c) & 0x1f;
    if (bVar25 == 4 && lVar24 != 0) {
      do {
        lVar24 = *(longlong *)(lVar24 + 0x20);
        bVar25 = *(byte *)(lVar24 + 0x1c) & 0x1f;
      } while (lVar24 != 0 && bVar25 == 4);
    }
    uVar26 = 0;
    if (bVar25 == 0xc) {
      if (((param_11 & iVar22 != -1) != 1) ||
         (lVar24 = FUN_144b266e4(lVar7,lStack_190,iVar22), lVar24 == 0)) goto LAB_1400b34ac;
      piVar8 = *(int **)(lVar24 + 0x58);
      if ((piVar8 == (int *)0x0) || (*piVar8 != 2)) {
LAB_1400b3976:
        param_3[0x2c] = 0;
        iVar22 = 0;
      }
      else {
        if (*(longlong *)(piVar8 + 2) == 0) goto LAB_1400b3976;
        uVar40 = *(uint *)(*(longlong *)(piVar8 + 2) + 0xc);
        param_3[0x2c] = uVar40;
        if ((int)uVar40 < DAT_14c9647dc) {
          lVar24 = (ulonglong)((uVar40 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar40 >> 0x10) * 8);
        }
        else {
          lVar24 = 0;
        }
        iVar22 = *(int *)(lVar24 + 0x10);
        if (*(int *)(lVar24 + 0x10) == 0) {
          LOCK();
          iVar22 = DAT_14c964868 + 1;
          UNLOCK();
          iVar21 = DAT_14c964868 + 1;
          bVar27 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar22;
          if (bVar27) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar21);
          }
          LOCK();
          iVar22 = *(int *)(lVar24 + 0x10);
          bVar27 = iVar22 == 0;
          if (bVar27) {
            *(int *)(lVar24 + 0x10) = iVar21;
            iVar22 = 0;
          }
          UNLOCK();
          if (bVar27) {
            iVar22 = iVar21;
          }
        }
      }
      param_3[0x2d] = iVar22;
      goto LAB_1400b34ac;
    }
    if ((bVar25 != 0xb) || ((param_10 & iVar22 != -1) != 1)) goto LAB_1400b34ac;
  }
  else {
    if (lVar24 != 0 && lVar7 != 0) {
      pdVar2 = (double *)(lVar7 + 0x48 + (ulonglong)((*(byte *)(lVar7 + 8) & 3) == 0) * 8);
      dStack_108 = *pdVar2;
      dStack_100 = pdVar2[1];
      lStack_190 = lVar24;
      cVar20 = FUN_144b2633e(param_5,&dStack_108,0);
      *(byte *)((longlong)param_3 + 0xad) =
           *(byte *)((longlong)param_3 + 0xad) & 0xfc | cVar20 == '\x02' | 2;
      *(undefined8 *)(param_3 + 1) = 0;
      uVar19 = *(undefined8 *)(param_9 + 0x28);
      uVar26 = *(undefined8 *)(param_9 + 0x30);
      *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_9 + 0x20);
      *(undefined8 *)(param_3 + 6) = uVar19;
      *(undefined8 *)(param_3 + 8) = uVar26;
      if ((*(byte *)(param_2 + 7) & 1) == 0) {
LAB_1400b2f48:
        dVar32 = *param_6;
        dVar29 = param_6[1];
        *(double *)(param_3 + 0xe) = param_6[2];
        *(double *)(param_3 + 10) = dVar32;
        *(double *)(param_3 + 0xc) = dVar29;
      }
      else {
        dVar32 = (double)param_2[8];
        dVar29 = (double)param_2[9];
        dVar31 = (double)param_2[10];
        iVar21 = _finite(dVar32);
        if (((iVar21 == 0) || (iVar21 = _finite(dVar29), iVar21 == 0)) ||
           (iVar21 = _finite(dVar31), iVar21 == 0)) goto LAB_1400b2f48;
        *(double *)(param_3 + 10) = dVar32;
        *(double *)(param_3 + 0xc) = dVar29;
        *(double *)(param_3 + 0xe) = dVar31;
      }
      dVar32 = *param_6;
      dVar29 = param_6[1];
      *(double *)(param_3 + 0x20) = param_6[2];
      *(double *)(param_3 + 0x1c) = dVar32;
      *(double *)(param_3 + 0x1e) = dVar29;
      dVar32 = *param_7;
      dVar29 = param_7[1];
      *(double *)(param_3 + 0x26) = param_7[2];
      *(double *)(param_3 + 0x22) = dVar32;
      *(double *)(param_3 + 0x24) = dVar29;
      dVar32 = (double)param_2[0xb];
      dVar29 = (double)param_2[0xc];
      dVar31 = (double)param_2[0xd];
      iVar21 = _finite(dVar32);
      if (((iVar21 == 0) || (iVar21 = _finite(dVar29), iVar21 == 0)) ||
         ((iVar21 = _finite(dVar31), iVar21 == 0 || ((*(ushort *)(param_2 + 7) & 2) == 0)))) {
        *(undefined8 *)(param_3 + 0x1a) = DAT_14c8462d0;
        uVar26 = DAT_14c8462c8;
        *(undefined8 *)(param_3 + 0x16) = DAT_14c8462c0;
        *(undefined8 *)(param_3 + 0x18) = uVar26;
        param_3[0x28] = 0;
        if (cVar20 != '\x02') {
          dVar29 = param_6[2] - param_7[2];
          dVar32 = param_6[1] - param_7[1];
          dVar31 = *param_6 - *param_7;
          dVar35 = dVar29 * dVar29 + dVar31 * dVar31 + dVar32 * dVar32;
          if (((dVar35 != 1.0) || (dVar28 = dVar31, dVar15 = dVar32, dVar30 = dVar29, NAN(dVar35)))
             && (dVar28 = DAT_14c8464e0, dVar15 = DAT_14c8464e8, dVar30 = DAT_14c8464f0,
                9.99999993922529e-09 <= dVar35)) {
            dVar35 = 1.0 / SQRT(dVar35);
            dVar28 = dVar31 * dVar35;
            dVar15 = dVar32 * dVar35;
            dVar30 = dVar29 * dVar35;
          }
          *(double *)(param_3 + 0x16) = dVar28;
          *(double *)(param_3 + 0x18) = dVar15;
          *(double *)(param_3 + 0x1a) = dVar30;
        }
      }
      else {
        *(double *)(param_3 + 0x16) = dVar32;
        *(double *)(param_3 + 0x18) = dVar29;
        *(double *)(param_3 + 0x1a) = dVar31;
        param_3[0x28] = *(uint *)(param_2 + 0xe) & 0x7fffffff;
      }
      *(undefined8 *)(param_3 + 0x14) = *(undefined8 *)(param_3 + 0x1a);
      *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_3 + 0x16);
      *(undefined8 *)(param_3 + 0x12) = *(undefined8 *)(param_3 + 0x18);
      bStack_1a0 = param_11;
      puStack_1a8 = param_3;
      FUN_143426011(lVar7,lStack_190,(int)param_2[2],param_3 + 10);
    }
    else {
      dStack_f8 = *(double *)(param_3 + 0x20);
      dStack_108 = *(double *)(param_3 + 0x1c);
      dStack_100 = *(double *)(param_3 + 0x1e);
      dStack_118 = *(double *)(param_3 + 0x26);
      auStack_128 = *(undefined1 (*) [16])(param_3 + 0x22);
      uVar26 = 0;
      memset(param_3,0,0x100);
      param_3[0x34] = 0xffffffff;
      param_3[0x29] = 0xffffffff;
      param_3[1] = 0x3f800000;
      *(double *)(param_3 + 0x20) = dStack_f8;
      *(double *)(param_3 + 0x1c) = dStack_108;
      *(double *)(param_3 + 0x1e) = dStack_100;
      *(double *)(param_3 + 0x26) = dStack_118;
      *(undefined8 *)(param_3 + 0x22) = auStack_128._0_8_;
      *(undefined8 *)(param_3 + 0x24) = auStack_128._8_8_;
      if (lVar7 == 0) goto LAB_1400b34ac;
    }
    lVar24 = *(longlong *)(lVar7 + 0x10);
    bVar25 = *(byte *)(lVar24 + 0x1c) & 0x1f;
    if (bVar25 == 4 && lVar24 != 0) {
      do {
        lVar24 = *(longlong *)(lVar24 + 0x20);
        bVar25 = *(byte *)(lVar24 + 0x1c) & 0x1f;
      } while (lVar24 != 0 && bVar25 == 4);
    }
    uVar26 = 0;
    if ((bVar25 != 0xb) || (param_10 != 1 || iVar22 == -1)) goto LAB_1400b34ac;
  }
  uVar26 = 0;
  uVar23 = FUN_147c68946(lVar7,iVar22);
  *param_3 = uVar23;
LAB_1400b34ac:
  if ((uStack_f0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar26;
}



// FUNCTION 1479ab2c0 FUN_1479ab2c0 body=65 status=ok
// SIG undefined FUN_1479ab2c0(void)

int FUN_1479ab2c0(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_144a3a3ee(param_1,iVar1);
  }
  FUN_1447c0d5c((longlong)iVar1 * 0x100 + *param_1,1);
  return iVar1;
}



// FUNCTION 1479ab301 FUN_1479ab301 body=400 status=ok
// SIG undefined FUN_1479ab301(void)

undefined8
FUN_1479ab301(byte *param_1,undefined8 param_2,uint param_3,longlong param_4,undefined4 param_5,
             undefined8 param_6,longlong *param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10,undefined8 param_11,float param_12,undefined1 param_13,
             undefined1 param_14)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  byte bVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined1 local_88;
  byte *local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar1 = (int)param_7[1] + param_3;
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  uVar3 = (ulonglong)param_3;
  if (*(int *)((longlong)param_7 + 0xc) < iVar1) {
    FUN_1447c0da8(param_7);
  }
  if ((int)param_3 < 1) {
    bVar4 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    bVar4 = 0;
    local_80 = param_1;
    do {
      if (*(float *)(param_4 + 0x70) <= param_12) {
        iVar1 = FUN_1479ab2c0(param_7);
        lVar5 = (longlong)iVar1 * 0x100 + *param_7;
        local_88 = param_14;
        local_90 = param_13;
        local_98 = param_11;
        local_a0 = param_10;
        local_a8 = param_9;
        local_b0 = param_8;
        local_b8 = param_6;
        iVar1 = FUN_1434240af(param_2,param_4,lVar5,param_5);
        if (iVar1 == 0) {
          bVar4 = bVar4 | *(byte *)(lVar5 + 0xad);
        }
        else {
          *(int *)(param_7 + 1) = (int)param_7[1] + -1;
          uVar2 = 1;
        }
      }
      param_4 = param_4 + 0x78;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    bVar4 = bVar4 & 1;
    param_1 = local_80;
  }
  FUN_14497fce4(*param_7,(int)param_7[1]);
  *param_1 = bVar4;
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ab493 FUN_1479ab493 body=400 status=ok
// SIG undefined FUN_1479ab493(void)

undefined8
FUN_1479ab493(byte *param_1,undefined8 param_2,uint param_3,longlong param_4,undefined4 param_5,
             undefined8 param_6,longlong *param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10,undefined8 param_11,float param_12,undefined1 param_13,
             undefined1 param_14)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  byte bVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined1 local_88;
  byte *local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar1 = (int)param_7[1] + param_3;
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  uVar3 = (ulonglong)param_3;
  if (*(int *)((longlong)param_7 + 0xc) < iVar1) {
    FUN_1447c0da8(param_7);
  }
  if ((int)param_3 < 1) {
    bVar4 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    bVar4 = 0;
    local_80 = param_1;
    do {
      if (*(float *)(param_4 + 0x70) <= param_12) {
        iVar1 = FUN_1479ab2c0(param_7);
        lVar5 = (longlong)iVar1 * 0x100 + *param_7;
        local_88 = param_14;
        local_90 = param_13;
        local_98 = param_11;
        local_a0 = param_10;
        local_a8 = param_9;
        local_b0 = param_8;
        local_b8 = param_6;
        iVar1 = FUN_1434240af(param_2,param_4,lVar5,param_5);
        if (iVar1 == 0) {
          bVar4 = bVar4 | *(byte *)(lVar5 + 0xad);
        }
        else {
          *(int *)(param_7 + 1) = (int)param_7[1] + -1;
          uVar2 = 1;
        }
      }
      param_4 = param_4 + 0x80;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    bVar4 = bVar4 & 1;
    param_1 = local_80;
  }
  FUN_14497fce4(*param_7,(int)param_7[1]);
  *param_1 = bVar4;
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ab625 FUN_1479ab625 body=126 status=ok
// SIG undefined FUN_1479ab625(void)

void * FUN_1479ab625(void *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  memset(param_1,0,0x100);
  *(undefined4 *)((longlong)param_1 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0xad) = *(byte *)(param_2 + 8) & 1;
  *(undefined4 *)((longlong)param_1 + 0xa8) = *(undefined4 *)(param_2 + 5);
  *(undefined8 *)((longlong)param_1 + 0xd8) = param_2[4];
  *(undefined8 *)((longlong)param_1 + 0xe8) = param_2[7];
  *(undefined8 *)((longlong)param_1 + 0xe0) = *(undefined8 *)((longlong)param_2 + 0x2c);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  *(undefined8 *)((longlong)param_1 + 200) = param_2[2];
  *(undefined8 *)((longlong)param_1 + 0xd0) = uVar3;
  *(undefined8 *)((longlong)param_1 + 0xb8) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0xc0) = uVar2;
  return param_1;
}



// FUNCTION 1479ab6f0 FUN_1479ab6f0 body=45 status=ok
// SIG undefined FUN_1479ab6f0(void)

longlong FUN_1479ab6f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e248(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479ab71e FUN_1479ab71e body=48 status=ok
// SIG undefined FUN_1479ab71e(void)

longlong FUN_1479ab71e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e248(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479ab74e FUN_1479ab74e body=48 status=ok
// SIG undefined FUN_1479ab74e(void)

longlong FUN_1479ab74e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e248(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479ab77e FUN_1479ab77e body=48 status=ok
// SIG undefined FUN_1479ab77e(void)

longlong FUN_1479ab77e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e248(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479ab7b8 FUN_1479ab7b8 body=45 status=ok
// SIG undefined FUN_1479ab7b8(void)

longlong FUN_1479ab7b8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1411346b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479ab7f6 FUN_1479ab7f6 body=45 status=ok
// SIG undefined FUN_1479ab7f6(void)

longlong FUN_1479ab7f6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e79a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479ab854 FUN_1479ab854 body=38 status=ok
// SIG undefined FUN_1479ab854(void)

undefined8 FUN_1479ab854(undefined8 param_1,int param_2)

{
  FUN_1479a696c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479ab8b6 FUN_1479ab8b6 body=62 status=ok
// SIG undefined FUN_1479ab8b6(void)

undefined1 FUN_1479ab8b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14054c6c4(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 0x18);
    uVar3 = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    *(undefined4 *)(param_2 + 0x18) = uVar2;
    *(undefined4 *)(param_2 + 0x1c) = uVar3;
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 1479ab91c FUN_1479ab91c body=59 status=ok
// SIG undefined FUN_1479ab91c(void)

undefined8 FUN_1479ab91c(longlong *param_1)

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



// FUNCTION 1479ab962 FUN_1479ab962 body=37 status=ok
// SIG undefined FUN_1479ab962(void)

void FUN_1479ab962(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[4] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 1479aba00 FUN_1479aba00 body=90 status=ok
// SIG undefined FUN_1479aba00(void)

undefined1 FUN_1479aba00(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 1479aba82 FUN_1479aba82 body=59 status=ok
// SIG undefined FUN_1479aba82(void)

undefined8 FUN_1479aba82(longlong *param_1)

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



// FUNCTION 1479abb58 FUN_1479abb58 body=54 status=ok
// SIG undefined FUN_1479abb58(void)

undefined1 FUN_1479abb58(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1479abc70(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1479abbb6 FUN_1479abbb6 body=59 status=ok
// SIG undefined FUN_1479abbb6(void)

undefined8 FUN_1479abbb6(longlong *param_1)

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



// FUNCTION 1479abbfc FUN_1479abbfc body=37 status=ok
// SIG undefined FUN_1479abbfc(void)

void FUN_1479abbfc(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1479abc70 FUN_1479abc70 body=79 status=ok
// SIG undefined FUN_1479abc70(void)

undefined8 * FUN_1479abc70(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1479abcc0(param_1,iVar1);
      FUN_1479abd22(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1479abcc0 FUN_1479abcc0 body=98 status=ok
// SIG undefined FUN_1479abcc0(void)

void FUN_1479abcc0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1479abd22 FUN_1479abd22 body=82 status=ok
// SIG undefined FUN_1479abd22(void)

void FUN_1479abd22(longlong param_1,longlong param_2,int param_3)

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
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 1479abda6 FUN_1479abda6 body=110 status=ok
// SIG undefined FUN_1479abda6(void)

undefined1 FUN_1479abda6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar3 = *(longlong *)(param_3 + lVar4);
      if ((bVar2 & 1) != 0) {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar3 = *(longlong *)(param_3 + lVar4);
          bVar2 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar4);
      *plVar1 = lVar3;
      plVar1[1] = *(longlong *)(param_3 + 8 + lVar4);
      *(undefined1 *)(plVar1 + 2) = *(undefined1 *)(param_3 + 0x10 + lVar4);
      lVar4 = lVar4 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1479abe3c FUN_1479abe3c body=59 status=ok
// SIG undefined FUN_1479abe3c(void)

undefined8 FUN_1479abe3c(longlong *param_1)

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



// FUNCTION 1479abf50 FUN_1479abf50 body=59 status=ok
// SIG undefined FUN_1479abf50(void)

undefined8 FUN_1479abf50(longlong *param_1)

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



// FUNCTION 1479ac04e FUN_1479ac04e body=81 status=ok
// SIG undefined FUN_1479ac04e(void)

undefined8 FUN_1479ac04e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined4 *)(lVar1 + -8) = *(undefined4 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_1447ff17a();
      lVar2 = lVar2 + 0xa40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1479ac0c8 FUN_1479ac0c8 body=59 status=ok
// SIG undefined FUN_1479ac0c8(void)

undefined8 FUN_1479ac0c8(longlong *param_1)

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



// FUNCTION 1479ac114 FUN_1479ac114 body=39 status=ok
// SIG undefined FUN_1479ac114(void)

void FUN_1479ac114(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa40) == '\x01') {
    FUN_1412b8054(param_2 + 0x10);
    *(undefined1 *)(param_2 + 0xa40) = 0;
  }
  return;
}



// FUNCTION 1479ac1e8 FUN_1479ac1e8 body=81 status=ok
// SIG undefined FUN_1479ac1e8(void)

undefined8 FUN_1479ac1e8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined4 *)(lVar1 + -8) = *(undefined4 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_1447ff17a();
      lVar2 = lVar2 + 0xa40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1479ac262 FUN_1479ac262 body=59 status=ok
// SIG undefined FUN_1479ac262(void)

undefined8 FUN_1479ac262(longlong *param_1)

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



// FUNCTION 1479ac2ae FUN_1479ac2ae body=39 status=ok
// SIG undefined FUN_1479ac2ae(void)

void FUN_1479ac2ae(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa40) == '\x01') {
    FUN_1412b8054(param_2 + 0x10);
    *(undefined1 *)(param_2 + 0xa40) = 0;
  }
  return;
}



// FUNCTION 1479ac326 FUN_1479ac326 body=86 status=ok
// SIG undefined FUN_1479ac326(void)

void FUN_1479ac326(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  param_2[2] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = uVar1;
  uVar4 = DAT_14c846500._4_4_;
  uVar3 = (undefined4)DAT_14c846500;
  uVar2 = DAT_14c8464f8._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)DAT_14c8464f8;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar2;
  *(undefined4 *)(param_2 + 4) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar4;
  param_2[5] = DAT_14c846508;
  *(undefined4 *)(param_2 + 6) = 0;
  FUN_144894d4c(param_2 + 8);
  *(undefined4 *)(param_2 + 0x120) = 0;
  *(undefined1 *)((longlong)param_2 + 0x904) = 0;
  return;
}



// FUNCTION 1479ac37c FUN_1479ac37c body=86 status=ok
// SIG undefined FUN_1479ac37c(void)

void FUN_1479ac37c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  param_2[2] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = uVar1;
  uVar4 = DAT_14c846500._4_4_;
  uVar3 = (undefined4)DAT_14c846500;
  uVar2 = DAT_14c8464f8._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)DAT_14c8464f8;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar2;
  *(undefined4 *)(param_2 + 4) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar4;
  param_2[5] = DAT_14c846508;
  *(undefined4 *)(param_2 + 6) = 0;
  FUN_144894d4c(param_2 + 8);
  *(undefined4 *)(param_2 + 0x120) = 0;
  *(undefined1 *)((longlong)param_2 + 0x904) = 0;
  return;
}



// FUNCTION 1479ac3d2 FUN_1479ac3d2 body=54 status=ok
// SIG undefined FUN_1479ac3d2(void)

void FUN_1479ac3d2(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x8f0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x868) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1479ac41e FUN_1479ac41e body=147 status=ok
// SIG undefined FUN_1479ac41e(void)

undefined8 FUN_1479ac41e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
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
  longlong lVar14;
  
  if (param_4 != 0) {
    lVar14 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar14);
      lVar2 = param_2 + 0x40 + lVar14;
      *(undefined4 *)(lVar2 + -0x10) = puVar1[0xc];
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar7 = puVar1[4];
      uVar8 = puVar1[5];
      uVar9 = puVar1[6];
      uVar10 = puVar1[7];
      uVar11 = puVar1[9];
      uVar12 = puVar1[10];
      uVar13 = puVar1[0xb];
      *(undefined4 *)(lVar2 + -0x20) = puVar1[8];
      *(undefined4 *)(lVar2 + -0x1c) = uVar11;
      *(undefined4 *)(lVar2 + -0x18) = uVar12;
      *(undefined4 *)(lVar2 + -0x14) = uVar13;
      *(undefined4 *)(lVar2 + -0x30) = uVar7;
      *(undefined4 *)(lVar2 + -0x2c) = uVar8;
      *(undefined4 *)(lVar2 + -0x28) = uVar9;
      *(undefined4 *)(lVar2 + -0x24) = uVar10;
      *(undefined4 *)(lVar2 + -0x40) = uVar3;
      *(undefined4 *)(lVar2 + -0x3c) = uVar4;
      *(undefined4 *)(lVar2 + -0x38) = uVar5;
      *(undefined4 *)(lVar2 + -0x34) = uVar6;
      FUN_14477b16e(lVar2,puVar1 + 0x10);
      *(undefined4 *)(lVar2 + 0x8c0) = puVar1[0x240];
      *(undefined1 *)(lVar2 + 0x8c4) = *(undefined1 *)(puVar1 + 0x241);
      lVar14 = lVar14 + 0x910;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1479ac4da FUN_1479ac4da body=59 status=ok
// SIG undefined FUN_1479ac4da(void)

undefined8 FUN_1479ac4da(longlong *param_1)

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



// FUNCTION 1479ac57e FUN_1479ac57e body=64 status=ok
// SIG undefined FUN_1479ac57e(void)

void FUN_1479ac57e(longlong param_1)

{
  if (*(char *)(param_1 + 0x910) == '\x01') {
    if (*(longlong *)(param_1 + 0x8f0) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x868) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x910) = 0;
  }
  return;
}



// FUNCTION 1479ac622 FUN_1479ac622 body=59 status=ok
// SIG undefined FUN_1479ac622(void)

undefined8 FUN_1479ac622(longlong *param_1)

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



// FUNCTION 1479ac738 FUN_1479ac738 body=59 status=ok
// SIG undefined FUN_1479ac738(void)

undefined8 FUN_1479ac738(longlong *param_1)

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



// FUNCTION 1479ac852 FUN_1479ac852 body=59 status=ok
// SIG undefined FUN_1479ac852(void)

undefined8 FUN_1479ac852(longlong *param_1)

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



// FUNCTION 1479ac93c FUN_1479ac93c body=59 status=ok
// SIG undefined FUN_1479ac93c(void)

undefined8 FUN_1479ac93c(longlong *param_1)

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



// FUNCTION 1479aca60 FUN_1479aca60 body=59 status=ok
// SIG undefined FUN_1479aca60(void)

undefined8 FUN_1479aca60(longlong *param_1)

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



// FUNCTION 1479acaac FUN_1479acaac body=39 status=ok
// SIG undefined FUN_1479acaac(void)

void FUN_1479acaac(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_140d7a9b4(param_2 + 0x50);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  return;
}



// FUNCTION 1479acb24 FUN_1479acb24 body=79 status=ok
// SIG undefined FUN_1479acb24(void)

void FUN_1479acb24(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xd0);
  *(undefined ***)((longlong)param_2 + 0x58) = &PTR_FUN_14a819a28;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined2 *)((longlong)param_2 + 0x80) = 0;
  return;
}



// FUNCTION 1479acbe2 FUN_1479acbe2 body=80 status=ok
// SIG undefined FUN_1479acbe2(void)

undefined1 FUN_1479acbe2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_147998570(param_2,param_3);
      param_3 = param_3 + 0xd0;
      param_2 = param_2 + 0xd0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1479acc5a FUN_1479acc5a body=59 status=ok
// SIG undefined FUN_1479acc5a(void)

undefined8 FUN_1479acc5a(longlong *param_1)

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



// FUNCTION 1479acca6 FUN_1479acca6 body=39 status=ok
// SIG undefined FUN_1479acca6(void)

void FUN_1479acca6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_140d7a9b4(param_2 + 0x58);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 1479acd7e FUN_1479acd7e body=59 status=ok
// SIG undefined FUN_1479acd7e(void)

undefined8 FUN_1479acd7e(longlong *param_1)

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



// FUNCTION 1479ace20 FUN_1479ace20 body=38 status=ok
// SIG undefined FUN_1479ace20(void)

undefined8 FUN_1479ace20(undefined8 param_1,int param_2)

{
  FUN_140d7a9b4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479ace46 FUN_1479ace46 body=98 status=ok
// SIG undefined FUN_1479ace46(void)

void FUN_1479ace46(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1479acea8 FUN_1479acea8 body=45 status=ok
// SIG undefined FUN_1479acea8(void)

void FUN_1479acea8(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1479aced6 FUN_1479aced6 body=66 status=ok
// SIG undefined FUN_1479aced6(void)

void FUN_1479aced6(undefined8 param_1,byte *param_2)

{
  *param_2 = *param_2 & 0xf8;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  memset(param_2 + 0x10,0,0x100);
  param_2[0xe0] = 0xff;
  param_2[0xe1] = 0xff;
  param_2[0xe2] = 0xff;
  param_2[0xe3] = 0xff;
  param_2[0xb4] = 0xff;
  param_2[0xb5] = 0xff;
  param_2[0xb6] = 0xff;
  param_2[0xb7] = 0xff;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0x80;
  param_2[0x17] = 0x3f;
  return;
}



// FUNCTION 1479acf18 FUN_1479acf18 body=66 status=ok
// SIG undefined FUN_1479acf18(void)

void FUN_1479acf18(undefined8 param_1,byte *param_2)

{
  *param_2 = *param_2 & 0xf8;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  memset(param_2 + 0x10,0,0x100);
  param_2[0xe0] = 0xff;
  param_2[0xe1] = 0xff;
  param_2[0xe2] = 0xff;
  param_2[0xe3] = 0xff;
  param_2[0xb4] = 0xff;
  param_2[0xb5] = 0xff;
  param_2[0xb6] = 0xff;
  param_2[0xb7] = 0xff;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0x80;
  param_2[0x17] = 0x3f;
  return;
}



// FUNCTION 1479acf72 FUN_1479acf72 body=68 status=ok
// SIG undefined FUN_1479acf72(void)

undefined8 FUN_1479acf72(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x110);
      lVar1 = lVar1 + 0x110;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1479acfde FUN_1479acfde body=59 status=ok
// SIG undefined FUN_1479acfde(void)

undefined8 FUN_1479acfde(longlong *param_1)

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



// FUNCTION 1479ad08c FUN_1479ad08c body=79 status=ok
// SIG undefined FUN_1479ad08c(void)

undefined8 * FUN_1479ad08c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1479ad0dc(param_1,iVar1);
      FUN_14011d00d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1479ad0dc FUN_1479ad0dc body=118 status=ok
// SIG undefined FUN_1479ad0dc(void)

void FUN_1479ad0dc(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x108,8);
    iVar2 = (int)(uVar1 / 0x108);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x108,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1479ad152 FUN_1479ad152 body=38 status=ok
// SIG undefined FUN_1479ad152(void)

undefined8 FUN_1479ad152(undefined8 param_1,int param_2)

{
  FUN_1479a6e1e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479ad17a FUN_1479ad17a body=29 status=ok
// SIG undefined FUN_1479ad17a(void)

undefined8 FUN_1479ad17a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479ad1a6 FUN_1479ad1a6 body=29 status=ok
// SIG undefined FUN_1479ad1a6(void)

undefined8 FUN_1479ad1a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479ad1ce FUN_1479ad1ce body=350 status=ok
// SIG undefined FUN_1479ad1ce(void)

undefined4 * FUN_1479ad1ce(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1479ad32e(param_1,local_38);
  puVar1 = (undefined8 *)param_3[1];
  *local_30 = *(undefined8 *)*param_3;
  local_30[1] = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_30 + 2) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_30 + 0x14) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  FUN_14023423e(local_30 + 3,puVar1 + 2);
  local_30[5] = puVar1[4];
  *(undefined1 *)(local_30 + 6) = *(undefined1 *)(puVar1 + 5);
  *(undefined4 *)(local_30 + 7) = 0xffffffff;
  uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar6 = 1;
  if (3 < uVar4) {
    uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
    lVar5 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iVar6 = 1 << ((byte)lVar5 & 0x1f);
  }
  uVar2 = *local_30;
  if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
    uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
    uVar7 = (uint)uVar2 & 0xffff;
    uVar4 = *(int *)(param_1 + 0x48) - 1U &
            (uVar7 >> 4) +
            ((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
            (uVar4 << 0x13 | uVar4 & 0xffff);
    *(uint *)((longlong)local_30 + 0x3c) = uVar4;
    lVar5 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar5 = param_1 + 0x38;
    }
    *(undefined4 *)(local_30 + 7) =
         *(undefined4 *)
          (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
    lVar5 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar5 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4) =
         local_38[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar6;
    FUN_1479ad414(param_1);
  }
  *param_2 = local_38[0];
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ad32e FUN_1479ad32e body=229 status=ok
// SIG undefined FUN_1479ad32e(void)

int * FUN_1479ad32e(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 1479ad414 FUN_1479ad414 body=476 status=ok
// SIG undefined FUN_1479ad414(void)

void FUN_1479ad414(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
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
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x40;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x3c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x38 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479ad5f2 FUN_1479ad5f2 body=301 status=ok
// SIG undefined FUN_1479ad5f2(void)

undefined4 * FUN_1479ad5f2(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1479ad32e(param_1,local_38);
  uVar1 = param_3[1];
  *local_30 = *(undefined8 *)*param_3;
  FUN_1479ad720(local_30 + 1,uVar1);
  *(undefined4 *)(local_30 + 7) = 0xffffffff;
  uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar5 = 1;
  if (3 < uVar3) {
    uVar2 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar5 = 1 << ((byte)lVar4 & 0x1f);
  }
  uVar1 = *local_30;
  if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
    uVar3 = (uint)((ulonglong)uVar1 >> 0x10);
    uVar6 = (uint)uVar1 & 0xffff;
    uVar3 = *(int *)(param_1 + 0x48) - 1U &
            (uVar6 >> 4) +
            ((uint)uVar1 << 0x10 | uVar6) + (int)((ulonglong)uVar1 >> 0x20) +
            (uVar3 << 0x13 | uVar3 & 0xffff);
    *(uint *)((longlong)local_30 + 0x3c) = uVar3;
    lVar4 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar4 = param_1 + 0x38;
    }
    *(undefined4 *)(local_30 + 7) =
         *(undefined4 *)
          (lVar4 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
    lVar4 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar4 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar4 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4) =
         local_38[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar5;
    FUN_1479ad414(param_1);
  }
  *param_2 = local_38[0];
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ad720 FUN_1479ad720 body=128 status=ok
// SIG undefined FUN_1479ad720(void)

undefined8 * FUN_1479ad720(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  
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
  plVar2 = (longlong *)param_2[2];
  param_1[2] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



// FUNCTION 1479ad7a0 FUN_1479ad7a0 body=320 status=ok
// SIG undefined FUN_1479ad7a0(void)

void FUN_1479ad7a0(undefined8 param_1,longlong *param_2,char param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *param_2;
  if (lVar3 != 0) {
    lVar1 = FUN_144a78d6a();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar3 = *param_2;
      goto LAB_1479ad7f8;
    }
  }
  lVar3 = 0;
LAB_1479ad7f8:
  lVar2 = FUN_144a78d6a();
  lVar1 = *param_2;
  if (lVar3 == lVar2) {
    if (param_3 == '\0') {
      local_40 = lVar1;
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      FUN_1479adbb2(param_1,&local_40,param_4);
    }
    else {
      local_38 = lVar1;
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      FUN_1479ad942(param_1,&local_38,param_4);
    }
  }
  else if (param_3 == '\0') {
    local_50 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_1479adfd2(param_1,&local_50,param_4);
  }
  else {
    local_48 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_1479adcec(param_1,&local_48,param_4);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ad8e2 FUN_1479ad8e2 body=96 status=ok
// SIG undefined FUN_1479ad8e2(void)

void FUN_1479ad8e2(longlong param_1,int param_2)

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



// FUNCTION 1479ad942 FUN_1479ad942 body=623 status=ok
// SIG undefined FUN_1479ad942(void)

void FUN_1479ad942(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar10 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar10;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar9 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar9) || (uStack_130 != lVar10)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_1479ae18e(param_3,iVar2);
        }
        *(longlong **)(*param_3 + (longlong)iVar2 * 8) = plVar3;
        lVar7 = FUN_144a7f016();
        if (((*(int *)(lVar7 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
             == lVar7 + 0x30)) &&
           (lVar7 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar7 != 0)) {
          lVar11 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar8 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar8 = local_118;
          }
          *(longlong *)(puVar8 + lVar11 * 8) = lVar7;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar10 || iStack_144 != iVar9));
    lVar10 = (longlong)(int)local_50;
    puVar8 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar8 = local_58;
    }
    if (lVar10 != 0) {
      lVar7 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar8 + lVar7);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1479ad942(uVar4,&local_168,param_3);
        lVar7 = lVar7 + 8;
      } while (lVar10 * 8 != lVar7);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479adbb2 FUN_1479adbb2 body=312 status=ok
// SIG undefined FUN_1479adbb2(void)

void FUN_1479adbb2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
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
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = *(int *)(param_1 + 0x268);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar5) || (uStack_58 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x10);
      if (lVar4 != 0) {
        iVar3 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
          FUN_1479ae18e(param_3,iVar3);
        }
        *(longlong *)(*param_3 + (longlong)iVar3 * 8) = lVar4;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar5));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479adcec FUN_1479adcec body=741 status=ok
// SIG undefined FUN_1479adcec(void)

void FUN_1479adcec(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar12 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar12;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar11 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar11) || (uStack_130 != lVar12)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        lVar8 = *param_2;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_1479ade10:
          lVar7 = FUN_144a78d6a();
          if ((lVar7 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar7 + 0x38))) goto LAB_1479ade24;
          lVar9 = 0;
          if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30) {
            lVar9 = lVar8;
          }
        }
        else {
          if (lVar8 != 0) goto LAB_1479ade10;
LAB_1479ade24:
          lVar9 = 0;
        }
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
            lVar9 + 0x30)) {
          iVar2 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
            FUN_1479ae18e(param_3,iVar2);
          }
          *(longlong **)(*param_3 + (longlong)iVar2 * 8) = plVar3;
        }
        lVar8 = FUN_144a7f016();
        if (((*(int *)(lVar8 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
             == lVar8 + 0x30)) &&
           (lVar8 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar8 != 0)) {
          lVar7 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar10 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar10 = local_118;
          }
          *(longlong *)(puVar10 + lVar7 * 8) = lVar8;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar12 || iStack_144 != iVar11));
    lVar12 = (longlong)(int)local_50;
    puVar10 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar10 = local_58;
    }
    if (lVar12 != 0) {
      lVar8 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar10 + lVar8);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1479adcec(uVar4,&local_168,param_3);
        lVar8 = lVar8 + 8;
      } while (lVar12 * 8 != lVar8);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479adfd2 FUN_1479adfd2 body=442 status=ok
// SIG undefined FUN_1479adfd2(void)

void FUN_1479adfd2(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
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
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(param_1 + 0x268);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar8) || (uStack_60 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_90 + (longlong)iStack_74 * 0x10);
      if (lVar4 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_1479ae0ea:
          lVar6 = FUN_144a78d6a();
          if ((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_1479ae102;
          lVar7 = 0;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30) {
            lVar7 = lVar5;
          }
        }
        else {
          if (lVar5 != 0) goto LAB_1479ae0ea;
LAB_1479ae102:
          lVar7 = 0;
        }
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          iVar3 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
            FUN_1479ae18e(param_3,iVar3);
          }
          *(longlong *)(*param_3 + (longlong)iVar3 * 8) = lVar4;
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar8));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479ae18e FUN_1479ae18e body=132 status=ok
// SIG undefined FUN_1479ae18e(void)

void FUN_1479ae18e(longlong param_1,int param_2)

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



// FUNCTION 1479ae214 FUN_1479ae214 body=31 status=ok
// SIG undefined FUN_1479ae214(void)

undefined8 FUN_1479ae214(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479ae24e FUN_1479ae24e body=93 status=ok
// SIG undefined FUN_1479ae24e(void)

void FUN_1479ae24e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a8197f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1479ae2ac FUN_1479ae2ac body=93 status=ok
// SIG undefined FUN_1479ae2ac(void)

void FUN_1479ae2ac(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a8197f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1479ae30a FUN_1479ae30a body=126 status=ok
// SIG undefined FUN_1479ae30a(void)

void FUN_1479ae30a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a8197f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001479ae379. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1479ae388 FUN_1479ae388 body=35 status=ok
// SIG undefined FUN_1479ae388(void)

void FUN_1479ae388(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001479ae3a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 1479ae3ac FUN_1479ae3ac body=62 status=ok
// SIG undefined FUN_1479ae3ac(void)

void FUN_1479ae3ac(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1479ae3ea(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 1479ae3ea FUN_1479ae3ea body=112 status=ok
// SIG undefined FUN_1479ae3ea(void)

ulonglong FUN_1479ae3ea(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1479ae424;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_1479ae424:
  return param_2 & 0xffffffff;
}



// FUNCTION 1479ae45a FUN_1479ae45a body=147 status=ok
// SIG undefined FUN_1479ae45a(void)

void FUN_1479ae45a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1479ae4ee FUN_1479ae4ee body=133 status=ok
// SIG undefined FUN_1479ae4ee(void)

longlong FUN_1479ae4ee(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1479ae574();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x20;
    if (lVar3 + lVar2 != 0) goto LAB_1479ae527;
  }
  local_30 = param_3;
  FUN_1479ae684(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 << 5;
LAB_1479ae527:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ae574 FUN_1479ae574 body=271 status=ok
// SIG undefined FUN_1479ae574(void)

int FUN_1479ae574(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    for (iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x18 + (longlong)iVar1 * 0x20)) {
      lVar4 = *param_3;
      if ((lVar4 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar4);
      }
      lVar5 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x20);
      if (((DAT_14c950c29 & 1) == 0) || (lVar5 == 0)) {
        if (lVar5 != 0) goto LAB_1479ae5f8;
LAB_1479ae61a:
        lVar5 = 0;
      }
      else {
        FUN_1456cec3c(lVar5);
LAB_1479ae5f8:
        lVar3 = FUN_1411080a4();
        if (((lVar3 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar3 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
            lVar3 + 0x30)) goto LAB_1479ae61a;
      }
      if (((lVar4 == 0) || (lVar3 = FUN_1411080a4(), lVar3 == 0)) ||
         ((*(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
           lVar3 + 0x30)))) {
        lVar4 = 0;
      }
      if (lVar5 == lVar4) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 1479ae684 FUN_1479ae684 body=296 status=ok
// SIG undefined FUN_1479ae684(void)

undefined4 * FUN_1479ae684(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1479ae7ae(param_1,local_40);
  lVar5 = *(longlong *)*param_4;
  *local_38 = lVar5;
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_38[1] = 0;
  local_38[2] = 0;
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  cVar1 = FUN_1479ae894(param_1,param_3,local_38);
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
      *(uint *)((longlong)local_38 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_40[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1479aeb20(param_1);
    }
  }
  *param_2 = local_40[0];
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ae7ae FUN_1479ae7ae body=229 status=ok
// SIG undefined FUN_1479ae7ae(void)

int * FUN_1479ae7ae(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1479ae894 FUN_1479ae894 body=196 status=ok
// SIG undefined FUN_1479ae894(void)

undefined8 FUN_1479ae894(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_38 = *param_3;
    if ((local_38 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar6 = FUN_1479ae95a(param_1,param_2,&local_38);
    if (iVar6 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar6 * 0x20) != 0) {
        FUN_1400020a8();
      }
      lVar4 = *param_3;
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      lVar5 = param_3[1];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(longlong *)(puVar1 + 4) = param_3[2];
      *puVar1 = (int)lVar4;
      puVar1[1] = uVar2;
      puVar1[2] = (int)lVar5;
      puVar1[3] = uVar3;
      FUN_1479aea6a(param_1,*param_4);
      *param_4 = iVar6;
      uVar7 = 1;
      goto LAB_1479ae8ba;
    }
  }
  uVar7 = 0;
LAB_1479ae8ba:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ae95a FUN_1479ae95a body=271 status=ok
// SIG undefined FUN_1479ae95a(void)

int FUN_1479ae95a(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    for (iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x18 + (longlong)iVar1 * 0x20)) {
      lVar4 = *param_3;
      if ((lVar4 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar4);
      }
      lVar5 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x20);
      if (((DAT_14c950c29 & 1) == 0) || (lVar5 == 0)) {
        if (lVar5 != 0) goto LAB_1479ae9de;
LAB_1479aea00:
        lVar5 = 0;
      }
      else {
        FUN_1456cec3c(lVar5);
LAB_1479ae9de:
        lVar3 = FUN_1411080a4();
        if (((lVar3 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar3 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
            lVar3 + 0x30)) goto LAB_1479aea00;
      }
      if (((lVar4 == 0) || (lVar3 = FUN_1411080a4(), lVar3 == 0)) ||
         ((*(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
           lVar3 + 0x30)))) {
        lVar4 = 0;
      }
      if (lVar5 == lVar4) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 1479aea6a FUN_1479aea6a body=114 status=ok
// SIG undefined FUN_1479aea6a(void)

void FUN_1479aea6a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 1479aeadc FUN_1479aeadc body=68 status=ok
// SIG undefined FUN_1479aeadc(void)

void FUN_1479aeadc(longlong param_1,uint param_2)

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
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_1479aeb20(param_1);
  return;
}



// FUNCTION 1479aeb20 FUN_1479aeb20 body=510 status=ok
// SIG undefined FUN_1479aeb20(void)

void FUN_1479aeb20(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
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
  uVar2 = local_70;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
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
    uVar2 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar8 = local_70._4_4_;
      local_70 = uVar2;
      do {
        lVar9 = *local_88;
        uVar6 = *(ulonglong *)(lVar9 + (longlong)iVar8 * 0x20);
        if ((DAT_14c950c29 == '\x01') && (uVar6 != 0)) {
          FUN_1456cec3c(uVar6);
        }
        lVar9 = lVar9 + (longlong)iVar8 * 0x20;
        uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar9 + 0x1c) = iVar5;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar9 + 0x18) =
             *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(int *)((longlong)plVar4 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar8;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar8 = local_70._4_4_;
        uVar2 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479aed20 FUN_1479aed20 body=132 status=ok
// SIG undefined FUN_1479aed20(void)

void FUN_1479aed20(longlong param_1,int param_2)

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



// FUNCTION 1479aeda6 FUN_1479aeda6 body=62 status=ok
// SIG undefined FUN_1479aeda6(void)

void FUN_1479aeda6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1479aede4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1479aede4 FUN_1479aede4 body=93 status=ok
// SIG undefined FUN_1479aede4(void)

ulonglong FUN_1479aede4(uint param_1,uint param_2)

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



// FUNCTION 1479aee42 FUN_1479aee42 body=90 status=ok
// SIG undefined FUN_1479aee42(void)

void FUN_1479aee42(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_1479aee9c();
  return;
}



// FUNCTION 1479aee9c FUN_1479aee9c body=52 status=ok
// SIG undefined FUN_1479aee9c(void)

void FUN_1479aee9c(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 8 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_1479aea6a(param_1,param_2);
  return;
}



// FUNCTION 1479aeed0 FUN_1479aeed0 body=105 status=ok
// SIG undefined FUN_1479aeed0(void)

void FUN_1479aeed0(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  lVar3 = 0;
  bVar2 = DAT_14c950c29;
  do {
    lVar1 = *(longlong *)(param_2 + lVar3);
    *(longlong *)(param_1 + lVar3) = lVar1;
    if ((lVar1 != 0 & bVar2) == 1) {
      FUN_1456cec3c();
      bVar2 = DAT_14c950c29;
    }
    *(undefined1 *)(param_1 + lVar3 + 0x10) = *(undefined1 *)(param_2 + lVar3 + 0x10);
    *(undefined8 *)(param_1 + lVar3 + 8) = *(undefined8 *)(param_2 + lVar3 + 8);
    lVar3 = lVar3 + 0x18;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1479aef3a FUN_1479aef3a body=48 status=ok
// SIG undefined FUN_1479aef3a(void)

void FUN_1479aef3a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1479aef6a FUN_1479aef6a body=132 status=ok
// SIG undefined FUN_1479aef6a(void)

void FUN_1479aef6a(longlong param_1,int param_2)

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



// FUNCTION 1479aeff0 FUN_1479aeff0 body=146 status=ok
// SIG undefined FUN_1479aeff0(void)

void FUN_1479aeff0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xd0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xd0)) {
      uVar5 = uVar4 / 0xd0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xd0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1479af084 FUN_1479af084 body=112 status=ok
// SIG undefined FUN_1479af084(void)

void FUN_1479af084(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xd0,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xd0)) {
      uVar2 = uVar1 / 0xd0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xd0,8);
  }
  return;
}



// FUNCTION 1479af0f4 FUN_1479af0f4 body=62 status=ok
// SIG undefined FUN_1479af0f4(void)

void FUN_1479af0f4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1479af132(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xd0,8);
  }
  return;
}



// FUNCTION 1479af132 FUN_1479af132 body=110 status=ok
// SIG undefined FUN_1479af132(void)

ulonglong FUN_1479af132(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xd0) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1479af16b;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xd0,8);
      param_2 = param_2 / 0xd0;
    }
  }
LAB_1479af16b:
  return param_2 & 0xffffffff;
}



// FUNCTION 1479af1a0 FUN_1479af1a0 body=79 status=ok
// SIG undefined FUN_1479af1a0(void)

void FUN_1479af1a0(longlong param_1,int param_2)

{
  void *_Dst;
  
  if (param_2 != 0) {
    _Dst = (void *)(param_1 + 8);
    do {
      memset(_Dst,0,0x100);
      *(undefined4 *)((longlong)_Dst + 0xd0) = 0xffffffff;
      *(undefined4 *)((longlong)_Dst + 4) = 0x3f800000;
      *(undefined4 *)((longlong)_Dst + 0xa4) = 0xffffffff;
      _Dst = (void *)((longlong)_Dst + 0x108);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1479af1f0 FUN_1479af1f0 body=74 status=ok
// SIG undefined FUN_1479af1f0(void)

void FUN_1479af1f0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1479af23a(param_1,*(undefined4 *)(param_1 + 800),*(undefined4 *)(param_1 + 0x324));
  if (iVar1 == *(int *)(param_1 + 0x324)) {
    return;
  }
  *(int *)(param_1 + 0x324) = iVar1;
  FUN_14011d28a(param_1,*(undefined4 *)(param_1 + 800),iVar1,0x108);
  return;
}



// FUNCTION 1479af23a FUN_1479af23a body=109 status=ok
// SIG undefined FUN_1479af23a(void)

ulonglong FUN_1479af23a(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = 3;
  if (3 < param_2) {
    if ((int)(param_3 - param_2) < 0x41) {
      uVar1 = (ulonglong)param_3;
    }
    else {
      uVar1 = (ulonglong)param_3;
      if (0x3fff < (ulonglong)((longlong)(int)(param_3 - param_2) * 0x108)) {
        if ((int)param_2 < 1) {
          uVar1 = (ulonglong)param_2;
        }
        else {
          uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x108,0);
          uVar1 = uVar1 / 0x108;
        }
      }
    }
  }
  return uVar1;
}



// FUNCTION 1479af2a8 FUN_1479af2a8 body=139 status=ok
// SIG undefined FUN_1479af2a8(void)

undefined8 FUN_1479af2a8(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = **(longlong **)(param_2 + 8);
  if (lVar2 == 0) {
    uVar4 = FUN_14001cc68(0x370,0x10);
    FUN_1479af334(uVar4);
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1479af3f0(param_1,iVar1);
    }
    *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar4;
    uVar4 = *(undefined8 *)(*param_1 + (longlong)((int)param_1[1] + -1) * 8);
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + 8);
    lVar3 = *(longlong *)(param_2 + 8);
    *(longlong *)(param_2 + 8) = lVar2;
    *(undefined8 *)(lVar2 + 8) = 0;
    if (lVar3 != 0) {
      FUN_1400020a8();
    }
  }
  return uVar4;
}



// FUNCTION 1479af334 FUN_1479af334 body=187 status=ok
// SIG undefined FUN_1479af334(void)

undefined8 * FUN_1479af334(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[2] = 0xbff0000000000000;
  *param_1 = &PTR_FUN_14a8199b8;
  *(byte *)(param_1 + 0x26) = *(byte *)(param_1 + 0x26) & 0xf8;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  memset(param_1 + 0x28,0,0x100);
  *(undefined4 *)(param_1 + 0x42) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x66) = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x351) = 0;
  *(undefined8 *)((longlong)param_1 + 0x359) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *puVar1 = &PTR_FUN_14a8199c0;
  param_1[0x6b] = puVar1;
  return param_1;
}



// FUNCTION 1479af3f0 FUN_1479af3f0 body=132 status=ok
// SIG undefined FUN_1479af3f0(void)

void FUN_1479af3f0(longlong param_1,int param_2)

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



// FUNCTION 1479af476 FUN_1479af476 body=82 status=ok
// SIG undefined FUN_1479af476(void)

undefined8 * FUN_1479af476(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a8199b8;
  puVar1 = (undefined8 *)param_1[0x6b];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[0x69] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


