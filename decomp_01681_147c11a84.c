// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147c11a84 FUN_147c11a84 body=193 status=ok
// SIG undefined FUN_147c11a84(void)

void FUN_147c11a84(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x40) == 0) || (*(char *)(param_1 + 0x49) == '\0')) &&
     (*(longlong *)(param_1 + 0x88) == 0)) {
    FUN_1446f470e(&local_20,L"DistributionSourceMovementScale",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147bfacf3(param_1,local_20,0,0);
    *(undefined8 *)(lVar1 + 0x38) = 0x3ff0000000000000;
    *(undefined8 *)(lVar1 + 0x40) = 0x3ff0000000000000;
    *(undefined8 *)(lVar1 + 0x48) = 0x3ff0000000000000;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x88) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c11b46 FUN_147c11b46 body=430 status=ok
// SIG undefined FUN_147c11b46(void)

void FUN_147c11b46(longlong param_1,longlong param_2,undefined8 param_3,float param_4)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((param_2 != 0) && (lVar9 = *(longlong *)(param_2 + 0x10), lVar9 != 0)) &&
     (0 < (longlong)*(int *)(param_2 + 0x18c))) {
    dVar2 = *(double *)(lVar9 + 0x270);
    dVar3 = *(double *)(lVar9 + 0x708);
    dVar4 = *(double *)(lVar9 + 0x260);
    dVar5 = *(double *)(lVar9 + 0x268);
    dVar6 = *(double *)(lVar9 + 0x700);
    dVar7 = *(double *)(lVar9 + 0x6f8);
    lVar9 = *(longlong *)(param_2 + 0x168);
    lVar10 = *(longlong *)(param_2 + 0x170);
    iVar8 = *(int *)(param_2 + 0x188);
    uVar12 = (longlong)*(int *)(param_2 + 0x18c) + 1;
    do {
      uVar11 = (ulonglong)((uint)*(ushort *)(lVar10 + -4 + uVar12 * 2) * iVar8);
      if (((*(byte *)(lVar9 + 0x6f + uVar11) & 4) == 0) &&
         (fVar1 = *(float *)(lVar9 + 0x90 + uVar11),
         *(float *)(lVar9 + 0x94 + uVar11) * (param_4 + param_4) < fVar1)) {
        local_b0 = 0;
        local_b8 = 0;
        FUN_147a776dc(param_1 + 0x30,&local_a8,fVar1,*(undefined8 *)(param_2 + 0x10));
        *(double *)(lVar9 + 0x18 + uVar11) =
             local_a8 * (dVar4 - dVar7) + *(double *)(lVar9 + 0x18 + uVar11);
        *(double *)(lVar9 + 0x20 + uVar11) =
             local_a0 * (dVar5 - dVar6) + *(double *)(lVar9 + 0x20 + uVar11);
        *(double *)(lVar9 + 0x28 + uVar11) =
             local_98 * (dVar2 - dVar3) + *(double *)(lVar9 + 0x28 + uVar11);
      }
      uVar12 = uVar12 - 1;
    } while (1 < uVar12);
  }
  if ((local_90 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c11d02 FUN_147c11d02 body=174 status=ok
// SIG undefined FUN_147c11d02(void)

void FUN_147c11d02(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x88) == 0) || (*(char *)(param_1 + 0x91) == '\0')) &&
     (*(longlong *)(param_1 + 0xa0) == 0)) {
    FUN_1446f470e(&local_20,L"RequiredDistributionSpawnRate",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147bf866f(param_1,local_20,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0xa0) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c11db2 FUN_147c11db2 body=295 status=ok
// SIG undefined FUN_147c11db2(void)

void FUN_147c11db2(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  byte local_31;
  undefined8 *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = param_2;
  plVar2 = (longlong *)FUN_144aff0e0(&local_30);
  switchD_143c3d4dc::caseD_20(param_1,local_30);
  (**(code **)(*plVar2 + 0x218))(plVar2,&DAT_149e3cb60);
  iVar1 = FUN_1448332aa(plVar2,&DAT_149e3cb60);
  if (7 < iVar1) {
    if (plVar2[0xd] == 0) {
      local_31 = false;
    }
    else {
      local_31 = *(longlong *)(plVar2[0xd] + 0x10) != 0;
    }
    FUN_1456bb002(*local_30,&local_31);
    if ((local_31 == 0) && ((*(byte *)(plVar2 + 5) & 1) != 0)) {
      local_28 = *(undefined8 *)(param_1 + 0x18);
      FUN_1400021e4(&local_28,&local_48);
      puVar3 = local_48;
      if (local_40 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      FUN_140033559(".\\Runtime/Engine/Private/Particles/ParticleModules.cpp",0x461,
                    L"This platform requires cooked packages, and this SubUV animation does not contain cooked data %s."
                    ,puVar3);
      if (local_48 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    if ((local_31 & 1) != 0) {
      FUN_140752362(param_1 + 0x150,local_30);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c11eda FUN_147c11eda body=90 status=ok
// SIG undefined FUN_147c11eda(void)

void FUN_147c11eda(longlong param_1)

{
  int iVar1;
  
  FUN_1446e0b6e();
  iVar1 = *(int *)(param_1 + 200);
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  *(int *)(param_1 + 200) = iVar1;
  iVar1 = 1;
  if (1 < *(int *)(param_1 + 0xcc)) {
    iVar1 = *(int *)(param_1 + 0xcc);
  }
  *(int *)(param_1 + 0xcc) = iVar1;
  if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x168) + 0x18) + 8) != 0) {
    FUN_140308182(*(longlong *)(param_1 + 0x168),0);
    return;
  }
  return;
}



// FUNCTION 147c11f3a FUN_147c11f3a body=103 status=ok
// SIG undefined FUN_147c11f3a(void)

undefined8 FUN_147c11f3a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1459592dc();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      lVar1 = *(longlong *)(param_2 + 0x30);
      if (DAT_14c950c29 == '\x01') {
        if (lVar1 == 0) {
          lVar1 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar1 = *(longlong *)(param_2 + 0x30);
        }
      }
      *(longlong *)(param_1 + 0x30) = lVar1;
      *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 147c11fa2 FUN_147c11fa2 body=80 status=ok
// SIG undefined FUN_147c11fa2(void)

ulonglong FUN_147c11fa2(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined8 in_RAX;
  ulonglong uVar3;
  
  lVar1 = DAT_14caf50b0;
  if ((*(byte *)(param_1 + 0x73) & 0x10) == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar3 = 0;
    }
    else {
      bVar2 = FUN_144a61b4f();
      uVar3 = (ulonglong)(bVar2 ^ 1);
    }
    uVar3 = (ulonglong)*(byte *)(lVar1 + uVar3);
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)in_RAX >> 8),*(byte *)(param_1 + 0x73)) & 0xffffffffffffff20;
    uVar3 = CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 5);
  }
  return uVar3;
}



// FUNCTION 147c11ff2 FUN_147c11ff2 body=204 status=ok
// SIG undefined FUN_147c11ff2(void)

void FUN_147c11ff2(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x40) == 0) || (*(char *)(param_1 + 0x49) == '\0')) &&
     (*(longlong *)(param_1 + 0x88) == 0)) {
    FUN_1446f470e(&local_28,L"DistributionStartRotation",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147c120bf(param_1,local_28,0,0);
    *(undefined8 *)(lVar1 + 0x50) = 0;
    *(undefined8 *)(lVar1 + 0x58) = 0;
    *(undefined8 *)(lVar1 + 0x60) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0x3ff0000000000000;
    *(undefined8 *)(lVar1 + 0x40) = 0x3ff0000000000000;
    *(undefined8 *)(lVar1 + 0x48) = 0x3ff0000000000000;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x88) = lVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c120bf FUN_147c120bf body=217 status=ok
// SIG undefined FUN_147c120bf(void)

undefined8
FUN_147c120bf(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
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
  uVar1 = FUN_145b3c318();
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



// FUNCTION 147c1219a FUN_147c1219a body=67 status=ok
// SIG undefined FUN_147c1219a(void)

void FUN_147c1219a(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_147c05556(param_2,param_1);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_2 + 0x10) + 0x8f0;
  }
  FUN_147c121de(param_1,param_2,lVar1,param_5);
  return;
}



// FUNCTION 147c121de FUN_147c121de body=584 status=ok
// SIG undefined FUN_147c121de(void)

void FUN_147c121de(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  longlong lVar10;
  double *pdVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 local_b0;
  double local_a0;
  double local_98;
  double local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar7 = (**(code **)(*param_2 + 0x150))(param_2);
  if (iVar7 != 0) {
    lVar10 = param_1 + 0x30;
    local_b8 = 0;
    local_b0 = param_3;
    dVar9 = (double)FUN_147a776dc(lVar10,&local_a0,(int)param_2[0x34],param_2[2]);
    uVar12 = (undefined4)lVar10;
    if ((*(byte *)(param_1 + 0x90) & 1) != 0) {
      lVar10 = param_2[2];
      dVar3 = *(double *)(lVar10 + 0x240);
      dVar4 = *(double *)(lVar10 + 0x248);
      dVar5 = *(double *)(lVar10 + 0x250);
      dVar6 = *(double *)(lVar10 + 600);
      pdVar11 = *(double **)(lVar10 + 0x228);
      local_88 = dVar3;
      uStack_80 = dVar4;
      local_78 = dVar5;
      uStack_70 = dVar6;
      if (pdVar11 == (double *)0x0) {
        uVar12 = 0x40;
        pdVar11 = (double *)FUN_14001cc68(0x40,0x10);
        dVar9 = DAT_14c8463d8;
        *pdVar11 = DAT_14c8463d0;
        pdVar11[1] = dVar9;
        dVar9 = DAT_14c8463e8;
        pdVar11[2] = DAT_14c8463e0;
        pdVar11[3] = dVar9;
        dVar9 = DAT_14c846500;
        pdVar11[4] = DAT_14c8464f8;
        pdVar11[5] = dVar9;
        dVar9 = DAT_14c846508;
        pdVar11[6] = DAT_14c846508;
        *(double **)(lVar10 + 0x228) = pdVar11;
      }
      auVar1._8_4_ = (int)-(ulonglong)(dVar4 != pdVar11[1]);
      auVar1._0_8_ = -(ulonglong)(dVar3 != *pdVar11);
      auVar1._12_4_ = (int)(-(ulonglong)(dVar4 != pdVar11[1]) >> 0x20);
      iVar8 = movmskpd(SUB84(dVar9,0),auVar1);
      auVar2._8_4_ = (int)-(ulonglong)(dVar6 != pdVar11[3]);
      auVar2._0_8_ = -(ulonglong)(dVar5 != pdVar11[2]);
      auVar2._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar11[3]) >> 0x20);
      uVar13 = movmskpd(uVar12,auVar2);
      if ((uVar13 & 0x3fffffff) != 0 || iVar8 != 0) {
        *(undefined4 *)(pdVar11 + 2) = (undefined4)local_78;
        *(undefined4 *)((longlong)pdVar11 + 0x14) = local_78._4_4_;
        *(undefined4 *)(pdVar11 + 3) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)pdVar11 + 0x1c) = uStack_70._4_4_;
        *(undefined4 *)pdVar11 = (undefined4)local_88;
        *(undefined4 *)((longlong)pdVar11 + 4) = local_88._4_4_;
        *(undefined4 *)(pdVar11 + 1) = (undefined4)uStack_80;
        *(undefined4 *)((longlong)pdVar11 + 0xc) = uStack_80._4_4_;
        FUN_1448052ee(&local_88,&local_68);
        pdVar11[6] = local_58;
        pdVar11[4] = (double)CONCAT44(uStack_64,local_68);
        pdVar11[5] = (double)CONCAT44(uStack_5c,uStack_60);
      }
      local_58 = pdVar11[6];
      local_68 = *(undefined4 *)(pdVar11 + 4);
      uStack_64 = *(undefined4 *)((longlong)pdVar11 + 0x24);
      uStack_60 = *(undefined4 *)(pdVar11 + 5);
      uStack_5c = *(undefined4 *)((longlong)pdVar11 + 0x2c);
      FUN_1414d053e(&local_68,&local_88);
      local_a0 = local_88 / 360.0 + local_a0;
      local_98 = uStack_80 / 360.0 + local_98;
      local_90 = local_78 / 360.0 + local_90;
    }
    lVar10 = (longlong)iVar7;
    *(float *)(param_4 + 0xc + lVar10) = (float)local_a0 * 360.0;
    *(float *)(param_4 + 0x10 + lVar10) = (float)local_98 * 360.0;
    *(float *)(param_4 + 0x14 + lVar10) = (float)local_90 * 360.0;
    *(float *)(param_4 + 0x18 + lVar10) =
         (float)local_a0 * 360.0 + *(float *)(param_4 + 0x18 + lVar10);
    *(float *)(param_4 + 0x1c + lVar10) =
         (float)local_98 * 360.0 + *(float *)(param_4 + 0x1c + lVar10);
    *(float *)(param_4 + 0x20 + lVar10) =
         (float)local_90 * 360.0 + *(float *)(param_4 + 0x20 + lVar10);
  }
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c12428 FUN_147c12428 body=80 status=ok
// SIG undefined FUN_147c12428(void)

void FUN_147c12428(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x14) & 4) == 0) {
    return;
  }
  uVar1 = FUN_147c05556(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x000147c12475. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x368))(param_1,param_2,uVar1,param_1 + 0x13);
  return;
}



// FUNCTION 147c12478 FUN_147c12478 body=204 status=ok
// SIG undefined FUN_147c12478(void)

void FUN_147c12478(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x40) == 0) || (*(char *)(param_1 + 0x49) == '\0')) &&
     (*(longlong *)(param_1 + 0x88) == 0)) {
    FUN_1446f470e(&local_28,L"DistributionStartRotationRate",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147c120bf(param_1,local_28,0,0);
    *(undefined8 *)(lVar1 + 0x50) = 0;
    *(undefined8 *)(lVar1 + 0x58) = 0;
    *(undefined8 *)(lVar1 + 0x60) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0x4076800000000000;
    *(undefined8 *)(lVar1 + 0x40) = 0x4076800000000000;
    *(undefined8 *)(lVar1 + 0x48) = 0x4076800000000000;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x88) = lVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c12546 FUN_147c12546 body=67 status=ok
// SIG undefined FUN_147c12546(void)

void FUN_147c12546(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_147c05556(param_2,param_1);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_2 + 0x10) + 0x8f0;
  }
  FUN_147c1258a(param_1,param_2,lVar1,param_5);
  return;
}



// FUNCTION 147c1258a FUN_147c1258a body=273 status=ok
// SIG undefined FUN_147c1258a(void)

void FUN_147c1258a(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = (**(code **)(*param_2 + 0x150))(param_2);
  if (iVar1 != 0) {
    local_58 = 0;
    local_50 = param_3;
    FUN_147a776dc(param_1 + 0x30,&local_48,(int)param_2[0x34],param_2[2]);
    lVar2 = (longlong)iVar1;
    *(float *)(param_4 + 0x3c + lVar2) =
         *(float *)(param_4 + 0x3c + lVar2) + (float)(local_48 * 360.0);
    *(float *)(param_4 + 0x40 + lVar2) =
         *(float *)(param_4 + 0x40 + lVar2) + (float)(local_40 * 360.0);
    *(float *)(param_4 + 0x44 + lVar2) =
         *(float *)(param_4 + 0x44 + lVar2) + (float)(local_38 * 360.0);
    *(float *)(param_4 + 0x30 + lVar2) =
         (float)(local_48 * 360.0) + *(float *)(param_4 + 0x30 + lVar2);
    *(float *)(param_4 + 0x34 + lVar2) =
         (float)(local_40 * 360.0) + *(float *)(param_4 + 0x34 + lVar2);
    *(float *)(param_4 + 0x38 + lVar2) =
         (float)(local_38 * 360.0) + *(float *)(param_4 + 0x38 + lVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c1269c FUN_147c1269c body=129 status=ok
// SIG undefined FUN_147c1269c(void)

void FUN_147c1269c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar4 = FUN_145b3c318();
    lVar1 = *(longlong *)(param_1 + 0x88);
    if ((((lVar1 != 0) && (lVar4 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30)))) {
      *(undefined8 *)(lVar1 + 0x60) = DAT_14c8464f0;
      uVar3 = DAT_14c8464e8;
      *(undefined8 *)(lVar1 + 0x50) = DAT_14c8464e0;
      *(undefined8 *)(lVar1 + 0x58) = uVar3;
      *(undefined8 *)(lVar1 + 0x38) = 0x3ff0000000000000;
      *(undefined8 *)(lVar1 + 0x40) = 0x3ff0000000000000;
      *(undefined8 *)(lVar1 + 0x48) = 0x3ff0000000000000;
      *(byte *)(lVar1 + 0x30) = *(byte *)(lVar1 + 0x30) | 2;
    }
  }
  return;
}



// FUNCTION 147c1271e FUN_147c1271e body=80 status=ok
// SIG undefined FUN_147c1271e(void)

void FUN_147c1271e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x13) & 4) == 0) {
    return;
  }
  uVar1 = FUN_147c05556(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x000147c1276b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x368))(param_1,param_2,uVar1,param_1 + 0x12);
  return;
}



// FUNCTION 147c1276e FUN_147c1276e body=168 status=ok
// SIG undefined FUN_147c1276e(void)

void FUN_147c1276e(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x40) == 0) || (*(char *)(param_1 + 0x49) == '\0')) &&
     (*(longlong *)(param_1 + 0x88) == 0)) {
    FUN_1446f470e(&local_20,L"DistributionLifeMultiplier",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147bfacf3(param_1,local_20,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x88) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c12818 FUN_147c12818 body=202 status=ok
// SIG undefined FUN_147c12818(void)

void FUN_147c12818(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = (**(code **)(*param_2 + 0x150))(param_2);
  if (iVar1 != 0) {
    lVar2 = (longlong)iVar1;
    local_50 = 0;
    local_58 = 0;
    FUN_147a776dc(param_1 + 0x30,&local_40,*(undefined4 *)(param_5 + 0x90),param_2[2]);
    *(float *)(param_5 + 0x30 + lVar2) = (float)local_40 * *(float *)(param_5 + 0x30 + lVar2);
    *(float *)(param_5 + 0x34 + lVar2) = (float)local_38 * *(float *)(param_5 + 0x34 + lVar2);
    *(float *)(param_5 + 0x38 + lVar2) = (float)local_30 * *(float *)(param_5 + 0x38 + lVar2);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c128e4 FUN_147c128e4 body=286 status=ok
// SIG undefined FUN_147c128e4(void)

void FUN_147c128e4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar4 = (**(code **)(*param_2 + 0x150))(param_2);
  if ((iVar4 != 0) && (0 < (longlong)*(int *)((longlong)param_2 + 0x18c))) {
    lVar1 = param_2[0x2d];
    lVar2 = param_2[0x2e];
    lVar3 = param_2[0x31];
    lVar7 = (longlong)iVar4;
    uVar8 = (longlong)*(int *)((longlong)param_2 + 0x18c) + 1;
    do {
      uVar5 = (ulonglong)((uint)*(ushort *)(lVar2 + -4 + uVar8 * 2) * (int)lVar3);
      if ((*(byte *)(lVar1 + 0x6f + uVar5) & 4) == 0) {
        lVar6 = uVar5 + lVar1;
        local_70 = 0;
        local_78 = 0;
        FUN_147a776dc(param_1 + 0x30,&local_60,*(undefined4 *)(lVar6 + 0x90),param_2[2]);
        *(float *)(lVar6 + 0x30 + lVar7) = (float)local_60 * *(float *)(lVar6 + 0x30 + lVar7);
        *(float *)(lVar6 + 0x34 + lVar7) = (float)local_58 * *(float *)(lVar6 + 0x34 + lVar7);
        *(float *)(lVar6 + 0x38 + lVar7) = (float)local_50 * *(float *)(lVar6 + 0x38 + lVar7);
      }
      uVar8 = uVar8 - 1;
    } while (1 < uVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c12a04 FUN_147c12a04 body=129 status=ok
// SIG undefined FUN_147c12a04(void)

void FUN_147c12a04(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar4 = FUN_145b3c318();
    lVar1 = *(longlong *)(param_1 + 0x88);
    if ((((lVar1 != 0) && (lVar4 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30)))) {
      *(undefined8 *)(lVar1 + 0x60) = DAT_14c8464f0;
      uVar3 = DAT_14c8464e8;
      *(undefined8 *)(lVar1 + 0x50) = DAT_14c8464e0;
      *(undefined8 *)(lVar1 + 0x58) = uVar3;
      *(undefined8 *)(lVar1 + 0x38) = 0x3ff0000000000000;
      *(undefined8 *)(lVar1 + 0x40) = 0x3ff0000000000000;
      *(undefined8 *)(lVar1 + 0x48) = 0x3ff0000000000000;
      *(byte *)(lVar1 + 0x30) = *(byte *)(lVar1 + 0x30) | 2;
    }
  }
  return;
}



// FUNCTION 147c12a86 FUN_147c12a86 body=168 status=ok
// SIG undefined FUN_147c12a86(void)

void FUN_147c12a86(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x40) == 0) || (*(char *)(param_1 + 0x49) == '\0')) &&
     (*(longlong *)(param_1 + 0x88) == 0)) {
    FUN_1446f470e(&local_20,L"DistributionRotRate",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147c12b2f(param_1,local_20,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x88) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c12b2f FUN_147c12b2f body=217 status=ok
// SIG undefined FUN_147c12b2f(void)

undefined8
FUN_147c12b2f(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
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
  uVar1 = FUN_145b3c144();
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



// FUNCTION 147c12c0a FUN_147c12c0a body=254 status=ok
// SIG undefined FUN_147c12c0a(void)

void FUN_147c12c0a(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = (**(code **)(*param_2 + 0x150))(param_2);
  if (iVar1 != 0) {
    lVar2 = (longlong)iVar1;
    local_50 = 0;
    local_58 = 0;
    FUN_147a776dc(param_1 + 0x30,&local_40,*(undefined4 *)(param_5 + 0x90),param_2[2]);
    fVar5 = *(float *)(param_5 + 0x30 + lVar2);
    fVar4 = *(float *)(param_5 + 0x34 + lVar2);
    fVar3 = *(float *)(param_5 + 0x38 + lVar2);
    if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
      fVar5 = (float)local_40 * 360.0 + fVar5;
      fVar4 = (float)local_38 * 360.0 + fVar4;
      fVar3 = (float)local_30 * 360.0 + fVar3;
    }
    else {
      fVar5 = (float)local_40 * 360.0 * fVar5;
      fVar4 = (float)local_38 * 360.0 * fVar4;
      fVar3 = (float)local_30 * 360.0 * fVar3;
    }
    *(float *)(param_5 + 0x30 + lVar2) = fVar5;
    *(float *)(param_5 + 0x34 + lVar2) = fVar4;
    *(float *)(param_5 + 0x38 + lVar2) = fVar3;
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c12d0a FUN_147c12d0a body=531 status=ok
// SIG undefined FUN_147c12d0a(void)

void FUN_147c12d0a(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar5 = (**(code **)(*param_2 + 0x150))(param_2);
  if (iVar5 != 0) {
    lVar2 = param_2[0x2d];
    lVar3 = param_2[0x2e];
    lVar4 = param_2[0x31];
    uVar1 = *(uint *)((longlong)param_2 + 0x18c);
    if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
      if (0 < (int)uVar1) {
        lVar9 = (longlong)iVar5;
        uVar8 = (ulonglong)uVar1 + 1;
        do {
          uVar6 = (ulonglong)((uint)*(ushort *)(lVar3 + -4 + uVar8 * 2) * (int)lVar4);
          if ((*(byte *)(lVar2 + 0x6f + uVar6) & 4) == 0) {
            lVar7 = uVar6 + lVar2;
            local_80 = 0;
            local_88 = 0;
            FUN_147a776dc(param_1 + 0x30,&local_78,*(undefined4 *)(lVar7 + 0x90),param_2[2]);
            *(float *)(lVar7 + 0x30 + lVar9) =
                 (float)(local_78 * 360.0) + *(float *)(lVar7 + 0x30 + lVar9);
            *(float *)(lVar7 + 0x34 + lVar9) =
                 (float)(local_70 * 360.0) + *(float *)(lVar7 + 0x34 + lVar9);
            *(float *)(lVar7 + 0x38 + lVar9) =
                 (float)(local_68 * 360.0) + *(float *)(lVar7 + 0x38 + lVar9);
          }
          uVar8 = uVar8 - 1;
        } while (1 < uVar8);
      }
    }
    else if (0 < (int)uVar1) {
      lVar9 = (longlong)iVar5;
      uVar8 = (ulonglong)uVar1 + 1;
      do {
        uVar6 = (ulonglong)((uint)*(ushort *)(lVar3 + -4 + uVar8 * 2) * (int)lVar4);
        if ((*(byte *)(lVar2 + 0x6f + uVar6) & 4) == 0) {
          lVar7 = uVar6 + lVar2;
          local_80 = 0;
          local_88 = 0;
          FUN_147a776dc(param_1 + 0x30,&local_78,*(undefined4 *)(lVar7 + 0x90),param_2[2]);
          *(float *)(lVar7 + 0x30 + lVar9) =
               (float)(local_78 * 360.0) * *(float *)(lVar7 + 0x30 + lVar9);
          *(float *)(lVar7 + 0x34 + lVar9) =
               (float)(local_70 * 360.0) * *(float *)(lVar7 + 0x34 + lVar9);
          *(float *)(lVar7 + 0x38 + lVar9) =
               (float)(local_68 * 360.0) * *(float *)(lVar7 + 0x38 + lVar9);
        }
        uVar8 = uVar8 - 1;
      } while (1 < uVar8);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c12f1e FUN_147c12f1e body=190 status=ok
// SIG undefined FUN_147c12f1e(void)

void FUN_147c12f1e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar3 = FUN_145b3c144();
    lVar1 = *(longlong *)(param_1 + 0x88);
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      FUN_140924a7e(lVar1 + 0x38,0,&DAT_14c8464e0);
      local_30 = 0x3ff0000000000000;
      local_28 = 0x3ff0000000000000;
      local_20 = 0x3ff0000000000000;
      FUN_140924a7e(lVar1 + 0x38,0x3f800000);
      *(byte *)(lVar1 + 0x30) = *(byte *)(lVar1 + 0x30) | 2;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c12fde FUN_147c12fde body=176 status=ok
// SIG undefined FUN_147c12fde(void)

void FUN_147c12fde(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x40) == 0) || (*(char *)(param_1 + 0x49) == '\0')) &&
     (*(longlong *)(param_1 + 0x58) == 0)) {
    FUN_1446f470e(&local_20,L"DistributionStartRotation",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147c1308f(param_1,local_20,0,0);
    *(undefined8 *)(lVar1 + 0x38) = 0x3f80000000000000;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x58) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c1308f FUN_147c1308f body=217 status=ok
// SIG undefined FUN_147c1308f(void)

undefined8
FUN_147c1308f(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
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
  uVar1 = FUN_145b3bf70();
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



// FUNCTION 147c1316a FUN_147c1316a body=93 status=ok
// SIG undefined FUN_147c1316a(void)

void FUN_147c1316a(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  lVar1 = FUN_147c05556(param_2,param_1);
  lVar2 = *(longlong *)(param_2 + 0x10) + 0x8f0;
  if (lVar1 != 0) {
    lVar2 = lVar1;
  }
  fVar3 = (float)FUN_147a77524(param_1 + 0x30,*(undefined4 *)(param_2 + 0x1a0),
                               *(longlong *)(param_2 + 0x10),lVar2);
  *(float *)(param_5 + 0x3c) = fVar3 * 6.2831855 + *(float *)(param_5 + 0x3c);
  return;
}



// FUNCTION 147c131c8 FUN_147c131c8 body=74 status=ok
// SIG undefined FUN_147c131c8(void)

void FUN_147c131c8(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0xd) & 4) == 0) {
    return;
  }
  uVar1 = FUN_147c05556(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x000147c1320f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x368))(param_1,param_2,uVar1,param_1 + 0xc);
  return;
}



// FUNCTION 147c13212 FUN_147c13212 body=162 status=ok
// SIG undefined FUN_147c13212(void)

void FUN_147c13212(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x40) == 0) || (*(char *)(param_1 + 0x49) == '\0')) &&
     (*(longlong *)(param_1 + 0x58) == 0)) {
    FUN_1446f470e(&local_20,L"DistributionStartRotationRate",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147bf866f(param_1,local_20,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x58) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c132b6 FUN_147c132b6 body=157 status=ok
// SIG undefined FUN_147c132b6(void)

void FUN_147c132b6(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147a77524(param_1 + 0x30,0,0,0);
  FUN_147a775f8(param_1 + 0x30,local_2c,&local_30);
  *(undefined4 *)(param_2 + 0x44c) = local_30;
  iVar1 = *(int *)(param_2 + 0x20);
  *(uint *)(param_2 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x24) < iVar1 + 1U) {
    FUN_147c0c860((longlong *)(param_2 + 0x18),iVar1);
  }
  *(longlong *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar1 * 8) = param_1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c13354 FUN_147c13354 body=107 status=ok
// SIG undefined FUN_147c13354(void)

void FUN_147c13354(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  lVar1 = FUN_147c05556(param_2,param_1);
  lVar2 = *(longlong *)(param_2 + 0x10) + 0x8f0;
  if (lVar1 != 0) {
    lVar2 = lVar1;
  }
  fVar3 = (float)FUN_147a77524(param_1 + 0x30,*(undefined4 *)(param_2 + 0x1a0),
                               *(longlong *)(param_2 + 0x10),lVar2);
  *(float *)(param_5 + 0x5c) = *(float *)(param_5 + 0x5c) + fVar3 * 6.2831855;
  *(float *)(param_5 + 0x4c) = fVar3 * 6.2831855 + *(float *)(param_5 + 0x4c);
  return;
}



// FUNCTION 147c133c0 FUN_147c133c0 body=131 status=ok
// SIG undefined FUN_147c133c0(void)

void FUN_147c133c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_147c13443();
  if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x58) = lVar2;
    if (lVar2 == 0) {
      return;
    }
  }
  else {
    FUN_1456cec3c(lVar2);
    *(longlong *)(param_1 + 0x58) = lVar2;
  }
  lVar3 = FUN_145b3bf70();
  lVar2 = *(longlong *)(param_1 + 0x58);
  if ((((lVar2 != 0) && (lVar3 != 0)) && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
     ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38) &&
      (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
       lVar3 + 0x30)))) {
    *(undefined8 *)(lVar2 + 0x38) = 0x3f80000000000000;
    *(byte *)(lVar2 + 0x30) = *(byte *)(lVar2 + 0x30) | 2;
  }
  return;
}



// FUNCTION 147c13443 FUN_147c13443 body=148 status=ok
// SIG undefined FUN_147c13443(void)

undefined8 FUN_147c13443(undefined8 param_1)

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
  uVar1 = FUN_145b3bf70();
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



// FUNCTION 147c134d8 FUN_147c134d8 body=74 status=ok
// SIG undefined FUN_147c134d8(void)

void FUN_147c134d8(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0xd) & 4) == 0) {
    return;
  }
  uVar1 = FUN_147c05556(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x000147c1351f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x368))(param_1,param_2,uVar1,param_1 + 0xc);
  return;
}



// FUNCTION 147c13522 FUN_147c13522 body=307 status=ok
// SIG undefined FUN_147c13522(void)

void FUN_147c13522(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float fVar7;
  
  lVar3 = *(longlong *)(param_2 + 0x168);
  lVar4 = *(longlong *)(param_2 + 0x170);
  iVar1 = *(int *)(param_2 + 0x188);
  uVar2 = *(uint *)(param_2 + 0x18c);
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    if (0 < (int)uVar2) {
      uVar6 = (ulonglong)uVar2 + 1;
      do {
        uVar5 = (ulonglong)((uint)*(ushort *)(lVar4 + -4 + uVar6 * 2) * iVar1);
        if ((*(byte *)(lVar3 + 0x6f + uVar5) & 4) == 0) {
          fVar7 = (float)FUN_147a77524(param_1 + 0x30,*(undefined4 *)(lVar3 + 0x90 + uVar5),
                                       *(undefined8 *)(param_2 + 0x10),0);
          *(float *)(lVar3 + 0x3c + uVar5) =
               fVar7 * 0.017453292 * 360.0 + *(float *)(lVar3 + 0x3c + uVar5);
        }
        uVar6 = uVar6 - 1;
      } while (1 < uVar6);
    }
  }
  else if (0 < (int)uVar2) {
    uVar6 = (ulonglong)uVar2 + 1;
    do {
      uVar5 = (ulonglong)((uint)*(ushort *)(lVar4 + -4 + uVar6 * 2) * iVar1);
      if ((*(byte *)(lVar3 + 0x6f + uVar5) & 4) == 0) {
        fVar7 = (float)FUN_147a77524(param_1 + 0x30,*(undefined4 *)(lVar3 + 0x90 + uVar5),
                                     *(undefined8 *)(param_2 + 0x10),0);
        *(float *)(lVar3 + 0x3c + uVar5) =
             fVar7 * 0.017453292 * 360.0 * *(float *)(lVar3 + 0x3c + uVar5);
      }
      uVar6 = uVar6 - 1;
    } while (1 < uVar6);
  }
  return;
}



// FUNCTION 147c13656 FUN_147c13656 body=39 status=ok
// SIG undefined FUN_147c13656(void)

void FUN_147c13656(longlong param_1)

{
  FUN_1446e0b6e();
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400337aa();
    return;
  }
  return;
}



// FUNCTION 147c136aa FUN_147c136aa body=163 status=ok
// SIG undefined FUN_147c136aa(void)

void FUN_147c136aa(longlong *param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  longlong param_5)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  
  cVar1 = *(char *)(*(longlong *)(*(longlong *)(param_2 + 0x18) + 0x30) + 0xc1);
  uVar2 = *(uint *)(param_2 + 0x2c);
  if (uVar2 != 0 && cVar1 != '\0') {
    plVar3 = *(longlong **)(*(longlong *)(param_2 + 0x18) + 0x48);
    if ((plVar3 != (longlong *)0x0) && (cVar4 = (**(code **)(*plVar3 + 0x3c0))(), cVar4 == '\0')) {
      return;
    }
    uVar5 = (**(code **)(*param_1 + 0x388))
                      (param_1,param_2,param_3,param_5,cVar1,param_5 + (ulonglong)uVar2,param_4);
    *(undefined4 *)(param_5 + (ulonglong)uVar2) = uVar5;
  }
  return;
}



// FUNCTION 147c1374e FUN_147c1374e body=292 status=ok
// SIG undefined FUN_147c1374e(void)

void FUN_147c1374e(longlong *param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 uVar11;
  
  lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x30);
  bVar1 = *(byte *)(lVar4 + 0xc1);
  uVar2 = *(uint *)(param_2 + 0x2c);
  if ((((uVar2 != 0 && bVar1 != 0) && ((1 < bVar1 - 3 || (*(int *)(lVar4 + 0xd4) != 0)))) &&
      ((plVar5 = *(longlong **)(*(longlong *)(param_2 + 0x18) + 0x48), plVar5 == (longlong *)0x0 ||
       (cVar7 = (**(code **)(*plVar5 + 0x3c0))(), cVar7 != '\0')))) &&
     (0 < (longlong)*(int *)(param_2 + 0x18c))) {
    lVar4 = *(longlong *)(param_2 + 0x168);
    lVar6 = *(longlong *)(param_2 + 0x170);
    iVar3 = *(int *)(param_2 + 0x188);
    uVar8 = (longlong)*(int *)(param_2 + 0x18c) + 1;
    do {
      uVar9 = (ulonglong)((uint)*(ushort *)(lVar6 + -4 + uVar8 * 2) * iVar3);
      if (((*(byte *)(lVar4 + 0x6f + uVar9) & 4) == 0) &&
         (lVar10 = uVar9 + lVar4, *(float *)(lVar10 + 0x90) <= 1.0)) {
        uVar11 = (**(code **)(*param_1 + 0x388))
                           (param_1,param_2,param_3,lVar10,bVar1,lVar10 + (ulonglong)uVar2,param_4);
        *(undefined4 *)(lVar10 + (ulonglong)uVar2) = uVar11;
      }
      uVar8 = uVar8 - 1;
    } while (1 < uVar8);
  }
  return;
}



// FUNCTION 147c13872 FUN_147c13872 body=505 status=ok
// SIG undefined FUN_147c13872(void)

void FUN_147c13872(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,int param_5
                  ,uint *param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  undefined8 uVar9;
  float fVar10;
  undefined1 auVar11 [12];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar12 [16];
  float fVar13;
  
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x1b8);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x30);
    piVar8 = (int *)(lVar3 + 200);
    piVar7 = (int *)(lVar3 + 0xcc);
  }
  else {
    piVar8 = (int *)(lVar3 + 0x30);
    piVar7 = (int *)(lVar3 + 0x34);
  }
  if (param_5 - 1U < 2) {
    if (((*(byte *)(param_1 + 0x68) & 1) == 0) ||
       (((lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0xb0), lVar3 == 0 &&
         (lVar3 = FUN_1448abda6(), lVar3 == 0)) || (lVar4 = FUN_14494016c(lVar3,0,1), lVar4 == 0))))
    {
      uVar9 = *(undefined8 *)(param_2 + 0x10);
      fVar13 = *(float *)(param_4 + 0x90);
    }
    else {
      uVar9 = *(undefined8 *)(param_2 + 0x10);
      fVar13 = *(float *)(param_4 + 0x90);
      plVar5 = (longlong *)FUN_14494016c(lVar3,0,1);
      fVar10 = (float)(**(code **)(*plVar5 + 0x668))(plVar5);
      fVar13 = fVar13 / fVar10;
    }
    auVar12._0_8_ = FUN_147a77524(param_1 + 0x38,fVar13,uVar9,0);
    auVar12._8_8_ = extraout_XMM0_Qb;
    if (param_5 != 1) {
      return;
    }
    goto LAB_147c1391f;
  }
  if (1 < param_5 - 3U) {
    return;
  }
  iVar1 = *piVar7;
  iVar2 = *piVar8;
  fVar13 = *(float *)(*(longlong *)(*(longlong *)(param_2 + 0x18) + 0x30) + 0xd0);
  if ((fVar13 != 0.0) || (NAN(fVar13))) {
    fVar10 = (float)param_6[1];
    if (((fVar10 == 0.0) && (!NAN(fVar10))) || (fVar13 < *(float *)(param_4 + 0x90) - fVar10))
    goto LAB_147c13982;
    auVar12 = ZEXT416(*param_6);
  }
  else {
LAB_147c13982:
    lVar3 = FUN_147c05556(param_2,param_1);
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(param_2 + 0x10) + 0x8f0;
    }
    if (iVar1 * iVar2 < 1) {
      auVar11 = ZEXT812(0);
    }
    else {
      uVar6 = *(int *)(lVar3 + 4) * 0xbb38435 + 0x3619636b;
      *(uint *)(lVar3 + 4) = uVar6;
      auVar11._4_8_ = 0;
      auVar11._0_4_ =
           (float)(int)((float)(iVar1 * iVar2) * ((float)(uVar6 >> 9 | 0x3f800000) + -1.0));
    }
    auVar12._12_4_ = 0;
    auVar12._0_12_ = auVar11;
    param_6[1] = *(uint *)(param_4 + 0x90);
  }
  if (param_5 != 3) {
    return;
  }
LAB_147c1391f:
  roundps(auVar12,ZEXT416(auVar12._0_4_),3);
  return;
}



// FUNCTION 147c13a6c FUN_147c13a6c body=192 status=ok
// SIG undefined FUN_147c13a6c(void)

void FUN_147c13a6c(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_147bffb11();
  if ((lVar3 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x60) = lVar3;
    if (lVar3 == 0) {
      return;
    }
  }
  else {
    FUN_1456cec3c(lVar3);
    *(longlong *)(param_1 + 0x60) = lVar3;
  }
  lVar4 = FUN_1459588c0();
  lVar3 = *(longlong *)(param_1 + 0x60);
  if ((((lVar3 != 0) && (lVar4 != 0)) && (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 != 0)) &&
     ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38) &&
      (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
       lVar4 + 0x30)))) {
    lVar4 = lVar3 + 0x28;
    uVar2 = (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x58))(lVar4,0);
    (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x70))(lVar4,0,uVar2,0);
    uVar2 = (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x58))(lVar4,0x3f800000);
    (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x70))(lVar4,0,uVar2,0);
    *(byte *)(lVar3 + 0x30) = *(byte *)(lVar3 + 0x30) | 2;
  }
  return;
}



// FUNCTION 147c13b2c FUN_147c13b2c body=181 status=ok
// SIG undefined FUN_147c13b2c(void)

void FUN_147c13b2c(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x88) == 0) || (*(char *)(param_1 + 0x91) == '\0')) &&
     (*(longlong *)(param_1 + 0xa0) == 0)) {
    FUN_1446f470e(&local_20,L"DistributionFrameRate",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147bf866f(param_1,local_20,0,0);
    *(undefined4 *)(lVar1 + 0x38) = 0x41f00000;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0xa0) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c13be2 FUN_147c13be2 body=422 status=ok
// SIG undefined FUN_147c13be2(void)

void FUN_147c13be2(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  int *piVar6;
  longlong lVar7;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  
  lVar7 = *(longlong *)(param_2 + 0x18);
  uVar2 = *(uint *)(param_2 + 0x2c);
  bVar1 = *(byte *)(*(longlong *)(lVar7 + 0x30) + 0xc1);
  if (uVar2 == 0 || bVar1 == 0) {
    return;
  }
  param_3 = param_3 & 0xffffffff;
  if (bVar1 - 3 < 0xfffffffe) {
    FUN_147c136aa(param_1,param_2,param_3);
    return;
  }
  if ((*(longlong **)(lVar7 + 0x48) != (longlong *)0x0) &&
     (cVar5 = (**(code **)(**(longlong **)(lVar7 + 0x48) + 0x3c0))(), cVar5 == '\0')) {
    return;
  }
  lVar4 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x1b8);
  if (lVar4 == 0) {
    piVar9 = (int *)(*(longlong *)(lVar7 + 0x30) + 200);
    piVar6 = (int *)(*(longlong *)(lVar7 + 0x30) + 0xcc);
  }
  else {
    piVar9 = (int *)(lVar4 + 0x30);
    piVar6 = (int *)(lVar4 + 0x34);
  }
  iVar11 = *piVar6 * *piVar9 + (uint)(*piVar6 * *piVar9 == 0);
  puVar10 = (undefined4 *)(param_5 + 0x90);
  if ((*(byte *)(param_1 + 0x70) & 1) != 0) {
    puVar10 = (undefined4 *)(param_2 + 0x1a0);
  }
  fVar12 = (float)FUN_147a77524(param_1 + 0x78,*puVar10,*(undefined8 *)(param_2 + 0x10),0);
  *(undefined4 *)(param_5 + param_3) = 0;
  iVar3 = *(int *)(param_1 + 0xa8);
  if (iVar3 < 2) {
    fVar13 = 0.0;
    if (iVar3 != 0) goto LAB_147c13d18;
    lVar7 = FUN_147c05556(param_2,param_1);
    if (lVar7 == 0) {
      lVar7 = *(longlong *)(param_2 + 0x10) + 0x8f0;
    }
    uVar8 = *(int *)(lVar7 + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)(lVar7 + 4) = uVar8;
    auVar14 = ZEXT416((uint)((float)(iVar11 + -1) * ((float)(uVar8 >> 9 | 0x3f800000) + -1.0)));
    auVar14 = roundps(auVar14,auVar14,3);
    fVar13 = auVar14._0_4_;
  }
  else {
    fVar15 = (float)(iVar11 + -1);
    fVar13 = (float)iVar3;
    if (fVar15 <= (float)iVar3) {
      fVar13 = fVar15;
    }
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
  }
  *(float *)(param_5 + param_3) = fVar13;
LAB_147c13d18:
  *(float *)(param_5 + (ulonglong)uVar2) = fVar12 * fVar13;
  return;
}



// FUNCTION 147c13d8e FUN_147c13d8e body=240 status=ok
// SIG undefined FUN_147c13d8e(void)

undefined8
FUN_147c13d8e(longlong param_1,longlong param_2,int param_3,longlong param_4,int param_5,
             undefined8 param_6,float param_7)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 *puVar4;
  float fVar5;
  undefined8 uVar6;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  puVar4 = (undefined4 *)(param_4 + 0x90);
  if ((*(byte *)(param_1 + 0x70) & 1) != 0) {
    puVar4 = (undefined4 *)(param_2 + 0x1a0);
  }
  uVar6 = FUN_147a77524(param_1 + 0x78,*puVar4,*(undefined8 *)(param_2 + 0x10),0);
  auVar8._8_4_ = extraout_XMM0_Dc;
  auVar8._0_8_ = uVar6;
  auVar8._12_4_ = extraout_XMM0_Dd;
  if (((*(byte *)(param_1 + 0x68) & 1) != 0) &&
     ((lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0xb0), lVar3 != 0 ||
      (lVar3 = FUN_1448abda6(), lVar3 != 0)))) {
    lVar1 = FUN_14494016c(lVar3,0,1);
    if (lVar1 != 0) {
      plVar2 = (longlong *)FUN_14494016c(lVar3,0,1);
      fVar5 = (float)(**(code **)(*plVar2 + 0x668))(plVar2);
      param_7 = param_7 / fVar5;
    }
  }
  param_7 = param_7 + *(float *)(param_4 + param_3);
  *(float *)(param_4 + param_3) = param_7;
  auVar7._4_12_ = auVar8._4_12_;
  auVar7._0_4_ = (float)uVar6 * param_7;
  uVar6 = auVar7._0_8_;
  if (param_5 != 2) {
    auVar8 = roundps(auVar7,ZEXT416((uint)auVar7._0_4_),3);
    uVar6 = auVar8._0_8_;
  }
  return uVar6;
}



// FUNCTION 147c13e84 FUN_147c13e84 body=134 status=ok
// SIG undefined FUN_147c13e84(void)

void FUN_147c13e84(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  FUN_147c10af2();
  if (0 < (int)param_2[1]) {
    lVar4 = 8;
    uVar3 = 0;
    do {
      puVar2 = &DAT_149dfb77a;
      if (*(int *)(*param_2 + lVar4) != 0) {
        puVar2 = *(undefined2 **)(*param_2 + -8 + lVar4);
      }
      iVar1 = FUN_144a80a00(puVar2,L"SubImageIndex");
      if (iVar1 == 0) {
        FUN_147c28cb2(param_2,uVar3 & 0xffffffff);
        FUN_147c28d0c(param_2);
        return;
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x18;
    } while ((longlong)uVar3 < (longlong)(int)param_2[1]);
  }
  return;
}



// FUNCTION 147c13f0a FUN_147c13f0a body=162 status=ok
// SIG undefined FUN_147c13f0a(void)

void FUN_147c13f0a(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x40) == 0) || (*(char *)(param_1 + 0x49) == '\0')) &&
     (*(longlong *)(param_1 + 0x58) == 0)) {
    FUN_1446f470e(&local_20,L"DistributionLifeMultiplier",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147bf866f(param_1,local_20,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x58) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c13fae FUN_147c13fae body=50 status=ok
// SIG undefined FUN_147c13fae(void)

void FUN_147c13fae(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  float fVar1;
  
  fVar1 = (float)FUN_147a77524(param_1 + 0x30,*(undefined4 *)(param_5 + 0x90),
                               *(undefined8 *)(param_2 + 0x10),0);
  *(float *)(param_5 + 0x5c) = fVar1 * *(float *)(param_5 + 0x5c);
  return;
}



// FUNCTION 147c13fe0 FUN_147c13fe0 body=144 status=ok
// SIG undefined FUN_147c13fe0(void)

void FUN_147c13fe0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float fVar6;
  
  if (0 < (longlong)*(int *)(param_2 + 0x18c)) {
    lVar2 = *(longlong *)(param_2 + 0x168);
    lVar3 = *(longlong *)(param_2 + 0x170);
    iVar1 = *(int *)(param_2 + 0x188);
    uVar4 = (longlong)*(int *)(param_2 + 0x18c) + 1;
    do {
      uVar5 = (ulonglong)((uint)*(ushort *)(lVar3 + -4 + uVar4 * 2) * iVar1);
      if ((*(byte *)(lVar2 + 0x6f + uVar5) & 4) == 0) {
        fVar6 = (float)FUN_147a77524(param_1 + 0x30,*(undefined4 *)(lVar2 + 0x90 + uVar5),
                                     *(undefined8 *)(param_2 + 0x10),0);
        *(float *)(lVar2 + 0x5c + uVar5) = fVar6 * *(float *)(lVar2 + 0x5c + uVar5);
      }
      uVar4 = uVar4 - 1;
    } while (1 < uVar4);
  }
  return;
}



// FUNCTION 147c14070 FUN_147c14070 body=205 status=ok
// SIG undefined FUN_147c14070(void)

void FUN_147c14070(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_147bffb11();
  if ((lVar3 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x58) = lVar3;
    if (lVar3 == 0) {
      return;
    }
  }
  else {
    FUN_1456cec3c(lVar3);
    *(longlong *)(param_1 + 0x58) = lVar3;
  }
  lVar4 = FUN_1459588c0();
  lVar3 = *(longlong *)(param_1 + 0x58);
  if ((((lVar3 != 0) && (lVar4 != 0)) && (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 != 0)) &&
     ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38) &&
      (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
       lVar4 + 0x30)))) {
    lVar4 = lVar3 + 0x28;
    uVar2 = (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x58))(lVar4,0);
    (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x70))(lVar4,0,uVar2,0x3f800000);
    uVar2 = (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x58))(lVar4,0x3f800000);
    (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x70))(lVar4,0,uVar2,0x3f800000);
    *(byte *)(lVar3 + 0x30) = *(byte *)(lVar3 + 0x30) | 2;
  }
  return;
}



// FUNCTION 147c1415c FUN_147c1415c body=824 status=ok
// SIG undefined FUN_147c1415c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c1415c(longlong param_1,longlong param_2,undefined8 param_3,float param_4,
                  longlong param_5)

{
  undefined1 auVar1 [16];
  byte bVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  undefined1 auVar9 [16];
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  bVar2 = *(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x18) + 0x30) + 0x71);
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    fVar6 = (float)*(double *)(param_1 + 0x48);
    fVar7 = (float)*(double *)(param_1 + 0x40);
    fVar10 = (float)*(double *)(param_1 + 0x38);
    if ((bVar2 & 1) != 0) {
      dVar11 = (double)fVar6;
      dVar8 = (double)fVar7;
      dVar15 = (double)fVar10;
      fVar6 = (float)(dVar15 * *(double *)(param_2 + 0x70) + dVar8 * *(double *)(param_2 + 0x90) +
                      dVar11 * *(double *)(param_2 + 0xb0) + *(double *)(param_2 + 0xd0) * 0.0);
      fVar10 = (float)(*(double *)(param_2 + 0xc0) * 0.0 +
                      dVar11 * *(double *)(param_2 + 0xa0) +
                      dVar8 * *(double *)(param_2 + 0x80) + dVar15 * *(double *)(param_2 + 0x60));
      fVar7 = (float)(*(double *)(param_2 + 200) * 0.0 +
                     dVar11 * *(double *)(param_2 + 0xa8) +
                     dVar8 * *(double *)(param_2 + 0x88) + dVar15 * *(double *)(param_2 + 0x68));
    }
  }
  else {
    if ((bVar2 & 1) != 0) {
      lVar3 = *(longlong *)(param_2 + 0x10);
      dVar4 = *(double *)(param_1 + 0x38);
      dVar5 = *(double *)(param_1 + 0x40);
      auVar1 = *(undefined1 (*) [16])(lVar3 + 0x280);
      dVar8 = -*(double *)(lVar3 + 0x240);
      dVar11 = -*(double *)(lVar3 + 0x248);
      dVar12 = *(double *)(lVar3 + 0x250) * -1.0;
      dVar13 = *(double *)(lVar3 + 600) * 1.0;
      dVar15 = dVar5 * dVar8 - dVar4 * dVar11;
      dVar16 = *(double *)(param_1 + 0x48) * dVar11 - dVar5 * dVar12;
      dVar14 = dVar4 * dVar12 - dVar8 * *(double *)(param_1 + 0x48);
      dVar16 = dVar16 + dVar16;
      dVar14 = dVar14 + dVar14;
      dVar15 = dVar15 + dVar15;
      auVar9 = divpd(_DAT_149934d80,auVar1);
      fVar7 = (float)((double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(lVar3 + 0x290)))
                              & (ulonglong)(1.0 / *(double *)(lVar3 + 0x290))) *
                     (dVar13 * dVar15 + *(double *)(param_1 + 0x48) +
                     (dVar14 * dVar8 - dVar16 * dVar11))) * param_4;
      fVar6 = (float)((double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar9._8_8_
                              ) *
                     (*(double *)(lVar3 + 0x240) * dVar15 + dVar12 * dVar16 +
                     dVar13 * dVar14 + dVar5)) * param_4;
      param_4 = (float)((double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) &
                                auVar9._0_8_) *
                       ((dVar15 * dVar11 - dVar14 * dVar12) + dVar13 * dVar16 + dVar4)) * param_4;
      *(float *)(param_5 + 0x40) = *(float *)(param_5 + 0x40) + param_4;
      *(float *)(param_5 + 0x44) = *(float *)(param_5 + 0x44) + fVar6;
      *(float *)(param_5 + 0x48) = *(float *)(param_5 + 0x48) + fVar7;
      *(float *)(param_5 + 0x30) = param_4 + *(float *)(param_5 + 0x30);
      *(float *)(param_5 + 0x34) = fVar6 + *(float *)(param_5 + 0x34);
      *(float *)(param_5 + 0x38) = fVar7 + *(float *)(param_5 + 0x38);
      return;
    }
    fVar6 = (float)*(double *)(param_1 + 0x48);
    fVar7 = (float)*(double *)(param_1 + 0x40);
    fVar10 = (float)*(double *)(param_1 + 0x38);
  }
  *(float *)(param_5 + 0x40) = *(float *)(param_5 + 0x40) + fVar10 * param_4;
  *(float *)(param_5 + 0x44) = *(float *)(param_5 + 0x44) + fVar7 * param_4;
  *(float *)(param_5 + 0x48) = *(float *)(param_5 + 0x48) + fVar6 * param_4;
  *(float *)(param_5 + 0x30) = fVar10 * param_4 + *(float *)(param_5 + 0x30);
  *(float *)(param_5 + 0x34) = fVar7 * param_4 + *(float *)(param_5 + 0x34);
  *(float *)(param_5 + 0x38) = fVar6 * param_4 + *(float *)(param_5 + 0x38);
                    /* WARNING: Read-only address (ram,0x000149934d80) is written */
  return;
}



// FUNCTION 147c14494 FUN_147c14494 body=1124 status=ok
// SIG undefined FUN_147c14494(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c14494(longlong param_1,longlong param_2,undefined8 param_3,float param_4)

{
  undefined1 auVar1 [16];
  byte bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  if ((((param_2 != 0) && (uVar3 = *(uint *)(param_2 + 0x18c), 0 < (int)uVar3)) &&
      (lVar5 = *(longlong *)(param_2 + 0x168), lVar5 != 0)) &&
     (lVar6 = *(longlong *)(param_2 + 0x170), lVar6 != 0)) {
    iVar4 = *(int *)(param_2 + 0x188);
    bVar2 = *(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x18) + 0x30) + 0x71);
    if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      fVar12 = (float)*(double *)(param_1 + 0x48);
      fVar15 = (float)*(double *)(param_1 + 0x40);
      fVar14 = (float)*(double *)(param_1 + 0x38);
      if ((bVar2 & 1) != 0) {
        dVar18 = (double)fVar12;
        dVar16 = (double)fVar15;
        dVar13 = (double)fVar14;
        fVar12 = (float)(dVar13 * *(double *)(param_2 + 0x70) + dVar16 * *(double *)(param_2 + 0x90)
                         + dVar18 * *(double *)(param_2 + 0xb0) + *(double *)(param_2 + 0xd0) * 0.0)
        ;
        fVar14 = (float)(*(double *)(param_2 + 0xc0) * 0.0 +
                        dVar18 * *(double *)(param_2 + 0xa0) +
                        dVar16 * *(double *)(param_2 + 0x80) + dVar13 * *(double *)(param_2 + 0x60))
        ;
        fVar15 = (float)(*(double *)(param_2 + 200) * 0.0 +
                        dVar18 * *(double *)(param_2 + 0xa8) +
                        dVar16 * *(double *)(param_2 + 0x88) + dVar13 * *(double *)(param_2 + 0x68))
        ;
      }
    }
    else {
      if ((bVar2 & 1) != 0) {
        lVar7 = *(longlong *)(param_2 + 0x10);
        auVar1 = *(undefined1 (*) [16])(lVar7 + 0x280);
        auVar17 = divpd(_DAT_149934d80,auVar1);
        dVar8 = *(double *)(param_1 + 0x38);
        dVar9 = *(double *)(param_1 + 0x40);
        dVar19 = *(double *)(lVar7 + 0x250) * -1.0;
        dVar20 = *(double *)(lVar7 + 600) * 1.0;
        dVar13 = -*(double *)(lVar7 + 0x240);
        dVar16 = -*(double *)(lVar7 + 0x248);
        dVar22 = dVar9 * dVar13 - dVar8 * dVar16;
        dVar18 = *(double *)(param_1 + 0x48) * dVar16 - dVar9 * dVar19;
        dVar21 = dVar8 * dVar19 - dVar13 * *(double *)(param_1 + 0x48);
        dVar18 = dVar18 + dVar18;
        dVar21 = dVar21 + dVar21;
        dVar22 = dVar22 + dVar22;
        fVar12 = (float)((dVar22 * dVar20 + *(double *)(param_1 + 0x48) +
                         (dVar21 * dVar13 - dVar16 * dVar18)) *
                        (double)(-(ulonglong)
                                  (9.99999993922529e-09 < ABS(*(double *)(lVar7 + 0x290))) &
                                (ulonglong)(1.0 / *(double *)(lVar7 + 0x290)))) * param_4;
        fVar14 = (float)((*(double *)(lVar7 + 0x240) * dVar22 + dVar18 * dVar19 +
                         dVar20 * dVar21 + dVar9) *
                        (double)(auVar17._8_8_ &
                                -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)))) * param_4;
        param_4 = (float)(((dVar22 * dVar16 - dVar19 * dVar21) + dVar20 * dVar18 + dVar8) *
                         (double)(auVar17._0_8_ &
                                 -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)))) * param_4;
        uVar10 = (ulonglong)uVar3 + 1;
        do {
          uVar11 = (ulonglong)((uint)*(ushort *)(lVar6 + -4 + uVar10 * 2) * iVar4);
          if ((*(byte *)(lVar5 + 0x6f + uVar11) & 4) == 0) {
            *(float *)(lVar5 + 0x40 + uVar11) = *(float *)(lVar5 + 0x40 + uVar11) + param_4;
            *(float *)(lVar5 + 0x44 + uVar11) = *(float *)(lVar5 + 0x44 + uVar11) + fVar14;
            *(float *)(lVar5 + 0x48 + uVar11) = *(float *)(lVar5 + 0x48 + uVar11) + fVar12;
            *(float *)(lVar5 + 0x30 + uVar11) = *(float *)(lVar5 + 0x30 + uVar11) + param_4;
            *(float *)(lVar5 + 0x34 + uVar11) = *(float *)(lVar5 + 0x34 + uVar11) + fVar14;
            *(float *)(lVar5 + 0x38 + uVar11) = *(float *)(lVar5 + 0x38 + uVar11) + fVar12;
          }
          uVar10 = uVar10 - 1;
        } while (1 < uVar10);
        return;
      }
      fVar12 = (float)*(double *)(param_1 + 0x48);
      fVar15 = (float)*(double *)(param_1 + 0x40);
      fVar14 = (float)*(double *)(param_1 + 0x38);
    }
    uVar10 = (ulonglong)uVar3 + 1;
    do {
      uVar11 = (ulonglong)((uint)*(ushort *)(lVar6 + -4 + uVar10 * 2) * iVar4);
      if ((*(byte *)(lVar5 + 0x6f + uVar11) & 4) == 0) {
        *(float *)(lVar5 + 0x40 + uVar11) = *(float *)(lVar5 + 0x40 + uVar11) + fVar14 * param_4;
        *(float *)(lVar5 + 0x44 + uVar11) = *(float *)(lVar5 + 0x44 + uVar11) + fVar15 * param_4;
        *(float *)(lVar5 + 0x48 + uVar11) = *(float *)(lVar5 + 0x48 + uVar11) + fVar12 * param_4;
        *(float *)(lVar5 + 0x30 + uVar11) = *(float *)(lVar5 + 0x30 + uVar11) + fVar14 * param_4;
        *(float *)(lVar5 + 0x34 + uVar11) = *(float *)(lVar5 + 0x34 + uVar11) + fVar15 * param_4;
        *(float *)(lVar5 + 0x38 + uVar11) = *(float *)(lVar5 + 0x38 + uVar11) + fVar12 * param_4;
      }
      uVar10 = uVar10 - 1;
    } while (1 < uVar10);
  }
                    /* WARNING: Read-only address (ram,0x000149934d80) is written */
  return;
}



// FUNCTION 147c148f8 FUN_147c148f8 body=169 status=ok
// SIG undefined FUN_147c148f8(void)

void FUN_147c148f8(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x50) == 0) || (*(char *)(param_1 + 0x59) == '\0')) &&
     (*(longlong *)(param_1 + 0x68) == 0)) {
    FUN_1446f470e(&local_20,L"DistributionDragCoefficient",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147bf866f(param_1,local_20,0,0);
    *(undefined4 *)(lVar1 + 0x38) = 0x3f800000;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x68) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c149bc FUN_147c149bc body=299 status=ok
// SIG undefined FUN_147c149bc(void)

void FUN_147c149bc(longlong param_1,longlong param_2,undefined8 param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (0 < (longlong)*(int *)(param_2 + 0x18c)) {
    lVar5 = *(longlong *)(param_2 + 0x168);
    lVar6 = *(longlong *)(param_2 + 0x170);
    iVar4 = *(int *)(param_2 + 0x188);
    uVar7 = (longlong)*(int *)(param_2 + 0x18c) + 1;
    do {
      uVar8 = (ulonglong)((uint)*(ushort *)(lVar6 + -4 + uVar7 * 2) * iVar4);
      if ((*(byte *)(lVar5 + 0x6f + uVar8) & 4) == 0) {
        fVar9 = (float)FUN_147a77524(param_1 + 0x40,*(undefined4 *)(lVar5 + 0x90 + uVar8),
                                     *(undefined8 *)(param_2 + 0x10),0);
        fVar9 = -fVar9;
        fVar1 = *(float *)(lVar5 + 0x48 + uVar8);
        fVar2 = *(float *)(lVar5 + 0x40 + uVar8);
        fVar3 = *(float *)(lVar5 + 0x44 + uVar8);
        fVar10 = fVar1 * fVar9 * param_4;
        fVar11 = fVar3 * fVar9 * param_4;
        fVar9 = fVar9 * fVar2 * param_4;
        *(float *)(lVar5 + 0x40 + uVar8) = fVar2 + fVar9;
        *(float *)(lVar5 + 0x44 + uVar8) = fVar3 + fVar11;
        *(float *)(lVar5 + 0x48 + uVar8) = fVar1 + fVar10;
        *(float *)(lVar5 + 0x30 + uVar8) = fVar9 + *(float *)(lVar5 + 0x30 + uVar8);
        *(float *)(lVar5 + 0x34 + uVar8) = fVar11 + *(float *)(lVar5 + 0x34 + uVar8);
        *(float *)(lVar5 + 0x38 + uVar8) = fVar10 + *(float *)(lVar5 + 0x38 + uVar8);
      }
      uVar7 = uVar7 - 1;
    } while (1 < uVar7);
  }
  return;
}



// FUNCTION 147c14ae8 FUN_147c14ae8 body=169 status=ok
// SIG undefined FUN_147c14ae8(void)

void FUN_147c14ae8(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x50) == 0) || (*(char *)(param_1 + 0x59) == '\0')) &&
     (*(longlong *)(param_1 + 0x68) == 0)) {
    FUN_1446f470e(&local_20,L"DistributionDragScale",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147bf866f(param_1,local_20,0,0);
    *(undefined4 *)(lVar1 + 0x38) = 0x3f800000;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x68) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c14bac FUN_147c14bac body=175 status=ok
// SIG undefined FUN_147c14bac(void)

void FUN_147c14bac(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x68) == 0) || (*(char *)(param_1 + 0x71) == '\0')) &&
     (*(longlong *)(param_1 + 0x80) == 0)) {
    FUN_1446f470e(&local_20,L"DistributionStrength",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147bf866f(param_1,local_20,0,0);
    *(undefined4 *)(lVar1 + 0x38) = 0x3f800000;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x80) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c14c9e FUN_147c14c9e body=168 status=ok
// SIG undefined FUN_147c14c9e(void)

void FUN_147c14c9e(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x48) == 0) || (*(char *)(param_1 + 0x51) == '\0')) &&
     (*(longlong *)(param_1 + 0x90) == 0)) {
    FUN_1446f470e(&local_20,L"DistributionAcceleration",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147c120bf(param_1,local_20,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x90) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c14d48 FUN_147c14d48 body=114 status=ok
// SIG undefined FUN_147c14d48(void)

void FUN_147c14d48(longlong param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  local_48 = 0;
  FUN_147a776dc(param_1 + 0x38,&local_30,0,0);
  *(undefined8 *)(param_2 + 0x440) = local_20;
  *(undefined4 *)(param_2 + 0x430) = local_30;
  *(undefined4 *)(param_2 + 0x434) = uStack_2c;
  *(undefined4 *)(param_2 + 0x438) = uStack_28;
  *(undefined4 *)(param_2 + 0x43c) = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c14dbc FUN_147c14dbc body=1128 status=ok
// SIG undefined FUN_147c14dbc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c14dbc(longlong param_1,longlong param_2,uint param_3,float param_4,longlong param_5)

{
  double dVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  longlong lVar4;
  double dVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar6 = (ulonglong)param_3;
  local_b0 = 0;
  local_b8 = 0;
  FUN_147a776dc(param_1 + 0x38,&local_a8,param_3,*(undefined8 *)(param_2 + 0x10));
  fVar7 = (float)local_98;
  fVar10 = (float)local_a0;
  fVar8 = (float)local_a8;
  *(float *)(param_5 + uVar6) = fVar8;
  *(float *)(param_5 + 4 + uVar6) = fVar10;
  *(float *)(param_5 + 8 + uVar6) = fVar7;
  if (((param_2 != 0) && ((*(uint *)(param_1 + 0x98) & 1) != 0)) &&
     (lVar4 = *(longlong *)(param_2 + 0x10), lVar4 != 0)) {
    dVar1 = *(double *)(lVar4 + 0x290);
    dVar11 = *(double *)(lVar4 + 0x288);
    fVar8 = fVar8 * (float)*(double *)(lVar4 + 0x280);
    *(float *)(param_5 + uVar6) = fVar8;
    fVar10 = fVar10 * (float)dVar11;
    *(float *)(param_5 + 4 + uVar6) = fVar10;
    fVar7 = fVar7 * (float)dVar1;
    *(float *)(param_5 + 8 + uVar6) = fVar7;
  }
  bVar3 = *(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x18) + 0x30) + 0x71);
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    if ((bVar3 & 1) != 0) {
      dVar12 = (double)fVar7;
      dVar11 = (double)fVar10;
      dVar1 = (double)fVar8;
      fVar7 = (float)(dVar1 * *(double *)(param_2 + 0x70) + dVar11 * *(double *)(param_2 + 0x90) +
                      dVar12 * *(double *)(param_2 + 0xb0) + *(double *)(param_2 + 0xd0) * 0.0);
      fVar8 = (float)(*(double *)(param_2 + 0xc0) * 0.0 +
                     dVar12 * *(double *)(param_2 + 0xa0) +
                     dVar11 * *(double *)(param_2 + 0x80) + dVar1 * *(double *)(param_2 + 0x60));
      fVar10 = (float)(*(double *)(param_2 + 200) * 0.0 +
                      dVar12 * *(double *)(param_2 + 0xa8) +
                      dVar11 * *(double *)(param_2 + 0x88) + dVar1 * *(double *)(param_2 + 0x68));
      *(float *)(param_5 + uVar6) = fVar8;
      *(float *)(param_5 + 4 + uVar6) = fVar10;
      *(float *)(param_5 + 8 + uVar6) = fVar7;
    }
  }
  else if ((bVar3 & 1) != 0) {
    lVar4 = *(longlong *)(param_2 + 0x10);
    dVar13 = (double)fVar7;
    dVar14 = (double)fVar10;
    dVar1 = (double)fVar8;
    auVar2 = *(undefined1 (*) [16])(lVar4 + 0x280);
    dVar16 = *(double *)(lVar4 + 0x250) * -1.0;
    dVar17 = *(double *)(lVar4 + 600) * 1.0;
    dVar12 = -*(double *)(lVar4 + 0x240);
    dVar5 = -*(double *)(lVar4 + 0x248);
    dVar18 = dVar1 * dVar16 - dVar12 * dVar13;
    auVar9._8_4_ = SUB84(dVar14,0);
    auVar9._0_8_ = dVar1;
    auVar9._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    dVar11 = dVar14 * dVar12 - dVar1 * dVar5;
    dVar15 = dVar13 * dVar5 - auVar9._8_8_ * dVar16;
    dVar15 = dVar15 + dVar15;
    dVar18 = dVar18 + dVar18;
    dVar11 = dVar11 + dVar11;
    auVar9 = divpd(_DAT_149934d80,auVar2);
    fVar8 = (float)((double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(lVar4 + 0x290))) &
                            (ulonglong)(1.0 / *(double *)(lVar4 + 0x290))) *
                   (dVar17 * dVar11 + dVar13 + (dVar18 * dVar12 - dVar15 * dVar5))) * param_4;
    fVar7 = (float)((double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar9._8_8_)
                   * (*(double *)(lVar4 + 0x240) * dVar11 + dVar16 * dVar15 +
                     dVar17 * dVar18 + dVar14)) * param_4;
    param_4 = (float)((double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar9._0_8_
                              ) * ((dVar11 * dVar5 - dVar18 * dVar16) + dVar17 * dVar15 + dVar1)) *
              param_4;
    *(float *)(param_5 + 0x40) = *(float *)(param_5 + 0x40) + param_4;
    *(float *)(param_5 + 0x44) = *(float *)(param_5 + 0x44) + fVar7;
    *(float *)(param_5 + 0x48) = *(float *)(param_5 + 0x48) + fVar8;
    *(float *)(param_5 + 0x30) = param_4 + *(float *)(param_5 + 0x30);
    *(float *)(param_5 + 0x34) = fVar7 + *(float *)(param_5 + 0x34);
    *(float *)(param_5 + 0x38) = fVar8 + *(float *)(param_5 + 0x38);
    goto LAB_147c1500f;
  }
  *(float *)(param_5 + 0x40) = fVar8 * param_4 + *(float *)(param_5 + 0x40);
  *(float *)(param_5 + 0x44) = fVar10 * param_4 + *(float *)(param_5 + 0x44);
  *(float *)(param_5 + 0x48) = fVar7 * param_4 + *(float *)(param_5 + 0x48);
  fVar7 = *(float *)(param_5 + 8 + uVar6);
  fVar8 = *(float *)(param_5 + 4 + uVar6);
  *(float *)(param_5 + 0x30) = param_4 * *(float *)(param_5 + uVar6) + *(float *)(param_5 + 0x30);
  *(float *)(param_5 + 0x34) = fVar8 * param_4 + *(float *)(param_5 + 0x34);
  *(float *)(param_5 + 0x38) = fVar7 * param_4 + *(float *)(param_5 + 0x38);
LAB_147c1500f:
  if ((local_90 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c15226 FUN_147c15226 body=989 status=ok
// SIG undefined FUN_147c15226(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c15226(longlong param_1,longlong param_2,ulonglong param_3,float param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  double dVar23;
  
  if ((((param_2 != 0) && (uVar3 = *(uint *)(param_2 + 0x18c), 0 < (int)uVar3)) &&
      (lVar5 = *(longlong *)(param_2 + 0x168), lVar5 != 0)) &&
     (lVar6 = *(longlong *)(param_2 + 0x170), lVar6 != 0)) {
    iVar4 = *(int *)(param_2 + 0x188);
    if (((*(byte *)(param_1 + 0x30) & 1) == 0) ||
       ((*(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x18) + 0x30) + 0x71) & 1) == 0)) {
      param_3 = param_3 & 0xffffffff;
      uVar11 = (ulonglong)uVar3 + 1;
      do {
        uVar12 = (ulonglong)((uint)*(ushort *)(lVar6 + -4 + uVar11 * 2) * iVar4);
        if ((*(byte *)(lVar5 + 0x6f + uVar12) & 4) == 0) {
          lVar13 = uVar12 + lVar5;
          fVar19 = *(float *)(lVar13 + 8 + param_3);
          fVar20 = *(float *)(lVar13 + 4 + param_3);
          *(float *)(lVar13 + 0x40) =
               *(float *)(lVar13 + param_3) * param_4 + *(float *)(lVar13 + 0x40);
          *(float *)(lVar13 + 0x44) = fVar20 * param_4 + *(float *)(lVar13 + 0x44);
          *(float *)(lVar13 + 0x48) = fVar19 * param_4 + *(float *)(lVar13 + 0x48);
          fVar19 = *(float *)(lVar13 + 8 + param_3);
          fVar20 = *(float *)(lVar13 + 4 + param_3);
          *(float *)(lVar13 + 0x30) =
               *(float *)(lVar13 + param_3) * param_4 + *(float *)(lVar13 + 0x30);
          *(float *)(lVar13 + 0x34) = fVar20 * param_4 + *(float *)(lVar13 + 0x34);
          *(float *)(lVar13 + 0x38) = fVar19 * param_4 + *(float *)(lVar13 + 0x38);
        }
        uVar11 = uVar11 - 1;
      } while (1 < uVar11);
    }
    else {
      lVar13 = *(longlong *)(param_2 + 0x10);
      auVar2 = *(undefined1 (*) [16])(lVar13 + 0x280);
      dVar16 = -*(double *)(lVar13 + 0x240);
      dVar17 = -*(double *)(lVar13 + 0x248);
      param_3 = param_3 & 0xffffffff;
      dVar14 = *(double *)(lVar13 + 0x250) * -1.0;
      dVar15 = *(double *)(lVar13 + 600) * 1.0;
      auVar18 = divpd(_DAT_149934d80,auVar2);
      dVar1 = *(double *)(lVar13 + 0x290);
      uVar11 = (ulonglong)uVar3 + 1;
      do {
        uVar12 = (ulonglong)((uint)*(ushort *)(lVar6 + -4 + uVar11 * 2) * iVar4);
        if ((*(byte *)(lVar5 + 0x6f + uVar12) & 4) == 0) {
          lVar13 = uVar12 + lVar5;
          dVar7 = (double)*(float *)(lVar13 + 8 + param_3);
          dVar8 = (double)*(float *)(lVar13 + 4 + param_3);
          dVar10 = (double)*(float *)(lVar13 + param_3);
          dVar21 = dVar8 * dVar16 - dVar17 * dVar10;
          dVar9 = dVar7 * dVar17 - dVar14 * dVar8;
          dVar23 = dVar10 * dVar14 - dVar7 * dVar16;
          dVar9 = dVar9 + dVar9;
          dVar23 = dVar23 + dVar23;
          dVar21 = dVar21 + dVar21;
          fVar19 = (float)((dVar21 * dVar15 + dVar7 + (dVar23 * dVar16 - dVar9 * dVar17)) *
                          (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar1)) &
                                  (ulonglong)(1.0 / dVar1))) * param_4;
          fVar22 = (float)(((dVar14 * dVar9 - dVar16 * dVar21) + dVar15 * dVar23 + dVar8) *
                          (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) &
                                  auVar18._8_8_)) * param_4;
          fVar20 = (float)(((dVar21 * dVar17 - dVar23 * dVar14) + dVar15 * dVar9 + dVar10) *
                          (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) &
                                  auVar18._0_8_)) * param_4;
          *(float *)(lVar13 + 0x40) = *(float *)(lVar13 + 0x40) + fVar20;
          *(float *)(lVar13 + 0x44) = *(float *)(lVar13 + 0x44) + fVar22;
          *(float *)(lVar13 + 0x48) = *(float *)(lVar13 + 0x48) + fVar19;
          *(float *)(lVar13 + 0x30) = fVar20 + *(float *)(lVar13 + 0x30);
          *(float *)(lVar13 + 0x34) = fVar22 + *(float *)(lVar13 + 0x34);
          *(float *)(lVar13 + 0x38) = fVar19 + *(float *)(lVar13 + 0x38);
        }
        uVar11 = uVar11 - 1;
      } while (1 < uVar11);
    }
  }
  return;
}



// FUNCTION 147c1560a FUN_147c1560a body=168 status=ok
// SIG undefined FUN_147c1560a(void)

void FUN_147c1560a(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x48) == 0) || (*(char *)(param_1 + 0x51) == '\0')) &&
     (*(longlong *)(param_1 + 0x90) == 0)) {
    FUN_1446f470e(&local_20,L"DistributionAccelOverLife",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147c12b2f(param_1,local_20,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x90) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c156b4 FUN_147c156b4 body=1083 status=ok
// SIG undefined FUN_147c156b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c156b4(longlong param_1,longlong param_2,undefined8 param_3,float param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  double dVar21;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined8 local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (((*(byte *)(param_1 + 0x30) & 1) == 0) ||
     ((*(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x18) + 0x30) + 0x71) & 1) == 0)) {
    if (0 < (longlong)*(int *)(param_2 + 0x18c)) {
      lVar4 = *(longlong *)(param_2 + 0x168);
      lVar5 = *(longlong *)(param_2 + 0x170);
      iVar3 = *(int *)(param_2 + 0x188);
      uVar13 = (longlong)*(int *)(param_2 + 0x18c) + 1;
      do {
        uVar11 = (ulonglong)((uint)*(ushort *)(lVar5 + -4 + uVar13 * 2) * iVar3);
        if ((*(byte *)(lVar4 + 0x6f + uVar11) & 4) == 0) {
          local_f0 = 0;
          local_f8 = 0;
          FUN_147a776dc(param_1 + 0x38,&local_e8);
          *(float *)(lVar4 + 0x40 + uVar11) =
               *(float *)(lVar4 + 0x40 + uVar11) + (float)local_e8 * param_4;
          *(float *)(lVar4 + 0x44 + uVar11) =
               *(float *)(lVar4 + 0x44 + uVar11) + (float)dStack_e0 * param_4;
          *(float *)(lVar4 + 0x48 + uVar11) =
               *(float *)(lVar4 + 0x48 + uVar11) + (float)local_d8 * param_4;
          *(float *)(lVar4 + 0x30 + uVar11) =
               (float)local_e8 * param_4 + *(float *)(lVar4 + 0x30 + uVar11);
          *(float *)(lVar4 + 0x34 + uVar11) =
               (float)dStack_e0 * param_4 + *(float *)(lVar4 + 0x34 + uVar11);
          *(float *)(lVar4 + 0x38 + uVar11) =
               (float)local_d8 * param_4 + *(float *)(lVar4 + 0x38 + uVar11);
        }
        uVar13 = uVar13 - 1;
      } while (1 < uVar13);
    }
  }
  else if (0 < (longlong)*(int *)(param_2 + 0x18c)) {
    lVar4 = *(longlong *)(param_2 + 0x168);
    lVar5 = *(longlong *)(param_2 + 0x170);
    iVar3 = *(int *)(param_2 + 0x188);
    lVar6 = *(longlong *)(param_2 + 0x10);
    auVar2 = *(undefined1 (*) [16])(lVar6 + 0x280);
    dVar9 = -*(double *)(lVar6 + 0x240);
    dVar10 = -*(double *)(lVar6 + 0x248);
    dVar7 = *(double *)(lVar6 + 0x250) * -1.0;
    dVar8 = *(double *)(lVar6 + 600) * 1.0;
    auVar16 = divpd(_DAT_149934d80,auVar2);
    uVar13 = DAT_149931180;
    uVar11 = DAT_149931180._8_8_;
    dVar1 = *(double *)(lVar6 + 0x290);
    uVar14 = (longlong)*(int *)(param_2 + 0x18c) + 1;
    do {
      uVar12 = (ulonglong)((uint)*(ushort *)(lVar5 + -4 + uVar14 * 2) * iVar3);
      if ((*(byte *)(lVar4 + 0x6f + uVar12) & 4) == 0) {
        local_f0 = 0;
        local_f8 = 0;
        FUN_147a776dc(param_1 + 0x38,&local_e8);
        dVar18 = dStack_e0 * dVar9 - dVar10 * local_e8;
        dVar19 = local_d8 * dVar10 - dVar7 * dStack_e0;
        dVar21 = local_e8 * dVar7 - local_d8 * dVar9;
        dVar19 = dVar19 + dVar19;
        dVar21 = dVar21 + dVar21;
        dVar18 = dVar18 + dVar18;
        fVar15 = (float)((dVar18 * dVar8 + local_d8 + (dVar21 * dVar9 - dVar19 * dVar10)) *
                        (double)(-(ulonglong)
                                  (9.99999993922529e-09 < (double)((ulonglong)dVar1 & uVar13)) &
                                (ulonglong)(1.0 / dVar1))) * param_4;
        fVar20 = (float)(((dVar7 * dVar19 - dVar9 * dVar18) + dVar8 * dVar21 + dStack_e0) *
                        (double)(-(ulonglong)
                                  (9.99999993922529e-09 < (double)(auVar2._8_8_ & uVar11)) &
                                auVar16._8_8_)) * param_4;
        fVar17 = (float)(((dVar18 * dVar10 - dVar21 * dVar7) + dVar8 * dVar19 + local_e8) *
                        (double)(-(ulonglong)
                                  (9.99999993922529e-09 < (double)(auVar2._0_8_ & uVar13)) &
                                auVar16._0_8_)) * param_4;
        *(float *)(lVar4 + 0x40 + uVar12) = *(float *)(lVar4 + 0x40 + uVar12) + fVar17;
        *(float *)(lVar4 + 0x44 + uVar12) = *(float *)(lVar4 + 0x44 + uVar12) + fVar20;
        *(float *)(lVar4 + 0x48 + uVar12) = *(float *)(lVar4 + 0x48 + uVar12) + fVar15;
        *(float *)(lVar4 + 0x30 + uVar12) = fVar17 + *(float *)(lVar4 + 0x30 + uVar12);
        *(float *)(lVar4 + 0x34 + uVar12) = fVar20 + *(float *)(lVar4 + 0x34 + uVar12);
        *(float *)(lVar4 + 0x38 + uVar12) = fVar15 + *(float *)(lVar4 + 0x38 + uVar12);
      }
      uVar14 = uVar14 - 1;
    } while (1 < uVar14);
  }
  if ((local_d0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c15af0 FUN_147c15af0 body=592 status=ok
// SIG undefined FUN_147c15af0(void)

void FUN_147c15af0(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(int *)(param_1 + 0x50) == 0) || (*(char *)(param_1 + 0x59) == '\0')) &&
     (*(longlong *)(param_1 + 0x98) == 0)) {
    FUN_1446f470e(&local_20,L"DistributionColorScaleOverLife",1);
    local_40 = 0;
    local_48 = 0;
    lVar1 = FUN_147bfacf3(param_1,local_20,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x98) = lVar1;
  }
  if (((*(int *)(param_1 + 0xb0) == 0) || (*(char *)(param_1 + 0xb9) == '\0')) &&
     (*(longlong *)(param_1 + 200) == 0)) {
    FUN_1446f470e(&local_28,L"DistributionBrightnessOverLife",1);
    local_40 = 0;
    local_48 = 0;
    lVar1 = FUN_147bf866f(param_1,local_28,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 200) = lVar1;
  }
  if (((*(int *)(param_1 + 0xe0) == 0) || (*(char *)(param_1 + 0xe9) == '\0')) &&
     (*(longlong *)(param_1 + 0xf8) == 0)) {
    FUN_1446f470e(&local_30,L"DistributionRadiusScale",1);
    local_40 = 0;
    local_48 = 0;
    lVar1 = FUN_147bf866f(param_1,local_30,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0xf8) = lVar1;
  }
  if (((*(int *)(param_1 + 0x110) == 0) || (*(char *)(param_1 + 0x119) == '\0')) &&
     (*(longlong *)(param_1 + 0x128) == 0)) {
    FUN_1446f470e(&local_38,L"DistributionLightExponent",1);
    local_40 = 0;
    local_48 = 0;
    lVar1 = FUN_147bf866f(param_1,local_38,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x128) = lVar1;
  }
  if (*(char *)(param_1 + 0x13c) == '\0') {
    *(undefined1 *)(param_1 + 0x13d) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c15d4c FUN_147c15d4c body=607 status=ok
// SIG undefined FUN_147c15d4c(void)

void FUN_147c15d4c(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,
                  longlong param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  longlong local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  lVar1 = DAT_14caf50c8;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar3 + 0xc60) == 0x40000002) {
    uVar7 = 0;
  }
  else {
    bVar5 = FUN_144a61b4f();
    uVar7 = (ulonglong)(bVar5 ^ 1);
  }
  iVar2 = *(int *)(lVar1 + uVar7 * 4);
  if (0 < iVar2) {
    param_3 = param_3 & 0xffffffff;
    lVar1 = param_5 + param_3;
    fVar9 = (float)FUN_147a77524(param_1 + 0xa0,*(undefined4 *)(param_5 + 0x90),
                                 *(undefined8 *)(param_2 + 0x10),param_4);
    local_88 = 0;
    local_80 = param_4;
    FUN_147a776dc(param_1 + 0x40,&local_78,*(undefined4 *)(param_5 + 0x90),
                  *(undefined8 *)(param_2 + 0x10));
    *(float *)(param_5 + param_3) = (float)local_78 * fVar9;
    *(float *)(param_5 + 4 + param_3) = (float)local_70 * fVar9;
    *(float *)(param_5 + 8 + param_3) = (float)local_68 * fVar9;
    uVar10 = FUN_147a77524(param_1 + 0xd0,*(undefined4 *)(param_2 + 0x1a0),
                           *(undefined8 *)(param_2 + 0x10),param_4);
    *(undefined4 *)(param_5 + 0x18 + param_3) = uVar10;
    uVar10 = 0;
    if (*(char *)(param_1 + 0x30) == '\0') {
      uVar10 = FUN_147a77524(param_1 + 0x100,*(undefined4 *)(param_2 + 0x1a0),
                             *(undefined8 *)(param_2 + 0x10),param_4);
    }
    *(undefined4 *)(lVar1 + 0x1c) = uVar10;
    lVar4 = DAT_14caf50e0;
    if ((*(byte *)(param_1 + 0x34) & 1) == 0) {
      if (*(int *)(lVar3 + 0xc60) == 0x40000002) {
        uVar7 = 0;
      }
      else {
        bVar5 = FUN_144a61b4f();
        uVar7 = (ulonglong)(bVar5 ^ 1);
      }
      fVar9 = (float)*(int *)(lVar4 + uVar7 * 4);
    }
    else {
      fVar9 = *(float *)(param_1 + 0x130);
    }
    *(float *)(lVar1 + 0x20) = fVar9;
    uVar6 = *(int *)(param_4 + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)(param_4 + 4) = uVar6;
    fVar11 = (float)(uVar6 >> 9 | 0x3f800000) + -1.0;
    fVar9 = *(float *)(param_1 + 0x3c);
    *(bool *)(lVar1 + 0x24) = fVar11 < fVar9;
    *(undefined1 *)(lVar1 + 0x25) = *(undefined1 *)(param_1 + 0x31);
    *(undefined1 *)(lVar1 + 0x26) = *(undefined1 *)(param_1 + 0x13c);
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined1 *)(lVar1 + 0x27) = *(undefined1 *)(param_1 + 0x13e);
    if (((iVar2 != 1) && (*(char *)(param_1 + 0x13c) != '\0')) && (fVar11 < fVar9)) {
      uVar8 = FUN_147c15fac(param_1,lVar1,param_5,param_2);
      *(undefined8 *)(lVar1 + 0x10) = uVar8;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c15fac FUN_147c15fac body=488 status=ok
// SIG undefined FUN_147c15fac(void)

longlong FUN_147c15fac(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((((param_4 != 0) && (lVar2 = *(longlong *)(param_4 + 0x10), lVar2 != 0)) &&
      (lVar3 = *(longlong *)(lVar2 + 0xa8), lVar3 != 0)) &&
     (((*(byte *)(lVar3 + 0x65) & 2) == 0 && ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0)))) {
    lVar4 = FUN_147c16195(lVar3);
    if (lVar4 != 0) {
      lVar6 = *(longlong *)(lVar2 + 0x120);
      if (lVar6 == 0) {
        lVar6 = *(longlong *)(lVar3 + 0x1c8);
        if (lVar6 != 0) {
          uVar7 = 0;
          goto LAB_147c16070;
        }
      }
      else {
        uVar7 = *(undefined8 *)(lVar2 + 0x128);
LAB_147c16070:
        FUN_140486fc4(lVar4,lVar6,uVar7);
      }
      *(undefined1 *)(lVar4 + 0xb9) = *(undefined1 *)(lVar2 + 0xb9);
      *(undefined1 *)(lVar4 + 0x339) = *(undefined1 *)(param_1 + 0x134);
      uVar5 = *(uint *)(lVar4 + 0x428) & 0xfffffffe;
      *(uint *)(lVar4 + 0x428) = uVar5 | *(byte *)(param_1 + 0x30);
      *(uint *)(lVar4 + 0x2d4) =
           *(uint *)(lVar4 + 0x2d4) & 0xffffffef | (uint)*(byte *)(param_1 + 0x31) << 4;
      *(undefined4 *)(lVar4 + 0x2e8) = *(undefined4 *)(param_1 + 0x138);
      FUN_1479e3e3a(lVar4,CONCAT31((int3)(uVar5 >> 8),*(undefined1 *)(param_1 + 0x13d)));
      *(uint *)(lVar4 + 0x394) =
           *(uint *)(lVar4 + 0x394) & 0xfffffffe | (uint)*(byte *)(param_1 + 0x13e);
      FUN_140b506a4(lVar4);
      iVar1 = *(int *)(param_4 + 0x270);
      *(uint *)(param_4 + 0x270) = iVar1 + 1U;
      if (*(uint *)(param_4 + 0x274) < iVar1 + 1U) {
        FUN_147c28dba(param_4 + 0x268,iVar1);
      }
      *(longlong *)(*(longlong *)(param_4 + 0x268) + (longlong)iVar1 * 8) = lVar4;
      FUN_147c081c0(param_4,local_44,&local_60);
      local_90 = FUN_147c081b2(param_4);
      local_98 = &local_78;
      local_78 = local_60;
      uStack_74 = uStack_5c;
      uStack_70 = uStack_58;
      uStack_6c = uStack_54;
      local_68 = local_50;
      local_80 = 0;
      local_88 = 0;
      FUN_147c16244(param_1,lVar4,param_2,param_3);
      goto LAB_147c15fff;
    }
  }
  lVar4 = 0;
LAB_147c15fff:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c16195 FUN_147c16195 body=174 status=ok
// SIG undefined FUN_147c16195(void)

undefined8 FUN_147c16195(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_140e3ec56();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 0x40;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
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



// FUNCTION 147c16244 FUN_147c16244 body=1354 status=ok
// SIG undefined FUN_147c16244(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c16244(longlong param_1,longlong param_2,float *param_3,longlong param_4,
                  undefined8 param_5,char param_6,longlong *param_7,char param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  double dVar14;
  undefined1 auVar15 [16];
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  undefined1 auStack_128 [32];
  ulonglong local_108;
  undefined1 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_6 == '\0') {
    local_d8 = *(undefined8 *)(param_4 + 0x28);
    local_e8 = *(undefined8 *)(param_4 + 0x18);
    uStack_e0 = *(undefined8 *)(param_4 + 0x20);
    local_108 = local_108 & 0xffffffffffffff00;
    FUN_140d93b16(param_2,&local_e8,0,0);
    goto LAB_147c16452;
  }
  local_b8 = *(undefined8 *)(param_4 + 0x28);
  local_c8 = *(undefined8 *)(param_4 + 0x18);
  uStack_c0 = *(undefined8 *)(param_4 + 0x20);
  auVar8 = *(undefined1 (*) [16])(param_2 + 0x1b0);
  dVar3 = auVar8._0_8_;
  dVar4 = auVar8._8_8_;
  dVar14 = *(double *)(param_2 + 0x1c0);
  puVar6 = *(undefined8 **)(param_2 + 0x230);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar5 = DAT_14c8463d8;
    *puVar6 = DAT_14c8463d0;
    puVar6[1] = uVar5;
    uVar5 = DAT_14c8463e8;
    puVar6[2] = DAT_14c8463e0;
    puVar6[3] = uVar5;
    uVar5 = DAT_14c846500;
    puVar6[4] = DAT_14c8464f8;
    puVar6[5] = uVar5;
    puVar6[6] = DAT_14c846508;
    *(undefined8 **)(param_2 + 0x230) = puVar6;
  }
  if (((((double)puVar6[4] != dVar3) || (NAN((double)puVar6[4]) || NAN(dVar3))) ||
      ((double)puVar6[5] != dVar4)) || (NAN((double)puVar6[5]) || NAN(dVar4))) {
LAB_147c162ff:
    auVar18._8_8_ = 0;
    auVar18._0_8_ = dVar14;
    dVar1 = (double)DAT_1499387d0;
    dVar2 = DAT_1499387d0._8_8_;
    auVar8 = divpd(auVar8,_DAT_1499387d0);
    auVar11 = divpd(auVar18,_DAT_1499387d0);
    auVar8 = roundpd(auVar8,auVar8,3);
    auVar11 = roundpd(auVar11,auVar11,3);
    dVar3 = dVar3 - auVar8._0_8_ * dVar1;
    dVar4 = dVar4 - auVar8._8_8_ * dVar2;
    auVar19._0_8_ = dVar14 - auVar11._0_8_ * dVar1;
    auVar19._8_8_ = 0.0 - auVar11._8_8_ * dVar2;
    auVar17._0_8_ = dVar3 + dVar1;
    auVar17._8_8_ = dVar4 + dVar2;
    auVar15._0_8_ = dVar1 + auVar19._0_8_;
    auVar15._8_8_ = dVar2 + auVar19._8_8_;
    auVar11._8_8_ = -(ulonglong)(0.0 <= dVar4);
    auVar11._0_8_ = -(ulonglong)(0.0 <= dVar3);
    auVar8._8_4_ = SUB84(dVar4,0);
    auVar8._0_8_ = dVar3;
    auVar8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    auVar11 = blendvpd(auVar17,auVar8,auVar11);
    auVar9._8_8_ = -(ulonglong)(0.0 <= auVar19._8_8_);
    auVar9._0_8_ = -(ulonglong)(0.0 <= auVar19._0_8_);
    auVar8 = blendvpd(auVar15,auVar19,auVar9);
    auVar12._0_8_ = auVar11._0_8_ + -360.0;
    auVar12._8_8_ = auVar11._8_8_ + -360.0;
    auVar10._8_8_ = -(ulonglong)(180.0 < auVar11._8_8_);
    auVar10._0_8_ = -(ulonglong)(180.0 < auVar11._0_8_);
    auVar11 = blendvpd(auVar11,auVar12,auVar10);
    dVar14 = auVar8._0_8_;
    *(undefined1 (*) [16])(puVar6 + 4) = auVar11;
    puVar6[6] = ~-(ulonglong)(180.0 < dVar14) & (ulonglong)dVar14 |
                (ulonglong)(dVar14 + -360.0) & -(ulonglong)(180.0 < dVar14);
    FUN_144a7484c(puVar6 + 4,&local_88);
    puVar6[2] = local_78;
    puVar6[3] = uStack_70;
    *puVar6 = local_88;
    puVar6[1] = uStack_80;
  }
  else if (((double)puVar6[6] != dVar14) || (NAN((double)puVar6[6]) || NAN(dVar14)))
  goto LAB_147c162ff;
  local_88 = *puVar6;
  uStack_80 = puVar6[1];
  local_78 = puVar6[2];
  uStack_70 = puVar6[3];
  local_a8 = local_c8;
  uStack_a0 = uStack_c0;
  local_98 = local_b8;
  local_100 = 0;
  local_108 = 0;
  FUN_144927ad4(param_2,&local_a8,&local_88,0);
LAB_147c16452:
  fVar7 = *(float *)(param_4 + 0x7c);
  local_a8 = CONCAT44(*(float *)(param_4 + 0x74) * fVar7 * param_3[1],
                      fVar7 * *(float *)(param_4 + 0x70) * *param_3);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,*(float *)(param_4 + 0x78) * fVar7 * param_3[2]);
  FUN_1467ed646(&local_88);
  if (*(char *)(param_1 + 0x30) == '\0') {
    fVar7 = (float)local_88;
    fVar13 = local_88._4_4_;
    fVar16 = (float)uStack_80;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caf50ec) {
      FUN_144b3d300(&DAT_14caf50ec);
      if (DAT_14caf50ec == -1) {
        fVar7 = (float)FUN_1479e4ef4(1,0);
        DAT_14caf50e8 = fVar7 / 10000.0;
        _Init_thread_footer(&DAT_14caf50ec);
      }
    }
    fVar7 = (float)local_88 * DAT_14caf50e8;
    fVar13 = local_88._4_4_ * DAT_14caf50e8;
    local_88 = CONCAT44(fVar13,fVar7);
    fVar16 = (float)uStack_80 * DAT_14caf50e8;
    uStack_80 = CONCAT44(DAT_14caf50e8 * uStack_80._4_4_,fVar16);
  }
  fVar20 = fVar16 * fVar16 + fVar7 * fVar7 + fVar13 * fVar13;
  fVar21 = 1.0 / SQRT(fVar20);
  if (1e-08 < fVar20) {
    fVar7 = fVar7 * fVar21;
    fVar13 = fVar13 * fVar21;
  }
  fVar7 = fVar7 * 255.0;
  if (255.0 <= fVar7) {
    fVar7 = 255.0;
  }
  fVar13 = fVar13 * 255.0;
  if (255.0 <= fVar13) {
    fVar13 = 255.0;
  }
  fVar16 = (float)(~-(uint)(1e-08 < fVar20) & (uint)fVar16 |
                  (uint)(fVar16 * fVar21) & -(uint)(1e-08 < fVar20)) * 255.0;
  if (255.0 <= fVar16) {
    fVar16 = 255.0;
  }
  FUN_1406f9290(param_2);
  local_f8 = (&DAT_14c758c60)[(int)fVar7 & 0xff];
  local_f4 = (&DAT_14c758c60)[(int)fVar13 & 0xff];
  local_f0 = (&DAT_14c758c60)[(int)fVar16 & 0xff];
  local_ec = 0;
  FUN_140802a50(param_2,&local_f8,1);
  FUN_1479e5038(param_2);
  FUN_1479ea8a8(param_2);
  FUN_1479ea7c8(param_2);
  if (param_8 == '\x01' && param_7 != (longlong *)0x0) {
    (**(code **)(*param_7 + 0x240))(param_7,param_2);
    (**(code **)(*param_7 + 0x248))(param_7,param_2);
  }
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c16790 FUN_147c16790 body=65 status=ok
// SIG undefined FUN_147c16790(void)

void FUN_147c16790(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_147c05556(param_2,param_1);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_2 + 0x10) + 0x8f0;
  }
  FUN_147c15d4c(param_1,param_2,param_3,lVar1);
  return;
}



// FUNCTION 147c167d2 FUN_147c167d2 body=1069 status=ok
// SIG undefined FUN_147c167d2(void)

void FUN_147c167d2(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 *puVar9;
  uint uVar10;
  float fVar11;
  undefined1 auStack_178 [32];
  undefined4 *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined1 local_129;
  undefined8 local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined1 local_bc [4];
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((((param_2 != 0) && (0 < *(int *)(param_2 + 0x18c))) && (*(longlong *)(param_2 + 0x168) != 0))
     && (*(longlong *)(param_2 + 0x170) != 0)) {
    lVar4 = FUN_147bfe59c();
    if (lVar4 == 0) {
      local_128 = 0;
    }
    else {
      local_128 = *(undefined8 *)(lVar4 + 0x218);
    }
    local_98 = 0;
    local_90 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = (undefined1 *)0x0;
    local_70 = 0;
    local_129 = FUN_147c081b2(param_2,(longlong)*(int *)(param_2 + 0x188) *
                                      (ulonglong)**(ushort **)(param_2 + 0x170));
    FUN_147c081c0(param_2,local_bc,&local_d8);
    if (0 < (longlong)*(int *)(param_2 + 0x18c)) {
      lVar4 = *(longlong *)(param_2 + 0x168);
      lVar1 = *(longlong *)(param_2 + 0x170);
      iVar3 = *(int *)(param_2 + 0x188);
      param_3 = param_3 & 0xffffffff;
      local_110 = param_1 + 0xa0;
      local_118 = param_1 + 0x40;
      uVar5 = (longlong)*(int *)(param_2 + 0x18c) + 1;
      do {
        uVar6 = (ulonglong)((uint)*(ushort *)(lVar1 + -4 + uVar5 * 2) * iVar3);
        if ((*(byte *)(lVar4 + 0x6f + uVar6) & 4) == 0) {
          lVar7 = uVar6 + lVar4;
          fVar11 = (float)FUN_147a77524(local_110,*(undefined4 *)(lVar7 + 0x90),
                                        *(undefined8 *)(param_2 + 0x10),0);
          local_150 = 0;
          local_158 = (undefined4 *)((ulonglong)local_158 & 0xffffffff00000000);
          FUN_147a776dc(local_118,&local_f0,*(undefined4 *)(lVar7 + 0x90));
          *(float *)(lVar7 + param_3) = (float)local_f0 * fVar11;
          *(float *)(lVar7 + 4 + param_3) = (float)local_e8 * fVar11;
          *(float *)(lVar7 + 8 + param_3) = (float)local_e0 * fVar11;
          if ((*(char *)(param_1 + 0x13c) == '\x01') &&
             (lVar7 = lVar7 + param_3, *(longlong *)(lVar7 + 0x10) != 0)) {
            local_120 = lVar7;
            FUN_1403458a2(&local_b8,&local_f0,lVar7 + 0x10,0);
            local_f8 = local_c8;
            local_108 = local_d8;
            uStack_104 = uStack_d4;
            uStack_100 = uStack_d0;
            uStack_fc = uStack_cc;
            local_148 = local_128;
            local_150 = CONCAT71(local_150._1_7_,local_129);
            local_158 = &local_108;
            local_140 = 1;
            FUN_147c16244(param_1,*(undefined8 *)(local_120 + 0x10));
          }
        }
        uVar5 = uVar5 - 1;
      } while (1 < uVar5);
    }
    if ((*(char *)(param_1 + 0x13c) == '\x01') && (iVar3 = *(int *)(param_2 + 0x270), 0 < iVar3)) {
      uVar10 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x268) + (longlong)(int)uVar10 * 8);
        if (plVar2 != (longlong *)0x0) {
          if ((int)uStack_b0 != local_84) {
            puVar9 = local_78;
            if (local_78 == (undefined1 *)0x0) {
              puVar9 = local_80;
            }
            for (iVar8 = *(int *)(puVar9 + (ulonglong)
                                           (local_70 - 1U &
                                           (int)plVar2 + (int)((ulonglong)plVar2 >> 0x20) * 0x17) *
                                           4); iVar8 != -1;
                iVar8 = *(int *)((longlong)iVar8 * 0x10 + local_b8 + 8)) {
              if (*(longlong **)(local_b8 + (longlong)iVar8 * 0x10) == plVar2) goto LAB_147c16b86;
            }
          }
          (**(code **)(*plVar2 + 0x420))(plVar2,0);
          iVar3 = *(int *)(param_2 + 0x270);
          iVar8 = ~uVar10 + iVar3;
          if (iVar8 != 0) {
            if (0 < iVar8) {
              iVar8 = 1;
            }
            memmove((void *)(*(longlong *)(param_2 + 0x268) + (longlong)(int)uVar10 * 8),
                    (void *)(*(longlong *)(param_2 + 0x268) + (longlong)(iVar3 - iVar8) * 8),
                    (longlong)iVar8 << 3);
            iVar3 = *(int *)(param_2 + 0x270);
          }
          *(int *)(param_2 + 0x270) = iVar3 + -1;
          FUN_147c28e40((longlong *)(param_2 + 0x268));
          uVar10 = uVar10 - 1;
          iVar3 = *(int *)(param_2 + 0x270);
        }
LAB_147c16b86:
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < iVar3);
    }
    local_70 = 0;
    if (local_78 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_140345f8a(&local_b8);
  }
  if ((local_60 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c16c06 FUN_147c16c06 body=418 status=ok
// SIG undefined FUN_147c16c06(void)

void FUN_147c16c06(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x98) != 0) {
    lVar3 = FUN_145a6b57e();
    lVar1 = *(longlong *)(param_1 + 0x98);
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      *(undefined8 *)(lVar1 + 0x38) = 0x3ff0000000000000;
      *(undefined8 *)(lVar1 + 0x40) = 0x3ff0000000000000;
      *(undefined8 *)(lVar1 + 0x48) = 0x3ff0000000000000;
      *(byte *)(lVar1 + 0x30) = *(byte *)(lVar1 + 0x30) | 2;
    }
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    lVar3 = FUN_145a6b3a6();
    lVar1 = *(longlong *)(param_1 + 200);
    if (((lVar1 != 0) && (lVar3 != 0)) &&
       ((lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0 &&
        ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)))))) {
      *(undefined4 *)(lVar1 + 0x38) = 0x42000000;
      *(byte *)(lVar1 + 0x30) = *(byte *)(lVar1 + 0x30) | 2;
    }
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    lVar3 = FUN_145a6b3a6();
    lVar1 = *(longlong *)(param_1 + 0xf8);
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      *(undefined4 *)(lVar1 + 0x38) = 0x41700000;
      *(byte *)(lVar1 + 0x30) = *(byte *)(lVar1 + 0x30) | 2;
    }
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    lVar3 = FUN_145a6b3a6();
    lVar1 = *(longlong *)(param_1 + 0x128);
    if (((lVar1 != 0) && (lVar3 != 0)) &&
       ((lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0 &&
        ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)))))) {
      *(undefined4 *)(lVar1 + 0x38) = 0x41800000;
      *(byte *)(lVar1 + 0x30) = *(byte *)(lVar1 + 0x30) | 2;
    }
  }
  return;
}



// FUNCTION 147c16daa FUN_147c16daa body=80 status=ok
// SIG undefined FUN_147c16daa(void)

void FUN_147c16daa(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x29) & 4) == 0) {
    return;
  }
  uVar1 = FUN_147c05556(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x000147c16df7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x368))(param_1,param_2,uVar1,param_1 + 0x28);
  return;
}



// FUNCTION 147c16dfe FUN_147c16dfe body=17 status=ok
// SIG undefined FUN_147c16dfe(void)

undefined4 FUN_147c16dfe(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144b2b6af();
  return *(undefined4 *)(lVar1 + 4);
}



// FUNCTION 147c16e10 FUN_147c16e10 body=66 status=ok
// SIG undefined FUN_147c16e10(void)

undefined4 FUN_147c16e10(void)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  
  lVar1 = DAT_14caf5100;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar3 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  return *(undefined4 *)(lVar1 + uVar3 * 4);
}



// FUNCTION 147c16e52 FUN_147c16e52 body=89 status=ok
// SIG undefined FUN_147c16e52(void)

longlong * FUN_147c16e52(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  (**(code **)(*param_1 + 0x2d8))();
  plVar1 = (longlong *)FUN_14001cc68(0x2a0,0x10);
  FUN_147c0840e(plVar1);
  (**(code **)(*plVar1 + 8))(plVar1,param_2,param_3);
  FUN_147c16eac(param_1);
  return plVar1;
}



// FUNCTION 147c16eac FUN_147c16eac body=168 status=ok
// SIG undefined FUN_147c16eac(void)

void FUN_147c16eac(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x58) == 0) || (*(char *)(param_1 + 0x61) == '\0')) &&
     (*(longlong *)(param_1 + 0xa0) == 0)) {
    FUN_1446f470e(&local_20,L"DistributionRollPitchYaw",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147c120bf(param_1,local_20,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0xa0) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c16f5e FUN_147c16f5e body=465 status=ok
// SIG undefined FUN_147c16f5e(void)

void FUN_147c16f5e(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  undefined1 auStack_248 [32];
  undefined1 *local_228;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined2 local_14c;
  undefined1 local_14a;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  undefined1 local_c8 [136];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_248;
  if (param_1[6] != 0) {
    plVar4 = (longlong *)FUN_144b2abfe();
    uVar2 = FUN_144b2ac06(param_1[6],0);
    if ((-1 < (int)uVar2) && ((int)uVar2 < (int)plVar4[1])) {
      iVar1 = *(int *)(param_2 + 0x160);
      local_40 = 0x1100000000;
      local_198 = 0x400000000;
      local_208 = 0;
      uStack_200 = 0;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_190 = 0;
      uStack_188 = 0;
      local_180 = 0;
      uStack_178 = 0;
      local_170 = 0;
      uStack_168 = 0;
      local_160 = 0;
      uStack_158 = 0;
      local_150 = 0xffffffff;
      local_14c = 0xff;
      local_14a = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0;
      FUN_147c34a25(0,*(undefined8 *)(*plVar4 + (ulonglong)uVar2 * 8),&local_208);
      local_228 = local_c8;
      FUN_147bc8d44(DAT_14c760db4,0x60,(ulonglong)(0 < iVar1) << 4,&local_208);
      uVar3 = (**(code **)(*param_1 + 0x3a8))(param_1);
      *param_3 = uVar3;
      FUN_14016134a(&local_218,&DAT_14caf1748,local_c8);
      iVar1 = param_3[0xc];
      param_3[0xc] = iVar1 + 1U;
      if ((uint)param_3[0xd] < iVar1 + 1U) {
        FUN_140df0cf8(param_3 + 2,iVar1);
      }
      puVar5 = param_3 + 2;
      if (*(undefined4 **)(param_3 + 10) != (undefined4 *)0x0) {
        puVar5 = *(undefined4 **)(param_3 + 10);
      }
      puVar5 = puVar5 + (longlong)iVar1 * 4;
      *puVar5 = local_218;
      puVar5[1] = uStack_214;
      puVar5[2] = uStack_210;
      puVar5[3] = uStack_20c;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c17132 FUN_147c17132 body=180 status=ok
// SIG undefined FUN_147c17132(void)

void FUN_147c17132(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  
  switchD_143c3d4dc::caseD_21();
  bVar5 = *(byte *)(param_2 + 0x28) & 1;
  iVar3 = (int)*(undefined8 *)(param_2 + 0x40);
  if ((iVar3 < 0x173 & bVar5) != 1) goto LAB_147c1715c;
  FUN_147c16eac();
  if (*(longlong *)(param_1 + 0xa0) == 0) {
LAB_147c17187:
    lVar6 = 0;
  }
  else {
    lVar4 = FUN_145b3c318();
    lVar1 = *(longlong *)(param_1 + 0xa0);
    if (lVar1 == 0) goto LAB_147c17187;
    lVar6 = 0;
    if ((lVar4 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) {
      if (*(int *)(lVar2 + 0x38) < *(int *)(lVar4 + 0x38)) goto LAB_147c17187;
      lVar6 = 0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30) {
        lVar6 = lVar1;
      }
    }
  }
  *(undefined8 *)(lVar6 + 0x58) = 0;
  *(undefined8 *)(lVar6 + 0x60) = 0;
  *(undefined8 *)(lVar6 + 0x48) = 0;
  *(undefined8 *)(lVar6 + 0x50) = 0;
  *(undefined8 *)(lVar6 + 0x38) = 0;
  *(undefined8 *)(lVar6 + 0x40) = 0;
  *(byte *)(lVar6 + 0x30) = *(byte *)(lVar6 + 0x30) | 2;
  iVar3 = *(int *)(param_2 + 0x40);
  bVar5 = *(byte *)(param_2 + 0x28) & 1;
LAB_147c1715c:
  if ((bVar5 != 0) && (iVar3 < 0x1df)) {
    *(byte *)(param_1 + 0xac) = *(byte *)(param_1 + 0xac) & 0xfb;
  }
  return;
}



// FUNCTION 147c171e6 FUN_147c171e6 body=39 status=ok
// SIG undefined FUN_147c171e6(void)

void FUN_147c171e6(longlong param_1)

{
  FUN_1446e0b6e();
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400337aa();
    return;
  }
  return;
}



// FUNCTION 147c17212 FUN_147c17212 body=295 status=ok
// SIG undefined FUN_147c17212(void)

void FUN_147c17212(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x40) == 0) || (*(char *)(param_1 + 0x49) == '\0')) &&
     (*(longlong *)(param_1 + 0x88) == 0)) {
    FUN_1446f470e(&local_20,L"DistributionLowerLeftCorner",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147bfacf3(param_1,local_20,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x88) = lVar1;
  }
  if (((*(int *)(param_1 + 0xa0) == 0) || (*(char *)(param_1 + 0xa9) == '\0')) &&
     (*(longlong *)(param_1 + 0xe8) == 0)) {
    FUN_1446f470e(&local_28,L"DistributionUpperRightCorner",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147bfacf3(param_1,local_28,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0xe8) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c1733a FUN_147c1733a body=1385 status=ok
// SIG undefined FUN_147c1733a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c1733a(longlong param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar24;
  undefined1 auVar23 [16];
  undefined4 uVar25;
  undefined4 uVar26;
  double dVar27;
  double dVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined8 local_140;
  double local_130;
  double local_128;
  double dStack_120;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar2 = param_2[3];
  local_140 = 0;
  local_148 = 0;
  FUN_147a776dc(param_1 + 0x30,&local_f8);
  local_140 = 0;
  local_148 = 0;
  FUN_147a776dc(param_1 + 0x90,&local_110);
  uVar26 = (undefined4)((ulonglong)local_100 >> 0x20);
  uVar31 = (undefined4)((ulonglong)local_e8 >> 0x20);
  uVar36 = SUB84(local_e8,0);
  uVar37 = uVar31;
  if (local_100 <= local_e8) {
    uVar36 = SUB84(local_100,0);
    uVar37 = uVar26;
  }
  dVar12 = (double)CONCAT44(uVar37,uVar36);
  uVar30 = (undefined4)((ulonglong)local_110 >> 0x20);
  uVar32 = (undefined4)((ulonglong)local_108 >> 0x20);
  uVar29 = (undefined4)((ulonglong)local_f0 >> 0x20);
  uVar38 = SUB84(local_f0,0);
  uVar39 = uVar29;
  if (local_108 <= local_f0) {
    uVar38 = SUB84(local_108,0);
    uVar39 = uVar32;
  }
  dVar13 = (double)CONCAT44(uVar39,uVar38);
  uVar34 = (undefined4)((ulonglong)local_f8 >> 0x20);
  uVar33 = SUB84(local_f8,0);
  uVar35 = uVar34;
  if (local_110 <= local_f8) {
    uVar33 = SUB84(local_110,0);
    uVar35 = uVar30;
  }
  dVar10 = (double)CONCAT44(uVar35,uVar33);
  uVar25 = SUB84(local_100,0);
  if (local_100 <= local_e8) {
    uVar25 = SUB84(local_e8,0);
    uVar26 = uVar31;
  }
  dVar7 = (double)CONCAT44(uVar26,uVar25);
  uVar31 = SUB84(local_108,0);
  if (local_108 <= local_f0) {
    uVar31 = SUB84(local_f0,0);
    uVar32 = uVar29;
  }
  dVar9 = (double)CONCAT44(uVar32,uVar31);
  uVar29 = SUB84(local_110,0);
  if (local_110 <= local_f8) {
    uVar29 = SUB84(local_f8,0);
    uVar30 = uVar34;
  }
  dVar8 = (double)CONCAT44(uVar30,uVar29);
  if ((*(byte *)(param_1 + 0xf0) & 1) == 0) {
    lVar3 = param_2[2];
    dVar10 = (double)CONCAT44(uVar35,uVar33) + *(double *)(lVar3 + 0x260);
    dVar13 = (double)CONCAT44(uVar39,uVar38) + *(double *)(lVar3 + 0x268);
    dVar12 = (double)CONCAT44(uVar37,uVar36) + *(double *)(lVar3 + 0x270);
    dVar8 = (double)CONCAT44(uVar30,uVar29) + *(double *)(lVar3 + 0x260);
    dVar9 = (double)CONCAT44(uVar32,uVar31) + *(double *)(lVar3 + 0x268);
    dVar7 = (double)CONCAT44(uVar26,uVar25) + *(double *)(lVar3 + 0x270);
  }
  if (0 < (longlong)*(int *)((longlong)param_2 + 0x18c)) {
    lVar3 = param_2[0x2d];
    lVar4 = param_2[0x2e];
    lVar16 = param_2[0x31];
    uVar18 = (longlong)*(int *)((longlong)param_2 + 0x18c);
    local_130 = dVar8;
    do {
      uVar17 = (ulonglong)((uint)*(ushort *)(lVar4 + -2 + uVar18 * 2) * (int)lVar16);
      if ((*(byte *)(lVar3 + 0x6f + uVar17) & 4) == 0) {
        dVar19 = *(double *)(lVar3 + 0x28 + uVar17) + (double)param_2[0x4a];
        dVar21 = *(double *)(lVar3 + 0x20 + uVar17) + (double)param_2[0x49];
        dVar20 = *(double *)(lVar3 + 0x18 + uVar17) + (double)param_2[0x48];
        if ((*(byte *)(*(longlong *)(lVar2 + 0x30) + 0x71) & 1) == 0) {
          if ((*(byte *)(param_1 + 0xf0) & 5) == 0) {
            lVar5 = param_2[2];
            local_128 = *(double *)(lVar5 + 0x260);
            dStack_120 = *(double *)(lVar5 + 0x268);
            dVar20 = dVar20 - local_128;
            dVar21 = dVar21 - dStack_120;
            dVar19 = dVar19 - *(double *)(lVar5 + 0x270);
            dVar22 = -*(double *)(lVar5 + 0x240);
            dVar24 = -*(double *)(lVar5 + 0x248);
            dVar8 = *(double *)(lVar5 + 0x250) * -1.0;
            dVar11 = *(double *)(lVar5 + 600) * 1.0;
            dVar27 = dVar20 * dVar8 - dVar22 * dVar19;
            dVar14 = dVar21 * dVar22 - dVar20 * dVar24;
            dVar15 = dVar19 * dVar24 - dVar21 * dVar8;
            dVar15 = dVar15 + dVar15;
            dVar27 = dVar27 + dVar27;
            dVar14 = dVar14 + dVar14;
            auVar1 = *(undefined1 (*) [16])(lVar5 + 0x280);
            auVar23 = divpd(_DAT_149934d80,auVar1);
            dVar19 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(lVar5 + 0x290))) &
                             (ulonglong)(1.0 / *(double *)(lVar5 + 0x290))) *
                     (dVar11 * dVar14 + dVar19 + (dVar27 * dVar22 - dVar15 * dVar24)) +
                     *(double *)(lVar5 + 0x270);
            dVar20 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar23._0_8_
                             ) * ((dVar14 * dVar24 - dVar27 * dVar8) + dVar11 * dVar15 + dVar20) +
                     local_128;
            dVar21 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar23._8_8_
                             ) *
                     (*(double *)(lVar5 + 0x240) * dVar14 + dVar8 * dVar15 +
                     dVar11 * dVar27 + dVar21) + dStack_120;
            dVar8 = local_130;
          }
        }
        else {
          lVar5 = param_2[2];
          dVar20 = dVar20 * *(double *)(lVar5 + 0x280);
          dVar21 = dVar21 * *(double *)(lVar5 + 0x288);
          dVar19 = dVar19 * *(double *)(lVar5 + 0x290);
          dVar14 = *(double *)(lVar5 + 0x240);
          dVar15 = *(double *)(lVar5 + 0x248);
          dVar27 = *(double *)(lVar5 + 0x250);
          dVar11 = *(double *)(lVar5 + 600);
          dVar22 = dVar21 * dVar14 - dVar20 * dVar15;
          dVar24 = dVar19 * dVar15 - dVar21 * dVar27;
          dVar28 = dVar20 * dVar27 - dVar14 * dVar19;
          dVar24 = dVar24 + dVar24;
          dVar28 = dVar28 + dVar28;
          dVar22 = dVar22 + dVar22;
          dVar20 = (dVar22 * dVar15 - dVar28 * dVar27) + dVar11 * dVar24 + dVar20;
          dVar21 = (dVar27 * dVar24 - dVar14 * dVar22) + *(double *)(lVar5 + 600) * dVar28 + dVar21;
          dVar19 = dVar22 * dVar11 + dVar19 + (dVar28 * dVar14 - dVar24 * dVar15);
        }
        if ((dVar20 <= dVar10) || (dVar8 <= dVar20)) {
          if ((*(byte *)(param_1 + 0xf0) & 2) == 0) goto LAB_147c17800;
        }
        else if ((bool)((dVar19 < dVar7 && dVar12 < dVar19) & -(dVar21 < dVar9 && dVar13 < dVar21))
                 != ((*(byte *)(param_1 + 0xf0) & 2) == 0)) {
LAB_147c17800:
          (**(code **)(*param_2 + 0xe8))(param_2,(int)uVar18 + -1);
        }
      }
      bVar6 = 1 < uVar18;
      uVar18 = uVar18 - 1;
    } while (bVar6);
  }
  if ((local_e0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c178a6 FUN_147c178a6 body=162 status=ok
// SIG undefined FUN_147c178a6(void)

void FUN_147c178a6(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x40) == 0) || (*(char *)(param_1 + 0x49) == '\0')) &&
     (*(longlong *)(param_1 + 0x58) == 0)) {
    FUN_1446f470e(&local_20,L"DistributionHeight",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147bf866f(param_1,local_20,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x58) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c1794a FUN_147c1794a body=411 status=ok
// SIG undefined FUN_147c1794a(void)

void FUN_147c1794a(longlong param_1,longlong *param_2)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  double dVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  
  lVar2 = param_2[3];
  auVar14._0_8_ = FUN_147a77524(param_1 + 0x30,(int)param_2[0x34],param_2[2],0);
  auVar14._8_8_ = extraout_XMM0_Qb;
  if ((*(uint *)(param_1 + 0x60) & 4) != 0) {
    auVar13._0_8_ = (double)(float)auVar14._0_8_ * *(double *)(param_2[2] + 0x290);
    auVar13._8_8_ = extraout_XMM0_Qb;
    auVar14._4_12_ = auVar13._4_12_;
    auVar14._0_4_ = (float)auVar13._0_8_;
  }
  if ((*(uint *)(param_1 + 0x60) & 1) == 0) {
    auVar15._8_8_ = auVar14._8_8_;
    auVar15._0_8_ = (double)auVar14._0_4_ + *(double *)(param_2[2] + 0x270);
    auVar14._4_12_ = auVar15._4_12_;
    auVar14._0_4_ = (float)auVar15._0_8_;
  }
  if (0 < (longlong)*(int *)((longlong)param_2 + 0x18c)) {
    lVar3 = param_2[0x2d];
    lVar4 = param_2[0x2e];
    lVar8 = param_2[0x31];
    uVar10 = (longlong)*(int *)((longlong)param_2 + 0x18c);
    do {
      uVar9 = (ulonglong)((uint)*(ushort *)(lVar4 + -2 + uVar10 * 2) * (int)lVar8);
      if ((*(byte *)(lVar3 + 0x6f + uVar9) & 4) == 0) {
        dVar17 = *(double *)(lVar3 + 0x28 + uVar9);
        if ((*(byte *)(*(longlong *)(lVar2 + 0x30) + 0x71) & 1) != 0) {
          pdVar1 = (double *)(lVar3 + 0x18 + uVar9);
          lVar5 = param_2[2];
          dVar11 = *pdVar1 * *(double *)(lVar5 + 0x280);
          dVar16 = pdVar1[1] * *(double *)(lVar5 + 0x288);
          dVar17 = dVar17 * *(double *)(lVar5 + 0x290);
          dVar7 = *(double *)(lVar5 + 0x240);
          dVar12 = dVar16 * dVar7 - *(double *)(lVar5 + 0x248) * dVar11;
          dVar16 = dVar17 * *(double *)(lVar5 + 0x248) - *(double *)(lVar5 + 0x250) * dVar16;
          dVar11 = *(double *)(lVar5 + 0x250) * dVar11 - dVar17 * dVar7;
          dVar17 = (dVar12 + dVar12) * *(double *)(lVar5 + 600) + dVar17 +
                   ((dVar11 + dVar11) * dVar7 - *(double *)(lVar5 + 0x248) * (dVar16 + dVar16));
        }
        if ((((*(uint *)(param_1 + 0x60) & 2) != 0) && (dVar17 < (double)auVar14._0_4_)) ||
           (((*(uint *)(param_1 + 0x60) & 2) == 0 && ((double)auVar14._0_4_ < dVar17)))) {
          (**(code **)(*param_2 + 0xe8))(param_2,(int)uVar10 + -1);
        }
      }
      bVar6 = 1 < uVar10;
      uVar10 = uVar10 - 1;
    } while (bVar6);
  }
  return;
}



// FUNCTION 147c17ae8 FUN_147c17ae8 body=162 status=ok
// SIG undefined FUN_147c17ae8(void)

void FUN_147c17ae8(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x40) == 0) || (*(char *)(param_1 + 0x49) == '\0')) &&
     (*(longlong *)(param_1 + 0x58) == 0)) {
    FUN_1446f470e(&local_20,L"DistributionLifetime",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147c1308f(param_1,local_20,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x58) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c17b8c FUN_147c17b8c body=157 status=ok
// SIG undefined FUN_147c17b8c(void)

void FUN_147c17b8c(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147a77524(param_1 + 0x30,0,0,0);
  FUN_147a775f8(param_1 + 0x30,local_2c,&local_30);
  *(undefined4 *)(param_2 + 0x448) = local_30;
  iVar1 = *(int *)(param_2 + 0x20);
  *(uint *)(param_2 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x24) < iVar1 + 1U) {
    FUN_147c0c860((longlong *)(param_2 + 0x18),iVar1);
  }
  *(longlong *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar1 * 8) = param_1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c17c2a FUN_147c17c2a body=73 status=ok
// SIG undefined FUN_147c17c2a(void)

void FUN_147c17c2a(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_147c05556(param_2,param_1);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_2 + 0x10) + 0x8f0;
  }
  FUN_147c17c74(param_1,param_2,param_4,lVar1);
  return;
}



// FUNCTION 147c17c74 FUN_147c17c74 body=164 status=ok
// SIG undefined FUN_147c17c74(void)

void FUN_147c17c74(longlong param_1,longlong param_2,float param_3,undefined8 param_4,
                  longlong param_5)

{
  uint uVar1;
  float fVar2;
  
  fVar2 = (float)FUN_147a77524(param_1 + 0x30,param_2,*(undefined8 *)(param_2 + 0x10));
  if (*(float *)(param_5 + 0x94) <= 0.0) {
    fVar2 = (float)(-(uint)(0.0 < fVar2) & (uint)(1.0 / fVar2));
  }
  else {
    fVar2 = 1.0 / (fVar2 + 1.0 / *(float *)(param_5 + 0x94));
  }
  *(float *)(param_5 + 0x94) = fVar2;
  uVar1 = -(uint)(1.0 < *(float *)(param_5 + 0x90));
  *(uint *)(param_5 + 0x90) =
       uVar1 & (uint)*(float *)(param_5 + 0x90) | ~uVar1 & (uint)(param_3 * fVar2);
  return;
}



// FUNCTION 147c17d18 FUN_147c17d18 body=93 status=ok
// SIG undefined FUN_147c17d18(void)

void FUN_147c17d18(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar3 = FUN_145b3bf70();
    lVar1 = *(longlong *)(param_1 + 0x58);
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      *(undefined1 **)(lVar1 + 0x38) = &DAT_3f8000003f800000;
      *(byte *)(lVar1 + 0x30) = *(byte *)(lVar1 + 0x30) | 2;
    }
  }
  return;
}



// FUNCTION 147c17d76 FUN_147c17d76 body=74 status=ok
// SIG undefined FUN_147c17d76(void)

void FUN_147c17d76(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_147a775f8(param_1 + 0x30,local_14,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18);
}



// FUNCTION 147c17dd4 FUN_147c17dd4 body=74 status=ok
// SIG undefined FUN_147c17dd4(void)

void FUN_147c17dd4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0xd) & 4) == 0) {
    return;
  }
  uVar1 = FUN_147c05556(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x000147c17e1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x368))(param_1,param_2,uVar1,param_1 + 0xc);
  return;
}



// FUNCTION 147c17e1e FUN_147c17e1e body=82 status=ok
// SIG undefined FUN_147c17e1e(void)

void FUN_147c17e1e(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_147c05556(param_2,param_1);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_2 + 0x10) + 0x8f0;
  }
  FUN_147a77524(param_1 + 0x30,param_3,param_4,lVar1);
  return;
}



// FUNCTION 147c17e70 FUN_147c17e70 body=295 status=ok
// SIG undefined FUN_147c17e70(void)

void FUN_147c17e70(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0xa0) == 0) || (*(char *)(param_1 + 0xa9) == '\0')) &&
     (*(longlong *)(param_1 + 0xb8) == 0)) {
    FUN_1446f470e(&local_20,L"DistributionStrength",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147bf866f(param_1,local_20,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0xb8) = lVar1;
  }
  if (((*(int *)(param_1 + 0x70) == 0) || (*(char *)(param_1 + 0x79) == '\0')) &&
     (*(longlong *)(param_1 + 0x88) == 0)) {
    FUN_1446f470e(&local_28,L"DistributionRange",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147bf866f(param_1,local_28,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x88) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c17f98 FUN_147c17f98 body=1105 status=ok
// SIG undefined FUN_147c17f98(void)

void FUN_147c17f98(longlong param_1,longlong param_2,undefined8 param_3,float param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  dVar8 = *(double *)(param_1 + 0x58) - *(double *)(param_1 + 0x40);
  dVar11 = *(double *)(param_1 + 0x50) - *(double *)(param_1 + 0x38);
  dVar12 = *(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x30);
  dVar19 = dVar8 * dVar8 + dVar12 * dVar12 + dVar11 * dVar11;
  bVar5 = NAN(dVar19);
  bVar6 = dVar19 == 0.0;
  if ((bVar6) && (!bVar5)) {
    dVar12 = 9.99999993922529e-09;
  }
  if ((bVar6) && (!bVar5)) {
    dVar11 = 9.99999993922529e-09;
  }
  if ((bVar6) && (!bVar5)) {
    dVar8 = 9.99999993922529e-09;
  }
  if (0 < (longlong)*(int *)(param_2 + 0x18c)) {
    lVar2 = *(longlong *)(param_2 + 0x168);
    lVar3 = *(longlong *)(param_2 + 0x170);
    iVar1 = *(int *)(param_2 + 0x188);
    dVar19 = 1.0 / (dVar8 * dVar8 + dVar12 * dVar12 + dVar11 * dVar11);
    uVar18 = (longlong)*(int *)(param_2 + 0x18c) + 1;
    do {
      uVar17 = (ulonglong)((uint)*(ushort *)(lVar3 + -4 + uVar18 * 2) * iVar1);
      if ((*(byte *)(lVar2 + 0x6f + uVar17) & 4) == 0) {
        lVar4 = *(longlong *)(param_2 + 0x10);
        dVar7 = *(double *)(lVar2 + 0x28 + uVar17) - *(double *)(lVar4 + 0x270);
        dVar15 = *(double *)(lVar2 + 0x20 + uVar17) - *(double *)(lVar4 + 0x268);
        dVar13 = *(double *)(lVar2 + 0x18 + uVar17) - *(double *)(lVar4 + 0x260);
        dVar14 = (dVar7 - *(double *)(param_1 + 0x40)) * dVar8 +
                 (dVar13 - *(double *)(param_1 + 0x30)) * dVar12 +
                 (dVar15 - *(double *)(param_1 + 0x38)) * dVar11;
        dVar9 = dVar12 * dVar14 * dVar19;
        fVar21 = (float)((dVar9 - *(double *)(param_1 + 0x30)) / dVar12);
        if ((dVar12 == 0.0) && (!NAN(dVar12))) {
          fVar21 = 0.0;
        }
        dVar10 = dVar11 * dVar14 * dVar19;
        fVar22 = (float)((dVar10 - *(double *)(param_1 + 0x38)) / dVar11);
        if ((dVar11 == 0.0) && (!NAN(dVar11))) {
          fVar22 = 0.0;
        }
        dVar14 = dVar14 * dVar8 * dVar19;
        fVar20 = (float)((dVar14 - *(double *)(param_1 + 0x40)) / dVar8);
        if ((dVar8 == 0.0) && (!NAN(dVar8))) {
          fVar20 = 0.0;
        }
        bVar5 = fVar20 == 0.0;
        if ((bVar5) && (!NAN(fVar20))) {
          fVar20 = 0.0;
        }
        bVar6 = fVar22 != 0.0;
        if ((!bVar6) && (!NAN(fVar22))) {
          fVar22 = fVar20;
        }
        fVar20 = fVar21;
        if ((fVar21 == 0.0) && (!NAN(fVar21))) {
          fVar20 = fVar22;
        }
        fVar22 = fVar20;
        if (bVar5) {
          fVar22 = 0.0;
        }
        fVar16 = fVar20;
        if (!bVar6) {
          fVar16 = fVar22;
        }
        if ((fVar21 == 0.0) && (!NAN(fVar21))) {
          fVar20 = fVar16;
        }
        if ((0.0 <= fVar20) && (fVar20 <= 1.0)) {
          fVar21 = (float)FUN_147a77524(param_1 + 0x60,bVar6,lVar4,0);
          if (0.0 < fVar21) {
            dVar7 = dVar7 - dVar14;
            dVar15 = dVar15 - dVar10;
            dVar13 = dVar13 - dVar9;
            fVar22 = (float)SQRT(dVar7 * dVar7 + dVar13 * dVar13 + dVar15 * dVar15);
            if (fVar22 <= fVar21) {
              fVar21 = (float)FUN_147a77524(param_1 + 0x90,(fVar21 - fVar22) / fVar21,
                                            *(undefined8 *)(param_2 + 0x10),0);
              *(float *)(lVar2 + 0x40 + uVar17) =
                   (float)(dVar15 * dVar8 - dVar11 * dVar7) * fVar21 * param_4 +
                   *(float *)(lVar2 + 0x40 + uVar17);
              *(float *)(lVar2 + 0x44 + uVar17) =
                   (float)(dVar7 * dVar12 - dVar8 * dVar13) * fVar21 * param_4 +
                   *(float *)(lVar2 + 0x44 + uVar17);
              *(float *)(lVar2 + 0x48 + uVar17) =
                   (float)(dVar13 * dVar11 - dVar12 * dVar15) * fVar21 * param_4 +
                   *(float *)(lVar2 + 0x48 + uVar17);
            }
          }
        }
      }
      uVar18 = uVar18 - 1;
    } while (1 < uVar18);
  }
  return;
}



// FUNCTION 147c183ec FUN_147c183ec body=289 status=ok
// SIG undefined FUN_147c183ec(void)

void FUN_147c183ec(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x48) == 0) || (*(char *)(param_1 + 0x51) == '\0')) &&
     (*(longlong *)(param_1 + 0x60) == 0)) {
    FUN_1446f470e(&local_20,L"DistributionRange",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147bf866f(param_1,local_20,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x60) = lVar1;
  }
  if (((*(int *)(param_1 + 0x80) == 0) || (*(char *)(param_1 + 0x89) == '\0')) &&
     (*(longlong *)(param_1 + 0x98) == 0)) {
    FUN_1446f470e(&local_28,L"DistributionStrength",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147bf866f(param_1,local_28,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x98) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c1850e FUN_147c1850e body=344 status=ok
// SIG undefined FUN_147c1850e(void)

void FUN_147c1850e(longlong param_1,longlong param_2,uint param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  int *piVar6;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
  lVar3 = (longlong)*(int *)(*(longlong *)(param_2 + 0x10) + 0x8e8);
  if (lVar3 < 1) {
    return;
  }
  lVar5 = 0;
  while ((plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x8e0) + lVar5 * 8),
         plVar1 == (longlong *)0x0 ||
         (*(longlong *)(plVar1[1] + 0x28) != *(longlong *)(param_1 + 0x30)))) {
    lVar5 = lVar5 + 1;
    if (lVar3 == lVar5) {
      return;
    }
  }
  piVar6 = (int *)(param_5 + (ulonglong)param_3);
  lVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,*(undefined4 *)(param_1 + 0xac));
  if (lVar3 != 0) {
    iVar2 = *(int *)(param_1 + 0xac);
    *(int *)(param_1 + 0xac) = iVar2 + 1;
    *piVar6 = iVar2;
    return;
  }
  if (*(char *)(param_1 + 0xa4) == '\x01') {
    if (0 < *(int *)((longlong)plVar1 + 0x18c)) {
      iVar2 = 0;
      do {
        lVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,iVar2);
        if (lVar3 != 0) {
          *(int *)(param_1 + 0xac) = iVar2;
          *piVar6 = iVar2;
          piVar6[1] = (int)lVar3;
          *(undefined8 *)(piVar6 + 2) = *(undefined8 *)(lVar3 + 0x40);
          piVar6[4] = *(int *)(lVar3 + 0x48);
          return;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)((longlong)plVar1 + 0x18c));
    }
  }
  else if (*(char *)(param_1 + 0xa4) == '\0') {
    lVar3 = FUN_147c05556(param_2,param_1);
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(param_2 + 0x10) + 0x8f0;
    }
    iVar2 = *(int *)((longlong)plVar1 + 0x18c);
    if (iVar2 < 1) {
      iVar2 = 0;
    }
    else {
      uVar4 = *(int *)(lVar3 + 4) * 0xbb38435 + 0x3619636b;
      *(uint *)(lVar3 + 4) = uVar4;
      iVar2 = (int)((float)iVar2 * ((float)(uVar4 >> 9 | 0x3f800000) + -1.0));
    }
    *(int *)(param_1 + 0xac) = iVar2;
    *piVar6 = iVar2;
  }
  piVar6[1] = 0;
  return;
}



// FUNCTION 147c18666 FUN_147c18666 body=1525 status=ok
// SIG undefined FUN_147c18666(void)

void FUN_147c18666(longlong param_1,longlong param_2,ulonglong param_3,float param_4)

{
  undefined8 *puVar1;
  double dVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  byte bVar15;
  ulonglong uVar16;
  byte bVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 uVar20;
  longlong lVar21;
  ulonglong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar18 = (longlong)*(int *)(*(longlong *)(param_2 + 0x10) + 0x8e8);
    if (0 < lVar18) {
      lVar21 = 0;
      do {
        plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x8e0) + lVar21 * 8);
        if ((plVar4 != (longlong *)0x0) &&
           (*(longlong *)(plVar4[1] + 0x28) == *(longlong *)(param_1 + 0x30))) {
          if ((longlong)*(int *)(param_2 + 0x18c) < 1) {
            return;
          }
          lVar18 = *(longlong *)(param_2 + 0x168);
          bVar17 = *(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x18) + 0x30) + 0x71) & 1;
          bVar15 = *(byte *)(*(longlong *)(plVar4[3] + 0x30) + 0x71) & 1;
          iVar3 = *(int *)(param_2 + 0x188);
          lVar21 = *(longlong *)(param_2 + 0x170);
          uVar22 = (longlong)*(int *)(param_2 + 0x18c) + 1;
          do {
            uVar16 = (ulonglong)((uint)*(ushort *)(lVar21 + -4 + uVar22 * 2) * iVar3);
            if ((*(byte *)(lVar18 + 0x6f + uVar16) & 4) == 0) {
              lVar19 = uVar16 + lVar18;
              puVar1 = (undefined8 *)(lVar19 + (param_3 & 0xffffffff));
              if (*(int *)(lVar19 + (param_3 & 0xffffffff)) == -1) {
                if ((*(byte *)(param_1 + 0xa8) & 2) != 0) {
                  *(float *)(lVar19 + 0x40) = *(float *)(puVar1 + 1) + *(float *)(lVar19 + 0x40);
                  *(float *)(lVar19 + 0x44) =
                       *(float *)((longlong)puVar1 + 0xc) + *(float *)(lVar19 + 0x44);
                  *(float *)(lVar19 + 0x48) = *(float *)(puVar1 + 2) + *(float *)(lVar19 + 0x48);
                }
              }
              else {
                uVar16 = (**(code **)(*plVar4 + 0x108))(plVar4);
                if (uVar16 != 0) {
                  if ((((ulonglong)*(uint *)((longlong)puVar1 + 4) == 0) ||
                      (uVar16 == *(uint *)((longlong)puVar1 + 4))) ||
                     ((*(byte *)(param_1 + 0xa8) & 1) != 0)) {
                    fVar23 = (float)FUN_147a77524(param_1 + 0x38,*(undefined4 *)(uVar16 + 0x90),
                                                  *(undefined8 *)(param_2 + 0x10),0);
                    dVar8 = *(double *)(uVar16 + 0x18);
                    dVar9 = *(double *)(uVar16 + 0x20);
                    dVar27 = *(double *)(uVar16 + 0x28);
                    dVar6 = *(double *)(lVar19 + 0x18);
                    dVar7 = *(double *)(lVar19 + 0x20);
                    dVar26 = *(double *)(lVar19 + 0x28);
                    if (bVar17 != bVar15) {
                      if (bVar15 != 0) {
                        lVar5 = *(longlong *)(param_2 + 0x10);
                        dVar8 = dVar8 * *(double *)(lVar5 + 0x280);
                        dVar9 = dVar9 * *(double *)(lVar5 + 0x288);
                        dVar27 = dVar27 * *(double *)(lVar5 + 0x290);
                        dVar12 = *(double *)(lVar5 + 0x240);
                        dVar13 = *(double *)(lVar5 + 0x248);
                        dVar14 = *(double *)(lVar5 + 0x250);
                        dVar2 = *(double *)(lVar5 + 600);
                        dVar28 = dVar9 * dVar12 - dVar8 * dVar13;
                        dVar10 = dVar27 * dVar13 - dVar9 * dVar14;
                        dVar11 = dVar8 * dVar14 - dVar12 * dVar27;
                        dVar10 = dVar10 + dVar10;
                        dVar11 = dVar11 + dVar11;
                        dVar28 = dVar28 + dVar28;
                        dVar8 = (dVar28 * dVar13 - dVar11 * dVar14) + dVar2 * dVar10 + dVar8;
                        dVar9 = (dVar14 * dVar10 - dVar12 * dVar28) +
                                *(double *)(lVar5 + 600) * dVar11 + dVar9;
                        dVar27 = dVar28 * dVar2 + dVar27 + (dVar11 * dVar12 - dVar10 * dVar13);
                      }
                      if (bVar17 != 0) {
                        lVar5 = *(longlong *)(param_2 + 0x10);
                        dVar6 = dVar6 * *(double *)(lVar5 + 0x280);
                        dVar7 = dVar7 * *(double *)(lVar5 + 0x288);
                        dVar26 = dVar26 * *(double *)(lVar5 + 0x290);
                        dVar12 = *(double *)(lVar5 + 0x240);
                        dVar13 = *(double *)(lVar5 + 0x248);
                        dVar14 = *(double *)(lVar5 + 0x250);
                        dVar2 = *(double *)(lVar5 + 600);
                        dVar28 = dVar7 * dVar12 - dVar6 * dVar13;
                        dVar10 = dVar26 * dVar13 - dVar7 * dVar14;
                        dVar11 = dVar6 * dVar14 - dVar12 * dVar26;
                        dVar10 = dVar10 + dVar10;
                        dVar11 = dVar11 + dVar11;
                        dVar28 = dVar28 + dVar28;
                        dVar6 = (dVar28 * dVar13 - dVar11 * dVar14) + dVar2 * dVar10 + dVar6;
                        dVar7 = (dVar14 * dVar10 - dVar12 * dVar28) +
                                *(double *)(lVar5 + 600) * dVar11 + dVar7;
                        dVar26 = dVar28 * dVar2 + dVar26 + (dVar11 * dVar12 - dVar10 * dVar13);
                      }
                    }
                    dVar8 = dVar8 - dVar6;
                    dVar9 = dVar9 - dVar7;
                    dVar27 = dVar27 - dVar26;
                    dVar26 = dVar27 * dVar27 + dVar8 * dVar8 + dVar9 * dVar9;
                    fVar24 = (float)SQRT(dVar26);
                    if (fVar24 <= fVar23) {
                      if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
                        uVar20 = *(undefined8 *)(param_2 + 0x10);
                        fVar23 = *(float *)(uVar16 + 0x90);
                      }
                      else {
                        fVar23 = (fVar23 - fVar24) / fVar23;
                        uVar20 = 0;
                      }
                      fVar23 = (float)FUN_147a77524(param_1 + 0x70,fVar23,uVar20,0);
                      dVar6 = 1.0 / SQRT(dVar26);
                      if (9.99999993922529e-09 < dVar26) {
                        dVar8 = dVar8 * dVar6;
                        dVar9 = dVar9 * dVar6;
                      }
                      fVar24 = (float)(double)(~-(ulonglong)(9.99999993922529e-09 < dVar26) &
                                               (ulonglong)dVar27 |
                                              (ulonglong)(dVar6 * dVar27) &
                                              -(ulonglong)(9.99999993922529e-09 < dVar26)) * fVar23
                               * param_4;
                      fVar25 = (float)dVar9 * fVar23 * param_4;
                      fVar23 = (float)dVar8 * fVar23 * param_4;
                      *(float *)(lVar19 + 0x40) = *(float *)(lVar19 + 0x40) + fVar23;
                      *(float *)(lVar19 + 0x44) = *(float *)(lVar19 + 0x44) + fVar25;
                      *(float *)(lVar19 + 0x48) = *(float *)(lVar19 + 0x48) + fVar24;
                      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(uVar16 + 0x48);
                      puVar1[1] = *(undefined8 *)(uVar16 + 0x40);
                      if ((*(byte *)(param_1 + 0xa0) & 1) != 0) {
                        *(float *)(lVar19 + 0x30) = fVar23 + *(float *)(lVar19 + 0x30);
                        *(float *)(lVar19 + 0x34) = fVar25 + *(float *)(lVar19 + 0x34);
                        *(float *)(lVar19 + 0x38) = fVar24 + *(float *)(lVar19 + 0x38);
                      }
                    }
                  }
                  else {
                    *puVar1 = 0xffffffff;
                  }
                }
              }
            }
            uVar22 = uVar22 - 1;
          } while (1 < uVar22);
          return;
        }
        lVar21 = lVar21 + 1;
      } while (lVar18 != lVar21);
    }
  }
  return;
}



// FUNCTION 147c18c62 FUN_147c18c62 body=434 status=ok
// SIG undefined FUN_147c18c62(void)

void FUN_147c18c62(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(int *)(param_1 + 0x40) == 0) || (*(char *)(param_1 + 0x49) == '\0')) &&
     (*(longlong *)(param_1 + 0x88) == 0)) {
    FUN_1446f470e(&local_20,L"DistributionPosition",1);
    local_40 = 0;
    local_48 = 0;
    lVar1 = FUN_147bfacf3(param_1,local_20,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x88) = lVar1;
  }
  if (((*(int *)(param_1 + 0xa0) == 0) || (*(char *)(param_1 + 0xa9) == '\0')) &&
     (*(longlong *)(param_1 + 0xb8) == 0)) {
    FUN_1446f470e(&local_28,L"DistributionRange",1);
    local_40 = 0;
    local_48 = 0;
    lVar1 = FUN_147bf866f(param_1,local_28,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0xb8) = lVar1;
  }
  if (((*(int *)(param_1 + 0xd0) == 0) || (*(char *)(param_1 + 0xd9) == '\0')) &&
     (*(longlong *)(param_1 + 0xe8) == 0)) {
    FUN_1446f470e(&local_30,L"DistributionStrength",1);
    local_40 = 0;
    local_48 = 0;
    lVar1 = FUN_147bf866f(param_1,local_30,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0xe8) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c18e16 FUN_147c18e16 body=1508 status=ok
// SIG undefined FUN_147c18e16(void)

void FUN_147c18e16(longlong param_1,longlong param_2,undefined8 param_3,float param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  double dVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  uint uVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined4 uVar28;
  uint uVar29;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined8 local_140;
  float local_134;
  double local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  undefined1 local_108 [16];
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar3 = *(longlong *)(param_2 + 0x10);
  local_140 = 0;
  local_148 = 0;
  FUN_147a776dc(param_1 + 0x30,local_108,*(undefined4 *)(param_2 + 0x1a0),lVar3);
  fVar13 = (float)FUN_147a77524(param_1 + 0x90);
  lVar4 = *(longlong *)(param_2 + 0x18);
  uVar1 = *(uint *)(param_1 + 0xf0);
  if ((uVar1 & 8) == 0 && (*(byte *)(*(longlong *)(lVar4 + 0x30) + 0x71) & 1) == 0) {
    dVar8 = *(double *)(lVar3 + 0x240);
    dVar9 = *(double *)(lVar3 + 0x248);
    dVar10 = *(double *)(lVar3 + 0x250);
    dVar15 = *(double *)(lVar3 + 0x280);
    dVar22 = (double)local_108._0_8_ * dVar15;
    dVar24 = (double)local_108._8_8_ * *(double *)(lVar3 + 0x288);
    dVar17 = *(double *)(lVar3 + 0x290);
    local_f8 = local_f8 * dVar17;
    dVar21 = *(double *)(lVar3 + 600);
    dVar23 = dVar24 * dVar8 - dVar22 * dVar9;
    dVar6 = local_f8 * dVar9 - dVar24 * dVar10;
    dVar7 = dVar22 * dVar10 - dVar8 * local_f8;
    dVar6 = dVar6 + dVar6;
    dVar7 = dVar7 + dVar7;
    dVar23 = dVar23 + dVar23;
    dVar24 = (dVar10 * dVar6 - dVar8 * dVar23) + *(double *)(lVar3 + 600) * dVar7 + dVar24 +
             *(double *)(lVar3 + 0x268);
    local_f8 = dVar23 * dVar21 + local_f8 + (dVar7 * dVar8 - dVar6 * dVar9) +
               *(double *)(lVar3 + 0x270);
    uVar18 = (undefined4)*(undefined8 *)(lVar3 + 0x288);
    uVar20 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x288) >> 0x20);
    local_108._8_4_ = SUB84(dVar24,0);
    local_108._0_8_ =
         (dVar23 * dVar9 - dVar7 * dVar10) + dVar21 * dVar6 + dVar22 + *(double *)(lVar3 + 0x260);
    local_108._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  }
  else {
    dVar15 = 1.0;
    uVar18 = 0;
    uVar20 = 0x3ff00000;
    dVar17 = 1.0;
  }
  dVar21 = 0.0;
  dVar23 = 0.0;
  if ((uVar1 >> 9 & 1) != 0) {
    dVar23 = -1.0;
  }
  uVar25 = 0;
  if ((uVar1 >> 8 & 1) != 0) {
    uVar25 = 0xbff00000;
  }
  uVar27 = 0;
  if ((char)uVar1 < '\0') {
    uVar27 = 0xbff00000;
  }
  uVar26 = 0;
  uVar29 = 0;
  if ((uVar1 & 0x40) != 0) {
    uVar29 = 0x3ff00000;
  }
  uVar28 = 0;
  local_130 = 0.0;
  if ((uVar1 & 0x20) != 0) {
    local_130 = 1.0;
  }
  if ((uVar1 & 0x10) != 0) {
    dVar21 = 1.0;
  }
  local_110 = lVar3;
  if (0 < (longlong)*(int *)(param_2 + 0x18c)) {
    local_134 = (float)SQRT(dVar17 * dVar17 +
                            dVar15 * dVar15 +
                            (double)CONCAT44(uVar20,uVar18) * (double)CONCAT44(uVar20,uVar18));
    fVar13 = fVar13 * local_134;
    lVar3 = *(longlong *)(param_2 + 0x168);
    lVar5 = *(longlong *)(param_2 + 0x170);
    iVar2 = *(int *)(param_2 + 0x188);
    uVar11 = (longlong)*(int *)(param_2 + 0x18c) + 1;
    local_118 = (ulonglong)uVar27 << 0x20;
    local_120 = (ulonglong)uVar29 << 0x20;
    local_128 = param_2;
    do {
      uVar12 = (ulonglong)((uint)*(ushort *)(lVar5 + -4 + uVar11 * 2) * iVar2);
      if ((*(byte *)(lVar3 + 0x6f + uVar12) & 4) == 0) {
        dVar6 = local_f8 - *(double *)(lVar3 + 0x28 + uVar12);
        dVar7 = (double)local_108._8_8_ - *(double *)(lVar3 + 0x20 + uVar12);
        dVar15 = (double)local_108._0_8_ - *(double *)(lVar3 + 0x18 + uVar12);
        dVar17 = dVar6 * dVar6 + dVar15 * dVar15 + dVar7 * dVar7;
        if ((float)SQRT(dVar17) <= fVar13) {
          if ((*(byte *)(param_1 + 0xf0) & 1) == 0) {
LAB_147c1931f:
            fVar14 = (float)FUN_147a77524(param_1 + 0xc0);
            uVar26 = (undefined4)local_118;
            uVar27 = (uint)((ulonglong)local_118 >> 0x20);
            uVar28 = (undefined4)local_120;
            uVar29 = (uint)((ulonglong)local_120 >> 0x20);
          }
          else {
            fVar14 = 0.0;
            if ((fVar13 != 0.0) || (NAN(fVar13))) goto LAB_147c1931f;
          }
          if (((*(byte *)(*(longlong *)(lVar4 + 0x30) + 0x71) & 1) == 0) &&
             ((*(byte *)(param_1 + 0xf0) & 8) == 0)) {
            fVar14 = fVar14 * local_134;
          }
          dVar24 = 1.0 / SQRT(dVar17);
          if (9.99999993922529e-09 < dVar17) {
            dVar15 = dVar15 * dVar24;
            dVar7 = dVar7 * dVar24;
          }
          dVar17 = (double)(~-(ulonglong)(9.99999993922529e-09 < dVar17) & (ulonglong)dVar6 |
                           (ulonglong)(dVar24 * dVar6) & -(ulonglong)(9.99999993922529e-09 < dVar17)
                           );
          if (fVar14 < 0.0) {
            dVar17 = -dVar17;
            dVar7 = -dVar7;
            dVar15 = -dVar15;
            fVar14 = -fVar14;
          }
          if (dVar21 <= dVar15) {
            dVar15 = dVar21;
          }
          if (local_130 <= dVar7) {
            dVar7 = local_130;
          }
          if (dVar7 <= (double)((ulonglong)uVar25 << 0x20)) {
            dVar7 = (double)((ulonglong)uVar25 << 0x20);
          }
          if ((double)CONCAT44(uVar29,uVar28) <= dVar17) {
            dVar17 = (double)CONCAT44(uVar29,uVar28);
          }
          if (dVar17 <= dVar23) {
            dVar17 = dVar23;
          }
          if (dVar15 <= (double)CONCAT44(uVar27,uVar26)) {
            dVar15 = (double)CONCAT44(uVar27,uVar26);
          }
          fVar16 = (float)dVar17 * fVar14 * param_4;
          fVar19 = (float)dVar7 * fVar14 * param_4;
          fVar14 = (float)dVar15 * fVar14 * param_4;
          *(float *)(lVar3 + 0x40 + uVar12) = *(float *)(lVar3 + 0x40 + uVar12) + fVar14;
          *(float *)(lVar3 + 0x44 + uVar12) = *(float *)(lVar3 + 0x44 + uVar12) + fVar19;
          *(float *)(lVar3 + 0x48 + uVar12) = *(float *)(lVar3 + 0x48 + uVar12) + fVar16;
          if ((*(byte *)(param_1 + 0xf0) & 2) != 0) {
            *(float *)(lVar3 + 0x30 + uVar12) = fVar14 + *(float *)(lVar3 + 0x30 + uVar12);
            *(float *)(lVar3 + 0x34 + uVar12) = fVar19 + *(float *)(lVar3 + 0x34 + uVar12);
            *(float *)(lVar3 + 0x38 + uVar12) = fVar16 + *(float *)(lVar3 + 0x38 + uVar12);
          }
        }
      }
      uVar11 = uVar11 - 1;
    } while (1 < uVar11);
  }
  if ((local_f0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c193fe FUN_147c193fe body=93 status=ok
// SIG undefined FUN_147c193fe(void)

undefined8 FUN_147c193fe(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_140791f3e();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000147c19458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*param_2 + 0xb40))(param_2,*(undefined8 *)(param_1 + 0x40),param_4);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 147c1945c FUN_147c1945c body=93 status=ok
// SIG undefined FUN_147c1945c(void)

undefined8 FUN_147c1945c(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_140791f3e();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000147c194b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*param_2 + 0xb50))(param_2,*(undefined8 *)(param_1 + 0x58),param_4);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 147c194ba FUN_147c194ba body=89 status=ok
// SIG undefined FUN_147c194ba(void)

void FUN_147c194ba(longlong param_1)

{
  undefined1 auStack_48 [40];
  int local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446e0b6e();
  FUN_144842a8a(param_1,local_20);
  if (local_20[0] < 0x1b4) {
    *(byte *)(param_1 + 0x5c4) = *(byte *)(param_1 + 0x5c4) | 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c19514 FUN_147c19514 body=88 status=ok
// SIG undefined FUN_147c19514(void)

void FUN_147c19514(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x370);
  if (lVar1 != 0) {
    FUN_1435da71e(lVar1);
    FUN_1435d9ef2(lVar1,param_1 + 0x380);
    FUN_1432232ff(lVar1,0);
    return;
  }
  uVar2 = FUN_1435d9e81(param_1 + 0x380);
  *(undefined8 *)(param_1 + 0x370) = uVar2;
  return;
}



// FUNCTION 147c19574 FUN_147c19574 body=114 status=ok
// SIG undefined FUN_147c19574(void)

void FUN_147c19574(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  uVar3 = (**(code **)(*param_1 + 0x3a0))();
  iVar1 = param_3[0xc];
  param_3[0xc] = iVar1 + 1U;
  if ((uint)param_3[0xd] < iVar1 + 1U) {
    FUN_140df0cf8(param_3 + 2,iVar1);
  }
  puVar4 = param_3 + 2;
  if (*(undefined4 **)(param_3 + 10) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_3 + 10);
  }
  *(undefined8 *)(puVar4 + (longlong)iVar1 * 4) = uVar3;
  *(undefined8 *)(puVar4 + (longlong)iVar1 * 4 + 2) = 0;
  uVar2 = (**(code **)(*param_1 + 0x3a8))(param_1);
  *param_3 = uVar2;
  return;
}



// FUNCTION 147c1960e FUN_147c1960e body=169 status=ok
// SIG undefined FUN_147c1960e(void)

void FUN_147c1960e(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x40) == 0) || (*(char *)(param_1 + 0x49) == '\0')) &&
     (*(longlong *)(param_1 + 0x58) == 0)) {
    FUN_1446f470e(&local_20,L"DistributionCameraOffset",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147bf866f(param_1,local_20,0,0);
    *(undefined4 *)(lVar1 + 0x38) = 0x3f800000;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x58) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c196bc FUN_147c196bc body=271 status=ok
// SIG undefined FUN_147c196bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c196bc(longlong param_1,longlong param_2,uint param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong lVar1;
  undefined1 auVar2 [32];
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  
  if (param_2 == 0) {
    fVar9 = 1.0;
    goto LAB_147c1976d;
  }
  fVar9 = 1.0;
  if (((*(longlong *)(param_2 + 0x18) != 0) &&
      ((*(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x18) + 0x30) + 0x71) & 1) == 0)) &&
     (lVar1 = *(longlong *)(param_2 + 0x10), lVar1 != 0)) {
    if ((*(byte *)(lVar1 + 0x693) & 0x10) == 0) {
      lVar5 = 0x900;
      cVar3 = FUN_144a61b4f();
      if (cVar3 != '\0') goto LAB_147c1972b;
    }
    else {
LAB_147c1972b:
      lVar5 = 0x240;
    }
    auVar8 = *(undefined1 (*) [16])(lVar1 + 0x40 + lVar5) & _DAT_149931180;
    auVar7 = _DAT_149931180 & *(undefined1 (*) [16])(lVar1 + 0x50 + lVar5);
    auVar2._16_16_ = auVar7;
    auVar2._0_16_ = auVar8;
    auVar7._8_8_ = auVar8._0_8_;
    auVar8 = maxpd(auVar8,auVar2._8_16_);
    auVar7 = maxpd(auVar8,auVar7);
    fVar9 = (float)auVar7._0_8_;
  }
  if (*(uint *)(param_2 + 0x40) != 0) {
    param_3 = *(uint *)(param_2 + 0x40);
  }
LAB_147c1976d:
  uVar4 = (ulonglong)param_3;
  fVar6 = (float)FUN_147a77524(param_1 + 0x30);
  fVar6 = fVar6 * fVar9;
  if (*(char *)(param_1 + 100) == '\x01') {
    fVar6 = fVar6 + *(float *)(param_5 + 4 + uVar4);
  }
  else if (*(char *)(param_1 + 100) == '\0') {
    *(float *)(param_5 + uVar4) = fVar6;
  }
  else {
    fVar6 = fVar6 * *(float *)(param_5 + 4 + uVar4);
  }
  *(float *)(param_5 + 4 + uVar4) = fVar6;
  return;
}



// FUNCTION 147c197cc FUN_147c197cc body=223 status=ok
// SIG undefined FUN_147c197cc(void)

void FUN_147c197cc(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  
  if (((*(byte *)(param_1 + 0x60) & 1) == 0) && (0 < (longlong)*(int *)(param_2 + 0x18c))) {
    lVar2 = *(longlong *)(param_2 + 0x168);
    lVar3 = *(longlong *)(param_2 + 0x170);
    iVar1 = *(int *)(param_2 + 0x188);
    uVar7 = (longlong)*(int *)(param_2 + 0x18c) + 1;
    do {
      uVar5 = (ulonglong)((uint)*(ushort *)(lVar3 + -4 + uVar7 * 2) * iVar1);
      if ((*(byte *)(lVar2 + 0x6f + uVar5) & 4) == 0) {
        uVar4 = param_3;
        if ((param_2 != 0) && (uVar4 = *(uint *)(param_2 + 0x40), *(uint *)(param_2 + 0x40) == 0)) {
          uVar4 = param_3;
        }
        lVar6 = uVar5 + lVar2;
        uVar5 = (ulonglong)uVar4;
        fVar8 = (float)FUN_147a77524(param_1 + 0x30,*(undefined4 *)(lVar6 + 0x90),
                                     *(undefined8 *)(param_2 + 0x10),0);
        if (*(char *)(param_1 + 100) == '\x02') {
          fVar8 = fVar8 * *(float *)(lVar6 + 4 + uVar5);
        }
        else if (*(char *)(param_1 + 100) == '\x01') {
          fVar8 = fVar8 + *(float *)(lVar6 + 4 + uVar5);
        }
        *(float *)(lVar6 + 4 + uVar5) = fVar8;
      }
      uVar7 = uVar7 - 1;
    } while (1 < uVar7);
  }
  return;
}



// FUNCTION 147c198b2 FUN_147c198b2 body=805 status=ok
// SIG undefined FUN_147c198b2(void)

void FUN_147c198b2(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(int *)(param_1 + 0x40) == 0) || (*(char *)(param_1 + 0x49) == '\0')) &&
     (*(longlong *)(param_1 + 0x88) == 0)) {
    FUN_1446f470e(&local_28,L"DistributionDampingFactor",1);
    local_50 = 0;
    local_58 = 0;
    lVar2 = FUN_147c120bf(param_1,local_28,0,0);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x88) = lVar2;
  }
  if (((*(int *)(param_1 + 0xa0) == 0) || (*(char *)(param_1 + 0xa9) == '\0')) &&
     (*(longlong *)(param_1 + 0xe8) == 0)) {
    FUN_1446f470e(&local_30,L"DistributionDampingFactorRotation",1);
    local_50 = 0;
    local_58 = 0;
    lVar2 = FUN_147bfacf3(param_1,local_30,0,0);
    *(undefined8 *)(lVar2 + 0x38) = 0x3ff0000000000000;
    *(undefined8 *)(lVar2 + 0x40) = 0x3ff0000000000000;
    *(undefined8 *)(lVar2 + 0x48) = 0x3ff0000000000000;
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0xe8) = lVar2;
  }
  if (((*(int *)(param_1 + 0x100) == 0) || (*(char *)(param_1 + 0x109) == '\0')) &&
     (*(longlong *)(param_1 + 0x118) == 0)) {
    FUN_1446f470e(&local_38,L"DistributionMaxCollisions",1);
    local_50 = 0;
    local_58 = 0;
    lVar2 = FUN_147c1308f(param_1,local_38,0,0);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x118) = lVar2;
  }
  if (((*(int *)(param_1 + 0x158) == 0) || (*(char *)(param_1 + 0x161) == '\0')) &&
     (*(longlong *)(param_1 + 0x170) == 0)) {
    FUN_1446f470e(&local_40,L"DistributionParticleMass",1);
    local_50 = 0;
    local_58 = 0;
    lVar2 = FUN_147bf866f(param_1,local_40,0,0);
    *(undefined4 *)(lVar2 + 0x38) = 0x3dcccccd;
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x170) = lVar2;
  }
  if (((*(int *)(param_1 + 0x198) == 0) || (*(char *)(param_1 + 0x1a1) == '\0')) &&
     (*(longlong *)(param_1 + 0x1b0) == 0)) {
    FUN_1446f470e(&local_48,L"DistributionDelayAmount",1);
    local_50 = 0;
    local_58 = 0;
    lVar2 = FUN_147bf866f(param_1,local_48,0,0);
    *(undefined4 *)(lVar2 + 0x38) = 0;
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x1b0) = lVar2;
  }
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 0x130)) {
    lVar2 = 0;
    do {
      uVar1 = FUN_141302a0a(*(undefined1 *)(*(longlong *)(param_1 + 0x128) + lVar2));
      uVar1 = (uint)uVar3 | 1 << (uVar1 & 0x1f);
      uVar3 = (ulonglong)uVar1;
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < *(int *)(param_1 + 0x130));
    uVar3 = (ulonglong)uVar1;
  }
  *(ulonglong *)(param_1 + 0x138) = uVar3;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c19bd8 FUN_147c19bd8 body=75 status=ok
// SIG undefined FUN_147c19bd8(void)

void FUN_147c19bd8(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_1446e0b6e();
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 0x130)) {
    lVar2 = 0;
    do {
      uVar1 = FUN_141302a0a(*(undefined1 *)(*(longlong *)(param_1 + 0x128) + lVar2));
      uVar1 = (uint)uVar3 | 1 << (uVar1 & 0x1f);
      uVar3 = (ulonglong)uVar1;
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < *(int *)(param_1 + 0x130));
    uVar3 = (ulonglong)uVar1;
  }
  *(ulonglong *)(param_1 + 0x138) = uVar3;
  return;
}



// FUNCTION 147c19c44 FUN_147c19c44 body=99 status=ok
// SIG undefined FUN_147c19c44(void)

void FUN_147c19c44(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x118) != 0) {
    lVar3 = FUN_145b3bf70();
    lVar1 = *(longlong *)(param_1 + 0x118);
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      *(undefined1 **)(lVar1 + 0x38) = &DAT_3f8000003f800000;
      *(byte *)(lVar1 + 0x30) = *(byte *)(lVar1 + 0x30) | 2;
    }
  }
  return;
}



// FUNCTION 147c19cac FUN_147c19cac body=65 status=ok
// SIG undefined FUN_147c19cac(void)

void FUN_147c19cac(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  (**(code **)(**(longlong **)(param_2 + 0x10) + 0xb78))
            (*(longlong **)(param_2 + 0x10),param_4,param_5,param_6,param_7,param_8,param_1 + 0x138)
  ;
  return;
}



// FUNCTION 147c19cee FUN_147c19cee body=297 status=ok
// SIG undefined FUN_147c19cee(void)

void FUN_147c19cee(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x40) == 0) || (*(char *)(param_1 + 0x49) == '\0')) &&
     (*(longlong *)(param_1 + 0x58) == 0)) {
    FUN_1446f470e(&local_20,L"ResilienceDistribution",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147bf866f(param_1,local_20,0,0);
    *(undefined4 *)(lVar1 + 0x38) = 0x3f000000;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x58) = lVar1;
  }
  if (((*(int *)(param_1 + 0x70) == 0) || (*(char *)(param_1 + 0x79) == '\0')) &&
     (*(longlong *)(param_1 + 0x88) == 0)) {
    FUN_1446f470e(&local_28,L"ResilienceScaleOverLifeDistribution",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147bf866f(param_1,local_28,0,0);
    *(undefined4 *)(lVar1 + 0x38) = 0x3f800000;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x88) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c19e18 FUN_147c19e18 body=159 status=ok
// SIG undefined FUN_147c19e18(void)

void FUN_147c19e18(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar3 = FUN_145a6b3a6();
    lVar1 = *(longlong *)(param_1 + 0x58);
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      *(undefined4 *)(lVar1 + 0x38) = 0x3f400000;
    }
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar3 = FUN_145a6b3a6();
    lVar1 = *(longlong *)(param_1 + 0x88);
    if (((lVar1 != 0) && (lVar3 != 0)) &&
       ((lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0 &&
        ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)))))) {
      *(undefined4 *)(lVar1 + 0x38) = 0x3f800000;
    }
  }
  return;
}



// FUNCTION 147c19eb8 FUN_147c19eb8 body=167 status=ok
// SIG undefined FUN_147c19eb8(void)

void FUN_147c19eb8(longlong param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0x298) = 1;
  *(undefined1 *)(param_2 + 0x29a) = *(undefined1 *)(param_1 + 0xa5);
  *(undefined1 *)(param_2 + 0x299) = *(undefined1 *)(param_1 + 0xa4);
  *(undefined4 *)(param_2 + 0x29c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(param_2 + 0x2a0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(param_2 + 0x2a4) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(param_2 + 0x2a8) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(param_2 + 0x2ac) = *(undefined4 *)(param_1 + 0x90);
  FUN_147a779f6(param_2 + 0x2b0,*(undefined8 *)(param_1 + 0x58));
  FUN_147a779f6(param_2 + 0x2d0,*(undefined8 *)(param_1 + 0x88));
  return;
}



// FUNCTION 147c19f60 FUN_147c19f60 body=302 status=ok
// SIG undefined FUN_147c19f60(void)

void FUN_147c19f60(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x40) == 0) || (*(char *)(param_1 + 0x49) == '\0')) &&
     (*(longlong *)(param_1 + 0x88) == 0)) {
    FUN_1446f470e(&local_20,L"DistributionStartColor",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147bfacf3(param_1,local_20,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x88) = lVar1;
  }
  if (((*(int *)(param_1 + 0xa0) == 0) || (*(char *)(param_1 + 0xa9) == '\0')) &&
     (*(longlong *)(param_1 + 0xb8) == 0)) {
    FUN_1446f470e(&local_28,L"DistributionStartAlpha",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147bf866f(param_1,local_28,0,0);
    *(undefined4 *)(lVar1 + 0x38) = 0x3f800000;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0xb8) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c1a090 FUN_147c1a090 body=254 status=ok
// SIG undefined FUN_147c1a090(void)

void FUN_147c1a090(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_70;
  undefined2 *local_60;
  int local_58;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = *(undefined8 *)(param_1 + 0x18);
  FUN_1400021e4(&local_48,&local_60);
  puVar3 = local_60;
  if (local_58 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  iVar1 = local_58 + -1;
  if (local_58 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar3);
  local_48 = CONCAT44(uVar2,uVar2);
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_78 = 0;
  local_70 = &local_48;
  FUN_147a776dc(param_1 + 0x30,&local_60,0,0);
  uVar2 = FUN_147a77524(param_1 + 0x90,0,0,&local_48);
  FUN_147a78012(param_2 + 0x88,&local_60);
  FUN_147a77c64(param_2 + 0xa8,uVar2);
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c1a194 FUN_147c1a194 body=67 status=ok
// SIG undefined FUN_147c1a194(void)

void FUN_147c1a194(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_147c05556(param_2,param_1);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_2 + 0x10) + 0x8f0;
  }
  FUN_147c1a1d8(param_1,param_2,lVar1,param_5);
  return;
}



// FUNCTION 147c1a1d8 FUN_147c1a1d8 body=241 status=ok
// SIG undefined FUN_147c1a1d8(void)

void FUN_147c1a1d8(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  local_80 = param_3;
  FUN_147a776dc(param_1 + 0x30,&local_78,*(undefined4 *)(param_2 + 0x1a0),
                *(undefined8 *)(param_2 + 0x10));
  uVar1 = FUN_147a77524(param_1 + 0x90,*(undefined4 *)(param_2 + 0x1a0),
                        *(undefined8 *)(param_2 + 0x10),param_3);
  *(float *)(param_4 + 0x70) = (float)local_78;
  *(float *)(param_4 + 0x74) = (float)local_70;
  *(float *)(param_4 + 0x78) = (float)local_68;
  *(undefined4 *)(param_4 + 0x7c) = uVar1;
  *(undefined4 *)(param_4 + 0x80) = *(undefined4 *)(param_4 + 0x70);
  *(undefined4 *)(param_4 + 0x84) = *(undefined4 *)(param_4 + 0x74);
  *(undefined4 *)(param_4 + 0x88) = *(undefined4 *)(param_4 + 0x78);
  *(undefined4 *)(param_4 + 0x8c) = *(undefined4 *)(param_4 + 0x7c);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c1a2ca FUN_147c1a2ca body=107 status=ok
// SIG undefined FUN_147c1a2ca(void)

void FUN_147c1a2ca(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar3 = FUN_145a6b57e();
    lVar1 = *(longlong *)(param_1 + 0x88);
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      *(undefined8 *)(lVar1 + 0x38) = 0x3ff0000000000000;
      *(undefined8 *)(lVar1 + 0x40) = 0x3ff0000000000000;
      *(undefined8 *)(lVar1 + 0x48) = 0x3ff0000000000000;
      *(byte *)(lVar1 + 0x30) = *(byte *)(lVar1 + 0x30) | 2;
    }
  }
  return;
}



// FUNCTION 147c1a336 FUN_147c1a336 body=80 status=ok
// SIG undefined FUN_147c1a336(void)

void FUN_147c1a336(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x1a) & 4) == 0) {
    return;
  }
  uVar1 = FUN_147c05556(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x000147c1a383. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x368))(param_1,param_2,uVar1,param_1 + 0x19);
  return;
}



// FUNCTION 147c1a386 FUN_147c1a386 body=335 status=ok
// SIG undefined FUN_147c1a386(void)

void FUN_147c1a386(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = FUN_147c11940();
  if (cVar3 == '\0') {
LAB_147c1a3ad:
    FUN_147a77d9c(param_2 + 0x88,*(undefined8 *)(param_1 + 0x88));
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x88);
    lVar4 = FUN_145b3c22e();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    bVar2 = true;
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      FUN_147863374(param_2 + 200,param_1 + 0x30);
      local_40 = 0x3ff0000000000000;
      local_38 = 0x3ff0000000000000;
      local_30 = 0x3ff0000000000000;
      FUN_147a78012(param_2 + 0x88);
      bVar2 = false;
    }
    lVar1 = *(longlong *)(param_1 + 0xb8);
    lVar4 = FUN_145b3be86();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      FUN_147863152(param_2 + 0x128,param_1 + 0x90);
      FUN_147a77c64(param_2 + 0xa8,0x3f800000);
      if (bVar2) {
        FUN_147a77d9c(param_2 + 0x88,*(undefined8 *)(param_1 + 0x88));
      }
      goto LAB_147c1a3d6;
    }
    if (bVar2) goto LAB_147c1a3ad;
  }
  FUN_147a779f6(param_2 + 0xa8,*(undefined8 *)(param_1 + 0xb8));
LAB_147c1a3d6:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c1a4da FUN_147c1a4da body=231 status=ok
// SIG undefined FUN_147c1a4da(void)

void FUN_147c1a4da(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0;
  local_58 = 0;
  FUN_147a776dc(param_1 + 0x30,&local_40,*(undefined4 *)(param_5 + 0x90),
                *(undefined8 *)(param_2 + 0x10));
  uVar1 = FUN_147a77524(param_1 + 0x90,*(undefined4 *)(param_5 + 0x90),
                        *(undefined8 *)(param_2 + 0x10),0);
  *(float *)(param_5 + 0x70) = (float)local_40;
  *(float *)(param_5 + 0x80) = (float)local_40;
  *(float *)(param_5 + 0x74) = (float)local_38;
  *(float *)(param_5 + 0x84) = (float)local_38;
  *(float *)(param_5 + 0x78) = (float)local_30;
  *(float *)(param_5 + 0x88) = (float)local_30;
  *(undefined4 *)(param_5 + 0x7c) = uVar1;
  *(undefined4 *)(param_5 + 0x8c) = uVar1;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c1a5c2 FUN_147c1a5c2 body=687 status=ok
// SIG undefined FUN_147c1a5c2(void)

ulonglong FUN_147c1a5c2(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  uVar6 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_80 = uVar6;
  if ((((param_2 != 0) && (0 < *(int *)(param_2 + 0x18c))) && (*(longlong *)(param_2 + 0x168) != 0))
     && (*(longlong *)(param_2 + 0x170) != 0)) {
    lVar7 = FUN_147a777ae(param_1 + 0x30);
    pfVar8 = (float *)FUN_147a775de(param_1 + 0x90);
    lVar2 = *(longlong *)(param_2 + 0x168);
    puVar3 = *(ushort **)(param_2 + 0x170);
    iVar1 = *(int *)(param_2 + 0x188);
    uVar6 = CONCAT71((int7)(int3)((uint)*puVar3 * iVar1 >> 8),lVar7 == 0);
    uVar9 = *(uint *)(param_2 + 0x18c);
    if (pfVar8 == (float *)0x0 || lVar7 == 0) {
      if (0 < (int)uVar9) {
        uVar12 = (ulonglong)uVar9 + 1;
        do {
          uVar14 = (ulonglong)((uint)puVar3[uVar12 - 2] * iVar1);
          if ((*(byte *)(lVar2 + 0x6f + uVar14) & 4) == 0) {
            local_a0 = 0;
            local_a8 = 0;
            FUN_147a776dc(param_1 + 0x30,&local_98,*(undefined4 *)(lVar2 + 0x90 + uVar14),
                          *(undefined8 *)(param_2 + 0x10));
            fVar16 = (float)local_98;
            fVar18 = (float)local_90;
            fVar19 = (float)local_88;
            uVar15 = FUN_147a77524(param_1 + 0x90);
            uVar6 = (ulonglong)(int)((uint)puVar3[uVar12 - 1] * iVar1 + 0x40);
            *(float *)(lVar2 + 0x70 + uVar14) = fVar16;
            *(float *)(lVar2 + 0x74 + uVar14) = fVar18;
            *(float *)(lVar2 + 0x78 + uVar14) = fVar19;
            *(undefined4 *)(lVar2 + 0x7c + uVar14) = uVar15;
          }
          uVar12 = uVar12 - 1;
        } while (1 < uVar12);
      }
    }
    else if (0 < (int)uVar9) {
      uVar12 = (ulonglong)uVar9 + 1;
      lVar11 = lVar7;
      do {
        if ((*(byte *)(lVar2 + 0x6f + (ulonglong)((uint)puVar3[uVar12 - 2] * iVar1)) & 4) == 0) {
          lVar13 = (ulonglong)((uint)puVar3[uVar12 - 2] * iVar1) + lVar2;
          FUN_147a7701c(lVar7,lVar11,lVar13 + 0x70);
          fVar16 = (*(float *)(lVar13 + 0x90) - pfVar8[1]) * *pfVar8;
          fVar16 = (float)(-(uint)(0.0 <= fVar16) & (uint)fVar16);
          uVar4 = (uint)fVar16;
          uVar10 = *(byte *)((longlong)pfVar8 + 0x19) - 1;
          uVar9 = uVar4;
          if (uVar10 <= uVar4) {
            uVar9 = uVar10;
          }
          uVar5 = uVar4 + 1;
          if (uVar10 <= uVar4 + 1) {
            uVar5 = uVar10;
          }
          auVar17 = roundss(ZEXT816(0),ZEXT416((uint)fVar16),0xb);
          lVar11 = *(longlong *)(pfVar8 + 2);
          uVar6 = (ulonglong)(int)(uVar5 * *(byte *)((longlong)pfVar8 + 0x1a));
          fVar18 = *(float *)(lVar11 + (longlong)(int)(uVar9 * *(byte *)((longlong)pfVar8 + 0x1a)) *
                                       4);
          *(float *)(lVar13 + 0x7c) =
               (*(float *)(lVar11 + uVar6 * 4) - fVar18) * (fVar16 - auVar17._0_4_) + fVar18;
        }
        uVar12 = uVar12 - 1;
      } while (1 < uVar12);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 147c1a872 FUN_147c1a872 body=461 status=ok
// SIG undefined FUN_147c1a872(void)

void FUN_147c1a872(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  
  lVar4 = FUN_147c1aa3f();
  if ((lVar4 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x88) = lVar4;
    if (lVar4 == 0) goto LAB_147c1a96e;
  }
  else {
    FUN_1456cec3c(lVar4);
    *(longlong *)(param_1 + 0x88) = lVar4;
  }
  lVar5 = FUN_145b3c144();
  lVar4 = *(longlong *)(param_1 + 0x88);
  if ((((lVar4 != 0) && (lVar5 != 0)) && (lVar2 = *(longlong *)(lVar4 + 0x10), lVar2 != 0)) &&
     ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38) &&
      (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
       lVar5 + 0x30)))) {
    plVar1 = (longlong *)(lVar4 + 0x28);
    bVar7 = true;
    uVar3 = 0;
LAB_147c1a90b:
    uVar3 = (**(code **)(*plVar1 + 0x58))(plVar1,uVar3);
    iVar6 = 0;
    do {
      if (bVar7) {
        (**(code **)(*plVar1 + 0x70))(plVar1,iVar6,uVar3);
        if (iVar6 == 2) goto LAB_147c1a94f;
      }
      else {
        (**(code **)(*plVar1 + 0x70))(plVar1,iVar6,uVar3,0);
        if (iVar6 == 2) {
          *(byte *)(lVar4 + 0x30) = *(byte *)(lVar4 + 0x30) | 2;
          break;
        }
      }
      iVar6 = iVar6 + 1;
    } while( true );
  }
LAB_147c1a96e:
  lVar4 = FUN_147bffb11(param_1);
  if ((lVar4 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0xb8) = lVar4;
    if (lVar4 == 0) {
      return;
    }
  }
  else {
    FUN_1456cec3c(lVar4);
    *(longlong *)(param_1 + 0xb8) = lVar4;
  }
  lVar5 = FUN_1459588c0();
  lVar4 = *(longlong *)(param_1 + 0xb8);
  if ((((lVar4 != 0) && (lVar5 != 0)) && (lVar2 = *(longlong *)(lVar4 + 0x10), lVar2 != 0)) &&
     ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38) &&
      (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
       lVar5 + 0x30)))) {
    lVar5 = lVar4 + 0x28;
    uVar3 = (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x58))(lVar5,0);
    (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x70))(lVar5,0,uVar3,0x3f800000);
    uVar3 = (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x58))(lVar5,0x3f800000);
    (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x70))(lVar5,0,uVar3,0);
    *(byte *)(lVar4 + 0x30) = *(byte *)(lVar4 + 0x30) | 2;
  }
  return;
LAB_147c1a94f:
  bVar7 = false;
  uVar3 = 0x3f800000;
  goto LAB_147c1a90b;
}



// FUNCTION 147c1aa3f FUN_147c1aa3f body=148 status=ok
// SIG undefined FUN_147c1aa3f(void)

undefined8 FUN_147c1aa3f(undefined8 param_1)

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
  uVar1 = FUN_145b3c144();
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



// FUNCTION 147c1aad4 FUN_147c1aad4 body=302 status=ok
// SIG undefined FUN_147c1aad4(void)

void FUN_147c1aad4(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x40) == 0) || (*(char *)(param_1 + 0x49) == '\0')) &&
     (*(longlong *)(param_1 + 0x88) == 0)) {
    FUN_1446f470e(&local_20,L"DistributionColorScaleOverLife",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147c12b2f(param_1,local_20,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x88) = lVar1;
  }
  if (((*(int *)(param_1 + 0xa0) == 0) || (*(char *)(param_1 + 0xa9) == '\0')) &&
     (*(longlong *)(param_1 + 0xb8) == 0)) {
    FUN_1446f470e(&local_28,L"DistributionAlphaScaleOverLife",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147bf866f(param_1,local_28,0,0);
    *(undefined4 *)(lVar1 + 0x38) = 0x3f800000;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0xb8) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c1ac04 FUN_147c1ac04 body=250 status=ok
// SIG undefined FUN_147c1ac04(void)

void FUN_147c1ac04(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  cVar3 = FUN_147c11940();
  if (cVar3 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x88);
    lVar4 = FUN_145b3c22e();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    bVar2 = true;
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      FUN_147863374(param_2 + 0x158,param_1 + 0x30);
      bVar2 = false;
    }
    lVar1 = *(longlong *)(param_1 + 0xb8);
    lVar4 = FUN_145b3be86();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      FUN_147863152(param_2 + 0x1b8,param_1 + 0x90);
      if (!bVar2) {
        return;
      }
      FUN_147a781e0(param_2 + 0x88,*(undefined8 *)(param_1 + 0x88));
      return;
    }
    if (!bVar2) goto LAB_147c1ac2f;
  }
  FUN_147a781e0(param_2 + 0x88,*(undefined8 *)(param_1 + 0x88));
LAB_147c1ac2f:
  FUN_147a77ca8(param_2 + 0xa8,*(undefined8 *)(param_1 + 0xb8));
  return;
}



// FUNCTION 147c1acfe FUN_147c1acfe body=351 status=ok
// SIG undefined FUN_147c1acfe(void)

void FUN_147c1acfe(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  undefined1 local_78 [24];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
    local_80 = 0;
    local_88 = 0;
    FUN_147a776dc(param_1 + 0x30,local_78,*(undefined4 *)(param_5 + 0x90),
                  *(undefined8 *)(param_2 + 0x10));
    uVar8 = (undefined4)local_78._0_8_;
    uVar9 = SUB84(local_78._0_8_,4);
    uVar6 = (undefined4)local_78._8_8_;
    uVar7 = SUB84(local_78._8_8_,4);
    uVar4 = (undefined4)local_78._16_8_;
    uVar5 = SUB84(local_78._16_8_,4);
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    uVar3 = *(undefined4 *)(param_5 + 0x90);
  }
  else {
    local_80 = 0;
    local_88 = 0;
    FUN_147a776dc(param_1 + 0x30,local_78,*(undefined4 *)(param_2 + 0x1a0),
                  *(undefined8 *)(param_2 + 0x10));
    uVar8 = (undefined4)local_78._0_8_;
    uVar9 = SUB84(local_78._0_8_,4);
    uVar6 = (undefined4)local_78._8_8_;
    uVar7 = SUB84(local_78._8_8_,4);
    uVar4 = (undefined4)local_78._16_8_;
    uVar5 = SUB84(local_78._16_8_,4);
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    uVar3 = *(undefined4 *)(param_2 + 0x1a0);
  }
  fVar2 = (float)FUN_147a77524(param_1 + 0x90,uVar3,uVar1,0);
  *(float *)(param_5 + 0x70) = (float)(double)CONCAT44(uVar9,uVar8) * *(float *)(param_5 + 0x70);
  *(float *)(param_5 + 0x74) = (float)(double)CONCAT44(uVar7,uVar6) * *(float *)(param_5 + 0x74);
  *(float *)(param_5 + 0x78) = (float)(double)CONCAT44(uVar5,uVar4) * *(float *)(param_5 + 0x78);
  *(float *)(param_5 + 0x7c) = fVar2 * *(float *)(param_5 + 0x7c);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c1ae5e FUN_147c1ae5e body=1171 status=ok
// SIG undefined FUN_147c1ae5e(void)

void FUN_147c1ae5e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  float *pfVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  longlong local_78;
  double local_70;
  double local_68;
  double local_60;
  float local_54;
  float local_50;
  float local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar13 = param_1 + 0x30;
  lVar9 = FUN_147a777ae(lVar13);
  lVar1 = param_1 + 0x90;
  pfVar10 = (float *)FUN_147a775de(lVar1);
  lVar5 = *(longlong *)(param_2 + 0x168);
  lVar6 = *(longlong *)(param_2 + 0x170);
  iVar4 = *(int *)(param_2 + 0x188);
  uVar11 = *(uint *)(param_2 + 0x18c);
  uVar15 = (ulonglong)uVar11;
  local_78 = lVar9;
  if (pfVar10 == (float *)0x0 || lVar9 == 0) {
    if ((*(uint *)(param_1 + 0xc0) & 1) == 0) {
      if (0 < (int)uVar11) {
        uVar15 = uVar15 + 1;
        do {
          uVar14 = (ulonglong)((uint)*(ushort *)(lVar6 + -4 + uVar15 * 2) * iVar4);
          if ((*(byte *)(lVar5 + 0x6f + uVar14) & 4) == 0) {
            local_80 = 0;
            local_88 = 0;
            FUN_147a776dc(lVar13,&local_70,*(undefined4 *)(lVar5 + 0x90 + uVar14),
                          *(undefined8 *)(param_2 + 0x10));
            local_4c = (float)local_60;
            local_50 = (float)local_68;
            local_54 = (float)local_70;
            fVar16 = (float)FUN_147a77524(lVar1);
            *(float *)(lVar5 + 0x70 + uVar14) = local_54 * *(float *)(lVar5 + 0x70 + uVar14);
            *(float *)(lVar5 + 0x74 + uVar14) = local_50 * *(float *)(lVar5 + 0x74 + uVar14);
            *(float *)(lVar5 + 0x78 + uVar14) = local_4c * *(float *)(lVar5 + 0x78 + uVar14);
            *(float *)(lVar5 + 0x7c + uVar14) = fVar16 * *(float *)(lVar5 + 0x7c + uVar14);
          }
          uVar15 = uVar15 - 1;
        } while (1 < uVar15);
      }
    }
    else if (0 < (int)uVar11) {
      uVar15 = uVar15 + 1;
      do {
        uVar14 = (ulonglong)((uint)*(ushort *)(lVar6 + -4 + uVar15 * 2) * iVar4);
        if ((*(byte *)(lVar5 + 0x6f + uVar14) & 4) == 0) {
          local_80 = 0;
          local_88 = 0;
          FUN_147a776dc(lVar13,&local_70,*(undefined4 *)(param_2 + 0x1a0),
                        *(undefined8 *)(param_2 + 0x10));
          local_4c = (float)local_60;
          local_50 = (float)local_68;
          local_54 = (float)local_70;
          fVar16 = (float)FUN_147a77524(lVar1);
          *(float *)(lVar5 + 0x70 + uVar14) = local_54 * *(float *)(lVar5 + 0x70 + uVar14);
          *(float *)(lVar5 + 0x74 + uVar14) = local_50 * *(float *)(lVar5 + 0x74 + uVar14);
          *(float *)(lVar5 + 0x78 + uVar14) = local_4c * *(float *)(lVar5 + 0x78 + uVar14);
          *(float *)(lVar5 + 0x7c + uVar14) = fVar16 * *(float *)(lVar5 + 0x7c + uVar14);
        }
        uVar15 = uVar15 - 1;
      } while (1 < uVar15);
    }
  }
  else if ((*(uint *)(param_1 + 0xc0) & 1) == 0) {
    if (0 < (int)uVar11) {
      uVar15 = uVar15 + 1;
      lVar13 = 0;
      do {
        uVar14 = (ulonglong)((uint)*(ushort *)(lVar6 + -4 + uVar15 * 2) * iVar4);
        if ((*(byte *)(lVar5 + 0x6f + uVar14) & 4) == 0) {
          FUN_147a7701c(local_78,lVar13,&local_54);
          fVar16 = (*(float *)(lVar5 + 0x90 + uVar14) - pfVar10[1]) * *pfVar10;
          fVar16 = (float)(-(uint)(0.0 <= fVar16) & (uint)fVar16);
          uVar7 = (uint)fVar16;
          uVar12 = *(byte *)((longlong)pfVar10 + 0x19) - 1;
          uVar11 = uVar7;
          if (uVar12 <= uVar7) {
            uVar11 = uVar12;
          }
          uVar8 = uVar7 + 1;
          if (uVar12 <= uVar7 + 1) {
            uVar8 = uVar12;
          }
          auVar17 = roundss(ZEXT816(0),ZEXT416((uint)fVar16),0xb);
          lVar13 = *(longlong *)(pfVar10 + 2);
          fVar2 = *(float *)(lVar13 + (longlong)(int)(uVar11 * *(byte *)((longlong)pfVar10 + 0x1a))
                                      * 4);
          fVar3 = *(float *)(lVar13 + (longlong)(int)(uVar8 * *(byte *)((longlong)pfVar10 + 0x1a)) *
                                      4);
          *(float *)(lVar5 + 0x70 + uVar14) = local_54 * *(float *)(lVar5 + 0x70 + uVar14);
          *(float *)(lVar5 + 0x74 + uVar14) = local_50 * *(float *)(lVar5 + 0x74 + uVar14);
          *(float *)(lVar5 + 0x78 + uVar14) = local_4c * *(float *)(lVar5 + 0x78 + uVar14);
          *(float *)(lVar5 + 0x7c + uVar14) =
               ((fVar3 - fVar2) * (fVar16 - auVar17._0_4_) + fVar2) *
               *(float *)(lVar5 + 0x7c + uVar14);
        }
        uVar15 = uVar15 - 1;
      } while (1 < uVar15);
    }
  }
  else if (0 < (int)uVar11) {
    uVar15 = uVar15 + 1;
    lVar13 = 0;
    do {
      uVar14 = (ulonglong)((uint)*(ushort *)(lVar6 + -4 + uVar15 * 2) * iVar4);
      if ((*(byte *)(lVar5 + 0x6f + uVar14) & 4) == 0) {
        FUN_147a7701c(local_78,lVar13,&local_54);
        fVar16 = (*(float *)(param_2 + 0x1a0) - pfVar10[1]) * *pfVar10;
        fVar16 = (float)(-(uint)(0.0 <= fVar16) & (uint)fVar16);
        auVar17 = roundss(ZEXT816(0),ZEXT416((uint)fVar16),0xb);
        uVar7 = (uint)fVar16;
        uVar12 = *(byte *)((longlong)pfVar10 + 0x19) - 1;
        uVar11 = uVar12;
        if (uVar7 < uVar12) {
          uVar11 = uVar7;
        }
        uVar8 = uVar7 + 1;
        if (uVar12 <= uVar7 + 1) {
          uVar8 = uVar12;
        }
        lVar13 = (longlong)(int)(uVar11 * *(byte *)((longlong)pfVar10 + 0x1a));
        fVar2 = *(float *)(*(longlong *)(pfVar10 + 2) + lVar13 * 4);
        fVar3 = *(float *)(*(longlong *)(pfVar10 + 2) +
                          (longlong)(int)(uVar8 * *(byte *)((longlong)pfVar10 + 0x1a)) * 4);
        *(float *)(lVar5 + 0x70 + uVar14) = local_54 * *(float *)(lVar5 + 0x70 + uVar14);
        *(float *)(lVar5 + 0x74 + uVar14) = local_50 * *(float *)(lVar5 + 0x74 + uVar14);
        *(float *)(lVar5 + 0x78 + uVar14) = local_4c * *(float *)(lVar5 + 0x78 + uVar14);
        *(float *)(lVar5 + 0x7c + uVar14) =
             ((fVar3 - fVar2) * (fVar16 - auVar17._0_4_) + fVar2) *
             *(float *)(lVar5 + 0x7c + uVar14);
      }
      uVar15 = uVar15 - 1;
    } while (1 < uVar15);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c1b2f2 FUN_147c1b2f2 body=216 status=ok
// SIG undefined FUN_147c1b2f2(void)

void FUN_147c1b2f2(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  
  lVar5 = FUN_147c1aa3f();
  if ((lVar5 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x88) = lVar5;
    if (lVar5 == 0) {
      return;
    }
  }
  else {
    FUN_1456cec3c(lVar5);
    *(longlong *)(param_1 + 0x88) = lVar5;
  }
  lVar6 = FUN_145b3c144();
  lVar5 = *(longlong *)(param_1 + 0x88);
  if ((((lVar5 != 0) && (lVar6 != 0)) && (lVar2 = *(longlong *)(lVar5 + 0x10), lVar2 != 0)) &&
     ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar2 + 0x38) &&
      (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
       lVar6 + 0x30)))) {
    plVar1 = (longlong *)(lVar5 + 0x28);
    uVar4 = 0;
    bVar3 = true;
    do {
      bVar8 = bVar3;
      uVar4 = (**(code **)(*plVar1 + 0x58))(plVar1,uVar4);
      iVar7 = 0;
      do {
        (**(code **)(*plVar1 + 0x70))(plVar1,iVar7,uVar4,0x3f800000);
        iVar7 = iVar7 + 1;
      } while (iVar7 != 3);
      uVar4 = 0x3f800000;
      bVar3 = false;
    } while (bVar8);
    *(byte *)(lVar5 + 0x30) = *(byte *)(lVar5 + 0x30) | 2;
  }
  return;
}



// FUNCTION 147c1b428 FUN_147c1b428 body=356 status=ok
// SIG undefined FUN_147c1b428(void)

ulonglong FUN_147c1b428(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  double *local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  double local_80;
  double local_78;
  double local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
  iVar3 = *(int *)(param_1 + 0x38);
  if (iVar3 < 1) {
    uVar5 = 0;
  }
  else {
    lVar4 = 0x18;
    lVar6 = 0;
    uVar5 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x30);
      if (*(char *)(lVar2 + -0x18 + lVar4) == '\x01') {
        iVar1 = *(int *)(lVar2 + -0x14 + lVar4);
        if ((iVar1 == 0) || (*(int *)(param_3 + 4) % iVar1 == 0)) {
          if ((*(byte *)(lVar2 + -0xc + lVar4) & 8) == 0) {
            local_58 = *(undefined8 *)(param_4 + 0x28);
            local_68 = *(undefined8 *)(param_4 + 0x18);
            uStack_60 = *(undefined8 *)(param_4 + 0x20);
          }
          else {
            uVar5 = param_4;
            FUN_147c060bc(param_2,&local_68,param_4);
          }
          local_70 = (double)*(float *)(param_4 + 0x48);
          local_78 = (double)*(float *)(param_4 + 0x44);
          local_a0 = lVar2 + lVar4;
          local_80 = (double)*(float *)(param_4 + 0x40);
          local_98 = (undefined4)local_68;
          uStack_94 = local_68._4_4_;
          uStack_90 = (undefined4)uStack_60;
          uStack_8c = uStack_60._4_4_;
          local_88 = local_58;
          local_a8 = &local_80;
          FUN_147c03db2(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(lVar2 + -8 + lVar4),
                        *(undefined4 *)(param_2 + 0x1a0),&local_98);
          iVar3 = *(int *)(param_1 + 0x38);
          uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
        }
      }
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 0x28;
    } while (lVar6 < iVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar5 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c1b58e FUN_147c1b58e body=376 status=ok
// SIG undefined FUN_147c1b58e(void)

ulonglong FUN_147c1b58e(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_d8 [32];
  double *local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  double local_80;
  double local_78;
  double local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
  iVar3 = *(int *)(param_1 + 0x38);
  if (iVar3 < 1) {
    uVar5 = 0;
  }
  else {
    lVar4 = 0x18;
    lVar6 = 0;
    uVar5 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x30);
      if (*(char *)(lVar2 + -0x18 + lVar4) == '\x02') {
        iVar1 = *(int *)(lVar2 + -0x14 + lVar4);
        if ((iVar1 == 0) || (*(int *)(param_3 + 8) % iVar1 == 0)) {
          if ((*(byte *)(lVar2 + -0xc + lVar4) & 8) == 0) {
            local_58 = *(undefined8 *)(param_4 + 0x28);
            local_68 = *(undefined8 *)(param_4 + 0x18);
            uStack_60 = *(undefined8 *)(param_4 + 0x20);
          }
          else {
            uVar5 = param_4;
            FUN_147c060bc(param_2,&local_68,param_4);
          }
          local_a8 = *(undefined4 *)(param_4 + 0x90);
          local_70 = (double)*(float *)(param_4 + 0x48);
          local_78 = (double)*(float *)(param_4 + 0x44);
          local_b0 = lVar2 + lVar4;
          local_80 = (double)*(float *)(param_4 + 0x40);
          local_98 = (undefined4)local_68;
          uStack_94 = local_68._4_4_;
          uStack_90 = (undefined4)uStack_60;
          uStack_8c = uStack_60._4_4_;
          local_88 = local_58;
          local_b8 = &local_80;
          FUN_147c03ec4(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(lVar2 + -8 + lVar4),
                        *(undefined4 *)(param_2 + 0x1a0),&local_98);
          iVar3 = *(int *)(param_1 + 0x38);
          uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
        }
      }
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 0x28;
    } while (lVar6 < iVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar5 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c1b708 FUN_147c1b708 body=597 status=ok
// SIG undefined FUN_147c1b708(void)

ulonglong FUN_147c1b708(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                       longlong param_5,longlong param_6,undefined8 *param_7)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  double *local_120;
  longlong local_118;
  undefined4 local_110;
  undefined8 *local_108;
  undefined4 local_100;
  uint local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 *local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  double local_80;
  double local_78;
  double local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + 1;
  iVar5 = *(int *)(param_1 + 0x38);
  local_e0 = param_4;
  local_c8 = param_2;
  local_c0 = param_3;
  if (iVar5 < 1) {
    uVar8 = 0;
  }
  else {
    local_d0 = param_5 + 0xb0;
    local_d8 = (undefined8 *)(param_5 + 0x40);
    lVar7 = 0x18;
    lVar6 = 0;
    uVar8 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x30);
      if (*(char *)(lVar3 + -0x18 + lVar7) == '\x03') {
        uVar1 = *(uint *)(lVar3 + -0xc + lVar7);
        if ((uVar1 & 1) == 0) {
          if (((uVar1 & 2) == 0) || (*(int *)(local_e0 + 0x18) == 0)) {
LAB_147c1b7c7:
            iVar2 = *(int *)(lVar3 + -0x14 + lVar7);
            if ((iVar2 == 0) || (*(int *)(local_c0 + 0xc) % iVar2 == 0)) {
              uVar4 = *(undefined8 *)(param_2 + 0x10);
              local_e8 = FUN_14479d2ce(local_d0);
              local_f0 = *(undefined8 *)(param_5 + 0xf0);
              local_f8 = *(uint *)(param_5 + 0xa8);
              uVar8 = (ulonglong)local_f8;
              local_100 = *(undefined4 *)(param_5 + 4);
              local_68 = *local_d8;
              uStack_60 = local_d8[1];
              local_58 = local_d8[2];
              local_110 = *(undefined4 *)(param_6 + 0x90);
              local_70 = (double)*(float *)(param_6 + 0x48);
              local_78 = (double)*(float *)(param_6 + 0x44);
              local_118 = lVar3 + lVar7;
              local_80 = (double)*(float *)(param_6 + 0x40);
              local_88 = param_7[2];
              local_98 = *param_7;
              uStack_90 = param_7[1];
              local_b8 = *(undefined8 *)(param_5 + 0x10);
              uStack_b0 = *(undefined8 *)(param_5 + 0x18);
              local_a8 = *(undefined8 *)(param_5 + 0x20);
              local_108 = &local_68;
              local_120 = &local_80;
              local_128 = &local_98;
              FUN_147c03fb2(uVar4,*(undefined8 *)(lVar3 + -8 + lVar7),
                            *(undefined4 *)(param_2 + 0x1a0),&local_b8);
              iVar5 = *(int *)(param_1 + 0x38);
              uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
            }
          }
        }
        else if (-1 < *(int *)(param_6 + 0x6c)) goto LAB_147c1b7c7;
      }
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x28;
    } while (lVar6 < iVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffff01;
}



// FUNCTION 147c1b95e FUN_147c1b95e body=241 status=ok
// SIG undefined FUN_147c1b95e(void)

ulonglong FUN_147c1b95e(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
  iVar3 = *(int *)(param_1 + 0x38);
  if (iVar3 < 1) {
    uVar4 = 0;
  }
  else {
    lVar5 = 0x18;
    lVar6 = 0;
    uVar4 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x30);
      if ((*(char *)(lVar2 + -0x18 + lVar5) == '\x04') &&
         ((iVar1 = *(int *)(lVar2 + -0x14 + lVar5), iVar1 == 0 ||
          (*(int *)(param_3 + 0x10) % iVar1 == 0)))) {
        local_58 = *(undefined8 *)(param_2 + 0x58);
        local_68 = *(undefined4 *)(param_2 + 0x48);
        uStack_64 = *(undefined4 *)(param_2 + 0x4c);
        uStack_60 = *(undefined4 *)(param_2 + 0x50);
        uStack_5c = *(undefined4 *)(param_2 + 0x54);
        local_70 = lVar2 + lVar5;
        local_78 = &local_68;
        FUN_147c04122(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(lVar2 + -8 + lVar5),
                      *(undefined4 *)(param_2 + 0x1a0),param_4);
        iVar3 = *(int *)(param_1 + 0x38);
        uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
      }
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x28;
    } while (lVar6 < iVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c1ba50 FUN_147c1ba50 body=104 status=ok
// SIG undefined FUN_147c1ba50(void)

ulonglong FUN_147c1ba50(longlong param_1,longlong *param_2,uint *param_3)

{
  undefined8 unaff_RDI;
  ulonglong uVar1;
  undefined7 uVar2;
  
  if (*(longlong *)(param_3 + 1) == *(longlong *)(param_1 + 0x34)) {
    if ((*(byte *)(param_1 + 0x30) == 0) || (*param_3 == (uint)*(byte *)(param_1 + 0x30))) {
      uVar2 = (undefined7)((ulonglong)unaff_RDI >> 8);
      uVar1 = CONCAT71(uVar2,1);
      (**(code **)(*param_2 + 0xf0))(param_2,1);
      if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
        uVar1 = CONCAT71(uVar2,1);
        (**(code **)(*param_2 + 0xf8))(param_2,1);
        (**(code **)(*param_2 + 0x100))(param_2,1);
      }
      goto LAB_147c1ba76;
    }
  }
  uVar1 = 0;
LAB_147c1ba76:
  return uVar1 & 0xffffffff;
}



// FUNCTION 147c1bab8 FUN_147c1bab8 body=318 status=ok
// SIG undefined FUN_147c1bab8(void)

void FUN_147c1bab8(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x50) == 0) || (*(char *)(param_1 + 0x59) == '\0')) &&
     (*(longlong *)(param_1 + 0x68) == 0)) {
    FUN_1446f470e(&local_20,L"RequiredDistributionSpawnCount",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147bf866f(param_1,local_20,0,0);
    *(undefined4 *)(lVar1 + 0x38) = 0;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x68) = lVar1;
  }
  if (((*(int *)(param_1 + 0x88) == 0) || (*(char *)(param_1 + 0x91) == '\0')) &&
     (*(longlong *)(param_1 + 0xd0) == 0)) {
    FUN_1446f470e(&local_28,L"RequiredDistributionInheritVelocityScale",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147bfacf3(param_1,local_28,0,0);
    *(undefined8 *)(lVar1 + 0x38) = 0x3ff0000000000000;
    *(undefined8 *)(lVar1 + 0x40) = 0x3ff0000000000000;
    *(undefined8 *)(lVar1 + 0x48) = 0x3ff0000000000000;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0xd0) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c1bbf8 FUN_147c1bbf8 body=556 status=ok
// SIG undefined FUN_147c1bbf8(void)

ulonglong FUN_147c1bbf8(longlong param_1,longlong *param_2,uint *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint *puVar3;
  int iVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  float fVar8;
  undefined1 auStack_d8 [32];
  uint *local_b8;
  undefined8 *local_b0;
  double local_a0;
  double local_98;
  double local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(longlong *)(param_3 + 1) == *(longlong *)(param_1 + 0x34)) &&
     (*param_3 == (uint)*(byte *)(param_1 + 0x30) || *(byte *)(param_1 + 0x30) == 0)) {
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    switch(*param_3) {
    case 1:
    case 4:
    case 5:
      lVar2 = 0xc;
      break;
    case 3:
      lVar2 = *(longlong *)(param_3 + 0x26);
      if ((lVar2 != 0) && ((longlong)*(int *)(param_1 + 0xe0) != 0)) {
        lVar6 = 0;
        do {
          lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xd8) + lVar6);
          if (lVar1 == lVar2) break;
          bVar7 = (longlong)*(int *)(param_1 + 0xe0) * 8 + -8 != lVar6;
          lVar6 = lVar6 + 8;
        } while (bVar7);
        if ((lVar1 == lVar2) == (bool)(*(byte *)(param_1 + 0xe8) & 1))
        goto switchD_147c1bc77_default;
      }
    case 2:
      lVar2 = 0x50;
      if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
        lVar2 = 0xc;
      }
      break;
    default:
      goto switchD_147c1bc77_default;
    }
    fVar8 = (float)FUN_147a77524(param_1 + 0x40,*(undefined4 *)((longlong)param_3 + lVar2),0,0);
    iVar4 = (int)ROUND(fVar8 + fVar8 + 0.5) >> 1;
    if (0 < iVar4) {
      puVar3 = (uint *)(param_2 + 9);
      if ((*(uint *)(param_1 + 0x70) & 2) == 0) {
        puVar3 = param_3 + 4;
      }
      local_58 = *(longlong *)(puVar3 + 4);
      local_68 = *puVar3;
      uStack_64 = puVar3[1];
      uStack_60 = puVar3[2];
      uStack_5c = puVar3[3];
      if ((*(uint *)(param_1 + 0x70) & 4) == 0) {
        local_78 = DAT_14c8464f0;
        local_88 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_80 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      }
      else {
        local_b0 = (undefined8 *)0x0;
        local_b8 = (uint *)((ulonglong)local_b8 & 0xffffffff00000000);
        FUN_147a776dc(param_1 + 0x78,&local_a0,param_3[3],0);
        local_78 = *(double *)(param_3 + 0xe) * local_90;
        uStack_80 = *(double *)(param_3 + 0xc) * local_98;
        local_88 = *(double *)(param_3 + 10) * local_a0;
      }
      local_b0 = &local_88;
      local_b8 = &local_68;
      (**(code **)(*param_2 + 0xc0))(param_2,param_4,0,iVar4);
    }
  }
  else {
    uVar5 = 0;
  }
switchD_147c1bc77_default:
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 147c1be26 FUN_147c1be26 body=168 status=ok
// SIG undefined FUN_147c1be26(void)

void FUN_147c1be26(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x40) == 0) || (*(char *)(param_1 + 0x49) == '\0')) &&
     (*(longlong *)(param_1 + 0x88) == 0)) {
    FUN_1446f470e(&local_20,L"DistributionStartLocation",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147c120bf(param_1,local_20,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x88) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c1bed0 FUN_147c1bed0 body=106 status=ok
// SIG undefined FUN_147c1bed0(void)

void FUN_147c1bed0(longlong *param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_147c05556(param_2,param_1);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_2 + 0x10) + 0x8f0;
  }
  (**(code **)(*param_1 + 0x388))(param_1,param_2,param_3,param_4,lVar1,param_5);
  return;
}



// FUNCTION 147c1bf3a FUN_147c1bf3a body=657 status=ok
// SIG undefined FUN_147c1bf3a(void)

void FUN_147c1bf3a(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,longlong param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  double dVar13;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  longlong local_a0;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  fVar10 = *(float *)(param_1 + 0x90);
  if (((fVar10 == 0.0) && (!NAN(fVar10))) || ((fVar10 == 1.0 && (!NAN(fVar10))))) {
    uVar9 = *(undefined8 *)(param_2 + 0x10);
    fVar10 = *(float *)(param_2 + 0x1a0);
  }
  else {
    uVar8 = *(int *)(param_5 + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)(param_5 + 4) = uVar8;
    fVar10 = *(float *)(param_2 + 0x1a0);
    auVar11 = roundss(ZEXT816(0),ZEXT416((uint)fVar10),0xb);
    fVar12 = (fVar10 - auVar11._0_4_) * ((float)(uVar8 >> 9 | 0x3f800000) + -1.0);
    auVar11 = ZEXT416((uint)fVar12);
    if (fVar12 < *(float *)(param_1 + 0x94) || fVar12 == *(float *)(param_1 + 0x94)) {
      FUN_147a77804(param_1 + 0x30,&local_78,&local_90);
      uVar8 = *(int *)(param_5 + 4) * 0xbb38435 + 0x3619636b;
      *(uint *)(param_5 + 4) = uVar8;
      fVar10 = *(float *)(param_1 + 0x90) + -1.0;
      auVar11 = roundps(auVar11,ZEXT416((uint)(((float)(uVar8 >> 9 | 0x3f800000) + -1.0) * fVar10 +
                                              0.5)),3);
      dVar13 = (double)(auVar11._0_4_ / fVar10);
      local_68 = (local_80 - local_68) * dVar13 + local_68;
      local_70 = (local_88 - local_70) * dVar13 + local_70;
      local_78 = (local_90 - local_78) * dVar13 + local_78;
      goto LAB_147c1c0a2;
    }
    uVar9 = *(undefined8 *)(param_2 + 0x10);
  }
  local_a0 = param_5;
  local_a8 = 0;
  FUN_147a776dc(param_1 + 0x30,&local_78,fVar10,uVar9);
LAB_147c1c0a2:
  dVar4 = *(double *)(param_2 + 0x68);
  dVar5 = *(double *)(param_2 + 0x88);
  dVar6 = *(double *)(param_2 + 0xa8);
  dVar7 = *(double *)(param_2 + 200);
  dVar13 = *(double *)(param_2 + 0xd0);
  dVar1 = *(double *)(param_2 + 0xb0);
  dVar2 = *(double *)(param_2 + 0x90);
  dVar3 = *(double *)(param_2 + 0x70);
  *(double *)(param_6 + 0x18) =
       *(double *)(param_6 + 0x18) +
       *(double *)(param_2 + 0xc0) * 0.0 +
       local_68 * *(double *)(param_2 + 0xa0) +
       local_70 * *(double *)(param_2 + 0x80) + local_78 * *(double *)(param_2 + 0x60);
  *(double *)(param_6 + 0x20) =
       dVar7 * 0.0 + local_68 * dVar6 + local_70 * dVar5 + local_78 * dVar4 +
       *(double *)(param_6 + 0x20);
  *(double *)(param_6 + 0x28) =
       local_78 * dVar3 + local_70 * dVar2 + local_68 * dVar1 + dVar13 * 0.0 +
       *(double *)(param_6 + 0x28);
  FUN_144afe924(param_6 + 0x18);
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c1c1ce FUN_147c1c1ce body=80 status=ok
// SIG undefined FUN_147c1c1ce(void)

void FUN_147c1c1ce(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x14) & 4) == 0) {
    return;
  }
  uVar1 = FUN_147c05556(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x000147c1c21b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x368))(param_1,param_2,uVar1,param_1 + 0x13);
  return;
}



// FUNCTION 147c1c21e FUN_147c1c21e body=836 status=ok
// SIG undefined FUN_147c1c21e(void)

void FUN_147c1c21e(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
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
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined8 local_190;
  undefined1 local_188 [16];
  double local_178;
  undefined8 uStack_170;
  undefined1 local_168 [16];
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x18) + 0x30) + 0x71) & 1) == 0) {
    local_190 = param_5;
    local_198 = 0;
    FUN_147a776dc(param_1 + 0x30,&local_108,*(undefined4 *)(param_2 + 0x1a0),
                  *(undefined8 *)(param_2 + 0x10));
    *(double *)(param_6 + 0x18) = local_108 + *(double *)(param_6 + 0x18);
    *(double *)(param_6 + 0x20) = dStack_100 + *(double *)(param_6 + 0x20);
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x10);
    dVar8 = *(double *)(lVar1 + 0x240);
    dVar9 = *(double *)(lVar1 + 0x248);
    dVar10 = *(double *)(lVar1 + 0x250);
    dVar11 = *(double *)(lVar1 + 0x280);
    dVar12 = *(double *)(lVar1 + 0x288);
    dStack_140 = *(double *)(lVar1 + 0x290);
    dVar14 = dVar9 + dVar9;
    dVar2 = dVar10 + dVar10;
    dVar13 = dVar8 * (dVar8 + dVar8);
    dVar5 = (1.0 - (dVar10 * dVar2 + dVar13)) * dVar12;
    local_138 = (1.0 - (dVar13 + dVar9 * dVar14)) * dStack_140;
    dVar7 = *(double *)(lVar1 + 0x240) * dVar2;
    dVar13 = *(double *)(lVar1 + 600);
    dVar3 = dVar2 * dVar13;
    dVar4 = (dVar8 + dVar8) * *(double *)(lVar1 + 600);
    dVar13 = dVar14 * dVar13;
    dVar6 = (dVar14 * dVar8 + dVar3) * dVar11;
    local_158 = (dVar2 * dVar9 + dVar4) * dVar12;
    local_148 = (dVar13 + dVar7) * dStack_140;
    local_178 = (dVar7 - dVar13) * dVar11;
    dStack_140 = (dVar2 * dVar9 - dVar4) * dStack_140;
    local_188._8_4_ = SUB84(dVar6,0);
    local_188._0_8_ = (1.0 - (dVar10 * dVar2 + dVar9 * dVar14)) * dVar11;
    local_188._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    uStack_170 = 0;
    local_168._8_4_ = SUB84(dVar5,0);
    local_168._0_8_ = (dVar14 * dVar8 - dVar3) * dVar12;
    local_168._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    uStack_150 = 0;
    uStack_130 = 0;
    local_128 = *(undefined8 *)(lVar1 + 0x260);
    uStack_120 = *(undefined8 *)(lVar1 + 0x268);
    local_118 = *(undefined8 *)(lVar1 + 0x270);
    uStack_110 = 0x3ff0000000000000;
    FUN_14007522e(&local_108);
    local_190 = param_5;
    local_198 = 0;
    FUN_147a776dc(param_1 + 0x30,local_188,*(undefined4 *)(param_2 + 0x1a0),
                  *(undefined8 *)(param_2 + 0x10));
    local_f8 = (double)local_188._0_8_ * local_f8 + (double)local_188._8_8_ * local_d8 +
               local_178 * local_b8 + local_98 * 0.0;
    *(double *)(param_6 + 0x18) =
         *(double *)(param_6 + 0x18) +
         local_a8 * 0.0 +
         local_178 * local_c8 +
         (double)local_188._8_8_ * local_e8 + (double)local_188._0_8_ * local_108;
    *(double *)(param_6 + 0x20) =
         dStack_a0 * 0.0 +
         local_178 * dStack_c0 +
         (double)local_188._8_8_ * dStack_e0 + (double)local_188._0_8_ * dStack_100 +
         *(double *)(param_6 + 0x20);
  }
  *(double *)(param_6 + 0x28) = local_f8 + *(double *)(param_6 + 0x28);
  FUN_144afe924(param_6 + 0x18);
  if ((local_80 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c1c564 FUN_147c1c564 body=80 status=ok
// SIG undefined FUN_147c1c564(void)

void FUN_147c1c564(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x14) & 4) == 0) {
    return;
  }
  uVar1 = FUN_147c05556(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x000147c1c5b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x368))(param_1,param_2,uVar1,param_1 + 0x13);
  return;
}



// FUNCTION 147c1c5b4 FUN_147c1c5b4 body=563 status=ok
// SIG undefined FUN_147c1c5b4(void)

void FUN_147c1c5b4(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(int *)(param_1 + 0x40) == 0) || (*(char *)(param_1 + 0x49) == '\0')) &&
     (*(longlong *)(param_1 + 0x88) == 0)) {
    FUN_1446f470e(&local_28,L"DistributionLocation",1);
    local_50 = 0;
    local_58 = 0;
    lVar1 = FUN_147c120bf(param_1,local_28,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x88) = lVar1;
  }
  if (((*(int *)(param_1 + 0xa0) == 0) || (*(char *)(param_1 + 0xa9) == '\0')) &&
     (*(longlong *)(param_1 + 0xe8) == 0)) {
    FUN_1446f470e(&local_30,L"DistributionLocationOffset",1);
    local_50 = 0;
    local_58 = 0;
    lVar1 = FUN_147bfacf3(param_1,local_30,0,0);
    *(undefined8 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x40) = 0;
    *(undefined8 *)(lVar1 + 0x48) = 0;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0xe8) = lVar1;
  }
  if (((*(int *)(param_1 + 0x160) == 0) || (*(char *)(param_1 + 0x169) == '\0')) &&
     (*(longlong *)(param_1 + 0x1a8) == 0)) {
    FUN_1446f470e(&local_38,L"DistributionScaleFactor",1);
    local_50 = 0;
    local_58 = 0;
    lVar1 = FUN_147bfacf3(param_1,local_38,0,0);
    *(undefined8 *)(lVar1 + 0x38) = 0x3ff0000000000000;
    *(undefined8 *)(lVar1 + 0x40) = 0x3ff0000000000000;
    *(undefined8 *)(lVar1 + 0x48) = 0x3ff0000000000000;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x148) = lVar1;
    FUN_1446f470e(&local_40,L"DistributionDirection",1);
    local_50 = 0;
    local_58 = 0;
    lVar1 = FUN_147c120bf(param_1,local_40,0,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x1a8) = lVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c1c7e8 FUN_147c1c7e8 body=656 status=ok
// SIG undefined FUN_147c1c7e8(void)

void FUN_147c1c7e8(longlong param_1,longlong param_2,uint param_3,undefined8 param_4,
                  longlong param_5)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x18) + 0x30) + 0x71) & 1) == 0) {
    local_90 = 0;
    local_98 = 0;
    FUN_147a776dc(param_1 + 0x30,local_88,*(undefined4 *)(param_5 + 0x90),
                  *(undefined8 *)(param_2 + 0x10));
    lVar2 = *(longlong *)(param_2 + 0x10);
    dVar7 = (double)local_88._0_8_ * *(double *)(lVar2 + 0x280);
    dVar8 = (double)local_88._8_8_ * *(double *)(lVar2 + 0x288);
    local_78 = local_78 * *(double *)(lVar2 + 0x290);
    dVar4 = *(double *)(lVar2 + 0x240);
    dVar5 = *(double *)(lVar2 + 0x248);
    dVar3 = *(double *)(lVar2 + 0x250);
    dVar1 = *(double *)(lVar2 + 600);
    dVar9 = dVar8 * dVar4 - dVar7 * dVar5;
    dVar10 = local_78 * dVar5 - dVar8 * dVar3;
    dVar11 = dVar7 * dVar3 - dVar4 * local_78;
    dVar10 = dVar10 + dVar10;
    dVar11 = dVar11 + dVar11;
    dVar9 = dVar9 + dVar9;
    dVar7 = (dVar9 * dVar5 - dVar11 * dVar3) + dVar1 * dVar10 + dVar7 + *(double *)(lVar2 + 0x260);
    dVar3 = (dVar3 * dVar10 - dVar4 * dVar9) + *(double *)(lVar2 + 600) * dVar11 + dVar8 +
            *(double *)(lVar2 + 0x268);
    local_78 = dVar9 * dVar1 + local_78 + (dVar11 * dVar4 - dVar10 * dVar5) +
               *(double *)(lVar2 + 0x270);
    local_88._8_4_ = SUB84(dVar3,0);
    local_88._0_8_ = dVar7;
    local_88._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    *(double *)(param_5 + 0x28) = local_78;
  }
  else {
    local_90 = 0;
    local_98 = 0;
    FUN_147a776dc(param_1 + 0x30,local_88,*(undefined4 *)(param_5 + 0x90),
                  *(undefined8 *)(param_2 + 0x10));
    *(double *)(param_5 + 0x28) = local_78;
    dVar7 = local_88._0_8_;
    dVar3 = local_88._8_8_;
  }
  *(double *)(param_5 + 0x18) = dVar7;
  *(double *)(param_5 + 0x20) = dVar3;
  uVar6 = (ulonglong)param_3;
  local_90 = 0;
  local_98 = 0;
  FUN_147a776dc(param_1 + 0x90,local_88,*(undefined4 *)(param_2 + 0x1a0),
                *(undefined8 *)(param_2 + 0x10));
  *(double *)(param_5 + 0x10 + uVar6) = local_78;
  *(undefined8 *)(param_5 + uVar6) = local_88._0_8_;
  ((undefined8 *)(param_5 + uVar6))[1] = local_88._8_8_;
  *(double *)(param_5 + 0x18) = *(double *)(param_5 + uVar6) + *(double *)(param_5 + 0x18);
  *(double *)(param_5 + 0x20) = *(double *)(param_5 + 8 + uVar6) + *(double *)(param_5 + 0x20);
  *(double *)(param_5 + 0x28) = *(double *)(param_5 + 0x10 + uVar6) + *(double *)(param_5 + 0x28);
  FUN_144afe924(param_5 + 0x18);
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c1ca7a FUN_147c1ca7a body=1015 status=ok
// SIG undefined FUN_147c1ca7a(void)

void FUN_147c1ca7a(longlong param_1,longlong param_2,uint param_3,float param_4)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  char cVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined8 local_100;
  longlong local_f8;
  longlong local_f0;
  ulonglong local_e8;
  longlong local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar5 = *(longlong *)(param_2 + 0x10);
  if ((*(byte *)(lVar5 + 0x693) & 0x10) == 0) {
    local_f0 = 0x900;
    cVar11 = FUN_144a61b4f();
    if (cVar11 == '\0') goto LAB_147c1cb12;
  }
  local_f0 = 0x240;
LAB_147c1cb12:
  if (0 < (longlong)*(int *)(param_2 + 0x18c)) {
    lVar6 = *(longlong *)(param_2 + 0x168);
    lVar7 = *(longlong *)(param_2 + 0x170);
    iVar4 = *(int *)(param_2 + 0x188);
    local_f8 = param_1 + 0x30;
    local_e0 = param_1 + 0xf0;
    local_e8 = (ulonglong)param_3;
    fVar21 = (float)(-(uint)(0.0 < param_4) & (uint)(1.0 / param_4));
    uVar14 = (longlong)*(int *)(param_2 + 0x18c) + 1;
    do {
      uVar12 = (ulonglong)((uint)*(ushort *)(lVar7 + -4 + uVar14 * 2) * iVar4);
      if ((*(byte *)(lVar6 + 0x6f + uVar12) & 4) == 0) {
        lVar13 = uVar12 + lVar6;
        if ((*(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x18) + 0x30) + 0x71) & 1) == 0) {
          local_100 = 0;
          local_108 = 0;
          FUN_147a776dc(local_f8,&local_d8,*(undefined4 *)(lVar13 + 0x90),
                        *(undefined8 *)(param_2 + 0x10));
          pdVar1 = (double *)(lVar5 + 0x40 + local_f0);
          dVar16 = local_d8 * *pdVar1;
          dVar17 = dStack_d0 * pdVar1[1];
          dVar15 = local_c8 * *(double *)(lVar5 + 0x50 + local_f0);
          dVar9 = *(double *)(lVar5 + local_f0);
          dVar10 = ((double *)(lVar5 + local_f0))[1];
          dVar8 = *(double *)(lVar5 + 0x10 + local_f0);
          pdVar1 = (double *)(lVar5 + 0x18 + local_f0);
          dVar3 = *pdVar1;
          dVar18 = dVar17 * dVar9 - dVar16 * dVar10;
          dVar19 = dVar15 * dVar10 - dVar17 * dVar8;
          dVar20 = dVar16 * dVar8 - dVar9 * dVar15;
          dVar19 = dVar19 + dVar19;
          dVar20 = dVar20 + dVar20;
          dVar18 = dVar18 + dVar18;
          pdVar2 = (double *)(lVar5 + 0x20 + local_f0);
          dVar16 = (dVar18 * dVar10 - dVar20 * dVar8) + dVar3 * dVar19 + dVar16 + *pdVar2;
          dVar8 = (dVar8 * dVar19 - dVar9 * dVar18) + *pdVar1 * dVar20 + dVar17 + pdVar2[1];
          dVar3 = dVar18 * dVar3 + dVar15 + (dVar20 * dVar9 - dVar19 * dVar10) +
                  *(double *)(lVar5 + 0x30 + local_f0);
        }
        else {
          local_100 = 0;
          local_108 = 0;
          FUN_147a776dc(local_f8,&local_d8,*(undefined4 *)(lVar13 + 0x90),
                        *(undefined8 *)(param_2 + 0x10));
          dVar16 = local_d8;
          dVar8 = dStack_d0;
          dVar3 = local_c8;
        }
        local_100 = 0;
        local_108 = 0;
        FUN_147a776dc(local_e0,&local_d8,*(undefined4 *)(lVar13 + 0x90),
                      *(undefined8 *)(param_2 + 0x10));
        dVar3 = (dVar3 + *(double *)(lVar13 + 0x10 + local_e8)) - *(double *)(lVar13 + 0x28);
        dVar8 = (dVar8 + *(double *)(lVar13 + 8 + local_e8)) - *(double *)(lVar13 + 0x20);
        dVar16 = (dVar16 + *(double *)(lVar13 + local_e8)) - *(double *)(lVar13 + 0x18);
        dVar18 = 1.0 - local_d8;
        *(float *)(lVar13 + 0x40) = (float)(dVar16 * local_d8) * fVar21;
        *(float *)(lVar13 + 0x44) = (float)(dVar8 * local_d8) * fVar21;
        *(float *)(lVar13 + 0x48) = (float)(dVar3 * local_d8) * fVar21;
        *(double *)(lVar13 + 0x18) = dVar18 * dVar16 + *(double *)(lVar13 + 0x18);
        *(double *)(lVar13 + 0x20) = dVar8 * dVar18 + *(double *)(lVar13 + 0x20);
        *(double *)(lVar13 + 0x28) = dVar3 * dVar18 + *(double *)(lVar13 + 0x28);
        FUN_144afe924(lVar13 + 0x18);
      }
      uVar14 = uVar14 - 1;
    } while (1 < uVar14);
  }
  if ((local_c0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c1ce78 FUN_147c1ce78 body=1521 status=ok
// SIG undefined FUN_147c1ce78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c1ce78(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  longlong *plVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  int iVar11;
  int *piVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  byte bVar18;
  byte bVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar13 = param_2[2];
    if (0 < (longlong)*(int *)(lVar13 + 0x8e8)) {
      lVar17 = 0;
      do {
        plVar6 = *(longlong **)(*(longlong *)(lVar13 + 0x8e0) + lVar17 * 8);
        if ((plVar6 != (longlong *)0x0) &&
           (*(longlong *)(plVar6[1] + 0x28) == *(longlong *)(param_1 + 0x30))) {
          bVar19 = *(byte *)(*(longlong *)(plVar6[3] + 0x30) + 0x71);
          bVar18 = *(byte *)(*(longlong *)(param_2[3] + 0x30) + 0x71);
          lVar17 = FUN_147c05556(param_2,param_1);
          lVar13 = lVar13 + 0x8f0;
          if (lVar17 != 0) {
            lVar13 = lVar17;
          }
          if (*(char *)(param_1 + 0x38) == '\0') {
            iVar14 = *(int *)((longlong)plVar6 + 0x18c);
            iVar11 = 0;
            if (0 < iVar14) {
              uVar15 = *(int *)(lVar13 + 4) * 0xbb38435 + 0x3619636b;
              *(uint *)(lVar13 + 4) = uVar15;
              iVar11 = (int)((float)iVar14 * ((float)(uVar15 >> 9 | 0x3f800000) + -1.0));
            }
          }
          else {
            iVar11 = 0;
            if (*(char *)(param_1 + 0x38) == '\x01') {
              piVar12 = (int *)FUN_147bf7da6(param_2,param_1);
              iVar11 = 0;
              if (piVar12 != (int *)0x0) {
                iVar14 = *piVar12 + 1;
                *piVar12 = iVar14;
                iVar11 = 0;
                if (iVar14 < *(int *)((longlong)plVar6 + 0x18c)) {
                  iVar11 = iVar14;
                }
                *piVar12 = iVar11;
              }
            }
          }
          lVar13 = (**(code **)(*plVar6 + 0x108))(plVar6,iVar11);
          if (lVar13 == 0) goto LAB_147c1d1aa;
          bVar18 = bVar18 & 1;
          if (((((*(float *)(lVar13 + 0x90) != 0.0) || (NAN(*(float *)(lVar13 + 0x90)))) ||
               (*(double *)(lVar13 + 0x18) != DAT_14c8464e0)) ||
              ((NAN(*(double *)(lVar13 + 0x18)) || NAN(DAT_14c8464e0) ||
               (*(double *)(lVar13 + 0x20) != DAT_14c8464e8)))) ||
             ((NAN(*(double *)(lVar13 + 0x20)) || NAN(DAT_14c8464e8) ||
              ((*(double *)(lVar13 + 0x28) != DAT_14c8464f0 ||
               (NAN(*(double *)(lVar13 + 0x28)) || NAN(DAT_14c8464f0))))))) {
            bVar19 = bVar19 & 1;
            if (bVar19 == bVar18) {
              *(undefined8 *)(param_5 + 0x28) = *(undefined8 *)(lVar13 + 0x28);
              dVar20 = *(double *)(lVar13 + 0x18);
              dVar22 = *(double *)(lVar13 + 0x20);
              goto LAB_147c1d070;
            }
            lVar17 = plVar6[2];
            if ((bVar19 == 0) || (bVar18 != 0)) {
              dVar21 = *(double *)(lVar13 + 0x18) - *(double *)(lVar17 + 0x260);
              dVar23 = *(double *)(lVar13 + 0x20) - *(double *)(lVar17 + 0x268);
              dVar25 = *(double *)(lVar13 + 0x28) - *(double *)(lVar17 + 0x270);
              dVar10 = *(double *)(lVar17 + 0x240);
              auVar5 = *(undefined1 (*) [16])(lVar17 + 0x280);
              dVar27 = -dVar10;
              dVar7 = -*(double *)(lVar17 + 0x248);
              dVar26 = *(double *)(lVar17 + 0x250) * -1.0;
              dVar28 = *(double *)(lVar17 + 600) * 1.0;
              dVar29 = dVar21 * dVar26 - dVar27 * dVar25;
              dVar22 = dVar23 * dVar27 - dVar21 * dVar7;
              dVar8 = dVar25 * dVar7 - dVar23 * dVar26;
              dVar8 = dVar8 + dVar8;
              dVar29 = dVar29 + dVar29;
              dVar22 = dVar22 + dVar22;
              auVar24 = divpd(_DAT_149934d80,auVar5);
              dVar20 = *(double *)(lVar17 + 0x290);
              *(double *)(param_5 + 0x18) =
                   (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar5._0_8_)) & auVar24._0_8_)
                   * ((dVar22 * dVar7 - dVar29 * dVar26) + dVar28 * dVar8 + dVar21);
              *(double *)(param_5 + 0x20) =
                   (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar5._8_8_)) & auVar24._8_8_)
                   * (dVar10 * dVar22 + dVar26 * dVar8 + dVar28 * dVar29 + dVar23);
              *(double *)(param_5 + 0x28) =
                   (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar20)) &
                           (ulonglong)(1.0 / dVar20)) *
                   (dVar28 * dVar22 + dVar25 + (dVar29 * dVar27 - dVar8 * dVar7));
            }
            else {
              dVar21 = *(double *)(lVar13 + 0x18) * *(double *)(lVar17 + 0x280);
              dVar22 = *(double *)(lVar13 + 0x20) * *(double *)(lVar17 + 0x288);
              dVar23 = *(double *)(lVar13 + 0x28) * *(double *)(lVar17 + 0x290);
              dVar8 = *(double *)(lVar17 + 0x240);
              dVar29 = *(double *)(lVar17 + 0x248);
              dVar10 = *(double *)(lVar17 + 0x250);
              dVar20 = *(double *)(lVar17 + 600);
              dVar25 = dVar22 * dVar8 - dVar21 * dVar29;
              dVar26 = dVar23 * dVar29 - dVar22 * dVar10;
              dVar27 = dVar21 * dVar10 - dVar8 * dVar23;
              dVar26 = dVar26 + dVar26;
              dVar27 = dVar27 + dVar27;
              dVar25 = dVar25 + dVar25;
              dVar7 = (dVar10 * dVar26 - dVar8 * dVar25) +
                      *(double *)(lVar17 + 600) * dVar27 + dVar22 + *(double *)(lVar17 + 0x268);
              dVar22 = *(double *)(lVar17 + 0x270);
              auVar5._8_4_ = SUB84(dVar7,0);
              auVar5._0_8_ = (dVar25 * dVar29 - dVar27 * dVar10) + dVar20 * dVar26 + dVar21 +
                             *(double *)(lVar17 + 0x260);
              auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
              *(undefined1 (*) [16])(param_5 + 0x18) = auVar5;
              *(double *)(param_5 + 0x28) =
                   dVar25 * dVar20 + dVar23 + (dVar27 * dVar8 - dVar26 * dVar29) + dVar22;
            }
          }
          else if (bVar18 == 0) {
            lVar17 = plVar6[2];
            uVar9 = *(undefined8 *)(lVar17 + 0x268);
            uVar4 = *(undefined8 *)(lVar17 + 0x270);
            *(undefined8 *)(param_5 + 0x18) = *(undefined8 *)(lVar17 + 0x260);
            *(undefined8 *)(param_5 + 0x20) = uVar9;
            *(undefined8 *)(param_5 + 0x28) = uVar4;
          }
          else {
            *(double *)(param_5 + 0x28) = DAT_14c8464f0;
            dVar20 = DAT_14c8464e0;
            dVar22 = DAT_14c8464e8;
LAB_147c1d070:
            *(double *)(param_5 + 0x18) = dVar20;
            *(double *)(param_5 + 0x20) = dVar22;
          }
          if ((*(byte *)(param_1 + 0x3c) & 1) != 0) {
            fVar1 = *(float *)(param_1 + 0x40);
            fVar2 = *(float *)(lVar13 + 0x48);
            fVar3 = *(float *)(lVar13 + 0x44);
            *(float *)(param_5 + 0x30) =
                 fVar1 * *(float *)(lVar13 + 0x40) + *(float *)(param_5 + 0x30);
            *(float *)(param_5 + 0x34) = fVar3 * fVar1 + *(float *)(param_5 + 0x34);
            *(float *)(param_5 + 0x38) = fVar2 * fVar1 + *(float *)(param_5 + 0x38);
            fVar1 = *(float *)(param_1 + 0x40);
            fVar2 = *(float *)(lVar13 + 0x48);
            fVar3 = *(float *)(lVar13 + 0x44);
            *(float *)(param_5 + 0x40) =
                 fVar1 * *(float *)(lVar13 + 0x40) + *(float *)(param_5 + 0x40);
            *(float *)(param_5 + 0x44) = fVar3 * fVar1 + *(float *)(param_5 + 0x44);
            *(float *)(param_5 + 0x48) = fVar2 * fVar1 + *(float *)(param_5 + 0x48);
          }
          if ((*(byte *)(param_1 + 0x44) & 1) != 0) {
            *(float *)(param_5 + 0x3c) =
                 *(float *)(lVar13 + 0x3c) * *(float *)(param_1 + 0x48) + *(float *)(param_5 + 0x3c)
            ;
            iVar14 = (**(code **)(*param_2 + 0x150))(param_2);
            iVar11 = (**(code **)(*plVar6 + 0x150))(plVar6);
            if ((iVar14 != 0) && (iVar11 != 0)) {
              lVar16 = (longlong)iVar14;
              lVar17 = (longlong)iVar11;
              *(float *)(param_5 + 0x18 + lVar16) =
                   *(float *)(lVar13 + 0x18 + lVar17) + *(float *)(param_5 + 0x18 + lVar16);
              *(float *)(param_5 + 0x1c + lVar16) =
                   *(float *)(lVar13 + 0x1c + lVar17) + *(float *)(param_5 + 0x1c + lVar16);
              *(float *)(param_5 + 0x20 + lVar16) =
                   *(float *)(lVar13 + 0x20 + lVar17) + *(float *)(param_5 + 0x20 + lVar16);
              *(float *)(param_5 + lVar16) =
                   *(float *)(lVar13 + lVar17) + *(float *)(param_5 + lVar16);
              *(float *)(param_5 + 4 + lVar16) =
                   *(float *)(lVar13 + 4 + lVar17) + *(float *)(param_5 + 4 + lVar16);
              *(float *)(param_5 + 8 + lVar16) =
                   *(float *)(lVar13 + 8 + lVar17) + *(float *)(param_5 + 8 + lVar16);
            }
          }
LAB_147c1d1aa:
          FUN_144afe924(param_5 + 0x18);
          FUN_144afe7b6(param_5 + 0x40);
          FUN_144afe7b6(param_5 + 0x30);
          return;
        }
        lVar17 = lVar17 + 1;
      } while (*(int *)(lVar13 + 0x8e8) != lVar17);
    }
  }
  return;
}



// FUNCTION 147c1d470 FUN_147c1d470 body=187 status=ok
// SIG undefined FUN_147c1d470(void)

void FUN_147c1d470(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar4 = (longlong)*(int *)(*(longlong *)(param_2 + 0x10) + 0x8e8);
    if (0 < lVar4) {
      lVar5 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x8e0) + lVar5 * 8);
        if ((plVar1 != (longlong *)0x0) &&
           (*(longlong *)(plVar1[1] + 0x28) == *(longlong *)(param_1 + 0x30))) {
          puVar3 = (undefined8 *)
                   (**(code **)(*plVar1 + 0x108))(plVar1,*(undefined4 *)(param_2 + 0x18c));
          if (puVar3 == (undefined8 *)0x0) {
            return;
          }
          param_5[5] = puVar3[5];
          uVar2 = puVar3[4];
          param_5[3] = puVar3[3];
          param_5[4] = uVar2;
          param_5[2] = puVar3[2];
          uVar2 = puVar3[1];
          *param_5 = *puVar3;
          param_5[1] = uVar2;
          param_5[8] = puVar3[8];
          *(undefined4 *)(param_5 + 9) = *(undefined4 *)(puVar3 + 9);
          *(undefined4 *)(param_5 + 0x12) = *(undefined4 *)(puVar3 + 0x12);
          FUN_144afe924(param_5 + 3);
          FUN_144afe7b6(param_5 + 8);
          return;
        }
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
    }
  }
  return;
}



// FUNCTION 147c1d52c FUN_147c1d52c body=280 status=ok
// SIG undefined FUN_147c1d52c(void)

void FUN_147c1d52c(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar6 = (longlong)*(int *)(*(longlong *)(param_2 + 0x10) + 0x8e8);
    if (0 < lVar6) {
      lVar8 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x8e0) + lVar8 * 8);
        if ((plVar2 != (longlong *)0x0) &&
           (*(longlong *)(plVar2[1] + 0x28) == *(longlong *)(param_1 + 0x30))) {
          if ((longlong)*(int *)(param_2 + 0x18c) < 1) {
            return;
          }
          lVar6 = *(longlong *)(param_2 + 0x168);
          lVar8 = *(longlong *)(param_2 + 0x170);
          iVar1 = *(int *)(param_2 + 0x188);
          uVar7 = (longlong)*(int *)(param_2 + 0x18c);
          do {
            uVar9 = (ulonglong)((uint)*(ushort *)(lVar8 + -2 + uVar7 * 2) * iVar1);
            if (((*(byte *)(lVar6 + 0x6f + uVar9) & 4) == 0) &&
               (puVar5 = (undefined8 *)(**(code **)(*plVar2 + 0x108))(plVar2,(int)uVar7 + -1),
               puVar5 != (undefined8 *)0x0)) {
              puVar10 = (undefined8 *)(uVar9 + lVar6);
              puVar10[5] = puVar5[5];
              uVar4 = puVar5[4];
              puVar10[3] = puVar5[3];
              puVar10[4] = uVar4;
              puVar10[2] = puVar5[2];
              uVar4 = puVar5[1];
              *puVar10 = *puVar5;
              puVar10[1] = uVar4;
              puVar10[8] = puVar5[8];
              *(undefined4 *)(puVar10 + 9) = *(undefined4 *)(puVar5 + 9);
              *(undefined4 *)(puVar10 + 0x12) = *(undefined4 *)(puVar5 + 0x12);
              FUN_144afe924(puVar10 + 3);
              FUN_144afe7b6(puVar10 + 8);
            }
            bVar3 = 1 < uVar7;
            uVar7 = uVar7 - 1;
          } while (bVar3);
          return;
        }
        lVar8 = lVar8 + 1;
      } while (lVar6 != lVar8);
    }
  }
  return;
}



// FUNCTION 147c1d644 FUN_147c1d644 body=304 status=ok
// SIG undefined FUN_147c1d644(void)

void FUN_147c1d644(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(int *)(param_1 + 0x48) == 0) || (*(char *)(param_1 + 0x51) == '\0')) &&
     (*(longlong *)(param_1 + 0x60) == 0)) {
    FUN_1446f470e(&local_28,L"DistributionVelocityScale",1);
    local_40 = 0;
    local_48 = 0;
    lVar1 = FUN_147bf866f(param_1,local_28,0,0);
    *(undefined4 *)(lVar1 + 0x38) = 0x3f800000;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x60) = lVar1;
  }
  if (((*(int *)(param_1 + 0x78) == 0) || (*(char *)(param_1 + 0x81) == '\0')) &&
     (*(longlong *)(param_1 + 0xc0) == 0)) {
    FUN_1446f470e(&local_30,L"DistributionStartLocation",1);
    local_40 = 0;
    local_48 = 0;
    lVar1 = FUN_147bfacf3(param_1,local_30,0,0);
    *(undefined8 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x40) = 0;
    *(undefined8 *)(lVar1 + 0x48) = 0;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0xc0) = lVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c1d894 FUN_147c1d894 body=619 status=ok
// SIG undefined FUN_147c1d894(void)

void FUN_147c1d894(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(int *)(param_1 + 0x40) == 0) || (*(char *)(param_1 + 0x49) == '\0')) &&
     (*(longlong *)(param_1 + 0x88) == 0)) {
    FUN_1446f470e(&local_20,L"DistributionOffset",1);
    local_40 = 0;
    local_48 = 0;
    lVar4 = FUN_147bfacf3(param_1,local_20,0,0);
    *(undefined8 *)(lVar4 + 0x48) = DAT_14c8464f0;
    uVar3 = DAT_14c8464e8._4_4_;
    uVar2 = (undefined4)DAT_14c8464e8;
    uVar1 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(lVar4 + 0x38) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)(lVar4 + 0x3c) = uVar1;
    *(undefined4 *)(lVar4 + 0x40) = uVar2;
    *(undefined4 *)(lVar4 + 0x44) = uVar3;
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
    *(longlong *)(param_1 + 0x88) = lVar4;
  }
  if (((*(int *)(param_1 + 0xa0) == 0) || (*(char *)(param_1 + 0xa9) == '\0')) &&
     (*(longlong *)(param_1 + 0xb8) == 0)) {
    FUN_1446f470e(&local_28,L"DistributionHeight",1);
    local_40 = 0;
    local_48 = 0;
    lVar4 = FUN_147bf866f(param_1,local_28,0,0);
    *(undefined4 *)(lVar4 + 0x38) = 0x42480000;
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
    *(longlong *)(param_1 + 0xb8) = lVar4;
  }
  if (((*(int *)(param_1 + 0xd0) == 0) || (*(char *)(param_1 + 0xd9) == '\0')) &&
     (*(longlong *)(param_1 + 0xe8) == 0)) {
    FUN_1446f470e(&local_30,L"DistributionAngle",1);
    local_40 = 0;
    local_48 = 0;
    lVar4 = FUN_147bf866f(param_1,local_30,0,0);
    *(undefined4 *)(lVar4 + 0x38) = 0x42b40000;
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
    *(longlong *)(param_1 + 0xe8) = lVar4;
  }
  if (((*(int *)(param_1 + 0x100) == 0) || (*(char *)(param_1 + 0x109) == '\0')) &&
     (*(longlong *)(param_1 + 0x118) == 0)) {
    FUN_1446f470e(&local_38,L"DistributionThickness",1);
    local_40 = 0;
    local_48 = 0;
    lVar4 = FUN_147bf866f(param_1,local_38,0,0);
    *(undefined4 *)(lVar4 + 0x38) = 0;
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
    *(longlong *)(param_1 + 0x118) = lVar4;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c1db00 FUN_147c1db00 body=67 status=ok
// SIG undefined FUN_147c1db00(void)

void FUN_147c1db00(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_147c05556(param_2,param_1);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_2 + 0x10) + 0x8f0;
  }
  FUN_147c1db44(param_1,param_2,lVar1,param_5);
  return;
}



// FUNCTION 147c1db44 FUN_147c1db44 body=863 status=ok
// SIG undefined FUN_147c1db44(void)

void FUN_147c1db44(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double *pdVar10;
  uint uVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  longlong local_f0;
  double local_e0;
  double local_d8;
  float local_c4 [3];
  double local_b8;
  double local_b0 [2];
  double local_a0;
  double local_98;
  double local_88;
  double local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f8 = 0;
  local_f0 = param_3;
  FUN_147a776dc(param_1 + 0x30,&local_e0,param_3,*(undefined8 *)(param_2 + 0x10));
  fVar13 = (float)FUN_147a77524(param_1 + 0x90,*(undefined4 *)(param_2 + 0x1a0),
                                *(undefined8 *)(param_2 + 0x10),param_3);
  fVar14 = (float)FUN_147a77524(param_1 + 0xc0,*(undefined4 *)(param_2 + 0x1a0),
                                *(undefined8 *)(param_2 + 0x10),param_3);
  fVar15 = (float)FUN_147a77524(param_1 + 0xf0,*(undefined4 *)(param_2 + 0x1a0),
                                *(undefined8 *)(param_2 + 0x10),param_3);
  fVar14 = tanf((fVar14 * 0.5 * 3.1415927) / 180.0);
  pdVar10 = local_b0;
  local_b8 = (double)(fVar13 * 0.5) + local_e0;
  local_b0[0] = local_d8 + 0.0;
  local_a0 = (double)(fVar13 * -0.5) + local_e0;
  local_98 = local_d8 + (double)(fVar14 * fVar13);
  local_88 = local_a0;
  local_80 = local_d8 - (double)(fVar14 * fVar13);
  iVar5 = *(int *)(param_3 + 4);
  local_c4[0] = (float)(iVar5 * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) + -1.0;
  local_c4[1] = (float)(iVar5 * -0x4b9b4d07 + 0x9d6f2492U >> 9 | 0x3f800000) + -1.0;
  local_c4[2] = (float)(iVar5 * 0x1c3c718d + 0xf50d3da5U >> 9 | 0x3f800000) + -1.0;
  uVar11 = iVar5 * 0x77a73631 + 0xf6ff3a94;
  *(uint *)(param_3 + 4) = uVar11;
  fVar14 = local_c4[1] + local_c4[0] + local_c4[2];
  fVar13 = 0.0001;
  if (0.0001 <= fVar14) {
    fVar13 = fVar14;
  }
  lVar12 = 0;
  dVar16 = DAT_14c8464e0;
  dVar17 = DAT_14c8464e8;
  do {
    dVar16 = dVar16 + (double)(local_c4[lVar12] / fVar13) * pdVar10[-1];
    dVar17 = dVar17 + *pdVar10 * (double)(local_c4[lVar12] / fVar13);
    lVar12 = lVar12 + 1;
    pdVar10 = pdVar10 + 3;
  } while (lVar12 != 3);
  dVar18 = (double)(((float)(uVar11 >> 9 | 0x3f800000) + -1.0) * fVar15 + fVar15 * -0.5);
  dVar6 = *(double *)(param_2 + 0x68);
  dVar7 = *(double *)(param_2 + 0x88);
  dVar8 = *(double *)(param_2 + 0xa8);
  dVar9 = *(double *)(param_2 + 200);
  dVar1 = *(double *)(param_2 + 0xd0);
  dVar2 = *(double *)(param_2 + 0xb0);
  dVar3 = *(double *)(param_2 + 0x90);
  dVar4 = *(double *)(param_2 + 0x70);
  *(double *)(param_4 + 0x18) =
       *(double *)(param_4 + 0x18) +
       *(double *)(param_2 + 0xc0) * 0.0 +
       dVar18 * *(double *)(param_2 + 0xa0) +
       dVar17 * *(double *)(param_2 + 0x80) + dVar16 * *(double *)(param_2 + 0x60);
  *(double *)(param_4 + 0x20) =
       dVar9 * 0.0 + dVar18 * dVar8 + dVar17 * dVar7 + dVar16 * dVar6 + *(double *)(param_4 + 0x20);
  *(double *)(param_4 + 0x28) =
       dVar16 * dVar4 + dVar17 * dVar3 + dVar18 * dVar2 + dVar1 * 0.0 + *(double *)(param_4 + 0x28);
  FUN_144afe924(param_4 + 0x18);
  if ((local_70 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c1dea6 FUN_147c1dea6 body=315 status=ok
// SIG undefined FUN_147c1dea6(void)

void FUN_147c1dea6(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0xe0) == 0) || (*(char *)(param_1 + 0xe9) == '\0')) &&
     (*(longlong *)(param_1 + 0xf8) == 0)) {
    FUN_1446f470e(&local_20,L"DistributionStartRadius",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147bf866f(param_1,local_20,0,0);
    *(undefined4 *)(lVar1 + 0x38) = 0x42480000;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0xf8) = lVar1;
  }
  if (((*(int *)(param_1 + 0x110) == 0) || (*(char *)(param_1 + 0x119) == '\0')) &&
     (*(longlong *)(param_1 + 0x128) == 0)) {
    FUN_1446f470e(&local_28,L"DistributionStartHeight",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147bf866f(param_1,local_28,0,0);
    *(undefined4 *)(lVar1 + 0x38) = 0x42480000;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x128) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c1dfe2 FUN_147c1dfe2 body=67 status=ok
// SIG undefined FUN_147c1dfe2(void)

void FUN_147c1dfe2(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_147c05556(param_2,param_1);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_2 + 0x10) + 0x8f0;
  }
  FUN_147c1e026(param_1,param_2,lVar1,param_5);
  return;
}



// FUNCTION 147c1e026 FUN_147c1e026 body=2307 status=ok
// SIG undefined FUN_147c1e026(void)

void FUN_147c1e026(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  uint uVar11;
  double *pdVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auStack_248 [32];
  undefined4 local_228;
  undefined8 local_220;
  double *local_210;
  undefined8 local_208;
  double local_200;
  double local_1f8;
  double *local_1f0;
  double *local_1e8;
  double *local_1e0;
  double *local_1d8;
  double *local_1d0;
  double *local_1c8;
  double *local_1c0;
  double *local_1b8;
  double *local_1b0;
  double *local_1a8;
  double *local_1a0;
  double *local_198;
  double *local_190;
  double local_188;
  double local_180;
  double local_178;
  double *local_170;
  double *local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  longlong local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_168 = &local_100;
  local_190 = &local_e8;
  local_1a0 = &local_f8;
  local_198 = &local_178;
  local_170 = &local_118;
  local_1b0 = &local_130;
  local_1e8 = &local_160;
  if ((char)param_1[0x26] == '\x01') {
    pdVar9 = &local_110;
    local_1d8 = &local_110;
    local_1a8 = &local_200;
    pdVar8 = &local_148;
    local_1e0 = &local_128;
    local_1c8 = &local_158;
    local_1f0 = &local_188;
    local_1b8 = &local_1f8;
    pdVar10 = &local_140;
    local_1d0 = &local_150;
    local_210 = &local_180;
    pdVar12 = &local_108;
    local_1c0 = &local_f0;
  }
  else if ((char)param_1[0x26] == '\0') {
    local_198 = &local_1f8;
    local_170 = &local_140;
    local_1d8 = &local_120;
    local_1b0 = &local_150;
    local_1e8 = &local_180;
    local_1a8 = &local_200;
    pdVar8 = &local_148;
    local_1e0 = &local_128;
    local_1c8 = &local_158;
    local_1f0 = &local_188;
    local_1b8 = &local_178;
    pdVar10 = &local_118;
    local_1d0 = &local_130;
    local_210 = &local_160;
    pdVar9 = &local_108;
    pdVar12 = &local_110;
    local_1c0 = &local_f8;
    local_1a0 = &local_f0;
  }
  else {
    pdVar9 = &local_110;
    local_1d8 = &local_110;
    local_1a8 = &local_1f8;
    pdVar8 = &local_140;
    local_1e0 = &local_120;
    local_1c8 = &local_150;
    local_1f0 = &local_180;
    local_1b8 = &local_200;
    pdVar10 = &local_148;
    local_1d0 = &local_158;
    local_210 = &local_188;
    pdVar12 = &local_100;
    local_1c0 = local_190;
    local_190 = &local_f0;
    local_168 = &local_108;
  }
  local_228 = 0;
  local_220 = param_3;
  local_208 = param_3;
  local_138 = param_4;
  FUN_147a776dc(param_1 + 0xd,&local_f8,*(undefined4 *)(param_2 + 0x1a0),
                *(undefined8 *)(param_2 + 0x10));
  local_178 = 0.0;
  local_1f8 = 0.0;
  local_200 = 0.0;
  fVar14 = (float)FUN_147a77524(param_1 + 0x1a,*(undefined4 *)(param_2 + 0x1a0),
                                *(undefined8 *)(param_2 + 0x10),param_3);
  fVar15 = (float)FUN_147a77524(param_1 + 0x20,*(undefined4 *)(param_2 + 0x1a0),
                                *(undefined8 *)(param_2 + 0x10),local_208);
  dVar24 = (double)fVar14;
  uVar11 = 0;
  do {
    (**(code **)(*param_1 + 0x388))(param_1,param_2,&local_110,local_208);
    dVar22 = *pdVar9;
    *local_170 = dVar22;
    dVar18 = *local_168;
    *pdVar8 = dVar18;
    dVar17 = *pdVar12;
    *pdVar10 = dVar17;
    lVar7 = local_138;
    dVar21 = dVar18 * dVar24;
    dVar23 = dVar22 * dVar24;
    if (dVar23 * dVar23 + dVar21 * dVar21 <= (double)(fVar14 * fVar14)) break;
    bVar13 = uVar11 < 0x32;
    uVar11 = uVar11 + 1;
  } while (bVar13);
  dVar20 = dVar22 * dVar22 + dVar18 * dVar18;
  dVar18 = dVar18 * (1.0 / SQRT(dVar20));
  dVar22 = (1.0 / SQRT(dVar20)) * dVar22;
  dVar2 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar20) & (ulonglong)dVar22);
  dVar1 = dVar18;
  if (dVar20 <= 9.99999993922529e-09) {
    dVar1 = 0.0;
  }
  dVar16 = (double)(fVar15 * 0.5);
  dVar17 = dVar17 * dVar16;
  *local_1d8 = dVar2;
  *local_1e0 = dVar1;
  if (((*(byte *)(param_1 + 6) & 0x40) != 0) && (1e-08 < ABS(ABS(dVar17) - dVar16))) {
    dVar23 = dVar2 * dVar24;
    dVar21 = dVar1 * dVar24;
  }
  dVar22 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar20) & 0x7fffffffffffffff &
                   (ulonglong)dVar22) * dVar24;
  *local_1b0 = dVar22;
  if (9.99999993922529e-09 < dVar20) {
    dVar18 = ABS(dVar18);
  }
  else {
    dVar18 = 0.0;
  }
  dVar18 = dVar18 * dVar24;
  *local_1c8 = dVar18;
  *local_1d0 = dVar16;
  dVar24 = (double)(float)dVar23;
  if (dVar22 <= (double)(float)dVar23) {
    dVar24 = dVar22;
  }
  if (dVar24 <= -dVar22) {
    dVar24 = -dVar22;
  }
  dVar22 = (double)(float)dVar21;
  if (dVar18 <= (double)(float)dVar21) {
    dVar22 = dVar18;
  }
  if (dVar22 <= -dVar18) {
    dVar22 = -dVar18;
  }
  dVar18 = -dVar16;
  fVar14 = (float)dVar17;
  if (fVar14 < fVar15 * 0.5) {
    dVar16 = (double)fVar14;
  }
  if (dVar16 <= dVar18) {
    dVar16 = dVar18;
  }
  dVar18 = *local_1a0;
  dVar24 = dVar24 + dVar18;
  *local_198 = dVar24;
  dVar17 = *local_190;
  dVar22 = dVar22 + dVar17;
  *local_1a8 = dVar22;
  dVar23 = *local_1c0;
  dVar16 = dVar16 + dVar23;
  *local_1b8 = dVar16;
  dVar3 = *(double *)(param_2 + 0x68);
  dVar4 = *(double *)(param_2 + 0x88);
  dVar5 = *(double *)(param_2 + 0xa8);
  dVar6 = *(double *)(param_2 + 200);
  dVar21 = *(double *)(param_2 + 0xd0);
  dVar2 = *(double *)(param_2 + 0xb0);
  dVar1 = *(double *)(param_2 + 0x90);
  dVar20 = *(double *)(param_2 + 0x70);
  *(double *)(lVar7 + 0x18) =
       *(double *)(lVar7 + 0x18) +
       *(double *)(param_2 + 0xc0) * 0.0 +
       local_200 * *(double *)(param_2 + 0xa0) +
       local_1f8 * *(double *)(param_2 + 0x80) + local_178 * *(double *)(param_2 + 0x60);
  *(double *)(lVar7 + 0x20) =
       dVar6 * 0.0 + local_200 * dVar5 + local_1f8 * dVar4 + local_178 * dVar3 +
       *(double *)(lVar7 + 0x20);
  *(double *)(lVar7 + 0x28) =
       local_178 * dVar20 + local_1f8 * dVar1 + local_200 * dVar2 + dVar21 * 0.0 +
       *(double *)(lVar7 + 0x28);
  if ((*(byte *)(param_1 + 6) & 0x80) != 0) {
    *local_1e8 = dVar24 - dVar18;
    *local_1f0 = dVar22 - dVar17;
    if ((*(byte *)(param_1 + 0x19) & 1) == 0) {
      dVar16 = dVar16 - dVar23;
    }
    else {
      dVar16 = 0.0;
    }
    *local_210 = dVar16;
    fVar14 = (float)FUN_147a77524(param_1 + 7,*(undefined4 *)(param_2 + 0x1a0),
                                  *(undefined8 *)(param_2 + 0x10),local_208);
    dVar24 = (double)fVar14;
    local_160 = local_160 * dVar24;
    local_180 = local_180 * dVar24;
    dVar24 = dVar24 * local_188;
    fVar19 = (float)(*(double *)(param_2 + 0xc0) * 0.0 +
                    dVar24 * *(double *)(param_2 + 0xa0) +
                    local_180 * *(double *)(param_2 + 0x80) +
                    local_160 * *(double *)(param_2 + 0x60));
    fVar14 = (float)(local_160 * *(double *)(param_2 + 0x70) +
                     local_180 * *(double *)(param_2 + 0x90) + dVar24 * *(double *)(param_2 + 0xb0)
                    + *(double *)(param_2 + 0xd0) * 0.0);
    fVar15 = (float)(*(double *)(param_2 + 200) * 0.0 +
                    dVar24 * *(double *)(param_2 + 0xa8) +
                    local_180 * *(double *)(param_2 + 0x88) +
                    local_160 * *(double *)(param_2 + 0x68));
    *(float *)(lVar7 + 0x40) = *(float *)(lVar7 + 0x40) + fVar19;
    *(float *)(lVar7 + 0x44) = *(float *)(lVar7 + 0x44) + fVar15;
    *(float *)(lVar7 + 0x48) = *(float *)(lVar7 + 0x48) + fVar14;
    *(float *)(lVar7 + 0x30) = fVar19 + *(float *)(lVar7 + 0x30);
    *(float *)(lVar7 + 0x34) = fVar15 + *(float *)(lVar7 + 0x34);
    *(float *)(lVar7 + 0x38) = fVar14 + *(float *)(lVar7 + 0x38);
  }
  FUN_144afe924(lVar7 + 0x18);
  FUN_144afe7b6(lVar7 + 0x40);
  if ((local_e0 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c1e92c FUN_147c1e92c body=80 status=ok
// SIG undefined FUN_147c1e92c(void)

void FUN_147c1e92c(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x28) & 4) == 0) {
    return;
  }
  uVar1 = FUN_147c05556(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x000147c1e979. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x368))(param_1,param_2,uVar1,param_1 + 0x27);
  return;
}



// FUNCTION 147c1e97c FUN_147c1e97c body=181 status=ok
// SIG undefined FUN_147c1e97c(void)

void FUN_147c1e97c(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0xd8) == 0) || (*(char *)(param_1 + 0xe1) == '\0')) &&
     (*(longlong *)(param_1 + 0xf0) == 0)) {
    FUN_1446f470e(&local_20,L"DistributionStartRadius",1);
    local_30 = 0;
    local_38 = 0;
    lVar1 = FUN_147bf866f(param_1,local_20,0,0);
    *(undefined4 *)(lVar1 + 0x38) = 0x42480000;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0xf0) = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c1ea32 FUN_147c1ea32 body=67 status=ok
// SIG undefined FUN_147c1ea32(void)

void FUN_147c1ea32(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_147c05556(param_2,param_1);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_2 + 0x10) + 0x8f0;
  }
  FUN_147c1ea76(param_1,param_2,lVar1,param_5);
  return;
}



// FUNCTION 147c1ea76 FUN_147c1ea76 body=1158 status=ok
// SIG undefined FUN_147c1ea76(void)

void FUN_147c1ea76(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined8 local_f0;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f8 = 0;
  local_f0 = param_3;
  FUN_147a776dc(param_1 + 0xd,&local_c8,*(undefined4 *)(param_2 + 0x1a0),
                *(undefined8 *)(param_2 + 0x10));
  (**(code **)(*param_1 + 0x388))(param_1,param_2,&local_e0,param_3);
  dVar11 = local_d0 * local_d0 + local_e0 * local_e0 + local_d8 * local_d8;
  dVar5 = local_e0;
  dVar4 = local_d8;
  dVar13 = local_d0;
  if (9.99999993922529e-09 < dVar11) {
    dVar13 = 1.0 / SQRT(dVar11);
    dVar5 = local_e0 * dVar13;
    dVar4 = local_d8 * dVar13;
    dVar13 = local_d0 * dVar13;
    if ((*(byte *)(param_1 + 6) & 0x40) != 0) {
      local_e0 = dVar5;
      local_d8 = dVar4;
      local_d0 = dVar13;
    }
  }
  fVar10 = (float)FUN_147a77524(param_1 + 0x19,*(undefined4 *)(param_2 + 0x1a0),
                                *(undefined8 *)(param_2 + 0x10),param_3);
  dVar14 = (double)fVar10;
  uVar3 = *(uint *)(param_1 + 6);
  dVar11 = 0.0;
  if ((uVar3 & 9) != 0) {
    dVar5 = ABS(dVar5) * dVar14;
    dVar11 = (double)(float)(local_e0 * dVar14);
    if (dVar5 <= (double)(float)(local_e0 * dVar14)) {
      dVar11 = dVar5;
    }
    if (dVar11 <= -dVar5) {
      dVar11 = -dVar5;
    }
  }
  dVar5 = 0.0;
  if ((uVar3 & 0x12) != 0) {
    dVar4 = ABS(dVar4) * dVar14;
    dVar5 = (double)(float)(local_d8 * dVar14);
    if (dVar4 <= (double)(float)(local_d8 * dVar14)) {
      dVar5 = dVar4;
    }
    if (dVar5 <= -dVar4) {
      dVar5 = -dVar4;
    }
  }
  dVar4 = 0.0;
  if ((uVar3 & 0x24) != 0) {
    dVar13 = ABS(dVar13) * dVar14;
    dVar4 = (double)(float)(dVar14 * local_d0);
    if (dVar13 <= (double)(float)(dVar14 * local_d0)) {
      dVar4 = dVar13;
    }
    if (dVar4 <= -dVar13) {
      dVar4 = -dVar13;
    }
  }
  dVar11 = dVar11 + local_c8;
  dVar5 = dVar5 + local_c0;
  dVar4 = dVar4 + local_b8;
  dVar6 = *(double *)(param_2 + 0x68);
  dVar7 = *(double *)(param_2 + 0x88);
  dVar8 = *(double *)(param_2 + 0xa8);
  dVar9 = *(double *)(param_2 + 200);
  dVar13 = *(double *)(param_2 + 0xd0);
  dVar14 = *(double *)(param_2 + 0xb0);
  dVar1 = *(double *)(param_2 + 0x90);
  dVar2 = *(double *)(param_2 + 0x70);
  *(double *)(param_4 + 0x18) =
       *(double *)(param_4 + 0x18) +
       *(double *)(param_2 + 0xc0) * 0.0 +
       dVar4 * *(double *)(param_2 + 0xa0) +
       dVar5 * *(double *)(param_2 + 0x80) + dVar11 * *(double *)(param_2 + 0x60);
  *(double *)(param_4 + 0x20) =
       dVar9 * 0.0 + dVar4 * dVar8 + dVar5 * dVar7 + dVar11 * dVar6 + *(double *)(param_4 + 0x20);
  *(double *)(param_4 + 0x28) =
       dVar2 * dVar11 + dVar1 * dVar5 + dVar14 * dVar4 + dVar13 * 0.0 + *(double *)(param_4 + 0x28);
  if ((*(uint *)(param_1 + 6) & 0x80) != 0) {
    fVar10 = (float)FUN_147a77524(param_1 + 7,*(undefined4 *)(param_2 + 0x1a0),
                                  *(undefined8 *)(param_2 + 0x10),param_3);
    dVar13 = (double)fVar10;
    dVar14 = (dVar4 - local_b8) * dVar13;
    dVar4 = (dVar5 - local_c0) * dVar13;
    dVar13 = (dVar11 - local_c8) * dVar13;
    fVar12 = (float)(*(double *)(param_2 + 0xc0) * 0.0 +
                    dVar14 * *(double *)(param_2 + 0xa0) +
                    dVar4 * *(double *)(param_2 + 0x80) + dVar13 * *(double *)(param_2 + 0x60));
    fVar15 = (float)(dVar13 * *(double *)(param_2 + 0x70) + dVar4 * *(double *)(param_2 + 0x90) +
                     dVar14 * *(double *)(param_2 + 0xb0) + *(double *)(param_2 + 0xd0) * 0.0);
    fVar10 = (float)(*(double *)(param_2 + 200) * 0.0 +
                    dVar14 * *(double *)(param_2 + 0xa8) +
                    dVar4 * *(double *)(param_2 + 0x88) + dVar13 * *(double *)(param_2 + 0x68));
    *(float *)(param_4 + 0x40) = *(float *)(param_4 + 0x40) + fVar12;
    *(float *)(param_4 + 0x44) = *(float *)(param_4 + 0x44) + fVar10;
    *(float *)(param_4 + 0x48) = *(float *)(param_4 + 0x48) + fVar15;
    *(float *)(param_4 + 0x30) = fVar12 + *(float *)(param_4 + 0x30);
    *(float *)(param_4 + 0x34) = fVar10 + *(float *)(param_4 + 0x34);
    *(float *)(param_4 + 0x38) = fVar15 + *(float *)(param_4 + 0x38);
  }
  FUN_144afe924(param_4 + 0x18);
  FUN_144afe7b6(param_4 + 0x40);
  if ((local_b0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c1ef00 FUN_147c1ef00 body=80 status=ok
// SIG undefined FUN_147c1ef00(void)

void FUN_147c1ef00(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x20) & 4) == 0) {
    return;
  }
  uVar1 = FUN_147c05556(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x000147c1ef4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x368))(param_1,param_2,uVar1,param_1 + 0x1f);
  return;
}



// FUNCTION 147c1ef50 FUN_147c1ef50 body=154 status=ok
// SIG undefined FUN_147c1ef50(void)

int FUN_147c1ef50(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_147c1efea(param_1,param_3);
  if ((*(char *)(param_1 + 0x60) == '\0') || (*(char *)(param_1 + 0x78) == '\x01')) {
    iVar3 = *(int *)(param_2 + 0x10);
    iVar4 = 0;
    if (iVar3 + 1 < iVar1) {
      iVar4 = iVar3 + 1;
    }
    *(int *)(param_2 + 0x10) = iVar4;
  }
  else {
    if (*(char *)(param_1 + 0x60) != '\x01') {
      return -1;
    }
    uVar2 = *(int *)(param_4 + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)(param_4 + 4) = uVar2;
    iVar3 = (int)(((float)iVar1 + -0.5) * ((float)(uVar2 >> 9 | 0x3f800000) + -1.0));
    *(int *)(param_2 + 0x10) = iVar3;
  }
  iVar4 = -1;
  if (iVar3 < iVar1) {
    iVar4 = iVar3;
  }
  if (iVar3 == -1) {
    return -1;
  }
  return iVar4;
}



// FUNCTION 147c1efea FUN_147c1efea body=101 status=ok
// SIG undefined FUN_147c1efea(void)

ulonglong FUN_147c1efea(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  cVar1 = *(char *)(param_1 + 0x78);
  uVar5 = 0;
  if (cVar1 == '\x02') {
    if (*(char *)(param_1 + 0x30) != '\x01') {
      uVar4 = FUN_1417c02a0(param_2);
      return uVar4;
    }
    lVar2 = FUN_144a81888(param_2);
    if (lVar2 != 0) {
      uVar3 = FUN_144a81888(param_2);
      uVar4 = FUN_147d1521a(uVar3);
      return uVar4;
    }
  }
  else if (cVar1 == '\x01') {
    uVar5 = *(uint *)(param_1 + 0x74);
  }
  else {
    uVar5 = 0;
    if (cVar1 == '\0') {
      uVar5 = *(uint *)(param_1 + 0x58);
    }
  }
  return (ulonglong)uVar5;
}



// FUNCTION 147c1f050 FUN_147c1f050 body=200 status=ok
// SIG undefined FUN_147c1f050(void)

void FUN_147c1f050(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x78) == '\x01') {
    if (*(char *)(param_1 + 0x30) == '\x01') {
      uVar2 = FUN_144a81888(param_3);
      iVar1 = FUN_147d1521a(uVar2);
    }
    else {
      iVar1 = FUN_1417c02a0(param_3);
    }
    if (0 < *(int *)(param_1 + 0x74)) {
      lVar3 = 0;
      do {
        uVar4 = *(int *)(param_4 + 4) * 0xbb38435 + 0x3619636b;
        *(uint *)(param_4 + 4) = uVar4;
        *(int *)(*(longlong *)(param_2 + 0x40) + lVar3 * 4) =
             (int)(((float)(uVar4 >> 9 | 0x3f800000) + -1.0) * ((float)iVar1 + -0.5));
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(param_1 + 0x74));
    }
    if ((*(uint *)(param_1 + 100) & 5) == 4) {
      FUN_147c1f118(param_1,param_2,param_3,0);
      return;
    }
  }
  return;
}



// FUNCTION 147c1f118 FUN_147c1f118 body=437 status=ok
// SIG undefined FUN_147c1f118(void)

void FUN_147c1f118(undefined8 param_1,longlong param_2,longlong param_3,float param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  undefined1 *local_120;
  undefined1 local_110 [24];
  undefined1 local_f8 [96];
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar6 = FUN_147c1efea(param_1,param_3);
  if (0 < (int)uVar6) {
    fVar12 = (float)(-(uint)(0.0 < param_4) & (uint)(1.0 / param_4));
    lVar7 = 0;
    uVar8 = 0;
    do {
      local_128 = local_f8;
      local_120 = local_110;
      cVar5 = FUN_147c1fc56(param_1,param_2,param_3,uVar8 & 0xffffffff);
      if ((cVar5 == '\0') || ((longlong)*(int *)(param_2 + 0x28) <= (longlong)uVar8)) {
        lVar3 = *(longlong *)(param_2 + 0x30);
        *(undefined4 *)(lVar3 + 8 + lVar7) = DAT_14c846338;
        *(undefined8 *)(lVar3 + lVar7) = DAT_14c846330;
        fVar9 = (float)*(double *)(param_3 + 0x270);
        fVar10 = (float)*(double *)(param_3 + 0x268);
        fVar11 = (float)*(double *)(param_3 + 0x260);
      }
      else {
        fVar9 = (float)local_88;
        fVar10 = (float)local_90;
        fVar11 = (float)local_98;
        lVar3 = *(longlong *)(param_2 + 0x20);
        lVar4 = *(longlong *)(param_2 + 0x30);
        fVar1 = *(float *)(lVar3 + 8 + lVar7);
        fVar2 = *(float *)(lVar3 + 4 + lVar7);
        *(float *)(lVar4 + lVar7) = (fVar11 - *(float *)(lVar3 + lVar7)) * fVar12;
        *(float *)(lVar4 + 4 + lVar7) = (fVar10 - fVar2) * fVar12;
        *(float *)(lVar4 + 8 + lVar7) = (fVar9 - fVar1) * fVar12;
      }
      lVar3 = *(longlong *)(param_2 + 0x20);
      *(float *)(lVar3 + lVar7) = fVar11;
      *(float *)(lVar3 + 4 + lVar7) = fVar10;
      *(float *)(lVar3 + 8 + lVar7) = fVar9;
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0xc;
    } while ((ulonglong)uVar6 * 0xc != lVar7);
  }
  if ((local_70 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c1f2ce FUN_147c1f2ce body=52 status=ok
// SIG undefined FUN_147c1f2ce(void)

void FUN_147c1f2ce(longlong param_1)

{
  FUN_1446e0b6e();
  if (*(int *)(param_1 + 0x58) < 1) {
    if ((*(uint *)(param_1 + 100) & 5) == 4) {
      *(undefined1 *)(param_1 + 0x78) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x78) = 2;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  return;
}



// FUNCTION 147c1f302 FUN_147c1f302 body=945 status=ok
// SIG undefined FUN_147c1f302(void)

void FUN_147c1f302(longlong param_1,longlong *param_2,int param_3,undefined8 param_4,
                  longlong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_118 [32];
  int local_f8;
  undefined4 *local_f0;
  undefined4 *local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar10 = FUN_147bf7da6(param_2,param_1);
  if (lVar10 != 0) {
    lVar11 = FUN_147c05556(param_2,param_1);
    if (lVar11 == 0) {
      lVar11 = param_2[2] + 0x8f0;
    }
    FUN_147c1f6b4(param_1,param_2,lVar10);
    cVar6 = FUN_144729dda(lVar10);
    if (cVar6 != '\0') {
      uVar12 = FUN_14479d2ce(lVar10);
      iVar8 = FUN_147c1ef50(param_1,lVar10,uVar12,lVar11);
      if (iVar8 != -1) {
        local_b8 = DAT_14c8463e0;
        uStack_b0 = DAT_14c8463e8;
        local_c8 = (undefined4)DAT_14c8463d0;
        uStack_c4 = DAT_14c8463d0._4_4_;
        uStack_c0 = (undefined4)DAT_14c8463d8;
        uStack_bc = DAT_14c8463d8._4_4_;
        iVar9 = (**(code **)(*param_2 + 0x150))(param_2);
        if (iVar9 < 1) {
          cVar6 = '\0';
          local_e8 = &local_c8;
        }
        else {
          cVar6 = (**(code **)(*param_2 + 0x158))();
          local_e8 = &local_c8;
          if (cVar6 != '\0') {
            local_e8 = (undefined4 *)0x0;
          }
        }
        local_f0 = &local_a8;
        local_f8 = iVar8;
        cVar7 = FUN_147c1f85c(param_1,lVar10,param_2,uVar12);
        if (cVar7 != '\0') {
          *(int *)(param_5 + param_3) = iVar8;
          *(undefined8 *)(param_5 + 0x28) = local_98;
          *(undefined4 *)(param_5 + 0x18) = local_a8;
          *(undefined4 *)(param_5 + 0x1c) = uStack_a4;
          *(undefined4 *)(param_5 + 0x20) = uStack_a0;
          *(undefined4 *)(param_5 + 0x24) = uStack_9c;
          FUN_144afe924(param_5 + 0x18);
          if ((*(uint *)(param_1 + 100) & 5) == 4) {
            lVar10 = *(longlong *)(lVar10 + 0x30);
            lVar11 = (longlong)iVar8;
            fVar1 = *(float *)(lVar10 + 8 + lVar11 * 0xc);
            fVar2 = *(float *)(lVar10 + 4 + lVar11 * 0xc);
            fVar3 = *(float *)(param_1 + 0x68);
            *(float *)(param_5 + 0x30) =
                 (*(float *)(lVar10 + lVar11 * 0xc) - *(float *)(param_5 + 0x30)) * fVar3 +
                 *(float *)(param_5 + 0x30);
            *(float *)(param_5 + 0x34) =
                 (fVar2 - *(float *)(param_5 + 0x34)) * fVar3 + *(float *)(param_5 + 0x34);
            *(float *)(param_5 + 0x38) =
                 (fVar1 - *(float *)(param_5 + 0x38)) * fVar3 + *(float *)(param_5 + 0x38);
            FUN_144afe7b6(param_5 + 0x30);
          }
          if (cVar6 != '\0') {
            lVar10 = (longlong)iVar9;
            FUN_1449413b4(&local_c8,&local_e0);
            *(float *)(param_5 + 0x18 + lVar10) = (float)local_e0;
            *(float *)(param_5 + 0x1c + lVar10) = (float)local_d8;
            *(float *)(param_5 + 0x20 + lVar10) = (float)local_d0;
            if ((*(byte *)(*(longlong *)(param_2[3] + 0x30) + 0x71) & 1) != 0) {
              lVar11 = param_2[2];
              dVar4 = (double)(float)local_d0;
              dVar13 = (double)(float)local_d8;
              dVar18 = (double)(float)local_e0;
              dVar5 = *(double *)(lVar11 + 0x240);
              dVar19 = -dVar5;
              dVar20 = -*(double *)(lVar11 + 0x248);
              dVar16 = *(double *)(lVar11 + 0x250) * -1.0;
              dVar17 = *(double *)(lVar11 + 600) * 1.0;
              dVar21 = dVar18 * dVar16 - dVar19 * dVar4;
              dVar14 = dVar13 * dVar19 - dVar18 * dVar20;
              dVar15 = dVar4 * dVar20 - dVar13 * dVar16;
              dVar15 = dVar15 + dVar15;
              dVar21 = dVar21 + dVar21;
              dVar14 = dVar14 + dVar14;
              *(float *)(param_5 + 0x18 + lVar10) =
                   (float)((dVar14 * dVar20 - dVar21 * dVar16) + dVar17 * dVar15 + dVar18);
              *(float *)(param_5 + 0x1c + lVar10) =
                   (float)(dVar5 * dVar14 + dVar16 * dVar15 + dVar17 * dVar21 + dVar13);
              *(float *)(param_5 + 0x20 + lVar10) =
                   (float)(dVar17 * dVar14 + dVar4 + (dVar21 * dVar19 - dVar15 * dVar20));
            }
          }
        }
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c1f6b4 FUN_147c1f6b4 body=422 status=ok
// SIG undefined FUN_147c1f6b4(void)

void FUN_147c1f6b4(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 == 0) || (plVar1 = *(longlong **)(param_2 + 0x10), plVar1 == (longlong *)0x0)) {
    *param_3 = 0;
    goto LAB_147c1f7dd;
  }
  local_50 = 0;
  (**(code **)(*plVar1 + 0xb60))(plVar1,*(undefined8 *)(param_1 + 0x6c));
  lVar6 = plVar1[0x24];
  if (lVar6 == 0) {
LAB_147c1f73b:
    lVar6 = 0;
  }
  else {
    lVar3 = FUN_144a74fb4();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_147c1f73b;
  }
  lVar3 = local_50;
  lVar4 = FUN_14479d2ce(param_3 + 1);
  if (lVar6 == 0) {
    bVar7 = false;
  }
  else {
    lVar5 = FUN_14479d2ce(param_3);
    bVar7 = lVar6 != lVar5;
  }
  cVar2 = FUN_144729dda(param_3);
  if (((!bVar7) && (cVar2 != '\0')) && (lVar3 == lVar4)) goto LAB_147c1f7dd;
  *param_3 = 0;
  FUN_14485c47a(param_3 + 1,local_50);
  lVar3 = local_50;
  if (local_50 == 0) {
LAB_147c1f80c:
    lVar3 = 0;
  }
  else {
    lVar5 = FUN_1414199c4();
    lVar4 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar4 + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) {
      if (local_50 == 0) goto LAB_147c1f80c;
      lVar3 = FUN_140849bbe();
    }
    else {
      lVar3 = *(longlong *)(lVar3 + 0x398);
    }
  }
  if (lVar6 != 0) {
    lVar3 = lVar6;
  }
  if (lVar3 != 0) {
    FUN_14485c47a(param_3,lVar3);
    lVar6 = FUN_147c05556(param_2,param_1);
    if (lVar6 == 0) {
      lVar6 = *(longlong *)(param_2 + 0x10) + 0x8f0;
    }
    FUN_147c1f050(param_1,param_3,lVar3,lVar6);
  }
LAB_147c1f7dd:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c1f85c FUN_147c1f85c body=1017 status=ok
// SIG undefined FUN_147c1f85c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_147c1f85c(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined4 param_5,double *param_6,undefined8 *param_7)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  char cVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_288 [32];
  undefined8 *local_268;
  undefined8 *local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 local_218 [12];
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118 [12];
  double local_b8;
  double dStack_b0;
  double local_a8;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    lVar11 = FUN_144a81888(param_4);
    if (lVar11 != 0) {
      local_260 = local_218;
      local_268 = &local_230;
      cVar10 = FUN_147c2040e(param_1,param_2,param_4,param_5);
      if (cVar10 != '\0') {
        local_268 = &local_258;
        local_258 = 0;
        uStack_250 = 0;
        local_248 = 0;
        cVar10 = FUN_147d163e0(local_230,local_118,param_4,local_218);
        if (cVar10 != '\0') {
          *param_6 = local_b8;
          param_6[1] = dStack_b0;
          param_6[2] = local_a8;
          if (param_7 != (undefined8 *)0x0) {
            puVar14 = local_118;
            FUN_144a1c686(puVar14,0x3e45798ee0000000);
            puVar13 = &local_198;
            goto LAB_147c1fa10;
          }
          goto LAB_147c1fa31;
        }
      }
    }
  }
  else {
    local_260 = &local_230;
    local_268 = local_118;
    cVar10 = FUN_147c1fc56(param_1,param_2,param_4,param_5);
    if (cVar10 != '\0') {
      local_198 = 0x3ff0000000000000;
      uStack_190 = 0;
      local_188 = 0;
      uStack_180 = 0;
      uStack_178 = 0;
      local_170 = 0x3ff0000000000000;
      local_168 = 0;
      uStack_160 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_148 = 0x3ff0000000000000;
      local_140 = 0;
      local_138 = local_230;
      uStack_130 = uStack_228;
      local_128 = local_220;
      local_120 = 0x3ff0000000000000;
      FUN_1447fea8d(local_218,&local_198,local_118);
      *param_6 = local_1b8;
      param_6[1] = dStack_1b0;
      param_6[2] = local_1a8;
      if (param_7 != (undefined8 *)0x0) {
        puVar14 = local_218;
        FUN_144a1c686(puVar14,0x3e45798ee0000000);
        puVar13 = &local_258;
LAB_147c1fa10:
        FUN_141706d54(puVar14,puVar13);
        uVar12 = *puVar13;
        uVar7 = puVar13[1];
        uVar9 = puVar13[3];
        param_7[2] = puVar13[2];
        param_7[3] = uVar9;
        *param_7 = uVar12;
        param_7[1] = uVar7;
      }
LAB_147c1fa31:
      uVar12 = CONCAT71((int7)((ulonglong)*(longlong *)(param_3 + 0x18) >> 8),1);
      if ((*(byte *)(*(longlong *)(*(longlong *)(param_3 + 0x18) + 0x30) + 0x71) & 1) != 0) {
        lVar11 = *(longlong *)(param_3 + 0x10);
        dVar19 = *param_6 - *(double *)(lVar11 + 0x260);
        dVar20 = param_6[1] - *(double *)(lVar11 + 0x268);
        dVar15 = param_6[2] - *(double *)(lVar11 + 0x270);
        dVar8 = *(double *)(lVar11 + 0x240);
        auVar2 = *(undefined1 (*) [16])(lVar11 + 0x280);
        dVar3 = -dVar8;
        dVar4 = -*(double *)(lVar11 + 0x248);
        dVar17 = *(double *)(lVar11 + 0x250) * -1.0;
        dVar18 = *(double *)(lVar11 + 600) * 1.0;
        dVar21 = dVar19 * dVar17 - dVar3 * dVar15;
        dVar5 = dVar20 * dVar3 - dVar19 * dVar4;
        dVar6 = dVar15 * dVar4 - dVar20 * dVar17;
        dVar6 = dVar6 + dVar6;
        dVar21 = dVar21 + dVar21;
        dVar5 = dVar5 + dVar5;
        auVar16 = divpd(_DAT_149934d80,auVar2);
        dVar1 = *(double *)(lVar11 + 0x290);
        *param_6 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar16._0_8_)
                   * ((dVar5 * dVar4 - dVar21 * dVar17) + dVar18 * dVar6 + dVar19);
        param_6[1] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar16._8_8_
                             ) * (dVar8 * dVar5 + dVar17 * dVar6 + dVar18 * dVar21 + dVar20);
        param_6[2] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar1)) &
                             (ulonglong)(1.0 / dVar1)) *
                     (dVar18 * dVar5 + dVar15 + (dVar21 * dVar3 - dVar6 * dVar4));
      }
      goto LAB_147c1f8eb;
    }
  }
  uVar12 = 0;
LAB_147c1f8eb:
  if ((local_90 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c1fc56 FUN_147c1fc56 body=361 status=ok
// SIG undefined FUN_147c1fc56(void)

undefined8
FUN_147c1fc56(longlong param_1,longlong param_2,undefined8 param_3,int param_4,longlong *param_5,
             double *param_6)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  double *local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  longlong local_a8 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    local_d8 = local_a8;
    local_a8[0] = 0;
    local_d0 = &local_c8;
    cVar1 = FUN_147c2040e(param_1,param_2,param_3);
    if (cVar1 != '\0') {
      FUN_144909502(param_3,*(undefined8 *)(local_a8[0] + 0x30));
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x78);
    if (cVar1 == '\x02') {
LAB_147c1fcf8:
      local_b8 = *(double *)(param_1 + 0x48);
      local_c8 = *(double *)(param_1 + 0x38);
      dStack_c0 = *(double *)(param_1 + 0x40);
    }
    else {
      if (cVar1 == '\x01') {
        param_4 = *(int *)(*(longlong *)(param_2 + 0x40) + (longlong)param_4 * 4);
        goto LAB_147c1fcf8;
      }
      if (cVar1 != '\0') goto LAB_147c1fd97;
      lVar4 = (longlong)param_4 * 0x20;
      param_4 = FUN_144909502(param_3,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + lVar4));
      lVar3 = *(longlong *)(param_1 + 0x50);
      local_b8 = *(double *)(lVar3 + 0x18 + lVar4) + *(double *)(param_1 + 0x48);
      dStack_c0 = *(double *)(lVar3 + 0x10 + lVar4) + *(double *)(param_1 + 0x40);
      local_c8 = *(double *)(lVar3 + 8 + lVar4) + *(double *)(param_1 + 0x38);
    }
    if (param_4 != -1) {
      FUN_1401ff402(param_3,local_a8,param_4);
      plVar5 = local_a8;
      for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
        *param_5 = *plVar5;
        plVar5 = plVar5 + 1;
        param_5 = param_5 + 1;
      }
      param_6[2] = local_b8;
      *param_6 = local_c8;
      param_6[1] = dStack_c0;
      uVar2 = 1;
      goto LAB_147c1fd99;
    }
  }
LAB_147c1fd97:
  uVar2 = 0;
LAB_147c1fd99:
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c1fdc0 FUN_147c1fdc0 body=1053 status=ok
// SIG undefined FUN_147c1fdc0(void)

void FUN_147c1fdc0(longlong param_1,longlong *param_2,int param_3,undefined8 param_4)

{
  double *pdVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 *local_150;
  undefined4 *local_148;
  undefined4 local_134;
  longlong local_130;
  undefined4 *local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  double local_100;
  double local_f8;
  double local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uVar9 = FUN_147bf7da6(param_2,param_1);
  cVar6 = FUN_144729dda(uVar9);
  if (cVar6 == '\0') goto LAB_147c1fe63;
  uVar10 = FUN_14479d2ce(uVar9);
  uVar7 = *(uint *)(param_1 + 100);
  if ((uVar7 & 5) == 4) {
    FUN_147c1f118(param_1,uVar9,uVar10,param_4);
    uVar7 = *(uint *)(param_1 + 100);
  }
  if (((uVar7 & 1) == 0) || (param_2[0x2d] == 0)) goto LAB_147c1fe63;
  local_d8 = DAT_14c8463e0;
  uStack_d0 = DAT_14c8463e8;
  local_e8 = (undefined4)DAT_14c8463d0;
  uStack_e4 = DAT_14c8463d0._4_4_;
  uStack_e0 = (undefined4)DAT_14c8463d8;
  uStack_dc = DAT_14c8463d8._4_4_;
  iVar8 = (**(code **)(*param_2 + 0x150))(param_2);
  if (iVar8 < 1) {
    local_134 = 0;
    local_128 = &local_e8;
  }
  else {
    local_134 = (**(code **)(*param_2 + 0x158))();
    local_128 = &local_e8;
    if ((char)local_134 != '\0') {
      local_128 = (undefined4 *)0x0;
    }
  }
  local_118 = param_2[2];
  local_108 = uVar10;
  if ((*(byte *)(local_118 + 0x693) & 0x10) == 0) {
    lVar12 = 0x900;
    cVar6 = FUN_144a61b4f();
    if (cVar6 != '\0') goto LAB_147c1ff4f;
  }
  else {
LAB_147c1ff4f:
    lVar12 = 0x240;
  }
  local_120 = lVar12;
  if (0 < (longlong)*(int *)((longlong)param_2 + 0x18c)) {
    lVar12 = param_2[0x2d];
    lVar2 = param_2[0x2e];
    lVar5 = param_2[0x31];
    local_110 = (longlong)param_3;
    uVar11 = (longlong)*(int *)((longlong)param_2 + 0x18c) + 1;
    local_130 = (longlong)iVar8;
    do {
      uVar13 = (ulonglong)((uint)*(ushort *)(lVar2 + -4 + uVar11 * 2) * (int)lVar5);
      if ((*(byte *)(lVar12 + 0x6f + uVar13) & 4) == 0) {
        lVar14 = uVar13 + lVar12;
        local_158 = *(undefined4 *)(lVar14 + local_110);
        local_148 = local_128;
        local_150 = &local_c8;
        cVar6 = FUN_147c1f85c(param_1,uVar9,param_2,local_108);
        if (cVar6 != '\0') {
          *(undefined8 *)(lVar14 + 0x28) = local_b8;
          *(undefined4 *)(lVar14 + 0x18) = local_c8;
          *(undefined4 *)(lVar14 + 0x1c) = uStack_c4;
          *(undefined4 *)(lVar14 + 0x20) = uStack_c0;
          *(undefined4 *)(lVar14 + 0x24) = uStack_bc;
          FUN_144afe924(lVar14 + 0x18);
          if ((char)local_134 != '\0') {
            FUN_1449413b4(&local_e8,&local_100);
            *(float *)(lVar14 + 0x18 + local_130) = (float)local_100;
            *(float *)(lVar14 + 0x1c + local_130) = (float)local_f8;
            *(float *)(lVar14 + 0x20 + local_130) = (float)local_f0;
            if ((*(byte *)(*(longlong *)(param_2[3] + 0x30) + 0x71) & 1) != 0) {
              dVar3 = (double)(float)local_f0;
              dVar15 = (double)(float)local_f8;
              dVar22 = (double)(float)local_100;
              dVar4 = *(double *)(local_118 + local_120);
              dVar20 = -dVar4;
              dVar21 = -((double *)(local_118 + local_120))[1];
              pdVar1 = (double *)(local_118 + 0x10 + local_120);
              dVar18 = *pdVar1 * -1.0;
              dVar19 = pdVar1[1] * 1.0;
              dVar23 = dVar22 * dVar18 - dVar20 * dVar3;
              dVar16 = dVar15 * dVar20 - dVar22 * dVar21;
              dVar17 = dVar3 * dVar21 - dVar15 * dVar18;
              dVar17 = dVar17 + dVar17;
              dVar23 = dVar23 + dVar23;
              dVar16 = dVar16 + dVar16;
              *(float *)(lVar14 + 0x18 + local_130) =
                   (float)((dVar16 * dVar21 - dVar23 * dVar18) + dVar19 * dVar17 + dVar22);
              *(float *)(lVar14 + 0x1c + local_130) =
                   (float)(dVar4 * dVar16 + dVar18 * dVar17 + dVar19 * dVar23 + dVar15);
              *(float *)(lVar14 + 0x20 + local_130) =
                   (float)(dVar19 * dVar16 + dVar3 + (dVar23 * dVar20 - dVar17 * dVar21));
            }
          }
        }
      }
      uVar11 = uVar11 - 1;
    } while (1 < uVar11);
  }
LAB_147c1fe63:
  if ((local_b0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c201de FUN_147c201de body=558 status=ok
// SIG undefined FUN_147c201de(void)

void FUN_147c201de(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  undefined1 *local_f0;
  uint local_e0;
  int local_dc;
  longlong local_d8;
  longlong local_d0;
  undefined1 local_c8 [64];
  double local_88;
  double local_80;
  double local_78;
  undefined1 local_68 [24];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar5 = FUN_147bf7da6(param_2,param_1);
  cVar3 = FUN_144729dda(uVar5);
  if (cVar3 != '\0') {
    lVar6 = FUN_14479d2ce(uVar5);
    lVar9 = param_2[0x2d];
    if (((lVar9 != 0) && (*(char *)(param_1 + 0x30) == '\x01')) &&
       (0 < (longlong)*(int *)((longlong)param_2 + 0x18c))) {
      lVar2 = param_2[0x31];
      lVar1 = param_2[0x2e];
      local_d0 = (longlong)param_3;
      uVar11 = (longlong)*(int *)((longlong)param_2 + 0x18c) + 1;
      local_e0 = 0;
      local_d8 = param_1;
      do {
        uVar10 = (ulonglong)((uint)*(ushort *)(lVar1 + -4 + uVar11 * 2) * (int)lVar2);
        if ((((*(byte *)(lVar9 + 0x6f + uVar10) & 4) == 0) && (lVar6 != 0)) &&
           (lVar7 = FUN_144a81888(lVar6), lVar7 != 0)) {
          lVar7 = uVar10 + lVar9;
          local_f0 = local_68;
          local_f8 = &local_50;
          cVar3 = FUN_147c2040e(local_d8,uVar5,lVar6,*(undefined4 *)(lVar7 + local_d0));
          if ((cVar3 != '\0') &&
             (iVar4 = FUN_144909502(lVar6,*(undefined8 *)(local_50 + 0x30)), iVar4 != -1)) {
            local_dc = iVar4;
            uVar8 = FUN_140c6f8de(lVar6,iVar4);
            if ((char)uVar8 == '\0') {
              uVar8 = FUN_144ae2166(lVar6,local_c8,local_dc);
              if ((local_88 == DAT_14c8464e0) && (!NAN(local_88) && !NAN(DAT_14c8464e0))) {
                if ((local_80 == DAT_14c8464e8) && (!NAN(local_80) && !NAN(DAT_14c8464e8))) {
                  if ((local_78 == DAT_14c8464f0) && (!NAN(local_78) && !NAN(DAT_14c8464f0)))
                  goto LAB_147c20347;
                }
              }
            }
            else {
LAB_147c20347:
              *(undefined4 *)(lVar7 + 0x90) = 0x3f8ccccd;
              local_e0 = (uint)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
            }
          }
        }
        param_1 = local_d8;
        uVar11 = uVar11 - 1;
      } while (1 < uVar11);
      if ((local_e0 & 1) != 0) {
        (**(code **)(*param_2 + 0xe0))(param_2);
      }
    }
    lVar9 = FUN_147c05556(param_2,param_1);
    if (lVar9 == 0) {
      lVar9 = param_2[2] + 0x8f0;
    }
    FUN_147c1f050(param_1,uVar5,lVar6,lVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c2040e FUN_147c2040e body=328 status=ok
// SIG undefined FUN_147c2040e(void)

undefined8
FUN_147c2040e(longlong param_1,longlong param_2,longlong param_3,uint param_4,longlong *param_5,
             double *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  double dVar9;
  longlong lVar10;
  
  if (param_3 == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x30) != '\x01') {
    return 0;
  }
  lVar6 = FUN_144a81888(param_3);
  if (lVar6 == 0) {
    return 0;
  }
  cVar5 = *(char *)(param_1 + 0x78);
  dVar9 = 0.0;
  if (cVar5 == '\x02') {
    uVar8 = FUN_144a81888(param_3);
  }
  else {
    if (cVar5 != '\x01') {
      if (cVar5 == '\0') {
        if ((int)param_4 < 0) {
          return 0;
        }
        if (*(int *)(param_1 + 0x58) <= (int)param_4) {
          return 0;
        }
        plVar7 = (longlong *)FUN_144a81888(param_3);
        lVar10 = (ulonglong)param_4 * 0x20;
        lVar6 = (**(code **)(*plVar7 + 0x3e0))
                          (plVar7,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + lVar10));
        *param_5 = lVar6;
        dVar9 = *(double *)(param_1 + 0x50);
        dVar1 = *(double *)((longlong)dVar9 + 0x18 + lVar10);
        dVar2 = *(double *)(param_1 + 0x48);
        dVar3 = *(double *)((longlong)dVar9 + 0x10 + lVar10);
        dVar4 = *(double *)(param_1 + 0x40);
        *param_6 = *(double *)((longlong)dVar9 + 8 + lVar10) + *(double *)(param_1 + 0x38);
        param_6[1] = dVar3 + dVar4;
        param_6[2] = dVar1 + dVar2;
      }
      goto LAB_147c2054d;
    }
    if ((int)param_4 < 0 || param_2 == 0) {
      return 0;
    }
    if (*(int *)(param_2 + 0x38) <= (int)param_4) {
      return 0;
    }
    uVar8 = FUN_144a81888(param_3);
    param_4 = *(uint *)(*(longlong *)(param_2 + 0x40) + (ulonglong)param_4 * 4);
  }
  lVar6 = FUN_147d15256(uVar8,param_4);
  *param_5 = lVar6;
  dVar9 = *(double *)(param_1 + 0x40);
  *param_6 = *(double *)(param_1 + 0x38);
  param_6[1] = dVar9;
  dVar9 = *(double *)(param_1 + 0x48);
  param_6[2] = dVar9;
LAB_147c2054d:
  return CONCAT71((int7)((ulonglong)dVar9 >> 8),*param_5 != 0);
}



// FUNCTION 147c20604 FUN_147c20604 body=158 status=ok
// SIG undefined FUN_147c20604(void)

void FUN_147c20604(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)(param_2 + 0x6a0);
  lVar3 = (longlong)*(int *)(param_2 + 0x6a8);
  if (0 < lVar3) {
    lVar4 = 0;
    do {
      if (*(longlong *)(*plVar1 + lVar4) == *(longlong *)(param_1 + 0x6c)) {
        return;
      }
      lVar4 = lVar4 + 0xe0;
    } while (lVar3 * 0xe0 - lVar4 != 0);
  }
  uVar2 = *(int *)(param_2 + 0x6a8) + 1;
  *(uint *)(param_2 + 0x6a8) = uVar2;
  if (*(uint *)(param_2 + 0x6ac) < uVar2) {
    FUN_147c0c1bc(plVar1);
  }
  lVar3 = lVar3 * 0xe0;
  memset((void *)(*plVar1 + lVar3),0,0xe0);
  *(undefined8 *)(*plVar1 + lVar3) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined1 *)(*plVar1 + 8 + lVar3) = 6;
  *(undefined8 *)(*plVar1 + 0x50 + lVar3) = 0;
  return;
}



// FUNCTION 147c206a2 FUN_147c206a2 body=162 status=ok
// SIG undefined FUN_147c206a2(void)

void FUN_147c206a2(longlong param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_48 [40];
  int local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446e0b6e();
  fVar2 = *(float *)(param_1 + 0x90);
  fVar1 = 180.0;
  if ((180.0 < fVar2) || (fVar1 = 0.0, fVar2 < 0.0)) {
    fVar2 = fVar1;
    *(float *)(param_1 + 0x90) = fVar2;
  }
  fVar2 = fVar2 / -180.0 + 1.0;
  *(float *)(param_1 + 0x94) = fVar2 + fVar2 + -1.0;
  FUN_144842a8a(param_1,local_20);
  if (local_20[0] < 0x1ab) {
    *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) & 0xfd;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c20746 FUN_147c20746 body=251 status=ok
// SIG undefined FUN_147c20746(void)

undefined8
FUN_147c20746(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4,
             undefined4 param_5,undefined8 param_6)

{
  longlong *plVar1;
  undefined8 uVar2;
  ushort *puVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)(**(code **)(*param_4 + 0xa90))(param_4);
  if (plVar1 != (longlong *)0x0) {
    lVar4 = *(longlong *)(*plVar1 + (longlong)*(int *)(param_3 + 0x48) * 8);
    uVar2 = FUN_147bf7da6(param_2,param_1);
    FUN_147d18614(lVar4,param_5,&local_44);
    puVar3 = (ushort *)((longlong)local_44 * 0xf8 + *(longlong *)(lVar4 + 0x10));
    if ((longlong)*(int *)(param_1 + 0xa0) < 1) {
LAB_147c2081b:
      local_50 = param_6;
      local_58 = uVar2;
      uVar2 = FUN_147c216c8(*(undefined4 *)(param_3 + 0x48),puVar3,local_48,param_4);
      goto LAB_147c20782;
    }
    lVar4 = 0;
    do {
      if (*(uint *)(*(longlong *)(param_1 + 0x98) + lVar4 * 4) == (uint)*puVar3) goto LAB_147c2081b;
      lVar4 = lVar4 + 1;
    } while (*(int *)(param_1 + 0xa0) != lVar4);
  }
  uVar2 = 0;
LAB_147c20782:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 147c20842 FUN_147c20842 body=3052 status=ok
// SIG undefined FUN_147c20842(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_147c20842(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,uint param_5,
             undefined1 (*param_6) [16],double *param_7,char param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar20;
  undefined1 auVar19 [16];
  double dVar21;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar22 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined1 local_1c8 [16];
  longlong local_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  undefined8 local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  plVar5 = (longlong *)(**(code **)(*param_4 + 0xa90))(param_4);
  if (plVar5 != (longlong *)0x0) {
    lVar7 = *(longlong *)(*plVar5 + (longlong)*(int *)(param_3 + 0x48) * 8);
    uVar6 = FUN_1417c143e(param_4,(longlong)*(int *)(param_3 + 0x48),0);
    if (*(char *)(param_1 + 0x30) == '\x01') {
      iVar1 = (**(code **)(**(longlong **)(lVar7 + 0x28) + 0x50))();
      if ((int)(param_5 + 2) < iVar1) {
        local_1b0 = param_2;
        uVar2 = (**(code **)(**(longlong **)(lVar7 + 0x28) + 0x60))
                          (*(longlong **)(lVar7 + 0x28),param_5);
        uVar3 = (**(code **)(**(longlong **)(lVar7 + 0x28) + 0x60))
                          (*(longlong **)(lVar7 + 0x28),param_5 + 1);
        uVar4 = (**(code **)(**(longlong **)(lVar7 + 0x28) + 0x60))
                          (*(longlong **)(lVar7 + 0x28),param_5 + 2);
        local_1c8._0_4_ = uVar4;
        local_1d8 = uVar6;
        FUN_147d1ac00(&local_178,param_4,uVar2,lVar7);
        dVar14 = (double)(float)local_178 * (double)param_4[0x50];
        dVar28 = (double)local_178._4_4_ * (double)param_4[0x51];
        dVar10 = (double)local_170._0_4_ * (double)param_4[0x52];
        dVar24 = (double)param_4[0x48];
        dVar26 = (double)param_4[0x49];
        dVar15 = (double)param_4[0x4a];
        dVar27 = (double)param_4[0x4b];
        dVar16 = dVar28 * dVar24 - dVar14 * dVar26;
        dVar13 = dVar10 * dVar26 - dVar28 * dVar15;
        dVar21 = dVar14 * dVar15 - dVar24 * dVar10;
        dVar13 = dVar13 + dVar13;
        dVar21 = dVar21 + dVar21;
        dVar16 = dVar16 + dVar16;
        dVar29 = (dVar16 * dVar26 - dVar21 * dVar15) + dVar27 * dVar13 + dVar14 +
                 (double)param_4[0x4c];
        dVar30 = (dVar15 * dVar13 - dVar16 * dVar24) + (double)param_4[0x4b] * dVar21 + dVar28 +
                 (double)param_4[0x4d];
        dVar24 = dVar27 * dVar16 + dVar10 + (dVar21 * dVar24 - dVar13 * dVar26) +
                 (double)param_4[0x4e];
        local_1d8 = uVar6;
        FUN_147d1ac00(&local_178,param_4,uVar3,lVar7);
        dVar15 = (double)(float)local_178 * (double)param_4[0x50];
        dVar17 = (double)local_178._4_4_ * (double)param_4[0x51];
        dVar18 = (double)local_170._0_4_ * (double)param_4[0x52];
        dVar20 = (double)param_4[0x53] * 0.0;
        dVar21 = (double)param_4[0x48];
        dVar23 = (double)param_4[0x49];
        dVar10 = (double)param_4[0x4a];
        dVar16 = (double)param_4[0x4b];
        dVar27 = (double)param_4[0x4b];
        dVar13 = dVar17 * dVar21 - dVar15 * dVar23;
        dVar25 = dVar18 * dVar23 - dVar17 * dVar10;
        dVar26 = dVar15 * dVar10 - dVar21 * dVar18;
        dVar14 = dVar20 * (double)param_4[0x4b] - (double)param_4[0x4b] * dVar20;
        dVar25 = dVar25 + dVar25;
        dVar26 = dVar26 + dVar26;
        dVar13 = dVar13 + dVar13;
        dVar28 = dVar13 * dVar23 - dVar26 * dVar10;
        dVar15 = dVar28 + dVar16 * dVar25 + dVar15 + (double)param_4[0x4c];
        dVar10 = (dVar10 * dVar25 - dVar13 * dVar21) + dVar27 * dVar26 + dVar17 +
                 (double)param_4[0x4d];
        dVar13 = dVar16 * dVar13 + dVar18 + (dVar26 * dVar21 - dVar25 * dVar23) +
                 (double)param_4[0x4e];
        dVar28 = dVar27 * (dVar14 + dVar14) + dVar20 + dVar28 + (double)param_4[0x4f];
        local_1d8 = uVar6;
        FUN_147d1ac00(&local_178,param_4,local_1c8._0_4_,lVar7);
        param_2 = local_1b0;
        dVar26 = (double)(float)local_178 * (double)param_4[0x50];
        dVar18 = (double)local_178._4_4_ * (double)param_4[0x51];
        dVar25 = (double)local_170._0_4_ * (double)param_4[0x52];
        dVar21 = (double)param_4[0x48];
        dVar23 = (double)param_4[0x49];
        dVar17 = (double)param_4[0x4a];
        dVar27 = (double)param_4[0x4b];
        dVar14 = dVar18 * dVar21 - dVar26 * dVar23;
        dVar20 = dVar25 * dVar23 - dVar18 * dVar17;
        dVar16 = dVar26 * dVar17 - dVar21 * dVar25;
        dVar20 = dVar20 + dVar20;
        dVar16 = dVar16 + dVar16;
        dVar14 = dVar14 + dVar14;
        dVar26 = (dVar14 * dVar23 - dVar16 * dVar17) + dVar27 * dVar20 + dVar26 +
                 (double)param_4[0x4c];
        local_1a8 = (dVar17 * dVar20 - dVar14 * dVar21) + (double)param_4[0x4b] * dVar16 + dVar18 +
                    (double)param_4[0x4d];
        dVar27 = dVar27 * dVar14 + dVar25 + (dVar16 * dVar21 - dVar20 * dVar23) +
                 (double)param_4[0x4e];
        dVar16 = dVar27 - dVar24;
        dVar21 = local_1a8 - dVar30;
        dVar14 = dVar26 - dVar29;
        dVar23 = dVar16 * dVar16 + dVar14 * dVar14 + dVar21 * dVar21;
        if (9.99999993922529e-09 < dVar23) {
          dVar23 = 1.0 / SQRT(dVar23);
          dVar14 = dVar14 * dVar23;
          dVar21 = dVar21 * dVar23;
          dVar16 = dVar16 * dVar23;
        }
        local_1c8._8_4_ = SUB84(dVar28,0);
        local_1c8._0_8_ = dVar13;
        local_1c8._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
        dVar17 = dVar13 - dVar24;
        dVar18 = dVar10 - dVar30;
        dVar28 = dVar15 - dVar29;
        dVar23 = dVar17 * dVar17 + dVar28 * dVar28 + dVar18 * dVar18;
        if (9.99999993922529e-09 < dVar23) {
          dVar23 = 1.0 / SQRT(dVar23);
          dVar28 = dVar28 * dVar23;
          dVar18 = dVar18 * dVar23;
          dVar17 = dVar17 * dVar23;
        }
        dVar23 = dVar14 * dVar18 - dVar28 * dVar21;
        dVar14 = dVar16 * dVar28 - dVar17 * dVar14;
        dVar21 = dVar21 * dVar17 - dVar18 * dVar16;
        dVar16 = dVar23 * dVar23 + dVar21 * dVar21 + dVar14 * dVar14;
        if (9.99999993922529e-09 < dVar16) {
          dVar16 = 1.0 / SQRT(dVar16);
          dVar21 = dVar21 * dVar16;
          dVar14 = dVar14 * dVar16;
          dVar23 = dVar23 * dVar16;
        }
        dStack_1a0 = local_1a8;
        if ((param_8 != '\x01' || (*(byte *)(param_1 + 0x70) & 1) == 0) ||
           (*(float *)(param_1 + 0x94) + *(float *)(param_1 + 0x94) + -1.0 <=
            (float)(*(double *)(param_1 + 0x88) * dVar23 +
                   *(double *)(param_1 + 0x78) * dVar21 + *(double *)(param_1 + 0x80) * dVar14))) {
          *(double *)*param_6 = (dVar29 + dVar15 + dVar26) * 0.3333333333333333;
          *(double *)(*param_6 + 8) = (dVar10 + dVar30 + local_1a8) * 0.3333333333333333;
          *(double *)param_6[1] = (dVar24 + dVar13 + dVar27) * 0.3333333333333333;
          dVar27 = DAT_14c8463e8;
          if ((*(byte *)(param_1 + 0x50) & 2) == 0) {
            param_7[2] = DAT_14c8463e0;
            param_7[3] = dVar27;
            dVar27 = DAT_14c8463d8;
            *param_7 = DAT_14c8463d0;
            param_7[1] = dVar27;
          }
          else {
            local_148 = dVar21 * dVar18 - dVar28 * dVar14;
            local_150 = dVar23 * dVar28 - dVar17 * dVar21;
            local_158 = dVar14 * dVar17 - dVar18 * dVar23;
            dVar27 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
            if (9.99999993922529e-09 < dVar27) {
              dVar27 = 1.0 / SQRT(dVar27);
              local_158 = local_158 * dVar27;
              local_150 = local_150 * dVar27;
              local_148 = local_148 * dVar27;
            }
            puVar8 = &DAT_14c846400;
            puVar9 = &local_178;
            for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar9 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar9 = puVar9 + 1;
            }
            local_178 = dVar28;
            local_170 = dVar18;
            local_168 = dVar17;
            local_138 = dVar21;
            local_130 = dVar14;
            local_128 = dVar23;
            FUN_14481fd10(&local_198);
            *param_7 = local_198;
            param_7[1] = dStack_190;
            param_7[2] = local_188;
            param_7[3] = dStack_180;
            dVar27 = *param_7;
            dVar16 = param_7[1];
            dVar24 = param_7[2];
            dVar26 = param_7[3];
            dVar15 = dVar24 * dVar24 + dVar27 * dVar27;
            dVar14 = dVar26 * dVar26 + dVar16 * dVar16;
            auVar11._0_8_ = dVar15 + dVar14;
            auVar11._8_8_ = dVar15 + dVar14;
            auVar12._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar11._8_8_);
            auVar12._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar11._0_8_);
            auVar19 = sqrtpd(auVar11,auVar11);
            auVar19 = divpd(_DAT_149934d80,auVar19);
            auVar22._0_8_ = auVar19._0_8_ * dVar24;
            auVar22._8_8_ = auVar19._8_8_ * dVar26;
            *param_7 = (double)((ulonglong)(dVar27 * auVar19._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar11._0_8_));
            param_7[1] = (double)((ulonglong)(dVar16 * auVar19._8_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar11._8_8_));
            auVar12 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar22,auVar12);
            *(undefined1 (*) [16])(param_7 + 2) = auVar12;
          }
          goto LAB_147c20a6f;
        }
      }
LAB_147c212c1:
      uVar6 = 0;
      goto LAB_147c20c15;
    }
    if (*(char *)(param_1 + 0x30) == '\0') {
      if (*(uint *)(lVar7 + 0xec) <= param_5) goto LAB_147c212c1;
      local_1d8 = uVar6;
      FUN_147d1ac00(&local_178,param_4,param_5,lVar7);
      dVar13 = (double)(float)local_178 * (double)param_4[0x50];
      dVar16 = (double)local_178._4_4_ * (double)param_4[0x51];
      dVar10 = (double)local_170._0_4_ * (double)param_4[0x52];
      dVar15 = (double)param_4[0x48];
      dVar14 = (double)param_4[0x49];
      dVar28 = (double)param_4[0x4a];
      dVar27 = (double)param_4[0x4b];
      dVar21 = dVar16 * dVar15 - dVar13 * dVar14;
      dVar23 = dVar10 * dVar14 - dVar16 * dVar28;
      dVar24 = dVar13 * dVar28 - dVar15 * dVar10;
      dVar23 = dVar23 + dVar23;
      dVar24 = dVar24 + dVar24;
      dVar21 = dVar21 + dVar21;
      dVar26 = (dVar28 * dVar23 - dVar15 * dVar21) + (double)param_4[0x4b] * dVar24 + dVar16 +
               (double)param_4[0x4d];
      dVar16 = (double)param_4[0x4e];
      auVar19._8_4_ = SUB84(dVar26,0);
      auVar19._0_8_ =
           (dVar21 * dVar14 - dVar24 * dVar28) + dVar27 * dVar23 + dVar13 + (double)param_4[0x4c];
      auVar19._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
      *param_6 = auVar19;
      *(double *)param_6[1] =
           dVar21 * dVar27 + dVar10 + (dVar24 * dVar15 - dVar23 * dVar14) + dVar16;
      dVar27 = DAT_14c8463e8;
      param_7[2] = DAT_14c8463e0;
      param_7[3] = dVar27;
      dVar27 = DAT_14c8463d8;
      *param_7 = DAT_14c8463d0;
      param_7[1] = dVar27;
    }
  }
LAB_147c20a6f:
  lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x30);
  if ((*(byte *)(lVar7 + 0x71) & 1) == 0) {
    dVar27 = *(double *)*param_6;
    dVar16 = *(double *)(*param_6 + 8);
    dVar24 = *(double *)param_6[1];
  }
  else {
    lVar7 = *(longlong *)(param_2 + 0x10);
    dVar27 = *(double *)*param_6 - *(double *)(lVar7 + 0x260);
    dVar21 = *(double *)(*param_6 + 8) - *(double *)(lVar7 + 0x268);
    dVar10 = *(double *)param_6[1] - *(double *)(lVar7 + 0x270);
    auVar12 = *(undefined1 (*) [16])(lVar7 + 0x280);
    dVar26 = -*(double *)(lVar7 + 0x240);
    dVar15 = -*(double *)(lVar7 + 0x248);
    dVar16 = *(double *)(lVar7 + 0x250) * -1.0;
    dVar13 = *(double *)(lVar7 + 600) * 1.0;
    dVar28 = dVar27 * dVar16 - dVar26 * dVar10;
    dVar24 = dVar21 * dVar26 - dVar27 * dVar15;
    dVar14 = dVar10 * dVar15 - dVar21 * dVar16;
    dVar14 = dVar14 + dVar14;
    dVar28 = dVar28 + dVar28;
    dVar24 = dVar24 + dVar24;
    auVar11 = divpd(_DAT_149934d80,auVar12);
    dVar27 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar12._0_8_)) & auVar11._0_8_) *
             ((dVar24 * dVar15 - dVar28 * dVar16) + dVar13 * dVar14 + dVar27);
    dVar16 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar12._8_8_)) & auVar11._8_8_) *
             (*(double *)(lVar7 + 0x240) * dVar24 + dVar16 * dVar14 + dVar13 * dVar28 + dVar21);
    dVar24 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(lVar7 + 0x290))) &
                     (ulonglong)(1.0 / *(double *)(lVar7 + 0x290))) *
             (dVar13 * dVar24 + dVar10 + (dVar28 * dVar26 - dVar14 * dVar15));
    *(double *)*param_6 = dVar27;
    *(double *)(*param_6 + 8) = dVar16;
    *(double *)param_6[1] = dVar24;
  }
  *(double *)*param_6 = dVar27 + *(double *)(param_1 + 0x38);
  *(double *)(*param_6 + 8) = dVar16 + *(double *)(param_1 + 0x40);
  *(double *)param_6[1] = dVar24 + *(double *)(param_1 + 0x48);
  uVar6 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
LAB_147c20c15:
  if ((local_f0 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c21430 FUN_147c21430 body=256 status=ok
// SIG undefined FUN_147c21430(void)

void FUN_147c21430(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [96];
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar4 = FUN_147bf7da6(param_2,param_1);
  cVar2 = FUN_144729dda(lVar4);
  if ((cVar2 != '\0') && (*(int *)(lVar4 + 0x48) != -1)) {
    uVar5 = FUN_14479d2ce(lVar4);
    if ((*(byte *)(param_1 + 0x50) & 4) != 0) {
      iVar3 = *(int *)(lVar4 + 0x14);
      if (0 < iVar3) {
        lVar6 = 2;
        lVar7 = 0;
        do {
          if (*(int *)(*(longlong *)(lVar4 + 0x20) + lVar7 * 4) != -1) {
            FUN_1401ff402(uVar5,local_b8);
            lVar1 = *(longlong *)(lVar4 + 0x30);
            *(float *)(lVar1 + -8 + lVar6 * 4) = (float)local_58;
            *(float *)(lVar1 + -4 + lVar6 * 4) = (float)local_50;
            *(float *)(lVar1 + lVar6 * 4) = (float)local_48;
            iVar3 = *(int *)(lVar4 + 0x14);
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 3;
        } while (lVar7 < iVar3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c21574 FUN_147c21574 body=168 status=ok
// SIG undefined FUN_147c21574(void)

void FUN_147c21574(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar2 = FUN_147bf7da6(param_2,param_1);
  lVar3 = FUN_14479d2ce(lVar2);
  if (lVar3 != 0) {
    if (*(int *)(param_1 + 0x68) < 1) {
      iVar8 = 0;
    }
    else {
      lVar9 = 0;
      lVar10 = 0;
      iVar8 = 0;
      do {
        plVar4 = (longlong *)FUN_144a81888(lVar3);
        uVar5 = (**(code **)(*plVar4 + 0x310))(plVar4);
        iVar1 = FUN_144a750a0(uVar5,*(longlong *)(param_1 + 0x60) + lVar9);
        iVar6 = *(int *)(param_1 + 0x68);
        if (iVar8 < iVar6 && iVar1 != -1) {
          lVar7 = (longlong)iVar8;
          iVar8 = iVar8 + 1;
          *(int *)(*(longlong *)(lVar2 + 0x20) + lVar7 * 4) = iVar1;
          iVar6 = *(int *)(param_1 + 0x68);
        }
        lVar10 = lVar10 + 1;
        lVar9 = lVar9 + 8;
      } while (lVar10 < iVar6);
    }
    *(int *)(lVar2 + 0x14) = iVar8;
  }
  return;
}



// FUNCTION 147c2162a FUN_147c2162a body=158 status=ok
// SIG undefined FUN_147c2162a(void)

void FUN_147c2162a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)(param_2 + 0x6a0);
  lVar3 = (longlong)*(int *)(param_2 + 0x6a8);
  if (0 < lVar3) {
    lVar4 = 0;
    do {
      if (*(longlong *)(*plVar1 + lVar4) == *(longlong *)(param_1 + 0x58)) {
        return;
      }
      lVar4 = lVar4 + 0xe0;
    } while (lVar3 * 0xe0 - lVar4 != 0);
  }
  uVar2 = *(int *)(param_2 + 0x6a8) + 1;
  *(uint *)(param_2 + 0x6a8) = uVar2;
  if (*(uint *)(param_2 + 0x6ac) < uVar2) {
    FUN_147c0c1bc(plVar1);
  }
  lVar3 = lVar3 * 0xe0;
  memset((void *)(*plVar1 + lVar3),0,0xe0);
  *(undefined8 *)(*plVar1 + lVar3) = *(undefined8 *)(param_1 + 0x58);
  *(undefined1 *)(*plVar1 + 8 + lVar3) = 6;
  *(undefined8 *)(*plVar1 + 0x50 + lVar3) = 0;
  return;
}



// FUNCTION 147c216c8 FUN_147c216c8 body=267 status=ok
// SIG undefined FUN_147c216c8(void)

undefined8
FUN_147c216c8(undefined4 param_1,longlong param_2,int param_3,longlong *param_4,longlong param_5,
             uint *param_6)

{
  longlong lVar1;
  ushort uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  
  plVar6 = (longlong *)(**(code **)(*param_4 + 0xa78))(param_4,0);
  lVar7 = FUN_1417c143e(param_4,param_1,0);
  if ((lVar7 != 0) && (uVar10 = 0, 0 < *(int *)(param_2 + 0x4c))) {
    do {
      iVar5 = FUN_147ccebe4(lVar7,*(int *)(param_2 + 0x10) + param_3,uVar10);
      uVar2 = *(ushort *)(*(longlong *)(param_2 + 0x38) + (longlong)iVar5 * 2);
      uVar9 = (uint)uVar2;
      cVar4 = FUN_144729dda(param_4 + 0xcd);
      if (cVar4 != '\0') {
        uVar9 = *(uint *)(*plVar6 + (ulonglong)uVar2 * 4);
      }
      if (*(int *)(param_5 + 0x14) == 0) {
LAB_147c217be:
        uVar11 = CONCAT71((int7)(uVar10 >> 8),1);
        if (param_6 != (uint *)0x0) {
          *param_6 = uVar9;
          return uVar11;
        }
        return uVar11;
      }
      if (0 < (longlong)*(int *)(param_5 + 0x18)) {
        lVar3 = *(longlong *)(param_5 + 0x20);
        uVar8 = 0;
        do {
          if (*(uint *)(lVar3 + uVar8) == uVar9) {
            if ((~uVar8 & 0x3fffffffc) != 0) goto LAB_147c217be;
            break;
          }
          lVar1 = lVar3 + uVar8;
          uVar8 = uVar8 + 4;
        } while (lVar1 + 4U < (ulonglong)(lVar3 + (longlong)*(int *)(param_5 + 0x18) * 4));
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
    } while ((int)uVar9 < *(int *)(param_2 + 0x4c));
  }
  return 0;
}



// FUNCTION 147c217da FUN_147c217da body=536 status=ok
// SIG undefined FUN_147c217da(void)

void FUN_147c217da(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(int *)(param_1 + 0x50) == 0) || (*(char *)(param_1 + 0x59) == '\0')) &&
     (*(longlong *)(param_1 + 0x98) == 0)) {
    FUN_1446f470e(&local_28,L"DistributionOffsetAmount",1);
    local_40 = 0;
    local_48 = 0;
    lVar1 = FUN_147c120bf(param_1,local_28,0,0);
    *(undefined8 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x50) = 0;
    *(undefined8 *)(lVar1 + 0x58) = 0;
    *(undefined8 *)(lVar1 + 0x60) = 0;
    *(undefined8 *)(lVar1 + 0x40) = 0x4049000000000000;
    *(undefined8 *)(lVar1 + 0x48) = 0;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x98) = lVar1;
  }
  if (((*(int *)(param_1 + 0xb8) == 0) || (*(char *)(param_1 + 0xc1) == '\0')) &&
     (*(longlong *)(param_1 + 0x100) == 0)) {
    FUN_1446f470e(&local_30,L"DistributionRotationAmount",1);
    local_40 = 0;
    local_48 = 0;
    lVar1 = FUN_147c120bf(param_1,local_30,0,0);
    *(undefined8 *)(lVar1 + 0x50) = 0;
    *(undefined8 *)(lVar1 + 0x58) = 0;
    *(undefined8 *)(lVar1 + 0x60) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0x3ff0000000000000;
    *(undefined8 *)(lVar1 + 0x40) = 0x3ff0000000000000;
    *(undefined8 *)(lVar1 + 0x48) = 0x3ff0000000000000;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x100) = lVar1;
  }
  if (((*(int *)(param_1 + 0x120) == 0) || (*(char *)(param_1 + 0x129) == '\0')) &&
     (*(longlong *)(param_1 + 0x168) == 0)) {
    FUN_1446f470e(&local_38,L"DistributionRotationRateAmount",1);
    local_40 = 0;
    local_48 = 0;
    lVar1 = FUN_147c120bf(param_1,local_38,0,0);
    *(undefined8 *)(lVar1 + 0x50) = 0;
    *(undefined8 *)(lVar1 + 0x58) = 0;
    *(undefined8 *)(lVar1 + 0x60) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0x3ff0000000000000;
    *(undefined8 *)(lVar1 + 0x40) = 0x3ff0000000000000;
    *(undefined8 *)(lVar1 + 0x48) = 0x3ff0000000000000;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x168) = lVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c219f4 FUN_147c219f4 body=213 status=ok
// SIG undefined FUN_147c219f4(void)

void FUN_147c219f4(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x38);
  if (cVar1 == '\x02') {
    FUN_147a77d9c(param_2 + 0x28,*(undefined8 *)(param_1 + 0x98));
    FUN_147a77d9c(param_2 + 0x48,*(undefined8 *)(param_1 + 0x100));
    FUN_147a77d9c(param_2 + 0x68,*(undefined8 *)(param_1 + 0x168));
    return;
  }
  if (cVar1 != '\x01') {
    if (cVar1 == '\0') {
      FUN_147a78280(param_2 + 0x28,*(undefined8 *)(param_1 + 0x98));
      FUN_147a78280(param_2 + 0x48,*(undefined8 *)(param_1 + 0x100));
      FUN_147a78280(param_2 + 0x68,*(undefined8 *)(param_1 + 0x168));
      return;
    }
    return;
  }
  FUN_147a781e0(param_2 + 0x28,*(undefined8 *)(param_1 + 0x98));
  FUN_147a781e0(param_2 + 0x48,*(undefined8 *)(param_1 + 0x100));
  FUN_147a781e0(param_2 + 0x68,*(undefined8 *)(param_1 + 0x168));
  return;
}



// FUNCTION 147c21aca FUN_147c21aca body=639 status=ok
// SIG undefined FUN_147c21aca(void)

void FUN_147c21aca(longlong param_1,longlong param_2,uint param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  pfVar3 = (float *)((ulonglong)param_3 + param_5);
  if ((*(uint *)(param_1 + 0xa0) & 1) != 0) {
    if ((*(uint *)(param_1 + 0xa0) & 4) == 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x10);
      uVar1 = *(undefined4 *)(param_5 + 0x90);
    }
    else {
      uVar2 = *(undefined8 *)(param_2 + 0x10);
      uVar1 = *(undefined4 *)(param_2 + 0x1a0);
    }
    local_50 = 0;
    local_58 = 0;
    FUN_147a776dc(param_1 + 0x40,&local_48,uVar1,uVar2);
    *pfVar3 = *pfVar3 + (float)local_48;
    pfVar3[1] = pfVar3[1] + (float)local_40;
    pfVar3[2] = pfVar3[2] + (float)local_38;
    *(undefined8 *)(pfVar3 + 0xf) = *(undefined8 *)(pfVar3 + 3);
    pfVar3[0x11] = pfVar3[5];
    pfVar3[3] = (float)local_48 + pfVar3[3];
    pfVar3[4] = (float)local_40 + pfVar3[4];
    pfVar3[5] = (float)local_38 + pfVar3[5];
  }
  if ((*(uint *)(param_1 + 0x108) & 1) != 0) {
    if ((*(uint *)(param_1 + 0x108) & 4) == 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x10);
      uVar1 = *(undefined4 *)(param_5 + 0x90);
    }
    else {
      uVar2 = *(undefined8 *)(param_2 + 0x10);
      uVar1 = *(undefined4 *)(param_2 + 0x1a0);
    }
    local_50 = 0;
    local_58 = 0;
    FUN_147a776dc(param_1 + 0xa8,&local_48,uVar1,uVar2);
    pfVar3[6] = (float)local_48 + pfVar3[6];
    pfVar3[7] = (float)local_40 + pfVar3[7];
    pfVar3[8] = (float)local_38 + pfVar3[8];
  }
  if ((*(uint *)(param_1 + 0x170) & 1) != 0) {
    if ((*(uint *)(param_1 + 0x170) & 4) == 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x10);
      uVar1 = *(undefined4 *)(param_5 + 0x90);
    }
    else {
      uVar2 = *(undefined8 *)(param_2 + 0x10);
      uVar1 = *(undefined4 *)(param_2 + 0x1a0);
    }
    local_50 = 0;
    local_58 = 0;
    FUN_147a776dc(param_1 + 0x110,&local_48,uVar1,uVar2);
    pfVar3[9] = pfVar3[9] + (float)local_48;
    pfVar3[10] = pfVar3[10] + (float)local_40;
    pfVar3[0xb] = pfVar3[0xb] + (float)local_38;
    pfVar3[0xc] = (float)local_48 + pfVar3[0xc];
    pfVar3[0xd] = (float)local_40 + pfVar3[0xd];
    pfVar3[0xe] = (float)local_38 + pfVar3[0xe];
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c21d4a FUN_147c21d4a body=706 status=ok
// SIG undefined FUN_147c21d4a(void)

void FUN_147c21d4a(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_90;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_80 = param_2;
  if (0 < (longlong)*(int *)(param_2 + 0x18c)) {
    lVar4 = *(longlong *)(param_2 + 0x168);
    lVar5 = *(longlong *)(param_2 + 0x170);
    iVar3 = *(int *)(param_2 + 0x188);
    uVar9 = (longlong)*(int *)(param_2 + 0x18c) + 1;
    local_68 = param_1 + 0x110;
    local_70 = param_1 + 0xa8;
    local_78 = param_1 + 0x40;
    do {
      uVar6 = (ulonglong)((uint)*(ushort *)(lVar5 + -4 + uVar9 * 2) * iVar3);
      if ((*(byte *)(lVar4 + 0x6f + uVar6) & 4) == 0) {
        lVar7 = uVar6 + lVar4;
        lVar1 = lVar7 + (ulonglong)param_3;
        if ((*(uint *)(param_1 + 0xa0) & 2) != 0) {
          if ((*(uint *)(param_1 + 0xa0) & 4) == 0) {
            uVar8 = *(undefined8 *)(local_80 + 0x10);
            uVar2 = *(undefined4 *)(lVar7 + 0x90);
          }
          else {
            uVar8 = *(undefined8 *)(local_80 + 0x10);
            uVar2 = *(undefined4 *)(local_80 + 0x1a0);
          }
          local_90 = 0;
          local_98 = 0;
          FUN_147a776dc(local_78,&local_60,uVar2,uVar8);
          *(undefined4 *)(lVar1 + 0x44) = *(undefined4 *)(lVar1 + 0x14);
          *(undefined8 *)(lVar1 + 0x3c) = *(undefined8 *)(lVar1 + 0xc);
          *(float *)(lVar1 + 0xc) = (float)local_60 + *(float *)(lVar1 + 0xc);
          *(float *)(lVar1 + 0x10) = (float)local_58 + *(float *)(lVar1 + 0x10);
          *(float *)(lVar1 + 0x14) = (float)local_50 + *(float *)(lVar1 + 0x14);
        }
        if ((*(uint *)(param_1 + 0x108) & 2) != 0) {
          if ((*(uint *)(param_1 + 0x108) & 4) == 0) {
            uVar8 = *(undefined8 *)(local_80 + 0x10);
            uVar2 = *(undefined4 *)(lVar7 + 0x90);
          }
          else {
            uVar8 = *(undefined8 *)(local_80 + 0x10);
            uVar2 = *(undefined4 *)(local_80 + 0x1a0);
          }
          local_90 = 0;
          local_98 = 0;
          FUN_147a776dc(local_70,&local_60,uVar2,uVar8);
          *(float *)(lVar1 + 0x18) = (float)local_60 + *(float *)(lVar1 + 0x18);
          *(float *)(lVar1 + 0x1c) = (float)local_58 + *(float *)(lVar1 + 0x1c);
          *(float *)(lVar1 + 0x20) = (float)local_50 + *(float *)(lVar1 + 0x20);
        }
        if ((*(uint *)(param_1 + 0x170) & 2) != 0) {
          if ((*(uint *)(param_1 + 0x170) & 4) == 0) {
            uVar8 = *(undefined8 *)(local_80 + 0x10);
            uVar2 = *(undefined4 *)(lVar7 + 0x90);
          }
          else {
            uVar8 = *(undefined8 *)(local_80 + 0x10);
            uVar2 = *(undefined4 *)(local_80 + 0x1a0);
          }
          local_90 = 0;
          local_98 = 0;
          FUN_147a776dc(local_68,&local_60,uVar2,uVar8);
          *(float *)(lVar1 + 0x30) = (float)local_60 + *(float *)(lVar1 + 0x30);
          *(float *)(lVar1 + 0x34) = (float)local_58 + *(float *)(lVar1 + 0x34);
          *(float *)(lVar1 + 0x38) = (float)local_50 + *(float *)(lVar1 + 0x38);
        }
      }
      uVar9 = uVar9 - 1;
    } while (1 < uVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c22018 FUN_147c22018 body=138 status=ok
// SIG undefined FUN_147c22018(void)

code * FUN_147c22018(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PivotOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb0000002f0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fccf16;
}



// FUNCTION 147c220a2 FUN_147c220a2 body=138 status=ok
// SIG undefined FUN_147c220a2(void)

code * FUN_147c220a2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RemoveHMDRoll";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9c000002ec;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c2212c;
}



// FUNCTION 147c2212c FUN_147c2212c body=138 status=ok
// SIG undefined FUN_147c2212c(void)

code * FUN_147c2212c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CameraFacingBlend";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x90000002eb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c221b6;
}



// FUNCTION 147c221b6 FUN_147c221b6 body=138 status=ok
// SIG undefined FUN_147c221b6(void)

code * FUN_147c221b6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TangentSelector";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000002ea;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c22240;
}



// FUNCTION 147c22240 FUN_147c22240 body=138 status=ok
// SIG undefined FUN_147c22240(void)

code * FUN_147c22240(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SubImageSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x70000002e9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c222ca;
}



// FUNCTION 147c222ca FUN_147c222ca body=138 status=ok
// SIG undefined FUN_147c222ca(void)

code * FUN_147c222ca(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SizeBySpeed";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000002e8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fcd02a;
}



// FUNCTION 147c22354 FUN_147c22354 body=138 status=ok
// SIG undefined FUN_147c22354(void)

code * FUN_147c22354(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MiscScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000002e6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c223de;
}



// FUNCTION 147c223de FUN_147c223de body=138 status=ok
// SIG undefined FUN_147c223de(void)

code * FUN_147c223de(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MiscCurve";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000002e5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c22468;
}



// FUNCTION 147c22468 FUN_147c22468 body=138 status=ok
// SIG undefined FUN_147c22468(void)

code * FUN_147c22468(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ColorBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000002e4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c224f2;
}



// FUNCTION 147c224f2 FUN_147c224f2 body=138 status=ok
// SIG undefined FUN_147c224f2(void)

code * FUN_147c224f2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ColorScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000002e3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c2257c;
}



// FUNCTION 147c2257c FUN_147c2257c body=132 status=ok
// SIG undefined FUN_147c2257c(void)

undefined1 * FUN_147c2257c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ColorCurve";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2e2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147c22600;
}



// FUNCTION 147c22604 FUN_147c22604 body=138 status=ok
// SIG undefined FUN_147c22604(void)

code * FUN_147c22604(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DynamicColor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000301;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e393d8;
}



// FUNCTION 147c2268e FUN_147c2268e body=138 status=ok
// SIG undefined FUN_147c2268e(void)

code * FUN_147c2268e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"AxisLockRight";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000002ff;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463efe92;
}



// FUNCTION 147c22718 FUN_147c22718 body=138 status=ok
// SIG undefined FUN_147c22718(void)

code * FUN_147c22718(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LocalToWorldScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000002fd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e39354;
}



// FUNCTION 147c227a2 FUN_147c227a2 body=138 status=ok
// SIG undefined FUN_147c227a2(void)

code * FUN_147c227a2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CollisionRandomDistribution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xfc00000407;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c2282c;
}



// FUNCTION 147c2282c FUN_147c2282c body=138 status=ok
// SIG undefined FUN_147c2282c(void)

code * FUN_147c2282c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CollisionRandomSpread";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf800000406;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ef22f2;
}



// FUNCTION 147c228b6 FUN_147c228b6 body=138 status=ok
// SIG undefined FUN_147c228b6(void)

code * FUN_147c228b6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CollisionRadiusScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xec00000403;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ef2406;
}



// FUNCTION 147c22940 FUN_147c22940 body=138 status=ok
// SIG undefined FUN_147c22940(void)

code * FUN_147c22940(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OrbitFrequencyRange";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc000000400;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c229ca;
}



// FUNCTION 147c229ca FUN_147c229ca body=138 status=ok
// SIG undefined FUN_147c229ca(void)

code * FUN_147c229ca(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OrbitFrequencyBase";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb0000003ff;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c22a54;
}



// FUNCTION 147c22a54 FUN_147c22a54 body=138 status=ok
// SIG undefined FUN_147c22a54(void)

code * FUN_147c22a54(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OrbitOffsetRange";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa0000003fe;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c22ade;
}



// FUNCTION 147c22ade FUN_147c22ade body=138 status=ok
// SIG undefined FUN_147c22ade(void)

code * FUN_147c22ade(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OrbitOffsetBase";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x90000003fd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c22b68;
}



// FUNCTION 147c22b68 FUN_147c22b68 body=138 status=ok
// SIG undefined FUN_147c22b68(void)

code * FUN_147c22b68(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Acceleration";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000003fc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c22bf2;
}



// FUNCTION 147c22bf2 FUN_147c22bf2 body=138 status=ok
// SIG undefined FUN_147c22bf2(void)

code * FUN_147c22bf2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MiscBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x70000003fb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c22c7c;
}



// FUNCTION 147c22c7c FUN_147c22c7c body=138 status=ok
// SIG undefined FUN_147c22c7c(void)

code * FUN_147c22c7c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MiscScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000003fa;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c22d06;
}



// FUNCTION 147c22d06 FUN_147c22d06 body=138 status=ok
// SIG undefined FUN_147c22d06(void)

code * FUN_147c22d06(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MiscCurve";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000003f9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c22d90;
}



// FUNCTION 147c22d90 FUN_147c22d90 body=138 status=ok
// SIG undefined FUN_147c22d90(void)

code * FUN_147c22d90(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"AttributeBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000003f8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c22e1a;
}



// FUNCTION 147c22e1a FUN_147c22e1a body=138 status=ok
// SIG undefined FUN_147c22e1a(void)

code * FUN_147c22e1a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"AttributeScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000003f7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c22ea4;
}



// FUNCTION 147c22ea4 FUN_147c22ea4 body=138 status=ok
// SIG undefined FUN_147c22ea4(void)

code * FUN_147c22ea4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"AttributeCurveBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000003f6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c22f2e;
}



// FUNCTION 147c22f2e FUN_147c22f2e body=138 status=ok
// SIG undefined FUN_147c22f2e(void)

code * FUN_147c22f2e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"AttributeCurveScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000003f5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c22fb8;
}



// FUNCTION 147c22fb8 FUN_147c22fb8 body=132 status=ok
// SIG undefined FUN_147c22fb8(void)

undefined1 * FUN_147c22fb8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"AttributeCurve";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3f4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147c2303c;
}



// FUNCTION 147c23040 FUN_147c23040 body=138 status=ok
// SIG undefined FUN_147c23040(void)

code * FUN_147c23040(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"IntensityAndTightness";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x25000000469;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ef0eee;
}



// FUNCTION 147c230ca FUN_147c230ca body=138 status=ok
// SIG undefined FUN_147c230ca(void)

code * FUN_147c230ca(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WorldToVolumeTile";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000466;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c23154;
}



// FUNCTION 147c23154 FUN_147c23154 body=132 status=ok
// SIG undefined FUN_147c23154(void)

undefined1 * FUN_147c23154(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Count";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x465;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147c231d8;
}



// FUNCTION 147c231dc FUN_147c231dc body=138 status=ok
// SIG undefined FUN_147c231dc(void)

code * FUN_147c231dc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PositionTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000007d2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463f02cc;
}



// FUNCTION 147c23266 FUN_147c23266 body=138 status=ok
// SIG undefined FUN_147c23266(void)

code * FUN_147c23266(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InParticleIndices";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000008b4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f5c924;
}



// FUNCTION 147c232f0 FUN_147c232f0 body=132 status=ok
// SIG undefined FUN_147c232f0(void)

undefined1 * FUN_147c232f0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TextureSizeX";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8b0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147c23374;
}



// FUNCTION 147c23378 FUN_147c23378 body=38 status=ok
// SIG undefined FUN_147c23378(void)

undefined8 FUN_147c23378(undefined8 param_1,int param_2)

{
  FUN_147c235aa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c2339e FUN_147c2339e body=418 status=ok
// SIG undefined FUN_147c2339e(void)

void FUN_147c2339e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1435df55c(param_1,&local_30,*(undefined8 *)(param_1 + 0x10),1);
  plVar1 = (longlong *)(param_1 + 0x20);
  if (plVar1 == &local_30) {
LAB_147c2340b:
    if (local_30 != 0) {
      LOCK();
      puVar2 = (uint *)(local_30 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    lVar4 = *plVar1;
    *plVar1 = local_30;
    local_30 = 0;
    if (lVar4 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      goto LAB_147c2340b;
    }
  }
  FUN_1435df55c(param_1,&local_30,*(undefined8 *)(param_1 + 0x18),10);
  plVar1 = (longlong *)(param_1 + 0x28);
  if (plVar1 != &local_30) {
    lVar4 = *plVar1;
    *plVar1 = local_30;
    local_30 = 0;
    if (lVar4 == 0) goto LAB_147c2349e;
    LOCK();
    puVar2 = (uint *)(lVar4 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_30 != 0) {
    LOCK();
    puVar2 = (uint *)(local_30 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_147c2349e:
  FUN_14495448a(&local_30,*(undefined8 *)(param_1 + 0x10),*(int *)(param_1 + 0x34) + 1);
  FUN_14495448a(local_38,*(undefined8 *)(param_1 + 0x18),*(int *)(param_1 + 0x34) + 1);
  FUN_1431ed9b8(*(undefined8 *)(param_1 + 0x20),&local_30);
  FUN_1431ed9b8(*(undefined8 *)(param_1 + 0x28),local_38);
  (**(code **)(*DAT_14ca83900 + 0x248))
            (DAT_14ca83900,param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10));
  (**(code **)(*DAT_14ca83900 + 0x248))
            (DAT_14ca83900,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x18));
  *(undefined1 *)(param_1 + 0x30) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c23542 FUN_147c23542 body=104 status=ok
// SIG undefined FUN_147c23542(void)

void FUN_147c23542(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 147c235aa FUN_147c235aa body=99 status=ok
// SIG undefined FUN_147c235aa(void)

void FUN_147c235aa(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aa03a50;
  if (param_1[5] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[5] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 147c2360e FUN_147c2360e body=38 status=ok
// SIG undefined FUN_147c2360e(void)

undefined8 FUN_147c2360e(undefined8 param_1,int param_2)

{
  FUN_147c237c6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c23634 FUN_147c23634 body=355 status=ok
// SIG undefined FUN_147c23634(void)

void FUN_147c23634(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  longlong *local_68;
  undefined4 local_60;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1435df63a(param_1,&local_58);
  plVar1 = (longlong *)(param_1 + 0x18);
  if (plVar1 != &local_58) {
    lVar4 = *plVar1;
    *plVar1 = local_58;
    local_58 = 0;
    if (lVar4 == 0) goto LAB_147c236a8;
    LOCK();
    puVar2 = (uint *)(lVar4 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_58 != 0) {
    LOCK();
    puVar2 = (uint *)(local_58 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_147c236a8:
  FUN_1446f470e(local_70,*(undefined8 *)(param_1 + 0x10),1);
  FUN_1431ed9b8(*(undefined8 *)(param_1 + 0x18),local_70);
  (**(code **)(*DAT_14ca83900 + 0x248))
            (DAT_14ca83900,&DAT_14ca85100,*(undefined8 *)(param_1 + 0x18),
             *(undefined8 *)(param_1 + 0x10));
  FUN_145d87ef6(&DAT_14ca85100,*(undefined8 *)(param_1 + 0x18),0,0);
  local_48 = *(undefined8 *)(param_1 + 0x18);
  local_58 = -1;
  local_50 = 0xffffffff;
  local_40 = 1;
  local_3c = 0x7000001000;
  local_34 = 0;
  local_28 = 0;
  local_60 = 1;
  local_68 = &local_58;
  FUN_144760590(&DAT_14ca85100,&local_68,0);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c237c6 FUN_147c237c6 body=65 status=ok
// SIG undefined FUN_147c237c6(void)

void FUN_147c237c6(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aa03ae0;
  if (param_1[3] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[3] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 147c23808 FUN_147c23808 body=93 status=ok
// SIG undefined FUN_147c23808(void)

void FUN_147c23808(longlong param_1)

{
  longlong lVar1;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  FUN_147c237c6(param_1 + 0xa8);
  FUN_147c237c6(param_1 + 0x80);
  lVar1 = 0x40;
  do {
    FUN_147c235aa(param_1 + lVar1);
    lVar1 = lVar1 + -0x40;
  } while (lVar1 != -0x40);
  return;
}



// FUNCTION 147c23866 FUN_147c23866 body=40 status=ok
// SIG undefined FUN_147c23866(void)

void FUN_147c23866(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  FUN_147c23808(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 147c23898 FUN_147c23898 body=12 status=ok
// SIG undefined FUN_147c23898(void)

void FUN_147c23898(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147c238a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 147c238a4 FUN_147c238a4 body=29 status=ok
// SIG undefined FUN_147c238a4(void)

undefined8 FUN_147c238a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c238c2 FUN_147c238c2 body=96 status=ok
// SIG undefined FUN_147c238c2(void)

ulonglong FUN_147c238c2(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar3 = (ulonglong)DAT_14c7585c8;
  lVar2 = param_1[0x15];
  if (lVar2 != 0) {
    FUN_147c23808(lVar2);
    uVar3 = FUN_1400020a8(lVar2);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147c23905. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)*param_1)(param_1,1);
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 147c23922 FUN_147c23922 body=103 status=ok
// SIG undefined FUN_147c23922(void)

void FUN_147c23922(longlong param_1,undefined1 param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x18) = param_2;
  *(uint *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x24) = param_4;
  iVar2 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar2 + param_3;
  if ((uint)(*(int *)(param_1 + 0x14) - iVar2) < param_3) {
    FUN_1447808da(param_1 + 8);
    param_3 = *(uint *)(param_1 + 0x20);
  }
  if (param_3 != 0) {
    uVar1 = 0;
    iVar2 = -1;
    do {
      *(uint *)(*(longlong *)(param_1 + 8) + (longlong)(int)uVar1 * 4) = param_3 + iVar2;
      uVar1 = uVar1 + 1;
      param_3 = *(uint *)(param_1 + 0x20);
      iVar2 = iVar2 + -1;
    } while (uVar1 < param_3);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



// FUNCTION 147c2398a FUN_147c2398a body=490 status=ok
// SIG undefined FUN_147c2398a(void)

void FUN_147c2398a(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_198 [32];
  char *local_178;
  undefined4 local_170;
  char local_168 [16];
  undefined8 local_158;
  undefined1 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined1 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  undefined1 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined1 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_198;
  (**(code **)(*(longlong *)*param_1 + 0x18))();
  (**(code **)(*(longlong *)(*param_1 + 0x40) + 0x18))(*param_1 + 0x40,param_2);
  FUN_14006bf18(*param_1 + 0x80,param_2);
  FUN_14006bf18(*param_1 + 0xa8,param_2);
  lVar1 = *param_1;
  local_158 = *(undefined8 *)(lVar1 + 0x98);
  local_178 = local_168;
  local_168[0] = -1;
  local_168[1] = -1;
  local_168[2] = -1;
  local_168[3] = -1;
  local_168[4] = -1;
  local_168[5] = -1;
  local_168[6] = -1;
  local_168[7] = -1;
  local_168[8] = -1;
  local_168[9] = -1;
  local_168[10] = -1;
  local_168[0xb] = -1;
  local_150 = 1;
  local_14c = 0x7000000000;
  local_144 = 0;
  local_138 = 0;
  local_120 = *(undefined8 *)(lVar1 + 0xc0);
  local_130 = 0xffffffffffffffff;
  local_128 = 0xffffffff;
  local_118 = 1;
  local_114 = 0x7000000000;
  local_10c = 0;
  local_100 = 0;
  local_e8 = *(undefined8 *)(lVar1 + 0x20);
  local_f8 = 0xffffffffffffffff;
  local_f0 = 0xffffffff;
  local_e0 = 1;
  local_dc = 0x7000000000;
  local_d4 = 0;
  local_c8 = 0;
  local_b0 = *(undefined8 *)(lVar1 + 0x28);
  local_c0 = 0xffffffffffffffff;
  local_b8 = 0xffffffff;
  local_a8 = 1;
  local_a4 = 0x7000000000;
  local_9c = 0;
  local_90 = 0;
  local_78 = *(undefined8 *)(lVar1 + 0x60);
  local_88 = 0xffffffffffffffff;
  local_80 = 0xffffffff;
  local_70 = 1;
  local_6c = 0x7000000000;
  local_64 = 0;
  local_58 = 0;
  local_40 = *(undefined8 *)(lVar1 + 0x68);
  local_50 = 0xffffffffffffffff;
  local_48 = 0xffffffff;
  local_38 = 1;
  local_34 = 0x7000000000;
  local_2c = 0;
  local_20 = 0;
  local_170 = 6;
  FUN_144760590(param_2,&local_178,0);
  lVar1 = 0x148;
  do {
    if (local_168[lVar1] == '\x01') {
      local_168[lVar1] = '\0';
    }
    lVar1 = lVar1 + -0x38;
  } while (lVar1 != -8);
  if ((local_18 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c23b86 FUN_147c23b86 body=12 status=ok
// SIG undefined FUN_147c23b86(void)

void FUN_147c23b86(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147c23b8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 147c23b92 FUN_147c23b92 body=29 status=ok
// SIG undefined FUN_147c23b92(void)

undefined8 FUN_147c23b92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c23bb0 FUN_147c23bb0 body=105 status=ok
// SIG undefined FUN_147c23bb0(void)

void FUN_147c23bb0(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_147c2398a(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_147c2398a(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147c23c0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147c23c1a FUN_147c23c1a body=61 status=ok
// SIG undefined FUN_147c23c1a(void)

void FUN_147c23c1a(longlong *param_1)

{
  (**(code **)(*(longlong *)*param_1 + 0x20))();
  (**(code **)(*(longlong *)(*param_1 + 0x40) + 0x20))(*param_1 + 0x40);
  FUN_144725486(*param_1 + 0x80);
  FUN_144725486(*param_1 + 0xa8);
  return;
}



// FUNCTION 147c23c62 FUN_147c23c62 body=12 status=ok
// SIG undefined FUN_147c23c62(void)

void FUN_147c23c62(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147c23c6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 147c23c6e FUN_147c23c6e body=29 status=ok
// SIG undefined FUN_147c23c6e(void)

undefined8 FUN_147c23c6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c23c8c FUN_147c23c8c body=96 status=ok
// SIG undefined FUN_147c23c8c(void)

void FUN_147c23c8c(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1435dfa96(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1435dfa96(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147c23cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147c23cec FUN_147c23cec body=199 status=ok
// SIG undefined FUN_147c23cec(void)

void FUN_147c23cec(longlong param_1,undefined8 param_2)

{
  int iVar1;
  float fVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  fVar2 = (float)exp2f((float)*(uint *)(param_1 + 0x114));
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  iVar1 = (int)fVar2 * DAT_14c7616d0;
  *(int *)(param_1 + 0xe0) = iVar1;
  *(int *)(param_1 + 0xe4) = iVar1;
  FUN_147c23db4(param_1,param_2,iVar1,iVar1);
  FUN_147c23db4(param_1 + 0x40,param_2,*(undefined4 *)(param_1 + 0xe0),
                *(undefined4 *)(param_1 + 0xe4));
  FUN_147c24366(param_1 + 0x80,param_2,*(undefined4 *)(param_1 + 0xe0),
                *(undefined4 *)(param_1 + 0xe4));
  FUN_147c24366(param_1 + 0xa8,param_2,*(undefined4 *)(param_1 + 0xe0),
                *(undefined4 *)(param_1 + 0xe4));
  return;
}



// FUNCTION 147c23db4 FUN_147c23db4 body=1456 status=ok
// SIG undefined FUN_147c23db4(void)

void FUN_147c23db4(longlong *param_1,ulonglong *param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  undefined1 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined4 *)(param_1 + 7) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_4;
  FUN_1435df55c(param_1,&local_b0,param_1[2],1);
  FUN_1435df55c(param_1,&local_b8,param_1[3],10);
  local_98 = 0xffffffffffffffff;
  local_90 = 0xffffffff;
  local_88 = local_b0;
  local_80 = 1;
  local_7c = 0x200000000070;
  local_74 = 0;
  local_68 = 0;
  local_a0 = 1;
  local_a8 = &local_98;
  FUN_144760590(param_2,&local_a8,0);
  local_88 = param_1[4];
  local_98 = 0xffffffffffffffff;
  local_90 = 0xffffffff;
  local_80 = 1;
  local_7c = 0x8000000070;
  local_74 = 0;
  local_68 = 0;
  local_a0 = 1;
  local_a8 = &local_98;
  FUN_144760590(param_2,&local_a8,0);
  local_98 = 0xffffffffffffffff;
  local_90 = 0xffffffff;
  local_88 = local_b8;
  local_80 = 1;
  local_7c = 0x200000000070;
  local_74 = 0;
  local_68 = 0;
  local_a0 = 1;
  local_a8 = &local_98;
  FUN_144760590(param_2,&local_a8,0);
  local_88 = param_1[5];
  local_98 = 0xffffffffffffffff;
  local_90 = 0xffffffff;
  local_80 = 1;
  local_7c = 0x8000000070;
  local_74 = 0;
  local_68 = 0;
  local_a0 = 1;
  local_a8 = &local_98;
  FUN_144760590(param_2,&local_a8,0);
  local_c8 = DAT_14c9a5298;
  local_c0 = DAT_14c9a52a0;
  local_d8 = DAT_14c9a5298;
  local_d0 = DAT_14c9a52a0;
  lVar7 = (**(code **)(*(longlong *)param_1[4] + 8))();
  uVar3 = *(undefined4 *)(lVar7 + 0x28);
  lVar7 = (**(code **)(*(longlong *)param_1[4] + 8))();
  lVar6 = local_b0;
  uVar4 = *(undefined4 *)(lVar7 + 0x24);
  lVar7 = param_1[4];
  puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar9 = puVar8 + 0xc;
  if ((undefined8 *)param_2[1] < puVar9) {
    FUN_140023dd8(param_2,0x68);
    puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar8 + 0xc;
  }
  lVar5 = local_b8;
  *param_2 = (ulonglong)puVar9;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar8;
  param_2[6] = (ulonglong)(puVar8 + 1);
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_14a289d68;
  *(undefined4 *)(puVar8 + 2) = uVar4;
  *(undefined4 *)((longlong)puVar8 + 0x14) = uVar3;
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined8 *)((longlong)puVar8 + 0x1c) = local_c8;
  *(undefined4 *)((longlong)puVar8 + 0x24) = local_c0;
  puVar8[5] = local_d8;
  *(undefined4 *)(puVar8 + 6) = local_d0;
  *(undefined8 *)((longlong)puVar8 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar8 + 0x3c) = 1;
  *(undefined8 *)((longlong)puVar8 + 0x44) = 0x100000000;
  puVar8[10] = lVar7;
  puVar8[0xb] = lVar6;
  lVar7 = param_1[5];
  puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar9 = puVar8 + 0xc;
  if ((undefined8 *)param_2[1] < puVar9) {
    FUN_140023dd8(param_2,0x68);
    puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar8 + 0xc;
  }
  *param_2 = (ulonglong)puVar9;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar8;
  param_2[6] = (ulonglong)(puVar8 + 1);
  puVar8[1] = 0;
  *puVar8 = &PTR_LAB_14a289d68;
  *(undefined4 *)(puVar8 + 2) = uVar4;
  *(undefined4 *)((longlong)puVar8 + 0x14) = uVar3;
  *(undefined4 *)(puVar8 + 3) = 0;
  *(undefined8 *)((longlong)puVar8 + 0x1c) = local_c8;
  *(undefined4 *)((longlong)puVar8 + 0x24) = local_c0;
  puVar8[5] = local_d8;
  *(undefined4 *)(puVar8 + 6) = local_d0;
  *(undefined8 *)((longlong)puVar8 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar8 + 0x3c) = 1;
  *(undefined8 *)((longlong)puVar8 + 0x44) = 0x100000000;
  puVar8[10] = lVar7;
  puVar8[0xb] = lVar5;
  local_98 = 0xffffffffffffffff;
  local_90 = 0xffffffff;
  local_88 = local_b0;
  local_80 = 1;
  local_7c = 0x7000002000;
  local_74 = 0;
  local_68 = 0;
  local_a0 = 1;
  local_a8 = &local_98;
  FUN_144760590(param_2,&local_a8,0);
  local_88 = param_1[4];
  local_98 = 0xffffffffffffffff;
  local_90 = 0xffffffff;
  local_80 = 1;
  local_7c = 0x7000000080;
  local_74 = 0;
  local_68 = 0;
  local_a0 = 1;
  local_a8 = &local_98;
  FUN_144760590(param_2,&local_a8,0);
  local_98 = 0xffffffffffffffff;
  local_90 = 0xffffffff;
  local_88 = local_b8;
  local_80 = 1;
  local_7c = 0x7000002000;
  local_74 = 0;
  local_68 = 0;
  local_a0 = 1;
  local_a8 = &local_98;
  FUN_144760590(param_2,&local_a8,0);
  local_88 = param_1[5];
  local_98 = 0xffffffffffffffff;
  local_90 = 0xffffffff;
  local_80 = 1;
  local_7c = 0x7000000080;
  local_74 = 0;
  local_68 = 0;
  local_a0 = 1;
  local_a8 = &local_98;
  FUN_144760590(param_2,&local_a8,0);
  (**(code **)(*param_1 + 0x10))(param_1);
  lVar7 = param_1[4];
  if (lVar7 != local_b0) {
    param_1[4] = local_b0;
    if (local_b0 != 0) {
      LOCK();
      *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
      UNLOCK();
    }
    if (lVar7 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar7 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  lVar7 = param_1[5];
  if (lVar7 != local_b8) {
    param_1[5] = local_b8;
    if (local_b8 != 0) {
      LOCK();
      *(int *)(local_b8 + 8) = *(int *)(local_b8 + 8) + 1;
      UNLOCK();
    }
    if (lVar7 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar7 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812(lVar7);
      }
    }
  }
  if (local_b8 != 0) {
    LOCK();
    puVar1 = (uint *)(local_b8 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_b0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_b0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c24366 FUN_147c24366 body=792 status=ok
// SIG undefined FUN_147c24366(void)

void FUN_147c24366(longlong *param_1,ulonglong *param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined8 *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  longlong local_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x24) = param_4;
  FUN_1435df63a(param_1,&local_98);
  local_80 = 0xffffffffffffffff;
  local_78 = 0xffffffff;
  local_70 = local_98;
  local_68 = 1;
  local_64 = 0x200000001000;
  local_5c = 0;
  local_50 = 0;
  local_88 = 1;
  local_90 = &local_80;
  FUN_144760590(param_2,&local_90,0);
  local_70 = param_1[3];
  local_80 = 0xffffffffffffffff;
  local_78 = 0xffffffff;
  local_68 = 1;
  local_64 = 0x8000000070;
  local_5c = 0;
  local_50 = 0;
  local_88 = 1;
  local_90 = &local_80;
  FUN_144760590(param_2,&local_90,0);
  local_a8 = DAT_14c9a5298;
  local_a0 = DAT_14c9a52a0;
  local_b8 = DAT_14c9a5298;
  local_b0 = DAT_14c9a52a0;
  lVar6 = (**(code **)(*(longlong *)param_1[3] + 8))();
  uVar3 = *(undefined4 *)(lVar6 + 0x28);
  lVar6 = (**(code **)(*(longlong *)param_1[3] + 8))();
  lVar5 = local_98;
  uVar4 = *(undefined4 *)(lVar6 + 0x24);
  lVar6 = param_1[3];
  puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar8 = puVar7 + 0xc;
  if ((undefined8 *)param_2[1] < puVar8) {
    FUN_140023dd8(param_2,0x68);
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar7 + 0xc;
  }
  *param_2 = (ulonglong)puVar8;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar7;
  param_2[6] = (ulonglong)(puVar7 + 1);
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_14a289d68;
  *(undefined4 *)(puVar7 + 2) = uVar4;
  *(undefined4 *)((longlong)puVar7 + 0x14) = uVar3;
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = local_a8;
  *(undefined4 *)((longlong)puVar7 + 0x24) = local_a0;
  puVar7[5] = local_b8;
  *(undefined4 *)(puVar7 + 6) = local_b0;
  *(undefined4 *)((longlong)puVar7 + 0x34) = 0;
  *(undefined4 *)(puVar7 + 7) = 0;
  *(undefined4 *)((longlong)puVar7 + 0x3c) = 1;
  *(undefined4 *)(puVar7 + 8) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x44) = 0x100000000;
  puVar7[10] = lVar6;
  puVar7[0xb] = lVar5;
  local_80 = 0xffffffffffffffff;
  local_78 = 0xffffffff;
  local_70 = local_98;
  local_68 = 1;
  local_64 = 0x7000002000;
  local_5c = 0;
  local_50 = 0;
  local_88 = 1;
  local_90 = &local_80;
  FUN_144760590(param_2,&local_90,0);
  local_70 = param_1[3];
  local_80 = 0xffffffffffffffff;
  local_78 = 0xffffffff;
  local_68 = 1;
  local_64 = 0x7000000080;
  local_5c = 0;
  local_50 = 0;
  local_88 = 1;
  local_90 = &local_80;
  FUN_144760590(param_2,&local_90,0);
  (**(code **)(*param_1 + 0x10))(param_1);
  lVar6 = param_1[3];
  if (lVar6 != local_98) {
    param_1[3] = local_98;
    if (local_98 != 0) {
      LOCK();
      *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
      UNLOCK();
    }
    if (lVar6 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar6 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812(lVar6);
      }
    }
  }
  if (local_98 != 0) {
    LOCK();
    puVar1 = (uint *)(local_98 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c24680 FUN_147c24680 body=136 status=ok
// SIG undefined FUN_147c24680(void)

void FUN_147c24680(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x128);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 300)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x48,0);
      iVar4 = (int)(uVar3 / 0x48);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 300) = iVar5;
    FUN_147c2470a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147c2470a FUN_147c2470a body=149 status=ok
// SIG undefined FUN_147c2470a(void)

void FUN_147c2470a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x120);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x48);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x120,0,param_3,0x48);
    memmove(*(void **)((longlong)param_1 + 0x120),param_1,(longlong)param_2 * 0x48);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x120,param_2,param_3,0x48);
  return;
}



// FUNCTION 147c247a0 FUN_147c247a0 body=382 status=ok
// SIG undefined FUN_147c247a0(void)

undefined8 * FUN_147c247a0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *param_1 = 0;
  FUN_144a34e6c(param_1 + 1);
  param_1[1] = &PTR_FUN_14aa03f20;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = (undefined4)DAT_14c846330;
  *(undefined4 *)(param_1 + 8) = (undefined4)DAT_14c846330;
  uVar2 = DAT_14c846330._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x44) = DAT_14c846330._4_4_;
  uVar3 = DAT_14c846338;
  *(undefined4 *)(param_1 + 9) = DAT_14c846338;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 10) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0xb) = uVar3;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0x3f80000000000000;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = DAT_14c846338;
  *(ulonglong *)((longlong)param_1 + 0x7c) = CONCAT44(DAT_14c846330._4_4_,(undefined4)DAT_14c846330)
  ;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  puVar5 = &DAT_14c846400;
  puVar6 = param_1 + 0x26;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = &DAT_14c846400;
  puVar6 = param_1 + 0x36;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = &DAT_14c846400;
  puVar6 = param_1 + 0x46;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0xffffffff;
  *(byte *)((longlong)param_1 + 700) = *(byte *)((longlong)param_1 + 700) & 0xf0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  FUN_144a34e6c(param_1 + 0x5a);
  param_1[0x5a] = &PTR_FUN_14aa03f90;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x61) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0x100010100000000;
  return param_1;
}



// FUNCTION 147c2491e FUN_147c2491e body=38 status=ok
// SIG undefined FUN_147c2491e(void)

undefined8 FUN_147c2491e(undefined8 param_1,int param_2)

{
  FUN_147c25074();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c2494c FUN_147c2494c body=151 status=ok
// SIG undefined FUN_147c2494c(void)

void FUN_147c2494c(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  iVar3 = *(int *)(param_3 + 0x88);
  if (0 < iVar3) {
    lVar1 = **(longlong **)(*(longlong *)(param_1 + 8) + 0x40);
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_3 + 0x80) + lVar5 * 8);
      if ((plVar2 != (longlong *)0x0) && ((~*(byte *)(plVar2 + 5) & 0x8a) == 0)) {
        uVar4 = FUN_147bf6ddc(param_1,*(undefined8 *)(*(longlong *)(lVar1 + 0x80) + lVar5 * 8));
        (**(code **)(*plVar2 + 0x2b0))(plVar2,param_1,uVar4,param_2);
        iVar3 = *(int *)(param_3 + 0x88);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar3);
  }
  return;
}



// FUNCTION 147c249e6 FUN_147c249e6 body=151 status=ok
// SIG undefined FUN_147c249e6(void)

void FUN_147c249e6(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  iVar3 = *(int *)(param_3 + 0x88);
  if (0 < iVar3) {
    lVar1 = **(longlong **)(*(longlong *)(param_1 + 8) + 0x40);
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_3 + 0x80) + lVar5 * 8);
      if ((plVar2 != (longlong *)0x0) && ((~*(byte *)(plVar2 + 5) & 0x8c) == 0)) {
        uVar4 = FUN_147bf6ddc(param_1,*(undefined8 *)(*(longlong *)(lVar1 + 0x80) + lVar5 * 8));
        (**(code **)(*plVar2 + 0x2b8))(plVar2,param_1,uVar4,param_2);
        iVar3 = *(int *)(param_3 + 0x88);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar3);
  }
  return;
}



// FUNCTION 147c24a84 FUN_147c24a84 body=86 status=ok
// SIG undefined FUN_147c24a84(void)

void FUN_147c24a84(longlong param_1)

{
  FUN_1435c6806();
  FUN_1435e3956(param_1);
  FUN_147c263c6(param_1);
  if (*(char *)(*(longlong *)(param_1 + 0x290) + 0x310) == '\x01') {
    FUN_1435d2aac(*(longlong *)(param_1 + 0x290),param_1 + 0x298,
                  *(undefined8 *)(*(longlong *)(param_1 + 0x288) + 0x340));
    return;
  }
  return;
}


