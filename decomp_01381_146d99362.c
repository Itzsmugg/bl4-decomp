// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146d99362 FUN_146d99362 body=1003 status=ok
// SIG undefined FUN_146d99362(void)

void FUN_146d99362(longlong param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_b8 [32];
  undefined **local_98;
  longlong local_90;
  ulonglong uStack_88;
  undefined **local_80;
  longlong local_78;
  ulonglong uStack_70;
  undefined **local_68;
  longlong local_60;
  ulonglong uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_146d99796();
  FUN_146d98e76(param_2,param_1 + 0x530);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc08);
  iVar8 = FUN_1448332aa(param_2,&DAT_149e3cc08);
  if (0x31 < iVar8) {
    uVar9 = FUN_146d89afc(param_2,param_1 + 0x548);
    FUN_146d8a7a9(uVar9,param_1 + 0x560);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_b8);
  }
  local_60 = 0;
  uStack_58 = 0;
  local_68 = &PTR_LAB_149f51e80;
  FUN_14017e500(&local_60,*(undefined4 *)(param_1 + 0x550),0);
  if (0 < *(int *)(param_1 + 0x550)) {
    lVar10 = 0xc;
    lVar11 = 0;
    do {
      lVar7 = *(longlong *)(param_1 + 0x548);
      fVar1 = *(float *)(lVar7 + lVar10);
      fVar2 = *(float *)(lVar7 + -4 + lVar10);
      fVar3 = *(float *)(lVar7 + -8 + lVar10);
      *(double *)(local_60 + -0x18 + lVar10 * 2) = (double)*(float *)(lVar7 + -0xc + lVar10);
      *(double *)(local_60 + -0x10 + lVar10 * 2) = (double)fVar3;
      *(double *)(local_60 + -8 + lVar10 * 2) = (double)fVar2;
      *(double *)(local_60 + lVar10 * 2) = (double)fVar1;
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0x10;
    } while (lVar11 < *(int *)(param_1 + 0x550));
  }
  local_78 = 0;
  uStack_70 = 0;
  local_80 = &PTR_LAB_149f48c00;
  FUN_146ca6f88(&local_78,*(undefined4 *)(param_1 + 0x568),0);
  if (0 < *(int *)(param_1 + 0x568)) {
    lVar10 = 8;
    lVar11 = 0;
    do {
      lVar7 = *(longlong *)(param_1 + 0x560);
      fVar1 = *(float *)(lVar7 + lVar10);
      fVar2 = *(float *)(lVar7 + -4 + lVar10);
      *(double *)(local_78 + -0x10 + lVar10 * 2) = (double)*(float *)(lVar7 + -8 + lVar10);
      *(double *)(local_78 + -8 + lVar10 * 2) = (double)fVar2;
      *(double *)(local_78 + lVar10 * 2) = (double)fVar1;
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0xc;
    } while (lVar11 < *(int *)(param_1 + 0x568));
  }
  local_90 = 0;
  uStack_88 = 0;
  local_98 = &PTR_LAB_149f48c00;
  FUN_146ca6f88(&local_90,*(undefined4 *)(param_1 + 0x580),0);
  if (0 < *(int *)(param_1 + 0x580)) {
    lVar10 = 8;
    lVar11 = 0;
    do {
      lVar7 = *(longlong *)(param_1 + 0x578);
      fVar1 = *(float *)(lVar7 + lVar10);
      fVar2 = *(float *)(lVar7 + -4 + lVar10);
      *(double *)(local_90 + -0x10 + lVar10 * 2) = (double)*(float *)(lVar7 + -8 + lVar10);
      *(double *)(local_90 + -8 + lVar10 * 2) = (double)fVar2;
      *(double *)(local_90 + lVar10 * 2) = (double)fVar1;
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0xc;
    } while (lVar11 < *(int *)(param_1 + 0x580));
  }
  uVar9 = FUN_146d89bfc(param_2,&local_60);
  uVar9 = FUN_146d98e76(uVar9,&local_78);
  FUN_146d98e76(uVar9,&local_90);
  FUN_1400d134e((longlong *)(param_1 + 0x548),uStack_58 & 0xffffffff,0);
  if (0 < (int)uStack_58) {
    lVar10 = 0xc;
    lVar11 = 0;
    do {
      dVar4 = *(double *)(local_60 + lVar10 * 2);
      dVar5 = *(double *)(local_60 + -8 + lVar10 * 2);
      dVar6 = *(double *)(local_60 + -0x10 + lVar10 * 2);
      lVar7 = *(longlong *)(param_1 + 0x548);
      *(float *)(lVar7 + -0xc + lVar10) = (float)*(double *)(local_60 + -0x18 + lVar10 * 2);
      *(float *)(lVar7 + -8 + lVar10) = (float)dVar6;
      *(float *)(lVar7 + -4 + lVar10) = (float)dVar5;
      *(float *)(lVar7 + lVar10) = (float)dVar4;
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0x10;
    } while (lVar11 < (int)uStack_58);
  }
  FUN_140627580((longlong *)(param_1 + 0x560),uStack_70 & 0xffffffff,0);
  if (0 < (int)uStack_70) {
    lVar10 = 8;
    lVar11 = 0;
    do {
      dVar4 = *(double *)(local_78 + lVar10 * 2);
      dVar5 = *(double *)(local_78 + -8 + lVar10 * 2);
      lVar7 = *(longlong *)(param_1 + 0x560);
      *(float *)(lVar7 + -8 + lVar10) = (float)*(double *)(local_78 + -0x10 + lVar10 * 2);
      *(float *)(lVar7 + -4 + lVar10) = (float)dVar5;
      *(float *)(lVar7 + lVar10) = (float)dVar4;
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0xc;
    } while (lVar11 < (int)uStack_70);
  }
  FUN_140627580((longlong *)(param_1 + 0x578),uStack_88 & 0xffffffff,0);
  if (0 < (int)uStack_88) {
    lVar10 = 8;
    lVar11 = 0;
    do {
      dVar4 = *(double *)(local_90 + lVar10 * 2);
      dVar5 = *(double *)(local_90 + -8 + lVar10 * 2);
      lVar7 = *(longlong *)(param_1 + 0x578);
      *(float *)(lVar7 + -8 + lVar10) = (float)*(double *)(local_90 + -0x10 + lVar10 * 2);
      *(float *)(lVar7 + -4 + lVar10) = (float)dVar5;
      *(float *)(lVar7 + lVar10) = (float)dVar4;
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0xc;
    } while (lVar11 < (int)uStack_88);
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d99770 FUN_146d99770 body=38 status=ok
// SIG undefined FUN_146d99770(void)

undefined8 FUN_146d99770(undefined8 param_1,int param_2)

{
  FUN_141123f30();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d99796 FUN_146d99796 body=1264 status=ok
// SIG undefined FUN_146d99796(void)

void FUN_146d99796(longlong param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_128 [32];
  longlong local_108 [3];
  undefined8 uStack_f0;
  undefined **local_e0;
  longlong local_d8 [2];
  undefined **local_c8;
  longlong local_c0;
  ulonglong uStack_b8;
  undefined **local_b0;
  longlong local_a8 [2];
  undefined **local_98;
  longlong local_90 [10];
  
  local_90[2] = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_146d98a66();
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = &PTR_LAB_149f537b0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_b0 = &PTR_LAB_149f53770;
  local_90[0] = 0;
  local_90[1] = 0;
  local_98 = &PTR_LAB_149f51ec0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_e0 = &PTR_LAB_149f537b0;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    FUN_146d9a5f8(&local_c8,param_1 + 0x2b8);
    FUN_144a8c360(local_d8,*(undefined4 *)(param_1 + 0x4a8),1);
  }
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cba8);
  iVar5 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (0x14 < iVar5) {
    FUN_146d98e76(param_2,param_1 + 0x3e0);
    FUN_146d89bfc(param_2,param_1 + 0x3f8);
  }
  uVar6 = FUN_146d98e76(param_2,param_1 + 0x308);
  uVar6 = FUN_146d98e76(uVar6,param_1 + 800);
  uVar6 = FUN_146d98e76(uVar6,param_1 + 0x338);
  FUN_146d98e76(uVar6,param_1 + 0x350);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc08);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    iVar5 = FUN_1448332aa(param_2,&DAT_149e3cbb8);
    if (iVar5 < 0x40) {
      iVar5 = FUN_1448332aa(param_2,&DAT_149e3cc08);
      if (iVar5 < 0x23) {
        local_108[2] = 0;
        uStack_f0 = 0;
        local_108[0] = 0;
        local_108[1] = 0;
        uVar6 = FUN_146d9a68d(param_2,local_108 + 2);
        FUN_146d9a68d(uVar6,local_108);
        if (0 < (int)uStack_f0) {
          lVar9 = 0;
          lVar7 = 0;
          do {
            dVar1 = *(double *)(local_108[2] + 0x50 + lVar9);
            dVar2 = *(double *)(local_108[2] + 0x28 + lVar9);
            dVar3 = *(double *)(local_108[2] + lVar9);
            iVar5 = *(int *)(param_1 + 0x370);
            lVar8 = (longlong)iVar5;
            *(uint *)(param_1 + 0x370) = iVar5 + 1U;
            if (*(uint *)(param_1 + 0x374) < iVar5 + 1U) {
              FUN_140aacb36(param_1 + 0x368,iVar5);
            }
            lVar4 = *(longlong *)(param_1 + 0x368);
            *(float *)(lVar4 + lVar8 * 0xc) = (float)dVar3;
            *(float *)(lVar4 + 4 + lVar8 * 0xc) = (float)dVar2;
            *(float *)(lVar4 + 8 + lVar8 * 0xc) = (float)dVar1;
            dVar1 = *(double *)(local_108[0] + 0x50 + lVar9);
            dVar2 = *(double *)(local_108[0] + 0x28 + lVar9);
            dVar3 = *(double *)(local_108[0] + lVar9);
            iVar5 = *(int *)(param_1 + 0x388);
            lVar8 = (longlong)iVar5;
            *(uint *)(param_1 + 0x388) = iVar5 + 1U;
            if (*(uint *)(param_1 + 0x38c) < iVar5 + 1U) {
              FUN_140aacb36((longlong *)(param_1 + 0x380),iVar5);
            }
            lVar4 = *(longlong *)(param_1 + 0x380);
            *(float *)(lVar4 + lVar8 * 0xc) = (float)dVar3;
            *(float *)(lVar4 + 4 + lVar8 * 0xc) = (float)dVar2;
            *(float *)(lVar4 + 8 + lVar8 * 0xc) = (float)dVar1;
            lVar7 = lVar7 + 1;
            lVar9 = lVar9 + 0x80;
          } while (lVar7 < (int)uStack_f0);
        }
        if (local_108[0] != 0) {
          FUN_1400020a8();
        }
        if (local_108[2] != 0) {
          FUN_1400020a8();
        }
        goto LAB_146d99a94;
      }
    }
  }
  uVar6 = FUN_146d8a7a9(param_2,param_1 + 0x368);
  FUN_146d8a7a9(uVar6,param_1 + 0x380);
LAB_146d99a94:
  FUN_140627580(param_1 + 0x398,*(undefined4 *)(param_1 + 0x388),0);
  if (0 < *(int *)(param_1 + 0x388)) {
    lVar7 = 8;
    lVar9 = 0;
    do {
      lVar8 = *(longlong *)(param_1 + 0x398);
      *(undefined1 **)(lVar8 + -8 + lVar7) = &DAT_3f8000003f800000;
      *(undefined4 *)(lVar8 + lVar7) = 0x3f800000;
      lVar9 = lVar9 + 1;
      lVar7 = lVar7 + 0xc;
    } while (lVar9 < *(int *)(param_1 + 0x388));
  }
  uVar6 = FUN_146d9a78b(param_2,param_1 + 0x3b0);
  FUN_146d9a78b(uVar6,param_1 + 0x3c8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cba8);
  iVar5 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (0x17 < iVar5) {
    uVar6 = FUN_146d9a78b(param_2,param_1 + 0x410);
    FUN_146d9a78b(uVar6,param_1 + 0x428);
  }
  uVar6 = FUN_146d9ab91(param_2,param_1 + 0x4a0);
  uVar6 = FUN_1406276ca(uVar6,&local_c0);
  uVar6 = FUN_1406276ca(uVar6,local_d8);
  uVar6 = FUN_146d8e09e(uVar6,local_90);
  uVar6 = FUN_146d9aa7a(uVar6,local_a8);
  FUN_146d9a95e(uVar6,param_1 + 0x4b8);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x2b8) + 8))(param_1 + 0x2b8,uStack_b8 & 0xffffffff);
    if (0 < *(int *)(param_1 + 0x2c8)) {
      lVar7 = 0;
      lVar9 = 0;
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 0x2c0) + lVar7) =
             *(undefined4 *)(local_c0 + lVar9 * 4);
        *(undefined1 *)(*(longlong *)(param_1 + 0x2c0) + 0xb + lVar7) =
             *(undefined1 *)(local_a8[0] + lVar9);
        *(undefined1 *)(*(longlong *)(param_1 + 0x2c0) + 0xd + lVar7) =
             *(undefined1 *)(local_90[0] + lVar9);
        lVar9 = lVar9 + 1;
        lVar7 = lVar7 + 0x10;
      } while (lVar9 < *(int *)(param_1 + 0x2c8));
    }
  }
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_146d9ac7c(&local_c8);
  if ((local_90[2] ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d99cca FUN_146d99cca body=79 status=ok
// SIG undefined FUN_146d99cca(void)

void FUN_146d99cca(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  if (param_3 != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    iVar1 = iVar2 - (param_3 + param_2);
    if (iVar1 != 0) {
      _Dst = (void *)((longlong)param_2 * 0x10 + *(longlong *)(param_1 + 8));
      memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar1 << 4);
      iVar2 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar2 - param_3;
  }
  return;
}



// FUNCTION 146d99d20 FUN_146d99d20 body=47 status=ok
// SIG undefined FUN_146d99d20(void)

longlong FUN_146d99d20(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d99d50 FUN_146d99d50 body=96 status=ok
// SIG undefined FUN_146d99d50(void)

void FUN_146d99d50(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,4);
  }
  return;
}



// FUNCTION 146d99db0 FUN_146d99db0 body=63 status=ok
// SIG undefined FUN_146d99db0(void)

void FUN_146d99db0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d99df0(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 146d99df0 FUN_146d99df0 body=97 status=ok
// SIG undefined FUN_146d99df0(void)

ulonglong FUN_146d99df0(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,4);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146d99e94 FUN_146d99e94 body=76 status=ok
// SIG undefined FUN_146d99e94(void)

void FUN_146d99e94(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = iVar1 - (param_3 + param_2);
    if (iVar2 != 0) {
      _Dst = (void *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 8));
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 8),(longlong)iVar2 << 3);
      iVar1 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar1 - param_3;
  }
  return;
}



// FUNCTION 146d99ee6 FUN_146d99ee6 body=47 status=ok
// SIG undefined FUN_146d99ee6(void)

longlong FUN_146d99ee6(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d99f58 FUN_146d99f58 body=99 status=ok
// SIG undefined FUN_146d99f58(void)

void FUN_146d99f58(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  if (param_3 != 0) {
    _Dst = (void *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 8));
    FUN_140191cbb(_Dst,param_3);
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = iVar1 - (param_2 + param_3);
    if (iVar2 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 8),(longlong)iVar2 << 3);
      iVar1 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar1 - param_3;
  }
  return;
}



// FUNCTION 146d99fc2 FUN_146d99fc2 body=59 status=ok
// SIG undefined FUN_146d99fc2(void)

longlong FUN_146d99fc2(longlong param_1,int param_2)

{
  FUN_140191cbb(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d99ffe FUN_146d99ffe body=96 status=ok
// SIG undefined FUN_146d99ffe(void)

void FUN_146d99ffe(longlong param_1,int param_2)

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



// FUNCTION 146d9a05e FUN_146d9a05e body=63 status=ok
// SIG undefined FUN_146d9a05e(void)

void FUN_146d9a05e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d9a09e(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146d9a09e FUN_146d9a09e body=97 status=ok
// SIG undefined FUN_146d9a09e(void)

ulonglong FUN_146d9a09e(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146d9a142 FUN_146d9a142 body=67 status=ok
// SIG undefined FUN_146d9a142(void)

void FUN_146d9a142(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = iVar1 - (param_3 + param_2);
    if (iVar2 != 0) {
      _Dst = (void *)((longlong)param_2 + *(longlong *)(param_1 + 8));
      memmove(_Dst,(void *)((longlong)param_3 + (longlong)_Dst),(longlong)iVar2);
      iVar1 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar1 - param_3;
  }
  return;
}



// FUNCTION 146d9a18c FUN_146d9a18c body=47 status=ok
// SIG undefined FUN_146d9a18c(void)

longlong FUN_146d9a18c(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d9a1bc FUN_146d9a1bc body=88 status=ok
// SIG undefined FUN_146d9a1bc(void)

void FUN_146d9a1bc(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = FUN_144a3809e((longlong)param_2,1);
    iVar2 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar2 = iVar1;
    }
  }
  if (iVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar2,1,1);
  }
  return;
}



// FUNCTION 146d9a214 FUN_146d9a214 body=119 status=ok
// SIG undefined FUN_146d9a214(void)

void FUN_146d9a214(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if (((uint)(iVar2 - iVar1) < 0x4000) && (iVar2 * 2 <= iVar1 * 3)) {
    return;
  }
  if (iVar1 == 0 || 0x40 < iVar2 - iVar1) {
    if (0 < iVar1) {
      iVar1 = FUN_144a3809e(iVar1,1);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if (iVar1 != iVar2) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,1,1);
    }
  }
  return;
}



// FUNCTION 146d9a2ce FUN_146d9a2ce body=67 status=ok
// SIG undefined FUN_146d9a2ce(void)

void FUN_146d9a2ce(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = iVar1 - (param_3 + param_2);
    if (iVar2 != 0) {
      _Dst = (void *)((longlong)param_2 + *(longlong *)(param_1 + 8));
      memmove(_Dst,(void *)((longlong)param_3 + (longlong)_Dst),(longlong)iVar2);
      iVar1 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar1 - param_3;
  }
  return;
}



// FUNCTION 146d9a318 FUN_146d9a318 body=47 status=ok
// SIG undefined FUN_146d9a318(void)

longlong FUN_146d9a318(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d9a348 FUN_146d9a348 body=88 status=ok
// SIG undefined FUN_146d9a348(void)

void FUN_146d9a348(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = FUN_144a3809e((longlong)param_2,1);
    iVar2 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar2 = iVar1;
    }
  }
  if (iVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar2,1,1);
  }
  return;
}



// FUNCTION 146d9a3a0 FUN_146d9a3a0 body=119 status=ok
// SIG undefined FUN_146d9a3a0(void)

void FUN_146d9a3a0(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if (((uint)(iVar2 - iVar1) < 0x4000) && (iVar2 * 2 <= iVar1 * 3)) {
    return;
  }
  if (iVar1 == 0 || 0x40 < iVar2 - iVar1) {
    if (0 < iVar1) {
      iVar1 = FUN_144a3809e(iVar1,1);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if (iVar1 != iVar2) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,1,1);
    }
  }
  return;
}



// FUNCTION 146d9a45a FUN_146d9a45a body=79 status=ok
// SIG undefined FUN_146d9a45a(void)

void FUN_146d9a45a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = iVar1 - (param_3 + param_2);
    if (iVar2 != 0) {
      _Dst = (void *)((longlong)param_2 * 3 + *(longlong *)(param_1 + 8));
      memmove(_Dst,(void *)((longlong)param_3 * 3 + (longlong)_Dst),(longlong)iVar2 * 3);
      iVar1 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar1 - param_3;
  }
  return;
}



// FUNCTION 146d9a4b0 FUN_146d9a4b0 body=47 status=ok
// SIG undefined FUN_146d9a4b0(void)

longlong FUN_146d9a4b0(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d9a4e0 FUN_146d9a4e0 body=108 status=ok
// SIG undefined FUN_146d9a4e0(void)

void FUN_146d9a4e0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 3,1);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 3)) {
      uVar2 = uVar1 / 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,3,1);
  }
  return;
}



// FUNCTION 146d9a54c FUN_146d9a54c body=63 status=ok
// SIG undefined FUN_146d9a54c(void)

void FUN_146d9a54c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d9a58c(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,3,1);
  }
  return;
}



// FUNCTION 146d9a58c FUN_146d9a58c body=108 status=ok
// SIG undefined FUN_146d9a58c(void)

ulonglong FUN_146d9a58c(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 3) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 3,1);
      uVar1 = uVar1 / 3;
    }
  }
  return uVar1;
}



// FUNCTION 146d9a5f8 FUN_146d9a5f8 body=149 status=ok
// SIG undefined FUN_146d9a5f8(void)

void FUN_146d9a5f8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_144a1a59e((longlong *)(param_1 + 8),*(undefined4 *)(param_2 + 0x10),0);
  FUN_146d9aeac((longlong *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x10),0);
  FUN_1448c4dd6((longlong *)(param_1 + 0x38),*(undefined4 *)(param_2 + 0x10),0);
  if (0 < *(int *)(param_2 + 0x10)) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 8) + lVar2 * 4) =
           *(undefined4 *)(*(longlong *)(param_2 + 8) + lVar1);
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + lVar2) =
           *(undefined1 *)(*(longlong *)(param_2 + 8) + 0xb + lVar1);
      *(undefined1 *)(*(longlong *)(param_1 + 0x38) + lVar2) =
           *(undefined1 *)(*(longlong *)(param_2 + 8) + 0xd + lVar1);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while (lVar2 < *(int *)(param_2 + 0x10));
  }
  return;
}



// FUNCTION 146d9a68d FUN_146d9a68d body=252 status=ok
// SIG undefined FUN_146d9a68d(void)

longlong * FUN_146d9a68d(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 7,(longlong)*(int *)((longlong)param_2 + 0xc) << 7
            );
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_146d9b08c(param_2);
    }
    FUN_146d9b018(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_1467fd8a5(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x80;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146d9a78b FUN_146d9a78b body=465 status=ok
// SIG undefined FUN_146d9a78b(void)

longlong * FUN_146d9a78b(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  float *pfVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  int local_40;
  float local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  local_40 = (int)param_2[1];
  puVar3 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_40,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_40);
    }
  }
  else {
    local_40 = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if (local_40 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_40);
  }
  if (*(int *)((longlong)param_2 + 0xc) < local_40) {
    FUN_140cb0586(param_2);
  }
  FUN_1400bd09c(param_2,local_40,1);
  if (0 < local_40) {
    lVar7 = 0;
    lVar6 = 0;
    do {
      lVar4 = *param_2;
      if (*(int *)((longlong)param_1 + 0x44) < 0x3ec) {
        local_3c = (float)*(double *)(lVar4 + lVar6 * 8);
        puVar3 = (ulonglong *)param_1[1];
        pfVar2 = (float *)*puVar3 + 1;
        if ((float *)puVar3[1] < pfVar2) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,&local_3c,4);
          }
          else {
            thunk_FUN_14572512c(param_1,&local_3c);
          }
        }
        else {
          local_3c = *(float *)*puVar3;
          *puVar3 = (ulonglong)pfVar2;
        }
        if ((*(byte *)(param_1 + 5) & 1) != 0) {
          *(double *)(lVar4 + lVar6 * 8) = (double)local_3c;
        }
      }
      else {
        puVar5 = *(undefined8 **)param_1[1];
        if ((undefined8 *)((longlong *)param_1[1])[1] < puVar5 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,lVar4 + lVar7,8);
          }
          else {
            thunk_FUN_146821949(param_1,lVar4 + lVar7);
          }
        }
        else {
          *(undefined8 *)(lVar4 + lVar6 * 8) = *puVar5;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
        }
      }
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 8;
    } while (lVar6 < local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146d9a95e FUN_146d9a95e body=282 status=ok
// SIG undefined FUN_146d9a95e(void)

longlong * FUN_146d9a95e(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1],(longlong)*(int *)((longlong)param_2 + 0xc));
  local_24 = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_24);
    }
  }
  else {
    local_24 = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_24) {
    if (*(int *)((longlong)param_2 + 0xc) < local_24) {
      FUN_146d9a1bc(param_2);
    }
    FUN_1402183e6(param_2,local_24,1);
    if (0 < local_24) {
      lVar4 = 0;
      do {
        puVar3 = *(undefined1 **)param_1[1];
        if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)(*param_2 + lVar4),1);
        }
        else {
          *(undefined1 *)(*param_2 + lVar4) = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < local_24);
    }
    if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_24);
}



// FUNCTION 146d9aa7a FUN_146d9aa7a body=277 status=ok
// SIG undefined FUN_146d9aa7a(void)

longlong * FUN_146d9aa7a(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1],(longlong)*(int *)((longlong)param_2 + 0xc));
  local_24 = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_24);
    }
  }
  else {
    local_24 = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_24) {
    if (*(int *)((longlong)param_2 + 0xc) < local_24) {
      FUN_146d9ae54(param_2);
    }
    FUN_146d9aeac(param_2,local_24,1);
    if (0 < local_24) {
      lVar4 = 0;
      do {
        puVar3 = *(undefined1 **)param_1[1];
        if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)(*param_2 + lVar4),1);
        }
        else {
          *(undefined1 *)(*param_2 + lVar4) = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < local_24);
    }
    if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_24);
}



// FUNCTION 146d9ab91 FUN_146d9ab91 body=232 status=ok
// SIG undefined FUN_146d9ab91(void)

longlong * FUN_146d9ab91(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_146d99ffe(param_2);
    }
    FUN_140322ce4(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146d9b1a2(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 8;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146d9ac7c FUN_146d9ac7c body=62 status=ok
// SIG undefined FUN_146d9ac7c(void)

void FUN_146d9ac7c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146d9ad08 FUN_146d9ad08 body=67 status=ok
// SIG undefined FUN_146d9ad08(void)

void FUN_146d9ad08(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = iVar1 - (param_3 + param_2);
    if (iVar2 != 0) {
      _Dst = (void *)((longlong)param_2 + *(longlong *)(param_1 + 8));
      memmove(_Dst,(void *)((longlong)param_3 + (longlong)_Dst),(longlong)iVar2);
      iVar1 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar1 - param_3;
  }
  return;
}



// FUNCTION 146d9ad4c FUN_146d9ad4c body=72 status=ok
// SIG undefined FUN_146d9ad4c(void)

void FUN_146d9ad4c(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)((longlong)(int)param_2 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar1 - iVar3) + *(longlong *)(param_1 + 8)),(longlong)iVar3);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  return;
}



// FUNCTION 146d9ad9a FUN_146d9ad9a body=137 status=ok
// SIG undefined FUN_146d9ad9a(void)

void FUN_146d9ad9a(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
    FUN_146d9af22((longlong *)(param_3 + 8),iVar2);
  }
  *(undefined1 *)(*(longlong *)(param_3 + 8) + (longlong)iVar2) =
       *(undefined1 *)(lVar1 + (int)param_2);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = ~param_2 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)((longlong)(int)param_2 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar2 - iVar4) + *(longlong *)(param_1 + 8)),(longlong)iVar4);
    iVar2 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar2 + -1;
  return;
}



// FUNCTION 146d9ae24 FUN_146d9ae24 body=47 status=ok
// SIG undefined FUN_146d9ae24(void)

longlong FUN_146d9ae24(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d9ae54 FUN_146d9ae54 body=88 status=ok
// SIG undefined FUN_146d9ae54(void)

void FUN_146d9ae54(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = FUN_144a3809e((longlong)param_2,1);
    iVar2 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar2 = iVar1;
    }
  }
  if (iVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar2,1,1);
  }
  return;
}



// FUNCTION 146d9aeac FUN_146d9aeac body=116 status=ok
// SIG undefined FUN_146d9aeac(void)

void FUN_146d9aeac(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146d9af22(param_1);
    }
    memset((void *)((longlong)iVar1 + *param_1),0,(longlong)(param_2 - iVar1));
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146d9afa0(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146d9af22 FUN_146d9af22 body=124 status=ok
// SIG undefined FUN_146d9af22(void)

void FUN_146d9af22(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    iVar2 = FUN_144a3809e(lVar4,1);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar5 = iVar2;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146d9afa0 FUN_146d9afa0 body=119 status=ok
// SIG undefined FUN_146d9afa0(void)

void FUN_146d9afa0(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if (((uint)(iVar2 - iVar1) < 0x4000) && (iVar2 * 2 <= iVar1 * 3)) {
    return;
  }
  if (iVar1 == 0 || 0x40 < iVar2 - iVar1) {
    if (0 < iVar1) {
      iVar1 = FUN_144a3809e(iVar1,1);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if (iVar1 != iVar2) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,1,1);
    }
  }
  return;
}



// FUNCTION 146d9b018 FUN_146d9b018 body=115 status=ok
// SIG undefined FUN_146d9b018(void)

void FUN_146d9b018(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146d8d064(param_1,iVar1);
    }
    FUN_146d9b0ec((longlong)iVar1 * 0x80 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146d9b100(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146d9b08c FUN_146d9b08c body=96 status=ok
// SIG undefined FUN_146d9b08c(void)

void FUN_146d9b08c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 7,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 7)) {
      uVar2 = uVar1 >> 7 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x80,0x10);
  }
  return;
}



// FUNCTION 146d9b0ec FUN_146d9b0ec body=19 status=ok
// SIG undefined FUN_146d9b0ec(void)

void FUN_146d9b0ec(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 7);
    return;
  }
  return;
}



// FUNCTION 146d9b100 FUN_146d9b100 body=63 status=ok
// SIG undefined FUN_146d9b100(void)

void FUN_146d9b100(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d9b140(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x80,0x10);
  }
  return;
}



// FUNCTION 146d9b140 FUN_146d9b140 body=97 status=ok
// SIG undefined FUN_146d9b140(void)

ulonglong FUN_146d9b140(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff80U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 7,0x10);
      uVar1 = uVar1 >> 7;
    }
  }
  return uVar1;
}



// FUNCTION 146d9b1a2 FUN_146d9b1a2 body=175 status=ok
// SIG undefined FUN_146d9b1a2(void)

void FUN_146d9b1a2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x218))
            (*(longlong **)(param_1 + 0x90),&DAT_149e3cc18);
  iVar2 = FUN_1448332aa(*(undefined8 *)(param_1 + 0x90),&DAT_149e3cc18);
  if (4 < iVar2) {
    local_28 = *param_2;
    FUN_146d9b252(param_1);
    if ((*(byte *)(*(longlong *)(param_1 + 0x90) + 0x28) & 1) != 0) {
      lVar1 = *param_2;
      if ((lVar1 != local_28) && (*param_2 = local_28, lVar1 != 0)) {
        FUN_140191cfe(lVar1);
        FUN_1400020a8(lVar1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d9b252 FUN_146d9b252 body=956 status=ok
// SIG undefined FUN_146d9b252(void)

void FUN_146d9b252(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  uint local_4c;
  ulonglong *local_48;
  uint *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar9 = *(longlong **)(param_1 + 0x90);
  puVar8 = (ulonglong *)plVar9[1];
  puVar1 = (uint *)*puVar8 + 1;
  if ((uint *)puVar8[1] < puVar1) {
    local_48 = (ulonglong *)CONCAT44(local_48._4_4_,(uint)(*param_2 != 0));
    (**(code **)(*plVar9 + 0x170))(plVar9,&local_48,4);
    uVar5 = (uint)local_48;
    if (1 < (uint)local_48) {
      FUN_14572541c(plVar9);
      uVar5 = (uint)local_48;
    }
  }
  else {
    uVar5 = *(uint *)*puVar8;
    *puVar8 = (ulonglong)puVar1;
  }
  if (uVar5 == 0) {
    *param_2 = 0;
    goto LAB_146d9b444;
  }
  plVar9 = *(longlong **)(param_1 + 0x90);
  if ((*(byte *)(plVar9 + 5) & 1) == 0) {
    if (((*(byte *)(plVar9 + 5) & 4) != 0) || ((*(byte *)((longlong)plVar9 + 0x2b) & 8) != 0)) {
      local_58 = *param_2;
      lVar2 = *(longlong *)(param_1 + 0x98);
      if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
        uVar5 = ((uint)(local_58 >> 0x14) & 0xffff ^ (uint)(local_58 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        lVar7 = lVar2 + 0x48;
        if (*(longlong *)(lVar2 + 0x50) != 0) {
          lVar7 = *(longlong *)(lVar2 + 0x50);
        }
        iVar6 = *(int *)(lVar7 + (ulonglong)(*(int *)(lVar2 + 0x58) - 1U & (uVar5 >> 0x10 ^ uVar5))
                                 * 4);
        if (iVar6 != -1) {
          lVar7 = *(longlong *)(lVar2 + 0x10);
          iVar10 = iVar6;
          do {
            if (*(ulonglong *)(lVar7 + (longlong)iVar10 * 0x18) == local_58) goto LAB_146d9b42b;
            iVar10 = *(int *)(lVar7 + (longlong)iVar10 * 0x18 + 0x10);
          } while (iVar10 != -1);
        }
      }
      FUN_14042e8e0(lVar2 + 0x60,&local_48,&local_58,0);
      local_4c = *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0);
      *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0) = local_4c + 1;
      local_40 = &local_4c;
      local_48 = &local_58;
      FUN_1467c4600(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      plVar9 = *(longlong **)(param_1 + 0x90);
      puVar8 = (ulonglong *)plVar9[1];
      puVar1 = (uint *)*puVar8 + 1;
      if ((uint *)puVar8[1] < puVar1) {
        if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar9 + 0x170))(plVar9,&local_4c,4);
        }
        else {
          thunk_FUN_14572512c(plVar9,&local_4c);
        }
      }
      else {
        local_4c = *(uint *)*puVar8;
        *puVar8 = (ulonglong)puVar1;
      }
      FUN_146d9b610(param_1,param_2);
      FUN_146ca4900(*(longlong *)(param_1 + 0x98) + 0x60,local_58);
    }
    goto LAB_146d9b444;
  }
  puVar8 = (ulonglong *)plVar9[1];
  puVar1 = (uint *)*puVar8 + 1;
  if ((uint *)puVar8[1] < puVar1) {
    if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar9 + 0x170))(plVar9,&local_4c,4);
    }
    else {
      thunk_FUN_14572512c(plVar9,&local_4c);
    }
  }
  else {
    local_4c = *(uint *)*puVar8;
    *puVar8 = (ulonglong)puVar1;
  }
  if (-1 < (int)local_4c) {
    iVar6 = local_4c + 1;
    plVar9 = *(longlong **)(param_1 + 0x98);
    iVar10 = (int)plVar9[1];
    uVar5 = iVar6 - iVar10;
    if (uVar5 != 0 && iVar10 <= iVar6) {
      *(int *)(plVar9 + 1) = iVar6;
      if ((uint)(*(int *)((longlong)plVar9 + 0xc) - iVar10) < uVar5) {
        FUN_1456bd870(plVar9);
      }
      memset((void *)((longlong)iVar10 * 8 + *plVar9),0,(ulonglong)uVar5 << 3);
      if ((int)local_4c < 0) goto LAB_146d9b564;
      plVar9 = *(longlong **)(param_1 + 0x98);
      iVar10 = (int)plVar9[1];
    }
    if ((int)local_4c < iVar10) {
      uVar4 = *(ulonglong *)(*plVar9 + (ulonglong)local_4c * 8);
      if (uVar4 == 0) {
        FUN_146d9b610(param_1,param_2);
        local_58 = *param_2;
        local_40 = &local_4c;
        *(ulonglong *)(**(longlong **)(param_1 + 0x98) + (longlong)(int)local_4c * 8) = local_58;
        local_48 = &local_58;
        FUN_14004a1c4(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      }
      else {
        *param_2 = uVar4;
      }
      goto LAB_146d9b444;
    }
  }
LAB_146d9b564:
  FUN_1468216ba(*(undefined8 *)(param_1 + 0x90));
LAB_146d9b444:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar6 = (int)puVar8[2], iVar6 != -1) {
LAB_146d9b42b:
    puVar8 = (ulonglong *)(lVar7 + (longlong)iVar6 * 0x18);
    if (*puVar8 == local_58) goto LAB_146d9b4a0;
  }
  puVar8 = (ulonglong *)0x0;
LAB_146d9b4a0:
  puVar3 = *(undefined4 **)plVar9[1];
  if ((undefined4 *)((undefined8 *)plVar9[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar9 + 0x170))(plVar9,puVar8 + 1,4);
    }
    else {
      thunk_FUN_14572512c();
    }
  }
  else {
    *(undefined4 *)(puVar8 + 1) = *puVar3;
    *(longlong *)plVar9[1] = *(longlong *)plVar9[1] + 4;
  }
  goto LAB_146d9b444;
}



// FUNCTION 146d9b610 FUN_146d9b610 body=81 status=ok
// SIG undefined FUN_146d9b610(void)

void FUN_146d9b610(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    lVar1 = FUN_14001cc68(0x48,0x10);
    FUN_14096ae0a(lVar1);
    if (lVar1 != 0) {
      *param_2 = lVar1;
      lVar2 = lVar1;
    }
  }
  FUN_146ca2b7c(lVar2,param_1);
  return;
}



// FUNCTION 146d9b6a4 FUN_146d9b6a4 body=76 status=ok
// SIG undefined FUN_146d9b6a4(void)

void FUN_146d9b6a4(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = iVar1 - (param_3 + param_2);
    if (iVar2 != 0) {
      _Dst = (void *)((longlong)param_2 * 4 + *(longlong *)(param_1 + 8));
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 4),(longlong)iVar2 << 2);
      iVar1 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar1 - param_3;
  }
  return;
}



// FUNCTION 146d9b6f6 FUN_146d9b6f6 body=47 status=ok
// SIG undefined FUN_146d9b6f6(void)

longlong FUN_146d9b6f6(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d9b768 FUN_146d9b768 body=79 status=ok
// SIG undefined FUN_146d9b768(void)

void FUN_146d9b768(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  if (param_3 != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    iVar1 = iVar2 - (param_3 + param_2);
    if (iVar1 != 0) {
      _Dst = (void *)((longlong)param_2 * 0x10 + *(longlong *)(param_1 + 8));
      memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar1 << 4);
      iVar2 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar2 - param_3;
  }
  return;
}



// FUNCTION 146d9b7be FUN_146d9b7be body=157 status=ok
// SIG undefined FUN_146d9b7be(void)

void FUN_146d9b7be(longlong param_1,uint param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 0x10);
  iVar3 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar3 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar3 + 1U) {
    FUN_14085aa16((longlong *)(param_3 + 8),iVar3);
  }
  uVar2 = puVar6[1];
  puVar1 = (undefined8 *)(*(longlong *)(param_3 + 8) + (longlong)iVar3 * 0x10);
  *puVar1 = *puVar6;
  puVar1[1] = uVar2;
  iVar3 = *(int *)(param_1 + 0x10);
  iVar5 = ~param_2 + iVar3;
  if (iVar5 != 0) {
    iVar4 = 1;
    if (iVar5 < 1) {
      iVar4 = iVar5;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar3 - iVar4) * 0x10 + *(longlong *)(param_1 + 8)),
            (longlong)iVar4 << 4);
    iVar3 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar3 + -1;
  return;
}



// FUNCTION 146d9b85c FUN_146d9b85c body=47 status=ok
// SIG undefined FUN_146d9b85c(void)

longlong FUN_146d9b85c(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d9b88c FUN_146d9b88c body=96 status=ok
// SIG undefined FUN_146d9b88c(void)

void FUN_146d9b88c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 146d9b8ec FUN_146d9b8ec body=63 status=ok
// SIG undefined FUN_146d9b8ec(void)

void FUN_146d9b8ec(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d9b92c(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146d9b92c FUN_146d9b92c body=97 status=ok
// SIG undefined FUN_146d9b92c(void)

ulonglong FUN_146d9b92c(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146d9b9d0 FUN_146d9b9d0 body=90 status=ok
// SIG undefined FUN_146d9b9d0(void)

void FUN_146d9b9d0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  if (param_3 != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    iVar1 = iVar2 - (param_3 + param_2);
    if (iVar1 != 0) {
      _Dst = (void *)((longlong)param_2 * 0x60 + *(longlong *)(param_1 + 8));
      memmove(_Dst,(void *)((longlong)param_3 * 0x60 + (longlong)_Dst),(longlong)iVar1 * 0x60);
      iVar2 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar2 - param_3;
  }
  return;
}



// FUNCTION 146d9ba30 FUN_146d9ba30 body=173 status=ok
// SIG undefined FUN_146d9ba30(void)

void FUN_146d9ba30(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
    FUN_140898a32((longlong *)(param_3 + 8),iVar2);
  }
  puVar6 = (undefined8 *)(lVar1 + (longlong)(int)param_2 * 0x60);
  puVar7 = (undefined8 *)((longlong)iVar2 * 0x60 + *(longlong *)(param_3 + 8));
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  iVar5 = ~param_2 + iVar2;
  if (iVar5 != 0) {
    iVar3 = 1;
    if (iVar5 < 1) {
      iVar3 = iVar5;
    }
    memmove((void *)((longlong)(int)param_2 * 0x60 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar2 - iVar3) * 0x60 + *(longlong *)(param_1 + 8)),
            (longlong)iVar3 * 0x60);
    iVar2 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar2 + -1;
  return;
}



// FUNCTION 146d9bade FUN_146d9bade body=47 status=ok
// SIG undefined FUN_146d9bade(void)

longlong FUN_146d9bade(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d9bb0e FUN_146d9bb0e body=113 status=ok
// SIG undefined FUN_146d9bb0e(void)

void FUN_146d9bb0e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x60,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x60)) {
      uVar2 = uVar1 / 0x60 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x60,0x10);
  }
  return;
}



// FUNCTION 146d9bb80 FUN_146d9bb80 body=63 status=ok
// SIG undefined FUN_146d9bb80(void)

void FUN_146d9bb80(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d9bbc0(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x60,0x10);
  }
  return;
}



// FUNCTION 146d9bbc0 FUN_146d9bbc0 body=117 status=ok
// SIG undefined FUN_146d9bbc0(void)

ulonglong FUN_146d9bbc0(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x60) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x60,0x10);
      uVar1 = uVar1 / 0x60;
    }
  }
  return uVar1;
}



// FUNCTION 146d9bc78 FUN_146d9bc78 body=99 status=ok
// SIG undefined FUN_146d9bc78(void)

void FUN_146d9bc78(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  if (param_3 != 0) {
    _Dst = (void *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 8));
    FUN_1401606fd(_Dst,param_3);
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = iVar1 - (param_2 + param_3);
    if (iVar2 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 8),(longlong)iVar2 << 3);
      iVar1 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar1 - param_3;
  }
  return;
}



// FUNCTION 146d9bce2 FUN_146d9bce2 body=104 status=ok
// SIG undefined FUN_146d9bce2(void)

void FUN_146d9bce2(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar1 + 1U) {
    FUN_1408fd834((longlong *)(param_3 + 8),iVar1);
  }
  lVar3 = (longlong)param_2;
  *(undefined8 *)(*(longlong *)(param_3 + 8) + (longlong)iVar1 * 8) =
       *(undefined8 *)(lVar2 + lVar3 * 8);
  *(undefined8 *)(lVar2 + lVar3 * 8) = 0;
  FUN_140160698(param_1 + 8,lVar3,1);
  return;
}



// FUNCTION 146d9bd4a FUN_146d9bd4a body=59 status=ok
// SIG undefined FUN_146d9bd4a(void)

longlong FUN_146d9bd4a(longlong param_1,int param_2)

{
  FUN_1401606fd(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d9bd86 FUN_146d9bd86 body=96 status=ok
// SIG undefined FUN_146d9bd86(void)

void FUN_146d9bd86(longlong param_1,int param_2)

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



// FUNCTION 146d9bde6 FUN_146d9bde6 body=63 status=ok
// SIG undefined FUN_146d9bde6(void)

void FUN_146d9bde6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d9be26(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146d9be26 FUN_146d9be26 body=97 status=ok
// SIG undefined FUN_146d9be26(void)

ulonglong FUN_146d9be26(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146d9bee0 FUN_146d9bee0 body=120 status=ok
// SIG undefined FUN_146d9bee0(void)

void FUN_146d9bee0(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar1 + 1U) {
    FUN_1408a4922((longlong *)(param_3 + 8),iVar1);
  }
  FUN_146d9c124((longlong)iVar1 * 0x50 + *(longlong *)(param_3 + 8),lVar2 + (longlong)param_2 * 0x50
               );
  FUN_14014a648(param_1 + 8,param_2,1);
  return;
}



// FUNCTION 146d9bf58 FUN_146d9bf58 body=59 status=ok
// SIG undefined FUN_146d9bf58(void)

longlong FUN_146d9bf58(longlong param_1,int param_2)

{
  FUN_14014a6c2(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d9bf94 FUN_146d9bf94 body=113 status=ok
// SIG undefined FUN_146d9bf94(void)

void FUN_146d9bf94(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 146d9c006 FUN_146d9c006 body=104 status=ok
// SIG undefined FUN_146d9c006(void)

void FUN_146d9c006(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x50 + *param_1);
  FUN_14014a6c2(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x50 + (longlong)_Dst),(longlong)iVar2 * 0x50);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146d9c06e FUN_146d9c06e body=63 status=ok
// SIG undefined FUN_146d9c06e(void)

void FUN_146d9c06e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d9c0ae(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x50,8);
  }
  return;
}



// FUNCTION 146d9c0ae FUN_146d9c0ae body=117 status=ok
// SIG undefined FUN_146d9c0ae(void)

ulonglong FUN_146d9c0ae(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x50) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x50,8);
      uVar1 = uVar1 / 0x50;
    }
  }
  return uVar1;
}



// FUNCTION 146d9c124 FUN_146d9c124 body=123 status=ok
// SIG undefined FUN_146d9c124(void)

undefined8 * FUN_146d9c124(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_146d9c1a0();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 146d9c1a0 FUN_146d9c1a0 body=146 status=ok
// SIG undefined FUN_146d9c1a0(void)

longlong * FUN_146d9c1a0(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 146d9c28a FUN_146d9c28a body=139 status=ok
// SIG undefined FUN_146d9c28a(void)

void FUN_146d9c28a(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar1 + 1U) {
    FUN_1409bd656((longlong *)(param_3 + 8),iVar1);
  }
  lVar4 = (longlong)param_2 * 0x10;
  lVar3 = *(longlong *)(param_3 + 8);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar3 + lVar5) = 0;
  *(undefined8 *)(lVar3 + lVar5) = *(undefined8 *)(lVar2 + lVar4);
  *(undefined8 *)(lVar2 + lVar4) = 0;
  *(undefined4 *)(lVar3 + 8 + lVar5) = *(undefined4 *)(lVar2 + 8 + lVar4);
  *(undefined4 *)(lVar3 + 0xc + lVar5) = *(undefined4 *)(lVar2 + 0xc + lVar4);
  *(undefined8 *)(lVar2 + 8 + lVar4) = 0;
  FUN_140152fdc(param_1 + 8,(longlong)param_2,1);
  return;
}



// FUNCTION 146d9c316 FUN_146d9c316 body=59 status=ok
// SIG undefined FUN_146d9c316(void)

longlong FUN_146d9c316(longlong param_1,int param_2)

{
  FUN_14015304d(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d9c352 FUN_146d9c352 body=96 status=ok
// SIG undefined FUN_146d9c352(void)

void FUN_146d9c352(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 146d9c3b2 FUN_146d9c3b2 body=95 status=ok
// SIG undefined FUN_146d9c3b2(void)

void FUN_146d9c3b2(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_14015304d(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146d9c412 FUN_146d9c412 body=63 status=ok
// SIG undefined FUN_146d9c412(void)

void FUN_146d9c412(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d9c452(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146d9c452 FUN_146d9c452 body=97 status=ok
// SIG undefined FUN_146d9c452(void)

ulonglong FUN_146d9c452(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146d9c4f6 FUN_146d9c4f6 body=67 status=ok
// SIG undefined FUN_146d9c4f6(void)

void FUN_146d9c4f6(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = iVar1 - (param_3 + param_2);
    if (iVar2 != 0) {
      _Dst = (void *)((longlong)param_2 + *(longlong *)(param_1 + 8));
      memmove(_Dst,(void *)((longlong)param_3 + (longlong)_Dst),(longlong)iVar2);
      iVar1 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar1 - param_3;
  }
  return;
}



// FUNCTION 146d9c540 FUN_146d9c540 body=135 status=ok
// SIG undefined FUN_146d9c540(void)

void FUN_146d9c540(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
    FUN_1408b7b10((longlong *)(param_3 + 8),iVar2);
  }
  *(undefined1 *)(*(longlong *)(param_3 + 8) + (longlong)iVar2) =
       *(undefined1 *)(lVar1 + (int)param_2);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = ~param_2 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)((longlong)(int)param_2 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar2 - iVar4) + *(longlong *)(param_1 + 8)),(longlong)iVar4);
    iVar2 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar2 + -1;
  return;
}



// FUNCTION 146d9c5c8 FUN_146d9c5c8 body=47 status=ok
// SIG undefined FUN_146d9c5c8(void)

longlong FUN_146d9c5c8(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d9c5f8 FUN_146d9c5f8 body=88 status=ok
// SIG undefined FUN_146d9c5f8(void)

void FUN_146d9c5f8(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = FUN_144a3809e((longlong)param_2,1);
    iVar2 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar2 = iVar1;
    }
  }
  if (iVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar2,1,1);
  }
  return;
}



// FUNCTION 146d9c650 FUN_146d9c650 body=119 status=ok
// SIG undefined FUN_146d9c650(void)

void FUN_146d9c650(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if (((uint)(iVar2 - iVar1) < 0x4000) && (iVar2 * 2 <= iVar1 * 3)) {
    return;
  }
  if (iVar1 == 0 || 0x40 < iVar2 - iVar1) {
    if (0 < iVar1) {
      iVar1 = FUN_144a3809e(iVar1,1);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if (iVar1 != iVar2) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,1,1);
    }
  }
  return;
}



// FUNCTION 146d9c70a FUN_146d9c70a body=99 status=ok
// SIG undefined FUN_146d9c70a(void)

void FUN_146d9c70a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  if (param_3 != 0) {
    _Dst = (void *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 8));
    FUN_140143f97(_Dst,param_3);
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = iVar1 - (param_2 + param_3);
    if (iVar2 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 8),(longlong)iVar2 << 3);
      iVar1 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar1 - param_3;
  }
  return;
}



// FUNCTION 146d9c774 FUN_146d9c774 body=104 status=ok
// SIG undefined FUN_146d9c774(void)

void FUN_146d9c774(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar1 + 1U) {
    FUN_1408fda7e((longlong *)(param_3 + 8),iVar1);
  }
  lVar3 = (longlong)param_2;
  *(undefined8 *)(*(longlong *)(param_3 + 8) + (longlong)iVar1 * 8) =
       *(undefined8 *)(lVar2 + lVar3 * 8);
  *(undefined8 *)(lVar2 + lVar3 * 8) = 0;
  FUN_140143f32(param_1 + 8,lVar3,1);
  return;
}



// FUNCTION 146d9c7dc FUN_146d9c7dc body=59 status=ok
// SIG undefined FUN_146d9c7dc(void)

longlong FUN_146d9c7dc(longlong param_1,int param_2)

{
  FUN_140143f97(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d9c818 FUN_146d9c818 body=96 status=ok
// SIG undefined FUN_146d9c818(void)

void FUN_146d9c818(longlong param_1,int param_2)

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



// FUNCTION 146d9c878 FUN_146d9c878 body=63 status=ok
// SIG undefined FUN_146d9c878(void)

void FUN_146d9c878(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d9c8b8(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146d9c8b8 FUN_146d9c8b8 body=97 status=ok
// SIG undefined FUN_146d9c8b8(void)

ulonglong FUN_146d9c8b8(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146d9c91a FUN_146d9c91a body=38 status=ok
// SIG undefined FUN_146d9c91a(void)

undefined8 FUN_146d9c91a(undefined8 param_1,int param_2)

{
  FUN_1411244e8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d9c982 FUN_146d9c982 body=76 status=ok
// SIG undefined FUN_146d9c982(void)

void FUN_146d9c982(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = iVar1 - (param_3 + param_2);
    if (iVar2 != 0) {
      _Dst = (void *)((longlong)param_2 * 4 + *(longlong *)(param_1 + 8));
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 4),(longlong)iVar2 << 2);
      iVar1 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar1 - param_3;
  }
  return;
}



// FUNCTION 146d9c9d4 FUN_146d9c9d4 body=47 status=ok
// SIG undefined FUN_146d9c9d4(void)

longlong FUN_146d9c9d4(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d9ca46 FUN_146d9ca46 body=76 status=ok
// SIG undefined FUN_146d9ca46(void)

void FUN_146d9ca46(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = iVar1 - (param_3 + param_2);
    if (iVar2 != 0) {
      _Dst = (void *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 8));
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 8),(longlong)iVar2 << 3);
      iVar1 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar1 - param_3;
  }
  return;
}



// FUNCTION 146d9ca98 FUN_146d9ca98 body=47 status=ok
// SIG undefined FUN_146d9ca98(void)

longlong FUN_146d9ca98(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d9cac8 FUN_146d9cac8 body=96 status=ok
// SIG undefined FUN_146d9cac8(void)

void FUN_146d9cac8(longlong param_1,int param_2)

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



// FUNCTION 146d9cb6a FUN_146d9cb6a body=76 status=ok
// SIG undefined FUN_146d9cb6a(void)

void FUN_146d9cb6a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = iVar1 - (param_3 + param_2);
    if (iVar2 != 0) {
      _Dst = (void *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 8));
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 8),(longlong)iVar2 << 3);
      iVar1 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar1 - param_3;
  }
  return;
}



// FUNCTION 146d9cbbc FUN_146d9cbbc body=47 status=ok
// SIG undefined FUN_146d9cbbc(void)

longlong FUN_146d9cbbc(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d9cbec FUN_146d9cbec body=96 status=ok
// SIG undefined FUN_146d9cbec(void)

void FUN_146d9cbec(longlong param_1,int param_2)

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



// FUNCTION 146d9cc4c FUN_146d9cc4c body=63 status=ok
// SIG undefined FUN_146d9cc4c(void)

void FUN_146d9cc4c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d9cc8c(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146d9cc8c FUN_146d9cc8c body=97 status=ok
// SIG undefined FUN_146d9cc8c(void)

ulonglong FUN_146d9cc8c(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146d9cd30 FUN_146d9cd30 body=76 status=ok
// SIG undefined FUN_146d9cd30(void)

void FUN_146d9cd30(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = iVar1 - (param_3 + param_2);
    if (iVar2 != 0) {
      _Dst = (void *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 8));
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 8),(longlong)iVar2 << 3);
      iVar1 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar1 - param_3;
  }
  return;
}



// FUNCTION 146d9cd82 FUN_146d9cd82 body=47 status=ok
// SIG undefined FUN_146d9cd82(void)

longlong FUN_146d9cd82(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d9cdb2 FUN_146d9cdb2 body=96 status=ok
// SIG undefined FUN_146d9cdb2(void)

void FUN_146d9cdb2(longlong param_1,int param_2)

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



// FUNCTION 146d9ce12 FUN_146d9ce12 body=63 status=ok
// SIG undefined FUN_146d9ce12(void)

void FUN_146d9ce12(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d9ce52(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146d9ce52 FUN_146d9ce52 body=97 status=ok
// SIG undefined FUN_146d9ce52(void)

ulonglong FUN_146d9ce52(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146d9cf0c FUN_146d9cf0c body=59 status=ok
// SIG undefined FUN_146d9cf0c(void)

longlong FUN_146d9cf0c(longlong param_1,int param_2)

{
  FUN_14006c805(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d9cf48 FUN_146d9cf48 body=113 status=ok
// SIG undefined FUN_146d9cf48(void)

void FUN_146d9cf48(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 146d9cfba FUN_146d9cfba body=101 status=ok
// SIG undefined FUN_146d9cfba(void)

void FUN_146d9cfba(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x18 + *param_1);
  FUN_14006c805(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar2 * 0x18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146d9d020 FUN_146d9d020 body=63 status=ok
// SIG undefined FUN_146d9d020(void)

void FUN_146d9d020(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d9d060(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 146d9d060 FUN_146d9d060 body=117 status=ok
// SIG undefined FUN_146d9d060(void)

ulonglong FUN_146d9d060(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x18) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 146d9d118 FUN_146d9d118 body=74 status=ok
// SIG undefined FUN_146d9d118(void)

void FUN_146d9d118(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = iVar1 - (param_3 + param_2);
    if (iVar2 != 0) {
      _Dst = (void *)((longlong)param_2 * 2 + *(longlong *)(param_1 + 8));
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 2),(longlong)iVar2 * 2);
      iVar1 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar1 - param_3;
  }
  return;
}



// FUNCTION 146d9d168 FUN_146d9d168 body=47 status=ok
// SIG undefined FUN_146d9d168(void)

longlong FUN_146d9d168(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d9d198 FUN_146d9d198 body=94 status=ok
// SIG undefined FUN_146d9d198(void)

void FUN_146d9d198(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 2,2);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 1)) {
      uVar2 = uVar1 >> 1 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,2,2);
  }
  return;
}



// FUNCTION 146d9d1f6 FUN_146d9d1f6 body=63 status=ok
// SIG undefined FUN_146d9d1f6(void)

void FUN_146d9d1f6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d9d236(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,2,2);
  }
  return;
}



// FUNCTION 146d9d236 FUN_146d9d236 body=95 status=ok
// SIG undefined FUN_146d9d236(void)

ulonglong FUN_146d9d236(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x7fffffffffffe000U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e(param_2 * 2,2);
      uVar1 = uVar1 >> 1;
    }
  }
  return uVar1;
}



// FUNCTION 146d9d2d8 FUN_146d9d2d8 body=67 status=ok
// SIG undefined FUN_146d9d2d8(void)

void FUN_146d9d2d8(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = iVar1 - (param_3 + param_2);
    if (iVar2 != 0) {
      _Dst = (void *)((longlong)param_2 + *(longlong *)(param_1 + 8));
      memmove(_Dst,(void *)((longlong)param_3 + (longlong)_Dst),(longlong)iVar2);
      iVar1 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar1 - param_3;
  }
  return;
}



// FUNCTION 146d9d322 FUN_146d9d322 body=47 status=ok
// SIG undefined FUN_146d9d322(void)

longlong FUN_146d9d322(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d9d352 FUN_146d9d352 body=88 status=ok
// SIG undefined FUN_146d9d352(void)

void FUN_146d9d352(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = FUN_144a3809e((longlong)param_2,1);
    iVar2 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar2 = iVar1;
    }
  }
  if (iVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar2,1,1);
  }
  return;
}



// FUNCTION 146d9d3aa FUN_146d9d3aa body=119 status=ok
// SIG undefined FUN_146d9d3aa(void)

void FUN_146d9d3aa(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if (((uint)(iVar2 - iVar1) < 0x4000) && (iVar2 * 2 <= iVar1 * 3)) {
    return;
  }
  if (iVar1 == 0 || 0x40 < iVar2 - iVar1) {
    if (0 < iVar1) {
      iVar1 = FUN_144a3809e(iVar1,1);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if (iVar1 != iVar2) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,1,1);
    }
  }
  return;
}



// FUNCTION 146d9d47a FUN_146d9d47a body=59 status=ok
// SIG undefined FUN_146d9d47a(void)

longlong FUN_146d9d47a(longlong param_1,int param_2)

{
  FUN_14005b1fd(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d9d4b6 FUN_146d9d4b6 body=96 status=ok
// SIG undefined FUN_146d9d4b6(void)

void FUN_146d9d4b6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 146d9d516 FUN_146d9d516 body=95 status=ok
// SIG undefined FUN_146d9d516(void)

void FUN_146d9d516(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_14005b1fd(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146d9d576 FUN_146d9d576 body=63 status=ok
// SIG undefined FUN_146d9d576(void)

void FUN_146d9d576(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d9d5b6(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146d9d5b6 FUN_146d9d5b6 body=97 status=ok
// SIG undefined FUN_146d9d5b6(void)

ulonglong FUN_146d9d5b6(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146d9d670 FUN_146d9d670 body=59 status=ok
// SIG undefined FUN_146d9d670(void)

longlong FUN_146d9d670(longlong param_1,int param_2)

{
  FUN_1400565a5(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d9d6ac FUN_146d9d6ac body=96 status=ok
// SIG undefined FUN_146d9d6ac(void)

void FUN_146d9d6ac(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 146d9d70c FUN_146d9d70c body=95 status=ok
// SIG undefined FUN_146d9d70c(void)

void FUN_146d9d70c(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_1400565a5(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146d9d76c FUN_146d9d76c body=63 status=ok
// SIG undefined FUN_146d9d76c(void)

void FUN_146d9d76c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d9d7ac(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146d9d7ac FUN_146d9d7ac body=97 status=ok
// SIG undefined FUN_146d9d7ac(void)

ulonglong FUN_146d9d7ac(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146d9d866 FUN_146d9d866 body=59 status=ok
// SIG undefined FUN_146d9d866(void)

longlong FUN_146d9d866(longlong param_1,int param_2)

{
  FUN_140056653(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d9d8a2 FUN_146d9d8a2 body=96 status=ok
// SIG undefined FUN_146d9d8a2(void)

void FUN_146d9d8a2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 146d9d902 FUN_146d9d902 body=95 status=ok
// SIG undefined FUN_146d9d902(void)

void FUN_146d9d902(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_140056653(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146d9d962 FUN_146d9d962 body=63 status=ok
// SIG undefined FUN_146d9d962(void)

void FUN_146d9d962(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d9d9a2(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146d9d9a2 FUN_146d9d9a2 body=97 status=ok
// SIG undefined FUN_146d9d9a2(void)

ulonglong FUN_146d9d9a2(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146d9da46 FUN_146d9da46 body=76 status=ok
// SIG undefined FUN_146d9da46(void)

void FUN_146d9da46(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = iVar1 - (param_3 + param_2);
    if (iVar2 != 0) {
      _Dst = (void *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 8));
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 8),(longlong)iVar2 << 3);
      iVar1 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar1 - param_3;
  }
  return;
}



// FUNCTION 146d9da98 FUN_146d9da98 body=47 status=ok
// SIG undefined FUN_146d9da98(void)

longlong FUN_146d9da98(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d9dac8 FUN_146d9dac8 body=63 status=ok
// SIG undefined FUN_146d9dac8(void)

void FUN_146d9dac8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d9db08(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146d9db08 FUN_146d9db08 body=97 status=ok
// SIG undefined FUN_146d9db08(void)

ulonglong FUN_146d9db08(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146d9dbac FUN_146d9dbac body=67 status=ok
// SIG undefined FUN_146d9dbac(void)

void FUN_146d9dbac(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = iVar1 - (param_3 + param_2);
    if (iVar2 != 0) {
      _Dst = (void *)((longlong)param_2 + *(longlong *)(param_1 + 8));
      memmove(_Dst,(void *)((longlong)param_3 + (longlong)_Dst),(longlong)iVar2);
      iVar1 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar1 - param_3;
  }
  return;
}



// FUNCTION 146d9dbf6 FUN_146d9dbf6 body=47 status=ok
// SIG undefined FUN_146d9dbf6(void)

longlong FUN_146d9dbf6(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d9dc26 FUN_146d9dc26 body=88 status=ok
// SIG undefined FUN_146d9dc26(void)

void FUN_146d9dc26(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = FUN_144a3809e((longlong)param_2,1);
    iVar2 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar2 = iVar1;
    }
  }
  if (iVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar2,1,1);
  }
  return;
}



// FUNCTION 146d9dc7e FUN_146d9dc7e body=119 status=ok
// SIG undefined FUN_146d9dc7e(void)

void FUN_146d9dc7e(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if (((uint)(iVar2 - iVar1) < 0x4000) && (iVar2 * 2 <= iVar1 * 3)) {
    return;
  }
  if (iVar1 == 0 || 0x40 < iVar2 - iVar1) {
    if (0 < iVar1) {
      iVar1 = FUN_144a3809e(iVar1,1);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if (iVar1 != iVar2) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,1,1);
    }
  }
  return;
}



// FUNCTION 146d9dd38 FUN_146d9dd38 body=76 status=ok
// SIG undefined FUN_146d9dd38(void)

void FUN_146d9dd38(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = iVar1 - (param_3 + param_2);
    if (iVar2 != 0) {
      _Dst = (void *)((longlong)param_2 * 4 + *(longlong *)(param_1 + 8));
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 4),(longlong)iVar2 << 2);
      iVar1 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar1 - param_3;
  }
  return;
}



// FUNCTION 146d9dd8a FUN_146d9dd8a body=47 status=ok
// SIG undefined FUN_146d9dd8a(void)

longlong FUN_146d9dd8a(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d9ddba FUN_146d9ddba body=96 status=ok
// SIG undefined FUN_146d9ddba(void)

void FUN_146d9ddba(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 2,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 2)) {
      uVar2 = uVar1 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,4);
  }
  return;
}



// FUNCTION 146d9de1a FUN_146d9de1a body=63 status=ok
// SIG undefined FUN_146d9de1a(void)

void FUN_146d9de1a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d9de5a(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 146d9de5a FUN_146d9de5a body=97 status=ok
// SIG undefined FUN_146d9de5a(void)

ulonglong FUN_146d9de5a(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 146d9defe FUN_146d9defe body=76 status=ok
// SIG undefined FUN_146d9defe(void)

void FUN_146d9defe(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = iVar1 - (param_3 + param_2);
    if (iVar2 != 0) {
      _Dst = (void *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 8));
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 8),(longlong)iVar2 << 3);
      iVar1 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar1 - param_3;
  }
  return;
}



// FUNCTION 146d9df50 FUN_146d9df50 body=47 status=ok
// SIG undefined FUN_146d9df50(void)

longlong FUN_146d9df50(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146d9df80 FUN_146d9df80 body=96 status=ok
// SIG undefined FUN_146d9df80(void)

void FUN_146d9df80(longlong param_1,int param_2)

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



// FUNCTION 146d9dfe0 FUN_146d9dfe0 body=63 status=ok
// SIG undefined FUN_146d9dfe0(void)

void FUN_146d9dfe0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d9e020(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 146d9e020 FUN_146d9e020 body=97 status=ok
// SIG undefined FUN_146d9e020(void)

ulonglong FUN_146d9e020(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146d9e082 FUN_146d9e082 body=97 status=ok
// SIG undefined FUN_146d9e082(void)

void FUN_146d9e082(longlong param_1,int param_2,int param_3)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)(lVar2 + (longlong)param_2 * 8);
  FUN_144760452(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0x10);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 8),(longlong)iVar3 << 3);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 - param_3;
  return;
}



// FUNCTION 146d9e0e4 FUN_146d9e0e4 body=59 status=ok
// SIG undefined FUN_146d9e0e4(void)

void FUN_146d9e0e4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d9e120(param_1,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  if (iVar1 == *(int *)(param_1 + 0x14)) {
    return;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  FUN_140279634(param_1,*(undefined4 *)(param_1 + 0x10),iVar1,8);
  return;
}



// FUNCTION 146d9e120 FUN_146d9e120 body=105 status=ok
// SIG undefined FUN_146d9e120(void)

ulonglong FUN_146d9e120(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 1;
  if (1 < param_2) {
    iVar2 = param_3 - param_2;
    if (((longlong)iVar2 & 0x1ffffffffffff800U) == 0) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,0);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146d9e189 FUN_146d9e189 body=240 status=ok
// SIG undefined FUN_146d9e189(void)

longlong * FUN_146d9e189(longlong *param_1,longlong param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = *(int *)(param_2 + 0x10);
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)(param_2 + 0x14) < local_2c) {
      FUN_146d8acfa(param_2);
    }
    FUN_140279438(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar4 = 0;
      lVar5 = 0;
      do {
        lVar3 = *(longlong *)(param_2 + 8);
        if (*(longlong *)(param_2 + 8) == 0) {
          lVar3 = param_2;
        }
        FUN_146d9e27c(param_1,lVar3 + lVar4);
        lVar5 = lVar5 + 1;
        lVar4 = lVar4 + 8;
      } while (lVar5 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146d9e27c FUN_146d9e27c body=169 status=ok
// SIG undefined FUN_146d9e27c(void)

void FUN_146d9e27c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x218))
            (*(longlong **)(param_1 + 0x90),&DAT_149e3cc18);
  iVar2 = FUN_1448332aa(*(undefined8 *)(param_1 + 0x90),&DAT_149e3cc18);
  if (4 < iVar2) {
    local_28 = (undefined8 *)*param_2;
    FUN_146d9e326(param_1);
    if ((*(byte *)(*(longlong *)(param_1 + 0x90) + 0x28) & 1) != 0) {
      puVar1 = (undefined8 *)*param_2;
      if ((puVar1 != local_28) && (*param_2 = (longlong)local_28, puVar1 != (undefined8 *)0x0)) {
        (**(code **)*puVar1)(puVar1,1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d9e326 FUN_146d9e326 body=1008 status=ok
// SIG undefined FUN_146d9e326(void)

void FUN_146d9e326(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  int iVar11;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  uint local_4c;
  ulonglong *local_48;
  uint *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar10 = *(longlong **)(param_1 + 0x90);
  puVar9 = (ulonglong *)plVar10[1];
  puVar1 = (uint *)*puVar9 + 1;
  if ((uint *)puVar9[1] < puVar1) {
    local_48 = (ulonglong *)CONCAT44(local_48._4_4_,(uint)(*param_2 != 0));
    (**(code **)(*plVar10 + 0x170))(plVar10,&local_48,4);
    uVar6 = (uint)local_48;
    if (1 < (uint)local_48) {
      FUN_14572541c(plVar10);
      uVar6 = (uint)local_48;
    }
  }
  else {
    uVar6 = *(uint *)*puVar9;
    *puVar9 = (ulonglong)puVar1;
  }
  if (uVar6 == 0) {
    *param_2 = 0;
    goto LAB_146d9e518;
  }
  plVar10 = *(longlong **)(param_1 + 0x90);
  if ((*(byte *)(plVar10 + 5) & 1) == 0) {
    if (((*(byte *)(plVar10 + 5) & 4) != 0) || ((*(byte *)((longlong)plVar10 + 0x2b) & 8) != 0)) {
      local_58 = *param_2;
      lVar2 = *(longlong *)(param_1 + 0x98);
      if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
        uVar6 = ((uint)(local_58 >> 0x14) & 0xffff ^ (uint)(local_58 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        lVar8 = lVar2 + 0x48;
        if (*(longlong *)(lVar2 + 0x50) != 0) {
          lVar8 = *(longlong *)(lVar2 + 0x50);
        }
        iVar7 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar2 + 0x58) - 1U & (uVar6 >> 0x10 ^ uVar6))
                                 * 4);
        if (iVar7 != -1) {
          lVar8 = *(longlong *)(lVar2 + 0x10);
          iVar11 = iVar7;
          do {
            if (*(ulonglong *)(lVar8 + (longlong)iVar11 * 0x18) == local_58) goto LAB_146d9e4ff;
            iVar11 = *(int *)(lVar8 + (longlong)iVar11 * 0x18 + 0x10);
          } while (iVar11 != -1);
        }
      }
      FUN_14042e8e0(lVar2 + 0x60,&local_48,&local_58,0);
      local_4c = *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0);
      *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0) = local_4c + 1;
      local_40 = &local_4c;
      local_48 = &local_58;
      FUN_1467c4600(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      plVar10 = *(longlong **)(param_1 + 0x90);
      puVar9 = (ulonglong *)plVar10[1];
      puVar1 = (uint *)*puVar9 + 1;
      if ((uint *)puVar9[1] < puVar1) {
        if ((*(byte *)((longlong)plVar10 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar10 + 0x170))(plVar10,&local_4c,4);
        }
        else {
          thunk_FUN_14572512c(plVar10,&local_4c);
        }
      }
      else {
        local_4c = *(uint *)*puVar9;
        *puVar9 = (ulonglong)puVar1;
      }
      plVar10 = (longlong *)*param_2;
      plVar5 = (longlong *)FUN_146e223c4(param_1,plVar10);
      if (plVar5 != (longlong *)0x0) {
        *param_2 = (ulonglong)plVar5;
        plVar10 = plVar5;
      }
      (**(code **)(*plVar10 + 8))(plVar10,param_1);
      FUN_146ca4900(*(longlong *)(param_1 + 0x98) + 0x60,local_58);
    }
    goto LAB_146d9e518;
  }
  puVar9 = (ulonglong *)plVar10[1];
  puVar1 = (uint *)*puVar9 + 1;
  if ((uint *)puVar9[1] < puVar1) {
    if ((*(byte *)((longlong)plVar10 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar10 + 0x170))(plVar10,&local_4c,4);
    }
    else {
      thunk_FUN_14572512c(plVar10,&local_4c);
    }
  }
  else {
    local_4c = *(uint *)*puVar9;
    *puVar9 = (ulonglong)puVar1;
  }
  if (-1 < (int)local_4c) {
    iVar7 = local_4c + 1;
    plVar10 = *(longlong **)(param_1 + 0x98);
    iVar11 = (int)plVar10[1];
    uVar6 = iVar7 - iVar11;
    if (uVar6 != 0 && iVar11 <= iVar7) {
      *(int *)(plVar10 + 1) = iVar7;
      if ((uint)(*(int *)((longlong)plVar10 + 0xc) - iVar11) < uVar6) {
        FUN_1456bd870(plVar10);
      }
      memset((void *)((longlong)iVar11 * 8 + *plVar10),0,(ulonglong)uVar6 << 3);
      if ((int)local_4c < 0) goto LAB_146d9e638;
      plVar10 = *(longlong **)(param_1 + 0x98);
      iVar11 = (int)plVar10[1];
    }
    if ((int)local_4c < iVar11) {
      uVar4 = *(ulonglong *)(*plVar10 + (ulonglong)local_4c * 8);
      if (uVar4 == 0) {
        plVar10 = (longlong *)*param_2;
        plVar5 = (longlong *)FUN_146e223c4(param_1,plVar10);
        if (plVar5 != (longlong *)0x0) {
          *param_2 = (ulonglong)plVar5;
          plVar10 = plVar5;
        }
        (**(code **)(*plVar10 + 8))(plVar10,param_1);
        local_58 = *param_2;
        local_40 = &local_4c;
        *(ulonglong *)(**(longlong **)(param_1 + 0x98) + (longlong)(int)local_4c * 8) = local_58;
        local_48 = &local_58;
        FUN_14004a1c4(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      }
      else {
        *param_2 = uVar4;
      }
      goto LAB_146d9e518;
    }
  }
LAB_146d9e638:
  FUN_1468216ba(*(undefined8 *)(param_1 + 0x90));
LAB_146d9e518:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar7 = (int)puVar9[2], iVar7 != -1) {
LAB_146d9e4ff:
    puVar9 = (ulonglong *)(lVar8 + (longlong)iVar7 * 0x18);
    if (*puVar9 == local_58) goto LAB_146d9e574;
  }
  puVar9 = (ulonglong *)0x0;
LAB_146d9e574:
  puVar3 = *(undefined4 **)plVar10[1];
  if ((undefined4 *)((undefined8 *)plVar10[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar10 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar10 + 0x170))(plVar10,puVar9 + 1,4);
    }
    else {
      thunk_FUN_14572512c();
    }
  }
  else {
    *(undefined4 *)(puVar9 + 1) = *puVar3;
    *(longlong *)plVar10[1] = *(longlong *)plVar10[1] + 4;
  }
  goto LAB_146d9e518;
}



// FUNCTION 146d9e718 FUN_146d9e718 body=41 status=ok
// SIG undefined FUN_146d9e718(void)

void FUN_146d9e718(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_146d98318();
  return;
}



// FUNCTION 146d9e742 FUN_146d9e742 body=370 status=ok
// SIG undefined FUN_146d9e742(void)

longlong * FUN_146d9e742(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x50,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x50);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_146d9e940(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_146d9e95c(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x33333 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      (**(code **)(*(longlong *)(*param_2 + lVar5) + 0xf8))(*param_2 + lVar5,param_1);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x50;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_146d9e8b6(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        plVar3 = (longlong *)FUN_146d9e8fc(param_2);
        (**(code **)(*plVar3 + 0xf8))(plVar3,param_1);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146d9e8b6 FUN_146d9e8b6 body=68 status=ok
// SIG undefined FUN_146d9e8b6(void)

void FUN_146d9e8b6(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_146d9e940(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_146d9e95c(param_1,param_2);
  return;
}



// FUNCTION 146d9e8fc FUN_146d9e8fc body=68 status=ok
// SIG undefined FUN_146d9e8fc(void)

longlong FUN_146d9e8fc(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146d9ea28(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x50 + *param_1;
  FUN_146d9e9cd(lVar2,1);
  return lVar2;
}



// FUNCTION 146d9e940 FUN_146d9e940 body=27 status=ok
// SIG undefined FUN_146d9e940(void)

void FUN_146d9e940(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_149f553e0;
    param_1 = param_1 + 10;
  }
  return;
}



// FUNCTION 146d9e95c FUN_146d9e95c body=113 status=ok
// SIG undefined FUN_146d9e95c(void)

void FUN_146d9e95c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 146d9e9cd FUN_146d9e9cd body=90 status=ok
// SIG undefined FUN_146d9e9cd(void)

void FUN_146d9e9cd(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined2 *)(param_1 + 3) = 0x101;
    *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
    *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
    *param_1 = &PTR_FUN_149f489d0;
    param_1[4] = 0x7fefffffffffffff;
    param_1[5] = 0x7fefffffffffffff;
    param_1[6] = 0x7fefffffffffffff;
    param_1[7] = 0xffefffffffffffff;
    param_1[8] = 0xffefffffffffffff;
    param_1[9] = 0xffefffffffffffff;
    param_1 = param_1 + 10;
  }
  return;
}



// FUNCTION 146d9ea28 FUN_146d9ea28 body=147 status=ok
// SIG undefined FUN_146d9ea28(void)

void FUN_146d9ea28(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146d9eabc FUN_146d9eabc body=417 status=ok
// SIG undefined FUN_146d9eabc(void)

longlong * FUN_146d9eabc(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x30,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x30);
  local_3c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_3c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_3c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_3c);
    }
  }
  else {
    local_3c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_3c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_146d98318(param_2,0);
    }
  }
  else if ((((int)local_3c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x55555 < local_3c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_3c;
    lVar6 = 0x18;
    lVar7 = 0;
    do {
      lVar3 = *param_2;
      uVar4 = FUN_141724e7a(param_1,lVar3 + lVar6 + -0x18);
      FUN_141724e7a(uVar4,lVar3 + lVar6);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x30;
    } while (lVar7 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_3c) ||
       (FUN_146d98318(param_2), 0 < (int)local_3c)) {
      iVar5 = 0;
      do {
        lVar6 = FUN_146d9ec5e(param_2);
        uVar4 = FUN_141724e7a(param_1,lVar6);
        FUN_141724e7a(uVar4,lVar6 + 0x18);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_3c);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146d9ec5e FUN_146d9ec5e body=68 status=ok
// SIG undefined FUN_146d9ec5e(void)

longlong FUN_146d9ec5e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1400b4f0c(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x30 + *param_1;
  FUN_1447c1a60(lVar2,1);
  return lVar2;
}



// FUNCTION 146d9eca2 FUN_146d9eca2 body=84 status=ok
// SIG undefined FUN_146d9eca2(void)

longlong * FUN_146d9eca2(longlong *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  
  puVar1 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,2);
    }
    else {
      thunk_FUN_1457251a8(param_1);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  return param_1;
}



// FUNCTION 146d9ecf6 FUN_146d9ecf6 body=128 status=ok
// SIG undefined FUN_146d9ecf6(void)

void FUN_146d9ecf6(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_146d9ed78(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 8 + *param_1),0,(ulonglong)uVar2 << 3);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (iVar1 <= param_2) {
    return;
  }
  *(int *)(param_1 + 1) = param_2;
  FUN_146d9edfe(param_1);
  return;
}



// FUNCTION 146d9ed78 FUN_146d9ed78 body=132 status=ok
// SIG undefined FUN_146d9ed78(void)

void FUN_146d9ed78(longlong param_1,int param_2)

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



// FUNCTION 146d9edfe FUN_146d9edfe body=62 status=ok
// SIG undefined FUN_146d9edfe(void)

void FUN_146d9edfe(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d9ee3c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146d9ee3c FUN_146d9ee3c body=93 status=ok
// SIG undefined FUN_146d9ee3c(void)

ulonglong FUN_146d9ee3c(uint param_1,uint param_2)

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



// FUNCTION 146d9ee9a FUN_146d9ee9a body=89 status=ok
// SIG undefined FUN_146d9ee9a(void)

void FUN_146d9ee9a(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x68 + *param_1);
  FUN_140bfc290(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x68 + (longlong)_Dst),(longlong)iVar2 * 0x68);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146d9eef4 FUN_146d9eef4 body=62 status=ok
// SIG undefined FUN_146d9eef4(void)

void FUN_146d9eef4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d9ef32(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x68,8);
  }
  return;
}



// FUNCTION 146d9ef32 FUN_146d9ef32 body=104 status=ok
// SIG undefined FUN_146d9ef32(void)

ulonglong FUN_146d9ef32(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x68) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146d9ef68;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x68,8);
      param_2 = param_2 / 0x68;
    }
  }
LAB_146d9ef68:
  return param_2 & 0xffffffff;
}



// FUNCTION 146d9ef9a FUN_146d9ef9a body=62 status=ok
// SIG undefined FUN_146d9ef9a(void)

void FUN_146d9ef9a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d9efd8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc,4);
  }
  return;
}



// FUNCTION 146d9efd8 FUN_146d9efd8 body=112 status=ok
// SIG undefined FUN_146d9efd8(void)

ulonglong FUN_146d9efd8(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xc) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146d9f012;
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
LAB_146d9f012:
  return param_2 & 0xffffffff;
}



// FUNCTION 146d9f048 FUN_146d9f048 body=62 status=ok
// SIG undefined FUN_146d9f048(void)

void FUN_146d9f048(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d9f086(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 146d9f086 FUN_146d9f086 body=93 status=ok
// SIG undefined FUN_146d9f086(void)

ulonglong FUN_146d9f086(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,4);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146d9f0e4 FUN_146d9f0e4 body=62 status=ok
// SIG undefined FUN_146d9f0e4(void)

void FUN_146d9f0e4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d9f122(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x14,4);
  }
  return;
}



// FUNCTION 146d9f122 FUN_146d9f122 body=112 status=ok
// SIG undefined FUN_146d9f122(void)

ulonglong FUN_146d9f122(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x14) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146d9f15c;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x14,4);
      param_2 = param_2 / 0x14;
    }
  }
LAB_146d9f15c:
  return param_2 & 0xffffffff;
}



// FUNCTION 146d9f192 FUN_146d9f192 body=495 status=ok
// SIG undefined FUN_146d9f192(void)

void FUN_146d9f192(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ushort uVar13;
  float fVar14;
  ulonglong local_78;
  ushort local_48;
  
  iVar4 = (int)ROUND(-0.5 - ((float)*(ushort *)(param_1 + 0xe) / 6.0 +
                            (float)*(ushort *)(param_1 + 0xe) / 6.0)) >> 1;
  fVar14 = (float)*(ushort *)((longlong)param_1 + 0x72) / 6.0;
  *(short *)(param_1 + 0x11) = -(short)((int)ROUND(-0.5 - (fVar14 + fVar14)) >> 1);
  FUN_140d04ac6(param_1 + 2);
  if (iVar4 < 0) {
    uVar10 = (ulonglong)*(ushort *)(param_1 + 0x11);
    local_78 = 0;
    iVar3 = 0;
    do {
      if ((short)uVar10 == 0) {
        uVar10 = 0;
      }
      else {
        iVar1 = (int)local_78;
        uVar8 = 0;
        uVar9 = 0;
        do {
          if ((uint)(iVar1 * 6) < (uint)*(ushort *)(param_1 + 0xe) && iVar1 * 6 < 0x7ffffffa) {
            uVar12 = (ulonglong)*(ushort *)((longlong)param_1 + 0x72);
            lVar11 = (longlong)iVar3 * 2 * uVar12;
            uVar6 = 0xffff;
            uVar13 = 0;
            lVar2 = (longlong)iVar3;
            do {
              if (uVar8 * 6 < uVar12) {
                uVar5 = uVar9;
                uVar7 = uVar6;
                do {
                  uVar6 = *(ushort *)(*param_1 + lVar11 + uVar5 * 2);
                  if (uVar13 <= uVar6) {
                    uVar13 = uVar6;
                  }
                  if (uVar7 <= uVar6) {
                    uVar6 = uVar7;
                  }
                } while ((uVar5 < uVar8 * 6 + 6) &&
                        (uVar5 = uVar5 + 1, uVar7 = uVar6, uVar5 < uVar12));
              }
              if (iVar1 * 6 + 6 <= lVar2) break;
              lVar2 = lVar2 + 1;
              lVar11 = lVar11 + (ulonglong)((uint)*(ushort *)((longlong)param_1 + 0x72) * 2);
            } while ((uint)lVar2 < (uint)*(ushort *)(param_1 + 0xe));
          }
          else {
            uVar6 = 0xffff;
            uVar13 = 0;
          }
          local_48 = (ushort)uVar10;
          lVar2 = (uint)local_48 * iVar1 + uVar8;
          *(ushort *)(param_1[2] + 2 + lVar2 * 4) = uVar13;
          *(ushort *)(param_1[2] + lVar2 * 4) = uVar6;
          uVar8 = uVar8 + 1;
          uVar10 = (ulonglong)*(ushort *)(param_1 + 0x11);
          uVar9 = uVar9 + 6;
        } while (uVar8 < uVar10);
      }
      local_78 = local_78 + 1;
      iVar3 = iVar3 + 6;
    } while (local_78 != (uint)-iVar4);
  }
  return;
}



// FUNCTION 146d9f382 FUN_146d9f382 body=132 status=ok
// SIG undefined FUN_146d9f382(void)

void FUN_146d9f382(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146d9f408 FUN_146d9f408 body=63 status=ok
// SIG undefined FUN_146d9f408(void)

void FUN_146d9f408(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146d9f448(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,2);
  }
  return;
}



// FUNCTION 146d9f448 FUN_146d9f448 body=97 status=ok
// SIG undefined FUN_146d9f448(void)

ulonglong FUN_146d9f448(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,2);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 146d9f4aa FUN_146d9f4aa body=833 status=ok
// SIG undefined FUN_146d9f4aa(void)

undefined8
FUN_146d9f4aa(longlong *param_1,double *param_2,double *param_3,double *param_4,undefined8 *param_5,
             double *param_6,ulonglong *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  undefined8 uVar10;
  double dVar11;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  undefined8 *local_1d0;
  double *local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 *local_1a0;
  undefined8 local_198;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 local_170 [4];
  undefined1 local_16c [4];
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 local_138 [24];
  ulonglong local_120;
  double *local_118;
  undefined1 *local_110;
  undefined8 local_108;
  longlong local_100;
  code *local_f8;
  undefined8 local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  dVar1 = param_3[2];
  dVar2 = param_2[2];
  dVar11 = *param_3;
  dVar3 = param_3[1];
  dVar4 = *param_2;
  dVar5 = param_2[1];
  dVar6 = param_4[2];
  dVar7 = *param_4;
  dVar8 = param_4[1];
  local_d8 = param_2[2];
  local_118 = &local_e8;
  local_e8 = *param_2;
  dStack_e0 = param_2[1];
  local_d0 = *param_3;
  dStack_c8 = param_3[1];
  local_c0 = param_3[2];
  local_b8 = *param_4;
  dStack_b0 = param_4[1];
  local_a8 = param_4[2];
  local_1a0 = &local_188;
  local_188 = 0x3ff0000000000000;
  local_180 = 0;
  uStack_178 = 0;
  local_100 = *param_1;
  local_f8 = FUN_1406863dc;
  local_f0 = *(undefined8 *)(local_100 + 0x10);
  local_110 = &LAB_1429b1b78;
  local_108 = 0;
  local_198 = 0x3f50624de0000000;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1b8 = local_170;
  local_1c0 = local_16c;
  local_1c8 = &local_168;
  local_1d0 = &local_150;
  local_1d8 = local_138;
  cVar9 = FUN_14068570a(&local_118,&local_100,param_1[1],&local_120);
  if (cVar9 == '\0') {
LAB_146d9f717:
    uVar10 = 0;
  }
  else {
    if (DAT_14c75f07d == '\x01') {
      dVar1 = dVar1 - dVar2;
      dVar3 = dVar3 - dVar5;
      dVar11 = dVar11 - dVar4;
      dVar6 = dVar6 - dVar2;
      dVar8 = dVar8 - dVar5;
      dVar7 = dVar7 - dVar4;
      dVar4 = dVar11 * dVar8 - dVar7 * dVar3;
      dVar2 = dVar1 * dVar7 - dVar6 * dVar11;
      dVar1 = dVar3 * dVar6 - dVar8 * dVar1;
      dVar11 = 1.0 / SQRT(dVar4 * dVar4 + dVar1 * dVar1 + dVar2 * dVar2);
      if (dVar4 * dVar11 * local_158 + dVar11 * dVar1 * local_168 + dVar2 * dVar11 * dStack_160 <
          0.0) goto LAB_146d9f717;
    }
    param_5[2] = local_140;
    *param_5 = local_150;
    param_5[1] = uStack_148;
    param_6[2] = local_158;
    *param_6 = local_168;
    param_6[1] = dStack_160;
    *param_7 = local_120 ^ 0x8000000000000000;
    uVar10 = 1;
  }
  if ((local_a0 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d9f7ec FUN_146d9f7ec body=833 status=ok
// SIG undefined FUN_146d9f7ec(void)

undefined8
FUN_146d9f7ec(longlong *param_1,double *param_2,double *param_3,double *param_4,undefined8 *param_5,
             double *param_6,ulonglong *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  undefined8 uVar10;
  double dVar11;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  undefined8 *local_1d0;
  double *local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 *local_1a0;
  undefined8 local_198;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 local_170 [4];
  undefined1 local_16c [4];
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 local_138 [24];
  ulonglong local_120;
  double *local_118;
  undefined1 *local_110;
  undefined8 local_108;
  longlong local_100;
  undefined1 *local_f8;
  undefined8 local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  dVar1 = param_3[2];
  dVar2 = param_2[2];
  dVar11 = *param_3;
  dVar3 = param_3[1];
  dVar4 = *param_2;
  dVar5 = param_2[1];
  dVar6 = param_4[2];
  dVar7 = *param_4;
  dVar8 = param_4[1];
  local_d8 = param_2[2];
  local_118 = &local_e8;
  local_e8 = *param_2;
  dStack_e0 = param_2[1];
  local_d0 = *param_3;
  dStack_c8 = param_3[1];
  local_c0 = param_3[2];
  local_b8 = *param_4;
  dStack_b0 = param_4[1];
  local_a8 = param_4[2];
  local_1a0 = &local_188;
  local_188 = 0x3ff0000000000000;
  local_180 = 0;
  uStack_178 = 0;
  local_100 = *param_1;
  local_f8 = &LAB_1406863be;
  local_f0 = *(undefined8 *)(local_100 + 0x10);
  local_110 = &LAB_1429b1b78;
  local_108 = 0;
  local_198 = 0x3f50624de0000000;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1b8 = local_170;
  local_1c0 = local_16c;
  local_1c8 = &local_168;
  local_1d0 = &local_150;
  local_1d8 = local_138;
  cVar9 = FUN_14068570a(&local_118,&local_100,param_1[1],&local_120);
  if (cVar9 == '\0') {
LAB_146d9fa59:
    uVar10 = 0;
  }
  else {
    if (DAT_14c75f07d == '\x01') {
      dVar1 = dVar1 - dVar2;
      dVar3 = dVar3 - dVar5;
      dVar11 = dVar11 - dVar4;
      dVar6 = dVar6 - dVar2;
      dVar8 = dVar8 - dVar5;
      dVar7 = dVar7 - dVar4;
      dVar4 = dVar11 * dVar8 - dVar7 * dVar3;
      dVar2 = dVar1 * dVar7 - dVar6 * dVar11;
      dVar1 = dVar3 * dVar6 - dVar8 * dVar1;
      dVar11 = 1.0 / SQRT(dVar4 * dVar4 + dVar1 * dVar1 + dVar2 * dVar2);
      if (dVar4 * dVar11 * local_158 + dVar11 * dVar1 * local_168 + dVar2 * dVar11 * dStack_160 <
          0.0) goto LAB_146d9fa59;
    }
    param_5[2] = local_140;
    *param_5 = local_150;
    param_5[1] = uStack_148;
    param_6[2] = local_158;
    *param_6 = local_168;
    param_6[1] = dStack_160;
    *param_7 = local_120 ^ 0x8000000000000000;
    uVar10 = 1;
  }
  if ((local_a0 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d9fb2e FUN_146d9fb2e body=833 status=ok
// SIG undefined FUN_146d9fb2e(void)

undefined8
FUN_146d9fb2e(longlong *param_1,double *param_2,double *param_3,double *param_4,undefined8 *param_5,
             double *param_6,ulonglong *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  undefined8 uVar10;
  double dVar11;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  undefined8 *local_1d0;
  double *local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 *local_1a0;
  undefined8 local_198;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 local_170 [4];
  undefined1 local_16c [4];
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 local_138 [24];
  ulonglong local_120;
  double *local_118;
  undefined1 *local_110;
  undefined8 local_108;
  longlong local_100;
  undefined1 *local_f8;
  undefined8 local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  dVar1 = param_3[2];
  dVar2 = param_2[2];
  dVar11 = *param_3;
  dVar3 = param_3[1];
  dVar4 = *param_2;
  dVar5 = param_2[1];
  dVar6 = param_4[2];
  dVar7 = *param_4;
  dVar8 = param_4[1];
  local_d8 = param_2[2];
  local_118 = &local_e8;
  local_e8 = *param_2;
  dStack_e0 = param_2[1];
  local_d0 = *param_3;
  dStack_c8 = param_3[1];
  local_c0 = param_3[2];
  local_b8 = *param_4;
  dStack_b0 = param_4[1];
  local_a8 = param_4[2];
  local_1a0 = &local_188;
  local_188 = 0x3ff0000000000000;
  local_180 = 0;
  uStack_178 = 0;
  local_100 = *param_1;
  local_f8 = &LAB_1406864a0;
  local_f0 = *(undefined8 *)(local_100 + 0x10);
  local_110 = &LAB_1429b1b78;
  local_108 = 0;
  local_198 = 0x3f50624de0000000;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1b8 = local_170;
  local_1c0 = local_16c;
  local_1c8 = &local_168;
  local_1d0 = &local_150;
  local_1d8 = local_138;
  cVar9 = FUN_14068570a(&local_118,&local_100,param_1[1],&local_120);
  if (cVar9 == '\0') {
LAB_146d9fd9b:
    uVar10 = 0;
  }
  else {
    if (DAT_14c75f07d == '\x01') {
      dVar1 = dVar1 - dVar2;
      dVar3 = dVar3 - dVar5;
      dVar11 = dVar11 - dVar4;
      dVar6 = dVar6 - dVar2;
      dVar8 = dVar8 - dVar5;
      dVar7 = dVar7 - dVar4;
      dVar4 = dVar11 * dVar8 - dVar7 * dVar3;
      dVar2 = dVar1 * dVar7 - dVar6 * dVar11;
      dVar1 = dVar3 * dVar6 - dVar8 * dVar1;
      dVar11 = 1.0 / SQRT(dVar4 * dVar4 + dVar1 * dVar1 + dVar2 * dVar2);
      if (dVar4 * dVar11 * local_158 + dVar11 * dVar1 * local_168 + dVar2 * dVar11 * dStack_160 <
          0.0) goto LAB_146d9fd9b;
    }
    param_5[2] = local_140;
    *param_5 = local_150;
    param_5[1] = uStack_148;
    param_6[2] = local_158;
    *param_6 = local_168;
    param_6[1] = dStack_160;
    *param_7 = local_120 ^ 0x8000000000000000;
    uVar10 = 1;
  }
  if ((local_a0 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d9fe70 FUN_146d9fe70 body=833 status=ok
// SIG undefined FUN_146d9fe70(void)

undefined8
FUN_146d9fe70(longlong *param_1,double *param_2,double *param_3,double *param_4,undefined8 *param_5,
             double *param_6,ulonglong *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  undefined8 uVar10;
  double dVar11;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  undefined8 *local_1d0;
  double *local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 *local_1a0;
  undefined8 local_198;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 local_170 [4];
  undefined1 local_16c [4];
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 local_138 [24];
  ulonglong local_120;
  double *local_118;
  undefined1 *local_110;
  undefined8 local_108;
  longlong local_100;
  code *local_f8;
  undefined8 local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  dVar1 = param_3[2];
  dVar2 = param_2[2];
  dVar11 = *param_3;
  dVar3 = param_3[1];
  dVar4 = *param_2;
  dVar5 = param_2[1];
  dVar6 = param_4[2];
  dVar7 = *param_4;
  dVar8 = param_4[1];
  local_d8 = param_2[2];
  local_118 = &local_e8;
  local_e8 = *param_2;
  dStack_e0 = param_2[1];
  local_d0 = *param_3;
  dStack_c8 = param_3[1];
  local_c0 = param_3[2];
  local_b8 = *param_4;
  dStack_b0 = param_4[1];
  local_a8 = param_4[2];
  local_1a0 = &local_188;
  local_188 = 0x3ff0000000000000;
  local_180 = 0;
  uStack_178 = 0;
  local_100 = *param_1;
  local_f8 = FUN_14172543a;
  local_f0 = *(undefined8 *)(local_100 + 0x10);
  local_110 = &LAB_1429b1b78;
  local_108 = 0;
  local_198 = 0x3f50624de0000000;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1b8 = local_170;
  local_1c0 = local_16c;
  local_1c8 = &local_168;
  local_1d0 = &local_150;
  local_1d8 = local_138;
  cVar9 = FUN_14068570a(&local_118,&local_100,param_1[1],&local_120);
  if (cVar9 == '\0') {
LAB_146da00dd:
    uVar10 = 0;
  }
  else {
    if (DAT_14c75f07d == '\x01') {
      dVar1 = dVar1 - dVar2;
      dVar3 = dVar3 - dVar5;
      dVar11 = dVar11 - dVar4;
      dVar6 = dVar6 - dVar2;
      dVar8 = dVar8 - dVar5;
      dVar7 = dVar7 - dVar4;
      dVar4 = dVar11 * dVar8 - dVar7 * dVar3;
      dVar2 = dVar1 * dVar7 - dVar6 * dVar11;
      dVar1 = dVar3 * dVar6 - dVar8 * dVar1;
      dVar11 = 1.0 / SQRT(dVar4 * dVar4 + dVar1 * dVar1 + dVar2 * dVar2);
      if (dVar4 * dVar11 * local_158 + dVar11 * dVar1 * local_168 + dVar2 * dVar11 * dStack_160 <
          0.0) goto LAB_146da00dd;
    }
    param_5[2] = local_140;
    *param_5 = local_150;
    param_5[1] = uStack_148;
    param_6[2] = local_158;
    *param_6 = local_168;
    param_6[1] = dStack_160;
    *param_7 = local_120 ^ 0x8000000000000000;
    uVar10 = 1;
  }
  if ((local_a0 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146da01b2 FUN_146da01b2 body=833 status=ok
// SIG undefined FUN_146da01b2(void)

undefined8
FUN_146da01b2(longlong *param_1,double *param_2,double *param_3,double *param_4,undefined8 *param_5,
             double *param_6,ulonglong *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  undefined8 uVar10;
  double dVar11;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  undefined8 *local_1d0;
  double *local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 *local_1a0;
  undefined8 local_198;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 local_170 [4];
  undefined1 local_16c [4];
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 local_138 [24];
  ulonglong local_120;
  double *local_118;
  undefined1 *local_110;
  undefined8 local_108;
  longlong local_100;
  code *local_f8;
  undefined8 local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  dVar1 = param_3[2];
  dVar2 = param_2[2];
  dVar11 = *param_3;
  dVar3 = param_3[1];
  dVar4 = *param_2;
  dVar5 = param_2[1];
  dVar6 = param_4[2];
  dVar7 = *param_4;
  dVar8 = param_4[1];
  local_d8 = param_2[2];
  local_118 = &local_e8;
  local_e8 = *param_2;
  dStack_e0 = param_2[1];
  local_d0 = *param_3;
  dStack_c8 = param_3[1];
  local_c0 = param_3[2];
  local_b8 = *param_4;
  dStack_b0 = param_4[1];
  local_a8 = param_4[2];
  local_1a0 = &local_188;
  local_188 = 0x3ff0000000000000;
  local_180 = 0;
  uStack_178 = 0;
  local_100 = *param_1;
  local_f8 = FUN_146cc490a;
  local_f0 = *(undefined8 *)(local_100 + 0x10);
  local_110 = &LAB_1429b1b78;
  local_108 = 0;
  local_198 = 0x3f50624de0000000;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1b8 = local_170;
  local_1c0 = local_16c;
  local_1c8 = &local_168;
  local_1d0 = &local_150;
  local_1d8 = local_138;
  cVar9 = FUN_14068570a(&local_118,&local_100,param_1[1],&local_120);
  if (cVar9 == '\0') {
LAB_146da041f:
    uVar10 = 0;
  }
  else {
    if (DAT_14c75f07d == '\x01') {
      dVar1 = dVar1 - dVar2;
      dVar3 = dVar3 - dVar5;
      dVar11 = dVar11 - dVar4;
      dVar6 = dVar6 - dVar2;
      dVar8 = dVar8 - dVar5;
      dVar7 = dVar7 - dVar4;
      dVar4 = dVar11 * dVar8 - dVar7 * dVar3;
      dVar2 = dVar1 * dVar7 - dVar6 * dVar11;
      dVar1 = dVar3 * dVar6 - dVar8 * dVar1;
      dVar11 = 1.0 / SQRT(dVar4 * dVar4 + dVar1 * dVar1 + dVar2 * dVar2);
      if (dVar4 * dVar11 * local_158 + dVar11 * dVar1 * local_168 + dVar2 * dVar11 * dStack_160 <
          0.0) goto LAB_146da041f;
    }
    param_5[2] = local_140;
    *param_5 = local_150;
    param_5[1] = uStack_148;
    param_6[2] = local_158;
    *param_6 = local_168;
    param_6[1] = dStack_160;
    *param_7 = local_120 ^ 0x8000000000000000;
    uVar10 = 1;
  }
  if ((local_a0 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146da04f4 FUN_146da04f4 body=833 status=ok
// SIG undefined FUN_146da04f4(void)

undefined8
FUN_146da04f4(longlong *param_1,double *param_2,double *param_3,double *param_4,undefined8 *param_5,
             double *param_6,ulonglong *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  undefined8 uVar10;
  double dVar11;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  undefined8 *local_1d0;
  double *local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 *local_1a0;
  undefined8 local_198;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 local_170 [4];
  undefined1 local_16c [4];
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 local_138 [24];
  ulonglong local_120;
  double *local_118;
  undefined1 *local_110;
  undefined8 local_108;
  longlong local_100;
  undefined1 *local_f8;
  undefined8 local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  dVar1 = param_3[2];
  dVar2 = param_2[2];
  dVar11 = *param_3;
  dVar3 = param_3[1];
  dVar4 = *param_2;
  dVar5 = param_2[1];
  dVar6 = param_4[2];
  dVar7 = *param_4;
  dVar8 = param_4[1];
  local_d8 = param_2[2];
  local_118 = &local_e8;
  local_e8 = *param_2;
  dStack_e0 = param_2[1];
  local_d0 = *param_3;
  dStack_c8 = param_3[1];
  local_c0 = param_3[2];
  local_b8 = *param_4;
  dStack_b0 = param_4[1];
  local_a8 = param_4[2];
  local_1a0 = &local_188;
  local_188 = 0x3ff0000000000000;
  local_180 = 0;
  uStack_178 = 0;
  local_100 = *param_1;
  local_f8 = &LAB_140686536;
  local_f0 = *(undefined8 *)(local_100 + 0x10);
  local_110 = &LAB_1429b1b78;
  local_108 = 0;
  local_198 = 0x3f50624de0000000;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1b8 = local_170;
  local_1c0 = local_16c;
  local_1c8 = &local_168;
  local_1d0 = &local_150;
  local_1d8 = local_138;
  cVar9 = FUN_14068570a(&local_118,&local_100,param_1[1],&local_120);
  if (cVar9 == '\0') {
LAB_146da0761:
    uVar10 = 0;
  }
  else {
    if (DAT_14c75f07d == '\x01') {
      dVar1 = dVar1 - dVar2;
      dVar3 = dVar3 - dVar5;
      dVar11 = dVar11 - dVar4;
      dVar6 = dVar6 - dVar2;
      dVar8 = dVar8 - dVar5;
      dVar7 = dVar7 - dVar4;
      dVar4 = dVar11 * dVar8 - dVar7 * dVar3;
      dVar2 = dVar1 * dVar7 - dVar6 * dVar11;
      dVar1 = dVar3 * dVar6 - dVar8 * dVar1;
      dVar11 = 1.0 / SQRT(dVar4 * dVar4 + dVar1 * dVar1 + dVar2 * dVar2);
      if (dVar4 * dVar11 * local_158 + dVar11 * dVar1 * local_168 + dVar2 * dVar11 * dStack_160 <
          0.0) goto LAB_146da0761;
    }
    param_5[2] = local_140;
    *param_5 = local_150;
    param_5[1] = uStack_148;
    param_6[2] = local_158;
    *param_6 = local_168;
    param_6[1] = dStack_160;
    *param_7 = local_120 ^ 0x8000000000000000;
    uVar10 = 1;
  }
  if ((local_a0 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146da0836 FUN_146da0836 body=833 status=ok
// SIG undefined FUN_146da0836(void)

undefined8
FUN_146da0836(longlong *param_1,double *param_2,double *param_3,double *param_4,undefined8 *param_5,
             double *param_6,ulonglong *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  undefined8 uVar10;
  double dVar11;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  undefined8 *local_1d0;
  double *local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 *local_1a0;
  undefined8 local_198;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 local_170 [4];
  undefined1 local_16c [4];
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 local_138 [24];
  ulonglong local_120;
  double *local_118;
  undefined1 *local_110;
  undefined8 local_108;
  longlong local_100;
  undefined1 *local_f8;
  undefined8 local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  dVar1 = param_3[2];
  dVar2 = param_2[2];
  dVar11 = *param_3;
  dVar3 = param_3[1];
  dVar4 = *param_2;
  dVar5 = param_2[1];
  dVar6 = param_4[2];
  dVar7 = *param_4;
  dVar8 = param_4[1];
  local_d8 = param_2[2];
  local_118 = &local_e8;
  local_e8 = *param_2;
  dStack_e0 = param_2[1];
  local_d0 = *param_3;
  dStack_c8 = param_3[1];
  local_c0 = param_3[2];
  local_b8 = *param_4;
  dStack_b0 = param_4[1];
  local_a8 = param_4[2];
  local_1a0 = &local_188;
  local_188 = 0x3ff0000000000000;
  local_180 = 0;
  uStack_178 = 0;
  local_100 = *param_1;
  local_f8 = &LAB_146cc4a26;
  local_f0 = *(undefined8 *)(local_100 + 0x10);
  local_110 = &LAB_1429b1b78;
  local_108 = 0;
  local_198 = 0x3f50624de0000000;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1b8 = local_170;
  local_1c0 = local_16c;
  local_1c8 = &local_168;
  local_1d0 = &local_150;
  local_1d8 = local_138;
  cVar9 = FUN_14068570a(&local_118,&local_100,param_1[1],&local_120);
  if (cVar9 == '\0') {
LAB_146da0aa3:
    uVar10 = 0;
  }
  else {
    if (DAT_14c75f07d == '\x01') {
      dVar1 = dVar1 - dVar2;
      dVar3 = dVar3 - dVar5;
      dVar11 = dVar11 - dVar4;
      dVar6 = dVar6 - dVar2;
      dVar8 = dVar8 - dVar5;
      dVar7 = dVar7 - dVar4;
      dVar4 = dVar11 * dVar8 - dVar7 * dVar3;
      dVar2 = dVar1 * dVar7 - dVar6 * dVar11;
      dVar1 = dVar3 * dVar6 - dVar8 * dVar1;
      dVar11 = 1.0 / SQRT(dVar4 * dVar4 + dVar1 * dVar1 + dVar2 * dVar2);
      if (dVar4 * dVar11 * local_158 + dVar11 * dVar1 * local_168 + dVar2 * dVar11 * dStack_160 <
          0.0) goto LAB_146da0aa3;
    }
    param_5[2] = local_140;
    *param_5 = local_150;
    param_5[1] = uStack_148;
    param_6[2] = local_158;
    *param_6 = local_168;
    param_6[1] = dStack_160;
    *param_7 = local_120 ^ 0x8000000000000000;
    uVar10 = 1;
  }
  if ((local_a0 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146da0b78 FUN_146da0b78 body=833 status=ok
// SIG undefined FUN_146da0b78(void)

undefined8
FUN_146da0b78(longlong *param_1,double *param_2,double *param_3,double *param_4,undefined8 *param_5,
             double *param_6,ulonglong *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  undefined8 uVar10;
  double dVar11;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  undefined8 *local_1d0;
  double *local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 *local_1a0;
  undefined8 local_198;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 local_170 [4];
  undefined1 local_16c [4];
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 local_138 [24];
  ulonglong local_120;
  double *local_118;
  undefined1 *local_110;
  undefined8 local_108;
  longlong local_100;
  code *local_f8;
  undefined8 local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  dVar1 = param_3[2];
  dVar2 = param_2[2];
  dVar11 = *param_3;
  dVar3 = param_3[1];
  dVar4 = *param_2;
  dVar5 = param_2[1];
  dVar6 = param_4[2];
  dVar7 = *param_4;
  dVar8 = param_4[1];
  local_d8 = param_2[2];
  local_118 = &local_e8;
  local_e8 = *param_2;
  dStack_e0 = param_2[1];
  local_d0 = *param_3;
  dStack_c8 = param_3[1];
  local_c0 = param_3[2];
  local_b8 = *param_4;
  dStack_b0 = param_4[1];
  local_a8 = param_4[2];
  local_1a0 = &local_188;
  local_188 = 0x3ff0000000000000;
  local_180 = 0;
  uStack_178 = 0;
  local_100 = *param_1;
  local_f8 = FUN_14068657c;
  local_f0 = *(undefined8 *)(local_100 + 0x10);
  local_110 = &LAB_1429b1b78;
  local_108 = 0;
  local_198 = 0x3f50624de0000000;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1b8 = local_170;
  local_1c0 = local_16c;
  local_1c8 = &local_168;
  local_1d0 = &local_150;
  local_1d8 = local_138;
  cVar9 = FUN_14068570a(&local_118,&local_100,param_1[1],&local_120);
  if (cVar9 == '\0') {
LAB_146da0de5:
    uVar10 = 0;
  }
  else {
    if (DAT_14c75f07d == '\x01') {
      dVar1 = dVar1 - dVar2;
      dVar3 = dVar3 - dVar5;
      dVar11 = dVar11 - dVar4;
      dVar6 = dVar6 - dVar2;
      dVar8 = dVar8 - dVar5;
      dVar7 = dVar7 - dVar4;
      dVar4 = dVar11 * dVar8 - dVar7 * dVar3;
      dVar2 = dVar1 * dVar7 - dVar6 * dVar11;
      dVar1 = dVar3 * dVar6 - dVar8 * dVar1;
      dVar11 = 1.0 / SQRT(dVar4 * dVar4 + dVar1 * dVar1 + dVar2 * dVar2);
      if (dVar4 * dVar11 * local_158 + dVar11 * dVar1 * local_168 + dVar2 * dVar11 * dStack_160 <
          0.0) goto LAB_146da0de5;
    }
    param_5[2] = local_140;
    *param_5 = local_150;
    param_5[1] = uStack_148;
    param_6[2] = local_158;
    *param_6 = local_168;
    param_6[1] = dStack_160;
    *param_7 = local_120 ^ 0x8000000000000000;
    uVar10 = 1;
  }
  if ((local_a0 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146da0eba FUN_146da0eba body=442 status=ok
// SIG undefined FUN_146da0eba(void)

void FUN_146da0eba(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  char cVar1;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 *local_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110 [4];
  undefined1 local_10c [4];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  double local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  longlong local_90;
  code *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_68 = param_2[2];
  local_a8 = &local_78;
  local_78 = *param_2;
  uStack_70 = param_2[1];
  local_60 = *param_3;
  uStack_58 = param_3[1];
  local_50 = param_3[2];
  local_48 = *param_4;
  uStack_40 = param_4[1];
  local_38 = param_4[2];
  local_168 = &local_c8;
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d0 = 0.0;
  local_178 = &local_e8;
  local_d8 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_170 = &local_108;
  local_f8 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_140 = &local_128;
  local_128 = 0x3ff0000000000000;
  local_120 = 0;
  uStack_118 = 0;
  local_150 = *(undefined8 *)param_1[2];
  local_90 = *param_1;
  local_88 = FUN_1406863dc;
  local_80 = *(undefined8 *)(local_90 + 0x10);
  local_a0 = &LAB_1429b1b78;
  local_98 = 0;
  local_138 = 0x3f50624de0000000;
  local_148 = 0;
  local_158 = local_110;
  local_160 = local_10c;
  cVar1 = FUN_14068570a(&local_a8,&local_90,param_1[1]);
  if (cVar1 != '\0') {
    if ((double)param_5[6] <= local_d0 && local_d0 != (double)param_5[6]) {
      param_5[6] = local_d0;
      *param_5 = local_c8;
      param_5[1] = uStack_c0;
      param_5[2] = local_b8;
      *(undefined4 *)(param_5 + 3) = (undefined4)local_e8;
      *(undefined4 *)((longlong)param_5 + 0x1c) = local_e8._4_4_;
      *(undefined4 *)(param_5 + 4) = (undefined4)uStack_e0;
      *(undefined4 *)((longlong)param_5 + 0x24) = uStack_e0._4_4_;
      param_5[5] = local_d8;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146da1076 FUN_146da1076 body=442 status=ok
// SIG undefined FUN_146da1076(void)

void FUN_146da1076(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  char cVar1;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 *local_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110 [4];
  undefined1 local_10c [4];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  double local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  longlong local_90;
  code *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_68 = param_2[2];
  local_a8 = &local_78;
  local_78 = *param_2;
  uStack_70 = param_2[1];
  local_60 = *param_3;
  uStack_58 = param_3[1];
  local_50 = param_3[2];
  local_48 = *param_4;
  uStack_40 = param_4[1];
  local_38 = param_4[2];
  local_168 = &local_c8;
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d0 = 0.0;
  local_178 = &local_e8;
  local_d8 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_170 = &local_108;
  local_f8 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_140 = &local_128;
  local_128 = 0x3ff0000000000000;
  local_120 = 0;
  uStack_118 = 0;
  local_150 = *(undefined8 *)param_1[2];
  local_90 = *param_1;
  local_88 = FUN_14172543a;
  local_80 = *(undefined8 *)(local_90 + 0x10);
  local_a0 = &LAB_1429b1b78;
  local_98 = 0;
  local_138 = 0x3f50624de0000000;
  local_148 = 0;
  local_158 = local_110;
  local_160 = local_10c;
  cVar1 = FUN_14068570a(&local_a8,&local_90,param_1[1]);
  if (cVar1 != '\0') {
    if ((double)param_5[6] <= local_d0 && local_d0 != (double)param_5[6]) {
      param_5[6] = local_d0;
      *param_5 = local_c8;
      param_5[1] = uStack_c0;
      param_5[2] = local_b8;
      *(undefined4 *)(param_5 + 3) = (undefined4)local_e8;
      *(undefined4 *)((longlong)param_5 + 0x1c) = local_e8._4_4_;
      *(undefined4 *)(param_5 + 4) = (undefined4)uStack_e0;
      *(undefined4 *)((longlong)param_5 + 0x24) = uStack_e0._4_4_;
      param_5[5] = local_d8;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146da1232 FUN_146da1232 body=442 status=ok
// SIG undefined FUN_146da1232(void)

void FUN_146da1232(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  char cVar1;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 *local_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110 [4];
  undefined1 local_10c [4];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  double local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_68 = param_2[2];
  local_a8 = &local_78;
  local_78 = *param_2;
  uStack_70 = param_2[1];
  local_60 = *param_3;
  uStack_58 = param_3[1];
  local_50 = param_3[2];
  local_48 = *param_4;
  uStack_40 = param_4[1];
  local_38 = param_4[2];
  local_168 = &local_c8;
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d0 = 0.0;
  local_178 = &local_e8;
  local_d8 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_170 = &local_108;
  local_f8 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_140 = &local_128;
  local_128 = 0x3ff0000000000000;
  local_120 = 0;
  uStack_118 = 0;
  local_150 = *(undefined8 *)param_1[2];
  local_90 = *param_1;
  local_88 = &LAB_140686536;
  local_80 = *(undefined8 *)(local_90 + 0x10);
  local_a0 = &LAB_1429b1b78;
  local_98 = 0;
  local_138 = 0x3f50624de0000000;
  local_148 = 0;
  local_158 = local_110;
  local_160 = local_10c;
  cVar1 = FUN_14068570a(&local_a8,&local_90,param_1[1]);
  if (cVar1 != '\0') {
    if ((double)param_5[6] <= local_d0 && local_d0 != (double)param_5[6]) {
      param_5[6] = local_d0;
      *param_5 = local_c8;
      param_5[1] = uStack_c0;
      param_5[2] = local_b8;
      *(undefined4 *)(param_5 + 3) = (undefined4)local_e8;
      *(undefined4 *)((longlong)param_5 + 0x1c) = local_e8._4_4_;
      *(undefined4 *)(param_5 + 4) = (undefined4)uStack_e0;
      *(undefined4 *)((longlong)param_5 + 0x24) = uStack_e0._4_4_;
      param_5[5] = local_d8;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146da13ee FUN_146da13ee body=442 status=ok
// SIG undefined FUN_146da13ee(void)

void FUN_146da13ee(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  char cVar1;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 *local_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110 [4];
  undefined1 local_10c [4];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  double local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  longlong local_90;
  code *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_68 = param_2[2];
  local_a8 = &local_78;
  local_78 = *param_2;
  uStack_70 = param_2[1];
  local_60 = *param_3;
  uStack_58 = param_3[1];
  local_50 = param_3[2];
  local_48 = *param_4;
  uStack_40 = param_4[1];
  local_38 = param_4[2];
  local_168 = &local_c8;
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d0 = 0.0;
  local_178 = &local_e8;
  local_d8 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_170 = &local_108;
  local_f8 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_140 = &local_128;
  local_128 = 0x3ff0000000000000;
  local_120 = 0;
  uStack_118 = 0;
  local_150 = *(undefined8 *)param_1[2];
  local_90 = *param_1;
  local_88 = FUN_146cc490a;
  local_80 = *(undefined8 *)(local_90 + 0x10);
  local_a0 = &LAB_1429b1b78;
  local_98 = 0;
  local_138 = 0x3f50624de0000000;
  local_148 = 0;
  local_158 = local_110;
  local_160 = local_10c;
  cVar1 = FUN_14068570a(&local_a8,&local_90,param_1[1]);
  if (cVar1 != '\0') {
    if ((double)param_5[6] <= local_d0 && local_d0 != (double)param_5[6]) {
      param_5[6] = local_d0;
      *param_5 = local_c8;
      param_5[1] = uStack_c0;
      param_5[2] = local_b8;
      *(undefined4 *)(param_5 + 3) = (undefined4)local_e8;
      *(undefined4 *)((longlong)param_5 + 0x1c) = local_e8._4_4_;
      *(undefined4 *)(param_5 + 4) = (undefined4)uStack_e0;
      *(undefined4 *)((longlong)param_5 + 0x24) = uStack_e0._4_4_;
      param_5[5] = local_d8;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146da15aa FUN_146da15aa body=442 status=ok
// SIG undefined FUN_146da15aa(void)

void FUN_146da15aa(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  char cVar1;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 *local_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110 [4];
  undefined1 local_10c [4];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  double local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_68 = param_2[2];
  local_a8 = &local_78;
  local_78 = *param_2;
  uStack_70 = param_2[1];
  local_60 = *param_3;
  uStack_58 = param_3[1];
  local_50 = param_3[2];
  local_48 = *param_4;
  uStack_40 = param_4[1];
  local_38 = param_4[2];
  local_168 = &local_c8;
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d0 = 0.0;
  local_178 = &local_e8;
  local_d8 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_170 = &local_108;
  local_f8 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_140 = &local_128;
  local_128 = 0x3ff0000000000000;
  local_120 = 0;
  uStack_118 = 0;
  local_150 = *(undefined8 *)param_1[2];
  local_90 = *param_1;
  local_88 = &LAB_146cc4a26;
  local_80 = *(undefined8 *)(local_90 + 0x10);
  local_a0 = &LAB_1429b1b78;
  local_98 = 0;
  local_138 = 0x3f50624de0000000;
  local_148 = 0;
  local_158 = local_110;
  local_160 = local_10c;
  cVar1 = FUN_14068570a(&local_a8,&local_90,param_1[1]);
  if (cVar1 != '\0') {
    if ((double)param_5[6] <= local_d0 && local_d0 != (double)param_5[6]) {
      param_5[6] = local_d0;
      *param_5 = local_c8;
      param_5[1] = uStack_c0;
      param_5[2] = local_b8;
      *(undefined4 *)(param_5 + 3) = (undefined4)local_e8;
      *(undefined4 *)((longlong)param_5 + 0x1c) = local_e8._4_4_;
      *(undefined4 *)(param_5 + 4) = (undefined4)uStack_e0;
      *(undefined4 *)((longlong)param_5 + 0x24) = uStack_e0._4_4_;
      param_5[5] = local_d8;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146da1766 FUN_146da1766 body=442 status=ok
// SIG undefined FUN_146da1766(void)

void FUN_146da1766(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  char cVar1;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 *local_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110 [4];
  undefined1 local_10c [4];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  double local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  longlong local_90;
  code *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_68 = param_2[2];
  local_a8 = &local_78;
  local_78 = *param_2;
  uStack_70 = param_2[1];
  local_60 = *param_3;
  uStack_58 = param_3[1];
  local_50 = param_3[2];
  local_48 = *param_4;
  uStack_40 = param_4[1];
  local_38 = param_4[2];
  local_168 = &local_c8;
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d0 = 0.0;
  local_178 = &local_e8;
  local_d8 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_170 = &local_108;
  local_f8 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_140 = &local_128;
  local_128 = 0x3ff0000000000000;
  local_120 = 0;
  uStack_118 = 0;
  local_150 = *(undefined8 *)param_1[2];
  local_90 = *param_1;
  local_88 = FUN_14068657c;
  local_80 = *(undefined8 *)(local_90 + 0x10);
  local_a0 = &LAB_1429b1b78;
  local_98 = 0;
  local_138 = 0x3f50624de0000000;
  local_148 = 0;
  local_158 = local_110;
  local_160 = local_10c;
  cVar1 = FUN_14068570a(&local_a8,&local_90,param_1[1]);
  if (cVar1 != '\0') {
    if ((double)param_5[6] <= local_d0 && local_d0 != (double)param_5[6]) {
      param_5[6] = local_d0;
      *param_5 = local_c8;
      param_5[1] = uStack_c0;
      param_5[2] = local_b8;
      *(undefined4 *)(param_5 + 3) = (undefined4)local_e8;
      *(undefined4 *)((longlong)param_5 + 0x1c) = local_e8._4_4_;
      *(undefined4 *)(param_5 + 4) = (undefined4)uStack_e0;
      *(undefined4 *)((longlong)param_5 + 0x24) = uStack_e0._4_4_;
      param_5[5] = local_d8;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146da1922 FUN_146da1922 body=819 status=ok
// SIG undefined FUN_146da1922(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_146da1922(undefined8 *param_1,int param_2,float *param_3,float *param_4,float *param_5)

{
  double *pdVar1;
  double dVar2;
  bool bVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_148 [32];
  double *local_128;
  float local_120;
  float *local_118;
  float *local_110;
  float *local_108;
  undefined1 local_100;
  undefined *local_f8;
  undefined8 *local_e8;
  undefined8 local_e0;
  code *local_d8;
  double local_d0;
  float local_c8;
  undefined4 local_c4;
  code *local_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  pdVar1 = (double *)*param_1;
  if ((*pdVar1 != 0.0) || (NAN(*pdVar1))) {
    local_88 = *param_3;
    fStack_84 = param_3[1];
    fStack_80 = param_3[2];
    fStack_7c = param_3[3];
    local_48 = *param_5 - local_88;
    fStack_44 = param_5[1] - fStack_84;
    fStack_40 = param_5[2] - fStack_80;
    fStack_3c = param_5[3] - fStack_7c;
    local_58 = *param_4 - local_88;
    fStack_54 = param_4[1] - fStack_84;
    fStack_50 = param_4[2] - fStack_80;
    fStack_4c = param_4[3] - fStack_7c;
    local_e8 = &local_68;
    local_68 = 0;
    uStack_60 = 0;
    fVar5 = (float)pdVar1[0x16];
    fVar7 = (float)pdVar1[0x17];
    fVar10 = (float)pdVar1[0x14];
    fVar11 = (float)pdVar1[0x15];
    fVar6 = fVar10 * fVar10 + fVar11 * fVar11;
    fVar8 = fVar5 * fVar5 + fVar7 * fVar7;
    auVar15._0_4_ = fVar8 + fVar6;
    auVar15._4_4_ = fVar8 + fVar6;
    auVar15._8_4_ = fVar6 + fVar8;
    auVar15._12_4_ = fVar6 + fVar8;
    auVar16 = sqrtps(auVar15,auVar15);
    auVar16 = divps(_DAT_1499314a0,auVar16);
    auVar17._0_4_ = auVar16._0_4_ * fVar10;
    auVar17._4_4_ = auVar16._4_4_ * fVar11;
    auVar17._8_4_ = auVar16._8_4_ * fVar5;
    auVar17._12_4_ = auVar16._12_4_ * fVar7;
    auVar16._4_4_ = -(uint)(1e-08 <= auVar15._4_4_);
    auVar16._0_4_ = -(uint)(1e-08 <= auVar15._0_4_);
    auVar16._8_4_ = -(uint)(1e-08 <= auVar15._8_4_);
    auVar16._12_4_ = -(uint)(1e-08 <= auVar15._12_4_);
    local_78 = blendvps(_DAT_149932320,auVar17,auVar16);
    local_88 = (float)pdVar1[0x18] - local_88;
    fStack_84 = (float)pdVar1[0x19] - fStack_84;
    fStack_80 = (float)pdVar1[0x1a] - fStack_80;
    fStack_7c = 0.0 - fStack_7c;
    local_100 = *(undefined1 *)(pdVar1 + 0x27);
    local_120 = (float)*(double *)param_1[1];
    local_128 = pdVar1 + 0xc;
    local_d0 = pdVar1[0x20];
    local_c8 = (float)*(double *)((longlong)local_d0 + 0x10);
    local_c4 = 0;
    local_c0 = FUN_14172546a;
    local_e0 = 0;
    local_d8 = FUN_14014b546;
    local_f8 = &DAT_149f52c20;
    local_108 = &local_b8;
    local_110 = &local_a8;
    local_118 = &local_8c;
    cVar4 = FUN_1448541f8();
    bVar3 = true;
    if (cVar4 != '\0') {
      dVar2 = (double)local_8c;
      if (dVar2 < *pdVar1) {
        if (-2 < param_2) {
          if ((param_2 / 2 < *(int *)((longlong)pdVar1[0x12] + 0x28)) &&
             (*(char *)(*(longlong *)((longlong)pdVar1[0x12] + 0x20) + (longlong)(param_2 / 2)) ==
              -1)) goto LAB_146da1959;
        }
        pdVar1[4] = (double)local_b8;
        pdVar1[5] = (double)fStack_b4;
        pdVar1[6] = (double)fStack_b0;
        fVar5 = param_3[1];
        fVar6 = param_3[2];
        pdVar1[1] = (double)(*param_3 + local_a8);
        pdVar1[2] = (double)(fVar5 + fStack_a4);
        pdVar1[3] = (double)(fVar6 + fStack_a0);
        *pdVar1 = dVar2;
        *(int *)(pdVar1 + 7) = param_2;
        bVar3 = 0.0 < local_8c;
        if (!bVar3) {
          fVar5 = *param_4 - *param_3;
          fVar6 = param_4[1] - param_3[1];
          fVar7 = param_4[2] - param_3[2];
          fVar8 = param_4[3] - param_3[3];
          fVar10 = *param_5 - *param_3;
          fVar12 = param_5[1] - param_3[1];
          fVar13 = param_5[2] - param_3[2];
          fVar14 = param_5[3] - param_3[3];
          fVar11 = fVar12 * fVar5 - fVar6 * fVar10;
          fVar6 = fVar13 * fVar6 - fVar7 * fVar12;
          fVar10 = fVar10 * fVar7 - fVar5 * fVar13;
          fVar12 = fVar14 * fVar8 - fVar8 * fVar14;
          fVar12 = fVar12 * fVar12;
          fVar5 = fVar10 * fVar10 + fVar6 * fVar6;
          fVar7 = fVar6 * fVar6 + fVar10 * fVar10;
          fVar8 = fVar12 + fVar11 * fVar11;
          fVar12 = fVar11 * fVar11 + fVar12;
          auVar9._0_4_ = fVar8 + fVar5;
          auVar9._4_4_ = fVar12 + fVar7;
          auVar9._8_4_ = fVar5 + fVar8;
          auVar9._12_4_ = fVar7 + fVar12;
          auVar16 = sqrtps(auVar9,auVar9);
          auVar16 = divps(_DAT_149e1ef10,auVar16);
          pdVar1[4] = (double)(auVar16._0_4_ * fVar6);
          pdVar1[5] = (double)(auVar16._4_4_ * fVar10);
          pdVar1[6] = (double)(auVar16._8_4_ * fVar11);
          dVar2 = 0.0;
        }
        *(double *)param_1[1] = dVar2;
      }
    }
  }
  else {
    bVar3 = false;
  }
LAB_146da1959:
  if ((local_38 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146da1c56 FUN_146da1c56 body=978 status=ok
// SIG undefined FUN_146da1c56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146da1c56(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  double dVar1;
  double *pdVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  longlong lVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_158 [32];
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_90;
  double dStack_88;
  double local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *param_1 = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  param_1[0x12] = param_2;
  puVar8 = param_1 + 0x14;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar8 = *param_4;
    param_4 = param_4 + 1;
    puVar8 = puVar8 + 1;
  }
  param_1[0x20] = param_3;
  param_1[0x21] = param_5;
  param_1[0x26] = param_6;
  *(undefined1 *)(param_1 + 0x27) = param_7;
  local_98 = *(double *)(param_3 + 0x68);
  local_a8 = *(double *)(param_3 + 0x58);
  dStack_a0 = *(double *)(param_3 + 0x60);
  local_80 = *(double *)(param_3 + 0x80);
  local_90 = *(double *)(param_3 + 0x70);
  dStack_88 = *(double *)(param_3 + 0x78);
  dVar14 = (local_80 - local_98) * 0.5 + local_98;
  dVar5 = (dStack_88 - dStack_a0) * 0.5 + dStack_a0;
  dVar12 = (local_90 - local_a8) * 0.5 + local_a8;
  local_108 = (double)param_1[0x14];
  dStack_100 = (double)param_1[0x15];
  local_f8 = (double)param_1[0x16];
  uStack_f0 = param_1[0x17];
  dVar1 = (double)param_1[0x17];
  dVar16 = dVar12 * local_f8 - local_108 * dVar14;
  dVar15 = dVar5 * local_108 - dStack_100 * dVar12;
  dVar6 = dVar14 * dStack_100 - local_f8 * dVar5;
  dVar6 = dVar6 + dVar6;
  dVar16 = dVar16 + dVar16;
  dVar15 = dVar15 + dVar15;
  param_1[0x28] =
       (dVar15 * dStack_100 - dVar16 * local_f8) + dVar1 * dVar6 + dVar12 + (double)param_1[0x18];
  param_1[0x29] =
       (local_f8 * dVar6 - local_108 * dVar15) + (double)param_1[0x17] * dVar16 + dVar5 +
       (double)param_1[0x19];
  param_1[0x2a] =
       dVar15 * dVar1 + dVar14 + (dVar16 * local_108 - dVar6 * dStack_100) + (double)param_1[0x1a];
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0x3ff0000000000000;
  local_b8 = 0x3ff0000000000000;
  uStack_b0 = 0;
  FUN_1400fd046(&local_a8,&local_138);
  dVar1 = (double)param_1[0x26];
  param_1[0x2b] = (local_120 - local_138) * 0.5 + dVar1;
  param_1[0x2c] = (local_118 - local_130) * 0.5 + dVar1;
  param_1[0x2d] = (local_110 - local_128) * 0.5 + dVar1;
  pdVar2 = (double *)param_1[0x21];
  lVar7 = 0;
  do {
    dVar1 = pdVar2[lVar7];
    *(bool *)((longlong)param_1 + lVar7 + 0x128) = ABS(dVar1) <= 1e-08;
    dVar14 = 0.0;
    if (ABS(dVar1) > 1e-08) {
      dVar14 = 1.0 / pdVar2[lVar7];
    }
    param_1[lVar7 + 0x22] = dVar14;
    lVar7 = lVar7 + 1;
  } while (lVar7 != 3);
  auVar4._4_4_ = (float)(double)param_1[0x29];
  auVar4._0_4_ = (float)(double)param_1[0x28];
  auVar4._8_4_ = (float)(double)param_1[0x2a];
  auVar4._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 8) = auVar4;
  fVar11 = (float)pdVar2[2];
  fVar9 = (float)*pdVar2;
  fVar10 = (float)pdVar2[1];
  auVar13._4_4_ = fVar10;
  auVar13._0_4_ = fVar9;
  auVar13._8_4_ = fVar11;
  auVar13._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0xc) = auVar13;
  auVar3._4_4_ = fVar10;
  auVar3._0_4_ = fVar9;
  auVar3._8_4_ = fVar11;
  auVar3._12_4_ = 0;
  auVar13 = divps(_DAT_1499314a0,auVar3);
  *(uint *)(param_1 + 0xe) = -(uint)(ABS(fVar9) < 1e-08);
  *(uint *)((longlong)param_1 + 0x74) = -(uint)(ABS(fVar10) < 1e-08);
  *(uint *)(param_1 + 0xf) = -(uint)(ABS(fVar11) < 1e-08);
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0xffffffff;
  *(uint *)(param_1 + 10) = ~-(uint)(ABS(fVar9) < 1e-08) & auVar13._0_4_;
  *(uint *)((longlong)param_1 + 0x54) = ~-(uint)(ABS(fVar10) < 1e-08) & auVar13._4_4_;
  *(uint *)(param_1 + 0xb) = ~-(uint)(ABS(fVar11) < 1e-08) & auVar13._8_4_;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(float *)(param_1 + 0x10) = ABS((float)(double)param_1[0x2b]);
  *(float *)((longlong)param_1 + 0x84) = ABS((float)(double)param_1[0x2c]);
  *(float *)(param_1 + 0x11) = ABS((float)(double)param_1[0x2d]);
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  if ((local_70 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146da202a FUN_146da202a body=2375 status=ok
// SIG undefined FUN_146da202a(void)

void FUN_146da202a(double param_1,double *param_2,double *param_3,double param_4,double *param_5,
                  undefined8 param_6)

{
  byte *pbVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  byte bVar8;
  double dVar9;
  char cVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  size_t _Size;
  undefined8 uVar25;
  longlong lVar26;
  uint uVar27;
  bool bVar28;
  double dVar29;
  undefined1 auVar30 [16];
  double *pdVar31;
  double dVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStack_1e8 [32];
  double local_1c8;
  uint local_1bc;
  ulonglong local_1b8;
  double *local_1b0;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  ulonglong local_198;
  int local_18c;
  int local_188;
  int local_184;
  uint local_180;
  uint local_17c;
  longlong local_178;
  double local_170;
  double *local_168;
  undefined8 **local_160;
  undefined8 *local_158;
  undefined8 uStack_150;
  double local_140;
  double *local_138;
  int local_130;
  uint local_128;
  uint local_124;
  double local_120;
  double local_118 [4];
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  dVar29 = *param_5;
  dVar2 = param_5[1];
  local_118[3] = *(double *)((longlong)param_1 + 0x138) - dVar29;
  local_f0 = *(double *)((longlong)param_1 + 0x150) + dVar29;
  local_e8 = *(double *)((longlong)param_1 + 0x158) + dVar2;
  local_f8 = *(double *)((longlong)param_1 + 0x140) - dVar2;
  dVar3 = *param_3;
  dVar4 = param_3[1];
  dVar5 = *(double *)((longlong)param_1 + 0x50);
  dVar6 = *(double *)((longlong)param_1 + 0x58);
  dVar32 = (double)(-(ulonglong)(0.0 < dVar4) & 0x3ff0000000000000 |
                   (ulonglong)
                   (~(uint)(-(ulonglong)(0.0 < dVar4) >> 0x20) &
                   (uint)(-(ulonglong)(dVar4 < 0.0) >> 0x20) & 0xbff00000) << 0x20) * dVar2;
  local_170 = (double)(-(ulonglong)(0.0 < dVar3) & 0x3ff0000000000000 |
                      (ulonglong)
                      (~(uint)(-(ulonglong)(0.0 < dVar3) >> 0x20) &
                      (uint)(-(ulonglong)(dVar3 < 0.0) >> 0x20) & 0xbff00000) << 0x20) * dVar29;
  local_138 = (double *)(param_2[1] - dVar32);
  local_140 = *param_2 - local_170;
  local_168 = (double *)(dVar4 * param_4 + param_2[1] + dVar32);
  local_170 = dVar3 * param_4 + *param_2 + local_170;
  local_118[0] = dVar29;
  local_118[1] = dVar2;
  cVar10 = FUN_1448596be();
  if (cVar10 != '\0') {
    dVar3 = *(double *)((longlong)param_1 + 0xb0);
    dVar4 = *(double *)((longlong)param_1 + 0xb8);
    dVar32 = *(double *)((longlong)param_1 + 0xe0);
    dVar7 = *(double *)((longlong)param_1 + 0xd8);
    uVar15 = (uint)((local_140 / dVar5 - dVar3) / dVar7);
    uVar20 = (uint)(((double)local_138 / dVar6 - dVar4) / dVar32);
    iVar13 = *(int *)((longlong)param_1 + 0xd0);
    uVar16 = iVar13 - 1;
    uVar23 = 0;
    if (0 < (int)uVar15) {
      uVar23 = uVar15;
    }
    if (iVar13 <= (int)uVar15) {
      uVar23 = uVar16;
    }
    iVar11 = *(int *)((longlong)param_1 + 0xd4);
    uVar15 = 0;
    if (0 < (int)uVar20) {
      uVar15 = uVar20;
    }
    uVar27 = iVar11 - 1;
    if (iVar11 <= (int)uVar20) {
      uVar15 = uVar27;
    }
    uVar21 = (uint)((local_170 / dVar5 - dVar3) / dVar7);
    uVar22 = (uint)(((double)local_168 / dVar6 - dVar4) / dVar32);
    uVar20 = 0;
    if (0 < (int)uVar21) {
      uVar20 = uVar21;
    }
    if (iVar13 <= (int)uVar21) {
      uVar20 = uVar16;
    }
    uVar21 = 0;
    if (0 < (int)uVar22) {
      uVar21 = uVar22;
    }
    if (iVar11 <= (int)uVar22) {
      uVar21 = uVar27;
    }
    uVar22 = -(uVar20 - uVar23);
    if ((int)uVar22 < 0) {
      uVar22 = uVar20 - uVar23;
    }
    uVar18 = -(uVar21 - uVar15);
    if ((int)uVar18 < 0) {
      uVar18 = uVar21 - uVar15;
    }
    local_120 = param_4;
    if (uVar18 == 0 && uVar22 == 0) {
      uVar33 = SUB84(local_140,0);
      uVar34 = (int)((ulonglong)local_140 >> 0x20);
      if (local_170 <= local_140) {
        uVar33 = SUB84(local_170,0);
        uVar34 = (int)((ulonglong)local_170 >> 0x20);
      }
      uVar35 = SUB84(local_138,0);
      uVar36 = (undefined4)((ulonglong)local_138 >> 0x20);
      if ((double)local_168 <= (double)local_138) {
        uVar35 = SUB84(local_168,0);
        uVar36 = (undefined4)((ulonglong)local_168 >> 0x20);
      }
      uVar15 = (uint)((((double)CONCAT44(uVar34,uVar33) - dVar29) / dVar5 - dVar3) / dVar7);
      uVar20 = (uint)((((double)CONCAT44(uVar36,uVar35) - dVar2) / dVar6 - dVar4) / dVar32);
      uVar23 = 0;
      if (0 < (int)uVar15) {
        uVar23 = uVar15;
      }
      dVar9 = local_140;
      if (local_140 <= local_170) {
        dVar9 = local_170;
      }
      if (iVar13 <= (int)uVar15) {
        uVar23 = uVar16;
      }
      uVar15 = 0;
      if (0 < (int)uVar20) {
        uVar15 = uVar20;
      }
      if (iVar11 <= (int)uVar20) {
        uVar15 = uVar27;
      }
      pdVar31 = local_138;
      if ((double)local_138 <= (double)local_168) {
        pdVar31 = local_168;
      }
      uVar21 = (uint)(((dVar9 + dVar29) / dVar5 - dVar3) / dVar7);
      uVar22 = (uint)((((double)pdVar31 + dVar2) / dVar6 - dVar4) / dVar32);
      uVar20 = 0;
      if (0 < (int)uVar21) {
        uVar20 = uVar21;
      }
      if (iVar13 <= (int)uVar21) {
        uVar20 = uVar16;
      }
      uVar16 = 0;
      if (0 < (int)uVar22) {
        uVar16 = uVar22;
      }
      if (iVar11 <= (int)uVar22) {
        uVar16 = uVar27;
      }
      if ((int)uVar15 <= (int)uVar16) {
        do {
          uVar27 = uVar23;
          if ((int)uVar23 <= (int)uVar20) {
            do {
              cVar10 = FUN_146da2972(param_6,(*(ushort *)((longlong)param_1 + 0x92) - 1) * uVar15 +
                                             uVar27,&local_120);
              if (cVar10 == '\0') goto LAB_146da23fc;
              uVar27 = uVar27 + 1;
            } while (uVar20 + 1 != uVar27);
          }
          bVar28 = uVar15 != uVar16;
          uVar15 = uVar15 + 1;
        } while (bVar28);
      }
    }
    else {
      local_1bc = CONCAT31(local_1bc._1_3_,(int)uVar23 < (int)uVar20);
      local_1a4 = CONCAT31(local_1a4._1_3_,(int)uVar15 < (int)uVar21);
      uVar16 = uVar22 - uVar18;
      local_198 = (ulonglong)uVar16;
      local_19c = (uint)(uVar22 < uVar18 || uVar16 == 0);
      local_1a0 = (uint)(uVar22 >= uVar18 && uVar16 != 0);
      local_1c8 = *(double *)((longlong)param_1 + 0xd0);
      iVar11 = (int)((ulonglong)local_1c8 >> 0x20) * SUB84(local_1c8,0);
      iVar13 = iVar11 + 7;
      if (-1 < iVar11) {
        iVar13 = iVar11;
      }
      local_130 = (iVar13 >> 3) + 1;
      _Size = (size_t)local_130;
      local_1b8 = (ulonglong)uVar23;
      local_140 = local_1c8;
      local_128 = local_19c;
      local_124 = local_1a0;
      local_1b0 = (double *)FUN_14001cc68(_Size + (_Size == 0));
      lVar19 = 0;
      local_138 = local_1b0;
      memset(local_1b0,0,_Size);
      local_158 = (undefined8 *)0x0;
      uVar25 = CONCAT44(uVar15,(undefined4)local_1b8);
      uStack_150 = 1;
      FUN_146da30d8(&local_158,0);
      *local_158 = uVar25;
      uVar16 = (uint)local_1b8;
      iVar11 = uVar15 * local_1c8._0_4_ + uVar16;
      iVar13 = uVar15 * local_1c8._0_4_ + uVar16 + 7;
      if (-1 < iVar11) {
        iVar13 = iVar11;
      }
      local_158[1] = 0xbff0000000000000;
      pbVar1 = (byte *)((longlong)local_1b0 + (longlong)(iVar13 >> 3));
      *pbVar1 = *pbVar1 | (byte)(1 << ((byte)iVar11 & 7));
      if (0 < (int)uStack_150) {
        local_184 = -uVar18;
        local_188 = (local_1bc & 0xff) * 2 + -1;
        local_18c = (local_1a4 & 0xff) * 2 + -1;
        local_19c = -local_19c;
        local_1a0 = -local_1a0;
        lVar26 = 8;
        local_1c8 = (double)(local_1b8 & 0xffffffff);
        local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar15);
        uVar24 = local_1b8;
        iVar13 = (int)uStack_150;
        local_1bc = uVar15;
        local_1a8 = uVar16;
        do {
          dVar29 = *(double *)((longlong)local_158 + lVar26);
          if (dVar29 <= local_120) {
            local_178 = *(longlong *)((longlong)local_158 + lVar26 + -8);
            local_168 = &local_140;
            local_160 = &local_158;
            iVar11 = (int)local_178;
            iVar13 = 0;
            if (0 < iVar11) {
              iVar13 = iVar11;
            }
            if (*(int *)((longlong)param_1 + 0xd0) <= iVar11) {
              iVar13 = *(int *)((longlong)param_1 + 0xd0) + -1;
            }
            iVar14 = (int)((ulonglong)local_178 >> 0x20);
            iVar17 = 0;
            if (iVar14 != 0 && -1 < local_178) {
              iVar17 = iVar14;
            }
            if (*(int *)((longlong)param_1 + 0xd4) <= iVar14) {
              iVar17 = *(int *)((longlong)param_1 + 0xd4) + -1;
            }
            local_170 = param_1;
            if (((iVar13 == iVar11) && (iVar17 == iVar14)) &&
               (local_1b8 = uVar24,
               cVar10 = FUN_146da2972(param_6,(*(ushort *)((longlong)param_1 + 0x92) - 1) * iVar14 +
                                              iVar11,&local_120), uVar24 = local_1b8, cVar10 == '\0'
               )) break;
            if (dVar29 < 0.0) {
              uVar12 = (ulonglong)((local_1a0 & 1) << 3);
              auVar30._0_8_ =
                   *(double *)((longlong)local_118 + uVar12) /
                   ABS(*(double *)((longlong)param_1 + 0x50 + uVar12));
              auVar30._8_8_ = 0;
              if (0.0 <= auVar30._0_8_) {
                auVar30 = roundpd(auVar30,auVar30,2);
                dVar29 = auVar30._0_8_;
              }
              else {
                auVar30 = roundpd(auVar30,auVar30,1);
                dVar29 = auVar30._0_8_;
              }
              local_1a4 = (uint)dVar29;
              local_1b8 = uVar24;
              FUN_146da2c8a(&local_170,&local_178,&local_128);
              local_180 = local_19c;
              local_17c = local_1a0;
              FUN_146da2c8a(&local_170,&local_178,&local_180,local_1a4);
              uVar24 = local_1b8;
              if ((local_1c8._0_4_ == uVar20) && ((uint)local_1b0 == uVar21)) {
                local_1c8 = (double)(ulonglong)uVar20;
                local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar21);
              }
              else {
                iVar13 = (int)local_198 * 2;
                if (local_184 <= iVar13) {
                  local_198 = (ulonglong)((int)local_198 - uVar18);
                  local_1a8 = local_1c8._0_4_ + local_188;
                  local_1c8 = (double)(ulonglong)local_1a8;
                  uVar24 = (ulonglong)local_1a8;
                }
                uVar16 = local_1bc;
                if (iVar13 <= (int)uVar22) {
                  local_198 = (ulonglong)((int)local_198 + uVar22);
                  uVar15 = (uint)local_1b0 + local_18c;
                  local_1c8 = (double)(ulonglong)local_1a8;
                  uVar16 = uVar15;
                }
                uVar27 = local_140._0_4_ * uVar16 + SUB84(local_1c8,0);
                uVar23 = local_140._0_4_ * uVar16 + SUB84(local_1c8,0) + 7;
                if (-1 < (int)uVar27) {
                  uVar23 = uVar27;
                }
                bVar8 = *(byte *)((longlong)local_138 + (longlong)((int)uVar23 >> 3));
                if ((bVar8 >> (uVar27 & 7) & 1) == 0) {
                  *(byte *)((longlong)local_138 + (longlong)((int)uVar23 >> 3)) =
                       (byte)(1 << ((byte)uVar27 & 7)) | bVar8;
                  local_1c8 = (double)(longlong)(int)uStack_150;
                  uVar16 = (int)uStack_150 + 1;
                  uStack_150 = CONCAT44(uStack_150._4_4_,uVar16);
                  if (uStack_150._4_4_ < uVar16) {
                    local_1b8 = uVar24;
                    FUN_146da30d8(&local_158,local_1c8);
                    uVar24 = local_1b8;
                  }
                  local_1a8 = (uint)uVar24;
                  local_158[(longlong)local_1c8 * 2] =
                       uVar24 & 0xffffffff | (ulonglong)uVar15 << 0x20;
                  local_158[(longlong)local_1c8 * 2 + 1] = 0xbff0000000000000;
                  local_1c8 = (double)(uVar24 & 0xffffffff);
                  local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar15);
                  local_1bc = uVar15;
                }
                else {
                  local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar16);
                  local_1bc = uVar16;
                }
              }
            }
            iVar13 = (int)uStack_150;
          }
          lVar19 = lVar19 + 1;
          lVar26 = lVar26 + 0x10;
        } while (lVar19 < iVar13);
      }
      if (local_158 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (local_138 != (double *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_146da23fc:
  if ((local_e0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146da2972 FUN_146da2972 body=791 status=ok
// SIG undefined FUN_146da2972(void)

bool FUN_146da2972(double *param_1,int param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  float fVar16;
  float fVar21;
  float fVar22;
  undefined1 auVar17 [16];
  float fVar23;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar35;
  float fVar36;
  undefined1 auVar33 [16];
  float fVar37;
  undefined1 auVar34 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar45 [16];
  float fVar46;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  float fVar47;
  undefined1 auStack_118 [32];
  float *local_f8;
  double *local_e8;
  double *local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar4 = (longlong *)param_1[0x12];
  uVar3 = *(ushort *)((longlong)plVar4 + 0x72);
  iVar13 = param_2 / (int)(uVar3 - 1) + param_2;
  dVar1 = (double)plVar4[0xc];
  lVar5 = *plVar4;
  lVar15 = (longlong)iVar13;
  dVar2 = (double)plVar4[0x10];
  iVar14 = iVar13 / (int)(uint)uVar3;
  auVar26._8_8_ = in_XMM2._8_8_;
  auVar26._0_8_ = (double)*(ushort *)(lVar5 + lVar15 * 2) * dVar2 + dVar1;
  auVar27._4_12_ = auVar26._4_12_;
  auVar27._0_4_ = (float)auVar26._0_8_;
  auVar38._4_12_ = in_XMM4._4_12_;
  auVar38._0_4_ = (float)((double)*(ushort *)(lVar5 + 2 + lVar15 * 2) * dVar2 + dVar1);
  auVar41._4_12_ = in_XMM5._4_12_;
  auVar41._0_4_ =
       (float)((double)*(ushort *)(lVar5 + ((ulonglong)uVar3 + lVar15) * 2) * dVar2 + dVar1);
  auVar24._4_12_ = unaff_XMM8._4_12_;
  auVar24._0_4_ = (float)iVar14;
  fVar31 = (float)(iVar13 % (int)(uint)uVar3);
  fVar46 = (float)((double)*(ushort *)(lVar5 + 2 + ((ulonglong)uVar3 + lVar15) * 2) * dVar2 + dVar1)
  ;
  auVar17 = insertps(ZEXT416((uint)fVar31),auVar24,0x1c);
  auVar42 = insertps(auVar17,auVar27,0x20);
  auVar43 = insertps(ZEXT416((uint)(fVar31 + 1.0)),auVar24,0x1c);
  auVar44 = insertps(auVar43,auVar38,0x20);
  auVar45._0_4_ = auVar24._0_4_ + 1.0;
  auVar45._4_12_ = auVar24._4_12_;
  auVar43 = insertps(ZEXT416((uint)fVar31),auVar45,0x1c);
  auVar33 = insertps(auVar43,auVar41,0x20);
  auVar24 = insertps(ZEXT416((uint)(fVar31 + 1.0)),auVar45,0x1c);
  auVar43._4_4_ = unaff_XMM9_Db;
  auVar43._0_4_ = fVar46;
  auVar43._8_4_ = unaff_XMM9_Dc;
  auVar43._12_4_ = unaff_XMM9_Dd;
  auVar43 = insertps(auVar24,auVar43,0x20);
  fVar31 = auVar41._0_4_;
  if (fVar46 <= auVar41._0_4_) {
    fVar31 = fVar46;
  }
  fVar47 = auVar38._0_4_;
  if (fVar31 <= auVar38._0_4_) {
    fVar47 = fVar31;
  }
  fVar31 = auVar27._0_4_;
  if (fVar47 <= auVar27._0_4_) {
    fVar31 = fVar47;
  }
  if (auVar41._0_4_ <= fVar46) {
    auVar41._0_4_ = fVar46;
  }
  if (auVar38._0_4_ <= auVar41._0_4_) {
    auVar38._0_4_ = auVar41._0_4_;
  }
  if (auVar27._0_4_ <= auVar38._0_4_) {
    auVar27._0_4_ = auVar38._0_4_;
  }
  auVar24 = insertps(auVar24,auVar27,0x20);
  auVar6._4_4_ = (int)((ulonglong)auVar26._0_8_ >> 0x20);
  auVar6._0_4_ = fVar31;
  auVar6._8_4_ = in_XMM2._8_4_;
  auVar6._12_4_ = in_XMM2._12_4_;
  auVar17 = insertps(auVar17,auVar6,0x20);
  fVar31 = *(float *)(plVar4 + 10);
  fVar46 = *(float *)((longlong)plVar4 + 0x54);
  fVar47 = *(float *)(plVar4 + 0xb);
  fVar7 = *(float *)((longlong)plVar4 + 0x5c);
  local_d8 = auVar42._0_4_ * fVar31;
  fStack_d4 = auVar42._4_4_ * fVar46;
  fStack_d0 = auVar42._8_4_ * fVar47;
  fStack_cc = auVar42._12_4_ * fVar7;
  local_c8 = auVar44._0_4_ * fVar31;
  fStack_c4 = auVar44._4_4_ * fVar46;
  fStack_c0 = auVar44._8_4_ * fVar47;
  fStack_bc = auVar44._12_4_ * fVar7;
  local_b8 = auVar33._0_4_ * fVar31;
  fStack_b4 = auVar33._4_4_ * fVar46;
  fStack_b0 = auVar33._8_4_ * fVar47;
  fStack_ac = auVar33._12_4_ * fVar7;
  local_a8 = auVar43._0_4_ * fVar31;
  fStack_a4 = auVar43._4_4_ * fVar46;
  fStack_a0 = auVar43._8_4_ * fVar47;
  fStack_9c = auVar43._12_4_ * fVar7;
  auVar33._0_8_ = CONCAT44(auVar17._4_4_ * fVar46,auVar17._0_4_ * fVar31);
  auVar33._8_4_ = auVar17._8_4_ * fVar47;
  auVar33._12_4_ = auVar17._12_4_ * fVar7;
  auVar17._0_4_ = auVar24._0_4_ * fVar31;
  auVar17._4_4_ = auVar24._4_4_ * fVar46;
  auVar17._8_4_ = auVar24._8_4_ * fVar47;
  auVar17._12_4_ = auVar24._12_4_ * fVar7;
  auVar42._8_4_ = auVar33._8_4_;
  auVar42._0_8_ = auVar33._0_8_;
  auVar42._12_4_ = auVar33._12_4_;
  auVar24 = minps(auVar42,auVar17);
  auVar43 = maxps(auVar33,auVar17);
  fVar31 = *(float *)(param_1 + 8);
  fVar46 = *(float *)((longlong)param_1 + 0x44);
  fVar47 = *(float *)(param_1 + 9);
  fVar7 = *(float *)((longlong)param_1 + 0x4c);
  uVar8 = *(uint *)(param_1 + 0xe);
  uVar9 = *(uint *)((longlong)param_1 + 0x74);
  uVar10 = *(uint *)(param_1 + 0xf);
  uVar11 = *(uint *)((longlong)param_1 + 0x7c);
  fVar32 = auVar24._0_4_ - *(float *)(param_1 + 0x10);
  fVar35 = auVar24._4_4_ - *(float *)((longlong)param_1 + 0x84);
  fVar36 = auVar24._8_4_ - *(float *)(param_1 + 0x11);
  fVar37 = auVar24._12_4_ - *(float *)((longlong)param_1 + 0x8c);
  fVar16 = auVar43._0_4_ + *(float *)(param_1 + 0x10);
  fVar21 = auVar43._4_4_ + *(float *)((longlong)param_1 + 0x84);
  fVar22 = auVar43._8_4_ + *(float *)(param_1 + 0x11);
  fVar23 = auVar43._12_4_ + *(float *)((longlong)param_1 + 0x8c);
  auVar44._0_4_ = -(uint)(fVar16 < fVar31 || fVar31 < fVar32) & uVar8;
  auVar44._4_4_ = -(uint)(fVar21 < fVar46 || fVar46 < fVar35) & uVar9;
  auVar44._8_4_ = -(uint)(fVar22 < fVar47 || fVar47 < fVar36) & uVar10;
  auVar44._12_4_ = -(uint)(fVar23 < fVar7 || fVar7 < fVar37) & uVar11;
  iVar13 = movmskps(iVar14,auVar44);
  local_e8 = param_1;
  local_e0 = param_3;
  if (iVar13 == 0) {
    auVar25._0_4_ = (float)*param_3;
    auVar25._4_4_ = auVar25._0_4_;
    auVar25._8_4_ = auVar25._0_4_;
    auVar25._12_4_ = auVar25._0_4_;
    auVar39._0_8_ =
         CONCAT44(~uVar9 & (uint)((fVar35 - fVar46) * *(float *)((longlong)param_1 + 0x54)),
                  ~uVar8 & (uint)((fVar32 - fVar31) * *(float *)(param_1 + 10)));
    auVar39._8_4_ = ~uVar10 & (uint)((fVar36 - fVar47) * *(float *)(param_1 + 0xb));
    auVar39._12_4_ = ~uVar11 & (uint)((fVar37 - fVar7) * *(float *)((longlong)param_1 + 0x5c));
    auVar34._0_4_ = ~uVar8 & (uint)((fVar16 - fVar31) * *(float *)(param_1 + 10));
    auVar34._4_4_ = ~uVar9 & (uint)((fVar21 - fVar46) * *(float *)((longlong)param_1 + 0x54));
    auVar34._8_4_ = ~uVar10 & (uint)((fVar22 - fVar47) * *(float *)(param_1 + 0xb));
    auVar34._12_4_ = ~uVar11 & (uint)((fVar23 - fVar7) * *(float *)((longlong)param_1 + 0x5c));
    auVar28._0_4_ = uVar8 & (uint)auVar25._0_4_;
    auVar28._4_4_ = uVar9 & (uint)auVar25._0_4_;
    auVar28._8_4_ = uVar10 & (uint)auVar25._0_4_;
    auVar28._12_4_ = uVar11 & (uint)auVar25._0_4_;
    auVar18._8_4_ = auVar39._8_4_;
    auVar18._0_8_ = auVar39._0_8_;
    auVar18._12_4_ = auVar39._12_4_;
    auVar43 = minps(auVar18,auVar28 | auVar34);
    auVar24 = maxps(auVar39,auVar28 | auVar34);
    auVar19._12_4_ = auVar43._12_4_;
    auVar29._0_8_ = auVar43._4_8_;
    auVar29._8_4_ = auVar43._0_4_;
    auVar29._12_4_ = auVar19._12_4_;
    auVar17 = maxps(auVar43,auVar29);
    auVar19._4_4_ = auVar43._0_4_;
    auVar19._0_4_ = auVar43._8_4_;
    auVar19._8_4_ = auVar43._4_4_;
    auVar43 = maxps(auVar17,auVar19);
    auVar17 = maxps(auVar43,ZEXT816(0));
    auVar40._12_4_ = auVar24._12_4_;
    auVar20._0_8_ = auVar24._4_8_;
    auVar20._8_4_ = auVar24._0_4_;
    auVar20._12_4_ = auVar40._12_4_;
    auVar43 = minps(auVar24,auVar20);
    auVar40._4_4_ = auVar24._0_4_;
    auVar40._0_4_ = auVar24._8_4_;
    auVar40._8_4_ = auVar24._4_4_;
    auVar43 = minps(auVar43,auVar40);
    auVar43 = minps(auVar43,auVar25);
    auVar30._4_4_ = -(uint)(auVar43._4_4_ < auVar17._4_4_);
    auVar30._0_4_ = -(uint)(auVar43._0_4_ < auVar17._0_4_);
    auVar30._8_4_ = -(uint)(auVar43._8_4_ < auVar17._8_4_);
    auVar30._12_4_ = -(uint)(auVar43._12_4_ < auVar17._12_4_);
    iVar13 = movmskps(0,auVar30);
    if (iVar13 == 0) {
      local_f8 = &local_a8;
      cVar12 = FUN_146da2d8c(&local_e8,param_2 * 2,&local_d8,&local_c8);
      if (cVar12 != '\0') {
        local_f8 = &local_b8;
        FUN_146da2d8c(&local_e8,param_2 * 2 | 1,&local_d8,&local_a8);
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return 0.0 < *param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146da2c8a FUN_146da2c8a body=257 status=ok
// SIG undefined FUN_146da2c8a(void)

void FUN_146da2c8a(longlong *param_1,ulonglong *param_2,int *param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  if (0 < param_4) {
    lVar2 = *param_1;
    uVar11 = *param_2;
    uVar8 = uVar11 >> 0x20;
    while( true ) {
      uVar10 = (int)uVar11 + *param_3;
      uVar11 = (ulonglong)uVar10;
      if ((int)uVar10 < 0) break;
      uVar7 = (int)uVar8 + param_3[1];
      uVar8 = (ulonglong)uVar7;
      if ((int)uVar7 < 0) {
        return;
      }
      if (*(int *)(lVar2 + 0xd0) <= (int)uVar10) {
        return;
      }
      if (*(int *)(lVar2 + 0xd4) <= (int)uVar7) {
        return;
      }
      iVar5 = *(int *)param_1[1] * uVar7;
      uVar9 = iVar5 + uVar10;
      uVar6 = iVar5 + uVar10 + 7;
      if (-1 < (int)uVar9) {
        uVar6 = uVar9;
      }
      lVar3 = *(longlong *)((int *)param_1[1] + 2);
      bVar1 = *(byte *)(lVar3 + ((int)uVar6 >> 3));
      if ((bVar1 >> (uVar9 & 7) & 1) == 0) {
        *(byte *)(lVar3 + ((int)uVar6 >> 3)) = (byte)(1 << ((byte)uVar9 & 7)) | bVar1;
        plVar4 = (longlong *)param_1[2];
        iVar5 = (int)plVar4[1];
        *(uint *)(plVar4 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)plVar4 + 0xc) < iVar5 + 1U) {
          FUN_146da30d8(plVar4,iVar5);
        }
        lVar3 = *plVar4;
        *(ulonglong *)(lVar3 + (longlong)iVar5 * 0x10) = CONCAT44(uVar7,uVar10);
        *(undefined8 *)(lVar3 + 8 + (longlong)iVar5 * 0x10) = 0;
      }
      param_4 = param_4 + -1;
      if (param_4 == 0) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 146da2d8c FUN_146da2d8c body=842 status=ok
// SIG undefined FUN_146da2d8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_146da2d8c(undefined8 *param_1,int param_2,float *param_3,float *param_4,float *param_5)

{
  double *pdVar1;
  double dVar2;
  bool bVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_148 [32];
  double *local_128;
  float local_120;
  float *local_118;
  float *local_110;
  float *local_108;
  undefined1 local_100;
  undefined *local_f8;
  undefined8 *local_e8;
  undefined8 local_e0;
  code *local_d8;
  double local_d0;
  float local_c8;
  float local_c4;
  undefined1 *local_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  pdVar1 = (double *)*param_1;
  if ((*pdVar1 != 0.0) || (NAN(*pdVar1))) {
    local_88 = *param_3;
    fStack_84 = param_3[1];
    fStack_80 = param_3[2];
    fStack_7c = param_3[3];
    local_48 = *param_5 - local_88;
    fStack_44 = param_5[1] - fStack_84;
    fStack_40 = param_5[2] - fStack_80;
    fStack_3c = param_5[3] - fStack_7c;
    local_58 = *param_4 - local_88;
    fStack_54 = param_4[1] - fStack_84;
    fStack_50 = param_4[2] - fStack_80;
    fStack_4c = param_4[3] - fStack_7c;
    local_e8 = &local_68;
    local_68 = 0;
    uStack_60 = 0;
    fVar5 = (float)pdVar1[0x16];
    fVar7 = (float)pdVar1[0x17];
    fVar13 = (float)pdVar1[0x14];
    fVar14 = (float)pdVar1[0x15];
    fVar6 = fVar13 * fVar13 + fVar14 * fVar14;
    fVar8 = fVar5 * fVar5 + fVar7 * fVar7;
    auVar15._0_4_ = fVar8 + fVar6;
    auVar15._4_4_ = fVar8 + fVar6;
    auVar15._8_4_ = fVar6 + fVar8;
    auVar15._12_4_ = fVar6 + fVar8;
    auVar16 = sqrtps(auVar15,auVar15);
    auVar16 = divps(_DAT_1499314a0,auVar16);
    auVar17._0_4_ = auVar16._0_4_ * fVar13;
    auVar17._4_4_ = auVar16._4_4_ * fVar14;
    auVar17._8_4_ = auVar16._8_4_ * fVar5;
    auVar17._12_4_ = auVar16._12_4_ * fVar7;
    auVar16._4_4_ = -(uint)(1e-08 <= auVar15._4_4_);
    auVar16._0_4_ = -(uint)(1e-08 <= auVar15._0_4_);
    auVar16._8_4_ = -(uint)(1e-08 <= auVar15._8_4_);
    auVar16._12_4_ = -(uint)(1e-08 <= auVar15._12_4_);
    local_78 = blendvps(_DAT_149932320,auVar17,auVar16);
    local_88 = (float)pdVar1[0x18] - local_88;
    fStack_84 = (float)pdVar1[0x19] - fStack_84;
    fStack_80 = (float)pdVar1[0x1a] - fStack_80;
    fStack_7c = 0.0 - fStack_7c;
    local_120 = (float)*(double *)param_1[1];
    local_100 = *(undefined1 *)(pdVar1 + 0x27);
    local_d0 = pdVar1[0x20];
    local_c8 = (float)*(double *)((longlong)local_d0 + 0x10);
    local_128 = pdVar1 + 0xc;
    local_c4 = (float)(double)(-(ulonglong)
                                (0.0 < *(double *)(*(longlong *)((longlong)local_d0 + 0x88) + 0x10))
                              & (ulonglong)*(double *)((longlong)local_d0 + 0x10));
    local_c0 = &LAB_146cc500a;
    local_e0 = 0;
    local_d8 = FUN_14014b546;
    local_f8 = &DAT_149f52c20;
    local_108 = &local_b8;
    local_110 = &local_a8;
    local_118 = &local_8c;
    cVar4 = FUN_1448541f8();
    bVar3 = true;
    if (cVar4 != '\0') {
      dVar2 = (double)local_8c;
      if (dVar2 < *pdVar1) {
        if (-2 < param_2) {
          if ((param_2 / 2 < *(int *)((longlong)pdVar1[0x12] + 0x28)) &&
             (*(char *)(*(longlong *)((longlong)pdVar1[0x12] + 0x20) + (longlong)(param_2 / 2)) ==
              -1)) goto LAB_146da2dc3;
        }
        pdVar1[4] = (double)local_b8;
        pdVar1[5] = (double)fStack_b4;
        pdVar1[6] = (double)fStack_b0;
        fVar5 = param_3[1];
        fVar6 = param_3[2];
        pdVar1[1] = (double)(*param_3 + local_a8);
        pdVar1[2] = (double)(fVar5 + fStack_a4);
        pdVar1[3] = (double)(fVar6 + fStack_a0);
        *pdVar1 = dVar2;
        *(int *)(pdVar1 + 7) = param_2;
        bVar3 = 0.0 < local_8c;
        if (!bVar3) {
          fVar5 = *param_4 - *param_3;
          fVar6 = param_4[1] - param_3[1];
          fVar7 = param_4[2] - param_3[2];
          fVar8 = param_4[3] - param_3[3];
          fVar13 = *param_5 - *param_3;
          fVar10 = param_5[1] - param_3[1];
          fVar11 = param_5[2] - param_3[2];
          fVar12 = param_5[3] - param_3[3];
          fVar14 = fVar10 * fVar5 - fVar6 * fVar13;
          fVar6 = fVar11 * fVar6 - fVar7 * fVar10;
          fVar13 = fVar13 * fVar7 - fVar5 * fVar11;
          fVar10 = fVar12 * fVar8 - fVar8 * fVar12;
          fVar10 = fVar10 * fVar10;
          fVar5 = fVar13 * fVar13 + fVar6 * fVar6;
          fVar7 = fVar6 * fVar6 + fVar13 * fVar13;
          fVar8 = fVar10 + fVar14 * fVar14;
          fVar10 = fVar14 * fVar14 + fVar10;
          auVar9._0_4_ = fVar8 + fVar5;
          auVar9._4_4_ = fVar10 + fVar7;
          auVar9._8_4_ = fVar5 + fVar8;
          auVar9._12_4_ = fVar7 + fVar10;
          auVar16 = sqrtps(auVar9,auVar9);
          auVar16 = divps(_DAT_149e1ef10,auVar16);
          pdVar1[4] = (double)(auVar16._0_4_ * fVar6);
          pdVar1[5] = (double)(auVar16._4_4_ * fVar13);
          pdVar1[6] = (double)(auVar16._8_4_ * fVar14);
          dVar2 = 0.0;
        }
        *(double *)param_1[1] = dVar2;
      }
    }
  }
  else {
    bVar3 = false;
  }
LAB_146da2dc3:
  if ((local_38 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146da30d8 FUN_146da30d8 body=132 status=ok
// SIG undefined FUN_146da30d8(void)

void FUN_146da30d8(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146da315e FUN_146da315e body=978 status=ok
// SIG undefined FUN_146da315e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146da315e(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  double dVar1;
  double *pdVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  longlong lVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_158 [32];
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_90;
  double dStack_88;
  double local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *param_1 = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  param_1[0x12] = param_2;
  puVar8 = param_1 + 0x14;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar8 = *param_4;
    param_4 = param_4 + 1;
    puVar8 = puVar8 + 1;
  }
  param_1[0x20] = param_3;
  param_1[0x21] = param_5;
  param_1[0x26] = param_6;
  *(undefined1 *)(param_1 + 0x27) = param_7;
  local_98 = *(double *)(param_3 + 0x68);
  local_a8 = *(double *)(param_3 + 0x58);
  dStack_a0 = *(double *)(param_3 + 0x60);
  local_80 = *(double *)(param_3 + 0x80);
  local_90 = *(double *)(param_3 + 0x70);
  dStack_88 = *(double *)(param_3 + 0x78);
  dVar14 = (local_80 - local_98) * 0.5 + local_98;
  dVar5 = (dStack_88 - dStack_a0) * 0.5 + dStack_a0;
  dVar12 = (local_90 - local_a8) * 0.5 + local_a8;
  local_108 = (double)param_1[0x14];
  dStack_100 = (double)param_1[0x15];
  local_f8 = (double)param_1[0x16];
  uStack_f0 = param_1[0x17];
  dVar1 = (double)param_1[0x17];
  dVar16 = dVar12 * local_f8 - local_108 * dVar14;
  dVar15 = dVar5 * local_108 - dStack_100 * dVar12;
  dVar6 = dVar14 * dStack_100 - local_f8 * dVar5;
  dVar6 = dVar6 + dVar6;
  dVar16 = dVar16 + dVar16;
  dVar15 = dVar15 + dVar15;
  param_1[0x28] =
       (dVar15 * dStack_100 - dVar16 * local_f8) + dVar1 * dVar6 + dVar12 + (double)param_1[0x18];
  param_1[0x29] =
       (local_f8 * dVar6 - local_108 * dVar15) + (double)param_1[0x17] * dVar16 + dVar5 +
       (double)param_1[0x19];
  param_1[0x2a] =
       dVar15 * dVar1 + dVar14 + (dVar16 * local_108 - dVar6 * dStack_100) + (double)param_1[0x1a];
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0x3ff0000000000000;
  local_b8 = 0x3ff0000000000000;
  uStack_b0 = 0;
  FUN_1400fd046(&local_a8,&local_138);
  dVar1 = (double)param_1[0x26];
  param_1[0x2b] = (local_120 - local_138) * 0.5 + dVar1;
  param_1[0x2c] = (local_118 - local_130) * 0.5 + dVar1;
  param_1[0x2d] = (local_110 - local_128) * 0.5 + dVar1;
  pdVar2 = (double *)param_1[0x21];
  lVar7 = 0;
  do {
    dVar1 = pdVar2[lVar7];
    *(bool *)((longlong)param_1 + lVar7 + 0x128) = ABS(dVar1) <= 1e-08;
    dVar14 = 0.0;
    if (ABS(dVar1) > 1e-08) {
      dVar14 = 1.0 / pdVar2[lVar7];
    }
    param_1[lVar7 + 0x22] = dVar14;
    lVar7 = lVar7 + 1;
  } while (lVar7 != 3);
  auVar4._4_4_ = (float)(double)param_1[0x29];
  auVar4._0_4_ = (float)(double)param_1[0x28];
  auVar4._8_4_ = (float)(double)param_1[0x2a];
  auVar4._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 8) = auVar4;
  fVar11 = (float)pdVar2[2];
  fVar9 = (float)*pdVar2;
  fVar10 = (float)pdVar2[1];
  auVar13._4_4_ = fVar10;
  auVar13._0_4_ = fVar9;
  auVar13._8_4_ = fVar11;
  auVar13._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0xc) = auVar13;
  auVar3._4_4_ = fVar10;
  auVar3._0_4_ = fVar9;
  auVar3._8_4_ = fVar11;
  auVar3._12_4_ = 0;
  auVar13 = divps(_DAT_1499314a0,auVar3);
  *(uint *)(param_1 + 0xe) = -(uint)(ABS(fVar9) < 1e-08);
  *(uint *)((longlong)param_1 + 0x74) = -(uint)(ABS(fVar10) < 1e-08);
  *(uint *)(param_1 + 0xf) = -(uint)(ABS(fVar11) < 1e-08);
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0xffffffff;
  *(uint *)(param_1 + 10) = ~-(uint)(ABS(fVar9) < 1e-08) & auVar13._0_4_;
  *(uint *)((longlong)param_1 + 0x54) = ~-(uint)(ABS(fVar10) < 1e-08) & auVar13._4_4_;
  *(uint *)(param_1 + 0xb) = ~-(uint)(ABS(fVar11) < 1e-08) & auVar13._8_4_;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(float *)(param_1 + 0x10) = ABS((float)(double)param_1[0x2b]);
  *(float *)((longlong)param_1 + 0x84) = ABS((float)(double)param_1[0x2c]);
  *(float *)(param_1 + 0x11) = ABS((float)(double)param_1[0x2d]);
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  if ((local_70 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146da3532 FUN_146da3532 body=2375 status=ok
// SIG undefined FUN_146da3532(void)

void FUN_146da3532(double param_1,double *param_2,double *param_3,double param_4,double *param_5,
                  undefined8 param_6)

{
  byte *pbVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  byte bVar8;
  double dVar9;
  char cVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  size_t _Size;
  undefined8 uVar25;
  longlong lVar26;
  uint uVar27;
  bool bVar28;
  double dVar29;
  undefined1 auVar30 [16];
  double *pdVar31;
  double dVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStack_1e8 [32];
  double local_1c8;
  uint local_1bc;
  ulonglong local_1b8;
  double *local_1b0;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  ulonglong local_198;
  int local_18c;
  int local_188;
  int local_184;
  uint local_180;
  uint local_17c;
  longlong local_178;
  double local_170;
  double *local_168;
  undefined8 **local_160;
  undefined8 *local_158;
  undefined8 uStack_150;
  double local_140;
  double *local_138;
  int local_130;
  uint local_128;
  uint local_124;
  double local_120;
  double local_118 [4];
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  dVar29 = *param_5;
  dVar2 = param_5[1];
  local_118[3] = *(double *)((longlong)param_1 + 0x138) - dVar29;
  local_f0 = *(double *)((longlong)param_1 + 0x150) + dVar29;
  local_e8 = *(double *)((longlong)param_1 + 0x158) + dVar2;
  local_f8 = *(double *)((longlong)param_1 + 0x140) - dVar2;
  dVar3 = *param_3;
  dVar4 = param_3[1];
  dVar5 = *(double *)((longlong)param_1 + 0x50);
  dVar6 = *(double *)((longlong)param_1 + 0x58);
  dVar32 = (double)(-(ulonglong)(0.0 < dVar4) & 0x3ff0000000000000 |
                   (ulonglong)
                   (~(uint)(-(ulonglong)(0.0 < dVar4) >> 0x20) &
                   (uint)(-(ulonglong)(dVar4 < 0.0) >> 0x20) & 0xbff00000) << 0x20) * dVar2;
  local_170 = (double)(-(ulonglong)(0.0 < dVar3) & 0x3ff0000000000000 |
                      (ulonglong)
                      (~(uint)(-(ulonglong)(0.0 < dVar3) >> 0x20) &
                      (uint)(-(ulonglong)(dVar3 < 0.0) >> 0x20) & 0xbff00000) << 0x20) * dVar29;
  local_138 = (double *)(param_2[1] - dVar32);
  local_140 = *param_2 - local_170;
  local_168 = (double *)(dVar4 * param_4 + param_2[1] + dVar32);
  local_170 = dVar3 * param_4 + *param_2 + local_170;
  local_118[0] = dVar29;
  local_118[1] = dVar2;
  cVar10 = FUN_1448596be();
  if (cVar10 != '\0') {
    dVar3 = *(double *)((longlong)param_1 + 0xb0);
    dVar4 = *(double *)((longlong)param_1 + 0xb8);
    dVar32 = *(double *)((longlong)param_1 + 0xe0);
    dVar7 = *(double *)((longlong)param_1 + 0xd8);
    uVar15 = (uint)((local_140 / dVar5 - dVar3) / dVar7);
    uVar20 = (uint)(((double)local_138 / dVar6 - dVar4) / dVar32);
    iVar13 = *(int *)((longlong)param_1 + 0xd0);
    uVar16 = iVar13 - 1;
    uVar23 = 0;
    if (0 < (int)uVar15) {
      uVar23 = uVar15;
    }
    if (iVar13 <= (int)uVar15) {
      uVar23 = uVar16;
    }
    iVar11 = *(int *)((longlong)param_1 + 0xd4);
    uVar15 = 0;
    if (0 < (int)uVar20) {
      uVar15 = uVar20;
    }
    uVar27 = iVar11 - 1;
    if (iVar11 <= (int)uVar20) {
      uVar15 = uVar27;
    }
    uVar21 = (uint)((local_170 / dVar5 - dVar3) / dVar7);
    uVar22 = (uint)(((double)local_168 / dVar6 - dVar4) / dVar32);
    uVar20 = 0;
    if (0 < (int)uVar21) {
      uVar20 = uVar21;
    }
    if (iVar13 <= (int)uVar21) {
      uVar20 = uVar16;
    }
    uVar21 = 0;
    if (0 < (int)uVar22) {
      uVar21 = uVar22;
    }
    if (iVar11 <= (int)uVar22) {
      uVar21 = uVar27;
    }
    uVar22 = -(uVar20 - uVar23);
    if ((int)uVar22 < 0) {
      uVar22 = uVar20 - uVar23;
    }
    uVar18 = -(uVar21 - uVar15);
    if ((int)uVar18 < 0) {
      uVar18 = uVar21 - uVar15;
    }
    local_120 = param_4;
    if (uVar18 == 0 && uVar22 == 0) {
      uVar33 = SUB84(local_140,0);
      uVar34 = (int)((ulonglong)local_140 >> 0x20);
      if (local_170 <= local_140) {
        uVar33 = SUB84(local_170,0);
        uVar34 = (int)((ulonglong)local_170 >> 0x20);
      }
      uVar35 = SUB84(local_138,0);
      uVar36 = (undefined4)((ulonglong)local_138 >> 0x20);
      if ((double)local_168 <= (double)local_138) {
        uVar35 = SUB84(local_168,0);
        uVar36 = (undefined4)((ulonglong)local_168 >> 0x20);
      }
      uVar15 = (uint)((((double)CONCAT44(uVar34,uVar33) - dVar29) / dVar5 - dVar3) / dVar7);
      uVar20 = (uint)((((double)CONCAT44(uVar36,uVar35) - dVar2) / dVar6 - dVar4) / dVar32);
      uVar23 = 0;
      if (0 < (int)uVar15) {
        uVar23 = uVar15;
      }
      dVar9 = local_140;
      if (local_140 <= local_170) {
        dVar9 = local_170;
      }
      if (iVar13 <= (int)uVar15) {
        uVar23 = uVar16;
      }
      uVar15 = 0;
      if (0 < (int)uVar20) {
        uVar15 = uVar20;
      }
      if (iVar11 <= (int)uVar20) {
        uVar15 = uVar27;
      }
      pdVar31 = local_138;
      if ((double)local_138 <= (double)local_168) {
        pdVar31 = local_168;
      }
      uVar21 = (uint)(((dVar9 + dVar29) / dVar5 - dVar3) / dVar7);
      uVar22 = (uint)((((double)pdVar31 + dVar2) / dVar6 - dVar4) / dVar32);
      uVar20 = 0;
      if (0 < (int)uVar21) {
        uVar20 = uVar21;
      }
      if (iVar13 <= (int)uVar21) {
        uVar20 = uVar16;
      }
      uVar16 = 0;
      if (0 < (int)uVar22) {
        uVar16 = uVar22;
      }
      if (iVar11 <= (int)uVar22) {
        uVar16 = uVar27;
      }
      if ((int)uVar15 <= (int)uVar16) {
        do {
          uVar27 = uVar23;
          if ((int)uVar23 <= (int)uVar20) {
            do {
              cVar10 = FUN_146da3e7a(param_6,(*(ushort *)((longlong)param_1 + 0x92) - 1) * uVar15 +
                                             uVar27,&local_120);
              if (cVar10 == '\0') goto LAB_146da3904;
              uVar27 = uVar27 + 1;
            } while (uVar20 + 1 != uVar27);
          }
          bVar28 = uVar15 != uVar16;
          uVar15 = uVar15 + 1;
        } while (bVar28);
      }
    }
    else {
      local_1bc = CONCAT31(local_1bc._1_3_,(int)uVar23 < (int)uVar20);
      local_1a4 = CONCAT31(local_1a4._1_3_,(int)uVar15 < (int)uVar21);
      uVar16 = uVar22 - uVar18;
      local_198 = (ulonglong)uVar16;
      local_19c = (uint)(uVar22 < uVar18 || uVar16 == 0);
      local_1a0 = (uint)(uVar22 >= uVar18 && uVar16 != 0);
      local_1c8 = *(double *)((longlong)param_1 + 0xd0);
      iVar11 = (int)((ulonglong)local_1c8 >> 0x20) * SUB84(local_1c8,0);
      iVar13 = iVar11 + 7;
      if (-1 < iVar11) {
        iVar13 = iVar11;
      }
      local_130 = (iVar13 >> 3) + 1;
      _Size = (size_t)local_130;
      local_1b8 = (ulonglong)uVar23;
      local_140 = local_1c8;
      local_128 = local_19c;
      local_124 = local_1a0;
      local_1b0 = (double *)FUN_14001cc68(_Size + (_Size == 0));
      lVar19 = 0;
      local_138 = local_1b0;
      memset(local_1b0,0,_Size);
      local_158 = (undefined8 *)0x0;
      uVar25 = CONCAT44(uVar15,(undefined4)local_1b8);
      uStack_150 = 1;
      FUN_146da45c8(&local_158,0);
      *local_158 = uVar25;
      uVar16 = (uint)local_1b8;
      iVar11 = uVar15 * local_1c8._0_4_ + uVar16;
      iVar13 = uVar15 * local_1c8._0_4_ + uVar16 + 7;
      if (-1 < iVar11) {
        iVar13 = iVar11;
      }
      local_158[1] = 0xbff0000000000000;
      pbVar1 = (byte *)((longlong)local_1b0 + (longlong)(iVar13 >> 3));
      *pbVar1 = *pbVar1 | (byte)(1 << ((byte)iVar11 & 7));
      if (0 < (int)uStack_150) {
        local_184 = -uVar18;
        local_188 = (local_1bc & 0xff) * 2 + -1;
        local_18c = (local_1a4 & 0xff) * 2 + -1;
        local_19c = -local_19c;
        local_1a0 = -local_1a0;
        lVar26 = 8;
        local_1c8 = (double)(local_1b8 & 0xffffffff);
        local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar15);
        uVar24 = local_1b8;
        iVar13 = (int)uStack_150;
        local_1bc = uVar15;
        local_1a8 = uVar16;
        do {
          dVar29 = *(double *)((longlong)local_158 + lVar26);
          if (dVar29 <= local_120) {
            local_178 = *(longlong *)((longlong)local_158 + lVar26 + -8);
            local_168 = &local_140;
            local_160 = &local_158;
            iVar11 = (int)local_178;
            iVar13 = 0;
            if (0 < iVar11) {
              iVar13 = iVar11;
            }
            if (*(int *)((longlong)param_1 + 0xd0) <= iVar11) {
              iVar13 = *(int *)((longlong)param_1 + 0xd0) + -1;
            }
            iVar14 = (int)((ulonglong)local_178 >> 0x20);
            iVar17 = 0;
            if (iVar14 != 0 && -1 < local_178) {
              iVar17 = iVar14;
            }
            if (*(int *)((longlong)param_1 + 0xd4) <= iVar14) {
              iVar17 = *(int *)((longlong)param_1 + 0xd4) + -1;
            }
            local_170 = param_1;
            if (((iVar13 == iVar11) && (iVar17 == iVar14)) &&
               (local_1b8 = uVar24,
               cVar10 = FUN_146da3e7a(param_6,(*(ushort *)((longlong)param_1 + 0x92) - 1) * iVar14 +
                                              iVar11,&local_120), uVar24 = local_1b8, cVar10 == '\0'
               )) break;
            if (dVar29 < 0.0) {
              uVar12 = (ulonglong)((local_1a0 & 1) << 3);
              auVar30._0_8_ =
                   *(double *)((longlong)local_118 + uVar12) /
                   ABS(*(double *)((longlong)param_1 + 0x50 + uVar12));
              auVar30._8_8_ = 0;
              if (0.0 <= auVar30._0_8_) {
                auVar30 = roundpd(auVar30,auVar30,2);
                dVar29 = auVar30._0_8_;
              }
              else {
                auVar30 = roundpd(auVar30,auVar30,1);
                dVar29 = auVar30._0_8_;
              }
              local_1a4 = (uint)dVar29;
              local_1b8 = uVar24;
              FUN_146da4192(&local_170,&local_178,&local_128);
              local_180 = local_19c;
              local_17c = local_1a0;
              FUN_146da4192(&local_170,&local_178,&local_180,local_1a4);
              uVar24 = local_1b8;
              if ((local_1c8._0_4_ == uVar20) && ((uint)local_1b0 == uVar21)) {
                local_1c8 = (double)(ulonglong)uVar20;
                local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar21);
              }
              else {
                iVar13 = (int)local_198 * 2;
                if (local_184 <= iVar13) {
                  local_198 = (ulonglong)((int)local_198 - uVar18);
                  local_1a8 = local_1c8._0_4_ + local_188;
                  local_1c8 = (double)(ulonglong)local_1a8;
                  uVar24 = (ulonglong)local_1a8;
                }
                uVar16 = local_1bc;
                if (iVar13 <= (int)uVar22) {
                  local_198 = (ulonglong)((int)local_198 + uVar22);
                  uVar15 = (uint)local_1b0 + local_18c;
                  local_1c8 = (double)(ulonglong)local_1a8;
                  uVar16 = uVar15;
                }
                uVar27 = local_140._0_4_ * uVar16 + SUB84(local_1c8,0);
                uVar23 = local_140._0_4_ * uVar16 + SUB84(local_1c8,0) + 7;
                if (-1 < (int)uVar27) {
                  uVar23 = uVar27;
                }
                bVar8 = *(byte *)((longlong)local_138 + (longlong)((int)uVar23 >> 3));
                if ((bVar8 >> (uVar27 & 7) & 1) == 0) {
                  *(byte *)((longlong)local_138 + (longlong)((int)uVar23 >> 3)) =
                       (byte)(1 << ((byte)uVar27 & 7)) | bVar8;
                  local_1c8 = (double)(longlong)(int)uStack_150;
                  uVar16 = (int)uStack_150 + 1;
                  uStack_150 = CONCAT44(uStack_150._4_4_,uVar16);
                  if (uStack_150._4_4_ < uVar16) {
                    local_1b8 = uVar24;
                    FUN_146da45c8(&local_158,local_1c8);
                    uVar24 = local_1b8;
                  }
                  local_1a8 = (uint)uVar24;
                  local_158[(longlong)local_1c8 * 2] =
                       uVar24 & 0xffffffff | (ulonglong)uVar15 << 0x20;
                  local_158[(longlong)local_1c8 * 2 + 1] = 0xbff0000000000000;
                  local_1c8 = (double)(uVar24 & 0xffffffff);
                  local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar15);
                  local_1bc = uVar15;
                }
                else {
                  local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar16);
                  local_1bc = uVar16;
                }
              }
            }
            iVar13 = (int)uStack_150;
          }
          lVar19 = lVar19 + 1;
          lVar26 = lVar26 + 0x10;
        } while (lVar19 < iVar13);
      }
      if (local_158 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (local_138 != (double *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_146da3904:
  if ((local_e0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146da3e7a FUN_146da3e7a body=791 status=ok
// SIG undefined FUN_146da3e7a(void)

bool FUN_146da3e7a(double *param_1,int param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  float fVar16;
  float fVar21;
  float fVar22;
  undefined1 auVar17 [16];
  float fVar23;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar35;
  float fVar36;
  undefined1 auVar33 [16];
  float fVar37;
  undefined1 auVar34 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar45 [16];
  float fVar46;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  float fVar47;
  undefined1 auStack_118 [32];
  float *local_f8;
  double *local_e8;
  double *local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar4 = (longlong *)param_1[0x12];
  uVar3 = *(ushort *)((longlong)plVar4 + 0x72);
  iVar13 = param_2 / (int)(uVar3 - 1) + param_2;
  dVar1 = (double)plVar4[0xc];
  lVar5 = *plVar4;
  lVar15 = (longlong)iVar13;
  dVar2 = (double)plVar4[0x10];
  iVar14 = iVar13 / (int)(uint)uVar3;
  auVar26._8_8_ = in_XMM2._8_8_;
  auVar26._0_8_ = (double)*(ushort *)(lVar5 + lVar15 * 2) * dVar2 + dVar1;
  auVar27._4_12_ = auVar26._4_12_;
  auVar27._0_4_ = (float)auVar26._0_8_;
  auVar38._4_12_ = in_XMM4._4_12_;
  auVar38._0_4_ = (float)((double)*(ushort *)(lVar5 + 2 + lVar15 * 2) * dVar2 + dVar1);
  auVar41._4_12_ = in_XMM5._4_12_;
  auVar41._0_4_ =
       (float)((double)*(ushort *)(lVar5 + ((ulonglong)uVar3 + lVar15) * 2) * dVar2 + dVar1);
  auVar24._4_12_ = unaff_XMM8._4_12_;
  auVar24._0_4_ = (float)iVar14;
  fVar31 = (float)(iVar13 % (int)(uint)uVar3);
  fVar46 = (float)((double)*(ushort *)(lVar5 + 2 + ((ulonglong)uVar3 + lVar15) * 2) * dVar2 + dVar1)
  ;
  auVar17 = insertps(ZEXT416((uint)fVar31),auVar24,0x1c);
  auVar42 = insertps(auVar17,auVar27,0x20);
  auVar43 = insertps(ZEXT416((uint)(fVar31 + 1.0)),auVar24,0x1c);
  auVar44 = insertps(auVar43,auVar38,0x20);
  auVar45._0_4_ = auVar24._0_4_ + 1.0;
  auVar45._4_12_ = auVar24._4_12_;
  auVar43 = insertps(ZEXT416((uint)fVar31),auVar45,0x1c);
  auVar33 = insertps(auVar43,auVar41,0x20);
  auVar24 = insertps(ZEXT416((uint)(fVar31 + 1.0)),auVar45,0x1c);
  auVar43._4_4_ = unaff_XMM9_Db;
  auVar43._0_4_ = fVar46;
  auVar43._8_4_ = unaff_XMM9_Dc;
  auVar43._12_4_ = unaff_XMM9_Dd;
  auVar43 = insertps(auVar24,auVar43,0x20);
  fVar31 = auVar41._0_4_;
  if (fVar46 <= auVar41._0_4_) {
    fVar31 = fVar46;
  }
  fVar47 = auVar38._0_4_;
  if (fVar31 <= auVar38._0_4_) {
    fVar47 = fVar31;
  }
  fVar31 = auVar27._0_4_;
  if (fVar47 <= auVar27._0_4_) {
    fVar31 = fVar47;
  }
  if (auVar41._0_4_ <= fVar46) {
    auVar41._0_4_ = fVar46;
  }
  if (auVar38._0_4_ <= auVar41._0_4_) {
    auVar38._0_4_ = auVar41._0_4_;
  }
  if (auVar27._0_4_ <= auVar38._0_4_) {
    auVar27._0_4_ = auVar38._0_4_;
  }
  auVar24 = insertps(auVar24,auVar27,0x20);
  auVar6._4_4_ = (int)((ulonglong)auVar26._0_8_ >> 0x20);
  auVar6._0_4_ = fVar31;
  auVar6._8_4_ = in_XMM2._8_4_;
  auVar6._12_4_ = in_XMM2._12_4_;
  auVar17 = insertps(auVar17,auVar6,0x20);
  fVar31 = *(float *)(plVar4 + 10);
  fVar46 = *(float *)((longlong)plVar4 + 0x54);
  fVar47 = *(float *)(plVar4 + 0xb);
  fVar7 = *(float *)((longlong)plVar4 + 0x5c);
  local_d8 = auVar42._0_4_ * fVar31;
  fStack_d4 = auVar42._4_4_ * fVar46;
  fStack_d0 = auVar42._8_4_ * fVar47;
  fStack_cc = auVar42._12_4_ * fVar7;
  local_c8 = auVar44._0_4_ * fVar31;
  fStack_c4 = auVar44._4_4_ * fVar46;
  fStack_c0 = auVar44._8_4_ * fVar47;
  fStack_bc = auVar44._12_4_ * fVar7;
  local_b8 = auVar33._0_4_ * fVar31;
  fStack_b4 = auVar33._4_4_ * fVar46;
  fStack_b0 = auVar33._8_4_ * fVar47;
  fStack_ac = auVar33._12_4_ * fVar7;
  local_a8 = auVar43._0_4_ * fVar31;
  fStack_a4 = auVar43._4_4_ * fVar46;
  fStack_a0 = auVar43._8_4_ * fVar47;
  fStack_9c = auVar43._12_4_ * fVar7;
  auVar33._0_8_ = CONCAT44(auVar17._4_4_ * fVar46,auVar17._0_4_ * fVar31);
  auVar33._8_4_ = auVar17._8_4_ * fVar47;
  auVar33._12_4_ = auVar17._12_4_ * fVar7;
  auVar17._0_4_ = auVar24._0_4_ * fVar31;
  auVar17._4_4_ = auVar24._4_4_ * fVar46;
  auVar17._8_4_ = auVar24._8_4_ * fVar47;
  auVar17._12_4_ = auVar24._12_4_ * fVar7;
  auVar42._8_4_ = auVar33._8_4_;
  auVar42._0_8_ = auVar33._0_8_;
  auVar42._12_4_ = auVar33._12_4_;
  auVar24 = minps(auVar42,auVar17);
  auVar43 = maxps(auVar33,auVar17);
  fVar31 = *(float *)(param_1 + 8);
  fVar46 = *(float *)((longlong)param_1 + 0x44);
  fVar47 = *(float *)(param_1 + 9);
  fVar7 = *(float *)((longlong)param_1 + 0x4c);
  uVar8 = *(uint *)(param_1 + 0xe);
  uVar9 = *(uint *)((longlong)param_1 + 0x74);
  uVar10 = *(uint *)(param_1 + 0xf);
  uVar11 = *(uint *)((longlong)param_1 + 0x7c);
  fVar32 = auVar24._0_4_ - *(float *)(param_1 + 0x10);
  fVar35 = auVar24._4_4_ - *(float *)((longlong)param_1 + 0x84);
  fVar36 = auVar24._8_4_ - *(float *)(param_1 + 0x11);
  fVar37 = auVar24._12_4_ - *(float *)((longlong)param_1 + 0x8c);
  fVar16 = auVar43._0_4_ + *(float *)(param_1 + 0x10);
  fVar21 = auVar43._4_4_ + *(float *)((longlong)param_1 + 0x84);
  fVar22 = auVar43._8_4_ + *(float *)(param_1 + 0x11);
  fVar23 = auVar43._12_4_ + *(float *)((longlong)param_1 + 0x8c);
  auVar44._0_4_ = -(uint)(fVar16 < fVar31 || fVar31 < fVar32) & uVar8;
  auVar44._4_4_ = -(uint)(fVar21 < fVar46 || fVar46 < fVar35) & uVar9;
  auVar44._8_4_ = -(uint)(fVar22 < fVar47 || fVar47 < fVar36) & uVar10;
  auVar44._12_4_ = -(uint)(fVar23 < fVar7 || fVar7 < fVar37) & uVar11;
  iVar13 = movmskps(iVar14,auVar44);
  local_e8 = param_1;
  local_e0 = param_3;
  if (iVar13 == 0) {
    auVar25._0_4_ = (float)*param_3;
    auVar25._4_4_ = auVar25._0_4_;
    auVar25._8_4_ = auVar25._0_4_;
    auVar25._12_4_ = auVar25._0_4_;
    auVar39._0_8_ =
         CONCAT44(~uVar9 & (uint)((fVar35 - fVar46) * *(float *)((longlong)param_1 + 0x54)),
                  ~uVar8 & (uint)((fVar32 - fVar31) * *(float *)(param_1 + 10)));
    auVar39._8_4_ = ~uVar10 & (uint)((fVar36 - fVar47) * *(float *)(param_1 + 0xb));
    auVar39._12_4_ = ~uVar11 & (uint)((fVar37 - fVar7) * *(float *)((longlong)param_1 + 0x5c));
    auVar34._0_4_ = ~uVar8 & (uint)((fVar16 - fVar31) * *(float *)(param_1 + 10));
    auVar34._4_4_ = ~uVar9 & (uint)((fVar21 - fVar46) * *(float *)((longlong)param_1 + 0x54));
    auVar34._8_4_ = ~uVar10 & (uint)((fVar22 - fVar47) * *(float *)(param_1 + 0xb));
    auVar34._12_4_ = ~uVar11 & (uint)((fVar23 - fVar7) * *(float *)((longlong)param_1 + 0x5c));
    auVar28._0_4_ = uVar8 & (uint)auVar25._0_4_;
    auVar28._4_4_ = uVar9 & (uint)auVar25._0_4_;
    auVar28._8_4_ = uVar10 & (uint)auVar25._0_4_;
    auVar28._12_4_ = uVar11 & (uint)auVar25._0_4_;
    auVar18._8_4_ = auVar39._8_4_;
    auVar18._0_8_ = auVar39._0_8_;
    auVar18._12_4_ = auVar39._12_4_;
    auVar43 = minps(auVar18,auVar28 | auVar34);
    auVar24 = maxps(auVar39,auVar28 | auVar34);
    auVar19._12_4_ = auVar43._12_4_;
    auVar29._0_8_ = auVar43._4_8_;
    auVar29._8_4_ = auVar43._0_4_;
    auVar29._12_4_ = auVar19._12_4_;
    auVar17 = maxps(auVar43,auVar29);
    auVar19._4_4_ = auVar43._0_4_;
    auVar19._0_4_ = auVar43._8_4_;
    auVar19._8_4_ = auVar43._4_4_;
    auVar43 = maxps(auVar17,auVar19);
    auVar17 = maxps(auVar43,ZEXT816(0));
    auVar40._12_4_ = auVar24._12_4_;
    auVar20._0_8_ = auVar24._4_8_;
    auVar20._8_4_ = auVar24._0_4_;
    auVar20._12_4_ = auVar40._12_4_;
    auVar43 = minps(auVar24,auVar20);
    auVar40._4_4_ = auVar24._0_4_;
    auVar40._0_4_ = auVar24._8_4_;
    auVar40._8_4_ = auVar24._4_4_;
    auVar43 = minps(auVar43,auVar40);
    auVar43 = minps(auVar43,auVar25);
    auVar30._4_4_ = -(uint)(auVar43._4_4_ < auVar17._4_4_);
    auVar30._0_4_ = -(uint)(auVar43._0_4_ < auVar17._0_4_);
    auVar30._8_4_ = -(uint)(auVar43._8_4_ < auVar17._8_4_);
    auVar30._12_4_ = -(uint)(auVar43._12_4_ < auVar17._12_4_);
    iVar13 = movmskps(0,auVar30);
    if (iVar13 == 0) {
      local_f8 = &local_a8;
      cVar12 = FUN_146da4294(&local_e8,param_2 * 2,&local_d8,&local_c8);
      if (cVar12 != '\0') {
        local_f8 = &local_b8;
        FUN_146da4294(&local_e8,param_2 * 2 | 1,&local_d8,&local_a8);
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return 0.0 < *param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146da4192 FUN_146da4192 body=257 status=ok
// SIG undefined FUN_146da4192(void)

void FUN_146da4192(longlong *param_1,ulonglong *param_2,int *param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  if (0 < param_4) {
    lVar2 = *param_1;
    uVar11 = *param_2;
    uVar8 = uVar11 >> 0x20;
    while( true ) {
      uVar10 = (int)uVar11 + *param_3;
      uVar11 = (ulonglong)uVar10;
      if ((int)uVar10 < 0) break;
      uVar7 = (int)uVar8 + param_3[1];
      uVar8 = (ulonglong)uVar7;
      if ((int)uVar7 < 0) {
        return;
      }
      if (*(int *)(lVar2 + 0xd0) <= (int)uVar10) {
        return;
      }
      if (*(int *)(lVar2 + 0xd4) <= (int)uVar7) {
        return;
      }
      iVar5 = *(int *)param_1[1] * uVar7;
      uVar9 = iVar5 + uVar10;
      uVar6 = iVar5 + uVar10 + 7;
      if (-1 < (int)uVar9) {
        uVar6 = uVar9;
      }
      lVar3 = *(longlong *)((int *)param_1[1] + 2);
      bVar1 = *(byte *)(lVar3 + ((int)uVar6 >> 3));
      if ((bVar1 >> (uVar9 & 7) & 1) == 0) {
        *(byte *)(lVar3 + ((int)uVar6 >> 3)) = (byte)(1 << ((byte)uVar9 & 7)) | bVar1;
        plVar4 = (longlong *)param_1[2];
        iVar5 = (int)plVar4[1];
        *(uint *)(plVar4 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)plVar4 + 0xc) < iVar5 + 1U) {
          FUN_146da45c8(plVar4,iVar5);
        }
        lVar3 = *plVar4;
        *(ulonglong *)(lVar3 + (longlong)iVar5 * 0x10) = CONCAT44(uVar7,uVar10);
        *(undefined8 *)(lVar3 + 8 + (longlong)iVar5 * 0x10) = 0;
      }
      param_4 = param_4 + -1;
      if (param_4 == 0) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 146da4294 FUN_146da4294 body=819 status=ok
// SIG undefined FUN_146da4294(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_146da4294(undefined8 *param_1,int param_2,float *param_3,float *param_4,float *param_5)

{
  double *pdVar1;
  double dVar2;
  bool bVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_148 [32];
  double *local_128;
  float local_120;
  float *local_118;
  float *local_110;
  float *local_108;
  undefined1 local_100;
  undefined *local_f8;
  undefined8 *local_e8;
  undefined8 local_e0;
  code *local_d8;
  double local_d0;
  float local_c8;
  undefined4 local_c4;
  code *local_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  pdVar1 = (double *)*param_1;
  if ((*pdVar1 != 0.0) || (NAN(*pdVar1))) {
    local_88 = *param_3;
    fStack_84 = param_3[1];
    fStack_80 = param_3[2];
    fStack_7c = param_3[3];
    local_48 = *param_5 - local_88;
    fStack_44 = param_5[1] - fStack_84;
    fStack_40 = param_5[2] - fStack_80;
    fStack_3c = param_5[3] - fStack_7c;
    local_58 = *param_4 - local_88;
    fStack_54 = param_4[1] - fStack_84;
    fStack_50 = param_4[2] - fStack_80;
    fStack_4c = param_4[3] - fStack_7c;
    local_e8 = &local_68;
    local_68 = 0;
    uStack_60 = 0;
    fVar5 = (float)pdVar1[0x16];
    fVar7 = (float)pdVar1[0x17];
    fVar10 = (float)pdVar1[0x14];
    fVar11 = (float)pdVar1[0x15];
    fVar6 = fVar10 * fVar10 + fVar11 * fVar11;
    fVar8 = fVar5 * fVar5 + fVar7 * fVar7;
    auVar15._0_4_ = fVar8 + fVar6;
    auVar15._4_4_ = fVar8 + fVar6;
    auVar15._8_4_ = fVar6 + fVar8;
    auVar15._12_4_ = fVar6 + fVar8;
    auVar16 = sqrtps(auVar15,auVar15);
    auVar16 = divps(_DAT_1499314a0,auVar16);
    auVar17._0_4_ = auVar16._0_4_ * fVar10;
    auVar17._4_4_ = auVar16._4_4_ * fVar11;
    auVar17._8_4_ = auVar16._8_4_ * fVar5;
    auVar17._12_4_ = auVar16._12_4_ * fVar7;
    auVar16._4_4_ = -(uint)(1e-08 <= auVar15._4_4_);
    auVar16._0_4_ = -(uint)(1e-08 <= auVar15._0_4_);
    auVar16._8_4_ = -(uint)(1e-08 <= auVar15._8_4_);
    auVar16._12_4_ = -(uint)(1e-08 <= auVar15._12_4_);
    local_78 = blendvps(_DAT_149932320,auVar17,auVar16);
    local_88 = (float)pdVar1[0x18] - local_88;
    fStack_84 = (float)pdVar1[0x19] - fStack_84;
    fStack_80 = (float)pdVar1[0x1a] - fStack_80;
    fStack_7c = 0.0 - fStack_7c;
    local_100 = *(undefined1 *)(pdVar1 + 0x27);
    local_120 = (float)*(double *)param_1[1];
    local_128 = pdVar1 + 0xc;
    local_d0 = pdVar1[0x20];
    local_c8 = (float)*(double *)((longlong)local_d0 + 0x10);
    local_c4 = 0;
    local_c0 = FUN_146cc5264;
    local_e0 = 0;
    local_d8 = FUN_14014b546;
    local_f8 = &DAT_149f52c20;
    local_108 = &local_b8;
    local_110 = &local_a8;
    local_118 = &local_8c;
    cVar4 = FUN_1448541f8();
    bVar3 = true;
    if (cVar4 != '\0') {
      dVar2 = (double)local_8c;
      if (dVar2 < *pdVar1) {
        if (-2 < param_2) {
          if ((param_2 / 2 < *(int *)((longlong)pdVar1[0x12] + 0x28)) &&
             (*(char *)(*(longlong *)((longlong)pdVar1[0x12] + 0x20) + (longlong)(param_2 / 2)) ==
              -1)) goto LAB_146da42cb;
        }
        pdVar1[4] = (double)local_b8;
        pdVar1[5] = (double)fStack_b4;
        pdVar1[6] = (double)fStack_b0;
        fVar5 = param_3[1];
        fVar6 = param_3[2];
        pdVar1[1] = (double)(*param_3 + local_a8);
        pdVar1[2] = (double)(fVar5 + fStack_a4);
        pdVar1[3] = (double)(fVar6 + fStack_a0);
        *pdVar1 = dVar2;
        *(int *)(pdVar1 + 7) = param_2;
        bVar3 = 0.0 < local_8c;
        if (!bVar3) {
          fVar5 = *param_4 - *param_3;
          fVar6 = param_4[1] - param_3[1];
          fVar7 = param_4[2] - param_3[2];
          fVar8 = param_4[3] - param_3[3];
          fVar10 = *param_5 - *param_3;
          fVar12 = param_5[1] - param_3[1];
          fVar13 = param_5[2] - param_3[2];
          fVar14 = param_5[3] - param_3[3];
          fVar11 = fVar12 * fVar5 - fVar6 * fVar10;
          fVar6 = fVar13 * fVar6 - fVar7 * fVar12;
          fVar10 = fVar10 * fVar7 - fVar5 * fVar13;
          fVar12 = fVar14 * fVar8 - fVar8 * fVar14;
          fVar12 = fVar12 * fVar12;
          fVar5 = fVar10 * fVar10 + fVar6 * fVar6;
          fVar7 = fVar6 * fVar6 + fVar10 * fVar10;
          fVar8 = fVar12 + fVar11 * fVar11;
          fVar12 = fVar11 * fVar11 + fVar12;
          auVar9._0_4_ = fVar8 + fVar5;
          auVar9._4_4_ = fVar12 + fVar7;
          auVar9._8_4_ = fVar5 + fVar8;
          auVar9._12_4_ = fVar7 + fVar12;
          auVar16 = sqrtps(auVar9,auVar9);
          auVar16 = divps(_DAT_149e1ef10,auVar16);
          pdVar1[4] = (double)(auVar16._0_4_ * fVar6);
          pdVar1[5] = (double)(auVar16._4_4_ * fVar10);
          pdVar1[6] = (double)(auVar16._8_4_ * fVar11);
          dVar2 = 0.0;
        }
        *(double *)param_1[1] = dVar2;
      }
    }
  }
  else {
    bVar3 = false;
  }
LAB_146da42cb:
  if ((local_38 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146da45c8 FUN_146da45c8 body=132 status=ok
// SIG undefined FUN_146da45c8(void)

void FUN_146da45c8(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146da464e FUN_146da464e body=978 status=ok
// SIG undefined FUN_146da464e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146da464e(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  double dVar1;
  double *pdVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  longlong lVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_158 [32];
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_90;
  double dStack_88;
  double local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *param_1 = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  param_1[0x12] = param_2;
  puVar8 = param_1 + 0x14;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar8 = *param_4;
    param_4 = param_4 + 1;
    puVar8 = puVar8 + 1;
  }
  param_1[0x20] = param_3;
  param_1[0x21] = param_5;
  param_1[0x26] = param_6;
  *(undefined1 *)(param_1 + 0x27) = param_7;
  local_98 = *(double *)(param_3 + 0x68);
  local_a8 = *(double *)(param_3 + 0x58);
  dStack_a0 = *(double *)(param_3 + 0x60);
  local_80 = *(double *)(param_3 + 0x80);
  local_90 = *(double *)(param_3 + 0x70);
  dStack_88 = *(double *)(param_3 + 0x78);
  dVar14 = (local_80 - local_98) * 0.5 + local_98;
  dVar5 = (dStack_88 - dStack_a0) * 0.5 + dStack_a0;
  dVar12 = (local_90 - local_a8) * 0.5 + local_a8;
  local_108 = (double)param_1[0x14];
  dStack_100 = (double)param_1[0x15];
  local_f8 = (double)param_1[0x16];
  uStack_f0 = param_1[0x17];
  dVar1 = (double)param_1[0x17];
  dVar16 = dVar12 * local_f8 - local_108 * dVar14;
  dVar15 = dVar5 * local_108 - dStack_100 * dVar12;
  dVar6 = dVar14 * dStack_100 - local_f8 * dVar5;
  dVar6 = dVar6 + dVar6;
  dVar16 = dVar16 + dVar16;
  dVar15 = dVar15 + dVar15;
  param_1[0x28] =
       (dVar15 * dStack_100 - dVar16 * local_f8) + dVar1 * dVar6 + dVar12 + (double)param_1[0x18];
  param_1[0x29] =
       (local_f8 * dVar6 - local_108 * dVar15) + (double)param_1[0x17] * dVar16 + dVar5 +
       (double)param_1[0x19];
  param_1[0x2a] =
       dVar15 * dVar1 + dVar14 + (dVar16 * local_108 - dVar6 * dStack_100) + (double)param_1[0x1a];
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0x3ff0000000000000;
  local_b8 = 0x3ff0000000000000;
  uStack_b0 = 0;
  FUN_1400fd046(&local_a8,&local_138);
  dVar1 = (double)param_1[0x26];
  param_1[0x2b] = (local_120 - local_138) * 0.5 + dVar1;
  param_1[0x2c] = (local_118 - local_130) * 0.5 + dVar1;
  param_1[0x2d] = (local_110 - local_128) * 0.5 + dVar1;
  pdVar2 = (double *)param_1[0x21];
  lVar7 = 0;
  do {
    dVar1 = pdVar2[lVar7];
    *(bool *)((longlong)param_1 + lVar7 + 0x128) = ABS(dVar1) <= 1e-08;
    dVar14 = 0.0;
    if (ABS(dVar1) > 1e-08) {
      dVar14 = 1.0 / pdVar2[lVar7];
    }
    param_1[lVar7 + 0x22] = dVar14;
    lVar7 = lVar7 + 1;
  } while (lVar7 != 3);
  auVar4._4_4_ = (float)(double)param_1[0x29];
  auVar4._0_4_ = (float)(double)param_1[0x28];
  auVar4._8_4_ = (float)(double)param_1[0x2a];
  auVar4._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 8) = auVar4;
  fVar11 = (float)pdVar2[2];
  fVar9 = (float)*pdVar2;
  fVar10 = (float)pdVar2[1];
  auVar13._4_4_ = fVar10;
  auVar13._0_4_ = fVar9;
  auVar13._8_4_ = fVar11;
  auVar13._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0xc) = auVar13;
  auVar3._4_4_ = fVar10;
  auVar3._0_4_ = fVar9;
  auVar3._8_4_ = fVar11;
  auVar3._12_4_ = 0;
  auVar13 = divps(_DAT_1499314a0,auVar3);
  *(uint *)(param_1 + 0xe) = -(uint)(ABS(fVar9) < 1e-08);
  *(uint *)((longlong)param_1 + 0x74) = -(uint)(ABS(fVar10) < 1e-08);
  *(uint *)(param_1 + 0xf) = -(uint)(ABS(fVar11) < 1e-08);
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0xffffffff;
  *(uint *)(param_1 + 10) = ~-(uint)(ABS(fVar9) < 1e-08) & auVar13._0_4_;
  *(uint *)((longlong)param_1 + 0x54) = ~-(uint)(ABS(fVar10) < 1e-08) & auVar13._4_4_;
  *(uint *)(param_1 + 0xb) = ~-(uint)(ABS(fVar11) < 1e-08) & auVar13._8_4_;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(float *)(param_1 + 0x10) = ABS((float)(double)param_1[0x2b]);
  *(float *)((longlong)param_1 + 0x84) = ABS((float)(double)param_1[0x2c]);
  *(float *)(param_1 + 0x11) = ABS((float)(double)param_1[0x2d]);
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  if ((local_70 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146da4a22 FUN_146da4a22 body=2375 status=ok
// SIG undefined FUN_146da4a22(void)

void FUN_146da4a22(double param_1,double *param_2,double *param_3,double param_4,double *param_5,
                  undefined8 param_6)

{
  byte *pbVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  byte bVar8;
  double dVar9;
  char cVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  size_t _Size;
  undefined8 uVar25;
  longlong lVar26;
  uint uVar27;
  bool bVar28;
  double dVar29;
  undefined1 auVar30 [16];
  double *pdVar31;
  double dVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStack_1e8 [32];
  double local_1c8;
  uint local_1bc;
  ulonglong local_1b8;
  double *local_1b0;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  ulonglong local_198;
  int local_18c;
  int local_188;
  int local_184;
  uint local_180;
  uint local_17c;
  longlong local_178;
  double local_170;
  double *local_168;
  undefined8 **local_160;
  undefined8 *local_158;
  undefined8 uStack_150;
  double local_140;
  double *local_138;
  int local_130;
  uint local_128;
  uint local_124;
  double local_120;
  double local_118 [4];
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  dVar29 = *param_5;
  dVar2 = param_5[1];
  local_118[3] = *(double *)((longlong)param_1 + 0x138) - dVar29;
  local_f0 = *(double *)((longlong)param_1 + 0x150) + dVar29;
  local_e8 = *(double *)((longlong)param_1 + 0x158) + dVar2;
  local_f8 = *(double *)((longlong)param_1 + 0x140) - dVar2;
  dVar3 = *param_3;
  dVar4 = param_3[1];
  dVar5 = *(double *)((longlong)param_1 + 0x50);
  dVar6 = *(double *)((longlong)param_1 + 0x58);
  dVar32 = (double)(-(ulonglong)(0.0 < dVar4) & 0x3ff0000000000000 |
                   (ulonglong)
                   (~(uint)(-(ulonglong)(0.0 < dVar4) >> 0x20) &
                   (uint)(-(ulonglong)(dVar4 < 0.0) >> 0x20) & 0xbff00000) << 0x20) * dVar2;
  local_170 = (double)(-(ulonglong)(0.0 < dVar3) & 0x3ff0000000000000 |
                      (ulonglong)
                      (~(uint)(-(ulonglong)(0.0 < dVar3) >> 0x20) &
                      (uint)(-(ulonglong)(dVar3 < 0.0) >> 0x20) & 0xbff00000) << 0x20) * dVar29;
  local_138 = (double *)(param_2[1] - dVar32);
  local_140 = *param_2 - local_170;
  local_168 = (double *)(dVar4 * param_4 + param_2[1] + dVar32);
  local_170 = dVar3 * param_4 + *param_2 + local_170;
  local_118[0] = dVar29;
  local_118[1] = dVar2;
  cVar10 = FUN_1448596be();
  if (cVar10 != '\0') {
    dVar3 = *(double *)((longlong)param_1 + 0xb0);
    dVar4 = *(double *)((longlong)param_1 + 0xb8);
    dVar32 = *(double *)((longlong)param_1 + 0xe0);
    dVar7 = *(double *)((longlong)param_1 + 0xd8);
    uVar15 = (uint)((local_140 / dVar5 - dVar3) / dVar7);
    uVar20 = (uint)(((double)local_138 / dVar6 - dVar4) / dVar32);
    iVar13 = *(int *)((longlong)param_1 + 0xd0);
    uVar16 = iVar13 - 1;
    uVar23 = 0;
    if (0 < (int)uVar15) {
      uVar23 = uVar15;
    }
    if (iVar13 <= (int)uVar15) {
      uVar23 = uVar16;
    }
    iVar11 = *(int *)((longlong)param_1 + 0xd4);
    uVar15 = 0;
    if (0 < (int)uVar20) {
      uVar15 = uVar20;
    }
    uVar27 = iVar11 - 1;
    if (iVar11 <= (int)uVar20) {
      uVar15 = uVar27;
    }
    uVar21 = (uint)((local_170 / dVar5 - dVar3) / dVar7);
    uVar22 = (uint)(((double)local_168 / dVar6 - dVar4) / dVar32);
    uVar20 = 0;
    if (0 < (int)uVar21) {
      uVar20 = uVar21;
    }
    if (iVar13 <= (int)uVar21) {
      uVar20 = uVar16;
    }
    uVar21 = 0;
    if (0 < (int)uVar22) {
      uVar21 = uVar22;
    }
    if (iVar11 <= (int)uVar22) {
      uVar21 = uVar27;
    }
    uVar22 = -(uVar20 - uVar23);
    if ((int)uVar22 < 0) {
      uVar22 = uVar20 - uVar23;
    }
    uVar18 = -(uVar21 - uVar15);
    if ((int)uVar18 < 0) {
      uVar18 = uVar21 - uVar15;
    }
    local_120 = param_4;
    if (uVar18 == 0 && uVar22 == 0) {
      uVar33 = SUB84(local_140,0);
      uVar34 = (int)((ulonglong)local_140 >> 0x20);
      if (local_170 <= local_140) {
        uVar33 = SUB84(local_170,0);
        uVar34 = (int)((ulonglong)local_170 >> 0x20);
      }
      uVar35 = SUB84(local_138,0);
      uVar36 = (undefined4)((ulonglong)local_138 >> 0x20);
      if ((double)local_168 <= (double)local_138) {
        uVar35 = SUB84(local_168,0);
        uVar36 = (undefined4)((ulonglong)local_168 >> 0x20);
      }
      uVar15 = (uint)((((double)CONCAT44(uVar34,uVar33) - dVar29) / dVar5 - dVar3) / dVar7);
      uVar20 = (uint)((((double)CONCAT44(uVar36,uVar35) - dVar2) / dVar6 - dVar4) / dVar32);
      uVar23 = 0;
      if (0 < (int)uVar15) {
        uVar23 = uVar15;
      }
      dVar9 = local_140;
      if (local_140 <= local_170) {
        dVar9 = local_170;
      }
      if (iVar13 <= (int)uVar15) {
        uVar23 = uVar16;
      }
      uVar15 = 0;
      if (0 < (int)uVar20) {
        uVar15 = uVar20;
      }
      if (iVar11 <= (int)uVar20) {
        uVar15 = uVar27;
      }
      pdVar31 = local_138;
      if ((double)local_138 <= (double)local_168) {
        pdVar31 = local_168;
      }
      uVar21 = (uint)(((dVar9 + dVar29) / dVar5 - dVar3) / dVar7);
      uVar22 = (uint)((((double)pdVar31 + dVar2) / dVar6 - dVar4) / dVar32);
      uVar20 = 0;
      if (0 < (int)uVar21) {
        uVar20 = uVar21;
      }
      if (iVar13 <= (int)uVar21) {
        uVar20 = uVar16;
      }
      uVar16 = 0;
      if (0 < (int)uVar22) {
        uVar16 = uVar22;
      }
      if (iVar11 <= (int)uVar22) {
        uVar16 = uVar27;
      }
      if ((int)uVar15 <= (int)uVar16) {
        do {
          uVar27 = uVar23;
          if ((int)uVar23 <= (int)uVar20) {
            do {
              cVar10 = FUN_146da536a(param_6,(*(ushort *)((longlong)param_1 + 0x92) - 1) * uVar15 +
                                             uVar27,&local_120);
              if (cVar10 == '\0') goto LAB_146da4df4;
              uVar27 = uVar27 + 1;
            } while (uVar20 + 1 != uVar27);
          }
          bVar28 = uVar15 != uVar16;
          uVar15 = uVar15 + 1;
        } while (bVar28);
      }
    }
    else {
      local_1bc = CONCAT31(local_1bc._1_3_,(int)uVar23 < (int)uVar20);
      local_1a4 = CONCAT31(local_1a4._1_3_,(int)uVar15 < (int)uVar21);
      uVar16 = uVar22 - uVar18;
      local_198 = (ulonglong)uVar16;
      local_19c = (uint)(uVar22 < uVar18 || uVar16 == 0);
      local_1a0 = (uint)(uVar22 >= uVar18 && uVar16 != 0);
      local_1c8 = *(double *)((longlong)param_1 + 0xd0);
      iVar11 = (int)((ulonglong)local_1c8 >> 0x20) * SUB84(local_1c8,0);
      iVar13 = iVar11 + 7;
      if (-1 < iVar11) {
        iVar13 = iVar11;
      }
      local_130 = (iVar13 >> 3) + 1;
      _Size = (size_t)local_130;
      local_1b8 = (ulonglong)uVar23;
      local_140 = local_1c8;
      local_128 = local_19c;
      local_124 = local_1a0;
      local_1b0 = (double *)FUN_14001cc68(_Size + (_Size == 0));
      lVar19 = 0;
      local_138 = local_1b0;
      memset(local_1b0,0,_Size);
      local_158 = (undefined8 *)0x0;
      uVar25 = CONCAT44(uVar15,(undefined4)local_1b8);
      uStack_150 = 1;
      FUN_146da5ad0(&local_158,0);
      *local_158 = uVar25;
      uVar16 = (uint)local_1b8;
      iVar11 = uVar15 * local_1c8._0_4_ + uVar16;
      iVar13 = uVar15 * local_1c8._0_4_ + uVar16 + 7;
      if (-1 < iVar11) {
        iVar13 = iVar11;
      }
      local_158[1] = 0xbff0000000000000;
      pbVar1 = (byte *)((longlong)local_1b0 + (longlong)(iVar13 >> 3));
      *pbVar1 = *pbVar1 | (byte)(1 << ((byte)iVar11 & 7));
      if (0 < (int)uStack_150) {
        local_184 = -uVar18;
        local_188 = (local_1bc & 0xff) * 2 + -1;
        local_18c = (local_1a4 & 0xff) * 2 + -1;
        local_19c = -local_19c;
        local_1a0 = -local_1a0;
        lVar26 = 8;
        local_1c8 = (double)(local_1b8 & 0xffffffff);
        local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar15);
        uVar24 = local_1b8;
        iVar13 = (int)uStack_150;
        local_1bc = uVar15;
        local_1a8 = uVar16;
        do {
          dVar29 = *(double *)((longlong)local_158 + lVar26);
          if (dVar29 <= local_120) {
            local_178 = *(longlong *)((longlong)local_158 + lVar26 + -8);
            local_168 = &local_140;
            local_160 = &local_158;
            iVar11 = (int)local_178;
            iVar13 = 0;
            if (0 < iVar11) {
              iVar13 = iVar11;
            }
            if (*(int *)((longlong)param_1 + 0xd0) <= iVar11) {
              iVar13 = *(int *)((longlong)param_1 + 0xd0) + -1;
            }
            iVar14 = (int)((ulonglong)local_178 >> 0x20);
            iVar17 = 0;
            if (iVar14 != 0 && -1 < local_178) {
              iVar17 = iVar14;
            }
            if (*(int *)((longlong)param_1 + 0xd4) <= iVar14) {
              iVar17 = *(int *)((longlong)param_1 + 0xd4) + -1;
            }
            local_170 = param_1;
            if (((iVar13 == iVar11) && (iVar17 == iVar14)) &&
               (local_1b8 = uVar24,
               cVar10 = FUN_146da536a(param_6,(*(ushort *)((longlong)param_1 + 0x92) - 1) * iVar14 +
                                              iVar11,&local_120), uVar24 = local_1b8, cVar10 == '\0'
               )) break;
            if (dVar29 < 0.0) {
              uVar12 = (ulonglong)((local_1a0 & 1) << 3);
              auVar30._0_8_ =
                   *(double *)((longlong)local_118 + uVar12) /
                   ABS(*(double *)((longlong)param_1 + 0x50 + uVar12));
              auVar30._8_8_ = 0;
              if (0.0 <= auVar30._0_8_) {
                auVar30 = roundpd(auVar30,auVar30,2);
                dVar29 = auVar30._0_8_;
              }
              else {
                auVar30 = roundpd(auVar30,auVar30,1);
                dVar29 = auVar30._0_8_;
              }
              local_1a4 = (uint)dVar29;
              local_1b8 = uVar24;
              FUN_146da5682(&local_170,&local_178,&local_128);
              local_180 = local_19c;
              local_17c = local_1a0;
              FUN_146da5682(&local_170,&local_178,&local_180,local_1a4);
              uVar24 = local_1b8;
              if ((local_1c8._0_4_ == uVar20) && ((uint)local_1b0 == uVar21)) {
                local_1c8 = (double)(ulonglong)uVar20;
                local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar21);
              }
              else {
                iVar13 = (int)local_198 * 2;
                if (local_184 <= iVar13) {
                  local_198 = (ulonglong)((int)local_198 - uVar18);
                  local_1a8 = local_1c8._0_4_ + local_188;
                  local_1c8 = (double)(ulonglong)local_1a8;
                  uVar24 = (ulonglong)local_1a8;
                }
                uVar16 = local_1bc;
                if (iVar13 <= (int)uVar22) {
                  local_198 = (ulonglong)((int)local_198 + uVar22);
                  uVar15 = (uint)local_1b0 + local_18c;
                  local_1c8 = (double)(ulonglong)local_1a8;
                  uVar16 = uVar15;
                }
                uVar27 = local_140._0_4_ * uVar16 + SUB84(local_1c8,0);
                uVar23 = local_140._0_4_ * uVar16 + SUB84(local_1c8,0) + 7;
                if (-1 < (int)uVar27) {
                  uVar23 = uVar27;
                }
                bVar8 = *(byte *)((longlong)local_138 + (longlong)((int)uVar23 >> 3));
                if ((bVar8 >> (uVar27 & 7) & 1) == 0) {
                  *(byte *)((longlong)local_138 + (longlong)((int)uVar23 >> 3)) =
                       (byte)(1 << ((byte)uVar27 & 7)) | bVar8;
                  local_1c8 = (double)(longlong)(int)uStack_150;
                  uVar16 = (int)uStack_150 + 1;
                  uStack_150 = CONCAT44(uStack_150._4_4_,uVar16);
                  if (uStack_150._4_4_ < uVar16) {
                    local_1b8 = uVar24;
                    FUN_146da5ad0(&local_158,local_1c8);
                    uVar24 = local_1b8;
                  }
                  local_1a8 = (uint)uVar24;
                  local_158[(longlong)local_1c8 * 2] =
                       uVar24 & 0xffffffff | (ulonglong)uVar15 << 0x20;
                  local_158[(longlong)local_1c8 * 2 + 1] = 0xbff0000000000000;
                  local_1c8 = (double)(uVar24 & 0xffffffff);
                  local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar15);
                  local_1bc = uVar15;
                }
                else {
                  local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar16);
                  local_1bc = uVar16;
                }
              }
            }
            iVar13 = (int)uStack_150;
          }
          lVar19 = lVar19 + 1;
          lVar26 = lVar26 + 0x10;
        } while (lVar19 < iVar13);
      }
      if (local_158 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (local_138 != (double *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_146da4df4:
  if ((local_e0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146da536a FUN_146da536a body=791 status=ok
// SIG undefined FUN_146da536a(void)

bool FUN_146da536a(double *param_1,int param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  float fVar16;
  float fVar21;
  float fVar22;
  undefined1 auVar17 [16];
  float fVar23;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar35;
  float fVar36;
  undefined1 auVar33 [16];
  float fVar37;
  undefined1 auVar34 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar45 [16];
  float fVar46;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  float fVar47;
  undefined1 auStack_118 [32];
  float *local_f8;
  double *local_e8;
  double *local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar4 = (longlong *)param_1[0x12];
  uVar3 = *(ushort *)((longlong)plVar4 + 0x72);
  iVar13 = param_2 / (int)(uVar3 - 1) + param_2;
  dVar1 = (double)plVar4[0xc];
  lVar5 = *plVar4;
  lVar15 = (longlong)iVar13;
  dVar2 = (double)plVar4[0x10];
  iVar14 = iVar13 / (int)(uint)uVar3;
  auVar26._8_8_ = in_XMM2._8_8_;
  auVar26._0_8_ = (double)*(ushort *)(lVar5 + lVar15 * 2) * dVar2 + dVar1;
  auVar27._4_12_ = auVar26._4_12_;
  auVar27._0_4_ = (float)auVar26._0_8_;
  auVar38._4_12_ = in_XMM4._4_12_;
  auVar38._0_4_ = (float)((double)*(ushort *)(lVar5 + 2 + lVar15 * 2) * dVar2 + dVar1);
  auVar41._4_12_ = in_XMM5._4_12_;
  auVar41._0_4_ =
       (float)((double)*(ushort *)(lVar5 + ((ulonglong)uVar3 + lVar15) * 2) * dVar2 + dVar1);
  auVar24._4_12_ = unaff_XMM8._4_12_;
  auVar24._0_4_ = (float)iVar14;
  fVar31 = (float)(iVar13 % (int)(uint)uVar3);
  fVar46 = (float)((double)*(ushort *)(lVar5 + 2 + ((ulonglong)uVar3 + lVar15) * 2) * dVar2 + dVar1)
  ;
  auVar17 = insertps(ZEXT416((uint)fVar31),auVar24,0x1c);
  auVar42 = insertps(auVar17,auVar27,0x20);
  auVar43 = insertps(ZEXT416((uint)(fVar31 + 1.0)),auVar24,0x1c);
  auVar44 = insertps(auVar43,auVar38,0x20);
  auVar45._0_4_ = auVar24._0_4_ + 1.0;
  auVar45._4_12_ = auVar24._4_12_;
  auVar43 = insertps(ZEXT416((uint)fVar31),auVar45,0x1c);
  auVar33 = insertps(auVar43,auVar41,0x20);
  auVar24 = insertps(ZEXT416((uint)(fVar31 + 1.0)),auVar45,0x1c);
  auVar43._4_4_ = unaff_XMM9_Db;
  auVar43._0_4_ = fVar46;
  auVar43._8_4_ = unaff_XMM9_Dc;
  auVar43._12_4_ = unaff_XMM9_Dd;
  auVar43 = insertps(auVar24,auVar43,0x20);
  fVar31 = auVar41._0_4_;
  if (fVar46 <= auVar41._0_4_) {
    fVar31 = fVar46;
  }
  fVar47 = auVar38._0_4_;
  if (fVar31 <= auVar38._0_4_) {
    fVar47 = fVar31;
  }
  fVar31 = auVar27._0_4_;
  if (fVar47 <= auVar27._0_4_) {
    fVar31 = fVar47;
  }
  if (auVar41._0_4_ <= fVar46) {
    auVar41._0_4_ = fVar46;
  }
  if (auVar38._0_4_ <= auVar41._0_4_) {
    auVar38._0_4_ = auVar41._0_4_;
  }
  if (auVar27._0_4_ <= auVar38._0_4_) {
    auVar27._0_4_ = auVar38._0_4_;
  }
  auVar24 = insertps(auVar24,auVar27,0x20);
  auVar6._4_4_ = (int)((ulonglong)auVar26._0_8_ >> 0x20);
  auVar6._0_4_ = fVar31;
  auVar6._8_4_ = in_XMM2._8_4_;
  auVar6._12_4_ = in_XMM2._12_4_;
  auVar17 = insertps(auVar17,auVar6,0x20);
  fVar31 = *(float *)(plVar4 + 10);
  fVar46 = *(float *)((longlong)plVar4 + 0x54);
  fVar47 = *(float *)(plVar4 + 0xb);
  fVar7 = *(float *)((longlong)plVar4 + 0x5c);
  local_d8 = auVar42._0_4_ * fVar31;
  fStack_d4 = auVar42._4_4_ * fVar46;
  fStack_d0 = auVar42._8_4_ * fVar47;
  fStack_cc = auVar42._12_4_ * fVar7;
  local_c8 = auVar44._0_4_ * fVar31;
  fStack_c4 = auVar44._4_4_ * fVar46;
  fStack_c0 = auVar44._8_4_ * fVar47;
  fStack_bc = auVar44._12_4_ * fVar7;
  local_b8 = auVar33._0_4_ * fVar31;
  fStack_b4 = auVar33._4_4_ * fVar46;
  fStack_b0 = auVar33._8_4_ * fVar47;
  fStack_ac = auVar33._12_4_ * fVar7;
  local_a8 = auVar43._0_4_ * fVar31;
  fStack_a4 = auVar43._4_4_ * fVar46;
  fStack_a0 = auVar43._8_4_ * fVar47;
  fStack_9c = auVar43._12_4_ * fVar7;
  auVar33._0_8_ = CONCAT44(auVar17._4_4_ * fVar46,auVar17._0_4_ * fVar31);
  auVar33._8_4_ = auVar17._8_4_ * fVar47;
  auVar33._12_4_ = auVar17._12_4_ * fVar7;
  auVar17._0_4_ = auVar24._0_4_ * fVar31;
  auVar17._4_4_ = auVar24._4_4_ * fVar46;
  auVar17._8_4_ = auVar24._8_4_ * fVar47;
  auVar17._12_4_ = auVar24._12_4_ * fVar7;
  auVar42._8_4_ = auVar33._8_4_;
  auVar42._0_8_ = auVar33._0_8_;
  auVar42._12_4_ = auVar33._12_4_;
  auVar24 = minps(auVar42,auVar17);
  auVar43 = maxps(auVar33,auVar17);
  fVar31 = *(float *)(param_1 + 8);
  fVar46 = *(float *)((longlong)param_1 + 0x44);
  fVar47 = *(float *)(param_1 + 9);
  fVar7 = *(float *)((longlong)param_1 + 0x4c);
  uVar8 = *(uint *)(param_1 + 0xe);
  uVar9 = *(uint *)((longlong)param_1 + 0x74);
  uVar10 = *(uint *)(param_1 + 0xf);
  uVar11 = *(uint *)((longlong)param_1 + 0x7c);
  fVar32 = auVar24._0_4_ - *(float *)(param_1 + 0x10);
  fVar35 = auVar24._4_4_ - *(float *)((longlong)param_1 + 0x84);
  fVar36 = auVar24._8_4_ - *(float *)(param_1 + 0x11);
  fVar37 = auVar24._12_4_ - *(float *)((longlong)param_1 + 0x8c);
  fVar16 = auVar43._0_4_ + *(float *)(param_1 + 0x10);
  fVar21 = auVar43._4_4_ + *(float *)((longlong)param_1 + 0x84);
  fVar22 = auVar43._8_4_ + *(float *)(param_1 + 0x11);
  fVar23 = auVar43._12_4_ + *(float *)((longlong)param_1 + 0x8c);
  auVar44._0_4_ = -(uint)(fVar16 < fVar31 || fVar31 < fVar32) & uVar8;
  auVar44._4_4_ = -(uint)(fVar21 < fVar46 || fVar46 < fVar35) & uVar9;
  auVar44._8_4_ = -(uint)(fVar22 < fVar47 || fVar47 < fVar36) & uVar10;
  auVar44._12_4_ = -(uint)(fVar23 < fVar7 || fVar7 < fVar37) & uVar11;
  iVar13 = movmskps(iVar14,auVar44);
  local_e8 = param_1;
  local_e0 = param_3;
  if (iVar13 == 0) {
    auVar25._0_4_ = (float)*param_3;
    auVar25._4_4_ = auVar25._0_4_;
    auVar25._8_4_ = auVar25._0_4_;
    auVar25._12_4_ = auVar25._0_4_;
    auVar39._0_8_ =
         CONCAT44(~uVar9 & (uint)((fVar35 - fVar46) * *(float *)((longlong)param_1 + 0x54)),
                  ~uVar8 & (uint)((fVar32 - fVar31) * *(float *)(param_1 + 10)));
    auVar39._8_4_ = ~uVar10 & (uint)((fVar36 - fVar47) * *(float *)(param_1 + 0xb));
    auVar39._12_4_ = ~uVar11 & (uint)((fVar37 - fVar7) * *(float *)((longlong)param_1 + 0x5c));
    auVar34._0_4_ = ~uVar8 & (uint)((fVar16 - fVar31) * *(float *)(param_1 + 10));
    auVar34._4_4_ = ~uVar9 & (uint)((fVar21 - fVar46) * *(float *)((longlong)param_1 + 0x54));
    auVar34._8_4_ = ~uVar10 & (uint)((fVar22 - fVar47) * *(float *)(param_1 + 0xb));
    auVar34._12_4_ = ~uVar11 & (uint)((fVar23 - fVar7) * *(float *)((longlong)param_1 + 0x5c));
    auVar28._0_4_ = uVar8 & (uint)auVar25._0_4_;
    auVar28._4_4_ = uVar9 & (uint)auVar25._0_4_;
    auVar28._8_4_ = uVar10 & (uint)auVar25._0_4_;
    auVar28._12_4_ = uVar11 & (uint)auVar25._0_4_;
    auVar18._8_4_ = auVar39._8_4_;
    auVar18._0_8_ = auVar39._0_8_;
    auVar18._12_4_ = auVar39._12_4_;
    auVar43 = minps(auVar18,auVar28 | auVar34);
    auVar24 = maxps(auVar39,auVar28 | auVar34);
    auVar19._12_4_ = auVar43._12_4_;
    auVar29._0_8_ = auVar43._4_8_;
    auVar29._8_4_ = auVar43._0_4_;
    auVar29._12_4_ = auVar19._12_4_;
    auVar17 = maxps(auVar43,auVar29);
    auVar19._4_4_ = auVar43._0_4_;
    auVar19._0_4_ = auVar43._8_4_;
    auVar19._8_4_ = auVar43._4_4_;
    auVar43 = maxps(auVar17,auVar19);
    auVar17 = maxps(auVar43,ZEXT816(0));
    auVar40._12_4_ = auVar24._12_4_;
    auVar20._0_8_ = auVar24._4_8_;
    auVar20._8_4_ = auVar24._0_4_;
    auVar20._12_4_ = auVar40._12_4_;
    auVar43 = minps(auVar24,auVar20);
    auVar40._4_4_ = auVar24._0_4_;
    auVar40._0_4_ = auVar24._8_4_;
    auVar40._8_4_ = auVar24._4_4_;
    auVar43 = minps(auVar43,auVar40);
    auVar43 = minps(auVar43,auVar25);
    auVar30._4_4_ = -(uint)(auVar43._4_4_ < auVar17._4_4_);
    auVar30._0_4_ = -(uint)(auVar43._0_4_ < auVar17._0_4_);
    auVar30._8_4_ = -(uint)(auVar43._8_4_ < auVar17._8_4_);
    auVar30._12_4_ = -(uint)(auVar43._12_4_ < auVar17._12_4_);
    iVar13 = movmskps(0,auVar30);
    if (iVar13 == 0) {
      local_f8 = &local_a8;
      cVar12 = FUN_146da5784(&local_e8,param_2 * 2,&local_d8,&local_c8);
      if (cVar12 != '\0') {
        local_f8 = &local_b8;
        FUN_146da5784(&local_e8,param_2 * 2 | 1,&local_d8,&local_a8);
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return 0.0 < *param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146da5682 FUN_146da5682 body=257 status=ok
// SIG undefined FUN_146da5682(void)

void FUN_146da5682(longlong *param_1,ulonglong *param_2,int *param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  if (0 < param_4) {
    lVar2 = *param_1;
    uVar11 = *param_2;
    uVar8 = uVar11 >> 0x20;
    while( true ) {
      uVar10 = (int)uVar11 + *param_3;
      uVar11 = (ulonglong)uVar10;
      if ((int)uVar10 < 0) break;
      uVar7 = (int)uVar8 + param_3[1];
      uVar8 = (ulonglong)uVar7;
      if ((int)uVar7 < 0) {
        return;
      }
      if (*(int *)(lVar2 + 0xd0) <= (int)uVar10) {
        return;
      }
      if (*(int *)(lVar2 + 0xd4) <= (int)uVar7) {
        return;
      }
      iVar5 = *(int *)param_1[1] * uVar7;
      uVar9 = iVar5 + uVar10;
      uVar6 = iVar5 + uVar10 + 7;
      if (-1 < (int)uVar9) {
        uVar6 = uVar9;
      }
      lVar3 = *(longlong *)((int *)param_1[1] + 2);
      bVar1 = *(byte *)(lVar3 + ((int)uVar6 >> 3));
      if ((bVar1 >> (uVar9 & 7) & 1) == 0) {
        *(byte *)(lVar3 + ((int)uVar6 >> 3)) = (byte)(1 << ((byte)uVar9 & 7)) | bVar1;
        plVar4 = (longlong *)param_1[2];
        iVar5 = (int)plVar4[1];
        *(uint *)(plVar4 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)plVar4 + 0xc) < iVar5 + 1U) {
          FUN_146da5ad0(plVar4,iVar5);
        }
        lVar3 = *plVar4;
        *(ulonglong *)(lVar3 + (longlong)iVar5 * 0x10) = CONCAT44(uVar7,uVar10);
        *(undefined8 *)(lVar3 + 8 + (longlong)iVar5 * 0x10) = 0;
      }
      param_4 = param_4 + -1;
      if (param_4 == 0) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 146da5784 FUN_146da5784 body=842 status=ok
// SIG undefined FUN_146da5784(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_146da5784(undefined8 *param_1,int param_2,float *param_3,float *param_4,float *param_5)

{
  double *pdVar1;
  double dVar2;
  bool bVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_148 [32];
  double *local_128;
  float local_120;
  float *local_118;
  float *local_110;
  float *local_108;
  undefined1 local_100;
  undefined *local_f8;
  undefined8 *local_e8;
  undefined8 local_e0;
  code *local_d8;
  double local_d0;
  float local_c8;
  float local_c4;
  code *local_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  pdVar1 = (double *)*param_1;
  if ((*pdVar1 != 0.0) || (NAN(*pdVar1))) {
    local_88 = *param_3;
    fStack_84 = param_3[1];
    fStack_80 = param_3[2];
    fStack_7c = param_3[3];
    local_48 = *param_5 - local_88;
    fStack_44 = param_5[1] - fStack_84;
    fStack_40 = param_5[2] - fStack_80;
    fStack_3c = param_5[3] - fStack_7c;
    local_58 = *param_4 - local_88;
    fStack_54 = param_4[1] - fStack_84;
    fStack_50 = param_4[2] - fStack_80;
    fStack_4c = param_4[3] - fStack_7c;
    local_e8 = &local_68;
    local_68 = 0;
    uStack_60 = 0;
    fVar5 = (float)pdVar1[0x16];
    fVar7 = (float)pdVar1[0x17];
    fVar13 = (float)pdVar1[0x14];
    fVar14 = (float)pdVar1[0x15];
    fVar6 = fVar13 * fVar13 + fVar14 * fVar14;
    fVar8 = fVar5 * fVar5 + fVar7 * fVar7;
    auVar15._0_4_ = fVar8 + fVar6;
    auVar15._4_4_ = fVar8 + fVar6;
    auVar15._8_4_ = fVar6 + fVar8;
    auVar15._12_4_ = fVar6 + fVar8;
    auVar16 = sqrtps(auVar15,auVar15);
    auVar16 = divps(_DAT_1499314a0,auVar16);
    auVar17._0_4_ = auVar16._0_4_ * fVar13;
    auVar17._4_4_ = auVar16._4_4_ * fVar14;
    auVar17._8_4_ = auVar16._8_4_ * fVar5;
    auVar17._12_4_ = auVar16._12_4_ * fVar7;
    auVar16._4_4_ = -(uint)(1e-08 <= auVar15._4_4_);
    auVar16._0_4_ = -(uint)(1e-08 <= auVar15._0_4_);
    auVar16._8_4_ = -(uint)(1e-08 <= auVar15._8_4_);
    auVar16._12_4_ = -(uint)(1e-08 <= auVar15._12_4_);
    local_78 = blendvps(_DAT_149932320,auVar17,auVar16);
    local_88 = (float)pdVar1[0x18] - local_88;
    fStack_84 = (float)pdVar1[0x19] - fStack_84;
    fStack_80 = (float)pdVar1[0x1a] - fStack_80;
    fStack_7c = 0.0 - fStack_7c;
    local_120 = (float)*(double *)param_1[1];
    local_100 = *(undefined1 *)(pdVar1 + 0x27);
    local_d0 = pdVar1[0x20];
    local_c8 = (float)*(double *)((longlong)local_d0 + 0x10);
    local_128 = pdVar1 + 0xc;
    local_c4 = (float)(double)(-(ulonglong)
                                (0.0 < *(double *)(*(longlong *)((longlong)local_d0 + 0x88) + 0x10))
                              & (ulonglong)*(double *)((longlong)local_d0 + 0x10));
    local_c0 = FUN_146cc5596;
    local_e0 = 0;
    local_d8 = FUN_14014b546;
    local_f8 = &DAT_149f52c20;
    local_108 = &local_b8;
    local_110 = &local_a8;
    local_118 = &local_8c;
    cVar4 = FUN_1448541f8();
    bVar3 = true;
    if (cVar4 != '\0') {
      dVar2 = (double)local_8c;
      if (dVar2 < *pdVar1) {
        if (-2 < param_2) {
          if ((param_2 / 2 < *(int *)((longlong)pdVar1[0x12] + 0x28)) &&
             (*(char *)(*(longlong *)((longlong)pdVar1[0x12] + 0x20) + (longlong)(param_2 / 2)) ==
              -1)) goto LAB_146da57bb;
        }
        pdVar1[4] = (double)local_b8;
        pdVar1[5] = (double)fStack_b4;
        pdVar1[6] = (double)fStack_b0;
        fVar5 = param_3[1];
        fVar6 = param_3[2];
        pdVar1[1] = (double)(*param_3 + local_a8);
        pdVar1[2] = (double)(fVar5 + fStack_a4);
        pdVar1[3] = (double)(fVar6 + fStack_a0);
        *pdVar1 = dVar2;
        *(int *)(pdVar1 + 7) = param_2;
        bVar3 = 0.0 < local_8c;
        if (!bVar3) {
          fVar5 = *param_4 - *param_3;
          fVar6 = param_4[1] - param_3[1];
          fVar7 = param_4[2] - param_3[2];
          fVar8 = param_4[3] - param_3[3];
          fVar13 = *param_5 - *param_3;
          fVar10 = param_5[1] - param_3[1];
          fVar11 = param_5[2] - param_3[2];
          fVar12 = param_5[3] - param_3[3];
          fVar14 = fVar10 * fVar5 - fVar6 * fVar13;
          fVar6 = fVar11 * fVar6 - fVar7 * fVar10;
          fVar13 = fVar13 * fVar7 - fVar5 * fVar11;
          fVar10 = fVar12 * fVar8 - fVar8 * fVar12;
          fVar10 = fVar10 * fVar10;
          fVar5 = fVar13 * fVar13 + fVar6 * fVar6;
          fVar7 = fVar6 * fVar6 + fVar13 * fVar13;
          fVar8 = fVar10 + fVar14 * fVar14;
          fVar10 = fVar14 * fVar14 + fVar10;
          auVar9._0_4_ = fVar8 + fVar5;
          auVar9._4_4_ = fVar10 + fVar7;
          auVar9._8_4_ = fVar5 + fVar8;
          auVar9._12_4_ = fVar7 + fVar10;
          auVar16 = sqrtps(auVar9,auVar9);
          auVar16 = divps(_DAT_149e1ef10,auVar16);
          pdVar1[4] = (double)(auVar16._0_4_ * fVar6);
          pdVar1[5] = (double)(auVar16._4_4_ * fVar13);
          pdVar1[6] = (double)(auVar16._8_4_ * fVar14);
          dVar2 = 0.0;
        }
        *(double *)param_1[1] = dVar2;
      }
    }
  }
  else {
    bVar3 = false;
  }
LAB_146da57bb:
  if ((local_38 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146da5ad0 FUN_146da5ad0 body=132 status=ok
// SIG undefined FUN_146da5ad0(void)

void FUN_146da5ad0(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146da5b56 FUN_146da5b56 body=978 status=ok
// SIG undefined FUN_146da5b56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146da5b56(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  double dVar1;
  double *pdVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  longlong lVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_158 [32];
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_90;
  double dStack_88;
  double local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *param_1 = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  param_1[0x12] = param_2;
  puVar8 = param_1 + 0x14;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar8 = *param_4;
    param_4 = param_4 + 1;
    puVar8 = puVar8 + 1;
  }
  param_1[0x20] = param_3;
  param_1[0x21] = param_5;
  param_1[0x26] = param_6;
  *(undefined1 *)(param_1 + 0x27) = param_7;
  local_98 = *(double *)(param_3 + 0x68);
  local_a8 = *(double *)(param_3 + 0x58);
  dStack_a0 = *(double *)(param_3 + 0x60);
  local_80 = *(double *)(param_3 + 0x80);
  local_90 = *(double *)(param_3 + 0x70);
  dStack_88 = *(double *)(param_3 + 0x78);
  dVar14 = (local_80 - local_98) * 0.5 + local_98;
  dVar5 = (dStack_88 - dStack_a0) * 0.5 + dStack_a0;
  dVar12 = (local_90 - local_a8) * 0.5 + local_a8;
  local_108 = (double)param_1[0x14];
  dStack_100 = (double)param_1[0x15];
  local_f8 = (double)param_1[0x16];
  uStack_f0 = param_1[0x17];
  dVar1 = (double)param_1[0x17];
  dVar16 = dVar12 * local_f8 - local_108 * dVar14;
  dVar15 = dVar5 * local_108 - dStack_100 * dVar12;
  dVar6 = dVar14 * dStack_100 - local_f8 * dVar5;
  dVar6 = dVar6 + dVar6;
  dVar16 = dVar16 + dVar16;
  dVar15 = dVar15 + dVar15;
  param_1[0x28] =
       (dVar15 * dStack_100 - dVar16 * local_f8) + dVar1 * dVar6 + dVar12 + (double)param_1[0x18];
  param_1[0x29] =
       (local_f8 * dVar6 - local_108 * dVar15) + (double)param_1[0x17] * dVar16 + dVar5 +
       (double)param_1[0x19];
  param_1[0x2a] =
       dVar15 * dVar1 + dVar14 + (dVar16 * local_108 - dVar6 * dStack_100) + (double)param_1[0x1a];
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0x3ff0000000000000;
  local_b8 = 0x3ff0000000000000;
  uStack_b0 = 0;
  FUN_1400fd046(&local_a8,&local_138);
  dVar1 = (double)param_1[0x26];
  param_1[0x2b] = (local_120 - local_138) * 0.5 + dVar1;
  param_1[0x2c] = (local_118 - local_130) * 0.5 + dVar1;
  param_1[0x2d] = (local_110 - local_128) * 0.5 + dVar1;
  pdVar2 = (double *)param_1[0x21];
  lVar7 = 0;
  do {
    dVar1 = pdVar2[lVar7];
    *(bool *)((longlong)param_1 + lVar7 + 0x128) = ABS(dVar1) <= 1e-08;
    dVar14 = 0.0;
    if (ABS(dVar1) > 1e-08) {
      dVar14 = 1.0 / pdVar2[lVar7];
    }
    param_1[lVar7 + 0x22] = dVar14;
    lVar7 = lVar7 + 1;
  } while (lVar7 != 3);
  auVar4._4_4_ = (float)(double)param_1[0x29];
  auVar4._0_4_ = (float)(double)param_1[0x28];
  auVar4._8_4_ = (float)(double)param_1[0x2a];
  auVar4._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 8) = auVar4;
  fVar11 = (float)pdVar2[2];
  fVar9 = (float)*pdVar2;
  fVar10 = (float)pdVar2[1];
  auVar13._4_4_ = fVar10;
  auVar13._0_4_ = fVar9;
  auVar13._8_4_ = fVar11;
  auVar13._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0xc) = auVar13;
  auVar3._4_4_ = fVar10;
  auVar3._0_4_ = fVar9;
  auVar3._8_4_ = fVar11;
  auVar3._12_4_ = 0;
  auVar13 = divps(_DAT_1499314a0,auVar3);
  *(uint *)(param_1 + 0xe) = -(uint)(ABS(fVar9) < 1e-08);
  *(uint *)((longlong)param_1 + 0x74) = -(uint)(ABS(fVar10) < 1e-08);
  *(uint *)(param_1 + 0xf) = -(uint)(ABS(fVar11) < 1e-08);
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0xffffffff;
  *(uint *)(param_1 + 10) = ~-(uint)(ABS(fVar9) < 1e-08) & auVar13._0_4_;
  *(uint *)((longlong)param_1 + 0x54) = ~-(uint)(ABS(fVar10) < 1e-08) & auVar13._4_4_;
  *(uint *)(param_1 + 0xb) = ~-(uint)(ABS(fVar11) < 1e-08) & auVar13._8_4_;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(float *)(param_1 + 0x10) = ABS((float)(double)param_1[0x2b]);
  *(float *)((longlong)param_1 + 0x84) = ABS((float)(double)param_1[0x2c]);
  *(float *)(param_1 + 0x11) = ABS((float)(double)param_1[0x2d]);
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  if ((local_70 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146da5f2a FUN_146da5f2a body=2375 status=ok
// SIG undefined FUN_146da5f2a(void)

void FUN_146da5f2a(double param_1,double *param_2,double *param_3,double param_4,double *param_5,
                  undefined8 param_6)

{
  byte *pbVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  byte bVar8;
  double dVar9;
  char cVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  size_t _Size;
  undefined8 uVar25;
  longlong lVar26;
  uint uVar27;
  bool bVar28;
  double dVar29;
  undefined1 auVar30 [16];
  double *pdVar31;
  double dVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStack_1e8 [32];
  double local_1c8;
  uint local_1bc;
  ulonglong local_1b8;
  double *local_1b0;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  ulonglong local_198;
  int local_18c;
  int local_188;
  int local_184;
  uint local_180;
  uint local_17c;
  longlong local_178;
  double local_170;
  double *local_168;
  undefined8 **local_160;
  undefined8 *local_158;
  undefined8 uStack_150;
  double local_140;
  double *local_138;
  int local_130;
  uint local_128;
  uint local_124;
  double local_120;
  double local_118 [4];
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  dVar29 = *param_5;
  dVar2 = param_5[1];
  local_118[3] = *(double *)((longlong)param_1 + 0x138) - dVar29;
  local_f0 = *(double *)((longlong)param_1 + 0x150) + dVar29;
  local_e8 = *(double *)((longlong)param_1 + 0x158) + dVar2;
  local_f8 = *(double *)((longlong)param_1 + 0x140) - dVar2;
  dVar3 = *param_3;
  dVar4 = param_3[1];
  dVar5 = *(double *)((longlong)param_1 + 0x50);
  dVar6 = *(double *)((longlong)param_1 + 0x58);
  dVar32 = (double)(-(ulonglong)(0.0 < dVar4) & 0x3ff0000000000000 |
                   (ulonglong)
                   (~(uint)(-(ulonglong)(0.0 < dVar4) >> 0x20) &
                   (uint)(-(ulonglong)(dVar4 < 0.0) >> 0x20) & 0xbff00000) << 0x20) * dVar2;
  local_170 = (double)(-(ulonglong)(0.0 < dVar3) & 0x3ff0000000000000 |
                      (ulonglong)
                      (~(uint)(-(ulonglong)(0.0 < dVar3) >> 0x20) &
                      (uint)(-(ulonglong)(dVar3 < 0.0) >> 0x20) & 0xbff00000) << 0x20) * dVar29;
  local_138 = (double *)(param_2[1] - dVar32);
  local_140 = *param_2 - local_170;
  local_168 = (double *)(dVar4 * param_4 + param_2[1] + dVar32);
  local_170 = dVar3 * param_4 + *param_2 + local_170;
  local_118[0] = dVar29;
  local_118[1] = dVar2;
  cVar10 = FUN_1448596be();
  if (cVar10 != '\0') {
    dVar3 = *(double *)((longlong)param_1 + 0xb0);
    dVar4 = *(double *)((longlong)param_1 + 0xb8);
    dVar32 = *(double *)((longlong)param_1 + 0xe0);
    dVar7 = *(double *)((longlong)param_1 + 0xd8);
    uVar15 = (uint)((local_140 / dVar5 - dVar3) / dVar7);
    uVar20 = (uint)(((double)local_138 / dVar6 - dVar4) / dVar32);
    iVar13 = *(int *)((longlong)param_1 + 0xd0);
    uVar16 = iVar13 - 1;
    uVar23 = 0;
    if (0 < (int)uVar15) {
      uVar23 = uVar15;
    }
    if (iVar13 <= (int)uVar15) {
      uVar23 = uVar16;
    }
    iVar11 = *(int *)((longlong)param_1 + 0xd4);
    uVar15 = 0;
    if (0 < (int)uVar20) {
      uVar15 = uVar20;
    }
    uVar27 = iVar11 - 1;
    if (iVar11 <= (int)uVar20) {
      uVar15 = uVar27;
    }
    uVar21 = (uint)((local_170 / dVar5 - dVar3) / dVar7);
    uVar22 = (uint)(((double)local_168 / dVar6 - dVar4) / dVar32);
    uVar20 = 0;
    if (0 < (int)uVar21) {
      uVar20 = uVar21;
    }
    if (iVar13 <= (int)uVar21) {
      uVar20 = uVar16;
    }
    uVar21 = 0;
    if (0 < (int)uVar22) {
      uVar21 = uVar22;
    }
    if (iVar11 <= (int)uVar22) {
      uVar21 = uVar27;
    }
    uVar22 = -(uVar20 - uVar23);
    if ((int)uVar22 < 0) {
      uVar22 = uVar20 - uVar23;
    }
    uVar18 = -(uVar21 - uVar15);
    if ((int)uVar18 < 0) {
      uVar18 = uVar21 - uVar15;
    }
    local_120 = param_4;
    if (uVar18 == 0 && uVar22 == 0) {
      uVar33 = SUB84(local_140,0);
      uVar34 = (int)((ulonglong)local_140 >> 0x20);
      if (local_170 <= local_140) {
        uVar33 = SUB84(local_170,0);
        uVar34 = (int)((ulonglong)local_170 >> 0x20);
      }
      uVar35 = SUB84(local_138,0);
      uVar36 = (undefined4)((ulonglong)local_138 >> 0x20);
      if ((double)local_168 <= (double)local_138) {
        uVar35 = SUB84(local_168,0);
        uVar36 = (undefined4)((ulonglong)local_168 >> 0x20);
      }
      uVar15 = (uint)((((double)CONCAT44(uVar34,uVar33) - dVar29) / dVar5 - dVar3) / dVar7);
      uVar20 = (uint)((((double)CONCAT44(uVar36,uVar35) - dVar2) / dVar6 - dVar4) / dVar32);
      uVar23 = 0;
      if (0 < (int)uVar15) {
        uVar23 = uVar15;
      }
      dVar9 = local_140;
      if (local_140 <= local_170) {
        dVar9 = local_170;
      }
      if (iVar13 <= (int)uVar15) {
        uVar23 = uVar16;
      }
      uVar15 = 0;
      if (0 < (int)uVar20) {
        uVar15 = uVar20;
      }
      if (iVar11 <= (int)uVar20) {
        uVar15 = uVar27;
      }
      pdVar31 = local_138;
      if ((double)local_138 <= (double)local_168) {
        pdVar31 = local_168;
      }
      uVar21 = (uint)(((dVar9 + dVar29) / dVar5 - dVar3) / dVar7);
      uVar22 = (uint)((((double)pdVar31 + dVar2) / dVar6 - dVar4) / dVar32);
      uVar20 = 0;
      if (0 < (int)uVar21) {
        uVar20 = uVar21;
      }
      if (iVar13 <= (int)uVar21) {
        uVar20 = uVar16;
      }
      uVar16 = 0;
      if (0 < (int)uVar22) {
        uVar16 = uVar22;
      }
      if (iVar11 <= (int)uVar22) {
        uVar16 = uVar27;
      }
      if ((int)uVar15 <= (int)uVar16) {
        do {
          uVar27 = uVar23;
          if ((int)uVar23 <= (int)uVar20) {
            do {
              cVar10 = FUN_146da6872(param_6,(*(ushort *)((longlong)param_1 + 0x92) - 1) * uVar15 +
                                             uVar27,&local_120);
              if (cVar10 == '\0') goto LAB_146da62fc;
              uVar27 = uVar27 + 1;
            } while (uVar20 + 1 != uVar27);
          }
          bVar28 = uVar15 != uVar16;
          uVar15 = uVar15 + 1;
        } while (bVar28);
      }
    }
    else {
      local_1bc = CONCAT31(local_1bc._1_3_,(int)uVar23 < (int)uVar20);
      local_1a4 = CONCAT31(local_1a4._1_3_,(int)uVar15 < (int)uVar21);
      uVar16 = uVar22 - uVar18;
      local_198 = (ulonglong)uVar16;
      local_19c = (uint)(uVar22 < uVar18 || uVar16 == 0);
      local_1a0 = (uint)(uVar22 >= uVar18 && uVar16 != 0);
      local_1c8 = *(double *)((longlong)param_1 + 0xd0);
      iVar11 = (int)((ulonglong)local_1c8 >> 0x20) * SUB84(local_1c8,0);
      iVar13 = iVar11 + 7;
      if (-1 < iVar11) {
        iVar13 = iVar11;
      }
      local_130 = (iVar13 >> 3) + 1;
      _Size = (size_t)local_130;
      local_1b8 = (ulonglong)uVar23;
      local_140 = local_1c8;
      local_128 = local_19c;
      local_124 = local_1a0;
      local_1b0 = (double *)FUN_14001cc68(_Size + (_Size == 0));
      lVar19 = 0;
      local_138 = local_1b0;
      memset(local_1b0,0,_Size);
      local_158 = (undefined8 *)0x0;
      uVar25 = CONCAT44(uVar15,(undefined4)local_1b8);
      uStack_150 = 1;
      FUN_146da6fc0(&local_158,0);
      *local_158 = uVar25;
      uVar16 = (uint)local_1b8;
      iVar11 = uVar15 * local_1c8._0_4_ + uVar16;
      iVar13 = uVar15 * local_1c8._0_4_ + uVar16 + 7;
      if (-1 < iVar11) {
        iVar13 = iVar11;
      }
      local_158[1] = 0xbff0000000000000;
      pbVar1 = (byte *)((longlong)local_1b0 + (longlong)(iVar13 >> 3));
      *pbVar1 = *pbVar1 | (byte)(1 << ((byte)iVar11 & 7));
      if (0 < (int)uStack_150) {
        local_184 = -uVar18;
        local_188 = (local_1bc & 0xff) * 2 + -1;
        local_18c = (local_1a4 & 0xff) * 2 + -1;
        local_19c = -local_19c;
        local_1a0 = -local_1a0;
        lVar26 = 8;
        local_1c8 = (double)(local_1b8 & 0xffffffff);
        local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar15);
        uVar24 = local_1b8;
        iVar13 = (int)uStack_150;
        local_1bc = uVar15;
        local_1a8 = uVar16;
        do {
          dVar29 = *(double *)((longlong)local_158 + lVar26);
          if (dVar29 <= local_120) {
            local_178 = *(longlong *)((longlong)local_158 + lVar26 + -8);
            local_168 = &local_140;
            local_160 = &local_158;
            iVar11 = (int)local_178;
            iVar13 = 0;
            if (0 < iVar11) {
              iVar13 = iVar11;
            }
            if (*(int *)((longlong)param_1 + 0xd0) <= iVar11) {
              iVar13 = *(int *)((longlong)param_1 + 0xd0) + -1;
            }
            iVar14 = (int)((ulonglong)local_178 >> 0x20);
            iVar17 = 0;
            if (iVar14 != 0 && -1 < local_178) {
              iVar17 = iVar14;
            }
            if (*(int *)((longlong)param_1 + 0xd4) <= iVar14) {
              iVar17 = *(int *)((longlong)param_1 + 0xd4) + -1;
            }
            local_170 = param_1;
            if (((iVar13 == iVar11) && (iVar17 == iVar14)) &&
               (local_1b8 = uVar24,
               cVar10 = FUN_146da6872(param_6,(*(ushort *)((longlong)param_1 + 0x92) - 1) * iVar14 +
                                              iVar11,&local_120), uVar24 = local_1b8, cVar10 == '\0'
               )) break;
            if (dVar29 < 0.0) {
              uVar12 = (ulonglong)((local_1a0 & 1) << 3);
              auVar30._0_8_ =
                   *(double *)((longlong)local_118 + uVar12) /
                   ABS(*(double *)((longlong)param_1 + 0x50 + uVar12));
              auVar30._8_8_ = 0;
              if (0.0 <= auVar30._0_8_) {
                auVar30 = roundpd(auVar30,auVar30,2);
                dVar29 = auVar30._0_8_;
              }
              else {
                auVar30 = roundpd(auVar30,auVar30,1);
                dVar29 = auVar30._0_8_;
              }
              local_1a4 = (uint)dVar29;
              local_1b8 = uVar24;
              FUN_146da6b8a(&local_170,&local_178,&local_128);
              local_180 = local_19c;
              local_17c = local_1a0;
              FUN_146da6b8a(&local_170,&local_178,&local_180,local_1a4);
              uVar24 = local_1b8;
              if ((local_1c8._0_4_ == uVar20) && ((uint)local_1b0 == uVar21)) {
                local_1c8 = (double)(ulonglong)uVar20;
                local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar21);
              }
              else {
                iVar13 = (int)local_198 * 2;
                if (local_184 <= iVar13) {
                  local_198 = (ulonglong)((int)local_198 - uVar18);
                  local_1a8 = local_1c8._0_4_ + local_188;
                  local_1c8 = (double)(ulonglong)local_1a8;
                  uVar24 = (ulonglong)local_1a8;
                }
                uVar16 = local_1bc;
                if (iVar13 <= (int)uVar22) {
                  local_198 = (ulonglong)((int)local_198 + uVar22);
                  uVar15 = (uint)local_1b0 + local_18c;
                  local_1c8 = (double)(ulonglong)local_1a8;
                  uVar16 = uVar15;
                }
                uVar27 = local_140._0_4_ * uVar16 + SUB84(local_1c8,0);
                uVar23 = local_140._0_4_ * uVar16 + SUB84(local_1c8,0) + 7;
                if (-1 < (int)uVar27) {
                  uVar23 = uVar27;
                }
                bVar8 = *(byte *)((longlong)local_138 + (longlong)((int)uVar23 >> 3));
                if ((bVar8 >> (uVar27 & 7) & 1) == 0) {
                  *(byte *)((longlong)local_138 + (longlong)((int)uVar23 >> 3)) =
                       (byte)(1 << ((byte)uVar27 & 7)) | bVar8;
                  local_1c8 = (double)(longlong)(int)uStack_150;
                  uVar16 = (int)uStack_150 + 1;
                  uStack_150 = CONCAT44(uStack_150._4_4_,uVar16);
                  if (uStack_150._4_4_ < uVar16) {
                    local_1b8 = uVar24;
                    FUN_146da6fc0(&local_158,local_1c8);
                    uVar24 = local_1b8;
                  }
                  local_1a8 = (uint)uVar24;
                  local_158[(longlong)local_1c8 * 2] =
                       uVar24 & 0xffffffff | (ulonglong)uVar15 << 0x20;
                  local_158[(longlong)local_1c8 * 2 + 1] = 0xbff0000000000000;
                  local_1c8 = (double)(uVar24 & 0xffffffff);
                  local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar15);
                  local_1bc = uVar15;
                }
                else {
                  local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar16);
                  local_1bc = uVar16;
                }
              }
            }
            iVar13 = (int)uStack_150;
          }
          lVar19 = lVar19 + 1;
          lVar26 = lVar26 + 0x10;
        } while (lVar19 < iVar13);
      }
      if (local_158 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (local_138 != (double *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_146da62fc:
  if ((local_e0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146da6872 FUN_146da6872 body=791 status=ok
// SIG undefined FUN_146da6872(void)

bool FUN_146da6872(double *param_1,int param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  float fVar16;
  float fVar21;
  float fVar22;
  undefined1 auVar17 [16];
  float fVar23;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar35;
  float fVar36;
  undefined1 auVar33 [16];
  float fVar37;
  undefined1 auVar34 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar45 [16];
  float fVar46;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  float fVar47;
  undefined1 auStack_118 [32];
  float *local_f8;
  double *local_e8;
  double *local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar4 = (longlong *)param_1[0x12];
  uVar3 = *(ushort *)((longlong)plVar4 + 0x72);
  iVar13 = param_2 / (int)(uVar3 - 1) + param_2;
  dVar1 = (double)plVar4[0xc];
  lVar5 = *plVar4;
  lVar15 = (longlong)iVar13;
  dVar2 = (double)plVar4[0x10];
  iVar14 = iVar13 / (int)(uint)uVar3;
  auVar26._8_8_ = in_XMM2._8_8_;
  auVar26._0_8_ = (double)*(ushort *)(lVar5 + lVar15 * 2) * dVar2 + dVar1;
  auVar27._4_12_ = auVar26._4_12_;
  auVar27._0_4_ = (float)auVar26._0_8_;
  auVar38._4_12_ = in_XMM4._4_12_;
  auVar38._0_4_ = (float)((double)*(ushort *)(lVar5 + 2 + lVar15 * 2) * dVar2 + dVar1);
  auVar41._4_12_ = in_XMM5._4_12_;
  auVar41._0_4_ =
       (float)((double)*(ushort *)(lVar5 + ((ulonglong)uVar3 + lVar15) * 2) * dVar2 + dVar1);
  auVar24._4_12_ = unaff_XMM8._4_12_;
  auVar24._0_4_ = (float)iVar14;
  fVar31 = (float)(iVar13 % (int)(uint)uVar3);
  fVar46 = (float)((double)*(ushort *)(lVar5 + 2 + ((ulonglong)uVar3 + lVar15) * 2) * dVar2 + dVar1)
  ;
  auVar17 = insertps(ZEXT416((uint)fVar31),auVar24,0x1c);
  auVar42 = insertps(auVar17,auVar27,0x20);
  auVar43 = insertps(ZEXT416((uint)(fVar31 + 1.0)),auVar24,0x1c);
  auVar44 = insertps(auVar43,auVar38,0x20);
  auVar45._0_4_ = auVar24._0_4_ + 1.0;
  auVar45._4_12_ = auVar24._4_12_;
  auVar43 = insertps(ZEXT416((uint)fVar31),auVar45,0x1c);
  auVar33 = insertps(auVar43,auVar41,0x20);
  auVar24 = insertps(ZEXT416((uint)(fVar31 + 1.0)),auVar45,0x1c);
  auVar43._4_4_ = unaff_XMM9_Db;
  auVar43._0_4_ = fVar46;
  auVar43._8_4_ = unaff_XMM9_Dc;
  auVar43._12_4_ = unaff_XMM9_Dd;
  auVar43 = insertps(auVar24,auVar43,0x20);
  fVar31 = auVar41._0_4_;
  if (fVar46 <= auVar41._0_4_) {
    fVar31 = fVar46;
  }
  fVar47 = auVar38._0_4_;
  if (fVar31 <= auVar38._0_4_) {
    fVar47 = fVar31;
  }
  fVar31 = auVar27._0_4_;
  if (fVar47 <= auVar27._0_4_) {
    fVar31 = fVar47;
  }
  if (auVar41._0_4_ <= fVar46) {
    auVar41._0_4_ = fVar46;
  }
  if (auVar38._0_4_ <= auVar41._0_4_) {
    auVar38._0_4_ = auVar41._0_4_;
  }
  if (auVar27._0_4_ <= auVar38._0_4_) {
    auVar27._0_4_ = auVar38._0_4_;
  }
  auVar24 = insertps(auVar24,auVar27,0x20);
  auVar6._4_4_ = (int)((ulonglong)auVar26._0_8_ >> 0x20);
  auVar6._0_4_ = fVar31;
  auVar6._8_4_ = in_XMM2._8_4_;
  auVar6._12_4_ = in_XMM2._12_4_;
  auVar17 = insertps(auVar17,auVar6,0x20);
  fVar31 = *(float *)(plVar4 + 10);
  fVar46 = *(float *)((longlong)plVar4 + 0x54);
  fVar47 = *(float *)(plVar4 + 0xb);
  fVar7 = *(float *)((longlong)plVar4 + 0x5c);
  local_d8 = auVar42._0_4_ * fVar31;
  fStack_d4 = auVar42._4_4_ * fVar46;
  fStack_d0 = auVar42._8_4_ * fVar47;
  fStack_cc = auVar42._12_4_ * fVar7;
  local_c8 = auVar44._0_4_ * fVar31;
  fStack_c4 = auVar44._4_4_ * fVar46;
  fStack_c0 = auVar44._8_4_ * fVar47;
  fStack_bc = auVar44._12_4_ * fVar7;
  local_b8 = auVar33._0_4_ * fVar31;
  fStack_b4 = auVar33._4_4_ * fVar46;
  fStack_b0 = auVar33._8_4_ * fVar47;
  fStack_ac = auVar33._12_4_ * fVar7;
  local_a8 = auVar43._0_4_ * fVar31;
  fStack_a4 = auVar43._4_4_ * fVar46;
  fStack_a0 = auVar43._8_4_ * fVar47;
  fStack_9c = auVar43._12_4_ * fVar7;
  auVar33._0_8_ = CONCAT44(auVar17._4_4_ * fVar46,auVar17._0_4_ * fVar31);
  auVar33._8_4_ = auVar17._8_4_ * fVar47;
  auVar33._12_4_ = auVar17._12_4_ * fVar7;
  auVar17._0_4_ = auVar24._0_4_ * fVar31;
  auVar17._4_4_ = auVar24._4_4_ * fVar46;
  auVar17._8_4_ = auVar24._8_4_ * fVar47;
  auVar17._12_4_ = auVar24._12_4_ * fVar7;
  auVar42._8_4_ = auVar33._8_4_;
  auVar42._0_8_ = auVar33._0_8_;
  auVar42._12_4_ = auVar33._12_4_;
  auVar24 = minps(auVar42,auVar17);
  auVar43 = maxps(auVar33,auVar17);
  fVar31 = *(float *)(param_1 + 8);
  fVar46 = *(float *)((longlong)param_1 + 0x44);
  fVar47 = *(float *)(param_1 + 9);
  fVar7 = *(float *)((longlong)param_1 + 0x4c);
  uVar8 = *(uint *)(param_1 + 0xe);
  uVar9 = *(uint *)((longlong)param_1 + 0x74);
  uVar10 = *(uint *)(param_1 + 0xf);
  uVar11 = *(uint *)((longlong)param_1 + 0x7c);
  fVar32 = auVar24._0_4_ - *(float *)(param_1 + 0x10);
  fVar35 = auVar24._4_4_ - *(float *)((longlong)param_1 + 0x84);
  fVar36 = auVar24._8_4_ - *(float *)(param_1 + 0x11);
  fVar37 = auVar24._12_4_ - *(float *)((longlong)param_1 + 0x8c);
  fVar16 = auVar43._0_4_ + *(float *)(param_1 + 0x10);
  fVar21 = auVar43._4_4_ + *(float *)((longlong)param_1 + 0x84);
  fVar22 = auVar43._8_4_ + *(float *)(param_1 + 0x11);
  fVar23 = auVar43._12_4_ + *(float *)((longlong)param_1 + 0x8c);
  auVar44._0_4_ = -(uint)(fVar16 < fVar31 || fVar31 < fVar32) & uVar8;
  auVar44._4_4_ = -(uint)(fVar21 < fVar46 || fVar46 < fVar35) & uVar9;
  auVar44._8_4_ = -(uint)(fVar22 < fVar47 || fVar47 < fVar36) & uVar10;
  auVar44._12_4_ = -(uint)(fVar23 < fVar7 || fVar7 < fVar37) & uVar11;
  iVar13 = movmskps(iVar14,auVar44);
  local_e8 = param_1;
  local_e0 = param_3;
  if (iVar13 == 0) {
    auVar25._0_4_ = (float)*param_3;
    auVar25._4_4_ = auVar25._0_4_;
    auVar25._8_4_ = auVar25._0_4_;
    auVar25._12_4_ = auVar25._0_4_;
    auVar39._0_8_ =
         CONCAT44(~uVar9 & (uint)((fVar35 - fVar46) * *(float *)((longlong)param_1 + 0x54)),
                  ~uVar8 & (uint)((fVar32 - fVar31) * *(float *)(param_1 + 10)));
    auVar39._8_4_ = ~uVar10 & (uint)((fVar36 - fVar47) * *(float *)(param_1 + 0xb));
    auVar39._12_4_ = ~uVar11 & (uint)((fVar37 - fVar7) * *(float *)((longlong)param_1 + 0x5c));
    auVar34._0_4_ = ~uVar8 & (uint)((fVar16 - fVar31) * *(float *)(param_1 + 10));
    auVar34._4_4_ = ~uVar9 & (uint)((fVar21 - fVar46) * *(float *)((longlong)param_1 + 0x54));
    auVar34._8_4_ = ~uVar10 & (uint)((fVar22 - fVar47) * *(float *)(param_1 + 0xb));
    auVar34._12_4_ = ~uVar11 & (uint)((fVar23 - fVar7) * *(float *)((longlong)param_1 + 0x5c));
    auVar28._0_4_ = uVar8 & (uint)auVar25._0_4_;
    auVar28._4_4_ = uVar9 & (uint)auVar25._0_4_;
    auVar28._8_4_ = uVar10 & (uint)auVar25._0_4_;
    auVar28._12_4_ = uVar11 & (uint)auVar25._0_4_;
    auVar18._8_4_ = auVar39._8_4_;
    auVar18._0_8_ = auVar39._0_8_;
    auVar18._12_4_ = auVar39._12_4_;
    auVar43 = minps(auVar18,auVar28 | auVar34);
    auVar24 = maxps(auVar39,auVar28 | auVar34);
    auVar19._12_4_ = auVar43._12_4_;
    auVar29._0_8_ = auVar43._4_8_;
    auVar29._8_4_ = auVar43._0_4_;
    auVar29._12_4_ = auVar19._12_4_;
    auVar17 = maxps(auVar43,auVar29);
    auVar19._4_4_ = auVar43._0_4_;
    auVar19._0_4_ = auVar43._8_4_;
    auVar19._8_4_ = auVar43._4_4_;
    auVar43 = maxps(auVar17,auVar19);
    auVar17 = maxps(auVar43,ZEXT816(0));
    auVar40._12_4_ = auVar24._12_4_;
    auVar20._0_8_ = auVar24._4_8_;
    auVar20._8_4_ = auVar24._0_4_;
    auVar20._12_4_ = auVar40._12_4_;
    auVar43 = minps(auVar24,auVar20);
    auVar40._4_4_ = auVar24._0_4_;
    auVar40._0_4_ = auVar24._8_4_;
    auVar40._8_4_ = auVar24._4_4_;
    auVar43 = minps(auVar43,auVar40);
    auVar43 = minps(auVar43,auVar25);
    auVar30._4_4_ = -(uint)(auVar43._4_4_ < auVar17._4_4_);
    auVar30._0_4_ = -(uint)(auVar43._0_4_ < auVar17._0_4_);
    auVar30._8_4_ = -(uint)(auVar43._8_4_ < auVar17._8_4_);
    auVar30._12_4_ = -(uint)(auVar43._12_4_ < auVar17._12_4_);
    iVar13 = movmskps(0,auVar30);
    if (iVar13 == 0) {
      local_f8 = &local_a8;
      cVar12 = FUN_146da6c8c(&local_e8,param_2 * 2,&local_d8,&local_c8);
      if (cVar12 != '\0') {
        local_f8 = &local_b8;
        FUN_146da6c8c(&local_e8,param_2 * 2 | 1,&local_d8,&local_a8);
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return 0.0 < *param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146da6b8a FUN_146da6b8a body=257 status=ok
// SIG undefined FUN_146da6b8a(void)

void FUN_146da6b8a(longlong *param_1,ulonglong *param_2,int *param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  if (0 < param_4) {
    lVar2 = *param_1;
    uVar11 = *param_2;
    uVar8 = uVar11 >> 0x20;
    while( true ) {
      uVar10 = (int)uVar11 + *param_3;
      uVar11 = (ulonglong)uVar10;
      if ((int)uVar10 < 0) break;
      uVar7 = (int)uVar8 + param_3[1];
      uVar8 = (ulonglong)uVar7;
      if ((int)uVar7 < 0) {
        return;
      }
      if (*(int *)(lVar2 + 0xd0) <= (int)uVar10) {
        return;
      }
      if (*(int *)(lVar2 + 0xd4) <= (int)uVar7) {
        return;
      }
      iVar5 = *(int *)param_1[1] * uVar7;
      uVar9 = iVar5 + uVar10;
      uVar6 = iVar5 + uVar10 + 7;
      if (-1 < (int)uVar9) {
        uVar6 = uVar9;
      }
      lVar3 = *(longlong *)((int *)param_1[1] + 2);
      bVar1 = *(byte *)(lVar3 + ((int)uVar6 >> 3));
      if ((bVar1 >> (uVar9 & 7) & 1) == 0) {
        *(byte *)(lVar3 + ((int)uVar6 >> 3)) = (byte)(1 << ((byte)uVar9 & 7)) | bVar1;
        plVar4 = (longlong *)param_1[2];
        iVar5 = (int)plVar4[1];
        *(uint *)(plVar4 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)plVar4 + 0xc) < iVar5 + 1U) {
          FUN_146da6fc0(plVar4,iVar5);
        }
        lVar3 = *plVar4;
        *(ulonglong *)(lVar3 + (longlong)iVar5 * 0x10) = CONCAT44(uVar7,uVar10);
        *(undefined8 *)(lVar3 + 8 + (longlong)iVar5 * 0x10) = 0;
      }
      param_4 = param_4 + -1;
      if (param_4 == 0) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 146da6c8c FUN_146da6c8c body=819 status=ok
// SIG undefined FUN_146da6c8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_146da6c8c(undefined8 *param_1,int param_2,float *param_3,float *param_4,float *param_5)

{
  double *pdVar1;
  double dVar2;
  bool bVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_148 [32];
  double *local_128;
  float local_120;
  float *local_118;
  float *local_110;
  float *local_108;
  undefined1 local_100;
  undefined *local_f8;
  undefined8 *local_e8;
  undefined8 local_e0;
  code *local_d8;
  double local_d0;
  float local_c8;
  undefined4 local_c4;
  code *local_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  pdVar1 = (double *)*param_1;
  if ((*pdVar1 != 0.0) || (NAN(*pdVar1))) {
    local_88 = *param_3;
    fStack_84 = param_3[1];
    fStack_80 = param_3[2];
    fStack_7c = param_3[3];
    local_48 = *param_5 - local_88;
    fStack_44 = param_5[1] - fStack_84;
    fStack_40 = param_5[2] - fStack_80;
    fStack_3c = param_5[3] - fStack_7c;
    local_58 = *param_4 - local_88;
    fStack_54 = param_4[1] - fStack_84;
    fStack_50 = param_4[2] - fStack_80;
    fStack_4c = param_4[3] - fStack_7c;
    local_e8 = &local_68;
    local_68 = 0;
    uStack_60 = 0;
    fVar5 = (float)pdVar1[0x16];
    fVar7 = (float)pdVar1[0x17];
    fVar10 = (float)pdVar1[0x14];
    fVar11 = (float)pdVar1[0x15];
    fVar6 = fVar10 * fVar10 + fVar11 * fVar11;
    fVar8 = fVar5 * fVar5 + fVar7 * fVar7;
    auVar15._0_4_ = fVar8 + fVar6;
    auVar15._4_4_ = fVar8 + fVar6;
    auVar15._8_4_ = fVar6 + fVar8;
    auVar15._12_4_ = fVar6 + fVar8;
    auVar16 = sqrtps(auVar15,auVar15);
    auVar16 = divps(_DAT_1499314a0,auVar16);
    auVar17._0_4_ = auVar16._0_4_ * fVar10;
    auVar17._4_4_ = auVar16._4_4_ * fVar11;
    auVar17._8_4_ = auVar16._8_4_ * fVar5;
    auVar17._12_4_ = auVar16._12_4_ * fVar7;
    auVar16._4_4_ = -(uint)(1e-08 <= auVar15._4_4_);
    auVar16._0_4_ = -(uint)(1e-08 <= auVar15._0_4_);
    auVar16._8_4_ = -(uint)(1e-08 <= auVar15._8_4_);
    auVar16._12_4_ = -(uint)(1e-08 <= auVar15._12_4_);
    local_78 = blendvps(_DAT_149932320,auVar17,auVar16);
    local_88 = (float)pdVar1[0x18] - local_88;
    fStack_84 = (float)pdVar1[0x19] - fStack_84;
    fStack_80 = (float)pdVar1[0x1a] - fStack_80;
    fStack_7c = 0.0 - fStack_7c;
    local_100 = *(undefined1 *)(pdVar1 + 0x27);
    local_120 = (float)*(double *)param_1[1];
    local_128 = pdVar1 + 0xc;
    local_d0 = pdVar1[0x20];
    local_c8 = (float)*(double *)((longlong)local_d0 + 0x10);
    local_c4 = 0;
    local_c0 = FUN_144a12d46;
    local_e0 = 0;
    local_d8 = FUN_14014b546;
    local_f8 = &DAT_149f52c20;
    local_108 = &local_b8;
    local_110 = &local_a8;
    local_118 = &local_8c;
    cVar4 = FUN_1448541f8();
    bVar3 = true;
    if (cVar4 != '\0') {
      dVar2 = (double)local_8c;
      if (dVar2 < *pdVar1) {
        if (-2 < param_2) {
          if ((param_2 / 2 < *(int *)((longlong)pdVar1[0x12] + 0x28)) &&
             (*(char *)(*(longlong *)((longlong)pdVar1[0x12] + 0x20) + (longlong)(param_2 / 2)) ==
              -1)) goto LAB_146da6cc3;
        }
        pdVar1[4] = (double)local_b8;
        pdVar1[5] = (double)fStack_b4;
        pdVar1[6] = (double)fStack_b0;
        fVar5 = param_3[1];
        fVar6 = param_3[2];
        pdVar1[1] = (double)(*param_3 + local_a8);
        pdVar1[2] = (double)(fVar5 + fStack_a4);
        pdVar1[3] = (double)(fVar6 + fStack_a0);
        *pdVar1 = dVar2;
        *(int *)(pdVar1 + 7) = param_2;
        bVar3 = 0.0 < local_8c;
        if (!bVar3) {
          fVar5 = *param_4 - *param_3;
          fVar6 = param_4[1] - param_3[1];
          fVar7 = param_4[2] - param_3[2];
          fVar8 = param_4[3] - param_3[3];
          fVar10 = *param_5 - *param_3;
          fVar12 = param_5[1] - param_3[1];
          fVar13 = param_5[2] - param_3[2];
          fVar14 = param_5[3] - param_3[3];
          fVar11 = fVar12 * fVar5 - fVar6 * fVar10;
          fVar6 = fVar13 * fVar6 - fVar7 * fVar12;
          fVar10 = fVar10 * fVar7 - fVar5 * fVar13;
          fVar12 = fVar14 * fVar8 - fVar8 * fVar14;
          fVar12 = fVar12 * fVar12;
          fVar5 = fVar10 * fVar10 + fVar6 * fVar6;
          fVar7 = fVar6 * fVar6 + fVar10 * fVar10;
          fVar8 = fVar12 + fVar11 * fVar11;
          fVar12 = fVar11 * fVar11 + fVar12;
          auVar9._0_4_ = fVar8 + fVar5;
          auVar9._4_4_ = fVar12 + fVar7;
          auVar9._8_4_ = fVar5 + fVar8;
          auVar9._12_4_ = fVar7 + fVar12;
          auVar16 = sqrtps(auVar9,auVar9);
          auVar16 = divps(_DAT_149e1ef10,auVar16);
          pdVar1[4] = (double)(auVar16._0_4_ * fVar6);
          pdVar1[5] = (double)(auVar16._4_4_ * fVar10);
          pdVar1[6] = (double)(auVar16._8_4_ * fVar11);
          dVar2 = 0.0;
        }
        *(double *)param_1[1] = dVar2;
      }
    }
  }
  else {
    bVar3 = false;
  }
LAB_146da6cc3:
  if ((local_38 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146da6fc0 FUN_146da6fc0 body=132 status=ok
// SIG undefined FUN_146da6fc0(void)

void FUN_146da6fc0(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146da7046 FUN_146da7046 body=532 status=ok
// SIG undefined FUN_146da7046(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146da7046(undefined8 *param_1,undefined8 param_2,undefined8 param_3,double *param_4,
                  undefined8 *param_5,double *param_6,double param_7,undefined8 param_8,
                  undefined8 param_9)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined8 *puVar6;
  float fVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  
  *param_1 = 0x7fefffffffffffff;
  param_1[1] = 0x7fefffffffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  param_1[9] = param_2;
  puVar6 = param_1 + 10;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *param_5;
    param_5 = param_5 + 1;
    puVar6 = puVar6 + 1;
  }
  param_1[0x16] = param_3;
  param_1[0x17] = param_8;
  param_1[0x18] = param_9;
  dVar8 = (param_4[5] - param_4[2]) * 0.5;
  dVar10 = (param_4[4] - param_4[1]) * 0.5;
  dVar1 = (param_4[3] - *param_4) * 0.5;
  auVar2._4_4_ = (float)(param_4[1] + dVar10 + (double)param_1[0xf]);
  auVar2._0_4_ = (float)(*param_4 + dVar1 + (double)param_1[0xe]);
  auVar2._8_4_ = (float)(param_4[2] + dVar8 + (double)param_1[0x10]);
  auVar2._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x1a) = auVar2;
  fVar11 = (float)(double)param_1[0x10];
  fVar7 = (float)(double)param_1[0xe];
  auVar15._4_4_ = (float)(double)param_1[0xf];
  auVar15._0_4_ = fVar7;
  auVar15._8_4_ = fVar11;
  auVar15._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x1c) = auVar15;
  fVar14 = (float)param_6[2];
  fVar17 = (float)*param_6;
  fVar18 = (float)param_6[1];
  auVar3._4_4_ = fVar18;
  auVar3._0_4_ = fVar17;
  auVar3._8_4_ = fVar14;
  auVar3._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x22) = auVar3;
  *(float *)(param_1 + 0x1e) = (float)param_7 * fVar17 + fVar7;
  *(float *)((longlong)param_1 + 0xf4) = (float)param_7 * fVar18 + (float)(double)param_1[0xf];
  *(float *)(param_1 + 0x1f) = (float)param_7 * fVar14 + fVar11;
  *(float *)((longlong)param_1 + 0xfc) = (float)param_7 * 0.0 + 0.0;
  fVar7 = (float)(double)param_1[0xc];
  fVar11 = (float)(double)param_1[0xd];
  fVar12 = (float)(double)param_1[10];
  fVar13 = (float)(double)param_1[0xb];
  *(uint *)(param_1 + 0x26) = -(uint)(ABS(fVar17) < 1e-08);
  *(uint *)((longlong)param_1 + 0x134) = -(uint)(ABS(fVar18) < 1e-08);
  *(uint *)(param_1 + 0x27) = -(uint)(ABS(fVar14) < 1e-08);
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0xffffffff;
  auVar15 = _DAT_1499314a0;
  auVar4._4_4_ = fVar18;
  auVar4._0_4_ = fVar17;
  auVar4._8_4_ = fVar14;
  auVar4._12_4_ = 0;
  auVar19 = divps(_DAT_1499314a0,auVar4);
  *(uint *)(param_1 + 0x20) = ~-(uint)(ABS(fVar17) < 1e-08) & auVar19._0_4_;
  *(uint *)((longlong)param_1 + 0x104) = ~-(uint)(ABS(fVar18) < 1e-08) & auVar19._4_4_;
  *(uint *)(param_1 + 0x21) = ~-(uint)(ABS(fVar14) < 1e-08) & auVar19._8_4_;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  fVar14 = fVar12 * fVar12 + fVar13 * fVar13;
  fVar17 = fVar7 * fVar7 + fVar11 * fVar11;
  *(float *)(param_1 + 0x28) = (float)ABS(dVar1);
  *(float *)((longlong)param_1 + 0x144) = (float)ABS(dVar10);
  *(float *)(param_1 + 0x29) = (float)ABS(dVar8);
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  auVar9._0_4_ = fVar17 + fVar14;
  auVar9._4_4_ = fVar17 + fVar14;
  auVar9._8_4_ = fVar14 + fVar17;
  auVar9._12_4_ = fVar14 + fVar17;
  auVar19 = sqrtps(auVar9,auVar9);
  auVar15 = divps(auVar15,auVar19);
  auVar16._0_4_ = auVar15._0_4_ * fVar12;
  auVar16._4_4_ = auVar15._4_4_ * fVar13;
  auVar16._8_4_ = auVar15._8_4_ * fVar7;
  auVar16._12_4_ = auVar15._12_4_ * fVar11;
  auVar19._4_4_ = -(uint)(1e-08 <= auVar9._4_4_);
  auVar19._0_4_ = -(uint)(1e-08 <= auVar9._0_4_);
  auVar19._8_4_ = -(uint)(1e-08 <= auVar9._8_4_);
  auVar19._12_4_ = -(uint)(1e-08 <= auVar9._12_4_);
  auVar15 = blendvps(_DAT_149932320,auVar16,auVar19);
  *(undefined1 (*) [16])(param_1 + 0x24) = auVar15;
  return;
}



// FUNCTION 146da725a FUN_146da725a body=2375 status=ok
// SIG undefined FUN_146da725a(void)

void FUN_146da725a(double param_1,double *param_2,double *param_3,double param_4,double *param_5,
                  undefined8 param_6)

{
  byte *pbVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  byte bVar8;
  double dVar9;
  char cVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  size_t _Size;
  undefined8 uVar25;
  longlong lVar26;
  uint uVar27;
  bool bVar28;
  double dVar29;
  undefined1 auVar30 [16];
  double *pdVar31;
  double dVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStack_1e8 [32];
  double local_1c8;
  uint local_1bc;
  ulonglong local_1b8;
  double *local_1b0;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  ulonglong local_198;
  int local_18c;
  int local_188;
  int local_184;
  uint local_180;
  uint local_17c;
  longlong local_178;
  double local_170;
  double *local_168;
  undefined8 **local_160;
  undefined8 *local_158;
  undefined8 uStack_150;
  double local_140;
  double *local_138;
  int local_130;
  uint local_128;
  uint local_124;
  double local_120;
  double local_118 [4];
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  dVar29 = *param_5;
  dVar2 = param_5[1];
  local_118[3] = *(double *)((longlong)param_1 + 0x138) - dVar29;
  local_f0 = *(double *)((longlong)param_1 + 0x150) + dVar29;
  local_e8 = *(double *)((longlong)param_1 + 0x158) + dVar2;
  local_f8 = *(double *)((longlong)param_1 + 0x140) - dVar2;
  dVar3 = *param_3;
  dVar4 = param_3[1];
  dVar5 = *(double *)((longlong)param_1 + 0x50);
  dVar6 = *(double *)((longlong)param_1 + 0x58);
  dVar32 = (double)(-(ulonglong)(0.0 < dVar4) & 0x3ff0000000000000 |
                   (ulonglong)
                   (~(uint)(-(ulonglong)(0.0 < dVar4) >> 0x20) &
                   (uint)(-(ulonglong)(dVar4 < 0.0) >> 0x20) & 0xbff00000) << 0x20) * dVar2;
  local_170 = (double)(-(ulonglong)(0.0 < dVar3) & 0x3ff0000000000000 |
                      (ulonglong)
                      (~(uint)(-(ulonglong)(0.0 < dVar3) >> 0x20) &
                      (uint)(-(ulonglong)(dVar3 < 0.0) >> 0x20) & 0xbff00000) << 0x20) * dVar29;
  local_138 = (double *)(param_2[1] - dVar32);
  local_140 = *param_2 - local_170;
  local_168 = (double *)(dVar4 * param_4 + param_2[1] + dVar32);
  local_170 = dVar3 * param_4 + *param_2 + local_170;
  local_118[0] = dVar29;
  local_118[1] = dVar2;
  cVar10 = FUN_1448596be();
  if (cVar10 != '\0') {
    dVar3 = *(double *)((longlong)param_1 + 0xb0);
    dVar4 = *(double *)((longlong)param_1 + 0xb8);
    dVar32 = *(double *)((longlong)param_1 + 0xe0);
    dVar7 = *(double *)((longlong)param_1 + 0xd8);
    uVar15 = (uint)((local_140 / dVar5 - dVar3) / dVar7);
    uVar20 = (uint)(((double)local_138 / dVar6 - dVar4) / dVar32);
    iVar13 = *(int *)((longlong)param_1 + 0xd0);
    uVar16 = iVar13 - 1;
    uVar23 = 0;
    if (0 < (int)uVar15) {
      uVar23 = uVar15;
    }
    if (iVar13 <= (int)uVar15) {
      uVar23 = uVar16;
    }
    iVar11 = *(int *)((longlong)param_1 + 0xd4);
    uVar15 = 0;
    if (0 < (int)uVar20) {
      uVar15 = uVar20;
    }
    uVar27 = iVar11 - 1;
    if (iVar11 <= (int)uVar20) {
      uVar15 = uVar27;
    }
    uVar21 = (uint)((local_170 / dVar5 - dVar3) / dVar7);
    uVar22 = (uint)(((double)local_168 / dVar6 - dVar4) / dVar32);
    uVar20 = 0;
    if (0 < (int)uVar21) {
      uVar20 = uVar21;
    }
    if (iVar13 <= (int)uVar21) {
      uVar20 = uVar16;
    }
    uVar21 = 0;
    if (0 < (int)uVar22) {
      uVar21 = uVar22;
    }
    if (iVar11 <= (int)uVar22) {
      uVar21 = uVar27;
    }
    uVar22 = -(uVar20 - uVar23);
    if ((int)uVar22 < 0) {
      uVar22 = uVar20 - uVar23;
    }
    uVar18 = -(uVar21 - uVar15);
    if ((int)uVar18 < 0) {
      uVar18 = uVar21 - uVar15;
    }
    local_120 = param_4;
    if (uVar18 == 0 && uVar22 == 0) {
      uVar33 = SUB84(local_140,0);
      uVar34 = (int)((ulonglong)local_140 >> 0x20);
      if (local_170 <= local_140) {
        uVar33 = SUB84(local_170,0);
        uVar34 = (int)((ulonglong)local_170 >> 0x20);
      }
      uVar35 = SUB84(local_138,0);
      uVar36 = (undefined4)((ulonglong)local_138 >> 0x20);
      if ((double)local_168 <= (double)local_138) {
        uVar35 = SUB84(local_168,0);
        uVar36 = (undefined4)((ulonglong)local_168 >> 0x20);
      }
      uVar15 = (uint)((((double)CONCAT44(uVar34,uVar33) - dVar29) / dVar5 - dVar3) / dVar7);
      uVar20 = (uint)((((double)CONCAT44(uVar36,uVar35) - dVar2) / dVar6 - dVar4) / dVar32);
      uVar23 = 0;
      if (0 < (int)uVar15) {
        uVar23 = uVar15;
      }
      dVar9 = local_140;
      if (local_140 <= local_170) {
        dVar9 = local_170;
      }
      if (iVar13 <= (int)uVar15) {
        uVar23 = uVar16;
      }
      uVar15 = 0;
      if (0 < (int)uVar20) {
        uVar15 = uVar20;
      }
      if (iVar11 <= (int)uVar20) {
        uVar15 = uVar27;
      }
      pdVar31 = local_138;
      if ((double)local_138 <= (double)local_168) {
        pdVar31 = local_168;
      }
      uVar21 = (uint)(((dVar9 + dVar29) / dVar5 - dVar3) / dVar7);
      uVar22 = (uint)((((double)pdVar31 + dVar2) / dVar6 - dVar4) / dVar32);
      uVar20 = 0;
      if (0 < (int)uVar21) {
        uVar20 = uVar21;
      }
      if (iVar13 <= (int)uVar21) {
        uVar20 = uVar16;
      }
      uVar16 = 0;
      if (0 < (int)uVar22) {
        uVar16 = uVar22;
      }
      if (iVar11 <= (int)uVar22) {
        uVar16 = uVar27;
      }
      if ((int)uVar15 <= (int)uVar16) {
        do {
          uVar27 = uVar23;
          if ((int)uVar23 <= (int)uVar20) {
            do {
              cVar10 = FUN_146da7ba2(param_6,(*(ushort *)((longlong)param_1 + 0x92) - 1) * uVar15 +
                                             uVar27,&local_120);
              if (cVar10 == '\0') goto LAB_146da762c;
              uVar27 = uVar27 + 1;
            } while (uVar20 + 1 != uVar27);
          }
          bVar28 = uVar15 != uVar16;
          uVar15 = uVar15 + 1;
        } while (bVar28);
      }
    }
    else {
      local_1bc = CONCAT31(local_1bc._1_3_,(int)uVar23 < (int)uVar20);
      local_1a4 = CONCAT31(local_1a4._1_3_,(int)uVar15 < (int)uVar21);
      uVar16 = uVar22 - uVar18;
      local_198 = (ulonglong)uVar16;
      local_19c = (uint)(uVar22 < uVar18 || uVar16 == 0);
      local_1a0 = (uint)(uVar22 >= uVar18 && uVar16 != 0);
      local_1c8 = *(double *)((longlong)param_1 + 0xd0);
      iVar11 = (int)((ulonglong)local_1c8 >> 0x20) * SUB84(local_1c8,0);
      iVar13 = iVar11 + 7;
      if (-1 < iVar11) {
        iVar13 = iVar11;
      }
      local_130 = (iVar13 >> 3) + 1;
      _Size = (size_t)local_130;
      local_1b8 = (ulonglong)uVar23;
      local_140 = local_1c8;
      local_128 = local_19c;
      local_124 = local_1a0;
      local_1b0 = (double *)FUN_14001cc68(_Size + (_Size == 0));
      lVar19 = 0;
      local_138 = local_1b0;
      memset(local_1b0,0,_Size);
      local_158 = (undefined8 *)0x0;
      uVar25 = CONCAT44(uVar15,(undefined4)local_1b8);
      uStack_150 = 1;
      FUN_146da8420(&local_158,0);
      *local_158 = uVar25;
      uVar16 = (uint)local_1b8;
      iVar11 = uVar15 * local_1c8._0_4_ + uVar16;
      iVar13 = uVar15 * local_1c8._0_4_ + uVar16 + 7;
      if (-1 < iVar11) {
        iVar13 = iVar11;
      }
      local_158[1] = 0xbff0000000000000;
      pbVar1 = (byte *)((longlong)local_1b0 + (longlong)(iVar13 >> 3));
      *pbVar1 = *pbVar1 | (byte)(1 << ((byte)iVar11 & 7));
      if (0 < (int)uStack_150) {
        local_184 = -uVar18;
        local_188 = (local_1bc & 0xff) * 2 + -1;
        local_18c = (local_1a4 & 0xff) * 2 + -1;
        local_19c = -local_19c;
        local_1a0 = -local_1a0;
        lVar26 = 8;
        local_1c8 = (double)(local_1b8 & 0xffffffff);
        local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar15);
        uVar24 = local_1b8;
        iVar13 = (int)uStack_150;
        local_1bc = uVar15;
        local_1a8 = uVar16;
        do {
          dVar29 = *(double *)((longlong)local_158 + lVar26);
          if (dVar29 <= local_120) {
            local_178 = *(longlong *)((longlong)local_158 + lVar26 + -8);
            local_168 = &local_140;
            local_160 = &local_158;
            iVar11 = (int)local_178;
            iVar13 = 0;
            if (0 < iVar11) {
              iVar13 = iVar11;
            }
            if (*(int *)((longlong)param_1 + 0xd0) <= iVar11) {
              iVar13 = *(int *)((longlong)param_1 + 0xd0) + -1;
            }
            iVar14 = (int)((ulonglong)local_178 >> 0x20);
            iVar17 = 0;
            if (iVar14 != 0 && -1 < local_178) {
              iVar17 = iVar14;
            }
            if (*(int *)((longlong)param_1 + 0xd4) <= iVar14) {
              iVar17 = *(int *)((longlong)param_1 + 0xd4) + -1;
            }
            local_170 = param_1;
            if (((iVar13 == iVar11) && (iVar17 == iVar14)) &&
               (local_1b8 = uVar24,
               cVar10 = FUN_146da7ba2(param_6,(*(ushort *)((longlong)param_1 + 0x92) - 1) * iVar14 +
                                              iVar11,&local_120), uVar24 = local_1b8, cVar10 == '\0'
               )) break;
            if (dVar29 < 0.0) {
              uVar12 = (ulonglong)((local_1a0 & 1) << 3);
              auVar30._0_8_ =
                   *(double *)((longlong)local_118 + uVar12) /
                   ABS(*(double *)((longlong)param_1 + 0x50 + uVar12));
              auVar30._8_8_ = 0;
              if (0.0 <= auVar30._0_8_) {
                auVar30 = roundpd(auVar30,auVar30,2);
                dVar29 = auVar30._0_8_;
              }
              else {
                auVar30 = roundpd(auVar30,auVar30,1);
                dVar29 = auVar30._0_8_;
              }
              local_1a4 = (uint)dVar29;
              local_1b8 = uVar24;
              FUN_146da7ed4(&local_170,&local_178,&local_128);
              local_180 = local_19c;
              local_17c = local_1a0;
              FUN_146da7ed4(&local_170,&local_178,&local_180,local_1a4);
              uVar24 = local_1b8;
              if ((local_1c8._0_4_ == uVar20) && ((uint)local_1b0 == uVar21)) {
                local_1c8 = (double)(ulonglong)uVar20;
                local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar21);
              }
              else {
                iVar13 = (int)local_198 * 2;
                if (local_184 <= iVar13) {
                  local_198 = (ulonglong)((int)local_198 - uVar18);
                  local_1a8 = local_1c8._0_4_ + local_188;
                  local_1c8 = (double)(ulonglong)local_1a8;
                  uVar24 = (ulonglong)local_1a8;
                }
                uVar16 = local_1bc;
                if (iVar13 <= (int)uVar22) {
                  local_198 = (ulonglong)((int)local_198 + uVar22);
                  uVar15 = (uint)local_1b0 + local_18c;
                  local_1c8 = (double)(ulonglong)local_1a8;
                  uVar16 = uVar15;
                }
                uVar27 = local_140._0_4_ * uVar16 + SUB84(local_1c8,0);
                uVar23 = local_140._0_4_ * uVar16 + SUB84(local_1c8,0) + 7;
                if (-1 < (int)uVar27) {
                  uVar23 = uVar27;
                }
                bVar8 = *(byte *)((longlong)local_138 + (longlong)((int)uVar23 >> 3));
                if ((bVar8 >> (uVar27 & 7) & 1) == 0) {
                  *(byte *)((longlong)local_138 + (longlong)((int)uVar23 >> 3)) =
                       (byte)(1 << ((byte)uVar27 & 7)) | bVar8;
                  local_1c8 = (double)(longlong)(int)uStack_150;
                  uVar16 = (int)uStack_150 + 1;
                  uStack_150 = CONCAT44(uStack_150._4_4_,uVar16);
                  if (uStack_150._4_4_ < uVar16) {
                    local_1b8 = uVar24;
                    FUN_146da8420(&local_158,local_1c8);
                    uVar24 = local_1b8;
                  }
                  local_1a8 = (uint)uVar24;
                  local_158[(longlong)local_1c8 * 2] =
                       uVar24 & 0xffffffff | (ulonglong)uVar15 << 0x20;
                  local_158[(longlong)local_1c8 * 2 + 1] = 0xbff0000000000000;
                  local_1c8 = (double)(uVar24 & 0xffffffff);
                  local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar15);
                  local_1bc = uVar15;
                }
                else {
                  local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar16);
                  local_1bc = uVar16;
                }
              }
            }
            iVar13 = (int)uStack_150;
          }
          lVar19 = lVar19 + 1;
          lVar26 = lVar26 + 0x10;
        } while (lVar19 < iVar13);
      }
      if (local_158 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (local_138 != (double *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_146da762c:
  if ((local_e0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146da7ba2 FUN_146da7ba2 body=817 status=ok
// SIG undefined FUN_146da7ba2(void)

undefined8 FUN_146da7ba2(longlong param_1,uint param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar22;
  float fVar23;
  undefined1 auVar18 [16];
  float fVar24;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar36;
  float fVar37;
  undefined1 auVar34 [16];
  float fVar38;
  undefined1 auVar35 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar46 [16];
  float fVar47;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  float fVar48;
  undefined1 auStack_118 [32];
  float *local_f8;
  longlong local_e8;
  double *local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar4 = *(longlong **)(param_1 + 0x48);
  if ((((int)param_2 < 0) || ((int)plVar4[5] <= (int)param_2)) ||
     (*(char *)(plVar4[4] + (ulonglong)param_2) != -1)) {
    uVar3 = *(ushort *)((longlong)plVar4 + 0x72);
    iVar13 = (int)param_2 / (int)(uVar3 - 1) + param_2;
    dVar1 = (double)plVar4[0xc];
    lVar5 = *plVar4;
    lVar15 = (longlong)iVar13;
    dVar2 = (double)plVar4[0x10];
    iVar14 = iVar13 / (int)(uint)uVar3;
    auVar27._8_8_ = in_XMM2._8_8_;
    auVar27._0_8_ = (double)*(ushort *)(lVar5 + lVar15 * 2) * dVar2 + dVar1;
    auVar28._4_12_ = auVar27._4_12_;
    auVar28._0_4_ = (float)auVar27._0_8_;
    auVar39._4_12_ = in_XMM4._4_12_;
    auVar39._0_4_ = (float)((double)*(ushort *)(lVar5 + 2 + lVar15 * 2) * dVar2 + dVar1);
    auVar42._4_12_ = in_XMM5._4_12_;
    auVar42._0_4_ =
         (float)((double)*(ushort *)(lVar5 + ((ulonglong)uVar3 + lVar15) * 2) * dVar2 + dVar1);
    auVar25._4_12_ = unaff_XMM8._4_12_;
    auVar25._0_4_ = (float)iVar14;
    fVar32 = (float)(iVar13 % (int)(uint)uVar3);
    fVar47 = (float)((double)*(ushort *)(lVar5 + 2 + ((ulonglong)uVar3 + lVar15) * 2) * dVar2 +
                    dVar1);
    auVar18 = insertps(ZEXT416((uint)fVar32),auVar25,0x1c);
    auVar43 = insertps(auVar18,auVar28,0x20);
    auVar44 = insertps(ZEXT416((uint)(fVar32 + 1.0)),auVar25,0x1c);
    auVar45 = insertps(auVar44,auVar39,0x20);
    auVar46._0_4_ = auVar25._0_4_ + 1.0;
    auVar46._4_12_ = auVar25._4_12_;
    auVar44 = insertps(ZEXT416((uint)fVar32),auVar46,0x1c);
    auVar34 = insertps(auVar44,auVar42,0x20);
    auVar25 = insertps(ZEXT416((uint)(fVar32 + 1.0)),auVar46,0x1c);
    auVar44._4_4_ = unaff_XMM9_Db;
    auVar44._0_4_ = fVar47;
    auVar44._8_4_ = unaff_XMM9_Dc;
    auVar44._12_4_ = unaff_XMM9_Dd;
    auVar44 = insertps(auVar25,auVar44,0x20);
    fVar32 = auVar42._0_4_;
    if (fVar47 <= auVar42._0_4_) {
      fVar32 = fVar47;
    }
    fVar48 = auVar39._0_4_;
    if (fVar32 <= auVar39._0_4_) {
      fVar48 = fVar32;
    }
    fVar32 = auVar28._0_4_;
    if (fVar48 <= auVar28._0_4_) {
      fVar32 = fVar48;
    }
    if (auVar42._0_4_ <= fVar47) {
      auVar42._0_4_ = fVar47;
    }
    if (auVar39._0_4_ <= auVar42._0_4_) {
      auVar39._0_4_ = auVar42._0_4_;
    }
    if (auVar28._0_4_ <= auVar39._0_4_) {
      auVar28._0_4_ = auVar39._0_4_;
    }
    auVar25 = insertps(auVar25,auVar28,0x20);
    auVar6._4_4_ = (int)((ulonglong)auVar27._0_8_ >> 0x20);
    auVar6._0_4_ = fVar32;
    auVar6._8_4_ = in_XMM2._8_4_;
    auVar6._12_4_ = in_XMM2._12_4_;
    auVar18 = insertps(auVar18,auVar6,0x20);
    fVar32 = *(float *)(plVar4 + 10);
    fVar47 = *(float *)((longlong)plVar4 + 0x54);
    fVar48 = *(float *)(plVar4 + 0xb);
    fVar7 = *(float *)((longlong)plVar4 + 0x5c);
    local_d8 = auVar43._0_4_ * fVar32;
    fStack_d4 = auVar43._4_4_ * fVar47;
    fStack_d0 = auVar43._8_4_ * fVar48;
    fStack_cc = auVar43._12_4_ * fVar7;
    local_c8 = auVar45._0_4_ * fVar32;
    fStack_c4 = auVar45._4_4_ * fVar47;
    fStack_c0 = auVar45._8_4_ * fVar48;
    fStack_bc = auVar45._12_4_ * fVar7;
    local_b8 = auVar34._0_4_ * fVar32;
    fStack_b4 = auVar34._4_4_ * fVar47;
    fStack_b0 = auVar34._8_4_ * fVar48;
    fStack_ac = auVar34._12_4_ * fVar7;
    local_a8 = auVar44._0_4_ * fVar32;
    fStack_a4 = auVar44._4_4_ * fVar47;
    fStack_a0 = auVar44._8_4_ * fVar48;
    fStack_9c = auVar44._12_4_ * fVar7;
    auVar34._0_8_ = CONCAT44(auVar18._4_4_ * fVar47,auVar18._0_4_ * fVar32);
    auVar34._8_4_ = auVar18._8_4_ * fVar48;
    auVar34._12_4_ = auVar18._12_4_ * fVar7;
    auVar18._0_4_ = auVar25._0_4_ * fVar32;
    auVar18._4_4_ = auVar25._4_4_ * fVar47;
    auVar18._8_4_ = auVar25._8_4_ * fVar48;
    auVar18._12_4_ = auVar25._12_4_ * fVar7;
    auVar43._8_4_ = auVar34._8_4_;
    auVar43._0_8_ = auVar34._0_8_;
    auVar43._12_4_ = auVar34._12_4_;
    auVar25 = minps(auVar43,auVar18);
    auVar44 = maxps(auVar34,auVar18);
    fVar32 = *(float *)(param_1 + 0xd0);
    fVar47 = *(float *)(param_1 + 0xd4);
    fVar48 = *(float *)(param_1 + 0xd8);
    fVar7 = *(float *)(param_1 + 0xdc);
    uVar8 = *(uint *)(param_1 + 0x130);
    uVar9 = *(uint *)(param_1 + 0x134);
    uVar10 = *(uint *)(param_1 + 0x138);
    uVar11 = *(uint *)(param_1 + 0x13c);
    fVar33 = auVar25._0_4_ - *(float *)(param_1 + 0x140);
    fVar36 = auVar25._4_4_ - *(float *)(param_1 + 0x144);
    fVar37 = auVar25._8_4_ - *(float *)(param_1 + 0x148);
    fVar38 = auVar25._12_4_ - *(float *)(param_1 + 0x14c);
    fVar17 = auVar44._0_4_ + *(float *)(param_1 + 0x140);
    fVar22 = auVar44._4_4_ + *(float *)(param_1 + 0x144);
    fVar23 = auVar44._8_4_ + *(float *)(param_1 + 0x148);
    fVar24 = auVar44._12_4_ + *(float *)(param_1 + 0x14c);
    auVar45._0_4_ = -(uint)(fVar17 < fVar32 || fVar32 < fVar33) & uVar8;
    auVar45._4_4_ = -(uint)(fVar22 < fVar47 || fVar47 < fVar36) & uVar9;
    auVar45._8_4_ = -(uint)(fVar23 < fVar48 || fVar48 < fVar37) & uVar10;
    auVar45._12_4_ = -(uint)(fVar24 < fVar7 || fVar7 < fVar38) & uVar11;
    iVar13 = movmskps(iVar14,auVar45);
    local_e8 = param_1;
    local_e0 = param_3;
    if (iVar13 == 0) {
      auVar26._0_4_ = (float)*param_3;
      auVar26._4_4_ = auVar26._0_4_;
      auVar26._8_4_ = auVar26._0_4_;
      auVar26._12_4_ = auVar26._0_4_;
      auVar40._0_8_ =
           CONCAT44(~uVar9 & (uint)((fVar36 - fVar47) * *(float *)(param_1 + 0x104)),
                    ~uVar8 & (uint)((fVar33 - fVar32) * *(float *)(param_1 + 0x100)));
      auVar40._8_4_ = ~uVar10 & (uint)((fVar37 - fVar48) * *(float *)(param_1 + 0x108));
      auVar40._12_4_ = ~uVar11 & (uint)((fVar38 - fVar7) * *(float *)(param_1 + 0x10c));
      auVar35._0_4_ = ~uVar8 & (uint)((fVar17 - fVar32) * *(float *)(param_1 + 0x100));
      auVar35._4_4_ = ~uVar9 & (uint)((fVar22 - fVar47) * *(float *)(param_1 + 0x104));
      auVar35._8_4_ = ~uVar10 & (uint)((fVar23 - fVar48) * *(float *)(param_1 + 0x108));
      auVar35._12_4_ = ~uVar11 & (uint)((fVar24 - fVar7) * *(float *)(param_1 + 0x10c));
      auVar29._0_4_ = uVar8 & (uint)auVar26._0_4_;
      auVar29._4_4_ = uVar9 & (uint)auVar26._0_4_;
      auVar29._8_4_ = uVar10 & (uint)auVar26._0_4_;
      auVar29._12_4_ = uVar11 & (uint)auVar26._0_4_;
      auVar19._8_4_ = auVar40._8_4_;
      auVar19._0_8_ = auVar40._0_8_;
      auVar19._12_4_ = auVar40._12_4_;
      auVar44 = minps(auVar19,auVar29 | auVar35);
      auVar25 = maxps(auVar40,auVar29 | auVar35);
      auVar20._12_4_ = auVar44._12_4_;
      auVar30._0_8_ = auVar44._4_8_;
      auVar30._8_4_ = auVar44._0_4_;
      auVar30._12_4_ = auVar20._12_4_;
      auVar18 = maxps(auVar44,auVar30);
      auVar20._4_4_ = auVar44._0_4_;
      auVar20._0_4_ = auVar44._8_4_;
      auVar20._8_4_ = auVar44._4_4_;
      auVar44 = maxps(auVar18,auVar20);
      auVar18 = maxps(auVar44,ZEXT816(0));
      auVar41._12_4_ = auVar25._12_4_;
      auVar21._0_8_ = auVar25._4_8_;
      auVar21._8_4_ = auVar25._0_4_;
      auVar21._12_4_ = auVar41._12_4_;
      auVar44 = minps(auVar25,auVar21);
      auVar41._4_4_ = auVar25._0_4_;
      auVar41._0_4_ = auVar25._8_4_;
      auVar41._8_4_ = auVar25._4_4_;
      auVar44 = minps(auVar44,auVar41);
      auVar44 = minps(auVar44,auVar26);
      auVar31._4_4_ = -(uint)(auVar44._4_4_ < auVar18._4_4_);
      auVar31._0_4_ = -(uint)(auVar44._0_4_ < auVar18._0_4_);
      auVar31._8_4_ = -(uint)(auVar44._8_4_ < auVar18._8_4_);
      auVar31._12_4_ = -(uint)(auVar44._12_4_ < auVar18._12_4_);
      iVar13 = movmskps(0,auVar31);
      if (iVar13 == 0) {
        local_f8 = &local_a8;
        cVar12 = FUN_146da7fd6(&local_e8,param_2 * 2,&local_d8,&local_c8);
        if (cVar12 != '\0') {
          local_f8 = &local_b8;
          cVar12 = FUN_146da7fd6(&local_e8,param_2 * 2 | 1,&local_d8,&local_a8);
          if (cVar12 != '\0') goto LAB_146da7e20;
        }
        uVar16 = 0;
        goto LAB_146da7e22;
      }
    }
  }
LAB_146da7e20:
  uVar16 = 1;
LAB_146da7e22:
  if ((local_90 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16;
}



// FUNCTION 146da7ed4 FUN_146da7ed4 body=257 status=ok
// SIG undefined FUN_146da7ed4(void)

void FUN_146da7ed4(longlong *param_1,ulonglong *param_2,int *param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  if (0 < param_4) {
    lVar2 = *param_1;
    uVar11 = *param_2;
    uVar8 = uVar11 >> 0x20;
    while( true ) {
      uVar10 = (int)uVar11 + *param_3;
      uVar11 = (ulonglong)uVar10;
      if ((int)uVar10 < 0) break;
      uVar7 = (int)uVar8 + param_3[1];
      uVar8 = (ulonglong)uVar7;
      if ((int)uVar7 < 0) {
        return;
      }
      if (*(int *)(lVar2 + 0xd0) <= (int)uVar10) {
        return;
      }
      if (*(int *)(lVar2 + 0xd4) <= (int)uVar7) {
        return;
      }
      iVar5 = *(int *)param_1[1] * uVar7;
      uVar9 = iVar5 + uVar10;
      uVar6 = iVar5 + uVar10 + 7;
      if (-1 < (int)uVar9) {
        uVar6 = uVar9;
      }
      lVar3 = *(longlong *)((int *)param_1[1] + 2);
      bVar1 = *(byte *)(lVar3 + ((int)uVar6 >> 3));
      if ((bVar1 >> (uVar9 & 7) & 1) == 0) {
        *(byte *)(lVar3 + ((int)uVar6 >> 3)) = (byte)(1 << ((byte)uVar9 & 7)) | bVar1;
        plVar4 = (longlong *)param_1[2];
        iVar5 = (int)plVar4[1];
        *(uint *)(plVar4 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)plVar4 + 0xc) < iVar5 + 1U) {
          FUN_146da8420(plVar4,iVar5);
        }
        lVar3 = *plVar4;
        *(ulonglong *)(lVar3 + (longlong)iVar5 * 0x10) = CONCAT44(uVar7,uVar10);
        *(undefined8 *)(lVar3 + 8 + (longlong)iVar5 * 0x10) = 0;
      }
      param_4 = param_4 + -1;
      if (param_4 == 0) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 146da7fd6 FUN_146da7fd6 body=1096 status=ok
// SIG undefined FUN_146da7fd6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_146da7fd6(longlong *param_1,undefined4 param_2,float *param_3,float *param_4,float *param_5
                  )

{
  double *pdVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  char cVar6;
  int iVar7;
  double dVar8;
  double *pdVar9;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_1a8 [32];
  double *local_188;
  undefined8 *local_180;
  undefined8 **local_178;
  float *local_170;
  float *local_168;
  undefined1 local_160;
  undefined *local_158;
  undefined8 *local_150;
  undefined8 local_148;
  code *local_140;
  undefined8 local_138;
  float fStack_130;
  float fStack_12c;
  code *local_128;
  float local_118;
  float fStack_114;
  float fStack_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  pdVar1 = (double *)*param_1;
  fVar10 = *param_3;
  fVar11 = param_3[1];
  fVar12 = param_3[2];
  local_b8 = *param_5 - fVar10;
  fStack_b4 = param_5[1] - fVar11;
  fStack_b0 = param_5[2] - fVar12;
  fStack_ac = param_5[3] - param_3[3];
  local_c8 = *param_4 - fVar10;
  fStack_c4 = param_4[1] - fVar11;
  fStack_c0 = param_4[2] - fVar12;
  fStack_bc = param_4[3] - param_3[3];
  local_d8 = 0;
  uStack_d0 = 0;
  uStack_e0 = CONCAT44((float)(pdVar1[0x11] -
                              (double)(float)((ulonglong)*(undefined8 *)(param_3 + 2) >> 0x20)),
                       (float)(pdVar1[0x10] - (double)(float)*(undefined8 *)(param_3 + 2)));
  local_e8 = CONCAT44((float)(pdVar1[0xf] - (double)fVar11),(float)(pdVar1[0xe] - (double)fVar10));
  fVar13 = (float)pdVar1[0x17] - 0.0;
  fVar14 = (float)pdVar1[0x17] - 0.0;
  fVar16 = fStack_b4 * local_c8 - fStack_c4 * local_b8;
  fVar20 = fStack_b0 * fStack_c4 - fStack_c0 * fStack_b4;
  fVar22 = local_b8 * fStack_c0 - local_c8 * fStack_b0;
  fVar24 = fStack_ac * fStack_bc - fStack_bc * fStack_ac;
  auVar18._0_4_ = fVar22 * fVar22 + fVar20 * fVar20;
  auVar18._4_4_ = fVar20 * fVar20 + fVar22 * fVar22;
  auVar18._8_4_ = fVar24 * fVar24 + fVar16 * fVar16;
  auVar18._12_4_ = fVar16 * fVar16 + fVar24 * fVar24;
  auVar15._0_4_ = auVar18._8_4_ + auVar18._0_4_;
  auVar15._4_4_ = auVar18._12_4_ + auVar18._4_4_;
  auVar15._8_4_ = auVar18._0_4_ + auVar18._8_4_;
  auVar15._12_4_ = auVar18._4_4_ + auVar18._12_4_;
  auVar19 = sqrtps(auVar18,auVar15);
  auVar19 = divps(_DAT_1499314a0,auVar19);
  fVar20 = auVar19._0_4_ * fVar20;
  fVar22 = auVar19._4_4_ * fVar22;
  fVar16 = auVar19._8_4_ * fVar16;
  fVar24 = auVar19._12_4_ * fVar24;
  fVar17 = *(float *)(pdVar1 + 0x24) * -1.0;
  fVar21 = *(float *)((longlong)pdVar1 + 0x124) * -1.0;
  fVar23 = *(float *)(pdVar1 + 0x25) * -1.0;
  fVar25 = *(float *)((longlong)pdVar1 + 300) * 1.0;
  fVar26 = fVar22 * fVar17 - fVar20 * fVar21;
  fVar27 = fVar16 * fVar21 - fVar22 * fVar23;
  fVar28 = fVar20 * fVar23 - fVar16 * fVar17;
  fVar29 = fVar24 * fVar25 - fVar24 * fVar25;
  fVar26 = fVar26 + fVar26;
  fVar27 = fVar27 + fVar27;
  fVar28 = fVar28 + fVar28;
  fVar29 = fVar29 + fVar29;
  fVar10 = fVar10 - *(float *)(pdVar1 + 0x1e);
  fVar11 = fVar11 - *(float *)((longlong)pdVar1 + 0xf4);
  fVar12 = fVar12 - *(float *)(pdVar1 + 0x1f);
  fVar30 = fVar11 * fVar17 - fVar21 * fVar10;
  fVar31 = fVar12 * fVar21 - fVar23 * fVar11;
  fVar32 = fVar10 * fVar23 - fVar17 * fVar12;
  fVar30 = fVar30 + fVar30;
  fVar31 = fVar31 + fVar31;
  fVar32 = fVar32 + fVar32;
  fVar20 = (fVar26 * fVar21 - fVar28 * fVar23) + fVar25 * fVar27 + fVar20;
  fVar22 = (fVar27 * fVar23 - fVar26 * fVar17) + fVar25 * fVar28 + fVar22;
  fVar16 = (fVar28 * fVar17 - fVar27 * fVar21) + fVar25 * fVar26 + fVar16;
  dVar8 = pdVar1[0x16];
  fStack_130 = 0.0 - fVar16;
  fStack_12c = 0.0 - ((fVar29 * fVar25 - fVar29 * fVar25) + fVar25 * fVar29 + fVar24);
  local_138 = (double)CONCAT44(0.0 - fVar22,0.0 - fVar20);
  FUN_144947d2c(dVar8,&local_138,0);
  fVar10 = (((fVar32 * fVar17 - fVar31 * fVar21) + fVar25 * fVar30 + fVar12) - extraout_XMM0_Dc) *
           fVar16 + (((fVar30 * fVar21 - fVar32 * fVar23) + fVar25 * fVar31 + fVar10) -
                    extraout_XMM0_Da) * fVar20 +
                    (((fVar31 * fVar23 - fVar30 * fVar17) + fVar25 * fVar32 + fVar11) -
                    extraout_XMM0_Db) * fVar22;
  auVar19._4_4_ = -(uint)(fVar10 < fVar14);
  auVar19._0_4_ = -(uint)(fVar10 < fVar13);
  auVar19._8_4_ = -(uint)(fVar10 < fVar13);
  auVar19._12_4_ = -(uint)(fVar10 < fVar14);
  iVar7 = movmskps(SUB84(dVar8,0),auVar19);
  bVar5 = true;
  if (iVar7 == 0) {
    local_138 = pdVar1[0x16];
    fStack_130 = (float)*(double *)((longlong)local_138 + 0x10);
    local_188 = pdVar1 + 0x22;
    fStack_12c = 0.0;
    local_128 = FUN_14172546a;
    local_150 = &local_d8;
    local_148 = 0;
    local_140 = FUN_14014b546;
    local_158 = &DAT_149f52c20;
    local_168 = &local_118;
    local_170 = &local_108;
    local_178 = (undefined8 **)&local_ec;
    local_180 = (undefined8 *)CONCAT44(local_180._4_4_,(float)*(double *)param_1[1]);
    local_160 = 1;
    cVar6 = FUN_1448541f8(&local_150,&local_138,pdVar1 + 0x24,&local_e8);
    pdVar9 = (double *)param_1[1];
    if (cVar6 != '\0') {
      local_108 = *param_3 + local_108;
      fStack_104 = param_3[1] + fStack_104;
      fStack_100 = param_3[2] + fStack_100;
      fStack_fc = param_3[3] + fStack_fc;
      local_188 = (double *)pdVar1[0x18];
      dVar8 = *pdVar9;
      local_180 = &local_138;
      local_178 = &local_150;
      FUN_1408d1e72(SUB84((double)(fStack_110 * *(float *)(pdVar1 + 0x23) +
                                  local_118 * *(float *)(pdVar1 + 0x22) +
                                  fStack_114 * *(float *)((longlong)pdVar1 + 0x114)),0),
                    SUB84(dVar8,0),(double)local_ec,pdVar1[0x17]);
      dVar2 = local_138 * dVar8;
      if (dVar2 < dVar8) {
        *pdVar9 = dVar2;
        auVar3._8_4_ = SUB84((double)fStack_114,0);
        auVar3._0_8_ = (double)local_118;
        auVar3._12_4_ = (int)((ulonglong)(double)fStack_114 >> 0x20);
        *(undefined1 (*) [16])(pdVar1 + 5) = auVar3;
        pdVar1[7] = (double)fStack_110;
        auVar4._8_4_ = SUB84((double)fStack_104,0);
        auVar4._0_8_ = (double)local_108;
        auVar4._12_4_ = (int)((ulonglong)(double)fStack_104 >> 0x20);
        *(undefined1 (*) [16])(pdVar1 + 2) = auVar4;
        pdVar1[4] = (double)fStack_100;
        *pdVar1 = dVar2;
        pdVar1[1] = (double)local_150;
        *(undefined4 *)(pdVar1 + 8) = param_2;
        pdVar9 = (double *)param_1[1];
      }
    }
    bVar5 = 0.0 < *pdVar9;
  }
  if ((local_a0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146da8420 FUN_146da8420 body=132 status=ok
// SIG undefined FUN_146da8420(void)

void FUN_146da8420(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146da84a6 FUN_146da84a6 body=532 status=ok
// SIG undefined FUN_146da84a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146da84a6(undefined8 *param_1,undefined8 param_2,undefined8 param_3,double *param_4,
                  undefined8 *param_5,double *param_6,double param_7,undefined8 param_8,
                  undefined8 param_9)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined8 *puVar6;
  float fVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  
  *param_1 = 0x7fefffffffffffff;
  param_1[1] = 0x7fefffffffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  param_1[9] = param_2;
  puVar6 = param_1 + 10;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *param_5;
    param_5 = param_5 + 1;
    puVar6 = puVar6 + 1;
  }
  param_1[0x16] = param_3;
  param_1[0x17] = param_8;
  param_1[0x18] = param_9;
  dVar8 = (param_4[5] - param_4[2]) * 0.5;
  dVar10 = (param_4[4] - param_4[1]) * 0.5;
  dVar1 = (param_4[3] - *param_4) * 0.5;
  auVar2._4_4_ = (float)(param_4[1] + dVar10 + (double)param_1[0xf]);
  auVar2._0_4_ = (float)(*param_4 + dVar1 + (double)param_1[0xe]);
  auVar2._8_4_ = (float)(param_4[2] + dVar8 + (double)param_1[0x10]);
  auVar2._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x1a) = auVar2;
  fVar11 = (float)(double)param_1[0x10];
  fVar7 = (float)(double)param_1[0xe];
  auVar15._4_4_ = (float)(double)param_1[0xf];
  auVar15._0_4_ = fVar7;
  auVar15._8_4_ = fVar11;
  auVar15._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x1c) = auVar15;
  fVar14 = (float)param_6[2];
  fVar17 = (float)*param_6;
  fVar18 = (float)param_6[1];
  auVar3._4_4_ = fVar18;
  auVar3._0_4_ = fVar17;
  auVar3._8_4_ = fVar14;
  auVar3._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x22) = auVar3;
  *(float *)(param_1 + 0x1e) = (float)param_7 * fVar17 + fVar7;
  *(float *)((longlong)param_1 + 0xf4) = (float)param_7 * fVar18 + (float)(double)param_1[0xf];
  *(float *)(param_1 + 0x1f) = (float)param_7 * fVar14 + fVar11;
  *(float *)((longlong)param_1 + 0xfc) = (float)param_7 * 0.0 + 0.0;
  fVar7 = (float)(double)param_1[0xc];
  fVar11 = (float)(double)param_1[0xd];
  fVar12 = (float)(double)param_1[10];
  fVar13 = (float)(double)param_1[0xb];
  *(uint *)(param_1 + 0x26) = -(uint)(ABS(fVar17) < 1e-08);
  *(uint *)((longlong)param_1 + 0x134) = -(uint)(ABS(fVar18) < 1e-08);
  *(uint *)(param_1 + 0x27) = -(uint)(ABS(fVar14) < 1e-08);
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0xffffffff;
  auVar15 = _DAT_1499314a0;
  auVar4._4_4_ = fVar18;
  auVar4._0_4_ = fVar17;
  auVar4._8_4_ = fVar14;
  auVar4._12_4_ = 0;
  auVar19 = divps(_DAT_1499314a0,auVar4);
  *(uint *)(param_1 + 0x20) = ~-(uint)(ABS(fVar17) < 1e-08) & auVar19._0_4_;
  *(uint *)((longlong)param_1 + 0x104) = ~-(uint)(ABS(fVar18) < 1e-08) & auVar19._4_4_;
  *(uint *)(param_1 + 0x21) = ~-(uint)(ABS(fVar14) < 1e-08) & auVar19._8_4_;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  fVar14 = fVar12 * fVar12 + fVar13 * fVar13;
  fVar17 = fVar7 * fVar7 + fVar11 * fVar11;
  *(float *)(param_1 + 0x28) = (float)ABS(dVar1);
  *(float *)((longlong)param_1 + 0x144) = (float)ABS(dVar10);
  *(float *)(param_1 + 0x29) = (float)ABS(dVar8);
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  auVar9._0_4_ = fVar17 + fVar14;
  auVar9._4_4_ = fVar17 + fVar14;
  auVar9._8_4_ = fVar14 + fVar17;
  auVar9._12_4_ = fVar14 + fVar17;
  auVar19 = sqrtps(auVar9,auVar9);
  auVar15 = divps(auVar15,auVar19);
  auVar16._0_4_ = auVar15._0_4_ * fVar12;
  auVar16._4_4_ = auVar15._4_4_ * fVar13;
  auVar16._8_4_ = auVar15._8_4_ * fVar7;
  auVar16._12_4_ = auVar15._12_4_ * fVar11;
  auVar19._4_4_ = -(uint)(1e-08 <= auVar9._4_4_);
  auVar19._0_4_ = -(uint)(1e-08 <= auVar9._0_4_);
  auVar19._8_4_ = -(uint)(1e-08 <= auVar9._8_4_);
  auVar19._12_4_ = -(uint)(1e-08 <= auVar9._12_4_);
  auVar15 = blendvps(_DAT_149932320,auVar16,auVar19);
  *(undefined1 (*) [16])(param_1 + 0x24) = auVar15;
  return;
}



// FUNCTION 146da86ba FUN_146da86ba body=2375 status=ok
// SIG undefined FUN_146da86ba(void)

void FUN_146da86ba(double param_1,double *param_2,double *param_3,double param_4,double *param_5,
                  undefined8 param_6)

{
  byte *pbVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  byte bVar8;
  double dVar9;
  char cVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  size_t _Size;
  undefined8 uVar25;
  longlong lVar26;
  uint uVar27;
  bool bVar28;
  double dVar29;
  undefined1 auVar30 [16];
  double *pdVar31;
  double dVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStack_1e8 [32];
  double local_1c8;
  uint local_1bc;
  ulonglong local_1b8;
  double *local_1b0;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  ulonglong local_198;
  int local_18c;
  int local_188;
  int local_184;
  uint local_180;
  uint local_17c;
  longlong local_178;
  double local_170;
  double *local_168;
  undefined8 **local_160;
  undefined8 *local_158;
  undefined8 uStack_150;
  double local_140;
  double *local_138;
  int local_130;
  uint local_128;
  uint local_124;
  double local_120;
  double local_118 [4];
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  dVar29 = *param_5;
  dVar2 = param_5[1];
  local_118[3] = *(double *)((longlong)param_1 + 0x138) - dVar29;
  local_f0 = *(double *)((longlong)param_1 + 0x150) + dVar29;
  local_e8 = *(double *)((longlong)param_1 + 0x158) + dVar2;
  local_f8 = *(double *)((longlong)param_1 + 0x140) - dVar2;
  dVar3 = *param_3;
  dVar4 = param_3[1];
  dVar5 = *(double *)((longlong)param_1 + 0x50);
  dVar6 = *(double *)((longlong)param_1 + 0x58);
  dVar32 = (double)(-(ulonglong)(0.0 < dVar4) & 0x3ff0000000000000 |
                   (ulonglong)
                   (~(uint)(-(ulonglong)(0.0 < dVar4) >> 0x20) &
                   (uint)(-(ulonglong)(dVar4 < 0.0) >> 0x20) & 0xbff00000) << 0x20) * dVar2;
  local_170 = (double)(-(ulonglong)(0.0 < dVar3) & 0x3ff0000000000000 |
                      (ulonglong)
                      (~(uint)(-(ulonglong)(0.0 < dVar3) >> 0x20) &
                      (uint)(-(ulonglong)(dVar3 < 0.0) >> 0x20) & 0xbff00000) << 0x20) * dVar29;
  local_138 = (double *)(param_2[1] - dVar32);
  local_140 = *param_2 - local_170;
  local_168 = (double *)(dVar4 * param_4 + param_2[1] + dVar32);
  local_170 = dVar3 * param_4 + *param_2 + local_170;
  local_118[0] = dVar29;
  local_118[1] = dVar2;
  cVar10 = FUN_1448596be();
  if (cVar10 != '\0') {
    dVar3 = *(double *)((longlong)param_1 + 0xb0);
    dVar4 = *(double *)((longlong)param_1 + 0xb8);
    dVar32 = *(double *)((longlong)param_1 + 0xe0);
    dVar7 = *(double *)((longlong)param_1 + 0xd8);
    uVar15 = (uint)((local_140 / dVar5 - dVar3) / dVar7);
    uVar20 = (uint)(((double)local_138 / dVar6 - dVar4) / dVar32);
    iVar13 = *(int *)((longlong)param_1 + 0xd0);
    uVar16 = iVar13 - 1;
    uVar23 = 0;
    if (0 < (int)uVar15) {
      uVar23 = uVar15;
    }
    if (iVar13 <= (int)uVar15) {
      uVar23 = uVar16;
    }
    iVar11 = *(int *)((longlong)param_1 + 0xd4);
    uVar15 = 0;
    if (0 < (int)uVar20) {
      uVar15 = uVar20;
    }
    uVar27 = iVar11 - 1;
    if (iVar11 <= (int)uVar20) {
      uVar15 = uVar27;
    }
    uVar21 = (uint)((local_170 / dVar5 - dVar3) / dVar7);
    uVar22 = (uint)(((double)local_168 / dVar6 - dVar4) / dVar32);
    uVar20 = 0;
    if (0 < (int)uVar21) {
      uVar20 = uVar21;
    }
    if (iVar13 <= (int)uVar21) {
      uVar20 = uVar16;
    }
    uVar21 = 0;
    if (0 < (int)uVar22) {
      uVar21 = uVar22;
    }
    if (iVar11 <= (int)uVar22) {
      uVar21 = uVar27;
    }
    uVar22 = -(uVar20 - uVar23);
    if ((int)uVar22 < 0) {
      uVar22 = uVar20 - uVar23;
    }
    uVar18 = -(uVar21 - uVar15);
    if ((int)uVar18 < 0) {
      uVar18 = uVar21 - uVar15;
    }
    local_120 = param_4;
    if (uVar18 == 0 && uVar22 == 0) {
      uVar33 = SUB84(local_140,0);
      uVar34 = (int)((ulonglong)local_140 >> 0x20);
      if (local_170 <= local_140) {
        uVar33 = SUB84(local_170,0);
        uVar34 = (int)((ulonglong)local_170 >> 0x20);
      }
      uVar35 = SUB84(local_138,0);
      uVar36 = (undefined4)((ulonglong)local_138 >> 0x20);
      if ((double)local_168 <= (double)local_138) {
        uVar35 = SUB84(local_168,0);
        uVar36 = (undefined4)((ulonglong)local_168 >> 0x20);
      }
      uVar15 = (uint)((((double)CONCAT44(uVar34,uVar33) - dVar29) / dVar5 - dVar3) / dVar7);
      uVar20 = (uint)((((double)CONCAT44(uVar36,uVar35) - dVar2) / dVar6 - dVar4) / dVar32);
      uVar23 = 0;
      if (0 < (int)uVar15) {
        uVar23 = uVar15;
      }
      dVar9 = local_140;
      if (local_140 <= local_170) {
        dVar9 = local_170;
      }
      if (iVar13 <= (int)uVar15) {
        uVar23 = uVar16;
      }
      uVar15 = 0;
      if (0 < (int)uVar20) {
        uVar15 = uVar20;
      }
      if (iVar11 <= (int)uVar20) {
        uVar15 = uVar27;
      }
      pdVar31 = local_138;
      if ((double)local_138 <= (double)local_168) {
        pdVar31 = local_168;
      }
      uVar21 = (uint)(((dVar9 + dVar29) / dVar5 - dVar3) / dVar7);
      uVar22 = (uint)((((double)pdVar31 + dVar2) / dVar6 - dVar4) / dVar32);
      uVar20 = 0;
      if (0 < (int)uVar21) {
        uVar20 = uVar21;
      }
      if (iVar13 <= (int)uVar21) {
        uVar20 = uVar16;
      }
      uVar16 = 0;
      if (0 < (int)uVar22) {
        uVar16 = uVar22;
      }
      if (iVar11 <= (int)uVar22) {
        uVar16 = uVar27;
      }
      if ((int)uVar15 <= (int)uVar16) {
        do {
          uVar27 = uVar23;
          if ((int)uVar23 <= (int)uVar20) {
            do {
              cVar10 = FUN_146da9002(param_6,(*(ushort *)((longlong)param_1 + 0x92) - 1) * uVar15 +
                                             uVar27,&local_120);
              if (cVar10 == '\0') goto LAB_146da8a8c;
              uVar27 = uVar27 + 1;
            } while (uVar20 + 1 != uVar27);
          }
          bVar28 = uVar15 != uVar16;
          uVar15 = uVar15 + 1;
        } while (bVar28);
      }
    }
    else {
      local_1bc = CONCAT31(local_1bc._1_3_,(int)uVar23 < (int)uVar20);
      local_1a4 = CONCAT31(local_1a4._1_3_,(int)uVar15 < (int)uVar21);
      uVar16 = uVar22 - uVar18;
      local_198 = (ulonglong)uVar16;
      local_19c = (uint)(uVar22 < uVar18 || uVar16 == 0);
      local_1a0 = (uint)(uVar22 >= uVar18 && uVar16 != 0);
      local_1c8 = *(double *)((longlong)param_1 + 0xd0);
      iVar11 = (int)((ulonglong)local_1c8 >> 0x20) * SUB84(local_1c8,0);
      iVar13 = iVar11 + 7;
      if (-1 < iVar11) {
        iVar13 = iVar11;
      }
      local_130 = (iVar13 >> 3) + 1;
      _Size = (size_t)local_130;
      local_1b8 = (ulonglong)uVar23;
      local_140 = local_1c8;
      local_128 = local_19c;
      local_124 = local_1a0;
      local_1b0 = (double *)FUN_14001cc68(_Size + (_Size == 0));
      lVar19 = 0;
      local_138 = local_1b0;
      memset(local_1b0,0,_Size);
      local_158 = (undefined8 *)0x0;
      uVar25 = CONCAT44(uVar15,(undefined4)local_1b8);
      uStack_150 = 1;
      FUN_146da98b2(&local_158,0);
      *local_158 = uVar25;
      uVar16 = (uint)local_1b8;
      iVar11 = uVar15 * local_1c8._0_4_ + uVar16;
      iVar13 = uVar15 * local_1c8._0_4_ + uVar16 + 7;
      if (-1 < iVar11) {
        iVar13 = iVar11;
      }
      local_158[1] = 0xbff0000000000000;
      pbVar1 = (byte *)((longlong)local_1b0 + (longlong)(iVar13 >> 3));
      *pbVar1 = *pbVar1 | (byte)(1 << ((byte)iVar11 & 7));
      if (0 < (int)uStack_150) {
        local_184 = -uVar18;
        local_188 = (local_1bc & 0xff) * 2 + -1;
        local_18c = (local_1a4 & 0xff) * 2 + -1;
        local_19c = -local_19c;
        local_1a0 = -local_1a0;
        lVar26 = 8;
        local_1c8 = (double)(local_1b8 & 0xffffffff);
        local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar15);
        uVar24 = local_1b8;
        iVar13 = (int)uStack_150;
        local_1bc = uVar15;
        local_1a8 = uVar16;
        do {
          dVar29 = *(double *)((longlong)local_158 + lVar26);
          if (dVar29 <= local_120) {
            local_178 = *(longlong *)((longlong)local_158 + lVar26 + -8);
            local_168 = &local_140;
            local_160 = &local_158;
            iVar11 = (int)local_178;
            iVar13 = 0;
            if (0 < iVar11) {
              iVar13 = iVar11;
            }
            if (*(int *)((longlong)param_1 + 0xd0) <= iVar11) {
              iVar13 = *(int *)((longlong)param_1 + 0xd0) + -1;
            }
            iVar14 = (int)((ulonglong)local_178 >> 0x20);
            iVar17 = 0;
            if (iVar14 != 0 && -1 < local_178) {
              iVar17 = iVar14;
            }
            if (*(int *)((longlong)param_1 + 0xd4) <= iVar14) {
              iVar17 = *(int *)((longlong)param_1 + 0xd4) + -1;
            }
            local_170 = param_1;
            if (((iVar13 == iVar11) && (iVar17 == iVar14)) &&
               (local_1b8 = uVar24,
               cVar10 = FUN_146da9002(param_6,(*(ushort *)((longlong)param_1 + 0x92) - 1) * iVar14 +
                                              iVar11,&local_120), uVar24 = local_1b8, cVar10 == '\0'
               )) break;
            if (dVar29 < 0.0) {
              uVar12 = (ulonglong)((local_1a0 & 1) << 3);
              auVar30._0_8_ =
                   *(double *)((longlong)local_118 + uVar12) /
                   ABS(*(double *)((longlong)param_1 + 0x50 + uVar12));
              auVar30._8_8_ = 0;
              if (0.0 <= auVar30._0_8_) {
                auVar30 = roundpd(auVar30,auVar30,2);
                dVar29 = auVar30._0_8_;
              }
              else {
                auVar30 = roundpd(auVar30,auVar30,1);
                dVar29 = auVar30._0_8_;
              }
              local_1a4 = (uint)dVar29;
              local_1b8 = uVar24;
              FUN_146da9334(&local_170,&local_178,&local_128);
              local_180 = local_19c;
              local_17c = local_1a0;
              FUN_146da9334(&local_170,&local_178,&local_180,local_1a4);
              uVar24 = local_1b8;
              if ((local_1c8._0_4_ == uVar20) && ((uint)local_1b0 == uVar21)) {
                local_1c8 = (double)(ulonglong)uVar20;
                local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar21);
              }
              else {
                iVar13 = (int)local_198 * 2;
                if (local_184 <= iVar13) {
                  local_198 = (ulonglong)((int)local_198 - uVar18);
                  local_1a8 = local_1c8._0_4_ + local_188;
                  local_1c8 = (double)(ulonglong)local_1a8;
                  uVar24 = (ulonglong)local_1a8;
                }
                uVar16 = local_1bc;
                if (iVar13 <= (int)uVar22) {
                  local_198 = (ulonglong)((int)local_198 + uVar22);
                  uVar15 = (uint)local_1b0 + local_18c;
                  local_1c8 = (double)(ulonglong)local_1a8;
                  uVar16 = uVar15;
                }
                uVar27 = local_140._0_4_ * uVar16 + SUB84(local_1c8,0);
                uVar23 = local_140._0_4_ * uVar16 + SUB84(local_1c8,0) + 7;
                if (-1 < (int)uVar27) {
                  uVar23 = uVar27;
                }
                bVar8 = *(byte *)((longlong)local_138 + (longlong)((int)uVar23 >> 3));
                if ((bVar8 >> (uVar27 & 7) & 1) == 0) {
                  *(byte *)((longlong)local_138 + (longlong)((int)uVar23 >> 3)) =
                       (byte)(1 << ((byte)uVar27 & 7)) | bVar8;
                  local_1c8 = (double)(longlong)(int)uStack_150;
                  uVar16 = (int)uStack_150 + 1;
                  uStack_150 = CONCAT44(uStack_150._4_4_,uVar16);
                  if (uStack_150._4_4_ < uVar16) {
                    local_1b8 = uVar24;
                    FUN_146da98b2(&local_158,local_1c8);
                    uVar24 = local_1b8;
                  }
                  local_1a8 = (uint)uVar24;
                  local_158[(longlong)local_1c8 * 2] =
                       uVar24 & 0xffffffff | (ulonglong)uVar15 << 0x20;
                  local_158[(longlong)local_1c8 * 2 + 1] = 0xbff0000000000000;
                  local_1c8 = (double)(uVar24 & 0xffffffff);
                  local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar15);
                  local_1bc = uVar15;
                }
                else {
                  local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar16);
                  local_1bc = uVar16;
                }
              }
            }
            iVar13 = (int)uStack_150;
          }
          lVar19 = lVar19 + 1;
          lVar26 = lVar26 + 0x10;
        } while (lVar19 < iVar13);
      }
      if (local_158 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (local_138 != (double *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_146da8a8c:
  if ((local_e0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146da9002 FUN_146da9002 body=817 status=ok
// SIG undefined FUN_146da9002(void)

undefined8 FUN_146da9002(longlong param_1,uint param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar22;
  float fVar23;
  undefined1 auVar18 [16];
  float fVar24;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar36;
  float fVar37;
  undefined1 auVar34 [16];
  float fVar38;
  undefined1 auVar35 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar46 [16];
  float fVar47;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  float fVar48;
  undefined1 auStack_118 [32];
  float *local_f8;
  longlong local_e8;
  double *local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar4 = *(longlong **)(param_1 + 0x48);
  if ((((int)param_2 < 0) || ((int)plVar4[5] <= (int)param_2)) ||
     (*(char *)(plVar4[4] + (ulonglong)param_2) != -1)) {
    uVar3 = *(ushort *)((longlong)plVar4 + 0x72);
    iVar13 = (int)param_2 / (int)(uVar3 - 1) + param_2;
    dVar1 = (double)plVar4[0xc];
    lVar5 = *plVar4;
    lVar15 = (longlong)iVar13;
    dVar2 = (double)plVar4[0x10];
    iVar14 = iVar13 / (int)(uint)uVar3;
    auVar27._8_8_ = in_XMM2._8_8_;
    auVar27._0_8_ = (double)*(ushort *)(lVar5 + lVar15 * 2) * dVar2 + dVar1;
    auVar28._4_12_ = auVar27._4_12_;
    auVar28._0_4_ = (float)auVar27._0_8_;
    auVar39._4_12_ = in_XMM4._4_12_;
    auVar39._0_4_ = (float)((double)*(ushort *)(lVar5 + 2 + lVar15 * 2) * dVar2 + dVar1);
    auVar42._4_12_ = in_XMM5._4_12_;
    auVar42._0_4_ =
         (float)((double)*(ushort *)(lVar5 + ((ulonglong)uVar3 + lVar15) * 2) * dVar2 + dVar1);
    auVar25._4_12_ = unaff_XMM8._4_12_;
    auVar25._0_4_ = (float)iVar14;
    fVar32 = (float)(iVar13 % (int)(uint)uVar3);
    fVar47 = (float)((double)*(ushort *)(lVar5 + 2 + ((ulonglong)uVar3 + lVar15) * 2) * dVar2 +
                    dVar1);
    auVar18 = insertps(ZEXT416((uint)fVar32),auVar25,0x1c);
    auVar43 = insertps(auVar18,auVar28,0x20);
    auVar44 = insertps(ZEXT416((uint)(fVar32 + 1.0)),auVar25,0x1c);
    auVar45 = insertps(auVar44,auVar39,0x20);
    auVar46._0_4_ = auVar25._0_4_ + 1.0;
    auVar46._4_12_ = auVar25._4_12_;
    auVar44 = insertps(ZEXT416((uint)fVar32),auVar46,0x1c);
    auVar34 = insertps(auVar44,auVar42,0x20);
    auVar25 = insertps(ZEXT416((uint)(fVar32 + 1.0)),auVar46,0x1c);
    auVar44._4_4_ = unaff_XMM9_Db;
    auVar44._0_4_ = fVar47;
    auVar44._8_4_ = unaff_XMM9_Dc;
    auVar44._12_4_ = unaff_XMM9_Dd;
    auVar44 = insertps(auVar25,auVar44,0x20);
    fVar32 = auVar42._0_4_;
    if (fVar47 <= auVar42._0_4_) {
      fVar32 = fVar47;
    }
    fVar48 = auVar39._0_4_;
    if (fVar32 <= auVar39._0_4_) {
      fVar48 = fVar32;
    }
    fVar32 = auVar28._0_4_;
    if (fVar48 <= auVar28._0_4_) {
      fVar32 = fVar48;
    }
    if (auVar42._0_4_ <= fVar47) {
      auVar42._0_4_ = fVar47;
    }
    if (auVar39._0_4_ <= auVar42._0_4_) {
      auVar39._0_4_ = auVar42._0_4_;
    }
    if (auVar28._0_4_ <= auVar39._0_4_) {
      auVar28._0_4_ = auVar39._0_4_;
    }
    auVar25 = insertps(auVar25,auVar28,0x20);
    auVar6._4_4_ = (int)((ulonglong)auVar27._0_8_ >> 0x20);
    auVar6._0_4_ = fVar32;
    auVar6._8_4_ = in_XMM2._8_4_;
    auVar6._12_4_ = in_XMM2._12_4_;
    auVar18 = insertps(auVar18,auVar6,0x20);
    fVar32 = *(float *)(plVar4 + 10);
    fVar47 = *(float *)((longlong)plVar4 + 0x54);
    fVar48 = *(float *)(plVar4 + 0xb);
    fVar7 = *(float *)((longlong)plVar4 + 0x5c);
    local_d8 = auVar43._0_4_ * fVar32;
    fStack_d4 = auVar43._4_4_ * fVar47;
    fStack_d0 = auVar43._8_4_ * fVar48;
    fStack_cc = auVar43._12_4_ * fVar7;
    local_c8 = auVar45._0_4_ * fVar32;
    fStack_c4 = auVar45._4_4_ * fVar47;
    fStack_c0 = auVar45._8_4_ * fVar48;
    fStack_bc = auVar45._12_4_ * fVar7;
    local_b8 = auVar34._0_4_ * fVar32;
    fStack_b4 = auVar34._4_4_ * fVar47;
    fStack_b0 = auVar34._8_4_ * fVar48;
    fStack_ac = auVar34._12_4_ * fVar7;
    local_a8 = auVar44._0_4_ * fVar32;
    fStack_a4 = auVar44._4_4_ * fVar47;
    fStack_a0 = auVar44._8_4_ * fVar48;
    fStack_9c = auVar44._12_4_ * fVar7;
    auVar34._0_8_ = CONCAT44(auVar18._4_4_ * fVar47,auVar18._0_4_ * fVar32);
    auVar34._8_4_ = auVar18._8_4_ * fVar48;
    auVar34._12_4_ = auVar18._12_4_ * fVar7;
    auVar18._0_4_ = auVar25._0_4_ * fVar32;
    auVar18._4_4_ = auVar25._4_4_ * fVar47;
    auVar18._8_4_ = auVar25._8_4_ * fVar48;
    auVar18._12_4_ = auVar25._12_4_ * fVar7;
    auVar43._8_4_ = auVar34._8_4_;
    auVar43._0_8_ = auVar34._0_8_;
    auVar43._12_4_ = auVar34._12_4_;
    auVar25 = minps(auVar43,auVar18);
    auVar44 = maxps(auVar34,auVar18);
    fVar32 = *(float *)(param_1 + 0xd0);
    fVar47 = *(float *)(param_1 + 0xd4);
    fVar48 = *(float *)(param_1 + 0xd8);
    fVar7 = *(float *)(param_1 + 0xdc);
    uVar8 = *(uint *)(param_1 + 0x130);
    uVar9 = *(uint *)(param_1 + 0x134);
    uVar10 = *(uint *)(param_1 + 0x138);
    uVar11 = *(uint *)(param_1 + 0x13c);
    fVar33 = auVar25._0_4_ - *(float *)(param_1 + 0x140);
    fVar36 = auVar25._4_4_ - *(float *)(param_1 + 0x144);
    fVar37 = auVar25._8_4_ - *(float *)(param_1 + 0x148);
    fVar38 = auVar25._12_4_ - *(float *)(param_1 + 0x14c);
    fVar17 = auVar44._0_4_ + *(float *)(param_1 + 0x140);
    fVar22 = auVar44._4_4_ + *(float *)(param_1 + 0x144);
    fVar23 = auVar44._8_4_ + *(float *)(param_1 + 0x148);
    fVar24 = auVar44._12_4_ + *(float *)(param_1 + 0x14c);
    auVar45._0_4_ = -(uint)(fVar17 < fVar32 || fVar32 < fVar33) & uVar8;
    auVar45._4_4_ = -(uint)(fVar22 < fVar47 || fVar47 < fVar36) & uVar9;
    auVar45._8_4_ = -(uint)(fVar23 < fVar48 || fVar48 < fVar37) & uVar10;
    auVar45._12_4_ = -(uint)(fVar24 < fVar7 || fVar7 < fVar38) & uVar11;
    iVar13 = movmskps(iVar14,auVar45);
    local_e8 = param_1;
    local_e0 = param_3;
    if (iVar13 == 0) {
      auVar26._0_4_ = (float)*param_3;
      auVar26._4_4_ = auVar26._0_4_;
      auVar26._8_4_ = auVar26._0_4_;
      auVar26._12_4_ = auVar26._0_4_;
      auVar40._0_8_ =
           CONCAT44(~uVar9 & (uint)((fVar36 - fVar47) * *(float *)(param_1 + 0x104)),
                    ~uVar8 & (uint)((fVar33 - fVar32) * *(float *)(param_1 + 0x100)));
      auVar40._8_4_ = ~uVar10 & (uint)((fVar37 - fVar48) * *(float *)(param_1 + 0x108));
      auVar40._12_4_ = ~uVar11 & (uint)((fVar38 - fVar7) * *(float *)(param_1 + 0x10c));
      auVar35._0_4_ = ~uVar8 & (uint)((fVar17 - fVar32) * *(float *)(param_1 + 0x100));
      auVar35._4_4_ = ~uVar9 & (uint)((fVar22 - fVar47) * *(float *)(param_1 + 0x104));
      auVar35._8_4_ = ~uVar10 & (uint)((fVar23 - fVar48) * *(float *)(param_1 + 0x108));
      auVar35._12_4_ = ~uVar11 & (uint)((fVar24 - fVar7) * *(float *)(param_1 + 0x10c));
      auVar29._0_4_ = uVar8 & (uint)auVar26._0_4_;
      auVar29._4_4_ = uVar9 & (uint)auVar26._0_4_;
      auVar29._8_4_ = uVar10 & (uint)auVar26._0_4_;
      auVar29._12_4_ = uVar11 & (uint)auVar26._0_4_;
      auVar19._8_4_ = auVar40._8_4_;
      auVar19._0_8_ = auVar40._0_8_;
      auVar19._12_4_ = auVar40._12_4_;
      auVar44 = minps(auVar19,auVar29 | auVar35);
      auVar25 = maxps(auVar40,auVar29 | auVar35);
      auVar20._12_4_ = auVar44._12_4_;
      auVar30._0_8_ = auVar44._4_8_;
      auVar30._8_4_ = auVar44._0_4_;
      auVar30._12_4_ = auVar20._12_4_;
      auVar18 = maxps(auVar44,auVar30);
      auVar20._4_4_ = auVar44._0_4_;
      auVar20._0_4_ = auVar44._8_4_;
      auVar20._8_4_ = auVar44._4_4_;
      auVar44 = maxps(auVar18,auVar20);
      auVar18 = maxps(auVar44,ZEXT816(0));
      auVar41._12_4_ = auVar25._12_4_;
      auVar21._0_8_ = auVar25._4_8_;
      auVar21._8_4_ = auVar25._0_4_;
      auVar21._12_4_ = auVar41._12_4_;
      auVar44 = minps(auVar25,auVar21);
      auVar41._4_4_ = auVar25._0_4_;
      auVar41._0_4_ = auVar25._8_4_;
      auVar41._8_4_ = auVar25._4_4_;
      auVar44 = minps(auVar44,auVar41);
      auVar44 = minps(auVar44,auVar26);
      auVar31._4_4_ = -(uint)(auVar44._4_4_ < auVar18._4_4_);
      auVar31._0_4_ = -(uint)(auVar44._0_4_ < auVar18._0_4_);
      auVar31._8_4_ = -(uint)(auVar44._8_4_ < auVar18._8_4_);
      auVar31._12_4_ = -(uint)(auVar44._12_4_ < auVar18._12_4_);
      iVar13 = movmskps(0,auVar31);
      if (iVar13 == 0) {
        local_f8 = &local_a8;
        cVar12 = FUN_146da9436(&local_e8,param_2 * 2,&local_d8,&local_c8);
        if (cVar12 != '\0') {
          local_f8 = &local_b8;
          cVar12 = FUN_146da9436(&local_e8,param_2 * 2 | 1,&local_d8,&local_a8);
          if (cVar12 != '\0') goto LAB_146da9280;
        }
        uVar16 = 0;
        goto LAB_146da9282;
      }
    }
  }
LAB_146da9280:
  uVar16 = 1;
LAB_146da9282:
  if ((local_90 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16;
}



// FUNCTION 146da9334 FUN_146da9334 body=257 status=ok
// SIG undefined FUN_146da9334(void)

void FUN_146da9334(longlong *param_1,ulonglong *param_2,int *param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  if (0 < param_4) {
    lVar2 = *param_1;
    uVar11 = *param_2;
    uVar8 = uVar11 >> 0x20;
    while( true ) {
      uVar10 = (int)uVar11 + *param_3;
      uVar11 = (ulonglong)uVar10;
      if ((int)uVar10 < 0) break;
      uVar7 = (int)uVar8 + param_3[1];
      uVar8 = (ulonglong)uVar7;
      if ((int)uVar7 < 0) {
        return;
      }
      if (*(int *)(lVar2 + 0xd0) <= (int)uVar10) {
        return;
      }
      if (*(int *)(lVar2 + 0xd4) <= (int)uVar7) {
        return;
      }
      iVar5 = *(int *)param_1[1] * uVar7;
      uVar9 = iVar5 + uVar10;
      uVar6 = iVar5 + uVar10 + 7;
      if (-1 < (int)uVar9) {
        uVar6 = uVar9;
      }
      lVar3 = *(longlong *)((int *)param_1[1] + 2);
      bVar1 = *(byte *)(lVar3 + ((int)uVar6 >> 3));
      if ((bVar1 >> (uVar9 & 7) & 1) == 0) {
        *(byte *)(lVar3 + ((int)uVar6 >> 3)) = (byte)(1 << ((byte)uVar9 & 7)) | bVar1;
        plVar4 = (longlong *)param_1[2];
        iVar5 = (int)plVar4[1];
        *(uint *)(plVar4 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)plVar4 + 0xc) < iVar5 + 1U) {
          FUN_146da98b2(plVar4,iVar5);
        }
        lVar3 = *plVar4;
        *(ulonglong *)(lVar3 + (longlong)iVar5 * 0x10) = CONCAT44(uVar7,uVar10);
        *(undefined8 *)(lVar3 + 8 + (longlong)iVar5 * 0x10) = 0;
      }
      param_4 = param_4 + -1;
      if (param_4 == 0) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 146da9436 FUN_146da9436 body=1146 status=ok
// SIG undefined FUN_146da9436(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_146da9436(longlong *param_1,undefined4 param_2,float *param_3,float *param_4,float *param_5
                  )

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  double *pdVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar18;
  float fVar19;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_198 [32];
  double *local_178;
  double *local_170;
  undefined8 **local_168;
  float *local_160;
  float *local_158;
  undefined1 local_150;
  undefined *local_148;
  undefined8 *local_138;
  undefined8 local_130;
  code *local_128;
  double local_120;
  float local_118;
  float local_114;
  undefined1 *local_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_198;
  pdVar1 = (double *)*param_1;
  fVar9 = *param_3;
  fVar10 = param_3[1];
  fVar11 = param_3[2];
  local_a8 = *param_5 - fVar9;
  fStack_a4 = param_5[1] - fVar10;
  fStack_a0 = param_5[2] - fVar11;
  fStack_9c = param_5[3] - param_3[3];
  local_b8 = *param_4 - fVar9;
  fStack_b4 = param_4[1] - fVar10;
  fStack_b0 = param_4[2] - fVar11;
  fStack_ac = param_4[3] - param_3[3];
  local_c8 = 0;
  uStack_c0 = 0;
  fStack_d0 = (float)(pdVar1[0x10] - (double)(float)*(undefined8 *)(param_3 + 2));
  fStack_cc = (float)(pdVar1[0x11] -
                     (double)(float)((ulonglong)*(undefined8 *)(param_3 + 2) >> 0x20));
  local_d8 = (float)(pdVar1[0xe] - (double)fVar9);
  fStack_d4 = (float)(pdVar1[0xf] - (double)fVar10);
  dVar2 = pdVar1[0x16];
  lVar3 = *(longlong *)((longlong)dVar2 + 0x88);
  uVar12 = 0;
  uVar14 = 0;
  if (0.0 < *(double *)(lVar3 + 0x10)) {
    uVar12 = (undefined4)*(undefined8 *)((longlong)dVar2 + 0x10);
    uVar14 = (undefined4)((ulonglong)*(undefined8 *)((longlong)dVar2 + 0x10) >> 0x20);
  }
  fVar13 = (float)pdVar1[0x17] - (float)(double)CONCAT44(uVar14,uVar12);
  fVar15 = (float)pdVar1[0x17] - (float)(double)CONCAT44(uVar14,uVar12);
  fVar20 = fStack_a4 * local_b8 - fStack_b4 * local_a8;
  fVar22 = fStack_a0 * fStack_b4 - fStack_b0 * fStack_a4;
  fVar24 = local_a8 * fStack_b0 - local_b8 * fStack_a0;
  fVar26 = fStack_9c * fStack_ac - fStack_ac * fStack_9c;
  fVar26 = fVar26 * fVar26;
  fVar21 = fVar24 * fVar24 + fVar22 * fVar22;
  fVar23 = fVar22 * fVar22 + fVar24 * fVar24;
  fVar25 = fVar26 + fVar20 * fVar20;
  fVar26 = fVar20 * fVar20 + fVar26;
  auVar16._0_4_ = fVar25 + fVar21;
  auVar16._4_4_ = fVar26 + fVar23;
  auVar16._8_4_ = fVar21 + fVar25;
  auVar16._12_4_ = fVar23 + fVar26;
  auVar16 = sqrtps(auVar16,auVar16);
  auVar16 = divps(_DAT_1499314a0,auVar16);
  fVar27 = *(float *)(pdVar1 + 0x24) * -1.0;
  fVar28 = *(float *)((longlong)pdVar1 + 0x124) * -1.0;
  fVar29 = *(float *)(pdVar1 + 0x25) * -1.0;
  fVar30 = *(float *)((longlong)pdVar1 + 300) * 1.0;
  fVar22 = auVar16._0_4_ * fVar22;
  fVar24 = auVar16._4_4_ * fVar24;
  fVar20 = auVar16._8_4_ * fVar20;
  fVar21 = fVar24 * fVar27 - fVar22 * fVar28;
  fVar23 = fVar20 * fVar28 - fVar24 * fVar29;
  fVar25 = fVar22 * fVar29 - fVar20 * fVar27;
  fVar21 = fVar21 + fVar21;
  fVar23 = fVar23 + fVar23;
  fVar25 = fVar25 + fVar25;
  fVar9 = fVar9 - *(float *)(pdVar1 + 0x1e);
  fVar10 = fVar10 - *(float *)((longlong)pdVar1 + 0xf4);
  fVar11 = fVar11 - *(float *)(pdVar1 + 0x1f);
  fVar26 = fVar10 * fVar27 - fVar28 * fVar9;
  fVar18 = fVar11 * fVar28 - fVar29 * fVar10;
  fVar19 = fVar9 * fVar29 - fVar27 * fVar11;
  fVar26 = fVar26 + fVar26;
  fVar18 = fVar18 + fVar18;
  fVar19 = fVar19 + fVar19;
  fVar9 = (((fVar19 * fVar27 - fVar18 * fVar28) + fVar30 * fVar26 + fVar11) -
          (float)(*(double *)(lVar3 + 0x30) * *(double *)((longlong)dVar2 + 0x30))) *
          ((fVar25 * fVar27 - fVar23 * fVar28) + fVar30 * fVar21 + fVar20) +
          (((fVar26 * fVar28 - fVar19 * fVar29) + fVar30 * fVar18 + fVar9) -
          (float)(*(double *)(lVar3 + 0x20) * *(double *)((longlong)dVar2 + 0x20))) *
          ((fVar21 * fVar28 - fVar25 * fVar29) + fVar30 * fVar23 + fVar22) +
          (((fVar18 * fVar29 - fVar26 * fVar27) + fVar30 * fVar19 + fVar10) -
          (float)(*(double *)(lVar3 + 0x28) * *(double *)((longlong)dVar2 + 0x28))) *
          ((fVar23 * fVar29 - fVar21 * fVar27) + fVar30 * fVar25 + fVar24);
  auVar17._4_4_ = -(uint)(fVar9 < fVar15);
  auVar17._0_4_ = -(uint)(fVar9 < fVar13);
  auVar17._8_4_ = -(uint)(fVar9 < fVar13);
  auVar17._12_4_ = -(uint)(fVar9 < fVar15);
  iVar7 = movmskps(param_2,auVar17);
  bVar5 = true;
  if (iVar7 == 0) {
    local_178 = pdVar1 + 0x22;
    local_118 = (float)*(double *)((longlong)dVar2 + 0x10);
    local_114 = (float)(double)(-(ulonglong)(0.0 < *(double *)(lVar3 + 0x10)) &
                               (ulonglong)*(double *)((longlong)dVar2 + 0x10));
    local_110 = &LAB_146cc500a;
    local_138 = &local_c8;
    local_130 = 0;
    local_128 = FUN_14014b546;
    local_148 = &DAT_149f52c20;
    local_158 = &local_108;
    local_160 = &local_f8;
    local_168 = (undefined8 **)&local_dc;
    local_170 = (double *)CONCAT44(local_170._4_4_,(float)*(double *)param_1[1]);
    local_150 = 1;
    local_120 = dVar2;
    cVar6 = FUN_1448541f8(&local_138,&local_120,pdVar1 + 0x24,&local_d8);
    pdVar8 = (double *)param_1[1];
    if (cVar6 != '\0') {
      local_f8 = *param_3 + local_f8;
      fStack_f4 = param_3[1] + fStack_f4;
      fStack_f0 = param_3[2] + fStack_f0;
      fStack_ec = param_3[3] + fStack_ec;
      local_178 = (double *)pdVar1[0x18];
      dVar2 = *pdVar8;
      local_170 = &local_120;
      local_168 = &local_138;
      FUN_1408d1e72(SUB84((double)(fStack_100 * *(float *)(pdVar1 + 0x23) +
                                  local_108 * *(float *)(pdVar1 + 0x22) +
                                  fStack_104 * *(float *)((longlong)pdVar1 + 0x114)),0),dVar2,
                    SUB84((double)local_dc,0),SUB84(pdVar1[0x17],0));
      dVar4 = local_120 * dVar2;
      if (dVar4 < dVar2) {
        *pdVar8 = dVar4;
        pdVar1[5] = (double)local_108;
        pdVar1[6] = (double)fStack_104;
        pdVar1[7] = (double)fStack_100;
        pdVar1[2] = (double)local_f8;
        pdVar1[3] = (double)fStack_f4;
        pdVar1[4] = (double)fStack_f0;
        *pdVar1 = dVar4;
        pdVar1[1] = (double)local_138;
        *(undefined4 *)(pdVar1 + 8) = param_2;
        pdVar8 = (double *)param_1[1];
      }
    }
    bVar5 = 0.0 < *pdVar8;
  }
  if ((local_90 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146da98b2 FUN_146da98b2 body=132 status=ok
// SIG undefined FUN_146da98b2(void)

void FUN_146da98b2(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146da9938 FUN_146da9938 body=532 status=ok
// SIG undefined FUN_146da9938(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146da9938(undefined8 *param_1,undefined8 param_2,undefined8 param_3,double *param_4,
                  undefined8 *param_5,double *param_6,double param_7,undefined8 param_8,
                  undefined8 param_9)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined8 *puVar6;
  float fVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  
  *param_1 = 0x7fefffffffffffff;
  param_1[1] = 0x7fefffffffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  param_1[9] = param_2;
  puVar6 = param_1 + 10;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *param_5;
    param_5 = param_5 + 1;
    puVar6 = puVar6 + 1;
  }
  param_1[0x16] = param_3;
  param_1[0x17] = param_8;
  param_1[0x18] = param_9;
  dVar8 = (param_4[5] - param_4[2]) * 0.5;
  dVar10 = (param_4[4] - param_4[1]) * 0.5;
  dVar1 = (param_4[3] - *param_4) * 0.5;
  auVar2._4_4_ = (float)(param_4[1] + dVar10 + (double)param_1[0xf]);
  auVar2._0_4_ = (float)(*param_4 + dVar1 + (double)param_1[0xe]);
  auVar2._8_4_ = (float)(param_4[2] + dVar8 + (double)param_1[0x10]);
  auVar2._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x1a) = auVar2;
  fVar11 = (float)(double)param_1[0x10];
  fVar7 = (float)(double)param_1[0xe];
  auVar15._4_4_ = (float)(double)param_1[0xf];
  auVar15._0_4_ = fVar7;
  auVar15._8_4_ = fVar11;
  auVar15._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x1c) = auVar15;
  fVar14 = (float)param_6[2];
  fVar17 = (float)*param_6;
  fVar18 = (float)param_6[1];
  auVar3._4_4_ = fVar18;
  auVar3._0_4_ = fVar17;
  auVar3._8_4_ = fVar14;
  auVar3._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x22) = auVar3;
  *(float *)(param_1 + 0x1e) = (float)param_7 * fVar17 + fVar7;
  *(float *)((longlong)param_1 + 0xf4) = (float)param_7 * fVar18 + (float)(double)param_1[0xf];
  *(float *)(param_1 + 0x1f) = (float)param_7 * fVar14 + fVar11;
  *(float *)((longlong)param_1 + 0xfc) = (float)param_7 * 0.0 + 0.0;
  fVar7 = (float)(double)param_1[0xc];
  fVar11 = (float)(double)param_1[0xd];
  fVar12 = (float)(double)param_1[10];
  fVar13 = (float)(double)param_1[0xb];
  *(uint *)(param_1 + 0x26) = -(uint)(ABS(fVar17) < 1e-08);
  *(uint *)((longlong)param_1 + 0x134) = -(uint)(ABS(fVar18) < 1e-08);
  *(uint *)(param_1 + 0x27) = -(uint)(ABS(fVar14) < 1e-08);
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0xffffffff;
  auVar15 = _DAT_1499314a0;
  auVar4._4_4_ = fVar18;
  auVar4._0_4_ = fVar17;
  auVar4._8_4_ = fVar14;
  auVar4._12_4_ = 0;
  auVar19 = divps(_DAT_1499314a0,auVar4);
  *(uint *)(param_1 + 0x20) = ~-(uint)(ABS(fVar17) < 1e-08) & auVar19._0_4_;
  *(uint *)((longlong)param_1 + 0x104) = ~-(uint)(ABS(fVar18) < 1e-08) & auVar19._4_4_;
  *(uint *)(param_1 + 0x21) = ~-(uint)(ABS(fVar14) < 1e-08) & auVar19._8_4_;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  fVar14 = fVar12 * fVar12 + fVar13 * fVar13;
  fVar17 = fVar7 * fVar7 + fVar11 * fVar11;
  *(float *)(param_1 + 0x28) = (float)ABS(dVar1);
  *(float *)((longlong)param_1 + 0x144) = (float)ABS(dVar10);
  *(float *)(param_1 + 0x29) = (float)ABS(dVar8);
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  auVar9._0_4_ = fVar17 + fVar14;
  auVar9._4_4_ = fVar17 + fVar14;
  auVar9._8_4_ = fVar14 + fVar17;
  auVar9._12_4_ = fVar14 + fVar17;
  auVar19 = sqrtps(auVar9,auVar9);
  auVar15 = divps(auVar15,auVar19);
  auVar16._0_4_ = auVar15._0_4_ * fVar12;
  auVar16._4_4_ = auVar15._4_4_ * fVar13;
  auVar16._8_4_ = auVar15._8_4_ * fVar7;
  auVar16._12_4_ = auVar15._12_4_ * fVar11;
  auVar19._4_4_ = -(uint)(1e-08 <= auVar9._4_4_);
  auVar19._0_4_ = -(uint)(1e-08 <= auVar9._0_4_);
  auVar19._8_4_ = -(uint)(1e-08 <= auVar9._8_4_);
  auVar19._12_4_ = -(uint)(1e-08 <= auVar9._12_4_);
  auVar15 = blendvps(_DAT_149932320,auVar16,auVar19);
  *(undefined1 (*) [16])(param_1 + 0x24) = auVar15;
  return;
}



// FUNCTION 146da9b4c FUN_146da9b4c body=2375 status=ok
// SIG undefined FUN_146da9b4c(void)

void FUN_146da9b4c(double param_1,double *param_2,double *param_3,double param_4,double *param_5,
                  undefined8 param_6)

{
  byte *pbVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  byte bVar8;
  double dVar9;
  char cVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  size_t _Size;
  undefined8 uVar25;
  longlong lVar26;
  uint uVar27;
  bool bVar28;
  double dVar29;
  undefined1 auVar30 [16];
  double *pdVar31;
  double dVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStack_1e8 [32];
  double local_1c8;
  uint local_1bc;
  ulonglong local_1b8;
  double *local_1b0;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  ulonglong local_198;
  int local_18c;
  int local_188;
  int local_184;
  uint local_180;
  uint local_17c;
  longlong local_178;
  double local_170;
  double *local_168;
  undefined8 **local_160;
  undefined8 *local_158;
  undefined8 uStack_150;
  double local_140;
  double *local_138;
  int local_130;
  uint local_128;
  uint local_124;
  double local_120;
  double local_118 [4];
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  dVar29 = *param_5;
  dVar2 = param_5[1];
  local_118[3] = *(double *)((longlong)param_1 + 0x138) - dVar29;
  local_f0 = *(double *)((longlong)param_1 + 0x150) + dVar29;
  local_e8 = *(double *)((longlong)param_1 + 0x158) + dVar2;
  local_f8 = *(double *)((longlong)param_1 + 0x140) - dVar2;
  dVar3 = *param_3;
  dVar4 = param_3[1];
  dVar5 = *(double *)((longlong)param_1 + 0x50);
  dVar6 = *(double *)((longlong)param_1 + 0x58);
  dVar32 = (double)(-(ulonglong)(0.0 < dVar4) & 0x3ff0000000000000 |
                   (ulonglong)
                   (~(uint)(-(ulonglong)(0.0 < dVar4) >> 0x20) &
                   (uint)(-(ulonglong)(dVar4 < 0.0) >> 0x20) & 0xbff00000) << 0x20) * dVar2;
  local_170 = (double)(-(ulonglong)(0.0 < dVar3) & 0x3ff0000000000000 |
                      (ulonglong)
                      (~(uint)(-(ulonglong)(0.0 < dVar3) >> 0x20) &
                      (uint)(-(ulonglong)(dVar3 < 0.0) >> 0x20) & 0xbff00000) << 0x20) * dVar29;
  local_138 = (double *)(param_2[1] - dVar32);
  local_140 = *param_2 - local_170;
  local_168 = (double *)(dVar4 * param_4 + param_2[1] + dVar32);
  local_170 = dVar3 * param_4 + *param_2 + local_170;
  local_118[0] = dVar29;
  local_118[1] = dVar2;
  cVar10 = FUN_1448596be();
  if (cVar10 != '\0') {
    dVar3 = *(double *)((longlong)param_1 + 0xb0);
    dVar4 = *(double *)((longlong)param_1 + 0xb8);
    dVar32 = *(double *)((longlong)param_1 + 0xe0);
    dVar7 = *(double *)((longlong)param_1 + 0xd8);
    uVar15 = (uint)((local_140 / dVar5 - dVar3) / dVar7);
    uVar20 = (uint)(((double)local_138 / dVar6 - dVar4) / dVar32);
    iVar13 = *(int *)((longlong)param_1 + 0xd0);
    uVar16 = iVar13 - 1;
    uVar23 = 0;
    if (0 < (int)uVar15) {
      uVar23 = uVar15;
    }
    if (iVar13 <= (int)uVar15) {
      uVar23 = uVar16;
    }
    iVar11 = *(int *)((longlong)param_1 + 0xd4);
    uVar15 = 0;
    if (0 < (int)uVar20) {
      uVar15 = uVar20;
    }
    uVar27 = iVar11 - 1;
    if (iVar11 <= (int)uVar20) {
      uVar15 = uVar27;
    }
    uVar21 = (uint)((local_170 / dVar5 - dVar3) / dVar7);
    uVar22 = (uint)(((double)local_168 / dVar6 - dVar4) / dVar32);
    uVar20 = 0;
    if (0 < (int)uVar21) {
      uVar20 = uVar21;
    }
    if (iVar13 <= (int)uVar21) {
      uVar20 = uVar16;
    }
    uVar21 = 0;
    if (0 < (int)uVar22) {
      uVar21 = uVar22;
    }
    if (iVar11 <= (int)uVar22) {
      uVar21 = uVar27;
    }
    uVar22 = -(uVar20 - uVar23);
    if ((int)uVar22 < 0) {
      uVar22 = uVar20 - uVar23;
    }
    uVar18 = -(uVar21 - uVar15);
    if ((int)uVar18 < 0) {
      uVar18 = uVar21 - uVar15;
    }
    local_120 = param_4;
    if (uVar18 == 0 && uVar22 == 0) {
      uVar33 = SUB84(local_140,0);
      uVar34 = (int)((ulonglong)local_140 >> 0x20);
      if (local_170 <= local_140) {
        uVar33 = SUB84(local_170,0);
        uVar34 = (int)((ulonglong)local_170 >> 0x20);
      }
      uVar35 = SUB84(local_138,0);
      uVar36 = (undefined4)((ulonglong)local_138 >> 0x20);
      if ((double)local_168 <= (double)local_138) {
        uVar35 = SUB84(local_168,0);
        uVar36 = (undefined4)((ulonglong)local_168 >> 0x20);
      }
      uVar15 = (uint)((((double)CONCAT44(uVar34,uVar33) - dVar29) / dVar5 - dVar3) / dVar7);
      uVar20 = (uint)((((double)CONCAT44(uVar36,uVar35) - dVar2) / dVar6 - dVar4) / dVar32);
      uVar23 = 0;
      if (0 < (int)uVar15) {
        uVar23 = uVar15;
      }
      dVar9 = local_140;
      if (local_140 <= local_170) {
        dVar9 = local_170;
      }
      if (iVar13 <= (int)uVar15) {
        uVar23 = uVar16;
      }
      uVar15 = 0;
      if (0 < (int)uVar20) {
        uVar15 = uVar20;
      }
      if (iVar11 <= (int)uVar20) {
        uVar15 = uVar27;
      }
      pdVar31 = local_138;
      if ((double)local_138 <= (double)local_168) {
        pdVar31 = local_168;
      }
      uVar21 = (uint)(((dVar9 + dVar29) / dVar5 - dVar3) / dVar7);
      uVar22 = (uint)((((double)pdVar31 + dVar2) / dVar6 - dVar4) / dVar32);
      uVar20 = 0;
      if (0 < (int)uVar21) {
        uVar20 = uVar21;
      }
      if (iVar13 <= (int)uVar21) {
        uVar20 = uVar16;
      }
      uVar16 = 0;
      if (0 < (int)uVar22) {
        uVar16 = uVar22;
      }
      if (iVar11 <= (int)uVar22) {
        uVar16 = uVar27;
      }
      if ((int)uVar15 <= (int)uVar16) {
        do {
          uVar27 = uVar23;
          if ((int)uVar23 <= (int)uVar20) {
            do {
              cVar10 = FUN_146daa494(param_6,(*(ushort *)((longlong)param_1 + 0x92) - 1) * uVar15 +
                                             uVar27,&local_120);
              if (cVar10 == '\0') goto LAB_146da9f1e;
              uVar27 = uVar27 + 1;
            } while (uVar20 + 1 != uVar27);
          }
          bVar28 = uVar15 != uVar16;
          uVar15 = uVar15 + 1;
        } while (bVar28);
      }
    }
    else {
      local_1bc = CONCAT31(local_1bc._1_3_,(int)uVar23 < (int)uVar20);
      local_1a4 = CONCAT31(local_1a4._1_3_,(int)uVar15 < (int)uVar21);
      uVar16 = uVar22 - uVar18;
      local_198 = (ulonglong)uVar16;
      local_19c = (uint)(uVar22 < uVar18 || uVar16 == 0);
      local_1a0 = (uint)(uVar22 >= uVar18 && uVar16 != 0);
      local_1c8 = *(double *)((longlong)param_1 + 0xd0);
      iVar11 = (int)((ulonglong)local_1c8 >> 0x20) * SUB84(local_1c8,0);
      iVar13 = iVar11 + 7;
      if (-1 < iVar11) {
        iVar13 = iVar11;
      }
      local_130 = (iVar13 >> 3) + 1;
      _Size = (size_t)local_130;
      local_1b8 = (ulonglong)uVar23;
      local_140 = local_1c8;
      local_128 = local_19c;
      local_124 = local_1a0;
      local_1b0 = (double *)FUN_14001cc68(_Size + (_Size == 0));
      lVar19 = 0;
      local_138 = local_1b0;
      memset(local_1b0,0,_Size);
      local_158 = (undefined8 *)0x0;
      uVar25 = CONCAT44(uVar15,(undefined4)local_1b8);
      uStack_150 = 1;
      FUN_146daad68(&local_158,0);
      *local_158 = uVar25;
      uVar16 = (uint)local_1b8;
      iVar11 = uVar15 * local_1c8._0_4_ + uVar16;
      iVar13 = uVar15 * local_1c8._0_4_ + uVar16 + 7;
      if (-1 < iVar11) {
        iVar13 = iVar11;
      }
      local_158[1] = 0xbff0000000000000;
      pbVar1 = (byte *)((longlong)local_1b0 + (longlong)(iVar13 >> 3));
      *pbVar1 = *pbVar1 | (byte)(1 << ((byte)iVar11 & 7));
      if (0 < (int)uStack_150) {
        local_184 = -uVar18;
        local_188 = (local_1bc & 0xff) * 2 + -1;
        local_18c = (local_1a4 & 0xff) * 2 + -1;
        local_19c = -local_19c;
        local_1a0 = -local_1a0;
        lVar26 = 8;
        local_1c8 = (double)(local_1b8 & 0xffffffff);
        local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar15);
        uVar24 = local_1b8;
        iVar13 = (int)uStack_150;
        local_1bc = uVar15;
        local_1a8 = uVar16;
        do {
          dVar29 = *(double *)((longlong)local_158 + lVar26);
          if (dVar29 <= local_120) {
            local_178 = *(longlong *)((longlong)local_158 + lVar26 + -8);
            local_168 = &local_140;
            local_160 = &local_158;
            iVar11 = (int)local_178;
            iVar13 = 0;
            if (0 < iVar11) {
              iVar13 = iVar11;
            }
            if (*(int *)((longlong)param_1 + 0xd0) <= iVar11) {
              iVar13 = *(int *)((longlong)param_1 + 0xd0) + -1;
            }
            iVar14 = (int)((ulonglong)local_178 >> 0x20);
            iVar17 = 0;
            if (iVar14 != 0 && -1 < local_178) {
              iVar17 = iVar14;
            }
            if (*(int *)((longlong)param_1 + 0xd4) <= iVar14) {
              iVar17 = *(int *)((longlong)param_1 + 0xd4) + -1;
            }
            local_170 = param_1;
            if (((iVar13 == iVar11) && (iVar17 == iVar14)) &&
               (local_1b8 = uVar24,
               cVar10 = FUN_146daa494(param_6,(*(ushort *)((longlong)param_1 + 0x92) - 1) * iVar14 +
                                              iVar11,&local_120), uVar24 = local_1b8, cVar10 == '\0'
               )) break;
            if (dVar29 < 0.0) {
              uVar12 = (ulonglong)((local_1a0 & 1) << 3);
              auVar30._0_8_ =
                   *(double *)((longlong)local_118 + uVar12) /
                   ABS(*(double *)((longlong)param_1 + 0x50 + uVar12));
              auVar30._8_8_ = 0;
              if (0.0 <= auVar30._0_8_) {
                auVar30 = roundpd(auVar30,auVar30,2);
                dVar29 = auVar30._0_8_;
              }
              else {
                auVar30 = roundpd(auVar30,auVar30,1);
                dVar29 = auVar30._0_8_;
              }
              local_1a4 = (uint)dVar29;
              local_1b8 = uVar24;
              FUN_146daa7c6(&local_170,&local_178,&local_128);
              local_180 = local_19c;
              local_17c = local_1a0;
              FUN_146daa7c6(&local_170,&local_178,&local_180,local_1a4);
              uVar24 = local_1b8;
              if ((local_1c8._0_4_ == uVar20) && ((uint)local_1b0 == uVar21)) {
                local_1c8 = (double)(ulonglong)uVar20;
                local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar21);
              }
              else {
                iVar13 = (int)local_198 * 2;
                if (local_184 <= iVar13) {
                  local_198 = (ulonglong)((int)local_198 - uVar18);
                  local_1a8 = local_1c8._0_4_ + local_188;
                  local_1c8 = (double)(ulonglong)local_1a8;
                  uVar24 = (ulonglong)local_1a8;
                }
                uVar16 = local_1bc;
                if (iVar13 <= (int)uVar22) {
                  local_198 = (ulonglong)((int)local_198 + uVar22);
                  uVar15 = (uint)local_1b0 + local_18c;
                  local_1c8 = (double)(ulonglong)local_1a8;
                  uVar16 = uVar15;
                }
                uVar27 = local_140._0_4_ * uVar16 + SUB84(local_1c8,0);
                uVar23 = local_140._0_4_ * uVar16 + SUB84(local_1c8,0) + 7;
                if (-1 < (int)uVar27) {
                  uVar23 = uVar27;
                }
                bVar8 = *(byte *)((longlong)local_138 + (longlong)((int)uVar23 >> 3));
                if ((bVar8 >> (uVar27 & 7) & 1) == 0) {
                  *(byte *)((longlong)local_138 + (longlong)((int)uVar23 >> 3)) =
                       (byte)(1 << ((byte)uVar27 & 7)) | bVar8;
                  local_1c8 = (double)(longlong)(int)uStack_150;
                  uVar16 = (int)uStack_150 + 1;
                  uStack_150 = CONCAT44(uStack_150._4_4_,uVar16);
                  if (uStack_150._4_4_ < uVar16) {
                    local_1b8 = uVar24;
                    FUN_146daad68(&local_158,local_1c8);
                    uVar24 = local_1b8;
                  }
                  local_1a8 = (uint)uVar24;
                  local_158[(longlong)local_1c8 * 2] =
                       uVar24 & 0xffffffff | (ulonglong)uVar15 << 0x20;
                  local_158[(longlong)local_1c8 * 2 + 1] = 0xbff0000000000000;
                  local_1c8 = (double)(uVar24 & 0xffffffff);
                  local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar15);
                  local_1bc = uVar15;
                }
                else {
                  local_1b0 = (double *)CONCAT44(local_1b0._4_4_,uVar16);
                  local_1bc = uVar16;
                }
              }
            }
            iVar13 = (int)uStack_150;
          }
          lVar19 = lVar19 + 1;
          lVar26 = lVar26 + 0x10;
        } while (lVar19 < iVar13);
      }
      if (local_158 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (local_138 != (double *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_146da9f1e:
  if ((local_e0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146daa494 FUN_146daa494 body=817 status=ok
// SIG undefined FUN_146daa494(void)

undefined8 FUN_146daa494(longlong param_1,uint param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar22;
  float fVar23;
  undefined1 auVar18 [16];
  float fVar24;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar36;
  float fVar37;
  undefined1 auVar34 [16];
  float fVar38;
  undefined1 auVar35 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar46 [16];
  float fVar47;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  float fVar48;
  undefined1 auStack_118 [32];
  float *local_f8;
  longlong local_e8;
  double *local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar4 = *(longlong **)(param_1 + 0x48);
  if ((((int)param_2 < 0) || ((int)plVar4[5] <= (int)param_2)) ||
     (*(char *)(plVar4[4] + (ulonglong)param_2) != -1)) {
    uVar3 = *(ushort *)((longlong)plVar4 + 0x72);
    iVar13 = (int)param_2 / (int)(uVar3 - 1) + param_2;
    dVar1 = (double)plVar4[0xc];
    lVar5 = *plVar4;
    lVar15 = (longlong)iVar13;
    dVar2 = (double)plVar4[0x10];
    iVar14 = iVar13 / (int)(uint)uVar3;
    auVar27._8_8_ = in_XMM2._8_8_;
    auVar27._0_8_ = (double)*(ushort *)(lVar5 + lVar15 * 2) * dVar2 + dVar1;
    auVar28._4_12_ = auVar27._4_12_;
    auVar28._0_4_ = (float)auVar27._0_8_;
    auVar39._4_12_ = in_XMM4._4_12_;
    auVar39._0_4_ = (float)((double)*(ushort *)(lVar5 + 2 + lVar15 * 2) * dVar2 + dVar1);
    auVar42._4_12_ = in_XMM5._4_12_;
    auVar42._0_4_ =
         (float)((double)*(ushort *)(lVar5 + ((ulonglong)uVar3 + lVar15) * 2) * dVar2 + dVar1);
    auVar25._4_12_ = unaff_XMM8._4_12_;
    auVar25._0_4_ = (float)iVar14;
    fVar32 = (float)(iVar13 % (int)(uint)uVar3);
    fVar47 = (float)((double)*(ushort *)(lVar5 + 2 + ((ulonglong)uVar3 + lVar15) * 2) * dVar2 +
                    dVar1);
    auVar18 = insertps(ZEXT416((uint)fVar32),auVar25,0x1c);
    auVar43 = insertps(auVar18,auVar28,0x20);
    auVar44 = insertps(ZEXT416((uint)(fVar32 + 1.0)),auVar25,0x1c);
    auVar45 = insertps(auVar44,auVar39,0x20);
    auVar46._0_4_ = auVar25._0_4_ + 1.0;
    auVar46._4_12_ = auVar25._4_12_;
    auVar44 = insertps(ZEXT416((uint)fVar32),auVar46,0x1c);
    auVar34 = insertps(auVar44,auVar42,0x20);
    auVar25 = insertps(ZEXT416((uint)(fVar32 + 1.0)),auVar46,0x1c);
    auVar44._4_4_ = unaff_XMM9_Db;
    auVar44._0_4_ = fVar47;
    auVar44._8_4_ = unaff_XMM9_Dc;
    auVar44._12_4_ = unaff_XMM9_Dd;
    auVar44 = insertps(auVar25,auVar44,0x20);
    fVar32 = auVar42._0_4_;
    if (fVar47 <= auVar42._0_4_) {
      fVar32 = fVar47;
    }
    fVar48 = auVar39._0_4_;
    if (fVar32 <= auVar39._0_4_) {
      fVar48 = fVar32;
    }
    fVar32 = auVar28._0_4_;
    if (fVar48 <= auVar28._0_4_) {
      fVar32 = fVar48;
    }
    if (auVar42._0_4_ <= fVar47) {
      auVar42._0_4_ = fVar47;
    }
    if (auVar39._0_4_ <= auVar42._0_4_) {
      auVar39._0_4_ = auVar42._0_4_;
    }
    if (auVar28._0_4_ <= auVar39._0_4_) {
      auVar28._0_4_ = auVar39._0_4_;
    }
    auVar25 = insertps(auVar25,auVar28,0x20);
    auVar6._4_4_ = (int)((ulonglong)auVar27._0_8_ >> 0x20);
    auVar6._0_4_ = fVar32;
    auVar6._8_4_ = in_XMM2._8_4_;
    auVar6._12_4_ = in_XMM2._12_4_;
    auVar18 = insertps(auVar18,auVar6,0x20);
    fVar32 = *(float *)(plVar4 + 10);
    fVar47 = *(float *)((longlong)plVar4 + 0x54);
    fVar48 = *(float *)(plVar4 + 0xb);
    fVar7 = *(float *)((longlong)plVar4 + 0x5c);
    local_d8 = auVar43._0_4_ * fVar32;
    fStack_d4 = auVar43._4_4_ * fVar47;
    fStack_d0 = auVar43._8_4_ * fVar48;
    fStack_cc = auVar43._12_4_ * fVar7;
    local_c8 = auVar45._0_4_ * fVar32;
    fStack_c4 = auVar45._4_4_ * fVar47;
    fStack_c0 = auVar45._8_4_ * fVar48;
    fStack_bc = auVar45._12_4_ * fVar7;
    local_b8 = auVar34._0_4_ * fVar32;
    fStack_b4 = auVar34._4_4_ * fVar47;
    fStack_b0 = auVar34._8_4_ * fVar48;
    fStack_ac = auVar34._12_4_ * fVar7;
    local_a8 = auVar44._0_4_ * fVar32;
    fStack_a4 = auVar44._4_4_ * fVar47;
    fStack_a0 = auVar44._8_4_ * fVar48;
    fStack_9c = auVar44._12_4_ * fVar7;
    auVar34._0_8_ = CONCAT44(auVar18._4_4_ * fVar47,auVar18._0_4_ * fVar32);
    auVar34._8_4_ = auVar18._8_4_ * fVar48;
    auVar34._12_4_ = auVar18._12_4_ * fVar7;
    auVar18._0_4_ = auVar25._0_4_ * fVar32;
    auVar18._4_4_ = auVar25._4_4_ * fVar47;
    auVar18._8_4_ = auVar25._8_4_ * fVar48;
    auVar18._12_4_ = auVar25._12_4_ * fVar7;
    auVar43._8_4_ = auVar34._8_4_;
    auVar43._0_8_ = auVar34._0_8_;
    auVar43._12_4_ = auVar34._12_4_;
    auVar25 = minps(auVar43,auVar18);
    auVar44 = maxps(auVar34,auVar18);
    fVar32 = *(float *)(param_1 + 0xd0);
    fVar47 = *(float *)(param_1 + 0xd4);
    fVar48 = *(float *)(param_1 + 0xd8);
    fVar7 = *(float *)(param_1 + 0xdc);
    uVar8 = *(uint *)(param_1 + 0x130);
    uVar9 = *(uint *)(param_1 + 0x134);
    uVar10 = *(uint *)(param_1 + 0x138);
    uVar11 = *(uint *)(param_1 + 0x13c);
    fVar33 = auVar25._0_4_ - *(float *)(param_1 + 0x140);
    fVar36 = auVar25._4_4_ - *(float *)(param_1 + 0x144);
    fVar37 = auVar25._8_4_ - *(float *)(param_1 + 0x148);
    fVar38 = auVar25._12_4_ - *(float *)(param_1 + 0x14c);
    fVar17 = auVar44._0_4_ + *(float *)(param_1 + 0x140);
    fVar22 = auVar44._4_4_ + *(float *)(param_1 + 0x144);
    fVar23 = auVar44._8_4_ + *(float *)(param_1 + 0x148);
    fVar24 = auVar44._12_4_ + *(float *)(param_1 + 0x14c);
    auVar45._0_4_ = -(uint)(fVar17 < fVar32 || fVar32 < fVar33) & uVar8;
    auVar45._4_4_ = -(uint)(fVar22 < fVar47 || fVar47 < fVar36) & uVar9;
    auVar45._8_4_ = -(uint)(fVar23 < fVar48 || fVar48 < fVar37) & uVar10;
    auVar45._12_4_ = -(uint)(fVar24 < fVar7 || fVar7 < fVar38) & uVar11;
    iVar13 = movmskps(iVar14,auVar45);
    local_e8 = param_1;
    local_e0 = param_3;
    if (iVar13 == 0) {
      auVar26._0_4_ = (float)*param_3;
      auVar26._4_4_ = auVar26._0_4_;
      auVar26._8_4_ = auVar26._0_4_;
      auVar26._12_4_ = auVar26._0_4_;
      auVar40._0_8_ =
           CONCAT44(~uVar9 & (uint)((fVar36 - fVar47) * *(float *)(param_1 + 0x104)),
                    ~uVar8 & (uint)((fVar33 - fVar32) * *(float *)(param_1 + 0x100)));
      auVar40._8_4_ = ~uVar10 & (uint)((fVar37 - fVar48) * *(float *)(param_1 + 0x108));
      auVar40._12_4_ = ~uVar11 & (uint)((fVar38 - fVar7) * *(float *)(param_1 + 0x10c));
      auVar35._0_4_ = ~uVar8 & (uint)((fVar17 - fVar32) * *(float *)(param_1 + 0x100));
      auVar35._4_4_ = ~uVar9 & (uint)((fVar22 - fVar47) * *(float *)(param_1 + 0x104));
      auVar35._8_4_ = ~uVar10 & (uint)((fVar23 - fVar48) * *(float *)(param_1 + 0x108));
      auVar35._12_4_ = ~uVar11 & (uint)((fVar24 - fVar7) * *(float *)(param_1 + 0x10c));
      auVar29._0_4_ = uVar8 & (uint)auVar26._0_4_;
      auVar29._4_4_ = uVar9 & (uint)auVar26._0_4_;
      auVar29._8_4_ = uVar10 & (uint)auVar26._0_4_;
      auVar29._12_4_ = uVar11 & (uint)auVar26._0_4_;
      auVar19._8_4_ = auVar40._8_4_;
      auVar19._0_8_ = auVar40._0_8_;
      auVar19._12_4_ = auVar40._12_4_;
      auVar44 = minps(auVar19,auVar29 | auVar35);
      auVar25 = maxps(auVar40,auVar29 | auVar35);
      auVar20._12_4_ = auVar44._12_4_;
      auVar30._0_8_ = auVar44._4_8_;
      auVar30._8_4_ = auVar44._0_4_;
      auVar30._12_4_ = auVar20._12_4_;
      auVar18 = maxps(auVar44,auVar30);
      auVar20._4_4_ = auVar44._0_4_;
      auVar20._0_4_ = auVar44._8_4_;
      auVar20._8_4_ = auVar44._4_4_;
      auVar44 = maxps(auVar18,auVar20);
      auVar18 = maxps(auVar44,ZEXT816(0));
      auVar41._12_4_ = auVar25._12_4_;
      auVar21._0_8_ = auVar25._4_8_;
      auVar21._8_4_ = auVar25._0_4_;
      auVar21._12_4_ = auVar41._12_4_;
      auVar44 = minps(auVar25,auVar21);
      auVar41._4_4_ = auVar25._0_4_;
      auVar41._0_4_ = auVar25._8_4_;
      auVar41._8_4_ = auVar25._4_4_;
      auVar44 = minps(auVar44,auVar41);
      auVar44 = minps(auVar44,auVar26);
      auVar31._4_4_ = -(uint)(auVar44._4_4_ < auVar18._4_4_);
      auVar31._0_4_ = -(uint)(auVar44._0_4_ < auVar18._0_4_);
      auVar31._8_4_ = -(uint)(auVar44._8_4_ < auVar18._8_4_);
      auVar31._12_4_ = -(uint)(auVar44._12_4_ < auVar18._12_4_);
      iVar13 = movmskps(0,auVar31);
      if (iVar13 == 0) {
        local_f8 = &local_a8;
        cVar12 = FUN_146daa8c8(&local_e8,param_2 * 2,&local_d8,&local_c8);
        if (cVar12 != '\0') {
          local_f8 = &local_b8;
          cVar12 = FUN_146daa8c8(&local_e8,param_2 * 2 | 1,&local_d8,&local_a8);
          if (cVar12 != '\0') goto LAB_146daa712;
        }
        uVar16 = 0;
        goto LAB_146daa714;
      }
    }
  }
LAB_146daa712:
  uVar16 = 1;
LAB_146daa714:
  if ((local_90 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16;
}



// FUNCTION 146daa7c6 FUN_146daa7c6 body=257 status=ok
// SIG undefined FUN_146daa7c6(void)

void FUN_146daa7c6(longlong *param_1,ulonglong *param_2,int *param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  if (0 < param_4) {
    lVar2 = *param_1;
    uVar11 = *param_2;
    uVar8 = uVar11 >> 0x20;
    while( true ) {
      uVar10 = (int)uVar11 + *param_3;
      uVar11 = (ulonglong)uVar10;
      if ((int)uVar10 < 0) break;
      uVar7 = (int)uVar8 + param_3[1];
      uVar8 = (ulonglong)uVar7;
      if ((int)uVar7 < 0) {
        return;
      }
      if (*(int *)(lVar2 + 0xd0) <= (int)uVar10) {
        return;
      }
      if (*(int *)(lVar2 + 0xd4) <= (int)uVar7) {
        return;
      }
      iVar5 = *(int *)param_1[1] * uVar7;
      uVar9 = iVar5 + uVar10;
      uVar6 = iVar5 + uVar10 + 7;
      if (-1 < (int)uVar9) {
        uVar6 = uVar9;
      }
      lVar3 = *(longlong *)((int *)param_1[1] + 2);
      bVar1 = *(byte *)(lVar3 + ((int)uVar6 >> 3));
      if ((bVar1 >> (uVar9 & 7) & 1) == 0) {
        *(byte *)(lVar3 + ((int)uVar6 >> 3)) = (byte)(1 << ((byte)uVar9 & 7)) | bVar1;
        plVar4 = (longlong *)param_1[2];
        iVar5 = (int)plVar4[1];
        *(uint *)(plVar4 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)plVar4 + 0xc) < iVar5 + 1U) {
          FUN_146daad68(plVar4,iVar5);
        }
        lVar3 = *plVar4;
        *(ulonglong *)(lVar3 + (longlong)iVar5 * 0x10) = CONCAT44(uVar7,uVar10);
        *(undefined8 *)(lVar3 + 8 + (longlong)iVar5 * 0x10) = 0;
      }
      param_4 = param_4 + -1;
      if (param_4 == 0) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 146daa8c8 FUN_146daa8c8 body=1183 status=ok
// SIG undefined FUN_146daa8c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_146daa8c8(longlong *param_1,undefined4 param_2,float *param_3,float *param_4,float *param_5
                  )

{
  double dVar1;
  double dVar3;
  double *pdVar4;
  double dVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  double *pdVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar19;
  float fVar20;
  undefined1 auVar18 [16];
  float fVar21;
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
  undefined1 auStack_188 [32];
  double *local_168;
  double *local_160;
  undefined8 **local_158;
  float *local_150;
  float *local_148;
  undefined1 local_140;
  undefined *local_138;
  float local_128;
  float fStack_124;
  float fStack_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined8 *local_b8;
  double dStack_b0;
  code *local_a8;
  double local_98 [2];
  code *local_88;
  ulonglong local_80;
  double dVar2;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_188;
  pdVar4 = (double *)*param_1;
  fVar15 = *param_3;
  fVar16 = param_3[1];
  fVar17 = param_3[2];
  local_c8 = *param_5 - fVar15;
  fStack_c4 = param_5[1] - fVar16;
  fStack_c0 = param_5[2] - fVar17;
  fStack_bc = param_5[3] - param_3[3];
  local_d8 = *param_4 - fVar15;
  fStack_d4 = param_4[1] - fVar16;
  fStack_d0 = param_4[2] - fVar17;
  fStack_cc = param_4[3] - param_3[3];
  local_e8 = 0;
  uStack_e0 = 0;
  fStack_f0 = (float)(pdVar4[0x10] - (double)(float)*(undefined8 *)(param_3 + 2));
  fStack_ec = (float)(pdVar4[0x11] -
                     (double)(float)((ulonglong)*(undefined8 *)(param_3 + 2) >> 0x20));
  local_f8 = (float)(pdVar4[0xe] - (double)fVar15);
  fStack_f4 = (float)(pdVar4[0xf] - (double)fVar16);
  fVar21 = fStack_c4 * local_d8 - fStack_d4 * local_c8;
  fVar23 = fStack_c0 * fStack_d4 - fStack_d0 * fStack_c4;
  fVar25 = local_c8 * fStack_d0 - local_d8 * fStack_c0;
  fVar27 = fStack_bc * fStack_cc - fStack_cc * fStack_bc;
  fVar27 = fVar27 * fVar27;
  fVar22 = fVar25 * fVar25 + fVar23 * fVar23;
  fVar24 = fVar23 * fVar23 + fVar25 * fVar25;
  fVar26 = fVar27 + fVar21 * fVar21;
  fVar27 = fVar21 * fVar21 + fVar27;
  auVar18._0_4_ = fVar26 + fVar22;
  auVar18._4_4_ = fVar27 + fVar24;
  auVar18._8_4_ = fVar22 + fVar26;
  auVar18._12_4_ = fVar24 + fVar27;
  auVar18 = sqrtps(auVar18,auVar18);
  auVar18 = divps(_DAT_1499314a0,auVar18);
  fVar23 = auVar18._0_4_ * fVar23;
  fVar25 = auVar18._4_4_ * fVar25;
  fVar21 = auVar18._8_4_ * fVar21;
  fVar28 = *(float *)(pdVar4 + 0x24) * -1.0;
  fVar29 = *(float *)((longlong)pdVar4 + 0x124) * -1.0;
  fVar30 = *(float *)(pdVar4 + 0x25) * -1.0;
  fVar31 = *(float *)((longlong)pdVar4 + 300) * 1.0;
  fVar22 = fVar25 * fVar28 - fVar23 * fVar29;
  fVar24 = fVar21 * fVar29 - fVar25 * fVar30;
  fVar26 = fVar23 * fVar30 - fVar21 * fVar28;
  fVar22 = fVar22 + fVar22;
  fVar24 = fVar24 + fVar24;
  fVar26 = fVar26 + fVar26;
  fVar15 = fVar15 - *(float *)(pdVar4 + 0x1e);
  fVar16 = fVar16 - *(float *)((longlong)pdVar4 + 0xf4);
  fVar17 = fVar17 - *(float *)(pdVar4 + 0x1f);
  fVar27 = fVar16 * fVar28 - fVar29 * fVar15;
  fVar19 = fVar17 * fVar29 - fVar30 * fVar16;
  fVar20 = fVar15 * fVar30 - fVar28 * fVar17;
  fVar27 = fVar27 + fVar27;
  fVar19 = fVar19 + fVar19;
  fVar20 = fVar20 + fVar20;
  dVar1 = pdVar4[0x17];
  dVar2 = pdVar4[0x17];
  fVar23 = (fVar22 * fVar29 - fVar26 * fVar30) + fVar31 * fVar24 + fVar23;
  fVar25 = (fVar24 * fVar30 - fVar22 * fVar28) + fVar31 * fVar26 + fVar25;
  fVar22 = (fVar26 * fVar28 - fVar24 * fVar29) + fVar31 * fVar22 + fVar21;
  dVar5 = pdVar4[0x16];
  lVar6 = *(longlong *)((longlong)dVar5 + 0x88);
  local_98[0] = (double)(0.0 - fVar23) * *(double *)((longlong)dVar5 + 0x20);
  local_98[1] = (double)(0.0 - fVar25) * *(double *)((longlong)dVar5 + 0x28);
  local_88 = (code *)((double)(0.0 - fVar22) * *(double *)((longlong)dVar5 + 0x30));
  lVar13 = 0;
  do {
    dVar3 = *(double *)((longlong)dVar5 + 0x20 + lVar13);
    if (0.0 < *(double *)((longlong)local_98 + lVar13) ||
        *(double *)((longlong)local_98 + lVar13) == 0.0) {
      dVar3 = dVar3 * *(double *)(lVar6 + 0x38 + lVar13);
    }
    else {
      dVar3 = dVar3 * *(double *)(lVar6 + 0x20 + lVar13) + 0.0;
    }
    *(double *)((longlong)&local_b8 + lVar13) = dVar3;
    lVar13 = lVar13 + 8;
  } while (lVar13 != 0x18);
  fVar24 = (float)dVar1 - 0.0;
  fVar26 = (float)dVar2 - 0.0;
  fVar15 = fVar22 * ((fVar17 + fVar31 * fVar27 + (fVar20 * fVar28 - fVar29 * fVar19)) -
                    (float)(double)local_a8) +
           fVar23 * ((fVar15 + fVar31 * fVar19 + (fVar27 * fVar29 - fVar30 * fVar20)) -
                    (float)(double)local_b8) +
           fVar25 * ((fVar16 + fVar31 * fVar20 + (fVar19 * fVar30 - fVar28 * fVar27)) -
                    (float)dStack_b0);
  auVar7._4_4_ = -(uint)(fVar15 < fVar26);
  auVar7._0_4_ = -(uint)(fVar15 < fVar24);
  auVar7._8_4_ = -(uint)(fVar15 < fVar24);
  auVar7._12_4_ = -(uint)(fVar15 < fVar26);
  iVar12 = movmskps(0x18,auVar7);
  bVar10 = true;
  if (iVar12 == 0) {
    local_168 = pdVar4 + 0x22;
    local_98[1] = (double)(ulonglong)(uint)(float)*(double *)((longlong)dVar5 + 0x10);
    local_88 = FUN_146cc5264;
    local_b8 = &local_e8;
    dStack_b0 = 0.0;
    local_a8 = FUN_14014b546;
    local_138 = &DAT_149f52c20;
    local_148 = &local_128;
    local_150 = &local_118;
    local_158 = (undefined8 **)&local_fc;
    local_160 = (double *)CONCAT44(local_160._4_4_,(float)*(double *)param_1[1]);
    local_140 = 1;
    local_98[0] = dVar5;
    cVar11 = FUN_1448541f8(&local_b8,local_98,pdVar4 + 0x24,&local_f8);
    pdVar14 = (double *)param_1[1];
    if (cVar11 != '\0') {
      local_118 = *param_3 + local_118;
      fStack_114 = param_3[1] + fStack_114;
      fStack_110 = param_3[2] + fStack_110;
      fStack_10c = param_3[3] + fStack_10c;
      local_168 = (double *)pdVar4[0x18];
      dVar1 = *pdVar14;
      local_160 = local_98;
      local_158 = &local_b8;
      FUN_1408d1e72(SUB84((double)(fStack_120 * *(float *)(pdVar4 + 0x23) +
                                  local_128 * *(float *)(pdVar4 + 0x22) +
                                  fStack_124 * *(float *)((longlong)pdVar4 + 0x114)),0),
                    SUB84(dVar1,0),SUB84((double)local_fc,0),pdVar4[0x17]);
      dVar2 = local_98[0] * dVar1;
      if (dVar2 < dVar1) {
        *pdVar14 = dVar2;
        auVar8._8_4_ = SUB84((double)fStack_124,0);
        auVar8._0_8_ = (double)local_128;
        auVar8._12_4_ = (int)((ulonglong)(double)fStack_124 >> 0x20);
        *(undefined1 (*) [16])(pdVar4 + 5) = auVar8;
        pdVar4[7] = (double)fStack_120;
        auVar9._8_4_ = SUB84((double)fStack_114,0);
        auVar9._0_8_ = (double)local_118;
        auVar9._12_4_ = (int)((ulonglong)(double)fStack_114 >> 0x20);
        *(undefined1 (*) [16])(pdVar4 + 2) = auVar9;
        pdVar4[4] = (double)fStack_110;
        *pdVar4 = dVar2;
        pdVar4[1] = (double)local_b8;
        *(undefined4 *)(pdVar4 + 8) = param_2;
        pdVar14 = (double *)param_1[1];
      }
    }
    bVar10 = 0.0 < *pdVar14;
  }
  if ((local_80 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return bVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146daad68 FUN_146daad68 body=132 status=ok
// SIG undefined FUN_146daad68(void)

void FUN_146daad68(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}


