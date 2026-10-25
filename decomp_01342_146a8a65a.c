// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146a8a65a FUN_146a8a65a body=518 status=ok
// SIG undefined FUN_146a8a65a(void)

void FUN_146a8a65a(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  char local_84;
  undefined1 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined1 *)(param_1 + 0x268) = *(undefined1 *)(param_2 + 0x1e8);
  *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_2 + 0x270);
  local_9c = *(undefined1 *)(param_2 + 500);
  local_a0 = *(undefined4 *)(param_2 + 0x1f0);
  local_98 = 0;
  local_90 = 0;
  FUN_140a52b3c(&local_98,param_2 + 0x1f8);
  FUN_140a5e0d2(param_1 + 0x278,param_1,&local_a0);
  FUN_1449db362(&local_98);
  local_84 = *(char *)(param_2 + 0x20c);
  if (local_84 == '\x01') {
    local_88 = *(undefined4 *)(param_2 + 0x208);
  }
  local_80 = *(undefined1 *)(param_2 + 0x210);
  local_78 = 0;
  local_70 = 0;
  FUN_146aa7480(&local_78,param_2 + 0x218);
  FUN_146a8a976(param_1 + 0x27c,param_1,&local_88);
  FUN_1449db362(&local_78);
  if (local_84 == '\x01') {
    local_84 = '\0';
  }
  local_48 = *(undefined1 *)(param_2 + 0x250);
  local_68 = *(undefined4 *)(param_2 + 0x230);
  uStack_64 = *(undefined4 *)(param_2 + 0x234);
  uStack_60 = *(undefined4 *)(param_2 + 0x238);
  uStack_5c = *(undefined4 *)(param_2 + 0x23c);
  local_58 = *(undefined4 *)(param_2 + 0x240);
  uStack_54 = *(undefined4 *)(param_2 + 0x244);
  uStack_50 = *(undefined4 *)(param_2 + 0x248);
  uStack_4c = *(undefined4 *)(param_2 + 0x24c);
  local_40 = 0;
  local_38 = 0;
  FUN_146a76352(&local_40,param_2 + 600);
  FUN_146a8ab12(param_1 + 0x290,param_1,&local_68);
  FUN_1449db362(&local_40);
  *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_2 + 0x1b8);
  *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_2 + 0x1bc);
  local_b8 = *(undefined1 *)(param_2 + 0x1d0);
  local_c8 = *(undefined4 *)(param_2 + 0x1c0);
  uStack_c4 = *(undefined4 *)(param_2 + 0x1c4);
  uStack_c0 = *(undefined4 *)(param_2 + 0x1c8);
  uStack_bc = *(undefined4 *)(param_2 + 0x1cc);
  local_b0 = 0;
  local_a8 = 0;
  FUN_140a58be0(&local_b0,param_2 + 0x1d8);
  uVar1 = FUN_140a58d14(param_1 + 0x218,&local_c8);
  FUN_140a58896(uVar1,param_2 + 0x1a8);
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xfb;
  FUN_144a88240(param_1 + 0x18,param_1);
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a8a862 FUN_146a8a862 body=43 status=ok
// SIG undefined FUN_146a8a862(void)

void FUN_146a8a862(longlong param_1,longlong param_2)

{
  FUN_140a5e0d2(param_1 + 0x278,param_1,param_2);
  FUN_1449db362(param_2 + 8);
  return;
}



// FUNCTION 146a8a88e FUN_146a8a88e body=51 status=ok
// SIG undefined FUN_146a8a88e(void)

void FUN_146a8a88e(longlong param_1,longlong param_2)

{
  FUN_146a8a976(param_1 + 0x27c,param_1,param_2);
  FUN_1449db362(param_2 + 0x10);
  if (*(char *)(param_2 + 4) == '\x01') {
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 146a8a8c2 FUN_146a8a8c2 body=43 status=ok
// SIG undefined FUN_146a8a8c2(void)

void FUN_146a8a8c2(longlong param_1,longlong param_2)

{
  FUN_146a8ab12(param_1 + 0x290,param_1,param_2);
  FUN_1449db362(param_2 + 0x28);
  return;
}



// FUNCTION 146a8a8ee FUN_146a8a8ee body=114 status=ok
// SIG undefined FUN_146a8a8ee(void)

void FUN_146a8a8ee(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_14149270a(param_1 + 0x1f8);
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x208) = uVar3;
  *(longlong *)(param_1 + 0x210) = lVar4;
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
  FUN_140a5503c(param_1 + 0x1f8);
  return;
}



// FUNCTION 146a8a960 FUN_146a8a960 body=22 status=ok
// SIG undefined FUN_146a8a960(void)

void FUN_146a8a960(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x268) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x268) = param_2;
  FUN_140163244(param_1,2);
  return;
}



// FUNCTION 146a8a976 FUN_146a8a976 body=368 status=ok
// SIG undefined FUN_146a8a976(void)

void FUN_146a8a976(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  byte bVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_3 + 4) != (longlong *)0x0 && param_3[6] != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 4) + 0x30))();
    if (cVar1 != '\0') {
      *(undefined1 *)(param_3 + 2) = 0;
      if (*(longlong **)(param_3 + 4) == (longlong *)0x0 || param_3[6] == 0) {
LAB_146a8aac8:
        local_40._0_5_ = CONCAT14(*(char *)(param_3 + 1),(undefined4)local_40);
        if (*(char *)(param_3 + 1) == '\x01') {
          local_40 = CONCAT44(local_40._4_4_,*param_3);
        }
        local_30 = 0;
      }
      else {
        cVar1 = (**(code **)(**(longlong **)(param_3 + 4) + 0x30))();
        if (cVar1 == '\0') goto LAB_146a8aac8;
        local_40 = *(undefined8 *)(param_3 + 4);
        *(undefined8 *)(param_3 + 4) = 0;
        local_38 = param_3[6];
        param_3[6] = 0;
        local_30 = 1;
      }
      FUN_146abe750(param_1,param_2,&local_40);
      bVar2 = local_30;
      goto LAB_146a8aa55;
    }
  }
  if (*(char *)(param_3 + 2) != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  *(undefined1 *)(param_3 + 2) = 0;
  if (*(longlong **)(param_3 + 4) == (longlong *)0x0 || param_3[6] == 0) {
LAB_146a8aa27:
    local_40._0_5_ = CONCAT14(*(char *)(param_3 + 1),(undefined4)local_40);
    if (*(char *)(param_3 + 1) == '\x01') {
      local_40 = CONCAT44(local_40._4_4_,*param_3);
    }
    bVar2 = 0;
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 4) + 0x30))();
    if (cVar1 == '\0') goto LAB_146a8aa27;
    local_40 = *(undefined8 *)(param_3 + 4);
    *(undefined8 *)(param_3 + 4) = 0;
    local_38 = param_3[6];
    param_3[6] = 0;
    bVar2 = 1;
  }
  local_30 = bVar2;
  FUN_146abe7ee(param_1,param_2,&local_40);
LAB_146a8aa55:
  (*(code *)(&PTR_LAB_149f18f50)[bVar2])(&local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a8aafa FUN_146a8aafa body=24 status=ok
// SIG undefined FUN_146a8aafa(void)

void FUN_146a8aafa(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x270) != param_2) {
    *(longlong *)(param_1 + 0x270) = param_2;
    FUN_140163244(param_1,2);
    return;
  }
  return;
}



// FUNCTION 146a8ab12 FUN_146a8ab12 body=360 status=ok
// SIG undefined FUN_146a8ab12(void)

void FUN_146a8ab12(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  byte local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong *)param_3[5] != (longlong *)0x0 && *(int *)(param_3 + 6) != 0) {
    cVar1 = (**(code **)(*(longlong *)param_3[5] + 0x30))();
    if (cVar1 != '\0') {
      *(undefined1 *)(param_3 + 4) = 0;
      if ((longlong *)param_3[5] == (longlong *)0x0 || *(int *)(param_3 + 6) == 0) {
LAB_146a8ac5f:
        local_58 = *param_3;
        uStack_50 = *(undefined4 *)(param_3 + 1);
        uStack_4c = *(undefined4 *)((longlong)param_3 + 0xc);
        local_48 = param_3[2];
        uStack_40 = param_3[3];
        local_38 = 0;
      }
      else {
        cVar1 = (**(code **)(*(longlong *)param_3[5] + 0x30))();
        if (cVar1 == '\0') goto LAB_146a8ac5f;
        local_58 = param_3[5];
        param_3[5] = 0;
        uStack_50 = *(undefined4 *)(param_3 + 6);
        *(undefined4 *)(param_3 + 6) = 0;
        local_38 = 1;
      }
      FUN_146abea4a(param_1,param_2,&local_58);
      goto LAB_146a8abe9;
    }
  }
  if (*(char *)(param_3 + 4) != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
  }
  *(undefined1 *)(param_3 + 4) = 0;
  if ((longlong *)param_3[5] == (longlong *)0x0 || *(int *)(param_3 + 6) == 0) {
LAB_146a8abc0:
    local_58 = *param_3;
    uStack_50 = *(undefined4 *)(param_3 + 1);
    uStack_4c = *(undefined4 *)((longlong)param_3 + 0xc);
    local_48 = param_3[2];
    uStack_40 = param_3[3];
    local_38 = 0;
  }
  else {
    cVar1 = (**(code **)(*(longlong *)param_3[5] + 0x30))();
    if (cVar1 == '\0') goto LAB_146a8abc0;
    local_58 = param_3[5];
    param_3[5] = 0;
    uStack_50 = *(undefined4 *)(param_3 + 6);
    *(undefined4 *)(param_3 + 6) = 0;
    local_38 = 1;
  }
  FUN_146a760ea(param_1,param_2,&local_58);
LAB_146a8abe9:
  (*(code *)(&PTR_LAB_149f18f60)[local_38])(&local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a8ac8e FUN_146a8ac8e body=29 status=ok
// SIG undefined FUN_146a8ac8e(void)

void FUN_146a8ac8e(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x228) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x228) = param_2;
  FUN_14156c56c(param_1 + 0x1f8,1);
  return;
}



// FUNCTION 146a8acac FUN_146a8acac body=29 status=ok
// SIG undefined FUN_146a8acac(void)

void FUN_146a8acac(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x22c) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x22c) = param_2;
  FUN_14156c56c(param_1 + 0x1f8,1);
  return;
}



// FUNCTION 146a8acca FUN_146a8acca body=125 status=ok
// SIG undefined FUN_146a8acca(void)

void FUN_146a8acca(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28 = *(undefined1 *)(param_2 + 4);
  local_20 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 6) = 0;
  local_18 = param_2[8];
  param_2[8] = 0;
  FUN_140a58d14(param_1 + 0x218,&local_38);
  FUN_1449db362(param_2 + 6);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a8ad48 FUN_146a8ad48 body=1394 status=ok
// SIG undefined FUN_146a8ad48(void)

void FUN_146a8ad48(longlong param_1,undefined8 param_2,float *param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,float *param_7,char param_8)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  sbyte sVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  float *local_140;
  float *local_138;
  char local_130;
  uint local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  undefined8 local_c8;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined8 local_9c;
  byte local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (DAT_14c75ef5c != 0) {
    fVar16 = *param_3;
    if (param_3[1] <= *param_3) {
      fVar16 = param_3[1];
    }
    if (0.0 < fVar16) {
      if (DAT_14c98f130 == 1) {
        lVar9 = *(longlong *)(param_1 + 0x270);
        if ((lVar9 != 0) && (*(char *)(lVar9 + 0x1c) != '\0')) {
          cVar12 = ' ';
          if (param_8 != '\0') {
            cVar12 = (*(byte *)(param_1 + 0x3a) ^ 1) << 5;
          }
          pfVar5 = (float *)(lVar9 + 8);
          cVar1 = *(char *)(lVar9 + 0x18);
          if (cVar1 != '\0') {
            if (cVar1 == '\x01') {
              pfVar5 = (float *)FUN_1400c06fe(pfVar5);
              lVar9 = *(longlong *)(param_1 + 0x270);
            }
            else if (cVar1 == '\x03') {
              pfVar5 = param_7 + 8;
            }
            else {
              pfVar5 = param_7 + 4;
            }
          }
          local_fc = pfVar5[3] * param_7[3];
          local_100 = pfVar5[2] * param_7[2];
          local_104 = pfVar5[1] * param_7[1];
          local_108 = *pfVar5 * *param_7;
          local_140 = &local_108;
          local_c8 = *(undefined8 *)(param_3 + 3);
          local_c0 = param_3[2];
          fStack_bc = 0.0;
          fStack_b8 = 0.0;
          fStack_b4 = (float)*(undefined8 *)param_3;
          uStack_b0 = (undefined4)((ulonglong)*(undefined8 *)param_3 >> 0x20);
          uStack_ac = *(undefined8 *)(param_3 + 7);
          uStack_a4 = *(undefined8 *)(param_3 + 9);
          local_9c = *(undefined8 *)(param_3 + 0xb);
          local_94 = *(char *)(param_3 + 0xd) * '\x02' & 2;
          local_148 = CONCAT71(local_148._1_7_,cVar12);
          FUN_140239bd2(param_5,param_6,&local_c8,lVar9);
          param_6 = param_6 + 1;
        }
      }
      else {
        if (*(char *)(param_1 + 0x268) == '\0') {
          fVar16 = 1.0;
        }
        else {
          fVar16 = param_7[3];
        }
        fVar16 = fVar16 * *(float *)(param_1 + 0x278);
        if (0.0 < fVar16) {
          fVar15 = param_3[8] * 0.0;
          fStack_b4 = param_3[10] * param_3[1] + fVar15;
          fVar14 = param_3[7] * 0.0;
          fStack_b8 = param_3[1] * param_3[9] + fVar14;
          fVar13 = param_3[10] * 0.0;
          fStack_bc = *param_3 * param_3[8] + fVar13;
          fVar17 = param_3[9] * 0.0;
          local_c0 = *param_3 * param_3[7] + fVar17;
          local_c8 = CONCAT44(fVar13 + fVar15 + param_3[0xc],fVar17 + fVar14 + param_3[0xb]);
          FUN_144b01024(&local_c8,&local_d8);
          local_c0 = param_3[2];
          local_c8 = CONCAT44(local_d4,local_d8);
          fStack_b8 = local_cc - local_d4;
          fStack_bc = local_d0 - local_d8;
          fStack_b4 = 0.0;
          uStack_b0 = 0;
          uStack_ac = 0x3f800000;
          uStack_a4 = 0x3f80000000000000;
          local_9c = 0;
          local_94 = (local_94 & 0xfc) + 1;
          if (*(char *)(param_1 + 0x280) == '\x01') {
            uVar3 = *(uint *)(param_1 + 0x27c);
          }
          else {
            uVar3 = (int)ROUND(fVar16 * 3.0 + fVar16 * 3.0 + 0.5) >> 1;
          }
          iVar11 = (int)ROUND(fStack_bc + fStack_bc + 0.5) >> 1;
          iVar10 = (int)ROUND(fStack_b8 + fStack_b8 + 0.5) >> 1;
          sVar6 = (0x3f < uVar3) + 1;
          if (9 >= (int)uVar3 || DAT_14c75ef64 == 0) {
            sVar6 = 0;
          }
          uVar4 = uVar3 >> sVar6 | 1;
          if ((int)DAT_14c75ef60 <= (int)uVar4) {
            uVar4 = DAT_14c75ef60;
          }
          uVar8 = 3;
          if (3 < (int)uVar4) {
            uVar8 = uVar4;
          }
          iVar7 = (uint)(0x3f < uVar3) * 2 + 2;
          fVar13 = 0.5;
          if (0.5 <= fVar16) {
            fVar13 = fVar16;
          }
          iVar2 = 0;
          if (9 < (int)uVar3 && DAT_14c75ef64 != 0) {
            iVar11 = (iVar7 + iVar11 + -1) / iVar7;
            iVar10 = (iVar10 + iVar7 + -1) / iVar7;
            fVar13 = fVar13 / (float)iVar7;
            iVar2 = iVar7;
          }
          if ((0 < iVar10) && (0 < iVar11)) {
            local_11c = uVar8;
            FUN_1401bbb82(&local_108,param_3);
            FUN_1400d7f4c(param_5,&local_108);
            local_10c = (float)*(double *)(param_1 + 0x2a8);
            local_110 = (float)*(double *)(param_1 + 0x2a0);
            local_114 = (float)*(double *)(param_1 + 0x298);
            local_118 = (float)*(double *)(param_1 + 0x290);
            local_140 = &local_118;
            local_fc = (float)iVar10;
            local_100 = (float)iVar11;
            local_108 = (float)(int)local_11c;
            local_148 = CONCAT44(local_148._4_4_,iVar2);
            local_104 = fVar13;
            FUN_14695525c(param_5,param_6,&local_c8,&local_108);
            FUN_14171ebf2(param_5);
          }
          param_6 = param_6 + 1;
        }
      }
    }
  }
  local_138 = param_7;
  local_140 = (float *)CONCAT44(local_140._4_4_,param_6);
  local_148 = param_5;
  local_130 = param_8;
  FUN_1400c0302(param_1,param_2,param_3,param_4);
  if ((local_90 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a8b2bc FUN_146a8b2bc body=43 status=ok
// SIG undefined FUN_146a8b2bc(void)

void FUN_146a8b2bc(longlong param_1,longlong param_2)

{
  FUN_140a50dd4(param_1 + 0x288,param_1,param_2);
  FUN_1449db362(param_2 + 0x18);
  return;
}



// FUNCTION 146a8b2e8 FUN_146a8b2e8 body=8 status=ok
// SIG undefined FUN_146a8b2e8(void)

longlong FUN_146a8b2e8(longlong param_1)

{
  return param_1 + 0x208;
}



// FUNCTION 146a8b2f0 FUN_146a8b2f0 body=29 status=ok
// SIG undefined FUN_146a8b2f0(void)

void FUN_146a8b2f0(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x228) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x228) = param_2;
  FUN_14156c56c(param_1 + 0x1f8,1);
  return;
}



// FUNCTION 146a8b30e FUN_146a8b30e body=29 status=ok
// SIG undefined FUN_146a8b30e(void)

void FUN_146a8b30e(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x22c) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x22c) = param_2;
  FUN_14156c56c(param_1 + 0x1f8,1);
  return;
}



// FUNCTION 146a8b32c FUN_146a8b32c body=186 status=ok
// SIG undefined FUN_146a8b32c(void)

void FUN_146a8b32c(longlong param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
    if (lVar3 != 0) {
      fVar1 = *(float *)(param_1 + 0xc0);
      if ((fVar1 == param_2) && (!NAN(fVar1) && !NAN(param_2))) {
        return;
      }
      uVar2 = *(uint *)(lVar3 + 0x200);
      lVar4 = *(longlong *)(lVar3 + 0x1f8);
      if ((longlong)(int)uVar2 < 1) {
        uVar7 = 0;
        uVar6 = 0;
      }
      else {
        uVar8 = (ulonglong)uVar2;
        uVar6 = 0;
        do {
          uVar7 = uVar6;
          if (*(longlong *)(lVar4 + uVar6 * 8) == param_1) break;
          uVar6 = uVar6 + 1;
          uVar7 = uVar8;
        } while (uVar8 != uVar6);
        uVar6 = 0;
        do {
          lVar5 = *(longlong *)(lVar4 + uVar6 * 8);
          if ((lVar5 != param_1) && (param_2 < *(float *)(lVar5 + 0xc0))) goto LAB_146a8b3c3;
          uVar6 = uVar6 + 1;
        } while (uVar8 != uVar6);
        uVar6 = (ulonglong)uVar2;
      }
      uVar7 = uVar7 & 0xffffffff;
      if (*(longlong *)(lVar4 + -8 + (longlong)(int)uVar2 * 8) == param_1) {
        uVar7 = uVar6;
      }
LAB_146a8b3c3:
      *(float *)(param_1 + 0xc0) = param_2;
      iVar9 = (int)uVar6;
      if ((int)uVar7 == iVar9) {
        return;
      }
      FUN_1429023e6(lVar3 + 0x1e0,uVar7,iVar9 - (uint)((int)uVar7 < iVar9));
      return;
    }
  }
  *(float *)(param_1 + 0xc0) = param_2;
  return;
}



// FUNCTION 146a8b3e6 FUN_146a8b3e6 body=388 status=ok
// SIG undefined FUN_146a8b3e6(void)

undefined8 FUN_146a8b3e6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar7 = *(longlong **)(param_1 + 0x10);
  bVar3 = true;
  if (plVar7 == (longlong *)0x0) {
LAB_146a8b41a:
    uVar8 = 0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar7[1];
    do {
      if (iVar5 == 0) goto LAB_146a8b41a;
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    uVar8 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    bVar3 = false;
  }
  uVar6 = FUN_14001cc68(200,0x10);
  FUN_146060d68(uVar6);
  local_80 = uVar6;
  local_50 = uVar8;
  local_48 = plVar7;
  if (bVar3) {
    local_68 = 0;
    local_58 = &PTR_LAB_149f18fa0;
    local_78 = FUN_142904222;
    FUN_146a8b56c(param_2,&local_80,param_1 + 0x1e0);
  }
  else {
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    local_68 = 0;
    local_58 = &PTR_LAB_149f18fa0;
    local_78 = FUN_142904222;
    FUN_146a8b56c(param_2,&local_80,param_1 + 0x1e0);
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a8b56c FUN_146a8b56c body=224 status=ok
// SIG undefined FUN_146a8b56c(void)

longlong * FUN_146a8b56c(longlong *param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  lVar1 = *param_2;
  *param_2 = 0;
  *param_1 = lVar1;
  *(undefined1 *)((longlong)param_1 + 0xbc) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = param_3;
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  lVar1 = *param_4;
  param_1[0x1a] = lVar1;
  param_1[0x1c] = 0;
  if (lVar1 != 0) {
    plVar3 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_4[2];
    }
    (**(code **)*plVar3)(0,param_1 + 0x1c);
  }
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (*param_4 != 0) {
    plVar3 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  return param_1;
}



// FUNCTION 146a8b64c FUN_146a8b64c body=94 status=ok
// SIG undefined FUN_146a8b64c(void)

ulonglong FUN_146a8b64c(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  
  FUN_140163244(param_1,1);
  if (0 < (longlong)*(int *)(param_1 + 0x200)) {
    uVar1 = 0;
    do {
      if (*param_2 ==
          *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1f8) + uVar1 * 8) + 0x10)) {
        FUN_146a8b6aa(param_1 + 0x1e0,uVar1 & 0xffffffff);
        return uVar1 & 0xffffffff;
      }
      uVar1 = uVar1 + 1;
    } while ((longlong)*(int *)(param_1 + 0x200) != uVar1);
  }
  return 0xffffffff;
}



// FUNCTION 146a8b6aa FUN_146a8b6aa body=67 status=ok
// SIG undefined FUN_146a8b6aa(void)

void FUN_146a8b6aa(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + (longlong)param_2 * 8);
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)param_2 * 8) = 0;
  FUN_146abebd0(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146a8b6e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 146a8b6ee FUN_146a8b6ee body=97 status=ok
// SIG undefined FUN_146a8b6ee(void)

void FUN_146a8b6ee(void)

{
  undefined1 auStack_58 [56];
  longlong local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  local_18 = 0x1000000000;
  FUN_1417215b6();
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a8b750 FUN_146a8b750 body=4809 status=ok
// SIG undefined FUN_146a8b750(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_146a8b750(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_1628 [32];
  undefined1 *local_1608;
  char local_15fa;
  byte local_15f9;
  longlong *local_15f8;
  undefined8 local_15f0;
  longlong *local_15e8;
  undefined8 local_15e0;
  undefined1 local_15d1;
  longlong local_15d0;
  longlong *local_15c8;
  undefined1 local_15b1;
  undefined1 local_15b0 [8];
  longlong *local_15a8;
  undefined1 local_1591;
  undefined1 *local_1590;
  undefined4 local_1588;
  undefined4 uStack_1584;
  undefined4 local_1578;
  undefined4 uStack_1574;
  undefined4 uStack_1570;
  undefined4 uStack_156c;
  undefined1 local_1568;
  undefined8 local_1560;
  undefined4 local_1558;
  undefined4 local_1548;
  undefined4 uStack_1544;
  undefined4 uStack_1540;
  undefined4 uStack_153c;
  undefined4 uStack_1538;
  undefined1 uStack_1534;
  undefined8 local_1530;
  undefined4 local_1528;
  undefined8 local_1518;
  undefined1 local_1510;
  undefined8 local_1508;
  undefined8 uStack_1500;
  undefined8 local_14f8;
  longlong *local_14f0;
  undefined8 local_14e8;
  longlong *local_14e0;
  undefined4 local_14d8;
  undefined1 local_14d4;
  undefined8 local_14d0;
  undefined8 uStack_14c8;
  undefined1 local_14b9;
  longlong local_14b8;
  longlong *local_14b0;
  undefined1 local_1499;
  longlong local_1498;
  longlong *local_1490;
  longlong local_1480;
  longlong *local_1478;
  undefined8 local_1470;
  longlong *local_1468;
  undefined8 local_1460;
  undefined1 *puStack_1458;
  undefined4 local_1450;
  undefined1 local_144c;
  undefined8 local_1448;
  undefined8 uStack_1440;
  undefined4 local_1438;
  undefined4 uStack_1434;
  undefined4 uStack_1430;
  undefined4 uStack_142c;
  undefined1 local_1428;
  undefined8 local_1420;
  undefined4 local_1418;
  undefined8 local_1410;
  undefined8 local_1408;
  longlong *local_1400;
  undefined4 local_13f8;
  undefined4 uStack_13f4;
  undefined4 uStack_13f0;
  undefined4 uStack_13ec;
  uint uStack_13e8;
  undefined1 uStack_13e4;
  undefined8 local_13e0;
  undefined4 local_13d8;
  undefined8 local_13c8;
  undefined1 local_13c0;
  undefined8 local_13b8;
  undefined4 local_13b0;
  undefined8 local_13a8;
  longlong *local_13a0;
  undefined8 local_1398;
  longlong *local_1390;
  undefined8 local_1388;
  longlong *local_1380;
  undefined4 local_1378;
  undefined4 uStack_1374;
  undefined4 uStack_1370;
  undefined4 uStack_136c;
  uint uStack_1368;
  undefined1 uStack_1364;
  undefined8 local_1360;
  undefined4 local_1358;
  undefined8 local_1348;
  undefined1 local_1340;
  undefined8 local_1338;
  undefined4 local_1330;
  undefined8 local_1328;
  longlong *local_1320;
  undefined8 local_1318;
  longlong *local_1310;
  undefined8 local_1308;
  undefined4 uStack_1300;
  undefined4 uStack_12fc;
  uint uStack_12f8;
  undefined1 uStack_12f4;
  undefined8 local_12f0;
  undefined8 uStack_12e8;
  undefined8 local_12d8;
  undefined1 local_12d0;
  undefined8 local_12c8;
  undefined8 uStack_12c0;
  undefined8 local_12b8;
  undefined4 uStack_12b0;
  undefined4 uStack_12ac;
  uint uStack_12a8;
  undefined1 uStack_12a4;
  undefined8 local_12a0;
  undefined8 uStack_1298;
  undefined8 local_1288;
  undefined1 local_1280;
  undefined8 local_1278;
  undefined8 uStack_1270;
  undefined1 local_1268 [96];
  undefined1 local_1208;
  undefined8 local_1200;
  undefined4 local_11f8;
  longlong *local_11f0;
  undefined4 local_11e8;
  undefined1 local_11e0;
  undefined8 local_11d8;
  undefined4 local_11d0;
  undefined4 local_11c8;
  char cStack_11c4;
  undefined4 local_11c0;
  char local_11bc;
  char local_11b8;
  undefined8 local_11b0;
  undefined8 uStack_11a8;
  undefined1 local_11a0 [448];
  undefined4 local_fe0;
  undefined4 uStack_fdc;
  undefined4 uStack_fd8;
  undefined4 uStack_fd4;
  undefined1 local_fd0;
  undefined1 local_fc8 [80];
  undefined8 local_f78;
  undefined1 local_f70;
  undefined1 local_f68 [136];
  undefined4 local_ee0;
  undefined4 uStack_edc;
  undefined4 uStack_ed8;
  undefined4 uStack_ed4;
  undefined4 local_ed0;
  undefined1 local_ecc;
  undefined1 local_ec8 [88];
  code *local_e70;
  undefined4 local_e68;
  longlong local_db0;
  longlong *local_da8;
  undefined8 local_c08;
  longlong *local_c00;
  undefined8 local_bf0;
  undefined8 uStack_be8;
  undefined1 local_be0;
  undefined1 auStack_bd8 [80];
  undefined8 local_b88;
  undefined1 local_b80;
  undefined1 auStack_b78 [136];
  undefined4 local_af0;
  undefined4 uStack_aec;
  undefined4 uStack_ae8;
  undefined4 uStack_ae4;
  uint local_ae0;
  undefined1 local_adc;
  undefined1 auStack_ad8 [88];
  undefined1 local_a80 [192];
  undefined1 local_9c0 [440];
  undefined1 local_808 [8];
  longlong *local_800;
  undefined8 local_660;
  longlong *local_658;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined1 local_638;
  undefined1 auStack_630 [80];
  undefined8 local_5e0;
  undefined1 local_5d8;
  undefined1 local_5d0 [136];
  undefined4 local_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  uint local_538;
  undefined1 local_534;
  undefined1 local_530 [88];
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined1 local_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x146a8b766;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1628;
  param_1[0x4d] = *(longlong *)(param_2 + 0x1a8);
  *(undefined1 *)(param_1 + 0x67) = *(undefined1 *)(param_2 + 0x270);
  *(undefined4 *)(param_1 + 0x66) = *(undefined4 *)(param_2 + 0x274);
  *(undefined4 *)((longlong)param_1 + 0x334) = *(undefined4 *)(param_2 + 0x278);
  FUN_14114e6dc(param_1 + 100,param_2 + 0x2f8);
  param_1[0x68] = *(longlong *)(param_2 + 0x1a8) + 0x10;
  param_1[0x69] = *(longlong *)(param_2 + 0x1a8) + 0xc0;
  FUN_14692f10e(&local_4d8,0,*(undefined4 *)(*(longlong *)(param_2 + 0x1a8) + 0x170),5);
  FUN_146980d02(param_1 + 0x56,&local_4d8);
  FUN_1402bc42a(&local_4d8);
  if ((char)param_1[0x67] == '\0') {
    FUN_14285ff8c(param_1 + 0x56);
  }
  local_15f8 = *(longlong **)(param_2 + 0x228);
  plVar7 = *(longlong **)(param_2 + 0x230);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  if (local_15f8 == (longlong *)DAT_14c98dec8) {
    FUN_140a570d8(&local_4d8);
    local_11f0 = *(longlong **)(param_2 + 0x248);
    if (local_11f0 != (longlong *)0x0) {
      (**(code **)(*local_11f0 + 8))();
    }
    local_11e8 = *(undefined4 *)(param_2 + 0x250);
    local_11e0 = *(undefined1 *)(param_2 + 600);
    local_11d8 = 0;
    local_11d0 = 0;
    FUN_1413a4324(&local_11d8,param_2 + 0x260);
    lVar4 = FUN_140a54906(&local_4d8,&local_11f0);
    FUN_144a87366(local_1268,param_2 + 0x308);
    local_1208 = *(undefined1 *)(param_2 + 0x368);
    local_1200 = 0;
    local_11f8 = 0;
    FUN_140a5d470(&local_1200,param_2 + 0x370);
    FUN_1412cc59c(lVar4 + 0x1d8,local_1268);
    *(undefined1 *)(lVar4 + 0x238) = local_1208;
    FUN_144a450dc(lVar4 + 0x240,&local_1200);
    FUN_141515cba(local_1268);
    local_1608 = local_11a0;
    FUN_140a54526(local_808,"STextBlock",
                  ".\\Runtime/Slate/Private/Widgets/Layout/SExpandableArea.cpp",0x26);
    FUN_140a52852(local_808,&local_db0,lVar4);
    plVar3 = local_da8;
    local_15f8 = (longlong *)local_db0;
    if (local_da8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_da8 + 1) = (int)local_da8[1] + 1;
      UNLOCK();
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar7 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    if (local_da8 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_da8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_da8)(local_da8);
        LOCK();
        piVar2 = (int *)((longlong)local_da8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_da8 + 0x10))(local_da8);
        }
      }
    }
    if (local_800 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_800 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_800)(local_800);
        LOCK();
        piVar2 = (int *)((longlong)local_800 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_800 + 0x10))(local_800);
        }
      }
    }
    FUN_140a59ae6(&local_4d8);
    plVar7 = plVar3;
  }
  bVar8 = *(longlong *)(param_2 + 0x220) != 0;
  local_15f9 = bVar8 | *(byte *)(param_2 + 0x20c);
  local_15e8 = plVar7;
  if (bVar8 || (*(byte *)(param_2 + 0x20c) & 1) != 0) {
    local_1288 = FUN_141319416();
    local_1280 = 1;
    local_1278 = 0;
    uStack_1270 = 0;
    local_12b8 = 0;
    uStack_12b0 = 0;
    uStack_12ac = 0;
    uStack_12a8 = uStack_12a8 & 0xffffff00;
    uStack_12a4 = 1;
    local_12a0 = 0;
    uStack_1298 = 0;
    local_12d0 = *(undefined1 *)(param_2 + 0x1e0);
    local_12d8 = *(undefined8 *)(param_2 + 0x1d8);
    local_12c8 = 0;
    uStack_12c0 = (ulonglong)uStack_12c0._4_4_ << 0x20;
    FUN_140a5c3e8(&local_12c8,param_2 + 0x1e8);
    uStack_12f8 = (uint)((ulonglong)*(undefined8 *)(param_2 + 0x1bd) >> 0x18);
    uStack_12f4 = (undefined1)((ulonglong)*(undefined8 *)(param_2 + 0x1bd) >> 0x38);
    local_1308 = *(undefined8 *)(param_2 + 0x1b0);
    uStack_1300 = *(undefined4 *)(param_2 + 0x1b8);
    uStack_12fc = *(undefined4 *)(param_2 + 0x1bc);
    local_12f0 = 0;
    uStack_12e8 = (ulonglong)uStack_12e8._4_4_ << 0x20;
    FUN_140a5aaa0(&local_12f0,param_2 + 0x1c8);
  }
  else {
    local_1280 = *(undefined1 *)(param_2 + 0x1e0);
    local_1288 = *(undefined8 *)(param_2 + 0x1d8);
    local_1278 = 0;
    uStack_1270 = (ulonglong)uStack_1270._4_4_ << 0x20;
    FUN_140a5c3e8(&local_1278,param_2 + 0x1e8);
    uStack_12a8 = (uint)((ulonglong)*(undefined8 *)(param_2 + 0x1bd) >> 0x18);
    uStack_12a4 = (undefined1)((ulonglong)*(undefined8 *)(param_2 + 0x1bd) >> 0x38);
    local_12b8 = *(undefined8 *)(param_2 + 0x1b0);
    uStack_12b0 = *(undefined4 *)(param_2 + 0x1b8);
    uStack_12ac = *(undefined4 *)(param_2 + 0x1bc);
    local_12a0 = 0;
    uStack_1298 = (ulonglong)uStack_1298._4_4_ << 0x20;
    FUN_140a5aaa0(&local_12a0,param_2 + 0x1c8);
    local_12d8 = FUN_141319416();
    local_12d0 = 1;
    local_12c8 = 0;
    uStack_12c0 = 0;
    local_1308 = 0;
    uStack_1300 = 0;
    uStack_12fc = 0;
    uStack_12f8 = uStack_12f8 & 0xffffff00;
    uStack_12f4 = 1;
    local_12f0 = 0;
    uStack_12e8 = 0;
  }
  *(undefined1 *)(param_1 + 0x6a) = *(undefined1 *)(param_2 + 0x3a0);
  FUN_140a562d0(local_808);
  local_1348 = local_1288;
  local_1340 = local_1280;
  local_1338 = 0;
  local_1330 = 0;
  FUN_140a5c3e8(&local_1338);
  local_5d8 = local_1340;
  local_5e0 = local_1348;
  FUN_144a450dc(local_5d0,&local_1338);
  FUN_1449db362(&local_1338);
  uStack_1368 = uStack_12a8;
  uStack_1364 = uStack_12a4;
  local_1378 = (undefined4)local_12b8;
  uStack_1374 = local_12b8._4_4_;
  uStack_1370 = uStack_12b0;
  uStack_136c = uStack_12ac;
  local_1360 = 0;
  local_1358 = 0;
  FUN_140a5aaa0(&local_1360);
  local_538 = uStack_1368;
  local_548 = local_1378;
  uStack_544 = uStack_1374;
  uStack_540 = uStack_1370;
  uStack_53c = uStack_136c;
  local_534 = uStack_1364;
  FUN_144a450dc(local_530,&local_1360);
  FUN_1449db362(&local_1360);
  local_4d8 = 0;
  uStack_4d0 = 0;
  local_4c8 = 1;
  local_4c0 = 0;
  uStack_4b8 = 0;
  local_648 = 0;
  uStack_640 = 0;
  local_638 = 1;
  FUN_144a450dc(auStack_630,&local_4c0);
  FUN_1449db362(&local_4c0);
  FUN_1407679b0(local_9c0);
  FUN_145aafb3e(local_a80);
  local_15f0 = FUN_145aaf900(local_a80);
  FUN_140a562d0(&local_db0);
  local_13c8 = local_12d8;
  local_13c0 = local_12d0;
  local_13b8 = 0;
  local_13b0 = 0;
  FUN_140a5c3e8(&local_13b8);
  local_b80 = local_13c0;
  local_b88 = local_13c8;
  FUN_144a450dc(auStack_b78,&local_13b8);
  FUN_1449db362(&local_13b8);
  uStack_13e8 = uStack_12f8;
  uStack_13e4 = uStack_12f4;
  local_13f8 = (undefined4)local_1308;
  uStack_13f4 = local_1308._4_4_;
  uStack_13f0 = uStack_1300;
  uStack_13ec = uStack_12fc;
  local_13e0 = 0;
  local_13d8 = 0;
  FUN_140a5aaa0(&local_13e0);
  local_ae0 = uStack_13e8;
  local_af0 = local_13f8;
  uStack_aec = uStack_13f4;
  uStack_ae8 = uStack_13f0;
  uStack_ae4 = uStack_13ec;
  local_adc = uStack_13e4;
  FUN_144a450dc(auStack_ad8,&local_13e0);
  FUN_1449db362(&local_13e0);
  local_4d8 = 0;
  uStack_4d0 = 0;
  local_4c8 = 1;
  local_4c0 = 0;
  uStack_4b8 = 0;
  local_bf0 = 0;
  uStack_be8 = 0;
  local_be0 = 1;
  FUN_144a450dc(auStack_bd8,&local_4c0);
  FUN_1449db362(&local_4c0);
  FUN_145ab3d24(&local_4d8);
  local_15fa = *(char *)(param_2 + 0x388);
  if (local_15fa == '\x01') {
    local_11bc = *(char *)(param_2 + 900);
    if (local_11bc == '\x01') {
      local_11c0 = *(undefined4 *)(param_2 + 0x380);
    }
    local_11b0 = 0;
    uStack_11a8 = (ulonglong)uStack_11a8._4_4_ << 0x20;
    local_11b8 = local_15fa;
    FUN_140a5f4d8(&local_11b0,param_2 + 0x390);
  }
  else {
    (**(code **)(*param_1 + 0x1d0))(param_1,&local_11c8);
    local_11bc = cStack_11c4;
    if (cStack_11c4 == '\x01') {
      local_11c0 = local_11c8;
    }
    local_11b8 = '\x01';
    local_11b0 = 0;
    uStack_11a8 = 0;
  }
  lVar5 = FUN_145ab3468(&local_4d8,&local_11c0);
  FUN_1446ddc76(&local_1410,"NoBorder",1);
  lVar4 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar4 == 0) {
    lVar4 = DAT_14c96b350;
  }
  uVar6 = FUN_141492734(lVar4,local_1410,0,0);
  *(undefined8 *)(lVar5 + 0x1b8) = uVar6;
  local_1438 = *(undefined4 *)(param_2 + 0x2a8);
  uStack_1434 = *(undefined4 *)(param_2 + 0x2ac);
  uStack_1430 = *(undefined4 *)(param_2 + 0x2b0);
  uStack_142c = *(undefined4 *)(param_2 + 0x2b4);
  local_1428 = *(undefined1 *)(param_2 + 0x2b8);
  local_1420 = 0;
  local_1418 = 0;
  FUN_140a58be0(&local_1420,param_2 + 0x2c0);
  *(undefined1 *)(lVar5 + 0x1e0) = local_1428;
  *(undefined4 *)(lVar5 + 0x1d0) = local_1438;
  *(undefined4 *)(lVar5 + 0x1d4) = uStack_1434;
  *(undefined4 *)(lVar5 + 0x1d8) = uStack_1430;
  *(undefined4 *)(lVar5 + 0x1dc) = uStack_142c;
  FUN_144a450dc(lVar5 + 0x1e8,&local_1420);
  FUN_1449db362(&local_1420);
  local_1460 = 0x3f800000;
  puStack_1458 = &DAT_3f8000003f800000;
  local_1450 = CONCAT22(local_1450._2_2_,2);
  local_144c = 1;
  local_1448 = 0;
  uStack_1440 = 0;
  *(undefined4 *)(lVar5 + 0x308) = local_1450;
  *(undefined4 *)(lVar5 + 0x2f8) = 0x3f800000;
  *(undefined4 *)(lVar5 + 0x2fc) = 0;
  *(undefined4 *)(lVar5 + 0x300) = 0x3f800000;
  *(undefined4 *)(lVar5 + 0x304) = 0x3f800000;
  *(undefined1 *)(lVar5 + 0x30c) = 1;
  FUN_144a450dc(lVar5 + 0x310,&local_1448);
  FUN_1449db362(&local_1448);
  local_e70 = FUN_146a8ca1a;
  local_e68 = 0;
  FUN_146abee34(local_11a0,param_1);
  FUN_144a450dc(lVar5 + 0x220,local_11a0);
  FUN_1449db362(local_11a0);
  local_1480 = (longlong)local_15f8;
  local_1478 = local_15e8;
  if (local_15e8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_15e8 + 1) = (int)local_15e8[1] + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x260))(param_1,&local_1470,param_2,&local_1480);
  if (local_1468 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1468 + 1) = (int)local_1468[1] + 1;
    UNLOCK();
  }
  plVar7 = *(longlong **)(lVar5 + 0x1b0);
  *(undefined8 *)(lVar5 + 0x1a8) = local_1470;
  *(longlong **)(lVar5 + 0x1b0) = local_1468;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  local_1608 = &local_1499;
  FUN_145ab3730(&local_1498,"SButton",".\\Runtime/Slate/Private/Widgets/Layout/SExpandableArea.cpp",
                0x46);
  if (local_1490 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1490 + 1) = (int)local_1490[1] + 1;
    UNLOCK();
  }
  plVar7 = (longlong *)param_1[0x55];
  param_1[0x54] = local_1498;
  param_1[0x55] = (longlong)local_1490;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  FUN_145ab34ca(&local_1498,&local_1408,lVar5);
  plVar3 = local_c00;
  plVar7 = local_1400;
  if (local_1400 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1400 + 1) = (int)local_1400[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_1400 + 1) = (int)local_1400[1] + 1;
    UNLOCK();
  }
  local_c08 = local_1408;
  local_c00 = local_1400;
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
  local_1608 = &local_14b9;
  FUN_140a55c32(&local_14b8,"SBorder",".\\Runtime/Slate/Private/Widgets/Layout/SExpandableArea.cpp",
                0x41);
  if (local_14b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_14b0 + 1) = (int)local_14b0[1] + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)param_1[0x4f];
  param_1[0x4e] = local_14b8;
  param_1[0x4f] = (longlong)local_14b0;
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
  local_15f8 = plVar7;
  FUN_140a530e4(&local_14b8,&local_13a8,&local_db0);
  local_1398 = local_13a8;
  local_1390 = local_13a0;
  if (local_13a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_13a0 + 1) = (int)local_13a0[1] + 1;
    UNLOCK();
  }
  uVar6 = FUN_145aaf878(local_15f0,&local_1398);
  local_15f0 = FUN_145aaf822(local_9c0,uVar6);
  FUN_145aafb3e(&local_e70);
  local_14d8 = 0x3f800000;
  local_14d4 = 1;
  local_14d0 = 0;
  uStack_14c8 = 0;
  local_15e0 = FUN_140767d84(&local_e70);
  FUN_140a562d0(local_11a0);
  local_1590 = &LAB_146a8cb0c;
  local_1588 = 0;
  FUN_146a8ca68(local_11a0,param_1,&local_1590);
  local_1518 = *(undefined8 *)(param_2 + 0x220);
  local_1510 = 1;
  local_1508 = 0;
  uStack_1500 = 0;
  local_f70 = 1;
  local_f78 = local_1518;
  FUN_144a450dc(local_f68,&local_1508);
  FUN_1449db362(&local_1508);
  uStack_1538 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x205) >> 0x18);
  uStack_1534 = (undefined1)((ulonglong)*(undefined8 *)(param_2 + 0x205) >> 0x38);
  local_1548 = *(undefined4 *)(param_2 + 0x1f8);
  uStack_1544 = *(undefined4 *)(param_2 + 0x1fc);
  uStack_1540 = *(undefined4 *)(param_2 + 0x200);
  uStack_153c = *(undefined4 *)(param_2 + 0x204);
  local_1530 = 0;
  local_1528 = 0;
  FUN_140a5aaa0(&local_1530,param_2 + 0x210);
  local_ed0 = uStack_1538;
  local_ee0 = local_1548;
  uStack_edc = uStack_1544;
  uStack_ed8 = uStack_1540;
  uStack_ed4 = uStack_153c;
  local_ecc = uStack_1534;
  FUN_144a450dc(local_ec8,&local_1530);
  FUN_1449db362(&local_1530);
  local_1568 = *(undefined1 *)(param_2 + 0x2e0);
  local_1578 = *(undefined4 *)(param_2 + 0x2d0);
  uStack_1574 = *(undefined4 *)(param_2 + 0x2d4);
  uStack_1570 = *(undefined4 *)(param_2 + 0x2d8);
  uStack_156c = *(undefined4 *)(param_2 + 0x2dc);
  local_1560 = 0;
  local_1558 = 0;
  FUN_140a58be0(&local_1560,param_2 + 0x2e8);
  local_fd0 = local_1568;
  local_fe0 = local_1578;
  uStack_fdc = uStack_1574;
  uStack_fd8 = uStack_1570;
  uStack_fd4 = uStack_156c;
  FUN_144a450dc(local_fc8,&local_1560);
  FUN_1449db362(&local_1560);
  local_1590 = &LAB_146a8cbd2;
  local_1588 = 0;
  FUN_146a8cb1a(local_11a0,param_1,&local_1590);
  uVar6 = FUN_146a0a36e(local_11a0,param_2 + 0x238);
  local_1608 = &local_1591;
  FUN_140a55c32(&local_1590,"SBorder",".\\Runtime/Slate/Private/Widgets/Layout/SExpandableArea.cpp",
                0x54);
  lVar4 = CONCAT44(uStack_1584,local_1588);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar7 = (longlong *)param_1[0x53];
  param_1[0x52] = (longlong)local_1590;
  param_1[0x53] = lVar4;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  FUN_140a530e4(&local_1590,&local_14f8,uVar6);
  local_14e8 = local_14f8;
  local_14e0 = local_14f0;
  if (local_14f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_14f0 + 1) = (int)local_14f0[1] + 1;
    UNLOCK();
  }
  uVar6 = FUN_145aaf878(local_15e0,&local_14e8);
  uVar6 = FUN_145aaf822(local_15f0,uVar6);
  local_1608 = &local_15b1;
  FUN_14076837c(local_15b0,"SVerticalBox",
                ".\\Runtime/Slate/Private/Widgets/Layout/SExpandableArea.cpp",0x3d);
  FUN_14076784c(local_15b0,&local_1388,uVar6);
  plVar3 = local_658;
  plVar7 = local_1380;
  if (local_1380 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1380 + 1) = (int)local_1380[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_1380 + 1) = (int)local_1380[1] + 1;
    UNLOCK();
  }
  local_660 = local_1388;
  local_658 = local_1380;
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
  local_1608 = &local_15d1;
  FUN_140a55c32(&local_15d0,"SBorder",".\\Runtime/Slate/Private/Widgets/Layout/SExpandableArea.cpp",
                0x38);
  if (local_15c8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_15c8 + 1) = (int)local_15c8[1] + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)param_1[0x51];
  param_1[0x50] = local_15d0;
  param_1[0x51] = (longlong)local_15c8;
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
  FUN_140a530e4(&local_15d0,&local_1328,local_808);
  local_1318 = local_1328;
  local_1310 = local_1320;
  if (local_1320 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1320 + 1) = (int)local_1320[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(param_1 + 0x3c,&local_1318);
  plVar3 = local_1310;
  if (local_1310 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1310 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1310)(local_1310);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_1320 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_1320 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_1320)(local_1320);
      LOCK();
      piVar2 = (int *)((longlong)local_1320 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1320 + 0x10))(local_1320);
      }
    }
  }
  if (local_15c8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_15c8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_15c8)(local_15c8);
      LOCK();
      piVar2 = (int *)((longlong)local_15c8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_15c8 + 0x10))(local_15c8);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_1380 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1380 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_1380)(local_1380);
      LOCK();
      piVar2 = (int *)((longlong)local_1380 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1380 + 0x10))(local_1380);
      }
    }
  }
  plVar7 = local_15f8;
  if (local_15a8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_15a8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_15a8)(local_15a8);
      LOCK();
      piVar2 = (int *)((longlong)local_15a8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_15a8 + 0x10))(local_15a8);
      }
    }
  }
  plVar3 = local_14e0;
  if (local_14e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_14e0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_14e0)(local_14e0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_14f0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_14f0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_14f0)(local_14f0);
      LOCK();
      piVar2 = (int *)((longlong)local_14f0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_14f0 + 0x10))(local_14f0);
      }
    }
  }
  plVar3 = (longlong *)CONCAT44(uStack_1584,local_1588);
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
  FUN_140a59028(local_11a0);
  FUN_140767f30(&local_e70);
  plVar3 = local_1390;
  if (local_1390 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1390 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1390)(local_1390);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_13a0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_13a0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_13a0)(local_13a0);
      LOCK();
      piVar2 = (int *)((longlong)local_13a0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_13a0 + 0x10))(local_13a0);
      }
    }
  }
  if (local_14b0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_14b0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_14b0)(local_14b0);
      LOCK();
      piVar2 = (int *)((longlong)local_14b0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_14b0 + 0x10))(local_14b0);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (local_1400 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1400 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_1400)(local_1400);
      LOCK();
      piVar2 = (int *)((longlong)local_1400 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1400 + 0x10))(local_1400);
      }
    }
  }
  if (local_1490 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1490 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_1490)(local_1490);
      LOCK();
      piVar2 = (int *)((longlong)local_1490 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1490 + 0x10))(local_1490);
      }
    }
  }
  if (local_1468 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1468 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_1468)(local_1468);
      LOCK();
      piVar2 = (int *)((longlong)local_1468 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1468 + 0x10))(local_1468);
      }
    }
  }
  FUN_145ab35f4(&local_4d8);
  FUN_140a59028(&local_db0);
  FUN_140767f30(local_a80);
  FUN_14149255e(local_9c0);
  FUN_140a59028(local_808);
  if ((local_15f9 & 1) != 0) {
    lVar4 = param_1[0x4e];
    lVar5 = param_1[0x4f];
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    plVar7 = (longlong *)param_1[0x51];
    param_1[0x50] = lVar4;
    param_1[0x51] = lVar5;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar7 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  FUN_1449db362(&local_12f0);
  FUN_1449db362(&local_12c8);
  FUN_1449db362(&local_12a0);
  FUN_1449db362(&local_1278);
  plVar7 = local_15e8;
  if (local_15e8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_15e8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_15e8)(local_15e8);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1628) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a8ca1a FUN_146a8ca1a body=78 status=ok
// SIG undefined FUN_146a8ca1a(void)

undefined1 * FUN_146a8ca1a(longlong *param_1,undefined1 *param_2)

{
  (**(code **)(*param_1 + 0x270))();
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 146a8ca68 FUN_146a8ca68 body=163 status=ok
// SIG undefined FUN_146a8ca68(void)

longlong FUN_146a8ca68(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_3;
  local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_146abf31c(local_48,param_2,&local_38);
  local_38 = CONCAT62(local_38._2_6_,0x119);
  local_30 = 0;
  local_28 = 0;
  FUN_140fe25fc(&local_30,local_48);
  *(undefined2 *)(param_1 + 0x70) = (undefined2)local_38;
  FUN_144a450dc(param_1 + 0x78,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a8cb1a FUN_146a8cb1a body=183 status=ok
// SIG undefined FUN_146a8cb1a(void)

longlong FUN_146a8cb1a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *param_3;
  uStack_40 = CONCAT44(uStack_40._4_4_,*(undefined4 *)(param_3 + 1));
  FUN_146abf7ea(local_58,param_2,&local_48);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 1;
  local_30 = 0;
  local_28 = 0;
  FUN_140a51be2(&local_30,local_58);
  *(undefined1 *)(param_1 + 0x280) = local_38;
  *(undefined4 *)(param_1 + 0x270) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x274) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x278) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x27c) = uStack_40._4_4_;
  FUN_144a450dc(param_1 + 0x288,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a8cbe0 FUN_146a8cbe0 body=99 status=ok
// SIG undefined FUN_146a8cbe0(void)

void FUN_146a8cbe0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  byte bVar2;
  
  if (*(byte *)(param_1 + 0x338) == (byte)param_2) {
    bVar2 = (byte)param_2 ^ 1;
    *(byte *)(param_1 + 0x338) = bVar2;
    if (bVar2 == 0) {
      FUN_14285ff8c();
    }
    else {
      FUN_14692f5e4(param_1 + 0x2b0);
    }
    if ((*(int *)(param_1 + 0x328) != 0) &&
       (plVar1 = *(longlong **)(param_1 + 800), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000146a8cc38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 146a8cc44 FUN_146a8cc44 body=435 status=ok
// SIG undefined FUN_146a8cc44(void)

void FUN_146a8cc44(longlong param_1,byte param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_98;
  longlong *local_90;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(byte *)(param_1 + 0x338) != (param_2 ^ 1)) {
    *(byte *)(param_1 + 0x338) = param_2 ^ 1;
    lVar3 = param_1 + 0x2b0;
    if (param_2 == 0) {
      puVar7 = (undefined4 *)FUN_14692efec(lVar3,0);
      FUN_14692f10e(&local_98,0,*puVar7,4);
      FUN_146980d02(lVar3,&local_98);
      FUN_1402bc42a(&local_98);
      local_90 = *(longlong **)(param_1 + 0x10);
      if (local_90 == (longlong *)0x0) {
LAB_146a8cd7d:
        local_98 = 0;
        local_90 = (longlong *)0x0;
      }
      else {
        iVar6 = (int)local_90[1];
        do {
          if (iVar6 == 0) goto LAB_146a8cd7d;
          LOCK();
          iVar5 = (int)local_90[1];
          bVar9 = iVar6 == iVar5;
          if (bVar9) {
            *(int *)(local_90 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar9);
        local_98 = *(undefined8 *)(param_1 + 8);
      }
      puVar8 = &local_98;
      local_a8 = 1;
      FUN_14692f4ee(lVar3,puVar8,0,0);
    }
    else {
      puVar7 = (undefined4 *)FUN_14692efec(lVar3,0);
      FUN_14692f10e(&local_98,0,*puVar7,5);
      FUN_146980d02(lVar3,&local_98);
      FUN_1402bc42a(&local_98);
      local_90 = *(longlong **)(param_1 + 0x10);
      if (local_90 == (longlong *)0x0) {
LAB_146a8cd57:
        local_98 = 0;
        local_90 = (longlong *)0x0;
      }
      else {
        iVar6 = (int)local_90[1];
        do {
          if (iVar6 == 0) goto LAB_146a8cd57;
          LOCK();
          iVar5 = (int)local_90[1];
          bVar9 = iVar6 == iVar5;
          if (bVar9) {
            *(int *)(local_90 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar9);
        local_98 = *(undefined8 *)(param_1 + 8);
      }
      puVar8 = &local_98;
      local_a8 = 1;
      FUN_14692f220(lVar3,puVar8,0,0);
    }
    plVar4 = local_90;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_90 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if ((*(int *)(param_1 + 0x328) != 0) &&
       (plVar4 = *(longlong **)(param_1 + 800), plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x60))
                (plVar4,CONCAT71((int7)((ulonglong)puVar8 >> 8),*(undefined1 *)(param_1 + 0x338)) ^
                        1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a8cdf8 FUN_146a8cdf8 body=1010 status=ok
// SIG undefined FUN_146a8cdf8(void)

undefined8 * FUN_146a8cdf8(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_6d8 [32];
  undefined1 *local_6b8;
  undefined1 local_6a1;
  undefined1 local_6a0 [8];
  longlong *local_698;
  undefined4 local_688;
  undefined1 local_684;
  undefined8 local_680;
  undefined8 uStack_678;
  undefined1 local_669;
  undefined1 local_668 [8];
  longlong *local_660;
  undefined8 local_650;
  undefined1 *puStack_648;
  undefined4 local_640;
  undefined1 local_63c;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  longlong *local_620;
  undefined8 local_618;
  longlong *local_610;
  undefined4 local_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined1 local_5f8;
  undefined8 local_5f0;
  undefined4 local_5e8;
  undefined8 local_5e0;
  longlong *local_5d8;
  undefined1 *local_5d0;
  undefined4 local_5c8;
  undefined1 local_510 [456];
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined1 local_334;
  undefined1 local_330 [88];
  undefined1 local_2d8 [192];
  undefined1 local_218 [440];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_6d8;
  FUN_140a5296a(local_218);
  FUN_140a50426(local_2d8);
  lVar4 = FUN_140a52578(local_2d8);
  local_608 = *(undefined4 *)(param_3 + 0x280);
  uStack_604 = *(undefined4 *)(param_3 + 0x284);
  uStack_600 = *(undefined4 *)(param_3 + 0x288);
  uStack_5fc = *(undefined4 *)(param_3 + 0x28c);
  local_5f8 = *(undefined1 *)(param_3 + 0x290);
  local_5f0 = 0;
  local_5e8 = 0;
  FUN_140a58be0(&local_5f0,param_3 + 0x298);
  *(undefined1 *)(lVar4 + 0x28) = local_5f8;
  *(undefined4 *)(lVar4 + 0x18) = local_608;
  *(undefined4 *)(lVar4 + 0x1c) = uStack_604;
  *(undefined4 *)(lVar4 + 0x20) = uStack_600;
  *(undefined4 *)(lVar4 + 0x24) = uStack_5fc;
  FUN_144a450dc(lVar4 + 0x30,&local_5f0);
  FUN_1449db362(&local_5f0);
  *(undefined4 *)(lVar4 + 0x48) = 2;
  *(undefined1 *)(lVar4 + 0x4c) = 1;
  FUN_140a53334(local_510);
  local_5d0 = &LAB_146a8d2a0;
  local_5c8 = 0;
  FUN_146a8d1ec(local_510,param_1);
  local_650 = 0x3f800000;
  puStack_648 = &DAT_3f8000003f800000;
  local_640 = CONCAT22(local_640._2_2_,2);
  local_63c = 1;
  local_638 = 0;
  uStack_630 = 0;
  local_348 = 0x3f800000;
  uStack_344 = 0;
  uStack_340 = 0x3f800000;
  uStack_33c = 0x3f800000;
  local_338 = local_640;
  local_334 = 1;
  FUN_144a450dc(local_330,&local_638);
  FUN_1449db362(&local_638);
  local_6b8 = &local_669;
  FUN_140a554b8(local_668,"SImage",".\\Runtime/Slate/Private/Widgets/Layout/SExpandableArea.cpp",
                0x9b);
  FUN_140a52c70(local_668,&local_628,local_510);
  local_618 = local_628;
  local_610 = local_620;
  if (local_620 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_620 + 1) = (int)local_620[1] + 1;
    UNLOCK();
  }
  uVar5 = FUN_140a4fe8e(lVar4,&local_618);
  uVar5 = FUN_140a52392(local_218,uVar5);
  FUN_140a50426(&local_5d0);
  local_688 = 0x3f800000;
  local_684 = 1;
  local_680 = 0;
  uStack_678 = 0;
  lVar4 = FUN_140a5475a(&local_5d0);
  *(undefined4 *)(lVar4 + 0x48) = 2;
  *(undefined1 *)(lVar4 + 0x4c) = 1;
  uVar6 = FUN_146a07044(lVar4,param_4);
  uVar5 = FUN_140a52392(uVar5,uVar6);
  local_6b8 = &local_6a1;
  FUN_140a541dc(local_6a0,"SHorizontalBox",
                ".\\Runtime/Slate/Private/Widgets/Layout/SExpandableArea.cpp",0x95);
  FUN_140a50ec6(local_6a0,&local_5e0,uVar5);
  *param_2 = local_5e0;
  param_2[1] = local_5d8;
  if (local_5d8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5d8 + 1) = (int)local_5d8[1] + 1;
    UNLOCK();
    if (local_5d8 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_5d8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_5d8)(local_5d8);
        LOCK();
        piVar1 = (int *)((longlong)local_5d8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_5d8 + 0x10))(local_5d8);
        }
      }
    }
  }
  if (local_698 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_698 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_698)(local_698);
      LOCK();
      piVar1 = (int *)((longlong)local_698 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_698 + 0x10))(local_698);
      }
    }
  }
  FUN_140a509a6(&local_5d0);
  plVar3 = local_610;
  if (local_610 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_610 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_610)(local_610);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_620 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_620 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_620)(local_620);
      LOCK();
      piVar1 = (int *)((longlong)local_620 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_620 + 0x10))(local_620);
      }
    }
  }
  if (local_660 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_660 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_660)(local_660);
      LOCK();
      piVar1 = (int *)((longlong)local_660 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_660 + 0x10))(local_660);
      }
    }
  }
  FUN_140a55a86(local_510);
  FUN_140a509a6(local_2d8);
  FUN_145ab33da(local_218);
  plVar3 = *(longlong **)(param_4 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_6d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a8d1ec FUN_146a8d1ec body=178 status=ok
// SIG undefined FUN_146a8d1ec(void)

longlong FUN_146a8d1ec(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *(undefined4 *)(param_3 + 1);
  local_40 = *param_3;
  FUN_146abfcb8(local_50,param_2,&local_40);
  local_40 = 0;
  local_38 = CONCAT31(local_38._1_3_,1);
  local_30 = 0;
  local_28 = 0;
  FUN_140a5c3e8(&local_30,local_50);
  *(undefined1 *)(param_1 + 0x1b0) = (undefined1)local_38;
  *(undefined8 *)(param_1 + 0x1a8) = local_40;
  FUN_144a450dc(param_1 + 0x1b8,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_50);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a8d2ae FUN_146a8d2ae body=106 status=ok
// SIG undefined FUN_146a8d2ae(void)

undefined1 * FUN_146a8d2ae(longlong *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x280))(param_1,local_28);
  puVar1 = &DAT_14c96b1e1;
  if (0.0 < (float)local_20) {
    puVar1 = &DAT_14c96b238;
  }
  *param_2 = *puVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a8d34a FUN_146a8d34a body=51 status=ok
// SIG undefined FUN_146a8d34a(void)

undefined8 * FUN_146a8d34a(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  
  fVar1 = (float)FUN_14692f614(param_1 + 0x2b0);
  *param_2 = 0x3ff0000000000000;
  param_2[1] = (double)fVar1;
  return param_2;
}



// FUNCTION 146a8d446 FUN_146a8d446 body=31 status=ok
// SIG undefined FUN_146a8d446(void)

void FUN_146a8d446(longlong param_1,float param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x334);
  if ((fVar1 == param_2) && (!NAN(fVar1) && !NAN(param_2))) {
    return;
  }
  *(float *)(param_1 + 0x334) = param_2;
  FUN_140163244(fVar1,1);
  return;
}



// FUNCTION 146a8d466 FUN_146a8d466 body=8 status=ok
// SIG undefined FUN_146a8d466(void)

void FUN_146a8d466(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x268) = param_2;
  return;
}



// FUNCTION 146a8d46e FUN_146a8d46e body=102 status=ok
// SIG undefined FUN_146a8d46e(void)

void FUN_146a8d46e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 1;
  local_20 = 0;
  uStack_18 = 0;
  local_30 = param_2;
  FUN_140a5acbc(*(longlong *)(param_1 + 0x280) + 0x268,*(longlong *)(param_1 + 0x280),&local_30);
  FUN_1449db362(&local_20);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a8d4d6 thunk_FUN_140163244 body=7 status=ok
// SIG undefined thunk_FUN_140163244(void)

void thunk_FUN_140163244(undefined8 param_1)

{
  FUN_140163244(param_1,1);
  return;
}



// FUNCTION 146a8d4de thunk_FUN_140163244 body=7 status=ok
// SIG undefined thunk_FUN_140163244(void)

void thunk_FUN_140163244(undefined8 param_1)

{
  FUN_140163244(param_1,1);
  return;
}



// FUNCTION 146a8d4e6 FUN_146a8d4e6 body=111 status=ok
// SIG undefined FUN_146a8d4e6(void)

void FUN_146a8d4e6(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *(undefined4 *)(param_2 + 2);
  local_38 = *param_2;
  uStack_30 = param_2[1];
  local_24 = 1;
  local_20 = 0;
  uStack_18 = 0;
  FUN_140a5abdc(*(longlong *)(param_1 + 0x280) + 0x270,*(longlong *)(param_1 + 0x280),&local_38);
  FUN_1449db362(&local_20);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a8d556 FUN_146a8d556 body=80 status=ok
// SIG undefined FUN_146a8d556(void)

void FUN_146a8d556(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_30 = param_2[1];
  local_28 = 1;
  local_20 = 0;
  uStack_18 = 0;
  FUN_146a5de46(*(undefined8 *)(param_1 + 0x2a0));
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a8d5a8 FUN_146a8d5a8 body=80 status=ok
// SIG undefined FUN_146a8d5a8(void)

void FUN_146a8d5a8(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_30 = param_2[1];
  local_28 = 1;
  local_20 = 0;
  uStack_18 = 0;
  FUN_145ab4ba4(*(undefined8 *)(param_1 + 0x290));
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a8d5fa FUN_146a8d5fa body=84 status=ok
// SIG undefined FUN_146a8d5fa(void)

undefined8 * FUN_146a8d5fa(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140a55f88();
  *param_1 = &PTR_FUN_149f14c30;
  *(undefined4 *)(param_1 + 0x4d) = 0x3f800000;
  uVar1 = DAT_14c8463f8;
  param_1[0x4e] = DAT_14c8463f0;
  param_1[0x4f] = uVar1;
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  uVar1 = DAT_14c8463f8;
  param_1[0x51] = DAT_14c8463f0;
  param_1[0x52] = uVar1;
  *(undefined1 *)(param_1 + 0x53) = 1;
  return param_1;
}



// FUNCTION 146a8d64e FUN_146a8d64e body=304 status=ok
// SIG undefined FUN_146a8d64e(void)

void FUN_146a8d64e(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146a8d780(param_1 + 0x268,param_1,param_2 + 0x1a8);
  FUN_146a8d82e(param_1 + 0x270,param_1,param_2 + 0x1c0);
  FUN_146a8d8ac(param_1 + 0x280,param_1,param_2 + 0x1e8);
  FUN_146a8d82e(param_1 + 0x288,param_1,param_2 + 0x200);
  FUN_145aacfa4(param_1 + 0x298,param_1,param_2 + 0x228);
  local_58 = *(undefined4 *)(param_2 + 0x240);
  uStack_54 = *(undefined4 *)(param_2 + 0x244);
  uStack_50 = *(undefined4 *)(param_2 + 0x248);
  uStack_4c = *(undefined4 *)(param_2 + 0x24c);
  local_48 = *(undefined1 *)(param_2 + 0x250);
  local_40 = 0;
  local_38 = 0;
  FUN_140a5c51c(&local_40,param_2 + 600);
  FUN_140a5c650(param_1 + 0x240,param_1,&local_58);
  FUN_1449db362(&local_40);
  *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_2 + 0x268);
  *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_2 + 0x26c);
  FUN_140a58896(param_1 + 0x1e0,param_2 + 0x270);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a8d780 FUN_146a8d780 body=173 status=ok
// SIG undefined FUN_146a8d780(void)

void FUN_146a8d780(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  if (*(longlong **)(param_3 + 2) != (longlong *)0x0 && param_3[4] != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
    if (cVar1 != '\0') {
      FUN_146ac0156(param_1,param_2,param_3 + 2);
      return;
    }
  }
  if (*(char *)(param_3 + 1) != '\x01') {
    FUN_1400b73c8(param_2,param_1);
    return;
  }
  if (*(longlong **)(param_3 + 2) != (longlong *)0x0 && param_3[4] != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
    if (cVar1 != '\0') {
      if (param_3[4] == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_3 + 2);
      }
      uVar3 = (**(code **)(*plVar2 + 0x58))();
      *param_3 = uVar3;
    }
  }
  FUN_146a8d95a(param_1,param_2,param_3);
  return;
}



// FUNCTION 146a8d82e FUN_146a8d82e body=126 status=ok
// SIG undefined FUN_146a8d82e(void)

void FUN_146a8d82e(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong **)(param_3 + 0x18) != (longlong *)0x0 && *(int *)(param_3 + 0x20) != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 0x18) + 0x30))();
    if (cVar1 != '\0') {
      FUN_146ac036c(param_1,param_2,param_3 + 0x18);
      return;
    }
  }
  if (*(char *)(param_3 + 0x10) != '\x01') {
    FUN_1400b73c8(param_2,param_1);
    return;
  }
  uVar2 = FUN_140133f12(param_3);
  FUN_146ac040a(param_1,param_2,uVar2);
  return;
}



// FUNCTION 146a8d8ac FUN_146a8d8ac body=173 status=ok
// SIG undefined FUN_146a8d8ac(void)

void FUN_146a8d8ac(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  if (*(longlong **)(param_3 + 2) != (longlong *)0x0 && param_3[4] != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
    if (cVar1 != '\0') {
      FUN_146ac0632(param_1,param_2,param_3 + 2);
      return;
    }
  }
  if (*(char *)(param_3 + 1) != '\x01') {
    FUN_1400b73c8(param_2,param_1);
    return;
  }
  if (*(longlong **)(param_3 + 2) != (longlong *)0x0 && param_3[4] != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
    if (cVar1 != '\0') {
      if (param_3[4] == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_3 + 2);
      }
      uVar3 = (**(code **)(*plVar2 + 0x58))();
      *param_3 = uVar3;
    }
  }
  FUN_146ac06d0(param_1,param_2,param_3);
  return;
}



// FUNCTION 146a8d95a FUN_146a8d95a body=103 status=ok
// SIG undefined FUN_146a8d95a(void)

byte FUN_146a8d95a(float *param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  FUN_1400b73c8(param_2,param_1);
  fVar1 = *param_1;
  fVar2 = *param_3;
  if ((fVar1 != fVar2) || (NAN(fVar1) || NAN(fVar2))) {
    *param_1 = fVar2;
    FUN_14094e0ca(param_2,param_1,0,2);
  }
  return -(fVar1 != fVar2) & 1;
}



// FUNCTION 146a8d9c2 FUN_146a8d9c2 body=1585 status=ok
// SIG undefined FUN_146a8d9c2(void)

int FUN_146a8d9c2(longlong *param_1,undefined8 *param_2,float *param_3,float *param_4,
                 undefined8 param_5,int param_6,undefined8 *param_7,char param_8)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_348 [32];
  undefined8 local_328;
  int local_320;
  undefined8 *local_318;
  undefined1 local_310;
  undefined4 local_300;
  undefined8 local_2fc;
  undefined8 uStack_2f4;
  undefined4 local_2ec;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined4 local_2d8;
  undefined1 local_2d4;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined1 local_248 [8];
  undefined1 local_240 [56];
  undefined8 local_208 [29];
  undefined1 *local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined8 local_108;
  float local_100;
  float local_fc;
  float fStack_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  byte local_d4;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_348;
  fVar7 = (float)(double)param_1[0x4f] * param_3[1];
  fVar5 = (float)(double)param_1[0x4e] * *param_3;
  local_f0 = (*(float *)(param_1 + 0x4d) - fVar7) + fVar7 +
             (float)(double)param_1[0x52] * param_3[1];
  local_f4 = (*(float *)(param_1 + 0x4d) - fVar5) + fVar5 + (float)(double)param_1[0x51] * *param_3;
  local_108 = *(undefined8 *)param_3;
  local_d4 = *(byte *)(param_3 + 0xd) & 1;
  local_100 = param_3[2];
  fStack_f8 = local_100 * local_f0 + param_3[4];
  local_fc = local_100 * local_f4 + param_3[3];
  local_ec = param_3[7];
  local_e8 = param_3[8];
  fVar5 = param_3[10];
  fVar7 = param_3[9];
  local_d8 = local_f4 * local_e8 + fVar5 * local_f0 + param_3[0xc];
  local_dc = local_f4 * local_ec + fVar7 * local_f0 + param_3[0xb];
  local_e0 = local_e8 * 0.0 + fVar5;
  local_e4 = local_ec * 0.0 + fVar7;
  local_e8 = fVar5 * 0.0 + local_e8;
  local_ec = fVar7 * 0.0 + local_ec;
  local_248[0] = DAT_14c96b238;
  local_120 = (undefined1 *)0x0;
  local_118 = 0x400000000;
  local_110 = 0;
  uVar2 = (**(code **)(*param_1 + 0x238))(param_1,&local_108,local_248);
  puVar1 = local_120;
  if ((int)local_118 < 1) goto LAB_146a8df61;
  if (param_8 == '\0') {
    local_300 = 0;
  }
  else {
    local_300 = (undefined4)
                CONCAT71((int7)((ulonglong)uVar2 >> 8),*(undefined1 *)((longlong)param_1 + 0x3a));
  }
  puVar4 = local_240;
  if (local_120 != (undefined1 *)0x0) {
    puVar4 = local_120;
  }
  if ((char)param_1[0x53] == '\x01') {
    fVar5 = local_100 * 0.0;
    local_288 = CONCAT44(fStack_f8 + fVar5,fVar5 + local_fc);
    local_278 = CONCAT44(local_108._4_4_ * local_100,fVar5);
    uStack_280 = CONCAT44(fVar5,(float)local_108 * local_100);
    FUN_144b01024(&local_288,&local_258);
  }
  else {
    fVar5 = local_100 * 0.0;
    local_288 = CONCAT44(fStack_f8 + fVar5,fVar5 + local_fc);
    local_278 = CONCAT44(local_108._4_4_ * local_100,fVar5);
    uStack_280 = CONCAT44(fVar5,(float)local_108 * local_100);
    FUN_144b01024(&local_288,&local_2b8);
    fVar5 = param_4[3];
    if (uStack_2b0._4_4_ <= param_4[3]) {
      fVar5 = uStack_2b0._4_4_;
    }
    fVar7 = param_4[1];
    if (param_4[1] <= local_2b8._4_4_) {
      fVar7 = local_2b8._4_4_;
    }
    if (fVar7 <= fVar5) {
      fVar6 = param_4[2];
      if ((float)uStack_2b0 <= param_4[2]) {
        fVar6 = (float)uStack_2b0;
      }
      fVar8 = *param_4;
      if (*param_4 <= (float)local_2b8) {
        fVar8 = (float)local_2b8;
      }
      if (fVar8 <= fVar6) {
        local_258 = CONCAT44(fVar7,fVar8);
        uStack_250 = CONCAT44(fVar5,fVar6);
        goto LAB_146a8dce5;
      }
    }
    local_258 = 0;
    uStack_250 = 0;
  }
LAB_146a8dce5:
  local_2a8 = param_7[2];
  uStack_2a0 = (longlong *)param_7[3];
  local_298 = param_7[4];
  uStack_290 = param_7[5];
  local_2b8._0_4_ = (float)*param_7;
  local_2b8._4_4_ = (float)((ulonglong)*param_7 >> 0x20);
  local_2b8 = CONCAT44(*(float *)((longlong)param_1 + 0x244) * local_2b8._4_4_,
                       *(float *)(param_1 + 0x48) * (float)local_2b8);
  uStack_2b0._0_4_ = (float)param_7[1];
  uStack_2b0._4_4_ = (float)((ulonglong)param_7[1] >> 0x20);
  uStack_2b0 = CONCAT44(*(float *)((longlong)param_1 + 0x24c) * uStack_2b0._4_4_,
                        *(float *)(param_1 + 0x49) * (float)uStack_2b0);
  if ((char)local_300 == '\0') {
    (**(code **)(*param_1 + 0x1f8))(param_1,&local_2fc);
  }
  else {
    (**(code **)(*param_1 + 0x1f0))(param_1,&local_2fc);
  }
  local_2d8 = local_2ec;
  local_2e8 = local_2fc;
  uStack_2e0 = uStack_2f4;
  local_2d4 = 1;
  local_2d0 = 0;
  uStack_2c8 = 0;
  FUN_1400c0622(&local_2b8,&local_2e8);
  local_288 = local_2b8;
  uStack_280 = uStack_2b0;
  local_278 = local_2a8;
  uStack_270 = (undefined4)uStack_2a0;
  uStack_26c = uStack_2a0._4_4_;
  local_268 = (undefined4)local_298;
  uStack_264 = local_298._4_4_;
  uStack_260 = (undefined4)uStack_290;
  uStack_25c = uStack_290._4_4_;
  FUN_1449db362(&local_2d0);
  puVar3 = local_208;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = (undefined8 *)(puVar1 + 0x38);
  }
  local_320 = param_6 + 1;
  local_2b8 = *param_2;
  uStack_2b0 = param_2[1];
  local_2a8 = param_2[2];
  local_298 = param_2[4];
  uStack_290 = param_2[5];
  local_310 = (undefined1)local_300;
  local_328 = param_5;
  local_318 = &local_288;
  uStack_2a0 = param_1;
  param_6 = FUN_14016eaf2(*puVar3,&local_2b8,puVar4,&local_258);
LAB_146a8df61:
  FUN_144715780(local_240);
  if ((local_d0 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return param_6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a8e03c FUN_146a8e03c body=1203 status=ok
// SIG undefined FUN_146a8e03c(void)

void FUN_146a8e03c(longlong param_1,float *param_2,byte *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  float *local_160;
  float *local_158;
  float local_148;
  float fStack_144;
  float local_13c [3];
  undefined8 local_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  float fStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  longlong local_f0;
  longlong *local_e8;
  undefined4 local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  float fStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  char local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((*(byte *)(param_1 + 0x39) & *param_3) == 0) goto LAB_146a8e33d;
  local_13c[0] = *(float *)(param_1 + 0x280);
  local_13c[1] = 0.0;
  local_13c[2] = 0.0;
  fStack_144 = param_2[1] * (1.0 / local_13c[0]);
  local_148 = (1.0 / local_13c[0]) * *param_2;
  local_f0 = *(longlong *)(param_1 + 0x208);
  local_90 = *(char *)(local_f0 + 0x198);
  if (DAT_14c96b1e0 == '\0') {
    if (local_90 != '\0') {
      local_98 = *(ulonglong *)(local_f0 + 400);
      local_a8 = *(undefined8 *)(local_f0 + 0x180);
      uStack_a0 = *(undefined8 *)(local_f0 + 0x188);
      goto LAB_146a8e3cc;
    }
LAB_146a8e106:
    uVar3 = *(undefined1 *)(param_2 + 0xd);
    fVar9 = param_2[10] * 0.0;
    fVar6 = param_2[8] * 0.0;
    fStack_10c = param_2[9] * 0.0;
    fVar8 = param_2[7] * 0.0;
    fVar7 = param_2[9] * local_13c[0] + fVar8;
    fVar5 = fVar6 + fVar9 + param_2[0xc];
    fVar8 = fVar8 + fStack_10c + param_2[0xb];
    fVar6 = fVar6 + local_13c[0] * param_2[10];
    fVar9 = param_2[8] * local_13c[0] + fVar9;
    fStack_10c = local_13c[0] * param_2[7] + fStack_10c;
    fStack_11c = param_2[2] * 0.0;
    local_118 = param_2[4] + fStack_11c;
    fStack_11c = fStack_11c + param_2[3];
    fStack_120 = local_13c[0] * param_2[2];
    plVar4 = *(longlong **)(param_1 + 0x210);
    local_128 = local_148;
    fStack_124 = fStack_144;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      uStack_114 = 0;
      uStack_110 = 0;
      local_108 = CONCAT44(fVar7,fVar9);
      uStack_100 = CONCAT44(fVar8,fVar6);
      local_f8 = CONCAT17(local_e0._2_1_,CONCAT25((undefined2)local_e0,CONCAT14(uVar3,fVar5))) &
                 0xffffff01ffffffff;
      goto LAB_146a8e232;
    }
    uStack_114 = 0;
    uStack_110 = 0;
    local_108 = CONCAT44(fVar7,fVar9);
    uStack_100 = CONCAT44(fVar8,fVar6);
    local_f8 = CONCAT35(local_f8._5_3_,CONCAT14(uVar3,fVar5)) & 0xffffff01ffffffff;
LAB_146a8e2f3:
    local_e8 = (longlong *)0x0;
  }
  else {
    if (local_90 == '\0') goto LAB_146a8e106;
    local_a8 = *(undefined8 *)(local_f0 + 0x180);
    uStack_a0 = *(undefined8 *)(local_f0 + 0x188);
    local_98 = *(ulonglong *)(local_f0 + 400) ^ 0x80000000;
LAB_146a8e3cc:
    fVar9 = (float)*(double *)(local_f0 + 0x170);
    if (DAT_14c96b1e0 != '\0') {
      fVar9 = (0.5 - fVar9) + 0.5;
    }
    local_130 = CONCAT44((float)*(double *)(local_f0 + 0x178),fVar9);
    local_168 = &local_130;
    local_158 = param_2 + 7;
    local_128 = param_2[2];
    local_160 = &local_128;
    fStack_124 = (float)*(undefined8 *)(param_2 + 3);
    fStack_120 = (float)((ulonglong)*(undefined8 *)(param_2 + 3) >> 0x20);
    FUN_146978c22(&local_e0,&local_148,local_13c,&local_a8);
    local_f0 = *(longlong *)(param_1 + 0x208);
    plVar4 = *(longlong **)(param_1 + 0x210);
    if (plVar4 == (longlong *)0x0) {
      local_f8 = local_b0;
      local_108 = CONCAT44(uStack_bc,local_c0);
      uStack_100 = CONCAT44(uStack_b4,uStack_b8);
      local_118 = local_d0;
      uStack_114 = uStack_cc;
      uStack_110 = uStack_c8;
      fStack_10c = fStack_c4;
      local_128 = local_e0;
      fStack_124 = fStack_dc;
      fStack_120 = fStack_d8;
      fStack_11c = fStack_d4;
      goto LAB_146a8e2f3;
    }
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_f8 = local_b0;
    uStack_114 = uStack_cc;
    uStack_110 = uStack_c8;
    local_108 = CONCAT44(uStack_bc,local_c0);
    uStack_100 = CONCAT44(uStack_b4,uStack_b8);
    local_118 = local_d0;
    fStack_10c = fStack_c4;
    local_128 = local_e0;
    fStack_124 = fStack_dc;
    fStack_120 = fStack_d8;
    fStack_11c = fStack_d4;
LAB_146a8e232:
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    local_e8 = plVar4;
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
  FUN_1402018be(param_3,&local_128);
  plVar4 = local_e8;
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_e8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_e8)(local_e8);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_146a8e33d:
  if ((local_80 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a8e4f0 FUN_146a8e4f0 body=137 status=ok
// SIG undefined FUN_146a8e4f0(void)

void FUN_146a8e4f0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  FUN_146a8e57a();
  if (*(char *)(param_3 + 0x54) == '\x01') {
    iVar2 = 0;
    if (0 < *(int *)(param_3 + 0x50)) {
      iVar2 = *(int *)(param_3 + 0x50);
    }
    *(int *)(param_1 + 0x50) = iVar2;
  }
  if (*(char *)(param_3 + 0x5c) == '\x01') {
    iVar2 = 1;
    if (1 < *(int *)(param_3 + 0x58)) {
      iVar2 = *(int *)(param_3 + 0x58);
    }
    *(int *)(param_1 + 0x54) = iVar2;
  }
  if (*(char *)(param_3 + 100) == '\x01') {
    iVar2 = 0;
    if (0 < *(int *)(param_3 + 0x60)) {
      iVar2 = *(int *)(param_3 + 0x60);
    }
    *(int *)(param_1 + 0x58) = iVar2;
  }
  if (*(char *)(param_3 + 0x6c) == '\x01') {
    iVar2 = 1;
    if (1 < *(int *)(param_3 + 0x68)) {
      iVar2 = *(int *)(param_3 + 0x68);
    }
    *(int *)(param_1 + 0x5c) = iVar2;
  }
  if (*(char *)(param_3 + 0x74) == '\x01') {
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_3 + 0x70);
  }
  if (*(char *)(param_3 + 0x88) == '\x01') {
    uVar1 = *(undefined8 *)(param_3 + 0x80);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_3 + 0x78);
    *(undefined8 *)(param_1 + 0x70) = uVar1;
  }
  return;
}



// FUNCTION 146a8e57a FUN_146a8e57a body=91 status=ok
// SIG undefined FUN_146a8e57a(void)

void FUN_146a8e57a(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 *puVar1;
  
  FUN_146ac0b76();
  if (*(char *)(param_3 + 0x28) == '\x01') {
    FUN_140a55872(param_1 + 0x28,param_1 + 0x20,param_3 + 0x18);
  }
  puVar1 = (undefined4 *)(param_1 + 0x38);
  if (*(char *)(param_3 + 0x44) != '\0') {
    puVar1 = (undefined4 *)(param_3 + 0x40);
  }
  *(undefined4 *)(param_1 + 0x38) = *puVar1;
  puVar1 = (undefined4 *)(param_1 + 0x3c);
  if (*(char *)(param_3 + 0x4c) != '\0') {
    puVar1 = (undefined4 *)(param_3 + 0x48);
  }
  *(undefined4 *)(param_1 + 0x3c) = *puVar1;
  return;
}



// FUNCTION 146a8e5d6 FUN_146a8e5d6 body=193 status=ok
// SIG undefined FUN_146a8e5d6(void)

undefined8 * FUN_146a8e5d6(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140a560dc();
  *param_1 = &PTR_FUN_149f14e80;
  FUN_1446f470e(&local_20,L"Slots",1);
  param_1[0x3d] = param_1;
  param_1[0x3e] = local_20;
  param_1[0x3c] = &PTR_LAB_149f171a0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfb;
  FUN_144a88240(param_1 + 3,param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a8e698 FUN_146a8e698 body=682 status=ok
// SIG undefined FUN_146a8e698(void)

undefined8
FUN_146a8e698(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  bool bVar15;
  undefined1 auStack_c8 [32];
  code **local_a8;
  undefined8 local_98;
  undefined8 *local_90;
  code *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  undefined8 local_60;
  longlong *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar12 = *(longlong **)(param_1 + 0x10);
  bVar3 = true;
  local_98 = param_2;
  if (plVar12 == (longlong *)0x0) {
LAB_146a8e6de:
    uVar14 = 0;
    plVar12 = (longlong *)0x0;
  }
  else {
    iVar10 = (int)plVar12[1];
    do {
      if (iVar10 == 0) goto LAB_146a8e6de;
      LOCK();
      iVar9 = (int)plVar12[1];
      bVar15 = iVar10 == iVar9;
      if (bVar15) {
        *(int *)(plVar12 + 1) = iVar10 + 1;
        iVar9 = iVar10;
      }
      iVar10 = iVar9;
      UNLOCK();
    } while (!bVar15);
    uVar14 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar12 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
    LOCK();
    *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar12 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
    bVar3 = false;
  }
  local_90 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  local_90[4] = 0;
  *local_90 = &PTR_FUN_149edb640;
  local_90[1] = 0;
  local_90[2] = DAT_14c98dec8;
  lVar7 = DAT_14c98ded0;
  local_90[3] = DAT_14c98ded0;
  if (lVar7 != 0) {
    LOCK();
    piVar1 = (int *)(lVar7 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_90[5] = 0;
  local_90[6] = 0;
  local_90[7] = 0;
  *local_90 = &PTR_FUN_149f19208;
  local_90[4] = &PTR_LAB_149f19210;
  local_90[8] = 0;
  local_90[9] = 0;
  *(undefined4 *)(local_90 + 10) = param_3;
  *(undefined4 *)((longlong)local_90 + 0x54) = 1;
  *(undefined4 *)(local_90 + 0xb) = param_4;
  *(undefined4 *)((longlong)local_90 + 0x5c) = 1;
  *(undefined4 *)(local_90 + 0xc) = param_5;
  uVar6 = DAT_14c8463f8._4_4_;
  uVar5 = (undefined4)DAT_14c8463f8;
  uVar4 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(local_90 + 0xd) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)local_90 + 0x6c) = uVar4;
  *(undefined4 *)(local_90 + 0xe) = uVar5;
  *(undefined4 *)((longlong)local_90 + 0x74) = uVar6;
  if (bVar3) {
    local_90[8] = uVar14;
    local_90[9] = plVar12;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
    UNLOCK();
    plVar2 = (longlong *)local_90[9];
    local_90[8] = uVar14;
    local_90[9] = plVar12;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  uVar8 = local_98;
  uVar13 = 0xffffffff;
  if (0 < (longlong)*(int *)(param_1 + 0x200)) {
    uVar11 = 0;
    do {
      if (*(int *)(local_90 + 0xc) <
          *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x1f8) + uVar11 * 8) + 0x60)) {
        uVar13 = uVar11 & 0xffffffff;
        break;
      }
      uVar11 = uVar11 + 1;
    } while ((longlong)*(int *)(param_1 + 0x200) != uVar11);
  }
  local_60 = uVar14;
  local_58 = plVar12;
  if (bVar3) {
    local_a8 = local_88;
    local_78 = 0;
    local_68 = &PTR_LAB_149f19250;
    local_88[0] = FUN_1429043a4;
    FUN_146a8e944(local_98,&local_90,param_1 + 0x1e0,uVar13);
  }
  else {
    LOCK();
    *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
    UNLOCK();
    local_a8 = local_88;
    local_78 = 0;
    local_68 = &PTR_LAB_149f19250;
    local_88[0] = FUN_1429043a4;
    FUN_146a8e944(local_98,&local_90,param_1 + 0x1e0,uVar13);
    LOCK();
    piVar1 = (int *)((longlong)plVar12 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 146a8e944 FUN_146a8e944 body=196 status=ok
// SIG undefined FUN_146a8e944(void)

longlong *
FUN_146a8e944(longlong *param_1,longlong *param_2,longlong param_3,undefined4 param_4,
             longlong *param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  lVar1 = *param_2;
  *param_2 = 0;
  *param_1 = lVar1;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x12] = param_3;
  *(undefined4 *)(param_1 + 0x13) = param_4;
  lVar1 = *param_5;
  param_1[0x14] = lVar1;
  param_1[0x16] = 0;
  if (lVar1 != 0) {
    plVar3 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_5[2];
    }
    (**(code **)*plVar3)(0,param_1 + 0x16);
  }
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (*param_5 != 0) {
    plVar3 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  return param_1;
}



// FUNCTION 146a8ea08 FUN_146a8ea08 body=102 status=ok
// SIG undefined FUN_146a8ea08(void)

ulonglong FUN_146a8ea08(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 unaff_RSI;
  undefined7 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)*(int *)(param_1 + 0x200);
  if ((longlong)uVar4 < 1) {
LAB_146a8ea53:
    uVar4 = 0;
  }
  else {
    uVar3 = (undefined7)((ulonglong)unaff_RSI >> 8);
    if (*param_2 == *(longlong *)(**(longlong **)(param_1 + 0x1f8) + 0x10)) {
      uVar4 = CONCAT71(uVar3,1);
    }
    else {
      uVar2 = 0;
      do {
        if (uVar4 - 1 == uVar2) goto LAB_146a8ea53;
        lVar1 = uVar2 + 1;
        uVar2 = uVar2 + 1;
      } while (*param_2 != *(longlong *)((*(longlong **)(param_1 + 0x1f8))[lVar1] + 0x10));
      uVar4 = CONCAT71(uVar3,uVar2 < uVar4);
    }
    FUN_146ac0d2e(param_1 + 0x1f8);
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 146a8ea6e FUN_146a8ea6e body=503 status=ok
// SIG undefined FUN_146a8ea6e(void)

void FUN_146a8ea6e(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  bool bVar15;
  
  uVar6 = DAT_14c8463f8._4_4_;
  uVar5 = (undefined4)DAT_14c8463f8;
  uVar4 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x228) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)(param_1 + 0x22c) = uVar4;
  *(undefined4 *)(param_1 + 0x230) = uVar5;
  *(undefined4 *)(param_1 + 0x234) = uVar6;
  iVar9 = *(int *)(param_2 + 0x1b0);
  if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar9);
  }
  if (*(int *)(param_1 + 0x204) < iVar9) {
    FUN_146ac0e28();
    iVar9 = *(int *)(param_2 + 0x1b0);
  }
  if (0 < iVar9) {
    lVar13 = 0;
    do {
      plVar11 = (longlong *)(lVar13 * 0x90 + *(longlong *)(param_2 + 0x1a8));
      if (0 < (longlong)*(int *)(param_1 + 0x200)) {
        uVar14 = 0;
        do {
          if (*(int *)(*plVar11 + 0x60) <
              *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x1f8) + uVar14 * 8) + 0x60)) {
            FUN_146a8ecc0(param_1 + 0x1e0,plVar11,uVar14 & 0xffffffff);
            goto LAB_146a8eb25;
          }
          uVar14 = uVar14 + 1;
        } while ((longlong)*(int *)(param_1 + 0x200) != uVar14);
      }
      uVar8 = FUN_146a8ec66(param_1 + 0x1e0);
      uVar14 = (ulonglong)uVar8;
LAB_146a8eb25:
      plVar11 = *(longlong **)(param_1 + 0x10);
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1f8) + (longlong)(int)uVar14 * 8);
      bVar3 = true;
      if (plVar11 == (longlong *)0x0) {
LAB_146a8eb43:
        uVar12 = 0;
        plVar11 = (longlong *)0x0;
      }
      else {
        iVar9 = (int)plVar11[1];
        do {
          if (iVar9 == 0) goto LAB_146a8eb43;
          LOCK();
          iVar7 = (int)plVar11[1];
          bVar15 = iVar9 == iVar7;
          if (bVar15) {
            *(int *)(plVar11 + 1) = iVar9 + 1;
            iVar7 = iVar9;
          }
          iVar9 = iVar7;
          UNLOCK();
        } while (!bVar15);
        uVar12 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        LOCK();
        plVar10 = plVar11 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
        bVar3 = false;
      }
      *(undefined8 *)(lVar2 + 0x40) = uVar12;
      plVar10 = *(longlong **)(lVar2 + 0x48);
      if (plVar10 != plVar11) {
        if (!bVar3) {
          LOCK();
          *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
          UNLOCK();
          plVar10 = *(longlong **)(lVar2 + 0x48);
        }
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))();
          }
        }
        *(longlong **)(lVar2 + 0x48) = plVar11;
      }
      if (!bVar3) {
        LOCK();
        plVar10 = plVar11 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      FUN_1429027b0(param_1,lVar2,0);
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(param_2 + 0x1b0));
  }
  FUN_146a8ed42(param_1 + 0x238,param_2 + 0x1b8);
  FUN_146a8ed42(param_1 + 0x248,param_2 + 0x1c8);
  return;
}



// FUNCTION 146a8ec66 FUN_146a8ec66 body=90 status=ok
// SIG undefined FUN_146a8ec66(void)

int FUN_146a8ec66(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_146ac0e88(param_1 + 0x18,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8) = uVar2;
  FUN_146a8e4f0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8),param_1,param_2
               );
  return iVar1;
}



// FUNCTION 146a8ecc0 FUN_146a8ecc0 body=129 status=ok
// SIG undefined FUN_146a8ecc0(void)

void FUN_146a8ecc0(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = *param_2;
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_146ac0e88(param_1 + 0x18,iVar1);
  }
  lVar3 = (longlong)param_3;
  memmove((void *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8 + 8),
          (void *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8),
          (ulonglong)(uint)(iVar1 - param_3) << 3);
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8) = uVar2;
  FUN_146a8e4f0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8),param_1,param_2);
  return;
}



// FUNCTION 146a8ed42 FUN_146a8ed42 body=95 status=ok
// SIG undefined FUN_146a8ed42(void)

undefined8 * FUN_146a8ed42(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_146ac0ab8(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_146ac0f0e(param_1,iVar1);
      FUN_146ac0f81(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 146a8eda2 FUN_146a8eda2 body=486 status=ok
// SIG undefined FUN_146a8eda2(void)

int FUN_146a8eda2(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,undefined8 param_7,char param_8)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  int local_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0;
  undefined4 local_1c8;
  int local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  longlong *plStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188;
  undefined1 local_180 [288];
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_188 = DAT_14c96b239;
  local_60 = (undefined1 *)0x0;
  local_58 = 0x400000000;
  local_50 = 0;
  uVar5 = (**(code **)(*param_1 + 0x238))(param_1,param_3);
  local_1b8 = *param_2;
  uStack_1b4 = param_2[1];
  uStack_1b0 = param_2[2];
  uStack_1ac = param_2[3];
  local_1a8 = *(undefined8 *)(param_2 + 4);
  local_198 = *(undefined8 *)(param_2 + 8);
  uStack_190 = *(undefined8 *)(param_2 + 10);
  if (param_8 == '\0') {
    local_1c8 = 0;
  }
  else {
    local_1c8 = (undefined4)
                CONCAT71((int7)((ulonglong)uVar5 >> 8),*(undefined1 *)((longlong)param_1 + 0x3a));
  }
  iVar6 = param_6;
  plStack_1a0 = param_1;
  if (((int)local_58 != 0) && (0 < (int)local_58)) {
    lVar8 = 0;
    lVar7 = 0;
    local_1c4 = 0;
    local_1c0 = param_4;
    do {
      if ((int)param_1[0x40] <= lVar7) break;
      puVar9 = local_60;
      if (local_60 == (undefined1 *)0x0) {
        puVar9 = local_180;
      }
      if ((*(byte *)(*(longlong *)(puVar9 + lVar8 + 0x38) + 0x39) & 0x19) != 0) {
        puVar9 = puVar9 + lVar8;
        lVar2 = *(longlong *)(param_1[0x3f] + lVar7 * 8);
        cVar3 = FUN_14022ea56(param_1,param_4,puVar9);
        if (cVar3 == '\0') {
          iVar1 = *(int *)(lVar2 + 0x60);
          if (local_1c4 != iVar1) {
            param_6 = iVar6 + 1;
          }
          local_1d0 = (undefined1)local_1c8;
          local_1d8 = param_7;
          local_1e8 = param_5;
          local_1e0 = param_6;
          iVar4 = FUN_14016eaf2(*(undefined8 *)(puVar9 + 0x38),&local_1b8,puVar9,param_4);
          local_1c4 = iVar1;
          if (iVar6 < iVar4) {
            iVar6 = iVar4;
          }
        }
      }
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + 0x48;
    } while (lVar7 < (int)local_58);
  }
  FUN_144715780(local_180);
  if ((local_48 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar6;
}



// FUNCTION 146a8ef8e FUN_146a8ef8e body=392 status=ok
// SIG undefined FUN_146a8ef8e(void)

void FUN_146a8ef8e(longlong *param_1,float param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  
  if (0 < (int)param_3[1]) {
    lVar2 = param_4[1];
    lVar6 = 4;
    lVar5 = 0;
    fVar8 = 0.0;
    do {
      if ((lVar5 < (int)lVar2) && (lVar1 = *param_4, *(char *)(lVar1 + -0xc + lVar6 * 4) == '\x01'))
      {
        if ((*(int *)(lVar1 + lVar6 * 4) == 0) ||
           ((plVar4 = *(longlong **)(lVar1 + -8 + lVar6 * 4), plVar4 == (longlong *)0x0 ||
            (cVar3 = (**(code **)(*plVar4 + 0x30))(), cVar3 == '\0')))) {
          fVar7 = *(float *)(lVar1 + -0x10 + lVar6 * 4);
        }
        else {
          if (*(int *)(lVar1 + lVar6 * 4) == 0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            plVar4 = *(longlong **)(lVar1 + -8 + lVar6 * 4);
          }
          fVar7 = (float)(**(code **)(*plVar4 + 0x58))();
          *(float *)(lVar1 + -0x10 + lVar6 * 4) = fVar7;
        }
        if ((fVar7 == 0.0) && (!NAN(fVar7))) goto LAB_146a8f02f;
        fVar8 = fVar8 + fVar7;
      }
      else {
LAB_146a8f02f:
        param_2 = param_2 - *(float *)(*param_3 + lVar5 * 4);
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 6;
    } while (lVar5 < (int)param_3[1]);
    if (0 < (int)param_3[1]) {
      lVar6 = 4;
      lVar5 = 0;
      do {
        if ((lVar5 < (int)lVar2) &&
           (lVar1 = *param_4, *(char *)(lVar1 + -0xc + lVar6 * 4) == '\x01')) {
          if ((*(int *)(lVar1 + lVar6 * 4) == 0) ||
             ((plVar4 = *(longlong **)(lVar1 + -8 + lVar6 * 4), plVar4 == (longlong *)0x0 ||
              (cVar3 = (**(code **)(*plVar4 + 0x30))(), cVar3 == '\0')))) {
            fVar7 = *(float *)(lVar1 + -0x10 + lVar6 * 4);
          }
          else {
            if (*(int *)(lVar1 + lVar6 * 4) == 0) {
              plVar4 = (longlong *)0x0;
            }
            else {
              plVar4 = *(longlong **)(lVar1 + -8 + lVar6 * 4);
            }
            fVar7 = (float)(**(code **)(*plVar4 + 0x58))();
            *(float *)(lVar1 + -0x10 + lVar6 * 4) = fVar7;
          }
          if ((fVar7 == 0.0) && (!NAN(fVar7))) goto LAB_146a8f0ca;
          fVar7 = (fVar7 / fVar8) * param_2;
        }
        else {
LAB_146a8f0ca:
          fVar7 = *(float *)(*param_3 + lVar5 * 4);
        }
        *(float *)(*param_1 + lVar5 * 4) = fVar7;
        lVar5 = lVar5 + 1;
        lVar6 = lVar6 + 6;
      } while (lVar5 < (int)param_3[1]);
    }
  }
  return;
}



// FUNCTION 146a8f116 FUN_146a8f116 body=2330 status=ok
// SIG undefined FUN_146a8f116(void)

void FUN_146a8f116(longlong param_1,undefined4 *param_2,byte *param_3)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  int iVar7;
  float *pfVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  byte bVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong *plVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  undefined4 *local_1e0;
  undefined4 *local_1d8;
  byte *local_1d0;
  undefined8 local_1c8;
  byte *local_1c0;
  undefined4 *local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  ulonglong uStack_1a0;
  longlong local_198;
  ulonglong uStack_190;
  float local_180;
  float fStack_17c;
  undefined4 local_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined2 local_150;
  undefined1 uStack_14e;
  undefined5 uStack_14d;
  float local_148;
  float local_144;
  float local_140;
  undefined8 local_13c;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  byte local_11c;
  undefined2 local_11b;
  undefined1 local_119;
  undefined8 local_118;
  undefined8 uStack_110;
  ulonglong local_108;
  char local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_198 = 0;
  uStack_190 = 0;
  if (0 < (int)*(uint *)(param_1 + 0x210)) {
    uStack_190 = (ulonglong)*(uint *)(param_1 + 0x210);
    FUN_14475e4ac(&local_198,0);
    *(undefined4 *)(local_198 + -4 + (longlong)(int)uStack_190 * 4) = 0;
  }
  local_1a8 = 0;
  uStack_1a0 = 0;
  if (0 < (int)*(uint *)(param_1 + 0x220)) {
    uStack_1a0 = (ulonglong)*(uint *)(param_1 + 0x220);
    FUN_14475e4ac(&local_1a8,0);
    *(undefined4 *)(local_1a8 + -4 + (longlong)(int)uStack_1a0 * 4) = 0;
  }
  FUN_146a8ef8e(&local_198,*param_2,param_1 + 0x208,param_1 + 0x238);
  FUN_146a8ef8e(&local_1a8,param_2[1],param_1 + 0x218,param_1 + 0x248);
  if (0 < (int)uStack_190) {
    lVar5 = 0;
    fVar23 = 0.0;
    do {
      fVar16 = *(float *)(local_198 + lVar5 * 4);
      *(float *)(local_198 + lVar5 * 4) = fVar23;
      lVar5 = lVar5 + 1;
      fVar23 = fVar16 + fVar23;
    } while (lVar5 < (int)uStack_190);
  }
  if (0 < (int)uStack_1a0) {
    lVar5 = 0;
    fVar23 = 0.0;
    do {
      fVar16 = *(float *)(local_1a8 + lVar5 * 4);
      *(float *)(local_1a8 + lVar5 * 4) = fVar23;
      lVar5 = lVar5 + 1;
      fVar23 = fVar16 + fVar23;
    } while (lVar5 < (int)uStack_1a0);
  }
  iVar7 = *(int *)(param_1 + 0x200);
  if (0 < iVar7) {
    local_1b8 = param_2 + 7;
    local_1c0 = param_3 + 8;
    lVar5 = 0;
    local_1d0 = param_3;
    local_1b0 = param_1;
    do {
      pbVar6 = local_1d0;
      lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x1f8) + lVar5 * 8);
      lVar4 = *(longlong *)(lVar13 + 0x10);
      bVar3 = *(byte *)(lVar4 + 0x39);
      if ((*param_3 & bVar3) != 0) {
        fVar23 = *(float *)(local_198 + (longlong)*(int *)(lVar13 + 0x50) * 4);
        fVar16 = *(float *)(lVar13 + 0x28);
        fVar22 = *(float *)(lVar13 + 0x30);
        fVar17 = *(float *)(local_198 +
                           ((longlong)*(int *)(lVar13 + 0x54) + (longlong)*(int *)(lVar13 + 0x50)) *
                           4) - fVar23;
        iVar7 = *(int *)(lVar13 + 0x38);
        fVar18 = fVar17 - (fVar16 + fVar22);
        if (iVar7 == 0) {
LAB_146a8f37d:
          local_180 = fVar18;
          if (fVar18 <= 0.0) {
            local_180 = 0.0;
          }
        }
        else {
          pfVar8 = (float *)(lVar4 + 0x168);
          if ((*(byte *)(lVar4 + 0x31) & 0x20) == 0) {
            pfVar8 = (float *)&DAT_14c84635c;
          }
          local_180 = *pfVar8;
          if (fVar18 <= *pfVar8) {
            local_180 = fVar18;
          }
          if (local_180 <= 0.0) {
            local_180 = 0.0;
          }
          if (iVar7 != 1) {
            if (iVar7 == 3) {
              fVar16 = (fVar17 - local_180) - fVar22;
            }
            else {
              if (iVar7 != 2) goto LAB_146a8f37d;
              fVar16 = (fVar16 + (fVar17 - local_180) * 0.5) - fVar22;
            }
          }
        }
        fVar22 = *(float *)(local_1a8 + (longlong)*(int *)(lVar13 + 0x58) * 4);
        fVar17 = *(float *)(lVar13 + 0x2c);
        fVar18 = *(float *)(lVar13 + 0x34);
        fVar19 = *(float *)(local_1a8 +
                           ((longlong)*(int *)(lVar13 + 0x5c) + (longlong)*(int *)(lVar13 + 0x58)) *
                           4) - fVar22;
        iVar7 = *(int *)(lVar13 + 0x3c);
        fVar21 = fVar19 - (fVar17 + fVar18);
        if (iVar7 == 0) {
LAB_146a8f41c:
          fStack_17c = fVar21;
          if (fVar21 <= 0.0) {
            fStack_17c = 0.0;
          }
        }
        else {
          puVar9 = (undefined8 *)(lVar4 + 0x168);
          if ((*(byte *)(lVar4 + 0x31) & 0x20) == 0) {
            puVar9 = &DAT_14c84635c;
          }
          fStack_17c = *(float *)((longlong)puVar9 + 4);
          if (fVar21 <= *(float *)((longlong)puVar9 + 4)) {
            fStack_17c = fVar21;
          }
          if (fStack_17c <= 0.0) {
            fStack_17c = 0.0;
          }
          if (iVar7 != 1) {
            if (iVar7 == 3) {
              fVar17 = (fVar19 - fStack_17c) - fVar18;
            }
            else {
              if (iVar7 != 2) goto LAB_146a8f41c;
              fVar17 = (fVar17 + (fVar19 - fStack_17c) * 0.5) - fVar18;
            }
          }
        }
        fVar22 = (float)((double)fVar17 + (double)fVar22 + *(double *)(lVar13 + 0x70));
        fVar23 = (float)((double)fVar16 + (double)fVar23 + *(double *)(lVar13 + 0x68));
        local_174 = 0x3f800000;
        uVar14 = CONCAT44(fVar22,fVar23);
        local_100 = *(char *)(lVar4 + 0x198);
        local_170 = uVar14;
        if (DAT_14c96b1e0 == '\0') {
          if (local_100 == '\0') goto LAB_146a8f4b0;
          local_108 = *(ulonglong *)(lVar4 + 400);
          local_118 = *(undefined8 *)(lVar4 + 0x180);
          uStack_110 = *(undefined8 *)(lVar4 + 0x188);
LAB_146a8f764:
          fVar23 = (float)*(double *)(*(longlong *)(lVar13 + 0x10) + 0x170);
          if (DAT_14c96b1e0 != '\0') {
            fVar23 = (0.5 - fVar23) + 0.5;
          }
          local_168 = CONCAT44((float)*(double *)(*(longlong *)(lVar13 + 0x10) + 0x178),fVar23);
          local_158 = *(undefined8 *)(param_2 + 3);
          local_15c = param_2[2];
          local_1d8 = local_1b8;
          local_1e0 = &local_15c;
          local_1e8 = &local_168;
          FUN_146978c22(&local_150,&local_180,&local_174,&local_118);
          bVar11 = local_11c;
          fVar26 = local_120;
          fVar24 = local_124;
          fVar25 = local_128;
          fVar20 = local_12c;
          fVar18 = local_130;
          fVar17 = local_134;
          uVar14 = local_13c;
          fVar22 = local_140;
          fVar23 = local_144;
          fVar16 = local_148;
          uVar12 = *(undefined8 *)(lVar13 + 0x10);
          plVar15 = *(longlong **)(lVar13 + 0x18);
          param_3 = pbVar6;
          if (plVar15 == (longlong *)0x0) {
            uVar10 = CONCAT53(uStack_14d,CONCAT12(uStack_14e,local_150));
            local_15c._0_3_ = CONCAT12(local_119,local_11b);
          }
          else {
            LOCK();
            *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
            UNLOCK();
            uVar10 = CONCAT53(uStack_14d,CONCAT12(uStack_14e,local_150));
            local_15c._0_3_ = CONCAT12(local_119,local_11b);
            LOCK();
            *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
            UNLOCK();
            LOCK();
            plVar1 = plVar15 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              local_1c8 = uVar12;
              (**(code **)*plVar15)(plVar15);
              LOCK();
              piVar2 = (int *)((longlong)plVar15 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              uVar12 = local_1c8;
              if (*piVar2 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
                uVar12 = local_1c8;
              }
            }
          }
        }
        else {
          if (local_100 != '\0') {
            local_118 = *(undefined8 *)(lVar4 + 0x180);
            uStack_110 = *(undefined8 *)(lVar4 + 0x188);
            local_108 = *(ulonglong *)(lVar4 + 400) ^ 0x80000000;
            goto LAB_146a8f764;
          }
LAB_146a8f4b0:
          bVar11 = *(byte *)(param_2 + 0xd);
          fVar16 = (float)param_2[2];
          fVar17 = (float)param_2[7];
          fVar18 = (float)param_2[8];
          fVar19 = (float)param_2[10];
          fVar21 = (float)param_2[9];
          fVar26 = fVar23 * fVar18 + fVar19 * fVar22 + (float)param_2[0xc];
          fVar24 = fVar23 * fVar17 + fVar21 * fVar22 + (float)param_2[0xb];
          fVar22 = fVar22 * fVar16 + (float)param_2[4];
          fVar23 = fVar16 * fVar23 + (float)param_2[3];
          uVar10 = CONCAT44(fStack_17c,local_180);
          uVar12 = *(undefined8 *)(lVar13 + 0x10);
          plVar15 = *(longlong **)(lVar13 + 0x18);
          if (plVar15 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
            UNLOCK();
            local_15c = CONCAT22(CONCAT11(local_15c._3_1_,uStack_14e),local_150);
            LOCK();
            *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
            UNLOCK();
            LOCK();
            plVar1 = plVar15 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar15)(plVar15);
              LOCK();
              piVar2 = (int *)((longlong)plVar15 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
            }
          }
          bVar11 = bVar11 & 1;
          fVar25 = fVar18 * 0.0 + fVar19;
          fVar20 = fVar17 * 0.0 + fVar21;
          fVar18 = fVar19 * 0.0 + fVar18;
          fVar17 = fVar21 * 0.0 + fVar17;
          param_3 = local_1d0;
        }
        if ((*param_3 & bVar3) == 0) {
          if (plVar15 != (longlong *)0x0) goto LAB_146a8f6a0;
        }
        else {
          iVar7 = *(int *)(param_3 + 0x130);
          lVar13 = (longlong)iVar7;
          *(uint *)(param_3 + 0x130) = iVar7 + 1U;
          if (*(uint *)(param_3 + 0x134) < iVar7 + 1U) {
            FUN_14022ed06(local_1c0,iVar7);
            param_3 = local_1d0;
          }
          pbVar6 = *(byte **)(param_3 + 0x128);
          if (*(byte **)(param_3 + 0x128) == (byte *)0x0) {
            pbVar6 = local_1c0;
          }
          *(undefined8 *)(pbVar6 + lVar13 * 0x48) = uVar10;
          *(float *)(pbVar6 + lVar13 * 0x48 + 8) = fVar16;
          *(float *)(pbVar6 + lVar13 * 0x48 + 0xc) = fVar23;
          *(float *)(pbVar6 + lVar13 * 0x48 + 0x10) = fVar22;
          *(undefined8 *)(pbVar6 + lVar13 * 0x48 + 0x14) = uVar14;
          *(float *)(pbVar6 + lVar13 * 0x48 + 0x1c) = fVar17;
          *(float *)(pbVar6 + lVar13 * 0x48 + 0x20) = fVar18;
          *(float *)(pbVar6 + lVar13 * 0x48 + 0x24) = fVar20;
          *(float *)(pbVar6 + lVar13 * 0x48 + 0x28) = fVar25;
          *(float *)(pbVar6 + lVar13 * 0x48 + 0x2c) = fVar24;
          *(float *)(pbVar6 + lVar13 * 0x48 + 0x30) = fVar26;
          pbVar6[lVar13 * 0x48 + 0x34] = bVar11;
          *(undefined2 *)(pbVar6 + lVar13 * 0x48 + 0x35) = (undefined2)local_15c;
          pbVar6[lVar13 * 0x48 + 0x37] = local_15c._2_1_;
          *(undefined8 *)(pbVar6 + lVar13 * 0x48 + 0x38) = uVar12;
          *(longlong **)(pbVar6 + lVar13 * 0x48 + 0x40) = plVar15;
          if (plVar15 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
            UNLOCK();
LAB_146a8f6a0:
            LOCK();
            plVar1 = plVar15 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar15)(plVar15);
              LOCK();
              piVar2 = (int *)((longlong)plVar15 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
              }
            }
          }
        }
        iVar7 = *(int *)(local_1b0 + 0x200);
        param_1 = local_1b0;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar7);
  }
  if (local_1a8 != 0) {
    FUN_1400020a8();
  }
  if (local_198 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a8fa32 FUN_146a8fa32 body=188 status=ok
// SIG undefined FUN_146a8fa32(void)

void FUN_146a8fa32(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  double dVar3;
  
  FUN_146a8faee();
  uVar1 = DAT_14c8463f8;
  *(undefined8 *)(param_1 + 0x228) = DAT_14c8463f0;
  *(undefined8 *)(param_1 + 0x230) = uVar1;
  if (0 < (longlong)*(int *)(param_1 + 0x210)) {
    dVar3 = *(double *)(param_1 + 0x228);
    lVar2 = 0;
    do {
      dVar3 = dVar3 + (double)*(float *)(*(longlong *)(param_1 + 0x208) + lVar2 * 4);
      *(double *)(param_1 + 0x228) = dVar3;
      lVar2 = lVar2 + 1;
    } while (*(int *)(param_1 + 0x210) != lVar2);
  }
  if (0 < (longlong)*(int *)(param_1 + 0x220)) {
    dVar3 = *(double *)(param_1 + 0x230);
    lVar2 = 0;
    do {
      dVar3 = dVar3 + (double)*(float *)(*(longlong *)(param_1 + 0x218) + lVar2 * 4);
      *(double *)(param_1 + 0x230) = dVar3;
      lVar2 = lVar2 + 1;
    } while (*(int *)(param_1 + 0x220) != lVar2);
  }
  FUN_14697dd72(param_1,param_2);
  return;
}



// FUNCTION 146a8faee FUN_146a8faee body=327 status=ok
// SIG undefined FUN_146a8faee(void)

void FUN_146a8faee(longlong param_1,longlong *param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  
  memset((void *)*param_2,0,(longlong)(int)param_2[1] << 2);
  memset((void *)*param_3,0,(longlong)(int)param_3[1] << 2);
  cVar7 = DAT_14c96b1e1;
  if (0 < *(int *)(param_1 + 0x200)) {
    lVar8 = 0;
    do {
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x1f8) + lVar8 * 8);
      lVar10 = *(longlong *)(lVar9 + 0x10);
      if (*(char *)(lVar10 + 0x39) != cVar7) {
        fVar1 = *(float *)(lVar9 + 0x2c);
        fVar2 = *(float *)(lVar9 + 0x34);
        pfVar13 = (float *)(lVar10 + 0x168);
        if ((*(byte *)(lVar10 + 0x31) & 0x20) == 0) {
          pfVar13 = (float *)&DAT_14c84635c;
        }
        fVar14 = pfVar13[1];
        iVar4 = *(int *)(lVar9 + 0x5c);
        iVar5 = *(int *)(lVar9 + 0x54);
        iVar11 = iVar4;
        if (0 < (longlong)iVar5) {
          fVar6 = (*(float *)(lVar9 + 0x28) + *(float *)(lVar9 + 0x30) + *pfVar13) / (float)iVar5;
          lVar12 = (longlong)*(int *)(lVar9 + 0x50);
          lVar10 = iVar5 + lVar12;
          do {
            fVar3 = *(float *)(*param_2 + lVar12 * 4);
            fVar15 = fVar6;
            if (fVar6 <= fVar3) {
              fVar15 = fVar3;
            }
            *(float *)(*param_2 + lVar12 * 4) = fVar15;
            lVar12 = lVar12 + 1;
          } while (lVar12 < lVar10);
          iVar11 = *(int *)(lVar9 + 0x5c);
        }
        if (0 < iVar11) {
          fVar1 = (fVar1 + fVar2 + fVar14) / (float)iVar4;
          lVar9 = (longlong)*(int *)(lVar9 + 0x58);
          lVar10 = iVar11 + lVar9;
          do {
            fVar2 = *(float *)(*param_3 + lVar9 * 4);
            fVar14 = fVar1;
            if (fVar1 <= fVar2) {
              fVar14 = fVar2;
            }
            *(float *)(*param_3 + lVar9 * 4) = fVar14;
            lVar9 = lVar9 + 1;
          } while (lVar9 < lVar10);
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x200));
  }
  return;
}



// FUNCTION 146a8fc4c FUN_146a8fc4c body=196 status=ok
// SIG undefined FUN_146a8fc4c(void)

void FUN_146a8fc4c(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x240);
  if (iVar5 <= param_2) {
    do {
      *(uint *)(param_1 + 0x240) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x244) < iVar5 + 1U) {
        FUN_146ac0ae2(param_1 + 0x238,iVar5);
      }
      lVar3 = *(longlong *)(param_1 + 0x238);
      lVar4 = (longlong)iVar5;
      *(undefined4 *)(lVar3 + lVar4 * 0x18) = 0;
      *(undefined1 *)(lVar3 + 4 + lVar4 * 0x18) = 1;
      puVar2 = (undefined8 *)(lVar3 + 8 + lVar4 * 0x18);
      *puVar2 = 0;
      puVar2[1] = 0;
      iVar5 = *(int *)(param_1 + 0x240);
    } while (iVar5 <= param_2);
  }
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x238) + (longlong)param_2 * 0x18);
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_3 + 1);
  *puVar1 = *param_3;
  FUN_140a52b3c(puVar1 + 2,param_3 + 2);
  FUN_140163244(param_1,1);
  return;
}



// FUNCTION 146a8fd10 FUN_146a8fd10 body=196 status=ok
// SIG undefined FUN_146a8fd10(void)

void FUN_146a8fd10(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x250);
  if (iVar5 <= param_2) {
    do {
      *(uint *)(param_1 + 0x250) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x254) < iVar5 + 1U) {
        FUN_146ac0ae2(param_1 + 0x248,iVar5);
      }
      lVar3 = *(longlong *)(param_1 + 0x248);
      lVar4 = (longlong)iVar5;
      *(undefined4 *)(lVar3 + lVar4 * 0x18) = 0;
      *(undefined1 *)(lVar3 + 4 + lVar4 * 0x18) = 1;
      puVar2 = (undefined8 *)(lVar3 + 8 + lVar4 * 0x18);
      *puVar2 = 0;
      puVar2[1] = 0;
      iVar5 = *(int *)(param_1 + 0x250);
    } while (iVar5 <= param_2);
  }
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x248) + (longlong)param_2 * 0x18);
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_3 + 1);
  *puVar1 = *param_3;
  FUN_140a52b3c(puVar1 + 2,param_3 + 2);
  FUN_140163244(param_1,1);
  return;
}



// FUNCTION 146a8fdd4 FUN_146a8fdd4 body=145 status=ok
// SIG undefined FUN_146a8fdd4(void)

void FUN_146a8fdd4(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x244);
  FUN_146ac0ab8(*(undefined8 *)(param_1 + 0x238),*(undefined4 *)(param_1 + 0x240));
  *(undefined4 *)(param_1 + 0x240) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x244) != 0)) {
    FUN_146ac0fda(param_1 + 0x238);
  }
  iVar1 = *(int *)(param_1 + 0x254);
  FUN_146ac0ab8(*(undefined8 *)(param_1 + 0x248),*(undefined4 *)(param_1 + 0x250));
  *(undefined4 *)(param_1 + 0x250) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x254) != 0)) {
    FUN_146ac0fda(param_1 + 0x248);
  }
  FUN_140163244(param_1,1);
  return;
}



// FUNCTION 146a8fe66 FUN_146a8fe66 body=112 status=ok
// SIG undefined FUN_146a8fe66(void)

undefined8 * FUN_146a8fe66(undefined8 *param_1)

{
  FUN_140a560dc();
  *param_1 = &PTR_FUN_149f150c0;
  param_1[0x3c] = &PTR__purecall_149ef0700;
  param_1[0x3d] = param_1;
  FUN_1446ddc76(param_1 + 0x3e,"Children",1);
  param_1[0x3c] = &PTR_LAB_149f171f0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0x42c80000;
  return param_1;
}



// FUNCTION 146a8fed6 FUN_146a8fed6 body=134 status=ok
// SIG undefined FUN_146a8fed6(void)

undefined8 * FUN_146a8fed6(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar3 = &PTR_FUN_149edb640;
  puVar3[1] = 0;
  puVar3[2] = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  puVar3[3] = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *puVar3 = &PTR_FUN_149f19270;
  *param_2 = puVar3;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = param_1 + 0x1e0;
  *(undefined4 *)(param_2 + 4) = 0xffffffff;
  param_2[6] = 0;
  param_2[8] = 0;
  return param_2;
}



// FUNCTION 146a8ff5c FUN_146a8ff5c body=76 status=ok
// SIG undefined FUN_146a8ff5c(void)

ulonglong FUN_146a8ff5c(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  
  if (0 < (longlong)*(int *)(param_1 + 0x200)) {
    uVar1 = 0;
    do {
      if (*param_2 ==
          *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1f8) + uVar1 * 8) + 0x10)) {
        FUN_146ac1030(param_1 + 0x1f8,uVar1 & 0xffffffff);
        return uVar1 & 0xffffffff;
      }
      uVar1 = uVar1 + 1;
    } while ((longlong)*(int *)(param_1 + 0x200) != uVar1);
  }
  return 0xffffffff;
}



// FUNCTION 146a8ffa8 FUN_146a8ffa8 body=264 status=ok
// SIG undefined FUN_146a8ffa8(void)

void FUN_146a8ffa8(longlong param_1,longlong param_2)

{
  float fVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146a8d8ac(param_1 + 0x208,param_1,param_2 + 0x1b8);
  *(undefined1 *)(param_1 + 0x219) = *(undefined1 *)(param_2 + 0x1d0);
  *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(param_2 + 0x1d4);
  *(undefined1 *)(param_1 + 0x218) = *(undefined1 *)(param_2 + 0x1d8);
  fVar1 = (float)FUN_1447c7e44(*(undefined4 *)(param_2 + 0x1e0));
  *(uint *)(param_1 + 0x210) =
       ~-(uint)(fVar1 < 0.0) & (uint)fVar1 | (uint)(fVar1 + 360.0) & -(uint)(fVar1 < 0.0);
  *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_2 + 0x1dc);
  local_40 = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined8 *)(param_2 + 0x1a8) = 0;
  local_38 = *(undefined4 *)(param_2 + 0x1b0);
  local_34 = *(undefined4 *)(param_2 + 0x1b4);
  *(undefined8 *)(param_2 + 0x1b0) = 0;
  FUN_146a900b2(param_1 + 0x1e0);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a900b2 FUN_146a900b2 body=136 status=ok
// SIG undefined FUN_146a900b2(void)

void FUN_146a900b2(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = (int)param_2[1];
  iVar2 = *(int *)(param_1 + 0x20) + iVar1;
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (*(int *)(param_1 + 0x24) < iVar2) {
    FUN_146ac1184(param_1 + 0x18);
    iVar1 = (int)param_2[1];
  }
  lVar4 = *param_2;
  uVar3 = 0;
  if (iVar1 != 0) {
    lVar5 = (longlong)iVar1 * 0x18;
    do {
      FUN_146ac112a(param_1,lVar4);
      lVar4 = lVar4 + 0x18;
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
    uVar3 = (undefined4)param_2[1];
    lVar4 = *param_2;
  }
  FUN_146ac12ff(lVar4,uVar3);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146a9013c FUN_146a9013c body=105 status=ok
// SIG undefined FUN_146a9013c(void)

void FUN_146a9013c(longlong param_1,float *param_2)

{
  float fVar1;
  
  if (*(char *)(param_1 + 0x219) == '\x01') {
    fVar1 = *param_2;
    FUN_1400b73c8(param_1,param_1 + 0x208);
    if ((*(float *)(param_1 + 0x208) != fVar1) || (NAN(*(float *)(param_1 + 0x208)) || NAN(fVar1)))
    {
      *(float *)(param_1 + 0x208) = fVar1;
      FUN_14094e0ca(param_1,param_1 + 0x208,0,1);
      return;
    }
  }
  return;
}



// FUNCTION 146a901a6 FUN_146a901a6 body=151 status=ok
// SIG undefined FUN_146a901a6(void)

longlong * FUN_146a901a6(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  uVar2 = *(uint *)(param_2 + 0x200);
  if ((longlong)(int)uVar2 != 0) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar2);
    }
    FUN_146ac137a(param_1 + 2,uVar2);
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
    if (((int)param_1[0xb] == 0) || ((int)param_1[0xb] < iVar1)) {
      *(int *)(param_1 + 0xb) = iVar1;
      FUN_146ac1514(param_1 + 2);
    }
  }
  return param_1;
}



// FUNCTION 146a90242 FUN_146a90242 body=754 status=ok
// SIG undefined FUN_146a90242(void)

void FUN_146a90242(longlong *param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float *pfVar10;
  char cVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  int local_10c;
  int *local_108;
  undefined8 *local_100;
  int local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar5 = *param_1;
  iVar4 = *(int *)(lVar5 + 0x200);
  if (*(char *)(lVar5 + 0x218) == '\x01') {
    bVar6 = *(float *)(lVar5 + 0x210) < 360.0;
    iVar12 = 1;
    if (1 < iVar4) {
      iVar12 = iVar4;
    }
    fVar15 = *(float *)(lVar5 + 0x210) / (float)iVar12;
  }
  else {
    fVar15 = *(float *)(lVar5 + 0x214);
    bVar6 = false;
  }
  local_10c = 0;
  if (0 < iVar4) {
    if (bVar6) {
      fVar13 = fVar15 * 0.5;
    }
    else {
      fVar13 = 0.0;
    }
    fVar16 = *(float *)(lVar5 + 0x208) * 0.5;
    fVar13 = -(*(float *)(lVar5 + 0x20c) + fVar13);
    cVar11 = DAT_14c96b1e1;
    do {
      lVar5 = *(longlong *)(*(longlong *)(*param_1 + 0x1f8) + (longlong)local_10c * 8);
      if (*(char *)(*(longlong *)(lVar5 + 0x10) + 0x39) != cVar11) {
        local_128 = 0;
        uStack_120 = 0;
        local_138 = 0;
        uStack_130 = 0;
        local_108 = &local_10c;
        local_100 = &local_138;
        FUN_146ac16bc(param_1 + 2,&local_f4,&local_108);
        pfVar10 = (float *)&DAT_14c84635c;
        if ((*(byte *)(*(longlong *)(lVar5 + 0x10) + 0x31) & 0x20) != 0) {
          pfVar10 = (float *)(*(longlong *)(lVar5 + 0x10) + 0x168);
        }
        lVar1 = param_1[2] + (longlong)local_f4 * 0x30;
        fVar2 = pfVar10[1];
        fVar3 = *pfVar10;
        dVar8 = (double)fVar2 * 0.5;
        dVar7 = (double)fVar3 * 0.5;
        dVar9 = dVar7;
        if (dVar8 <= dVar7) {
          dVar9 = dVar8;
        }
        fVar14 = cosf(fVar13 * 0.017453292);
        *(double *)(lVar1 + 8) = (double)(fVar14 * (fVar16 - (float)dVar9) + fVar16) - dVar7;
        fVar14 = sinf(fVar13 * 0.017453292);
        *(double *)(lVar1 + 0x10) = (double)(fVar14 * (fVar16 - (float)dVar9) + fVar16) - dVar8;
        *(double *)(lVar1 + 0x18) = (double)fVar3;
        *(double *)(lVar1 + 0x20) = (double)fVar2;
        fVar13 = fVar13 - fVar15;
        (**(code **)param_1[1])(((undefined8 *)param_1[1])[1],lVar5,(double *)(lVar1 + 8));
        cVar11 = DAT_14c96b1e1;
      }
      local_10c = local_10c + 1;
    } while (local_10c < iVar4);
  }
  if ((local_f0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a90536 FUN_146a90536 body=118 status=ok
// SIG undefined FUN_146a90536(void)

void FUN_146a90536(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [16];
  undefined1 local_60 [64];
  longlong local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_146a901a6(local_70,param_1,param_2);
  FUN_146a90242(local_70);
  local_18 = 0;
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  FUN_146aa7776(local_60);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a905ae FUN_146a905ae body=82 status=ok
// SIG undefined FUN_146a905ae(void)

void FUN_146a905ae(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  code *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = &local_28;
  local_18 = FUN_14290447e;
  local_28 = param_3;
  local_20 = param_2;
  FUN_146a90536();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a90602 FUN_146a90602 body=12 status=ok
// SIG undefined FUN_146a90602(void)

void FUN_146a90602(longlong param_1)

{
  FUN_146a9060e(param_1 + 0x1e0);
  return;
}



// FUNCTION 146a9060e FUN_146a9060e body=170 status=ok
// SIG undefined FUN_146a9060e(void)

void FUN_146a9060e(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(longlong *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  local_20 = *(undefined4 *)(param_1 + 0x20);
  local_1c = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_146aa7741(0,0);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_146ac1184(param_1 + 0x18,0);
  }
  FUN_146ac19e4(&local_28);
  FUN_146ac1a1a(param_1 + 0x18,&local_28);
  FUN_146aa7741(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a906ba FUN_146a906ba body=96 status=ok
// SIG undefined FUN_146a906ba(void)

undefined4 * FUN_146a906ba(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  undefined1 *local_20;
  undefined4 **local_18;
  ulonglong local_10;
  
  uVar3 = DAT_14c8463f8._4_4_;
  uVar2 = (undefined4)DAT_14c8463f8;
  uVar1 = DAT_14c8463f0._4_4_;
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = (undefined4)DAT_14c8463f0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  local_18 = &local_28;
  local_20 = &LAB_142904922;
  local_28 = param_2;
  FUN_146a90536();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a90724 FUN_146a90724 body=34 status=ok
// SIG undefined FUN_146a90724(void)

void FUN_146a90724(undefined4 *param_1)

{
  bool bVar1;
  
  bVar1 = DAT_14c98f158 == '\x01';
  if (bVar1) {
    *param_1 = DAT_14c75ef68;
  }
  *(bool *)(param_1 + 1) = bVar1;
  return;
}



// FUNCTION 146a90746 thunk_FUN_145ff5568 body=5 status=ok
// SIG undefined thunk_FUN_145ff5568(void)

void thunk_FUN_145ff5568(longlong param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined1 auStack_48 [40];
  undefined8 uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x275) = 1;
  uStack_20 = 0;
  FUN_145787b40(DAT_14c98e618,(undefined4 *)(param_1 + 0x278));
  if (DAT_14c98f158 == '\x01') {
    fVar2 = *(float *)(param_1 + 0x284) * DAT_14c75ef68;
    fVar4 = *(float *)(param_1 + 0x280) * DAT_14c75ef68;
    fVar6 = *(float *)(param_1 + 0x27c) * DAT_14c75ef68;
    *(float *)(param_1 + 0x278) = DAT_14c75ef68 * *(float *)(param_1 + 0x278);
    *(float *)(param_1 + 0x27c) = fVar6;
    *(float *)(param_1 + 0x280) = fVar4;
    *(float *)(param_1 + 0x284) = fVar2;
  }
  uVar1 = 0;
  uVar3 = 0;
  if (*(char *)(param_1 + 0x274) == '\x01') {
    uVar3 = *(undefined4 *)(param_1 + 0x284);
  }
  if (*(char *)(param_1 + 0x272) == '\x01') {
    uVar1 = *(undefined4 *)(param_1 + 0x280);
  }
  uVar5 = 0;
  uVar7 = 0;
  if (*(char *)(param_1 + 0x273) == '\x01') {
    uVar7 = *(undefined4 *)(param_1 + 0x27c);
  }
  if (*(char *)(param_1 + 0x271) == '\x01') {
    uVar5 = *(undefined4 *)(param_1 + 0x278);
  }
  *(undefined4 *)(param_1 + 0x278) = uVar5;
  *(undefined4 *)(param_1 + 0x27c) = uVar7;
  *(undefined4 *)(param_1 + 0x280) = uVar1;
  *(undefined4 *)(param_1 + 0x284) = uVar3;
  FUN_140163244(param_1,1);
  *(undefined1 *)(param_1 + 0x275) = 0;
  if ((uStack_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a9074c FUN_146a9074c body=35 status=ok
// SIG undefined FUN_146a9074c(void)

void FUN_146a9074c(longlong param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  *(undefined1 *)(param_1 + 0x271) = param_2;
  *(undefined1 *)(param_1 + 0x272) = param_3;
  *(undefined1 *)(param_1 + 0x273) = param_4;
  *(undefined1 *)(param_1 + 0x274) = param_5;
  FUN_145ff5568();
  return;
}



// FUNCTION 146a90770 FUN_146a90770 body=11 status=ok
// SIG undefined FUN_146a90770(void)

void FUN_146a90770(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x260) = *param_2;
  *(undefined8 *)(param_1 + 0x268) = uVar1;
  return;
}



// FUNCTION 146a9077b FUN_146a9077b body=55 status=ok
// SIG undefined FUN_146a9077b(void)

void FUN_146a9077b(void)

{
  undefined8 uVar1;
  
  if (DAT_14c98f190 == 0) {
    uVar1 = FUN_1410766cb();
    DAT_14c98f190 = FUN_14171c317(FUN_1462817a3,uVar1,L"EStretch");
  }
  return;
}



// FUNCTION 146a907b2 FUN_146a907b2 body=71 status=ok
// SIG undefined FUN_146a907b2(void)

void FUN_146a907b2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140a58896(param_1 + 0x1e0);
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000146a907ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146a907fa FUN_146a907fa body=29 status=ok
// SIG undefined FUN_146a907fa(void)

void FUN_146a907fa(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x228) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x228) = param_2;
  FUN_14156c56c(param_1 + 0x1f8,1);
  return;
}



// FUNCTION 146a90818 FUN_146a90818 body=29 status=ok
// SIG undefined FUN_146a90818(void)

void FUN_146a90818(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x22c) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x22c) = param_2;
  FUN_14156c56c(param_1 + 0x1f8,1);
  return;
}



// FUNCTION 146a90836 FUN_146a90836 body=73 status=ok
// SIG undefined FUN_146a90836(void)

void FUN_146a90836(longlong param_1,int param_2)

{
  FUN_1400b73c8(param_1,param_1 + 0x268);
  if (*(int *)(param_1 + 0x268) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x268) = param_2;
  FUN_14094e0ca(param_1,param_1 + 0x268,0,0);
  return;
}



// FUNCTION 146a90880 FUN_146a90880 body=73 status=ok
// SIG undefined FUN_146a90880(void)

void FUN_146a90880(longlong param_1,int param_2)

{
  FUN_1400b73c8(param_1,param_1 + 0x26c);
  if (*(int *)(param_1 + 0x26c) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x26c) = param_2;
  FUN_14094e0ca(param_1,param_1 + 0x26c,0,0);
  return;
}



// FUNCTION 146a908ca FUN_146a908ca body=95 status=ok
// SIG undefined FUN_146a908ca(void)

void FUN_146a908ca(longlong param_1,float param_2)

{
  FUN_1400b73c8(param_1,param_1 + 0x270);
  if ((*(float *)(param_1 + 0x270) == param_2) &&
     (!NAN(*(float *)(param_1 + 0x270)) && !NAN(param_2))) {
    return;
  }
  *(float *)(param_1 + 0x270) = param_2;
  FUN_14094e0ca(param_1,param_1 + 0x270,0,0);
  return;
}



// FUNCTION 146a9092a FUN_146a9092a body=73 status=ok
// SIG undefined FUN_146a9092a(void)

void FUN_146a9092a(longlong param_1,char param_2)

{
  FUN_1400b73c8(param_1,param_1 + 0x274);
  if (*(char *)(param_1 + 0x274) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x274) = param_2;
  FUN_14094e0ca(param_1,param_1 + 0x274,0,0);
  return;
}



// FUNCTION 146a90974 FUN_146a90974 body=4599 status=ok
// SIG undefined FUN_146a90974(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_146a90974(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  bool bVar13;
  undefined1 auStack_1d38 [32];
  undefined1 *local_1d18;
  longlong *local_1d08;
  longlong *local_1d00;
  undefined8 local_1cf8;
  longlong local_1cf0;
  longlong *local_1ce8;
  undefined8 local_1ce0;
  longlong local_1cd8;
  undefined1 local_1cd0 [8];
  undefined1 local_1cc8 [23];
  undefined1 local_1cb1;
  undefined1 local_1cb0 [8];
  longlong *local_1ca8;
  undefined1 local_1c91;
  undefined1 local_1c90 [8];
  longlong *local_1c88;
  undefined1 local_1c71;
  undefined8 local_1c70;
  longlong *local_1c68;
  undefined1 local_1c51;
  undefined1 local_1c50 [8];
  longlong *local_1c48;
  undefined1 local_1c31;
  undefined8 local_1c30;
  longlong *local_1c28;
  undefined8 local_1c18;
  undefined1 local_1c10;
  undefined8 local_1c08;
  undefined8 uStack_1c00;
  undefined8 local_1bf8;
  longlong *local_1bf0;
  undefined8 local_1be8;
  longlong *local_1be0;
  undefined1 local_1bd1;
  undefined8 local_1bd0;
  longlong *local_1bc8;
  undefined1 local_1bb1;
  undefined8 local_1bb0;
  longlong *local_1ba8;
  undefined4 local_1b98;
  undefined4 uStack_1b94;
  undefined4 uStack_1b90;
  undefined4 uStack_1b8c;
  undefined1 local_1b88;
  undefined8 local_1b80;
  undefined4 local_1b78;
  undefined8 local_1b70;
  longlong *local_1b68;
  undefined8 local_1b60;
  longlong *local_1b58;
  undefined1 local_1b49;
  undefined1 local_1b48 [8];
  longlong *local_1b40;
  undefined1 local_1b29;
  undefined8 local_1b28;
  longlong *local_1b20;
  undefined8 local_1b10;
  undefined1 local_1b08;
  undefined8 local_1b00;
  undefined8 uStack_1af8;
  undefined8 local_1af0;
  longlong *local_1ae8;
  undefined8 local_1ae0;
  longlong *local_1ad8;
  undefined8 local_1ad0;
  longlong *local_1ac8;
  undefined8 local_1ac0;
  undefined1 local_1ab8;
  undefined8 local_1ab0;
  undefined8 uStack_1aa8;
  undefined8 local_1aa0;
  longlong *local_1a98;
  undefined8 local_1a90;
  longlong *local_1a88;
  undefined4 local_1a80;
  undefined1 local_1a7c;
  undefined8 local_1a78;
  undefined8 uStack_1a70;
  undefined8 local_1a68;
  longlong *local_1a60;
  undefined4 local_1a58;
  undefined4 uStack_1a54;
  undefined4 uStack_1a50;
  undefined4 uStack_1a4c;
  undefined1 local_1a48;
  undefined8 local_1a40;
  undefined4 local_1a38;
  undefined8 local_1a30;
  undefined8 local_1a28;
  undefined1 local_1a20;
  undefined8 local_1a18;
  undefined8 uStack_1a10;
  undefined8 local_1a08;
  undefined8 uStack_1a00;
  undefined1 local_19f8;
  undefined8 local_19f0;
  undefined8 uStack_19e8;
  undefined1 local_19e0 [424];
  undefined8 local_1838;
  undefined1 local_1830;
  undefined1 local_1828 [128];
  undefined8 local_17a8;
  undefined8 uStack_17a0;
  undefined1 local_1798;
  undefined8 local_1790;
  undefined8 uStack_1788;
  undefined4 local_1600;
  undefined4 local_15fc;
  undefined8 local_15d0;
  longlong *local_15c8;
  undefined1 local_14f8 [424];
  undefined4 local_1350;
  undefined4 uStack_134c;
  undefined4 uStack_1348;
  undefined4 uStack_1344;
  undefined1 local_1340;
  undefined1 local_1338 [16];
  undefined8 local_1328;
  undefined8 uStack_1320;
  undefined1 local_1318;
  undefined8 local_1310;
  undefined8 uStack_1308;
  undefined8 local_1180;
  longlong *local_1178;
  undefined1 *local_1170;
  undefined8 local_1168;
  undefined8 uStack_1160;
  undefined1 local_1158;
  undefined1 local_1150 [344];
  undefined1 local_ff8 [424];
  undefined8 local_e50;
  undefined1 local_e48;
  undefined1 local_e40 [128];
  undefined1 local_dc0 [424];
  undefined4 local_c18;
  undefined4 local_c14;
  undefined8 local_be8;
  longlong *local_be0;
  undefined1 local_b18 [424];
  undefined8 local_970;
  longlong *local_968;
  undefined8 local_960;
  longlong *local_958;
  undefined8 local_950;
  longlong *local_948;
  undefined4 local_940;
  undefined1 local_938 [424];
  undefined8 local_790;
  longlong *local_788;
  undefined4 local_780;
  undefined4 local_77c;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined1 local_768;
  undefined1 auStack_760 [80];
  undefined8 local_710;
  undefined1 local_708;
  undefined1 auStack_700 [248];
  undefined1 local_608 [192];
  undefined1 local_548 [440];
  undefined1 *local_390;
  undefined4 local_388;
  undefined8 local_1e8;
  longlong *local_1e0;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined1 local_1c0;
  undefined1 auStack_1b8 [80];
  undefined8 local_168;
  undefined1 local_160;
  undefined1 local_158 [248];
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x146a9098a;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d38;
  FUN_140328a42(param_1 + 0x310,param_2 + 0x1b0);
  FUN_146aa7fd0(param_1 + 800,param_2 + 0x1c0);
  *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(param_2 + 0x1d4);
  *(undefined1 *)(param_1 + 0x33a) = *(undefined1 *)(param_2 + 0x1d8);
  *(undefined1 *)(param_1 + 0x2a0) = *(undefined1 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x2a1) = *(undefined1 *)(param_2 + 0x71);
  FUN_140fe25fc(param_1 + 0x2a8,param_2 + 0x78);
  FUN_146a91b6c(param_1,*(undefined8 *)(param_2 + 0x1a8));
  if (*(char *)(param_2 + 0x1f0) == '\x01') {
    local_19f8 = *(undefined1 *)(param_2 + 0x1f0);
    local_1a08 = *(double *)(param_2 + 0x1e0);
    uStack_1a00 = *(double *)(param_2 + 0x1e8);
    local_19f0 = 0;
    uStack_19e8 = (ulonglong)uStack_19e8._4_4_ << 0x20;
    FUN_140a51be2(&local_19f0,param_2 + 0x1f8);
  }
  else {
    local_1a08 = (double)*(float *)(*(longlong *)(param_2 + 0x1a8) + 0x640);
    local_19f8 = 1;
    local_19f0 = 0;
    uStack_19e8 = 0;
    uStack_1a00 = local_1a08;
  }
  bVar13 = *(int *)(param_1 + 0x334) == 1;
  local_1d08 = (longlong *)CONCAT44(local_1d08._4_4_,(uint)bVar13 * 2);
  local_1d00 = (longlong *)CONCAT44(local_1d00._4_4_,(uint)!bVar13 * 2);
  *(undefined1 *)(param_1 + 0x33b) = *(undefined1 *)(param_2 + 0x1d2);
  *(undefined1 *)(param_1 + 0x33d) = *(undefined1 *)(param_2 + 0x1d3);
  *(undefined1 *)(param_1 + 0x33e) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  FUN_140a562d0(&local_390);
  plVar11 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar11 == (longlong *)0x0) {
    plVar11 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_1a30,"NoBorder",1);
  local_1a28 = (**(code **)(*plVar11 + 0x50))(plVar11,local_1a30,0,0);
  local_1a20 = 1;
  local_1a18 = 0;
  uStack_1a10 = 0;
  local_160 = 1;
  local_168 = local_1a28;
  FUN_144a450dc(local_158,&local_1a18);
  FUN_1449db362(&local_1a18);
  local_1a48 = *(undefined1 *)(param_2 + 0x218);
  local_1a58 = *(undefined4 *)(param_2 + 0x208);
  uStack_1a54 = *(undefined4 *)(param_2 + 0x20c);
  uStack_1a50 = *(undefined4 *)(param_2 + 0x210);
  uStack_1a4c = *(undefined4 *)(param_2 + 0x214);
  local_1a40 = 0;
  local_1a38 = 0;
  FUN_140a58be0(&local_1a40,param_2 + 0x220);
  local_1c0 = local_1a48;
  local_1d0 = local_1a58;
  uStack_1cc = uStack_1a54;
  uStack_1c8 = uStack_1a50;
  uStack_1c4 = uStack_1a4c;
  FUN_144a450dc(auStack_1b8,&local_1a40);
  FUN_1449db362(&local_1a40);
  FUN_1407679b0(local_548);
  FUN_145aafb3e(local_608);
  local_1a80 = 0x3f800000;
  local_1a7c = 1;
  local_1a78 = 0;
  uStack_1a70 = 0;
  local_1cf8 = FUN_140767d84(local_608);
  FUN_140a562d0(local_938);
  local_1ac0 = *(undefined8 *)(param_1 + 0x360);
  local_1ab8 = 1;
  local_1ab0 = 0;
  uStack_1aa8 = 0;
  local_708 = 1;
  local_710 = local_1ac0;
  FUN_144a450dc(auStack_700,&local_1ab0);
  FUN_1449db362(&local_1ab0);
  uVar8 = local_1d08._0_4_;
  local_780 = local_1d08._0_4_;
  uVar9 = local_1d00._0_4_;
  local_77c = local_1d00._0_4_;
  local_1328 = 0;
  uStack_1320 = 0;
  local_1318 = 1;
  local_1310 = 0;
  uStack_1308 = 0;
  local_778 = 0;
  uStack_770 = 0;
  local_768 = 1;
  FUN_144a450dc(auStack_760,&local_1310);
  FUN_1449db362(&local_1310);
  FUN_146a91c60(local_b18);
  local_940 = *(undefined4 *)(param_2 + 0x1d4);
  local_1cf0 = param_2;
  FUN_140a53a96(local_dc0);
  local_c18 = uVar8;
  local_c14 = uVar9;
  FUN_140a53334(local_ff8);
  local_1b10 = *(undefined8 *)(param_1 + 0x368);
  local_1b08 = 1;
  local_1b00 = 0;
  uStack_1af8 = 0;
  local_e48 = 1;
  local_e50 = local_1b10;
  FUN_144a450dc(local_e40,&local_1b00);
  FUN_1449db362(&local_1b00);
  local_1d18 = &local_1b29;
  FUN_140a554b8(&local_1b28,"SImage",".\\Runtime/Slate/Private/Widgets/Layout/SScrollBar.cpp",0x37);
  if (local_1b20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1b20 + 1) = (int)local_1b20[1] + 1;
    UNLOCK();
  }
  plVar11 = *(longlong **)(param_1 + 0x2c0);
  *(undefined8 *)(param_1 + 0x2b8) = local_1b28;
  *(longlong **)(param_1 + 0x2c0) = local_1b20;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar11 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  FUN_140a52c70(&local_1b28,&local_1af0,local_ff8);
  plVar11 = local_be0;
  if (local_1ae8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1ae8 + 1) = (int)local_1ae8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_1ae8 + 1) = (int)local_1ae8[1] + 1;
    UNLOCK();
  }
  local_be8 = local_1af0;
  local_1ce8 = local_1ae8;
  local_be0 = local_1ae8;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar11 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  local_1d18 = &local_1b49;
  FUN_140a53d66(local_1b48,&DAT_149efe19f,".\\Runtime/Slate/Private/Widgets/Layout/SScrollBar.cpp",
                0x33);
  FUN_140a50bf4(local_1b48,&local_1ae0,local_dc0);
  plVar5 = local_968;
  plVar11 = local_1ad8;
  if (local_1ad8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1ad8 + 1) = (int)local_1ad8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_1ad8 + 1) = (int)local_1ad8[1] + 1;
    UNLOCK();
  }
  local_970 = local_1ae0;
  local_968 = local_1ad8;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  FUN_140a562d0(&local_1328);
  local_1170 = &DAT_200000002;
  local_17a8 = 0;
  uStack_17a0 = 0;
  local_1798 = 1;
  local_1790 = 0;
  uStack_1788 = 0;
  local_1168 = 0;
  uStack_1160 = 0;
  local_1158 = 1;
  FUN_144a450dc(local_1150,&local_1790);
  FUN_1449db362(&local_1790);
  FUN_140a50678(local_14f8);
  local_1b98 = (undefined4)local_1a08;
  uStack_1b94 = local_1a08._4_4_;
  uStack_1b90 = (undefined4)uStack_1a00;
  uStack_1b8c = uStack_1a00._4_4_;
  local_1b88 = local_19f8;
  local_1b80 = 0;
  local_1b78 = 0;
  FUN_140a51be2(&local_1b80);
  local_1340 = local_1b88;
  local_1350 = local_1b98;
  uStack_134c = uStack_1b94;
  uStack_1348 = uStack_1b90;
  uStack_1344 = uStack_1b8c;
  FUN_144a450dc(local_1338,&local_1b80);
  FUN_1449db362(&local_1b80);
  local_1d18 = &local_1bb1;
  FUN_140a52ce6(&local_1bb0,"SSpacer",".\\Runtime/Slate/Private/Widgets/Layout/SScrollBar.cpp",0x42)
  ;
  if (local_1ba8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1ba8 + 1) = (int)local_1ba8[1] + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x2f0);
  *(undefined8 *)(param_1 + 0x2e8) = local_1bb0;
  *(longlong **)(param_1 + 0x2f0) = local_1ba8;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  FUN_140a50c6a(&local_1bb0,&local_1b70,local_14f8);
  plVar6 = local_1178;
  plVar5 = local_1b68;
  if (local_1b68 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1b68 + 1) = (int)local_1b68[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_1b68 + 1) = (int)local_1b68[1] + 1;
    UNLOCK();
  }
  local_1180 = local_1b70;
  local_1178 = local_1b68;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  local_1d18 = &local_1bd1;
  FUN_140a55c32(&local_1bd0,"SBorder",".\\Runtime/Slate/Private/Widgets/Layout/SScrollBar.cpp",0x3d)
  ;
  if (local_1bc8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1bc8 + 1) = (int)local_1bc8[1] + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(param_1 + 0x2e0);
  *(undefined8 *)(param_1 + 0x2d8) = local_1bd0;
  *(longlong **)(param_1 + 0x2e0) = local_1bc8;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  FUN_140a530e4(&local_1bd0,&local_1b60,&local_1328);
  plVar7 = local_958;
  plVar6 = local_1b58;
  if (local_1b58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1b58 + 1) = (int)local_1b58[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_1b58 + 1) = (int)local_1b58[1] + 1;
    UNLOCK();
  }
  local_960 = local_1b60;
  local_958 = local_1b58;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  FUN_140a53a96(&local_17a8);
  local_1600 = local_1d08._0_4_;
  local_15fc = local_1d00._0_4_;
  FUN_140a53334(local_19e0);
  local_1c18 = *(undefined8 *)(param_1 + 0x370);
  local_1c10 = 1;
  local_1c08 = 0;
  uStack_1c00 = 0;
  local_1830 = 1;
  local_1838 = local_1c18;
  FUN_144a450dc(local_1828,&local_1c08);
  FUN_1449db362(&local_1c08);
  local_1d18 = &local_1c31;
  FUN_140a554b8(&local_1c30,"SImage",".\\Runtime/Slate/Private/Widgets/Layout/SScrollBar.cpp",0x4c);
  if (local_1c28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1c28 + 1) = (int)local_1c28[1] + 1;
    UNLOCK();
  }
  plVar7 = *(longlong **)(param_1 + 0x2d0);
  *(undefined8 *)(param_1 + 0x2c8) = local_1c30;
  *(longlong **)(param_1 + 0x2d0) = local_1c28;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  FUN_140a52c70(&local_1c30,&local_1bf8,local_19e0);
  plVar2 = local_15c8;
  plVar7 = local_1bf0;
  if (local_1bf0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1bf0 + 1) = (int)local_1bf0[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_1bf0 + 1) = (int)local_1bf0[1] + 1;
    UNLOCK();
  }
  local_1d08 = plVar6;
  local_1d00 = plVar5;
  local_15d0 = local_1bf8;
  local_15c8 = local_1bf0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar2 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  local_1d18 = &local_1c51;
  FUN_140a53d66(local_1c50,&DAT_149efe19f,".\\Runtime/Slate/Private/Widgets/Layout/SScrollBar.cpp",
                0x48);
  FUN_140a50bf4(local_1c50,&local_1be8,&local_17a8);
  plVar6 = local_948;
  plVar5 = local_1be0;
  if (local_1be0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1be0 + 1) = (int)local_1be0[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_1be0 + 1) = (int)local_1be0[1] + 1;
    UNLOCK();
  }
  local_950 = local_1be8;
  local_948 = local_1be0;
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
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  FUN_146ac2802(&local_1c70,&local_1c71);
  if (local_1c68 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1c68 + 1) = (int)local_1c68[1] + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(param_1 + 0x308);
  *(undefined8 *)(param_1 + 0x300) = local_1c70;
  *(longlong **)(param_1 + 0x308) = local_1c68;
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
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  FUN_146a91d72(&local_1c70,&local_1ad0,local_b18);
  plVar2 = local_788;
  plVar6 = local_1ac8;
  if (local_1ac8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1ac8 + 1) = (int)local_1ac8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_1ac8 + 1) = (int)local_1ac8[1] + 1;
    UNLOCK();
  }
  local_790 = local_1ad0;
  local_788 = local_1ac8;
  if (plVar2 != (longlong *)0x0) {
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
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  local_1d18 = &local_1c91;
  FUN_140a55c32(local_1c90,"SBorder",".\\Runtime/Slate/Private/Widgets/Layout/SScrollBar.cpp",0x29);
  FUN_140a530e4(local_1c90,&local_1aa0,local_938);
  local_1a90 = local_1aa0;
  local_1a88 = local_1a98;
  if (local_1a98 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1a98 + 1) = (int)local_1a98[1] + 1;
    UNLOCK();
  }
  uVar12 = FUN_145aaf878(local_1cf8,&local_1a90);
  uVar12 = FUN_145aaf822(local_548,uVar12);
  local_1d18 = &local_1cb1;
  FUN_14076837c(local_1cb0,"SVerticalBox",".\\Runtime/Slate/Private/Widgets/Layout/SScrollBar.cpp",
                0x24);
  FUN_14076784c(local_1cb0,&local_1a68,uVar12);
  plVar3 = local_1e0;
  plVar2 = local_1a60;
  if (local_1a60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1a60 + 1) = (int)local_1a60[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_1a60 + 1) = (int)local_1a60[1] + 1;
    UNLOCK();
  }
  local_1e8 = local_1a68;
  local_1e0 = local_1a60;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_140a5a2ee(param_1,&local_390);
  if (plVar2 != (longlong *)0x0) {
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
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_1a60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1a60 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_1a60)(local_1a60);
      LOCK();
      piVar1 = (int *)((longlong)local_1a60 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1a60 + 0x10))(local_1a60);
      }
    }
  }
  if (local_1ca8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1ca8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_1ca8)(local_1ca8);
      LOCK();
      piVar1 = (int *)((longlong)local_1ca8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1ca8 + 0x10))(local_1ca8);
      }
    }
  }
  plVar2 = local_1a88;
  if (local_1a88 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_1a88 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_1a88)(local_1a88);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_1a98 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1a98 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_1a98)(local_1a98);
      LOCK();
      piVar1 = (int *)((longlong)local_1a98 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1a98 + 0x10))(local_1a98);
      }
    }
  }
  if (local_1c88 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1c88 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_1c88)(local_1c88);
      LOCK();
      piVar1 = (int *)((longlong)local_1c88 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1c88 + 0x10))(local_1c88);
      }
    }
  }
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
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_1ac8 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_1ac8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_1ac8)(local_1ac8);
      LOCK();
      piVar1 = (int *)((longlong)local_1ac8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1ac8 + 0x10))(local_1ac8);
      }
    }
  }
  if (local_1c68 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_1c68 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_1c68)(local_1c68);
      LOCK();
      piVar1 = (int *)((longlong)local_1c68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1c68 + 0x10))(local_1c68);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if (local_1be0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1be0 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_1be0)(local_1be0);
      LOCK();
      piVar1 = (int *)((longlong)local_1be0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1be0 + 0x10))(local_1be0);
      }
    }
  }
  plVar6 = local_1d00;
  plVar5 = local_1d08;
  if (local_1c48 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1c48 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_1c48)(local_1c48);
      LOCK();
      piVar1 = (int *)((longlong)local_1c48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1c48 + 0x10))(local_1c48);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  plVar7 = local_1ce8;
  if (local_1bf0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1bf0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_1bf0)(local_1bf0);
      LOCK();
      piVar1 = (int *)((longlong)local_1bf0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1bf0 + 0x10))(local_1bf0);
      }
    }
  }
  if (local_1c28 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1c28 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_1c28)(local_1c28);
      LOCK();
      piVar1 = (int *)((longlong)local_1c28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1c28 + 0x10))(local_1c28);
      }
    }
  }
  FUN_140a55a86(local_19e0);
  FUN_140a5660c(&local_17a8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if (local_1b58 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1b58 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_1b58)(local_1b58);
      LOCK();
      piVar1 = (int *)((longlong)local_1b58 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1b58 + 0x10))(local_1b58);
      }
    }
  }
  if (local_1bc8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1bc8 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_1bc8)(local_1bc8);
      LOCK();
      piVar1 = (int *)((longlong)local_1bc8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1bc8 + 0x10))(local_1bc8);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if (local_1b68 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1b68 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_1b68)(local_1b68);
      LOCK();
      piVar1 = (int *)((longlong)local_1b68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1b68 + 0x10))(local_1b68);
      }
    }
  }
  if (local_1ba8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1ba8 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_1ba8)(local_1ba8);
      LOCK();
      piVar1 = (int *)((longlong)local_1ba8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1ba8 + 0x10))(local_1ba8);
      }
    }
  }
  FUN_1449db362(local_1338);
  FUN_140a4ff8c(local_14f8);
  FUN_140a59028(&local_1328);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar11 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (local_1ad8 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_1ad8 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_1ad8)(local_1ad8);
      LOCK();
      piVar1 = (int *)((longlong)local_1ad8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1ad8 + 0x10))(local_1ad8);
      }
    }
  }
  if (local_1b40 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_1b40 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_1b40)(local_1b40);
      LOCK();
      piVar1 = (int *)((longlong)local_1b40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1b40 + 0x10))(local_1b40);
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
  if (local_1ae8 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_1ae8 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_1ae8)(local_1ae8);
      LOCK();
      piVar1 = (int *)((longlong)local_1ae8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1ae8 + 0x10))(local_1ae8);
      }
    }
  }
  if (local_1b20 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_1b20 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_1b20)(local_1b20);
      LOCK();
      piVar1 = (int *)((longlong)local_1b20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1b20 + 0x10))(local_1b20);
      }
    }
  }
  FUN_140a55a86(local_ff8);
  FUN_140a5660c(local_dc0);
  FUN_146a91de6(local_b18);
  FUN_140a59028(local_938);
  FUN_140767f30(local_608);
  FUN_14149255e(local_548);
  FUN_140a59028(&local_390);
  local_1ce0 = *(undefined8 *)(param_1 + 0x300);
  local_1cd8 = *(longlong *)(param_1 + 0x308);
  if (local_1cd8 != 0) {
    LOCK();
    *(int *)(local_1cd8 + 8) = *(int *)(local_1cd8 + 8) + 1;
    UNLOCK();
  }
  local_390 = &LAB_146a91e78;
  local_388 = 0;
  FUN_146a91e92(local_1cd0,&local_1ce0);
  FUN_140a52028(param_1 + 0x3a,param_1,local_1cd0);
  FUN_1449db362(local_1cc8);
  lVar10 = local_1cf0;
  FUN_146a91f18(param_1,*(undefined1 *)(local_1cf0 + 0x1d0));
  *(undefined1 *)(param_1 + 0x339) = *(undefined1 *)(lVar10 + 0x1d1);
  FUN_1449db362(&local_19f0);
  if ((local_60 ^ (ulonglong)auStack_1d38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a91b6c FUN_146a91b6c body=243 status=ok
// SIG undefined FUN_146a91b6c(void)

void FUN_146a91b6c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_278 [40];
  undefined1 local_250 [424];
  longlong local_a8;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_278;
  if (param_2 == 0) {
    FUN_146a6ef34(local_250);
    FUN_146a6f09e(local_250);
    param_2 = local_a8;
  }
  *(longlong *)(param_1 + 0x348) = param_2 + 0x430;
  *(longlong *)(param_1 + 0x350) = param_2 + 0x4e0;
  *(longlong *)(param_1 + 0x358) = param_2 + 0x590;
  lVar3 = param_2 + 0x2d0;
  lVar1 = param_2 + 0x170;
  lVar2 = param_2 + 0xc0;
  if (*(int *)(param_1 + 0x334) != 1) {
    lVar3 = param_2 + 0x380;
    lVar1 = param_2 + 0x220;
    lVar2 = param_2 + 0x10;
  }
  *(longlong *)(param_1 + 0x360) = lVar2;
  *(longlong *)(param_1 + 0x368) = lVar1;
  *(longlong *)(param_1 + 0x370) = lVar3;
  FUN_140163244(param_1,CONCAT71((int7)((ulonglong)(param_2 + 0x220) >> 8),1));
  if ((local_20 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a91c60 FUN_146a91c60 body=272 status=ok
// SIG undefined FUN_146a91c60(void)

longlong FUN_146a91c60(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined2 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  uVar3 = DAT_14c98dec8;
  *(undefined8 *)(param_1 + 0x1a8) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x1b0) = DAT_14c98ded0;
  if (lVar2 == 0) {
    *(undefined8 *)(param_1 + 0x1b8) = uVar3;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
  }
  else {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    lVar2 = DAT_14c98ded0;
    uVar3 = DAT_14c98dec8;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x1b8) = DAT_14c98dec8;
    *(longlong *)(param_1 + 0x1c0) = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      lVar2 = DAT_14c98ded0;
      UNLOCK();
      *(undefined8 *)(param_1 + 0x1c8) = DAT_14c98dec8;
      *(longlong *)(param_1 + 0x1d0) = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      goto LAB_146a91d12;
    }
  }
  *(undefined8 *)(param_1 + 0x1c8) = uVar3;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
LAB_146a91d12:
  *(undefined4 *)(param_1 + 0x1d8) = 1;
  local_30 = CONCAT11(1,DAT_14c96b23c);
  local_28 = 0;
  uStack_20 = 0;
  *(undefined2 *)(param_1 + 0x70) = local_30;
  FUN_144a450dc(param_1 + 0x78,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a91d72 FUN_146a91d72 body=115 status=ok
// SIG undefined FUN_146a91d72(void)

longlong * FUN_146a91d72(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_146a92e74(*param_1,param_3);
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



// FUNCTION 146a91de6 FUN_146a91de6 body=146 status=ok
// SIG undefined FUN_146a91de6(void)

void FUN_146a91de6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x1d0);
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
  plVar3 = *(longlong **)(param_1 + 0x1c0);
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
  plVar3 = *(longlong **)(param_1 + 0x1b0);
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
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 146a91e92 FUN_146a91e92 body=133 status=ok
// SIG undefined FUN_146a91e92(void)

undefined2 * FUN_146a91e92(undefined2 *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined4 *)(param_3 + 1);
  local_28 = *param_3;
  *param_1 = 0x100;
  FUN_146ac2ae8(param_1 + 4,param_2);
  plVar3 = *(longlong **)(param_2 + 8);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a91f18 FUN_146a91f18 body=265 status=ok
// SIG undefined FUN_146a91f18(void)

void FUN_146a91f18(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  bool bVar8;
  undefined1 auStack_98 [32];
  code *local_78;
  undefined4 local_70;
  undefined8 local_68;
  longlong *plStack_60;
  undefined1 local_50 [24];
  undefined1 local_38;
  undefined1 local_37;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(char *)(param_1 + 0x338) = param_2;
  if (param_2 == '\0') {
    plVar4 = *(longlong **)(param_1 + 0x10);
    if (plVar4 == (longlong *)0x0) {
LAB_146a91faa:
      local_68 = 0;
      plStack_60 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar4[1];
      do {
        if (iVar6 == 0) goto LAB_146a91faa;
        LOCK();
        iVar5 = (int)plVar4[1];
        bVar8 = iVar6 == iVar5;
        if (bVar8) {
          *(int *)(plVar4 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar8);
      local_68 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plStack_60 = plVar4;
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
    local_78 = FUN_146a92ccc;
    local_70 = 0;
    puVar7 = local_50;
    FUN_146a92dde(puVar7,&local_68);
  }
  else {
    puVar7 = &local_38;
    local_38 = DAT_14c96b238;
    local_37 = 1;
    local_30 = 0;
    uStack_28 = 0;
  }
  FUN_14020e622(param_1,puVar7);
  lVar3 = *(longlong *)(param_1 + 0x300);
  if (*(char *)(lVar3 + 0x214) != param_2) {
    *(char *)(lVar3 + 0x214) = param_2;
    FUN_140163244(lVar3,1);
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a92022 FUN_146a92022 body=93 status=ok
// SIG undefined FUN_146a92022(void)

void FUN_146a92022(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
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
    if (*param_1 != 0) {
      FUN_145ab0088(param_1[2],*param_1,0);
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
                    /* WARNING: Could not recover jumptable at 0x000146a92074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146a92080 FUN_146a92080 body=544 status=ok
// SIG undefined FUN_146a92080(void)

void FUN_146a92080(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d8;
  undefined1 local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined1 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_14287b372();
  lVar1 = 0x358;
  if (*(char *)(param_1 + 0x2f8) == '\0') {
    lVar1 = (ulonglong)*(byte *)(param_1 + 0x3b) * 8 + 0x348;
  }
  local_70 = *(undefined8 *)(param_1 + lVar1);
  local_68 = 1;
  local_60 = 0;
  uStack_58 = 0;
  FUN_140a5acbc(*(longlong *)(param_1 + 0x2d8) + 0x268,*(longlong *)(param_1 + 0x2d8),&local_70);
  FUN_1449db362(&local_60);
  lVar1 = *(longlong *)(param_1 + 0x2d8);
  FUN_146a922a2(param_1,local_98);
  local_88 = 1;
  local_80 = 0;
  uStack_78 = 0;
  FUN_140a5c650(lVar1 + 0x240,lVar1,local_98);
  FUN_1449db362(&local_80);
  local_dc = 0x3f800000;
  local_b4 = 0x3f800000;
  if ((*(char *)(param_1 + 0x2f8) == '\0') &&
     (local_b4 = 0x3f800000, *(char *)(param_1 + 0x3b) == '\0')) {
    if (((*(char *)(param_1 + 0x339) == '\x01') &&
        (0.0001 < *(float *)(*(longlong *)(param_1 + 0x300) + 0x20c))) ||
       (*(char *)(param_1 + 0x338) != '\0')) {
      local_b4 = 0x3f000000;
    }
    else {
      local_b4 = 0;
    }
  }
  local_c0 = &DAT_3f8000003f800000;
  local_b8 = 0x3f800000;
  local_b0 = 0;
  local_ac = 1;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_146977638(*(undefined8 *)(param_1 + 0x2b8));
  if ((*(char *)(param_1 + 0x2f8) == '\0') && (*(char *)(param_1 + 0x3b) == '\0')) {
    if (((*(char *)(param_1 + 0x339) == '\x01') &&
        (0.0001 < *(float *)(*(longlong *)(param_1 + 0x300) + 0x20c))) ||
       (*(char *)(param_1 + 0x338) != '\0')) {
      local_dc = 0x3f000000;
    }
    else {
      local_dc = 0;
    }
  }
  local_e8 = &DAT_3f8000003f800000;
  local_e0 = 0x3f800000;
  local_d8 = 0;
  local_d4 = 1;
  local_d0 = 0;
  uStack_c8 = 0;
  FUN_146977638(*(undefined8 *)(param_1 + 0x2c8));
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a922a2 FUN_146a922a2 body=202 status=ok
// SIG undefined FUN_146a922a2(void)

undefined8 * FUN_146a922a2(longlong param_1,undefined8 *param_2)

{
  double dVar1;
  float fVar2;
  
  fVar2 = 0.0;
  if ((((0.0 < *(float *)(*(longlong *)(param_1 + 0x300) + 0x20c)) &&
       (fVar2 = 1.0, *(char *)(param_1 + 0x2f8) == '\0')) && (*(char *)(param_1 + 0x3b) == '\0')) &&
     ((fVar2 = 0.75, *(char *)(param_1 + 0x33b) == '\x01' && (*(char *)(param_1 + 0x338) == '\0'))))
  {
    if (*(char *)(param_1 + 0x33e) == '\0') {
      dVar1 = (double)(**(code **)(*DAT_14c98e618 + 0x60))();
      dVar1 = (dVar1 - *(double *)(param_1 + 0x340)) + -0.2;
    }
    else {
      dVar1 = -0.2;
    }
    fVar2 = (float)(dVar1 / 0.2);
    if (1.0 <= (float)(dVar1 / 0.2)) {
      fVar2 = 1.0;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    fVar2 = 1.0 - fVar2;
  }
  *param_2 = &DAT_3f8000003f800000;
  *(undefined4 *)(param_2 + 1) = 0x3f800000;
  *(float *)((longlong)param_2 + 0xc) = fVar2;
  return param_2;
}



// FUNCTION 146a9236c FUN_146a9236c body=1049 status=ok
// SIG undefined FUN_146a9236c(void)

undefined1 * FUN_146a9236c(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  float *pfVar10;
  bool bVar11;
  float fVar12;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  longlong local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  longlong *local_120;
  float local_118;
  float local_114 [6];
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar5 = *(longlong *)(param_4 + 0x40);
  plVar6 = *(longlong **)(param_4 + 0x50);
  if (plVar6 == (longlong *)0x0) {
    if (lVar5 != DAT_14c966e98) goto LAB_146a9248d;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    if (lVar5 != DAT_14c966e98) {
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
      goto LAB_146a9248d;
    }
  }
  cVar7 = '\x01';
  pfVar10 = (float *)(*(longlong *)(param_1 + 0x300) + 0x20c);
  if (0.9999 < *pfVar10 || *pfVar10 == 0.9999) {
    cVar7 = *(char *)(*(longlong *)(param_1 + 0x300) + 0x214);
  }
  if (plVar6 != (longlong *)0x0) {
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
  if (cVar7 != '\0') {
    local_128 = *(undefined8 *)(param_1 + 0x2d8);
    plVar6 = *(longlong **)(param_1 + 0x2e0);
    if (plVar6 == (longlong *)0x0) {
      local_120 = (longlong *)0x0;
      FUN_14697e4e4(param_1,&local_118,param_3);
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      local_120 = plVar6;
      FUN_14697e4e4(param_1,&local_118,param_3);
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
    cVar7 = FUN_14697eb5c(*(undefined8 *)(param_1 + 0x2d8));
    if (cVar7 == '\0') {
      if (((*(int *)(param_1 + 0x318) != 0) && (*(longlong **)(param_1 + 0x310) != (longlong *)0x0))
         && (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x310) + 0x30))(), cVar7 != '\0')) {
        pfVar10 = &local_118;
        if (*(int *)(param_1 + 0x334) != 0) {
          pfVar10 = local_114;
        }
        *(float *)(param_1 + 0x330) = *pfVar10 * 0.5;
        *(undefined1 *)(param_1 + 0x2f8) = 1;
        FUN_146a927a8(param_1,param_3,param_4);
      }
    }
    else {
      fVar12 = 1.0 / (local_fc * local_f0 - local_f4 * local_f8);
      if (*(int *)(param_1 + 0x334) == 0) {
        local_fc = -local_f4;
      }
      else {
        local_f0 = -local_f8;
      }
      local_f0 = local_f0 * fVar12;
      local_fc = local_fc * fVar12;
      *(float *)(param_1 + 0x330) =
           *(float *)(param_4 + 0x20) * local_f0 + *(float *)(param_4 + 0x24) * local_fc +
           (-local_ec * local_f0 - local_e8 * local_fc);
      *(undefined1 *)(param_1 + 0x2f8) = 1;
    }
  }
LAB_146a9248d:
  if (*(char *)(param_1 + 0x2f8) == '\x01') {
    local_118._0_1_ = 1;
    local_f8 = (float)((uint)local_f8 & 0xffffff00);
    local_114[1] = 0.0;
    local_114[2] = 0.0;
    local_114[3] = 0.0;
    local_114[4] = 0.0;
    memset(&local_f0,0,0x88);
    local_68 = 0x20702;
    local_64 = 0;
    local_130 = *(longlong *)(param_1 + 0x10);
    if (local_130 == 0) {
LAB_146a92564:
      local_138 = 0;
      local_130 = 0;
    }
    else {
      iVar8 = *(int *)(local_130 + 8);
      do {
        if (iVar8 == 0) goto LAB_146a92564;
        LOCK();
        iVar3 = *(int *)(local_130 + 8);
        bVar11 = iVar8 == iVar3;
        if (bVar11) {
          *(int *)(local_130 + 8) = iVar8 + 1;
          iVar3 = iVar8;
        }
        iVar8 = iVar3;
        UNLOCK();
      } while (!bVar11);
      local_138 = *(undefined8 *)(param_1 + 8);
    }
    uVar9 = FUN_140592a6e(&local_118);
    uVar4 = *(undefined1 *)(param_1 + 0x33a);
    local_140 = *(longlong *)(param_1 + 0x10);
    if (local_140 == 0) {
      local_140 = 0;
      local_148 = 0;
    }
    else {
      iVar8 = *(int *)(local_140 + 8);
      local_148 = 0;
      do {
        if (iVar8 == 0) {
          local_140 = 0;
          goto LAB_146a925e1;
        }
        LOCK();
        iVar3 = *(int *)(local_140 + 8);
        bVar11 = iVar8 == iVar3;
        if (bVar11) {
          *(int *)(local_140 + 8) = iVar8 + 1;
          iVar3 = iVar8;
        }
        iVar8 = iVar3;
        UNLOCK();
      } while (!bVar11);
      local_148 = *(undefined8 *)(param_1 + 8);
    }
LAB_146a925e1:
    uVar9 = FUN_140592b68(uVar9,&local_148,uVar4,0);
    FUN_1403d4c6e(param_2,uVar9);
    FUN_14493db24(&local_118);
    if (*(char *)(param_1 + 0x33d) == '\x01') {
      param_2[0xb4] = param_2[0xb4] | 0x40;
    }
  }
  else {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a92786 FUN_146a92786 body=33 status=ok
// SIG undefined FUN_146a92786(void)

undefined1 FUN_146a92786(longlong param_1)

{
  float *pfVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  pfVar1 = (float *)(*(longlong *)(param_1 + 0x300) + 0x20c);
  if (0.9999 < *pfVar1 || *pfVar1 == 0.9999) {
    uVar2 = *(undefined1 *)(*(longlong *)(param_1 + 0x300) + 0x214);
  }
  return uVar2;
}



// FUNCTION 146a927a8 FUN_146a927a8 body=508 status=ok
// SIG undefined FUN_146a927a8(void)

void FUN_146a927a8(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  float *pfVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong *local_b0;
  float local_a8;
  float local_a4 [6];
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar3 = *(int *)(param_1 + 0x334);
  local_b8 = *(undefined8 *)(param_1 + 0x300);
  plVar4 = *(longlong **)(param_1 + 0x308);
  if (plVar4 == (longlong *)0x0) {
    local_b0 = (longlong *)0x0;
    FUN_14697e4e4(param_1,&local_a8,param_2);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_b0 = plVar4;
    FUN_14697e4e4(param_1,&local_a8,param_2);
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
  fVar8 = 1.0 / (local_8c * local_80 - local_84 * local_88);
  bVar6 = iVar3 == 0;
  if (bVar6) {
    fVar7 = -local_7c * local_80 * fVar8 - local_78 * -local_84 * fVar8;
    fVar8 = *(float *)(param_3 + 0x20) * local_80 * fVar8 +
            -local_84 * fVar8 * *(float *)(param_3 + 0x24);
  }
  else {
    fVar7 = -local_7c * -local_88 * fVar8 - local_78 * local_8c * fVar8;
    fVar8 = *(float *)(param_3 + 0x20) * -local_88 * fVar8 +
            local_8c * fVar8 * *(float *)(param_3 + 0x24);
  }
  pfVar5 = &local_a8;
  if (!bVar6) {
    pfVar5 = local_a4;
  }
  if ((*(int *)(param_1 + 0x318) != 0) &&
     (plVar4 = *(longlong **)(param_1 + 0x310), plVar4 != (longlong *)0x0)) {
    fVar8 = (fVar8 + fVar7) - *(float *)(param_1 + 0x330);
    fVar7 = *pfVar5 - *(float *)(*(longlong *)(param_1 + 0x300) + 0x210);
    if (fVar7 <= fVar8) {
      fVar8 = fVar7;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    (**(code **)(*plVar4 + 0x60))(plVar4,fVar8 / fVar7);
  }
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a929a6 FUN_146a929a6 body=308 status=ok
// SIG undefined FUN_146a929a6(void)

undefined1 * FUN_146a929a6(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar3 = *(longlong *)(param_4 + 0x40);
  plVar4 = *(longlong **)(param_4 + 0x50);
  lVar5 = DAT_14c966e98;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    lVar5 = DAT_14c966e98;
    UNLOCK();
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
  if (lVar3 == lVar5) {
    *(undefined1 *)(param_1 + 0x2f8) = 0;
    local_f8[0] = 1;
    local_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    memset(local_d0,0,0x88);
    local_48 = 0x20702;
    local_c0 = 0;
    uStack_b8 = 0;
    local_44 = 1;
    FUN_1403d4c6e(param_2,local_f8);
    FUN_14493db24(local_f8);
  }
  else {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a92adc FUN_146a92adc body=175 status=ok
// SIG undefined FUN_146a92adc(void)

undefined1 * FUN_146a92adc(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_140591fd6();
  if (cVar1 == '\0') {
LAB_146a92b16:
    uVar2 = 0;
  }
  else {
    if ((*(float *)(param_4 + 0x30) == 0.0) && (!NAN(*(float *)(param_4 + 0x30)))) {
      if ((*(float *)(param_4 + 0x34) == 0.0) && (!NAN(*(float *)(param_4 + 0x34))))
      goto LAB_146a92b16;
    }
    uVar2 = 1;
    if ((*(int *)(param_1 + 0x318) != 0) && (*(longlong **)(param_1 + 0x310) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x310) + 0x30))();
      if (cVar1 != '\0') {
        FUN_146a927a8(param_1,param_3,param_4);
      }
    }
  }
  *param_2 = uVar2;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 146a92b8c FUN_146a92b8c body=40 status=ok
// SIG undefined FUN_146a92b8c(void)

void FUN_146a92b8c(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_1403d1d7a();
  uVar1 = (**(code **)(*DAT_14c98e618 + 0x60))();
  *(undefined8 *)(param_1 + 0x340) = uVar1;
  return;
}



// FUNCTION 146a92bb4 FUN_146a92bb4 body=40 status=ok
// SIG undefined FUN_146a92bb4(void)

void FUN_146a92bb4(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_1403d1e68();
  uVar1 = (**(code **)(*DAT_14c98e618 + 0x60))();
  *(undefined8 *)(param_1 + 0x340) = uVar1;
  return;
}



// FUNCTION 146a92bdc FUN_146a92bdc body=16 status=ok
// SIG undefined FUN_146a92bdc(void)

undefined4 FUN_146a92bdc(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 0x300) + 0x208);
}



// FUNCTION 146a92bec FUN_146a92bec body=36 status=ok
// SIG undefined FUN_146a92bec(void)

float FUN_146a92bec(longlong param_1)

{
  return 1.0 - (*(float *)(*(longlong *)(param_1 + 0x300) + 0x208) +
               *(float *)(*(longlong *)(param_1 + 0x300) + 0x20c));
}



// FUNCTION 146a92c10 FUN_146a92c10 body=137 status=ok
// SIG undefined FUN_146a92c10(void)

undefined8 * FUN_146a92c10(undefined8 *param_1)

{
  FUN_140a55e66();
  *param_1 = &PTR_FUN_149f135f0;
  *(undefined2 *)(param_1 + 0x54) = 0x19;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0;
  *(undefined1 *)((longlong)param_1 + 0x33c) = DAT_14c96b1e1;
  return param_1;
}



// FUNCTION 146a92ca2 FUN_146a92ca2 body=42 status=ok
// SIG undefined FUN_146a92ca2(void)

void FUN_146a92ca2(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x33e) = 0;
  uVar1 = (**(code **)(*DAT_14c98e618 + 0x60))();
  *(undefined8 *)(param_1 + 0x340) = uVar1;
  return;
}



// FUNCTION 146a92ccc FUN_146a92ccc body=141 status=ok
// SIG undefined FUN_146a92ccc(void)

undefined1 * FUN_146a92ccc(longlong param_1,undefined1 *param_2)

{
  float *pfVar1;
  char cVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined8 unaff_RBX;
  undefined7 uVar7;
  
  cVar2 = *(char *)(param_1 + 0x39);
  uVar7 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar6 = (undefined4)CONCAT71(uVar7,*(undefined1 *)(param_1 + 0x33c));
  *param_2 = *(undefined1 *)(param_1 + 0x33c);
  cVar4 = FUN_140591fd6();
  if (cVar4 == '\0') {
    pfVar1 = (float *)(*(longlong *)(param_1 + 0x300) + 0x20c);
    if ((0.9999 < *pfVar1 || *pfVar1 == 0.9999) &&
       (*(char *)(*(longlong *)(param_1 + 0x300) + 0x214) != '\x01')) goto LAB_146a92cfa;
    puVar5 = (undefined1 *)FUN_140a51b6e(param_1 + 0x2a0);
  }
  else {
    puVar5 = &DAT_14c96b238;
  }
  uVar6 = (undefined4)CONCAT71(uVar7,*puVar5);
  *param_2 = *puVar5;
LAB_146a92cfa:
  if ((((char)uVar6 != cVar2) && (*(int *)(param_1 + 0x328) != 0)) &&
     (plVar3 = *(longlong **)(param_1 + 800), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x60))(plVar3,uVar6);
  }
  return param_2;
}



// FUNCTION 146a92d5a FUN_146a92d5a body=7 status=ok
// SIG undefined FUN_146a92d5a(void)

void FUN_146a92d5a(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x33a) = param_2;
  return;
}



// FUNCTION 146a92d62 FUN_146a92d62 body=122 status=ok
// SIG undefined FUN_146a92d62(void)

void FUN_146a92d62(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(param_1 + 0x2e8);
  local_38 = *(undefined1 *)(param_2 + 4);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_30 = 0;
  local_28 = 0;
  FUN_140a51be2(&local_30,param_2 + 6);
  FUN_140a50d48(uVar1,&local_48);
  FUN_1449db362(param_2 + 6);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a92dde FUN_146a92dde body=133 status=ok
// SIG undefined FUN_146a92dde(void)

undefined2 * FUN_146a92dde(undefined2 *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined4 *)(param_3 + 1);
  local_28 = *param_3;
  *param_1 = 0x119;
  FUN_146ac2f32(param_1 + 4,param_2);
  plVar3 = *(longlong **)(param_2 + 8);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a92e6c FUN_146a92e6c body=7 status=ok
// SIG undefined FUN_146a92e6c(void)

void FUN_146a92e6c(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x33c) = param_2;
  return;
}



// FUNCTION 146a92e74 FUN_146a92e74 body=463 status=ok
// SIG undefined FUN_146a92e74(void)

void FUN_146a92e74(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_1 + 0x208) = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x210) = 0x420c0000;
  *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_2 + 0x1d8);
  param_1 = param_1 + 0x1e0;
  local_58 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *local_58 = &PTR_FUN_149edb640;
  local_58[1] = 0;
  local_58[2] = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  local_58[3] = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *local_58 = &PTR_FUN_149f19778;
  local_50 = 0;
  uStack_48 = 0;
  FUN_146a9309c(&local_58,param_2 + 0x1a8);
  FUN_146a93044(param_1,&local_58);
  FUN_146a93124(&local_58);
  local_58 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *local_58 = &PTR_FUN_149edb640;
  local_58[1] = 0;
  local_58[2] = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  local_58[3] = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *local_58 = &PTR_FUN_149f19778;
  local_50 = 0;
  uStack_48 = 0;
  FUN_146a9309c(&local_58,param_2 + 0x1c8);
  FUN_146a93044(param_1,&local_58);
  FUN_146a93124(&local_58);
  local_58 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *local_58 = &PTR_FUN_149edb640;
  local_58[1] = 0;
  local_58[2] = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  local_58[3] = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *local_58 = &PTR_FUN_149f19778;
  local_50 = 0;
  uStack_48 = 0;
  FUN_146a9309c(&local_58,param_2 + 0x1b8);
  FUN_146a93044(param_1,&local_58);
  FUN_146a93124(&local_58);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a93044 FUN_146a93044 body=87 status=ok
// SIG undefined FUN_146a93044(void)

void FUN_146a93044(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_146ac3444(param_1 + 0x18,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8) = uVar2;
  FUN_146ac33ae(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8),param_1,param_2
               );
  return;
}



// FUNCTION 146a9309c FUN_146a9309c body=136 status=ok
// SIG undefined FUN_146a9309c(void)

longlong FUN_146a9309c(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 != 0) {
        return param_1;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      goto joined_r0x000146a930f5;
    }
    *(longlong **)(param_1 + 0x10) = plVar4;
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
  }
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 != 0) {
    return param_1;
  }
  (**(code **)*plVar5)(plVar5);
  LOCK();
  piVar1 = (int *)((longlong)plVar5 + 0xc);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  UNLOCK();
  plVar4 = plVar5;
joined_r0x000146a930f5:
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 146a93124 FUN_146a93124 body=83 status=ok
// SIG undefined FUN_146a93124(void)

void FUN_146a93124(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = (longlong *)param_1[2];
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
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146a9316c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 146a93178 FUN_146a93178 body=4157 status=ok
// SIG undefined FUN_146a93178(void)

void FUN_146a93178(longlong param_1,float *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  undefined1 uVar4;
  undefined5 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  float *local_1b0;
  float *local_1a8;
  float local_198;
  float fStack_194;
  undefined4 local_18c;
  longlong local_188;
  undefined8 local_180;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  undefined8 uStack_164;
  float fStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  longlong local_140;
  longlong *local_138;
  undefined2 local_130;
  undefined1 uStack_12e;
  undefined5 uStack_12d;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  ulonglong local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  char local_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  fVar15 = *param_2;
  fVar3 = param_2[1];
  fVar13 = *(float *)(param_1 + 0x20c);
  local_198 = fVar15;
  fStack_194 = fVar3;
  if ((fVar13 < 0.9999) || (*(char *)(param_1 + 0x214) == '\x01')) {
    fVar16 = 0.0;
    if (0.0 < fVar13) {
      fVar16 = *(float *)(param_1 + 0x210);
    }
    bVar10 = *(int *)(param_1 + 0x218) != 0;
    fVar14 = param_2[bVar10];
    fVar17 = *(float *)(param_1 + 0x208) * (fVar14 - fVar16);
    local_198 = fVar17;
    if (bVar10) {
      local_198 = fVar15;
      fStack_194 = fVar17;
    }
    lVar8 = **(longlong **)(param_1 + 0x1f8);
    local_18c = 0x3f800000;
    local_188 = 0;
    lVar6 = *(longlong *)(lVar8 + 0x10);
    local_e0 = *(char *)(lVar6 + 0x198);
    if (DAT_14c96b1e0 == '\0') {
      if (local_e0 != '\0') {
        local_e8 = *(ulonglong *)(lVar6 + 400);
        local_f8 = *(undefined8 *)(lVar6 + 0x180);
        uStack_f0 = *(undefined8 *)(lVar6 + 0x188);
        goto LAB_146a93d0b;
      }
LAB_146a932bf:
      uVar4 = *(undefined1 *)(param_2 + 0xd);
      fStack_170 = param_2[2];
      fVar11 = param_2[8] * 0.0;
      fVar12 = fVar11 + param_2[10];
      fVar18 = param_2[10] * 0.0;
      fVar20 = param_2[7] * 0.0;
      fVar21 = fVar20 + param_2[9];
      fStack_15c = param_2[9] * 0.0;
      fVar11 = fVar11 + fVar18 + param_2[0xc];
      fVar20 = fVar20 + fStack_15c + param_2[0xb];
      fVar18 = fVar18 + param_2[8];
      local_168 = param_2[4] + fStack_170 * 0.0;
      fStack_16c = fStack_170 * 0.0 + param_2[3];
      fStack_15c = fStack_15c + param_2[7];
      local_140 = *(undefined8 *)(lVar8 + 0x10);
      plVar9 = *(longlong **)(lVar8 + 0x18);
      local_178 = local_198;
      fStack_174 = fStack_194;
      if (plVar9 == (longlong *)0x0) {
        uStack_164._0_4_ = 0;
        uStack_164._4_4_ = 0;
        local_158 = CONCAT44(fVar21,fVar18);
        uStack_150 = CONCAT44(fVar20,fVar12);
        local_148 = CONCAT35(local_148._5_3_,CONCAT14(uVar4,fVar11)) & 0xffffff01ffffffff;
        local_138 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        uStack_164._0_4_ = 0;
        uStack_164._4_4_ = 0;
        local_158 = CONCAT44(fVar21,fVar18);
        uStack_150 = CONCAT44(fVar20,fVar12);
        local_148 = CONCAT17(uStack_12e,CONCAT25(local_130,CONCAT14(uVar4,fVar11))) &
                    0xffffff01ffffffff;
LAB_146a933e0:
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar9 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        local_138 = plVar9;
        if ((int)*plVar1 == 0) {
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
    }
    else {
      if (local_e0 == '\0') goto LAB_146a932bf;
      local_f8 = *(undefined8 *)(lVar6 + 0x180);
      uStack_f0 = *(undefined8 *)(lVar6 + 0x188);
      local_e8 = *(ulonglong *)(lVar6 + 400) ^ 0x80000000;
LAB_146a93d0b:
      fVar11 = (float)*(double *)(*(longlong *)(lVar8 + 0x10) + 0x170);
      if (DAT_14c96b1e0 != '\0') {
        fVar11 = (0.5 - fVar11) + 0.5;
      }
      local_180 = CONCAT44((float)*(double *)(*(longlong *)(lVar8 + 0x10) + 0x178),fVar11);
      local_1b8 = &local_180;
      local_1a8 = param_2 + 7;
      local_178 = param_2[2];
      local_1b0 = &local_178;
      fStack_174 = (float)*(undefined8 *)(param_2 + 3);
      fStack_170 = (float)((ulonglong)*(undefined8 *)(param_2 + 3) >> 0x20);
      FUN_146978c22(&local_130,&local_198,&local_18c,&local_f8);
      local_140 = *(undefined8 *)(lVar8 + 0x10);
      plVar9 = *(longlong **)(lVar8 + 0x18);
      local_168 = (float)local_120;
      uStack_164._0_4_ = (undefined4)((ulonglong)local_120 >> 0x20);
      uStack_164._4_4_ = (undefined4)uStack_118;
      fStack_15c = (float)((ulonglong)uStack_118 >> 0x20);
      fStack_174 = (float)((uint5)uStack_12d >> 8);
      fStack_170 = (float)uStack_128;
      fStack_16c = (float)((ulonglong)uStack_128 >> 0x20);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        local_148 = local_100;
        local_158 = local_110;
        uStack_150 = uStack_108;
        local_178 = (float)CONCAT53(uStack_12d,CONCAT12(uStack_12e,local_130));
        goto LAB_146a933e0;
      }
      local_148 = local_100;
      local_158 = local_110;
      uStack_150 = uStack_108;
      local_178 = (float)CONCAT53(uStack_12d,CONCAT12(uStack_12e,local_130));
      local_138 = (longlong *)0x0;
    }
    fVar16 = fVar16 + fVar13 * (fVar14 - fVar16);
    FUN_1402018be(param_3);
    plVar9 = local_138;
    if (local_138 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_138 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_138)(local_138);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    uVar7 = 0;
    fVar13 = fVar17 + fVar16;
    bVar10 = *(int *)(param_1 + 0x218) == 0;
    if (bVar10) {
      local_198 = *param_2 - fVar13;
      fStack_194 = fVar3;
    }
    else {
      local_198 = fVar15;
      fStack_194 = param_2[1] - fVar13;
    }
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1f8) + 8);
    if (bVar10) {
      uVar7 = (ulonglong)(uint)fVar13;
      fVar13 = 0.0;
    }
    local_18c = 0x3f800000;
    local_188 = ((ulonglong)(uint)fVar13 << 0x20) + uVar7;
    lVar6 = *(longlong *)(lVar8 + 0x10);
    local_e0 = *(char *)(lVar6 + 0x198);
    if (DAT_14c96b1e0 == '\0') {
      if (local_e0 != '\0') {
        local_e8 = *(ulonglong *)(lVar6 + 400);
        local_f8 = *(undefined8 *)(lVar6 + 0x180);
        uStack_f0 = *(undefined8 *)(lVar6 + 0x188);
        goto LAB_146a93e34;
      }
LAB_146a9357f:
      fVar20 = (float)uVar7;
      uVar4 = *(undefined1 *)(param_2 + 0xd);
      fStack_170 = param_2[2];
      fStack_15c = param_2[7];
      fVar14 = param_2[8];
      fVar11 = param_2[10];
      fVar12 = param_2[9];
      fVar18 = fVar20 * fVar14 + fVar11 * fVar13 + param_2[0xc];
      fVar21 = fVar20 * fStack_15c + fVar12 * fVar13 + param_2[0xb];
      fVar19 = fVar14 * 0.0 + fVar11;
      fVar22 = fStack_15c * 0.0 + fVar12;
      fVar14 = fVar11 * 0.0 + fVar14;
      local_168 = fVar13 * fStack_170 + param_2[4];
      fStack_16c = fVar20 * fStack_170 + param_2[3];
      fStack_15c = fVar12 * 0.0 + fStack_15c;
      local_140 = *(undefined8 *)(lVar8 + 0x10);
      plVar9 = *(longlong **)(lVar8 + 0x18);
      local_178 = local_198;
      fStack_174 = fStack_194;
      uStack_164 = local_188;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        local_158 = CONCAT44(fVar22,fVar14);
        uStack_150 = CONCAT44(fVar21,fVar19);
        local_148 = CONCAT17(uStack_12e,CONCAT25(local_130,CONCAT14(uVar4,fVar18))) &
                    0xffffff01ffffffff;
        goto LAB_146a936be;
      }
      local_158 = CONCAT44(fVar22,fVar14);
      uStack_150 = CONCAT44(fVar21,fVar19);
      local_148 = CONCAT35(local_148._5_3_,CONCAT14(uVar4,fVar18)) & 0xffffff01ffffffff;
LAB_146a93785:
      local_138 = (longlong *)0x0;
    }
    else {
      if (local_e0 == '\0') goto LAB_146a9357f;
      local_f8 = *(undefined8 *)(lVar6 + 0x180);
      uStack_f0 = *(undefined8 *)(lVar6 + 0x188);
      local_e8 = *(ulonglong *)(lVar6 + 400) ^ 0x80000000;
LAB_146a93e34:
      fVar13 = (float)*(double *)(*(longlong *)(lVar8 + 0x10) + 0x170);
      if (DAT_14c96b1e0 != '\0') {
        fVar13 = (0.5 - fVar13) + 0.5;
      }
      local_180 = CONCAT44((float)*(double *)(*(longlong *)(lVar8 + 0x10) + 0x178),fVar13);
      local_1b8 = &local_180;
      local_1a8 = param_2 + 7;
      local_178 = param_2[2];
      fStack_174 = (float)*(undefined8 *)(param_2 + 3);
      fStack_170 = (float)((ulonglong)*(undefined8 *)(param_2 + 3) >> 0x20);
      local_1b0 = &local_178;
      FUN_146978c22(&local_130,&local_198,&local_18c,&local_f8);
      local_140 = *(undefined8 *)(lVar8 + 0x10);
      plVar9 = *(longlong **)(lVar8 + 0x18);
      local_168 = (float)local_120;
      uStack_164._0_4_ = (undefined4)((ulonglong)local_120 >> 0x20);
      uStack_164._4_4_ = (undefined4)uStack_118;
      fStack_15c = (float)((ulonglong)uStack_118 >> 0x20);
      fStack_174 = (float)((uint5)uStack_12d >> 8);
      fStack_170 = (float)uStack_128;
      fStack_16c = (float)((ulonglong)uStack_128 >> 0x20);
      if (plVar9 == (longlong *)0x0) {
        local_148 = local_100;
        local_158 = local_110;
        uStack_150 = uStack_108;
        local_178 = (float)CONCAT53(uStack_12d,CONCAT12(uStack_12e,local_130));
        goto LAB_146a93785;
      }
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      local_148 = local_100;
      local_158 = local_110;
      uStack_150 = uStack_108;
      local_178 = (float)CONCAT53(uStack_12d,CONCAT12(uStack_12e,local_130));
LAB_146a936be:
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar9 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      local_138 = plVar9;
      if ((int)*plVar1 == 0) {
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
    FUN_1402018be(param_3,&local_178);
    plVar9 = local_138;
    if (local_138 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_138 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_138)(local_138);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    uVar7 = 0;
    bVar10 = *(int *)(param_1 + 0x218) == 0;
    local_198 = fVar15;
    fStack_194 = fVar16;
    if (bVar10) {
      local_198 = fVar16;
      fStack_194 = fVar3;
    }
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1f8) + 0x10);
    if (bVar10) {
      uVar7 = (ulonglong)(uint)fVar17;
      fVar17 = 0.0;
    }
    local_18c = 0x3f800000;
    local_188 = uVar7 + ((ulonglong)(uint)fVar17 << 0x20);
    lVar6 = *(longlong *)(lVar8 + 0x10);
    local_e0 = *(char *)(lVar6 + 0x198);
    if (DAT_14c96b1e0 == '\0') {
      if (local_e0 != '\0') {
        local_e8 = *(ulonglong *)(lVar6 + 400);
        local_f8 = *(undefined8 *)(lVar6 + 0x180);
        uStack_f0 = *(undefined8 *)(lVar6 + 0x188);
LAB_146a93f5a:
        fVar15 = (float)*(double *)(lVar6 + 0x170);
        if (DAT_14c96b1e0 != '\0') {
          fVar15 = (0.5 - fVar15) + 0.5;
        }
        local_180 = CONCAT44((float)*(double *)(lVar6 + 0x178),fVar15);
        local_178 = param_2[2];
        fStack_174 = (float)*(undefined8 *)(param_2 + 3);
        fStack_170 = (float)((ulonglong)*(undefined8 *)(param_2 + 3) >> 0x20);
        goto LAB_146a93fc4;
      }
    }
    else if (local_e0 != '\0') {
      local_f8 = *(undefined8 *)(lVar6 + 0x180);
      uStack_f0 = *(undefined8 *)(lVar6 + 0x188);
      local_e8 = *(ulonglong *)(lVar6 + 400) ^ 0x80000000;
      goto LAB_146a93f5a;
    }
    fVar16 = (float)uVar7;
    uVar4 = *(undefined1 *)(param_2 + 0xd);
    fStack_170 = param_2[2];
    fStack_15c = param_2[7];
    fVar15 = param_2[8];
    fVar3 = param_2[10];
    fVar13 = param_2[9];
    fVar14 = fVar16 * fVar15 + fVar3 * fVar17 + param_2[0xc];
    fVar11 = fVar16 * fStack_15c + fVar13 * fVar17 + param_2[0xb];
    fVar12 = fVar15 * 0.0 + fVar3;
    fVar20 = fStack_15c * 0.0 + fVar13;
    fVar15 = fVar3 * 0.0 + fVar15;
    fStack_15c = fVar13 * 0.0 + fStack_15c;
    local_168 = fVar17 * fStack_170 + param_2[4];
    fStack_16c = fVar16 * fStack_170 + param_2[3];
    plVar9 = *(longlong **)(lVar8 + 0x18);
    if (plVar9 == (longlong *)0x0) {
      local_158 = CONCAT44(fVar20,fVar15);
      uStack_150 = CONCAT44(fVar11,fVar12);
      local_148 = CONCAT35(local_148._5_3_,CONCAT14(uVar4,fVar14)) & 0xffffff01ffffffff;
      local_178 = local_198;
      fStack_174 = fStack_194;
      uStack_164 = local_188;
LAB_146a93a31:
      local_138 = (longlong *)0x0;
      local_140 = lVar6;
      goto LAB_146a93a45;
    }
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    local_158 = CONCAT44(fVar20,fVar15);
    uStack_150 = CONCAT44(fVar11,fVar12);
    uVar5 = CONCAT14(uVar4,fVar14);
    local_178 = local_198;
    fStack_174 = fStack_194;
LAB_146a93952:
    local_18c = 0x3f800000;
    local_148 = CONCAT17(uStack_12e,CONCAT25(local_130,uVar5)) & 0xffffff01ffffffff;
    local_198 = local_178;
    fStack_194 = fStack_174;
    uStack_164 = local_188;
  }
  else {
    lVar8 = **(longlong **)(param_1 + 0x1f8);
    local_18c = 0x3f800000;
    local_188 = 0;
    lVar6 = *(longlong *)(lVar8 + 0x10);
    local_e0 = *(char *)(lVar6 + 0x198);
    if (DAT_14c96b1e0 == '\0') {
      if (local_e0 != '\0') {
        local_e8 = *(ulonglong *)(lVar6 + 400);
        local_f8 = *(undefined8 *)(lVar6 + 0x180);
        uStack_f0 = *(undefined8 *)(lVar6 + 0x188);
        goto LAB_146a94148;
      }
LAB_146a93b4b:
      uVar4 = *(undefined1 *)(param_2 + 0xd);
      fStack_170 = param_2[2];
      fVar13 = param_2[8] * 0.0;
      fVar16 = fVar13 + param_2[10];
      fVar17 = param_2[10] * 0.0;
      fVar14 = param_2[7] * 0.0;
      fVar11 = fVar14 + param_2[9];
      fStack_15c = param_2[9] * 0.0;
      fVar13 = fVar13 + fVar17 + param_2[0xc];
      fVar14 = fVar14 + fStack_15c + param_2[0xb];
      fVar17 = fVar17 + param_2[8];
      fStack_15c = fStack_15c + param_2[7];
      local_168 = param_2[4] + fStack_170 * 0.0;
      fStack_16c = fStack_170 * 0.0 + param_2[3];
      plVar9 = *(longlong **)(lVar8 + 0x18);
      local_178 = fVar15;
      fStack_174 = fVar3;
      if (plVar9 == (longlong *)0x0) {
        uStack_164 = 0;
        local_158 = CONCAT44(fVar11,fVar17);
        uStack_150 = CONCAT44(fVar14,fVar16);
        local_148 = CONCAT35(local_148._5_3_,CONCAT14(uVar4,fVar13)) & 0xffffff01ffffffff;
        local_138 = (longlong *)0x0;
        local_140 = lVar6;
        goto LAB_146a93a45;
      }
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      local_158 = CONCAT44(fVar11,fVar17);
      uStack_150 = CONCAT44(fVar14,fVar16);
      uVar5 = CONCAT14(uVar4,fVar13);
      goto LAB_146a93952;
    }
    if (local_e0 == '\0') goto LAB_146a93b4b;
    local_f8 = *(undefined8 *)(lVar6 + 0x180);
    uStack_f0 = *(undefined8 *)(lVar6 + 0x188);
    local_e8 = *(ulonglong *)(lVar6 + 400) ^ 0x80000000;
LAB_146a94148:
    fVar15 = (float)*(double *)(lVar6 + 0x170);
    if (DAT_14c96b1e0 != '\0') {
      fVar15 = (0.5 - fVar15) + 0.5;
    }
    local_180 = CONCAT44((float)*(double *)(lVar6 + 0x178),fVar15);
    local_178 = param_2[2];
    fStack_174 = (float)*(undefined8 *)(param_2 + 3);
    fStack_170 = (float)((ulonglong)*(undefined8 *)(param_2 + 3) >> 0x20);
LAB_146a93fc4:
    local_1a8 = param_2 + 7;
    local_1b0 = &local_178;
    local_18c = 0x3f800000;
    local_1b8 = &local_180;
    FUN_146978c22(&local_130,&local_198,&local_18c,&local_f8);
    lVar6 = *(longlong *)(lVar8 + 0x10);
    plVar9 = *(longlong **)(lVar8 + 0x18);
    local_168 = (float)local_120;
    uStack_164._0_4_ = (undefined4)((ulonglong)local_120 >> 0x20);
    uStack_164._4_4_ = (undefined4)uStack_118;
    fStack_15c = (float)((ulonglong)uStack_118 >> 0x20);
    fStack_174 = (float)((uint5)uStack_12d >> 8);
    fStack_170 = (float)uStack_128;
    fStack_16c = (float)((ulonglong)uStack_128 >> 0x20);
    if (plVar9 == (longlong *)0x0) {
      local_148 = local_100;
      local_158 = local_110;
      uStack_150 = uStack_108;
      local_178 = (float)CONCAT53(uStack_12d,CONCAT12(uStack_12e,local_130));
      goto LAB_146a93a31;
    }
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    local_148 = local_100;
    local_158 = local_110;
    uStack_150 = uStack_108;
    local_178 = (float)CONCAT53(uStack_12d,CONCAT12(uStack_12e,local_130));
  }
  LOCK();
  *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
  UNLOCK();
  LOCK();
  plVar1 = plVar9 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  local_140 = lVar6;
  local_138 = plVar9;
  if ((int)*plVar1 == 0) {
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar2 = (int *)((longlong)plVar9 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
LAB_146a93a45:
  FUN_1402018be(param_3,&local_178);
  plVar9 = local_138;
  if (local_138 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_138 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_138)(local_138);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a941b6 FUN_146a941b6 body=209 status=ok
// SIG undefined FUN_146a941b6(void)

void FUN_146a941b6(longlong param_1,double *param_2)

{
  longlong *plVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 *puVar4;
  float *pfVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  
  plVar1 = *(longlong **)(param_1 + 0x1f8);
  pfVar2 = (float *)(*(longlong *)(plVar1[2] + 0x10) + 0x168);
  if ((*(byte *)(*(longlong *)(plVar1[2] + 0x10) + 0x31) & 0x20) == 0) {
    pfVar2 = (float *)&DAT_14c84635c;
  }
  if (*(int *)(param_1 + 0x218) == 0) {
    puVar4 = (undefined8 *)(*(longlong *)(plVar1[1] + 0x10) + 0x168);
    if ((*(byte *)(*(longlong *)(plVar1[1] + 0x10) + 0x31) & 0x20) == 0) {
      puVar4 = &DAT_14c84635c;
    }
    puVar6 = (undefined8 *)(*(longlong *)(*plVar1 + 0x10) + 0x168);
    if ((*(byte *)(*(longlong *)(*plVar1 + 0x10) + 0x31) & 0x20) == 0) {
      puVar6 = &DAT_14c84635c;
    }
    fVar8 = *(float *)((longlong)puVar6 + 4);
    if (*(float *)((longlong)puVar6 + 4) <= *(float *)((longlong)puVar4 + 4)) {
      fVar8 = *(float *)((longlong)puVar4 + 4);
    }
    if (fVar8 <= pfVar2[1]) {
      fVar8 = pfVar2[1];
    }
    fVar7 = *(float *)(param_1 + 0x210);
  }
  else {
    pfVar3 = (float *)(*(longlong *)(plVar1[1] + 0x10) + 0x168);
    if ((*(byte *)(*(longlong *)(plVar1[1] + 0x10) + 0x31) & 0x20) == 0) {
      pfVar3 = (float *)&DAT_14c84635c;
    }
    pfVar5 = (float *)(*(longlong *)(*plVar1 + 0x10) + 0x168);
    if ((*(byte *)(*(longlong *)(*plVar1 + 0x10) + 0x31) & 0x20) == 0) {
      pfVar5 = (float *)&DAT_14c84635c;
    }
    fVar7 = *pfVar5;
    if (*pfVar5 <= *pfVar3) {
      fVar7 = *pfVar3;
    }
    if (fVar7 <= *pfVar2) {
      fVar7 = *pfVar2;
    }
    fVar8 = *(float *)(param_1 + 0x210);
  }
  *param_2 = (double)fVar7;
  param_2[1] = (double)fVar8;
  return;
}



// FUNCTION 146a94290 FUN_146a94290 body=395 status=ok
// SIG undefined FUN_146a94290(void)

void FUN_146a94290(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_146a9441c();
  if (*(char *)(param_3 + 0x94) == '\x01') {
    local_34 = *(undefined1 *)(param_3 + 0x94);
    local_38 = *(undefined4 *)(param_3 + 0x90);
    local_30 = *(undefined8 *)(param_3 + 0x98);
    *(undefined8 *)(param_3 + 0x98) = 0;
    local_28 = *(undefined4 *)(param_3 + 0xa0);
    *(undefined4 *)(param_3 + 0xa0) = 0;
    FUN_140a513ea(param_1 + 0x50,param_1 + 0x20,&local_38);
    FUN_1449db362(&local_30);
  }
  if (*(char *)(param_3 + 0xac) == '\x01') {
    local_4c = *(undefined1 *)(param_3 + 0xac);
    local_50 = *(undefined4 *)(param_3 + 0xa8);
    local_48 = *(undefined8 *)(param_3 + 0xb0);
    *(undefined8 *)(param_3 + 0xb0) = 0;
    local_40 = *(undefined4 *)(param_3 + 0xb8);
    *(undefined4 *)(param_3 + 0xb8) = 0;
    FUN_140a513ea(param_1 + 0x54,param_1 + 0x20,&local_50);
    FUN_1449db362(&local_48);
  }
  if (*(char *)(param_3 + 0x88) == '\x01') {
    local_88 = *(undefined4 *)(param_3 + 0x50);
    local_80 = *(undefined4 *)(param_3 + 0x58);
    local_7c = *(undefined1 *)(param_3 + 0x5c);
    local_78 = *(undefined8 *)(param_3 + 0x60);
    *(undefined8 *)(param_3 + 0x60) = 0;
    local_70 = *(undefined4 *)(param_3 + 0x68);
    *(undefined4 *)(param_3 + 0x68) = 0;
    local_64 = *(undefined1 *)(param_3 + 0x74);
    local_68 = *(undefined4 *)(param_3 + 0x70);
    local_60 = *(undefined8 *)(param_3 + 0x78);
    *(undefined8 *)(param_3 + 0x78) = 0;
    local_58 = *(undefined4 *)(param_3 + 0x80);
    *(undefined4 *)(param_3 + 0x80) = 0;
    FUN_146a94478(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a9441c FUN_146a9441c body=91 status=ok
// SIG undefined FUN_146a9441c(void)

void FUN_146a9441c(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 *puVar1;
  
  FUN_146ac34f0();
  if (*(char *)(param_3 + 0x28) == '\x01') {
    FUN_140a55872(param_1 + 0x28,param_1 + 0x20,param_3 + 0x18);
  }
  puVar1 = (undefined4 *)(param_1 + 0x38);
  if (*(char *)(param_3 + 0x44) != '\0') {
    puVar1 = (undefined4 *)(param_3 + 0x40);
  }
  *(undefined4 *)(param_1 + 0x38) = *puVar1;
  puVar1 = (undefined4 *)(param_1 + 0x3c);
  if (*(char *)(param_3 + 0x4c) != '\0') {
    puVar1 = (undefined4 *)(param_3 + 0x48);
  }
  *(undefined4 *)(param_1 + 0x3c) = *puVar1;
  return;
}



// FUNCTION 146a94478 FUN_146a94478 body=178 status=ok
// SIG undefined FUN_146a94478(void)

void FUN_146a94478(longlong param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar2 = *param_2;
  *(int *)(param_1 + 0x40) = iVar2;
  lVar1 = param_1 + 0x20;
  if (iVar2 == 2) {
    if ((char)param_2[9] == '\x01') {
      FUN_140a513ea(param_1 + 0x4c,lVar1,param_2 + 8);
    }
    else {
      FUN_14697cee2(param_1 + 0x4c,lVar1,param_2 + 2);
    }
  }
  else {
    local_24 = 0x3f800000;
    FUN_140a51568(param_1 + 0x4c,lVar1);
  }
  FUN_140a513ea(param_1 + 0x48,lVar1,param_2 + 2);
  FUN_1449db362(param_2 + 10);
  FUN_1449db362(param_2 + 4);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a9452c FUN_146a9452c body=193 status=ok
// SIG undefined FUN_146a9452c(void)

undefined8 * FUN_146a9452c(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  puVar3[4] = 0;
  *puVar3 = &PTR_FUN_149edb640;
  puVar3[1] = 0;
  puVar3[2] = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  puVar3[3] = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  *puVar3 = &PTR_FUN_149f19780;
  puVar3[4] = &PTR_LAB_149f19790;
  *(undefined4 *)(puVar3 + 8) = 0;
  puVar3[9] = &DAT_3f8000003f800000;
  puVar3[10] = 0;
  *param_1 = puVar3;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((longlong)param_1 + 0x94) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa5) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return param_1;
}



// FUNCTION 146a945ee FUN_146a945ee body=187 status=ok
// SIG undefined FUN_146a945ee(void)

void FUN_146a945ee(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  local_30 = *param_3;
  *param_3 = 0;
  local_28 = (undefined4)param_3[1];
  local_24 = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  FUN_146a946ba(param_1 + 0x1e8);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_2 + 0x1a8);
  *(undefined1 *)(param_1 + 0x214) = *(undefined1 *)(param_2 + 0x1ac);
  *(undefined1 *)(param_1 + 0x215) = *(undefined1 *)(param_2 + 0x1ad);
  FUN_146a24e13(*param_3,(int)param_3[1]);
  if (*param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a946ba FUN_146a946ba body=142 status=ok
// SIG undefined FUN_146a946ba(void)

void FUN_146a946ba(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = (int)param_2[1];
  iVar2 = *(int *)(param_1 + 0x20) + iVar1;
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (*(int *)(param_1 + 0x24) < iVar2) {
    FUN_146ac36d4(param_1 + 0x18);
    iVar1 = (int)param_2[1];
  }
  lVar4 = *param_2;
  uVar3 = 0;
  if (iVar1 != 0) {
    lVar5 = (longlong)iVar1 * 0xc0;
    do {
      FUN_146ac367a(param_1,lVar4);
      lVar4 = lVar4 + 0xc0;
      lVar5 = lVar5 + -0xc0;
    } while (lVar5 != 0);
    uVar3 = (undefined4)param_2[1];
    lVar4 = *param_2;
  }
  FUN_146a24e13(lVar4,uVar3);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146a9474a FUN_146a9474a body=6578 status=ok
// SIG undefined FUN_146a9474a(void)

void FUN_146a9474a(longlong param_1,float *param_2,byte *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  byte bVar11;
  undefined8 uVar12;
  longlong lVar13;
  bool bVar14;
  undefined8 *puVar15;
  float *pfVar16;
  longlong lVar17;
  undefined8 uVar18;
  int iVar19;
  longlong *plVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_438 [32];
  undefined8 *local_418;
  undefined8 *local_410;
  float *local_408;
  char local_3fd;
  float local_3fc;
  byte *local_3f8;
  float local_3f0;
  float local_3ec;
  longlong local_3e8;
  float *local_3e0;
  byte *local_3d8;
  longlong local_3d0;
  float *local_3c8;
  float *local_3c0;
  float local_3b8;
  undefined4 local_3b4;
  float local_3b0;
  undefined4 local_3ac;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined1 local_390 [12];
  undefined4 local_384;
  float local_380;
  float local_37c;
  undefined8 local_378;
  undefined4 local_36c;
  undefined8 local_368;
  undefined1 local_360 [512];
  undefined1 *local_160;
  uint local_158;
  uint local_154;
  undefined8 local_150;
  float local_148;
  float local_144;
  float local_140;
  undefined8 local_13c;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  byte local_11c;
  undefined2 local_11b;
  undefined1 local_119;
  undefined8 local_118;
  undefined8 uStack_110;
  ulonglong local_108;
  char local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_438;
  local_3f8 = param_3;
  local_3c8 = param_2;
  if (*(int *)(param_1 + 0x210) == 1) {
    if (*(char *)(param_1 + 0x214) == '\0') {
      fVar33 = 0.0;
    }
    else {
      fVar33 = param_2[1];
    }
    fVar33 = fVar33 - *(float *)(param_1 + 0x1e0);
LAB_146a94818:
    iVar19 = *(int *)(param_1 + 0x208);
    if (iVar19 == 0) goto LAB_146a96065;
    local_3fd = DAT_14c96b1e0;
    local_160 = (undefined1 *)0x0;
    local_154 = 0x10;
    if (iVar19 < 0) {
LAB_146a960f5:
      local_154 = 0x10;
      local_160 = (undefined1 *)0x0;
      local_3fd = DAT_14c96b1e0;
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar19);
    }
    local_158 = 0;
    if (iVar19 != 0x10) {
      FUN_142905032(local_360);
    }
    do {
      lVar17 = (longlong)(int)local_158;
      local_158 = local_158 + 1;
      if (local_154 < local_158) {
        FUN_142905190(local_360);
      }
      puVar9 = local_160;
      if (local_160 == (undefined1 *)0x0) {
        puVar9 = local_360;
      }
      lVar17 = lVar17 * 0x20;
      *(undefined8 *)(puVar9 + lVar17 + 9) = 0;
      *(undefined8 *)((longlong)(puVar9 + lVar17 + 9) + 8) = 0;
      *(undefined8 *)(puVar9 + lVar17) = 0;
      *(undefined8 *)((longlong)(puVar9 + lVar17) + 8) = 0;
      *(undefined4 *)(puVar9 + lVar17 + 0x1c) = 0;
      iVar19 = iVar19 + -1;
    } while (iVar19 != 0);
    if (0 < *(int *)(param_1 + 0x208)) {
      lVar17 = 0;
      lVar13 = 0;
      fVar25 = 0.0;
      fVar24 = 0.0;
      fVar26 = 0.0;
      fVar22 = 0.0;
      bVar14 = false;
      bVar6 = 0;
      bVar11 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x200) + lVar13 * 8);
        lVar4 = *(longlong *)(lVar3 + 0x10);
        if (*(byte *)(lVar4 + 0x39) != DAT_14c96b1e1) {
          puVar15 = &DAT_14c84635c;
          if ((*(byte *)(lVar4 + 0x31) & 0x20) != 0) {
            puVar15 = (undefined8 *)(lVar4 + 0x168);
          }
          fVar23 = *(float *)(lVar3 + 0x50);
          fVar26 = fVar26 + *(float *)(lVar3 + 0x2c) + *(float *)(lVar3 + 0x34);
          fVar30 = *(float *)((longlong)puVar15 + 4);
          fVar31 = *(float *)(lVar3 + 0x54);
          puVar9 = local_160;
          if (local_160 == (undefined1 *)0x0) {
            puVar9 = local_360;
          }
          *(float *)(puVar9 + lVar17 + 8) = fVar23;
          *(float *)(puVar9 + lVar17 + 0xc) = fVar31;
          iVar19 = *(int *)(lVar3 + 0x40);
          *(int *)(puVar9 + lVar17 + 0x1c) = iVar19;
          fVar31 = (float)(~-(uint)(0.0 < fVar31) & 0x7f7fffff |
                          (uint)fVar31 & -(uint)(0.0 < fVar31));
          if (fVar23 <= 0.0) {
            fVar23 = 0.0;
          }
          if (fVar31 <= fVar30) {
            fVar30 = fVar31;
          }
          if (fVar30 <= fVar23) {
            fVar30 = fVar23;
          }
          if (iVar19 == 2) {
            fVar23 = 0.0;
            if (0.0 <= *(float *)(lVar3 + 0x48)) {
              fVar23 = *(float *)(lVar3 + 0x48);
            }
            *(float *)(puVar9 + lVar17 + 0x10) = fVar23;
            fVar31 = 0.0;
            if (0.0 <= *(float *)(lVar3 + 0x4c)) {
              fVar31 = *(float *)(lVar3 + 0x4c);
            }
            *(float *)(puVar9 + lVar17 + 0x14) = fVar31;
            *(float *)(puVar9 + lVar17) = fVar30;
            *(float *)(puVar9 + lVar17 + 4) = fVar30;
            fVar25 = fVar25 + fVar23;
            fVar24 = fVar24 + fVar31;
            fVar22 = fVar22 + fVar30;
            bVar6 = 1;
          }
          else if (iVar19 == 1) {
            fVar23 = *(float *)(lVar3 + 0x48);
            *(float *)(puVar9 + lVar17 + 0x10) = fVar23;
            *(float *)(puVar9 + lVar17 + 0x14) = fVar23;
            *(undefined8 *)(puVar9 + lVar17) = 0;
            fVar25 = fVar25 + fVar23;
            fVar24 = fVar24 + fVar23;
            fVar22 = fVar22 + fVar30;
            bVar11 = 1;
          }
          else {
            fVar26 = fVar26 + fVar30;
            *(undefined8 *)(puVar9 + lVar17 + 0x10) = 0;
            *(float *)(puVar9 + lVar17) = fVar30;
            *(float *)(puVar9 + lVar17 + 4) = fVar30;
          }
          bVar14 = true;
        }
        lVar13 = lVar13 + 1;
        lVar17 = lVar17 + 0x20;
      } while (lVar13 < *(int *)(param_1 + 0x208));
      if (bVar14) {
        fVar23 = fVar22;
        if (fVar22 <= param_2[1] - fVar26) {
          fVar23 = param_2[1] - fVar26;
        }
        if ((bool)(bVar11 & 0.0 < fVar25)) {
          puVar9 = local_160;
          if (local_160 == (undefined1 *)0x0) {
            puVar9 = local_360;
          }
          lVar17 = (longlong)(int)local_158;
          fVar26 = 0.0;
          if (lVar17 != 0) {
            lVar13 = 0;
            do {
              if (*(int *)(puVar9 + lVar13 + 0x1c) == 1) {
                fVar27 = (*(float *)(puVar9 + lVar13 + 0x10) * fVar23) / fVar25;
                fVar30 = *(float *)(puVar9 + lVar13 + 8);
                uVar21 = -(uint)(0.0 < *(float *)(puVar9 + lVar13 + 0xc));
                fVar31 = (float)(~uVar21 & 0x7f7fffff |
                                (uint)*(float *)(puVar9 + lVar13 + 0xc) & uVar21);
                if (fVar30 <= 0.0) {
                  fVar30 = 0.0;
                }
                if (fVar31 <= fVar27) {
                  fVar27 = fVar31;
                }
                if (fVar27 <= fVar30) {
                  fVar27 = fVar30;
                }
                *(float *)(puVar9 + lVar13) = fVar27;
                fVar26 = fVar26 + fVar27;
              }
              lVar13 = lVar13 + 0x20;
            } while (lVar17 * 0x20 != lVar13);
          }
          fVar23 = fVar23 - fVar26;
        }
        if (fVar22 < fVar23) {
          fVar24 = fVar25;
        }
        if ((bool)(bVar6 & 0.0 < fVar24)) {
          puVar9 = local_160;
          if (local_160 == (undefined1 *)0x0) {
            puVar9 = local_360;
          }
          lVar17 = (longlong)(int)local_158;
          fVar24 = fVar23;
          if (lVar17 == 0) {
            iVar19 = 0;
          }
          else {
            lVar13 = 0;
            iVar19 = 0;
            do {
              if (*(int *)(puVar9 + lVar13 + 0x1c) == 2) {
                fVar24 = fVar24 - *(float *)(puVar9 + lVar13);
                iVar19 = iVar19 + 1;
                puVar9[lVar13 + 0x18] =
                     puVar9[lVar13 + 0x18] |
                     ABS(*(float *)(puVar9 + lVar13 + (ulonglong)(fVar23 <= fVar22) * 4 + 0x10)) <=
                     1e-08;
              }
              lVar13 = lVar13 + 0x20;
            } while (lVar17 * 0x20 != lVar13);
          }
          iVar7 = 5;
          if (iVar19 < 5) {
            iVar7 = iVar19;
          }
          if ((0 < iVar19) && (1e-08 < ABS(fVar24))) {
            iVar19 = 0;
            while( true ) {
              puVar9 = local_160;
              if (local_160 == (undefined1 *)0x0) {
                puVar9 = local_360;
              }
              if ((longlong)(int)local_158 == 0) break;
              lVar17 = (longlong)(int)local_158 * 0x20;
              fVar25 = 0.0;
              lVar13 = 0;
              fVar26 = 0.0;
              do {
                if ((*(int *)(puVar9 + lVar13 + 0x1c) == 2) && (puVar9[lVar13 + 0x18] == '\0')) {
                  fVar25 = fVar25 + *(float *)(puVar9 + lVar13 + 0x10);
                  fVar26 = fVar26 + *(float *)(puVar9 + lVar13 + 0x14) *
                                    *(float *)(puVar9 + lVar13 + 4);
                }
                lVar13 = lVar13 + 0x20;
              } while (lVar17 != lVar13);
              if ((float)(~-(uint)(fVar22 < fVar23) & (uint)fVar26 |
                         -(uint)(fVar22 < fVar23) & (uint)fVar25) < 0.0001) break;
              fVar30 = 0.0;
              lVar13 = 0;
              do {
                if ((*(int *)(puVar9 + lVar13 + 0x1c) == 2) && (puVar9[lVar13 + 0x18] == '\0')) {
                  if (fVar23 <= fVar22) {
                    fVar31 = (*(float *)(puVar9 + lVar13 + 0x14) * *(float *)(puVar9 + lVar13 + 4))
                             / fVar26;
                  }
                  else {
                    fVar31 = *(float *)(puVar9 + lVar13 + 0x10) / fVar25;
                  }
                  fVar31 = fVar31 * fVar24;
                  if (ABS(fVar31) <= 1e-08) {
                    puVar9[lVar13 + 0x18] = 1;
                  }
                  else {
                    fVar27 = *(float *)(puVar9 + lVar13);
                    fVar28 = *(float *)(puVar9 + lVar13 + 8);
                    fVar32 = fVar31 + fVar27;
                    if ((fVar32 <= fVar28) ||
                       ((fVar28 = *(float *)(puVar9 + lVar13 + 0xc), 0.0 < fVar28 &&
                        (fVar28 <= fVar32)))) {
                      *(float *)(puVar9 + lVar13) = fVar28;
                      fVar31 = fVar28 - fVar27;
                      puVar9[lVar13 + 0x18] = 1;
                    }
                    else {
                      *(float *)(puVar9 + lVar13) = fVar32;
                    }
                    fVar30 = fVar30 + fVar31;
                  }
                }
                lVar13 = lVar13 + 0x20;
              } while (lVar17 != lVar13);
              iVar19 = iVar19 + 1;
              if ((iVar7 <= iVar19) || (fVar24 = fVar24 - fVar30, ABS(fVar24) <= 1e-08)) break;
            }
          }
        }
        if (0 < *(int *)(param_1 + 0x208)) {
          local_3e0 = param_2 + 7;
          local_3d8 = local_3f8 + 8;
          lVar17 = 0;
          iVar19 = 0;
          fVar24 = 0.0;
          local_3f0 = fVar33;
          local_3d0 = param_1;
          do {
            fVar33 = local_3f0;
            puVar9 = local_160;
            if (local_160 == (undefined1 *)0x0) {
              puVar9 = local_360;
            }
            lVar13 = *(longlong *)(*(longlong *)(local_3d0 + 0x200) + lVar17);
            lVar3 = *(longlong *)(lVar13 + 0x10);
            local_3fc = (float)CONCAT31(local_3fc._1_3_,*(undefined1 *)(lVar3 + 0x39));
            local_3a8 = *(undefined8 *)(lVar13 + 0x28);
            uStack_3a0 = *(undefined8 *)(lVar13 + 0x30);
            if (local_3fd == '\x01') {
              uVar5 = (float)local_3a8;
              local_3a8._4_4_ = (float)((ulonglong)local_3a8 >> 0x20);
              local_3a8 = CONCAT44(local_3a8._4_4_,(float)uStack_3a0);
              uStack_3a0._4_4_ = (float)((ulonglong)uStack_3a0 >> 0x20);
              uStack_3a0 = CONCAT44(uStack_3a0._4_4_,uVar5);
            }
            fVar25 = *(float *)(puVar9 + lVar17 * 4) + local_3a8._4_4_ + uStack_3a0._4_4_;
            local_150._0_2_ = 0;
            local_150._2_1_ = 0x80;
            local_150._3_1_ = 0x3f;
            local_418 = &local_3a8;
            local_410 = &local_150;
            FUN_142904c31(&local_3b0,local_3fd,*param_2,lVar13);
            local_150._0_2_ = 0;
            local_150._2_1_ = 0x80;
            local_150._3_1_ = 0x3f;
            local_418 = &local_150;
            FUN_142904d1d(&local_3b8,fVar25,lVar13,&local_3a8);
            fVar22 = local_3b0;
            fVar33 = local_3b8 + fVar24 + fVar33;
            local_384 = 0x3f800000;
            local_380 = local_3b0;
            uVar18 = CONCAT44(local_3b4,local_3ac);
            local_100 = *(char *)(lVar3 + 0x198);
            bVar6 = local_3fc._0_1_;
            local_37c = fVar33;
            if (DAT_14c96b1e0 == '\0') {
              if (local_100 == '\0') goto LAB_146a94ed6;
              local_108 = *(ulonglong *)(lVar3 + 400);
              local_118 = *(undefined8 *)(lVar3 + 0x180);
              uStack_110 = *(undefined8 *)(lVar3 + 0x188);
LAB_146a951f6:
              fVar33 = (float)*(double *)(*(longlong *)(lVar13 + 0x10) + 0x170);
              if (DAT_14c96b1e0 != '\0') {
                fVar33 = (0.5 - fVar33) + 0.5;
              }
              local_378 = CONCAT44((float)*(double *)(*(longlong *)(lVar13 + 0x10) + 0x178),fVar33);
              local_368 = *(undefined8 *)(param_2 + 3);
              local_36c = param_2[2];
              local_408 = local_3e0;
              local_410 = (undefined8 *)&local_36c;
              local_418 = &local_378;
              FUN_146978c22(&local_150,local_390,&local_384,&local_118);
              bVar11 = local_11c;
              fVar29 = local_120;
              fVar32 = local_124;
              fVar22 = local_128;
              fVar33 = local_12c;
              fVar30 = local_130;
              fVar23 = local_134;
              uVar10 = local_13c;
              fVar28 = local_140;
              fVar27 = local_144;
              uVar12 = *(undefined8 *)(lVar13 + 0x10);
              plVar20 = *(longlong **)(lVar13 + 0x18);
              fVar26 = local_148;
              if (plVar20 == (longlong *)0x0) {
                uVar18 = CONCAT44(local_150._4_4_,
                                  CONCAT13(local_150._3_1_,
                                           CONCAT12(local_150._2_1_,(undefined2)local_150)));
                local_36c._0_3_ = CONCAT12(local_119,local_11b);
              }
              else {
                LOCK();
                *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
                UNLOCK();
                uVar18 = CONCAT44(local_150._4_4_,
                                  CONCAT13(local_150._3_1_,
                                           CONCAT12(local_150._2_1_,(undefined2)local_150)));
                local_36c._0_3_ = CONCAT12(local_119,local_11b);
                LOCK();
                *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
                UNLOCK();
                LOCK();
                plVar1 = plVar20 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  local_3fc = local_148;
                  (**(code **)*plVar20)(plVar20);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar20 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  fVar26 = local_3fc;
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar20 + 0x10))(plVar20);
                    fVar26 = local_3fc;
                  }
                }
              }
            }
            else {
              if (local_100 != '\0') {
                local_118 = *(undefined8 *)(lVar3 + 0x180);
                uStack_110 = *(undefined8 *)(lVar3 + 0x188);
                local_108 = *(ulonglong *)(lVar3 + 400) ^ 0x80000000;
                goto LAB_146a951f6;
              }
LAB_146a94ed6:
              local_3e8 = CONCAT44(local_3e8._4_4_,fVar24);
              fVar26 = param_2[2];
              fVar23 = param_2[7];
              fVar30 = param_2[8];
              fVar24 = param_2[10];
              fVar31 = param_2[9];
              fVar29 = local_3b0 * fVar30 + fVar33 * fVar24 + param_2[0xc];
              fVar32 = local_3b0 * fVar23 + fVar33 * fVar31 + param_2[0xb];
              fVar28 = fVar33 * fVar26 + param_2[4];
              fVar27 = fVar26 * local_3b0 + param_2[3];
              bVar11 = *(byte *)(param_2 + 0xd);
              uVar12 = *(undefined8 *)(lVar13 + 0x10);
              plVar20 = *(longlong **)(lVar13 + 0x18);
              local_3ec = fVar25;
              if (plVar20 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
                UNLOCK();
                local_36c = (float)CONCAT22(CONCAT11(local_36c._3_1_,local_150._2_1_),
                                            (undefined2)local_150);
                LOCK();
                *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
                UNLOCK();
                LOCK();
                plVar1 = plVar20 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar20)(plVar20);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar20 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar20 + 0x10))(plVar20);
                  }
                }
              }
              uVar10 = CONCAT44(fVar33,fVar22);
              bVar11 = bVar11 & 1;
              fVar22 = fVar30 * 0.0 + fVar24;
              fVar33 = fVar23 * 0.0 + fVar31;
              fVar30 = fVar24 * 0.0 + fVar30;
              fVar23 = fVar31 * 0.0 + fVar23;
              fVar24 = (float)local_3e8;
              fVar25 = local_3ec;
            }
            if ((*local_3f8 & bVar6) == 0) {
              if (plVar20 != (longlong *)0x0) goto LAB_146a9512d;
            }
            else {
              iVar7 = *(int *)(local_3f8 + 0x130);
              lVar13 = (longlong)iVar7;
              *(uint *)(local_3f8 + 0x130) = iVar7 + 1U;
              if (*(uint *)(local_3f8 + 0x134) < iVar7 + 1U) {
                local_3fc = fVar27;
                local_3e8 = lVar17;
                FUN_14022ed06(local_3d8,iVar7);
                lVar17 = local_3e8;
                fVar27 = local_3fc;
              }
              pbVar8 = *(byte **)(local_3f8 + 0x128);
              if (*(byte **)(local_3f8 + 0x128) == (byte *)0x0) {
                pbVar8 = local_3d8;
              }
              *(undefined8 *)(pbVar8 + lVar13 * 0x48) = uVar18;
              *(float *)(pbVar8 + lVar13 * 0x48 + 8) = fVar26;
              *(float *)(pbVar8 + lVar13 * 0x48 + 0xc) = fVar27;
              *(float *)(pbVar8 + lVar13 * 0x48 + 0x10) = fVar28;
              *(undefined8 *)(pbVar8 + lVar13 * 0x48 + 0x14) = uVar10;
              *(float *)(pbVar8 + lVar13 * 0x48 + 0x1c) = fVar23;
              *(float *)(pbVar8 + lVar13 * 0x48 + 0x20) = fVar30;
              *(float *)(pbVar8 + lVar13 * 0x48 + 0x24) = fVar33;
              *(float *)(pbVar8 + lVar13 * 0x48 + 0x28) = fVar22;
              *(float *)(pbVar8 + lVar13 * 0x48 + 0x2c) = fVar32;
              *(float *)(pbVar8 + lVar13 * 0x48 + 0x30) = fVar29;
              pbVar8[lVar13 * 0x48 + 0x34] = bVar11;
              *(undefined2 *)(pbVar8 + lVar13 * 0x48 + 0x35) = (undefined2)local_36c;
              pbVar8[lVar13 * 0x48 + 0x37] = local_36c._2_1_;
              *(undefined8 *)(pbVar8 + lVar13 * 0x48 + 0x38) = uVar12;
              *(longlong **)(pbVar8 + lVar13 * 0x48 + 0x40) = plVar20;
              if (plVar20 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
                UNLOCK();
LAB_146a9512d:
                LOCK();
                plVar1 = plVar20 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar20)(plVar20);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar20 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar20 + 0x10))(plVar20);
                  }
                }
              }
            }
            if (bVar6 != DAT_14c96b1e1) {
              fVar24 = fVar24 + fVar25;
            }
            iVar19 = iVar19 + 1;
            lVar17 = lVar17 + 8;
            param_2 = local_3c8;
          } while (iVar19 < *(int *)(local_3d0 + 0x208));
        }
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x214) == '\0') {
      fVar33 = 0.0;
    }
    else {
      fVar33 = *param_2;
    }
    fVar33 = fVar33 - *(float *)(param_1 + 0x1e0);
    if (*(int *)(param_1 + 0x210) != 0) goto LAB_146a94818;
    iVar19 = *(int *)(param_1 + 0x208);
    if (iVar19 == 0) goto LAB_146a96065;
    local_3fd = DAT_14c96b1e0;
    local_160 = (undefined1 *)0x0;
    local_154 = 0x10;
    if (iVar19 < 0) goto LAB_146a960f5;
    local_158 = 0;
    if (iVar19 != 0x10) {
      FUN_142904dea(local_360);
    }
    do {
      lVar17 = (longlong)(int)local_158;
      local_158 = local_158 + 1;
      if (local_154 < local_158) {
        FUN_142904f48(local_360);
      }
      puVar9 = local_160;
      if (local_160 == (undefined1 *)0x0) {
        puVar9 = local_360;
      }
      lVar17 = lVar17 * 0x20;
      *(undefined8 *)(puVar9 + lVar17 + 9) = 0;
      *(undefined8 *)((longlong)(puVar9 + lVar17 + 9) + 8) = 0;
      *(undefined8 *)(puVar9 + lVar17) = 0;
      *(undefined8 *)((longlong)(puVar9 + lVar17) + 8) = 0;
      *(undefined4 *)(puVar9 + lVar17 + 0x1c) = 0;
      iVar19 = iVar19 + -1;
    } while (iVar19 != 0);
    if (0 < *(int *)(param_1 + 0x208)) {
      lVar17 = 0;
      lVar13 = 0;
      fVar25 = 0.0;
      fVar24 = 0.0;
      fVar26 = 0.0;
      fVar22 = 0.0;
      bVar14 = false;
      bVar6 = 0;
      bVar11 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x200) + lVar13 * 8);
        lVar4 = *(longlong *)(lVar3 + 0x10);
        if (*(byte *)(lVar4 + 0x39) != DAT_14c96b1e1) {
          pfVar16 = (float *)&DAT_14c84635c;
          if ((*(byte *)(lVar4 + 0x31) & 0x20) != 0) {
            pfVar16 = (float *)(lVar4 + 0x168);
          }
          fVar23 = *(float *)(lVar3 + 0x50);
          fVar26 = fVar26 + *(float *)(lVar3 + 0x28) + *(float *)(lVar3 + 0x30);
          fVar30 = *pfVar16;
          fVar31 = *(float *)(lVar3 + 0x54);
          puVar9 = local_160;
          if (local_160 == (undefined1 *)0x0) {
            puVar9 = local_360;
          }
          *(float *)(puVar9 + lVar17 + 8) = fVar23;
          *(float *)(puVar9 + lVar17 + 0xc) = fVar31;
          iVar19 = *(int *)(lVar3 + 0x40);
          *(int *)(puVar9 + lVar17 + 0x1c) = iVar19;
          fVar31 = (float)(~-(uint)(0.0 < fVar31) & 0x7f7fffff |
                          (uint)fVar31 & -(uint)(0.0 < fVar31));
          if (fVar23 <= 0.0) {
            fVar23 = 0.0;
          }
          if (fVar31 <= fVar30) {
            fVar30 = fVar31;
          }
          if (fVar30 <= fVar23) {
            fVar30 = fVar23;
          }
          if (iVar19 == 2) {
            fVar23 = 0.0;
            if (0.0 <= *(float *)(lVar3 + 0x48)) {
              fVar23 = *(float *)(lVar3 + 0x48);
            }
            *(float *)(puVar9 + lVar17 + 0x10) = fVar23;
            fVar31 = 0.0;
            if (0.0 <= *(float *)(lVar3 + 0x4c)) {
              fVar31 = *(float *)(lVar3 + 0x4c);
            }
            *(float *)(puVar9 + lVar17 + 0x14) = fVar31;
            *(float *)(puVar9 + lVar17) = fVar30;
            *(float *)(puVar9 + lVar17 + 4) = fVar30;
            fVar25 = fVar25 + fVar23;
            fVar24 = fVar24 + fVar31;
            fVar22 = fVar22 + fVar30;
            bVar6 = 1;
          }
          else if (iVar19 == 1) {
            fVar23 = *(float *)(lVar3 + 0x48);
            *(float *)(puVar9 + lVar17 + 0x10) = fVar23;
            *(float *)(puVar9 + lVar17 + 0x14) = fVar23;
            *(undefined8 *)(puVar9 + lVar17) = 0;
            fVar25 = fVar25 + fVar23;
            fVar24 = fVar24 + fVar23;
            fVar22 = fVar22 + fVar30;
            bVar11 = 1;
          }
          else {
            fVar26 = fVar26 + fVar30;
            *(undefined8 *)(puVar9 + lVar17 + 0x10) = 0;
            *(float *)(puVar9 + lVar17) = fVar30;
            *(float *)(puVar9 + lVar17 + 4) = fVar30;
          }
          bVar14 = true;
        }
        lVar13 = lVar13 + 1;
        lVar17 = lVar17 + 0x20;
      } while (lVar13 < *(int *)(param_1 + 0x208));
      if (bVar14) {
        fVar23 = fVar22;
        if (fVar22 <= *param_2 - fVar26) {
          fVar23 = *param_2 - fVar26;
        }
        if ((bool)(bVar11 & 0.0 < fVar25)) {
          puVar9 = local_160;
          if (local_160 == (undefined1 *)0x0) {
            puVar9 = local_360;
          }
          lVar17 = (longlong)(int)local_158;
          fVar26 = 0.0;
          if (lVar17 != 0) {
            lVar13 = 0;
            do {
              if (*(int *)(puVar9 + lVar13 + 0x1c) == 1) {
                fVar27 = (*(float *)(puVar9 + lVar13 + 0x10) * fVar23) / fVar25;
                fVar30 = *(float *)(puVar9 + lVar13 + 8);
                uVar21 = -(uint)(0.0 < *(float *)(puVar9 + lVar13 + 0xc));
                fVar31 = (float)(~uVar21 & 0x7f7fffff |
                                (uint)*(float *)(puVar9 + lVar13 + 0xc) & uVar21);
                if (fVar30 <= 0.0) {
                  fVar30 = 0.0;
                }
                if (fVar31 <= fVar27) {
                  fVar27 = fVar31;
                }
                if (fVar27 <= fVar30) {
                  fVar27 = fVar30;
                }
                *(float *)(puVar9 + lVar13) = fVar27;
                fVar26 = fVar26 + fVar27;
              }
              lVar13 = lVar13 + 0x20;
            } while (lVar17 * 0x20 != lVar13);
          }
          fVar23 = fVar23 - fVar26;
        }
        if (fVar22 < fVar23) {
          fVar24 = fVar25;
        }
        if ((bool)(bVar6 & 0.0 < fVar24)) {
          puVar9 = local_160;
          if (local_160 == (undefined1 *)0x0) {
            puVar9 = local_360;
          }
          lVar17 = (longlong)(int)local_158;
          fVar24 = fVar23;
          if (lVar17 == 0) {
            iVar19 = 0;
          }
          else {
            lVar13 = 0;
            iVar19 = 0;
            do {
              if (*(int *)(puVar9 + lVar13 + 0x1c) == 2) {
                fVar24 = fVar24 - *(float *)(puVar9 + lVar13);
                iVar19 = iVar19 + 1;
                puVar9[lVar13 + 0x18] =
                     puVar9[lVar13 + 0x18] |
                     ABS(*(float *)(puVar9 + lVar13 + (ulonglong)(fVar23 <= fVar22) * 4 + 0x10)) <=
                     1e-08;
              }
              lVar13 = lVar13 + 0x20;
            } while (lVar17 * 0x20 != lVar13);
          }
          iVar7 = 5;
          if (iVar19 < 5) {
            iVar7 = iVar19;
          }
          if ((0 < iVar19) && (1e-08 < ABS(fVar24))) {
            iVar19 = 0;
            while( true ) {
              puVar9 = local_160;
              if (local_160 == (undefined1 *)0x0) {
                puVar9 = local_360;
              }
              if ((longlong)(int)local_158 == 0) break;
              lVar17 = (longlong)(int)local_158 * 0x20;
              fVar25 = 0.0;
              lVar13 = 0;
              fVar26 = 0.0;
              do {
                if ((*(int *)(puVar9 + lVar13 + 0x1c) == 2) && (puVar9[lVar13 + 0x18] == '\0')) {
                  fVar25 = fVar25 + *(float *)(puVar9 + lVar13 + 0x10);
                  fVar26 = fVar26 + *(float *)(puVar9 + lVar13 + 0x14) *
                                    *(float *)(puVar9 + lVar13 + 4);
                }
                lVar13 = lVar13 + 0x20;
              } while (lVar17 != lVar13);
              if ((float)(~-(uint)(fVar22 < fVar23) & (uint)fVar26 |
                         -(uint)(fVar22 < fVar23) & (uint)fVar25) < 0.0001) break;
              fVar30 = 0.0;
              lVar13 = 0;
              do {
                if ((*(int *)(puVar9 + lVar13 + 0x1c) == 2) && (puVar9[lVar13 + 0x18] == '\0')) {
                  if (fVar23 <= fVar22) {
                    fVar31 = (*(float *)(puVar9 + lVar13 + 0x14) * *(float *)(puVar9 + lVar13 + 4))
                             / fVar26;
                  }
                  else {
                    fVar31 = *(float *)(puVar9 + lVar13 + 0x10) / fVar25;
                  }
                  fVar31 = fVar31 * fVar24;
                  if (ABS(fVar31) <= 1e-08) {
                    puVar9[lVar13 + 0x18] = 1;
                  }
                  else {
                    fVar27 = *(float *)(puVar9 + lVar13);
                    fVar28 = *(float *)(puVar9 + lVar13 + 8);
                    fVar32 = fVar31 + fVar27;
                    if ((fVar32 <= fVar28) ||
                       ((fVar28 = *(float *)(puVar9 + lVar13 + 0xc), 0.0 < fVar28 &&
                        (fVar28 <= fVar32)))) {
                      *(float *)(puVar9 + lVar13) = fVar28;
                      fVar31 = fVar28 - fVar27;
                      puVar9[lVar13 + 0x18] = 1;
                    }
                    else {
                      *(float *)(puVar9 + lVar13) = fVar32;
                    }
                    fVar30 = fVar30 + fVar31;
                  }
                }
                lVar13 = lVar13 + 0x20;
              } while (lVar17 != lVar13);
              iVar19 = iVar19 + 1;
              if ((iVar7 <= iVar19) || (fVar24 = fVar24 - fVar30, ABS(fVar24) <= 1e-08)) break;
            }
          }
        }
        uVar21 = 0;
        if (local_3fd == '\x01') {
          uVar21 = *(int *)(param_1 + 0x208) - 1;
        }
        if ((int)uVar21 < *(int *)(param_1 + 0x208) && -1 < (int)uVar21) {
          local_3c0 = param_2 + 7;
          local_3e0 = (float *)(local_3f8 + 8);
          local_3d8 = (byte *)CONCAT44(local_3d8._4_4_,
                                       ((local_3fd != '\x01') - 1) + (uint)(local_3fd != '\x01'));
          fVar24 = 0.0;
          local_3f0 = fVar33;
          local_3d0 = param_1;
          do {
            fVar33 = local_3f0;
            puVar9 = local_160;
            if (local_160 == (undefined1 *)0x0) {
              puVar9 = local_360;
            }
            lVar17 = *(longlong *)(*(longlong *)(local_3d0 + 0x200) + (ulonglong)uVar21 * 8);
            lVar13 = *(longlong *)(lVar17 + 0x10);
            local_3fc = (float)CONCAT31(local_3fc._1_3_,*(undefined1 *)(lVar13 + 0x39));
            local_3a8 = *(undefined8 *)(lVar17 + 0x28);
            uStack_3a0 = *(undefined8 *)(lVar17 + 0x30);
            fVar22 = (float)local_3a8;
            fVar25 = (float)uStack_3a0;
            if (local_3fd == '\x01') {
              local_3a8._4_4_ = (float)((ulonglong)local_3a8 >> 0x20);
              local_3a8 = CONCAT44(local_3a8._4_4_,(float)uStack_3a0);
              uStack_3a0._4_4_ = (float)((ulonglong)uStack_3a0 >> 0x20);
              uStack_3a0 = CONCAT44(uStack_3a0._4_4_,fVar22);
            }
            fVar26 = param_2[1];
            fVar25 = *(float *)(puVar9 + (ulonglong)uVar21 * 0x20) + fVar22 + fVar25;
            local_150._0_2_ = 0;
            local_150._2_1_ = 0x80;
            local_150._3_1_ = 0x3f;
            local_418 = &local_3a8;
            local_410 = &local_150;
            FUN_142904c31(&local_3b0,
                          CONCAT71((int7)((ulonglong)*(longlong *)(local_3d0 + 0x200) >> 8),
                                   local_3fd),fVar25,lVar17);
            local_150._0_2_ = 0;
            local_150._2_1_ = 0x80;
            local_150._3_1_ = 0x3f;
            local_418 = &local_150;
            FUN_142904d1d(&local_3b8,fVar26,lVar17,&local_3a8);
            fVar22 = local_3b8;
            fVar33 = local_3b0 + fVar24 + fVar33;
            local_384 = 0x3f800000;
            local_37c = local_3b8;
            uVar18 = CONCAT44(local_3b4,local_3ac);
            local_100 = *(char *)(lVar13 + 0x198);
            bVar6 = local_3fc._0_1_;
            local_380 = fVar33;
            if (DAT_14c96b1e0 == '\0') {
              if (local_100 == '\0') goto LAB_146a95b41;
              local_108 = *(ulonglong *)(lVar13 + 400);
              local_118 = *(undefined8 *)(lVar13 + 0x180);
              uStack_110 = *(undefined8 *)(lVar13 + 0x188);
LAB_146a95e31:
              fVar33 = (float)*(double *)(*(longlong *)(lVar17 + 0x10) + 0x170);
              if (DAT_14c96b1e0 != '\0') {
                fVar33 = (0.5 - fVar33) + 0.5;
              }
              local_378 = CONCAT44((float)*(double *)(*(longlong *)(lVar17 + 0x10) + 0x178),fVar33);
              local_368 = *(undefined8 *)(param_2 + 3);
              local_36c = param_2[2];
              local_408 = local_3c0;
              local_410 = (undefined8 *)&local_36c;
              local_418 = &local_378;
              FUN_146978c22(&local_150,local_390,&local_384,&local_118);
              bVar11 = local_11c;
              fVar29 = local_120;
              fVar32 = local_124;
              fVar22 = local_128;
              fVar33 = local_12c;
              fVar23 = local_130;
              fVar26 = local_134;
              uVar10 = local_13c;
              fVar28 = local_140;
              fVar27 = local_144;
              uVar12 = *(undefined8 *)(lVar17 + 0x10);
              plVar20 = *(longlong **)(lVar17 + 0x18);
              fVar31 = local_148;
              if (plVar20 == (longlong *)0x0) {
                uVar18 = CONCAT44(local_150._4_4_,
                                  CONCAT13(local_150._3_1_,
                                           CONCAT12(local_150._2_1_,(undefined2)local_150)));
                local_36c._0_3_ = CONCAT12(local_119,local_11b);
              }
              else {
                LOCK();
                *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
                UNLOCK();
                uVar18 = CONCAT44(local_150._4_4_,
                                  CONCAT13(local_150._3_1_,
                                           CONCAT12(local_150._2_1_,(undefined2)local_150)));
                local_36c._0_3_ = CONCAT12(local_119,local_11b);
                LOCK();
                *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
                UNLOCK();
                LOCK();
                plVar1 = plVar20 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  local_3fc = local_148;
                  (**(code **)*plVar20)(plVar20);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar20 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  fVar31 = local_3fc;
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar20 + 0x10))(plVar20);
                    fVar31 = local_3fc;
                  }
                }
              }
            }
            else {
              if (local_100 != '\0') {
                local_118 = *(undefined8 *)(lVar13 + 0x180);
                uStack_110 = *(undefined8 *)(lVar13 + 0x188);
                local_108 = *(ulonglong *)(lVar13 + 400) ^ 0x80000000;
                goto LAB_146a95e31;
              }
LAB_146a95b41:
              local_3e8 = CONCAT44(local_3e8._4_4_,fVar24);
              fVar26 = param_2[7];
              fVar23 = param_2[8];
              fVar24 = param_2[10];
              fVar30 = param_2[9];
              fVar29 = fVar33 * fVar23 + fVar24 * local_3b8 + param_2[0xc];
              fVar32 = fVar33 * fVar26 + fVar30 * local_3b8 + param_2[0xb];
              fVar31 = param_2[2];
              fVar28 = local_3b8 * fVar31 + param_2[4];
              fVar27 = fVar33 * fVar31 + param_2[3];
              bVar11 = *(byte *)(param_2 + 0xd);
              uVar12 = *(undefined8 *)(lVar17 + 0x10);
              plVar20 = *(longlong **)(lVar17 + 0x18);
              local_3ec = fVar25;
              if (plVar20 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
                UNLOCK();
                local_36c = (float)CONCAT22(CONCAT11(local_36c._3_1_,local_150._2_1_),
                                            (undefined2)local_150);
                LOCK();
                *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
                UNLOCK();
                LOCK();
                plVar1 = plVar20 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar20)(plVar20);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar20 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar20 + 0x10))(plVar20);
                  }
                }
              }
              uVar10 = CONCAT44(fVar22,fVar33);
              bVar11 = bVar11 & 1;
              fVar22 = fVar23 * 0.0 + fVar24;
              fVar33 = fVar26 * 0.0 + fVar30;
              fVar23 = fVar24 * 0.0 + fVar23;
              fVar26 = fVar30 * 0.0 + fVar26;
              fVar24 = (float)local_3e8;
              fVar25 = local_3ec;
            }
            if ((*local_3f8 & bVar6) == 0) {
              if (plVar20 != (longlong *)0x0) goto LAB_146a95d6d;
            }
            else {
              iVar19 = *(int *)(local_3f8 + 0x130);
              lVar17 = (longlong)iVar19;
              *(uint *)(local_3f8 + 0x130) = iVar19 + 1U;
              if (*(uint *)(local_3f8 + 0x134) < iVar19 + 1U) {
                local_3fc = fVar27;
                FUN_14022ed06(local_3e0,iVar19);
                fVar27 = local_3fc;
              }
              pfVar16 = *(float **)(local_3f8 + 0x128);
              if (*(float **)(local_3f8 + 0x128) == (float *)0x0) {
                pfVar16 = local_3e0;
              }
              *(undefined8 *)(pfVar16 + lVar17 * 0x12) = uVar18;
              pfVar16[lVar17 * 0x12 + 2] = fVar31;
              pfVar16[lVar17 * 0x12 + 3] = fVar27;
              pfVar16[lVar17 * 0x12 + 4] = fVar28;
              *(undefined8 *)(pfVar16 + lVar17 * 0x12 + 5) = uVar10;
              pfVar16[lVar17 * 0x12 + 7] = fVar26;
              pfVar16[lVar17 * 0x12 + 8] = fVar23;
              pfVar16[lVar17 * 0x12 + 9] = fVar33;
              pfVar16[lVar17 * 0x12 + 10] = fVar22;
              pfVar16[lVar17 * 0x12 + 0xb] = fVar32;
              pfVar16[lVar17 * 0x12 + 0xc] = fVar29;
              *(byte *)(pfVar16 + lVar17 * 0x12 + 0xd) = bVar11;
              *(undefined2 *)((longlong)pfVar16 + lVar17 * 0x48 + 0x35) = (undefined2)local_36c;
              *(byte *)((longlong)pfVar16 + lVar17 * 0x48 + 0x37) = local_36c._2_1_;
              *(undefined8 *)(pfVar16 + lVar17 * 0x12 + 0xe) = uVar12;
              *(longlong **)(pfVar16 + lVar17 * 0x12 + 0x10) = plVar20;
              if (plVar20 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
                UNLOCK();
LAB_146a95d6d:
                LOCK();
                plVar1 = plVar20 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar20)(plVar20);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar20 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar20 + 0x10))(plVar20);
                  }
                }
              }
            }
            if (bVar6 != DAT_14c96b1e1) {
              fVar24 = fVar24 + fVar25;
            }
            uVar21 = uVar21 + (int)local_3d8;
          } while ((-1 < (int)uVar21) &&
                  (param_2 = local_3c8, (int)uVar21 < *(int *)(local_3d0 + 0x208)));
        }
      }
    }
  }
  if (local_160 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_146a96065:
  if ((local_f0 ^ (ulonglong)auStack_438) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a960fe FUN_146a960fe body=334 status=ok
// SIG undefined FUN_146a960fe(void)

double * FUN_146a960fe(longlong param_1,double *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  float *pfVar4;
  longlong lVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar10 = DAT_14c8463f8;
  *param_2 = DAT_14c8463f0;
  param_2[1] = dVar10;
  dVar10 = *param_2;
  if (0 < (longlong)*(int *)(param_1 + 0x208)) {
    lVar5 = 0;
    dVar7 = param_2[1];
    dVar8 = dVar10;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x200) + lVar5 * 8);
      lVar3 = *(longlong *)(lVar2 + 0x10);
      dVar9 = dVar7;
      dVar10 = dVar8;
      if (*(char *)(lVar3 + 0x39) != DAT_14c96b1e1) {
        pfVar4 = (float *)&DAT_14c84635c;
        if ((*(byte *)(lVar3 + 0x31) & 0x20) != 0) {
          pfVar4 = (float *)(lVar3 + 0x168);
        }
        dVar10 = (double)(*(float *)(lVar2 + 0x28) + *(float *)(lVar2 + 0x30)) + (double)*pfVar4;
        if (*(int *)(param_1 + 0x210) == 1) {
          if (dVar10 <= dVar8) {
            dVar10 = dVar8;
          }
          dVar9 = dVar7 + (double)pfVar4[1] +
                          (double)(*(float *)(lVar2 + 0x2c) + *(float *)(lVar2 + 0x34));
        }
        else {
          dVar10 = dVar8 + dVar10;
          dVar9 = (double)pfVar4[1] + (double)(*(float *)(lVar2 + 0x2c) + *(float *)(lVar2 + 0x34));
          if (dVar9 <= dVar7) {
            dVar9 = dVar7;
          }
        }
      }
      lVar5 = lVar5 + 1;
      dVar7 = dVar9;
      dVar8 = dVar10;
    } while (*(int *)(param_1 + 0x208) != lVar5);
    param_2[1] = dVar9;
  }
  *param_2 = dVar10;
  iVar1 = *(int *)(param_1 + 0x210);
  lVar5 = FUN_14287b896(param_1);
  dVar10 = (double)*(float *)(lVar5 + (ulonglong)(iVar1 == 1) * 4);
  bVar6 = *(int *)(param_1 + 0x210) == 1;
  dVar8 = dVar10;
  if (*(char *)(param_1 + 0x214) == '\0') {
    dVar8 = 0.0;
  }
  if (*(char *)(param_1 + 0x215) == '\0') {
    dVar10 = 0.0;
  }
  param_2[bVar6] = dVar8 + param_2[bVar6] + dVar10;
  return param_2;
}



// FUNCTION 146a96250 FUN_146a96250 body=206 status=ok
// SIG undefined FUN_146a96250(void)

undefined8 * FUN_146a96250(undefined8 *param_1)

{
  FUN_140a55f88();
  *param_1 = &PTR_FUN_149f15c20;
  *(undefined1 *)(param_1 + 0x56) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  FUN_1469ffb7a(param_1 + 0x58,0x3fb99999a0000000);
  FUN_1469ffd78(param_1 + 0x5c);
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  FUN_14570e3a0((longlong)param_1 + 0x334);
  param_1[0x6e] = 0;
  param_1[0x70] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x3cc) = 1;
  *(undefined4 *)(param_1 + 0x7a) = 0x41700000;
  param_1[0x50] = 0;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 4;
  return param_1;
}



// FUNCTION 146a9631e FUN_146a9631e body=272 status=ok
// SIG undefined FUN_146a9631e(void)

void FUN_146a9631e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f15c20;
  plVar3 = (longlong *)param_1[0x77];
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
  if (param_1[0x6e] != 0) {
    plVar3 = param_1 + 0x72;
    if ((longlong *)param_1[0x70] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x70];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  FUN_1449db362(param_1 + 0x61);
  FUN_1449db362(param_1 + 0x5f);
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x56) == '\x01') {
    *(undefined1 *)(param_1 + 0x56) = 0;
  }
  plVar3 = (longlong *)param_1[0x54];
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
  plVar3 = (longlong *)param_1[0x52];
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
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 146a9642e FUN_146a9642e body=1492 status=ok
// SIG undefined FUN_146a9642e(void)

void FUN_146a9642e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte bVar10;
  undefined1 auStack_298 [32];
  longlong local_278;
  code *local_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined1 local_258 [8];
  longlong *local_250;
  undefined1 local_248;
  undefined1 local_247;
  undefined8 local_240;
  undefined8 uStack_238;
  double local_230;
  longlong *plStack_228;
  undefined1 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  double local_208;
  longlong *plStack_200;
  undefined1 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined1 local_166;
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 local_5b;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_298;
  *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_2 + 0x1b8);
  *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_2 + 0x1c0);
  *(undefined4 *)(param_1 + 0x268) = 0;
  bVar10 = *(byte *)(param_1 + 0x3d4);
  *(byte *)(param_1 + 0x3d4) = bVar10 & 0xe7;
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_2 + 0x1fc);
  *(undefined8 *)(param_1 + 0x2b4) = 0;
  *(byte *)(param_1 + 0x3d4) = bVar10 & 0xe5;
  *(undefined8 *)(param_1 + 0x2f0) = DAT_14c84635c;
  FUN_140328a42(param_1 + 0x2f8,param_2 + 0x210);
  FUN_146aa7fd0(param_1 + 0x308,param_2 + 0x220);
  *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_2 + 0x1d8);
  bVar10 = *(byte *)(param_1 + 0x3d4);
  *(byte *)(param_1 + 0x3d4) = bVar10 & 0x1f;
  *(undefined1 *)(param_1 + 0x330) = *(undefined1 *)(param_2 + 0x230);
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  *(undefined1 *)(param_1 + 0x2e4) = *(undefined1 *)(param_2 + 0x1f8);
  *(undefined1 *)(param_1 + 0x2e5) = *(undefined1 *)(param_2 + 0x1f9);
  *(undefined1 *)(param_1 + 0x2e6) = *(undefined1 *)(param_2 + 0x1fa);
  *(byte *)(param_1 + 0x3d4) = bVar10 & 0x1e | *(byte *)(param_2 + 0x1fb);
  *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(param_2 + 0x200);
  *(undefined1 *)(param_1 + 0x3cc) = *(undefined1 *)(param_2 + 0x204);
  *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_2 + 0x208);
  *(undefined1 *)(param_1 + 0x2ec) = *(undefined1 *)(param_2 + 0x205);
  *(undefined1 *)(param_1 + 0x2ed) = *(undefined1 *)(param_2 + 0x20c);
  *(byte *)(param_1 + 0x3d5) = *(byte *)(param_1 + 0x3d5) & 0xfe;
  *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) | 2;
  lVar3 = *(longlong *)(param_2 + 0x1c8);
  if (lVar3 != 0) {
    lVar5 = *(longlong *)(param_2 + 0x1d0);
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    plVar4 = *(longlong **)(param_1 + 0x2a0);
    *(longlong *)(param_1 + 0x298) = lVar3;
    *(longlong *)(param_1 + 0x2a0) = lVar5;
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
    lVar3 = *(longlong *)(param_1 + 0x298);
    local_270 = FUN_146a96b3e;
    local_268 = 0;
    FUN_146a96a04(&local_208,param_1,&local_270);
    FUN_140328a42(lVar3 + 0x310,&local_208);
    FUN_1449db362(&local_208);
    lVar3 = *(longlong *)(param_1 + 0x298);
    local_270 = (code *)&LAB_146a96dde;
    local_268 = 0;
    FUN_146a96ca4(&local_208,param_1,&local_270);
    FUN_146aa7fd0(lVar3 + 800,&local_208);
    FUN_1449db362(&local_208);
    bVar10 = *(byte *)(param_1 + 0x3d4) | 4;
    goto LAB_146a9684f;
  }
  FUN_146a96dfe(param_1,&local_208);
  plVar1 = plStack_200;
  *(double *)(param_1 + 0x298) = local_208;
  local_208 = 0.0;
  plVar4 = *(longlong **)(param_1 + 0x2a0);
  if (plStack_200 == plVar4) {
LAB_146a965dd:
    plVar4 = plStack_200;
    if (plStack_200 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_200 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_200)(plStack_200);
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
  else {
    plStack_200 = (longlong *)0x0;
    *(longlong **)(param_1 + 0x2a0) = plVar1;
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
      goto LAB_146a965dd;
    }
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x298) + 0x33a) = *(undefined1 *)(param_2 + 0x1de);
  plStack_228 = (longlong *)(double)*(float *)(param_2 + 0x1e4);
  local_230 = (double)*(float *)(param_2 + 0x1e0);
  local_220 = 1;
  local_218 = 0;
  uStack_210 = 0;
  uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x298) + 0x2e8);
  local_1f8 = 1;
  local_1f0 = 0;
  local_1e8 = 0;
  local_208 = local_230;
  plStack_200 = plStack_228;
  FUN_140a51be2(&local_1f0,&local_218);
  FUN_140a50d48(uVar6,&local_208);
  FUN_1449db362(&local_218);
  lVar3 = *(longlong *)(param_1 + 0x298);
  local_248 = *(undefined1 *)(param_2 + 0x1dc);
  local_247 = 1;
  local_240 = 0;
  uStack_238 = 0;
  *(undefined1 *)(lVar3 + 0x2a0) = local_248;
  *(undefined1 *)(lVar3 + 0x2a1) = 1;
  FUN_140fe25fc(lVar3 + 0x2a8,&local_240);
  FUN_1449db362(&local_240);
  FUN_146a91f18(*(undefined8 *)(param_1 + 0x298),*(undefined1 *)(param_2 + 0x1dd));
  lVar3 = *(longlong *)(param_1 + 0x298);
  local_270 = (code *)&LAB_146a96dde;
  local_268 = 0;
  FUN_146a96ca4(&local_208,param_1);
  FUN_146aa7fd0(lVar3 + 800,&local_208);
  FUN_1449db362(&local_208);
  uVar7 = *(undefined4 *)(param_2 + 0x1ec);
  uVar8 = *(undefined4 *)(param_2 + 0x1f0);
  uVar9 = *(undefined4 *)(param_2 + 500);
  *(undefined4 *)(param_1 + 0x26c) = *(undefined4 *)(param_2 + 0x1e8);
  *(undefined4 *)(param_1 + 0x270) = uVar7;
  *(undefined4 *)(param_1 + 0x274) = uVar8;
  *(undefined4 *)(param_1 + 0x278) = uVar9;
  bVar10 = *(byte *)(param_1 + 0x3d4) & 0xfb;
LAB_146a9684f:
  *(byte *)(param_1 + 0x3d4) = bVar10;
  FUN_146a96faa(&local_208);
  local_166 = *(undefined1 *)(param_2 + 0xa2);
  local_60 = *(undefined4 *)(param_1 + 0x318);
  local_5c = *(undefined1 *)(param_1 + 0x2e5);
  local_5b = *(undefined1 *)(param_1 + 0x2e6);
  local_278 = param_2 + 0x1a8;
  FUN_146ac3e96(&local_270);
  lVar3 = CONCAT44(uStack_264,local_268);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x290);
  *(code **)(param_1 + 0x288) = local_270;
  *(longlong *)(param_1 + 0x290) = lVar3;
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
  FUN_146a9701c(&local_270,local_258,&local_208);
  if (local_250 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_250 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_250)(local_250);
      LOCK();
      piVar2 = (int *)((longlong)local_250 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_250 + 0x10))(local_250);
      }
    }
  }
  plVar4 = (longlong *)CONCAT44(uStack_264,local_268);
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
  FUN_140a4ff8c(&local_208);
  if (*(int *)(param_1 + 0x318) == 1) {
    FUN_146a970e0(param_1);
  }
  else {
    FUN_146a97a6c(param_1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x298) + 0x248))
            (*(longlong **)(param_1 + 0x298),0,0x3f800000,0);
  if ((local_50 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a96a04 FUN_146a96a04 body=313 status=ok
// SIG undefined FUN_146a96a04(void)

longlong * FUN_146a96a04(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146a96b00:
    *puVar5 = &PTR_LAB_149e01f80;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f197d0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146a96b00;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e01f80;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f197d0;
    puVar5[3] = uVar10;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 146a96b3e FUN_146a96b3e body=357 status=ok
// SIG undefined FUN_146a96b3e(void)

void FUN_146a96b3e(longlong param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  float fVar6;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *local_80;
  undefined1 local_78 [56];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(byte *)(param_1 + 0x3d4) = *(byte *)(param_1 + 0x3d4) & 0xef;
  local_88 = *(longlong *)(param_1 + 0x288);
  puVar5 = &DAT_14c84635c;
  if ((*(byte *)(local_88 + 0x31) & 0x20) != 0) {
    puVar5 = (ulonglong *)(local_88 + 0x168);
  }
  uVar4 = *puVar5 >> 0x20;
  if (*(int *)(param_1 + 0x318) != 1) {
    uVar4 = *puVar5;
  }
  plVar3 = *(longlong **)(param_1 + 0x290);
  if (plVar3 == (longlong *)0x0) {
    local_80 = (longlong *)0x0;
    FUN_14697e4e4(param_1,local_78,param_1 + 0x334);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_80 = plVar3;
    FUN_14697e4e4(param_1,local_78,param_1 + 0x334);
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
  fVar6 = SUB84(local_78._0_8_,4);
  if (*(int *)(param_1 + 0x318) != 1) {
    fVar6 = (float)local_78._0_8_;
  }
  fVar6 = (float)uVar4 - fVar6;
  param_2 = param_2 * (float)uVar4;
  if (fVar6 <= param_2) {
    param_2 = fVar6;
  }
  *(float *)(param_1 + 0x268) = param_2;
  if ((*(int *)(param_1 + 0x300) != 0) && (*(longlong **)(param_1 + 0x2f8) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x2f8) + 0x60))();
  }
  FUN_140163244(param_1,1);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a96ca4 FUN_146a96ca4 body=313 status=ok
// SIG undefined FUN_146a96ca4(void)

longlong * FUN_146a96ca4(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146a96da0:
    *puVar5 = &PTR_LAB_149f198b0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f19840;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146a96da0;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f198b0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f19840;
    puVar5[3] = uVar10;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 146a96dfe FUN_146a96dfe body=427 status=ok
// SIG undefined FUN_146a96dfe(void)

undefined8 * FUN_146a96dfe(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_2e8 [32];
  undefined1 *local_2c8;
  undefined1 local_2b1;
  undefined1 local_2b0 [8];
  longlong *local_2a8;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  code *local_268;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined1 local_258 [424];
  undefined8 local_b0;
  undefined1 local_a8 [36];
  undefined4 local_84;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  FUN_146a6ef34(local_258);
  local_b0 = *(undefined8 *)(param_1 + 0x328);
  local_84 = *(undefined4 *)(param_1 + 0x318);
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 1;
  local_280 = 0;
  uStack_278 = 0;
  local_40 = 1;
  local_50 = 0;
  uStack_48 = 0;
  FUN_144a450dc(local_38,&local_280);
  FUN_1449db362(&local_280);
  local_268 = FUN_146a96b3e;
  local_260 = 0;
  FUN_146a96a04(local_2b0,param_1);
  FUN_144a450dc(local_a8,local_2b0);
  FUN_1449db362(local_2b0);
  local_2c8 = &local_2b1;
  FUN_146a7fc04(local_2b0,"SScrollBar",".\\Runtime/Slate/Private/Widgets/Layout/SScrollBox.cpp",0xbf
               );
  FUN_146a6f02a(local_2b0,&local_268,local_258);
  *param_2 = local_268;
  lVar3 = CONCAT44(uStack_25c,local_260);
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
    plVar4 = (longlong *)CONCAT44(uStack_25c,local_260);
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
  if (local_2a8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_2a8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_2a8)(local_2a8);
      LOCK();
      piVar2 = (int *)((longlong)local_2a8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2a8 + 0x10))(local_2a8);
      }
    }
  }
  FUN_146a6f09e(local_258);
  if ((local_28 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a96faa FUN_146a96faa body=113 status=ok
// SIG undefined FUN_146a96faa(void)

longlong FUN_146a96faa(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined2 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  local_30 = CONCAT11(1,DAT_14c96b23c);
  local_28 = 0;
  uStack_20 = 0;
  *(undefined2 *)(param_1 + 0x70) = local_30;
  FUN_144a450dc(param_1 + 0x78,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a9701c FUN_146a9701c body=195 status=ok
// SIG undefined FUN_146a9701c(void)

longlong * FUN_146a9701c(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a515e6(*param_1,param_3);
  lVar1 = *param_1;
  puVar2 = *(undefined8 **)param_1[2];
  local_30 = *puVar2;
  *puVar2 = 0;
  local_28 = *(undefined4 *)(puVar2 + 1);
  local_24 = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  FUN_146a945ee(lVar1,param_3);
  plVar3 = (longlong *)*param_1;
  bVar6 = *(byte *)(plVar3 + 6);
  bVar5 = 0x20;
  if ((bVar6 & 0x10) == 0) {
    cVar4 = (**(code **)(*plVar3 + 0x220))(plVar3);
    bVar5 = cVar4 << 5;
    bVar6 = *(byte *)(plVar3 + 6);
  }
  *(byte *)(plVar3 + 6) = bVar6 & 0xdf | bVar5;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a970e0 FUN_146a970e0 body=2442 status=ok
// SIG undefined FUN_146a970e0(void)

void FUN_146a970e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_c28 [32];
  undefined1 *local_c08;
  undefined8 local_c00;
  undefined4 local_bf8;
  undefined4 uStack_bf4;
  undefined4 uStack_bf0;
  undefined4 uStack_bec;
  undefined1 local_be8;
  undefined8 local_be0;
  undefined8 uStack_bd8;
  undefined1 local_bc1;
  undefined8 local_bc0;
  longlong *local_bb8;
  undefined1 local_ba1;
  undefined1 local_ba0 [8];
  longlong *local_b98;
  undefined1 local_b81;
  undefined1 *local_b80;
  undefined4 local_b78;
  undefined4 uStack_b74;
  longlong local_b68;
  undefined1 local_b60;
  undefined8 local_b58;
  undefined8 uStack_b50;
  undefined2 local_b48;
  undefined8 local_b40;
  undefined8 uStack_b38;
  undefined8 local_b30;
  longlong *local_b28;
  undefined8 local_b20;
  longlong *local_b18;
  undefined1 local_b09;
  undefined1 local_b08 [8];
  longlong *local_b00;
  longlong local_af0;
  undefined1 local_ae8;
  undefined8 local_ae0;
  undefined8 uStack_ad8;
  undefined2 local_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 local_ab8;
  longlong *local_ab0;
  undefined8 local_aa8;
  longlong *local_aa0;
  undefined8 local_a98;
  longlong *local_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined1 local_a78;
  undefined8 local_a70;
  undefined8 uStack_a68;
  undefined8 local_a60;
  longlong *local_a58;
  undefined8 local_a50;
  longlong *local_a48;
  undefined4 local_a40;
  undefined1 local_a3c;
  undefined8 local_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  longlong *local_a20;
  undefined8 local_a18;
  longlong *local_a10;
  undefined1 local_a08 [64];
  undefined4 local_9c8;
  undefined1 local_9c4;
  undefined4 local_9c0;
  undefined1 local_9bc;
  undefined1 local_9b0 [64];
  undefined4 local_970;
  undefined1 local_96c;
  undefined4 local_968;
  undefined1 local_964;
  undefined1 local_958 [24];
  undefined4 local_940;
  undefined4 uStack_93c;
  undefined4 uStack_938;
  undefined4 uStack_934;
  undefined1 local_930;
  undefined1 local_928 [40];
  undefined1 *local_900;
  undefined8 local_8f8;
  undefined2 local_890;
  undefined1 local_888 [304];
  longlong local_758;
  undefined1 local_750;
  undefined1 local_748 [128];
  undefined1 local_6c8 [8];
  undefined1 local_6c0 [24];
  undefined4 local_6a8;
  undefined4 uStack_6a4;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  undefined1 local_698;
  undefined1 local_690 [56];
  undefined2 local_658;
  undefined1 local_650 [304];
  longlong local_520;
  undefined1 local_518;
  undefined1 local_510 [128];
  undefined1 local_490 [440];
  undefined1 local_2d8 [192];
  undefined1 local_218 [440];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c28;
  FUN_140a5296a(local_218);
  FUN_140a50426(local_2d8);
  local_a40 = 0x3f800000;
  local_a3c = 1;
  local_a38 = 0;
  uStack_a30 = 0;
  local_c00 = FUN_140a5475a(local_2d8);
  FUN_140a504fe(local_490);
  FUN_140a4fdf2(local_958,0);
  uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 800) + 0x2e0);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 800) + 0x2e8);
  local_a78 = 1;
  local_a70 = 0;
  uStack_a68 = 0;
  local_930 = 1;
  local_a88._0_4_ = (undefined4)uVar6;
  local_a88._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_a80._0_4_ = (undefined4)uVar7;
  uStack_a80._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  local_940 = (undefined4)local_a88;
  uStack_93c = local_a88._4_4_;
  uStack_938 = (undefined4)uStack_a80;
  uStack_934 = uStack_a80._4_4_;
  local_a88 = uVar6;
  uStack_a80 = uVar7;
  FUN_144a450dc(local_928,&local_a70);
  FUN_1449db362(&local_a70);
  local_a98 = *(undefined8 *)(param_1 + 0x288);
  plVar3 = *(longlong **)(param_1 + 0x290);
  if (plVar3 == (longlong *)0x0) {
    local_a90 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_a90 = plVar3;
  }
  uVar6 = FUN_140a4fd40(local_958,&local_a98);
  uVar6 = FUN_140a5058c(local_490,uVar6);
  FUN_140a4fdf2(local_9b0,0);
  local_970 = 0;
  local_96c = 1;
  local_968 = 1;
  local_964 = 1;
  FUN_140a53334(local_6c8);
  local_ad0 = CONCAT11(1,DAT_14c96b23a);
  local_ac8 = 0;
  uStack_ac0 = 0;
  local_658 = local_ad0;
  FUN_144a450dc(local_650,&local_ac8);
  FUN_1449db362(&local_ac8);
  local_900 = &LAB_146a984d4;
  local_8f8 = (longlong *)((ulonglong)local_8f8._4_4_ << 0x20);
  FUN_146a9840a(local_6c8,param_1);
  local_af0 = *(longlong *)(param_1 + 800) + 0x10;
  local_ae8 = 1;
  local_ae0 = 0;
  uStack_ad8 = 0;
  local_518 = 1;
  local_520 = local_af0;
  FUN_144a450dc(local_510,&local_ae0);
  FUN_1449db362(&local_ae0);
  local_c08 = &local_b09;
  FUN_140a554b8(local_b08,"SImage",".\\Runtime/Slate/Private/Widgets/Layout/SScrollBox.cpp",0xde);
  FUN_140a52c70(local_b08,&local_ab8,local_6c8);
  local_aa8 = local_ab8;
  local_aa0 = local_ab0;
  if (local_ab0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_ab0 + 1) = (int)local_ab0[1] + 1;
    UNLOCK();
  }
  uVar7 = FUN_140a4fd40(local_9b0,&local_aa8);
  uVar6 = FUN_140a5058c(uVar6,uVar7);
  FUN_140a4fdf2(local_a08,0);
  local_9c8 = 0;
  local_9c4 = 1;
  local_9c0 = 3;
  local_9bc = 1;
  FUN_140a53334(&local_900);
  local_b48 = CONCAT11(1,DAT_14c96b23a);
  local_b40 = 0;
  uStack_b38 = 0;
  local_890 = local_b48;
  FUN_144a450dc(local_888,&local_b40);
  FUN_1449db362(&local_b40);
  local_b80 = &LAB_146a9851c;
  local_b78 = 0;
  FUN_146a9840a(&local_900,param_1);
  local_b68 = *(longlong *)(param_1 + 800) + 0xc0;
  local_b60 = 1;
  local_b58 = 0;
  uStack_b50 = 0;
  local_750 = 1;
  local_758 = local_b68;
  FUN_144a450dc(local_748,&local_b58);
  FUN_1449db362(&local_b58);
  local_c08 = &local_b81;
  FUN_140a554b8(&local_b80,"SImage",".\\Runtime/Slate/Private/Widgets/Layout/SScrollBox.cpp",0xe9);
  FUN_140a52c70(&local_b80,&local_b30,&local_900);
  local_b20 = local_b30;
  local_b18 = local_b28;
  if (local_b28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b28 + 1) = (int)local_b28[1] + 1;
    UNLOCK();
  }
  uVar7 = FUN_140a4fd40(local_a08,&local_b20);
  uVar6 = FUN_140a5058c(uVar6,uVar7);
  local_c08 = &local_ba1;
  FUN_140a536a8(local_ba0,"SOverlay",".\\Runtime/Slate/Private/Widgets/Layout/SScrollBox.cpp",0xd0);
  FUN_140a4ff16(local_ba0,&local_a60,uVar6);
  local_a50 = local_a60;
  local_a48 = local_a58;
  if (local_a58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a58 + 1) = (int)local_a58[1] + 1;
    UNLOCK();
  }
  uVar6 = FUN_140a4fe8e(local_c00,&local_a50);
  uVar6 = FUN_140a52392(local_218,uVar6);
  local_c08 = &local_bc1;
  FUN_140a541dc(&local_bc0,"SHorizontalBox",".\\Runtime/Slate/Private/Widgets/Layout/SScrollBox.cpp"
                ,0xcb);
  plVar5 = local_bb8;
  if (local_bb8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_bb8 + 1) = (int)local_bb8[1] + 1;
    UNLOCK();
  }
  FUN_140a50ec6(&local_bc0,&local_a28,uVar6);
  local_a18 = local_a28;
  local_a10 = local_a20;
  if (local_a20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a20 + 1) = (int)local_a20[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(param_1 + 0x1e0,&local_a18);
  plVar4 = local_a10;
  if (local_a10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_a10)(local_a10);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_a20 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_a20 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_a20)(local_a20);
      LOCK();
      piVar2 = (int *)((longlong)local_a20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a20 + 0x10))(local_a20);
      }
    }
  }
  if (local_bb8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_bb8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_bb8)(local_bb8);
      LOCK();
      piVar2 = (int *)((longlong)local_bb8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_bb8 + 0x10))(local_bb8);
      }
    }
  }
  plVar4 = local_a48;
  if (local_a48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_a48)(local_a48);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_a58 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_a58 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_a58)(local_a58);
      LOCK();
      piVar2 = (int *)((longlong)local_a58 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a58 + 0x10))(local_a58);
      }
    }
  }
  if (local_b98 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_b98 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_b98)(local_b98);
      LOCK();
      piVar2 = (int *)((longlong)local_b98 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_b98 + 0x10))(local_b98);
      }
    }
  }
  plVar4 = local_b18;
  if (local_b18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_b18)(local_b18);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_b28 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_b28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_b28)(local_b28);
      LOCK();
      piVar2 = (int *)((longlong)local_b28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_b28 + 0x10))(local_b28);
      }
    }
  }
  plVar4 = (longlong *)CONCAT44(uStack_b74,local_b78);
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
  FUN_140a55a86(&local_900);
  FUN_1415b5e50(local_a08);
  plVar4 = local_aa0;
  if (local_aa0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_aa0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_aa0)(local_aa0);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_ab0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_ab0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_ab0)(local_ab0);
      LOCK();
      piVar2 = (int *)((longlong)local_ab0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_ab0 + 0x10))(local_ab0);
      }
    }
  }
  if (local_b00 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_b00 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_b00)(local_b00);
      LOCK();
      piVar2 = (int *)((longlong)local_b00 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_b00 + 0x10))(local_b00);
      }
    }
  }
  FUN_140a55a86(local_6c8);
  FUN_1415b5e50(local_9b0);
  plVar4 = local_a90;
  if (local_a90 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a90 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_a90)(local_a90);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  FUN_1415b5e50(local_958);
  FUN_1415b5e16(local_490);
  FUN_140a509a6(local_2d8);
  FUN_145ab33da(local_218);
  *(undefined8 *)(param_1 + 0x280) = 0;
  if ((*(byte *)(param_1 + 0x3d4) & 4) == 0) {
    FUN_146a24608(local_bc0,local_6c8,0xffffffff);
    local_bf8 = *(undefined4 *)(param_1 + 0x26c);
    uStack_bf4 = *(undefined4 *)(param_1 + 0x270);
    uStack_bf0 = *(undefined4 *)(param_1 + 0x274);
    uStack_bec = *(undefined4 *)(param_1 + 0x278);
    local_be8 = 1;
    local_be0 = 0;
    uStack_bd8 = 0;
    local_698 = 1;
    local_6a8 = local_bf8;
    uStack_6a4 = uStack_bf4;
    uStack_6a0 = uStack_bf0;
    uStack_69c = uStack_bec;
    FUN_144a450dc(local_690,&local_be0);
    FUN_1449db362(&local_be0);
    puVar8 = (undefined8 *)FUN_140a52578(local_6c0);
    *(undefined8 *)(param_1 + 0x280) = *puVar8;
    local_900 = *(undefined1 **)(param_1 + 0x298);
    plVar3 = *(longlong **)(param_1 + 0x2a0);
    if (plVar3 == (longlong *)0x0) {
      local_8f8 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_8f8 = plVar3;
    }
    FUN_140a4fe8e(puVar8,&local_900);
    plVar4 = local_8f8;
    if (local_8f8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_8f8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_8f8)(local_8f8);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    FUN_146a071ac(local_6c8);
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_c28) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a97a6c FUN_146a97a6c body=2443 status=ok
// SIG undefined FUN_146a97a6c(void)

void FUN_146a97a6c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_c28 [32];
  undefined1 *local_c08;
  undefined8 local_c00;
  undefined4 local_bf8;
  undefined4 uStack_bf4;
  undefined4 uStack_bf0;
  undefined4 uStack_bec;
  undefined1 local_be8;
  undefined8 local_be0;
  undefined8 uStack_bd8;
  undefined1 local_bc1;
  undefined8 local_bc0;
  longlong *local_bb8;
  undefined1 local_ba1;
  undefined1 local_ba0 [8];
  longlong *local_b98;
  undefined1 local_b81;
  undefined1 *local_b80;
  undefined4 local_b78;
  undefined4 uStack_b74;
  longlong local_b68;
  undefined1 local_b60;
  undefined8 local_b58;
  undefined8 uStack_b50;
  undefined2 local_b48;
  undefined8 local_b40;
  undefined8 uStack_b38;
  undefined8 local_b30;
  longlong *local_b28;
  undefined8 local_b20;
  longlong *local_b18;
  undefined1 local_b09;
  undefined1 local_b08 [8];
  longlong *local_b00;
  longlong local_af0;
  undefined1 local_ae8;
  undefined8 local_ae0;
  undefined8 uStack_ad8;
  undefined2 local_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 local_ab8;
  longlong *local_ab0;
  undefined8 local_aa8;
  longlong *local_aa0;
  undefined8 local_a98;
  longlong *local_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined1 local_a78;
  undefined8 local_a70;
  undefined8 uStack_a68;
  undefined8 local_a60;
  longlong *local_a58;
  undefined8 local_a50;
  longlong *local_a48;
  undefined4 local_a40;
  undefined1 local_a3c;
  undefined8 local_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  longlong *local_a20;
  undefined8 local_a18;
  longlong *local_a10;
  undefined1 local_a08 [64];
  undefined4 local_9c8;
  undefined1 local_9c4;
  undefined4 local_9c0;
  undefined1 local_9bc;
  undefined1 local_9b0 [64];
  undefined4 local_970;
  undefined1 local_96c;
  undefined4 local_968;
  undefined1 local_964;
  undefined1 local_958 [24];
  undefined4 local_940;
  undefined4 uStack_93c;
  undefined4 uStack_938;
  undefined4 uStack_934;
  undefined1 local_930;
  undefined1 local_928 [40];
  undefined1 *local_900;
  undefined8 local_8f8;
  undefined2 local_890;
  undefined1 local_888 [304];
  longlong local_758;
  undefined1 local_750;
  undefined1 local_748 [128];
  undefined1 local_6c8 [8];
  undefined1 local_6c0 [24];
  undefined4 local_6a8;
  undefined4 uStack_6a4;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  undefined1 local_698;
  undefined1 local_690 [56];
  undefined2 local_658;
  undefined1 local_650 [304];
  longlong local_520;
  undefined1 local_518;
  undefined1 local_510 [128];
  undefined1 local_490 [440];
  undefined1 local_2d8 [192];
  undefined1 local_218 [440];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c28;
  FUN_1407679b0(local_218);
  FUN_145aafb3e(local_2d8);
  local_a40 = 0x3f800000;
  local_a3c = 1;
  local_a38 = 0;
  uStack_a30 = 0;
  local_c00 = FUN_140767d84(local_2d8);
  FUN_140a504fe(local_490);
  FUN_140a4fdf2(local_958,0);
  uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 800) + 0x2d0);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 800) + 0x2d8);
  local_a78 = 1;
  local_a70 = 0;
  uStack_a68 = 0;
  local_930 = 1;
  local_a88._0_4_ = (undefined4)uVar6;
  local_a88._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_a80._0_4_ = (undefined4)uVar7;
  uStack_a80._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  local_940 = (undefined4)local_a88;
  uStack_93c = local_a88._4_4_;
  uStack_938 = (undefined4)uStack_a80;
  uStack_934 = uStack_a80._4_4_;
  local_a88 = uVar6;
  uStack_a80 = uVar7;
  FUN_144a450dc(local_928,&local_a70);
  FUN_1449db362(&local_a70);
  local_a98 = *(undefined8 *)(param_1 + 0x288);
  plVar3 = *(longlong **)(param_1 + 0x290);
  if (plVar3 == (longlong *)0x0) {
    local_a90 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_a90 = plVar3;
  }
  uVar6 = FUN_140a4fd40(local_958,&local_a98);
  uVar6 = FUN_140a5058c(local_490,uVar6);
  FUN_140a4fdf2(local_9b0,0);
  local_970 = 1;
  local_96c = 1;
  local_968 = 0;
  local_964 = 1;
  FUN_140a53334(local_6c8);
  local_ad0 = CONCAT11(1,DAT_14c96b23a);
  local_ac8 = 0;
  uStack_ac0 = 0;
  local_658 = local_ad0;
  FUN_144a450dc(local_650,&local_ac8);
  FUN_1449db362(&local_ac8);
  local_900 = &LAB_146a984d4;
  local_8f8 = (longlong *)((ulonglong)local_8f8._4_4_ << 0x20);
  FUN_146a9840a(local_6c8,param_1);
  local_af0 = *(longlong *)(param_1 + 800) + 0x170;
  local_ae8 = 1;
  local_ae0 = 0;
  uStack_ad8 = 0;
  local_518 = 1;
  local_520 = local_af0;
  FUN_144a450dc(local_510,&local_ae0);
  FUN_1449db362(&local_ae0);
  local_c08 = &local_b09;
  FUN_140a554b8(local_b08,"SImage",".\\Runtime/Slate/Private/Widgets/Layout/SScrollBox.cpp",0x116);
  FUN_140a52c70(local_b08,&local_ab8,local_6c8);
  local_aa8 = local_ab8;
  local_aa0 = local_ab0;
  if (local_ab0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_ab0 + 1) = (int)local_ab0[1] + 1;
    UNLOCK();
  }
  uVar7 = FUN_140a4fd40(local_9b0,&local_aa8);
  uVar6 = FUN_140a5058c(uVar6,uVar7);
  FUN_140a4fdf2(local_a08,0);
  local_9c8 = 3;
  local_9c4 = 1;
  local_9c0 = 0;
  local_9bc = 1;
  FUN_140a53334(&local_900);
  local_b48 = CONCAT11(1,DAT_14c96b23a);
  local_b40 = 0;
  uStack_b38 = 0;
  local_890 = local_b48;
  FUN_144a450dc(local_888,&local_b40);
  FUN_1449db362(&local_b40);
  local_b80 = &LAB_146a9851c;
  local_b78 = 0;
  FUN_146a9840a(&local_900,param_1);
  local_b68 = *(longlong *)(param_1 + 800) + 0x220;
  local_b60 = 1;
  local_b58 = 0;
  uStack_b50 = 0;
  local_750 = 1;
  local_758 = local_b68;
  FUN_144a450dc(local_748,&local_b58);
  FUN_1449db362(&local_b58);
  local_c08 = &local_b81;
  FUN_140a554b8(&local_b80,"SImage",".\\Runtime/Slate/Private/Widgets/Layout/SScrollBox.cpp",0x121);
  FUN_140a52c70(&local_b80,&local_b30,&local_900);
  local_b20 = local_b30;
  local_b18 = local_b28;
  if (local_b28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b28 + 1) = (int)local_b28[1] + 1;
    UNLOCK();
  }
  uVar7 = FUN_140a4fd40(local_a08,&local_b20);
  uVar6 = FUN_140a5058c(uVar6,uVar7);
  local_c08 = &local_ba1;
  FUN_140a536a8(local_ba0,"SOverlay",".\\Runtime/Slate/Private/Widgets/Layout/SScrollBox.cpp",0x108)
  ;
  FUN_140a4ff16(local_ba0,&local_a60,uVar6);
  local_a50 = local_a60;
  local_a48 = local_a58;
  if (local_a58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a58 + 1) = (int)local_a58[1] + 1;
    UNLOCK();
  }
  uVar6 = FUN_145aaf878(local_c00,&local_a50);
  uVar6 = FUN_145aaf822(local_218,uVar6);
  local_c08 = &local_bc1;
  FUN_14076837c(&local_bc0,"SVerticalBox",".\\Runtime/Slate/Private/Widgets/Layout/SScrollBox.cpp",
                0x103);
  plVar5 = local_bb8;
  if (local_bb8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_bb8 + 1) = (int)local_bb8[1] + 1;
    UNLOCK();
  }
  FUN_14076784c(&local_bc0,&local_a28,uVar6);
  local_a18 = local_a28;
  local_a10 = local_a20;
  if (local_a20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a20 + 1) = (int)local_a20[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(param_1 + 0x1e0,&local_a18);
  plVar4 = local_a10;
  if (local_a10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_a10)(local_a10);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_a20 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_a20 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_a20)(local_a20);
      LOCK();
      piVar2 = (int *)((longlong)local_a20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a20 + 0x10))(local_a20);
      }
    }
  }
  if (local_bb8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_bb8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_bb8)(local_bb8);
      LOCK();
      piVar2 = (int *)((longlong)local_bb8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_bb8 + 0x10))(local_bb8);
      }
    }
  }
  plVar4 = local_a48;
  if (local_a48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_a48)(local_a48);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_a58 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_a58 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_a58)(local_a58);
      LOCK();
      piVar2 = (int *)((longlong)local_a58 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a58 + 0x10))(local_a58);
      }
    }
  }
  if (local_b98 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_b98 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_b98)(local_b98);
      LOCK();
      piVar2 = (int *)((longlong)local_b98 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_b98 + 0x10))(local_b98);
      }
    }
  }
  plVar4 = local_b18;
  if (local_b18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_b18)(local_b18);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_b28 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_b28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_b28)(local_b28);
      LOCK();
      piVar2 = (int *)((longlong)local_b28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_b28 + 0x10))(local_b28);
      }
    }
  }
  plVar4 = (longlong *)CONCAT44(uStack_b74,local_b78);
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
  FUN_140a55a86(&local_900);
  FUN_1415b5e50(local_a08);
  plVar4 = local_aa0;
  if (local_aa0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_aa0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_aa0)(local_aa0);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_ab0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_ab0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_ab0)(local_ab0);
      LOCK();
      piVar2 = (int *)((longlong)local_ab0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_ab0 + 0x10))(local_ab0);
      }
    }
  }
  if (local_b00 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_b00 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_b00)(local_b00);
      LOCK();
      piVar2 = (int *)((longlong)local_b00 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_b00 + 0x10))(local_b00);
      }
    }
  }
  FUN_140a55a86(local_6c8);
  FUN_1415b5e50(local_9b0);
  plVar4 = local_a90;
  if (local_a90 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a90 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_a90)(local_a90);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  FUN_1415b5e50(local_958);
  FUN_1415b5e16(local_490);
  FUN_140767f30(local_2d8);
  FUN_14149255e(local_218);
  *(undefined8 *)(param_1 + 0x280) = 0;
  if ((*(byte *)(param_1 + 0x3d4) & 4) == 0) {
    FUN_140767c14(local_bc0,local_6c8,0xffffffff);
    local_bf8 = *(undefined4 *)(param_1 + 0x26c);
    uStack_bf4 = *(undefined4 *)(param_1 + 0x270);
    uStack_bf0 = *(undefined4 *)(param_1 + 0x274);
    uStack_bec = *(undefined4 *)(param_1 + 0x278);
    local_be8 = 1;
    local_be0 = 0;
    uStack_bd8 = 0;
    local_698 = 1;
    local_6a8 = local_bf8;
    uStack_6a4 = uStack_bf4;
    uStack_6a0 = uStack_bf0;
    uStack_69c = uStack_bec;
    FUN_144a450dc(local_690,&local_be0);
    FUN_1449db362(&local_be0);
    puVar8 = (undefined8 *)FUN_145aaf900(local_6c0);
    *(undefined8 *)(param_1 + 0x280) = *puVar8;
    local_900 = *(undefined1 **)(param_1 + 0x298);
    plVar3 = *(longlong **)(param_1 + 0x2a0);
    if (plVar3 == (longlong *)0x0) {
      local_8f8 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_8f8 = plVar3;
    }
    FUN_145aaf878(puVar8,&local_900);
    plVar4 = local_8f8;
    if (local_8f8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_8f8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_8f8)(local_8f8);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    FUN_140767802(local_6c8);
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_c28) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a9840a FUN_146a9840a body=200 status=ok
// SIG undefined FUN_146a9840a(void)

longlong FUN_146a9840a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_40 = *(undefined4 *)(param_3 + 1);
  local_48 = *param_3;
  FUN_146ac4216(local_58,param_2,&local_48);
  local_48 = 0x3f800000;
  uStack_40 = 0x3f800000;
  uStack_3c = 0x3f800000;
  local_38 = local_38 & 0xffffff00;
  local_34 = 1;
  local_30 = 0;
  local_28 = 0;
  FUN_140a5aaa0(&local_30,local_58);
  *(uint *)(param_1 + 0x1d8) = local_38;
  *(undefined4 *)(param_1 + 0x1c8) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 0x1cc) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x1d0) = uStack_40;
  *(undefined4 *)(param_1 + 0x1d4) = uStack_3c;
  *(undefined1 *)(param_1 + 0x1dc) = local_34;
  FUN_144a450dc(param_1 + 0x1e0,&local_30);
  FUN_1449db362(&local_30);
  FUN_1449db362(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a985ac FUN_146a985ac body=22 status=ok
// SIG undefined FUN_146a985ac(void)

undefined8 FUN_146a985ac(undefined8 param_1,undefined8 param_2)

{
  FUN_146a985c2();
  return param_2;
}



// FUNCTION 146a985c2 FUN_146a985c2 body=209 status=ok
// SIG undefined FUN_146a985c2(void)

undefined8 FUN_146a985c2(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  local_20[4] = 0;
  *local_20 = &PTR_FUN_149edb640;
  local_20[1] = 0;
  local_20[2] = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  local_20[3] = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_20[5] = 0;
  local_20[6] = 0;
  local_20[7] = 0;
  *local_20 = &PTR_FUN_149f19780;
  local_20[4] = &PTR_LAB_149f19790;
  *(undefined4 *)(local_20 + 8) = 0;
  local_20[9] = &DAT_3f8000003f800000;
  local_20[10] = 0;
  FUN_146a98694(param_2,&local_20,*(longlong *)(param_1 + 0x288) + 0x1e8);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a98694 FUN_146a98694 body=144 status=ok
// SIG undefined FUN_146a98694(void)

longlong * FUN_146a98694(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *param_2;
  *param_2 = 0;
  *param_1 = lVar1;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((longlong)param_1 + 0x94) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa5) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = param_3;
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return param_1;
}



// FUNCTION 146a98724 FUN_146a98724 body=62 status=ok
// SIG undefined FUN_146a98724(void)

void FUN_146a98724(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (0 < (longlong)*(int *)(lVar1 + 0x208)) {
    lVar2 = 0;
    do {
      if (*param_2 == *(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x200) + lVar2 * 8) + 0x10))
      {
        FUN_146ac46e4(lVar1 + 0x200);
        return;
      }
      lVar2 = lVar2 + 1;
    } while (*(int *)(lVar1 + 0x208) != lVar2);
  }
  return;
}



// FUNCTION 146a98762 FUN_146a98762 body=9 status=ok
// SIG undefined FUN_146a98762(void)

undefined4 FUN_146a98762(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x268);
}



// FUNCTION 146a9876c FUN_146a9876c body=264 status=ok
// SIG undefined FUN_146a9876c(void)

float FUN_146a9876c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  ulonglong local_50 [7];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = *(undefined8 *)(param_1 + 0x288);
  plVar3 = *(longlong **)(param_1 + 0x290);
  if (plVar3 == (longlong *)0x0) {
    local_58 = (longlong *)0x0;
    FUN_14697e4e4(param_1,local_50,param_1 + 0x334);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_58 = plVar3;
    FUN_14697e4e4(param_1,local_50,param_1 + 0x334);
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
  puVar5 = &DAT_14c84635c;
  if ((*(byte *)(*(longlong *)(param_1 + 0x288) + 0x31) & 0x20) != 0) {
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x288) + 0x168);
  }
  fVar6 = (float)((ulonglong)*puVar5 >> 0x20);
  uVar4 = local_50[0] >> 0x20;
  if (*(int *)(param_1 + 0x318) != 1) {
    fVar6 = (float)*puVar5;
    uVar4 = local_50[0];
  }
  fVar6 = fVar6 - (float)uVar4;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return fVar6;
}



// FUNCTION 146a98876 FUN_146a98876 body=313 status=ok
// SIG undefined FUN_146a98876(void)

void FUN_146a98876(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  undefined1 local_50 [56];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = *(undefined8 *)(param_1 + 0x288);
  plVar3 = *(longlong **)(param_1 + 0x290);
  if (plVar3 == (longlong *)0x0) {
    local_58 = (longlong *)0x0;
    FUN_14697e4e4(param_1,local_50,param_1 + 0x334);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_58 = plVar3;
    FUN_14697e4e4(param_1,local_50,param_1 + 0x334);
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
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a989b0 FUN_146a989b0 body=306 status=ok
// SIG undefined FUN_146a989b0(void)

void FUN_146a989b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_70;
  undefined1 local_68 [56];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = *(undefined8 *)(param_1 + 0x288);
  plVar3 = *(longlong **)(param_1 + 0x290);
  if (plVar3 == (longlong *)0x0) {
    local_70 = (longlong *)0x0;
    FUN_14697e4e4(param_1,local_68,param_1 + 0x334);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_70 = plVar3;
    FUN_14697e4e4(param_1,local_68,param_1 + 0x334);
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
  puVar4 = &DAT_14c84635c;
  if ((*(byte *)(*(longlong *)(param_1 + 0x288) + 0x31) & 0x20) != 0) {
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x288) + 0x168);
  }
  fVar6 = (float)((ulonglong)*puVar4 >> 0x20);
  if (*(int *)(param_1 + 0x318) != 1) {
    fVar6 = (float)*puVar4;
  }
  fVar5 = (float)FUN_146a98876(param_1);
  fVar6 = *(float *)(param_1 + 0x268) / fVar6;
  if (1.0 - fVar5 <= fVar6) {
    fVar6 = 1.0 - fVar5;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar6);
}



// FUNCTION 146a98ae4 FUN_146a98ae4 body=22 status=ok
// SIG undefined FUN_146a98ae4(void)

void FUN_146a98ae4(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x268) = param_2;
  *(byte *)(param_1 + 0x3d4) = *(byte *)(param_1 + 0x3d4) & 0xdf;
  FUN_140163244(param_1,1);
  return;
}



// FUNCTION 146a98b20 FUN_146a98b20 body=444 status=ok
// SIG undefined FUN_146a98b20(void)

void FUN_146a98b20(longlong param_1,undefined8 *param_2,undefined1 param_3,undefined1 param_4,
                  undefined4 param_5)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 auStack_e8 [32];
  code *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar2 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_c8 = (code *)0x0;
  puVar9 = (undefined8 *)FUN_14001cc68(0x28,8);
  *puVar9 = &PTR_FUN_149f19c40;
  puVar9[1] = param_1;
  puVar9[2] = uVar2;
  puVar9[3] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  *(uint *)(puVar9 + 4) = (uint)CONCAT11(param_4,param_3);
  *(undefined4 *)((longlong)puVar9 + 0x24) = param_5;
  if (puVar9 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_c8 = FUN_1429052f8;
  }
  local_88 = *(longlong *)(param_1 + 0x370);
  uStack_80 = *(undefined8 *)(param_1 + 0x378);
  local_b8 = *(longlong **)(param_1 + 0x380);
  uStack_70 = *(undefined8 *)(param_1 + 0x388);
  local_68 = *(undefined8 *)(param_1 + 0x390);
  uStack_60 = *(undefined8 *)(param_1 + 0x398);
  local_58 = *(undefined8 *)(param_1 + 0x3a0);
  uStack_50 = *(undefined8 *)(param_1 + 0x3a8);
  uVar7 = local_58;
  uVar8 = uStack_50;
  uVar5 = local_68;
  uVar6 = uStack_60;
  local_78 = local_b8;
  uVar4 = uStack_70;
  uVar2 = uStack_80;
  *(ulonglong *)(param_1 + 0x3a0) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(param_1 + 0x3a8) = CONCAT44(uStack_8c,uStack_90);
  *(ulonglong *)(param_1 + 0x390) = CONCAT44(uStack_a4,local_a8);
  *(ulonglong *)(param_1 + 0x398) = CONCAT44(uStack_9c,uStack_a0);
  *(undefined8 **)(param_1 + 0x380) = puVar9;
  *(ulonglong *)(param_1 + 0x388) = CONCAT44(uStack_ac,uStack_b0);
  *(code **)(param_1 + 0x370) = local_c8;
  *(ulonglong *)(param_1 + 0x378) = CONCAT44(uStack_bc,uStack_c0);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = (undefined4)local_68;
  uStack_a4 = local_68._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  local_c8 = (code *)local_88;
  uStack_80 = uVar2;
  uStack_70 = uVar4;
  local_68 = uVar5;
  uStack_60 = uVar6;
  local_58 = uVar7;
  uStack_50 = uVar8;
  if (local_88 != 0) {
    plVar10 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar10 = (longlong *)&local_a8;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar3 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_146a98cde(param_1);
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a98cde FUN_146a98cde body=320 status=ok
// SIG undefined FUN_146a98cde(void)

void FUN_146a98cde(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  code *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x3b0) != 0) goto LAB_146a98cfe;
  *(byte *)(param_1 + 0x3d4) = *(byte *)(param_1 + 0x3d4) | 0x48;
  local_30 = FUN_146a993e8;
  local_28 = 0;
  FUN_146a9b4e2(local_40,param_1);
  FUN_14697ef1e(param_1,&local_30,0,local_40);
  plVar3 = (longlong *)CONCAT44(uStack_24,local_28);
  if (plVar3 == (longlong *)0x0) {
    *(code **)(param_1 + 0x3b0) = local_30;
    plVar4 = *(longlong **)(param_1 + 0x3b8);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x3b8) = 0;
LAB_146a98db3:
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
joined_r0x000146a98dde:
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
    *(code **)(param_1 + 0x3b0) = local_30;
    plVar4 = *(longlong **)(param_1 + 0x3b8);
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
        goto joined_r0x000146a98dde;
      }
    }
    else {
      *(longlong **)(param_1 + 0x3b8) = plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_146a98db3;
    }
  }
  plVar3 = (longlong *)CONCAT44(uStack_24,local_28);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_140163244(param_1,5);
LAB_146a98cfe:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a98e20 FUN_146a98e20 body=575 status=ok
// SIG undefined FUN_146a98e20(void)

byte FUN_146a98e20(longlong param_1,undefined8 param_2,float param_3,char param_4,char param_5)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong *plVar4;
  ulonglong uVar5;
  byte bVar6;
  char cVar7;
  ulonglong *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8 [7];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_140163244(param_1,5);
  *(byte *)(param_1 + 0x3d4) = *(byte *)(param_1 + 0x3d4) & 0xef | param_5 << 4;
  local_b8 = *(longlong *)(param_1 + 0x288);
  puVar8 = &DAT_14c84635c;
  if ((*(byte *)(local_b8 + 0x31) & 0x20) != 0) {
    puVar8 = (ulonglong *)(local_b8 + 0x168);
  }
  uVar5 = *puVar8 >> 0x20;
  if (*(int *)(param_1 + 0x318) != 1) {
    uVar5 = *puVar8;
  }
  plVar4 = *(longlong **)(param_1 + 0x290);
  if (plVar4 == (longlong *)0x0) {
    local_b0 = (longlong *)0x0;
    FUN_14697e4e4(param_1,local_a8,param_2);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_b0 = plVar4;
    FUN_14697e4e4(param_1,local_a8,param_2);
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
  fVar3 = *(float *)(param_1 + 0x268);
  if ((param_3 != 0.0) || (NAN(param_3))) {
    fVar11 = (float)((ulonglong)local_a8[0] >> 0x20);
    if (*(int *)(param_1 + 0x318) != 1) {
      fVar11 = (float)local_a8[0];
    }
    fVar11 = (float)uVar5 - fVar11;
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    fVar9 = fVar3;
    if (param_4 == '\0' && *(char *)(param_1 + 0x2e4) == '\0') {
      cVar7 = FUN_1469ffeec(param_1 + 0x2e0,-(fVar3 == 0.0) & 1,-(fVar3 == fVar11) & 1,param_3);
      if (cVar7 != '\0') {
        FUN_1469ffd82(param_1 + 0x2e0,param_2,param_3);
        goto LAB_146a98f8e;
      }
      fVar9 = *(float *)(param_1 + 0x268);
    }
    fVar10 = fVar9 + param_3;
    if (fVar11 <= fVar9 + param_3) {
      fVar10 = fVar11;
    }
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    *(float *)(param_1 + 0x268) = fVar10;
  }
LAB_146a98f8e:
  if ((*(int *)(param_1 + 0x300) != 0) && (*(longlong **)(param_1 + 0x2f8) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x2f8) + 0x60))();
  }
  bVar6 = 1;
  if (*(char *)(param_1 + 0x330) != '\x01') {
    bVar6 = -(fVar3 != *(float *)(param_1 + 0x268)) & 1;
  }
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a99060 FUN_146a99060 body=24 status=ok
// SIG undefined FUN_146a99060(void)

void FUN_146a99060(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 800) != param_2) {
    *(longlong *)(param_1 + 800) = param_2;
    FUN_140163244(param_1,1);
    return;
  }
  return;
}



// FUNCTION 146a99078 thunk_FUN_140163244 body=7 status=ok
// SIG undefined thunk_FUN_140163244(void)

void thunk_FUN_140163244(undefined8 param_1)

{
  FUN_140163244(param_1,1);
  return;
}



// FUNCTION 146a99080 FUN_146a99080 body=42 status=ok
// SIG undefined FUN_146a99080(void)

void FUN_146a99080(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_278 [40];
  undefined1 auStack_250 [424];
  longlong lStack_a8;
  ulonglong uStack_20;
  
  if (((*(longlong *)(param_1 + 0x328) == param_2) ||
      (*(longlong *)(param_1 + 0x328) = param_2, (*(byte *)(param_1 + 0x3d4) & 4) != 0)) ||
     (lVar1 = *(longlong *)(param_1 + 0x298), lVar1 == 0)) {
    return;
  }
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_278;
  if (param_2 == 0) {
    FUN_146a6ef34(auStack_250);
    FUN_146a6f09e(auStack_250);
    param_2 = lStack_a8;
  }
  *(longlong *)(lVar1 + 0x348) = param_2 + 0x430;
  *(longlong *)(lVar1 + 0x350) = param_2 + 0x4e0;
  *(longlong *)(lVar1 + 0x358) = param_2 + 0x590;
  lVar4 = param_2 + 0x2d0;
  lVar2 = param_2 + 0x170;
  lVar3 = param_2 + 0xc0;
  if (*(int *)(lVar1 + 0x334) != 1) {
    lVar4 = param_2 + 0x380;
    lVar2 = param_2 + 0x220;
    lVar3 = param_2 + 0x10;
  }
  *(longlong *)(lVar1 + 0x360) = lVar3;
  *(longlong *)(lVar1 + 0x368) = lVar2;
  *(longlong *)(lVar1 + 0x370) = lVar4;
  FUN_140163244(lVar1,CONCAT71((int7)((ulonglong)(param_2 + 0x220) >> 8),1));
  if ((uStack_20 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a990aa FUN_146a990aa body=20 status=ok
// SIG undefined FUN_146a990aa(void)

void FUN_146a990aa(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x298) != 0) {
    FUN_140163244(*(longlong *)(param_1 + 0x298),1);
    return;
  }
  return;
}



// FUNCTION 146a990be FUN_146a990be body=7 status=ok
// SIG undefined FUN_146a990be(void)

void FUN_146a990be(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x2ec) = param_2;
  return;
}



// FUNCTION 146a990c6 FUN_146a990c6 body=7 status=ok
// SIG undefined FUN_146a990c6(void)

void FUN_146a990c6(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x330) = param_2;
  return;
}



// FUNCTION 146a990ce FUN_146a990ce body=277 status=ok
// SIG undefined FUN_146a990ce(void)

void FUN_146a990ce(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x318) == param_2) {
    if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  *(int *)(param_1 + 0x318) = param_2;
  if ((*(byte *)(param_1 + 0x3d4) & 4) != 0) goto LAB_146a9918d;
  FUN_146a96dfe(param_1,&local_30);
  plVar1 = local_28;
  *(undefined8 *)(param_1 + 0x298) = local_30;
  local_30 = 0;
  plVar3 = *(longlong **)(param_1 + 0x2a0);
  if (local_28 == plVar3) {
LAB_146a9914e:
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
  }
  else {
    local_28 = (longlong *)0x0;
    *(longlong **)(param_1 + 0x2a0) = plVar1;
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
      goto LAB_146a9914e;
    }
  }
  param_2 = *(int *)(param_1 + 0x318);
LAB_146a9918d:
  *(int *)(*(longlong *)(param_1 + 0x288) + 0x210) = param_2;
  if (*(int *)(param_1 + 0x318) != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 146a99202 FUN_146a99202 body=109 status=ok
// SIG undefined FUN_146a99202(void)

void FUN_146a99202(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x298);
  local_27 = 1;
  local_20 = 0;
  uStack_18 = 0;
  *(undefined1 *)(lVar1 + 0x2a0) = param_2;
  *(undefined1 *)(lVar1 + 0x2a1) = 1;
  local_28 = param_2;
  FUN_140fe25fc(lVar1 + 0x2a8,&local_20);
  FUN_1449db362(&local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a99270 FUN_146a99270 body=12 status=ok
// SIG undefined FUN_146a99270(void)

void FUN_146a99270(longlong param_1)

{
  FUN_146a91f18(*(undefined8 *)(param_1 + 0x298));
  return;
}



// FUNCTION 146a9927c FUN_146a9927c body=14 status=ok
// SIG undefined FUN_146a9927c(void)

void FUN_146a9927c(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(*(longlong *)(param_1 + 0x298) + 0x339) = param_2;
  return;
}



// FUNCTION 146a9928a FUN_146a9928a body=181 status=ok
// SIG undefined FUN_146a9928a(void)

void FUN_146a9928a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_98 [40];
  double local_70;
  double dStack_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  double local_48;
  double dStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  dStack_68 = (double)(float)((ulonglong)param_2 >> 0x20);
  local_70 = (double)(float)param_2;
  local_60 = 1;
  local_58 = 0;
  uStack_50 = 0;
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x298) + 0x2e8);
  local_38 = 1;
  local_30 = 0;
  local_28 = 0;
  local_48 = local_70;
  dStack_40 = dStack_68;
  FUN_140a51be2(&local_30,&local_58);
  FUN_140a50d48(uVar1,&local_48);
  FUN_1449db362(&local_58);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a99340 FUN_146a99340 body=147 status=ok
// SIG undefined FUN_146a99340(void)

void FUN_146a99340(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60 [2];
  undefined1 auStack_50 [24];
  undefined8 local_38 [5];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x26c) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x270) = uVar2;
  *(undefined4 *)(param_1 + 0x274) = uVar3;
  *(undefined4 *)(param_1 + 0x278) = uVar4;
  lVar1 = *(longlong *)(param_1 + 0x280);
  if (lVar1 != 0) {
    puVar6 = local_60;
    if (*(int *)(param_1 + 0x318) == 1) {
      puVar6 = (undefined8 *)(auStack_50 + 0x18);
    }
    uVar5 = param_2[1];
    *puVar6 = *param_2;
    puVar6[1] = uVar5;
    *(undefined1 *)(puVar6 + 2) = 1;
    puVar6[3] = 0;
    puVar6[4] = 0;
    FUN_140a55872(lVar1 + 0x28,lVar1 + 0x20);
    FUN_1449db362(puVar6 + 3);
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a993d4 FUN_146a993d4 body=20 status=ok
// SIG undefined FUN_146a993d4(void)

void FUN_146a993d4(longlong param_1,char param_2)

{
  *(byte *)(param_1 + 0x3d4) = *(byte *)(param_1 + 0x3d4) & 0x7f | param_2 << 7;
  return;
}



// FUNCTION 146a993e8 FUN_146a993e8 body=476 status=ok
// SIG undefined FUN_146a993e8(void)

uint FUN_146a993e8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  uint uVar5;
  undefined8 unaff_RSI;
  undefined7 uVar6;
  float fVar7;
  float fVar8;
  
  uVar6 = (undefined7)((ulonglong)unaff_RSI >> 8);
  bVar4 = *(byte *)(param_1 + 0x3d4) & 8;
  if (bVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)CONCAT71(uVar6,bVar4 >> 3);
    FUN_1469ffd0e(param_1 + 0x2c0);
    fVar7 = *(float *)(param_1 + 0x2d0) / *(float *)(param_1 + 0x33c);
    if ((fVar7 != 0.0) || (NAN(fVar7))) {
      fVar8 = (float)FUN_1469ffe1a(param_1 + 0x2e0,param_1 + 0x334);
      if ((fVar8 != 0.0) || (NAN(fVar8))) {
        fVar8 = (float)(-(uint)(0.0 < fVar8) & 0x3f800000 |
                       ~-(uint)(0.0 < fVar8) & -(uint)(fVar8 < 0.0) & 0xbf800000);
        fVar7 = (float)(-(uint)(0.0 < fVar7) & 0x3f800000 |
                       ~-(uint)(0.0 < fVar7) & -(uint)(fVar7 < 0.0) & 0xbf800000);
        if ((fVar8 == fVar7) && (!NAN(fVar8) && !NAN(fVar7))) {
          FUN_1469ffd58(param_1 + 0x2c0,0);
          goto LAB_146a99416;
        }
      }
      FUN_146a98e20(param_1,param_1 + 0x334);
      uVar5 = (uint)CONCAT71(uVar6,1);
    }
  }
LAB_146a99416:
  if (*(char *)(param_1 + 0x2e4) == '\0') {
    fVar7 = (float)FUN_1469ffe1a(param_1 + 0x2e0,param_1 + 0x334);
    uVar5 = uVar5 & 0xff;
    if (fVar7 != 0.0) {
      uVar5 = 1;
    }
    if (NAN(fVar7)) {
      uVar5 = 1;
    }
    FUN_1469ffe9a(param_1 + 0x2e0);
  }
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  if ((char)uVar5 == '\0') {
    *(byte *)(param_1 + 0x3d4) = *(byte *)(param_1 + 0x3d4) & 0xb7;
    FUN_140163244(param_1,5);
    *(undefined8 *)(param_1 + 0x3b0) = 0;
    plVar3 = *(longlong **)(param_1 + 0x3b8);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x3b8) = 0;
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
  }
  return uVar5;
}



// FUNCTION 146a995c4 FUN_146a995c4 body=1131 status=ok
// SIG undefined FUN_146a995c4(void)

void FUN_146a995c4(longlong param_1,undefined8 *param_2,undefined8 param_3,float param_4)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  float *pfVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  longlong *local_130;
  ulonglong local_128;
  undefined8 uStack_120;
  longlong *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  ulonglong local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_144b00ffc(param_1 + 0x334);
  if (((*(byte *)(param_1 + 0x3d5) & 1) != 0) &&
     (dVar17 = (double)(**(code **)(*DAT_14c98e618 + 0x60))(),
     0.1 < dVar17 - *(double *)(param_1 + 0x3c0))) {
    FUN_1469ffd58(param_1 + 0x2c0,0);
  }
  pcVar4 = *(code **)(param_1 + 0x370);
  if (pcVar4 != (code *)0x0) {
    local_b8 = param_2[6];
    local_e8 = *param_2;
    uStack_e0 = param_2[1];
    local_d8 = param_2[2];
    uStack_d0 = param_2[3];
    local_c8 = *(undefined4 *)(param_2 + 4);
    uStack_c4 = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_c0 = *(undefined4 *)(param_2 + 5);
    uStack_bc = *(undefined4 *)((longlong)param_2 + 0x2c);
    plVar10 = (longlong *)(param_1 + 0x390);
    if (*(longlong **)(param_1 + 0x380) != (longlong *)0x0) {
      plVar10 = *(longlong **)(param_1 + 0x380);
    }
    uVar9 = (**(code **)(*plVar10 + 8))();
    (*pcVar4)(uVar9,&local_e8);
    local_128 = *(ulonglong *)(param_1 + 0x370);
    uStack_a0 = *(undefined8 *)(param_1 + 0x378);
    local_118 = *(longlong **)(param_1 + 0x380);
    uStack_90 = *(undefined8 *)(param_1 + 0x388);
    local_88 = *(undefined8 *)(param_1 + 0x390);
    uStack_80 = *(undefined8 *)(param_1 + 0x398);
    local_78 = *(undefined8 *)(param_1 + 0x3a0);
    uStack_70 = *(undefined8 *)(param_1 + 0x3a8);
    uVar7 = local_78;
    uVar8 = uStack_70;
    uVar9 = local_88;
    uVar6 = uStack_80;
    local_98 = local_118;
    local_a8 = local_128;
    *(ulonglong *)(param_1 + 0x3a0) = CONCAT44(uStack_f4,local_f8);
    *(ulonglong *)(param_1 + 0x3a8) = CONCAT44(uStack_ec,uStack_f0);
    *(ulonglong *)(param_1 + 0x390) = CONCAT44(uStack_104,local_108);
    *(ulonglong *)(param_1 + 0x398) = CONCAT44(uStack_fc,uStack_100);
    *(undefined8 *)(param_1 + 0x380) = 0;
    *(undefined8 *)(param_1 + 0x388) = uStack_110;
    *(ulonglong *)(param_1 + 0x370) = 0;
    *(undefined8 *)(param_1 + 0x378) = uStack_120;
    local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    local_f8 = (undefined4)local_78;
    uStack_f4 = local_78._4_4_;
    uStack_f0 = (undefined4)uStack_70;
    uStack_ec = uStack_70._4_4_;
    local_108 = (undefined4)local_88;
    uStack_104 = local_88._4_4_;
    uStack_100 = (undefined4)uStack_80;
    uStack_fc = uStack_80._4_4_;
    uStack_120 = uStack_a0;
    uStack_110 = uStack_90;
    local_88 = uVar9;
    uStack_80 = uVar6;
    local_78 = uVar7;
    uStack_70 = uVar8;
    if (local_128 != 0) {
      plVar10 = local_118;
      if (local_118 == (longlong *)0x0) {
        plVar10 = (longlong *)&local_108;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  local_138 = *(undefined8 *)(param_1 + 0x288);
  plVar10 = *(longlong **)(param_1 + 0x290);
  if (plVar10 == (longlong *)0x0) {
    local_130 = (longlong *)0x0;
    FUN_14697e4e4(param_1,&local_a8,param_2);
  }
  else {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    local_130 = plVar10;
    FUN_14697e4e4(param_1,&local_a8,param_2);
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
  }
  if ((*(byte *)(param_1 + 0x3d4) & 0x20) != 0) {
    puVar12 = &DAT_14c84635c;
    if ((*(byte *)(*(longlong *)(param_1 + 0x288) + 0x31) & 0x20) != 0) {
      puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x288) + 0x168);
    }
    fVar15 = (float)((ulonglong)*puVar12 >> 0x20);
    uVar5 = local_a8 >> 0x20;
    if (*(int *)(param_1 + 0x318) != 1) {
      fVar15 = (float)*puVar12;
      uVar5 = local_a8;
    }
    fVar15 = fVar15 - (float)uVar5;
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    *(float *)(param_1 + 0x268) = fVar15;
    *(byte *)(param_1 + 0x3d4) = *(byte *)(param_1 + 0x3d4) & 0xdf;
  }
  FUN_146a98876(param_1);
  fVar15 = (float)FUN_146a989b0(param_1);
  bVar3 = *(byte *)(param_1 + 0x3d4);
  if (((bVar3 & 0x10) != 0) && (0.0 < *(float *)(param_1 + 0x3d0))) {
    fVar16 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x298) + 0x300) + 0x208);
    fVar18 = fVar15 - fVar16;
    if (1e-08 <= fVar18 * fVar18) {
      param_4 = *(float *)(param_1 + 0x3d0) * param_4;
      if (1.0 <= param_4) {
        param_4 = 1.0;
      }
      if (param_4 <= 0.0) {
        param_4 = 0.0;
      }
      fVar15 = fVar16 + fVar18 * param_4;
    }
  }
  lVar11 = *(longlong *)(param_1 + 0x288);
  pfVar14 = (float *)&DAT_14c84635c;
  if ((*(byte *)(lVar11 + 0x31) & 0x20) != 0) {
    pfVar14 = (float *)(lVar11 + 0x168);
  }
  pfVar13 = pfVar14 + 1;
  if (*(int *)(param_1 + 0x318) != 1) {
    pfVar13 = pfVar14;
  }
  fVar15 = *pfVar13 * fVar15;
  if (*(char *)(param_1 + 0x2e4) == '\0') {
    fVar16 = (float)FUN_1469ffe1a(param_1 + 0x2e0,param_2);
    fVar15 = fVar15 + fVar16;
    bVar3 = *(byte *)(param_1 + 0x3d4);
    lVar11 = *(longlong *)(param_1 + 0x288);
  }
  *(byte *)(param_1 + 0x3d4) =
       bVar3 & 0xf7 | (0.001 < ABS(fVar15 - *(float *)(lVar11 + 0x1e0))) << 3;
  *(float *)(lVar11 + 0x1e0) = fVar15;
  if (((bVar3 & 8) != 0) && ((*(byte *)(param_1 + 0x3d4) & 8) == 0)) {
    FUN_140163244(param_1,1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x298) + 0x248))();
  lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x298) + 0x300);
  pfVar14 = (float *)(lVar11 + 0x20c);
  if ((0.9999 < *pfVar14 || *pfVar14 == 0.9999) && (*(char *)(lVar11 + 0x214) == '\0')) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x1e0) = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a99a30 FUN_146a99a30 body=112 status=ok
// SIG undefined FUN_146a99a30(void)

ulonglong FUN_146a99a30(longlong param_1)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  float fVar6;
  undefined7 uVar5;
  
  uVar5 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar4 = CONCAT71(uVar5,1);
  if ((*(byte *)(param_1 + 0x3d4) & 8) == 0) {
    if (DAT_14c98e618 != 0) {
      fVar2 = *(float *)(param_1 + 0x2b4);
      fVar6 = (float)FUN_1469aaa10();
      if (fVar6 <= fVar2) {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x298) + 0x300);
        pfVar1 = (float *)(lVar3 + 0x20c);
        if (0.9999 < *pfVar1 || *pfVar1 == 0.9999) {
          uVar4 = CONCAT71(uVar5,*(undefined1 *)(lVar3 + 0x214));
        }
        goto LAB_146a99a6a;
      }
    }
    uVar4 = 0;
  }
LAB_146a99a6a:
  return uVar4 & 0xffffffff;
}



// FUNCTION 146a99aa0 FUN_146a99aa0 body=153 status=ok
// SIG undefined FUN_146a99aa0(void)

undefined1 * FUN_146a99aa0(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  if (((*(char *)(param_1 + 0x3cc) == '\x01') && (*(char *)(param_4 + 100) == '\x01')) &&
     (*(char *)(param_1 + 0x2b0) == '\0')) {
    FUN_1469ffd58(param_1 + 0x2c0,0);
    *(undefined8 *)(param_1 + 0x2b4) = 0;
    *(undefined4 *)(param_1 + 0x2ac) = *(undefined4 *)(param_4 + 0x58);
    *(undefined1 *)(param_1 + 0x2b0) = 1;
    FUN_140163244(param_1);
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 146a99b3a FUN_146a99b3a body=295 status=ok
// SIG undefined FUN_146a99b3a(void)

undefined1 * FUN_146a99b3a(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  float *pfVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 uVar7;
  
  if (*(char *)(param_1 + 0x2b0) == '\0') {
    FUN_146a99c62(param_1);
  }
  uVar7 = 1;
  if (*(char *)(param_4 + 100) != '\0') goto LAB_146a99b61;
  lVar5 = *(longlong *)(param_4 + 0x40);
  plVar6 = *(longlong **)(param_4 + 0x50);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  if (lVar5 == DAT_14c966fa0) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x298) + 0x300);
    pfVar3 = (float *)(lVar5 + 0x20c);
    if ((0.9999 < *pfVar3 || *pfVar3 == 0.9999) && (*(char *)(lVar5 + 0x214) != '\x01'))
    goto LAB_146a99c2b;
    cVar4 = *(char *)(param_1 + 0x3d4);
    if (plVar6 != (longlong *)0x0) {
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
    if (cVar4 < '\0') {
      *(undefined4 *)(param_1 + 0x2b4) = 0;
      uVar7 = 1;
      FUN_140163244(param_1);
      goto LAB_146a99b61;
    }
  }
  else {
LAB_146a99c2b:
    if (plVar6 != (longlong *)0x0) {
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
  uVar7 = 0;
LAB_146a99b61:
  *param_2 = uVar7;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 146a99c62 FUN_146a99c62 body=243 status=ok
// SIG undefined FUN_146a99c62(void)

void FUN_146a99c62(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(byte *)(param_1 + 0x3d4) = *(byte *)(param_1 + 0x3d4) & 0xb7;
  FUN_140163244(param_1,5);
  lVar3 = *(longlong *)(param_1 + 0x3b0);
  if (lVar3 != 0) {
    local_20 = *(longlong **)(param_1 + 0x3b8);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    local_28 = lVar3;
    FUN_14697f106(param_1,&local_28);
    plVar4 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x3b0) = 0;
    plVar4 = *(longlong **)(param_1 + 0x3b8);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x3b8) = 0;
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
  FUN_1469ffd58(param_1 + 0x2c0,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a99d56 FUN_146a99d56 body=813 status=ok
// SIG undefined FUN_146a99d56(void)

undefined1 * FUN_146a99d56(longlong param_1,undefined1 *param_2,float *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  float *pfVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_138 [32];
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_e8;
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar4 = *(longlong *)(param_4 + 0x40);
  plVar5 = *(longlong **)(param_4 + 0x50);
  if (plVar5 == (longlong *)0x0) {
    if (lVar4 == DAT_14c966fa0) {
      cVar6 = *(char *)(param_1 + 0x3d4);
      goto joined_r0x000146a99e58;
    }
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    if (lVar4 == DAT_14c966fa0) {
      cVar6 = *(char *)(param_1 + 0x3d4);
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
joined_r0x000146a99e58:
      if (cVar6 < '\0') {
        if (((((*(byte *)(param_1 + 0x3d4) & 0x40) == 0) && (DAT_14c98e618 != 0)) &&
            (fVar8 = *(float *)(param_1 + 0x2b4), fVar7 = (float)FUN_1469aaa10(), fVar7 <= fVar8))
           && ((lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x298) + 0x300),
               pfVar3 = (float *)(lVar4 + 0x20c), *pfVar3 <= 0.9999 && *pfVar3 != 0.9999 ||
               (*(char *)(lVar4 + 0x214) == '\x01')))) {
          FUN_144b00ffc(param_1 + 0x334,param_3);
          FUN_146a98cde(param_1);
        }
        *(undefined4 *)(param_1 + 0x2b4) = 0;
        FUN_140163244(param_1);
        local_108 = CONCAT71(local_108._1_7_,1);
        local_e8 = 0;
        local_100 = 0;
        uStack_f8 = 0;
        memset(local_e0,0,0x88);
        local_58 = 0x20702;
        local_d0 = 0;
        uStack_c8 = 0;
        local_54 = 1;
        FUN_1403d4c6e(param_2,&local_108);
        FUN_14493db24(&local_108);
        *(byte *)(param_1 + 0x3d4) = *(byte *)(param_1 + 0x3d4) & 0xfd;
        cVar6 = FUN_140591fd6(param_1);
        if (cVar6 != '\0') {
          fVar8 = param_3[2];
          fVar7 = fVar8 * 0.0;
          local_108 = CONCAT44(param_3[4] + fVar7,fVar7 + param_3[3]);
          uStack_f8 = CONCAT44(param_3[1] * fVar8,fVar7);
          local_100 = CONCAT44(fVar7,fVar8 * *param_3);
          FUN_144b01024(&local_108,&local_118);
          fVar7 = param_3[8] * *(float *)(param_1 + 0x2f0) +
                  param_3[10] * *(float *)(param_1 + 0x2f4) + param_3[0xc];
          fVar8 = *(float *)(param_1 + 0x2f0) * param_3[7] +
                  *(float *)(param_1 + 0x2f4) * param_3[9] + param_3[0xb];
          if (local_10c <= fVar7) {
            fVar7 = local_10c;
          }
          if (fVar7 <= local_114) {
            fVar7 = local_114;
          }
          if (local_110 <= fVar8) {
            fVar8 = local_110;
          }
          if (fVar8 <= local_118) {
            fVar8 = local_118;
          }
          local_108 = CONCAT44((int)ROUND(fVar7 + fVar7 + 0.5) >> 1,
                               (int)ROUND(fVar8 + fVar8 + 0.5) >> 1);
          FUN_146948cd0(param_2,&local_108);
        }
        goto LAB_146a99e13;
      }
    }
    else {
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
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_146a99e13:
  if ((local_50 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a9a084 FUN_146a9a084 body=1573 status=ok
// SIG undefined FUN_146a9a084(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_146a9a084(longlong param_1,undefined1 *param_2,longlong param_3,longlong param_4)

{
  float *pfVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  char cVar5;
  char cVar6;
  int iVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  float fVar19;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  undefined8 local_198;
  longlong local_190;
  undefined8 local_188;
  longlong local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  longlong local_168;
  undefined8 local_160;
  longlong local_158;
  undefined4 local_150;
  undefined1 local_14c;
  LARGE_INTEGER local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_128;
  undefined1 local_120 [136];
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  fVar16 = (float)((ulonglong)*(undefined8 *)(param_4 + 0x30) >> 0x20);
  if (*(int *)(param_1 + 0x318) != 1) {
    fVar16 = (float)*(undefined8 *)(param_4 + 0x30);
  }
  fVar15 = fVar16 / *(float *)(param_3 + 8);
  if (*(char *)(param_4 + 100) != '\x01') {
    local_178 = DAT_14c966fa0;
    uStack_170 = DAT_14c966fa8;
    local_168 = DAT_14c966fb0;
    if (DAT_14c966fb0 != 0) {
      LOCK();
      *(int *)(DAT_14c966fb0 + 8) = *(int *)(DAT_14c966fb0 + 8) + 1;
      UNLOCK();
    }
    cVar5 = FUN_1407c9dec(param_4);
    if ((cVar5 != '\0') && (*(char *)(param_1 + 0x3d4) < '\0')) {
      fVar17 = ABS(fVar16) + *(float *)(param_1 + 0x2b4);
      *(float *)(param_1 + 0x2b4) = fVar17;
      if (((DAT_14c98e618 != (longlong *)0x0) && (fVar9 = (float)FUN_1469aaa10(), fVar9 <= fVar17))
         && ((lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x298) + 0x300),
             pfVar1 = (float *)(lVar3 + 0x20c), *pfVar1 <= 0.9999 && *pfVar1 != 0.9999 ||
             (*(char *)(lVar3 + 0x214) == '\x01')))) {
        QueryPerformanceCounter(&local_148);
        auVar4 = _DAT_1499319e0;
        FUN_1469ffb92(param_1 + 0x2c0,(ulonglong)(uint)fVar16 ^ (ulonglong)DAT_1499319e0,
                      (double)CONCAT71(local_148.QuadPart._1_7_,local_148.s.LowPart._0_1_) *
                      DAT_14c83f420 + 16777216.0);
        uVar18 = auVar4._0_4_;
        local_1a8 = 0;
        cVar5 = FUN_146a98e20(param_1,param_3,(uint)fVar15 ^ uVar18);
        *param_2 = 1;
        param_2[0x20] = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        memset(param_2 + 0x28,0,0x88);
        *(undefined4 *)(param_2 + 0xb0) = 0x20702;
        param_2[0xb4] = 0;
        cVar6 = FUN_140591fd6(param_1);
        if (cVar6 == '\0') {
          local_180 = *(longlong *)(param_1 + 0x10);
          if (local_180 == 0) {
            local_180 = 0;
            local_188 = 0;
          }
          else {
            iVar7 = *(int *)(local_180 + 8);
            local_188 = 0;
            do {
              if (iVar7 == 0) {
                local_180 = 0;
                goto LAB_146a9a538;
              }
              LOCK();
              iVar2 = *(int *)(local_180 + 8);
              bVar8 = iVar7 == iVar2;
              if (bVar8) {
                *(int *)(local_180 + 8) = iVar7 + 1;
                iVar2 = iVar7;
              }
              iVar7 = iVar2;
              UNLOCK();
            } while (!bVar8);
            local_188 = *(undefined8 *)(param_1 + 8);
          }
LAB_146a9a538:
          uVar11 = FUN_140592a6e(param_2);
          local_190 = *(longlong *)(param_1 + 0x10);
          if (local_190 == 0) {
            local_190 = 0;
            local_198 = 0;
          }
          else {
            iVar7 = *(int *)(local_190 + 8);
            local_198 = 0;
            do {
              if (iVar7 == 0) {
                local_190 = 0;
                goto LAB_146a9a57e;
              }
              LOCK();
              iVar2 = *(int *)(local_190 + 8);
              bVar8 = iVar7 == iVar2;
              if (bVar8) {
                *(int *)(local_190 + 8) = iVar7 + 1;
                iVar2 = iVar7;
              }
              iVar7 = iVar2;
              UNLOCK();
            } while (!bVar8);
            local_198 = *(undefined8 *)(param_1 + 8);
          }
LAB_146a9a57e:
          FUN_140592ae6(uVar11);
          fVar16 = *(float *)(param_4 + 0x20);
          fVar17 = *(float *)(param_4 + 0x24);
          fVar14 = 1.0 / (*(float *)(param_3 + 0x1c) * *(float *)(param_3 + 0x28) -
                         *(float *)(param_3 + 0x24) * *(float *)(param_3 + 0x20));
          fVar13 = *(float *)(param_3 + 0x1c) * fVar14;
          fVar12 = (float)((uint)*(float *)(param_3 + 0x24) ^ uVar18) * fVar14;
          fVar10 = (float)((uint)*(float *)(param_3 + 0x20) ^ uVar18) * fVar14;
          fVar14 = fVar14 * *(float *)(param_3 + 0x28);
          fVar9 = *(float *)(param_3 + 0x30);
          fVar19 = (float)(*(uint *)(param_3 + 0x2c) ^ uVar18);
          *(float *)(param_1 + 0x2f0) =
               fVar14 * fVar16 + fVar12 * fVar17 + (fVar19 * fVar14 - fVar9 * fVar12);
          *(float *)(param_1 + 0x2f4) =
               fVar10 * fVar16 + fVar13 * fVar17 + (fVar19 * fVar10 - fVar13 * fVar9);
          *(byte *)(param_1 + 0x3d4) = *(byte *)(param_1 + 0x3d4) | 2;
        }
        if (cVar5 != '\0') {
          bVar8 = *(int *)(param_1 + 0x318) != 1;
          fVar16 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x2f0) >> 0x20);
          if (bVar8) {
            fVar16 = (float)*(undefined8 *)(param_1 + 0x2f0);
          }
          if (bVar8) {
            *(float *)(param_1 + 0x2f0) = fVar15 + fVar16;
          }
          else {
            *(float *)(param_1 + 0x2f4) = fVar15 + fVar16;
          }
        }
        goto LAB_146a9a263;
      }
    }
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
    goto LAB_146a9a263;
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if ((*(byte *)(param_1 + 0x3d5) & 1) == 0) {
    if ((*(char *)(param_1 + 0x2b0) == '\0') || (cVar5 = FUN_140591fd6(param_1), cVar5 != '\0'))
    goto LAB_146a9a263;
    fVar16 = fVar16 + *(float *)(param_1 + 0x2b8);
    *(float *)(param_1 + 0x2b8) = fVar16;
    fVar15 = (float)FUN_1469aaa10(DAT_14c98e618);
    if (ABS(fVar16) <= fVar15) goto LAB_146a9a4c6;
    *(byte *)(param_1 + 0x3d5) = *(byte *)(param_1 + 0x3d5) | 1;
    (**(code **)(**(longlong **)(param_1 + 0x298) + 0x250))();
    local_148.s.LowPart._0_1_ = 1;
    local_128 = 0;
    local_140 = 0;
    uStack_138 = 0;
    memset(local_120,0,0x88);
    local_98 = 0x20702;
    local_158 = *(longlong *)(param_1 + 0x10);
    if (local_158 == 0) {
LAB_146a9a508:
      local_160 = 0;
      local_158 = 0;
    }
    else {
      iVar7 = *(int *)(local_158 + 8);
      do {
        if (iVar7 == 0) goto LAB_146a9a508;
        LOCK();
        iVar2 = *(int *)(local_158 + 8);
        bVar8 = iVar7 == iVar2;
        if (bVar8) {
          *(int *)(local_158 + 8) = iVar7 + 1;
          iVar2 = iVar7;
        }
        iVar7 = iVar2;
        UNLOCK();
      } while (!bVar8);
      local_160 = *(undefined8 *)(param_1 + 8);
    }
    uVar11 = FUN_140592a6e(&local_148);
    FUN_1402c17c2(param_2,uVar11);
  }
  else {
    if (*(char *)(param_1 + 0x2b0) == '\0') goto LAB_146a9a263;
    local_150 = *(undefined4 *)(param_4 + 0x58);
    local_14c = 1;
    cVar5 = FUN_14697e1bc(param_1,*(undefined4 *)(param_4 + 0xc));
    if (cVar5 == '\0') goto LAB_146a9a263;
    uVar11 = (**(code **)(*DAT_14c98e618 + 0x60))();
    *(undefined8 *)(param_1 + 0x3c0) = uVar11;
    (**(code **)(*DAT_14c98e618 + 0x60))();
    FUN_1469ffb92(param_1 + 0x2c0);
    local_1a8 = 0;
    FUN_146a98e20(param_1,param_3,CONCAT44(0x80000000,-fVar15),0);
LAB_146a9a4c6:
    local_128 = 0;
    local_148.s.LowPart._0_1_ = 1;
    local_140 = 0;
    uStack_138 = 0;
    memset(local_120,0,0x88);
    local_98 = 0x20702;
    FUN_1403d4924(param_2,&local_148);
  }
  FUN_14493db24(&local_148);
LAB_146a9a263:
  if ((local_90 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a9a6aa FUN_146a9a6aa body=333 status=ok
// SIG undefined FUN_146a9a6aa(void)

void FUN_146a9a6aa(longlong param_1,float *param_2,longlong param_3)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(char *)(param_1 + 0x3cc) == '\x01') && (*(char *)(param_3 + 100) == '\x01')) &&
     (*(char *)(param_1 + 0x2b0) == '\0')) {
    fVar3 = param_2[8] * 0.0;
    fVar4 = param_2[7] * 0.0;
    fVar2 = param_2[10] * 0.0;
    fVar5 = param_2[9] * 0.0;
    local_68 = CONCAT44(fVar2 + fVar3 + param_2[0xc],fVar5 + fVar4 + param_2[0xb]);
    local_60 = CONCAT44(*param_2 * param_2[8] + fVar2,*param_2 * param_2[7] + fVar5);
    local_58 = CONCAT44(param_2[10] * param_2[1] + fVar3,param_2[1] * param_2[9] + fVar4);
    cVar1 = FUN_1402b2a42(&local_68,*(undefined8 *)(param_3 + 0x28));
    if (cVar1 != '\0') {
      *(undefined4 *)(param_1 + 0x2ac) = *(undefined4 *)(param_3 + 0x58);
      *(undefined1 *)(param_1 + 0x2b0) = 1;
    }
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a9a7f8 FUN_146a9a7f8 body=90 status=ok
// SIG undefined FUN_146a9a7f8(void)

void FUN_146a9a7f8(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_140591fd6();
  if (cVar1 == '\0') {
    if ((*(float *)(param_1 + 0x2b4) != 0.0) || (NAN(*(float *)(param_1 + 0x2b4)))) {
      *(undefined4 *)(param_1 + 0x2b4) = 0;
      FUN_140163244(param_1,1);
    }
    if ((*(char *)(param_2 + 100) == '\x01') && (*(char *)(param_1 + 0x2b0) == '\x01')) {
      *(undefined1 *)(param_1 + 0x2b0) = 0;
    }
  }
  return;
}



// FUNCTION 146a9a852 FUN_146a9a852 body=316 status=ok
// SIG undefined FUN_146a9a852(void)

undefined1 * FUN_146a9a852(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  float *pfVar1;
  float fVar2;
  byte bVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x298) + 0x300);
  pfVar1 = (float *)(lVar4 + 0x20c);
  if ((*pfVar1 <= 0.9999 && *pfVar1 != 0.9999) || (*(char *)(lVar4 + 0x214) == '\x01')) {
    if (*(char *)(param_1 + 0x330) != '\x02') {
LAB_146a9a8f2:
      uVar8 = 0;
      FUN_1469ffd58(param_1 + 0x2c0,0);
      lVar4 = DAT_14c96b2f0;
      bVar3 = *(byte *)(param_1 + 0x3d4);
      fVar2 = *(float *)(param_4 + 0x6c);
      cVar5 = FUN_144a8728e();
      if (cVar5 == '\0') {
        bVar6 = FUN_144a61b4f();
        uVar8 = (ulonglong)(bVar6 ^ 1);
      }
      uVar7 = 1;
      cVar5 = FUN_146a98e20(param_1,param_3,
                            -fVar2 * *(float *)(lVar4 + uVar8 * 4) * *(float *)(param_1 + 0x3c8),1,
                            bVar3 & 1);
      if (cVar5 != '\0') {
        if ((*(byte *)(param_1 + 0x3d4) & 0x40) == 0) {
          FUN_144b00ffc(param_1 + 0x334);
          FUN_146a98cde(param_1);
        }
        goto LAB_146a9a8a2;
      }
    }
  }
  else if (*(char *)(param_1 + 0x330) == '\x01') goto LAB_146a9a8f2;
  uVar7 = 0;
LAB_146a9a8a2:
  *param_2 = uVar7;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 146a9a98e FUN_146a9a98e body=154 status=ok
// SIG undefined FUN_146a9a98e(void)

undefined1 * FUN_146a9a98e(longlong param_1,undefined1 *param_2)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  
  if (((DAT_14c98e618 != 0) &&
      (fVar2 = *(float *)(param_1 + 0x2b4), fVar4 = (float)FUN_1469aaa10(), fVar4 <= fVar2)) &&
     ((lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x298) + 0x300),
      pfVar1 = (float *)(lVar3 + 0x20c), *pfVar1 <= 0.9999 && *pfVar1 != 0.9999 ||
      (*(char *)(lVar3 + 0x214) == '\x01')))) {
    *param_2 = 1;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined4 *)(param_2 + 0x38) = 0;
    return param_2;
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x38) = 1;
  return param_2;
}



// FUNCTION 146a9aa28 FUN_146a9aa28 body=308 status=ok
// SIG undefined FUN_146a9aa28(void)

undefined1 * FUN_146a9aa28(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  undefined1 auStack_118 [40];
  undefined4 local_f0;
  undefined1 local_ec;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_c8;
  undefined1 local_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_144b00ffc(param_1 + 0x334,param_3);
  local_f0 = *(undefined4 *)(param_4 + 0x58);
  local_ec = 1;
  cVar1 = FUN_14697e1bc(param_1);
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x298) + 600))();
    FUN_140163244(param_1);
    FUN_146a98cde(param_1);
    local_e8[0] = 1;
    local_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    memset(local_c0,0,0x88);
    local_38 = 0x100020702;
    local_b0 = 0;
    uStack_a8 = 0;
    FUN_1403d4c6e(param_2,local_e8);
    FUN_14493db24(local_e8);
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a9ab5e FUN_146a9ab5e body=53 status=ok
// SIG undefined FUN_146a9ab5e(void)

void FUN_146a9ab5e(longlong param_1)

{
  FUN_140d9616c();
  *(undefined8 *)(param_1 + 0x2b4) = 0;
  if (*(char *)(param_1 + 0x2b0) == '\x01') {
    *(undefined1 *)(param_1 + 0x2b0) = 0;
  }
  *(byte *)(param_1 + 0x3d5) = *(byte *)(param_1 + 0x3d5) & 0xfe;
  return;
}



// FUNCTION 146a9ab94 FUN_146a9ab94 body=860 status=ok
// SIG undefined FUN_146a9ab94(void)

undefined8 FUN_146a9ab94(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  uint local_8c;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = *(longlong *)(param_1 + 0x288);
  if (*(int *)(lVar4 + 0x208) < 1) {
    plVar10 = (longlong *)0x0;
  }
  else {
    plVar10 = (longlong *)0x0;
    lVar9 = 0;
    do {
      FUN_14697de5c(*(undefined8 *)(*(longlong *)(*(longlong *)(lVar4 + 0x200) + lVar9 * 8) + 0x10),
                    &local_58,*(undefined4 *)(param_4 + 0xc));
      if ((local_58._1_1_ != '\0') ||
         (cVar7 = FUN_14697df48(*(undefined8 *)
                                 (*(longlong *)(*(longlong *)(lVar4 + 0x200) + lVar9 * 8) + 0x10),
                                *(undefined4 *)(param_4 + 0xc)), cVar7 != '\0')) {
        lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x200) + lVar9 * 8);
        lVar6 = *(longlong *)(lVar5 + 0x10);
        plVar10 = *(longlong **)(lVar5 + 0x18);
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        if (lVar6 == 0) break;
        cVar7 = *(char *)(param_4 + 0x20);
        if (*(int *)(param_1 + 0x318) == 1) {
          if (cVar7 == '\x02') goto LAB_146a9ace4;
          if (cVar7 != '\x03') break;
LAB_146a9acdd:
          uVar8 = 1;
        }
        else {
          if (cVar7 != '\0') {
            if (cVar7 == '\x01') goto LAB_146a9acdd;
            break;
          }
LAB_146a9ace4:
          uVar8 = 0xffffffff;
        }
        uVar12 = (ulonglong)uVar8 + lVar9;
        local_58 = 0;
        plStack_50 = (longlong *)0x0;
        if (-1 < (int)uVar12) goto LAB_146a9ad04;
        break;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(lVar4 + 0x208));
  }
LAB_146a9ac70:
  FUN_145bff8f6(param_1,param_2,param_3,param_4);
LAB_146a9ac81:
  if (plVar10 != (longlong *)0x0) {
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
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
LAB_146a9ad04:
  local_8c = uVar8;
  if (*(int *)(lVar4 + 0x208) <= (int)uVar12) goto LAB_146a9ad89;
  lVar9 = *(longlong *)(*(longlong *)(lVar4 + 0x200) + (uVar12 & 0xffffffff) * 8);
  local_78 = *(undefined8 *)(lVar9 + 0x10);
  local_70 = *(longlong *)(lVar9 + 0x18);
  if (local_70 != 0) {
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    UNLOCK();
  }
  FUN_146a9aef2(&local_68,&local_78);
  plVar3 = plStack_50;
  plVar1 = local_60;
  if (local_68 != 0) {
    if (local_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    local_58 = local_68;
    plStack_50 = local_60;
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
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)local_60 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_60 + 0x10))(local_60);
        }
      }
    }
    goto LAB_146a9ad89;
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_60 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  uVar11 = (int)uVar12 + local_8c;
  uVar12 = (ulonglong)uVar11;
  uVar8 = local_8c;
  if ((int)uVar11 < 0) goto LAB_146a9ad89;
  goto LAB_146a9ad04;
LAB_146a9ad89:
  plVar1 = plStack_50;
  lVar4 = local_58;
  if (local_58 != 0) {
    local_a0 = *(undefined4 *)(param_1 + 0x2e8);
    local_a8 = *(undefined1 *)(param_1 + 0x2ec);
    FUN_142902da2(param_1,param_3,&local_58,0);
    plVar1 = plStack_50;
    local_88 = lVar4;
    local_80 = plStack_50;
    if (plStack_50 == (longlong *)0x0) {
      FUN_146a35cca(param_2,&local_88);
    }
    else {
      LOCK();
      *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
      UNLOCK();
      FUN_146a35cca(param_2,&local_88);
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
    }
    goto LAB_146a9ac81;
  }
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  goto LAB_146a9ac70;
}



// FUNCTION 146a9aef2 FUN_146a9aef2 body=474 status=ok
// SIG undefined FUN_146a9aef2(void)

longlong * FUN_146a9aef2(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar10 = param_1;
  if ((DAT_14c96b238 & *(byte *)(*param_2 + 0x39)) != 0) {
    cVar6 = (**(code **)(*(longlong *)*param_2 + 400))();
    if (cVar6 == '\0') {
      plVar9 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x180))();
      iVar7 = (**(code **)*plVar9)(plVar9);
      if (0 < iVar7) {
        iVar7 = 0;
        do {
          (**(code **)(*plVar9 + 0x10))(plVar9,local_58,iVar7);
          plVar5 = local_50;
          if (local_50 == (longlong *)0x0) {
            local_60 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_50 + 1) = (int)local_50[1] + 1;
            UNLOCK();
            if (local_50 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_50 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_50)(local_50);
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar5 + 0x10))(plVar5);
                }
              }
            }
            local_60 = plVar5;
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
          }
          FUN_146a9aef2(param_1,local_68);
          if ((*param_1 == 0) || ((DAT_14c96b238 & *(byte *)(*param_1 + 0x39)) == 0)) {
            plVar3 = (longlong *)param_1[1];
            bVar4 = true;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar3 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar1 = (int *)((longlong)plVar3 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                }
              }
            }
          }
          else {
            bVar4 = false;
          }
          if (plVar5 != (longlong *)0x0) {
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
          if (!bVar4) goto LAB_146a9af4c;
          iVar7 = iVar7 + 1;
          iVar8 = (**(code **)*plVar9)(plVar9);
        } while (iVar7 < iVar8);
      }
    }
    else {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      plVar10 = param_2;
    }
  }
  *plVar10 = 0;
  plVar10[1] = 0;
LAB_146a9af4c:
  plVar10 = (longlong *)param_2[1];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar10 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146a9b0ce FUN_146a9b0ce body=310 status=ok
// SIG undefined FUN_146a9b0ce(void)

void FUN_146a9b0ce(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x2ed) != '\0') {
    cVar6 = FUN_144b010fc(param_3);
    if (cVar6 != '\0') {
      cVar6 = FUN_1403d1f4c(param_3,param_1);
      if (cVar6 != '\0') {
        local_38 = *(undefined4 *)(param_1 + 0x2e8);
        uVar4 = *(undefined1 *)(param_1 + 0x2ec);
        cVar6 = *(char *)(param_1 + 0x2ed);
        lVar7 = param_3 + 8;
        if (*(longlong *)(param_3 + 0x128) != 0) {
          lVar7 = *(longlong *)(param_3 + 0x128);
        }
        local_30 = *(undefined8 *)(lVar7 + -0x10 + (longlong)*(int *)(param_3 + 0x130) * 0x48);
        plVar5 = *(longlong **)(lVar7 + -8 + (longlong)*(int *)(param_3 + 0x130) * 0x48);
        if (plVar5 == (longlong *)0x0) {
          local_28 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
          local_28 = plVar5;
        }
        FUN_146a98b20(param_1,&local_30,cVar6 == '\x02',uVar4);
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
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar5 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a9b206 FUN_146a9b206 body=652 status=ok
// SIG undefined FUN_146a9b206(void)

int FUN_146a9b206(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 ulonglong param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c0;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  byte local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d0 = param_8;
  local_d8 = param_7;
  local_e0 = (undefined8 *)CONCAT44(local_e0._4_4_,param_6);
  local_e8 = param_5;
  iVar1 = FUN_1400c0302(param_1,param_2,param_3);
  if ((*(byte *)(param_1 + 0x3d4) & 2) != 0) {
    plVar2 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
    if (plVar2 == (longlong *)0x0) {
      plVar2 = DAT_14c96b350;
    }
    FUN_1446f470e(&local_c0,L"SoftwareCursor_Grab",1);
    lVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,local_c0,0,0);
    local_b0 = *(float *)(param_3 + 8);
    fVar7 = *(float *)(lVar3 + 0x24) * (1.0 / local_b0);
    fVar5 = (1.0 / local_b0) * *(float *)(lVar3 + 0x20);
    fVar4 = *(float *)(param_1 + 0x2f0) - fVar5 * 0.5;
    fVar6 = *(float *)(param_1 + 0x2f4) - fVar7 * 0.5;
    local_b8 = CONCAT44(local_b0 * fVar6 + *(float *)(param_3 + 0x10),
                        local_b0 * fVar4 + *(float *)(param_3 + 0xc));
    local_a4 = CONCAT44(fVar7,fVar5);
    local_9c = *(float *)(param_3 + 0x1c);
    local_98 = *(float *)(param_3 + 0x20);
    fVar5 = *(float *)(param_3 + 0x28);
    fVar7 = *(float *)(param_3 + 0x24);
    local_88 = fVar4 * local_98 + fVar6 * fVar5 + *(float *)(param_3 + 0x30);
    local_8c = fVar4 * local_9c + fVar6 * fVar7 + *(float *)(param_3 + 0x2c);
    local_90 = local_98 * 0.0 + fVar5;
    local_94 = local_9c * 0.0 + fVar7;
    local_98 = fVar5 * 0.0 + local_98;
    local_9c = fVar7 * 0.0 + local_9c;
    local_ac = 0;
    local_84 = local_84 & 0xfc | *(char *)(param_3 + 0x34) * '\x02' & 2U;
    iVar1 = iVar1 + 1;
    local_e0 = &DAT_149e1e2f8;
    local_e8 = local_e8 & 0xffffffffffffff00;
    FUN_140239bd2(param_5,iVar1,&local_b8,lVar3);
  }
  if ((local_80 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a9b494 FUN_146a9b494 body=24 status=ok
// SIG undefined FUN_146a9b494(void)

void FUN_146a9b494(longlong param_1,char param_2)

{
  *(char *)(param_1 + 0x2e4) = param_2;
  if (param_2 == '\x01') {
    FUN_1469fff2e(param_1 + 0x2e0);
    return;
  }
  return;
}



// FUNCTION 146a9b4ac FUN_146a9b4ac body=17 status=ok
// SIG undefined FUN_146a9b4ac(void)

void FUN_146a9b4ac(longlong param_1,byte param_2)

{
  *(byte *)(param_1 + 0x3d4) = *(byte *)(param_1 + 0x3d4) & 0xfe | param_2;
  return;
}



// FUNCTION 146a9b4be FUN_146a9b4be body=9 status=ok
// SIG undefined FUN_146a9b4be(void)

void FUN_146a9b4be(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3d0) = param_2;
  return;
}



// FUNCTION 146a9b4c8 FUN_146a9b4c8 body=9 status=ok
// SIG undefined FUN_146a9b4c8(void)

void FUN_146a9b4c8(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c8) = param_2;
  return;
}



// FUNCTION 146a9b4d2 FUN_146a9b4d2 body=7 status=ok
// SIG undefined FUN_146a9b4d2(void)

void FUN_146a9b4d2(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3cc) = param_2;
  return;
}



// FUNCTION 146a9b4da FUN_146a9b4da body=7 status=ok
// SIG undefined FUN_146a9b4da(void)

void FUN_146a9b4da(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x2ed) = param_2;
  return;
}



// FUNCTION 146a9b4e2 FUN_146a9b4e2 body=313 status=ok
// SIG undefined FUN_146a9b4e2(void)

longlong * FUN_146a9b4e2(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146a9b5de:
    *puVar5 = &PTR_LAB_149ed0600;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149f19c60;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_146a9b5de;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149ed0600;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149f19c60;
    puVar5[3] = uVar10;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 146a9b61c FUN_146a9b61c body=404 status=ok
// SIG undefined FUN_146a9b61c(void)

void FUN_146a9b61c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_418 [32];
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined1 uStack_3e4;
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined8 local_3c8;
  undefined1 local_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined1 local_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined1 local_380 [448];
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8 [80];
  undefined8 local_158;
  undefined1 local_150;
  undefined1 local_148 [136];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined1 local_a8 [88];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_418;
  FUN_140a562d0(local_380);
  local_3c8 = *(undefined8 *)(param_2 + 0x1a8);
  local_3c0 = 1;
  local_3b8 = 0;
  uStack_3b0 = 0;
  local_150 = 1;
  local_158 = local_3c8;
  FUN_144a450dc(local_148,&local_3b8);
  FUN_1449db362(&local_3b8);
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_398 = 1;
  local_390 = 0;
  uStack_388 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1b0 = 1;
  FUN_144a450dc(local_1a8,&local_390);
  FUN_1449db362(&local_390);
  local_3f8 = *(undefined4 *)(param_2 + 0x1b8);
  uStack_3f4 = *(undefined4 *)(param_2 + 0x1bc);
  uStack_3f0 = *(undefined4 *)(param_2 + 0x1c0);
  uVar1 = *(undefined8 *)(param_2 + 0x1c5);
  uStack_3ec._0_1_ = (undefined1)*(undefined4 *)(param_2 + 0x1c4);
  uStack_3ec._1_3_ = (undefined3)uVar1;
  uStack_3e8 = (undefined4)((ulonglong)uVar1 >> 0x18);
  uStack_3e4 = (undefined1)((ulonglong)uVar1 >> 0x38);
  local_3e0 = 0;
  local_3d8 = 0;
  FUN_140a5aaa0(&local_3e0,param_2 + 0x1d0);
  local_b0 = uStack_3e8;
  local_c0 = local_3f8;
  uStack_bc = uStack_3f4;
  uStack_b8 = uStack_3f0;
  uStack_b4 = uStack_3ec;
  local_ac = uStack_3e4;
  FUN_144a450dc(local_a8,&local_3e0);
  FUN_1449db362(&local_3e0);
  FUN_140a5a2ee(param_1,local_380);
  FUN_140a59028(local_380);
  *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(param_2 + 0x1b0);
  *(undefined4 *)(param_1 + 0x2a4) = *(undefined4 *)(param_2 + 0x1b4);
  if ((local_50 ^ (ulonglong)auStack_418) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a9b7ea FUN_146a9b7ea body=196 status=ok
// SIG undefined FUN_146a9b7ea(void)

void FUN_146a9b7ea(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  FUN_146a9b8ae();
  if (*(char *)(param_3 + 0x34) == '\x01') {
    *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_3 + 0x34);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_3 + 0x30);
    FUN_144a450dc(param_1 + 0x40,param_3 + 0x38);
  }
  if ((*(char *)(param_3 + 0x61) == '\x01') &&
     ((undefined1 *)(param_3 + 0x60) != (undefined1 *)(param_1 + 0x78))) {
    *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_3 + 0x60);
    *(undefined1 *)(param_1 + 0x79) = 1;
  }
  *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)(param_3 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_3 + 0x48);
  FUN_140a52b3c(param_1 + 0x58,param_3 + 0x50);
  if (*(longlong **)(param_3 + 0x68) != (longlong *)0x0 && *(int *)(param_3 + 0x70) != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 0x68) + 0x30))();
    if (cVar1 != '\0') {
      FUN_144a450dc(param_1 + 0x68,param_3 + 0x68);
    }
  }
  if (*(char *)(param_3 + 0x1c) == '\x01') {
    *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_3 + 0x1c);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_3 + 0x18);
    FUN_144a450dc(param_1 + 0x28,param_3 + 0x20);
    return;
  }
  return;
}



// FUNCTION 146a9b8ae FUN_146a9b8ae body=150 status=ok
// SIG undefined FUN_146a9b8ae(void)

void FUN_146a9b8ae(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar3 = *(longlong *)(param_3 + 8);
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(param_3 + 0x10);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    FUN_14149270a(param_1);
    plVar5 = *(longlong **)(param_1 + 0x18);
    *(longlong *)(param_1 + 0x10) = lVar3;
    *(longlong *)(param_1 + 0x18) = lVar4;
    FUN_140a5503c(param_1);
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
  if ((param_2 != 0) && (*(longlong *)(param_1 + 8) == 0)) {
    *(longlong *)(param_1 + 8) = param_2;
    FUN_140a5503c(param_1);
    return;
  }
  return;
}



// FUNCTION 146a9b944 FUN_146a9b944 body=125 status=ok
// SIG undefined FUN_146a9b944(void)

undefined1 FUN_146a9b944(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  longlong *plVar4;
  
  if ((*(int *)(param_1 + 0x30) != 0) && (*(longlong **)(param_1 + 0x28) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x30) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x28);
      }
      iVar3 = (**(code **)(*plVar4 + 0x58))();
      *(int *)(param_1 + 0x20) = iVar3;
      goto LAB_146a9b97d;
    }
  }
  iVar3 = *(int *)(param_1 + 0x20);
LAB_146a9b97d:
  if (iVar3 == 1) {
    uVar2 = 1;
    if (*(char *)(param_1 + 0x79) != '\0') {
      uVar2 = *(undefined1 *)(param_1 + 0x78);
    }
  }
  else {
    if ((((*(char *)(param_1 + 0x79) != '\0') && (*(char *)(param_1 + 0x78) == '\x01')) &&
        (*(int *)(param_1 + 0x70) != 0)) && (*(longlong **)(param_1 + 0x68) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000146a9b9b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x30))();
      return uVar2;
    }
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 146a9b9c2 FUN_146a9b9c2 body=184 status=ok
// SIG undefined FUN_146a9b9c2(void)

undefined8 * FUN_146a9b9c2(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x80);
  *puVar3 = &PTR_FUN_149edb640;
  puVar3[1] = 0;
  puVar3[2] = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  puVar3[3] = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *puVar3 = &PTR_FUN_149f19cc8;
  *(undefined4 *)(puVar3 + 4) = 1;
  *(undefined1 *)((longlong)puVar3 + 0x24) = 1;
  puVar3[5] = 0;
  puVar3[6] = 0;
  *(undefined4 *)(puVar3 + 7) = 0x3f800000;
  *(undefined1 *)((longlong)puVar3 + 0x3c) = 1;
  puVar3[8] = 0;
  puVar3[9] = 0;
  *(undefined4 *)(puVar3 + 10) = 0;
  *(undefined1 *)((longlong)puVar3 + 0x54) = 1;
  *(undefined1 *)((longlong)puVar3 + 0x79) = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  *(undefined8 *)((longlong)puVar3 + 100) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x6c) = 0;
  *param_1 = puVar3;
  *(undefined1 *)((longlong)param_1 + 0x61) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x15) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x45) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 146a9ba7a FUN_146a9ba7a body=222 status=ok
// SIG undefined FUN_146a9ba7a(void)

undefined8 FUN_146a9ba7a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  *local_28 = &PTR_FUN_149edb640;
  local_28[1] = 0;
  local_28[2] = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  local_28[3] = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *local_28 = &PTR_FUN_149f19cc8;
  *(undefined4 *)(local_28 + 4) = 1;
  *(undefined1 *)((longlong)local_28 + 0x24) = 1;
  local_28[5] = 0;
  local_28[6] = 0;
  *(undefined4 *)(local_28 + 7) = 0x3f800000;
  *(undefined1 *)((longlong)local_28 + 0x3c) = 1;
  local_28[8] = 0;
  local_28[9] = 0;
  *(undefined4 *)(local_28 + 10) = 0;
  *(undefined1 *)((longlong)local_28 + 0x54) = 1;
  *(undefined1 *)((longlong)local_28 + 0x79) = 0;
  local_28[0xb] = 0;
  local_28[0xc] = 0;
  *(undefined8 *)((longlong)local_28 + 100) = 0;
  *(undefined8 *)((longlong)local_28 + 0x6c) = 0;
  FUN_146a9bb5a(param_2,&local_28,param_1 + 0x1e0,param_3);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a9bb5a FUN_146a9bb5a body=117 status=ok
// SIG undefined FUN_146a9bb5a(void)

longlong * FUN_146a9bb5a(longlong *param_1,longlong *param_2,longlong param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *param_2;
  *param_2 = 0;
  *param_1 = lVar1;
  *(undefined1 *)((longlong)param_1 + 0x61) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x15) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x45) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xf] = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_4;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return param_1;
}



// FUNCTION 146a9bbd0 FUN_146a9bbd0 body=15 status=ok
// SIG undefined FUN_146a9bbd0(void)

undefined8 FUN_146a9bbd0(longlong param_1,int param_2)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x1f8) + (longlong)param_2 * 8);
}



// FUNCTION 146a9bbe0 FUN_146a9bbe0 body=12 status=ok
// SIG undefined FUN_146a9bbe0(void)

void FUN_146a9bbe0(longlong param_1)

{
  FUN_146a9bbec(param_1 + 0x1e0);
  return;
}



// FUNCTION 146a9bbec FUN_146a9bbec body=67 status=ok
// SIG undefined FUN_146a9bbec(void)

void FUN_146a9bbec(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + (longlong)param_2 * 8);
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)param_2 * 8) = 0;
  FUN_146ac4d6a(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146a9bc25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 146a9bc30 FUN_146a9bc30 body=302 status=ok
// SIG undefined FUN_146a9bc30(void)

void FUN_146a9bc30(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140146ccc(param_1 + 0x240,param_2 + 0x1f0);
  FUN_14009d848(param_1 + 0x220,param_2 + 0x200);
  *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_2 + 0x1c4);
  *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)(param_2 + 0x1c8);
  *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_2 + 0x1cc);
  *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_2 + 0x1c0);
  *(undefined4 *)(param_1 + 0x208) = 0xffffffff;
  FUN_146a9bd60(param_1 + 0x20c,param_1,param_2 + 0x1d8);
  *(undefined1 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_2 + 0x1b8);
  FUN_146aa7f4c(param_1 + 0x230,param_2 + 0x210);
  *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_2 + 0x1d0);
  local_28 = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined8 *)(param_2 + 0x1a8) = 0;
  local_20 = *(undefined4 *)(param_2 + 0x1b0);
  local_1c = *(undefined4 *)(param_2 + 0x1b4);
  *(undefined8 *)(param_2 + 0x1b0) = 0;
  FUN_146a9be0c(param_1 + 0x1e0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a9bd60 FUN_146a9bd60 body=171 status=ok
// SIG undefined FUN_146a9bd60(void)

void FUN_146a9bd60(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  if (*(longlong **)(param_3 + 2) != (longlong *)0x0 && param_3[4] != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
    if (cVar1 != '\0') {
      FUN_146ac4e64(param_1,param_2,param_3 + 2);
      return;
    }
  }
  if (*(char *)(param_3 + 1) != '\x01') {
    FUN_1400b73c8(param_2,param_1);
    return;
  }
  if (*(longlong **)(param_3 + 2) != (longlong *)0x0 && param_3[4] != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
    if (cVar1 != '\0') {
      if (param_3[4] == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_3 + 2);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      *param_3 = uVar2;
    }
  }
  FUN_146ac4f02(param_1,param_2,param_3);
  return;
}



// FUNCTION 146a9be0c FUN_146a9be0c body=132 status=ok
// SIG undefined FUN_146a9be0c(void)

void FUN_146a9be0c(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = (int)param_2[1];
  iVar2 = *(int *)(param_1 + 0x20) + iVar1;
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (*(int *)(param_1 + 0x24) < iVar2) {
    FUN_146ac50b6(param_1 + 0x18);
    iVar1 = (int)param_2[1];
  }
  lVar4 = *param_2;
  uVar3 = 0;
  if (iVar1 != 0) {
    lVar5 = (longlong)iVar1 * 0x78;
    do {
      FUN_1469eef12(param_1,lVar4);
      lVar4 = lVar4 + 0x78;
      lVar5 = lVar5 + -0x78;
    } while (lVar5 != 0);
    uVar3 = (undefined4)param_2[1];
    lVar4 = *param_2;
  }
  FUN_1469e50ce(lVar4,uVar3);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146a9be92 FUN_146a9be92 body=1643 status=ok
// SIG undefined FUN_146a9be92(void)

longlong * FUN_146a9be92(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  bool bVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_128 [32];
  longlong *local_108;
  undefined4 *local_100;
  longlong local_f8;
  int *local_f0;
  longlong local_e8;
  uint uStack_e0;
  uint uStack_dc;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *param_2 = 0;
  param_2[1] = 0;
  iVar8 = *(int *)(param_1 + 0x200);
  local_108 = param_2;
  if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8);
  }
  if (iVar8 == 0) {
    bVar20 = *(int *)(param_1 + 0x214) != 0;
    iVar18 = 0;
    fVar24 = 0.0;
    fVar26 = 0.0;
    fVar25 = 0.0;
    uVar13 = 0;
  }
  else {
    FUN_146ac5116(param_2);
    uVar13 = (ulonglong)*(uint *)(param_1 + 0x200);
    iVar8 = *(int *)(param_1 + 0x214);
    bVar20 = iVar8 != 0;
    if ((int)*(uint *)(param_1 + 0x200) < 1) {
      iVar18 = 0;
      fVar24 = 0.0;
      fVar26 = 0.0;
      fVar25 = 0.0;
    }
    else {
      fVar25 = 0.0;
      lVar15 = 0;
      iVar18 = 0;
      fVar26 = 0.0;
      fVar24 = 0.0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1f8) + lVar15 * 8);
        if (*(char *)(*(longlong *)(lVar3 + 0x10) + 0x39) != DAT_14c96b1e1) {
          if (((*(int *)(lVar3 + 0x30) == 0) || (*(longlong **)(lVar3 + 0x28) == (longlong *)0x0))
             || (cVar6 = (**(code **)(**(longlong **)(lVar3 + 0x28) + 0x30))(), cVar6 == '\0')) {
            iVar7 = *(int *)(lVar3 + 0x20);
          }
          else {
            if (*(int *)(lVar3 + 0x30) == 0) {
              plVar11 = (longlong *)0x0;
            }
            else {
              plVar11 = *(longlong **)(lVar3 + 0x28);
            }
            iVar7 = (**(code **)(*plVar11 + 0x58))();
            *(int *)(lVar3 + 0x20) = iVar7;
          }
          iVar18 = iVar18 + 1;
          if (iVar7 == 0) {
            pfVar10 = (float *)(*(longlong *)(lVar3 + 0x10) + 0x168);
            if ((*(byte *)(*(longlong *)(lVar3 + 0x10) + 0x31) & 0x20) == 0) {
              pfVar10 = (float *)&DAT_14c84635c;
            }
            pfVar9 = pfVar10 + 1;
            if (iVar8 == 0) {
              pfVar9 = pfVar10;
            }
            fVar26 = fVar26 + *pfVar9;
          }
          else {
            fVar29 = (float)FUN_146a9c504(lVar3);
            fVar27 = *(float *)(param_1 + 0x250);
            if (((*(int *)(lVar3 + 0x48) != 0) && (*(longlong **)(lVar3 + 0x40) != (longlong *)0x0))
               && (cVar6 = (**(code **)(**(longlong **)(lVar3 + 0x40) + 0x30))(), cVar6 != '\0')) {
              if (*(int *)(lVar3 + 0x48) == 0) {
                plVar11 = (longlong *)0x0;
              }
              else {
                plVar11 = *(longlong **)(lVar3 + 0x40);
              }
              uVar21 = (**(code **)(*plVar11 + 0x58))();
              *(undefined4 *)(lVar3 + 0x38) = uVar21;
            }
            if (fVar27 <= fVar29) {
              fVar27 = fVar29;
            }
            fVar24 = fVar24 + fVar27;
            fVar25 = fVar25 + *(float *)(lVar3 + 0x38);
          }
        }
        lVar15 = lVar15 + 1;
        uVar13 = (ulonglong)*(int *)(param_1 + 0x200);
      } while (lVar15 < (longlong)uVar13);
    }
  }
  iVar8 = 1;
  if (1 < iVar18) {
    iVar8 = iVar18;
  }
  fVar27 = *(float *)(param_1 + 0x254);
  fVar29 = (float)param_3[bVar20];
  local_e8 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  if (-1 < (int)uVar13) {
    if (((int)uVar13 != 0) && (FUN_146ac517e(&local_e8), 0 < *(int *)(param_1 + 0x200))) {
      local_100 = (undefined4 *)CONCAT71(local_100._1_7_,bVar20);
      fVar26 = (fVar29 - (float)(iVar8 + -1) * fVar27) - fVar26;
      lVar15 = 0;
      fVar27 = 0.0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1f8) + lVar15 * 8);
        if (*(char *)(*(longlong *)(lVar3 + 0x10) + 0x39) == DAT_14c96b1e1) {
          fVar29 = 0.0;
          fVar28 = fVar27;
          uVar19 = uStack_e0;
        }
        else {
          if (((*(int *)(lVar3 + 0x30) == 0) || (*(longlong **)(lVar3 + 0x28) == (longlong *)0x0))
             || (cVar6 = (**(code **)(**(longlong **)(lVar3 + 0x28) + 0x30))(), cVar6 == '\0')) {
            iVar8 = *(int *)(lVar3 + 0x20);
          }
          else {
            if (*(int *)(lVar3 + 0x30) == 0) {
              plVar11 = (longlong *)0x0;
            }
            else {
              plVar11 = *(longlong **)(lVar3 + 0x28);
            }
            iVar8 = (**(code **)(*plVar11 + 0x58))();
            *(int *)(lVar3 + 0x20) = iVar8;
          }
          if (iVar8 == 0) {
            pfVar10 = (float *)(*(longlong *)(lVar3 + 0x10) + 0x168);
            if ((*(byte *)(*(longlong *)(lVar3 + 0x10) + 0x31) & 0x20) == 0) {
              pfVar10 = (float *)&DAT_14c84635c;
            }
            pfVar9 = pfVar10 + 1;
            if ((char)local_100 == '\0') {
              pfVar9 = pfVar10;
            }
            fVar29 = *pfVar9;
          }
          else {
            if (((*(int *)(lVar3 + 0x48) != 0) && (*(longlong **)(lVar3 + 0x40) != (longlong *)0x0))
               && (cVar6 = (**(code **)(**(longlong **)(lVar3 + 0x40) + 0x30))(), cVar6 != '\0')) {
              if (*(int *)(lVar3 + 0x48) == 0) {
                plVar11 = (longlong *)0x0;
              }
              else {
                plVar11 = *(longlong **)(lVar3 + 0x40);
              }
              uVar21 = (**(code **)(*plVar11 + 0x58))();
              *(undefined4 *)(lVar3 + 0x38) = uVar21;
            }
            fVar29 = (*(float *)(lVar3 + 0x38) * fVar26) / fVar25 - fVar27;
            fVar27 = 0.0;
          }
          fVar28 = fVar27;
          uVar19 = uStack_e0;
          if (fVar24 <= fVar26) {
            fVar22 = (float)FUN_146a9c504(lVar3);
            if (fVar22 <= fVar29) {
              fVar22 = fVar29;
            }
            fVar28 = fVar22 - fVar29;
            bVar20 = 0.0 < fVar28;
            if ((lVar15 != 0) && (0.0 < fVar28)) {
              local_f8 = local_e8;
              lVar16 = lVar15;
              do {
                uVar13 = (ulonglong)((int)lVar16 - 1);
                lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x1f8) + uVar13 * 8);
                if (((*(int *)(lVar17 + 0x30) == 0) ||
                    (*(longlong **)(lVar17 + 0x28) == (longlong *)0x0)) ||
                   (cVar6 = (**(code **)(**(longlong **)(lVar17 + 0x28) + 0x30))(), cVar6 == '\0'))
                {
                  iVar8 = *(int *)(lVar17 + 0x20);
                }
                else {
                  if (*(int *)(lVar17 + 0x30) == 0) {
                    plVar11 = (longlong *)0x0;
                  }
                  else {
                    plVar11 = *(longlong **)(lVar17 + 0x28);
                  }
                  iVar8 = (**(code **)(*plVar11 + 0x58))();
                  *(int *)(lVar17 + 0x20) = iVar8;
                }
                if ((iVar8 == 1) && (*(char *)(*(longlong *)(lVar3 + 0x10) + 0x39) != DAT_14c96b1e1)
                   ) {
                  fVar23 = (float)FUN_146a9c504(*(undefined8 *)
                                                 (*(longlong *)(param_1 + 0x1f8) + uVar13 * 8));
                  fVar29 = *(float *)(param_1 + 0x250);
                  if (*(float *)(param_1 + 0x250) <= fVar23) {
                    fVar29 = fVar23;
                  }
                  fVar23 = *(float *)(local_f8 + uVar13 * 4);
                  fVar29 = fVar23 - fVar29;
                  if (0.0 < fVar29) {
                    if (fVar28 <= fVar29) {
                      fVar29 = fVar28;
                    }
                    *(float *)(local_f8 + uVar13 * 4) = fVar23 - fVar29;
                    fVar28 = fVar28 - fVar29;
                  }
                }
                bVar20 = 0.0 < fVar28;
              } while ((1 < lVar16) && (lVar16 = lVar16 + -1, 0.0 < fVar28));
            }
            fVar29 = fVar22;
            uVar19 = uStack_e0;
            if (!bVar20) {
              fVar28 = fVar27;
            }
          }
        }
        uStack_e0 = uVar19 + 1;
        if (uStack_dc < uStack_e0) {
          FUN_146ac518c(&local_e8,uVar19);
        }
        lVar3 = local_e8;
        *(float *)(local_e8 + (longlong)(int)uVar19 * 4) = fVar29;
        lVar15 = lVar15 + 1;
        fVar27 = fVar28;
      } while (lVar15 < *(int *)(param_1 + 0x200));
      if (0 < *(int *)(param_1 + 0x200)) {
        puVar14 = param_3 + 1;
        fVar24 = 0.0;
        lVar16 = 0;
        lVar15 = 0;
        local_100 = puVar14;
        local_f0 = (int *)(param_1 + 0x214);
        do {
          puVar1 = (undefined4 *)(lVar16 + lVar3);
          bVar20 = *local_f0 == 0;
          puVar12 = puVar1;
          puVar5 = param_3;
          if (bVar20) {
            puVar12 = puVar14;
            puVar5 = puVar1;
          }
          uVar21 = *puVar12;
          fVar25 = 0.0;
          if (bVar20) {
            fVar25 = fVar24;
          }
          uVar2 = *puVar5;
          fVar26 = fVar24;
          if (bVar20) {
            fVar26 = 0.0;
          }
          iVar8 = (int)local_108[1];
          lVar17 = (longlong)iVar8;
          *(uint *)(local_108 + 1) = iVar8 + 1U;
          if (*(uint *)((longlong)local_108 + 0xc) < iVar8 + 1U) {
            FUN_146ac51e2(local_108,iVar8);
            puVar14 = local_100;
          }
          lVar4 = *local_108;
          *(undefined4 *)(lVar4 + lVar17 * 0x14) = 0x3f800000;
          *(float *)(lVar4 + 4 + lVar17 * 0x14) = fVar25;
          *(float *)(lVar4 + 8 + lVar17 * 0x14) = fVar26;
          *(undefined4 *)(lVar4 + 0xc + lVar17 * 0x14) = uVar2;
          *(undefined4 *)(lVar4 + 0x10 + lVar17 * 0x14) = uVar21;
          if (*(char *)(*(longlong *)
                         (*(longlong *)(*(longlong *)(param_1 + 0x1f8) + lVar15 * 8) + 0x10) + 0x39)
              != DAT_14c96b1e1) {
            fVar25 = *(float *)(lVar3 + lVar15 * 4) + *(float *)(param_1 + 0x254);
            fVar24 = fVar24 + (float)((int)ROUND(fVar25 + fVar25 + 0.5) >> 1);
          }
          lVar15 = lVar15 + 1;
          lVar16 = lVar16 + 4;
        } while (lVar15 < *(int *)(param_1 + 0x200));
      }
    }
    FUN_14290544c(&local_e8);
    if ((local_d0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
      return local_108;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar13 & 0xffffffff);
}



// FUNCTION 146a9c504 FUN_146a9c504 body=94 status=ok
// SIG undefined FUN_146a9c504(void)

undefined4 FUN_146a9c504(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_14;
  
  local_14 = 0;
  if (*(char *)(param_1 + 0x54) == '\x01') {
    puVar3 = (undefined4 *)(param_1 + 0x50);
    if ((*(int *)(param_1 + 0x60) != 0) && (*(longlong **)(param_1 + 0x58) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x30))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0x60) == 0) {
          plVar2 = (longlong *)0x0;
        }
        else {
          plVar2 = *(longlong **)(param_1 + 0x58);
        }
        uVar4 = (**(code **)(*plVar2 + 0x58))();
        *puVar3 = uVar4;
      }
    }
  }
  else {
    puVar3 = &local_14;
  }
  return *puVar3;
}



// FUNCTION 146a9c562 FUN_146a9c562 body=1437 status=ok
// SIG undefined FUN_146a9c562(void)

void FUN_146a9c562(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  undefined4 *local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8 [2];
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  float fStack_190;
  float fStack_18c;
  float local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  float fStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  longlong *local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  float fStack_148;
  float fStack_144;
  float local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  float fStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  ulonglong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  ulonglong local_108;
  char local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_146a9be92(param_1,local_1c8,param_2);
  if (0 < *(int *)(param_1 + 0x200)) {
    local_1d0 = param_2 + 0x1c;
    lVar14 = 0;
    lVar15 = 0;
    do {
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x1f8) + lVar15 * 8);
      local_1b8 = *(undefined8 *)(local_1c8[0] + 0xc + lVar14);
      lVar11 = *(longlong *)(lVar10 + 0x10);
      local_100 = *(char *)(lVar11 + 0x198);
      if (DAT_14c96b1e0 == '\0') {
        if (local_100 == '\0') goto LAB_146a9c675;
        local_108 = *(ulonglong *)(lVar11 + 400);
        local_118 = *(undefined8 *)(lVar11 + 0x180);
        uStack_110 = *(undefined8 *)(lVar11 + 0x188);
LAB_146a9c937:
        fVar17 = (float)*(double *)(*(longlong *)(lVar10 + 0x10) + 0x170);
        if (DAT_14c96b1e0 != '\0') {
          fVar17 = (0.5 - fVar17) + 0.5;
        }
        local_1b0 = CONCAT44((float)*(double *)(*(longlong *)(lVar10 + 0x10) + 0x178),fVar17);
        local_1a0 = *(undefined8 *)(param_2 + 0xc);
        local_1a4 = *(undefined4 *)(param_2 + 8);
        local_1d8 = local_1d0;
        local_1e0 = &local_1a4;
        local_1e8 = &local_1b0;
        FUN_146978c22(&local_150,&local_1b8,local_1c8[0] + lVar14,&local_118);
        local_160 = *(undefined8 *)(lVar10 + 0x10);
        plVar13 = *(longlong **)(lVar10 + 0x18);
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
          UNLOCK();
          local_168 = local_120;
          uStack_184 = uStack_13c;
          uStack_180 = uStack_138;
          local_178 = CONCAT44(uStack_12c,local_130);
          uStack_170 = CONCAT44(uStack_124,uStack_128);
          local_188 = local_140;
          fStack_17c = fStack_134;
          local_198 = CONCAT44(uStack_14c,local_150);
          fStack_190 = fStack_148;
          fStack_18c = fStack_144;
          goto LAB_146a9c7d6;
        }
        local_168 = local_120;
        local_178 = CONCAT44(uStack_12c,local_130);
        uStack_170 = CONCAT44(uStack_124,uStack_128);
        local_188 = local_140;
        uStack_184 = uStack_13c;
        uStack_180 = uStack_138;
        fStack_17c = fStack_134;
        local_198 = CONCAT44(uStack_14c,local_150);
        fStack_190 = fStack_148;
        fStack_18c = fStack_144;
LAB_146a9c8a4:
        local_158 = (longlong *)0x0;
      }
      else {
        if (local_100 != '\0') {
          local_118 = *(undefined8 *)(lVar11 + 0x180);
          uStack_110 = *(undefined8 *)(lVar11 + 0x188);
          local_108 = *(ulonglong *)(lVar11 + 400) ^ 0x80000000;
          goto LAB_146a9c937;
        }
LAB_146a9c675:
        uVar9 = *(undefined1 *)(param_2 + 0x34);
        fVar17 = *(float *)(local_1c8[0] + lVar14);
        fVar3 = *(float *)(local_1c8[0] + 4 + lVar14);
        fVar4 = *(float *)(local_1c8[0] + 8 + lVar14);
        fVar19 = *(float *)(param_2 + 0x20);
        fVar5 = *(float *)(param_2 + 0x28);
        fVar6 = *(float *)(param_2 + 0x1c);
        fVar7 = *(float *)(param_2 + 0x24);
        fVar16 = fVar3 * fVar19 + fVar4 * fVar5 + *(float *)(param_2 + 0x30);
        fVar20 = fVar3 * fVar6 + fVar4 * fVar7 + *(float *)(param_2 + 0x2c);
        fVar8 = *(float *)(param_2 + 8);
        fStack_190 = fVar8 * fVar17;
        fVar18 = fVar19 * 0.0 + fVar17 * fVar5;
        fVar21 = fVar6 * 0.0 + fVar17 * fVar7;
        fVar19 = fVar5 * 0.0 + fVar17 * fVar19;
        fStack_17c = fVar7 * 0.0 + fVar17 * fVar6;
        local_188 = fVar4 * fVar8 + *(float *)(param_2 + 0x10);
        fStack_18c = fVar3 * fVar8 + *(float *)(param_2 + 0xc);
        uVar12 = *(undefined8 *)(local_1c8[0] + 4 + lVar14);
        local_160 = *(undefined8 *)(lVar10 + 0x10);
        plVar13 = *(longlong **)(lVar10 + 0x18);
        uStack_184 = (undefined4)uVar12;
        uStack_180 = (undefined4)((ulonglong)uVar12 >> 0x20);
        local_198 = local_1b8;
        if (plVar13 == (longlong *)0x0) {
          local_178 = CONCAT44(fVar21,fVar19);
          uStack_170 = CONCAT44(fVar20,fVar18);
          local_168 = CONCAT35(local_168._5_3_,CONCAT14(uVar9,fVar16)) & 0xffffff01ffffffff;
          goto LAB_146a9c8a4;
        }
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
        local_178 = CONCAT44(fVar21,fVar19);
        uStack_170 = CONCAT44(fVar20,fVar18);
        local_168 = CONCAT17(local_150._2_1_,CONCAT25((undefined2)local_150,CONCAT14(uVar9,fVar16)))
                    & 0xffffff01ffffffff;
LAB_146a9c7d6:
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar13 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        local_158 = plVar13;
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
      FUN_1402018be(param_3,&local_198);
      plVar13 = local_158;
      if (local_158 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_158 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_158)(local_158);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
      lVar15 = lVar15 + 1;
      lVar14 = lVar14 + 0x14;
    } while (lVar15 < *(int *)(param_1 + 0x200));
  }
  if (local_1c8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a9cb00 FUN_146a9cb00 body=1916 status=ok
// SIG undefined FUN_146a9cb00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_146a9cb00(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 float *param_5,undefined4 param_6,float *param_7,char param_8)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  char cVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  float *pfVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float *pfVar13;
  longlong lVar14;
  undefined1 *puVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_2b8 [32];
  undefined8 local_298;
  float *local_290;
  undefined4 local_288;
  float *local_280;
  char local_278;
  int local_264;
  longlong local_260;
  float *local_258;
  float *local_250;
  float *local_248;
  float *local_240;
  longlong local_238;
  ulonglong local_230;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  undefined8 local_218;
  float local_210;
  undefined8 local_20c;
  uint local_204;
  uint uStack_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  byte local_1e4;
  undefined1 local_1e0 [8];
  undefined1 local_1d8 [288];
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  local_1e0[0] = DAT_14c96b238;
  local_b8 = (undefined1 *)0x0;
  local_b0 = 0x400000000;
  local_a8 = 0;
  (**(code **)(*param_1 + 0x238))(param_1,param_3,local_1e0);
  local_278 = param_8;
  local_280 = param_7;
  local_288 = param_6;
  local_290 = param_5;
  local_298 = param_4;
  local_264 = FUN_146977c4a(param_1,param_2,local_1e0,param_3);
  auVar5 = _DAT_1499319e0;
  uVar3 = *(uint *)(param_1 + 0x41);
  uVar9 = 0xffffffff;
  if (((longlong)(int)uVar3 != -1) && (uVar9 = uVar3, (int)local_b0 != (int)param_1[0x40])) {
    puVar15 = local_b8;
    if (local_b8 == (undefined1 *)0x0) {
      puVar15 = local_1d8;
    }
    uVar9 = 0xffffffff;
    if ((int)local_b0 != 0) {
      uVar11 = 0;
      do {
        if (*(longlong *)(puVar15 + uVar11 + 0x38) ==
            *(longlong *)(*(longlong *)(param_1[0x3f] + (longlong)(int)uVar3 * 8) + 0x10)) {
          uVar9 = (int)(uVar11 >> 3) * 0x38e38e39;
          goto LAB_146a9cc1b;
        }
        uVar11 = uVar11 + 0x48;
      } while ((longlong)(int)local_b0 * 0x48 != uVar11);
      uVar9 = 0xffffffff;
    }
  }
LAB_146a9cc1b:
  local_260 = param_1[0x4c];
  local_264 = local_264 + 1;
  uVar11 = (ulonglong)*(int *)((longlong)param_1 + 0x20c);
  if (uVar11 == 0xffffffffffffffff) {
LAB_146a9cc8f:
    uVar11 = 0xffffffff;
  }
  else if ((int)local_b0 != (int)param_1[0x40]) {
    puVar15 = local_b8;
    if (local_b8 == (undefined1 *)0x0) {
      puVar15 = local_1d8;
    }
    if ((int)local_b0 == 0) goto LAB_146a9d19b;
    uVar12 = 0;
    do {
      if (*(longlong *)(puVar15 + uVar12 + 0x38) ==
          *(longlong *)(*(longlong *)(param_1[0x3f] + uVar11 * 8) + 0x10)) {
        uVar11 = (ulonglong)(uint)((int)(uVar12 >> 3) * 0x38e38e39);
        goto LAB_146a9cc94;
      }
      uVar12 = uVar12 + 0x48;
    } while ((longlong)(int)local_b0 * 0x48 != uVar12);
    goto LAB_146a9cc8f;
  }
LAB_146a9cc94:
  if (1 < (int)local_b0) {
    local_238 = local_260 + 0x10;
    local_258 = (float *)(local_260 + 0x18);
    local_240 = (float *)(local_260 + 0x1c);
    local_248 = (float *)(local_260 + 0x20);
    local_250 = (float *)(local_260 + 0x24);
    local_230 = uVar11 & 0xffffffff;
    lVar14 = 0x7c;
    uVar11 = 0;
    do {
      puVar15 = local_b8;
      if (local_b8 == (undefined1 *)0x0) {
        puVar15 = local_1d8;
      }
      if (*(int *)((longlong)param_1 + 0x214) == 0) {
        uVar3 = *(uint *)(puVar15 + lVar14 + -0x30);
        uVar4 = *(uint *)((longlong)param_1 + 0x254);
        fVar17 = (float)(uVar4 ^ auVar5._0_4_);
        fVar18 = 0.0;
      }
      else {
        uVar3 = *(uint *)((longlong)param_1 + 0x254);
        uVar4 = *(uint *)(puVar15 + lVar14 + -0x34);
        fVar18 = (float)(uVar3 ^ auVar5._0_4_);
        fVar17 = 0.0;
      }
      if ((uVar9 == uVar11) || (local_230 == uVar11)) {
        lVar16 = param_1[0x4c];
        pfVar8 = (float *)(lVar16 + 200);
        if (*(char *)(lVar16 + 0xd8) == '\x01') {
          pfVar8 = (float *)FUN_1400c06fe(pfVar8);
          pfVar13 = pfVar8 + 1;
          pfVar7 = pfVar8 + 2;
          pfVar10 = pfVar8 + 3;
        }
        else {
          pfVar13 = (float *)(lVar16 + 0xcc);
          pfVar7 = (float *)(lVar16 + 0xd0);
          pfVar10 = (float *)(lVar16 + 0xd4);
        }
        local_21c = *pfVar10 * param_7[3];
        local_220 = *pfVar7 * param_7[2];
        local_224 = *pfVar13 * param_7[1];
        local_228 = *pfVar8 * *param_7;
        cVar6 = ' ';
        if (param_8 != '\0') {
          cVar6 = (*(byte *)((longlong)param_1 + 0x3a) ^ 1) << 5;
        }
        local_210 = *(float *)(puVar15 + lVar14 + -0x2c);
        local_1fc = *(float *)(puVar15 + lVar14 + -0x18);
        local_218 = CONCAT44(fVar18 * local_210 + *(float *)(puVar15 + lVar14 + -0x24),
                             fVar17 * local_210 + *(float *)(puVar15 + lVar14 + -0x28));
        local_1f8 = *(float *)(puVar15 + lVar14 + -0x14);
        fVar1 = *(float *)(puVar15 + lVar14 + -0xc);
        fVar2 = *(float *)(puVar15 + lVar14 + -0x10);
        local_1e8 = fVar17 * local_1f8 + fVar18 * fVar1 + *(float *)(puVar15 + lVar14 + -4);
        local_1ec = fVar17 * local_1fc + fVar18 * fVar2 + *(float *)(puVar15 + lVar14 + -8);
        local_1f0 = local_1f8 * 0.0 + fVar1;
        local_1f4 = local_1fc * 0.0 + fVar2;
        local_1f8 = fVar1 * 0.0 + local_1f8;
        local_1fc = fVar2 * 0.0 + local_1fc;
        local_1e4 = local_1e4 & 0xfc | puVar15[lVar14] * '\x02' & 2U;
        local_298 = CONCAT71(local_298._1_7_,cVar6);
        lVar16 = local_238;
      }
      else {
        pfVar7 = local_258;
        pfVar10 = local_250;
        pfVar13 = local_248;
        pfVar8 = local_240;
        if (*(char *)(local_260 + 0x28) == '\x01') {
          pfVar7 = (float *)FUN_1400c06fe(local_258);
          pfVar8 = pfVar7 + 1;
          pfVar13 = pfVar7 + 2;
          pfVar10 = pfVar7 + 3;
        }
        local_21c = *pfVar10 * param_7[3];
        local_220 = *pfVar13 * param_7[2];
        local_224 = *pfVar8 * param_7[1];
        local_228 = *pfVar7 * *param_7;
        cVar6 = ' ';
        if (param_8 != '\0') {
          cVar6 = (*(byte *)((longlong)param_1 + 0x3a) ^ 1) << 5;
        }
        local_210 = *(float *)(puVar15 + lVar14 + -0x2c);
        local_1fc = *(float *)(puVar15 + lVar14 + -0x18);
        local_218 = CONCAT44(fVar18 * local_210 + *(float *)(puVar15 + lVar14 + -0x24),
                             fVar17 * local_210 + *(float *)(puVar15 + lVar14 + -0x28));
        local_1f8 = *(float *)(puVar15 + lVar14 + -0x14);
        fVar1 = *(float *)(puVar15 + lVar14 + -0xc);
        fVar2 = *(float *)(puVar15 + lVar14 + -0x10);
        local_1e8 = fVar17 * local_1f8 + fVar18 * fVar1 + *(float *)(puVar15 + lVar14 + -4);
        local_1ec = fVar17 * local_1fc + fVar18 * fVar2 + *(float *)(puVar15 + lVar14 + -8);
        local_1f0 = local_1f8 * 0.0 + fVar1;
        local_1f4 = local_1fc * 0.0 + fVar2;
        local_1f8 = fVar1 * 0.0 + local_1f8;
        local_1fc = fVar2 * 0.0 + local_1fc;
        local_1e4 = local_1e4 & 0xfc | puVar15[lVar14] * '\x02' & 2U;
        local_298 = CONCAT71(local_298._1_7_,cVar6);
        lVar16 = param_1[0x4c] + 0xc0;
      }
      _local_204 = CONCAT44(uVar3,uVar4);
      local_290 = &local_228;
      local_20c = 0;
      FUN_140239bd2(param_5,local_264,&local_218,lVar16);
      uVar11 = uVar11 + 1;
      lVar14 = lVar14 + 0x48;
    } while ((longlong)uVar11 < (longlong)(int)local_b0 + -1);
  }
LAB_146a9d19b:
  FUN_144715780(local_1d8);
  if ((local_a0 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return local_264;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a9d27e FUN_146a9d27e body=365 status=ok
// SIG undefined FUN_146a9d27e(void)

double * FUN_146a9d27e(longlong param_1,double *param_2)

{
  float fVar1;
  longlong lVar2;
  double *pdVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  float *pfVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  pdVar3 = param_2;
  fVar1 = *(float *)(param_1 + 0x254);
  if (*(int *)(param_1 + 0x214) == 0) {
    if ((longlong)*(int *)(param_1 + 0x200) < 1) {
      iVar4 = 0;
      dVar9 = 0.0;
      dVar8 = 0.0;
    }
    else {
      dVar8 = 0.0;
      lVar5 = 0;
      iVar4 = 0;
      dVar10 = 0.0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1f8) + lVar5 * 8) + 0x10);
        dVar9 = dVar10;
        if (*(char *)(lVar2 + 0x39) != DAT_14c96b1e1) {
          pfVar7 = (float *)&DAT_14c84635c;
          if ((*(byte *)(lVar2 + 0x31) & 0x20) != 0) {
            pfVar7 = (float *)(lVar2 + 0x168);
          }
          iVar4 = iVar4 + 1;
          dVar8 = dVar8 + (double)*pfVar7;
          dVar9 = (double)pfVar7[1];
          if ((double)pfVar7[1] <= dVar10) {
            dVar9 = dVar10;
          }
        }
        lVar5 = lVar5 + 1;
        dVar10 = dVar9;
      } while (*(int *)(param_1 + 0x200) != lVar5);
    }
    param_2[1] = dVar9;
  }
  else {
    if ((longlong)*(int *)(param_1 + 0x200) < 1) {
      iVar4 = 0;
      dVar8 = 0.0;
      dVar9 = 0.0;
    }
    else {
      dVar9 = 0.0;
      lVar5 = 0;
      iVar4 = 0;
      dVar8 = 0.0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1f8) + lVar5 * 8) + 0x10);
        if (*(char *)(lVar2 + 0x39) != DAT_14c96b1e1) {
          pfVar7 = (float *)&DAT_14c84635c;
          if ((*(byte *)(lVar2 + 0x31) & 0x20) != 0) {
            pfVar7 = (float *)(lVar2 + 0x168);
          }
          iVar4 = iVar4 + 1;
          dVar10 = (double)*pfVar7;
          if ((double)*pfVar7 <= dVar9) {
            dVar10 = dVar9;
          }
          dVar9 = dVar10;
          dVar8 = dVar8 + (double)pfVar7[1];
        }
        lVar5 = lVar5 + 1;
      } while (*(int *)(param_1 + 0x200) != lVar5);
    }
    *param_2 = dVar9;
    param_2 = param_2 + 1;
  }
  iVar6 = 1;
  if (1 < iVar4) {
    iVar6 = iVar4;
  }
  *param_2 = (double)(fVar1 * (float)(iVar6 + -1)) + dVar8;
  return pdVar3;
}



// FUNCTION 146a9d3f4 FUN_146a9d3f4 body=530 status=ok
// SIG undefined FUN_146a9d3f4(void)

undefined1 * FUN_146a9d3f4(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong *plStack_100;
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [136];
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_146a9d608(param_1,param_3,param_4);
  lVar3 = *(longlong *)(param_4 + 0x40);
  plVar4 = *(longlong **)(param_4 + 0x50);
  if (plVar4 == (longlong *)0x0) {
    if (lVar3 == DAT_14c966e98) {
      iVar7 = *(int *)(param_1 + 0x208);
      goto joined_r0x000146a9d52b;
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (lVar3 == DAT_14c966e98) {
      iVar7 = *(int *)(param_1 + 0x208);
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
joined_r0x000146a9d52b:
      if (iVar7 != -1) {
        bVar5 = true;
        *(undefined1 *)(param_1 + 0x210) = 1;
        local_f8[0] = 1;
        local_d8 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        memset(local_d0,0,0x88);
        local_48 = 0x20702;
        local_44 = 0;
        plVar4 = *(longlong **)(param_1 + 0x10);
        if (plVar4 == (longlong *)0x0) {
LAB_146a9d5b5:
          local_108 = 0;
          plStack_100 = (longlong *)0x0;
        }
        else {
          iVar7 = (int)plVar4[1];
          do {
            if (iVar7 == 0) goto LAB_146a9d5b5;
            LOCK();
            iVar6 = (int)plVar4[1];
            bVar9 = iVar7 == iVar6;
            if (bVar9) {
              *(int *)(plVar4 + 1) = iVar7 + 1;
              iVar6 = iVar7;
            }
            iVar7 = iVar6;
            UNLOCK();
          } while (!bVar9);
          uVar8 = *(undefined8 *)(param_1 + 8);
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
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
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          bVar5 = false;
          local_108 = uVar8;
          plStack_100 = plVar4;
        }
        plVar4 = plStack_100;
        uVar8 = FUN_140592a6e(local_f8,&local_108);
        FUN_1403d4c6e(param_2,uVar8);
        if (!bVar5) {
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
        FUN_14493db24(local_f8);
        goto LAB_146a9d582;
      }
    }
    else {
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
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_146a9d582:
  if ((local_40 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a9d608 FUN_146a9d608 body=681 status=ok
// SIG undefined FUN_146a9d608(void)

void FUN_146a9d608(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_d8 [40];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  longlong local_90 [2];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  fVar18 = 1.0 / (*(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x28) -
                 *(float *)(param_2 + 0x24) * *(float *)(param_2 + 0x20));
  fVar17 = *(float *)(param_2 + 0x1c) * fVar18;
  fVar16 = -*(float *)(param_2 + 0x24) * fVar18;
  fVar15 = -*(float *)(param_2 + 0x20) * fVar18;
  fVar18 = fVar18 * *(float *)(param_2 + 0x28);
  dVar4 = (double)(fVar15 * *(float *)(param_3 + 0x20) + fVar17 * *(float *)(param_3 + 0x24) +
                  (-*(float *)(param_2 + 0x2c) * fVar15 - fVar17 * *(float *)(param_2 + 0x30)));
  dVar5 = (double)(fVar18 * *(float *)(param_3 + 0x20) + fVar16 * *(float *)(param_3 + 0x24) +
                  (-*(float *)(param_2 + 0x2c) * fVar18 - *(float *)(param_2 + 0x30) * fVar16));
  FUN_146a9be92(param_1,local_90,param_2);
  iVar1 = *(int *)(param_1 + 0x208);
  if (*(int *)(param_1 + 0x214) == 0) {
    local_a0 = dVar5;
    local_98 = dVar4;
    uVar8 = FUN_146a9de16(*(undefined4 *)(param_1 + 0x254),*(undefined4 *)(param_1 + 600),&local_a0,
                          local_90);
  }
  else {
    local_b0 = dVar5;
    local_a8 = dVar4;
    uVar8 = FUN_146a9def2(*(undefined4 *)(param_1 + 0x254),*(undefined4 *)(param_1 + 600),&local_b0,
                          local_90);
  }
  *(uint *)(param_1 + 0x208) = uVar8;
  iVar11 = -1;
  if (uVar8 == 0xffffffff) goto LAB_146a9d83d;
  if (-1 < (int)uVar8) {
    lVar14 = (ulonglong)uVar8 + 1;
    cVar9 = DAT_14c96b1e1;
    do {
      if ((*(char *)(*(longlong *)
                      (*(longlong *)(*(longlong *)(param_1 + 0x1f8) + -8 + lVar14 * 8) + 0x10) +
                    0x39) != cVar9) &&
         (cVar7 = FUN_146a9b944(), cVar9 = DAT_14c96b1e1, cVar7 != '\0')) {
        lVar14 = (longlong)*(int *)(param_1 + 0x208);
        iVar12 = *(int *)(param_1 + 0x200);
        iVar10 = *(int *)(param_1 + 0x208) + 1;
        if (iVar10 < iVar12) goto LAB_146a9d7eb;
        goto LAB_146a9d826;
      }
      lVar13 = lVar14 + -1;
      bVar3 = 0 < lVar14;
      lVar14 = lVar13;
    } while (lVar13 != 0 && bVar3);
  }
  goto LAB_146a9d833;
  while (iVar10 = iVar10 + 1, iVar6 = iVar12, iVar12 != iVar10) {
LAB_146a9d7eb:
    lVar14 = lVar14 + 1;
    if ((*(char *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1f8) + lVar14 * 8) + 0x10)
                  + 0x39) != cVar9) &&
       (cVar7 = FUN_146a9b944(), iVar6 = iVar10, cVar9 = DAT_14c96b1e1, cVar7 != '\0')) break;
  }
  iVar10 = iVar6;
  iVar12 = *(int *)(param_1 + 0x200);
LAB_146a9d826:
  if (iVar10 < iVar12) {
    iVar11 = *(int *)(param_1 + 0x208);
    goto LAB_146a9d83d;
  }
LAB_146a9d833:
  *(undefined4 *)(param_1 + 0x208) = 0xffffffff;
LAB_146a9d83d:
  if (((iVar11 != iVar1) && (*(int *)(param_1 + 0x248) != 0)) &&
     (plVar2 = *(longlong **)(param_1 + 0x240), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x60))(plVar2,iVar11);
  }
  if (local_90[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a9d8b2 FUN_146a9d8b2 body=404 status=ok
// SIG undefined FUN_146a9d8b2(void)

undefined1 * FUN_146a9d8b2(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar4 = *(longlong *)(param_4 + 0x40);
  plVar5 = *(longlong **)(param_4 + 0x50);
  if (plVar5 == (longlong *)0x0) {
    if (lVar4 == DAT_14c966e98) {
      cVar3 = *(char *)(param_1 + 0x210);
      goto joined_r0x000146a9d9b7;
    }
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    if (lVar4 == DAT_14c966e98) {
      cVar3 = *(char *)(param_1 + 0x210);
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
joined_r0x000146a9d9b7:
      if (cVar3 != '\0') {
        if ((*(int *)(param_1 + 0x228) != 0) && (*(longlong **)(param_1 + 0x220) != (longlong *)0x0)
           ) {
          (**(code **)(**(longlong **)(param_1 + 0x220) + 0x60))();
        }
        *(undefined1 *)(param_1 + 0x210) = 0;
        local_f8[0] = 1;
        local_d8 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        memset(local_d0,0,0x88);
        local_48 = 0x20702;
        local_c0 = 0;
        uStack_b8 = 0;
        local_44 = 1;
        FUN_1403d4c6e(param_2,local_f8);
        FUN_14493db24(local_f8);
        goto LAB_146a9da14;
      }
    }
    else {
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
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_146a9da14:
  if ((local_40 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a9da48 FUN_146a9da48 body=972 status=ok
// SIG undefined FUN_146a9da48(void)

undefined1 * FUN_146a9da48(longlong param_1,undefined1 *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  undefined1 uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_108 [32];
  float local_e8;
  longlong local_e0;
  longlong *local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  longlong local_a8 [2];
  double local_98 [2];
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  fVar17 = 1.0 / (*(float *)(param_3 + 0x1c) * *(float *)(param_3 + 0x28) -
                 *(float *)(param_3 + 0x24) * *(float *)(param_3 + 0x20));
  fVar16 = *(float *)(param_3 + 0x1c) * fVar17;
  fVar15 = -*(float *)(param_3 + 0x24) * fVar17;
  fVar14 = -*(float *)(param_3 + 0x20) * fVar17;
  fVar17 = fVar17 * *(float *)(param_3 + 0x28);
  local_98[1] = (double)(fVar14 * *(float *)(param_4 + 0x20) + fVar16 * *(float *)(param_4 + 0x24) +
                        (-*(float *)(param_3 + 0x2c) * fVar14 - fVar16 * *(float *)(param_3 + 0x30))
                        );
  local_98[0] = (double)(fVar17 * *(float *)(param_4 + 0x20) + fVar15 * *(float *)(param_4 + 0x24) +
                        (-*(float *)(param_3 + 0x2c) * fVar17 - *(float *)(param_3 + 0x30) * fVar15)
                        );
  FUN_146a9be92();
  if (*(char *)(param_1 + 0x210) == '\x01') {
    uVar9 = 1;
    if ((((*(float *)(param_4 + 0x30) != 0.0) || (NAN(*(float *)(param_4 + 0x30)))) ||
        (*(float *)(param_4 + 0x34) != 0.0)) || (NAN(*(float *)(param_4 + 0x34)))) {
      local_e0 = param_1 + 0x1e0;
      uVar6 = (ulonglong)(*(int *)(param_1 + 0x214) != 0);
      local_88 = *(undefined8 *)(local_a8[0] + 0x18 + (longlong)*(int *)(param_1 + 0x208) * 0x14);
      local_e8 = (float)(local_98[uVar6] -
                        (double)(*(float *)(param_1 + 0x254) * -0.5 +
                                *(float *)((longlong)&local_88 + uVar6 * 4)));
      local_d8 = local_a8;
      FUN_146a9e54c(param_1,*(int *)(param_1 + 0x214),*(undefined4 *)(param_1 + 0x218));
    }
    goto LAB_146a9dbad;
  }
  iVar1 = *(int *)(param_1 + 0x208);
  if (*(int *)(param_1 + 0x214) == 0) {
    local_b8 = local_98[0];
    dStack_b0 = local_98[1];
    uVar5 = FUN_146a9de16(*(undefined4 *)(param_1 + 0x254),*(undefined4 *)(param_1 + 600),&local_b8,
                          local_a8);
  }
  else {
    local_c8 = local_98[0];
    dStack_c0 = local_98[1];
    uVar5 = FUN_146a9def2(*(undefined4 *)(param_1 + 0x254),*(undefined4 *)(param_1 + 600),&local_c8,
                          local_a8);
  }
  *(uint *)(param_1 + 0x208) = uVar5;
  iVar8 = -1;
  if (uVar5 != 0xffffffff) {
    if (-1 < (int)uVar5) {
      lVar10 = (ulonglong)uVar5 + 1;
      cVar7 = DAT_14c96b1e1;
      do {
        if ((*(char *)(*(longlong *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x1f8) + -8 + lVar10 * 8) + 0x10) +
                      0x39) != cVar7) &&
           (cVar4 = FUN_146a9b944(), cVar7 = DAT_14c96b1e1, cVar4 != '\0')) {
          lVar10 = (longlong)*(int *)(param_1 + 0x208);
          iVar13 = *(int *)(param_1 + 0x200);
          iVar11 = *(int *)(param_1 + 0x208) + 1;
          if (iVar11 < iVar13) goto LAB_146a9dd98;
          goto LAB_146a9ddd4;
        }
        lVar12 = lVar10 + -1;
        bVar2 = 0 < lVar10;
        lVar10 = lVar12;
      } while (lVar12 != 0 && bVar2);
    }
    goto LAB_146a9dde1;
  }
  goto LAB_146a9ddeb;
  while (iVar11 = iVar11 + 1, iVar3 = iVar13, iVar13 != iVar11) {
LAB_146a9dd98:
    lVar10 = lVar10 + 1;
    if ((*(char *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1f8) + lVar10 * 8) + 0x10)
                  + 0x39) != cVar7) &&
       (cVar4 = FUN_146a9b944(), iVar3 = iVar11, cVar7 = DAT_14c96b1e1, cVar4 != '\0')) break;
  }
  iVar11 = iVar3;
  iVar13 = *(int *)(param_1 + 0x200);
LAB_146a9ddd4:
  if (iVar11 < iVar13) {
    iVar8 = *(int *)(param_1 + 0x208);
  }
  else {
LAB_146a9dde1:
    *(undefined4 *)(param_1 + 0x208) = 0xffffffff;
  }
LAB_146a9ddeb:
  if (((iVar8 != iVar1) && (*(int *)(param_1 + 0x248) != 0)) &&
     (*(longlong **)(param_1 + 0x240) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x240) + 0x60))();
  }
  uVar9 = 0;
LAB_146a9dbad:
  *param_2 = uVar9;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146a9de16 FUN_146a9de16 body=220 status=ok
// SIG undefined FUN_146a9de16(void)

ulonglong FUN_146a9de16(float param_1,float param_2,double *param_3,undefined8 *param_4)

{
  float *pfVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (1 < (longlong)*(int *)(param_4 + 1)) {
    pfVar1 = (float *)*param_4;
    uVar2 = 0;
    do {
      fVar5 = *pfVar1 * 0.0 + pfVar1[1];
      fVar3 = *pfVar1 * pfVar1[3] + pfVar1[1];
      fVar4 = fVar3;
      if (fVar5 <= fVar3) {
        fVar4 = fVar5;
        fVar5 = fVar3;
      }
      if (((double)((((fVar5 - fVar4) + fVar4) - param_2 * 0.5) + param_1 * 0.5) < *param_3) &&
         (*param_3 < (double)((pfVar1[6] + param_2 * 0.5) - param_1 * 0.5))) {
        return uVar2 & 0xffffffff;
      }
      uVar2 = uVar2 + 1;
      pfVar1 = pfVar1 + 5;
    } while ((longlong)*(int *)(param_4 + 1) - 1U != uVar2);
  }
  return 0xffffffff;
}



// FUNCTION 146a9def2 FUN_146a9def2 body=221 status=ok
// SIG undefined FUN_146a9def2(void)

ulonglong FUN_146a9def2(float param_1,float param_2,longlong param_3,undefined8 *param_4)

{
  float *pfVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (1 < (longlong)*(int *)(param_4 + 1)) {
    pfVar1 = (float *)*param_4;
    uVar2 = 0;
    do {
      fVar5 = *pfVar1 * 0.0 + pfVar1[2];
      fVar3 = *pfVar1 * pfVar1[4] + pfVar1[2];
      fVar4 = fVar3;
      if (fVar5 <= fVar3) {
        fVar4 = fVar5;
        fVar5 = fVar3;
      }
      if (((double)((((fVar5 - fVar4) + fVar4) - param_2 * 0.5) + param_1 * 0.5) <
           *(double *)(param_3 + 8)) &&
         (*(double *)(param_3 + 8) < (double)((pfVar1[7] + param_2 * 0.5) - param_1 * 0.5))) {
        return uVar2 & 0xffffffff;
      }
      uVar2 = uVar2 + 1;
      pfVar1 = pfVar1 + 5;
    } while ((longlong)*(int *)(param_4 + 1) - 1U != uVar2);
  }
  return 0xffffffff;
}



// FUNCTION 146a9dfd0 FUN_146a9dfd0 body=413 status=ok
// SIG undefined FUN_146a9dfd0(void)

undefined1 *
FUN_146a9dfd0(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  float local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_58 [2];
  double local_48 [2];
  float local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(int *)(param_1 + 0x238) != 0) && (*(longlong **)(param_1 + 0x230) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x230) + 0x30))();
    if (cVar3 != '\0') {
      if (*(int *)(param_1 + 0x238) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x230);
      }
      (**(code **)(*plVar4 + 0x58))(plVar4,local_48,*(undefined4 *)(param_1 + 0x208));
      if ((local_48[0] == 0.0) && (!NAN(local_48[0]))) {
        if ((local_48[1] == 0.0) && (!NAN(local_48[1]))) goto LAB_146a9e059;
      }
      FUN_146a9be92(param_1,local_58,param_3);
      local_70 = param_1 + 0x1e0;
      lVar5 = (longlong)*(int *)(param_1 + 0x208);
      iVar2 = *(int *)(param_1 + 0x214);
      fVar1 = *(float *)(local_58[0] + lVar5 * 0x14);
      local_38[0] = fVar1 * *(float *)(local_58[0] + 0xc + lVar5 * 0x14);
      local_38[1] = *(float *)(local_58[0] + 0x10 + lVar5 * 0x14) * fVar1;
      local_78 = (float)(local_48[iVar2 != 0] - (double)local_38[iVar2 != 0]);
      local_68 = local_58;
      FUN_146a9e54c(param_1,iVar2,*(undefined4 *)(param_1 + 0x218));
      *param_2 = 1;
      param_2[0x20] = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      memset(param_2 + 0x28,0,0x88);
      *(undefined4 *)(param_2 + 0xb0) = 0x20702;
      param_2[0xb4] = 0;
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      goto LAB_146a9e06a;
    }
  }
LAB_146a9e059:
  FUN_14697d7de(param_1,param_2,param_3,param_4);
LAB_146a9e06a:
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a9e1b2 FUN_146a9e1b2 body=600 status=ok
// SIG undefined FUN_146a9e1b2(void)

undefined1 * FUN_146a9e1b2(longlong param_1,undefined1 *param_2,longlong param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_b8 [40];
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  longlong local_70 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0x210) == '\x01') {
    iVar4 = *(int *)(param_1 + 0x214);
    *param_2 = 1;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    if (iVar4 == 0) {
      *(undefined4 *)(param_2 + 0x38) = 3;
    }
    else {
      *(undefined4 *)(param_2 + 0x38) = 4;
    }
    goto LAB_146a9e217;
  }
  fVar8 = 1.0 / (*(float *)(param_3 + 0x1c) * *(float *)(param_3 + 0x28) -
                *(float *)(param_3 + 0x24) * *(float *)(param_3 + 0x20));
  fVar7 = *(float *)(param_3 + 0x1c) * fVar8;
  fVar6 = -*(float *)(param_3 + 0x24) * fVar8;
  fVar5 = -*(float *)(param_3 + 0x20) * fVar8;
  fVar8 = fVar8 * *(float *)(param_3 + 0x28);
  dVar1 = (double)(fVar5 * *(float *)(param_4 + 0x20) + fVar7 * *(float *)(param_4 + 0x24) +
                  (-*(float *)(param_3 + 0x2c) * fVar5 - fVar7 * *(float *)(param_3 + 0x30)));
  dVar2 = (double)(fVar8 * *(float *)(param_4 + 0x20) + fVar6 * *(float *)(param_4 + 0x24) +
                  (-*(float *)(param_3 + 0x2c) * fVar8 - *(float *)(param_3 + 0x30) * fVar6));
  FUN_146a9be92(param_1,local_70);
  if (*(int *)(param_1 + 0x214) == 0) {
    local_80 = dVar2;
    local_78 = dVar1;
    iVar4 = FUN_146a9de16(*(undefined4 *)(param_1 + 0x254),*(undefined4 *)(param_1 + 600),&local_80,
                          local_70);
  }
  else {
    local_90 = dVar2;
    local_88 = dVar1;
    iVar4 = FUN_146a9def2(*(undefined4 *)(param_1 + 0x254),*(undefined4 *)(param_1 + 600),&local_90,
                          local_70);
  }
  if (iVar4 == -1) {
LAB_146a9e397:
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined4 *)(param_2 + 0x38) = 1;
  }
  else {
    cVar3 = FUN_146a9b944(*(undefined8 *)(*(longlong *)(param_1 + 0x1f8) + (longlong)iVar4 * 8));
    if (cVar3 == '\0') goto LAB_146a9e397;
    iVar4 = *(int *)(param_1 + 0x214);
    *param_2 = 1;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    if (iVar4 == 0) {
      *(undefined4 *)(param_2 + 0x38) = 3;
    }
    else {
      *(undefined4 *)(param_2 + 0x38) = 4;
    }
  }
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
LAB_146a9e217:
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a9e40c FUN_146a9e40c body=7 status=ok
// SIG undefined FUN_146a9e40c(void)

void FUN_146a9e40c(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x214) = param_2;
  return;
}



// FUNCTION 146a9e414 FUN_146a9e414 body=7 status=ok
// SIG undefined FUN_146a9e414(void)

undefined4 FUN_146a9e414(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x214);
}



// FUNCTION 146a9e41c FUN_146a9e41c body=174 status=ok
// SIG undefined FUN_146a9e41c(void)

undefined8 * FUN_146a9e41c(undefined8 *param_1)

{
  FUN_140a560dc();
  *param_1 = &PTR_FUN_149f05750;
  param_1[0x3c] = &PTR__purecall_149ef0700;
  param_1[0x3d] = param_1;
  FUN_1446ddc76(param_1 + 0x3e,"Children",1);
  param_1[0x3c] = &PTR_LAB_149f173b0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x4c] = 0;
  return param_1;
}



// FUNCTION 146a9e4ca FUN_146a9e4ca body=130 status=ok
// SIG undefined FUN_146a9e4ca(void)

void FUN_146a9e4ca(uint param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  if ((int)(param_1 + 1) < *(int *)(param_2 + 0x20)) {
    lVar4 = (longlong)(int)param_1;
    iVar3 = ~param_1 + *(int *)(param_2 + 0x20);
    do {
      lVar4 = lVar4 + 1;
      if ((*(char *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x18) + lVar4 * 8) + 0x10)
                    + 0x39) != DAT_14c96b1e1) && (cVar2 = FUN_146a9b944(), cVar2 != '\0')) {
        iVar1 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
          FUN_146ac5276(param_3,iVar1);
        }
        *(int *)(*param_3 + (longlong)iVar1 * 4) = (int)lVar4;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}



// FUNCTION 146a9e54c FUN_146a9e54c body=1461 status=ok
// SIG undefined FUN_146a9e54c(void)

void FUN_146a9e54c(longlong param_1,int param_2,uint param_3,uint param_4,float param_5,
                  longlong param_6,longlong *param_7)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  float *pfVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_128 [36];
  uint local_104;
  ulonglong local_100;
  ulonglong local_f8;
  float local_f0 [2];
  longlong *local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  iVar7 = *(int *)(param_6 + 0x20);
  local_d8 = 0;
  uStack_d0 = 0;
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  uVar19 = (ulonglong)param_4;
  if (iVar7 != 0) {
    FUN_146ac52cc(&local_d8);
  }
  local_104 = param_3;
  if (param_3 == 0) {
    uVar6 = *(uint *)(param_1 + 0x200);
    uVar15 = param_4 + 1;
    uVar14 = uVar15;
    uVar21 = param_4;
    if ((int)uVar15 < (int)uVar6) {
      lVar12 = (longlong)(int)uVar15;
      local_100 = uVar19;
      cVar5 = DAT_14c96b1e1;
      do {
        if (*(char *)(*(longlong *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x1f8) + lVar12 * 8) + 0x10) + 0x39)
            == cVar5) {
          uVar14 = (uint)lVar12;
        }
        else {
          cVar4 = FUN_146a9b944();
          uVar19 = local_100;
          uVar14 = uVar15;
          uVar21 = param_4;
          cVar5 = DAT_14c96b1e1;
          if (cVar4 != '\0') break;
        }
        param_4 = uVar14;
        lVar12 = lVar12 + 1;
        uVar15 = uVar15 + 1;
        uVar19 = local_100;
        uVar14 = uVar6;
        uVar21 = uVar6 - 1;
      } while (uVar6 != uVar15);
    }
    uVar17 = uStack_d0;
    if ((-2 < (int)uVar21) && ((int)uVar14 < *(int *)(param_6 + 0x20))) {
      lVar12 = (longlong)(int)uStack_d0;
      uVar6 = (int)uStack_d0 + 1;
      uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar6);
      if (uStack_d0._4_4_ < uVar6) {
        FUN_146ac5276(&local_d8,uVar17 & 0xffffffff);
      }
      *(uint *)(local_d8 + lVar12 * 4) = uVar14;
    }
  }
  else if (param_3 < 3) {
    FUN_146a9e4ca(uVar19,param_6,&local_d8);
  }
  iVar7 = (int)uStack_d0;
  uVar17 = (ulonglong)(int)uStack_d0;
  if (0 < (longlong)uVar17) {
    local_f8 = (ulonglong)(param_2 != 0);
    local_e8 = (longlong *)0x0;
    uStack_e0 = 0;
    local_100 = uVar19;
    FUN_142905898(&local_e8,uStack_d0 & 0xffffffff);
    lVar12 = local_d8;
    uVar19 = 0;
    do {
      lVar8 = (longlong)*(int *)(lVar12 + uVar19 * 4);
      lVar1 = *param_7;
      fVar25 = *(float *)(lVar1 + lVar8 * 0x14);
      lVar2 = *(longlong *)(*(longlong *)(param_6 + 0x18) + lVar8 * 8);
      local_f0[0] = fVar25 * *(float *)(lVar1 + 0xc + lVar8 * 0x14);
      local_f0[1] = *(float *)(lVar1 + 0x10 + lVar8 * 0x14) * fVar25;
      fVar25 = local_f0[local_f8];
      fVar22 = (float)FUN_146a9c504(lVar2);
      uVar20 = uStack_e0;
      lVar18 = (longlong)(int)uStack_e0;
      uVar6 = (int)uStack_e0 + 1;
      uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar6);
      if (uStack_e0._4_4_ < uVar6) {
        FUN_142905a6c(&local_e8,uVar20 & 0xffffffff);
      }
      plVar11 = local_e8;
      if (fVar22 <= fVar25) {
        fVar22 = fVar25;
      }
      local_e8[lVar18 * 3] = lVar2;
      local_e8[lVar18 * 3 + 1] = lVar8 * 0x14 + lVar1;
      *(float *)(local_e8 + lVar18 * 3 + 2) = fVar22;
      uVar19 = uVar19 + 1;
    } while (uVar17 != uVar19);
    if (-1 < (int)local_100) {
      lVar12 = (local_100 & 0xffffffff) * 0x14 + 0x10;
      uVar19 = local_100 & 0xffffffff;
      cVar5 = DAT_14c96b1e1;
      do {
        if ((*(char *)(*(longlong *)
                        (*(longlong *)(*(longlong *)(param_6 + 0x18) + uVar19 * 8) + 0x10) + 0x39)
             != cVar5) && (cVar4 = FUN_146a9b944(), cVar5 = DAT_14c96b1e1, cVar4 != '\0')) {
          if ((int)uVar19 < *(int *)(param_6 + 0x20)) {
            lVar1 = *(longlong *)(*(longlong *)(param_6 + 0x18) + uVar19 * 8);
            lVar2 = *param_7;
            fVar25 = *(float *)(lVar2 + -0x10 + lVar12);
            local_f0[0] = fVar25 * *(float *)(lVar2 + -4 + lVar12);
            local_f0[1] = *(float *)(lVar2 + lVar12) * fVar25;
            fVar25 = local_f0[local_f8];
            fVar22 = (float)FUN_146a9c504(lVar1);
            if (fVar22 <= param_5 + fVar25) {
              fVar22 = param_5 + fVar25;
            }
            fVar22 = fVar22 - fVar25;
            fVar27 = fVar22;
            if ((fVar22 != 0.0) || (NAN(fVar22))) {
              uVar20 = 0;
              uVar19 = (ulonglong)(iVar7 - 1);
              if (local_104 != 1) {
                uVar19 = uVar20;
              }
              do {
                fVar26 = fVar27;
                if (local_104 != 1) {
                  fVar26 = fVar27 / (float)iVar7;
                }
                fVar27 = 0.0;
                pfVar13 = (float *)(plVar11 + uVar19 * 3 + 2);
                uVar16 = uVar19;
                do {
                  fVar28 = *pfVar13 - fVar26;
                  fVar23 = (float)FUN_146a9c504(*(undefined8 *)(pfVar13 + -4));
                  if (fVar23 <= fVar28) {
                    fVar23 = fVar28;
                  }
                  *pfVar13 = fVar23;
                  fVar27 = fVar27 + (fVar23 - fVar28);
                  uVar16 = uVar16 + 1;
                  pfVar13 = pfVar13 + 6;
                } while (uVar16 < uVar17);
                uVar6 = (int)uVar20 + 1;
                uVar20 = (ulonglong)uVar6;
              } while (((int)uVar6 < iVar7) && ((fVar27 != 0.0 || (NAN(fVar27)))));
            }
            fVar25 = fVar25 + (fVar22 - fVar27);
            fVar22 = (float)FUN_146a9c504(lVar1);
            if ((*(int *)(lVar1 + 0x30) == 0) ||
               ((*(longlong **)(lVar1 + 0x28) == (longlong *)0x0 ||
                (cVar5 = (**(code **)(**(longlong **)(lVar1 + 0x28) + 0x30))(), cVar5 == '\0')))) {
              iVar7 = *(int *)(lVar1 + 0x20);
            }
            else {
              if (*(int *)(lVar1 + 0x30) == 0) {
                plVar10 = (longlong *)0x0;
              }
              else {
                plVar10 = *(longlong **)(lVar1 + 0x28);
              }
              iVar7 = (**(code **)(*plVar10 + 0x58))();
              *(int *)(lVar1 + 0x20) = iVar7;
            }
            if (fVar22 <= fVar25) {
              fVar22 = fVar25;
            }
            fVar25 = 0.0;
            plVar10 = plVar11;
            uVar19 = uVar17;
            fVar27 = 0.0;
            if (iVar7 == 1) {
              if (((*(int *)(lVar1 + 0x48) != 0) &&
                  (*(longlong **)(lVar1 + 0x40) != (longlong *)0x0)) &&
                 (cVar5 = (**(code **)(**(longlong **)(lVar1 + 0x40) + 0x30))(), cVar5 != '\0')) {
                if (*(int *)(lVar1 + 0x48) == 0) {
                  plVar9 = (longlong *)0x0;
                }
                else {
                  plVar9 = *(longlong **)(lVar1 + 0x40);
                }
                uVar24 = (**(code **)(*plVar9 + 0x58))();
                *(undefined4 *)(lVar1 + 0x38) = uVar24;
              }
              fVar25 = *(float *)(lVar1 + 0x38);
              fVar27 = fVar22;
            }
            do {
              lVar12 = *plVar10;
              if (((*(int *)(lVar12 + 0x30) == 0) ||
                  (*(longlong **)(lVar12 + 0x28) == (longlong *)0x0)) ||
                 (cVar5 = (**(code **)(**(longlong **)(lVar12 + 0x28) + 0x30))(), cVar5 == '\0')) {
                iVar7 = *(int *)(lVar12 + 0x20);
              }
              else {
                if (*(int *)(lVar12 + 0x30) == 0) {
                  plVar9 = (longlong *)0x0;
                }
                else {
                  plVar9 = *(longlong **)(lVar12 + 0x28);
                }
                iVar7 = (**(code **)(*plVar9 + 0x58))();
                *(int *)(lVar12 + 0x20) = iVar7;
              }
              if (iVar7 == 1) {
                fVar27 = fVar27 + *(float *)(plVar10 + 2);
                lVar12 = *plVar10;
                if (((*(int *)(lVar12 + 0x48) != 0) &&
                    (*(longlong **)(lVar12 + 0x40) != (longlong *)0x0)) &&
                   (cVar5 = (**(code **)(**(longlong **)(lVar12 + 0x40) + 0x30))(), cVar5 != '\0'))
                {
                  if (*(int *)(lVar12 + 0x48) == 0) {
                    plVar9 = (longlong *)0x0;
                  }
                  else {
                    plVar9 = *(longlong **)(lVar12 + 0x40);
                  }
                  uVar24 = (**(code **)(*plVar9 + 0x58))();
                  *(undefined4 *)(lVar12 + 0x38) = uVar24;
                }
                fVar25 = fVar25 + *(float *)(lVar12 + 0x38);
              }
              uVar19 = uVar19 - 1;
              plVar10 = plVar10 + 3;
            } while (uVar19 != 0);
            FUN_1429035f4(lVar1,fVar25,fVar22,fVar27);
            plVar11 = plVar11 + 2;
            do {
              FUN_1429035f4(plVar11[-2],fVar25,(int)*plVar11,fVar27);
              plVar11 = plVar11 + 3;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
          break;
        }
        lVar12 = lVar12 + -0x14;
        bVar3 = 0 < (longlong)uVar19;
        uVar19 = uVar19 - 1;
      } while (bVar3);
    }
    FUN_14290379e(&local_e8);
  }
  FUN_142905834(&local_d8);
  if ((local_c0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a9eb04 FUN_146a9eb04 body=120 status=ok
// SIG undefined FUN_146a9eb04(void)

undefined8 * FUN_146a9eb04(undefined8 *param_1)

{
  FUN_140a560dc();
  *param_1 = &PTR_FUN_149f16100;
  param_1[0x3c] = &PTR__purecall_149ef0700;
  param_1[0x3d] = param_1;
  FUN_1446ddc76(param_1 + 0x3e,"Children",1);
  param_1[0x3c] = &PTR_LAB_149f17400;
  param_1[0x44] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  return param_1;
}



// FUNCTION 146a9eb7c FUN_146a9eb7c body=198 status=ok
// SIG undefined FUN_146a9eb7c(void)

void FUN_146a9eb7c(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145ff5476(param_1 + 0x208,param_1,param_2 + 0x1b8);
  *(undefined8 *)(param_1 + 0x218) = 0;
  FUN_146a8d8ac(param_1 + 0x220,param_1,param_2 + 0x1e0);
  FUN_146a8d8ac(param_1 + 0x224,param_1,param_2 + 0x1f8);
  local_38 = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined8 *)(param_2 + 0x1a8) = 0;
  local_30 = *(undefined4 *)(param_2 + 0x1b0);
  local_2c = *(undefined4 *)(param_2 + 0x1b4);
  *(undefined8 *)(param_2 + 0x1b0) = 0;
  FUN_146a9ec44(param_1 + 0x1e0);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a9ec44 FUN_146a9ec44 body=136 status=ok
// SIG undefined FUN_146a9ec44(void)

void FUN_146a9ec44(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = (int)param_2[1];
  iVar2 = *(int *)(param_1 + 0x20) + iVar1;
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (*(int *)(param_1 + 0x24) < iVar2) {
    FUN_146ac538a(param_1 + 0x18);
    iVar1 = (int)param_2[1];
  }
  lVar4 = *param_2;
  uVar3 = 0;
  if (iVar1 != 0) {
    lVar5 = (longlong)iVar1 * 0x28;
    do {
      FUN_146ac5300(param_1,lVar4);
      lVar4 = lVar4 + 0x28;
      lVar5 = lVar5 + -0x28;
    } while (lVar5 != 0);
    uVar3 = (undefined4)param_2[1];
    lVar4 = *param_2;
  }
  FUN_146ac5506(lVar4,uVar3);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146a9ecce FUN_146a9ecce body=2169 status=ok
// SIG undefined FUN_146a9ecce(void)

void FUN_146a9ecce(longlong param_1,float *param_2,byte *param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  longlong lVar6;
  byte *pbVar7;
  int iVar8;
  byte bVar9;
  float *pfVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong *plVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_1f8 [32];
  undefined8 *local_1d8;
  undefined4 *local_1d0;
  float *local_1c8;
  float local_1c0;
  float local_1bc;
  byte *local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  byte *local_1a0;
  float *local_198;
  double local_190;
  double local_188;
  float local_180;
  float fStack_17c;
  undefined4 local_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined2 local_150;
  undefined1 uStack_14e;
  undefined5 uStack_14d;
  float local_148;
  float local_144;
  float local_140;
  undefined8 local_13c;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  byte local_11c;
  undefined2 local_11b;
  undefined1 local_119;
  undefined8 local_118;
  undefined8 uStack_110;
  ulonglong local_108;
  char local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  iVar8 = *(int *)(param_1 + 0x200);
  local_1b8 = param_3;
  local_1b0 = param_1;
  if (0 < iVar8) {
    local_1c0 = param_2[1] / (float)*(int *)(param_1 + 0x21c);
    local_188 = (double)local_1c0;
    local_1bc = *param_2 / (float)*(int *)(param_1 + 0x218);
    local_190 = (double)local_1bc;
    local_198 = param_2 + 7;
    local_1a0 = param_3 + 8;
    lVar12 = 0;
    do {
      fVar24 = 0.0;
      lVar16 = *(longlong *)(*(longlong *)(local_1b0 + 0x1f8) + lVar12 * 8);
      lVar6 = *(longlong *)(lVar16 + 0x10);
      bVar5 = *(byte *)(lVar6 + 0x39);
      if ((*local_1b8 & bVar5) != 0) {
        fVar18 = *(float *)(local_1b0 + 0x208);
        iVar8 = *(int *)(lVar16 + 0x20);
        fVar19 = local_1bc - (fVar18 + *(float *)(local_1b0 + 0x210));
        if (iVar8 == 0) {
LAB_146a9ee75:
          local_180 = fVar19;
          if (fVar19 <= 0.0) {
            local_180 = fVar24;
          }
        }
        else {
          pfVar10 = (float *)(lVar6 + 0x168);
          if ((*(byte *)(lVar6 + 0x31) & 0x20) == 0) {
            pfVar10 = (float *)&DAT_14c84635c;
          }
          local_180 = *pfVar10;
          if (fVar19 <= *pfVar10) {
            local_180 = fVar19;
          }
          if (local_180 <= 0.0) {
            local_180 = fVar24;
          }
          if (iVar8 != 1) {
            if (iVar8 == 3) {
              fVar18 = local_1bc - local_180;
            }
            else {
              if (iVar8 != 2) goto LAB_146a9ee75;
              fVar18 = fVar18 + (local_1bc - local_180) * 0.5;
            }
            fVar18 = fVar18 - *(float *)(local_1b0 + 0x210);
          }
        }
        fVar19 = *(float *)(local_1b0 + 0x20c);
        iVar8 = *(int *)(lVar16 + 0x24);
        fVar20 = local_1c0 - (fVar19 + *(float *)(local_1b0 + 0x214));
        if (iVar8 == 0) {
LAB_146a9eefb:
          fStack_17c = fVar20;
          if (fVar20 <= 0.0) {
            fStack_17c = 0.0;
          }
        }
        else {
          puVar11 = (undefined8 *)(lVar6 + 0x168);
          if ((*(byte *)(lVar6 + 0x31) & 0x20) == 0) {
            puVar11 = &DAT_14c84635c;
          }
          fStack_17c = *(float *)((longlong)puVar11 + 4);
          if (fVar20 <= *(float *)((longlong)puVar11 + 4)) {
            fStack_17c = fVar20;
          }
          if (fStack_17c <= 0.0) {
            fStack_17c = fVar24;
          }
          if (iVar8 != 1) {
            if (iVar8 == 3) {
              fVar19 = local_1c0 - fStack_17c;
            }
            else {
              if (iVar8 != 2) goto LAB_146a9eefb;
              fVar19 = fVar19 + (local_1c0 - fStack_17c) * 0.5;
            }
            fVar19 = fVar19 - *(float *)(local_1b0 + 0x214);
          }
        }
        fVar24 = (float)((double)fVar19 + (double)*(int *)(lVar16 + 0x2c) * local_188);
        fVar18 = (float)((double)fVar18 + (double)*(int *)(lVar16 + 0x28) * local_190);
        local_174 = 0x3f800000;
        uVar14 = CONCAT44(fVar24,fVar18);
        local_100 = *(char *)(lVar6 + 0x198);
        local_170 = uVar14;
        if (DAT_14c96b1e0 == '\0') {
          if (local_100 == '\0') goto LAB_146a9ef8d;
          local_108 = *(ulonglong *)(lVar6 + 400);
          local_118 = *(undefined8 *)(lVar6 + 0x180);
          uStack_110 = *(undefined8 *)(lVar6 + 0x188);
LAB_146a9f28a:
          fVar24 = (float)*(double *)(*(longlong *)(lVar16 + 0x10) + 0x170);
          if (DAT_14c96b1e0 != '\0') {
            fVar24 = (0.5 - fVar24) + 0.5;
          }
          local_168 = CONCAT44((float)*(double *)(*(longlong *)(lVar16 + 0x10) + 0x178),fVar24);
          local_158 = *(undefined8 *)(param_2 + 3);
          local_15c = param_2[2];
          local_1c8 = local_198;
          local_1d0 = &local_15c;
          local_1d8 = &local_168;
          FUN_146978c22(&local_150,&local_180,&local_174,&local_118);
          bVar9 = local_11c;
          fVar22 = local_120;
          fVar26 = local_124;
          fVar21 = local_128;
          fVar18 = local_12c;
          fVar23 = local_130;
          fVar20 = local_134;
          uVar14 = local_13c;
          fVar25 = local_140;
          fVar24 = local_144;
          fVar19 = local_148;
          uVar13 = *(undefined8 *)(lVar16 + 0x10);
          plVar17 = *(longlong **)(lVar16 + 0x18);
          if (plVar17 == (longlong *)0x0) {
            uVar15 = CONCAT53(uStack_14d,CONCAT12(uStack_14e,local_150));
            local_15c._0_3_ = CONCAT12(local_119,local_11b);
          }
          else {
            LOCK();
            *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
            UNLOCK();
            uVar15 = CONCAT53(uStack_14d,CONCAT12(uStack_14e,local_150));
            local_15c._0_3_ = CONCAT12(local_119,local_11b);
            LOCK();
            *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
            UNLOCK();
            LOCK();
            plVar1 = plVar17 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              local_1a8 = uVar13;
              (**(code **)*plVar17)(plVar17);
              LOCK();
              piVar2 = (int *)((longlong)plVar17 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              uVar13 = local_1a8;
              if (*piVar2 == 0) {
                (**(code **)(*plVar17 + 0x10))(plVar17);
                uVar13 = local_1a8;
              }
            }
          }
        }
        else {
          if (local_100 != '\0') {
            local_118 = *(undefined8 *)(lVar6 + 0x180);
            uStack_110 = *(undefined8 *)(lVar6 + 0x188);
            local_108 = *(ulonglong *)(lVar6 + 400) ^ 0x80000000;
            goto LAB_146a9f28a;
          }
LAB_146a9ef8d:
          bVar9 = *(byte *)(param_2 + 0xd);
          fVar19 = param_2[2];
          fVar20 = param_2[7];
          fVar23 = param_2[8];
          fVar3 = param_2[10];
          fVar4 = param_2[9];
          fVar22 = fVar18 * fVar23 + fVar3 * fVar24 + param_2[0xc];
          fVar26 = fVar18 * fVar20 + fVar4 * fVar24 + param_2[0xb];
          fVar25 = fVar24 * fVar19 + param_2[4];
          fVar24 = fVar19 * fVar18 + param_2[3];
          uVar15 = CONCAT44(fStack_17c,local_180);
          uVar13 = *(undefined8 *)(lVar16 + 0x10);
          plVar17 = *(longlong **)(lVar16 + 0x18);
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
            UNLOCK();
            local_15c = (float)CONCAT22(CONCAT11(local_15c._3_1_,uStack_14e),local_150);
            LOCK();
            *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
            UNLOCK();
            LOCK();
            plVar1 = plVar17 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar17)(plVar17);
              LOCK();
              piVar2 = (int *)((longlong)plVar17 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar17 + 0x10))(plVar17);
              }
            }
          }
          bVar9 = bVar9 & 1;
          fVar21 = fVar23 * 0.0 + fVar3;
          fVar18 = fVar20 * 0.0 + fVar4;
          fVar23 = fVar3 * 0.0 + fVar23;
          fVar20 = fVar4 * 0.0 + fVar20;
        }
        if ((*local_1b8 & bVar5) == 0) {
          if (plVar17 != (longlong *)0x0) goto LAB_146a9f1c0;
        }
        else {
          iVar8 = *(int *)(local_1b8 + 0x130);
          lVar16 = (longlong)iVar8;
          *(uint *)(local_1b8 + 0x130) = iVar8 + 1U;
          if (*(uint *)(local_1b8 + 0x134) < iVar8 + 1U) {
            local_1a8 = CONCAT71(local_1a8._1_7_,bVar9);
            FUN_14022ed06(local_1a0,iVar8);
            bVar9 = (byte)local_1a8;
          }
          pbVar7 = *(byte **)(local_1b8 + 0x128);
          if (*(byte **)(local_1b8 + 0x128) == (byte *)0x0) {
            pbVar7 = local_1a0;
          }
          *(undefined8 *)(pbVar7 + lVar16 * 0x48) = uVar15;
          *(float *)(pbVar7 + lVar16 * 0x48 + 8) = fVar19;
          *(float *)(pbVar7 + lVar16 * 0x48 + 0xc) = fVar24;
          *(float *)(pbVar7 + lVar16 * 0x48 + 0x10) = fVar25;
          *(undefined8 *)(pbVar7 + lVar16 * 0x48 + 0x14) = uVar14;
          *(float *)(pbVar7 + lVar16 * 0x48 + 0x1c) = fVar20;
          *(float *)(pbVar7 + lVar16 * 0x48 + 0x20) = fVar23;
          *(float *)(pbVar7 + lVar16 * 0x48 + 0x24) = fVar18;
          *(float *)(pbVar7 + lVar16 * 0x48 + 0x28) = fVar21;
          *(float *)(pbVar7 + lVar16 * 0x48 + 0x2c) = fVar26;
          *(float *)(pbVar7 + lVar16 * 0x48 + 0x30) = fVar22;
          pbVar7[lVar16 * 0x48 + 0x34] = bVar9;
          *(undefined2 *)(pbVar7 + lVar16 * 0x48 + 0x35) = (undefined2)local_15c;
          pbVar7[lVar16 * 0x48 + 0x37] = local_15c._2_1_;
          *(undefined8 *)(pbVar7 + lVar16 * 0x48 + 0x38) = uVar13;
          *(longlong **)(pbVar7 + lVar16 * 0x48 + 0x40) = plVar17;
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
            UNLOCK();
LAB_146a9f1c0:
            LOCK();
            plVar1 = plVar17 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar17)(plVar17);
              LOCK();
              piVar2 = (int *)((longlong)plVar17 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar17 + 0x10))(plVar17);
              }
            }
          }
        }
        iVar8 = *(int *)(local_1b0 + 0x200);
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < iVar8);
  }
  if ((local_f0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146a9f54c FUN_146a9f54c body=328 status=ok
// SIG undefined FUN_146a9f54c(void)

void FUN_146a9f54c(longlong param_1,double *param_2)

{
  longlong lVar1;
  char cVar2;
  float *pfVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  
  dVar8 = DAT_14c8463f8;
  dVar9 = DAT_14c8463f0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  cVar2 = DAT_14c96b1e1;
  if ((longlong)*(int *)(param_1 + 0x200) < 1) {
    dVar10 = 0.0;
    dVar11 = 0.0;
  }
  else {
    iVar6 = 0;
    iVar7 = 0;
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1f8) + lVar5 * 8);
      if (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x39) != cVar2) {
        iVar4 = *(int *)(lVar1 + 0x28) + 1;
        if (iVar7 <= iVar4) {
          iVar7 = iVar4;
        }
        *(int *)(param_1 + 0x218) = iVar7;
        iVar4 = *(int *)(lVar1 + 0x2c) + 1;
        if (iVar6 <= iVar4) {
          iVar6 = iVar4;
        }
        *(int *)(param_1 + 0x21c) = iVar6;
        pfVar3 = (float *)&DAT_14c84635c;
        if ((*(byte *)(*(longlong *)(lVar1 + 0x10) + 0x31) & 0x20) != 0) {
          pfVar3 = (float *)(*(longlong *)(lVar1 + 0x10) + 0x168);
        }
        fVar12 = pfVar3[1] + *(float *)(param_1 + 0x20c) + *(float *)(param_1 + 0x214);
        if (fVar12 <= *(float *)(param_1 + 0x224)) {
          fVar12 = *(float *)(param_1 + 0x224);
        }
        fVar13 = *pfVar3 + *(float *)(param_1 + 0x208) + *(float *)(param_1 + 0x210);
        if (fVar13 <= *(float *)(param_1 + 0x220)) {
          fVar13 = *(float *)(param_1 + 0x220);
        }
        if (dVar9 <= (double)fVar13) {
          dVar9 = (double)fVar13;
        }
        if (dVar8 <= (double)fVar12) {
          dVar8 = (double)fVar12;
        }
      }
      lVar5 = lVar5 + 1;
    } while (*(int *)(param_1 + 0x200) != lVar5);
    dVar11 = (double)iVar6;
    dVar10 = (double)iVar7;
  }
  *param_2 = dVar10 * dVar9;
  param_2[1] = dVar11 * dVar8;
  return;
}



// FUNCTION 146a9f69c FUN_146a9f69c body=43 status=ok
// SIG undefined FUN_146a9f69c(void)

void FUN_146a9f69c(longlong param_1,longlong param_2)

{
  FUN_145ab400a(param_1 + 0x208,param_1,param_2);
  FUN_1449db362(param_2 + 0x18);
  return;
}



// FUNCTION 146a9f6c8 FUN_146a9f6c8 body=43 status=ok
// SIG undefined FUN_146a9f6c8(void)

void FUN_146a9f6c8(longlong param_1,longlong param_2)

{
  FUN_146a9f6f4(param_1 + 0x220,param_1,param_2);
  FUN_1449db362(param_2 + 8);
  return;
}



// FUNCTION 146a9f6f4 FUN_146a9f6f4 body=409 status=ok
// SIG undefined FUN_146a9f6f4(void)

void FUN_146a9f6f4(float *param_1,undefined8 param_2,float *param_3)

{
  char cVar1;
  float fVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  float local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_3 + 2) != (longlong *)0x0 && param_3[4] != 0.0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
    if (cVar1 != '\0') {
      *(undefined1 *)(param_3 + 1) = 0;
      if (*(longlong **)(param_3 + 2) == (longlong *)0x0 || param_3[4] == 0.0) {
LAB_146a9f86d:
        local_48 = CONCAT44(local_48._4_4_,*param_3);
        local_38 = 0;
      }
      else {
        cVar1 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
        if (cVar1 == '\0') goto LAB_146a9f86d;
        local_48 = *(undefined8 *)(param_3 + 2);
        param_3[2] = 0.0;
        param_3[3] = 0.0;
        local_40 = param_3[4];
        param_3[4] = 0.0;
        local_38 = 1;
      }
      FUN_146ac56d4(param_1,param_2,&local_48);
      (*(code *)(&PTR_caseD_2_149ef0840)[local_38])(&local_48);
      goto LAB_146a9f803;
    }
  }
  if (*(char *)(param_3 + 1) != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  *(undefined1 *)(param_3 + 1) = 0;
  if (*(longlong **)(param_3 + 2) == (longlong *)0x0 || param_3[4] == 0.0) {
LAB_146a9f7b8:
    fVar2 = *param_3;
    local_48 = CONCAT44(local_48._4_4_,fVar2);
    local_38 = 0;
    lVar3 = 0;
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
    if (cVar1 == '\0') goto LAB_146a9f7b8;
    local_48 = *(undefined8 *)(param_3 + 2);
    param_3[2] = 0.0;
    param_3[3] = 0.0;
    local_40 = param_3[4];
    param_3[4] = 0.0;
    local_38 = 1;
    fVar2 = (float)local_48;
    lVar3 = 1;
  }
  FUN_1400b73c8(param_2,param_1);
  if ((*param_1 != fVar2) || (NAN(*param_1) || NAN(fVar2))) {
    *param_1 = fVar2;
    FUN_14094e0ca(param_2,param_1,0,1);
  }
  (*(code *)(&PTR_caseD_2_149ef0840)[lVar3])(&local_48);
LAB_146a9f803:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a9f8a6 FUN_146a9f8a6 body=43 status=ok
// SIG undefined FUN_146a9f8a6(void)

void FUN_146a9f8a6(longlong param_1,longlong param_2)

{
  FUN_146a9f6f4(param_1 + 0x224,param_1,param_2);
  FUN_1449db362(param_2 + 8);
  return;
}



// FUNCTION 146a9f8d2 FUN_146a9f8d2 body=160 status=ok
// SIG undefined FUN_146a9f8d2(void)

undefined8 *
FUN_146a9f8d2(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar3 = &PTR_FUN_149edb640;
  puVar3[1] = 0;
  puVar3[2] = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  puVar3[3] = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar3[4] = 0;
  *puVar3 = &PTR_FUN_149f19cf8;
  *(undefined4 *)(puVar3 + 5) = param_3;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = param_4;
  *param_2 = puVar3;
  *(undefined1 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_2 + 0x24) = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[5] = param_1 + 0x1e0;
  *(undefined4 *)(param_2 + 6) = 0xffffffff;
  param_2[8] = 0;
  param_2[10] = 0;
  return param_2;
}



// FUNCTION 146a9f972 FUN_146a9f972 body=102 status=ok
// SIG undefined FUN_146a9f972(void)

ulonglong FUN_146a9f972(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 unaff_RSI;
  undefined7 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)*(int *)(param_1 + 0x200);
  if ((longlong)uVar4 < 1) {
LAB_146a9f9bd:
    uVar4 = 0;
  }
  else {
    uVar3 = (undefined7)((ulonglong)unaff_RSI >> 8);
    if (*param_2 == *(longlong *)(**(longlong **)(param_1 + 0x1f8) + 0x10)) {
      uVar4 = CONCAT71(uVar3,1);
    }
    else {
      uVar2 = 0;
      do {
        if (uVar4 - 1 == uVar2) goto LAB_146a9f9bd;
        lVar1 = uVar2 + 1;
        uVar2 = uVar2 + 1;
      } while (*param_2 != *(longlong *)((*(longlong **)(param_1 + 0x1f8))[lVar1] + 0x10));
      uVar4 = CONCAT71(uVar3,uVar2 < uVar4);
    }
    FUN_146ac5814(param_1 + 0x1f8);
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 146a9f9d8 FUN_146a9f9d8 body=285 status=ok
// SIG undefined FUN_146a9f9d8(void)

undefined8 * FUN_146a9f9d8(undefined8 *param_1)

{
  FUN_140a560dc();
  *param_1 = &PTR_FUN_149f16460;
  param_1[0x3c] = &PTR__purecall_149ef0700;
  param_1[0x3d] = param_1;
  FUN_1446ddc76(param_1 + 0x3e,"Children",1);
  param_1[0x3c] = &PTR_LAB_149f17450;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  FUN_140a5808e(param_1 + 0x41,param_1);
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  FUN_140a5808e((longlong)param_1 + 0x224,param_1);
  *(undefined4 *)(param_1 + 0x45) = 0;
  FUN_140a5808e(param_1 + 0x45,param_1);
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0;
  FUN_140a5808e((longlong)param_1 + 0x22c,param_1);
  *(undefined4 *)(param_1 + 0x46) = 0x7f7fffff;
  FUN_140a5808e(param_1 + 0x46,param_1);
  *(undefined4 *)((longlong)param_1 + 0x234) = 0x7f7fffff;
  FUN_140a5808e((longlong)param_1 + 0x234,param_1);
  *(undefined4 *)(param_1 + 0x47) = 1;
  FUN_140a5808e(param_1 + 0x47,param_1);
  *(undefined1 *)((longlong)param_1 + 0x23c) = 0;
  FUN_140a5808e((longlong)param_1 + 0x23c,param_1);
  return param_1;
}



// FUNCTION 146a9faf6 FUN_146a9faf6 body=319 status=ok
// SIG undefined FUN_146a9faf6(void)

void FUN_146a9faf6(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146a9fc36(param_1 + 0x208,param_1,param_2 + 0x1b8);
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  FUN_146a84c3e(param_1 + 0x228,param_1,param_2 + 0x1f8);
  FUN_146a84c3e(param_1 + 0x22c,param_1,param_2 + 0x210);
  FUN_146a84c3e(param_1 + 0x230,param_1,param_2 + 0x228);
  FUN_146a9fcb4(param_1 + 0x224,param_1,param_2 + 0x1e0);
  FUN_146a84c3e(param_1 + 0x234,param_1,param_2 + 0x240);
  FUN_146a9fd62(param_1 + 0x238,param_1,param_2 + 0x270);
  FUN_140a5ad86(param_1 + 0x23c,param_1,param_2 + 600);
  local_38 = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined8 *)(param_2 + 0x1a8) = 0;
  local_30 = *(undefined4 *)(param_2 + 0x1b0);
  local_2c = *(undefined4 *)(param_2 + 0x1b4);
  *(undefined8 *)(param_2 + 0x1b0) = 0;
  FUN_146a9fe0e(param_1 + 0x1e0);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146a9fc36 FUN_146a9fc36 body=126 status=ok
// SIG undefined FUN_146a9fc36(void)

void FUN_146a9fc36(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong **)(param_3 + 0x18) != (longlong *)0x0 && *(int *)(param_3 + 0x20) != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 0x18) + 0x30))();
    if (cVar1 != '\0') {
      FUN_146ac590e(param_1,param_2,param_3 + 0x18);
      return;
    }
  }
  if (*(char *)(param_3 + 0x10) != '\x01') {
    FUN_1400b73c8(param_2,param_1);
    return;
  }
  uVar2 = FUN_140133f88(param_3);
  FUN_146ac59ac(param_1,param_2,uVar2);
  return;
}



// FUNCTION 146a9fcb4 FUN_146a9fcb4 body=174 status=ok
// SIG undefined FUN_146a9fcb4(void)

undefined8 FUN_146a9fcb4(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*(longlong **)(param_3 + 2) != (longlong *)0x0 && param_3[4] != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
    if (cVar1 != '\0') {
      uVar3 = FUN_146ac5ac8(param_1,param_2,param_3 + 2);
      return uVar3;
    }
  }
  if (*(char *)(param_3 + 1) != '\x01') {
    FUN_1400b73c8(param_2,param_1);
    return 0;
  }
  if (*(longlong **)(param_3 + 2) != (longlong *)0x0 && param_3[4] != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
    if (cVar1 != '\0') {
      if (param_3[4] == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_3 + 2);
      }
      uVar2 = (**(code **)(*plVar4 + 0x58))();
      *param_3 = uVar2;
    }
  }
  uVar3 = FUN_146ac5b66(param_1,param_2,param_3);
  return uVar3;
}



// FUNCTION 146a9fd62 FUN_146a9fd62 body=171 status=ok
// SIG undefined FUN_146a9fd62(void)

void FUN_146a9fd62(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  if (*(longlong **)(param_3 + 2) != (longlong *)0x0 && param_3[4] != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
    if (cVar1 != '\0') {
      FUN_146ac5c56(param_1,param_2,param_3 + 2);
      return;
    }
  }
  if (*(char *)(param_3 + 1) != '\x01') {
    FUN_1400b73c8(param_2,param_1);
    return;
  }
  if (*(longlong **)(param_3 + 2) != (longlong *)0x0 && param_3[4] != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
    if (cVar1 != '\0') {
      if (param_3[4] == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_3 + 2);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      *param_3 = uVar2;
    }
  }
  FUN_146ac5cf4(param_1,param_2,param_3);
  return;
}



// FUNCTION 146a9fe0e FUN_146a9fe0e body=136 status=ok
// SIG undefined FUN_146a9fe0e(void)

void FUN_146a9fe0e(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = (int)param_2[1];
  iVar2 = *(int *)(param_1 + 0x20) + iVar1;
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (*(int *)(param_1 + 0x24) < iVar2) {
    FUN_146ac5f2a(param_1 + 0x18);
    iVar1 = (int)param_2[1];
  }
  lVar4 = *param_2;
  uVar3 = 0;
  if (iVar1 != 0) {
    lVar5 = (longlong)iVar1 * 0x28;
    do {
      FUN_146a2e368(param_1,lVar4);
      lVar4 = lVar4 + 0x28;
      lVar5 = lVar5 + -0x28;
    } while (lVar5 != 0);
    uVar3 = (undefined4)param_2[1];
    lVar4 = *param_2;
  }
  FUN_146a24b66(lVar4,uVar3);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146a9fe98 FUN_146a9fe98 body=2642 status=ok
// SIG undefined FUN_146a9fe98(void)

void FUN_146a9fe98(longlong param_1,float *param_2,byte *param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  byte *pbVar7;
  ulonglong uVar8;
  float *pfVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  byte bVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  undefined4 *local_1e0;
  float *local_1d8;
  float local_1d0;
  int local_1cc;
  undefined8 local_1c8;
  undefined8 local_1c0;
  byte *local_1b8;
  float *local_1b0;
  byte *local_1a8;
  float *local_1a0;
  ulonglong local_198;
  double local_190;
  double local_188;
  float local_180;
  float fStack_17c;
  undefined4 local_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined2 local_150;
  undefined1 uStack_14e;
  undefined5 uStack_14d;
  float local_148;
  float local_144;
  float local_140;
  undefined8 local_13c;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  byte local_11c;
  undefined2 local_11b;
  undefined1 local_119;
  undefined8 local_118;
  undefined8 uStack_110;
  ulonglong local_108;
  char local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if (*(int *)(param_1 + 0x200) < 1) goto LAB_146a9ff22;
  FUN_146aa08f0(param_1,&local_190);
  if (*(uint *)(param_1 + 0x224) == 0) {
    uVar8 = (longlong)ROUND((double)*param_2 / local_190 + (double)*param_2 / local_190 + -0.5) >> 1
    ;
    iVar10 = *(int *)(param_1 + 0x220);
    if ((longlong)iVar10 < (longlong)uVar8) {
      uVar8 = (longlong)iVar10;
    }
    uVar19 = 1;
    if (1 < (longlong)uVar8) {
      uVar19 = uVar8;
    }
  }
  else {
    iVar10 = *(int *)(param_1 + 0x220);
    uVar19 = (ulonglong)*(uint *)(param_1 + 0x224);
  }
  *(int *)(param_1 + 0x218) = (int)uVar19;
  fVar20 = (float)iVar10 / (float)(int)uVar19;
  iVar6 = -((int)ROUND(-0.5 - (fVar20 + fVar20)) >> 1);
  *(int *)(param_1 + 0x21c) = iVar6;
  if (*(char *)(param_1 + 0x23c) == '\x01') {
    fVar20 = (float)iVar10 / (float)iVar6;
    uVar19 = (ulonglong)(uint)-((int)ROUND(-0.5 - (fVar20 + fVar20)) >> 1);
  }
  iVar10 = *(int *)(param_1 + 0x238);
  iVar6 = (int)uVar19;
  if (iVar10 == 3) {
    dVar24 = (double)*param_2 - (double)iVar6 * local_190;
LAB_146aa00f5:
    auVar26._8_8_ = 0;
    auVar26._0_8_ = dVar24;
    auVar26 = roundpd(auVar26,auVar26,1);
    local_1d0 = (float)auVar26._0_8_;
  }
  else {
    if (iVar10 == 2) {
      dVar24 = ((double)*param_2 - (double)iVar6 * local_190) * 0.5;
      goto LAB_146aa00f5;
    }
    local_1d0 = 0.0;
    if (iVar10 == 0) {
      local_190 = (double)(*param_2 / (float)iVar6);
    }
  }
  iVar10 = *(int *)(param_1 + 0x200);
  if (0 < iVar10) {
    local_1a0 = param_2 + 7;
    local_1b8 = param_3 + 8;
    lVar17 = 0;
    iVar6 = 0;
    local_1b0 = param_2;
    local_1a8 = param_3;
    local_198 = uVar19;
    do {
      iVar18 = (int)uVar19;
      lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x1f8) + lVar17 * 8);
      lVar5 = *(longlong *)(lVar16 + 0x10);
      bVar4 = *(byte *)(lVar5 + 0x39);
      if ((*param_3 & bVar4) != 0) {
        pfVar9 = (float *)(lVar5 + 0x168);
        if ((*(byte *)(lVar5 + 0x31) & 0x20) == 0) {
          pfVar9 = (float *)&DAT_14c84635c;
        }
        fVar20 = *pfVar9;
        fVar30 = pfVar9[1];
        if ((((fVar20 != 0.0) || (NAN(fVar20))) || (fVar30 != 0.0)) || (NAN(fVar30))) {
          fVar22 = (float)local_190;
          fVar21 = *(float *)(param_1 + 0x208);
          fVar32 = *(float *)(param_1 + 0x210);
          iVar10 = *(int *)(lVar16 + 0x20);
          fVar23 = fVar22 - (fVar21 + fVar32);
          if (iVar10 == 0) {
LAB_146aa01f6:
            local_180 = fVar23;
            if (fVar23 <= 0.0) {
              local_180 = 0.0;
            }
          }
          else {
            if (fVar23 <= fVar20) {
              fVar20 = fVar23;
            }
            if (fVar20 <= 0.0) {
              fVar20 = 0.0;
            }
            local_180 = fVar20;
            if (iVar10 != 1) {
              if (iVar10 == 3) {
                fVar21 = (fVar22 - fVar20) - fVar32;
              }
              else {
                if (iVar10 != 2) goto LAB_146aa01f6;
                fVar21 = (fVar21 + (fVar22 - fVar20) * 0.5) - fVar32;
              }
            }
          }
          fVar22 = (float)local_188;
          fVar20 = *(float *)(param_1 + 0x20c);
          fVar32 = *(float *)(param_1 + 0x214);
          iVar10 = *(int *)(lVar16 + 0x24);
          fVar23 = fVar22 - (fVar20 + fVar32);
          if (iVar10 == 0) {
LAB_146aa026c:
            fStack_17c = fVar23;
            if (fVar23 <= 0.0) {
              fStack_17c = 0.0;
            }
          }
          else {
            if (fVar23 <= fVar30) {
              fVar30 = fVar23;
            }
            if (fVar30 <= 0.0) {
              fVar30 = 0.0;
            }
            fStack_17c = fVar30;
            if (iVar10 != 1) {
              if (iVar10 == 3) {
                fVar20 = (fVar22 - fVar30) - fVar32;
              }
              else {
                if (iVar10 != 2) goto LAB_146aa026c;
                fVar20 = (fVar20 + (fVar22 - fVar30) * 0.5) - fVar32;
              }
            }
          }
          if (iVar6 / iVar18 == *(int *)(param_1 + 0x21c) + -1) {
            iVar10 = *(int *)(param_1 + 0x220) % iVar18;
            if (iVar10 == 0) {
              iVar10 = iVar18;
            }
            if (*(int *)(param_1 + 0x238) == 2) {
              dVar24 = ((double)*param_2 - (double)iVar10 * local_190) * 0.5;
            }
            else {
              if (*(int *)(param_1 + 0x238) != 3) goto LAB_146aa02fb;
              dVar24 = (double)*param_2 - (double)iVar10 * local_190;
            }
            auVar25._8_8_ = 0;
            auVar25._0_8_ = dVar24;
            auVar26 = roundpd(auVar25,auVar25,1);
            local_1d0 = (float)auVar26._0_8_;
          }
LAB_146aa02fb:
          fVar20 = (float)(local_188 * (double)(iVar6 / iVar18) + (double)fVar20);
          fVar30 = (float)((double)local_1d0 + local_190 * (double)(iVar6 % iVar18) + (double)fVar21
                          );
          local_174 = 0x3f800000;
          uVar14 = CONCAT44(fVar20,fVar30);
          local_100 = *(char *)(lVar5 + 0x198);
          local_1cc = iVar6;
          local_170 = uVar14;
          if (DAT_14c96b1e0 == '\0') {
            if (local_100 == '\0') goto LAB_146aa0398;
            local_108 = *(ulonglong *)(lVar5 + 400);
            local_118 = *(undefined8 *)(lVar5 + 0x180);
            uStack_110 = *(undefined8 *)(lVar5 + 0x188);
LAB_146aa06a3:
            fVar20 = (float)*(double *)(*(longlong *)(lVar16 + 0x10) + 0x170);
            if (DAT_14c96b1e0 != '\0') {
              fVar20 = (0.5 - fVar20) + 0.5;
            }
            local_168 = CONCAT44((float)*(double *)(*(longlong *)(lVar16 + 0x10) + 0x178),fVar20);
            local_158 = *(undefined8 *)(param_2 + 3);
            local_15c = param_2[2];
            local_1d8 = local_1a0;
            local_1e0 = &local_15c;
            local_1e8 = &local_168;
            FUN_146978c22(&local_150,&local_180,&local_174,&local_118);
            bVar13 = local_11c;
            fVar27 = local_120;
            fVar31 = local_124;
            fVar28 = local_128;
            fVar30 = local_12c;
            fVar22 = local_130;
            fVar32 = local_134;
            uVar14 = local_13c;
            fVar29 = local_140;
            fVar20 = local_144;
            fVar21 = local_148;
            uVar12 = *(undefined8 *)(lVar16 + 0x10);
            plVar15 = *(longlong **)(lVar16 + 0x18);
            if (plVar15 == (longlong *)0x0) {
              local_15c._0_3_ = CONCAT12(local_119,local_11b);
              uVar11 = CONCAT53(uStack_14d,CONCAT12(uStack_14e,local_150));
            }
            else {
              LOCK();
              *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
              UNLOCK();
              local_1c8 = CONCAT53(uStack_14d,CONCAT12(uStack_14e,local_150));
              local_15c._0_3_ = CONCAT12(local_119,local_11b);
              LOCK();
              *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
              UNLOCK();
              LOCK();
              plVar1 = plVar15 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              uVar11 = local_1c8;
              if ((int)*plVar1 == 0) {
                local_1c0 = uVar12;
                (**(code **)*plVar15)(plVar15);
                LOCK();
                piVar2 = (int *)((longlong)plVar15 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                uVar11 = local_1c8;
                uVar12 = local_1c0;
                if (*piVar2 == 0) {
                  (**(code **)(*plVar15 + 0x10))(plVar15);
                  uVar11 = local_1c8;
                  uVar12 = local_1c0;
                }
              }
            }
          }
          else {
            if (local_100 != '\0') {
              local_118 = *(undefined8 *)(lVar5 + 0x180);
              uStack_110 = *(undefined8 *)(lVar5 + 0x188);
              local_108 = *(ulonglong *)(lVar5 + 400) ^ 0x80000000;
              goto LAB_146aa06a3;
            }
LAB_146aa0398:
            bVar13 = *(byte *)(param_2 + 0xd);
            fVar21 = param_2[2];
            fVar32 = param_2[7];
            fVar22 = param_2[8];
            fVar23 = param_2[10];
            fVar3 = param_2[9];
            fVar27 = fVar30 * fVar22 + fVar23 * fVar20 + param_2[0xc];
            fVar31 = fVar30 * fVar32 + fVar3 * fVar20 + param_2[0xb];
            fVar29 = fVar20 * fVar21 + param_2[4];
            fVar20 = fVar21 * fVar30 + param_2[3];
            uVar11 = CONCAT44(fStack_17c,local_180);
            uVar12 = *(undefined8 *)(lVar16 + 0x10);
            plVar15 = *(longlong **)(lVar16 + 0x18);
            if (plVar15 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
              UNLOCK();
              local_15c = (float)CONCAT22(CONCAT11(local_15c._3_1_,uStack_14e),local_150);
              LOCK();
              *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
              UNLOCK();
              LOCK();
              plVar1 = plVar15 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar15)(plVar15);
                LOCK();
                piVar2 = (int *)((longlong)plVar15 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar15 + 0x10))(plVar15);
                }
              }
            }
            bVar13 = bVar13 & 1;
            fVar28 = fVar22 * 0.0 + fVar23;
            fVar30 = fVar32 * 0.0 + fVar3;
            fVar22 = fVar23 * 0.0 + fVar22;
            fVar32 = fVar3 * 0.0 + fVar32;
            param_3 = local_1a8;
          }
          if ((*param_3 & bVar4) == 0) {
            param_2 = local_1b0;
            if (plVar15 != (longlong *)0x0) goto LAB_146aa05bd;
          }
          else {
            iVar10 = *(int *)(param_3 + 0x130);
            lVar16 = (longlong)iVar10;
            *(uint *)(param_3 + 0x130) = iVar10 + 1U;
            if (*(uint *)(param_3 + 0x134) < iVar10 + 1U) {
              FUN_14022ed06(local_1b8,iVar10);
              param_3 = local_1a8;
            }
            pbVar7 = *(byte **)(param_3 + 0x128);
            if (*(byte **)(param_3 + 0x128) == (byte *)0x0) {
              pbVar7 = local_1b8;
            }
            *(undefined8 *)(pbVar7 + lVar16 * 0x48) = uVar11;
            *(float *)(pbVar7 + lVar16 * 0x48 + 8) = fVar21;
            *(float *)(pbVar7 + lVar16 * 0x48 + 0xc) = fVar20;
            *(float *)(pbVar7 + lVar16 * 0x48 + 0x10) = fVar29;
            *(undefined8 *)(pbVar7 + lVar16 * 0x48 + 0x14) = uVar14;
            *(float *)(pbVar7 + lVar16 * 0x48 + 0x1c) = fVar32;
            *(float *)(pbVar7 + lVar16 * 0x48 + 0x20) = fVar22;
            *(float *)(pbVar7 + lVar16 * 0x48 + 0x24) = fVar30;
            *(float *)(pbVar7 + lVar16 * 0x48 + 0x28) = fVar28;
            *(float *)(pbVar7 + lVar16 * 0x48 + 0x2c) = fVar31;
            *(float *)(pbVar7 + lVar16 * 0x48 + 0x30) = fVar27;
            pbVar7[lVar16 * 0x48 + 0x34] = bVar13;
            *(undefined2 *)(pbVar7 + lVar16 * 0x48 + 0x35) = (undefined2)local_15c;
            pbVar7[lVar16 * 0x48 + 0x37] = local_15c._2_1_;
            *(undefined8 *)(pbVar7 + lVar16 * 0x48 + 0x38) = uVar12;
            *(longlong **)(pbVar7 + lVar16 * 0x48 + 0x40) = plVar15;
            param_2 = local_1b0;
            if (plVar15 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
              UNLOCK();
LAB_146aa05bd:
              param_2 = local_1b0;
              LOCK();
              plVar1 = plVar15 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar15)(plVar15);
                LOCK();
                piVar2 = (int *)((longlong)plVar15 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar15 + 0x10))(plVar15);
                }
              }
            }
          }
          iVar6 = local_1cc + 1;
          iVar10 = *(int *)(param_1 + 0x200);
          uVar19 = local_198;
        }
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < iVar10);
  }
LAB_146a9ff22:
  if ((local_f0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146aa08f0 FUN_146aa08f0 body=390 status=ok
// SIG undefined FUN_146aa08f0(void)

void FUN_146aa08f0(longlong param_1,double *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  float *pfVar9;
  longlong lVar10;
  int iVar11;
  
  dVar3 = DAT_14c8463f8;
  *param_2 = DAT_14c8463f0;
  param_2[1] = dVar3;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  cVar8 = DAT_14c96b1e1;
  dVar3 = *param_2;
  if (0 < (longlong)*(int *)(param_1 + 0x200)) {
    dVar4 = param_2[1];
    iVar11 = 0;
    lVar10 = 0;
    do {
      lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1f8) + lVar10 * 8) + 0x10);
      if (*(char *)(lVar5 + 0x39) != cVar8) {
        pfVar9 = (float *)&DAT_14c84635c;
        if ((*(byte *)(lVar5 + 0x31) & 0x20) != 0) {
          pfVar9 = (float *)(lVar5 + 0x168);
        }
        fVar1 = *pfVar9;
        fVar2 = pfVar9[1];
        if ((((fVar1 != 0.0) || (NAN(fVar1))) || (fVar2 != 0.0)) || (NAN(fVar2))) {
          dVar7 = (double)fVar2 +
                  (double)(*(float *)(param_1 + 0x20c) + *(float *)(param_1 + 0x214));
          if (dVar7 <= (double)*(float *)(param_1 + 0x22c)) {
            dVar7 = (double)*(float *)(param_1 + 0x22c);
          }
          dVar6 = (double)fVar1 +
                  (double)(*(float *)(param_1 + 0x208) + *(float *)(param_1 + 0x210));
          if (dVar6 <= (double)*(float *)(param_1 + 0x228)) {
            dVar6 = (double)*(float *)(param_1 + 0x228);
          }
          iVar11 = iVar11 + 1;
          *(int *)(param_1 + 0x220) = iVar11;
          if (dVar3 <= dVar6) {
            dVar3 = dVar6;
          }
          if ((double)*(float *)(param_1 + 0x230) <= dVar3) {
            dVar3 = (double)*(float *)(param_1 + 0x230);
          }
          if (dVar4 <= dVar7) {
            dVar4 = dVar7;
          }
          if ((double)*(float *)(param_1 + 0x234) <= dVar4) {
            dVar4 = (double)*(float *)(param_1 + 0x234);
          }
        }
      }
      lVar10 = lVar10 + 1;
    } while (*(int *)(param_1 + 0x200) != lVar10);
    param_2[1] = dVar4;
  }
  *param_2 = dVar3;
  return;
}



// FUNCTION 146aa0a76 FUN_146aa0a76 body=375 status=ok
// SIG undefined FUN_146aa0a76(void)

double * FUN_146aa0a76(longlong param_1,double *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float fVar7;
  undefined1 auStack_48 [32];
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146aa08f0(param_1,&local_28);
  uVar3 = DAT_14c8463f8._4_4_;
  uVar2 = (undefined4)DAT_14c8463f8;
  uVar1 = DAT_14c8463f0._4_4_;
  if (*(int *)(param_1 + 0x220) < 1) {
    *(undefined4 *)param_2 = (undefined4)DAT_14c8463f0;
    *(undefined4 *)((longlong)param_2 + 4) = uVar1;
    *(undefined4 *)(param_2 + 1) = uVar2;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  pfVar5 = (float *)FUN_14287b896(param_1);
  fVar7 = *pfVar5;
  iVar6 = *(int *)(param_1 + 0x224);
  if ((((fVar7 != 0.0) || (NAN(fVar7))) || (pfVar5[1] != 0.0)) || (NAN(pfVar5[1]))) {
    if (iVar6 == 0) {
      iVar6 = (int)((ulonglong)
                    (longlong)ROUND((double)fVar7 / local_28 + (double)fVar7 / local_28 + -0.5) >> 1
                   );
    }
  }
  else if (iVar6 == 0) {
    fVar7 = (float)*(int *)(param_1 + 0x220);
    if (fVar7 < 0.0) {
      fVar7 = sqrtf(fVar7);
    }
    else {
      fVar7 = SQRT(fVar7);
    }
    iVar6 = -((int)ROUND(-0.5 - (fVar7 + fVar7)) >> 1);
  }
  *(int *)(param_1 + 0x218) = iVar6;
  iVar4 = *(int *)(param_1 + 0x220);
  if (iVar6 < 1) {
    *(int *)(param_1 + 0x21c) = iVar4;
    *(undefined4 *)(param_1 + 0x218) = 1;
  }
  else {
    iVar4 = -((int)ROUND(-0.5 - ((float)iVar4 / (float)iVar6 + (float)iVar4 / (float)iVar6)) >> 1);
    *(int *)(param_1 + 0x21c) = iVar4;
    local_28 = (double)iVar6 * local_28;
  }
  *param_2 = local_28;
  param_2[1] = (double)iVar4 * local_20;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146aa0bf6 FUN_146aa0bf6 body=386 status=ok
// SIG undefined FUN_146aa0bf6(void)

void FUN_146aa0bf6(int *param_1,undefined8 param_2,uint *param_3)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  uint local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_3 + 2) != (longlong *)0x0 && param_3[4] != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
    if (cVar1 != '\0') {
      *(undefined1 *)(param_3 + 1) = 0;
      if (*(longlong **)(param_3 + 2) == (longlong *)0x0 || param_3[4] == 0) {
LAB_146aa0d59:
        local_40 = CONCAT44(local_40._4_4_,*param_3);
        local_30 = 0;
      }
      else {
        cVar1 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
        if (cVar1 == '\0') goto LAB_146aa0d59;
        local_40 = *(ulonglong *)(param_3 + 2);
        param_3[2] = 0;
        param_3[3] = 0;
        local_38 = param_3[4];
        param_3[4] = 0;
        local_30 = 1;
      }
      FUN_146ac5f8a(param_1,param_2,&local_40);
      (*(code *)(&PTR_LAB_149f19d30)[local_30])(&local_40);
      goto LAB_146aa0cf2;
    }
  }
  if ((char)param_3[1] != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  *(undefined1 *)(param_3 + 1) = 0;
  if (*(longlong **)(param_3 + 2) == (longlong *)0x0 || param_3[4] == 0) {
LAB_146aa0cb0:
    uVar3 = (ulonglong)*param_3;
    local_40 = CONCAT44(local_40._4_4_,*param_3);
    local_30 = 0;
    lVar2 = 0;
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
    if (cVar1 == '\0') goto LAB_146aa0cb0;
    uVar3 = *(ulonglong *)(param_3 + 2);
    param_3[2] = 0;
    param_3[3] = 0;
    local_38 = param_3[4];
    param_3[4] = 0;
    local_30 = 1;
    lVar2 = 1;
    local_40 = uVar3;
  }
  FUN_1400b73c8(param_2,param_1);
  if (*param_1 != (int)uVar3) {
    *param_1 = (int)uVar3;
    FUN_14094e0ca(param_2,param_1,0,0);
  }
  (*(code *)(&PTR_LAB_149f19d30)[lVar2])(&local_40);
LAB_146aa0cf2:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146aa0d8e FUN_146aa0d8e body=144 status=ok
// SIG undefined FUN_146aa0d8e(void)

undefined8 * FUN_146aa0d8e(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar3 = &PTR_FUN_149edb640;
  puVar3[1] = 0;
  puVar3[2] = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  puVar3[3] = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar3[4] = 0;
  *puVar3 = &PTR_FUN_149f175e8;
  *param_2 = puVar3;
  *(undefined1 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_2 + 0x24) = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[5] = param_1 + 0x1e0;
  *(undefined4 *)(param_2 + 6) = 0xffffffff;
  param_2[8] = 0;
  param_2[10] = 0;
  return param_2;
}



// FUNCTION 146aa0e1e FUN_146aa0e1e body=262 status=ok
// SIG undefined FUN_146aa0e1e(void)

undefined8 * FUN_146aa0e1e(undefined8 *param_1)

{
  FUN_140a560dc();
  *param_1 = &PTR_FUN_149f166a0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1e4) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = &PTR__purecall_149ef0700;
  param_1[0x40] = param_1;
  FUN_1446ddc76(param_1 + 0x41,"Children",1);
  param_1[0x3f] = &PTR_LAB_149f133b0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = &PTR__purecall_149ef0700;
  param_1[0x45] = param_1;
  FUN_1446ddc76(param_1 + 0x46,"Children",1);
  param_1[0x44] = &PTR_LAB_149f19d40;
  param_1[0x47] = param_1 + 0x3f;
  param_1[0x48] = param_1 + 0x3c;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfb;
  FUN_144a88240(param_1 + 3,param_1);
  return param_1;
}



// FUNCTION 146aa0f24 FUN_146aa0f24 body=789 status=ok
// SIG undefined FUN_146aa0f24(void)

undefined8 FUN_146aa0f24(longlong param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 **ppuVar7;
  longlong *plVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 auStack_108 [32];
  code **local_e8;
  undefined8 *local_d8;
  undefined8 *local_d0;
  code *local_c8 [2];
  undefined8 local_b8;
  undefined **local_a8;
  undefined8 local_a0;
  longlong *local_98;
  code *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  undefined8 local_60;
  longlong *local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar8 = *(longlong **)(param_1 + 0x10);
  bVar3 = true;
  if (plVar8 == (longlong *)0x0) {
LAB_146aa0f63:
    uVar9 = 0;
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar8[1];
    do {
      if (iVar6 == 0) goto LAB_146aa0f63;
      LOCK();
      iVar5 = (int)plVar8[1];
      bVar10 = iVar6 == iVar5;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar10);
    uVar9 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    LOCK();
    *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    bVar3 = false;
  }
  if ((param_3 < 0) || (*(int *)(param_1 + 0x218) <= param_3)) {
    local_d0 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    local_d0[4] = 0;
    local_d0[5] = 0;
    local_d0[6] = 0;
    local_d0[7] = 0;
    *local_d0 = &PTR_FUN_149edb640;
    local_d0[1] = 0;
    local_d0[2] = DAT_14c98dec8;
    lVar4 = DAT_14c98ded0;
    local_d0[3] = DAT_14c98ded0;
    if (lVar4 != 0) {
      LOCK();
      piVar1 = (int *)(lVar4 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_d0[5] = 0;
    local_d0[6] = 0;
    local_d0[7] = 0;
    *local_d0 = &PTR_FUN_149f13428;
    local_d0[4] = &PTR_LAB_149f13430;
    local_60 = uVar9;
    local_58 = plVar8;
    if (!bVar3) {
      LOCK();
      *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
      UNLOCK();
      local_e8 = local_88;
      local_78 = 0;
      local_68 = &PTR_LAB_149f19d90;
      local_88[0] = FUN_142905ac2;
      ppuVar7 = &local_d0;
      param_3 = -1;
      goto LAB_146aa11da;
    }
    local_e8 = local_88;
    local_78 = 0;
    local_68 = &PTR_LAB_149f19d90;
    local_88[0] = FUN_142905ac2;
    ppuVar7 = &local_d0;
    param_3 = -1;
  }
  else {
    local_d8 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    local_d8[4] = 0;
    local_d8[5] = 0;
    local_d8[6] = 0;
    local_d8[7] = 0;
    *local_d8 = &PTR_FUN_149edb640;
    local_d8[1] = 0;
    local_d8[2] = DAT_14c98dec8;
    lVar4 = DAT_14c98ded0;
    local_d8[3] = DAT_14c98ded0;
    if (lVar4 != 0) {
      LOCK();
      piVar1 = (int *)(lVar4 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_d8[5] = 0;
    local_d8[6] = 0;
    local_d8[7] = 0;
    *local_d8 = &PTR_FUN_149f13428;
    local_d8[4] = &PTR_LAB_149f13430;
    local_a0 = uVar9;
    local_98 = plVar8;
    if (!bVar3) {
      LOCK();
      *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
      UNLOCK();
      local_e8 = local_c8;
      local_b8 = 0;
      local_a8 = &PTR_LAB_149f19db0;
      local_c8[0] = FUN_142905b9e;
      ppuVar7 = &local_d8;
LAB_146aa11da:
      FUN_146aa123a(param_2,ppuVar7,param_1 + 0x1f8,param_3);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
      goto LAB_146aa10ff;
    }
    local_e8 = local_c8;
    local_b8 = 0;
    local_a8 = &PTR_LAB_149f19db0;
    local_c8[0] = FUN_142905b9e;
    ppuVar7 = &local_d8;
  }
  FUN_146aa123a(param_2,ppuVar7,param_1 + 0x1f8,param_3);
LAB_146aa10ff:
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146aa123a FUN_146aa123a body=160 status=ok
// SIG undefined FUN_146aa123a(void)

longlong *
FUN_146aa123a(longlong *param_1,longlong *param_2,longlong param_3,undefined4 param_4,
             longlong *param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  lVar1 = *param_2;
  *param_2 = 0;
  *param_1 = lVar1;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = param_3;
  *(undefined4 *)(param_1 + 0xb) = param_4;
  lVar1 = *param_5;
  param_1[0xc] = lVar1;
  param_1[0xe] = 0;
  if (lVar1 != 0) {
    plVar3 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_5[2];
    }
    (**(code **)*plVar3)(0,param_1 + 0xe);
  }
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (*param_5 != 0) {
    plVar3 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  return param_1;
}


