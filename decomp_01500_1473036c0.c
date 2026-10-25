// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1473036c0 FUN_1473036c0 body=38 status=ok
// SIG undefined FUN_1473036c0(void)

undefined8 FUN_1473036c0(undefined8 param_1,int param_2)

{
  FUN_14630723c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473036eb FUN_1473036eb body=310 status=ok
// SIG undefined FUN_1473036eb(void)

void FUN_1473036eb(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_147303822(*param_2,lVar11,*param_4,param_5,*param_6,*param_7);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147303822 FUN_147303822 body=1134 status=ok
// SIG undefined FUN_147303822(void)

void FUN_147303822(longlong param_1,longlong *param_2,int param_3,longlong param_4,longlong param_5,
                  longlong param_6)

{
  uint *puVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  short *psVar13;
  undefined1 auStack_1d8 [32];
  short *local_1b8;
  float local_1a4;
  float local_1a0;
  short local_19a;
  undefined8 local_198;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar3 = *(double *)(param_4 + 0x1030);
  dVar4 = *(double *)(param_4 + 0x1038);
  dVar5 = *(double *)(param_4 + 0x1040);
  FUN_147303c92(param_1 + 0xe0,param_2,param_4,param_5);
  plVar6 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  local_18c = (float)(**(code **)(*plVar6 + 0x18))(plVar6);
  local_18c = 1.0 / local_18c;
  local_190 = (float)(dVar5 + (double)plVar6[6]);
  local_198._4_4_ = (float)(dVar4 + (double)plVar6[5]);
  local_198._0_4_ = (float)(dVar3 + (double)plVar6[4]);
  FUN_1449dacb8(param_2,param_1 + 0x102,&local_198,0);
  lVar7 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar7 = *(longlong *)(param_5 + 0x980);
  }
  FUN_1447e4b92(param_2,param_1 + 0x108,lVar7 + (longlong)param_3 * 4,0);
  local_198 = CONCAT44(local_198._4_4_,*(float *)((longlong)plVar6 + 0x164) * 7.0 + 1.0);
  FUN_1447e4b92(param_2,param_1 + 0x10e,&local_198,0);
  local_1a0 = (float)(*(double *)(param_5 + 0xa20) / *(double *)(param_5 + 0xa40));
  local_1a4 = (float)(1.0 / *(double *)(param_5 + 0xa40));
  local_190 = *(float *)(param_5 + 0x10e0);
  local_198 = *(longlong *)(param_5 + 0x10d8);
  FUN_1447f9a48(param_2,param_1 + 0x114,&local_198,0);
  puVar10 = (undefined8 *)0x0;
  FUN_1472f9f03(param_2,param_1 + 0x11a,&local_1a4,0);
  if (*(short *)(param_1 + 0x120) != -1) {
    puVar10 = &local_198;
    local_198 = param_6;
    local_1b8 = &local_19a;
    local_19a = *(short *)(param_1 + 0x120);
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  if (*(short *)(param_1 + 0x122) != -1) {
    lVar7 = *(longlong *)(*(longlong *)(param_4 + 0x118d0) + 0x10);
    if (lVar7 == 0) {
      puVar10 = &local_198;
      local_1b8 = &local_19a;
      local_19a = *(short *)(param_1 + 0x122);
      local_198 = lVar7;
      FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
    }
    else {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
      if (*(short *)(param_1 + 0x122) != -1) {
        puVar10 = &local_198;
        local_1b8 = &local_19a;
        local_19a = *(short *)(param_1 + 0x122);
        local_198 = lVar7;
        FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
        if (lVar7 == 0) goto LAB_147303ae8;
      }
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
LAB_147303ae8:
  plVar6 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x3e0))();
  }
  FUN_144775e63(param_2,param_1 + 0xfe,DAT_14c9c0d80);
  lVar7 = FUN_1449dab10();
  uVar11 = *(ulonglong *)(param_1 + 0xa0);
  uVar9 = param_1 + 0xa0 + ((longlong)uVar11 >> 0x18);
  if ((uVar11 & 1) == 0) {
    uVar9 = uVar11;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar8 = 0;
    do {
      if (*(longlong *)(uVar9 + lVar8 * 4) == *(longlong *)(lVar7 + 0x28)) {
        uVar11 = *(ulonglong *)(param_1 + 0xb0);
        uVar9 = param_1 + 0xb0 + ((longlong)uVar11 >> 0x18);
        if ((uVar11 & 1) == 0) {
          uVar9 = uVar11;
        }
        psVar13 = (short *)(uVar9 + lVar8);
        goto LAB_147303b8a;
      }
      lVar8 = lVar8 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar8);
  }
  psVar13 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_147303b8a:
  local_19a = *psVar13;
  if (local_19a != -1) {
    if (*(longlong *)(param_4 + 0x11f90) == 0) {
      uVar12 = 0;
    }
    else {
      uVar11 = CONCAT71((int7)((ulonglong)puVar10 >> 8),
                        *(undefined1 *)(*(longlong *)(param_4 + 0x11f90) + 0xc)) &
               0xffffffffffffff02;
      uVar12 = CONCAT71((int7)(uVar11 >> 8),(byte)uVar11 >> 1);
    }
    local_1b8 = (short *)((ulonglong)local_1b8 & 0xffffffff00000000);
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),uVar12);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147303c92 FUN_147303c92 body=860 status=ok
// SIG undefined FUN_147303c92(void)

void FUN_147303c92(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  int iVar5;
  double *pdVar6;
  double *pdVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  double *pdVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_118 [44];
  uint local_ec;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar13 = *(longlong *)(DAT_14ca8c080 + 0x10);
  if ((param_4 != 0) && (lVar14 = *(longlong *)(*(longlong *)(param_4 + 0x28) + 8), lVar14 != 0)) {
    lVar13 = lVar14;
  }
  dVar1 = *(double *)(param_3 + 0x1030);
  dVar2 = *(double *)(param_3 + 0x1038);
  dVar3 = *(double *)(param_3 + 0x1040);
  FUN_144775fd8(param_2,param_1,lVar13);
  FUN_144775fd8(param_2,param_1 + 4,lVar13);
  if (*(short *)(param_1 + 0x1c) != 0) {
    if (param_4 == 0) {
      pdVar7 = (double *)&DAT_14c8464f0;
      pdVar12 = (double *)&DAT_14c8464e8;
      pdVar6 = (double *)&DAT_14c8464e0;
    }
    else {
      lVar13 = *(longlong *)(*(longlong *)(param_4 + 0xb60) + 0x28);
      pdVar6 = (double *)(lVar13 + 0x20);
      pdVar12 = (double *)(lVar13 + 0x28);
      pdVar7 = (double *)(lVar13 + 0x30);
    }
    local_c8 = (void *)CONCAT44((float)(dVar2 + *pdVar12),(float)(dVar1 + *pdVar6));
    uStack_c0 = CONCAT44(0x3f800000,(float)(dVar3 + *pdVar7));
    FUN_1449dacb8(param_2,param_1 + 0x18,&local_c8,0);
  }
  if (*(char *)(param_1 + 10) != '\0') {
    FUN_144775e63(param_2,param_1 + 8,DAT_14c9c0dc8);
  }
  lVar13 = param_1 + 0xc;
  uVar10 = *(ushort *)(param_1 + 0x10) + 0x3f;
  uVar9 = uVar10 >> 6;
  if (param_4 == 0) {
    local_c8 = (void *)0x0;
    uStack_c0 = (ulonglong)uVar9;
    if (*(ushort *)(param_1 + 0x10) != 0) {
      FUN_1473040a4(&local_c8);
    }
    memset(local_c8,0,(ulonglong)(uVar10 & 0xffffffc0));
    puVar8 = &local_c8;
    FUN_147303fef(param_2,lVar13,local_c8,uVar9);
    local_d8 = (undefined4 *)((ulonglong)local_d8._4_4_ << 0x20);
    FUN_1448fc859(param_2,param_1 + 0x12,&local_d8,0);
  }
  else {
    local_ec = *(uint *)(param_4 + 0x9b8);
    uVar10 = local_ec;
    if ((int)uVar9 < (int)local_ec) {
      uVar10 = uVar9;
    }
    local_d8 = (undefined4 *)0x0;
    uStack_d0 = (ulonglong)uVar10;
    local_e8 = lVar13;
    local_e0 = param_2;
    if ((uVar10 != 0) && (FUN_1473040a4(&local_d8), 0 < (int)uVar10)) {
      lVar13 = 0;
      puVar11 = local_d8;
      do {
        FUN_144a928e2(&local_c8);
        *puVar11 = (undefined4)local_c8;
        puVar11[1] = local_c8._4_4_;
        puVar11[2] = (undefined4)uStack_c0;
        puVar11[3] = uStack_c0._4_4_;
        *(undefined8 *)(puVar11 + 4) = local_b8;
        *(undefined8 *)(puVar11 + 6) = uStack_b0;
        *(undefined8 *)(puVar11 + 8) = local_a8;
        *(undefined8 *)(puVar11 + 10) = uStack_a0;
        *(undefined8 *)(puVar11 + 0xc) = local_98;
        *(undefined8 *)(puVar11 + 0xe) = uStack_90;
        lVar13 = lVar13 + 0x80;
        puVar11 = puVar11 + 0x10;
      } while ((ulonglong)uVar10 << 7 != lVar13);
    }
    lVar13 = local_e8;
    puVar11 = local_d8;
    if ((int)local_ec < (int)uVar9) {
      uVar10 = uVar9 - uVar10;
      iVar5 = (int)uStack_d0;
      lVar14 = (longlong)(int)uStack_d0;
      uStack_d0 = CONCAT44(uStack_d0._4_4_,(int)uStack_d0 + uVar10);
      if ((uint)(uStack_d0._4_4_ - iVar5) < uVar10) {
        FUN_1473040a4(&local_d8);
      }
      puVar11 = local_d8;
      memset(local_d8 + lVar14 * 0x10,0,(longlong)(int)uVar10 << 6);
    }
    uVar4 = local_e0;
    FUN_147303fef(local_e0,lVar13,puVar11,uVar9);
    local_c8 = (void *)CONCAT44(local_c8._4_4_,1.0 / (float)*(uint *)(param_4 + 0x958));
    FUN_1447e4b92(uVar4,param_1 + 0x12,&local_c8,0);
    puVar8 = &local_d8;
  }
  FUN_14306c004(puVar8);
  if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147303fef FUN_147303fef body=179 status=ok
// SIG undefined FUN_147303fef(void)

void FUN_147303fef(longlong *param_1,undefined2 *param_2,undefined8 param_3,int param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined2 *local_50;
  undefined2 *local_48;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = param_4 << 6;
  if ((int)(uint)(ushort)param_2[2] <= (int)uVar4) {
    uVar4 = (uint)(ushort)param_2[2];
  }
  if (uVar4 != 0) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    lVar3 = param_1[2];
    FUN_144ab3e68(*param_1,param_1 + 1,uVar4,param_3);
    local_48 = &local_32;
    local_32 = (undefined2)uVar4;
    local_50 = &local_34;
    local_58 = &local_36;
    local_38 = uVar1;
    local_36 = uVar2;
    local_34 = (short)lVar3;
    FUN_144ab3f26(*param_1,*param_1 + 0x38,param_1 + 3);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473040a4 FUN_1473040a4 body=85 status=ok
// SIG undefined FUN_1473040a4(void)

void FUN_1473040a4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_14306be42();
  return;
}



// FUNCTION 1473040fa FUN_1473040fa body=310 status=ok
// SIG undefined FUN_1473040fa(void)

void FUN_1473040fa(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_147304230(*param_2,lVar11,*param_4,param_5,*param_6,*param_7);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147304230 FUN_147304230 body=1134 status=ok
// SIG undefined FUN_147304230(void)

void FUN_147304230(longlong param_1,longlong *param_2,int param_3,longlong param_4,longlong param_5,
                  longlong param_6)

{
  uint *puVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  short *psVar13;
  undefined1 auStack_1d8 [32];
  short *local_1b8;
  float local_1a4;
  float local_1a0;
  short local_19a;
  undefined8 local_198;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar3 = *(double *)(param_4 + 0x1030);
  dVar4 = *(double *)(param_4 + 0x1038);
  dVar5 = *(double *)(param_4 + 0x1040);
  FUN_147303c92(param_1 + 0xe0,param_2,param_4,param_5);
  plVar6 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  local_18c = (float)(**(code **)(*plVar6 + 0x18))(plVar6);
  local_18c = 1.0 / local_18c;
  local_190 = (float)(dVar5 + (double)plVar6[6]);
  local_198._4_4_ = (float)(dVar4 + (double)plVar6[5]);
  local_198._0_4_ = (float)(dVar3 + (double)plVar6[4]);
  FUN_1449dacb8(param_2,param_1 + 0x102,&local_198,0);
  lVar7 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar7 = *(longlong *)(param_5 + 0x980);
  }
  FUN_1447e4b92(param_2,param_1 + 0x108,lVar7 + (longlong)param_3 * 4,0);
  local_198 = CONCAT44(local_198._4_4_,*(float *)((longlong)plVar6 + 0x164) * 7.0 + 1.0);
  FUN_1447e4b92(param_2,param_1 + 0x10e,&local_198,0);
  local_1a0 = (float)(*(double *)(param_5 + 0xa20) / *(double *)(param_5 + 0xa40));
  local_1a4 = (float)(1.0 / *(double *)(param_5 + 0xa40));
  local_190 = *(float *)(param_5 + 0x10e0);
  local_198 = *(longlong *)(param_5 + 0x10d8);
  FUN_1447f9a48(param_2,param_1 + 0x114,&local_198,0);
  puVar10 = (undefined8 *)0x0;
  FUN_1472f9f03(param_2,param_1 + 0x11a,&local_1a4,0);
  if (*(short *)(param_1 + 0x120) != -1) {
    puVar10 = &local_198;
    local_198 = param_6;
    local_1b8 = &local_19a;
    local_19a = *(short *)(param_1 + 0x120);
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  if (*(short *)(param_1 + 0x122) != -1) {
    lVar7 = *(longlong *)(*(longlong *)(param_4 + 0x118d0) + 0x10);
    if (lVar7 == 0) {
      puVar10 = &local_198;
      local_1b8 = &local_19a;
      local_19a = *(short *)(param_1 + 0x122);
      local_198 = lVar7;
      FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
    }
    else {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
      if (*(short *)(param_1 + 0x122) != -1) {
        puVar10 = &local_198;
        local_1b8 = &local_19a;
        local_19a = *(short *)(param_1 + 0x122);
        local_198 = lVar7;
        FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
        if (lVar7 == 0) goto LAB_1473044f6;
      }
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
LAB_1473044f6:
  plVar6 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x3e0))();
  }
  FUN_144775e63(param_2,param_1 + 0xfe,DAT_14c9c0d80);
  lVar7 = FUN_1449dab10();
  uVar11 = *(ulonglong *)(param_1 + 0xa0);
  uVar9 = param_1 + 0xa0 + ((longlong)uVar11 >> 0x18);
  if ((uVar11 & 1) == 0) {
    uVar9 = uVar11;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar8 = 0;
    do {
      if (*(longlong *)(uVar9 + lVar8 * 4) == *(longlong *)(lVar7 + 0x28)) {
        uVar11 = *(ulonglong *)(param_1 + 0xb0);
        uVar9 = param_1 + 0xb0 + ((longlong)uVar11 >> 0x18);
        if ((uVar11 & 1) == 0) {
          uVar9 = uVar11;
        }
        psVar13 = (short *)(uVar9 + lVar8);
        goto LAB_147304598;
      }
      lVar8 = lVar8 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar8);
  }
  psVar13 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_147304598:
  local_19a = *psVar13;
  if (local_19a != -1) {
    if (*(longlong *)(param_4 + 0x11f90) == 0) {
      uVar12 = 0;
    }
    else {
      uVar11 = CONCAT71((int7)((ulonglong)puVar10 >> 8),
                        *(undefined1 *)(*(longlong *)(param_4 + 0x11f90) + 0xc)) &
               0xffffffffffffff02;
      uVar12 = CONCAT71((int7)(uVar11 >> 8),(byte)uVar11 >> 1);
    }
    local_1b8 = (short *)((ulonglong)local_1b8 & 0xffffffff00000000);
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),uVar12);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14730469f FUN_14730469f body=310 status=ok
// SIG undefined FUN_14730469f(void)

void FUN_14730469f(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_1473047d6(*param_2,lVar11,*param_4,param_5,*param_6,*param_7);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1473047d6 FUN_1473047d6 body=1134 status=ok
// SIG undefined FUN_1473047d6(void)

void FUN_1473047d6(longlong param_1,longlong *param_2,int param_3,longlong param_4,longlong param_5,
                  longlong param_6)

{
  uint *puVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  short *psVar13;
  undefined1 auStack_1d8 [32];
  short *local_1b8;
  float local_1a4;
  float local_1a0;
  short local_19a;
  undefined8 local_198;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar3 = *(double *)(param_4 + 0x1030);
  dVar4 = *(double *)(param_4 + 0x1038);
  dVar5 = *(double *)(param_4 + 0x1040);
  FUN_147303c92(param_1 + 0xe0,param_2,param_4,param_5);
  plVar6 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  local_18c = (float)(**(code **)(*plVar6 + 0x18))(plVar6);
  local_18c = 1.0 / local_18c;
  local_190 = (float)(dVar5 + (double)plVar6[6]);
  local_198._4_4_ = (float)(dVar4 + (double)plVar6[5]);
  local_198._0_4_ = (float)(dVar3 + (double)plVar6[4]);
  FUN_1449dacb8(param_2,param_1 + 0x102,&local_198,0);
  lVar7 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar7 = *(longlong *)(param_5 + 0x980);
  }
  FUN_1447e4b92(param_2,param_1 + 0x108,lVar7 + (longlong)param_3 * 4,0);
  local_198 = CONCAT44(local_198._4_4_,*(float *)((longlong)plVar6 + 0x164) * 7.0 + 1.0);
  FUN_1447e4b92(param_2,param_1 + 0x10e,&local_198,0);
  local_1a0 = (float)(*(double *)(param_5 + 0xa20) / *(double *)(param_5 + 0xa40));
  local_1a4 = (float)(1.0 / *(double *)(param_5 + 0xa40));
  local_190 = *(float *)(param_5 + 0x10e0);
  local_198 = *(longlong *)(param_5 + 0x10d8);
  FUN_1447f9a48(param_2,param_1 + 0x114,&local_198,0);
  puVar10 = (undefined8 *)0x0;
  FUN_1472f9f03(param_2,param_1 + 0x11a,&local_1a4,0);
  if (*(short *)(param_1 + 0x120) != -1) {
    puVar10 = &local_198;
    local_198 = param_6;
    local_1b8 = &local_19a;
    local_19a = *(short *)(param_1 + 0x120);
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  if (*(short *)(param_1 + 0x122) != -1) {
    lVar7 = *(longlong *)(*(longlong *)(param_4 + 0x118d0) + 0x10);
    if (lVar7 == 0) {
      puVar10 = &local_198;
      local_1b8 = &local_19a;
      local_19a = *(short *)(param_1 + 0x122);
      local_198 = lVar7;
      FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
    }
    else {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
      if (*(short *)(param_1 + 0x122) != -1) {
        puVar10 = &local_198;
        local_1b8 = &local_19a;
        local_19a = *(short *)(param_1 + 0x122);
        local_198 = lVar7;
        FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
        if (lVar7 == 0) goto LAB_147304a9c;
      }
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
LAB_147304a9c:
  plVar6 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x3e0))();
  }
  FUN_144775e63(param_2,param_1 + 0xfe,DAT_14c9c0d80);
  lVar7 = FUN_1449dab10();
  uVar11 = *(ulonglong *)(param_1 + 0xa0);
  uVar9 = param_1 + 0xa0 + ((longlong)uVar11 >> 0x18);
  if ((uVar11 & 1) == 0) {
    uVar9 = uVar11;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar8 = 0;
    do {
      if (*(longlong *)(uVar9 + lVar8 * 4) == *(longlong *)(lVar7 + 0x28)) {
        uVar11 = *(ulonglong *)(param_1 + 0xb0);
        uVar9 = param_1 + 0xb0 + ((longlong)uVar11 >> 0x18);
        if ((uVar11 & 1) == 0) {
          uVar9 = uVar11;
        }
        psVar13 = (short *)(uVar9 + lVar8);
        goto LAB_147304b3e;
      }
      lVar8 = lVar8 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar8);
  }
  psVar13 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_147304b3e:
  local_19a = *psVar13;
  if (local_19a != -1) {
    if (*(longlong *)(param_4 + 0x11f90) == 0) {
      uVar12 = 0;
    }
    else {
      uVar11 = CONCAT71((int7)((ulonglong)puVar10 >> 8),
                        *(undefined1 *)(*(longlong *)(param_4 + 0x11f90) + 0xc)) &
               0xffffffffffffff02;
      uVar12 = CONCAT71((int7)(uVar11 >> 8),(byte)uVar11 >> 1);
    }
    local_1b8 = (short *)((ulonglong)local_1b8 & 0xffffffff00000000);
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),uVar12);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147304c45 FUN_147304c45 body=310 status=ok
// SIG undefined FUN_147304c45(void)

void FUN_147304c45(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_147304d7c(*param_2,lVar11,*param_4,param_5,*param_6,*param_7);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147304d7c FUN_147304d7c body=1134 status=ok
// SIG undefined FUN_147304d7c(void)

void FUN_147304d7c(longlong param_1,longlong *param_2,int param_3,longlong param_4,longlong param_5,
                  longlong param_6)

{
  uint *puVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  short *psVar13;
  undefined1 auStack_1d8 [32];
  short *local_1b8;
  float local_1a4;
  float local_1a0;
  short local_19a;
  undefined8 local_198;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar3 = *(double *)(param_4 + 0x1030);
  dVar4 = *(double *)(param_4 + 0x1038);
  dVar5 = *(double *)(param_4 + 0x1040);
  FUN_147303c92(param_1 + 0xe0,param_2,param_4,param_5);
  plVar6 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  local_18c = (float)(**(code **)(*plVar6 + 0x18))(plVar6);
  local_18c = 1.0 / local_18c;
  local_190 = (float)(dVar5 + (double)plVar6[6]);
  local_198._4_4_ = (float)(dVar4 + (double)plVar6[5]);
  local_198._0_4_ = (float)(dVar3 + (double)plVar6[4]);
  FUN_1449dacb8(param_2,param_1 + 0x102,&local_198,0);
  lVar7 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar7 = *(longlong *)(param_5 + 0x980);
  }
  FUN_1447e4b92(param_2,param_1 + 0x108,lVar7 + (longlong)param_3 * 4,0);
  local_198 = CONCAT44(local_198._4_4_,*(float *)((longlong)plVar6 + 0x164) * 7.0 + 1.0);
  FUN_1447e4b92(param_2,param_1 + 0x10e,&local_198,0);
  local_1a0 = (float)(*(double *)(param_5 + 0xa20) / *(double *)(param_5 + 0xa40));
  local_1a4 = (float)(1.0 / *(double *)(param_5 + 0xa40));
  local_190 = *(float *)(param_5 + 0x10e0);
  local_198 = *(longlong *)(param_5 + 0x10d8);
  FUN_1447f9a48(param_2,param_1 + 0x114,&local_198,0);
  puVar10 = (undefined8 *)0x0;
  FUN_1472f9f03(param_2,param_1 + 0x11a,&local_1a4,0);
  if (*(short *)(param_1 + 0x120) != -1) {
    puVar10 = &local_198;
    local_198 = param_6;
    local_1b8 = &local_19a;
    local_19a = *(short *)(param_1 + 0x120);
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  if (*(short *)(param_1 + 0x122) != -1) {
    lVar7 = *(longlong *)(*(longlong *)(param_4 + 0x118d0) + 0x10);
    if (lVar7 == 0) {
      puVar10 = &local_198;
      local_1b8 = &local_19a;
      local_19a = *(short *)(param_1 + 0x122);
      local_198 = lVar7;
      FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
    }
    else {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
      if (*(short *)(param_1 + 0x122) != -1) {
        puVar10 = &local_198;
        local_1b8 = &local_19a;
        local_19a = *(short *)(param_1 + 0x122);
        local_198 = lVar7;
        FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
        if (lVar7 == 0) goto LAB_147305042;
      }
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
LAB_147305042:
  plVar6 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x3e0))();
  }
  FUN_144775e63(param_2,param_1 + 0xfe,DAT_14c9c0d80);
  lVar7 = FUN_1449dab10();
  uVar11 = *(ulonglong *)(param_1 + 0xa0);
  uVar9 = param_1 + 0xa0 + ((longlong)uVar11 >> 0x18);
  if ((uVar11 & 1) == 0) {
    uVar9 = uVar11;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar8 = 0;
    do {
      if (*(longlong *)(uVar9 + lVar8 * 4) == *(longlong *)(lVar7 + 0x28)) {
        uVar11 = *(ulonglong *)(param_1 + 0xb0);
        uVar9 = param_1 + 0xb0 + ((longlong)uVar11 >> 0x18);
        if ((uVar11 & 1) == 0) {
          uVar9 = uVar11;
        }
        psVar13 = (short *)(uVar9 + lVar8);
        goto LAB_1473050e4;
      }
      lVar8 = lVar8 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar8);
  }
  psVar13 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1473050e4:
  local_19a = *psVar13;
  if (local_19a != -1) {
    if (*(longlong *)(param_4 + 0x11f90) == 0) {
      uVar12 = 0;
    }
    else {
      uVar11 = CONCAT71((int7)((ulonglong)puVar10 >> 8),
                        *(undefined1 *)(*(longlong *)(param_4 + 0x11f90) + 0xc)) &
               0xffffffffffffff02;
      uVar12 = CONCAT71((int7)(uVar11 >> 8),(byte)uVar11 >> 1);
    }
    local_1b8 = (short *)((ulonglong)local_1b8 & 0xffffffff00000000);
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),uVar12);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473051eb FUN_1473051eb body=310 status=ok
// SIG undefined FUN_1473051eb(void)

void FUN_1473051eb(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_147305322(*param_2,lVar11,*param_4,param_5,*param_6,*param_7);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147305322 FUN_147305322 body=1134 status=ok
// SIG undefined FUN_147305322(void)

void FUN_147305322(longlong param_1,longlong *param_2,int param_3,longlong param_4,longlong param_5,
                  longlong param_6)

{
  uint *puVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  short *psVar13;
  undefined1 auStack_1d8 [32];
  short *local_1b8;
  float local_1a4;
  float local_1a0;
  short local_19a;
  undefined8 local_198;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar3 = *(double *)(param_4 + 0x1030);
  dVar4 = *(double *)(param_4 + 0x1038);
  dVar5 = *(double *)(param_4 + 0x1040);
  FUN_147303c92(param_1 + 0xe0,param_2,param_4,param_5);
  plVar6 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  local_18c = (float)(**(code **)(*plVar6 + 0x18))(plVar6);
  local_18c = 1.0 / local_18c;
  local_190 = (float)(dVar5 + (double)plVar6[6]);
  local_198._4_4_ = (float)(dVar4 + (double)plVar6[5]);
  local_198._0_4_ = (float)(dVar3 + (double)plVar6[4]);
  FUN_1449dacb8(param_2,param_1 + 0x102,&local_198,0);
  lVar7 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar7 = *(longlong *)(param_5 + 0x980);
  }
  FUN_1447e4b92(param_2,param_1 + 0x108,lVar7 + (longlong)param_3 * 4,0);
  local_198 = CONCAT44(local_198._4_4_,*(float *)((longlong)plVar6 + 0x164) * 7.0 + 1.0);
  FUN_1447e4b92(param_2,param_1 + 0x10e,&local_198,0);
  local_1a0 = (float)(*(double *)(param_5 + 0xa20) / *(double *)(param_5 + 0xa40));
  local_1a4 = (float)(1.0 / *(double *)(param_5 + 0xa40));
  local_190 = *(float *)(param_5 + 0x10e0);
  local_198 = *(longlong *)(param_5 + 0x10d8);
  FUN_1447f9a48(param_2,param_1 + 0x114,&local_198,0);
  puVar10 = (undefined8 *)0x0;
  FUN_1472f9f03(param_2,param_1 + 0x11a,&local_1a4,0);
  if (*(short *)(param_1 + 0x120) != -1) {
    puVar10 = &local_198;
    local_198 = param_6;
    local_1b8 = &local_19a;
    local_19a = *(short *)(param_1 + 0x120);
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  if (*(short *)(param_1 + 0x122) != -1) {
    lVar7 = *(longlong *)(*(longlong *)(param_4 + 0x118d0) + 0x10);
    if (lVar7 == 0) {
      puVar10 = &local_198;
      local_1b8 = &local_19a;
      local_19a = *(short *)(param_1 + 0x122);
      local_198 = lVar7;
      FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
    }
    else {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
      if (*(short *)(param_1 + 0x122) != -1) {
        puVar10 = &local_198;
        local_1b8 = &local_19a;
        local_19a = *(short *)(param_1 + 0x122);
        local_198 = lVar7;
        FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
        if (lVar7 == 0) goto LAB_1473055e8;
      }
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
LAB_1473055e8:
  plVar6 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x3e0))();
  }
  FUN_144775e63(param_2,param_1 + 0xfe,DAT_14c9c0d80);
  lVar7 = FUN_1449dab10();
  uVar11 = *(ulonglong *)(param_1 + 0xa0);
  uVar9 = param_1 + 0xa0 + ((longlong)uVar11 >> 0x18);
  if ((uVar11 & 1) == 0) {
    uVar9 = uVar11;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar8 = 0;
    do {
      if (*(longlong *)(uVar9 + lVar8 * 4) == *(longlong *)(lVar7 + 0x28)) {
        uVar11 = *(ulonglong *)(param_1 + 0xb0);
        uVar9 = param_1 + 0xb0 + ((longlong)uVar11 >> 0x18);
        if ((uVar11 & 1) == 0) {
          uVar9 = uVar11;
        }
        psVar13 = (short *)(uVar9 + lVar8);
        goto LAB_14730568a;
      }
      lVar8 = lVar8 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar8);
  }
  psVar13 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_14730568a:
  local_19a = *psVar13;
  if (local_19a != -1) {
    if (*(longlong *)(param_4 + 0x11f90) == 0) {
      uVar12 = 0;
    }
    else {
      uVar11 = CONCAT71((int7)((ulonglong)puVar10 >> 8),
                        *(undefined1 *)(*(longlong *)(param_4 + 0x11f90) + 0xc)) &
               0xffffffffffffff02;
      uVar12 = CONCAT71((int7)(uVar11 >> 8),(byte)uVar11 >> 1);
    }
    local_1b8 = (short *)((ulonglong)local_1b8 & 0xffffffff00000000);
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),uVar12);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147305791 FUN_147305791 body=310 status=ok
// SIG undefined FUN_147305791(void)

void FUN_147305791(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_1473058c8(*param_2,lVar11,*param_4,param_5,*param_6,*param_7);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1473058c8 FUN_1473058c8 body=1134 status=ok
// SIG undefined FUN_1473058c8(void)

void FUN_1473058c8(longlong param_1,longlong *param_2,int param_3,longlong param_4,longlong param_5,
                  longlong param_6)

{
  uint *puVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  short *psVar13;
  undefined1 auStack_1d8 [32];
  short *local_1b8;
  float local_1a4;
  float local_1a0;
  short local_19a;
  undefined8 local_198;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar3 = *(double *)(param_4 + 0x1030);
  dVar4 = *(double *)(param_4 + 0x1038);
  dVar5 = *(double *)(param_4 + 0x1040);
  FUN_147303c92(param_1 + 0xe0,param_2,param_4,param_5);
  plVar6 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  local_18c = (float)(**(code **)(*plVar6 + 0x18))(plVar6);
  local_18c = 1.0 / local_18c;
  local_190 = (float)(dVar5 + (double)plVar6[6]);
  local_198._4_4_ = (float)(dVar4 + (double)plVar6[5]);
  local_198._0_4_ = (float)(dVar3 + (double)plVar6[4]);
  FUN_1449dacb8(param_2,param_1 + 0x102,&local_198,0);
  lVar7 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar7 = *(longlong *)(param_5 + 0x980);
  }
  FUN_1447e4b92(param_2,param_1 + 0x108,lVar7 + (longlong)param_3 * 4,0);
  local_198 = CONCAT44(local_198._4_4_,*(float *)((longlong)plVar6 + 0x164) * 7.0 + 1.0);
  FUN_1447e4b92(param_2,param_1 + 0x10e,&local_198,0);
  local_1a0 = (float)(*(double *)(param_5 + 0xa20) / *(double *)(param_5 + 0xa40));
  local_1a4 = (float)(1.0 / *(double *)(param_5 + 0xa40));
  local_190 = *(float *)(param_5 + 0x10e0);
  local_198 = *(longlong *)(param_5 + 0x10d8);
  FUN_1447f9a48(param_2,param_1 + 0x114,&local_198,0);
  puVar10 = (undefined8 *)0x0;
  FUN_1472f9f03(param_2,param_1 + 0x11a,&local_1a4,0);
  if (*(short *)(param_1 + 0x120) != -1) {
    puVar10 = &local_198;
    local_198 = param_6;
    local_1b8 = &local_19a;
    local_19a = *(short *)(param_1 + 0x120);
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  if (*(short *)(param_1 + 0x122) != -1) {
    lVar7 = *(longlong *)(*(longlong *)(param_4 + 0x118d0) + 0x10);
    if (lVar7 == 0) {
      puVar10 = &local_198;
      local_1b8 = &local_19a;
      local_19a = *(short *)(param_1 + 0x122);
      local_198 = lVar7;
      FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
    }
    else {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
      if (*(short *)(param_1 + 0x122) != -1) {
        puVar10 = &local_198;
        local_1b8 = &local_19a;
        local_19a = *(short *)(param_1 + 0x122);
        local_198 = lVar7;
        FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
        if (lVar7 == 0) goto LAB_147305b8e;
      }
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
LAB_147305b8e:
  plVar6 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x3e0))();
  }
  FUN_144775e63(param_2,param_1 + 0xfe,DAT_14c9c0d80);
  lVar7 = FUN_1449dab10();
  uVar11 = *(ulonglong *)(param_1 + 0xa0);
  uVar9 = param_1 + 0xa0 + ((longlong)uVar11 >> 0x18);
  if ((uVar11 & 1) == 0) {
    uVar9 = uVar11;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar8 = 0;
    do {
      if (*(longlong *)(uVar9 + lVar8 * 4) == *(longlong *)(lVar7 + 0x28)) {
        uVar11 = *(ulonglong *)(param_1 + 0xb0);
        uVar9 = param_1 + 0xb0 + ((longlong)uVar11 >> 0x18);
        if ((uVar11 & 1) == 0) {
          uVar9 = uVar11;
        }
        psVar13 = (short *)(uVar9 + lVar8);
        goto LAB_147305c30;
      }
      lVar8 = lVar8 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar8);
  }
  psVar13 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_147305c30:
  local_19a = *psVar13;
  if (local_19a != -1) {
    if (*(longlong *)(param_4 + 0x11f90) == 0) {
      uVar12 = 0;
    }
    else {
      uVar11 = CONCAT71((int7)((ulonglong)puVar10 >> 8),
                        *(undefined1 *)(*(longlong *)(param_4 + 0x11f90) + 0xc)) &
               0xffffffffffffff02;
      uVar12 = CONCAT71((int7)(uVar11 >> 8),(byte)uVar11 >> 1);
    }
    local_1b8 = (short *)((ulonglong)local_1b8 & 0xffffffff00000000);
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),uVar12);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147305d37 FUN_147305d37 body=310 status=ok
// SIG undefined FUN_147305d37(void)

void FUN_147305d37(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_147305e6e(*param_2,lVar11,*param_4,param_5,*param_6,*param_7);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147305e6e FUN_147305e6e body=1134 status=ok
// SIG undefined FUN_147305e6e(void)

void FUN_147305e6e(longlong param_1,longlong *param_2,int param_3,longlong param_4,longlong param_5,
                  longlong param_6)

{
  uint *puVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  short *psVar13;
  undefined1 auStack_1d8 [32];
  short *local_1b8;
  float local_1a4;
  float local_1a0;
  short local_19a;
  undefined8 local_198;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar3 = *(double *)(param_4 + 0x1030);
  dVar4 = *(double *)(param_4 + 0x1038);
  dVar5 = *(double *)(param_4 + 0x1040);
  FUN_147303c92(param_1 + 0xe0,param_2,param_4,param_5);
  plVar6 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  local_18c = (float)(**(code **)(*plVar6 + 0x18))(plVar6);
  local_18c = 1.0 / local_18c;
  local_190 = (float)(dVar5 + (double)plVar6[6]);
  local_198._4_4_ = (float)(dVar4 + (double)plVar6[5]);
  local_198._0_4_ = (float)(dVar3 + (double)plVar6[4]);
  FUN_1449dacb8(param_2,param_1 + 0x102,&local_198,0);
  lVar7 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar7 = *(longlong *)(param_5 + 0x980);
  }
  FUN_1447e4b92(param_2,param_1 + 0x108,lVar7 + (longlong)param_3 * 4,0);
  local_198 = CONCAT44(local_198._4_4_,*(float *)((longlong)plVar6 + 0x164) * 7.0 + 1.0);
  FUN_1447e4b92(param_2,param_1 + 0x10e,&local_198,0);
  local_1a0 = (float)(*(double *)(param_5 + 0xa20) / *(double *)(param_5 + 0xa40));
  local_1a4 = (float)(1.0 / *(double *)(param_5 + 0xa40));
  local_190 = *(float *)(param_5 + 0x10e0);
  local_198 = *(longlong *)(param_5 + 0x10d8);
  FUN_1447f9a48(param_2,param_1 + 0x114,&local_198,0);
  puVar10 = (undefined8 *)0x0;
  FUN_1472f9f03(param_2,param_1 + 0x11a,&local_1a4,0);
  if (*(short *)(param_1 + 0x120) != -1) {
    puVar10 = &local_198;
    local_198 = param_6;
    local_1b8 = &local_19a;
    local_19a = *(short *)(param_1 + 0x120);
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  if (*(short *)(param_1 + 0x122) != -1) {
    lVar7 = *(longlong *)(*(longlong *)(param_4 + 0x118d0) + 0x10);
    if (lVar7 == 0) {
      puVar10 = &local_198;
      local_1b8 = &local_19a;
      local_19a = *(short *)(param_1 + 0x122);
      local_198 = lVar7;
      FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
    }
    else {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
      if (*(short *)(param_1 + 0x122) != -1) {
        puVar10 = &local_198;
        local_1b8 = &local_19a;
        local_19a = *(short *)(param_1 + 0x122);
        local_198 = lVar7;
        FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
        if (lVar7 == 0) goto LAB_147306134;
      }
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
LAB_147306134:
  plVar6 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x3e0))();
  }
  FUN_144775e63(param_2,param_1 + 0xfe,DAT_14c9c0d80);
  lVar7 = FUN_1449dab10();
  uVar11 = *(ulonglong *)(param_1 + 0xa0);
  uVar9 = param_1 + 0xa0 + ((longlong)uVar11 >> 0x18);
  if ((uVar11 & 1) == 0) {
    uVar9 = uVar11;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar8 = 0;
    do {
      if (*(longlong *)(uVar9 + lVar8 * 4) == *(longlong *)(lVar7 + 0x28)) {
        uVar11 = *(ulonglong *)(param_1 + 0xb0);
        uVar9 = param_1 + 0xb0 + ((longlong)uVar11 >> 0x18);
        if ((uVar11 & 1) == 0) {
          uVar9 = uVar11;
        }
        psVar13 = (short *)(uVar9 + lVar8);
        goto LAB_1473061d6;
      }
      lVar8 = lVar8 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar8);
  }
  psVar13 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1473061d6:
  local_19a = *psVar13;
  if (local_19a != -1) {
    if (*(longlong *)(param_4 + 0x11f90) == 0) {
      uVar12 = 0;
    }
    else {
      uVar11 = CONCAT71((int7)((ulonglong)puVar10 >> 8),
                        *(undefined1 *)(*(longlong *)(param_4 + 0x11f90) + 0xc)) &
               0xffffffffffffff02;
      uVar12 = CONCAT71((int7)(uVar11 >> 8),(byte)uVar11 >> 1);
    }
    local_1b8 = (short *)((ulonglong)local_1b8 & 0xffffffff00000000);
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),uVar12);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473062dd FUN_1473062dd body=310 status=ok
// SIG undefined FUN_1473062dd(void)

void FUN_1473062dd(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_147306414(*param_2,lVar11,*param_4,param_5,*param_6,*param_7);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147306414 FUN_147306414 body=1134 status=ok
// SIG undefined FUN_147306414(void)

void FUN_147306414(longlong param_1,longlong *param_2,int param_3,longlong param_4,longlong param_5,
                  longlong param_6)

{
  uint *puVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  short *psVar13;
  undefined1 auStack_1d8 [32];
  short *local_1b8;
  float local_1a4;
  float local_1a0;
  short local_19a;
  undefined8 local_198;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar3 = *(double *)(param_4 + 0x1030);
  dVar4 = *(double *)(param_4 + 0x1038);
  dVar5 = *(double *)(param_4 + 0x1040);
  FUN_147303c92(param_1 + 0xe0,param_2,param_4,param_5);
  plVar6 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  local_18c = (float)(**(code **)(*plVar6 + 0x18))(plVar6);
  local_18c = 1.0 / local_18c;
  local_190 = (float)(dVar5 + (double)plVar6[6]);
  local_198._4_4_ = (float)(dVar4 + (double)plVar6[5]);
  local_198._0_4_ = (float)(dVar3 + (double)plVar6[4]);
  FUN_1449dacb8(param_2,param_1 + 0x102,&local_198,0);
  lVar7 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar7 = *(longlong *)(param_5 + 0x980);
  }
  FUN_1447e4b92(param_2,param_1 + 0x108,lVar7 + (longlong)param_3 * 4,0);
  local_198 = CONCAT44(local_198._4_4_,*(float *)((longlong)plVar6 + 0x164) * 7.0 + 1.0);
  FUN_1447e4b92(param_2,param_1 + 0x10e,&local_198,0);
  local_1a0 = (float)(*(double *)(param_5 + 0xa20) / *(double *)(param_5 + 0xa40));
  local_1a4 = (float)(1.0 / *(double *)(param_5 + 0xa40));
  local_190 = *(float *)(param_5 + 0x10e0);
  local_198 = *(longlong *)(param_5 + 0x10d8);
  FUN_1447f9a48(param_2,param_1 + 0x114,&local_198,0);
  puVar10 = (undefined8 *)0x0;
  FUN_1472f9f03(param_2,param_1 + 0x11a,&local_1a4,0);
  if (*(short *)(param_1 + 0x120) != -1) {
    puVar10 = &local_198;
    local_198 = param_6;
    local_1b8 = &local_19a;
    local_19a = *(short *)(param_1 + 0x120);
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  if (*(short *)(param_1 + 0x122) != -1) {
    lVar7 = *(longlong *)(*(longlong *)(param_4 + 0x118d0) + 0x10);
    if (lVar7 == 0) {
      puVar10 = &local_198;
      local_1b8 = &local_19a;
      local_19a = *(short *)(param_1 + 0x122);
      local_198 = lVar7;
      FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
    }
    else {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
      if (*(short *)(param_1 + 0x122) != -1) {
        puVar10 = &local_198;
        local_1b8 = &local_19a;
        local_19a = *(short *)(param_1 + 0x122);
        local_198 = lVar7;
        FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
        if (lVar7 == 0) goto LAB_1473066da;
      }
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
LAB_1473066da:
  plVar6 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x3e0))();
  }
  FUN_144775e63(param_2,param_1 + 0xfe,DAT_14c9c0d80);
  lVar7 = FUN_1449dab10();
  uVar11 = *(ulonglong *)(param_1 + 0xa0);
  uVar9 = param_1 + 0xa0 + ((longlong)uVar11 >> 0x18);
  if ((uVar11 & 1) == 0) {
    uVar9 = uVar11;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar8 = 0;
    do {
      if (*(longlong *)(uVar9 + lVar8 * 4) == *(longlong *)(lVar7 + 0x28)) {
        uVar11 = *(ulonglong *)(param_1 + 0xb0);
        uVar9 = param_1 + 0xb0 + ((longlong)uVar11 >> 0x18);
        if ((uVar11 & 1) == 0) {
          uVar9 = uVar11;
        }
        psVar13 = (short *)(uVar9 + lVar8);
        goto LAB_14730677c;
      }
      lVar8 = lVar8 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar8);
  }
  psVar13 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_14730677c:
  local_19a = *psVar13;
  if (local_19a != -1) {
    if (*(longlong *)(param_4 + 0x11f90) == 0) {
      uVar12 = 0;
    }
    else {
      uVar11 = CONCAT71((int7)((ulonglong)puVar10 >> 8),
                        *(undefined1 *)(*(longlong *)(param_4 + 0x11f90) + 0xc)) &
               0xffffffffffffff02;
      uVar12 = CONCAT71((int7)(uVar11 >> 8),(byte)uVar11 >> 1);
    }
    local_1b8 = (short *)((ulonglong)local_1b8 & 0xffffffff00000000);
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),uVar12);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147306883 FUN_147306883 body=310 status=ok
// SIG undefined FUN_147306883(void)

void FUN_147306883(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_1473069ba(*param_2,lVar11,*param_4,param_5,*param_6,*param_7);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1473069ba FUN_1473069ba body=1134 status=ok
// SIG undefined FUN_1473069ba(void)

void FUN_1473069ba(longlong param_1,longlong *param_2,int param_3,longlong param_4,longlong param_5,
                  longlong param_6)

{
  uint *puVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  short *psVar13;
  undefined1 auStack_1d8 [32];
  short *local_1b8;
  float local_1a4;
  float local_1a0;
  short local_19a;
  undefined8 local_198;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar3 = *(double *)(param_4 + 0x1030);
  dVar4 = *(double *)(param_4 + 0x1038);
  dVar5 = *(double *)(param_4 + 0x1040);
  FUN_147303c92(param_1 + 0xe0,param_2,param_4,param_5);
  plVar6 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  local_18c = (float)(**(code **)(*plVar6 + 0x18))(plVar6);
  local_18c = 1.0 / local_18c;
  local_190 = (float)(dVar5 + (double)plVar6[6]);
  local_198._4_4_ = (float)(dVar4 + (double)plVar6[5]);
  local_198._0_4_ = (float)(dVar3 + (double)plVar6[4]);
  FUN_1449dacb8(param_2,param_1 + 0x102,&local_198,0);
  lVar7 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar7 = *(longlong *)(param_5 + 0x980);
  }
  FUN_1447e4b92(param_2,param_1 + 0x108,lVar7 + (longlong)param_3 * 4,0);
  local_198 = CONCAT44(local_198._4_4_,*(float *)((longlong)plVar6 + 0x164) * 7.0 + 1.0);
  FUN_1447e4b92(param_2,param_1 + 0x10e,&local_198,0);
  local_1a0 = (float)(*(double *)(param_5 + 0xa20) / *(double *)(param_5 + 0xa40));
  local_1a4 = (float)(1.0 / *(double *)(param_5 + 0xa40));
  local_190 = *(float *)(param_5 + 0x10e0);
  local_198 = *(longlong *)(param_5 + 0x10d8);
  FUN_1447f9a48(param_2,param_1 + 0x114,&local_198,0);
  puVar10 = (undefined8 *)0x0;
  FUN_1472f9f03(param_2,param_1 + 0x11a,&local_1a4,0);
  if (*(short *)(param_1 + 0x120) != -1) {
    puVar10 = &local_198;
    local_198 = param_6;
    local_1b8 = &local_19a;
    local_19a = *(short *)(param_1 + 0x120);
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  if (*(short *)(param_1 + 0x122) != -1) {
    lVar7 = *(longlong *)(*(longlong *)(param_4 + 0x118d0) + 0x10);
    if (lVar7 == 0) {
      puVar10 = &local_198;
      local_1b8 = &local_19a;
      local_19a = *(short *)(param_1 + 0x122);
      local_198 = lVar7;
      FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
    }
    else {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
      if (*(short *)(param_1 + 0x122) != -1) {
        puVar10 = &local_198;
        local_1b8 = &local_19a;
        local_19a = *(short *)(param_1 + 0x122);
        local_198 = lVar7;
        FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
        if (lVar7 == 0) goto LAB_147306c80;
      }
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
LAB_147306c80:
  plVar6 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x3e0))();
  }
  FUN_144775e63(param_2,param_1 + 0xfe,DAT_14c9c0d80);
  lVar7 = FUN_1449dab10();
  uVar11 = *(ulonglong *)(param_1 + 0xa0);
  uVar9 = param_1 + 0xa0 + ((longlong)uVar11 >> 0x18);
  if ((uVar11 & 1) == 0) {
    uVar9 = uVar11;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar8 = 0;
    do {
      if (*(longlong *)(uVar9 + lVar8 * 4) == *(longlong *)(lVar7 + 0x28)) {
        uVar11 = *(ulonglong *)(param_1 + 0xb0);
        uVar9 = param_1 + 0xb0 + ((longlong)uVar11 >> 0x18);
        if ((uVar11 & 1) == 0) {
          uVar9 = uVar11;
        }
        psVar13 = (short *)(uVar9 + lVar8);
        goto LAB_147306d22;
      }
      lVar8 = lVar8 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar8);
  }
  psVar13 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_147306d22:
  local_19a = *psVar13;
  if (local_19a != -1) {
    if (*(longlong *)(param_4 + 0x11f90) == 0) {
      uVar12 = 0;
    }
    else {
      uVar11 = CONCAT71((int7)((ulonglong)puVar10 >> 8),
                        *(undefined1 *)(*(longlong *)(param_4 + 0x11f90) + 0xc)) &
               0xffffffffffffff02;
      uVar12 = CONCAT71((int7)(uVar11 >> 8),(byte)uVar11 >> 1);
    }
    local_1b8 = (short *)((ulonglong)local_1b8 & 0xffffffff00000000);
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),uVar12);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147306e29 FUN_147306e29 body=310 status=ok
// SIG undefined FUN_147306e29(void)

void FUN_147306e29(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_147306f60(*param_2,lVar11,*param_4,param_5,*param_6,*param_7);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147306f60 FUN_147306f60 body=1134 status=ok
// SIG undefined FUN_147306f60(void)

void FUN_147306f60(longlong param_1,longlong *param_2,int param_3,longlong param_4,longlong param_5,
                  longlong param_6)

{
  uint *puVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  short *psVar13;
  undefined1 auStack_1d8 [32];
  short *local_1b8;
  float local_1a4;
  float local_1a0;
  short local_19a;
  undefined8 local_198;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar3 = *(double *)(param_4 + 0x1030);
  dVar4 = *(double *)(param_4 + 0x1038);
  dVar5 = *(double *)(param_4 + 0x1040);
  FUN_147303c92(param_1 + 0xe0,param_2,param_4,param_5);
  plVar6 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  local_18c = (float)(**(code **)(*plVar6 + 0x18))(plVar6);
  local_18c = 1.0 / local_18c;
  local_190 = (float)(dVar5 + (double)plVar6[6]);
  local_198._4_4_ = (float)(dVar4 + (double)plVar6[5]);
  local_198._0_4_ = (float)(dVar3 + (double)plVar6[4]);
  FUN_1449dacb8(param_2,param_1 + 0x102,&local_198,0);
  lVar7 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar7 = *(longlong *)(param_5 + 0x980);
  }
  FUN_1447e4b92(param_2,param_1 + 0x108,lVar7 + (longlong)param_3 * 4,0);
  local_198 = CONCAT44(local_198._4_4_,*(float *)((longlong)plVar6 + 0x164) * 7.0 + 1.0);
  FUN_1447e4b92(param_2,param_1 + 0x10e,&local_198,0);
  local_1a0 = (float)(*(double *)(param_5 + 0xa20) / *(double *)(param_5 + 0xa40));
  local_1a4 = (float)(1.0 / *(double *)(param_5 + 0xa40));
  local_190 = *(float *)(param_5 + 0x10e0);
  local_198 = *(longlong *)(param_5 + 0x10d8);
  FUN_1447f9a48(param_2,param_1 + 0x114,&local_198,0);
  puVar10 = (undefined8 *)0x0;
  FUN_1472f9f03(param_2,param_1 + 0x11a,&local_1a4,0);
  if (*(short *)(param_1 + 0x120) != -1) {
    puVar10 = &local_198;
    local_198 = param_6;
    local_1b8 = &local_19a;
    local_19a = *(short *)(param_1 + 0x120);
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  if (*(short *)(param_1 + 0x122) != -1) {
    lVar7 = *(longlong *)(*(longlong *)(param_4 + 0x118d0) + 0x10);
    if (lVar7 == 0) {
      puVar10 = &local_198;
      local_1b8 = &local_19a;
      local_19a = *(short *)(param_1 + 0x122);
      local_198 = lVar7;
      FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
    }
    else {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
      if (*(short *)(param_1 + 0x122) != -1) {
        puVar10 = &local_198;
        local_1b8 = &local_19a;
        local_19a = *(short *)(param_1 + 0x122);
        local_198 = lVar7;
        FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
        if (lVar7 == 0) goto LAB_147307226;
      }
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
LAB_147307226:
  plVar6 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x3e0))();
  }
  FUN_144775e63(param_2,param_1 + 0xfe,DAT_14c9c0d80);
  lVar7 = FUN_1449dab10();
  uVar11 = *(ulonglong *)(param_1 + 0xa0);
  uVar9 = param_1 + 0xa0 + ((longlong)uVar11 >> 0x18);
  if ((uVar11 & 1) == 0) {
    uVar9 = uVar11;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar8 = 0;
    do {
      if (*(longlong *)(uVar9 + lVar8 * 4) == *(longlong *)(lVar7 + 0x28)) {
        uVar11 = *(ulonglong *)(param_1 + 0xb0);
        uVar9 = param_1 + 0xb0 + ((longlong)uVar11 >> 0x18);
        if ((uVar11 & 1) == 0) {
          uVar9 = uVar11;
        }
        psVar13 = (short *)(uVar9 + lVar8);
        goto LAB_1473072c8;
      }
      lVar8 = lVar8 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar8);
  }
  psVar13 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1473072c8:
  local_19a = *psVar13;
  if (local_19a != -1) {
    if (*(longlong *)(param_4 + 0x11f90) == 0) {
      uVar12 = 0;
    }
    else {
      uVar11 = CONCAT71((int7)((ulonglong)puVar10 >> 8),
                        *(undefined1 *)(*(longlong *)(param_4 + 0x11f90) + 0xc)) &
               0xffffffffffffff02;
      uVar12 = CONCAT71((int7)(uVar11 >> 8),(byte)uVar11 >> 1);
    }
    local_1b8 = (short *)((ulonglong)local_1b8 & 0xffffffff00000000);
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),uVar12);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473073cf FUN_1473073cf body=310 status=ok
// SIG undefined FUN_1473073cf(void)

void FUN_1473073cf(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_147307506(*param_2,lVar11,*param_4,param_5,*param_6,*param_7);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147307506 FUN_147307506 body=1134 status=ok
// SIG undefined FUN_147307506(void)

void FUN_147307506(longlong param_1,longlong *param_2,int param_3,longlong param_4,longlong param_5,
                  longlong param_6)

{
  uint *puVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  short *psVar13;
  undefined1 auStack_1d8 [32];
  short *local_1b8;
  float local_1a4;
  float local_1a0;
  short local_19a;
  undefined8 local_198;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar3 = *(double *)(param_4 + 0x1030);
  dVar4 = *(double *)(param_4 + 0x1038);
  dVar5 = *(double *)(param_4 + 0x1040);
  FUN_147303c92(param_1 + 0xe0,param_2,param_4,param_5);
  plVar6 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  local_18c = (float)(**(code **)(*plVar6 + 0x18))(plVar6);
  local_18c = 1.0 / local_18c;
  local_190 = (float)(dVar5 + (double)plVar6[6]);
  local_198._4_4_ = (float)(dVar4 + (double)plVar6[5]);
  local_198._0_4_ = (float)(dVar3 + (double)plVar6[4]);
  FUN_1449dacb8(param_2,param_1 + 0x102,&local_198,0);
  lVar7 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar7 = *(longlong *)(param_5 + 0x980);
  }
  FUN_1447e4b92(param_2,param_1 + 0x108,lVar7 + (longlong)param_3 * 4,0);
  local_198 = CONCAT44(local_198._4_4_,*(float *)((longlong)plVar6 + 0x164) * 7.0 + 1.0);
  FUN_1447e4b92(param_2,param_1 + 0x10e,&local_198,0);
  local_1a0 = (float)(*(double *)(param_5 + 0xa20) / *(double *)(param_5 + 0xa40));
  local_1a4 = (float)(1.0 / *(double *)(param_5 + 0xa40));
  local_190 = *(float *)(param_5 + 0x10e0);
  local_198 = *(longlong *)(param_5 + 0x10d8);
  FUN_1447f9a48(param_2,param_1 + 0x114,&local_198,0);
  puVar10 = (undefined8 *)0x0;
  FUN_1472f9f03(param_2,param_1 + 0x11a,&local_1a4,0);
  if (*(short *)(param_1 + 0x120) != -1) {
    puVar10 = &local_198;
    local_198 = param_6;
    local_1b8 = &local_19a;
    local_19a = *(short *)(param_1 + 0x120);
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  if (*(short *)(param_1 + 0x122) != -1) {
    lVar7 = *(longlong *)(*(longlong *)(param_4 + 0x118d0) + 0x10);
    if (lVar7 == 0) {
      puVar10 = &local_198;
      local_1b8 = &local_19a;
      local_19a = *(short *)(param_1 + 0x122);
      local_198 = lVar7;
      FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
    }
    else {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
      if (*(short *)(param_1 + 0x122) != -1) {
        puVar10 = &local_198;
        local_1b8 = &local_19a;
        local_19a = *(short *)(param_1 + 0x122);
        local_198 = lVar7;
        FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
        if (lVar7 == 0) goto LAB_1473077cc;
      }
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
LAB_1473077cc:
  plVar6 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x3e0))();
  }
  FUN_144775e63(param_2,param_1 + 0xfe,DAT_14c9c0d80);
  lVar7 = FUN_1449dab10();
  uVar11 = *(ulonglong *)(param_1 + 0xa0);
  uVar9 = param_1 + 0xa0 + ((longlong)uVar11 >> 0x18);
  if ((uVar11 & 1) == 0) {
    uVar9 = uVar11;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar8 = 0;
    do {
      if (*(longlong *)(uVar9 + lVar8 * 4) == *(longlong *)(lVar7 + 0x28)) {
        uVar11 = *(ulonglong *)(param_1 + 0xb0);
        uVar9 = param_1 + 0xb0 + ((longlong)uVar11 >> 0x18);
        if ((uVar11 & 1) == 0) {
          uVar9 = uVar11;
        }
        psVar13 = (short *)(uVar9 + lVar8);
        goto LAB_14730786e;
      }
      lVar8 = lVar8 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar8);
  }
  psVar13 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_14730786e:
  local_19a = *psVar13;
  if (local_19a != -1) {
    if (*(longlong *)(param_4 + 0x11f90) == 0) {
      uVar12 = 0;
    }
    else {
      uVar11 = CONCAT71((int7)((ulonglong)puVar10 >> 8),
                        *(undefined1 *)(*(longlong *)(param_4 + 0x11f90) + 0xc)) &
               0xffffffffffffff02;
      uVar12 = CONCAT71((int7)(uVar11 >> 8),(byte)uVar11 >> 1);
    }
    local_1b8 = (short *)((ulonglong)local_1b8 & 0xffffffff00000000);
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),uVar12);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147307975 FUN_147307975 body=310 status=ok
// SIG undefined FUN_147307975(void)

void FUN_147307975(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_147307aac(*param_2,lVar11,*param_4,param_5,*param_6,*param_7);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147307aac FUN_147307aac body=1134 status=ok
// SIG undefined FUN_147307aac(void)

void FUN_147307aac(longlong param_1,longlong *param_2,int param_3,longlong param_4,longlong param_5,
                  longlong param_6)

{
  uint *puVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  short *psVar13;
  undefined1 auStack_1d8 [32];
  short *local_1b8;
  float local_1a4;
  float local_1a0;
  short local_19a;
  undefined8 local_198;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar3 = *(double *)(param_4 + 0x1030);
  dVar4 = *(double *)(param_4 + 0x1038);
  dVar5 = *(double *)(param_4 + 0x1040);
  FUN_147303c92(param_1 + 0xe0,param_2,param_4,param_5);
  plVar6 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  local_18c = (float)(**(code **)(*plVar6 + 0x18))(plVar6);
  local_18c = 1.0 / local_18c;
  local_190 = (float)(dVar5 + (double)plVar6[6]);
  local_198._4_4_ = (float)(dVar4 + (double)plVar6[5]);
  local_198._0_4_ = (float)(dVar3 + (double)plVar6[4]);
  FUN_1449dacb8(param_2,param_1 + 0x102,&local_198,0);
  lVar7 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar7 = *(longlong *)(param_5 + 0x980);
  }
  FUN_1447e4b92(param_2,param_1 + 0x108,lVar7 + (longlong)param_3 * 4,0);
  local_198 = CONCAT44(local_198._4_4_,*(float *)((longlong)plVar6 + 0x164) * 7.0 + 1.0);
  FUN_1447e4b92(param_2,param_1 + 0x10e,&local_198,0);
  local_1a0 = (float)(*(double *)(param_5 + 0xa20) / *(double *)(param_5 + 0xa40));
  local_1a4 = (float)(1.0 / *(double *)(param_5 + 0xa40));
  local_190 = *(float *)(param_5 + 0x10e0);
  local_198 = *(longlong *)(param_5 + 0x10d8);
  FUN_1447f9a48(param_2,param_1 + 0x114,&local_198,0);
  puVar10 = (undefined8 *)0x0;
  FUN_1472f9f03(param_2,param_1 + 0x11a,&local_1a4,0);
  if (*(short *)(param_1 + 0x120) != -1) {
    puVar10 = &local_198;
    local_198 = param_6;
    local_1b8 = &local_19a;
    local_19a = *(short *)(param_1 + 0x120);
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  if (*(short *)(param_1 + 0x122) != -1) {
    lVar7 = *(longlong *)(*(longlong *)(param_4 + 0x118d0) + 0x10);
    if (lVar7 == 0) {
      puVar10 = &local_198;
      local_1b8 = &local_19a;
      local_19a = *(short *)(param_1 + 0x122);
      local_198 = lVar7;
      FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
    }
    else {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
      if (*(short *)(param_1 + 0x122) != -1) {
        puVar10 = &local_198;
        local_1b8 = &local_19a;
        local_19a = *(short *)(param_1 + 0x122);
        local_198 = lVar7;
        FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
        if (lVar7 == 0) goto LAB_147307d72;
      }
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
LAB_147307d72:
  plVar6 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x3e0))();
  }
  FUN_144775e63(param_2,param_1 + 0xfe,DAT_14c9c0d80);
  lVar7 = FUN_1449dab10();
  uVar11 = *(ulonglong *)(param_1 + 0xa0);
  uVar9 = param_1 + 0xa0 + ((longlong)uVar11 >> 0x18);
  if ((uVar11 & 1) == 0) {
    uVar9 = uVar11;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar8 = 0;
    do {
      if (*(longlong *)(uVar9 + lVar8 * 4) == *(longlong *)(lVar7 + 0x28)) {
        uVar11 = *(ulonglong *)(param_1 + 0xb0);
        uVar9 = param_1 + 0xb0 + ((longlong)uVar11 >> 0x18);
        if ((uVar11 & 1) == 0) {
          uVar9 = uVar11;
        }
        psVar13 = (short *)(uVar9 + lVar8);
        goto LAB_147307e14;
      }
      lVar8 = lVar8 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar8);
  }
  psVar13 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_147307e14:
  local_19a = *psVar13;
  if (local_19a != -1) {
    if (*(longlong *)(param_4 + 0x11f90) == 0) {
      uVar12 = 0;
    }
    else {
      uVar11 = CONCAT71((int7)((ulonglong)puVar10 >> 8),
                        *(undefined1 *)(*(longlong *)(param_4 + 0x11f90) + 0xc)) &
               0xffffffffffffff02;
      uVar12 = CONCAT71((int7)(uVar11 >> 8),(byte)uVar11 >> 1);
    }
    local_1b8 = (short *)((ulonglong)local_1b8 & 0xffffffff00000000);
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),uVar12);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147307f1b FUN_147307f1b body=310 status=ok
// SIG undefined FUN_147307f1b(void)

void FUN_147307f1b(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_147308052(*param_2,lVar11,*param_4,param_5,*param_6,*param_7);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147308052 FUN_147308052 body=1134 status=ok
// SIG undefined FUN_147308052(void)

void FUN_147308052(longlong param_1,longlong *param_2,int param_3,longlong param_4,longlong param_5,
                  longlong param_6)

{
  uint *puVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  short *psVar13;
  undefined1 auStack_1d8 [32];
  short *local_1b8;
  float local_1a4;
  float local_1a0;
  short local_19a;
  undefined8 local_198;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar3 = *(double *)(param_4 + 0x1030);
  dVar4 = *(double *)(param_4 + 0x1038);
  dVar5 = *(double *)(param_4 + 0x1040);
  FUN_147303c92(param_1 + 0xe0,param_2,param_4,param_5);
  plVar6 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  local_18c = (float)(**(code **)(*plVar6 + 0x18))(plVar6);
  local_18c = 1.0 / local_18c;
  local_190 = (float)(dVar5 + (double)plVar6[6]);
  local_198._4_4_ = (float)(dVar4 + (double)plVar6[5]);
  local_198._0_4_ = (float)(dVar3 + (double)plVar6[4]);
  FUN_1449dacb8(param_2,param_1 + 0x102,&local_198,0);
  lVar7 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar7 = *(longlong *)(param_5 + 0x980);
  }
  FUN_1447e4b92(param_2,param_1 + 0x108,lVar7 + (longlong)param_3 * 4,0);
  local_198 = CONCAT44(local_198._4_4_,*(float *)((longlong)plVar6 + 0x164) * 7.0 + 1.0);
  FUN_1447e4b92(param_2,param_1 + 0x10e,&local_198,0);
  local_1a0 = (float)(*(double *)(param_5 + 0xa20) / *(double *)(param_5 + 0xa40));
  local_1a4 = (float)(1.0 / *(double *)(param_5 + 0xa40));
  local_190 = *(float *)(param_5 + 0x10e0);
  local_198 = *(longlong *)(param_5 + 0x10d8);
  FUN_1447f9a48(param_2,param_1 + 0x114,&local_198,0);
  puVar10 = (undefined8 *)0x0;
  FUN_1472f9f03(param_2,param_1 + 0x11a,&local_1a4,0);
  if (*(short *)(param_1 + 0x120) != -1) {
    puVar10 = &local_198;
    local_198 = param_6;
    local_1b8 = &local_19a;
    local_19a = *(short *)(param_1 + 0x120);
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  if (*(short *)(param_1 + 0x122) != -1) {
    lVar7 = *(longlong *)(*(longlong *)(param_4 + 0x118d0) + 0x10);
    if (lVar7 == 0) {
      puVar10 = &local_198;
      local_1b8 = &local_19a;
      local_19a = *(short *)(param_1 + 0x122);
      local_198 = lVar7;
      FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
    }
    else {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
      if (*(short *)(param_1 + 0x122) != -1) {
        puVar10 = &local_198;
        local_1b8 = &local_19a;
        local_19a = *(short *)(param_1 + 0x122);
        local_198 = lVar7;
        FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
        if (lVar7 == 0) goto LAB_147308318;
      }
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
LAB_147308318:
  plVar6 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x3e0))();
  }
  FUN_144775e63(param_2,param_1 + 0xfe,DAT_14c9c0d80);
  lVar7 = FUN_1449dab10();
  uVar11 = *(ulonglong *)(param_1 + 0xa0);
  uVar9 = param_1 + 0xa0 + ((longlong)uVar11 >> 0x18);
  if ((uVar11 & 1) == 0) {
    uVar9 = uVar11;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar8 = 0;
    do {
      if (*(longlong *)(uVar9 + lVar8 * 4) == *(longlong *)(lVar7 + 0x28)) {
        uVar11 = *(ulonglong *)(param_1 + 0xb0);
        uVar9 = param_1 + 0xb0 + ((longlong)uVar11 >> 0x18);
        if ((uVar11 & 1) == 0) {
          uVar9 = uVar11;
        }
        psVar13 = (short *)(uVar9 + lVar8);
        goto LAB_1473083ba;
      }
      lVar8 = lVar8 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar8);
  }
  psVar13 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1473083ba:
  local_19a = *psVar13;
  if (local_19a != -1) {
    if (*(longlong *)(param_4 + 0x11f90) == 0) {
      uVar12 = 0;
    }
    else {
      uVar11 = CONCAT71((int7)((ulonglong)puVar10 >> 8),
                        *(undefined1 *)(*(longlong *)(param_4 + 0x11f90) + 0xc)) &
               0xffffffffffffff02;
      uVar12 = CONCAT71((int7)(uVar11 >> 8),(byte)uVar11 >> 1);
    }
    local_1b8 = (short *)((ulonglong)local_1b8 & 0xffffffff00000000);
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),uVar12);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473084c1 FUN_1473084c1 body=310 status=ok
// SIG undefined FUN_1473084c1(void)

void FUN_1473084c1(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_1473085f8(*param_2,lVar11,*param_4,param_5,*param_6,*param_7);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1473085f8 FUN_1473085f8 body=1134 status=ok
// SIG undefined FUN_1473085f8(void)

void FUN_1473085f8(longlong param_1,longlong *param_2,int param_3,longlong param_4,longlong param_5,
                  longlong param_6)

{
  uint *puVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  short *psVar13;
  undefined1 auStack_1d8 [32];
  short *local_1b8;
  float local_1a4;
  float local_1a0;
  short local_19a;
  undefined8 local_198;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar3 = *(double *)(param_4 + 0x1030);
  dVar4 = *(double *)(param_4 + 0x1038);
  dVar5 = *(double *)(param_4 + 0x1040);
  FUN_147303c92(param_1 + 0xe0,param_2,param_4,param_5);
  plVar6 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  local_18c = (float)(**(code **)(*plVar6 + 0x18))(plVar6);
  local_18c = 1.0 / local_18c;
  local_190 = (float)(dVar5 + (double)plVar6[6]);
  local_198._4_4_ = (float)(dVar4 + (double)plVar6[5]);
  local_198._0_4_ = (float)(dVar3 + (double)plVar6[4]);
  FUN_1449dacb8(param_2,param_1 + 0x102,&local_198,0);
  lVar7 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar7 = *(longlong *)(param_5 + 0x980);
  }
  FUN_1447e4b92(param_2,param_1 + 0x108,lVar7 + (longlong)param_3 * 4,0);
  local_198 = CONCAT44(local_198._4_4_,*(float *)((longlong)plVar6 + 0x164) * 7.0 + 1.0);
  FUN_1447e4b92(param_2,param_1 + 0x10e,&local_198,0);
  local_1a0 = (float)(*(double *)(param_5 + 0xa20) / *(double *)(param_5 + 0xa40));
  local_1a4 = (float)(1.0 / *(double *)(param_5 + 0xa40));
  local_190 = *(float *)(param_5 + 0x10e0);
  local_198 = *(longlong *)(param_5 + 0x10d8);
  FUN_1447f9a48(param_2,param_1 + 0x114,&local_198,0);
  puVar10 = (undefined8 *)0x0;
  FUN_1472f9f03(param_2,param_1 + 0x11a,&local_1a4,0);
  if (*(short *)(param_1 + 0x120) != -1) {
    puVar10 = &local_198;
    local_198 = param_6;
    local_1b8 = &local_19a;
    local_19a = *(short *)(param_1 + 0x120);
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  if (*(short *)(param_1 + 0x122) != -1) {
    lVar7 = *(longlong *)(*(longlong *)(param_4 + 0x118d0) + 0x10);
    if (lVar7 == 0) {
      puVar10 = &local_198;
      local_1b8 = &local_19a;
      local_19a = *(short *)(param_1 + 0x122);
      local_198 = lVar7;
      FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
    }
    else {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
      if (*(short *)(param_1 + 0x122) != -1) {
        puVar10 = &local_198;
        local_1b8 = &local_19a;
        local_19a = *(short *)(param_1 + 0x122);
        local_198 = lVar7;
        FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
        if (lVar7 == 0) goto LAB_1473088be;
      }
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
LAB_1473088be:
  plVar6 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x3e0))();
  }
  FUN_144775e63(param_2,param_1 + 0xfe,DAT_14c9c0d80);
  lVar7 = FUN_1449dab10();
  uVar11 = *(ulonglong *)(param_1 + 0xa0);
  uVar9 = param_1 + 0xa0 + ((longlong)uVar11 >> 0x18);
  if ((uVar11 & 1) == 0) {
    uVar9 = uVar11;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar8 = 0;
    do {
      if (*(longlong *)(uVar9 + lVar8 * 4) == *(longlong *)(lVar7 + 0x28)) {
        uVar11 = *(ulonglong *)(param_1 + 0xb0);
        uVar9 = param_1 + 0xb0 + ((longlong)uVar11 >> 0x18);
        if ((uVar11 & 1) == 0) {
          uVar9 = uVar11;
        }
        psVar13 = (short *)(uVar9 + lVar8);
        goto LAB_147308960;
      }
      lVar8 = lVar8 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar8);
  }
  psVar13 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_147308960:
  local_19a = *psVar13;
  if (local_19a != -1) {
    if (*(longlong *)(param_4 + 0x11f90) == 0) {
      uVar12 = 0;
    }
    else {
      uVar11 = CONCAT71((int7)((ulonglong)puVar10 >> 8),
                        *(undefined1 *)(*(longlong *)(param_4 + 0x11f90) + 0xc)) &
               0xffffffffffffff02;
      uVar12 = CONCAT71((int7)(uVar11 >> 8),(byte)uVar11 >> 1);
    }
    local_1b8 = (short *)((ulonglong)local_1b8 & 0xffffffff00000000);
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),uVar12);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147308a67 FUN_147308a67 body=310 status=ok
// SIG undefined FUN_147308a67(void)

void FUN_147308a67(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_147308b9e(*param_2,lVar11,*param_4,param_5,*param_6,*param_7);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147308b9e FUN_147308b9e body=1134 status=ok
// SIG undefined FUN_147308b9e(void)

void FUN_147308b9e(longlong param_1,longlong *param_2,int param_3,longlong param_4,longlong param_5,
                  longlong param_6)

{
  uint *puVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  short *psVar13;
  undefined1 auStack_1d8 [32];
  short *local_1b8;
  float local_1a4;
  float local_1a0;
  short local_19a;
  undefined8 local_198;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar3 = *(double *)(param_4 + 0x1030);
  dVar4 = *(double *)(param_4 + 0x1038);
  dVar5 = *(double *)(param_4 + 0x1040);
  FUN_147303c92(param_1 + 0xe0,param_2,param_4,param_5);
  plVar6 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  local_18c = (float)(**(code **)(*plVar6 + 0x18))(plVar6);
  local_18c = 1.0 / local_18c;
  local_190 = (float)(dVar5 + (double)plVar6[6]);
  local_198._4_4_ = (float)(dVar4 + (double)plVar6[5]);
  local_198._0_4_ = (float)(dVar3 + (double)plVar6[4]);
  FUN_1449dacb8(param_2,param_1 + 0x102,&local_198,0);
  lVar7 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar7 = *(longlong *)(param_5 + 0x980);
  }
  FUN_1447e4b92(param_2,param_1 + 0x108,lVar7 + (longlong)param_3 * 4,0);
  local_198 = CONCAT44(local_198._4_4_,*(float *)((longlong)plVar6 + 0x164) * 7.0 + 1.0);
  FUN_1447e4b92(param_2,param_1 + 0x10e,&local_198,0);
  local_1a0 = (float)(*(double *)(param_5 + 0xa20) / *(double *)(param_5 + 0xa40));
  local_1a4 = (float)(1.0 / *(double *)(param_5 + 0xa40));
  local_190 = *(float *)(param_5 + 0x10e0);
  local_198 = *(longlong *)(param_5 + 0x10d8);
  FUN_1447f9a48(param_2,param_1 + 0x114,&local_198,0);
  puVar10 = (undefined8 *)0x0;
  FUN_1472f9f03(param_2,param_1 + 0x11a,&local_1a4,0);
  if (*(short *)(param_1 + 0x120) != -1) {
    puVar10 = &local_198;
    local_198 = param_6;
    local_1b8 = &local_19a;
    local_19a = *(short *)(param_1 + 0x120);
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  if (*(short *)(param_1 + 0x122) != -1) {
    lVar7 = *(longlong *)(*(longlong *)(param_4 + 0x118d0) + 0x10);
    if (lVar7 == 0) {
      puVar10 = &local_198;
      local_1b8 = &local_19a;
      local_19a = *(short *)(param_1 + 0x122);
      local_198 = lVar7;
      FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
    }
    else {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
      if (*(short *)(param_1 + 0x122) != -1) {
        puVar10 = &local_198;
        local_1b8 = &local_19a;
        local_19a = *(short *)(param_1 + 0x122);
        local_198 = lVar7;
        FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
        if (lVar7 == 0) goto LAB_147308e64;
      }
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
LAB_147308e64:
  plVar6 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x3e0))();
  }
  FUN_144775e63(param_2,param_1 + 0xfe,DAT_14c9c0d80);
  lVar7 = FUN_1449dab10();
  uVar11 = *(ulonglong *)(param_1 + 0xa0);
  uVar9 = param_1 + 0xa0 + ((longlong)uVar11 >> 0x18);
  if ((uVar11 & 1) == 0) {
    uVar9 = uVar11;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar8 = 0;
    do {
      if (*(longlong *)(uVar9 + lVar8 * 4) == *(longlong *)(lVar7 + 0x28)) {
        uVar11 = *(ulonglong *)(param_1 + 0xb0);
        uVar9 = param_1 + 0xb0 + ((longlong)uVar11 >> 0x18);
        if ((uVar11 & 1) == 0) {
          uVar9 = uVar11;
        }
        psVar13 = (short *)(uVar9 + lVar8);
        goto LAB_147308f06;
      }
      lVar8 = lVar8 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar8);
  }
  psVar13 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_147308f06:
  local_19a = *psVar13;
  if (local_19a != -1) {
    if (*(longlong *)(param_4 + 0x11f90) == 0) {
      uVar12 = 0;
    }
    else {
      uVar11 = CONCAT71((int7)((ulonglong)puVar10 >> 8),
                        *(undefined1 *)(*(longlong *)(param_4 + 0x11f90) + 0xc)) &
               0xffffffffffffff02;
      uVar12 = CONCAT71((int7)(uVar11 >> 8),(byte)uVar11 >> 1);
    }
    local_1b8 = (short *)((ulonglong)local_1b8 & 0xffffffff00000000);
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),uVar12);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14730900e FUN_14730900e body=56 status=ok
// SIG undefined FUN_14730900e(void)

undefined8 * FUN_14730900e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a303c30;
  FUN_144725486();
  FUN_146309f08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147309046 FUN_147309046 body=38 status=ok
// SIG undefined FUN_147309046(void)

undefined8 FUN_147309046(undefined8 param_1,int param_2)

{
  FUN_146309f08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14730906c FUN_14730906c body=5944 status=ok
// SIG undefined FUN_14730906c(void)

/* WARNING: Removing unreachable block (ram,0x00014730a348) */
/* WARNING: Removing unreachable block (ram,0x00014730a365) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14730906c(longlong param_1,longlong param_2,longlong param_3,double *param_4,
                       byte param_5,uint param_6,uint param_7,undefined4 param_8,byte param_9)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  bool bVar12;
  byte bVar13;
  bool bVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined1 *puVar24;
  double *pdVar25;
  undefined8 *puVar26;
  double *pdVar27;
  undefined8 *puVar28;
  double *pdVar29;
  longlong lVar30;
  ulonglong uVar31;
  bool bVar32;
  longlong lVar33;
  float fVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  uint uVar42;
  uint uVar43;
  float fVar44;
  undefined1 auStack_6f8 [44];
  float local_6cc;
  double local_6c8;
  double local_6c0;
  double local_6b8;
  double local_6b0;
  double local_6a8;
  double local_6a0;
  double local_698;
  double local_690;
  undefined1 local_688 [16];
  double local_678;
  undefined8 uStack_670;
  undefined1 local_660 [16];
  double local_650;
  double local_638;
  double local_628 [4];
  double local_608 [10];
  double local_5b8;
  double local_5b0;
  double local_5a8;
  double local_5a0;
  double local_598;
  double local_590;
  double local_588;
  double local_580;
  double local_578;
  double local_570;
  double local_568;
  double local_560;
  undefined1 local_558 [128];
  undefined8 local_4d8 [11];
  double local_480;
  undefined8 local_478;
  undefined8 uStack_470;
  double local_460;
  double local_458 [4];
  undefined8 local_438;
  double local_430;
  undefined8 local_428;
  double local_420;
  double local_418;
  double local_410;
  undefined8 local_408;
  double local_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  double local_3e0;
  double local_3d8 [6];
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  double local_358 [16];
  undefined1 local_2d8 [192];
  undefined1 *local_218;
  undefined8 local_210;
  undefined1 local_208 [48];
  undefined1 *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 *local_108;
  uint local_100;
  undefined4 local_fc;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_6f8;
  *(longlong *)(param_1 + 0xb60) = param_2;
  FUN_144b128fe(&local_1c8);
  *(undefined8 *)(param_1 + 0xba0) = local_198;
  *(undefined8 *)(param_1 + 0xba8) = uStack_190;
  *(undefined8 *)(param_1 + 0xb90) = local_1a8;
  *(undefined8 *)(param_1 + 0xb98) = uStack_1a0;
  *(undefined8 *)(param_1 + 0xb80) = local_1b8;
  *(undefined8 *)(param_1 + 0xb88) = uStack_1b0;
  *(undefined8 *)(param_1 + 0xb70) = local_1c8;
  *(undefined8 *)(param_1 + 0xb78) = uStack_1c0;
  *(longlong *)(param_1 + 0xbb0) = param_3;
  dVar2 = param_4[1];
  *(double *)(param_1 + 0x48) = *param_4;
  *(double *)(param_1 + 0x50) = dVar2;
  *(double *)(param_1 + 0x58) = param_4[2];
  dVar2 = param_4[0x1c];
  dVar38 = param_4[0x18];
  dVar35 = param_4[2];
  dVar3 = param_4[0x17];
  dVar4 = param_4[1];
  *(double *)(param_1 + 0x6b8) = param_4[0x16] - *param_4;
  *(double *)(param_1 + 0x6c0) = dVar3 - dVar4;
  *(double *)(param_1 + 0x6c8) = dVar38 - dVar35;
  *(double *)(param_1 + 0x6d0) = dVar2;
  *(uint *)(param_1 + 0x958) = param_6;
  *(undefined4 *)(param_1 + 0x960) = 4;
  *(undefined4 *)(param_1 + 0x974) = param_8;
  uVar18 = *(uint *)(param_1 + 0x990) & 0xffffffef |
           (uint)(*(char *)(*(longlong *)(param_2 + 0x28) + 0x1e8) == '\0') << 4;
  *(uint *)(param_1 + 0x990) = uVar18;
  uVar22 = 0;
  if ((*(byte *)(*(longlong *)(param_3 + 8) + 0x72) & 8) != 0 && param_5 == 0) {
    bVar13 = FUN_144b18801(*(undefined2 *)
                            (&DAT_14ca85070 +
                            (longlong)
                            *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb60) + 0x100) + 8) * 2)
                          );
    uVar22 = (uint)bVar13 << 10;
    uVar18 = *(uint *)(param_1 + 0x990);
  }
  uVar18 = (uint)param_5 << 0xb | (uint)param_9 << 8 | uVar22 | uVar18 & 0xfffff2ff;
  *(uint *)(param_1 + 0x990) = uVar18;
  uVar22 = (*(byte *)(*(longlong *)(param_3 + 8) + 0x72) & 0xffffff80) << 5;
  *(uint *)(param_1 + 0x990) = uVar18 & 0xffffefff | uVar22;
  uVar19 = (*(byte *)(*(longlong *)(param_2 + 0x28) + 0x1d0) & 0xffffff80) << 7;
  *(uint *)(param_1 + 0x990) = uVar18 & 0xffffafff | uVar22 | uVar19;
  uVar20 = (*(byte *)(*(longlong *)(param_2 + 0x28) + 0x1d1) & 2) << 0xe;
  *(uint *)(param_1 + 0x990) = uVar18 & 0xffff2fff | uVar22 | uVar19 | uVar20;
  *(uint *)(param_1 + 0x990) =
       uVar18 & 0xfff72fff | uVar22 | uVar19 | uVar20 |
       (*(byte *)(*(longlong *)(param_2 + 0x28) + 0x1d1) & 1) << 0x13;
  lVar15 = 0;
  local_108 = (undefined8 *)0x0;
  local_fc = 8;
  local_1d8 = (undefined1 *)0x0;
  local_1cc = 0xc;
  dVar2 = param_4[0x18];
  dVar38 = param_4[0x1b];
  dVar35 = param_4[0x16];
  dVar3 = param_4[0x17];
  dVar4 = param_4[0x1a];
  dVar37 = param_4[0x19];
  local_100 = 8;
  uVar19 = (uint)((ulonglong)dVar38 >> 0x20);
  uVar22 = (uint)((ulonglong)dVar4 >> 0x20);
  uVar18 = (uint)((ulonglong)dVar37 >> 0x20);
  bVar12 = true;
  do {
    bVar14 = bVar12;
    uVar20 = uVar18;
    if (!bVar14) {
      uVar20 = uVar18 ^ 0x80000000;
    }
    lVar30 = 0;
    bVar12 = true;
    do {
      bVar21 = bVar12;
      uVar42 = uVar22;
      if (!bVar21) {
        uVar42 = uVar22 ^ 0x80000000;
      }
      lVar33 = 0;
      bVar12 = true;
      do {
        bVar32 = bVar12;
        puVar26 = local_108;
        if (local_108 == (undefined8 *)0x0) {
          puVar26 = &local_1c8;
        }
        lVar33 = lVar30 + lVar33 * 0x18;
        uVar43 = uVar19;
        if (!bVar32) {
          uVar43 = uVar19 ^ 0x80000000;
        }
        *(double *)((longlong)puVar26 + lVar15 + lVar33) =
             (double)CONCAT44(uVar20,SUB84(dVar37,0)) + dVar35;
        *(double *)((longlong)puVar26 + lVar15 + 8 + lVar33) =
             (double)CONCAT44(uVar42,SUB84(dVar4,0)) + dVar3;
        *(double *)((longlong)puVar26 + lVar15 + 0x10 + lVar33) =
             (double)CONCAT44(uVar43,SUB84(dVar38,0)) + dVar2;
        lVar33 = 1;
        bVar12 = false;
      } while (bVar32);
      lVar30 = 0x30;
      bVar12 = false;
    } while (bVar21);
    lVar15 = 0x60;
    bVar12 = false;
  } while (bVar14);
                    /* WARNING: Read-only address (ram,0x000149931e80) is written */
  local_1d0 = 0xc;
  local_1cc = 0xc;
  local_1d0 = 0xc;
  local_1d8 = (undefined1 *)0x0;
  lVar15 = 0;
  bVar12 = true;
  do {
    bVar14 = bVar12;
    puVar17 = local_1d8;
    if (local_1d8 == (undefined1 *)0x0) {
      puVar17 = local_208;
    }
    uVar18 = (uint)lVar15;
    *(uint *)(puVar17 + lVar15 * 4) = (uVar18 | 1) << 0x10 | uVar18;
    puVar17 = local_1d8;
    if (local_1d8 == (undefined1 *)0x0) {
      puVar17 = local_208;
    }
    *(uint *)(puVar17 + lVar15 * 4 + 4) = (uVar18 | 3) * 0x10000 + uVar18 + 1;
    puVar17 = local_1d8;
    if (local_1d8 == (undefined1 *)0x0) {
      puVar17 = local_208;
    }
    *(uint *)(puVar17 + lVar15 * 4 + 8) = (uVar18 | 2) * 0x10000 + uVar18 + 3;
    puVar17 = local_1d8;
    if (local_1d8 == (undefined1 *)0x0) {
      puVar17 = local_208;
    }
    *(uint *)(puVar17 + lVar15 * 4 + 0xc) = uVar18 * 0x10001 + 2;
    lVar15 = 4;
    uVar18 = 0;
    bVar12 = false;
  } while (bVar14);
  lVar15 = 0;
  do {
    puVar17 = local_1d8;
    if (local_1d8 == (undefined1 *)0x0) {
      puVar17 = local_208;
    }
    *(uint *)(puVar17 + lVar15 * 4 + 0x20) = (uint)lVar15 | uVar18 | 0x40000;
    lVar15 = lVar15 + 1;
    uVar18 = uVar18 + 0x10000;
  } while (lVar15 != 4);
  local_218 = (undefined1 *)0x0;
  local_210 = 0x800000000;
  uVar16 = (ulonglong)local_100;
  puVar26 = &local_1c8;
  if (local_108 != (undefined8 *)0x0) {
    puVar26 = local_108;
  }
  lVar15 = 0;
  do {
    uVar23 = local_210;
    dVar2 = *(double *)((longlong)puVar26 + lVar15 + 0x10);
    dVar38 = *(double *)((longlong)puVar26 + lVar15);
    dVar35 = *(double *)((longlong)puVar26 + lVar15 + 8);
    dVar36 = param_4[5];
    dVar9 = param_4[9];
    dVar10 = param_4[0xd];
    dVar37 = dVar2 * param_4[0xc] + dVar35 * param_4[8] + dVar38 * param_4[4] + param_4[0x10];
    dVar3 = param_4[0x11];
    dVar4 = param_4[0x20] * dVar37 + param_4[0x1e] * 0.0 + param_4[0x1f] * 0.0 + param_4[0x21];
    if (dVar4 < 9.999999747378752e-06) goto LAB_14730a0b6;
    dVar5 = param_4[0xe];
    dVar6 = param_4[10];
    dVar7 = param_4[6];
    dVar8 = param_4[0x12];
    lVar30 = (longlong)(int)local_210;
    uVar18 = (int)local_210 + 1;
    local_210 = CONCAT44(local_210._4_4_,uVar18);
    if (local_210._4_4_ < uVar18) {
      FUN_146c5b08e(local_2d8,uVar23 & 0xffffffff);
    }
    dVar4 = 1.0 / dVar4;
    puVar17 = local_218;
    if (local_218 == (undefined1 *)0x0) {
      puVar17 = local_2d8;
    }
    *(double *)(puVar17 + lVar30 * 0x18) = dVar4 * dVar37;
    *(double *)(puVar17 + lVar30 * 0x18 + 8) =
         (dVar2 * dVar10 + dVar35 * dVar9 + dVar38 * dVar36 + dVar3) * dVar4;
    *(double *)(puVar17 + lVar30 * 0x18 + 0x10) =
         (dVar38 * dVar7 + dVar35 * dVar6 + dVar2 * dVar5 + dVar8) * dVar4;
    lVar15 = lVar15 + 0x18;
  } while (uVar16 * 0x18 != lVar15);
  puVar17 = local_2d8;
  if (local_218 != (undefined1 *)0x0) {
    puVar17 = local_218;
  }
  puVar24 = local_208;
  if (local_1d8 != (undefined1 *)0x0) {
    puVar24 = local_1d8;
  }
  local_690 = DAT_14c8464e0;
  local_698 = DAT_14c8464e8;
  local_6cc = 3.4028235e+38;
  local_6a0 = DAT_14c8464f0;
  lVar15 = 0;
  bVar13 = 0;
  do {
    uVar23 = (ulonglong)*(ushort *)(puVar24 + lVar15 * 4);
    uVar31 = (ulonglong)*(ushort *)(puVar24 + lVar15 * 4 + 2);
    dVar35 = (*(double *)(puVar17 + uVar31 * 0x18 + 0x10) -
             *(double *)(puVar17 + uVar23 * 0x18 + 0x10)) * 0.0 +
             (*(double *)(puVar17 + uVar31 * 0x18 + 8) - *(double *)(puVar17 + uVar23 * 0x18 + 8)) *
             0.0 + (*(double *)(puVar17 + uVar31 * 0x18) - *(double *)(puVar17 + uVar23 * 0x18));
    dVar3 = (*(double *)(puVar17 + uVar31 * 0x18) - *(double *)(puVar17 + uVar23 * 0x18)) - dVar35;
    dVar35 = dVar35 * 0.0;
    dVar38 = (*(double *)(puVar17 + uVar31 * 0x18 + 0x10) -
             *(double *)(puVar17 + uVar23 * 0x18 + 0x10)) - dVar35;
    dVar35 = (*(double *)(puVar17 + uVar31 * 0x18 + 8) - *(double *)(puVar17 + uVar23 * 0x18 + 8)) -
             dVar35;
    dVar2 = dVar38 * dVar38 + dVar3 * dVar3 + dVar35 * dVar35;
    if (((dVar2 != 1.0) || (dVar36 = dVar3, dVar37 = dVar35, dVar4 = dVar38, NAN(dVar2))) &&
       (dVar36 = DAT_14c8464e0, dVar37 = DAT_14c8464e8, dVar4 = DAT_14c8464f0,
       9.99999993922529e-09 <= dVar2)) {
      dVar36 = 1.0 / SQRT(dVar2);
      dVar4 = dVar38 * dVar36;
      dVar37 = dVar35 * dVar36;
      dVar36 = dVar3 * dVar36;
    }
    dVar38 = dVar37 - dVar36 * 0.0;
    dVar35 = dVar36 * 0.0 - dVar4;
    dVar3 = dVar4 * 0.0 + dVar37 * -0.0;
    dVar2 = dVar38 * dVar38 + dVar3 * dVar3 + dVar35 * dVar35;
    if (((dVar2 != 1.0) || (dVar9 = dVar38, dVar5 = dVar35, dVar10 = dVar3, NAN(dVar2))) &&
       (dVar9 = DAT_14c8464f0, dVar5 = DAT_14c8464e8, dVar10 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar2)) {
      dVar10 = 1.0 / SQRT(dVar2);
      dVar9 = dVar38 * dVar10;
      dVar5 = dVar35 * dVar10;
      dVar10 = dVar3 * dVar10;
    }
    lVar30 = 0x10;
    dVar3 = -3.4028234663852886e+38;
    dVar38 = -3.4028234663852886e+38;
    dVar35 = 3.4028234663852886e+38;
    dVar2 = 3.4028234663852886e+38;
    do {
      dVar6 = (double)(float)(*(double *)(puVar17 + lVar30) * dVar4 +
                             *(double *)(puVar17 + lVar30 + -0x10) * dVar36 +
                             dVar37 * *(double *)(puVar17 + lVar30 + -8));
      if (dVar6 <= dVar2) {
        dVar2 = dVar6;
      }
      if (dVar38 <= dVar6) {
        dVar38 = dVar6;
      }
      dVar6 = (double)(float)(*(double *)(puVar17 + lVar30) * dVar9 +
                             *(double *)(puVar17 + lVar30 + -0x10) * dVar10 +
                             *(double *)(puVar17 + lVar30 + -8) * dVar5);
      if (dVar6 <= dVar35) {
        dVar35 = dVar6;
      }
      if (dVar3 <= dVar6) {
        dVar3 = dVar6;
      }
      lVar30 = lVar30 + 0x18;
    } while (lVar30 != 0xd0);
    fVar40 = (float)((dVar3 - dVar35) * (dVar38 - dVar2));
    if ((fVar40 < local_6cc + -0.05) && (1e-05 < fVar40)) {
      bVar13 = 1;
      if (dVar3 - dVar35 <= dVar38 - dVar2) {
        local_688._8_8_ = 0;
        local_688._0_8_ = dVar3;
        local_6c8 = dVar35;
        local_6c0 = dVar2;
        local_6b8 = dVar36;
        local_6b0 = dVar37;
        local_6a8 = dVar4;
        local_678 = dVar38;
      }
      else {
        local_688._8_4_ = DAT_149931e80._8_4_;
        local_688._0_8_ = (ulonglong)dVar2 ^ DAT_149931e80;
        local_688._12_4_ = DAT_149931e80._12_4_;
        local_6c8 = (double)((ulonglong)dVar38 ^ DAT_149931e80);
        local_6c0 = dVar35;
        local_6b8 = dVar10;
        local_6b0 = dVar5;
        local_6a8 = dVar9;
        local_678 = dVar3;
      }
      uStack_670 = 0;
      local_6cc = fVar40;
    }
    dVar38 = local_678;
    auVar11 = local_688;
    dVar2 = local_6c8;
    lVar15 = lVar15 + 1;
  } while (lVar15 != 0xc);
  local_608[4] = local_6b0;
  local_608[5] = local_6a8;
  local_608[3] = local_6b8;
  if ((bool)(bVar13 & 1e-05 < local_6cc)) {
    local_608[0] = 1.0;
    local_608[1] = 0.0;
    local_608[2] = 0.0;
    local_628[2] = local_6b0 - local_6b8 * 0.0;
    local_628[1] = local_6b8 * 0.0 - local_6a8;
    local_628[0] = local_6a8 * 0.0 + local_6b0 * -0.0;
    dVar35 = local_628[2] * local_628[2] + local_628[0] * local_628[0] + local_628[1] * local_628[1]
    ;
    if ((dVar35 != 1.0) || (NAN(dVar35))) {
      if (9.99999993922529e-09 <= dVar35) {
        dVar35 = 1.0 / SQRT(dVar35);
        local_628[0] = local_628[0] * dVar35;
        local_628[1] = local_628[1] * dVar35;
        local_628[2] = local_628[2] * dVar35;
      }
      else {
        local_628[2] = DAT_14c8464f0;
        local_628[0] = DAT_14c8464e0;
        local_628[1] = DAT_14c8464e8;
      }
    }
    else {
    }
    lVar15 = 0;
    do {
      *(undefined8 *)((longlong)local_358 + lVar15 * 4) =
           *(undefined8 *)((longlong)local_608 + lVar15 + 0x18);
      *(undefined8 *)((longlong)local_358 + lVar15 * 4 + 8) =
           *(undefined8 *)((longlong)local_628 + lVar15);
      *(undefined8 *)((longlong)local_358 + lVar15 * 4 + 0x10) =
           *(undefined8 *)((longlong)local_608 + lVar15);
      *(undefined8 *)((longlong)local_358 + lVar15 * 4 + 0x18) = 0;
      lVar15 = lVar15 + 8;
    } while (lVar15 != 0x18);
    local_358[0xc] = local_6a8 * 0.0 + local_6b8 * 0.0 + local_6b0 * 0.0;
    local_358[0xd] = local_628[2] * 0.0 + local_628[0] * 0.0 + local_628[1] * 0.0;
    local_358[0xe] = 0.0;
    local_358[0xf] = 1.0;
    FUN_1447fea8d(local_3d8,param_4 + 4,local_358);
    pdVar1 = (double *)(param_1 + 0x60);
    pdVar25 = local_3d8;
    pdVar27 = pdVar1;
    for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
      *pdVar27 = *pdVar25;
      pdVar25 = pdVar25 + 1;
      pdVar27 = pdVar27 + 1;
    }
    local_3d8[5] = param_4[0x18] + param_4[0x1b];
    local_3d8[4] = param_4[0x17] + param_4[0x1a];
    local_3d8[3] = param_4[0x16] + param_4[0x19];
    local_3d8[2] = param_4[0x18] - param_4[0x1b];
    local_3d8[1] = param_4[0x17] - param_4[0x1a];
    local_3d8[0] = param_4[0x16] - param_4[0x19];
    local_3a8 = CONCAT71(local_3a8._1_7_,1);
    FUN_144b12ece(local_3d8,local_660,pdVar1);
    fVar40 = *(float *)(param_4 + 0x22);
    if ((double)fVar40 <= local_650) {
      fVar40 = (float)local_650;
    }
    *(float *)(param_1 + 0x2a8) = fVar40;
    fVar39 = *(float *)((longlong)param_4 + 0x114) + fVar40;
    dVar35 = auVar11._0_8_ - dVar2;
    dVar3 = dVar38 - local_6c0;
    fVar41 = fVar40 + 1.0;
    uVar18 = (uint)((float)param_6 / (float)(dVar3 / dVar35));
    fVar44 = (float)local_638;
    if ((float)local_638 <= fVar41) {
      fVar44 = fVar41;
    }
    if (uVar18 < param_7) {
      param_7 = uVar18;
    }
    *(float *)(param_1 + 0x2a4) = fVar44;
    param_7 = param_7 + (param_7 == 0);
    *(uint *)(param_1 + 0x95c) = param_7;
    uVar18 = *(uint *)(param_1 + 0x958);
    uVar16 = CONCAT71((int7)(uVar16 * 0x18 >> 8),uVar18 != 0);
    if (uVar18 != 0) {
      local_3d8[5] = (double)((float)param_7 / (float)(param_7 + *(int *)(param_1 + 0x960) * 2));
      local_3d8[0] = (double)((float)uVar18 / (float)(uVar18 + *(int *)(param_1 + 0x960) * 2));
      local_3d8[1] = 0.0;
      local_3d8[2] = 0.0;
      local_3d8[3] = 0.0;
      local_3d8[4] = 0.0;
      local_3a8 = 0;
      uStack_3a0 = 0;
      local_398 = 0;
      uStack_390 = 0;
      local_388 = 0x3ff0000000000000;
      local_380 = 0;
      uStack_378 = 0;
      local_370 = 0;
      uStack_368 = 0;
      local_360 = 0x3ff0000000000000;
      dVar4 = param_4[0x21];
      dVar37 = param_4[0x20];
      local_410 = -(auVar11._0_8_ + dVar2) / dVar35;
      local_418 = -(dVar38 + local_6c0) / dVar3;
      local_458[3] = param_4[0x1e];
      local_420 = param_4[0x1f];
      local_430 = 2.0 / dVar35;
      local_458[0] = 2.0 / dVar3;
      local_458[1] = 0.0;
      local_458[2] = 0.0;
      local_438 = 0;
      local_428 = 0;
      local_408 = 0;
      local_3f8 = 0;
      uStack_3f0 = 0;
      local_3e8 = 0x3ff0000000000000;
      local_400 = dVar37;
      local_3e0 = dVar4;
      FUN_1447fea8d(local_4d8);
      uVar18 = *(uint *)(param_1 + 0x990);
      pdVar25 = (double *)(param_1 + 0xe0);
      if ((uVar18 >> 0xb & 1) == 0) {
        if (4.3980465e+12 <= fVar39) {
          fVar39 = 4.3980465e+12;
        }
        if (fVar39 <= fVar41) {
          fVar39 = fVar41;
        }
        dVar2 = (double)fVar40;
        fVar41 = fVar44 - fVar40;
        dVar38 = -(dVar37 * dVar2 + dVar4) / (double)fVar41;
        pdVar27 = local_458;
        pdVar29 = pdVar25;
        for (lVar15 = 10; lVar15 != 0; lVar15 = lVar15 + -1) {
          *pdVar29 = *pdVar27;
          pdVar27 = pdVar27 + 1;
          pdVar29 = pdVar29 + 1;
        }
        *(double *)(param_1 + 0x130) = dVar38;
        *(double *)(param_1 + 0x138) = dVar37;
        *(undefined8 *)(param_1 + 0x140) = 0;
        *(undefined8 *)(param_1 + 0x148) = 0;
        *(double *)(param_1 + 0x150) = -dVar38 * (double)fVar44;
        *(double *)(param_1 + 0x158) = dVar4;
        dVar38 = -(local_480 * dVar2 + local_460) / (double)fVar41;
        puVar26 = local_4d8;
        puVar28 = (undefined8 *)(param_1 + 0x160);
        for (lVar15 = 10; lVar15 != 0; lVar15 = lVar15 + -1) {
          *puVar28 = *puVar26;
          puVar26 = puVar26 + 1;
          puVar28 = puVar28 + 1;
        }
        *(double *)(param_1 + 0x1b0) = dVar38;
        *(double *)(param_1 + 0x1b8) = local_480;
        *(undefined8 *)(param_1 + 0x1c0) = local_478;
        *(undefined8 *)(param_1 + 0x1c8) = uStack_470;
        *(double *)(param_1 + 0x1d0) = -dVar38 * (double)fVar44;
        *(double *)(param_1 + 0x1d8) = local_460;
        pdVar27 = local_458;
        pdVar29 = local_608 + 6;
        for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
          *pdVar29 = *pdVar27;
          pdVar27 = pdVar27 + 1;
          pdVar29 = pdVar29 + 1;
        }
        local_588 = -(dVar2 * local_580 + local_560) / (double)(fVar39 - fVar40);
        local_568 = -local_588 * (double)fVar39;
        local_6cc = fVar40;
        FUN_1447fea8d(local_558,pdVar1);
        if (((uVar18 & 0x10) != 0) && (local_6cc = 1.0, fVar44 < fVar39)) {
          fVar34 = fVar41;
          if (fVar39 - fVar44 <= fVar41) {
            fVar34 = fVar39 - fVar44;
          }
          *(float *)(param_1 + 0xa50) = ((fVar39 - fVar40) - fVar34) / fVar41;
          fVar40 = 1e-06;
          if (1e-06 <= fVar34) {
            fVar40 = fVar34;
          }
          *(float *)(param_1 + 0xa54) = fVar41 / fVar40;
        }
      }
      else {
        dVar38 = -((double)*(float *)(param_4 + 0x22) * dVar37 + dVar4) /
                 (double)(fVar44 - *(float *)(param_4 + 0x22));
        dVar2 = (double)fVar44;
        pdVar27 = local_458;
        pdVar29 = pdVar25;
        for (lVar15 = 10; lVar15 != 0; lVar15 = lVar15 + -1) {
          *pdVar29 = *pdVar27;
          pdVar27 = pdVar27 + 1;
          pdVar29 = pdVar29 + 1;
        }
        *(double *)(param_1 + 0x130) = dVar38;
        *(double *)(param_1 + 0x138) = dVar37;
        *(undefined8 *)(param_1 + 0x140) = 0;
        *(undefined8 *)(param_1 + 0x148) = 0;
        *(double *)(param_1 + 0x150) = -dVar38 * dVar2;
        *(double *)(param_1 + 0x158) = dVar4;
        dVar38 = -((double)*(float *)(param_4 + 0x22) * local_480 + local_460) /
                 (double)(fVar44 - *(float *)(param_4 + 0x22));
        puVar26 = local_4d8;
        puVar28 = (undefined8 *)(param_1 + 0x160);
        for (lVar15 = 10; lVar15 != 0; lVar15 = lVar15 + -1) {
          *puVar28 = *puVar26;
          puVar26 = puVar26 + 1;
          puVar28 = puVar28 + 1;
        }
        *(double *)(param_1 + 0x1b0) = dVar38;
        *(double *)(param_1 + 0x1b8) = local_480;
        *(undefined8 *)(param_1 + 0x1c0) = local_478;
        *(undefined8 *)(param_1 + 0x1c8) = uStack_470;
        *(double *)(param_1 + 0x1d0) = -dVar38 * dVar2;
        *(double *)(param_1 + 0x1d8) = local_460;
        pdVar27 = local_458;
        pdVar29 = local_608 + 6;
        for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
          *pdVar29 = *pdVar27;
          pdVar27 = pdVar27 + 1;
          pdVar29 = pdVar29 + 1;
        }
        local_588 = -((double)fVar40 * local_580 + local_560) / (double)(fVar44 - fVar40);
        local_568 = -local_588 * dVar2;
        FUN_1447fea8d(local_558,pdVar1);
        if ((uVar18 & 0x10) == 0) {
          local_6cc = *(float *)(param_4 + 0x22);
        }
        else {
          local_6cc = 1.0;
        }
      }
      FUN_1447fea8d(local_608 + 6,pdVar1,pdVar25);
      *(float *)(param_1 + 0x1e0) = (float)local_608[6];
      *(float *)(param_1 + 0x1e4) = (float)local_608[7];
      *(float *)(param_1 + 0x1e8) = (float)local_608[8];
      *(float *)(param_1 + 0x1ec) = (float)local_608[9];
      *(float *)(param_1 + 0x1f0) = (float)local_5b8;
      *(float *)(param_1 + 500) = (float)local_5b0;
      *(float *)(param_1 + 0x1f8) = (float)local_5a8;
      *(float *)(param_1 + 0x1fc) = (float)local_5a0;
      *(float *)(param_1 + 0x200) = (float)local_598;
      *(float *)(param_1 + 0x204) = (float)local_590;
      *(float *)(param_1 + 0x208) = (float)local_588;
      *(float *)(param_1 + 0x20c) = (float)local_580;
      *(float *)(param_1 + 0x210) = (float)local_578;
      *(float *)(param_1 + 0x214) = (float)local_570;
      *(float *)(param_1 + 0x218) = (float)local_568;
      *(float *)(param_1 + 0x21c) = (float)local_560;
      FUN_1447fea8d(local_608 + 6,pdVar1,param_1 + 0x160);
      *(float *)(param_1 + 0x220) = (float)local_608[6];
      *(float *)(param_1 + 0x224) = (float)local_608[7];
      *(float *)(param_1 + 0x228) = (float)local_608[8];
      *(float *)(param_1 + 0x22c) = (float)local_608[9];
      *(float *)(param_1 + 0x230) = (float)local_5b8;
      *(float *)(param_1 + 0x234) = (float)local_5b0;
      *(float *)(param_1 + 0x238) = (float)local_5a8;
      *(float *)(param_1 + 0x23c) = (float)local_5a0;
      *(float *)(param_1 + 0x240) = (float)local_598;
      *(float *)(param_1 + 0x244) = (float)local_590;
      *(float *)(param_1 + 0x248) = (float)local_588;
      *(float *)(param_1 + 0x24c) = (float)local_580;
      *(float *)(param_1 + 0x250) = (float)local_578;
      *(float *)(param_1 + 0x254) = (float)local_570;
      *(float *)(param_1 + 600) = (float)local_568;
      *(float *)(param_1 + 0x25c) = (float)local_560;
      *(float *)(param_1 + 0x2a0) = 1.0 / local_6cc;
      *(undefined4 *)(param_1 + 0x6b0) = *(undefined4 *)(param_4 + 0x22);
      FUN_144b10ee8(local_608 + 6,param_1 + 0x220);
      FUN_144920f26(param_1 + 0x2b0,local_608 + 6,1);
      FUN_144920f26(param_1 + 0x4b0,local_558,1);
      FUN_14007522e(local_608 + 6,local_558);
      *(float *)(param_1 + 0x260) = (float)local_608[6];
      *(float *)(param_1 + 0x264) = (float)local_608[7];
      *(float *)(param_1 + 0x268) = (float)local_608[8];
      *(float *)(param_1 + 0x26c) = (float)local_608[9];
      *(float *)(param_1 + 0x270) = (float)local_5b8;
      *(float *)(param_1 + 0x274) = (float)local_5b0;
      *(float *)(param_1 + 0x278) = (float)local_5a8;
      *(float *)(param_1 + 0x27c) = (float)local_5a0;
      *(float *)(param_1 + 0x280) = (float)local_598;
      *(float *)(param_1 + 0x284) = (float)local_590;
      *(float *)(param_1 + 0x288) = (float)local_588;
      *(float *)(param_1 + 0x28c) = (float)local_580;
      *(float *)(param_1 + 0x290) = (float)local_578;
      *(float *)(param_1 + 0x294) = (float)local_570;
      *(float *)(param_1 + 0x298) = (float)local_568;
      *(float *)(param_1 + 0x29c) = (float)local_560;
      FUN_144b17bba(param_1);
    }
  }
  else {
LAB_14730a0b6:
    uVar16 = 0;
  }
  if (local_218 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_1d8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_108 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_6f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16 & 0xffffffff;
}



// FUNCTION 14730a7a6 FUN_14730a7a6 body=3041 status=ok
// SIG undefined FUN_14730a7a6(void)

void FUN_14730a7a6(longlong param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  longlong lVar8;
  double *pdVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  undefined1 auStack_498 [40];
  double local_470;
  double local_468;
  double local_460;
  double local_458;
  undefined8 uStack_450;
  double local_448;
  double adStack_440 [38];
  undefined8 local_310;
  double local_308;
  double local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined1 local_2e8 [128];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8 [6];
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180 [20];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_498;
  *(undefined8 *)(param_1 + 0x964) = 0;
  *(undefined8 *)(param_1 + 0x96c) = *(undefined8 *)(param_1 + 0x958);
  lVar8 = *(longlong *)(param_1 + 0x38);
  local_468 = *(double *)(lVar8 + 0xa00);
  local_470 = *(double *)(lVar8 + 0x9c0);
  local_460 = *(double *)(lVar8 + 0x9e0);
  local_448 = *(double *)(lVar8 + 0x1048);
  adStack_440[0] = 0.0;
  local_458 = *(double *)(lVar8 + 0x1050);
  uStack_450 = 0;
  adStack_440[1] = *(double *)(lVar8 + 0x1058);
  adStack_440[2] = 0.0;
  dVar21 = atan(1.0 / *(double *)(lVar8 + 0x830));
  dVar3 = atan(1.0 / *(double *)(lVar8 + 0x858));
  dVar2 = *(double *)(lVar8 + 0x870);
  dVar20 = *(double *)(lVar8 + 0x878);
  fVar24 = *(float *)(param_1 + 0x6e4);
  fVar15 = tanf((float)dVar21);
  fVar15 = fVar15 * fVar24;
  fVar24 = *(float *)(param_1 + 0x6e4);
  fVar16 = tanf((float)dVar3);
  fVar16 = fVar16 * fVar24;
  dVar19 = (double)-fVar15;
  dVar22 = (double)((float)dVar2 + 1.0);
  dVar21 = (double)fVar15;
  dVar2 = (double)(1.0 - (float)dVar2);
  dVar3 = (double)-fVar16;
  dVar6 = (double)((float)dVar20 + 1.0);
  dVar23 = *(double *)(lVar8 + 0x9f8) * dVar3 * dVar6;
  dVar4 = *(double *)(lVar8 + 0x9d8) * dVar3 * dVar6;
  dVar6 = dVar3 * *(double *)(lVar8 + 0x9b8) * dVar6;
  dVar3 = (double)fVar16;
  local_1b8 = (double)(1.0 - (float)dVar20);
  local_1a8 = *(double *)(lVar8 + 0x9f8) * dVar3 * local_1b8;
  local_1b0 = *(double *)(lVar8 + 0x9d8) * dVar3 * local_1b8;
  dVar20 = (double)*(float *)(param_1 + 0x6e4);
  local_1b8 = *(double *)(lVar8 + 0x9b8) * dVar3 * local_1b8;
  local_470 = local_470 * dVar20 + local_448;
  local_1f8[5] = *(double *)(lVar8 + 0x9b0) * dVar21 * dVar2 + local_470;
  local_1f8[2] = local_1b8 + local_1f8[5];
  local_180[0] = local_460 * dVar20 + local_458;
  local_1c8 = *(double *)(lVar8 + 0x9d0) * dVar21 * dVar2 + local_180[0];
  local_1f8[3] = local_1b0 + local_1c8;
  local_180[1] = local_468 * dVar20 + adStack_440[1];
  local_1c0 = *(double *)(lVar8 + 0x9f0) * dVar21 * dVar2 + local_180[1];
  local_1f8[4] = local_1a8 + local_1c0;
  local_1f8[5] = local_1f8[5] + dVar6;
  local_1c8 = local_1c8 + dVar4;
  local_1c0 = local_1c0 + dVar23;
  local_1a0 = dVar19 * *(double *)(lVar8 + 0x9b0) * dVar22 + local_470;
  local_1b8 = local_1b8 + local_1a0;
  local_198 = *(double *)(lVar8 + 0x9d0) * dVar19 * dVar22 + local_180[0];
  local_1b0 = local_1b0 + local_198;
  local_190 = *(double *)(lVar8 + 0x9f0) * dVar19 * dVar22 + local_180[1];
  local_1a8 = local_1a8 + local_190;
  local_190 = local_190 + dVar23;
  local_198 = local_198 + dVar4;
  local_1a0 = local_1a0 + dVar6;
  local_180[0x11] = *(double *)(param_1 + 0x58);
  local_180[0xf] = *(double *)(param_1 + 0x48);
  local_180[0x10] = *(double *)(param_1 + 0x50);
  local_180[3] = 1.0;
  local_180[4] = 0.0;
  local_180[5] = 0.0;
  local_180[6] = 0.0;
  local_180[7] = 0.0;
  local_180[8] = 1.0;
  local_180[9] = 0.0;
  local_180[10] = 0.0;
  local_180[0xb] = 0.0;
  local_180[0xc] = 0.0;
  local_180[0xd] = 1.0;
  local_180[0xe] = 0.0;
  local_180[0x12] = 1.0;
  local_188 = local_470;
  FUN_144b10ee8(local_2e8,param_1 + 0x1e0);
  FUN_1447fea8d(adStack_440 + 3,local_180 + 3,local_2e8);
  iVar7 = *(int *)(param_1 + 0x960) * 2;
  uVar13 = *(int *)(param_1 + 0x95c) + iVar7;
  uVar11 = iVar7 + *(int *)(param_1 + 0x958);
  local_300 = (double)(1.0 / (float)uVar13 + 0.5);
  adStack_440[0x25] = (double)*(float *)(param_1 + 0x2a0);
  local_308 = (double)(1.0 / (float)uVar11 + 0.5);
  adStack_440[0x1b] = 0.5;
  adStack_440[0x1c] = 0.0;
  adStack_440[0x1d] = 0.0;
  adStack_440[0x1e] = 0.0;
  adStack_440[0x1f] = 0.0;
  adStack_440[0x20] = -0.5;
  adStack_440[0x21] = 0.0;
  adStack_440[0x22] = 0.0;
  adStack_440[0x23] = 0.0;
  adStack_440[0x24] = 0.0;
  local_310 = 0;
  local_2f8 = 0;
  local_2f0 = 0x3ff0000000000000;
  FUN_1447fea8d(&local_268,adStack_440 + 3);
  lVar8 = 0x18;
  do {
    *(undefined8 *)((longlong)adStack_440 + lVar8) = 0;
    *(undefined8 *)((longlong)adStack_440 + lVar8 + 8) = 0;
    *(undefined8 *)((longlong)adStack_440 + lVar8 + 0x10) = 0;
    *(undefined8 *)((longlong)adStack_440 + lVar8 + 0x18) = 0x3ff0000000000000;
    lVar8 = lVar8 + 0x20;
  } while (lVar8 != 0xd8);
  dVar2 = (double)(int)uVar13;
  local_468 = (double)(int)uVar11;
  lVar8 = 0x10;
  pdVar9 = adStack_440 + 6;
  do {
    dVar20 = *(double *)((longlong)local_1f8 + lVar8);
    dVar21 = *(double *)((longlong)local_1f8 + lVar8);
    pdVar1 = (double *)((longlong)local_1f8 + lVar8 + 8);
    dVar3 = *pdVar1;
    dVar6 = *pdVar1;
    pdVar1 = (double *)((longlong)local_1f8 + lVar8 + 0x10);
    dVar4 = *pdVar1;
    dVar22 = *pdVar1;
    dVar19 = dVar22 * dStack_210 + dVar6 * dStack_230 + dVar21 * dStack_250 + local_1f8[1];
    dVar23 = 1.0 / dVar19;
    pdVar9[-1] = (dVar4 * local_218 + dVar3 * local_238 + dVar20 * local_258 + local_1f8[0]) *
                 dVar23;
    *pdVar9 = dVar23 * dVar19;
    pdVar9[-3] = (local_228 * dVar4 + local_248 * dVar3 + local_268 * dVar20 + local_208) * dVar23 *
                 local_468;
    pdVar9[-2] = (dStack_220 * dVar22 + dStack_240 * dVar6 + dStack_260 * dVar21 + dStack_200) *
                 dVar23 * dVar2;
    lVar8 = lVar8 + 0x18;
    pdVar9 = pdVar9 + 4;
  } while (lVar8 != 0x88);
  dVar21 = (local_208 + adStack_440[1] * local_228 + local_458 * local_248 + local_448 * local_268)
           * (1.0 / adStack_440[0x16]) * local_468;
  adStack_440[0x17] = dVar21;
  dVar20 = (dStack_200 +
           adStack_440[1] * dStack_220 + local_458 * dStack_240 + local_448 * dStack_260) *
           (1.0 / adStack_440[0x16]) * dVar2;
  adStack_440[0x18] = dVar20;
  if ((((0.0 <= dVar21) && (dVar21 <= local_468)) && (0.0 <= dVar20)) && (dVar20 <= dVar2)) {
    local_448 = DAT_14c8463f0;
    local_458 = DAT_14c8463f8;
    lVar8 = 0;
    do {
      dVar3 = adStack_440[lVar8 * 4 + 4] - dVar20;
      dVar22 = adStack_440[lVar8 * 4 + 3] - dVar21;
      dVar6 = dVar22 * dVar22 + dVar3 * dVar3;
      if (9.99999993922529e-09 < dVar6) {
        dVar3 = dVar3 * (1.0 / SQRT(dVar6));
      }
      else {
        dVar3 = 0.0;
      }
      dVar6 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar6) &
                      (ulonglong)(dVar22 * (1.0 / SQRT(dVar6))));
      local_180[3] = 0.0;
      local_180[4] = 0.0;
      local_180[5] = 1.0;
      local_180[6] = 0.0;
      local_180[7] = local_468;
      local_180[8] = 0.0;
      local_180[9] = 0.0;
      local_180[10] = 1.0;
      local_180[0xb] = local_468;
      local_180[0xc] = dVar2;
      local_180[0xd] = -1.0;
      local_180[0xe] = 0.0;
      local_180[0xf] = 0.0;
      local_180[0x10] = dVar2;
      local_180[0x11] = 0.0;
      local_180[0x12] = -1.0;
      lVar12 = 0x18;
      local_470 = DAT_14c8463f8;
      fVar24 = 100000.0;
      uVar17 = SUB84(DAT_14c8463f0,0);
      uVar18 = (undefined4)((ulonglong)DAT_14c8463f0 >> 0x20);
      do {
        dVar22 = *(double *)((longlong)local_180 + lVar12 + 0x10);
        dVar4 = *(double *)((longlong)local_180 + lVar12 + 0x18);
        dVar23 = dVar6 * dVar4 + dVar22 * -dVar3;
        uVar14 = -(ulonglong)(-dVar23 <= dVar23);
        if (1e-08 < (double)(~uVar14 & (ulonglong)-dVar23 | uVar14 & (ulonglong)dVar23)) {
          dVar22 = ((*(double *)((longlong)local_180 + lVar12) - dVar21) * dVar4 -
                   dVar22 * (*(double *)((longlong)local_180 + lVar12 + 8) - dVar20)) *
                   (1.0 / dVar23);
          dVar4 = dVar3 * dVar22 + dVar20;
          dVar23 = dVar22 * dVar6 + dVar21;
          dVar5 = dVar4 - dVar20;
          dVar19 = dVar23 - dVar21;
          dVar22 = dVar19 * dVar19 + dVar5 * dVar5;
          if (9.99999993922529e-09 < dVar22) {
            dVar5 = dVar5 * (1.0 / SQRT(dVar22));
          }
          else {
            dVar5 = 0.0;
          }
          if (0.0 < (double)(-(ulonglong)(9.99999993922529e-09 < dVar22) &
                            (ulonglong)(dVar19 * (1.0 / SQRT(dVar22)))) * dVar6 + dVar5 * dVar3) {
            fVar15 = (float)SQRT((dVar20 - dVar4) * (dVar20 - dVar4) +
                                 (dVar21 - dVar23) * (dVar21 - dVar23));
            if (fVar24 <= fVar15) {
              dVar23 = (double)CONCAT44(uVar18,uVar17);
              fVar15 = fVar24;
              dVar4 = local_470;
            }
            uVar17 = SUB84(dVar23,0);
            uVar18 = (undefined4)((ulonglong)dVar23 >> 0x20);
            fVar24 = fVar15;
            local_470 = dVar4;
          }
        }
        lVar12 = lVar12 + 0x20;
      } while (lVar12 != 0x98);
      adStack_440[lVar8 * 4 + 3] = (double)CONCAT44(uVar18,uVar17);
      adStack_440[lVar8 * 4 + 4] = local_470;
      lVar12 = lVar8 + 1;
      adStack_440[lVar8 * 4 + 5] = 0.0;
      adStack_440[lVar8 * 4 + 6] = 0.0;
      lVar8 = lVar12;
    } while (lVar12 != 5);
    uVar10 = CONCAT44(uVar11,uVar11);
    lVar8 = 8;
    uVar14 = 0;
    do {
      dVar20 = *(double *)((longlong)adStack_440 + lVar8 + 0x10);
      dVar21 = dVar20;
      if (local_468 <= dVar20) {
        dVar21 = local_468;
      }
      if (dVar20 < (double)(int)uVar10) {
        uVar17 = SUB84(dVar21,0);
        uVar18 = (undefined4)((ulonglong)dVar21 >> 0x20);
        if (dVar21 <= 0.0) {
          uVar17 = 0;
          uVar18 = 0;
        }
        uVar10 = uVar10 & 0xffffffff00000000 | (ulonglong)(uint)(int)(double)CONCAT44(uVar18,uVar17)
        ;
      }
      dVar3 = *(double *)((longlong)adStack_440 + lVar8 + 0x18);
      dVar6 = dVar3;
      if (dVar2 <= dVar3) {
        dVar6 = dVar2;
      }
      if (dVar3 < (double)(int)(uVar10 >> 0x20)) {
        dVar22 = dVar6;
        if (dVar6 <= 0.0) {
          dVar22 = 0.0;
        }
        uVar10 = uVar10 & 0xffffffff | (ulonglong)(uint)(int)dVar22 << 0x20;
      }
      if ((double)(int)uVar14 < dVar20) {
        if (dVar21 <= 0.0) {
          dVar21 = 0.0;
        }
        uVar14 = uVar14 & 0xffffffff00000000 | (ulonglong)(uint)(int)dVar21;
      }
      if ((double)(int)(uVar14 >> 0x20) < dVar3) {
        if (dVar6 <= 0.0) {
          dVar6 = 0.0;
        }
        uVar14 = uVar14 & 0xffffffff | (ulonglong)(uint)(int)dVar6 << 0x20;
      }
      lVar8 = lVar8 + 0x20;
    } while (lVar8 != 200);
    *(int *)(param_1 + 0x964) = (int)uVar10 + *(int *)(param_1 + 0x950);
    *(int *)(param_1 + 0x968) = (int)(uVar10 >> 0x20) + *(int *)(param_1 + 0x954);
    *(int *)(param_1 + 0x96c) = (int)uVar14 + *(int *)(param_1 + 0x950);
    *(int *)(param_1 + 0x970) = (int)(uVar14 >> 0x20) + *(int *)(param_1 + 0x954);
    local_460 = dVar2;
  }
  if ((local_e0 ^ (ulonglong)auStack_498) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14730b388 FUN_14730b388 body=81 status=ok
// SIG undefined FUN_14730b388(void)

byte FUN_14730b388(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  byte bVar2;
  
  bVar2 = 3;
  if ((*(char *)(param_3 + 0x30e8) == '\x01') && ((*(byte *)(param_4 + 0x12) & 0x10) != 0)) {
    bVar1 = *(byte *)(param_2 + 0x73);
    if ((((bVar1 & 0x40) == 0) || (bVar2 = 1, (*(byte *)(param_1 + 0x998) & 1) == 0)) &&
       (((bVar1 & 0x20) == 0 || (bVar2 = 1, (*(byte *)(param_1 + 0x998) & 2) == 0)))) {
      bVar2 = *(byte *)(param_2 + 0x75) & 1 ^ 3;
      if ((bVar1 & 0x60) != 0) {
        bVar2 = 0;
      }
    }
  }
  return bVar2;
}



// FUNCTION 14730b3da FUN_14730b3da body=126 status=ok
// SIG undefined FUN_14730b3da(void)

void FUN_14730b3da(longlong param_1,undefined8 param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar3 = param_1;
  }
  uVar4 = param_3 + 0x1f;
  if (-1 < (int)param_3) {
    uVar4 = param_3;
  }
  if ((*(uint *)(lVar3 + (longlong)((int)uVar4 >> 5) * 4) >> (param_3 & 0x1f) & 1) == 0) {
    iVar2 = *(int *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x2c) < iVar2 + 1U) {
      FUN_1401baee0(param_1 + 0x20,iVar2);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar2 * 8) = param_2;
    lVar3 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar3 = param_1;
    }
    puVar1 = (uint *)(lVar3 + (longlong)((int)uVar4 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  }
  return;
}



// FUNCTION 14730b458 FUN_14730b458 body=268 status=ok
// SIG undefined FUN_14730b458(void)

void FUN_14730b458(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2[5] * 2 + *(int *)(param_1 + 0xc58) + *param_2;
  if (-1 < iVar2) {
    if (*(int *)(param_1 + 0xc5c) < iVar2) {
      FUN_14482a268(param_1 + 0xc50);
    }
    iVar2 = param_2[1];
    iVar1 = *(int *)(param_1 + 0xc30) + iVar2;
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar1);
    }
    if (*(int *)(param_1 + 0xc34) < iVar1) {
      FUN_14482a282(param_1 + 0xc28,iVar1);
      iVar2 = param_2[1];
    }
    iVar2 = iVar2 + *(int *)(param_1 + 0xc40);
    if (-1 < iVar2) {
      if (*(int *)(param_1 + 0xc44) < iVar2) {
        FUN_14011052e(param_1 + 0xc38);
      }
      iVar2 = param_2[5] + *(int *)(param_1 + 0xbc0) + param_2[2];
      if (-1 < iVar2) {
        if (*(int *)(param_1 + 0xbc4) < iVar2) {
          FUN_14011033e(param_1 + 3000);
        }
        iVar2 = param_2[3] + *(int *)(param_1 + 0xbe0);
        if (-1 < iVar2) {
          if (*(int *)(param_1 + 0xbe4) < iVar2) {
            FUN_14011033e(param_1 + 0xbd8);
          }
          iVar2 = param_2[4] + *(int *)(param_1 + 0xbf0);
          if (-1 < iVar2) {
            if (iVar2 <= *(int *)(param_1 + 0xbf4)) {
              return;
            }
            FUN_14011033e(param_1 + 0xbe8);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar2);
}



// FUNCTION 14730b564 FUN_14730b564 body=2030 status=ok
// SIG undefined FUN_14730b564(void)

void FUN_14730b564(longlong param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  uint *puVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  byte bVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  longlong *plVar24;
  ulonglong uVar25;
  byte bVar26;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  longlong *local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar14 = *param_2;
  if (((*(int *)(param_1 + 0x30) != 3) && ((char)*(uint *)(param_1 + 0x990) < '\0')) &&
     ((*(uint *)(param_1 + 0x990) & 0x10) != 0 && -1 < (longlong)*(int *)(param_1 + 0x944))) {
    lVar20 = *(longlong *)(lVar14 + 0x148);
    if (*(int *)(lVar20 + 0x4bc0) != *(int *)(lVar20 + 0x4bec)) {
      uVar12 = *(uint *)(*(longlong *)(param_1 + 0xb60) + 0x34);
      lVar15 = lVar20 + 0x4bf0;
      if (*(longlong *)(lVar20 + 0x4bf8) != 0) {
        lVar15 = *(longlong *)(lVar20 + 0x4bf8);
      }
      iVar23 = *(int *)(lVar15 + (ulonglong)(*(int *)(lVar20 + 0x4c00) - 1U & uVar12) * 4);
      if (iVar23 != -1) {
        do {
          lVar15 = *(longlong *)(lVar20 + 0x4bb8) + (longlong)iVar23 * 0x20;
          if (*(uint *)(*(longlong *)(lVar20 + 0x4bb8) + (longlong)iVar23 * 0x20) == uVar12)
          goto LAB_14730ba3b;
          iVar23 = *(int *)(lVar15 + 0x18);
        } while (iVar23 != -1);
      }
    }
    lVar15 = 0;
LAB_14730ba3b:
    lVar20 = (longlong)*(int *)(param_1 + 0x944) * 0x430 + *(longlong *)(lVar15 + 8);
    if (*(int *)(param_1 + 0x30) == 1) {
      iVar23 = *(int *)(lVar14 + 0x15c);
      lVar15 = lVar20 + 0x3e0;
      if (*(longlong *)(lVar20 + 0x3f0) != 0) {
        lVar15 = *(longlong *)(lVar20 + 0x3f0);
      }
      iVar19 = iVar23 + 0x1f;
      if (-1 < iVar23) {
        iVar19 = iVar23;
      }
      puVar2 = (uint *)(lVar15 + (longlong)(iVar19 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)iVar23 & 0x1f);
    }
    else if ((*(char *)(*(longlong *)(lVar14 + 8) + 0x68) != '\x02') &&
            ((*(byte *)(*(longlong *)(lVar14 + 8) + 0x6f) & 0x10) != 0)) {
      LOCK();
      *(int *)(lVar20 + 0x428) = *(int *)(lVar20 + 0x428) + 1;
      UNLOCK();
    }
  }
  uVar12 = *(uint *)(param_2 + 1);
  local_b8 = param_1;
  local_90 = param_4;
  if ((uVar12 >> 9 & 1) != 0) {
    local_58 = *(undefined4 *)param_3;
    uStack_54 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_50 = *(undefined4 *)(param_3 + 1);
    uStack_4c = *(undefined4 *)((longlong)param_3 + 0xc);
    cVar11 = FUN_1448b7d84(param_1,lVar14,&local_58,uVar12 >> 10 & 1);
    if ((cVar11 != '\0') && (*(longlong *)(local_b8 + 0xb50) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
    }
    goto LAB_14730b60c;
  }
  if (*(longlong *)(param_1 + 0xb50) != 0) {
    FUN_144abac18(*(longlong *)(param_1 + 0xb50),lVar14);
    uVar12 = *(uint *)(param_2 + 1);
  }
  if ((char)uVar12 < '\0') {
    if ((((char)*(uint *)(local_b8 + 0x990) < '\0') && (-1 < *(int *)(local_b8 + 0x944))) &&
       ((*(uint *)(local_b8 + 0x990) & 0x10) != 0)) {
      param_3 = (undefined8 *)(local_b8 + 0x38);
    }
    cVar11 = FUN_1472e1998(*param_3,lVar14);
    uVar12 = *(uint *)(param_2 + 1);
    if (cVar11 != '\0') {
      if ((uVar12 & 4) != 0) {
        *local_90 = *local_90 + (ulonglong)((uint)*(ushort *)((longlong)param_2 + 0xc) * 2);
        local_90[1] = local_90[1] + (ulonglong)((uint)*(ushort *)((longlong)param_2 + 0xe) * 2);
      }
      goto LAB_14730b60c;
    }
  }
  if ((uVar12 & 1) != 0) {
    if ((uVar12 & 4) == 0) {
      local_b0 = (longlong)param_2 + 0xc;
      uVar13 = 1;
      lVar20 = -1;
      if (*(short *)((longlong)param_2 + 0xe) != 0) {
        uVar13 = ((uVar12 & 2) == 0) + 1;
      }
    }
    else {
      local_b0 = *local_90;
      uVar13 = (uint)*(ushort *)((longlong)param_2 + 0xc);
      *local_90 = local_b0 + (ulonglong)*(ushort *)((longlong)param_2 + 0xc) * 2;
      lVar20 = 0;
    }
    uVar12 = *(uint *)(local_b8 + 0x990);
    lVar15 = 7;
    if ((uVar12 & 0x10) == 0) {
      lVar15 = (ulonglong)((uVar12 & 0x20) >> 4) + 7;
    }
    if (uVar13 != 0) {
      local_80 = 8;
      if ((uVar12 & 0x40) == 0) {
        local_80 = lVar15;
      }
      local_88 = (longlong *)(local_b8 + 0xc50);
      local_70 = (ulonglong)uVar13;
      uVar16 = 0;
      local_a8 = (longlong *)(lVar20 << 5);
      local_78 = local_80 * 0x78;
      local_68 = param_2;
      local_60 = lVar14;
      do {
        lVar14 = (ulonglong)*(ushort *)(local_b0 + uVar16 * 2) * 0x20;
        puVar1 = (undefined8 *)((longlong)local_a8 + lVar14 + *(longlong *)(local_60 + 0x20));
        lVar14 = (longlong)
                 *(int *)((longlong)local_a8 + lVar14 + 0xc + *(longlong *)(local_60 + 0x20));
        if (lVar14 < 0) {
          lVar14 = (longlong)*(int *)(puVar1 + 1) * 0x120 +
                   *(longlong *)
                    (*(longlong *)(local_60 + 0x148) + 0x1b88 +
                    (ulonglong)(uint)((int)local_80 << 6));
        }
        else {
          lVar14 = lVar14 * 0x128 + *(longlong *)(*(longlong *)(local_60 + 0x148) + 0x58 + local_78)
          ;
        }
        uVar12 = *(uint *)(puVar1 + 2);
        uVar13 = *(uint *)(local_68 + 1);
        local_98 = CONCAT44(local_98._4_4_,*(undefined4 *)(local_60 + 0x158));
        local_a0 = CONCAT44(local_a0._4_4_,*(undefined4 *)(local_60 + 0x15c));
        uVar4 = *(uint *)(local_60 + 0x204);
        iVar23 = *(int *)(local_b8 + 0xc58);
        lVar20 = (longlong)iVar23;
        *(uint *)(local_b8 + 0xc58) = iVar23 + 1U;
        if (*(uint *)(local_b8 + 0xc5c) < iVar23 + 1U) {
          FUN_1448b96b0(local_88,iVar23);
        }
        bVar26 = (byte)(uVar13 >> 0xb) & 1;
        lVar15 = *local_88;
        uVar5 = *(undefined4 *)(puVar1 + 2);
        uVar8 = *puVar1;
        bVar17 = *(byte *)((longlong)puVar1 + 0x1c);
        uVar6 = *(uint *)(puVar1 + 3);
        uVar7 = *(undefined4 *)((longlong)puVar1 + 0xc);
        *(longlong *)(lVar15 + lVar20 * 0x48) = lVar14;
        *(undefined4 *)(lVar15 + 0x10 + lVar20 * 0x48) = (undefined4)local_a0;
        *(undefined4 *)(lVar15 + 0x14 + lVar20 * 0x48) = (undefined4)local_98;
        *(uint *)(lVar15 + 0x18 + lVar20 * 0x48) = uVar4 & 0x7fffffff;
        *(undefined4 *)(lVar15 + 0x1c + lVar20 * 0x48) = 0xffffffff;
        *(undefined4 *)(lVar15 + 0x20 + lVar20 * 0x48) = uVar7;
        *(uint *)(lVar15 + 0x3c + lVar20 * 0x48) =
             uVar6 & 0x3f | *(uint *)(lVar15 + 0x3c + lVar20 * 0x48) & 0xffffffc0;
        *(undefined8 *)(lVar15 + 8 + lVar20 * 0x48) = uVar8;
        *(byte *)(lVar15 + 0x40 + lVar20 * 0x48) =
             *(byte *)(lVar15 + 0x40 + lVar20 * 0x48) & 0xc0 | bVar17 & 0x3f;
        *(undefined4 *)(lVar15 + 0x34 + lVar20 * 0x48) = uVar5;
        *(byte *)(lVar15 + 0x38 + lVar20 * 0x48) =
             *(byte *)(lVar15 + 0x38 + lVar20 * 0x48) & 0xfc |
             ((uVar12 & 0xf) != (uVar13 >> 0xc & 0x7f) & bVar26) * '\x02' |
             (uVar12 & 0xf) != (uVar13 >> 0x13 & 0x7f) & bVar26;
        *(undefined8 *)(lVar15 + 0x28 + lVar20 * 0x48) = 0;
        *(undefined4 *)(lVar15 + 0x30 + lVar20 * 0x48) = 0;
        uVar16 = uVar16 + 1;
        param_2 = local_68;
        lVar14 = local_60;
      } while (local_70 != uVar16);
    }
  }
  uVar12 = *(uint *)(param_2 + 1);
  lVar20 = local_b8;
  if ((uVar12 & 2) != 0) {
    if ((uVar12 & 4) == 0) {
      if ((uVar12 & 1) == 0) {
        lVar15 = (longlong)param_2 + 0xc;
        uVar16 = 2 - (ulonglong)(*(short *)((longlong)param_2 + 0xe) == 0);
        lVar21 = -1;
      }
      else {
        lVar15 = (longlong)param_2 + 0xe;
        lVar21 = -1;
        uVar16 = 1;
      }
    }
    else {
      lVar15 = local_90[1];
      uVar3 = *(ushort *)((longlong)param_2 + 0xe);
      uVar16 = (ulonglong)uVar3;
      local_90[1] = lVar15 + uVar16 * 2;
      if (uVar3 == 0) goto LAB_14730b5f1;
      lVar21 = 0;
    }
    lVar22 = local_b8 + 0xc28;
    plVar24 = (longlong *)(local_b8 + 0xc38);
    uVar25 = 0;
    do {
      lVar18 = (ulonglong)*(ushort *)(lVar15 + uVar25 * 2) + lVar21;
      lVar9 = *(longlong *)(lVar14 + 0x30);
      lVar10 = *(longlong *)(lVar14 + 0x40);
      *(int *)(lVar20 + 0xc4c) =
           *(int *)(lVar20 + 0xc4c) + (uint)*(ushort *)(lVar9 + 0x10 + lVar18 * 0x18);
      iVar23 = *(int *)(lVar20 + 0xc30);
      *(uint *)(lVar20 + 0xc30) = iVar23 + 1U;
      if (*(uint *)(lVar20 + 0xc34) < iVar23 + 1U) {
        local_b0 = lVar22;
        local_a8 = plVar24;
        local_a0 = lVar21;
        local_98 = lVar15;
        FUN_1401bb46c(lVar22,iVar23);
        lVar15 = local_98;
        lVar21 = local_a0;
        lVar22 = local_b0;
        lVar20 = local_b8;
        plVar24 = local_a8;
      }
      *(longlong *)(*(longlong *)(lVar20 + 0xc28) + (longlong)iVar23 * 8) = lVar18 * 0x100 + lVar10;
      bVar17 = *(byte *)(lVar9 + lVar18 * 0x18 + 0x14);
      uVar13 = (uint)(char)(-((bVar17 & 0x10) != 0) | bVar17 & 0xf);
      uVar12 = *(uint *)(param_2 + 1);
      iVar23 = *(int *)(lVar20 + 0xc40);
      *(uint *)(lVar20 + 0xc40) = iVar23 + 1U;
      if (*(uint *)(lVar20 + 0xc44) < iVar23 + 1U) {
        local_b0 = lVar22;
        local_a8 = plVar24;
        local_a0 = lVar21;
        local_98 = lVar15;
        FUN_1401bb40e(plVar24,iVar23);
        lVar15 = local_98;
        lVar21 = local_a0;
        lVar22 = local_b0;
        lVar20 = local_b8;
        plVar24 = local_a8;
      }
      bVar17 = (byte)(uVar12 >> 0xb) & 1;
      *(byte *)(*plVar24 + (longlong)iVar23) =
           ((uVar12 >> 0xc & 0x7f) != uVar13 & bVar17) * '\x02' |
           (uVar12 >> 0x13 & 0x7f) != uVar13 & bVar17;
      uVar25 = uVar25 + 1;
    } while (uVar16 != uVar25);
  }
LAB_14730b5f1:
  uVar12 = *(uint *)(param_2 + 1);
  if ((uVar12 & 8) != 0) {
    plVar24 = (longlong *)(lVar20 + 3000);
    iVar23 = *(int *)(lVar20 + 0xbc0);
    *(uint *)(lVar20 + 0xbc0) = iVar23 + 1U;
    if (*(uint *)(lVar20 + 0xbc4) < iVar23 + 1U) {
      FUN_1401baee0(plVar24,iVar23);
      lVar20 = local_b8;
    }
    *(longlong *)(*plVar24 + (longlong)iVar23 * 8) = lVar14;
    uVar12 = *(uint *)(param_2 + 1);
  }
  if ((uVar12 & 0x10) != 0) {
    iVar23 = *(int *)(lVar20 + 0xbe0);
    *(uint *)(lVar20 + 0xbe0) = iVar23 + 1U;
    if (*(uint *)(lVar20 + 0xbe4) < iVar23 + 1U) {
      FUN_1401baee0((longlong *)(lVar20 + 0xbd8),iVar23);
    }
    *(longlong *)(*(longlong *)(lVar20 + 0xbd8) + (longlong)iVar23 * 8) = lVar14;
    uVar12 = *(uint *)(param_2 + 1);
    lVar20 = local_b8;
  }
  if ((uVar12 & 0x20) != 0) {
    iVar23 = *(int *)(lVar20 + 0xbf0);
    *(uint *)(lVar20 + 0xbf0) = iVar23 + 1U;
    if (*(uint *)(lVar20 + 0xbf4) < iVar23 + 1U) {
      FUN_1401baee0((longlong *)(lVar20 + 0xbe8),iVar23);
    }
    *(longlong *)(*(longlong *)(lVar20 + 0xbe8) + (longlong)iVar23 * 8) = lVar14;
  }
LAB_14730b60c:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14730bd72 FUN_14730bd72 body=589 status=ok
// SIG undefined FUN_14730bd72(void)

void FUN_14730bd72(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(undefined8 *)(param_1 + 0xc48) = 0;
  *(undefined4 *)(param_1 + 0xbe0) = 0;
  if (*(int *)(param_1 + 0xbe4) != 0) {
    FUN_14011033e(param_1 + 0xbd8,0);
  }
  *(undefined4 *)(param_1 + 0xbf0) = 0;
  if (*(int *)(param_1 + 0xbf4) != 0) {
    FUN_14011033e(param_1 + 0xbe8,0);
  }
  *(undefined4 *)(param_1 + 0xbc0) = 0;
  if (*(int *)(param_1 + 0xbc4) != 0) {
    FUN_14011033e(param_1 + 3000,0);
  }
  *(undefined4 *)(param_1 + 0xbd0) = 0;
  if (*(int *)(param_1 + 0xbd4) != 0) {
    FUN_14011033e(param_1 + 0xbc8,0);
  }
  *(undefined4 *)(param_1 + 0xc00) = 0;
  if (*(int *)(param_1 + 0xc04) != 0) {
    FUN_1417802de(param_1 + 0xbf8,0);
  }
  *(undefined4 *)(param_1 + 0xc10) = 0;
  if (*(int *)(param_1 + 0xc14) != 0) {
    FUN_1417802de(param_1 + 0xc08,0);
  }
  *(undefined4 *)(param_1 + 0xc20) = 0;
  if (*(int *)(param_1 + 0xc24) != 0) {
    FUN_1417802de(param_1 + 0xc18,0);
  }
  *(undefined4 *)(param_1 + 0xc58) = 0;
  if (*(int *)(param_1 + 0xc5c) != 0) {
    FUN_14482a268(param_1 + 0xc50,0);
  }
  FUN_142de5902(param_1 + 0xc60);
  *(undefined4 *)(param_1 + 0xc30) = 0;
  if (*(int *)(param_1 + 0xc34) != 0) {
    FUN_14482a282(param_1 + 0xc28,0);
  }
  *(undefined4 *)(param_1 + 0xc40) = 0;
  if (*(int *)(param_1 + 0xc44) != 0) {
    FUN_14011052e(param_1 + 0xc38,0);
  }
  lVar4 = *(longlong *)(param_1 + 0x1030);
  if (*(longlong *)(param_1 + 0x1030) == 0) {
    lVar4 = param_1 + 0xff0;
  }
  iVar1 = *(int *)(param_1 + 0x1038);
  if ((longlong)iVar1 != 0) {
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(lVar4 + lVar3);
      if (lVar2 != 0) {
        FUN_144ab33a4(lVar2 + 0x1b8);
        FUN_1446fb350(lVar2 + 0x140);
        FUN_1446f93f0(lVar2 + 0x10);
        FUN_140021158(lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x1038) = 0;
  if (*(int *)(param_1 + 0x103c) < 0) {
    FUN_147313636(param_1 + 0xff0,0);
  }
  FUN_144ab9548(param_1 + 0x1040);
  *(undefined4 *)(param_1 + 0x1048) = 0;
  if (*(int *)(param_1 + 0x104c) != 0) {
    FUN_1447ab16c(param_1 + 0x1040,0);
  }
  *(undefined4 *)(param_1 + 0x1050) = 0;
  FUN_144ab2920(param_1 + 0x1058);
  return;
}



// FUNCTION 14730bfc0 FUN_14730bfc0 body=417 status=ok
// SIG undefined FUN_14730bfc0(void)

longlong *
FUN_14730bfc0(longlong param_1,longlong *param_2,longlong *param_3,double *param_4,int param_5)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  
  if (((*(int *)(DAT_14ca5b158 + 4) != 0) &&
      (*(char *)(*(longlong *)(param_1 + 1000) + 0x23e8) == '\0')) &&
     (lVar9 = *(longlong *)(param_1 + 8), 0 < *(int *)(lVar9 + 0x4c38))) {
    lVar6 = *param_3;
    lVar7 = param_3[1];
    dVar2 = param_4[6];
    dVar3 = *param_4;
    dVar4 = param_4[1];
    dVar5 = param_4[2];
    lVar10 = 0;
    do {
      puVar8 = *(undefined8 **)(*(longlong *)(lVar9 + 0x4c30) + lVar10 * 8);
      if (puVar8 != (undefined8 *)0x0) {
        *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
      }
      if ((((puVar8[0x176] == lVar7) && (puVar8[0x16c] == lVar6)) &&
          ((dVar11 = (double)puVar8[0xda] * 0.03999999910593033 + (double)puVar8[0xda],
           dVar2 <= dVar11 &&
           ((dVar11 = dVar11 - dVar2,
            (dVar5 - (double)puVar8[0xd9]) * (dVar5 - (double)puVar8[0xd9]) +
            (dVar3 - (double)puVar8[0xd7]) * (dVar3 - (double)puVar8[0xd7]) +
            (dVar4 - (double)puVar8[0xd8]) * (dVar4 - (double)puVar8[0xd8]) <= dVar11 * dVar11 &&
            (*(int *)(puVar8 + 299) == param_5)))))) && ((*(byte *)(puVar8 + 0x132) & 1) != 0)) {
        *param_2 = (longlong)puVar8;
        FUN_14730bd72();
        return param_2;
      }
      if (puVar8 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar8 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar8)(puVar8,1);
        }
      }
      lVar10 = lVar10 + 1;
      lVar9 = *(longlong *)(param_1 + 8);
    } while (lVar10 < *(int *)(lVar9 + 0x4c38));
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 14730c162 FUN_14730c162 body=541 status=ok
// SIG undefined FUN_14730c162(void)

undefined8 FUN_14730c162(undefined8 *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  
  uVar2 = param_5 + 3 & 0xfffffffc;
  uVar3 = param_4 + 3 & 0xfffffffc;
  if (*(char *)((longlong)param_1 + 0x15) == '\0') {
    uVar2 = param_5;
    uVar3 = param_4;
  }
  if (0 < (longlong)*(int *)(param_1 + 0x11)) {
    puVar1 = param_1 + 3;
    puVar11 = (undefined8 *)param_1[0x10];
    if ((undefined8 *)param_1[0x10] == (undefined8 *)0x0) {
      puVar11 = puVar1;
    }
    puVar11 = puVar11 + 2;
    lVar7 = 0;
    do {
      if ((((*(ushort *)(puVar11 + -1) == param_2) &&
           (*(ushort *)((longlong)puVar11 + -6) == param_3)) &&
          (uVar3 == *(ushort *)((longlong)puVar11 + -4))) &&
         (uVar10 = (ulonglong)*(ushort *)((longlong)puVar11 + -2),
         uVar2 == *(ushort *)((longlong)puVar11 + -2))) {
        *(undefined1 *)puVar11 = 0;
        if ((longlong)*(int *)(param_1 + 0x11) < 1) goto LAB_14730c235;
        puVar11 = (undefined8 *)param_1[0x10];
        if ((undefined8 *)param_1[0x10] == (undefined8 *)0x0) {
          puVar11 = puVar1;
        }
        uVar10 = 0;
        lVar8 = 0;
        goto LAB_14730c21f;
      }
      lVar7 = lVar7 + 1;
      puVar11 = (undefined8 *)((longlong)puVar11 + 0x14);
    } while (*(int *)(param_1 + 0x11) != lVar7);
  }
  return 0;
  while( true ) {
    lVar8 = lVar8 + 0x14;
    uVar10 = (ulonglong)((int)uVar10 + 1);
    if ((longlong)*(int *)(param_1 + 0x11) * 0x14 == lVar8) break;
LAB_14730c21f:
    if ((*(int *)((longlong)puVar11 + lVar8) == (int)lVar7) ||
       (*(int *)((longlong)puVar11 + lVar8 + 4) == (int)lVar7)) {
      cVar5 = FUN_147310b38(param_1,uVar10);
      if (cVar5 == '\0') {
        puVar11 = (undefined8 *)param_1[0x10];
        if ((undefined8 *)param_1[0x10] == (undefined8 *)0x0) {
          puVar11 = puVar1;
        }
        cVar5 = FUN_147310b38(param_1,*(undefined4 *)((longlong)puVar11 + lVar8));
        uVar4 = uVar10;
        if (cVar5 != '\0') goto LAB_14730c2ce;
        puVar11 = (undefined8 *)param_1[0x10];
        if ((undefined8 *)param_1[0x10] == (undefined8 *)0x0) {
          puVar11 = puVar1;
        }
        cVar5 = FUN_147310b38(param_1,*(undefined4 *)((longlong)puVar11 + lVar8 + 4));
        goto joined_r0x00014730c302;
      }
      break;
    }
  }
  goto LAB_14730c235;
joined_r0x00014730c302:
  uVar9 = uVar10;
  uVar10 = uVar9;
  if (cVar5 != '\0') goto LAB_14730c2ce;
  if ((longlong)*(int *)(param_1 + 0x11) < 1) goto LAB_14730c2d7;
  puVar11 = (undefined8 *)param_1[0x10];
  if ((undefined8 *)param_1[0x10] == (undefined8 *)0x0) {
    puVar11 = puVar1;
  }
  uVar10 = 0;
  lVar7 = 0;
  while ((uVar4 = uVar9, *(int *)((longlong)puVar11 + lVar7) != (int)uVar9 &&
         (*(int *)((longlong)puVar11 + lVar7 + 4) != (int)uVar9))) {
    lVar7 = lVar7 + 0x14;
    uVar10 = (ulonglong)((int)uVar10 + 1);
    if ((longlong)*(int *)(param_1 + 0x11) * 0x14 == lVar7) goto LAB_14730c2ce;
  }
  cVar5 = FUN_147310b38(param_1,*(undefined4 *)((longlong)puVar11 + lVar7));
  if (cVar5 != '\0') goto LAB_14730c2ce;
  puVar11 = (undefined8 *)param_1[0x10];
  if ((undefined8 *)param_1[0x10] == (undefined8 *)0x0) {
    puVar11 = puVar1;
  }
  cVar5 = FUN_147310b38(param_1,*(undefined4 *)((longlong)puVar11 + lVar7 + 4));
  goto joined_r0x00014730c302;
LAB_14730c2ce:
  uVar9 = uVar4;
  if ((int)uVar9 != -1) {
LAB_14730c2d7:
    FUN_147310bb0(param_1,uVar9);
  }
LAB_14730c235:
  param_1[1] = *param_1;
  iVar6 = *(int *)(param_1 + 0x11);
  if (0 < iVar6) {
    lVar7 = 0x10;
    lVar8 = 0;
    do {
      puVar11 = (undefined8 *)param_1[0x10];
      if ((undefined8 *)param_1[0x10] == (undefined8 *)0x0) {
        puVar11 = puVar1;
      }
      if (*(char *)((longlong)puVar11 + lVar7) == '\x01') {
        FUN_140336684(param_1,(uint)*(ushort *)((longlong)puVar11 + lVar7 + -4) +
                              (uint)*(ushort *)((longlong)puVar11 + lVar7 + -8),
                      (uint)*(ushort *)((longlong)puVar11 + lVar7 + -2) +
                      (uint)*(ushort *)((longlong)puVar11 + lVar7 + -6));
        iVar6 = *(int *)(param_1 + 0x11);
      }
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x14;
    } while (lVar8 < iVar6);
  }
  return CONCAT71((int7)(uVar10 >> 8),1);
}



// FUNCTION 14730c380 FUN_14730c380 body=449 status=ok
// SIG undefined FUN_14730c380(void)

void FUN_14730c380(longlong param_1,longlong *param_2,char param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  uint *puVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  
  lVar2 = param_2[1];
  uVar1 = *(uint *)(lVar2 + 0x18);
  if (uVar1 != 0) {
    lVar7 = *(longlong *)(param_1 + 8);
    if (*(int *)(lVar7 + 0x4e40) != *(int *)(lVar7 + 0x4e6c)) {
      lVar8 = lVar7 + 0x4e70;
      if (*(longlong *)(lVar7 + 0x4e78) != 0) {
        lVar8 = *(longlong *)(lVar7 + 0x4e78);
      }
      uVar9 = *(uint *)(lVar8 + (ulonglong)(*(int *)(lVar7 + 0x4e80) - 1U & uVar1) * 4);
      if (uVar9 != 0xffffffff) {
        do {
          puVar5 = (uint *)(*(longlong *)(lVar7 + 0x4e38) + (longlong)(int)uVar9 * 0x28);
          if (*puVar5 == uVar1) goto LAB_14730c3bc;
          uVar9 = puVar5[8];
        } while (uVar9 != 0xffffffff);
      }
    }
    puVar5 = (uint *)0x0;
LAB_14730c3bc:
    if ((*(longlong *)(puVar5 + 2) != 0) &&
       ((*(byte *)(*(longlong *)(*(longlong *)(puVar5 + 2) + 8) + 0x73) & 8) != 0)) {
      return;
    }
  }
  uVar1 = *(uint *)((longlong)param_2 + 0x34);
  if ((uVar1 & 0x40) == 0) {
    uVar4 = 0;
    uVar9 = uVar1;
  }
  else {
    uVar4 = FUN_144adbdbb(*(undefined2 *)(param_1 + 0x8a8),*(undefined4 *)(param_1 + 0x8a4));
    uVar4 = uVar4 ^ 1;
    uVar9 = *(uint *)((longlong)param_2 + 0x34);
  }
  lVar2 = *(longlong *)(lVar2 + 8);
  lVar7 = *param_2;
  if (*(char *)(lVar7 + 0xfc) == '\x01') {
    if (((*(byte *)(lVar7 + 0xe4) & 1) == 0) || (DAT_14c760480 <= *(int *)(lVar7 + 0xf8))) {
      lVar7 = *(longlong *)(lVar7 + 0x28);
      if ((*(byte *)(lVar7 + 0x1d0) & 8) != 0) goto LAB_14730c43f;
    }
    else {
      lVar7 = *(longlong *)(lVar7 + 0x28);
    }
    if (*(int *)(lVar7 + 0x18c) != -1) {
      bVar6 = (*(byte *)(lVar2 + 0x6d) & 0x40) == 0 || (uVar9 & 8) == 0;
      goto LAB_14730c441;
    }
  }
LAB_14730c43f:
  bVar6 = false;
LAB_14730c441:
  if ((uVar9 & 1) != 0) {
    bVar3 = (byte)uVar4;
    if (param_3 == '\0') {
      if ((byte)(bVar3 | bVar6 | (byte)((uVar1 & 0x20) >> 5)) != 1) {
        return;
      }
    }
    else {
      if ((byte)(bVar3 | bVar6 | (byte)((uVar1 & 0x20) >> 5)) != 1) {
        return;
      }
      if ((*(byte *)(lVar2 + 0x6d) & 0x40) == 0) {
        return;
      }
    }
    FUN_14730c542(param_1,param_2,(uVar1 & 0x20) >> 5,
                  CONCAT71((int7)(uVar4 >> 8),bVar3 | bVar6) & 0xffffffff,param_4,param_5);
  }
  return;
}



// FUNCTION 14730c542 FUN_14730c542 body=6351 status=ok
// SIG undefined FUN_14730c542(void)

void FUN_14730c542(longlong param_1,longlong *param_2,char param_3,byte param_4,longlong *param_5,
                  longlong *param_6)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong *plVar5;
  double dVar6;
  double dVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  int iVar19;
  undefined4 uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  byte bVar25;
  byte bVar26;
  uint uVar27;
  uint uVar28;
  ulonglong uVar29;
  byte bVar30;
  byte bVar31;
  uint uVar32;
  longlong lVar33;
  uint uVar34;
  bool bVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auStack_438 [32];
  uint local_418;
  uint local_410;
  uint local_408;
  undefined4 local_400;
  undefined1 local_3f8;
  char local_3e2;
  byte local_3e1;
  longlong local_3e0;
  uint local_3d4;
  undefined8 local_3d0;
  float local_3c4;
  uint local_3c0;
  float local_3bc;
  undefined4 local_3b8;
  uint local_3b4;
  uint local_3b0;
  uint local_3ac;
  longlong local_3a8;
  float local_3a0;
  float local_39c;
  double local_398;
  longlong *local_390;
  uint local_384;
  uint local_380;
  float local_37c;
  float local_378;
  float local_374;
  float local_370;
  int local_36c;
  int local_368;
  int local_364;
  longlong *local_360;
  double local_358;
  double local_350;
  double local_348;
  longlong local_340;
  undefined8 *local_338 [2];
  undefined8 local_328;
  undefined4 local_320;
  undefined8 local_318;
  undefined4 local_310;
  double local_308;
  double dStack_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double local_2c8;
  double dStack_2c0;
  undefined8 local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  longlong *local_288;
  undefined8 uStack_280;
  undefined4 local_278 [2];
  undefined8 local_270;
  undefined4 local_268;
  undefined1 local_264;
  undefined4 local_260 [2];
  undefined8 local_258;
  undefined4 local_250;
  undefined1 local_24c;
  undefined1 local_248 [4];
  byte local_244;
  byte local_243;
  byte local_240;
  uint local_238;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined1 local_120 [8];
  undefined1 *local_118;
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined1 *local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_438;
  local_3a8 = *param_2;
  local_3e0 = param_2[1];
  iVar13 = *(int *)(local_3e0 + 0x158);
  local_390 = (longlong *)
              ((longlong)*(int *)(local_3a8 + 0x34) * 0x68 + *(longlong *)(param_1 + 0x4d8));
  local_3e2 = param_3;
  local_3e1 = param_4;
  local_360 = param_2;
  local_3bc = (float)FUN_1403fb1aa();
  lVar24 = local_3e0;
  if (*(int *)(param_1 + 0x3f0) < 1) {
    uVar28 = 0;
    uVar27 = 0;
    uVar32 = 0;
    local_3b8 = 0;
    uVar34 = 0;
    uVar18 = 0;
  }
  else {
    lVar33 = 0;
    dVar42 = (double)((longlong)iVar13 * 3);
    lVar23 = 0;
    uVar18 = 0;
    local_3b8 = 0;
    bVar26 = 0;
    local_3d0 = dVar42;
    local_340 = param_1;
    uVar34 = 0;
    uVar28 = 0;
    uVar32 = 0;
    do {
      local_3ac = uVar32;
      local_3b0 = uVar28;
      local_3b4 = uVar34;
      lVar22 = *(longlong *)(local_340 + 1000);
      lVar21 = *(longlong *)(lVar22 + 0x31d8 + lVar33);
      uVar32 = *(uint *)(lVar21 + 0x10 + (longlong)dVar42 * 8);
      local_3d4 = uVar18;
      if ((uVar32 >> 0x15 & 1) == 0) {
        (**(code **)(**(longlong **)(lVar24 + 8) + 200))
                  (*(longlong **)(lVar24 + 8),local_248,lVar22 + lVar33);
        lVar24 = local_3e0;
        dVar42 = local_3d0;
        uVar32 = local_238;
        bVar11 = local_244;
        bVar25 = local_243;
        bVar30 = local_240;
      }
      else {
        bVar11 = *(byte *)(lVar21 + 4 + (longlong)dVar42 * 8);
        bVar25 = *(byte *)(lVar21 + 5 + (longlong)dVar42 * 8);
        bVar30 = *(byte *)(lVar21 + 8 + (longlong)dVar42 * 8);
      }
      uVar14 = *(undefined8 *)(*(longlong *)(local_3a8 + 0x28) + 8);
      uVar20 = *(undefined4 *)(lVar24 + 0x10);
      bVar9 = 1;
      if (local_3e1 == 0) {
        bVar8 = 1;
      }
      else if (((*(byte *)(lVar22 + 0x125b0 + lVar33) & 0x10) == 0) &&
              (lVar21 = *(longlong *)(lVar22 + 0x10 + lVar33), lVar21 != 0)) {
        local_250 = 0xffffffff;
        local_24c = 0;
        local_3c4 = (float)CONCAT31(local_3c4._1_3_,bVar30);
        local_260[0] = uVar20;
        local_258 = uVar14;
        bVar8 = FUN_1401fa7d0(lVar21,local_260,local_3bc);
        uVar14 = *(undefined8 *)(*(longlong *)(local_3a8 + 0x28) + 8);
        uVar20 = *(undefined4 *)(local_3e0 + 0x10);
        lVar24 = local_3e0;
        dVar42 = local_3d0;
        bVar30 = local_3c4._0_1_;
      }
      else {
        bVar8 = 0;
      }
      if (local_3e2 != '\0') {
        if (((*(byte *)(lVar22 + 0x125b0 + lVar33) & 0x10) == 0) &&
           (lVar21 = *(longlong *)(lVar22 + 0x10 + lVar33), lVar21 != 0)) {
          local_268 = 0xffffffff;
          local_264 = 1;
          local_3c4 = (float)CONCAT31(local_3c4._1_3_,bVar30);
          local_278[0] = uVar20;
          local_270 = uVar14;
          bVar9 = FUN_1401fa7d0(lVar21,local_278,local_3bc);
          lVar24 = local_3e0;
          dVar42 = local_3d0;
          bVar30 = local_3c4._0_1_;
        }
        else {
          bVar9 = 0;
        }
      }
      if ((*(byte *)(*(longlong *)(lVar24 + 8) + 0x6e) & 8) != 0) {
        uVar34 = *(uint *)(lVar24 + 0x158);
        lVar21 = *(longlong *)(lVar22 + lVar33 + 0x3128);
        if (lVar21 == 0) {
          lVar21 = lVar22 + lVar33 + 0x3118;
        }
        uVar28 = uVar34 + 0x1f;
        if (-1 < (int)uVar34) {
          uVar28 = uVar34;
        }
        local_3b8 = CONCAT31((int3)((uint)local_3b8 >> 8),
                             (byte)local_3b8 |
                             (*(uint *)(lVar21 + (longlong)((int)uVar28 >> 5) * 4) >>
                              (uVar34 & 0x1f) & 1) != 0);
      }
      uVar32 = uVar32 & 8;
      bVar31 = 1;
      if (((bVar25 & 2) == 0) && (bVar11 < 0x40 && (bVar25 & 1) == 0)) {
        bVar31 = bVar30 & 1;
      }
      bVar26 = bVar26 | bVar31;
      uVar27 = (uint)bVar26;
      uVar34 = CONCAT31((int3)(local_3b4 >> 8),(byte)local_3b4 | (bVar8 ^ 1) & uVar32 != 0);
      uVar28 = CONCAT31((int3)(local_3b0 >> 8),(byte)local_3b0 | (bVar9 ^ 1) & uVar32 != 0);
      uVar18 = local_3d4 & 1 | uVar32 >> 3;
      uVar32 = CONCAT31((int3)(local_3ac >> 8),(byte)local_3ac | bVar11 >> 1) & 0xffffff01;
      lVar23 = lVar23 + 1;
      lVar33 = lVar33 + 0x13c10;
      param_1 = local_340;
    } while (lVar23 < *(int *)(local_340 + 0x3f0));
  }
  if ((((byte)uVar34 | (byte)uVar28) & 1) == 0 && (char)uVar18 == '\0') goto LAB_14730d984;
  local_288 = (longlong *)0x0;
  uStack_280 = 0;
  local_3d4 = uVar18;
  local_3b4 = uVar34;
  local_3b0 = uVar28;
  local_3ac = uVar32;
  local_380 = uVar27;
  FUN_1472ab2a8(lVar24,&local_288);
  lVar24 = *(longlong *)(*local_288 + 8);
  local_2c8 = *(double *)(lVar24 + 0x180);
  dStack_2c0 = *(double *)(lVar24 + 0x188);
  local_2b8 = *(double *)(lVar24 + 400);
  dStack_2b0 = *(double *)(lVar24 + 0x198);
  local_2a8 = *(double *)(lVar24 + 0x1a0);
  dStack_2a0 = *(double *)(lVar24 + 0x1a8);
  local_298 = *(double *)(lVar24 + 0x1b0);
  cVar10 = FUN_144b188c2();
  if (cVar10 != '\0') {
    local_2b8 = DAT_14c8464f0;
    local_2c8 = DAT_14c8464e0;
    dStack_2c0 = DAT_14c8464e8;
    dStack_2b0 = 1.0;
    local_2a8 = 1.0;
    dStack_2a0 = 1.0;
    local_298 = 1.0;
  }
  if (1 < (int)uStack_280) {
    lVar24 = 1;
    dVar44 = dStack_2a0;
    dVar41 = local_298;
    dVar42 = dStack_2b0;
    dVar40 = local_2a8;
    do {
      lVar23 = *(longlong *)(local_288[lVar24] + 8);
      dVar39 = dVar41;
      if ((*(byte *)(lVar23 + 0x70) & 1) != 0) {
        dVar39 = *(double *)(lVar23 + 0x180);
        dVar2 = *(double *)(lVar23 + 0x188);
        dVar3 = *(double *)(lVar23 + 400);
        dVar6 = local_2c8 + dVar42;
        dVar7 = dStack_2c0 + dVar40;
        dVar45 = local_2b8 + dVar44;
        dVar42 = local_2c8 - dVar42;
        dVar40 = dStack_2c0 - dVar40;
        dVar44 = local_2b8 - dVar44;
        dVar43 = dVar42;
        if (dVar6 <= dVar42) {
          dVar43 = dVar6;
        }
        if (dVar42 <= dVar6) {
          dVar42 = dVar6;
        }
        dVar6 = dVar40;
        if (dVar7 <= dVar40) {
          dVar6 = dVar7;
        }
        if (dVar40 <= dVar7) {
          dVar40 = dVar7;
        }
        dVar7 = dVar44;
        if (dVar45 <= dVar44) {
          dVar7 = dVar45;
        }
        if (dVar44 <= dVar45) {
          dVar44 = dVar45;
        }
        dVar45 = dVar39 - *(double *)(lVar23 + 0x198);
        if (dVar45 <= dVar43) {
          dVar43 = dVar45;
        }
        if (dVar42 <= dVar45) {
          dVar42 = dVar45;
        }
        dVar45 = dVar2 - *(double *)(lVar23 + 0x1a0);
        if (dVar45 <= dVar6) {
          dVar6 = dVar45;
        }
        if (dVar40 <= dVar45) {
          dVar40 = dVar45;
        }
        dVar45 = dVar3 - *(double *)(lVar23 + 0x1a8);
        if (dVar45 <= dVar7) {
          dVar7 = dVar45;
        }
        if (dVar44 <= dVar45) {
          dVar44 = dVar45;
        }
        dVar45 = *(double *)(lVar23 + 0x198) + dVar39;
        if (dVar45 <= dVar43) {
          dVar43 = dVar45;
        }
        if (dVar42 <= dVar45) {
          dVar42 = dVar45;
        }
        dVar46 = *(double *)(lVar23 + 0x1a8) + dVar3;
        dVar45 = *(double *)(lVar23 + 0x1a0) + dVar2;
        if (dVar45 <= dVar6) {
          dVar6 = dVar45;
        }
        if (dVar46 <= dVar7) {
          dVar7 = dVar46;
        }
        if (dVar40 <= dVar45) {
          dVar40 = dVar45;
        }
        if (dVar44 <= dVar46) {
          dVar44 = dVar46;
        }
        dVar44 = (dVar44 - dVar7) * 0.5;
        dVar40 = (dVar40 - dVar6) * 0.5;
        dVar42 = (dVar42 - dVar43) * 0.5;
        dVar6 = dVar6 + dVar40;
        dVar43 = dVar43 + dVar42;
        dVar7 = dVar7 + dVar44;
        dVar45 = dVar41 + SQRT((local_2b8 - dVar7) * (local_2b8 - dVar7) +
                               (local_2c8 - dVar43) * (local_2c8 - dVar43) +
                               (dStack_2c0 - dVar6) * (dStack_2c0 - dVar6));
        dVar39 = SQRT((dVar3 - dVar7) * (dVar3 - dVar7) +
                      (dVar39 - dVar43) * (dVar39 - dVar43) + (dVar2 - dVar6) * (dVar2 - dVar6)) +
                 *(double *)(lVar23 + 0x1b0);
        if (dVar45 <= dVar39) {
          dVar45 = dVar39;
        }
        dVar39 = SQRT(dVar44 * dVar44 + dVar42 * dVar42 + dVar40 * dVar40);
        if (dVar45 <= dVar39) {
          dVar39 = dVar45;
        }
        local_3d0 = dVar41;
        local_2c8 = dVar43;
        dStack_2c0 = dVar6;
        local_2b8 = dVar7;
        dStack_2b0 = dVar42;
        local_2a8 = dVar40;
        dStack_2a0 = dVar44;
        local_298 = dVar39;
        cVar10 = FUN_144b188c2(&local_2c8);
        if (cVar10 != '\0') {
          local_2b8 = DAT_14c8464f0;
          local_2c8 = DAT_14c8464e0;
          dStack_2c0 = DAT_14c8464e8;
          dStack_2b0 = 1.0;
          local_2a8 = 1.0;
          dStack_2a0 = 1.0;
          local_298 = 1.0;
          dVar40 = 1.0;
          dVar39 = 1.0;
          dVar44 = 1.0;
          dVar42 = dVar40;
        }
      }
      lVar24 = lVar24 + 1;
      dVar41 = dVar39;
    } while (lVar24 < (int)uStack_280);
  }
  uVar28 = DAT_14cb0cc04;
  uVar34 = *(uint *)(DAT_14ca5b170 + 4);
  if ((int)*(uint *)(DAT_14ca5b170 + 4) < 2) {
    uVar34 = 1;
  }
  uVar18 = FUN_144ab8fc2(*(undefined4 *)(param_1 + 0x8a4));
  lVar24 = local_3a8;
  uVar32 = DAT_14ca84e3c;
  if ((int)uVar18 < (int)DAT_14ca84e3c) {
    uVar32 = uVar18;
  }
  if ((int)uVar32 < 2) {
    uVar32 = 1;
  }
  if ((int)DAT_14ca84e38 <= (int)uVar18) {
    uVar18 = DAT_14ca84e38;
  }
  uVar15 = (ulonglong)uVar18;
  if ((int)uVar18 < 2) {
    uVar15 = 1;
  }
  uVar18 = 0;
  uVar27 = (uint)(uVar15 / uVar34);
  local_384 = uVar27;
  if ((int)uVar28 < (int)uVar27) {
    local_384 = uVar28;
  }
  local_384 = local_384 - 8;
  local_3c0 = uVar32 / uVar34;
  if ((int)uVar28 < (int)(uVar32 / uVar34)) {
    local_3c0 = uVar28;
  }
  iVar13 = *(int *)(DAT_14ca5b258 + 4);
  iVar4 = *(int *)(DAT_14ca5b240 + 4);
  local_100 = (undefined1 *)0x0;
  local_f8 = 0x200000000;
  local_118 = (undefined1 *)0x0;
  local_110 = 0x200000000;
  lVar23 = local_3e0;
  if (*(int *)(param_1 + 0x3f0) < 1) {
    fVar52 = 0.0;
    fVar51 = 0.0;
    local_3d0 = (double)((ulonglong)local_3d0._4_4_ << 0x20);
  }
  else {
    uVar15 = 0;
    iVar12 = 0;
    if (0 < iVar4) {
      iVar12 = iVar4;
    }
    local_368 = *(int *)(DAT_14ca5b288 + 4);
    if (*(int *)(DAT_14ca5b288 + 4) < 1) {
      local_368 = 0;
    }
    iVar19 = 0;
    if (0 < iVar13) {
      iVar19 = iVar13;
    }
    uVar29 = (ulonglong)*(uint *)(DAT_14ca5b270 + 4);
    if ((int)*(uint *)(DAT_14ca5b270 + 4) < 1) {
      uVar29 = uVar15;
    }
    local_3c4 = (float)iVar19;
    uVar28 = (uint)uVar29;
    local_39c = (float)(int)uVar28;
    local_3bc = (float)iVar12;
    local_3a0 = (float)local_368;
    local_374 = 1.0 / (float)(iVar19 - uVar28);
    local_378 = 1.0 / (float)(uint)(iVar12 - local_368);
    fVar50 = (float)local_384;
    uVar34 = uVar27 - 8;
    if ((int)uVar28 < (int)(uVar27 - 8)) {
      uVar34 = uVar28;
    }
    local_348 = local_2b8;
    local_350 = local_2c8;
    local_358 = dStack_2c0;
    local_3d0 = (double)((ulonglong)local_3d0._4_4_ << 0x20);
    lVar33 = 0x1048;
    uVar18 = 0;
    fVar51 = 0.0;
    fVar52 = 0.0;
    local_398 = local_298;
    dVar42 = local_298;
    local_37c = fVar50;
    local_36c = iVar4;
    local_364 = iVar13;
    do {
      fVar38 = local_374;
      lVar22 = *(longlong *)(param_1 + 1000);
      dVar40 = local_348 - *(double *)(lVar22 + 0x10 + lVar33);
      dVar44 = local_358 - *(double *)(lVar22 + 8 + lVar33);
      dVar41 = local_350 - *(double *)(lVar22 + lVar33);
      fVar36 = (float)SQRT(dVar40 * dVar40 + dVar41 * dVar41 + dVar44 * dVar44);
      fVar48 = 1.0;
      if (fVar36 <= 1.0) {
        fVar36 = fVar48;
      }
      dVar44 = *(double *)(lVar22 + 0xcb8 + lVar33) * 0.5;
      fVar47 = (float)(((double)*(float *)(lVar22 + 0xcd0 + lVar33) * dVar42) / (double)fVar36) *
               *(float *)(DAT_14ca5b1e0 + 4);
      dVar40 = *(double *)(lVar22 + 0xcb0 + lVar33) * 0.5;
      if ((fVar47 <= local_3c4) && (fVar48 = 0.0, local_39c < fVar47)) {
        fVar48 = *(float *)(DAT_14ca5b130 + 4);
        if ((int)uVar28 < local_364) {
          fVar37 = powf(local_374,fVar48);
          fVar38 = powf((fVar47 - local_39c) * fVar38,fVar48);
          fVar48 = (fVar38 - fVar37) / (1.0 - fVar37);
          lVar23 = local_3e0;
          dVar42 = local_398;
        }
        else {
          fVar48 = powf(fVar47 - local_39c,fVar48);
          fVar48 = 1.0 - fVar48;
          lVar23 = local_3e0;
          dVar42 = local_398;
        }
      }
      uVar29 = local_f8;
      fVar48 = fVar48 * *(float *)(*(longlong *)(lVar24 + 0x28) + 0x21c);
      lVar22 = (longlong)(int)local_f8;
      uVar32 = (int)local_f8 + 1;
      local_f8 = CONCAT44(local_f8._4_4_,uVar32);
      if (local_f8._4_4_ < uVar32) {
        FUN_147313b3e(local_108,uVar29 & 0xffffffff);
        lVar23 = local_3e0;
        dVar42 = local_398;
      }
      fVar38 = local_378;
      puVar16 = local_100;
      if (local_100 == (undefined1 *)0x0) {
        puVar16 = local_108;
      }
      *(float *)(puVar16 + lVar22 * 4) = fVar48;
      fVar49 = *(float *)(DAT_14ca5b1c8 + 4) * fVar47;
      fVar37 = 1.0;
      if ((fVar49 <= local_3bc) && (fVar37 = 0.0, local_3a0 < fVar49)) {
        fVar37 = *(float *)(DAT_14ca5b130 + 4);
        if (local_368 < local_36c) {
          local_370 = powf(local_378,fVar37);
          fVar50 = local_37c;
          fVar38 = powf((fVar49 - local_3a0) * fVar38,fVar37);
          fVar37 = (fVar38 - local_370) / (1.0 - local_370);
          lVar23 = local_3e0;
          dVar42 = local_398;
        }
        else {
          fVar37 = powf(fVar49 - local_3a0,fVar37);
          fVar37 = 1.0 - fVar37;
          lVar23 = local_3e0;
          dVar42 = local_398;
        }
      }
      uVar29 = local_110;
      fVar37 = fVar37 * *(float *)(*(longlong *)(lVar24 + 0x28) + 0x21c);
      lVar22 = (longlong)(int)local_110;
      uVar32 = (int)local_110 + 1;
      local_110 = CONCAT44(local_110._4_4_,uVar32);
      if (local_110._4_4_ < uVar32) {
        FUN_147313b3e(local_120,uVar29 & 0xffffffff);
        lVar23 = local_3e0;
        dVar42 = local_398;
      }
      if (dVar40 <= dVar44) {
        dVar40 = dVar44;
      }
      fVar38 = (float)((dVar40 * dVar42) / (double)fVar36);
      fVar36 = (float)local_3d0;
      if ((float)local_3d0 <= fVar38) {
        fVar36 = fVar38;
      }
      local_3d0 = (double)CONCAT44(local_3d0._4_4_,fVar36);
      if (fVar51 <= fVar48) {
        fVar51 = fVar48;
      }
      if (fVar52 <= fVar37) {
        fVar52 = fVar37;
      }
      puVar16 = local_118;
      if (local_118 == (undefined1 *)0x0) {
        puVar16 = local_120;
      }
      *(float *)(puVar16 + lVar22 * 4) = fVar37;
      fVar36 = *(float *)(*(longlong *)(lVar24 + 0x28) + 0x158);
      fVar38 = (float)(~-(uint)(1.0 < fVar36) & (uint)fVar47 |
                      (uint)(fVar47 * fVar36) & -(uint)(1.0 < fVar36));
      if (fVar50 <= fVar38) {
        fVar38 = fVar50;
      }
      uVar32 = (uint)(longlong)
                     (float)(~-(uint)(1.0 < fVar36) & (uint)(fVar36 * fVar38) |
                            (uint)fVar38 & -(uint)(1.0 < fVar36));
      if (uVar32 < uVar34) {
        uVar32 = uVar34;
      }
      if (uVar32 <= uVar18) {
        uVar32 = uVar18;
      }
      uVar18 = uVar32;
      uVar15 = uVar15 + 1;
      lVar33 = lVar33 + 0x13c10;
    } while ((longlong)uVar15 < (longlong)*(int *)(param_1 + 0x3f0));
  }
  uVar34 = local_384;
  local_2d8 = local_298;
  local_2e8 = local_2a8;
  dStack_2e0 = dStack_2a0;
  local_2f8 = (undefined4)local_2b8;
  uStack_2f4 = local_2b8._4_4_;
  dStack_2f0 = dStack_2b0;
  local_308 = local_2c8;
  dStack_300 = dStack_2c0;
  if (*(int *)(DAT_14ca5b100 + 4) == 0) {
    bVar26 = 0;
  }
  else if ((((((*(byte *)(*(longlong *)(lVar24 + 0x28) + 0x1d0) & 8) >> 3 & (byte)local_3b8) == 1)
            && (((*(byte *)(*(longlong *)(lVar23 + 8) + 0x6d) & 0x40) == 0 ||
                ((*(byte *)((longlong)local_360 + 0x34) & 8) == 0)))) &&
           ((cVar10 = FUN_143658c44(), cVar10 == '\0' ||
            (*(char *)(*(longlong *)(lVar24 + 0x28) + 0x1e8) != '\0')))) &&
          (2 < *(int *)(*(longlong *)(param_1 + 8) + 8))) {
    bVar26 = 1;
    if (*(int *)(DAT_14ca5b158 + 4) != 0) {
      fVar50 = *(float *)(DAT_14ca5b1b0 + 4);
      if (*(float *)(DAT_14ca5b1b0 + 4) <= 0.0) {
        fVar50 = 0.0;
      }
      dVar42 = (double)fVar50;
      local_2d8 = SQRT(dStack_2e0 * dVar42 * dStack_2e0 * dVar42 +
                       dVar42 * dStack_2f0 * dVar42 * dStack_2f0 +
                       local_2e8 * dVar42 * local_2e8 * dVar42) + local_2d8;
      dVar42 = (double)(fVar50 + 1.0);
      dStack_2f0 = dStack_2f0 * dVar42;
      local_2e8 = local_2e8 * dVar42;
      dStack_2e0 = dStack_2e0 * dVar42;
    }
  }
  else {
    bVar26 = 0;
  }
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  local_140 = 0x3ff0000000000000;
  bVar26 = 0.00390625 < fVar52 & bVar26;
  if (((0.00390625 < fVar51) || (bVar26 != 0)) &&
     (cVar10 = (**(code **)(**(longlong **)(lVar24 + 0x28) + 200))
                         (*(longlong **)(lVar24 + 0x28),&local_308,local_248), cVar10 != '\0')) {
    local_3c0 = local_3c0 - 8;
    if ((0.00390625 < fVar51) && (*(int *)(DAT_14ca5b118 + 4) != 0)) {
      if (uVar18 < uVar34) {
        uVar15 = (ulonglong)((uVar18 - 1) + (uint)(uVar18 == 0)) * 2 + 1;
        lVar24 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        uVar34 = 1 << (0x3e - ((byte)lVar24 ^ 0x3f) & 0x1f);
      }
      if (((local_3e1 & (byte)local_3ac) == 1) && ((((byte)local_3b4 | (byte)local_3d4) & 1) != 0))
      {
        lVar24 = FUN_14307f72e(param_1 + 0x90);
        FUN_144ab9098(lVar24);
        uVar28 = *(uint *)(lVar24 + 0x990);
        *(uint *)(lVar24 + 0x990) = uVar28 | 0x2000;
        *(undefined4 *)(lVar24 + 0xb24) = *(undefined4 *)(local_3e0 + 0x10);
        *(uint *)(lVar24 + 0x990) = uVar28 & 0xfffeffff | 0x2000;
        local_3f8 = 0;
        local_400 = (float)local_3d0;
        local_408 = local_3c0;
        local_418 = local_418 & 0xffffff00;
        local_410 = uVar34;
        cVar10 = FUN_14730906c(lVar24,local_3a8,local_3e0,local_248);
        if (cVar10 != '\0') {
          FUN_140143e58(lVar24 + 0x978,local_108);
          plVar5 = local_390;
          if ((local_3b4 & 1) == 0) {
            if ((byte)local_3d4 != '\0') {
              plVar5 = local_390 + 8;
              iVar13 = (int)local_390[9];
              *(uint *)(local_390 + 9) = iVar13 + 1U;
              if (*(uint *)((longlong)local_390 + 0x4c) < iVar13 + 1U) {
                FUN_1447417ac(plVar5,iVar13);
              }
              *(longlong *)(*plVar5 + (longlong)iVar13 * 8) = lVar24;
            }
          }
          else {
            iVar13 = (int)local_390[1];
            *(uint *)(local_390 + 1) = iVar13 + 1U;
            if (*(uint *)((longlong)local_390 + 0xc) < iVar13 + 1U) {
              FUN_1447417ac(local_390,iVar13);
            }
            *(longlong *)(*plVar5 + (longlong)iVar13 * 8) = lVar24;
            lVar23 = (longlong)(int)uStack_280;
            if (0 < lVar23) {
              lVar33 = 0;
              do {
                local_318 = *(undefined8 *)(param_1 + 1000);
                local_310 = *(undefined4 *)(param_1 + 0x3f0);
                FUN_1448b7d84(lVar24,local_288[lVar33],&local_318,0);
                lVar33 = lVar33 + 1;
              } while (lVar23 != lVar33);
            }
          }
        }
      }
      bVar11 = FUN_143226555(*(undefined2 *)
                              (&DAT_14ca85070 +
                              (longlong)*(int *)(*(longlong *)(param_1 + 8) + 8) * 2));
      if ((((bVar11 & (byte)local_380) == 1) && (local_3e2 != '\0')) &&
         ((((byte)local_3b0 | (byte)local_3d4) & 1) != 0)) {
        lVar24 = FUN_14307f72e(param_1 + 0x90);
        FUN_144ab9098(lVar24);
        uVar32 = FUN_144ab8fc2(3);
        uVar28 = DAT_14ca84e3c;
        if ((int)uVar32 < (int)DAT_14ca84e3c) {
          uVar28 = uVar32;
        }
        if ((int)uVar28 < 2) {
          uVar28 = 0;
        }
        if ((int)DAT_14ca84e38 <= (int)uVar32) {
          uVar32 = DAT_14ca84e38;
        }
        if ((int)uVar32 < 2) {
          uVar32 = 0;
        }
        uVar27 = uVar32 >> 1;
        if ((int)DAT_14ca84e38 <= (int)(uVar32 >> 1)) {
          uVar27 = DAT_14ca84e38;
        }
        if ((int)uVar27 < 2) {
          uVar27 = 1;
        }
        uVar32 = uVar28 >> 1;
        if ((int)DAT_14ca84e3c <= (int)(uVar28 >> 1)) {
          uVar32 = DAT_14ca84e3c;
        }
        if ((int)uVar32 < 2) {
          uVar32 = 1;
        }
        local_408 = local_3c0 >> 1;
        if ((int)(uVar32 - 8) <= (int)(local_3c0 >> 1)) {
          local_408 = uVar32 - 8;
        }
        if ((int)local_408 < 2) {
          local_408 = 1;
        }
        local_410 = (int)uVar34 / 2;
        if ((int)(uVar27 - 8) <= (int)uVar34 / 2) {
          local_410 = uVar27 - 8;
        }
        if ((int)local_410 < 2) {
          local_410 = 1;
        }
        local_400 = (float)local_3d0;
        local_3f8 = 1;
        local_418 = local_418 & 0xffffff00;
        cVar10 = FUN_14730906c(lVar24,local_3a8,local_3e0,local_248);
        if (cVar10 != '\0') {
          FUN_140143e58(lVar24 + 0x978,local_108);
          plVar5 = local_390;
          if ((local_3b0 & 1) == 0) {
            if ((byte)local_3d4 != '\0') {
              plVar5 = local_390 + 8;
              iVar13 = (int)local_390[9];
              *(uint *)(local_390 + 9) = iVar13 + 1U;
              if (*(uint *)((longlong)local_390 + 0x4c) < iVar13 + 1U) {
                FUN_1447417ac(plVar5,iVar13);
              }
              *(longlong *)(*plVar5 + (longlong)iVar13 * 8) = lVar24;
            }
          }
          else {
            iVar13 = (int)local_390[1];
            *(uint *)(local_390 + 1) = iVar13 + 1U;
            if (*(uint *)((longlong)local_390 + 0xc) < iVar13 + 1U) {
              FUN_1447417ac(local_390,iVar13);
            }
            *(longlong *)(*plVar5 + (longlong)iVar13 * 8) = lVar24;
            lVar23 = (longlong)(int)uStack_280;
            if (0 < lVar23) {
              lVar33 = 0;
              do {
                local_328 = *(undefined8 *)(param_1 + 1000);
                local_320 = *(undefined4 *)(param_1 + 0x3f0);
                FUN_1448b7d84(lVar24,local_288[lVar33],&local_328,0);
                lVar33 = lVar33 + 1;
              } while (lVar23 != lVar33);
            }
          }
        }
      }
    }
    if ((bVar26 & (byte)local_3ac) == 1) {
      iVar13 = (int)((float)uVar18 * *(float *)(DAT_14ca5b1c8 + 4));
      uVar15 = (ulonglong)(iVar13 + -1 + (uint)(iVar13 == 0)) * 2 + 1;
      lVar24 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      uVar34 = 1 << (0x3e - ((byte)lVar24 ^ 0x3f) & 0x1f);
      FUN_144ab8fc2(*(undefined4 *)(param_1 + 0x8a4));
      if (0 < (int)param_5[1]) {
        lVar24 = 0;
        do {
          lVar23 = *(longlong *)(*param_5 + lVar24 * 8);
          lVar33 = *(longlong *)(lVar23 + 0xb60);
          plVar5 = *(longlong **)(lVar33 + 0x28);
          if (((*(byte *)(lVar33 + 0xe4) & 1) == 0) ||
             (bVar35 = true, DAT_14c760480 <= *(int *)(lVar33 + 0xf8))) {
            bVar35 = (*(byte *)(plVar5 + 0x3a) & 8) == 0;
          }
          local_418 = *(uint *)(*(longlong *)(lVar23 + 0x38) + 0x4f8);
          (**(code **)(*plVar5 + 0x80))
                    (plVar5,local_338,*(undefined4 *)(*(longlong *)(param_1 + 8) + 8),bVar35);
          dVar44 = *(double *)(lVar23 + 0x6c8) - (double)CONCAT44(uStack_2f4,local_2f8);
          dVar41 = *(double *)(lVar23 + 0x6c0) - dStack_300;
          dVar40 = *(double *)(lVar23 + 0x6b8) - local_308;
          dVar42 = *(double *)(lVar23 + 0x6d0) - local_2d8;
          if (dVar42 <= 0.0) {
            dVar42 = 0.0;
          }
          if ((double)(float)(dVar44 * dVar44 + dVar40 * dVar40 + dVar41 * dVar41) < dVar42 * dVar42
             ) {
            lVar23 = *(longlong *)(lVar23 + 0x38);
            dVar40 = *(double *)(lVar23 + 0x1cd8) - (double)CONCAT44(uStack_2f4,local_2f8);
            dVar44 = *(double *)(lVar23 + 0x1cc8) - local_308;
            dVar41 = *(double *)(lVar23 + 0x1cd0) - dStack_300;
            dVar42 = ((double)local_338[0] + -200.0) - local_2d8;
            if (dVar42 <= 0.0) {
              dVar42 = 0.0;
            }
            if ((double)(float)(dVar40 * dVar40 + dVar44 * dVar44 + dVar41 * dVar41) <
                dVar42 * dVar42) goto LAB_14730d953;
          }
          lVar24 = lVar24 + 1;
        } while (lVar24 < (int)param_5[1]);
      }
      local_418 = uVar34;
      FUN_14730bfc0(param_1,local_338,local_360,&local_2c8);
      puVar17 = local_338[0];
      if (local_338[0] == (undefined8 *)0x0) {
        puVar17 = (undefined8 *)FUN_14001cc68(0x1140,0x10);
        FUN_144ab9098(puVar17);
        if (puVar17 != (undefined8 *)0x0) {
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          local_338[0] = puVar17;
        }
        local_408 = (uint)((float)local_3c0 * *(float *)(DAT_14ca5b1c8 + 4));
        local_400 = (float)local_3d0;
        local_3f8 = 0;
        local_418 = CONCAT31(local_418._1_3_,1);
        local_410 = uVar34;
        cVar10 = FUN_14730906c(puVar17,local_3a8,local_3e0,local_248);
        if (cVar10 != '\0') goto LAB_14730d7c8;
      }
      else {
LAB_14730d7c8:
        FUN_140143e58(puVar17 + 0x12f,local_120);
        plVar5 = local_390;
        iVar13 = (int)local_390[1];
        *(uint *)(local_390 + 1) = iVar13 + 1U;
        if (*(uint *)((longlong)local_390 + 0xc) < iVar13 + 1U) {
          FUN_1447417ac(local_390,iVar13);
        }
        *(undefined8 **)(*plVar5 + (longlong)iVar13 * 8) = puVar17;
        iVar13 = (int)plVar5[7];
        *(uint *)(plVar5 + 7) = iVar13 + 1U;
        if (*(uint *)((longlong)plVar5 + 0x3c) < iVar13 + 1U) {
          FUN_1473138ac(plVar5 + 6,iVar13);
        }
        *(undefined8 **)(plVar5[6] + (longlong)iVar13 * 8) = puVar17;
        if (puVar17 != (undefined8 *)0x0) {
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
        }
        if (((*(byte *)(puVar17 + 0x132) & 8) == 0) && (*(int *)(puVar17 + 0x94) != 0)) {
          iVar13 = (int)param_6[1];
          *(uint *)(param_6 + 1) = iVar13 + 1U;
          if (*(uint *)((longlong)param_6 + 0xc) < iVar13 + 1U) {
            FUN_1447417ac(param_6,iVar13);
          }
          *(undefined8 **)(*param_6 + (longlong)iVar13 * 8) = puVar17;
        }
        if (0 < (int)uStack_280) {
          lVar24 = 0;
          iVar13 = (int)uStack_280;
          do {
            lVar23 = (longlong)*(int *)(param_1 + 0x3f0);
            if (0 < lVar23) {
              lVar33 = local_288[lVar24];
              iVar4 = *(int *)(lVar33 + 0x158);
              iVar12 = iVar4 + 0x1f;
              if (-1 < iVar4) {
                iVar12 = iVar4;
              }
              lVar22 = *(longlong *)(param_1 + 1000) + 0x3118;
              do {
                lVar21 = *(longlong *)(lVar22 + 0x10);
                if (*(longlong *)(lVar22 + 0x10) == 0) {
                  lVar21 = lVar22;
                }
                if ((*(uint *)(lVar21 + (longlong)(iVar12 >> 5) * 4) & 1 << ((byte)iVar4 & 0x1f)) !=
                    0) {
                  iVar13 = *(int *)(puVar17 + 0x17a);
                  *(uint *)(puVar17 + 0x17a) = iVar13 + 1U;
                  if (*(uint *)((longlong)puVar17 + 0xbd4) < iVar13 + 1U) {
                    FUN_1401baee0(puVar17 + 0x179,iVar13);
                  }
                  *(longlong *)(puVar17[0x179] + (longlong)iVar13 * 8) = lVar33;
                  iVar13 = (int)uStack_280;
                  break;
                }
                lVar22 = lVar22 + 0x13c10;
                lVar23 = lVar23 + -1;
              } while (lVar23 != 0);
            }
            lVar24 = lVar24 + 1;
          } while (lVar24 < iVar13);
        }
      }
      if (local_338[0] != (undefined8 *)0x0) {
        piVar1 = (int *)(local_338[0] + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*local_338[0])(local_338[0],1);
        }
      }
    }
  }
LAB_14730d953:
  if (local_118 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_100 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140046388(&local_288);
LAB_14730d984:
  if ((local_f0 ^ (ulonglong)auStack_438) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14730de12 FUN_14730de12 body=3344 status=ok
// SIG undefined FUN_14730de12(void)

void FUN_14730de12(longlong param_1,undefined4 param_2,longlong param_3,double *param_4,
                  longlong param_5,int *param_6,int *param_7,undefined4 *param_8,undefined8 *param_9
                  )

{
  longlong *plVar1;
  int *piVar2;
  float *pfVar3;
  bool bVar4;
  double dVar5;
  char cVar6;
  int iVar7;
  byte bVar8;
  longlong lVar9;
  longlong lVar10;
  void *_Dst;
  int iVar11;
  double *pdVar12;
  uint uVar13;
  ulonglong uVar14;
  double *pdVar15;
  void *pvVar16;
  double *pdVar17;
  uint uVar18;
  longlong lVar19;
  double *pdVar20;
  longlong *plVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  double dVar26;
  float fVar27;
  undefined1 auStack_658 [32];
  double ***local_638;
  double ***local_630;
  double *local_620;
  int *local_618;
  int local_60c;
  int *local_608;
  double local_600 [4];
  double local_5e0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  double local_5b8;
  double local_5b0;
  double local_5a8;
  undefined8 local_5a0;
  undefined1 local_598;
  double local_588 [4];
  double local_568;
  double local_560;
  undefined8 local_558;
  undefined8 uStack_550;
  double dStack_548;
  double *local_540;
  double **local_538;
  double *apdStack_530 [2];
  double local_520 [3];
  undefined1 local_508;
  double local_4d8;
  double local_4d0;
  double local_4c8;
  undefined8 local_4c0;
  double **local_4b8;
  int *piStack_4b0;
  double *local_4a8;
  double local_498;
  double dStack_490;
  double local_478;
  double dStack_470;
  double local_458;
  double dStack_450;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  double local_388;
  undefined1 local_378 [512];
  double local_178 [10];
  undefined2 local_128;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined1 local_db;
  undefined8 local_c8;
  undefined8 local_c0;
  ulonglong local_80;
  
  lVar10 = DAT_14ca5b390;
  local_618 = param_7;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_658;
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_620 = param_4;
  if (*(int *)(lVar9 + 0xc60) == 0x40000002) {
    uVar14 = 0;
  }
  else {
    bVar8 = FUN_144a61b4f();
    uVar14 = (ulonglong)(bVar8 ^ 1);
  }
  if ((*(int *)(lVar10 + uVar14 * 4) != 1) ||
     (cVar6 = thunk_FUN_14005b4aa(*(undefined2 *)
                                   (&DAT_14ca85070 + (longlong)*(int *)(param_3 + 8) * 2)),
     lVar10 = DAT_14ca5b3c0, cVar6 != '\0')) {
    *param_8 = 1;
    *(undefined4 *)param_9 = 3;
    if ((local_80 ^ (ulonglong)auStack_658) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_658,*(undefined4 *)(param_1 + 0x34));
    }
    FUN_1406892b0(param_3 + 0x4bb8);
    return;
  }
  plVar1 = (longlong *)(param_3 + 0x4bb8);
  if (*(int *)(param_3 + 0x4bc0) != *(int *)(param_3 + 0x4bec)) {
    lVar19 = param_3 + 0x4bf0;
    if (*(longlong *)(param_3 + 0x4bf8) != 0) {
      lVar19 = *(longlong *)(param_3 + 0x4bf8);
    }
    iVar11 = *(int *)(lVar19 + (ulonglong)
                               (*(int *)(param_3 + 0x4c00) - 1U & *(uint *)(param_1 + 0x34)) * 4);
    if (iVar11 != -1) {
      piVar2 = (int *)(lVar9 + 0xc60);
      do {
        lVar9 = *plVar1 + (longlong)iVar11 * 0x20;
        if (*(uint *)(*plVar1 + (longlong)iVar11 * 0x20) == *(uint *)(param_1 + 0x34)) {
          plVar21 = (longlong *)(lVar9 + 8);
          if (lVar9 == 0) {
            bVar4 = true;
            goto LAB_14730df6b;
          }
          if (*(int *)(lVar9 + 0x10) <= *(int *)((longlong)local_620 + 900)) {
            bVar4 = false;
            goto LAB_14730df6b;
          }
          pdVar20 = (double *)((longlong)*(int *)((longlong)local_620 + 900) * 0x430 + *plVar21);
          local_540 = pdVar20;
          if (pdVar20 != (double *)0x0) {
            pdVar15 = local_620 + 4;
            lVar9 = 0;
            pdVar12 = pdVar15;
            pdVar17 = pdVar20;
            do {
              pdVar17 = pdVar17 + 4;
              lVar19 = 0;
              do {
                if ((pdVar12[lVar19] != pdVar17[lVar19]) ||
                   (NAN(pdVar12[lVar19]) || NAN(pdVar17[lVar19]))) goto LAB_14730e527;
                lVar19 = lVar19 + 1;
              } while (lVar19 != 4);
              lVar9 = lVar9 + 1;
              pdVar12 = pdVar12 + 4;
            } while (lVar9 != 4);
            if ((((((local_620[0x1e] != pdVar20[0x1e]) ||
                   (NAN(local_620[0x1e]) || NAN(pdVar20[0x1e]))) ||
                  (local_620[0x1f] != pdVar20[0x1f])) ||
                 ((NAN(local_620[0x1f]) || NAN(pdVar20[0x1f]) || (local_620[0x20] != pdVar20[0x20]))
                 )) || (NAN(local_620[0x20]) || NAN(pdVar20[0x20]))) ||
               (((local_620[0x21] != pdVar20[0x21] || (NAN(local_620[0x21]) || NAN(pdVar20[0x21])))
                || ((*(char *)(local_620 + 0x72) != *(char *)(pdVar20 + 0x72) ||
                    (((*(char *)((longlong)local_620 + 0x391) !=
                       *(char *)((longlong)pdVar20 + 0x391) || (local_620[0x1c] != pdVar20[0x1c]))
                     || (NAN(local_620[0x1c]) || NAN(pdVar20[0x1c]))))))))) {
LAB_14730e527:
              *param_8 = 1;
              *(undefined4 *)param_9 = 3;
              FUN_14002d1ac(pdVar20 + 0x74);
              FUN_1447c6044(pdVar20 + 0x7c,0,*(undefined4 *)(pdVar20 + 0x7f),0);
              pdVar15 = local_620;
              memcpy(pdVar20,local_620,0x118);
              uVar22 = *(undefined4 *)((longlong)pdVar15 + 0x124);
              uVar23 = *(undefined4 *)(pdVar15 + 0x25);
              uVar24 = *(undefined4 *)((longlong)pdVar15 + 300);
              *(undefined4 *)(pdVar20 + 0x24) = *(undefined4 *)(pdVar15 + 0x24);
              *(undefined4 *)((longlong)pdVar20 + 0x124) = uVar22;
              *(undefined4 *)(pdVar20 + 0x25) = uVar23;
              *(undefined4 *)((longlong)pdVar20 + 300) = uVar24;
              pdVar20[0x26] = pdVar15[0x26];
              FUN_144715ac6(pdVar20 + 0x28,pdVar15 + 0x28);
              FUN_144715c36(pdVar20 + 0x44,pdVar15 + 0x44);
              pdVar17 = pdVar15 + 0x68;
              pdVar12 = pdVar20 + 0x68;
              for (lVar9 = 10; lVar9 != 0; lVar9 = lVar9 + -1) {
                *pdVar12 = *pdVar17;
                pdVar17 = pdVar17 + 1;
                pdVar12 = pdVar12 + 1;
              }
              *(undefined2 *)(pdVar20 + 0x72) = *(undefined2 *)(pdVar15 + 0x72);
            }
            else {
              if ((((*local_620 != *pdVar20) || (NAN(*local_620) || NAN(*pdVar20))) ||
                  ((local_620[1] != pdVar20[1] ||
                   ((NAN(local_620[1]) || NAN(pdVar20[1]) || (local_620[2] != pdVar20[2])))))) ||
                 (((NAN(local_620[2]) || NAN(pdVar20[2]) ||
                   (((((local_620[0x14] != pdVar20[0x14] ||
                       (NAN(local_620[0x14]) || NAN(pdVar20[0x14]))) ||
                      (local_620[0x15] != pdVar20[0x15])) ||
                     (((NAN(local_620[0x15]) || NAN(pdVar20[0x15]) ||
                       (local_620[0x16] != pdVar20[0x16])) ||
                      ((NAN(local_620[0x16]) || NAN(pdVar20[0x16]) ||
                       ((local_620[0x17] != pdVar20[0x17] ||
                        (NAN(local_620[0x17]) || NAN(pdVar20[0x17]))))))))) ||
                    (local_620[0x18] != pdVar20[0x18])))) ||
                  (((NAN(local_620[0x18]) || NAN(pdVar20[0x18]) ||
                    (*(float *)(local_620 + 0x22) != *(float *)(pdVar20 + 0x22))) ||
                   (NAN(*(float *)(local_620 + 0x22)) || NAN(*(float *)(pdVar20 + 0x22)))))))) {
                bVar4 = false;
              }
              else {
                bVar4 = *(float *)((longlong)pdVar20 + 0x114) ==
                        *(float *)((longlong)local_620 + 0x114);
              }
              local_608 = piVar2;
              if (((pdVar20[0x7a] != 0.0) || (0 < *(int *)(pdVar20 + 0x79))) &&
                 ((*(int *)(pdVar20 + 0x80) == *param_6 &&
                  (*(int *)((longlong)pdVar20 + 0x404) == param_6[1])))) {
                local_60c = *(int *)(pdVar20 + 0x85);
                if (*piVar2 == 0x40000002) {
                  uVar14 = 0;
                }
                else {
                  bVar8 = FUN_144a61b4f();
                  uVar14 = (ulonglong)(bVar8 ^ 1);
                }
                if (local_60c <= *(int *)(lVar10 + uVar14 * 4)) {
                  if (bVar4) {
                    *param_8 = 1;
                    *(undefined4 *)param_9 = 0;
                    goto LAB_14730e5d2;
                  }
                  local_558 = 1.0;
                  uStack_550 = 0.0;
                  dStack_548 = 0.0;
                  FUN_1467fc32a(&local_558,local_588 + 3,local_588);
                  dVar26 = dStack_548 * dStack_548 + local_558 * local_558 + uStack_550 * uStack_550
                  ;
                  if ((dVar26 != 1.0) || (NAN(dVar26))) {
                    if (dVar26 < 9.99999993922529e-09) {
                      local_5b8 = DAT_14c8464f0;
                      uVar22 = (undefined4)DAT_14c8464e0;
                      uVar23 = DAT_14c8464e0._4_4_;
                      uVar24 = (undefined4)DAT_14c8464e8;
                      uVar25 = DAT_14c8464e8._4_4_;
                      goto LAB_14730e74a;
                    }
                    dVar26 = 1.0 / SQRT(dVar26);
                    local_5c8 = local_558 * dVar26;
                    uStack_5c0 = uStack_550 * dVar26;
                    local_5b8 = dStack_548 * dVar26;
                  }
                  else {
                    local_5b8 = dStack_548;
                    uVar22 = (undefined4)local_558;
                    uVar23 = local_558._4_4_;
                    uVar24 = (undefined4)uStack_550;
                    uVar25 = uStack_550._4_4_;
LAB_14730e74a:
                    local_5c8 = (double)CONCAT44(uVar23,uVar22);
                    uStack_5c0 = (double)CONCAT44(uVar25,uVar24);
                  }
                  local_600[0] = -local_588[3];
                  local_600[1] = -local_568;
                  local_600[2] = -local_560;
                  lVar9 = 0;
                  do {
                    *(undefined8 *)((longlong)&local_538 + lVar9 * 4) =
                         *(undefined8 *)((longlong)local_600 + lVar9);
                    *(undefined8 *)((longlong)apdStack_530 + lVar9 * 4) =
                         *(undefined8 *)((longlong)local_588 + lVar9);
                    *(undefined8 *)((longlong)local_520 + lVar9 * 4 + -8) =
                         *(undefined8 *)((longlong)&local_5c8 + lVar9);
                    *(undefined8 *)((longlong)local_520 + lVar9 * 4) = 0;
                    lVar9 = lVar9 + 8;
                  } while (lVar9 != 0x18);
                  dVar26 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                  dVar5 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                  local_4d8 = DAT_14c8464f0 * -local_560 +
                              dVar26 * -local_588[3] + dVar5 * -local_568;
                  local_4d0 = local_588[2] * DAT_14c8464f0 +
                              local_588[0] * dVar26 + local_588[1] * dVar5;
                  local_4c8 = DAT_14c8464f0 * local_5b8 + dVar26 * local_5c8 + dVar5 * uStack_5c0;
                  local_4c0 = 0x3ff0000000000000;
                  FUN_1447fea8d(&local_4b8,pdVar15,&local_538);
                  local_5c8 = (((-pdVar20[1] * local_498 - *pdVar20 * (double)local_4b8) -
                               pdVar20[2] * local_478) + local_458) -
                              (((-local_620[1] * local_498 - *local_620 * (double)local_4b8) -
                               local_620[2] * local_478) + local_458);
                  uStack_5c0 = (((-pdVar20[1] * dStack_490 - *pdVar20 * (double)piStack_4b0) -
                                pdVar20[2] * dStack_470) + dStack_450) -
                               (((-local_620[1] * dStack_490 - *local_620 * (double)piStack_4b0) -
                                local_620[2] * dStack_470) + dStack_450);
                  local_520[0] = local_620[0x1c];
                  local_538 = (double **)((ulonglong)local_520[0] ^ 0x8000000000000000);
                  apdStack_530[0] = (double *)((ulonglong)local_520[0] ^ 0x8000000000000000);
                  uVar14 = 0;
                  apdStack_530[1] = (double *)0x0;
                  local_520[2] = 0.0;
                  local_508 = 1;
                  dVar26 = pdVar20[0x1c];
                  local_5a8 = uStack_5c0 + dVar26;
                  local_5b0 = local_5c8 + dVar26;
                  uStack_5c0 = uStack_5c0 - dVar26;
                  local_5c8 = local_5c8 - dVar26;
                  local_5b8 = 0.0;
                  local_5a0 = 0;
                  local_598 = 1;
                  local_520[1] = local_520[0];
                  FUN_14730eb50(&local_538,local_600,&local_5c8);
                  pdVar20 = local_540;
                  lVar9 = DAT_14ca5b3a8;
                  fVar27 = (float)(((local_600[3] - local_600[0]) * (local_5e0 - local_600[1])) /
                                  (local_540[0x1c] * local_540[0x1c] * 4.0));
                  if (*local_608 != 0x40000002) {
                    bVar8 = FUN_144a61b4f();
                    uVar14 = (ulonglong)(bVar8 ^ 1);
                  }
                  pdVar15 = local_620;
                  pfVar3 = (float *)(lVar9 + uVar14 * 4);
                  if (fVar27 < *pfVar3 || fVar27 == *pfVar3) {
                    *param_8 = 2;
                    *param_9 = 1;
                    *local_618 = *local_618 + 1;
                    memcpy(pdVar20,local_620,0x118);
                    uVar22 = *(undefined4 *)((longlong)pdVar15 + 0x124);
                    uVar23 = *(undefined4 *)(pdVar15 + 0x25);
                    uVar24 = *(undefined4 *)((longlong)pdVar15 + 300);
                    *(undefined4 *)(pdVar20 + 0x24) = *(undefined4 *)(pdVar15 + 0x24);
                    *(undefined4 *)((longlong)pdVar20 + 0x124) = uVar22;
                    *(undefined4 *)(pdVar20 + 0x25) = uVar23;
                    *(undefined4 *)((longlong)pdVar20 + 300) = uVar24;
                    pdVar20[0x26] = pdVar15[0x26];
                    FUN_144715ac6(pdVar20 + 0x28,pdVar15 + 0x28);
                    FUN_144715c36(pdVar20 + 0x44,pdVar15 + 0x44);
                    pdVar17 = pdVar15 + 0x68;
                    pdVar12 = pdVar20 + 0x68;
                    for (lVar9 = 10; lVar9 != 0; lVar9 = lVar9 + -1) {
                      *pdVar12 = *pdVar17;
                      pdVar17 = pdVar17 + 1;
                      pdVar12 = pdVar12 + 1;
                    }
                    *(undefined2 *)(pdVar20 + 0x72) = *(undefined2 *)(pdVar15 + 0x72);
                    FUN_14002d1ac(pdVar20 + 0x74);
                    FUN_1447c6044(pdVar20 + 0x7c,0,*(undefined4 *)(pdVar20 + 0x7f),0);
                  }
                  else {
                    *param_8 = 1;
                    *(undefined4 *)param_9 = 2;
                  }
                  goto LAB_14730e5d2;
                }
              }
              local_538 = &local_540;
              local_630 = &local_538;
              apdStack_530[0] = local_620;
              local_638 = &local_4b8;
              piStack_4b0 = param_6;
              local_4a8 = local_620;
              local_4b8 = local_538;
              FUN_143073b28(param_5,param_8,param_9,local_618);
              pdVar20 = local_540;
            }
LAB_14730e5d2:
            *(undefined4 *)(pdVar20 + 0x7b) = param_2;
            goto LAB_14730e1e9;
          }
          bVar4 = false;
          goto LAB_14730df77;
        }
        iVar11 = *(int *)(lVar9 + 0x18);
      } while (iVar11 != -1);
    }
  }
  bVar4 = true;
  plVar21 = (longlong *)&DAT_00000008;
LAB_14730df6b:
  local_540 = (double *)0x0;
LAB_14730df77:
  if (param_5 < (longlong)DAT_14c760a2c * 0x100000) {
    *param_8 = 2;
    *param_9 = 1;
    *local_618 = *local_618 + 1;
    if (bVar4) {
      local_4b8 = (double **)(param_1 + 0x34);
      FUN_14158d6d8(plVar1,&local_538);
      plVar21 = (longlong *)(*plVar1 + (longlong)(int)local_538 * 0x20 + 8);
    }
    pdVar20 = local_620;
    memcpy(&local_4b8,local_620,0x120);
    local_398 = *(undefined4 *)(pdVar20 + 0x24);
    uStack_394 = *(undefined4 *)((longlong)pdVar20 + 0x124);
    uStack_390 = *(undefined4 *)(pdVar20 + 0x25);
    uStack_38c = *(undefined4 *)((longlong)pdVar20 + 300);
    local_388 = pdVar20[0x26];
    FUN_144aab0c2(local_378,pdVar20 + 0x28);
    pdVar15 = pdVar20 + 0x68;
    pdVar17 = local_178;
    for (lVar9 = 10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *pdVar17 = *pdVar15;
      pdVar15 = pdVar15 + 1;
      pdVar17 = pdVar17 + 1;
    }
    local_128 = *(undefined2 *)(pdVar20 + 0x72);
    local_f8 = 0;
    local_f0 = 0x400000000;
    local_e8 = 0;
    local_dc = 1;
    local_db = 0;
    local_c8 = 0;
    local_c0 = 0x8000000000;
    iVar11 = (int)plVar21[1];
    *(uint *)(plVar21 + 1) = iVar11 + 1U;
    local_e0 = param_2;
    if (*(uint *)((longlong)plVar21 + 0xc) < iVar11 + 1U) {
      FUN_141781f84(plVar21,iVar11);
    }
    FUN_147313cb0((longlong)iVar11 * 0x430 + *plVar21,&local_4b8);
    FUN_147313c40(&local_4b8);
    lVar9 = *plVar21;
    lVar10 = (longlong)((int)plVar21[1] + -1) * 0x430;
    *(undefined8 *)(lVar9 + 0x400 + lVar10) = *(undefined8 *)param_6;
    iVar11 = *(int *)(param_3 + 0x5224 + (ulonglong)*(byte *)(param_3 + 0x52f0) * 4);
    *(int *)(lVar9 + 0x3f8 + lVar10) = iVar11;
    uVar18 = iVar11 + 0x1f;
    if (0x1f < uVar18) {
      lVar19 = lVar9 + lVar10;
      pvVar16 = (void *)(lVar9 + lVar10 + 0x3e0);
      uVar13 = uVar18 >> 5;
      if (*(int *)(lVar19 + 0x3fc) + 0x1fU >> 5 < uVar13) {
        FUN_14499171c(pvVar16,0,uVar13,4);
        *(uint *)(lVar19 + 0x3fc) = uVar18 & 0xffffffe0;
      }
      _Dst = *(void **)(lVar19 + 0x3f0);
      if (*(void **)(lVar19 + 0x3f0) == (void *)0x0) {
        _Dst = pvVar16;
      }
      if (uVar18 < 0x120) {
        uVar13 = uVar18 >> 3 & 0x3c;
      }
      else {
        uVar13 = uVar13 << 2;
      }
      memset(_Dst,0,(ulonglong)uVar13);
      iVar11 = *(int *)(lVar19 + 0x3f8);
      iVar7 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar7 = iVar11;
      }
      if (iVar11 % 0x20 != 0) {
        if (*(void **)(lVar19 + 0x3f0) != (void *)0x0) {
          pvVar16 = *(void **)(lVar19 + 0x3f0);
        }
        bVar8 = -(char)(iVar11 % 0x20);
        *(uint *)((longlong)pvVar16 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)((longlong)pvVar16 + (longlong)(iVar7 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
  }
  else {
    *param_8 = 1;
    *(undefined4 *)param_9 = 3;
  }
LAB_14730e1e9:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_658);
}



// FUNCTION 14730eb50 FUN_14730eb50 body=296 status=ok
// SIG undefined FUN_14730eb50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14730eb50(double *param_1,undefined8 *param_2,double *param_3)

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
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  dVar1 = *param_1;
  uVar11 = SUB84(dVar1,0);
  uVar12 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar2 = param_3[3];
  if (dVar1 <= dVar2) {
    dVar3 = *param_3;
    dVar13 = param_1[3];
    if (dVar3 <= dVar13) {
      dVar14 = param_1[1];
      dVar4 = param_3[4];
      if (dVar14 <= dVar4) {
        dVar5 = param_3[1];
        dVar15 = param_1[4];
        if (dVar5 <= dVar15) {
          dVar6 = param_1[2];
          dVar7 = param_3[5];
          if (dVar6 <= dVar7) {
            dVar8 = param_3[2];
            dVar9 = param_1[5];
            uVar18 = SUB84(dVar9,0);
            uVar19 = (undefined4)((ulonglong)dVar9 >> 0x20);
            if (dVar8 <= dVar9) {
              if (dVar1 <= dVar3) {
                uVar11 = SUB84(dVar3,0);
                uVar12 = (undefined4)((ulonglong)dVar3 >> 0x20);
              }
              if (dVar2 <= dVar13) {
                dVar13 = dVar2;
              }
              if (dVar14 <= dVar5) {
                dVar14 = dVar5;
              }
              if (dVar4 <= dVar15) {
                dVar15 = dVar4;
              }
              uVar16 = SUB84(dVar6,0);
              uVar17 = (int)((ulonglong)dVar6 >> 0x20);
              if (dVar6 <= dVar8) {
                uVar16 = SUB84(dVar8,0);
                uVar17 = (int)((ulonglong)dVar8 >> 0x20);
              }
              if (dVar7 <= dVar9) {
                uVar18 = SUB84(dVar7,0);
                uVar19 = (undefined4)((ulonglong)dVar7 >> 0x20);
              }
              *param_2 = CONCAT44(uVar12,uVar11);
              param_2[1] = dVar14;
              param_2[2] = CONCAT44(uVar17,uVar16);
              param_2[3] = dVar13;
              param_2[4] = dVar15;
              param_2[5] = CONCAT44(uVar19,uVar18);
              *(undefined1 *)(param_2 + 6) = 1;
              return;
            }
          }
        }
      }
    }
  }
  param_2[6] = DAT_14ca5bd30;
  uVar10 = uRam000000014ca5bd28;
  param_2[4] = _DAT_14ca5bd20;
  param_2[5] = uVar10;
  uVar10 = uRam000000014ca5bd18;
  param_2[2] = _DAT_14ca5bd10;
  param_2[3] = uVar10;
  uVar10 = uRam000000014ca5bd08;
  *param_2 = _DAT_14ca5bd00;
  param_2[1] = uVar10;
  return;
}



// FUNCTION 14730ec78 FUN_14730ec78 body=657 status=ok
// SIG undefined FUN_14730ec78(void)

void FUN_14730ec78(double *param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  char *pcVar20;
  float fVar21;
  undefined1 auStack_d8 [44];
  char local_ac [4];
  float afStack_a8 [6];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  pcVar20 = local_ac;
  lVar19 = 0;
  do {
    lVar14 = *(longlong *)(param_2 + 0xc0);
    if (*(longlong *)(param_2 + 0xc0) == 0) {
      lVar14 = param_2;
    }
    fVar21 = (float)((*(double *)(lVar14 + 0x10 + lVar19 * 8) * param_1[2] +
                     *(double *)(lVar14 + lVar19 * 8) * *param_1 +
                     *(double *)(lVar14 + 8 + lVar19 * 8) * param_1[1]) -
                    *(double *)(lVar14 + 0x18 + lVar19 * 8));
    *(float *)((longlong)afStack_a8 + lVar19) = fVar21;
    *pcVar20 = fVar21 < 0.0;
    if (fVar21 < 0.0) {
      iVar2 = *(int *)(param_3 + 0xd0);
      *(uint *)(param_3 + 0xd0) = iVar2 + 1U;
      if (*(uint *)(param_3 + 0xd4) < iVar2 + 1U) {
        FUN_1448afb60(param_3,iVar2);
      }
      puVar13 = (undefined4 *)(lVar19 * 8 + lVar14);
      lVar14 = *(longlong *)(param_3 + 0xc0);
      if (*(longlong *)(param_3 + 0xc0) == 0) {
        lVar14 = param_3;
      }
      uVar8 = *puVar13;
      uVar9 = puVar13[1];
      uVar10 = puVar13[2];
      uVar11 = puVar13[3];
      uVar12 = *(undefined8 *)(puVar13 + 6);
      puVar1 = (undefined8 *)(lVar14 + 0x10 + (longlong)iVar2 * 0x20);
      *puVar1 = *(undefined8 *)(puVar13 + 4);
      puVar1[1] = uVar12;
      puVar13 = (undefined4 *)(lVar14 + (longlong)iVar2 * 0x20);
      *puVar13 = uVar8;
      puVar13[1] = uVar9;
      puVar13[2] = uVar10;
      puVar13[3] = uVar11;
    }
    lVar19 = lVar19 + 4;
    pcVar20 = pcVar20 + 1;
  } while (lVar19 != 0x10);
  lVar19 = 0;
  do {
    lVar17 = (longlong)(int)(&DAT_14a307030)[lVar19 * 2];
    lVar14 = (longlong)(int)(&DAT_14a307034)[lVar19 * 2];
    if (local_ac[lVar17] != local_ac[lVar14]) {
      lVar16 = *(longlong *)(param_2 + 0xc0);
      if (*(longlong *)(param_2 + 0xc0) == 0) {
        lVar16 = param_2;
      }
      lVar18 = lVar17 * 0x20;
      dVar5 = (double)afStack_a8[lVar14];
      lVar15 = lVar14 * 0x20;
      dVar3 = (double)afStack_a8[lVar17];
      dVar4 = *(double *)(lVar16 + 0x18 + lVar18) * dVar5 -
              *(double *)(lVar16 + 0x18 + lVar15) * dVar3;
      dVar6 = *(double *)(lVar16 + 0x10 + lVar18) * dVar5 -
              *(double *)(lVar16 + 0x10 + lVar15) * dVar3;
      dVar7 = *(double *)(lVar16 + 8 + lVar18) * dVar5 - *(double *)(lVar16 + 8 + lVar15) * dVar3;
      dVar3 = dVar5 * *(double *)(lVar16 + lVar18) - dVar3 * *(double *)(lVar16 + lVar15);
      if (local_ac[lVar14] != '\0') {
        dVar4 = -dVar4;
        dVar6 = -dVar6;
        dVar7 = -dVar7;
        dVar3 = -dVar3;
      }
      iVar2 = *(int *)(param_3 + 0xd0);
      *(uint *)(param_3 + 0xd0) = iVar2 + 1U;
      if (*(uint *)(param_3 + 0xd4) < iVar2 + 1U) {
        FUN_1448afb60(param_3,iVar2);
      }
      lVar14 = *(longlong *)(param_3 + 0xc0);
      if (*(longlong *)(param_3 + 0xc0) == 0) {
        lVar14 = param_3;
      }
      lVar17 = (longlong)iVar2 * 0x20;
      *(double *)(lVar14 + lVar17) = dVar3;
      *(double *)(lVar14 + 8 + lVar17) = dVar7;
      *(double *)(lVar14 + 0x10 + lVar17) = dVar6;
      *(double *)(lVar14 + 0x18 + lVar17) = dVar4;
    }
    lVar19 = lVar19 + 1;
  } while (lVar19 != 4);
  if ((local_90 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    FUN_1448afd16(param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14730ef0a FUN_14730ef0a body=429 status=ok
// SIG undefined FUN_14730ef0a(void)

void FUN_14730ef0a(undefined8 param_1,longlong *param_2,longlong param_3)

{
  double *pdVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_288 [32];
  undefined1 local_268 [192];
  longlong local_1a8;
  undefined8 local_198;
  longlong local_88;
  undefined8 local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if (DAT_14c760a38 != 0) {
    iVar3 = (int)param_2[1];
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar3);
    }
    if (*(int *)(param_3 + 0x1014) < iVar3) {
      FUN_147313f1e(param_3);
      iVar3 = (int)param_2[1];
    }
    if (0 < iVar3) {
      lVar5 = 8000;
      lVar4 = 0;
      do {
        pdVar1 = (double *)(*param_2 + -0x1698 + lVar5);
        if (*pdVar1 <= 1.0 && *pdVar1 != 1.0) {
          local_1a8 = 0;
          local_198 = 0x600000000;
          local_88 = 0;
          local_78 = 0x800000000;
          FUN_14730ec78(param_1,*param_2 + lVar5,local_268);
          iVar3 = *(int *)(param_3 + 0x1010);
          *(uint *)(param_3 + 0x1010) = iVar3 + 1U;
          if (*(uint *)(param_3 + 0x1014) < iVar3 + 1U) {
            FUN_147314014(param_3,iVar3);
          }
          lVar2 = *(longlong *)(param_3 + 0x1000);
          if (*(longlong *)(param_3 + 0x1000) == 0) {
            lVar2 = param_3;
          }
          FUN_144aab0c2((longlong)iVar3 * 0x200 + lVar2,local_268);
          if (local_88 != 0) {
            FUN_1400020a8();
          }
          if (local_1a8 != 0) {
            FUN_1400020a8();
          }
          iVar3 = (int)param_2[1];
        }
        lVar4 = lVar4 + 1;
        lVar5 = lVar5 + 0x13c10;
      } while (lVar4 < iVar3);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14730f0ba FUN_14730f0ba body=1346 status=ok
// SIG undefined FUN_14730f0ba(void)

void FUN_14730f0ba(longlong param_1,longlong param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined1 auStack_388 [32];
  undefined **local_368;
  longlong local_360;
  longlong local_358;
  undefined8 *local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  float local_338;
  float local_334;
  float local_330;
  float local_32c;
  float local_328;
  float local_324;
  float local_320;
  float local_31c;
  float local_318;
  float local_314;
  float local_310;
  float local_30c;
  float local_308;
  float local_304;
  float local_300;
  float local_2fc;
  double local_2f8 [12];
  undefined1 local_298 [16];
  double local_288;
  undefined8 local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  undefined1 local_1f8 [128];
  undefined8 local_178 [17];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_388;
  local_368 = &PTR_FUN_14a217cb0;
  local_350 = (undefined8 *)0x0;
  uStack_348 = 0;
  local_340 = 0;
  uVar7 = *(uint *)(param_2 + 0x944);
  local_360 = param_1;
  local_358 = param_1;
  if ((~*(uint *)(param_2 + 0x990) & 0x90) == 0 && -1 < (int)uVar7) {
    if (uVar7 < 4) {
      puVar12 = (undefined4 *)(&PTR_DAT_14a309fa8)[uVar7];
    }
    else {
      puVar12 = &DAT_149e1e2cc;
    }
    uVar8 = *puVar12;
    puVar14 = (undefined8 *)(param_1 + 0x9b0);
    puVar15 = local_178;
    for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
      *puVar15 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar15 = puVar15 + 1;
    }
    dVar5 = *(double *)(param_1 + 0x830);
    dVar6 = *(double *)(param_1 + 0x858);
    dVar9 = atan(1.0 / dVar5);
    dVar9 = (double)(float)dVar9;
    fVar2 = *(float *)(param_2 + 0x6f0);
    fVar3 = *(float *)(param_2 + 0x6e0);
    fVar4 = *(float *)(param_2 + 0x6e4);
    dVar11 = (double)fVar2;
    dVar5 = (double)(float)(dVar6 / dVar5);
    local_2f8[10] = dVar11 / (dVar11 - (double)fVar3);
    if ((fVar3 == fVar2) && (!NAN(fVar3) && !NAN(fVar2))) {
      local_2f8[10] = 1.0;
    }
    dVar6 = tan(dVar9);
    local_2f8[0] = tan(dVar9);
    local_2f8[0] = 1.0 / local_2f8[0];
    local_2f8[1] = 0.0;
    local_2f8[2] = 0.0;
    local_2f8[3] = 0.0;
    local_2f8[4] = 0.0;
    local_2f8[6] = 0.0;
    local_2f8[7] = 0.0;
    local_2f8[8] = 0.0;
    local_2f8[9] = 0.0;
    local_2f8[0xb] = 1.0;
    local_298 = ZEXT816(0);
    local_280 = 0;
    local_2f8[5] = dVar5 / dVar6;
    local_288 = -(double)fVar3 * local_2f8[10];
    FUN_1447fea8d(&local_278,local_178);
    FUN_14494412e(&local_278,local_1f8);
    FUN_147a36eba(&local_368,local_1f8,uVar8,0);
    dVar6 = (double)fVar4 / ((double)fVar4 - dVar11);
    if ((fVar2 == fVar4) && (!NAN(fVar2) && !NAN(fVar4))) {
      dVar6 = 1.0;
    }
    dVar10 = tan(dVar9);
    local_2f8[0] = tan(dVar9);
    local_2f8[0] = 1.0 / local_2f8[0];
    local_2f8[1] = 0.0;
    local_2f8[2] = 0.0;
    local_2f8[3] = 0.0;
    local_2f8[4] = 0.0;
    local_2f8[6] = 0.0;
    local_2f8[7] = 0.0;
    local_2f8[8] = 0.0;
    local_2f8[9] = 0.0;
    local_2f8[0xb] = 1.0;
    local_298 = ZEXT816(0);
    local_280 = 0;
    local_2f8[5] = dVar5 / dVar10;
    local_2f8[10] = dVar6;
    local_288 = -dVar11 * dVar6;
    FUN_1447fea8d(&local_278,local_178,local_2f8);
    FUN_14494412e(&local_278,local_1f8);
    FUN_147a36eba(&local_368,local_1f8,0xffffffff,0);
    FUN_144906bb6(param_2 + 0x1e0,&local_338);
    local_278 = (double)local_338;
    local_270 = (double)local_334;
    local_268 = (double)local_330;
    local_260 = (double)local_32c;
    local_258 = (double)local_328;
    local_250 = (double)local_324;
    local_248 = (double)local_320;
    local_240 = (double)local_31c;
    local_238 = (double)local_318;
    local_230 = (double)local_314;
    local_228 = (double)local_310;
    local_220 = (double)local_30c;
    local_218 = (double)local_308;
    local_210 = (double)local_304;
    local_208 = (double)local_300;
    local_200 = (double)local_2fc;
    local_288 = (double)(*(ulonglong *)(param_2 + 0x58) ^ 0x8000000000000000);
    local_2f8[0] = 1.0;
    local_2f8[1] = 0.0;
    local_2f8[2] = 0.0;
    local_2f8[3] = 0.0;
    local_2f8[4] = 0.0;
    local_2f8[5] = 1.0;
    local_2f8[6] = 0.0;
    local_2f8[7] = 0.0;
    local_2f8[8] = 0.0;
    local_2f8[9] = 0.0;
    local_2f8[10] = 1.0;
    local_2f8[0xb] = 0.0;
    local_298._8_4_ = (int)*(undefined8 *)(param_2 + 0x50);
    local_298._0_8_ = *(ulonglong *)(param_2 + 0x48) ^ 0x8000000000000000;
    local_298._12_4_ = (uint)((ulonglong)*(undefined8 *)(param_2 + 0x50) >> 0x20) ^ 0x80000000;
    local_280 = 0x3ff0000000000000;
    FUN_1447fea8d(local_1f8,&local_278,local_2f8);
    FUN_147a36eba(&local_368,local_1f8,uVar8,0);
  }
  else {
    FUN_1472f46a8(param_2,&local_368);
  }
  local_368 = &PTR_FUN_14a217cb0;
  if (local_350 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_350 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*local_350)(local_350,1);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14730f5fe FUN_14730f5fe body=754 status=ok
// SIG undefined FUN_14730f5fe(void)

void FUN_14730f5fe(longlong param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_148 [32];
  wchar_t *local_128;
  undefined1 *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined2 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined2 local_fc;
  undefined2 local_fa;
  undefined1 local_f8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 uStack_88;
  ulonglong local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  uint local_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined2 local_54;
  undefined4 local_52;
  undefined1 local_4e;
  undefined2 local_4d;
  undefined1 local_4b;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (0 < (int)param_3[1]) {
    local_120 = &DAT_100000001;
    uStack_118 = &DAT_100000001;
    lVar7 = 0;
    local_110 = 0;
    local_10c = 0;
    local_a0 = 0;
    local_98 = 0x500000001;
    local_108 = 0xffffffffffffffff;
    local_100 = 0;
    local_fc = (undefined2)(1 << ((char)DAT_14ca84d90 - 1U & 0x1f));
    local_f8 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_fa = local_fc;
    do {
      lVar8 = *(longlong *)(*param_3 + lVar7 * 8);
      iVar5 = *(int *)(lVar8 + 0x960) * 2;
      local_128 = (wchar_t *)CONCAT44(local_128._4_4_,*(int *)(lVar8 + 0x95c) + iVar5);
      cVar2 = FUN_1403365a6(&local_120,lVar8 + 0x950,lVar8 + 0x954,iVar5 + *(int *)(lVar8 + 0x958));
      uVar1 = uStack_88;
      if (cVar2 != '\0') {
        *(byte *)(lVar8 + 0x990) = *(byte *)(lVar8 + 0x990) | 1;
        lVar6 = (longlong)(int)uStack_88;
        uVar3 = (int)uStack_88 + 1;
        uStack_88 = CONCAT44(uStack_88._4_4_,uVar3);
        if (uStack_88._4_4_ < uVar3) {
          FUN_1447417ac(&local_90,uVar1 & 0xffffffff);
        }
        *(longlong *)(local_90 + lVar6 * 8) = lVar8;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < (int)param_3[1]);
    if ((int)uStack_118 != 0) {
      FUN_14031d6b0(param_1 + 0x500);
      lVar7 = (longlong)(*(int *)(param_1 + 0x508) + -1) * 0x48 + *(longlong *)(param_1 + 0x500);
      iVar4 = (int)uStack_118;
      iVar5 = uStack_118._4_4_;
      if (*(int *)(DAT_14ca5b378 + 4) != 0) {
        uVar1 = (ulonglong)((int)uStack_118 + -1 + (uint)((int)uStack_118 == 0)) * 2 + 1;
        lVar8 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iVar4 = 1 << ((byte)lVar8 & 0x1f);
        uVar1 = (ulonglong)(uStack_118._4_4_ + -1 + (uint)(uStack_118._4_4_ == 0)) * 2 + 1;
        lVar8 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar8 & 0x1f);
      }
      local_5c = CONCAT44(iVar5,iVar4);
      local_80 = DAT_14ca4afa8 | 0xc;
      local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      local_60 = 0;
      local_54 = 1;
      local_4e = 0;
      local_78 = DAT_14ca8509c;
      local_74 = DAT_14ca850a0;
      uStack_70 = DAT_14ca850a4;
      uStack_6c = DAT_14ca850a8;
      uStack_68 = DAT_14ca850ac;
      local_4d = 0xc;
      local_52 = 0x1010001;
      local_4b = 0xff;
      local_128 = L"MobileCSMAndSpotLightShadowmap";
      FUN_14490a8c0(&DAT_14ca9a3e8,param_2,&local_80,lVar7 + 0x30);
      if (0 < (int)uStack_88) {
        lVar8 = 0;
        iVar5 = (int)uStack_88;
        do {
          lVar6 = *(longlong *)(local_90 + lVar8 * 8);
          if ((*(byte *)(lVar6 + 0x990) & 1) != 0) {
            FUN_14307a70a(lVar6 + 0x18,lVar7);
            iVar5 = *(int *)(lVar7 + 0x40);
            *(uint *)(lVar7 + 0x40) = iVar5 + 1U;
            if (*(uint *)(lVar7 + 0x44) < iVar5 + 1U) {
              FUN_1447417ac((longlong *)(lVar7 + 0x38),iVar5);
            }
            *(longlong *)(*(longlong *)(lVar7 + 0x38) + (longlong)iVar5 * 8) = lVar6;
            iVar5 = (int)uStack_88;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar5);
      }
    }
    FUN_14002d3bc(&local_90);
    if (local_a0 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14730f8f2 FUN_14730f8f2 body=69 status=ok
// SIG undefined FUN_14730f8f2(void)

longlong FUN_14730f8f2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_1473129ba();
  plVar1 = *(longlong **)(param_2 + 0x30);
  plVar2 = *(longlong **)(param_1 + 0x30);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x30) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2);
    }
  }
  return param_1;
}



// FUNCTION 14730f938 FUN_14730f938 body=72 status=ok
// SIG undefined FUN_14730f938(void)

void FUN_14730f938(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x28) = iVar1 + 2;
  if ((uint)(*(int *)(param_1 + 0x2c) - iVar1) < 2) {
    FUN_1473141bc(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar2 = param_1;
  }
  FUN_1410c0b55(lVar2 + (longlong)iVar1 * 8,2);
  return;
}



// FUNCTION 14730f980 FUN_14730f980 body=101 status=ok
// SIG undefined FUN_14730f980(void)

void FUN_14730f980(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1447417ac(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      *(int *)(param_1 + 1) = param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14730f9e6 FUN_14730f9e6 body=118 status=ok
// SIG undefined FUN_14730f9e6(void)

undefined8 FUN_14730f9e6(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = FUN_143081976(param_1 + 0x90);
  FUN_143081a78(uVar2,uVar1,param_1,param_3,0);
  FUN_143078e5c(param_1,uVar2,0);
  FUN_14307a92a(param_1,param_2,uVar2);
  FUN_14307a998(param_1,param_2,uVar2);
  return uVar2;
}



// FUNCTION 14730fa5c FUN_14730fa5c body=817 status=ok
// SIG undefined FUN_14730fa5c(void)

undefined8 FUN_14730fa5c(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStack_c8 [38];
  char local_a2;
  char local_a1;
  ulonglong local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a1 = DAT_14c760e16;
  local_a2 = DAT_14c760e17;
  lVar3 = *(longlong *)(param_1 + 8);
  lVar14 = 0x36a0;
  local_a0 = param_3;
  local_98 = param_2;
  do {
    lVar4 = *(longlong *)(lVar3 + lVar14);
    if (lVar4 != 0) {
      cVar7 = FUN_1471dbc68(lVar4);
      if ((cVar7 != '\0') && (iVar1 = *(int *)(param_1 + 0x3f0), (longlong)iVar1 != 0)) {
        uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x3338);
        lVar5 = *(longlong *)(param_1 + 1000);
        lVar12 = 0;
        do {
          FUN_14730fd8e(*(longlong *)(lVar5 + 0x3780 + lVar12) +
                        (longlong)*(int *)(lVar4 + 0x34) * 0x78 + 0x48,uVar2);
          lVar12 = lVar12 + 0x13c10;
        } while ((longlong)iVar1 * 0x13c10 - lVar12 != 0);
      }
    }
    lVar14 = lVar14 + 8;
  } while (lVar14 != 0x36b8);
  uVar11 = FUN_14730f9e6(param_1,local_98,local_a0);
  bVar8 = FUN_147430903(*(undefined2 *)
                         (&DAT_14ca85070 + (longlong)*(int *)(*(longlong *)(param_1 + 8) + 8) * 2));
  uVar13 = 2;
  if (bVar8 == 0) {
    local_a0 = local_a0 & 0xffffffffffffff00;
    FUN_14724e80e(param_1);
    lVar3 = *(longlong *)(param_1 + 8);
    lVar14 = -0x18;
    bVar8 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + 0x36b8 + lVar14);
      if ((lVar4 != 0) && (plVar6 = *(longlong **)(lVar4 + 0x28), plVar6 != (longlong *)0x0)) {
        if (local_a1 == '\0') {
          bVar9 = 0;
        }
        else {
          bVar9 = (**(code **)(*plVar6 + 0xb0))(plVar6);
        }
        if (local_a2 == '\0') {
          if (bVar8 == 0) {
            if ((*(byte *)(plVar6 + 0x3a) & 2) == 0) {
              bVar10 = 0;
              bVar8 = 0;
              goto LAB_14730fbbf;
            }
            bVar8 = FUN_1471dbc0a(lVar4);
          }
          else {
            bVar8 = 1;
          }
LAB_14730fbbd:
          bVar10 = 0;
        }
        else {
          if ((*(byte *)(plVar6 + 0x3a) & 2) == 0) goto LAB_14730fbbd;
          bVar10 = FUN_1471dbc0a(lVar4);
        }
LAB_14730fbbf:
        bVar8 = bVar8 & 1;
        if ((bVar9 | bVar10) == 1) {
          FUN_14307b04c(param_1,lVar4);
        }
      }
      lVar14 = lVar14 + 8;
    } while (lVar14 != 0);
    uVar13 = (uint)(byte)(bVar8 * '\x02');
    bVar8 = (byte)local_a0;
  }
  iVar1 = *(int *)(param_1 + 0x3f0);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 1000);
    lVar14 = 0;
    do {
      *(uint *)(lVar3 + 0x117c0 + lVar14) =
           *(uint *)(lVar3 + 0x117c0 + lVar14) & 0xfffffffd | uVar13 | bVar8;
      lVar14 = lVar14 + 0x13c10;
    } while ((longlong)iVar1 * 0x13c10 - lVar14 != 0);
  }
  *(undefined1 *)(param_1 + 0xd4f) = 0;
  lVar3 = *(longlong *)(param_1 + 8);
  local_60 = lVar3 + 0x3560;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  if (*(int *)(lVar3 + 0x3578) != 0) {
    FUN_1449c0562(&local_68);
  }
  local_88 = local_68;
  local_80 = local_60;
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_90 = (longlong *)(lVar3 + 0x3550);
  if (iStack_54 < *(int *)(local_60 + 0x18)) {
    do {
      if (*(char *)(param_1 + 0xd4f) != '\0') break;
      *(bool *)(param_1 + 0xd4f) =
           0 < *(int *)(*(longlong *)(param_1 + 0x4d8) + 0x18 +
                       (longlong)
                       *(int *)(*(longlong *)(*local_90 + 0x30 + (longlong)iStack_74 * 0x40) + 0x34)
                       * 0x68);
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (iStack_74 < *(int *)(local_80 + 0x18));
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14730fd8e FUN_14730fd8e body=178 status=ok
// SIG undefined FUN_14730fd8e(void)

void FUN_14730fd8e(void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  
  *(int *)((longlong)param_1 + 0x18) = param_2;
  uVar6 = param_2 + 0x1f;
  if (0x1f < uVar6) {
    uVar5 = uVar6 >> 5;
    if (*(int *)((longlong)param_1 + 0x1c) + 0x1fU >> 5 < uVar5) {
      FUN_144aafd68(param_1,0,uVar5,4);
      *(uint *)((longlong)param_1 + 0x1c) = uVar6 & 0xffffffe0;
    }
    pvVar4 = *(void **)((longlong)param_1 + 0x10);
    if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
      pvVar4 = param_1;
    }
    if (uVar6 < 0x120) {
      uVar5 = uVar6 >> 3 & 0x3c;
    }
    else {
      uVar5 = uVar5 << 2;
    }
    memset(pvVar4,0,(ulonglong)uVar5);
    iVar1 = *(int *)((longlong)param_1 + 0x18);
    iVar2 = iVar1 + 0x1f;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    if (iVar1 % 0x20 != 0) {
      pvVar4 = *(void **)((longlong)param_1 + 0x10);
      if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
        pvVar4 = param_1;
      }
      bVar3 = -(char)(iVar1 % 0x20);
      *(uint *)((longlong)pvVar4 + (longlong)(iVar2 >> 5) * 4) =
           (uint)(*(int *)((longlong)pvVar4 + (longlong)(iVar2 >> 5) * 4) << (bVar3 & 0x1f)) >>
           (bVar3 & 0x1f);
    }
  }
  return;
}



// FUNCTION 14730fe40 FUN_14730fe40 body=495 status=ok
// SIG undefined FUN_14730fe40(void)

undefined8 FUN_14730fe40(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 auStack_428 [32];
  undefined1 *local_408;
  undefined4 local_400;
  undefined4 local_3f8;
  undefined4 local_3f0;
  undefined4 local_3e8;
  undefined1 local_3d8 [240];
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  longlong local_1d8;
  undefined8 local_1c8;
  longlong local_b8;
  undefined8 local_a8;
  undefined1 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined2 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_428;
  uVar1 = *(undefined4 *)(param_1 + 0x4f8);
  *(undefined4 *)(param_1 + 0x4f8) = 1;
  local_2d8 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2d0 = 0x3ff0000000000000;
  local_2b8 = 0x5500000000000000;
  uStack_2b0 = 0;
  local_2a8 = 0x55000000;
  local_1d8 = 0;
  local_1c8 = 0x600000000;
  local_b8 = 0;
  local_a8 = 0x800000000;
  local_58 = 0;
  local_54 = 0xffffffff;
  local_50 = 0xbf8000003f800000;
  local_48 = 0;
  plVar2 = *(longlong **)(param_3 + 0x28);
  if (((*(byte *)(param_3 + 0xe4) & 1) == 0) ||
     (bVar6 = true, DAT_14c760480 <= *(int *)(param_3 + 0xf8))) {
    bVar6 = (*(byte *)(plVar2 + 0x3a) & 8) == 0;
  }
  local_408 = local_3d8;
  uVar5 = 0;
  cVar3 = (**(code **)(*plVar2 + 0xc0))(plVar2,param_1,0,bVar6);
  if (cVar3 != '\0') {
    lVar4 = (longlong)*(int *)(param_3 + 0x34) * 0x68;
    if (*(int *)(*param_2 + 8 + lVar4) == 0) {
      uVar5 = 0;
    }
    else {
      lVar4 = **(longlong **)(*param_2 + lVar4);
      local_3f8 = *(undefined4 *)(lVar4 + 0x958);
      local_400 = *(undefined4 *)(lVar4 + 0x95c);
      local_3e8 = *(undefined4 *)(lVar4 + 0x960);
      local_408 = (undefined1 *)CONCAT44(local_408._4_4_,local_3f8);
      local_3f0 = local_400;
      FUN_14491cf12(param_4,param_3,param_1,local_3d8);
      uVar5 = 1;
    }
  }
  *(undefined4 *)(param_1 + 0x4f8) = uVar1;
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (local_1d8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 147310030 FUN_147310030 body=1119 status=ok
// SIG undefined FUN_147310030(void)

float * FUN_147310030(float *param_1,float *param_2,int *param_3,int *param_4,int *param_5)

{
  float *_Dst;
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  _Dst = param_1 + 4;
  memset(_Dst,0,0xa4);
  fVar4 = param_2[3];
  if ((fVar4 < 0.0) || (0.000128 <= fVar4)) {
    fVar21 = -0.000128;
    if (fVar4 <= -0.000128) {
      fVar21 = fVar4;
    }
    fVar21 = (float)(~-(uint)(fVar4 < 0.0) & (uint)fVar4 | (uint)fVar21 & -(uint)(fVar4 < 0.0));
  }
  else {
    fVar21 = 0.000128;
  }
  fVar20 = (float)*param_3 * ((*param_2 / fVar21) * 0.5 + 0.5);
  *param_1 = fVar20;
  fVar21 = (float)param_3[1] * ((param_2[1] / fVar21) * -0.5 + 0.5);
  param_1[1] = fVar21;
  fVar22 = 0.0;
  if ((fVar4 != 0.0) || (NAN(fVar4))) {
    fVar22 = param_2[2] / fVar4;
  }
  param_1[2] = fVar22;
  param_1[3] = *(float *)((longlong)&DAT_149935368 + (ulonglong)(0.0 < fVar4) * 4);
  iVar8 = (int)(fVar20 + 0.5);
  iVar14 = (int)(fVar21 + 0.5);
  uVar9 = *param_4 - iVar8;
  iVar13 = param_5[1] - iVar14;
  iVar8 = *param_5 - iVar8;
  uVar12 = param_4[1] - iVar14;
  uVar19 = 0;
  do {
    iVar14 = -uVar12;
    uVar18 = -iVar13;
    if (uVar19 < 2) {
      iVar14 = iVar13;
      uVar18 = uVar12;
    }
    iVar16 = iVar8;
    uVar15 = uVar9;
    if ((uVar19 & 1) == 0) {
      iVar16 = -uVar9;
      uVar15 = -iVar8;
    }
    if ((int)uVar15 < 1) {
      uVar15 = 0;
    }
    uVar15 = uVar15 >> 6;
    if ((int)uVar18 < 1) {
      uVar18 = 0;
    }
    iVar16 = (0x40 << (uVar19 != 3 && uVar19 != 0)) + iVar16;
    if (iVar16 < 2) {
      iVar16 = 1;
    }
    uVar17 = iVar16 - 1U >> 6;
    iVar14 = (0x40 << (uVar19 == 3 || uVar19 == 0)) + iVar14;
    if (iVar14 < 2) {
      iVar14 = 1;
    }
    if ((float)(uVar17 - uVar15) != 0.0 && uVar15 <= uVar17) {
      uVar18 = uVar18 >> 6;
      uVar11 = iVar14 - 1U >> 6;
      if ((float)(uVar11 - uVar18) != 0.0 && uVar18 <= uVar11) {
        uVar5 = uVar15;
        if ((uVar19 & 1) == 0) {
          uVar5 = -uVar17;
        }
        iVar14 = iVar13 + uVar9;
        if (uVar19 == 1) {
          iVar14 = iVar8 - iVar13;
        }
        if (uVar19 == 2) {
          iVar14 = uVar12 - uVar9;
        }
        uVar6 = -uVar11;
        if (uVar19 < 2) {
          uVar6 = uVar18;
        }
        if (uVar19 == 3) {
          iVar14 = -(iVar8 + uVar12);
        }
        lVar10 = (longlong)(int)param_1[0x2c];
        param_1[0x2c] = (float)((int)param_1[0x2c] + 1);
        _Dst[lVar10 * 5] = 8.96831e-44;
        param_1[lVar10 * 5 + 5] = (float)(uVar17 - uVar15);
        param_1[lVar10 * 5 + 6] = (float)(uVar11 - uVar18);
        param_1[lVar10 * 5 + 7] = (float)((uVar5 + 1) - (uint)(uVar19 < 2));
        param_1[lVar10 * 5 + 8] = (float)((uVar19 == 3 || uVar19 == 1) + uVar6);
        iVar16 = iVar14 + 0x3f;
        iVar14 = iVar14 + 0x7e;
        if (-1 < iVar16) {
          iVar14 = iVar16;
        }
        if (0x3f < iVar16) {
          pfVar1 = _Dst + lVar10 * 5;
          fVar21 = (float)(iVar14 >> 6);
          fVar4 = param_1[0x2c];
          param_1[0x2c] = (float)((int)fVar4 + 1);
          pfVar2 = _Dst + (longlong)(int)fVar4 * 5;
          pfVar2[4] = pfVar1[4];
          uVar7 = *(undefined8 *)(pfVar1 + 2);
          *(undefined8 *)pfVar2 = *(undefined8 *)pfVar1;
          *(undefined8 *)(pfVar2 + 2) = uVar7;
          if (uVar19 == 0) {
            if ((int)pfVar1[2] < (int)fVar21) {
              fVar21 = pfVar1[2];
            }
            pfVar2[2] = fVar21;
            fVar4 = pfVar1[2];
            pfVar1[2] = (float)((int)fVar4 - (int)fVar21);
            pfVar2[4] = (float)(((int)fVar4 - (int)fVar21) + (int)pfVar1[4]);
            pfVar2[3] = (float)((int)pfVar2[3] + -1);
LAB_147310375:
            iVar14 = 1;
            lVar10 = 4;
LAB_147310380:
            *(int *)((longlong)pfVar2 + lVar10) = *(int *)((longlong)pfVar2 + lVar10) + iVar14;
          }
          else {
            if (uVar19 == 1) {
              if ((int)pfVar1[1] < (int)fVar21) {
                fVar21 = pfVar1[1];
              }
              pfVar2[1] = fVar21;
              fVar4 = pfVar1[1];
              pfVar1[1] = (float)((int)fVar4 - (int)fVar21);
              pfVar2[3] = (float)(((int)fVar4 - (int)fVar21) + (int)pfVar1[3]);
              iVar14 = 1;
              lVar10 = 8;
              goto LAB_147310380;
            }
            if (uVar19 == 2) {
              if ((int)pfVar1[1] < (int)fVar21) {
                fVar21 = pfVar1[1];
              }
              pfVar2[1] = fVar21;
              pfVar1[1] = (float)((int)pfVar1[1] - (int)fVar21);
              pfVar1[3] = (float)((int)pfVar1[3] + (int)pfVar2[1]);
              pfVar2[2] = (float)((int)pfVar2[2] + 1);
              iVar14 = -1;
              lVar10 = 0x10;
              goto LAB_147310380;
            }
            if (uVar19 == 3) {
              if ((int)pfVar1[2] < (int)fVar21) {
                fVar21 = pfVar1[2];
              }
              pfVar2[2] = fVar21;
              pfVar1[2] = (float)((int)pfVar1[2] - (int)fVar21);
              pfVar1[4] = (float)((int)pfVar1[4] + (int)pfVar2[2]);
              goto LAB_147310375;
            }
          }
          if (((int)pfVar2[1] < 1) || ((int)pfVar2[2] < 1)) {
            lVar10 = (longlong)(int)param_1[0x2c] + -1;
            param_1[0x2c] = (float)lVar10;
            pfVar2[4] = param_1[lVar10 * 5 + 8];
            uVar7 = *(undefined8 *)(_Dst + lVar10 * 5 + 2);
            *(undefined8 *)pfVar2 = *(undefined8 *)(_Dst + lVar10 * 5);
            *(undefined8 *)(pfVar2 + 2) = uVar7;
          }
          if (((int)pfVar1[1] < 1) || ((int)pfVar1[2] < 1)) {
            lVar10 = (longlong)(int)param_1[0x2c] + -1;
            param_1[0x2c] = (float)lVar10;
            pfVar1[4] = param_1[lVar10 * 5 + 8];
            uVar7 = *(undefined8 *)(_Dst + lVar10 * 5 + 2);
            *(undefined8 *)pfVar1 = *(undefined8 *)(_Dst + lVar10 * 5);
            *(undefined8 *)(pfVar1 + 2) = uVar7;
          }
        }
      }
    }
    uVar19 = uVar19 + 1;
    if (uVar19 == 4) {
      fVar4 = param_1[0x2c];
      if (0 < (longlong)(int)fVar4) {
        lVar10 = 0;
        do {
          piVar3 = (int *)((longlong)param_1 + lVar10 + 0x1c);
          *piVar3 = *piVar3 << 6;
          piVar3 = (int *)((longlong)param_1 + lVar10 + 0x20);
          *piVar3 = *piVar3 << 6;
          lVar10 = lVar10 + 0x14;
        } while ((longlong)(int)fVar4 * 0x14 != lVar10);
      }
      return param_1;
    }
  } while( true );
}



// FUNCTION 147310490 FUN_147310490 body=42 status=ok
// SIG undefined FUN_147310490(void)

void FUN_147310490(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1473104c6 FUN_1473104c6 body=96 status=ok
// SIG undefined FUN_1473104c6(void)

undefined8 FUN_1473104c6(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f5ac44();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca5bb68,1);
  return uVar3;
}



// FUNCTION 147310526 FUN_147310526 body=52 status=ok
// SIG undefined FUN_147310526(void)

void FUN_147310526(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14731055a FUN_14731055a body=42 status=ok
// SIG undefined FUN_14731055a(void)

void FUN_14731055a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147310590 FUN_147310590 body=96 status=ok
// SIG undefined FUN_147310590(void)

undefined8 FUN_147310590(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145eb0f34();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca5bbf0,1);
  return uVar3;
}



// FUNCTION 1473105f0 FUN_1473105f0 body=52 status=ok
// SIG undefined FUN_1473105f0(void)

void FUN_1473105f0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147310624 FUN_147310624 body=42 status=ok
// SIG undefined FUN_147310624(void)

void FUN_147310624(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14731065a FUN_14731065a body=96 status=ok
// SIG undefined FUN_14731065a(void)

undefined8 FUN_14731065a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f6d9ae();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca5bc78,1);
  return uVar3;
}



// FUNCTION 1473106ba FUN_1473106ba body=52 status=ok
// SIG undefined FUN_1473106ba(void)

void FUN_1473106ba(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1473106ee FUN_1473106ee body=108 status=ok
// SIG undefined FUN_1473106ee(void)

undefined4 * FUN_1473106ee(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145f5a9d6();
  FUN_145f5a9d6();
  FUN_1448e935e(param_1,&local_30,&DAT_14ca5b6f8,0);
  FUN_145f5a9d6();
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14731075b FUN_14731075b body=177 status=ok
// SIG undefined FUN_14731075b(void)

void FUN_14731075b(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145f5ac44();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca5bb68,param_4);
  local_78 = &DAT_14ca5bb68;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_147314ca8(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14731080d FUN_14731080d body=177 status=ok
// SIG undefined FUN_14731080d(void)

void FUN_14731080d(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145eb0f34();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca5bbf0,param_4);
  local_78 = &DAT_14ca5bbf0;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_147315088(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473108c0 FUN_1473108c0 body=38 status=ok
// SIG undefined FUN_1473108c0(void)

undefined8 FUN_1473108c0(undefined8 param_1,int param_2)

{
  FUN_1446fae78();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473108e6 FUN_1473108e6 body=74 status=ok
// SIG undefined FUN_1473108e6(void)

void FUN_1473108e6(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x3c) != 0xc) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0xc;
    if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x30),
              (longlong)*(int *)((longlong)param_1 + 0x38) << 2);
      FUN_1446efa72((longlong)param_1 + 0x30,0,0,4);
      return;
    }
  }
  return;
}



// FUNCTION 147310930 FUN_147310930 body=132 status=ok
// SIG undefined FUN_147310930(void)

void FUN_147310930(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x30);
  if ((uint)param_3 < 0xd) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x30,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 0x30),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x30,param_2,param_3,4);
  return;
}



// FUNCTION 1473109b4 FUN_1473109b4 body=110 status=ok
// SIG undefined FUN_1473109b4(void)

void FUN_1473109b4(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0xc;
    if (0xc < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0xc < *(uint *)(param_1 + 0x3c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 2,0);
      iVar2 = (int)(uVar3 >> 2);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x3c) = iVar5;
    FUN_147310930(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147310a24 FUN_147310a24 body=133 status=ok
// SIG undefined FUN_147310a24(void)

void FUN_147310a24(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x70);
  if (param_2 <= (int)uVar1) {
    uVar4 = 5;
    if (5 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (5 < *(uint *)(param_1 + 0x74)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x14,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 / 0x14)) {
        uVar4 = uVar3 / 0x14 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x74) = (int)uVar4;
    FUN_147310aaa(param_1,param_2,uVar4,0x14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147310aaa FUN_147310aaa body=141 status=ok
// SIG undefined FUN_147310aaa(void)

void FUN_147310aaa(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x68);
  if ((uint)param_3 < 6) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x14);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x68,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x68),param_1,(longlong)param_2 * 0x14);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x68,param_2,param_3,param_4);
  return;
}



// FUNCTION 147310b38 FUN_147310b38 body=119 status=ok
// SIG undefined FUN_147310b38(void)

undefined8 FUN_147310b38(longlong param_1,int param_2)

{
  byte bVar1;
  byte extraout_AL;
  longlong lVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  undefined7 extraout_var;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = param_1 + 0x18;
  lVar7 = *(longlong *)(param_1 + 0x80);
  lVar2 = lVar7;
  if (lVar7 == 0) {
    lVar2 = lVar6;
  }
  lVar5 = (longlong)param_2;
  if (*(int *)(lVar2 + lVar5 * 0x14) == -1) {
    bVar1 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = FUN_147310b38(param_1);
    lVar7 = *(longlong *)(param_1 + 0x80);
    uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
    bVar1 = 1;
    if ((char)uVar3 == '\0') {
      if (lVar7 == 0) {
        lVar7 = lVar6;
      }
      FUN_147310b38(param_1,*(undefined4 *)(lVar7 + 4 + lVar5 * 0x14));
      lVar7 = *(longlong *)(param_1 + 0x80);
      bVar1 = extraout_AL;
      uVar4 = extraout_var;
    }
  }
  if (lVar7 != 0) {
    lVar6 = lVar7;
  }
  return CONCAT71(uVar4,bVar1 | *(byte *)(lVar6 + 0x10 + lVar5 * 0x14));
}



// FUNCTION 147310bb0 FUN_147310bb0 body=549 status=ok
// SIG undefined FUN_147310bb0(void)

void FUN_147310bb0(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar5 = param_1 + 0x18;
  lVar3 = *(longlong *)(param_1 + 0x80);
  lVar8 = lVar3;
  if (lVar3 == 0) {
    lVar8 = lVar5;
  }
  lVar4 = (longlong)param_2;
  if (*(int *)(lVar8 + lVar4 * 0x14) != -1) {
    FUN_147310bb0(param_1);
    lVar3 = *(longlong *)(param_1 + 0x80);
  }
  lVar8 = lVar3;
  if (lVar3 == 0) {
    lVar8 = lVar5;
  }
  if (*(int *)(lVar8 + 4 + lVar4 * 0x14) != -1) {
    FUN_147310bb0(param_1);
    lVar3 = *(longlong *)(param_1 + 0x80);
  }
  lVar8 = lVar3;
  if (lVar3 == 0) {
    lVar8 = lVar5;
  }
  uVar1 = *(uint *)(lVar8 + lVar4 * 0x14);
  lVar7 = (longlong)(int)uVar1;
  if (lVar7 != -1) {
    iVar2 = *(int *)(param_1 + 0x88);
    if (~uVar1 + iVar2 != 0) {
      memmove((void *)(lVar8 + lVar7 * 0x14),(void *)(lVar8 + lVar7 * 0x14 + 0x14),
              (longlong)(int)(~uVar1 + iVar2) * 0x14);
      iVar2 = *(int *)(param_1 + 0x88);
    }
    *(int *)(param_1 + 0x88) = iVar2 + -1;
    FUN_147310dd6();
    if (0 < *(int *)(param_1 + 0x88)) {
      lVar3 = 0;
      lVar8 = 0;
      do {
        lVar7 = *(longlong *)(param_1 + 0x80);
        lVar6 = lVar7;
        if (lVar7 == 0) {
          lVar6 = lVar5;
        }
        if ((int)uVar1 <= *(int *)(lVar6 + lVar3)) {
          *(int *)(lVar6 + lVar3) = *(int *)(lVar6 + lVar3) + -1;
          lVar7 = *(longlong *)(param_1 + 0x80);
        }
        if (lVar7 == 0) {
          lVar7 = lVar5;
        }
        iVar2 = *(int *)(lVar7 + 4 + lVar3);
        if ((int)uVar1 <= iVar2) {
          *(int *)(lVar7 + 4 + lVar3) = iVar2 + -1;
        }
        lVar8 = lVar8 + 1;
        lVar3 = lVar3 + 0x14;
      } while (lVar8 < *(int *)(param_1 + 0x88));
    }
    lVar3 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar3 = lVar5;
    }
    *(undefined4 *)(lVar3 + lVar4 * 0x14) = 0xffffffff;
    lVar3 = *(longlong *)(param_1 + 0x80);
  }
  if (lVar3 == 0) {
    lVar3 = lVar5;
  }
  uVar1 = *(uint *)(lVar3 + 4 + lVar4 * 0x14);
  lVar8 = (longlong)(int)uVar1;
  if (lVar8 != -1) {
    iVar2 = *(int *)(param_1 + 0x88);
    if (~uVar1 + iVar2 != 0) {
      memmove((void *)(lVar3 + lVar8 * 0x14),(void *)(lVar3 + lVar8 * 0x14 + 0x14),
              (longlong)(int)(~uVar1 + iVar2) * 0x14);
      iVar2 = *(int *)(param_1 + 0x88);
    }
    *(int *)(param_1 + 0x88) = iVar2 + -1;
    FUN_147310dd6();
    if (0 < *(int *)(param_1 + 0x88)) {
      lVar3 = 0;
      lVar8 = 0;
      do {
        lVar7 = *(longlong *)(param_1 + 0x80);
        lVar6 = lVar7;
        if (lVar7 == 0) {
          lVar6 = lVar5;
        }
        if ((int)uVar1 <= *(int *)(lVar6 + lVar3)) {
          *(int *)(lVar6 + lVar3) = *(int *)(lVar6 + lVar3) + -1;
          lVar7 = *(longlong *)(param_1 + 0x80);
        }
        if (lVar7 == 0) {
          lVar7 = lVar5;
        }
        iVar2 = *(int *)(lVar7 + 4 + lVar3);
        if ((int)uVar1 <= iVar2) {
          *(int *)(lVar7 + 4 + lVar3) = iVar2 + -1;
        }
        lVar8 = lVar8 + 1;
        lVar3 = lVar3 + 0x14;
      } while (lVar8 < *(int *)(param_1 + 0x88));
    }
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x80);
    }
    *(undefined4 *)(lVar5 + 4 + lVar4 * 0x14) = 0xffffffff;
  }
  return;
}



// FUNCTION 147310dd6 FUN_147310dd6 body=59 status=ok
// SIG undefined FUN_147310dd6(void)

void FUN_147310dd6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147310e12(param_1,*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74));
  if (iVar1 == *(int *)(param_1 + 0x74)) {
    return;
  }
  *(int *)(param_1 + 0x74) = iVar1;
  FUN_147310aaa(param_1,*(undefined4 *)(param_1 + 0x70),iVar1,0x14);
  return;
}



// FUNCTION 147310e12 FUN_147310e12 body=126 status=ok
// SIG undefined FUN_147310e12(void)

ulonglong FUN_147310e12(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 5;
  if (5 < param_2) {
    iVar2 = param_3 - param_2;
    if ((ulonglong)((longlong)iVar2 * 0x14) < 0x4000) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x14,0);
      uVar1 = uVar1 / 0x14;
    }
  }
  return uVar1;
}



// FUNCTION 147310e90 FUN_147310e90 body=122 status=ok
// SIG undefined FUN_147310e90(void)

void FUN_147310e90(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  lVar2 = *param_1;
  puVar3 = (undefined4 *)FUN_14001cc68(0x60,0x10);
  *puVar3 = 0xffffffff;
  puVar3[1] = param_2;
  puVar3[2] = param_3;
  *(undefined8 *)(puVar3 + 4) = 0;
  *(undefined8 *)(puVar3 + 6) = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined8 *)(puVar3 + 10) = 0;
  *(undefined8 *)(puVar3 + 0xc) = 0;
  *(undefined8 *)(puVar3 + 0xe) = 0;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x12) = 0;
  *(undefined8 *)(puVar3 + 0x14) = 0;
  *(undefined8 *)(puVar3 + 0x16) = 0;
  iVar1 = *(int *)(lVar2 + 0x78);
  *(uint *)(lVar2 + 0x78) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x7c) < iVar1 + 1U) {
    FUN_14003face((longlong *)(lVar2 + 0x70),iVar1);
  }
  *(undefined4 **)(*(longlong *)(lVar2 + 0x70) + (longlong)iVar1 * 8) = puVar3;
  return;
}



// FUNCTION 147310f0a FUN_147310f0a body=6462 status=ok
// SIG undefined FUN_147310f0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147310f0a(longlong param_1,longlong param_2,longlong *param_3)

{
  short sVar1;
  ushort uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  double dVar9;
  char cVar10;
  byte bVar11;
  undefined4 uVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint *puVar19;
  undefined4 *puVar20;
  int iVar21;
  longlong lVar22;
  uint uVar23;
  int *piVar24;
  longlong lVar25;
  longlong *plVar26;
  longlong lVar27;
  longlong *plVar28;
  int iVar29;
  longlong *plVar30;
  ulonglong uVar31;
  bool bVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  float fVar38;
  double dVar39;
  float fVar40;
  double dVar41;
  undefined1 auStack_268 [32];
  undefined8 *local_248;
  char *local_240;
  undefined8 *local_238;
  undefined4 *local_230;
  byte local_228;
  float local_220;
  uint local_20c;
  undefined4 *local_208;
  uint local_1fc;
  longlong local_1f8;
  longlong local_1f0;
  longlong *local_1e8;
  uint local_1e0;
  uint local_1dc;
  ulonglong local_1d8;
  ulonglong local_1d0;
  int *local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  longlong *local_1b0;
  undefined4 *local_1a8;
  longlong local_1a0;
  double local_198;
  int local_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  double dStack_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  char local_139;
  undefined8 local_138;
  ushort local_130;
  byte local_12e;
  char local_12d;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  double local_110;
  double local_108;
  undefined4 *local_100;
  undefined1 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_148 = (double)*(float *)((longlong)param_3 + 0x34);
  local_150 = (double)*(float *)(param_3 + 6);
  local_158 = (double)*(float *)((longlong)param_3 + 0x2c);
  local_160 = (double)*(float *)(param_3 + 5);
  local_168 = (double)param_3[4];
  local_178 = (double)param_3[2];
  dStack_170 = (double)param_3[3];
  local_1b8 = *param_3;
  local_1f0 = param_3[1];
  uVar13 = *(uint *)(param_2 + 0x48);
  local_1a0 = param_1;
  if ((((ulonglong)uVar13 != 0) && (0 < (int)uVar13)) &&
     ((*(byte *)((longlong)param_3 + 0x44) & 6) == 6)) {
    local_208 = (undefined4 *)(param_2 + 0x10);
    lVar25 = 0;
    lVar22 = 0;
    uVar17 = 0;
    do {
      lVar27 = *(longlong *)(*(longlong *)(param_2 + 0x40) + uVar17 * 8);
      cVar10 = FUN_144754900(lVar27 + 0x2b0,&local_178,lVar27 + 0x48);
      if ((cVar10 != '\0') &&
         (cVar10 = FUN_144754b1e(lVar27 + 0xb70,&local_178,local_1f0), cVar10 != '\0')) {
        local_128 = 0.0;
        uStack_120 = 0.0;
        local_118 = 0.0;
        local_240 = (char *)(*(longlong *)(local_1a0 + 0x20) + lVar25);
        local_188 = *local_208;
        uStack_184 = local_208[1];
        uStack_180 = local_208[2];
        uStack_17c = local_208[3];
        local_248 = &local_128;
        lVar27 = FUN_144754ecc(lVar27,param_3,&local_188);
        if (lVar27 != 0) {
          lVar18 = *(longlong *)(local_1a0 + 0x40);
          local_1e8 = (longlong *)(lVar18 + lVar22);
          iVar29 = *(int *)(lVar18 + 8 + lVar22);
          *(uint *)(lVar18 + 8 + lVar22) = iVar29 + 1U;
          if (*(uint *)(lVar18 + 0xc + lVar22) < iVar29 + 1U) {
            FUN_140061b74(local_1e8,iVar29);
          }
          lVar18 = *local_1e8;
          *(longlong *)(lVar18 + (longlong)iVar29 * 0x10) = local_1b8;
          *(longlong *)(lVar18 + 8 + (longlong)iVar29 * 0x10) = lVar27;
        }
      }
      uVar17 = uVar17 + 1;
      lVar22 = lVar22 + 0x10;
      lVar25 = lVar25 + 0x20;
    } while (uVar13 != uVar17);
  }
  plVar30 = (longlong *)(longlong)*(int *)(param_2 + 0x58);
  if (0 < (longlong)plVar30) {
    plVar28 = (longlong *)0x0;
    do {
      dVar9 = local_148;
      dVar34 = local_168;
      dVar5 = dStack_170;
      dVar37 = local_178;
      lVar25 = *(longlong *)(*(longlong *)(param_2 + 0x50) + (longlong)plVar28 * 8);
      lVar22 = *(longlong *)(lVar25 + 0xb60);
      plVar26 = *(longlong **)(lVar22 + 0x28);
      dVar35 = *(double *)(lVar25 + 0x6c8) - local_168;
      dVar36 = *(double *)(lVar25 + 0x6c0) - dStack_170;
      dVar33 = *(double *)(lVar25 + 0x6b8) - local_178;
      fVar40 = (float)(dVar35 * (double)plVar26[0x12] +
                      dVar33 * (double)plVar26[10] + (double)plVar26[0xe] * dVar36);
      dVar6 = (double)fVar40;
      dVar7 = dVar35 - (double)plVar26[0x12] * dVar6;
      dVar41 = dVar36 - (double)plVar26[0xe] * dVar6;
      dVar6 = dVar33 - (double)plVar26[10] * dVar6;
      dVar39 = *(double *)(lVar25 + 0x6d0) + local_148;
      fVar38 = (float)(dVar39 * dVar39);
      if ((((float)(dVar7 * dVar7 + dVar6 * dVar6 + dVar41 * dVar41) < fVar38) &&
          ((0.0 <= fVar40 || (dVar35 * dVar35 + dVar33 * dVar33 + dVar36 * dVar36 <= (double)fVar38)
           ))) && (cVar10 = FUN_144b22be2(lVar25 + 0x700,&local_178,&local_160),
                  fVar38 = DAT_14c760a58, cVar10 != '\0')) {
        lVar27 = *(longlong *)(lVar25 + 0x38);
        dVar34 = dVar34 - *(double *)(lVar27 + 0x1cd8);
        dVar5 = dVar5 - *(double *)(lVar27 + 0x1cd0);
        dVar37 = dVar37 - *(double *)(lVar27 + 0x1cc8);
        fVar40 = *(float *)(lVar27 + 0x23c8);
        iVar29 = *(int *)(lVar25 + 0x30);
        bVar14 = 1;
        if (iVar29 == 2) {
          lVar27 = *(longlong *)(param_2 + 8);
          if (*(int *)(lVar27 + 0x4bc0) != *(int *)(lVar27 + 0x4bec)) {
            lVar18 = lVar27 + 0x4bf0;
            if (*(longlong *)(lVar27 + 0x4bf8) != 0) {
              lVar18 = *(longlong *)(lVar27 + 0x4bf8);
            }
            iVar29 = *(int *)(lVar18 + (ulonglong)
                                       (*(int *)(lVar27 + 0x4c00) - 1U & *(uint *)(lVar22 + 0x34)) *
                                       4);
            if (iVar29 != -1) {
              do {
                lVar18 = *(longlong *)(lVar27 + 0x4bb8) + (longlong)iVar29 * 0x20;
                if (*(uint *)(*(longlong *)(lVar27 + 0x4bb8) + (longlong)iVar29 * 0x20) ==
                    *(uint *)(lVar22 + 0x34)) goto LAB_147312039;
                iVar29 = *(int *)(lVar18 + 0x18);
              } while (iVar29 != -1);
            }
          }
          lVar18 = 0;
LAB_147312039:
          if ((*(char *)(local_1f0 + 0x68) != '\x02') && ((*(byte *)(local_1f0 + 0x6f) & 0x10) != 0)
             ) {
            lVar18 = (longlong)*(int *)(lVar25 + 0x944) * 0x430 + *(longlong *)(lVar18 + 8);
            uVar13 = *(uint *)(local_1b8 + 0x15c);
            lVar27 = *(longlong *)(lVar18 + 0x3f0);
            if (lVar27 == 0) {
              lVar27 = lVar18 + 0x3e0;
            }
            uVar15 = uVar13 + 0x1f;
            if (-1 < (int)uVar13) {
              uVar15 = uVar13;
            }
            if ((*(uint *)(lVar27 + (longlong)((int)uVar15 >> 5) * 4) >> (uVar13 & 0x1f) & 1) != 0)
            {
              if (*(int *)(lVar25 + 0xb10) < 1) {
                bVar14 = 0;
              }
              else {
                local_1c0 = lVar25 + 0xa80;
                local_1e8 = (longlong *)&DAT_00000001;
                lVar27 = 0;
                bVar14 = 0;
                do {
                  lVar18 = *(longlong *)(lVar25 + 0xb00);
                  if (*(longlong *)(lVar25 + 0xb00) == 0) {
                    lVar18 = local_1c0;
                  }
                  local_208 = (undefined4 *)CONCAT71(local_208._1_7_,bVar14);
                  local_198 = local_150;
                  local_1a8 = (undefined4 *)(local_168 + local_150);
                  local_108 = dStack_170 + local_158;
                  local_110 = local_178 + local_160;
                  local_118 = local_168 - local_150;
                  uStack_120 = dStack_170 - local_158;
                  local_128 = local_178 - local_160;
                  local_f8 = 1;
                  local_100 = local_1a8;
                  iVar29 = FUN_140eb46d2(lVar18 + lVar27,&local_128);
                  bVar14 = iVar29 < 1 | (byte)local_208;
                  if ((longlong)*(int *)(lVar25 + 0xb10) <= (longlong)local_1e8) break;
                  local_1e8 = (longlong *)((longlong)local_1e8 + 1);
                  lVar27 = lVar27 + 0x20;
                } while (iVar29 >= 1 && ((ulonglong)local_208 & 1) == 0);
              }
            }
          }
        }
        else if (iVar29 == 1) {
          bVar32 = true;
          if (*(char *)(local_1f0 + 0x68) != '\x02') {
            bVar32 = (*(byte *)(local_1f0 + 0x6f) & 0x10) == 0;
          }
          bVar14 = bVar32 ^ 1;
        }
        else if ((iVar29 == 0) && (bVar14 = 1, *(char *)(local_1f0 + 0x68) != '\x02')) {
          bVar14 = (*(byte *)(local_1f0 + 0x6f) & 0x10) == 0;
        }
        if (((((double)(fVar38 * fVar38 * (float)(dVar34 * dVar34 + dVar37 * dVar37 + dVar5 * dVar5)
                       * fVar40 * fVar40) <= dVar9 * dVar9) && ((bVar14 & 1) != 0)) &&
            (cVar10 = FUN_144754b1e(lVar25 + 0xb70,&local_178,local_1f0), cVar10 != '\0')) &&
           (((*(byte *)(plVar26 + 0x3a) & 4) == 0 ||
            (((((*(byte *)(lVar22 + 0xe4) & 1) == 0 || (DAT_14c760480 <= *(int *)(lVar22 + 0xf8)))
              && ((*(byte *)(*(longlong *)(lVar22 + 0x28) + 0x1d0) & 8) != 0)) ||
             (cVar10 = (**(code **)(*plVar26 + 0xb0))(plVar26), cVar10 != '\0')))))) {
          cVar10 = FUN_144adbdbb(*(undefined2 *)(param_2 + 0x34));
          if (cVar10 == '\0') {
            uVar13 = *(uint *)(local_1b8 + 0x18);
            lVar27 = local_1f0;
            if (uVar13 != 0) {
              lVar27 = *(longlong *)(local_1b8 + 0x148);
              if (*(int *)(lVar27 + 0x4e40) != *(int *)(lVar27 + 0x4e6c)) {
                lVar18 = lVar27 + 0x4e70;
                if (*(longlong *)(lVar27 + 0x4e78) != 0) {
                  lVar18 = *(longlong *)(lVar27 + 0x4e78);
                }
                uVar15 = *(uint *)(lVar18 + (ulonglong)(*(int *)(lVar27 + 0x4e80) - 1U & uVar13) * 4
                                  );
                if (uVar15 != 0xffffffff) {
                  do {
                    puVar19 = (uint *)(*(longlong *)(lVar27 + 0x4e38) + (longlong)(int)uVar15 * 0x28
                                      );
                    if (*puVar19 == uVar13) goto LAB_1473122a2;
                    uVar15 = puVar19[8];
                  } while (uVar15 != 0xffffffff);
                }
              }
              puVar19 = (uint *)0x0;
LAB_1473122a2:
              if (*(longlong *)(puVar19 + 2) == 0) goto LAB_147311272;
              lVar27 = *(longlong *)(*(longlong *)(puVar19 + 2) + 8);
            }
            if ((*(byte *)(lVar27 + 0x73) & 1) != 0) goto LAB_147311179;
          }
LAB_147311272:
          if (*(char *)(lVar22 + 0xfc) == '\x01') {
            if (((*(byte *)(lVar22 + 0xe4) & 1) == 0) || (DAT_14c760480 <= *(int *)(lVar22 + 0xf8)))
            {
              lVar22 = *(longlong *)(lVar22 + 0x28);
              if ((*(byte *)(lVar22 + 0x1d0) & 8) != 0) goto LAB_14731127f;
            }
            else {
              lVar22 = *(longlong *)(lVar22 + 0x28);
            }
            if ((*(int *)(lVar22 + 0x18c) != -1) && ((*(byte *)(local_1f0 + 0x6d) & 0x40) == 0))
            goto LAB_147311179;
          }
LAB_14731127f:
          if (((*(char *)(param_2 + 0x36) != '\x01') || ((*(byte *)(local_1f0 + 0x6d) & 0x40) != 0))
             && (((cVar10 = (**(code **)(*plVar26 + 0xb0))(plVar26), cVar10 == '\0' ||
                  ((*(byte *)(local_1f0 + 0x6d) & 0x40) == 0)) ||
                 (*(char *)(param_2 + 0x3d) == '\x01')))) {
            plVar26 = (longlong *)((longlong)plVar28 * 0x20 + *(longlong *)(local_1a0 + 0x30));
            piVar24 = (int *)((longlong)plVar28 * 0x18 + *(longlong *)(local_1a0 + 0x10));
            local_138 = 0;
            local_1e8 = plVar30;
            if ((*(int *)(param_2 + 0x30) < 3) &&
               (cVar10 = FUN_1471dbc68(*(undefined8 *)(lVar25 + 0xb60)), cVar10 != '\0')) {
              local_138 = CONCAT44(local_138._4_4_,0x600);
              piVar24[5] = piVar24[5] + 1;
LAB_1473116a6:
              uVar17 = local_138;
              plVar30 = local_1e8;
              if (local_138 != 0) {
                plVar30 = (longlong *)(*(longlong *)(local_1a0 + 0x50) + (longlong)plVar28 * 0x10);
                iVar29 = *(int *)(*(longlong *)(local_1a0 + 0x50) + 8 + (longlong)plVar28 * 0x10);
                if (iVar29 == 0) {
                  if (*(int *)((longlong)plVar30 + 0xc) < 0x10) {
                    FUN_1400617b8(plVar30);
                    iVar29 = (int)plVar30[1];
                  }
                  else {
                    iVar29 = 0;
                  }
                }
                *(uint *)(plVar30 + 1) = iVar29 + 1U;
                if (*(uint *)((longlong)plVar30 + 0xc) < iVar29 + 1U) {
                  FUN_140061b74(plVar30,iVar29);
                }
                lVar25 = *plVar30;
                *(longlong *)(lVar25 + (longlong)iVar29 * 0x10) = local_1b8;
                *(ulonglong *)(lVar25 + 8 + (longlong)iVar29 * 0x10) = uVar17;
                plVar30 = local_1e8;
              }
            }
            else {
              puVar3 = (undefined8 *)*param_3;
              plVar30 = local_1e8;
              if ((longlong)*(int *)(lVar25 + 0xbd0) != 0) {
                lVar22 = 0;
                do {
                  if (*(undefined8 **)(*(longlong *)(lVar25 + 0xbc8) + lVar22) == puVar3)
                  goto LAB_147311179;
                  lVar22 = lVar22 + 8;
                } while ((longlong)*(int *)(lVar25 + 0xbd0) * 8 != lVar22);
              }
              if (((*(char *)(lVar25 + 0x940) == '\0') &&
                  (((DAT_14c760a9c == 0 || ((~*(uint *)(lVar25 + 0x990) & 0xc0) != 0)) ||
                   (((*(uint *)(lVar25 + 0x990) & 0x10) == 0 ||
                    (((*(int *)(lVar25 + 0x944) < 0 || (*(float *)(lVar25 + 0x10d4) <= 0.0)) ||
                     (lVar22 = *(longlong *)(lVar25 + 0x38),
                     (float)(((double)param_3[4] - *(double *)(lVar22 + 0x1cd8)) *
                             *(double *)(lVar22 + 0xa00) +
                            ((double)param_3[2] - *(double *)(lVar22 + 0x1cc8)) *
                            *(double *)(lVar22 + 0x9c0) +
                            ((double)param_3[3] - *(double *)(lVar22 + 0x1cd0)) *
                            *(double *)(lVar22 + 0x9e0)) - *(float *)((longlong)param_3 + 0x34) <=
                     *(float *)(lVar25 + 0x10d4))))))))) ||
                 ((*(byte *)(param_3[1] + 0x73) & 4) != 0)) {
                if (((char)*(uint *)(lVar25 + 0x990) < '\0') &&
                   ((*(uint *)(lVar25 + 0x990) & 0x10) != 0)) {
                  local_208 = (undefined4 *)0x0;
                  if (-1 < *(int *)(lVar25 + 0x944)) {
                    local_208 = *(undefined4 **)(lVar25 + 0x38);
                  }
                }
                else {
                  local_208 = (undefined4 *)0x0;
                }
                local_139 = '\0';
                uVar13 = *(uint *)(puVar3 + 0x2b);
                local_1a8 = (undefined4 *)
                            ((longlong)*(double *)(local_208 + 0xc76) + (longlong)(int)uVar13 * 0x18
                            );
                dVar35 = *(double *)(local_208 + 0xc76);
                if ((*(byte *)((longlong)local_1a8 + 0x12) & 0x20) == 0) {
                  if (*(double *)(local_208 + 0x22a) <= 1.0 && *(double *)(local_208 + 0x22a) != 1.0
                     ) {
                    dVar34 = (double)param_3[4] - *(double *)(local_208 + 0x736);
                    dVar37 = (double)param_3[3] - *(double *)(local_208 + 0x734);
                    dVar35 = (double)param_3[2] - *(double *)(local_208 + 0x732);
                    dVar35 = dVar34 * dVar34 + dVar35 * dVar35 + dVar37 * dVar37;
                    local_238 = &local_128;
                    local_240 = &local_139;
                    local_248 = puVar3;
                    cVar10 = FUN_144b16ca8(local_208,
                                           CONCAT44((int)((ulonglong)dVar35 >> 0x20),(float)dVar35),
                                           (int)param_3[7],*(undefined4 *)((longlong)param_3 + 0x3c)
                                          );
                    plVar30 = local_1e8;
                    if (cVar10 != '\0') goto LAB_147311179;
                    if (local_139 == '\x01') {
                      local_138 = CONCAT44(local_138._4_4_,(uint)(byte)local_128 << 8) | 0x80;
                    }
                  }
                  plVar30 = local_1e8;
                  if (((-1 < (int)uVar13) &&
                      (lVar22 = *(longlong *)(local_208 + 0xc42), lVar22 != 0)) &&
                     ((int)uVar13 < *(int *)(lVar22 + 0x5f8))) {
                    lVar27 = lVar22 + 0x5e0;
                    if (*(longlong *)(lVar22 + 0x5f0) != 0) {
                      lVar27 = *(longlong *)(lVar22 + 0x5f0);
                    }
                    if ((*(uint *)(lVar27 + (ulonglong)(uVar13 >> 5) * 4) >> (uVar13 & 0x1f) & 1) !=
                        0) goto LAB_147311179;
                  }
                  plVar4 = (longlong *)param_3[1];
                  uVar13 = *(uint *)(plVar4 + 0x41);
                  if (local_208[0x7bd] != -1) {
                    if (local_208[0x7bc] != local_208[0x7c7]) {
                      puVar20 = local_208 + 0x7c8;
                      if (*(undefined4 **)(local_208 + 0x7ca) != (undefined4 *)0x0) {
                        puVar20 = *(undefined4 **)(local_208 + 0x7ca);
                      }
                      iVar29 = puVar20[local_208[0x7cc] - 1 & uVar13];
                      if (iVar29 != -1) {
                        do {
                          if (*(uint *)(*(longlong *)(local_208 + 0x7ba) + (longlong)iVar29 * 0xc)
                              == uVar13) goto LAB_1473115f3;
                          iVar29 = *(int *)(*(longlong *)(local_208 + 0x7ba) +
                                            (longlong)iVar29 * 0xc + 4);
                        } while (iVar29 != -1);
                      }
                    }
                    goto LAB_147311179;
                  }
LAB_1473115f3:
                  if (local_208[0x7a8] != local_208[0x7b3]) {
                    puVar20 = local_208 + 0x7b4;
                    if (*(undefined4 **)(local_208 + 0x7b6) != (undefined4 *)0x0) {
                      puVar20 = *(undefined4 **)(local_208 + 0x7b6);
                    }
                    iVar29 = puVar20[local_208[0x7b8] - 1 & uVar13];
                    if (iVar29 != -1) {
                      do {
                        if (*(uint *)(*(longlong *)(local_208 + 0x7a6) + (longlong)iVar29 * 0xc) ==
                            uVar13) goto LAB_147311179;
                        iVar29 = *(int *)(*(longlong *)(local_208 + 0x7a6) + (longlong)iVar29 * 0xc
                                         + 4);
                      } while (iVar29 != -1);
                    }
                  }
                  (**(code **)(*plVar4 + 200))(plVar4,&local_128,local_208);
                  *(double *)(local_1a8 + 4) = local_118;
                  *local_1a8 = (undefined4)local_128;
                  local_1a8[1] = local_128._4_4_;
                  local_1a8[2] = (undefined4)uStack_120;
                  local_1a8[3] = uStack_120._4_4_;
                  dVar35 = local_118;
                }
                bVar14 = *(byte *)(local_1a8 + 1);
                if (((*(byte *)((longlong)local_1a8 + 5) & 2) == 0) &&
                   (bVar14 < 0x40 && (*(byte *)((longlong)local_1a8 + 5) & 1) == 0)) {
                  local_1c0 = CONCAT44(local_1c0._4_4_,
                                       (int)CONCAT71((int7)((ulonglong)dVar35 >> 8),
                                                     (*(byte *)(local_1a8 + 2) & 1) == 0));
                }
                else {
                  local_1c0 = (ulonglong)local_1c0._4_4_ << 0x20;
                }
                bVar32 = true;
                if (*(char *)((longlong)local_1a8 + 6) < '\0') {
                  bVar32 = (*(byte *)(puVar3[1] + 0x74) & 0x20) == 0;
                }
                local_198 = (double)CONCAT71(local_198._1_7_,bVar32);
                bVar11 = (byte)local_1a8[4] >> 3;
                if ((*(byte *)((longlong)param_3 + 0x44) & 0x40) != 0) {
                  bVar11 = bVar11 & (char)(*(char *)(lVar25 + 0x990) << 3) >> 7;
                }
                plVar30 = local_1e8;
                if ((bVar11 & 1) != 0) {
                  local_20c = local_1a8[4];
                  FUN_1400612d4(puVar3,(float)*(double *)(*(longlong *)(local_208 + 2) + 0x90));
                  puVar20 = local_208;
                  if ((bVar14 & 6) != 0) {
                    local_1c8 = piVar24;
                    if (*(int *)(puVar3 + 9) < 1) {
                      bVar32 = false;
                      uVar13 = local_20c;
                      goto LAB_147311c0f;
                    }
                    uVar15 = *(uint *)(lVar25 + 0x990);
                    if (((char)uVar15 < '\0') &&
                       (plVar30 = local_1e8,
                       *(float *)((longlong)param_3 + 0x34) * *(float *)((longlong)param_3 + 0x34)
                       <= DAT_14c760a58 * DAT_14c760a58 *
                          (float)(((double)param_3[4] - *(double *)(local_208 + 0x736)) *
                                  ((double)param_3[4] - *(double *)(local_208 + 0x736)) +
                                 ((double)param_3[2] - *(double *)(local_208 + 0x732)) *
                                 ((double)param_3[2] - *(double *)(local_208 + 0x732)) +
                                 ((double)param_3[3] - *(double *)(local_208 + 0x734)) *
                                 ((double)param_3[3] - *(double *)(local_208 + 0x734))) *
                          (float)local_208[0x8f2] * (float)local_208[0x8f2])) goto LAB_147311179;
                    if ((local_20c & 1) == 0) {
LAB_147311e31:
                      bVar32 = false;
                      puVar20 = local_208;
                      uVar13 = local_20c;
                    }
                    else {
                      local_1d8 = CONCAT44(local_1d8._4_4_,2);
                      if ((uVar15 & 0x10) == 0) {
                        local_1d8 = CONCAT44(local_1d8._4_4_,((uVar15 & 0x20) >> 3) + 4);
                      }
                      fVar38 = DAT_14c760a10;
                      if (*(char *)(lVar25 + 0x940) != '\x01') {
                        fVar38 = (float)*(int *)(lVar25 + 0x944) * _DAT_14ca4e5b8 + _DAT_14c760a0c;
                      }
                      local_1d0 = CONCAT71(local_1d0._1_7_,local_139);
                      lVar22 = *param_3;
                      uVar12 = *(undefined4 *)((longlong)param_3 + 0x34);
                      dVar35 = (double)param_3[2];
                      dVar34 = (double)param_3[3];
                      dVar37 = (double)param_3[4];
                      iVar29 = *(int *)(lVar22 + 0x158);
                      local_1f8 = lVar22;
                      local_1b0 = plVar26;
                      if (((fVar38 != 1.0) || (NAN(fVar38))) ||
                         (uVar2 = *(ushort *)
                                   (*(longlong *)(local_208 + 0xc92) + (longlong)iVar29 * 2),
                         uVar23 = (uint)uVar2, uVar13 = uVar15, (uVar2 & 0x4000) == 0)) {
                        local_12c = 0;
                        (**(code **)(**(longlong **)(lVar22 + 8) + 0x200))
                                  (*(longlong **)(lVar22 + 8),&local_12e,local_208);
                        if (local_12d == '\x01') {
                          uVar23 = (uint)local_12e << 7 | local_12e & 0x7f | 0x4000;
                        }
                        else {
                          local_220 = (float)puVar20[0x8f2] * fVar38 * DAT_14cb0cc18;
                          local_110 = 1.0;
                          local_228 = local_12e;
                          local_230 = &local_12c;
                          local_240 = (char *)CONCAT44(local_240._4_4_,
                                                       *(undefined4 *)(lVar22 + 0x154));
                          local_248 = (undefined8 *)CONCAT44(local_248._4_4_,uVar12);
                          local_238 = (undefined8 *)CONCAT44(local_238._4_4_,0xffffffff);
                          local_128 = dVar35;
                          uStack_120 = dVar34;
                          local_118 = dVar37;
                          FUN_1448b970e(&local_130,lVar22 + 0x30,puVar20,&local_128);
                          uVar23 = (uint)local_130;
                        }
                        if ((fVar38 == 1.0) && (!NAN(fVar38))) {
                          *(short *)(*(longlong *)(local_208 + 0xc92) + (longlong)iVar29 * 2) =
                               (short)uVar23;
                        }
                        uVar13 = *(uint *)(lVar25 + 0x990);
                      }
                      if ((((uVar13 >> 0xb & 1) != 0) && (DAT_14ca5be4c != 0)) &&
                         (0 < (longlong)*(int *)(local_1f8 + 0x38))) {
                        bVar14 = 0x81;
                        lVar22 = 0;
                        do {
                          bVar11 = *(byte *)(*(longlong *)(local_1f8 + 0x30) + 0x14 + lVar22);
                          bVar11 = -((bVar11 & 0x10) != 0) | bVar11 & 0xf;
                          if ((char)bVar11 < (char)bVar14) {
                            bVar11 = bVar14;
                          }
                          bVar14 = bVar11;
                          lVar22 = lVar22 + 0x18;
                        } while ((longlong)*(int *)(local_1f8 + 0x38) * 0x18 != lVar22);
                        uVar23 = (uint)(bVar14 & 0x7f) + (uint)(bVar14 & 0x7f) * 0x80 + 0x4000;
                      }
                      if ((*(char *)(lVar25 + 0x940) == '\x01') &&
                         ((uVar23 < 0xc000 || (((uVar23 >> 7 ^ uVar23) & 0x7f) == 0)))) {
                        uVar13 = (uVar23 & 0x7f) + _DAT_14cad1fd8;
                        lVar22 = (ulonglong)*(uint *)(local_1f8 + 0x38) * 0x18 + -4;
                        iVar29 = *(uint *)(local_1f8 + 0x38) + 1;
                        do {
                          iVar29 = iVar29 + -1;
                          if (iVar29 < 1) goto LAB_147311986;
                          bVar14 = *(byte *)(*(longlong *)(local_1f8 + 0x30) + lVar22);
                          lVar22 = lVar22 + -0x18;
                        } while ((byte)uVar13 != (byte)(-((bVar14 & 0x10) != 0) | bVar14 & 0xf));
                        uVar23 = (uVar13 & 0x7f) * 0x81 + 0x4000;
                      }
LAB_147311986:
                      bVar32 = ((uVar23 >> 7 ^ uVar23) & 0x7f) != 0;
                      local_1dc = uVar23 & 0x7f;
                      local_1e0 = uVar23 >> 7 & 0x7f;
                      uVar13 = local_1e0 << 0x13;
                      uVar8 = local_1dc << 0xc;
                      if (!bVar32 || 0xbfff >= uVar23) {
                        uVar13 = 0;
                        uVar8 = 0;
                      }
                      local_138 = CONCAT44(local_138._4_4_,
                                           uVar8 | (uint)local_138 & 0xfc0007ff |
                                                   (uint)(bVar32 && 0xbfff < uVar23) << 0xb | uVar13
                                          );
                      puVar20 = local_208;
                      uVar13 = local_20c;
                      local_1fc = uVar23;
                      if (((char)local_1d0 == '\0') &&
                         (((local_1d8 & 2) != 0 || (uVar15 >> 6 & 1) != 0 ||
                          ((7 < (uint)local_1d8 && (DAT_14c760a14 == '\x01')))))) {
                        uVar17 = 0;
                        if (*(int *)(local_1f8 + 0x38) < 1) goto LAB_147311e31;
                        lVar27 = 0;
                        uVar31 = 0;
                        bVar32 = false;
                        lVar22 = local_1f8;
                        do {
                          lVar18 = *(longlong *)(lVar22 + 0x30);
                          bVar14 = *(byte *)(lVar18 + 0x15 + lVar27);
                          if ((((bVar14 & 1) != 0) ||
                              (((bVar14 & 4) != 0 && ((*(uint *)(lVar25 + 0x990) & 0x1000) != 0))))
                             && ((uVar23 >> 0xe & 1) != 0)) {
                            bVar14 = *(byte *)(lVar18 + 0x14 + lVar27);
                            bVar14 = -((bVar14 & 0x10) != 0) | bVar14 & 0xf;
                            if ((short)uVar23 < 0) {
                              if (((short)local_1dc <= (char)bVar14) &&
                                 ((char)bVar14 <= (short)local_1e0)) goto LAB_147311a9b;
                            }
                            else if (((short)local_1dc == (char)bVar14) ||
                                    ((short)local_1e0 == (char)bVar14)) {
LAB_147311a9b:
                              cVar10 = *(char *)(lVar18 + 0x16 + lVar27);
                              bVar32 = true;
                              if ((*(byte *)(lVar25 + 0x994) & 1U - (cVar10 >> 7)) != 0) {
                                local_1d8 = CONCAT71(local_1d8._1_7_,cVar10);
                                uVar13 = *(uint *)(lVar25 + 0x990);
                                lVar16 = 7;
                                if (((uVar13 & 0x10) == 0) && (lVar16 = 9, (uVar13 & 0x20) == 0)) {
                                  lVar16 = 7;
                                }
                                if ((uVar13 & 0x40) != 0) {
                                  lVar16 = 8;
                                }
                                local_18c = *(int *)(*(longlong *)(lVar22 + 0x148) + 8);
                                local_1d0 = uVar17;
                                cVar10 = FUN_144b165f9();
                                if (((cVar10 == '\0') || ((local_1d8 & 0x20) == 0)) ||
                                   (((&DAT_14ca11d50)[(ulonglong)(2 < local_18c) * 0x3a + lVar16] &
                                    1) == 0)) {
                                  local_1c8[1] = local_1c8[1] + 1;
                                  uVar17 = (ulonglong)((int)local_1d0 + 1);
                                  FUN_14006184a(&local_138,local_1d0,uVar31 & 0xffffffff,local_1b0);
                                  bVar32 = true;
                                  puVar20 = local_208;
                                  lVar22 = local_1f8;
                                  uVar13 = local_20c;
                                  uVar23 = local_1fc;
                                }
                                else {
                                  iVar29 = FUN_144b18bc4(lVar18 + lVar27,lVar16);
                                  if (iVar29 < 0) {
                                    bVar32 = true;
                                    uVar17 = local_1d0;
                                    puVar20 = local_208;
                                    lVar22 = local_1f8;
                                    uVar13 = local_20c;
                                    uVar23 = local_1fc;
                                  }
                                  else {
                                    *local_1c8 = *local_1c8 + 1;
                                    iVar21 = (int)local_1d0;
                                    if (iVar21 < 2) {
                                      *(short *)((longlong)&local_138 + (longlong)iVar21 * 2 + 4) =
                                           (short)iVar29 + 1;
                                      uVar12 = (uint)local_138;
                                      if ((local_138 & 2) != 0) {
                                        local_138 = (ulonglong)
                                                    (local_138._4_4_ << 0x10 |
                                                    local_138._4_4_ >> 0x10) << 0x20;
                                      }
                                    }
                                    else {
                                      if (iVar21 == 2) {
                                        FUN_1400618bc(&local_138,local_1b0);
                                      }
                                      plVar30 = local_1b0;
                                      uVar17 = (ulonglong)(int)local_1b0[1];
                                      uVar13 = (int)local_1b0[1] + 1;
                                      *(uint *)(local_1b0 + 1) = uVar13;
                                      if (*(uint *)((longlong)local_1b0 + 0xc) < uVar13) {
                                        local_1d8 = uVar17;
                                        FUN_14488eebe(local_1b0,uVar17);
                                        uVar17 = local_1d8;
                                      }
                                      *(short *)(*plVar30 + uVar17 * 2) = (short)iVar29;
                                      sVar1 = local_138._4_2_ + 1;
                                      local_138._0_6_ = CONCAT24(sVar1,(uint)local_138);
                                      iVar21 = (int)local_1d0;
                                      uVar12 = (uint)local_138;
                                    }
                                    bVar32 = true;
                                    local_138 = CONCAT44(local_138._4_4_,uVar12) | 1;
                                    uVar17 = (ulonglong)(iVar21 + 1);
                                    puVar20 = local_208;
                                    lVar22 = local_1f8;
                                    uVar13 = local_20c;
                                    uVar23 = local_1fc;
                                  }
                                }
                              }
                            }
                          }
                          uVar31 = uVar31 + 1;
                          lVar27 = lVar27 + 0x18;
                        } while ((longlong)uVar31 < (longlong)*(int *)(lVar22 + 0x38));
                      }
                      else {
                        iVar29 = *(int *)(local_1f8 + 0x38);
                        iVar21 = 0;
                        bVar32 = false;
                        if (0 < iVar29) {
                          lVar22 = 0x16;
                          uVar17 = 0;
                          bVar32 = false;
                          do {
                            lVar27 = *(longlong *)(local_1f8 + 0x30);
                            bVar14 = *(byte *)(lVar27 + -1 + lVar22);
                            if ((bVar14 & 1) == 0) {
                              if (((bVar14 & 4) != 0) &&
                                 (uVar13 = uVar23 & 0x4000,
                                 (*(uint *)(lVar25 + 0x990) & 0x1000) != 0))
                              goto joined_r0x000147312609;
                            }
                            else {
                              uVar13 = local_1fc >> 0xe & 1;
joined_r0x000147312609:
                              if (uVar13 != 0) {
                                bVar14 = *(byte *)(lVar27 + -2 + lVar22);
                                bVar14 = -((bVar14 & 0x10) != 0) | bVar14 & 0xf;
                                if ((short)local_1fc < 0) {
                                  if (((short)local_1dc <= (char)bVar14) &&
                                     ((char)bVar14 <= (short)local_1e0)) goto LAB_147312673;
                                }
                                else if (((short)local_1dc == (char)bVar14) ||
                                        ((short)local_1e0 == (char)bVar14)) {
LAB_147312673:
                                  bVar32 = true;
                                  if ((*(byte *)(lVar25 + 0x994) &
                                      1U - (*(char *)(lVar27 + lVar22) >> 7)) != 0) {
                                    local_1c8[1] = local_1c8[1] + 1;
                                    local_1d0 = CONCAT44(local_1d0._4_4_,iVar21 + 1);
                                    FUN_14006184a(&local_138,iVar21,uVar17 & 0xffffffff,local_1b0);
                                    iVar29 = *(int *)(local_1f8 + 0x38);
                                    iVar21 = (int)local_1d0;
                                  }
                                }
                              }
                            }
                            uVar17 = uVar17 + 1;
                            lVar22 = lVar22 + 0x18;
                            puVar20 = local_208;
                            uVar13 = local_20c;
                          } while ((longlong)uVar17 < (longlong)iVar29);
                        }
                      }
                    }
LAB_147311c0f:
                    bVar14 = *(byte *)((longlong)param_3 + 0x44);
                    bVar11 = (bVar14 & 0x20) == 0 | 2;
                    if (((*(char *)(puVar20 + 0xc3a) == '\x01') &&
                        ((*(byte *)((longlong)local_1a8 + 0x12) & 0x10) != 0)) &&
                       ((*(byte *)(lVar25 + 0x990) & 0x10) != 0)) {
                      if ((((char)bVar14 < '\0') && ((*(byte *)(lVar25 + 0x998) & 1) != 0)) ||
                         (((bVar14 & 0x40) != 0 && ((*(byte *)(lVar25 + 0x998) & 2) != 0)))) {
                        bVar11 = 1;
                      }
                      else if (0x3f < bVar14) {
                        bVar11 = 0;
                      }
                    }
                    piVar24 = local_1c8;
                    if ((!bVar32 && (uVar13 & 2) != 0) &&
                       ((*(byte *)(lVar25 + 0x994) & bVar11) != 0)) {
                      local_138 = local_138 | 8;
                      local_1c8[2] = local_1c8[2] + 1;
                    }
                  }
                  uVar13 = *(uint *)(lVar25 + 0x990);
                  if ((char)local_1c0 == '\0' && (uVar13 >> 8 & 1) != 0) {
                    local_138 = local_138 | 0x10;
                    piVar24[3] = piVar24[3] + 1;
                    uVar13 = *(uint *)(lVar25 + 0x990);
                  }
                  bVar14 = local_198._0_1_ | (uVar13 >> 0x13 & 1) == 0;
                  local_198 = (double)CONCAT71(local_198._1_7_,bVar14);
                  if (bVar14 == 0) {
                    local_138 = local_138 | 0x20;
                    piVar24[4] = piVar24[4] + 1;
                  }
                  goto LAB_1473116a6;
                }
              }
            }
          }
        }
      }
LAB_147311179:
      plVar28 = (longlong *)((longlong)plVar28 + 1);
    } while (plVar28 != plVar30);
  }
  if ((local_f0 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14731284a FUN_14731284a body=132 status=ok
// SIG undefined FUN_14731284a(void)

void FUN_14731284a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473128d0 FUN_1473128d0 body=132 status=ok
// SIG undefined FUN_1473128d0(void)

void FUN_1473128d0(longlong param_1,int param_2)

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



// FUNCTION 147312956 FUN_147312956 body=14 status=ok
// SIG undefined FUN_147312956(void)

void FUN_147312956(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  *(int *)(param_1 + 0xc) = param_2;
  FUN_14307ec8c();
  return;
}



// FUNCTION 147312964 FUN_147312964 body=85 status=ok
// SIG undefined FUN_147312964(void)

void FUN_147312964(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_14307ec8c();
  return;
}



// FUNCTION 1473129ba FUN_1473129ba body=75 status=ok
// SIG undefined FUN_1473129ba(void)

longlong FUN_1473129ba(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 != param_2) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar1 = param_1;
    }
    FUN_1447350ca(lVar1,*(undefined4 *)(param_1 + 0x28));
    lVar1 = *(longlong *)(param_2 + 0x20);
    if (*(longlong *)(param_2 + 0x20) == 0) {
      lVar1 = param_2;
    }
    FUN_147312a06(param_1,lVar1,*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  }
  return param_1;
}



// FUNCTION 147312a06 FUN_147312a06 body=86 status=ok
// SIG undefined FUN_147312a06(void)

void FUN_147312a06(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x28) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 4;
    return;
  }
  FUN_147312a5c(param_1,param_3,param_4);
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar1 = param_1;
  }
  FUN_140179ab5(lVar1,param_2,param_3);
  return;
}



// FUNCTION 147312a5c FUN_147312a5c body=99 status=ok
// SIG undefined FUN_147312a5c(void)

void FUN_147312a5c(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 4;
    if (4 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_14002d2d4(param_1,0,iVar3,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x2c) = param_3;
  return;
}



// FUNCTION 147312ac0 FUN_147312ac0 body=105 status=ok
// SIG undefined FUN_147312ac0(void)

ulonglong FUN_147312ac0(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar5 = (ulonglong)iVar1;
  if (uVar5 != 0) {
    lVar4 = uVar5 * 4;
    uVar3 = 0;
    do {
      if (*(int *)(lVar2 + uVar3 * 4) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar5 = uVar3 & 0xffffffff;
          goto LAB_147312ae9;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + -4;
    } while (lVar4 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147312b2a(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(int *)(lVar2 + uVar5 * 4) = *param_2;
LAB_147312ae9:
  return uVar5 & 0xffffffff;
}



// FUNCTION 147312b2a FUN_147312b2a body=132 status=ok
// SIG undefined FUN_147312b2a(void)

void FUN_147312b2a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147312bb0 FUN_147312bb0 body=138 status=ok
// SIG undefined FUN_147312bb0(void)

code * FUN_147312bb0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ContactShadowNonCastingIntensity";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x680000006f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f5ae2e;
}



// FUNCTION 147312c3a FUN_147312c3a body=138 status=ok
// SIG undefined FUN_147312c3a(void)

code * FUN_147312c3a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ContactShadowLength";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5c0000006c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f5af42;
}



// FUNCTION 147312cc4 FUN_147312cc4 body=138 status=ok
// SIG undefined FUN_147312cc4(void)

code * FUN_147312cc4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"StencilTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000006a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14630a0ee;
}



// FUNCTION 147312d4e FUN_147312d4e body=132 status=ok
// SIG undefined FUN_147312d4e(void)

undefined1 * FUN_147312d4e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWShadowFactors";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x67;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147312dd2;
}



// FUNCTION 147312dd6 FUN_147312dd6 body=138 status=ok
// SIG undefined FUN_147312dd6(void)

code * FUN_147312dd6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LightCoordinate";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa00000009a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147312e60;
}



// FUNCTION 147312e60 FUN_147312e60 body=138 status=ok
// SIG undefined FUN_147312e60(void)

code * FUN_147312e60(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InvDepthTextureSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9800000099;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147312eea;
}



// FUNCTION 147312eea FUN_147312eea body=138 status=ok
// SIG undefined FUN_147312eea(void)

code * FUN_147312eea(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DownsampleFactor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000098;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14630a296;
}



// FUNCTION 147312f74 FUN_147312f74 body=138 status=ok
// SIG undefined FUN_147312f74(void)

code * FUN_147312f74(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SurfaceThickness";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7400000096;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147312ffe;
}



// FUNCTION 147312ffe FUN_147312ffe body=138 status=ok
// SIG undefined FUN_147312ffe(void)

code * FUN_147312ffe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ContactShadowIntensityFadeOneOverLength";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000095;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147313088;
}



// FUNCTION 147313088 FUN_147313088 body=138 status=ok
// SIG undefined FUN_147313088(void)

code * FUN_147313088(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ContactShadowIntensityFadeStart";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6c00000094;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145eb103e;
}



// FUNCTION 147313112 FUN_147313112 body=138 status=ok
// SIG undefined FUN_147313112(void)

code * FUN_147313112(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ContactShadowCastingIntensity";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6400000092;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14731319c;
}



// FUNCTION 14731319c FUN_14731319c body=138 status=ok
// SIG undefined FUN_14731319c(void)

code * FUN_14731319c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bContactShadowLengthInWS";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000091;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147313226;
}



// FUNCTION 147313226 FUN_147313226 body=138 status=ok
// SIG undefined FUN_147313226(void)

code * FUN_147313226(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ContactShadowLength";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5c00000090;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1473132b0;
}



// FUNCTION 1473132b0 FUN_1473132b0 body=138 status=ok
// SIG undefined FUN_1473132b0(void)

code * FUN_1473132b0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LightDirection";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000008f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145eb10c8;
}



// FUNCTION 14731333a FUN_14731333a body=138 status=ok
// SIG undefined FUN_14731333a(void)

code * FUN_14731333a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PointBorderSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x380000008d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1473133c4;
}



// FUNCTION 1473133c4 FUN_1473133c4 body=138 status=ok
// SIG undefined FUN_1473133c4(void)

code * FUN_1473133c4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"StencilTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000008c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14630a31e;
}



// FUNCTION 14731344e FUN_14731344e body=132 status=ok
// SIG undefined FUN_14731344e(void)

undefined1 * FUN_14731344e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutputTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145eb103a;
}



// FUNCTION 1473134d2 FUN_1473134d2 body=138 status=ok
// SIG undefined FUN_1473134d2(void)

code * FUN_1473134d2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScissorRectMinAndSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000000be;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14731355c;
}



// FUNCTION 14731355c FUN_14731355c body=138 status=ok
// SIG undefined FUN_14731355c(void)

code * FUN_14731355c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowFactorsSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x38000000bd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f6db98;
}



// FUNCTION 1473135ea FUN_1473135ea body=75 status=ok
// SIG undefined FUN_1473135ea(void)

void FUN_1473135ea(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x24) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x18),
              (longlong)*(int *)((longlong)param_1 + 0x20) << 2);
      FUN_1446efa72((longlong)param_1 + 0x18,0,0,4);
      return;
    }
  }
  return;
}



// FUNCTION 147313636 FUN_147313636 body=94 status=ok
// SIG undefined FUN_147313636(void)

void FUN_147313636(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar2 = FUN_144a3809e((ulonglong)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x4c)) {
    *(int *)(param_1 + 0x4c) = iVar3;
    FUN_147313694(param_1,*(undefined4 *)(param_1 + 0x48));
    return;
  }
  return;
}



// FUNCTION 147313694 FUN_147313694 body=132 status=ok
// SIG undefined FUN_147313694(void)

void FUN_147313694(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,8);
  return;
}



// FUNCTION 147313718 FUN_147313718 body=110 status=ok
// SIG undefined FUN_147313718(void)

void FUN_147313718(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_147313694(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147313788 FUN_147313788 body=38 status=ok
// SIG undefined FUN_147313788(void)

undefined8 FUN_147313788(undefined8 param_1,int param_2)

{
  FUN_146309f96();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473137b4 FUN_1473137b4 body=91 status=ok
// SIG undefined FUN_1473137b4(void)

void FUN_1473137b4(longlong *param_1,uint param_2)

{
  int *piVar1;
  void *_Dst;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  
  lVar2 = *param_1;
  puVar3 = *(undefined8 **)(lVar2 + (longlong)(int)param_2 * 8);
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
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



// FUNCTION 147313810 FUN_147313810 body=62 status=ok
// SIG undefined FUN_147313810(void)

void FUN_147313810(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14731384e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 14731384e FUN_14731384e body=93 status=ok
// SIG undefined FUN_14731384e(void)

ulonglong FUN_14731384e(uint param_1,uint param_2)

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



// FUNCTION 1473138ac FUN_1473138ac body=93 status=ok
// SIG undefined FUN_1473138ac(void)

void FUN_1473138ac(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_142cd2ce4();
  return;
}



// FUNCTION 14731390a FUN_14731390a body=430 status=ok
// SIG undefined FUN_14731390a(void)

void FUN_14731390a(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  if (param_2 != 0) {
    iVar4 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar9 = iVar4;
joined_r0x00014731392d:
    do {
      iVar7 = iVar4 * 2 + 1;
      if (iVar7 < (int)param_2) {
        iVar8 = iVar4 * 2 + 2;
        if ((iVar8 < (int)param_2) &&
           ((uint)(*(int *)(param_1[iVar8] + 0x95c) * *(int *)(param_1[iVar8] + 0x958)) <=
            (uint)(*(int *)(param_1[iVar7] + 0x95c) * *(int *)(param_1[iVar7] + 0x958)))) {
          iVar7 = iVar8;
        }
        lVar1 = param_1[iVar7];
        lVar2 = param_1[iVar4];
        if ((uint)(*(int *)(lVar1 + 0x95c) * *(int *)(lVar1 + 0x958)) <
            (uint)(*(int *)(lVar2 + 0x95c) * *(int *)(lVar2 + 0x958))) {
          param_1[iVar4] = lVar1;
          param_1[iVar7] = lVar2;
          iVar4 = iVar7;
          goto joined_r0x00014731392d;
        }
      }
      bVar10 = iVar9 != 0;
      iVar4 = iVar9 + -1;
      iVar9 = iVar4;
    } while (bVar10);
    if (1 < (int)param_2) {
      uVar5 = (ulonglong)param_2;
      uVar3 = *param_1;
      *param_1 = param_1[uVar5 - 1];
      param_1[uVar5 - 1] = uVar3;
      if (param_2 != 2) {
        do {
          uVar6 = uVar5 - 1;
          iVar4 = 0;
          iVar7 = 1;
          iVar9 = 0;
          do {
            iVar4 = iVar4 + 2;
            iVar8 = iVar7;
            if (((longlong)iVar4 < (longlong)uVar6) &&
               ((uint)(*(int *)(param_1[iVar4] + 0x95c) * *(int *)(param_1[iVar4] + 0x958)) <=
                (uint)(*(int *)(param_1[iVar7] + 0x95c) * *(int *)(param_1[iVar7] + 0x958)))) {
              iVar8 = iVar4;
            }
            lVar1 = param_1[iVar8];
            lVar2 = param_1[iVar9];
            if ((uint)(*(int *)(lVar2 + 0x95c) * *(int *)(lVar2 + 0x958)) <=
                (uint)(*(int *)(lVar1 + 0x95c) * *(int *)(lVar1 + 0x958))) break;
            param_1[iVar9] = lVar1;
            param_1[iVar8] = lVar2;
            iVar4 = iVar8 * 2;
            iVar7 = iVar8 * 2 + 1;
            iVar9 = iVar8;
          } while ((longlong)iVar7 < (longlong)uVar6);
          uVar3 = *param_1;
          *param_1 = param_1[uVar5 - 2];
          param_1[uVar5 - 2] = uVar3;
          uVar5 = uVar6;
        } while (2 < uVar6);
      }
    }
  }
  return;
}



// FUNCTION 147313ab8 FUN_147313ab8 body=132 status=ok
// SIG undefined FUN_147313ab8(void)

void FUN_147313ab8(longlong param_1,int param_2)

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



// FUNCTION 147313b3e FUN_147313b3e body=124 status=ok
// SIG undefined FUN_147313b3e(void)

void FUN_147313b3e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x14) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 2,0);
      iVar3 = (int)(uVar4 >> 2);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x14) = iVar6;
    FUN_147313bbc(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147313bbc FUN_147313bbc body=132 status=ok
// SIG undefined FUN_147313bbc(void)

void FUN_147313bbc(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,4);
  return;
}



// FUNCTION 147313c40 FUN_147313c40 body=112 status=ok
// SIG undefined FUN_147313c40(void)

void FUN_147313c40(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x3f0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 0x3d0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x3d0) + 0x38))();
  }
  FUN_14002d124(param_1 + 0x3a0);
  if (*(longlong *)(param_1 + 800) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x200) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 147313cb0 FUN_147313cb0 body=622 status=ok
// SIG undefined FUN_147313cb0(void)

void * FUN_147313cb0(void *param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  memcpy(param_1,param_2,0x120);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x128);
  *(undefined8 *)((longlong)param_1 + 0x120) = *(undefined8 *)((longlong)param_2 + 0x120);
  *(undefined8 *)((longlong)param_1 + 0x128) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x130) = *(undefined8 *)((longlong)param_2 + 0x130);
  *(undefined8 *)((longlong)param_1 + 0x200) = 0;
  lVar4 = *(longlong *)((longlong)param_2 + 0x200);
  if (lVar4 == 0) {
    memmove((void *)((longlong)param_1 + 0x140),(void *)((longlong)param_2 + 0x140),0xc0);
    lVar4 = *(longlong *)((longlong)param_2 + 0x200);
  }
  *(longlong *)((longlong)param_1 + 0x200) = lVar4;
  *(undefined8 *)((longlong)param_2 + 0x200) = 0;
  *(undefined4 *)((longlong)param_1 + 0x210) = *(undefined4 *)((longlong)param_2 + 0x210);
  *(undefined4 *)((longlong)param_1 + 0x214) = *(undefined4 *)((longlong)param_2 + 0x214);
  *(undefined8 *)((longlong)param_2 + 0x210) = 0x600000000;
  *(undefined8 *)((longlong)param_1 + 800) = 0;
  lVar4 = *(longlong *)((longlong)param_2 + 800);
  if (lVar4 == 0) {
    memmove((void *)((longlong)param_1 + 0x220),(void *)((longlong)param_2 + 0x220),0x100);
    lVar4 = *(longlong *)((longlong)param_2 + 800);
  }
  *(longlong *)((longlong)param_1 + 800) = lVar4;
  *(undefined8 *)((longlong)param_2 + 800) = 0;
  *(undefined4 *)((longlong)param_1 + 0x330) = *(undefined4 *)((longlong)param_2 + 0x330);
  *(undefined4 *)((longlong)param_1 + 0x334) = *(undefined4 *)((longlong)param_2 + 0x334);
  *(undefined8 *)((longlong)param_2 + 0x330) = 0x800000000;
  puVar5 = (undefined8 *)((longlong)param_2 + 0x340);
  puVar6 = (undefined8 *)((longlong)param_1 + 0x340);
  for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)((longlong)param_1 + 0x390) = *(undefined2 *)((longlong)param_2 + 0x390);
  *(undefined8 *)((longlong)param_1 + 0x3c0) = 0;
  lVar4 = *(longlong *)((longlong)param_2 + 0x3c0);
  if (lVar4 == 0) {
    uVar1 = *(undefined8 *)((longlong)param_2 + 0x3a0);
    uVar2 = *(undefined8 *)((longlong)param_2 + 0x3a8);
    uVar3 = *(undefined8 *)((longlong)param_2 + 0x3b8);
    *(undefined8 *)((longlong)param_1 + 0x3b0) = *(undefined8 *)((longlong)param_2 + 0x3b0);
    *(undefined8 *)((longlong)param_1 + 0x3b8) = uVar3;
    *(undefined8 *)((longlong)param_1 + 0x3a0) = uVar1;
    *(undefined8 *)((longlong)param_1 + 0x3a8) = uVar2;
    lVar4 = *(longlong *)((longlong)param_2 + 0x3c0);
  }
  *(longlong *)((longlong)param_1 + 0x3c0) = lVar4;
  *(undefined8 *)((longlong)param_2 + 0x3c0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c8) = *(undefined4 *)((longlong)param_2 + 0x3c8);
  *(undefined4 *)((longlong)param_1 + 0x3cc) = *(undefined4 *)((longlong)param_2 + 0x3cc);
  *(undefined8 *)((longlong)param_2 + 0x3c8) = 0x400000000;
  *(undefined8 *)((longlong)param_1 + 0x3d0) = *(undefined8 *)((longlong)param_2 + 0x3d0);
  *(undefined8 *)((longlong)param_2 + 0x3d0) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3dc) = *(undefined2 *)((longlong)param_2 + 0x3dc);
  *(undefined4 *)((longlong)param_1 + 0x3d8) = *(undefined4 *)((longlong)param_2 + 0x3d8);
  *(undefined8 *)((longlong)param_1 + 0x3f0) = 0;
  lVar4 = *(longlong *)((longlong)param_2 + 0x3f0);
  if (lVar4 == 0) {
    uVar1 = *(undefined8 *)((longlong)param_2 + 1000);
    *(undefined8 *)((longlong)param_1 + 0x3e0) = *(undefined8 *)((longlong)param_2 + 0x3e0);
    *(undefined8 *)((longlong)param_1 + 1000) = uVar1;
    lVar4 = *(longlong *)((longlong)param_2 + 0x3f0);
  }
  *(longlong *)((longlong)param_1 + 0x3f0) = lVar4;
  *(undefined8 *)((longlong)param_2 + 0x3f0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3f8) = *(undefined4 *)((longlong)param_2 + 0x3f8);
  *(undefined4 *)((longlong)param_1 + 0x3fc) = *(undefined4 *)((longlong)param_2 + 0x3fc);
  *(undefined8 *)((longlong)param_2 + 0x3f8) = 0;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x424);
  *(undefined8 *)((longlong)param_1 + 0x41c) = *(undefined8 *)((longlong)param_2 + 0x41c);
  *(undefined8 *)((longlong)param_1 + 0x424) = uVar1;
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x400);
  uVar2 = *(undefined8 *)((longlong)param_2 + 0x408);
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x418);
  *(undefined8 *)((longlong)param_1 + 0x410) = *(undefined8 *)((longlong)param_2 + 0x410);
  *(undefined8 *)((longlong)param_1 + 0x418) = uVar3;
  *(undefined8 *)((longlong)param_1 + 0x400) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x408) = uVar2;
  return param_1;
}



// FUNCTION 147313f1e FUN_147313f1e body=103 status=ok
// SIG undefined FUN_147313f1e(void)

void FUN_147313f1e(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar2 = FUN_144a3809e((ulonglong)param_2 << 9,0);
      iVar1 = (int)(uVar2 >> 9);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x1014)) {
    *(int *)(param_1 + 0x1014) = iVar3;
    FUN_147313f86(param_1,*(undefined4 *)(param_1 + 0x1010));
    return;
  }
  return;
}



// FUNCTION 147313f86 FUN_147313f86 body=141 status=ok
// SIG undefined FUN_147313f86(void)

void FUN_147313f86(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x1000);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 9);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x1000,0,param_3,0x200);
    memmove(*(void **)((longlong)param_1 + 0x1000),param_1,(longlong)param_2 << 9);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x1000,param_2,param_3,0x200);
  return;
}



// FUNCTION 147314014 FUN_147314014 body=119 status=ok
// SIG undefined FUN_147314014(void)

void FUN_147314014(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x1010);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x1014)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 9,0);
      iVar2 = (int)(uVar3 >> 9);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x1014) = iVar5;
    FUN_147313f86(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14731408c FUN_14731408c body=98 status=ok
// SIG undefined FUN_14731408c(void)

void FUN_14731408c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  uVar2 = 1;
  if (1 < uVar1) {
    if (*(uint *)(param_1 + 0x14) < 2) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
    }
    else {
      uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar2 = 0x7fffffff;
    if ((int)uVar1 <= (int)uVar3) {
      uVar2 = uVar3;
    }
  }
  *(uint *)(param_1 + 0x14) = uVar2;
  FUN_140158592();
  return;
}



// FUNCTION 1473140f0 FUN_1473140f0 body=38 status=ok
// SIG undefined FUN_1473140f0(void)

undefined8 FUN_1473140f0(undefined8 param_1,int param_2)

{
  FUN_144afd1ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14731413a FUN_14731413a body=31 status=ok
// SIG undefined FUN_14731413a(void)

undefined8 FUN_14731413a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147314162 FUN_147314162 body=90 status=ok
// SIG undefined FUN_147314162(void)

void FUN_147314162(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x94) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x94) = 0;
    if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x80),
              (longlong)*(int *)((longlong)param_1 + 0x90) << 5);
      FUN_1446efa72((longlong)param_1 + 0x80,0,0,0x20);
      return;
    }
  }
  return;
}



// FUNCTION 1473141bc FUN_1473141bc body=116 status=ok
// SIG undefined FUN_1473141bc(void)

void FUN_1473141bc(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    uVar4 = 4;
    if (4 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x2c) = (int)uVar4;
    FUN_14002d2d4(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147314231 FUN_147314231 body=1284 status=ok
// SIG undefined FUN_147314231(void)

void FUN_147314231(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  
  if (param_2 != 0) {
    iVar5 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar12 = iVar5;
    do {
      while (iVar8 = iVar5 * 2 + 1, iVar8 < (int)param_2) {
        iVar11 = iVar5 * 2 + 2;
        if (iVar11 < (int)param_2) {
          lVar14 = (longlong)iVar11;
          lVar13 = param_1[lVar14];
          uVar1 = *(uint *)(lVar13 + 0x990);
          if (((char)uVar1 < '\0') && (-1 < *(int *)(lVar13 + 0x944))) {
            cVar9 = (char)((uVar1 & 0x10) >> 4);
          }
          else {
            cVar9 = '\0';
          }
          lVar3 = param_1[iVar8];
          uVar2 = *(uint *)(lVar3 + 0x990);
          if (((char)uVar2 < '\0') && (-1 < *(int *)(lVar3 + 0x944))) {
            cVar10 = (char)((uVar2 & 0x10) >> 4);
          }
          else {
            cVar10 = '\0';
          }
          if (cVar9 != '\0') {
            if (cVar10 != '\0') {
              uVar16 = uVar1 >> 9 & 1;
              uVar15 = uVar2 >> 9 & 1;
              if (uVar16 != uVar15) {
                if ((uVar16 == 0) && (uVar15 != 0)) goto LAB_147314320;
                if (((uVar1 >> 9 & 1) != 0) && ((uVar2 & 0x200) == 0)) goto LAB_147314323;
              }
              if (*(int *)(lVar13 + 0x944) <= *(int *)(lVar3 + 0x944)) goto LAB_147314323;
            }
            goto LAB_147314320;
          }
          if ((cVar10 == '\0') &&
             ((uint)(*(int *)(lVar3 + 0x95c) * *(int *)(lVar3 + 0x958)) <
              (uint)(*(int *)(lVar13 + 0x95c) * *(int *)(lVar13 + 0x958)))) goto LAB_147314320;
        }
        else {
LAB_147314320:
          lVar14 = (longlong)iVar8;
          iVar11 = iVar8;
        }
LAB_147314323:
        lVar13 = param_1[lVar14];
        lVar3 = param_1[iVar5];
        uVar1 = *(uint *)(lVar3 + 0x990);
        if (((char)uVar1 < '\0') && (-1 < *(int *)(lVar3 + 0x944))) {
          cVar9 = (char)((uVar1 & 0x10) >> 4);
        }
        else {
          cVar9 = '\0';
        }
        uVar2 = *(uint *)(lVar13 + 0x990);
        if (((char)uVar2 < '\0') && (-1 < *(int *)(lVar13 + 0x944))) {
          cVar10 = (char)((uVar2 & 0x10) >> 4);
        }
        else {
          cVar10 = '\0';
        }
        if (cVar9 == '\0') {
          if ((cVar10 != '\0') ||
             ((uint)(*(int *)(lVar3 + 0x95c) * *(int *)(lVar3 + 0x958)) <=
              (uint)(*(int *)(lVar13 + 0x95c) * *(int *)(lVar13 + 0x958)))) break;
        }
        else if (cVar10 != '\0') {
          uVar15 = uVar1 >> 9 & 1;
          uVar16 = uVar2 >> 9 & 1;
          if (uVar15 != uVar16) {
            if ((uVar15 == 0) && (uVar16 != 0)) goto LAB_1473143e1;
            if (((uVar1 >> 9 & 1) != 0) && ((uVar2 & 0x200) == 0)) break;
          }
          if (*(int *)(lVar3 + 0x944) <= *(int *)(lVar13 + 0x944)) break;
        }
LAB_1473143e1:
        param_1[iVar5] = lVar13;
        param_1[lVar14] = lVar3;
        iVar5 = iVar11;
      }
      bVar17 = iVar12 != 0;
      iVar5 = iVar12 + -1;
      iVar12 = iVar5;
    } while (bVar17);
    if (1 < (int)param_2) {
      uVar6 = (ulonglong)param_2;
      uVar4 = *param_1;
      *param_1 = param_1[uVar6 - 1];
      param_1[uVar6 - 1] = uVar4;
      if (param_2 != 2) {
        do {
          uVar7 = uVar6 - 1;
          iVar12 = 0;
          iVar5 = 1;
          iVar8 = 0;
          do {
            iVar11 = iVar12 + 2;
            lVar13 = (longlong)iVar11;
            if (lVar13 < (longlong)uVar7) {
              lVar14 = param_1[lVar13];
              uVar1 = *(uint *)(lVar14 + 0x990);
              if (((char)uVar1 < '\0') && (-1 < *(int *)(lVar14 + 0x944))) {
                cVar9 = (char)((uVar1 & 0x10) >> 4);
              }
              else {
                cVar9 = '\0';
              }
              lVar3 = param_1[iVar5];
              uVar2 = *(uint *)(lVar3 + 0x990);
              if (((char)uVar2 < '\0') && (-1 < *(int *)(lVar3 + 0x944))) {
                cVar10 = (char)((uVar2 & 0x10) >> 4);
              }
              else {
                cVar10 = '\0';
              }
              if (cVar9 != '\0') {
                if (cVar10 != '\0') {
                  uVar15 = uVar1 >> 9 & 1;
                  uVar16 = uVar2 >> 9 & 1;
                  if (uVar15 != uVar16) {
                    if ((uVar15 == 0) && (uVar16 != 0)) goto LAB_14731458d;
                    if (((uVar1 >> 9 & 1) != 0) && ((uVar2 & 0x200) == 0)) goto LAB_147314590;
                  }
                  if (*(int *)(lVar14 + 0x944) <= *(int *)(lVar3 + 0x944)) goto LAB_147314590;
                }
                goto LAB_14731458d;
              }
              if ((cVar10 == '\0') &&
                 ((uint)(*(int *)(lVar3 + 0x95c) * *(int *)(lVar3 + 0x958)) <
                  (uint)(*(int *)(lVar14 + 0x95c) * *(int *)(lVar14 + 0x958)))) goto LAB_14731458d;
            }
            else {
LAB_14731458d:
              lVar13 = (longlong)iVar5;
              iVar11 = iVar5;
            }
LAB_147314590:
            lVar14 = param_1[lVar13];
            lVar3 = param_1[iVar8];
            uVar1 = *(uint *)(lVar3 + 0x990);
            if (((char)uVar1 < '\0') && (-1 < *(int *)(lVar3 + 0x944))) {
              cVar9 = (char)((uVar1 & 0x10) >> 4);
            }
            else {
              cVar9 = '\0';
            }
            uVar2 = *(uint *)(lVar14 + 0x990);
            if (((char)uVar2 < '\0') && (-1 < *(int *)(lVar14 + 0x944))) {
              cVar10 = (char)((uVar2 & 0x10) >> 4);
            }
            else {
              cVar10 = '\0';
            }
            if (cVar9 == '\0') {
              if ((cVar10 != '\0') ||
                 ((uint)(*(int *)(lVar3 + 0x95c) * *(int *)(lVar3 + 0x958)) <=
                  (uint)(*(int *)(lVar14 + 0x95c) * *(int *)(lVar14 + 0x958)))) break;
            }
            else if (cVar10 != '\0') {
              uVar15 = uVar1 >> 9 & 1;
              uVar16 = uVar2 >> 9 & 1;
              if (uVar15 != uVar16) {
                if ((uVar15 == 0) && (uVar16 != 0)) goto LAB_14731464c;
                if (((uVar1 >> 9 & 1) != 0) && ((uVar2 & 0x200) == 0)) break;
              }
              if (*(int *)(lVar3 + 0x944) <= *(int *)(lVar14 + 0x944)) break;
            }
LAB_14731464c:
            param_1[iVar8] = lVar14;
            param_1[lVar13] = lVar3;
            iVar12 = iVar11 * 2;
            iVar5 = iVar11 * 2 + 1;
            iVar8 = iVar11;
          } while ((longlong)iVar5 < (longlong)uVar7);
          uVar4 = *param_1;
          *param_1 = param_1[uVar6 - 2];
          param_1[uVar6 - 2] = uVar4;
          uVar6 = uVar7;
        } while (2 < uVar7);
      }
    }
  }
  return;
}



// FUNCTION 147314735 FUN_147314735 body=430 status=ok
// SIG undefined FUN_147314735(void)

void FUN_147314735(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  if (param_2 != 0) {
    iVar4 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar9 = iVar4;
joined_r0x000147314758:
    do {
      iVar7 = iVar4 * 2 + 1;
      if (iVar7 < (int)param_2) {
        iVar8 = iVar4 * 2 + 2;
        if ((iVar8 < (int)param_2) &&
           ((uint)(*(int *)(param_1[iVar8] + 0x95c) * *(int *)(param_1[iVar8] + 0x958)) <=
            (uint)(*(int *)(param_1[iVar7] + 0x95c) * *(int *)(param_1[iVar7] + 0x958)))) {
          iVar7 = iVar8;
        }
        lVar1 = param_1[iVar7];
        lVar2 = param_1[iVar4];
        if ((uint)(*(int *)(lVar1 + 0x95c) * *(int *)(lVar1 + 0x958)) <
            (uint)(*(int *)(lVar2 + 0x95c) * *(int *)(lVar2 + 0x958))) {
          param_1[iVar4] = lVar1;
          param_1[iVar7] = lVar2;
          iVar4 = iVar7;
          goto joined_r0x000147314758;
        }
      }
      bVar10 = iVar9 != 0;
      iVar4 = iVar9 + -1;
      iVar9 = iVar4;
    } while (bVar10);
    if (1 < (int)param_2) {
      uVar5 = (ulonglong)param_2;
      uVar3 = *param_1;
      *param_1 = param_1[uVar5 - 1];
      param_1[uVar5 - 1] = uVar3;
      if (param_2 != 2) {
        do {
          uVar6 = uVar5 - 1;
          iVar4 = 0;
          iVar7 = 1;
          iVar9 = 0;
          do {
            iVar4 = iVar4 + 2;
            iVar8 = iVar7;
            if (((longlong)iVar4 < (longlong)uVar6) &&
               ((uint)(*(int *)(param_1[iVar4] + 0x95c) * *(int *)(param_1[iVar4] + 0x958)) <=
                (uint)(*(int *)(param_1[iVar7] + 0x95c) * *(int *)(param_1[iVar7] + 0x958)))) {
              iVar8 = iVar4;
            }
            lVar1 = param_1[iVar8];
            lVar2 = param_1[iVar9];
            if ((uint)(*(int *)(lVar2 + 0x95c) * *(int *)(lVar2 + 0x958)) <=
                (uint)(*(int *)(lVar1 + 0x95c) * *(int *)(lVar1 + 0x958))) break;
            param_1[iVar9] = lVar1;
            param_1[iVar8] = lVar2;
            iVar4 = iVar8 * 2;
            iVar7 = iVar8 * 2 + 1;
            iVar9 = iVar8;
          } while ((longlong)iVar7 < (longlong)uVar6);
          uVar3 = *param_1;
          *param_1 = param_1[uVar5 - 2];
          param_1[uVar5 - 2] = uVar3;
          uVar5 = uVar6;
        } while (2 < uVar6);
      }
    }
  }
  return;
}



// FUNCTION 1473148e4 FUN_1473148e4 body=137 status=ok
// SIG undefined FUN_1473148e4(void)

void FUN_1473148e4(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined1 (*) [16])(param_1 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  lVar1 = 0x72;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + -2) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x132);
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  *(undefined1 (*) [16])(param_1 + 0x24) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2a] = 0;
  return;
}



// FUNCTION 14731496e FUN_14731496e body=29 status=ok
// SIG undefined FUN_14731496e(void)

undefined8 FUN_14731496e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14731498c FUN_14731498c body=258 status=ok
// SIG undefined FUN_14731498c(void)

void FUN_14731498c(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5be48) {
    FUN_144b3d300(&DAT_14ca5be48);
    if (DAT_14ca5be48 == -1) {
      FUN_147314a90(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FScreenSpaceShadowsUpsample";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0xd4;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5bdc8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430868a5);
      _Init_thread_footer(&DAT_14ca5be48);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147314a90 FUN_147314a90 body=226 status=ok
// SIG undefined FUN_147314a90(void)

longlong * FUN_147314a90(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_147314b74;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147314b74 FUN_147314b74 body=136 status=ok
// SIG undefined FUN_147314b74(void)

code * FUN_147314b74(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RenderTargets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000000d6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147314bfc;
}



// FUNCTION 147314bfc FUN_147314bfc body=138 status=ok
// SIG undefined FUN_147314bfc(void)

undefined1 * FUN_147314bfc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145f6d9ae();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar3) = &DAT_14a1fbb1e;
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FScreenSpaceShadowsUpsamplePS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca5bc78;
  return &LAB_147314c86;
}



// FUNCTION 147314c8a FUN_147314c8a body=29 status=ok
// SIG undefined FUN_147314c8a(void)

undefined8 FUN_147314c8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147314ca8 FUN_147314ca8 body=384 status=ok
// SIG undefined FUN_147314ca8(void)

void FUN_147314ca8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
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
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14ca5bbb0;
  if (DAT_14ca5bbb0 != 0) {
    LOCK();
    *(int *)(DAT_14ca5bbb0 + 8) = *(int *)(DAT_14ca5bbb0 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca5bb68;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a309df0;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147314e2a FUN_147314e2a body=38 status=ok
// SIG undefined FUN_147314e2a(void)

undefined8 FUN_147314e2a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147314e50 FUN_147314e50 body=163 status=ok
// SIG undefined FUN_147314e50(void)

void FUN_147314e50(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_143086a94();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_143086b7c(param_1,param_2);
  return;
}



// FUNCTION 147314ef3 FUN_147314ef3 body=374 status=ok
// SIG undefined FUN_147314ef3(void)

void FUN_147314ef3(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14731506a FUN_14731506a body=29 status=ok
// SIG undefined FUN_14731506a(void)

undefined8 FUN_14731506a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147315088 FUN_147315088 body=384 status=ok
// SIG undefined FUN_147315088(void)

void FUN_147315088(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
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
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14ca5bc38;
  if (DAT_14ca5bc38 != 0) {
    LOCK();
    *(int *)(DAT_14ca5bc38 + 8) = *(int *)(DAT_14ca5bc38 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca5bbf0;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a309e10;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14731520a FUN_14731520a body=38 status=ok
// SIG undefined FUN_14731520a(void)

undefined8 FUN_14731520a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147315230 FUN_147315230 body=163 status=ok
// SIG undefined FUN_147315230(void)

void FUN_147315230(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_143086db0();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_143086e98(param_1,param_2);
  return;
}



// FUNCTION 1473152d3 FUN_1473152d3 body=374 status=ok
// SIG undefined FUN_1473152d3(void)

void FUN_1473152d3(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14731544c FUN_14731544c body=85 status=ok
// SIG undefined FUN_14731544c(void)

void FUN_14731544c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_140520e32();
  return;
}



// FUNCTION 1473154a2 FUN_1473154a2 body=93 status=ok
// SIG undefined FUN_1473154a2(void)

void FUN_1473154a2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_142e699fa();
  return;
}



// FUNCTION 147315500 FUN_147315500 body=42 status=ok
// SIG undefined FUN_147315500(void)

void FUN_147315500(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14731554a FUN_14731554a body=96 status=ok
// SIG undefined FUN_14731554a(void)

undefined8 FUN_14731554a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14155ef06();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca5e7d0,1);
  return uVar3;
}



// FUNCTION 1473155aa FUN_1473155aa body=52 status=ok
// SIG undefined FUN_1473155aa(void)

void FUN_1473155aa(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1473155de FUN_1473155de body=42 status=ok
// SIG undefined FUN_1473155de(void)

void FUN_1473155de(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147315610 FUN_147315610 body=96 status=ok
// SIG undefined FUN_147315610(void)

undefined8 FUN_147315610(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415980d8();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca5e968,1);
  return uVar3;
}



// FUNCTION 147315670 FUN_147315670 body=52 status=ok
// SIG undefined FUN_147315670(void)

void FUN_147315670(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1473156a4 FUN_1473156a4 body=42 status=ok
// SIG undefined FUN_1473156a4(void)

void FUN_1473156a4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1473156f6 FUN_1473156f6 body=96 status=ok
// SIG undefined FUN_1473156f6(void)

undefined8 FUN_1473156f6(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141592c72();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca5e9f0,1);
  return uVar3;
}



// FUNCTION 147315756 FUN_147315756 body=52 status=ok
// SIG undefined FUN_147315756(void)

void FUN_147315756(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14731578a FUN_14731578a body=42 status=ok
// SIG undefined FUN_14731578a(void)

void FUN_14731578a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1473157dc FUN_1473157dc body=96 status=ok
// SIG undefined FUN_1473157dc(void)

undefined8 FUN_1473157dc(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14155dacc();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca5ea78,1);
  return uVar3;
}



// FUNCTION 14731583c FUN_14731583c body=52 status=ok
// SIG undefined FUN_14731583c(void)

void FUN_14731583c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147315870 FUN_147315870 body=42 status=ok
// SIG undefined FUN_147315870(void)

void FUN_147315870(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1473158ba FUN_1473158ba body=96 status=ok
// SIG undefined FUN_1473158ba(void)

undefined8 FUN_1473158ba(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141571404();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca5eb00,1);
  return uVar3;
}



// FUNCTION 14731591a FUN_14731591a body=52 status=ok
// SIG undefined FUN_14731591a(void)

void FUN_14731591a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14731594e FUN_14731594e body=42 status=ok
// SIG undefined FUN_14731594e(void)

void FUN_14731594e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147315998 FUN_147315998 body=96 status=ok
// SIG undefined FUN_147315998(void)

undefined8 FUN_147315998(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141572c12();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca5eb88,1);
  return uVar3;
}



// FUNCTION 1473159f8 FUN_1473159f8 body=52 status=ok
// SIG undefined FUN_1473159f8(void)

void FUN_1473159f8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147315a32 FUN_147315a32 body=194 status=ok
// SIG undefined FUN_147315a32(void)

void FUN_147315a32(longlong param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar2 = *(longlong *)(param_3 + 0x10);
    puVar7 = *(uint **)(param_1 + 8);
    puVar5 = puVar7 + (longlong)*(int *)(param_1 + 0x10) * 8;
    do {
      if ((longlong)(int)param_2[1] != 0) {
        puVar4 = (uint *)(*param_2 + 0x14);
        do {
          if ((((*puVar7 == puVar4[-5]) && (puVar7[1] == puVar4[-4])) && (puVar7[2] == puVar4[-3]))
             && (puVar7[3] == puVar4[-2])) {
            uVar1 = puVar4[-1];
            if (uVar1 != 0) {
              *(ulonglong *)(param_3 + 0x10) = lVar2 + (ulonglong)*puVar4 * 8;
              *(uint *)(param_3 + 0x18) = uVar1;
              if ((puVar7[6] != 0) &&
                 (plVar3 = *(longlong **)(puVar7 + 4), plVar3 != (longlong *)0x0)) {
                (**(code **)(*plVar3 + 0x60))(plVar3,param_3);
              }
            }
            break;
          }
          puVar6 = puVar4 + 1;
          puVar4 = puVar4 + 6;
        } while (puVar6 != (uint *)(*param_2 + (longlong)(int)param_2[1] * 0x18));
      }
      puVar7 = puVar7 + 8;
    } while (puVar7 != puVar5);
  }
  return;
}



// FUNCTION 147315af4 FUN_147315af4 body=42 status=ok
// SIG undefined FUN_147315af4(void)

void FUN_147315af4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147315b3e FUN_147315b3e body=96 status=ok
// SIG undefined FUN_147315b3e(void)

undefined8 FUN_147315b3e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415a6432();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca5ec10,1);
  return uVar3;
}



// FUNCTION 147315b9e FUN_147315b9e body=52 status=ok
// SIG undefined FUN_147315b9e(void)

void FUN_147315b9e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147315bd2 FUN_147315bd2 body=42 status=ok
// SIG undefined FUN_147315bd2(void)

void FUN_147315bd2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147315c04 FUN_147315c04 body=96 status=ok
// SIG undefined FUN_147315c04(void)

undefined8 FUN_147315c04(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415982fe();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca5ec98,1);
  return uVar3;
}



// FUNCTION 147315c64 FUN_147315c64 body=52 status=ok
// SIG undefined FUN_147315c64(void)

void FUN_147315c64(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147315c98 FUN_147315c98 body=42 status=ok
// SIG undefined FUN_147315c98(void)

void FUN_147315c98(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147315cce FUN_147315cce body=96 status=ok
// SIG undefined FUN_147315cce(void)

undefined8 FUN_147315cce(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14157f782();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca5ed20,1);
  return uVar3;
}



// FUNCTION 147315d2e FUN_147315d2e body=52 status=ok
// SIG undefined FUN_147315d2e(void)

void FUN_147315d2e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147315d62 FUN_147315d62 body=42 status=ok
// SIG undefined FUN_147315d62(void)

void FUN_147315d62(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147315d98 FUN_147315d98 body=96 status=ok
// SIG undefined FUN_147315d98(void)

undefined8 FUN_147315d98(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14157a1d6();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca5eda8,1);
  return uVar3;
}



// FUNCTION 147315df8 FUN_147315df8 body=52 status=ok
// SIG undefined FUN_147315df8(void)

void FUN_147315df8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147315e2c FUN_147315e2c body=42 status=ok
// SIG undefined FUN_147315e2c(void)

void FUN_147315e2c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147315e62 FUN_147315e62 body=96 status=ok
// SIG undefined FUN_147315e62(void)

undefined8 FUN_147315e62(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14159f9ba();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca5ee30,1);
  return uVar3;
}



// FUNCTION 147315ec2 FUN_147315ec2 body=52 status=ok
// SIG undefined FUN_147315ec2(void)

void FUN_147315ec2(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147315ef6 FUN_147315ef6 body=42 status=ok
// SIG undefined FUN_147315ef6(void)

void FUN_147315ef6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147315f24 FUN_147315f24 body=96 status=ok
// SIG undefined FUN_147315f24(void)

undefined8 FUN_147315f24(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415a1c1e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca5eeb8,1);
  return uVar3;
}



// FUNCTION 147315f84 FUN_147315f84 body=52 status=ok
// SIG undefined FUN_147315f84(void)

void FUN_147315f84(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147315fb8 FUN_147315fb8 body=42 status=ok
// SIG undefined FUN_147315fb8(void)

void FUN_147315fb8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147315fe6 FUN_147315fe6 body=96 status=ok
// SIG undefined FUN_147315fe6(void)

undefined8 FUN_147315fe6(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415a1f28();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca5ef40,1);
  return uVar3;
}



// FUNCTION 147316046 FUN_147316046 body=52 status=ok
// SIG undefined FUN_147316046(void)

void FUN_147316046(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14731607a FUN_14731607a body=42 status=ok
// SIG undefined FUN_14731607a(void)

void FUN_14731607a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1473160b0 FUN_1473160b0 body=96 status=ok
// SIG undefined FUN_1473160b0(void)

undefined8 FUN_1473160b0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e96850();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca5efc8,1);
  return uVar3;
}



// FUNCTION 147316110 FUN_147316110 body=52 status=ok
// SIG undefined FUN_147316110(void)

void FUN_147316110(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147316144 FUN_147316144 body=42 status=ok
// SIG undefined FUN_147316144(void)

void FUN_147316144(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14731617a FUN_14731617a body=96 status=ok
// SIG undefined FUN_14731617a(void)

undefined8 FUN_14731617a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e4e1e6();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca5f050,1);
  return uVar3;
}



// FUNCTION 1473161da FUN_1473161da body=52 status=ok
// SIG undefined FUN_1473161da(void)

void FUN_1473161da(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14731620e thunk_FUN_1448284b2 body=5 status=ok
// SIG undefined thunk_FUN_1448284b2(void)

void thunk_FUN_1448284b2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_14010df0a();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cb60);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3ca68);
  if ((param_1 != 0) && (lVar3 = param_1, (*(byte *)(param_2 + 5) & 1) != 0)) {
    do {
      if ((*(uint *)(lVar3 + 8) & 0x30) != 0) {
        FUN_14013683c(param_1 + 0x410,param_1);
        break;
      }
      plVar1 = (longlong *)(lVar3 + 0x20);
      lVar3 = *plVar1;
    } while (*plVar1 != 0);
  }
  iVar2 = FUN_1448332aa(param_2,&DAT_149e3cb60);
  if ((iVar2 < 0x18) && ((*(byte *)(param_1 + 0x2dd) & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x2cf) = 1;
  }
  return;
}



// FUNCTION 147316214 FUN_147316214 body=2160 status=ok
// SIG undefined FUN_147316214(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_147316214(longlong param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
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
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar25;
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auStack_3a8 [32];
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  double local_328;
  double dStack_320;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  int local_284;
  int local_280;
  int local_27c;
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
  double local_178;
  double dStack_170;
  double local_168;
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
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  ulonglong local_d0;
  double dVar2;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  plVar18 = *(longlong **)(param_1 + 0x620);
  if (plVar18 == (longlong *)0x0) {
    local_2b0 = 64.0;
    local_2a8 = 64.0;
    local_2a0 = 64.0;
  }
  else {
    (**(code **)(*plVar18 + 0x2d0))(plVar18,&local_284);
    local_2a0 = (double)local_27c * 0.5;
    local_2a8 = (double)local_280 * 0.5;
    local_2b0 = (double)local_284 * 0.5;
  }
  local_2c8 = local_2b0;
  dStack_2c0 = local_2a8;
  local_2b8 = local_2a0;
  if ((*(byte *)(param_1 + 0x630) & 0x20) != 0) {
    local_2b8 = DAT_14c8464f0;
    local_2c8 = DAT_14c8464e0;
    dStack_2c0 = DAT_14c8464e8;
  }
  local_298 = SQRT(local_2a0 * local_2a0 + local_2b0 * local_2b0 + local_2a8 * local_2a8);
  plVar18 = *(longlong **)(param_1 + 0x648);
  if (plVar18 != (longlong *)0x0) {
    uVar15 = (**(code **)(*plVar18 + 0x2c8))(plVar18,&local_388);
    auVar33 = _DAT_149934d80;
    local_2f8 = 0.0;
    dStack_2f0 = 0.0;
    local_308 = ZEXT816(0);
    auVar22 = *(undefined1 (*) [16])(param_3 + 8);
    dVar4 = auVar22._0_8_;
    dVar8 = auVar22._8_8_;
    auVar3 = *(undefined1 (*) [16])(param_3 + 10);
    dVar5 = auVar3._0_8_;
    dVar6 = local_348._0_8_;
    dVar9 = local_348._8_8_;
    dVar7 = local_338._0_8_;
    auVar22 = minpd(local_348,auVar22);
    auVar26 = minpd(local_338,auVar3);
    auVar23._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
    auVar23._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
    iVar16 = movmskpd(uVar15,auVar23);
    auVar22._8_8_ = -(ulonglong)(auVar26._8_8_ < 0.0);
    auVar22._0_8_ = -(ulonglong)(auVar26._0_8_ < 0.0);
    uVar17 = movmskpd((int)plVar18,auVar22);
    if ((uVar17 & 0x3fffffff) == 0 && iVar16 == 0) {
      dVar11 = *param_3;
      dVar12 = param_3[1];
      dVar13 = param_3[2];
      dVar14 = param_3[3];
      dVar21 = param_3[3];
      dVar27 = param_3[3];
      dVar30 = param_3[1];
      dVar32 = param_3[1];
      dVar1 = param_3[2];
      dVar2 = param_3[2];
      local_328 = dStack_380 * dVar1 * -1.0 +
                  local_378 * dVar30 + dStack_370 * *param_3 * 1.0 + local_388 * dVar21;
      dStack_320 = local_388 * dVar2 * 1.0 +
                   dStack_370 * dVar32 + local_378 * *param_3 * -1.0 + dStack_380 * dVar27;
      local_368 = local_368 * dVar4;
      dStack_360 = dStack_360 * dVar8;
      local_358 = local_358 * dVar5;
      dStack_350 = dStack_350 * auVar3._8_8_;
      dVar25 = dStack_360 * dVar11 - dVar12 * local_368;
      dVar28 = local_358 * dVar12 - dVar13 * dStack_360;
      dVar29 = local_368 * dVar13 - dVar11 * local_358;
      dVar10 = dStack_350 * dVar14 - dVar14 * dStack_350;
      dVar28 = dVar28 + dVar28;
      dVar29 = dVar29 + dVar29;
      dVar25 = dVar25 + dVar25;
      dVar10 = dVar10 + dVar10;
      dVar31 = (dVar28 * dVar13 - dVar25 * dVar11) + dVar27 * dVar29 + dStack_360 + param_3[5];
      local_2f8 = (dVar29 * dVar11 - dVar12 * dVar28) + dVar21 * dVar25 + local_358 + param_3[6];
      dStack_2f0 = (dVar10 * dVar14 - dVar10 * dVar14) + dVar27 * dVar10 + dStack_350 + param_3[7];
      local_318._8_8_ =
           local_378 * dVar2 * -1.0 +
           ((*param_3 * local_388 * -1.0 + dStack_370 * dVar27) - dStack_380 * dVar32);
      local_318._0_8_ =
           dStack_370 * dVar1 * 1.0 +
           ((*param_3 * dStack_380 * 1.0 + local_378 * dVar21) - local_388 * dVar30);
      local_308._8_4_ = SUB84(dVar31,0);
      local_308._0_8_ =
           (dVar25 * dVar12 - dVar13 * dVar29) + dVar21 * dVar28 + local_368 + param_3[4];
      local_308._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
    }
    else {
      dVar32 = *param_3;
      dVar2 = param_3[1];
      dVar1 = param_3[2];
      dVar25 = dVar2 + dVar2;
      dVar28 = dVar1 + dVar1;
      dVar27 = dVar32 * (dVar32 + dVar32);
      local_188 = (1.0 - (dVar27 + dVar2 * dVar25)) * dVar5;
      dVar21 = param_3[3];
      dVar29 = dVar28 * dVar21;
      dVar31 = (dVar32 + dVar32) * param_3[3];
      dVar21 = dVar25 * dVar21;
      local_198 = (dVar21 + *param_3 * dVar28) * dVar5;
      dVar27 = (DAT_149934d80._8_8_ - (dVar1 * dVar28 + dVar27)) * dVar8;
      dVar30 = (dVar25 * dVar32 + dVar29) * dVar4;
      local_1a8 = (dVar28 * dVar2 + dVar31) * dVar8;
      dStack_190 = (dVar28 * dVar2 - dVar31) * dVar5;
      local_1c8 = (*param_3 * dVar28 - dVar21) * dVar4;
      local_1d8._8_4_ = SUB84(dVar30,0);
      local_1d8._0_8_ = ((double)DAT_149934d80 - (dVar1 * dVar28 + dVar2 * dVar25)) * dVar4;
      local_1d8._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
      uStack_1c0 = 0;
      local_1b8._8_4_ = SUB84(dVar27,0);
      local_1b8._0_8_ = (dVar25 * dVar32 - dVar29) * dVar8;
      local_1b8._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
      uStack_1a0 = 0;
      uStack_180 = 0;
      local_178 = param_3[4];
      dStack_170 = param_3[5];
      local_168 = param_3[6];
      uStack_160 = 0x3ff0000000000000;
      dVar27 = dStack_380 + dStack_380;
      dVar30 = local_378 + local_378;
      dVar21 = local_388 * (local_388 + local_388);
      local_208 = (1.0 - (dVar21 + dStack_380 * dVar27)) * dVar7;
      dVar32 = (local_388 + local_388) * dStack_370;
      local_218 = (dVar27 * dStack_370 + local_388 * dVar30) * dVar7;
      dStack_210 = (dVar30 * dStack_380 - dVar32) * dVar7;
      local_258 = ((double)DAT_149934d80 - (local_378 * dVar30 + dStack_380 * dVar27)) * dVar6;
      dVar21 = (DAT_149934d80._8_8_ - (local_378 * dVar30 + dVar21)) * dVar9;
      dStack_250 = (dVar27 * local_388 + dVar30 * dStack_370) * dVar6;
      local_228 = (dVar30 * dStack_380 + dVar32) * dVar9;
      local_248 = (local_388 * dVar30 - dVar27 * dStack_370) * dVar6;
      uStack_240 = 0;
      local_238._8_4_ = SUB84(dVar21,0);
      local_238._0_8_ = (dVar27 * local_388 - dVar30 * dStack_370) * dVar9;
      local_238._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
      uStack_220 = 0;
      uStack_200 = 0;
      local_1f8 = local_368;
      dStack_1f0 = dStack_360;
      local_1e8 = local_358;
      uStack_1e0 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_158);
      FUN_144a1c686(&local_158,0x3e45798ee0000000);
      auVar26._8_8_ = -(ulonglong)(0.0 <= dVar8 * dVar9);
      auVar26._0_8_ = -(ulonglong)(0.0 <= dVar4 * dVar6);
      auVar22 = blendvpd(_DAT_149936790,auVar33,auVar26);
      uVar19 = -(ulonglong)(0.0 <= dVar5 * dVar7);
      dVar21 = (double)(~uVar19 & 0xbff0000000000000 | uVar19 & 0x3ff0000000000000);
      dVar27 = auVar22._0_8_;
      local_148 = local_148 * dVar27;
      local_150 = local_150 * dVar27;
      local_158 = local_158 * dVar27;
      dVar27 = auVar22._8_8_;
      local_128 = local_128 * dVar27;
      local_130 = local_130 * dVar27;
      local_138 = dVar27 * local_138;
      local_108 = local_108 * dVar21;
      local_110 = local_110 * dVar21;
      local_118 = dVar21 * local_118;
      FUN_14481fd10(&local_278,&local_158);
      dVar21 = local_268 * local_268 + local_278 * local_278;
      dVar27 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
      auVar24._0_8_ = dVar21 + dVar27;
      auVar24._8_8_ = dVar21 + dVar27;
      auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar24._8_8_);
      auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar24._0_8_);
      auVar22 = sqrtpd(auVar24,auVar24);
      auVar22 = divpd(auVar33,auVar22);
      auVar33._0_8_ = auVar22._0_8_ * local_268;
      auVar33._8_8_ = auVar22._8_8_ * dStack_260;
      local_328 = (double)((ulonglong)(local_278 * auVar22._0_8_) &
                          -(ulonglong)(9.99999993922529e-09 <= auVar24._0_8_));
      dStack_320 = (double)((ulonglong)(dStack_270 * auVar22._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar24._8_8_));
      local_318 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar33,auVar20);
      local_308._8_8_ = uStack_f0;
      local_308._0_8_ = local_f8;
      local_2f8 = local_e8;
      dStack_2f0 = 0.0;
    }
    dVar21 = auVar3._8_8_ * local_338._8_8_;
    param_3 = &local_328;
    local_2e8._8_4_ = SUB84(dVar8 * dVar9,0);
    local_2e8._0_8_ = dVar4 * dVar6;
    local_2e8._12_4_ = (int)((ulonglong)(dVar8 * dVar9) >> 0x20);
    local_2d8._8_4_ = SUB84(dVar21,0);
    local_2d8._0_8_ = dVar5 * dVar7;
    local_2d8._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  }
  FUN_144a80a4c(&local_2c8,param_2,param_3);
  if ((local_d0 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147316a86 FUN_147316a86 body=188 status=ok
// SIG undefined FUN_147316a86(void)

void FUN_147316a86(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_1448f1f76();
  cVar1 = FUN_1417be526(param_1);
  if ((cVar1 != '\0') && ((*(byte *)(param_1 + 0x1f8) & 0x20) != 0)) {
    cVar1 = FUN_1417be526(param_1);
    if (cVar1 != '\0') {
      cVar1 = FUN_140041326(param_1);
      if (((cVar1 != '\0') && ((*(byte *)(param_1 + 0x9c) & 1) != 0)) &&
         ((*(longlong *)(param_1 + 0x20) == 0 ||
          ((*(uint *)(*(longlong *)(param_1 + 0x20) + 8) & 0x10) == 0)))) {
        uVar2 = FUN_14001cc68(0x380,0x10);
        FUN_147316b42(uVar2,param_1);
        *(undefined8 *)(param_1 + 0x650) = uVar2;
        lVar3 = *(longlong *)(param_1 + 0xb0);
        if (lVar3 == 0) {
          lVar3 = FUN_1448abda6(param_1);
          uVar2 = *(undefined8 *)(param_1 + 0x650);
        }
        (**(code **)(**(longlong **)(lVar3 + 0x218) + 0x2d0))(*(longlong **)(lVar3 + 0x218),uVar2);
        FUN_143096336(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147316b42 FUN_147316b42 body=194 status=ok
// SIG undefined FUN_147316b42(void)

undefined8 * FUN_147316b42(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1406ff4f8(param_1,param_2,0);
  *param_1 = &PTR_FUN_14a30e280;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  *(undefined4 *)((longlong)param_1 + 700) = 0x3ff00000;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0x3ff00000;
  param_1[0x5e] = 0x3ff0000000000000;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0;
  *(undefined4 *)(param_1 + 99) = 0;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0x3ff00000;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x69) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34c) = 0x3ff00000;
  param_1[0x6a] = 0x3ff0000000000000;
  param_1[0x6b] = 0;
  if (*(longlong **)(param_2 + 0x648) != (longlong *)0x0) {
    uVar1 = (**(code **)(**(longlong **)(param_2 + 0x648) + 0x300))();
    param_1[0x53] = uVar1;
  }
  return param_1;
}



// FUNCTION 147316c04 FUN_147316c04 body=26 status=ok
// SIG undefined FUN_147316c04(void)

void FUN_147316c04(undefined8 param_1)

{
  FUN_14472bd78();
  FUN_143096336(param_1);
  return;
}



// FUNCTION 147316c1e FUN_147316c1e body=351 status=ok
// SIG undefined FUN_147316c1e(void)

void FUN_147316c1e(ulonglong param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  byte bVar5;
  float fVar6;
  
  if (*(longlong **)(param_1 + 0x620) == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x648) = 0;
  }
  else {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x620) + 0x2b8))();
    uVar4 = *(uint *)(param_1 + 0x630);
    bVar5 = (byte)(uVar4 & 1);
    if ((uVar4 & 1) != 0) {
      *(float *)(param_1 + 0x628) =
           param_2 * *(float *)(param_1 + 0x62c) *
           *(float *)((longlong)&DAT_149935368 + (ulonglong)((uVar4 & 4) == 0) * 4) +
           *(float *)(param_1 + 0x628);
    }
    if ((uVar4 & 2) == 0) {
      fVar6 = *(float *)(param_1 + 0x628);
      if ((float)(iVar1 + -1) <= *(float *)(param_1 + 0x628)) {
        fVar6 = (float)(iVar1 + -1);
      }
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      *(float *)(param_1 + 0x628) = fVar6;
    }
    else {
      fVar6 = (float)FUN_1447c7e44(*(float *)(param_1 + 0x628) + (float)iVar1);
      *(float *)(param_1 + 0x628) = fVar6;
      uVar4 = *(uint *)(param_1 + 0x630);
      bVar5 = (byte)uVar4 & 1;
    }
    uVar2 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar3 = FUN_147d42496(*(undefined8 *)(param_1 + 0x620),uVar2 >> 0x10 ^ uVar2,
                          *(undefined4 *)(param_1 + 0x62c),fVar6,(float)*(int *)(param_1 + 0x63c),
                          (char)((uVar4 & 8) >> 3),bVar5);
    if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar3);
    }
    *(longlong *)(param_1 + 0x648) = lVar3;
  }
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 147316d7e FUN_147316d7e body=42 status=ok
// SIG undefined FUN_147316d7e(void)

void FUN_147316d7e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147316dcc FUN_147316dcc body=96 status=ok
// SIG undefined FUN_147316dcc(void)

undefined8 FUN_147316dcc(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f93650();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca5f0d8,1);
  return uVar3;
}



// FUNCTION 147316e2c FUN_147316e2c body=52 status=ok
// SIG undefined FUN_147316e2c(void)

void FUN_147316e2c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147316e60 FUN_147316e60 body=42 status=ok
// SIG undefined FUN_147316e60(void)

void FUN_147316e60(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147316eae FUN_147316eae body=96 status=ok
// SIG undefined FUN_147316eae(void)

undefined8 FUN_147316eae(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e76e24();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca5f160,1);
  return uVar3;
}



// FUNCTION 147316f0e FUN_147316f0e body=52 status=ok
// SIG undefined FUN_147316f0e(void)

void FUN_147316f0e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147316f4a FUN_147316f4a body=243 status=ok
// SIG undefined FUN_147316f4a(void)

void FUN_147316f4a(longlong param_1,longlong *param_2,longlong param_3,uint param_4,longlong param_5
                  )

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
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
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (0 < (int)param_2[1]) {
    lVar3 = 0;
    do {
      cVar1 = FUN_14480c900(param_1,*(undefined8 *)(*param_2 + lVar3 * 8));
      if ((cVar1 != '\0') && ((param_4 >> ((uint)lVar3 & 0x1f) & 1) != 0)) {
        lVar2 = *(longlong *)(param_5 + 0x60);
        if (*(longlong *)(param_5 + 0x60) == 0) {
          lVar2 = param_5 + 0x50;
        }
        local_58 = *(undefined8 *)(param_1 + 0x1b0);
        local_88 = *(undefined4 *)(param_1 + 0x180);
        uStack_84 = *(undefined4 *)(param_1 + 0x184);
        uStack_80 = *(undefined4 *)(param_1 + 0x188);
        uStack_7c = *(undefined4 *)(param_1 + 0x18c);
        local_78 = *(undefined4 *)(param_1 + 400);
        uStack_74 = *(undefined4 *)(param_1 + 0x194);
        uStack_70 = *(undefined4 *)(param_1 + 0x198);
        uStack_6c = *(undefined4 *)(param_1 + 0x19c);
        local_68 = *(undefined4 *)(param_1 + 0x1a0);
        uStack_64 = *(undefined4 *)(param_1 + 0x1a4);
        uStack_60 = *(undefined4 *)(param_1 + 0x1a8);
        uStack_5c = *(undefined4 *)(param_1 + 0x1ac);
        local_98 = (*(byte *)(param_1 + 0x6c) & 6) != 0;
        FUN_143659d30(param_1,*(undefined8 *)(lVar2 + lVar3 * 8),param_3 + 0x48,&local_88);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_2[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14731703e FUN_14731703e body=72 status=ok
// SIG undefined FUN_14731703e(void)

undefined8 * FUN_14731703e(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  bVar1 = FUN_14480c900(0,param_3);
  *(uint *)(param_2 + 2) = (*(byte *)(param_1 + 0x6e) & 8) * 0x10 + (uint)bVar1 * 4 + 2;
  *(undefined2 *)((longlong)param_2 + 4) = 0x200;
  return param_2;
}



// FUNCTION 147317086 FUN_147317086 body=42 status=ok
// SIG undefined FUN_147317086(void)

void FUN_147317086(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1473170b8 FUN_1473170b8 body=96 status=ok
// SIG undefined FUN_1473170b8(void)

undefined8 FUN_1473170b8(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141592e98();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca5f1e8,1);
  return uVar3;
}



// FUNCTION 147317118 FUN_147317118 body=52 status=ok
// SIG undefined FUN_147317118(void)

void FUN_147317118(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14731714c FUN_14731714c body=42 status=ok
// SIG undefined FUN_14731714c(void)

void FUN_14731714c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14731717e FUN_14731717e body=96 status=ok
// SIG undefined FUN_14731717e(void)

undefined8 FUN_14731717e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14157edd6();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca5f270,1);
  return uVar3;
}



// FUNCTION 1473171de FUN_1473171de body=52 status=ok
// SIG undefined FUN_1473171de(void)

void FUN_1473171de(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147317212 FUN_147317212 body=88 status=ok
// SIG undefined FUN_147317212(void)

int FUN_147317212(void)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = DAT_14ca5dce0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar3 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  iVar5 = *(int *)(lVar1 + uVar3 * 4);
  iVar4 = 2;
  if (iVar5 < 2) {
    iVar4 = iVar5;
  }
  iVar5 = 0;
  if (0 < iVar4) {
    iVar5 = iVar4;
  }
  return iVar5;
}



// FUNCTION 14731726a FUN_14731726a body=257 status=ok
// SIG undefined FUN_14731726a(void)

void FUN_14731726a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(param_1 + 0x70);
  puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar3 = puVar5 + 10;
  if (*(undefined8 **)(param_1 + 0x78) < puVar3) {
    FUN_140023dd8(plVar1,0x60);
    puVar5 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar3 = puVar5 + 10;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar3;
  *puVar5 = &PTR_FUN_14a312ad8;
  puVar5[7] = 0;
  puVar5[8] = 0;
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar5;
  FUN_140250815(param_1,param_2,puVar5 + 2);
  local_38 = puVar5 + 2;
  lVar4 = FUN_1463059e2();
  local_40 = *(undefined8 *)(lVar4 + 0x18);
  FUN_14731fa76(param_1 + 0x1a8,plVar1,&local_38);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14731736c FUN_14731736c body=103 status=ok
// SIG undefined FUN_14731736c(void)

void FUN_14731736c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  
  lVar1 = *(longlong *)(param_2 + 0x118c8);
  bVar2 = FUN_14473b0f0();
  uVar3 = 0;
  uVar5 = 0;
  uVar4 = 0;
  uVar6 = 0;
  uVar7 = 0;
  if ((lVar1 != 0 & bVar2) == 1) {
    uVar4 = (uint)*(byte *)(lVar1 + 0x20);
    uVar3 = *(undefined4 *)(lVar1 + 0x14);
    uVar5 = *(undefined4 *)(lVar1 + 0x18);
    uVar6 = *(undefined4 *)(lVar1 + 0x1c);
    uVar7 = (uint)*(byte *)(lVar1 + 0x21);
  }
  *param_3 = uVar3;
  param_3[1] = uVar5;
  param_3[2] = uVar4;
  param_3[3] = uVar6;
  param_3[4] = uVar7;
  return;
}



// FUNCTION 1473173d4 FUN_1473173d4 body=42 status=ok
// SIG undefined FUN_1473173d4(void)

void FUN_1473173d4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147317402 FUN_147317402 body=77 status=ok
// SIG undefined FUN_147317402(void)

char FUN_147317402(longlong param_1)

{
  char cVar1;
  char cVar2;
  
  cVar1 = FUN_145868368();
  cVar2 = '\x02';
  if (cVar1 != '\0') {
    if ((*(uint *)(param_1 + 4) & 0x80000001) == 1) {
      if (DAT_14ca84f10 == '\x01') {
        cVar2 = (DAT_14ca84f18 < 0x40 || 0x40 < DAT_14ca84f14) * '\x02';
      }
    }
    else {
      cVar2 = '\0';
    }
  }
  return cVar2;
}



// FUNCTION 147317450 FUN_147317450 body=96 status=ok
// SIG undefined FUN_147317450(void)

undefined8 FUN_147317450(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e96dc0();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca5f2f8,1);
  return uVar3;
}



// FUNCTION 1473174b0 FUN_1473174b0 body=52 status=ok
// SIG undefined FUN_1473174b0(void)

void FUN_1473174b0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1473174e4 FUN_1473174e4 body=42 status=ok
// SIG undefined FUN_1473174e4(void)

void FUN_1473174e4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147317518 FUN_147317518 body=96 status=ok
// SIG undefined FUN_147317518(void)

undefined8 FUN_147317518(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f6dfa8();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca5f380,1);
  return uVar3;
}



// FUNCTION 147317578 FUN_147317578 body=52 status=ok
// SIG undefined FUN_147317578(void)

void FUN_147317578(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1473175ac FUN_1473175ac body=42 status=ok
// SIG undefined FUN_1473175ac(void)

void FUN_1473175ac(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1473175de FUN_1473175de body=96 status=ok
// SIG undefined FUN_1473175de(void)

undefined8 FUN_1473175de(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f76a2a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca5f408,1);
  return uVar3;
}



// FUNCTION 14731763e FUN_14731763e body=52 status=ok
// SIG undefined FUN_14731763e(void)

void FUN_14731763e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147317672 FUN_147317672 body=42 status=ok
// SIG undefined FUN_147317672(void)

void FUN_147317672(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1473176a4 FUN_1473176a4 body=96 status=ok
// SIG undefined FUN_1473176a4(void)

undefined8 FUN_1473176a4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145ed54e8();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca5f490,1);
  return uVar3;
}



// FUNCTION 147317704 FUN_147317704 body=52 status=ok
// SIG undefined FUN_147317704(void)

void FUN_147317704(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147317738 FUN_147317738 body=42 status=ok
// SIG undefined FUN_147317738(void)

void FUN_147317738(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14731776a FUN_14731776a body=96 status=ok
// SIG undefined FUN_14731776a(void)

undefined8 FUN_14731776a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f1d276();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca5f518,1);
  return uVar3;
}



// FUNCTION 1473177ca FUN_1473177ca body=52 status=ok
// SIG undefined FUN_1473177ca(void)

void FUN_1473177ca(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1473177fe FUN_1473177fe body=42 status=ok
// SIG undefined FUN_1473177fe(void)

void FUN_1473177fe(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147317848 FUN_147317848 body=89 status=ok
// SIG undefined FUN_147317848(void)

undefined8 FUN_147317848(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  uVar4 = FUN_145cf4068();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,uVar4,1);
  return uVar3;
}



// FUNCTION 1473178a2 FUN_1473178a2 body=52 status=ok
// SIG undefined FUN_1473178a2(void)

void FUN_1473178a2(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1473178d6 FUN_1473178d6 body=42 status=ok
// SIG undefined FUN_1473178d6(void)

void FUN_1473178d6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147317908 FUN_147317908 body=96 status=ok
// SIG undefined FUN_147317908(void)

undefined8 FUN_147317908(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e97330();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca5f5a0,1);
  return uVar3;
}



// FUNCTION 147317968 FUN_147317968 body=52 status=ok
// SIG undefined FUN_147317968(void)

void FUN_147317968(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14731799c FUN_14731799c body=212 status=ok
// SIG undefined FUN_14731799c(void)

undefined8 *
FUN_14731799c(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             int *param_5)

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
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14309a1a8(&local_48);
  *param_5 = (uint)DAT_14ca84e08 * 5;
  lVar1 = *(longlong *)(param_3 + 0x3110);
  *param_1 = *(undefined8 *)(lVar1 + 0xaf0);
  uVar13 = *(undefined8 *)(lVar1 + 0xb08);
  param_1[2] = *(undefined8 *)(lVar1 + 0xb00);
  param_1[3] = uVar13;
  uVar13 = *(undefined8 *)(lVar1 + 0xb38);
  param_1[4] = *(undefined8 *)(lVar1 + 0xb30);
  param_1[5] = uVar13;
  uVar13 = *(undefined8 *)(lVar1 + 0x340);
  uVar14 = *(undefined8 *)(lVar1 + 0x348);
  uVar2 = *(undefined4 *)(lVar1 + 0x354);
  uVar3 = *(undefined4 *)(lVar1 + 0x358);
  uVar4 = *(undefined4 *)(lVar1 + 0x35c);
  uVar5 = *(undefined4 *)(lVar1 + 0x360);
  uVar6 = *(undefined4 *)(lVar1 + 0x364);
  uVar7 = *(undefined4 *)(lVar1 + 0x368);
  uVar8 = *(undefined4 *)(lVar1 + 0x36c);
  uVar9 = *(undefined4 *)(lVar1 + 0x370);
  uVar10 = *(undefined4 *)(lVar1 + 0x374);
  uVar11 = *(undefined4 *)(lVar1 + 0x378);
  uVar12 = *(undefined4 *)(lVar1 + 0x37c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar1 + 0x350);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 9) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar4;
  *(undefined4 *)(param_1 + 10) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar6;
  *(undefined4 *)(param_1 + 0xb) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar8;
  param_1[6] = uVar13;
  param_1[7] = uVar14;
  *(undefined4 *)(param_1 + 0xc) = uVar9;
  *(undefined4 *)((longlong)param_1 + 100) = uVar10;
  *(undefined4 *)(param_1 + 0xd) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar12;
  param_1[0xe] = local_48;
  *(undefined4 *)(param_1 + 0xf) = local_40;
  *(undefined4 *)((longlong)param_1 + 0x7c) = local_3c;
  *(undefined4 *)(param_1 + 0x10) = local_38;
  *(undefined4 *)((longlong)param_1 + 0x84) = uStack_34;
  *(undefined4 *)(param_1 + 0x11) = uStack_30;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uStack_2c;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147317a71 FUN_147317a71 body=201 status=ok
// SIG undefined FUN_147317a71(void)

void FUN_147317a71(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 auStack_b8 [32];
  undefined **local_98;
  undefined *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_145f6dfa8();
  local_60 = *(undefined4 *)(param_6 + 1);
  local_68 = *param_6;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1448f70da(*param_4,&DAT_14ca5f380,param_5);
  local_88 = &DAT_14ca5f380;
  local_80 = param_5;
  local_78 = *(undefined4 *)param_4;
  uStack_74 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_70 = *(undefined4 *)(param_4 + 1);
  uStack_6c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_98 = &local_88;
  FUN_14731fd94(param_1,param_2,param_5,param_3);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147317b3b FUN_147317b3b body=201 status=ok
// SIG undefined FUN_147317b3b(void)

void FUN_147317b3b(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 auStack_b8 [32];
  undefined **local_98;
  undefined *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_145ed54e8();
  local_60 = *(undefined4 *)(param_6 + 1);
  local_68 = *param_6;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1448f70da(*param_4,&DAT_14ca5f490,param_5);
  local_88 = &DAT_14ca5f490;
  local_80 = param_5;
  local_78 = *(undefined4 *)param_4;
  uStack_74 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_70 = *(undefined4 *)(param_4 + 1);
  uStack_6c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_98 = &local_88;
  FUN_14732032a(param_1,param_2,param_5,param_3);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


