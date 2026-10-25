// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14594446e FUN_14594446e body=428 status=ok
// SIG undefined FUN_14594446e(void)

longlong * FUN_14594446e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14594454e:
    *puVar5 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4f26f0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14594454e;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4f26f0;
    puVar5[3] = uVar7;
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



// FUNCTION 14594461a FUN_14594461a body=721 status=ok
// SIG undefined FUN_14594461a(void)

void FUN_14594461a(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined8 *)(param_1 + 0x9a4) = *(undefined8 *)(param_1 + 0x210);
  *(float *)(param_1 + 0x9a0) = *(float *)(param_1 + 0x218) / 10000.0;
  FUN_1459448ec(&local_70,param_1 + 0x9a0);
  lVar3 = *param_2;
  iVar2 = *(int *)(lVar3 + 0x70);
  *(uint *)(lVar3 + 0x70) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x74) < iVar2 + 1U) {
    FUN_145944934((longlong *)(lVar3 + 0x68),iVar2);
  }
  lVar3 = *(longlong *)(lVar3 + 0x68);
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = local_60;
  puVar1[1] = uStack_5c;
  puVar1[2] = uStack_58;
  puVar1[3] = uStack_54;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = local_70;
  puVar1[1] = uStack_6c;
  puVar1[2] = uStack_68;
  puVar1[3] = uStack_64;
  if ((longlong)*(int *)(param_1 + 0x248) != 0) {
    puVar7 = *(undefined1 **)(param_1 + 0x240);
    puVar8 = puVar7 + (longlong)*(int *)(param_1 + 0x248) * 0xb0;
    do {
      puVar7[0xa0] = *puVar7;
      FUN_140fda6de(param_1,&local_e0,*(undefined8 *)(puVar7 + 4),puVar7 + 0x10);
      *(ulonglong *)(puVar7 + 0x68) = CONCAT44(uStack_cc,local_d0);
      *(ulonglong *)(puVar7 + 0x58) = CONCAT44(local_e0._4_4_,(undefined4)local_e0);
      *(ulonglong *)(puVar7 + 0x60) = CONCAT44(uStack_d4,uStack_d8);
      *(undefined4 *)(puVar7 + 0x70) = *(undefined4 *)(puVar7 + 0x28);
      *(undefined4 *)(puVar7 + 0x74) = *(undefined4 *)(puVar7 + 0x2c);
      *(undefined4 *)(puVar7 + 0x78) = *(undefined4 *)(puVar7 + 0x30);
      *(undefined4 *)(puVar7 + 0x7c) = *(undefined4 *)(puVar7 + 0x34);
      *(undefined4 *)(puVar7 + 0x80) = *(undefined4 *)(puVar7 + 0x38);
      *(undefined4 *)(puVar7 + 0x84) = *(undefined4 *)(puVar7 + 0x3c);
      *(undefined4 *)(puVar7 + 0x88) = *(undefined4 *)(puVar7 + 0x40);
      *(undefined4 *)(puVar7 + 0x8c) = *(undefined4 *)(puVar7 + 0x44);
      *(undefined8 *)(puVar7 + 0x90) = *(undefined8 *)(puVar7 + 0x48);
      *(undefined8 *)(puVar7 + 0xa4) = *(undefined8 *)(puVar7 + 0x50);
      FUN_148acacb8(&local_e0,puVar7 + 0x58);
      lVar3 = *param_2;
      iVar2 = *(int *)(lVar3 + 0x80);
      *(uint *)(lVar3 + 0x80) = iVar2 + 1U;
      if (*(uint *)(lVar3 + 0x84) < iVar2 + 1U) {
        FUN_148ad8028((longlong *)(lVar3 + 0x78),iVar2);
      }
      lVar3 = *(longlong *)(lVar3 + 0x78);
      lVar4 = (longlong)iVar2 * 0x38;
      *(undefined8 *)(lVar3 + 0x30 + lVar4) = local_b0;
      puVar5 = (undefined8 *)(lVar3 + 0x20 + lVar4);
      *puVar5 = local_c0;
      puVar5[1] = uStack_b8;
      puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar4);
      *puVar1 = local_d0;
      puVar1[1] = uStack_cc;
      puVar1[2] = uStack_c8;
      puVar1[3] = uStack_c4;
      puVar1 = (undefined4 *)(lVar3 + lVar4);
      *puVar1 = (undefined4)local_e0;
      puVar1[1] = local_e0._4_4_;
      puVar1[2] = uStack_d8;
      puVar1[3] = uStack_d4;
      puVar7 = puVar7 + 0xb0;
    } while (puVar7 != puVar8);
  }
  if ((longlong)*(int *)(param_1 + 600) != 0) {
    puVar7 = *(undefined1 **)(param_1 + 0x250);
    puVar8 = puVar7 + (longlong)*(int *)(param_1 + 600) * 0xa0;
    do {
      puVar7[0x48] = *puVar7;
      FUN_140fda6de(param_1,&local_e0,*(undefined8 *)(puVar7 + 4),puVar7 + 0x10);
      *(ulonglong *)(puVar7 + 0x60) = CONCAT44(uStack_cc,local_d0);
      *(ulonglong *)(puVar7 + 0x50) = CONCAT44(local_e0._4_4_,(undefined4)local_e0);
      *(ulonglong *)(puVar7 + 0x58) = CONCAT44(uStack_d4,uStack_d8);
      *(undefined8 *)(puVar7 + 0x78) = *(undefined8 *)(puVar7 + 0x38);
      *(undefined8 *)(puVar7 + 0x68) = *(undefined8 *)(puVar7 + 0x28);
      *(undefined8 *)(puVar7 + 0x70) = *(undefined8 *)(puVar7 + 0x30);
      *(float *)(puVar7 + 0x94) = *(float *)(puVar7 + 0x40) * 100.0;
      *(undefined4 *)(puVar7 + 0x98) = *(undefined4 *)(puVar7 + 0x44);
      FUN_148acb4cc(&local_e0,puVar7 + 0x48);
      lVar3 = *param_2;
      iVar2 = *(int *)(lVar3 + 0x90);
      *(uint *)(lVar3 + 0x90) = iVar2 + 1U;
      if (*(uint *)(lVar3 + 0x94) < iVar2 + 1U) {
        FUN_148ad80b8((longlong *)(lVar3 + 0x88),iVar2);
      }
      puVar5 = &local_e0;
      puVar6 = (undefined8 *)((longlong)iVar2 * 0x70 + *(longlong *)(lVar3 + 0x88));
      for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar7 = puVar7 + 0xa0;
    } while (puVar7 != puVar8);
  }
  if ((local_50 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459448ec FUN_1459448ec body=72 status=ok
// SIG undefined FUN_1459448ec(void)

undefined8 * FUN_1459448ec(undefined8 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  *param_1 = param_2;
  fVar1 = param_2[2];
  *(float *)(param_1 + 1) = fVar1;
  fVar2 = param_2[1];
  *(float *)((longlong)param_1 + 0xc) = fVar2;
  *(undefined4 *)(param_1 + 2) = 0x3f9ccccd;
  *(float *)((longlong)param_1 + 0x14) = *param_2 * 0.5 * fVar2;
  *(float *)(param_1 + 3) = *param_2 * 0.5 * fVar1;
  return param_1;
}



// FUNCTION 145944934 FUN_145944934 body=132 status=ok
// SIG undefined FUN_145944934(void)

void FUN_145944934(longlong param_1,int param_2)

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



// FUNCTION 1459449c4 FUN_1459449c4 body=152 status=ok
// SIG undefined FUN_1459449c4(void)

undefined8 * FUN_1459449c4(undefined8 *param_1)

{
  FUN_144805d84();
  *param_1 = &PTR_FUN_14aa243b0;
  param_1[5] = &PTR_FUN_14aa24860;
  param_1[6] = &PTR_LAB_14aa248a0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0x10003;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x10000;
  *(undefined1 *)((longlong)param_1 + 0x1a4) = 0;
  FUN_145944a5c(param_1);
  return param_1;
}



// FUNCTION 145944a5c FUN_145944a5c body=363 status=ok
// SIG undefined FUN_145944a5c(void)

void FUN_145944a5c(longlong param_1)

{
  longlong lVar1;
  short sVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar3 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"np2.Resim.RedundantInputs",1);
  if (plVar3 != (longlong *)0x0) {
    sVar2 = (**(code **)(*plVar3 + 0xb0))(plVar3);
    *(ushort *)(param_1 + 0x188) = sVar2 + 1 + (ushort)(sVar2 == -1);
  }
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar3 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"np2.Resim.RedundantStates",1);
  if (plVar3 != (longlong *)0x0) {
    sVar2 = (**(code **)(*plVar3 + 0xb0))(plVar3);
    *(ushort *)(param_1 + 0x18a) = sVar2 + 1 + (ushort)(sVar2 == -1);
  }
  if ((*(longlong *)(param_1 + 0xa8) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x1c8), lVar1 != 0)) {
    lVar4 = FUN_144a3a302();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      local_20 = 0;
      uVar5 = (**(code **)(*(longlong *)(lVar1 + 0x2b8) + 0x18))(lVar1 + 0x2b8);
      *(undefined8 *)(param_1 + 0x198) = uVar5;
    }
  }
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 2;
  *(undefined1 *)(param_1 + 0x48) = 4;
  *(byte *)(param_1 + 0x9e) = *(byte *)(param_1 + 0x9e) | 8;
  *(byte *)(param_1 + 0x9f) = *(byte *)(param_1 + 0x9f) | 1;
  FUN_140b967fa(param_1,1);
  *(undefined8 *)(param_1 + 0x150) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145944bc8 FUN_145944bc8 body=26 status=ok
// SIG undefined FUN_145944bc8(void)

void FUN_145944bc8(undefined8 param_1)

{
  FUN_144a63f30();
  FUN_145944be2(param_1);
  return;
}



// FUNCTION 145944be2 FUN_145944be2 body=502 status=ok
// SIG undefined FUN_145944be2(void)

void FUN_145944be2(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_1b8 [32];
  undefined4 local_198 [4];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178 [4];
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148;
  undefined **local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  longlong local_100;
  undefined8 local_f8 [10];
  undefined4 local_a8;
  undefined1 local_a4;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar2 = FUN_145944dda();
  if (lVar2 != 0) {
    FUN_144a87366(local_88,lVar2 + 0x28);
    FUN_141115af4(param_1,local_88);
    local_138 = &PTR_FUN_149ed05f0;
    local_130 = *(undefined4 *)(lVar2 + 0xd8);
    uStack_12c = *(undefined4 *)(lVar2 + 0xdc);
    uStack_128 = *(undefined4 *)(lVar2 + 0xe0);
    uStack_124 = *(undefined4 *)(lVar2 + 0xe4);
    local_120 = *(undefined4 *)(lVar2 + 0xe8);
    uStack_11c = *(undefined4 *)(lVar2 + 0xec);
    uStack_118 = *(undefined4 *)(lVar2 + 0xf0);
    uStack_114 = *(undefined4 *)(lVar2 + 0xf4);
    local_110 = *(undefined4 *)(lVar2 + 0xf8);
    uStack_10c = *(undefined4 *)(lVar2 + 0xfc);
    uStack_108 = *(undefined4 *)(lVar2 + 0x100);
    uStack_104 = *(undefined4 *)(lVar2 + 0x104);
    local_100 = *(longlong *)(lVar2 + 0x108);
    if ((local_100 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    puVar5 = (undefined8 *)(lVar2 + 0x110);
    puVar6 = local_f8;
    for (lVar3 = 10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    local_a4 = *(undefined1 *)(lVar2 + 0x164);
    local_a8 = *(undefined4 *)(lVar2 + 0x160);
    local_a0 = *(undefined8 *)(lVar2 + 0x168);
    local_98 = *(longlong *)(lVar2 + 0x170);
    if (local_98 != 0) {
      LOCK();
      *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
      UNLOCK();
    }
    local_90 = *(undefined8 *)(lVar2 + 0x178);
    FUN_147754174(param_1);
    uVar1 = *(undefined8 *)(lVar2 + 200);
    *(undefined8 *)(param_1 + 0x174) = *(undefined8 *)(lVar2 + 0xc0);
    *(undefined8 *)(param_1 + 0x17c) = uVar1;
    *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(lVar2 + 0x180);
    *(undefined1 *)(param_1 + 0x16e) = *(undefined1 *)(lVar2 + 0x184);
    local_158 = *(undefined4 *)(lVar2 + 0x88);
    uStack_154 = *(undefined4 *)(lVar2 + 0x8c);
    uStack_150 = *(undefined4 *)(lVar2 + 0x90);
    uStack_14c = *(undefined4 *)(lVar2 + 0x94);
    local_148 = 0;
    FUN_1417a9c68(param_1);
    if (*(char *)(lVar2 + 0x98) == '\x01') {
      local_168 = *(undefined4 *)(lVar2 + 0xa0);
      uStack_164 = *(undefined4 *)(lVar2 + 0xa4);
      uStack_160 = *(undefined4 *)(lVar2 + 0xa8);
      uStack_15c = *(undefined4 *)(lVar2 + 0xac);
      FUN_147753f1a(param_1);
      uVar7 = *(undefined4 *)(lVar2 + 0xb0);
      uVar8 = *(undefined4 *)(lVar2 + 0xb4);
      uVar9 = *(undefined4 *)(lVar2 + 0xb8);
      uVar10 = *(undefined4 *)(lVar2 + 0xbc);
      puVar4 = local_178;
    }
    else {
      local_188 = (undefined4)DAT_14c8463f0;
      uStack_184 = DAT_14c8463f0._4_4_;
      uStack_180 = (undefined4)DAT_14c8463f8;
      uStack_17c = DAT_14c8463f8._4_4_;
      FUN_147753f1a(param_1);
      uVar7 = 0;
      uVar8 = 0;
      uVar9 = 0;
      uVar10 = 0;
      puVar4 = local_198;
    }
    *puVar4 = uVar7;
    puVar4[1] = uVar8;
    puVar4[2] = uVar9;
    puVar4[3] = uVar10;
    FUN_147753dfa(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145944dda FUN_145944dda body=206 status=ok
// SIG undefined FUN_145944dda(void)

longlong FUN_145944dda(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x330);
  if ((((lVar3 != 0) && (lVar2 = FUN_14117a954(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
     ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
       lVar2 + 0x30 && (lVar3 = *(longlong *)(param_1 + 0x330), lVar3 != 0)))) {
    lVar2 = FUN_14117a954();
    if ((lVar2 == 0) ||
       ((*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
         lVar2 + 0x30)))) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x330);
    }
    if (*(longlong *)(lVar3 + 0x110) != 0) {
      lVar2 = FUN_14117a954();
      lVar3 = *(longlong *)(lVar3 + 0x110);
      if (lVar3 != 0) {
        if (lVar2 == 0) {
          return 0;
        }
        lVar1 = *(longlong *)(lVar3 + 0x10);
        if (lVar1 == 0) {
          return 0;
        }
        if (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) {
          if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
              lVar2 + 0x30) {
            return 0;
          }
          return lVar3;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 145944ea8 FUN_145944ea8 body=344 status=ok
// SIG undefined FUN_145944ea8(void)

undefined4 *
FUN_145944ea8(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1459450fe(param_1,local_50);
  iVar6 = 0;
  FUN_145945002(local_48,0,*param_3,param_3[1]);
  *(undefined4 *)(local_48 + 4) = 0xffffffff;
  local_54 = local_50[0];
  if (*(int *)(local_48 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*local_48;
    iVar6 = *(int *)(local_48 + 1) + -1;
  }
  uVar2 = FUN_144a49b4a(iVar6,puVar5);
  local_68 = param_4;
  cVar1 = FUN_145945074(param_1,uVar2,local_48,&local_54);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar6 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_48 + 0x24) = uVar2;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 4) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1413db0a0(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145945002 FUN_145945002 body=113 status=ok
// SIG undefined FUN_145945002(void)

undefined8 *
FUN_145945002(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  param_1[2] = *param_4;
  lVar2 = param_4[1];
  param_1[3] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 145945074 FUN_145945074 body=137 status=ok
// SIG undefined FUN_145945074(void)

void FUN_145945074(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  int iVar10;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar10 = FUN_1413dafe6();
    if (iVar10 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar10 * 0x28);
      FUN_145974290(puVar1);
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      uVar6 = param_3[5];
      uVar7 = param_3[6];
      uVar8 = param_3[7];
      puVar1[4] = param_3[4];
      puVar1[5] = uVar6;
      puVar1[6] = uVar7;
      puVar1[7] = uVar8;
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_148a9c1a0(param_1,*param_4,1);
      *param_4 = iVar10;
      uVar9 = 1;
      goto LAB_1459450a8;
    }
  }
  uVar9 = 0;
LAB_1459450a8:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar9;
  }
  return;
}



// FUNCTION 1459450fe FUN_1459450fe body=243 status=ok
// SIG undefined FUN_1459450fe(void)

int * FUN_1459450fe(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1459451fa FUN_1459451fa body=148 status=ok
// SIG undefined FUN_1459451fa(void)

longlong * FUN_1459451fa(longlong *param_1)

{
  longlong lVar1;
  
  FUN_1407fec00();
  *param_1 = (longlong)&PTR_FUN_14b0c8c80;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xffffffff;
  FUN_1406fa324(param_1 + 10,&DAT_14c9a6308);
  FUN_1407fecba(param_1 + 0xc,(int)param_1[0xb],1);
  FUN_144a84024(param_1 + 0xf,(int)param_1[0xb],0);
  if (0 < (int)param_1[0xb]) {
    lVar1 = 0;
    do {
      *(undefined4 *)(param_1[0xf] + lVar1 * 4) = 0x3f800000;
      lVar1 = lVar1 + 1;
    } while (lVar1 < (int)param_1[0xb]);
  }
  param_1[7] = 0;
  (**(code **)(*param_1 + 0xa8))(param_1);
  return param_1;
}



// FUNCTION 14594528e FUN_14594528e body=20 status=ok
// SIG undefined FUN_14594528e(void)

void FUN_14594528e(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x44) = DAT_14cb7e020;
  return;
}



// FUNCTION 1459452ae FUN_1459452ae body=53 status=ok
// SIG undefined FUN_1459452ae(void)

undefined8 * FUN_1459452ae(undefined8 *param_1)

{
  FUN_14077009c();
  *param_1 = &PTR_FUN_14b492900;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0x1400000004;
  return param_1;
}



// FUNCTION 1459452ee FUN_1459452ee body=213 status=ok
// SIG undefined FUN_1459452ee(void)

undefined8 * FUN_1459452ee(undefined8 *param_1)

{
  FUN_1459453c4();
  *param_1 = &PTR_FUN_14b6c9c30;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)((longlong)param_1 + 0x99) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x22) = 0x101;
  param_1[0x27] = 0;
  param_1[0x28] = 0x800000000;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0x400000000;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  *(undefined2 *)((longlong)param_1 + 0xf9) = 1;
  *(undefined1 *)((longlong)param_1 + 0xfb) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x1000000;
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined2 *)(param_1 + 0x2e) = 0;
  return param_1;
}



// FUNCTION 1459453c4 FUN_1459453c4 body=32 status=ok
// SIG undefined FUN_1459453c4(void)

undefined8 * FUN_1459453c4(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14aff3e60;
  return param_1;
}



// FUNCTION 1459453f2 FUN_1459453f2 body=40 status=ok
// SIG undefined FUN_1459453f2(void)

undefined8 FUN_1459453f2(undefined8 param_1,int param_2)

{
  FUN_14594541a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14594541a FUN_14594541a body=184 status=ok
// SIG undefined FUN_14594541a(void)

void FUN_14594541a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b776420;
  if (param_1[0x59] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_1413db286(param_1[0x41],*(undefined4 *)(param_1 + 0x42));
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  FUN_1459454d2(param_1 + 0x11);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1459454d2 FUN_1459454d2 body=231 status=ok
// SIG undefined FUN_1459454d2(void)

void FUN_1459454d2(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x178) != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0x178) + 0x50));
  }
  if ((*(longlong *)(param_1 + 0x148) != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0x148) + 0x50));
  }
  if ((*(longlong *)(param_1 + 0x118) != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0x118) + 0x50));
  }
  if ((*(longlong *)(param_1 + 0xe8) != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0xe8) + 0x50));
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459455dc FUN_1459455dc body=52 status=ok
// SIG undefined FUN_1459455dc(void)

void FUN_1459455dc(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x328);
  memset(_Dst,0,0x328);
  FUN_145945610(_Dst);
  return;
}



// FUNCTION 145945610 FUN_145945610 body=108 status=ok
// SIG undefined FUN_145945610(void)

undefined8 * FUN_145945610(undefined8 *param_1)

{
  FUN_140e8cfb8();
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *param_1 = &PTR_FUN_14b9ca830;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x5e) = 0xffffffff;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  *(undefined4 *)((longlong)param_1 + 799) = 0;
  return param_1;
}



// FUNCTION 14594567c FUN_14594567c body=45 status=ok
// SIG undefined FUN_14594567c(void)

void FUN_14594567c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1459456aa(puVar1,param_1);
  *puVar1 = &PTR_FUN_14bce66c0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  return;
}



// FUNCTION 1459456aa FUN_1459456aa body=83 status=ok
// SIG undefined FUN_1459456aa(void)

undefined8 * FUN_1459456aa(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14bcd6f60;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x100000040;
  *(undefined4 *)(param_1 + 8) = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  return param_1;
}



// FUNCTION 1459456fe FUN_1459456fe body=245 status=ok
// SIG undefined FUN_1459456fe(void)

void FUN_1459456fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    lVar4 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar4) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8 + lVar4);
      }
      if (plVar6 == param_2) {
        return;
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x20) * 0x10 != lVar4);
  }
  lVar4 = (**(code **)(*param_2 + 8))(param_2);
  iVar2 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar2 + 1U) {
    FUN_145945986((longlong *)(param_1 + 0x18),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  plVar6 = (longlong *)(lVar3 + (longlong)iVar2 * 0x10);
  puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  if ((lVar4 == 0) || (DAT_14c950c29 == '\0')) {
    *plVar6 = lVar4;
    if (lVar4 == 0) {
      lVar4 = 0;
      goto LAB_14594577a;
    }
  }
  else {
    FUN_1456cec3c(lVar4);
    *plVar6 = lVar4;
  }
  uVar5 = FUN_1413dc4e6();
  lVar4 = FUN_144718840(lVar4,uVar5);
LAB_14594577a:
  plVar6[1] = lVar4;
  FUN_1459457f4(param_1,param_2);
  return;
}



// FUNCTION 1459457f4 FUN_1459457f4 body=149 status=ok
// SIG undefined FUN_1459457f4(void)

void FUN_1459457f4(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != (longlong *)0x0) {
    local_28[0] = 0;
    local_28[1] = 0;
    FUN_145945a0a();
    lVar1 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar1 != 0) {
      uVar2 = FUN_140f26902();
      lVar1 = FUN_144718840(lVar1,uVar2);
      if (lVar1 != 0) {
        FUN_14594588a(lVar1,&DAT_14cb765d8,local_28,0);
      }
    }
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594588a FUN_14594588a body=121 status=ok
// SIG undefined FUN_14594588a(void)

undefined8 FUN_14594588a(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x20))();
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x140) != 0)) {
    cVar1 = FUN_144729dda(lVar2 + 0x138);
    if ((cVar1 != '\0') && (*(longlong **)(lVar2 + 0x140) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(lVar2 + 0x140) + 0x40))();
      if (cVar1 != '\0') {
        uVar3 = FUN_145945904(lVar2,param_2,param_3,param_4);
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 145945904 FUN_145945904 body=129 status=ok
// SIG undefined FUN_145945904(void)

undefined8 FUN_145945904(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  if (((*(char *)(param_1 + 0x1c) != '\x04') && (*param_2 != 0)) &&
     (*(longlong *)(param_1 + 0x140) != 0)) {
    cVar1 = FUN_144729dda(param_1 + 0x138);
    if ((cVar1 != '\0') && (*(longlong **)(param_1 + 0x140) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x40))();
      if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x148) != 0)) {
        uVar2 = FUN_1413db798(param_1,param_2,param_3,param_4);
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 145945986 FUN_145945986 body=132 status=ok
// SIG undefined FUN_145945986(void)

void FUN_145945986(longlong param_1,int param_2)

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



// FUNCTION 145945a0a FUN_145945a0a body=2145 status=ok
// SIG undefined FUN_145945a0a(void)

void FUN_145945a0a(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  int local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != (longlong *)0x0) {
    FUN_1400b22c2(&local_58,&DAT_14b3f553c);
    (**(code **)(*param_2 + 0x28))(param_2,&local_90);
    iVar9 = (int)local_88 + -1;
    if ((int)local_88 == 0) {
      iVar9 = 0;
    }
    thunk_FUN_1400020e8(&local_58,local_90,iVar9);
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    thunk_FUN_14047a987(&local_58,L"[Left Bracket");
    (**(code **)(*param_2 + 0x30))(param_2,&local_68);
    local_78 = 0;
    uStack_70 = 0;
    if ((longlong)*(int *)(param_1 + 0x10) != 0) {
      plVar13 = *(longlong **)(param_1 + 8);
      local_98 = plVar13 + (longlong)*(int *)(param_1 + 0x10) * 3;
      do {
        local_88 = 0;
        local_90 = *plVar13;
        local_80 = 0;
        uVar6 = FUN_14477b664(plVar13[1]);
        local_88 = FUN_14477b664(uVar6);
        local_80 = plVar13[2];
        if (local_88 == 0) {
          uVar6 = FUN_1464d4ba6();
          local_88 = FUN_14477b664(uVar6);
        }
        if (local_80 == 0) {
          local_80 = 0;
          if ((((local_88 != 0) && (local_90 != 0)) &&
              (plVar2 = *(longlong **)(local_88 + 0xb8), plVar2 != (longlong *)0x0)) &&
             (cVar4 = (**(code **)(*plVar2 + 0x108))(), cVar4 != '\0')) {
            uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
            local_80 = FUN_144aff482(uVar6,&local_90);
            if (local_80 != 0) goto LAB_145945ba9;
          }
        }
        else {
LAB_145945ba9:
          lVar12 = local_80;
          if (local_88 == 0) {
            uVar6 = FUN_1464d4ba6();
            local_88 = FUN_14477b664(uVar6);
            lVar12 = local_80;
            if (local_80 == 0) {
              if (local_88 == 0) {
                lVar12 = 0;
              }
              else {
                lVar12 = 0;
                if (local_90 != 0) {
                  plVar2 = *(longlong **)(local_88 + 0xb8);
                  if ((plVar2 == (longlong *)0x0) ||
                     (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
                    lVar12 = 0;
                    local_80 = lVar12;
                  }
                  else {
                    uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
                    lVar12 = FUN_144aff482(uVar6,&local_90);
                    local_80 = lVar12;
                  }
                }
              }
            }
          }
          if ((longlong)local_60 != 0) {
            lVar10 = 0;
            do {
              if (*(longlong *)(local_68 + lVar10) == *(longlong *)(lVar12 + 0x28)) {
                lVar12 = 0;
                goto LAB_145945c4a;
              }
              lVar10 = lVar10 + 8;
            } while ((longlong)local_60 * 8 != lVar10);
          }
        }
LAB_145945bdb:
        plVar13 = plVar13 + 3;
      } while (plVar13 != local_98);
      if (0 < (int)uStack_70) {
        lVar12 = 0;
        do {
          plVar13 = *(longlong **)(local_78 + lVar12 * 8);
          if (plVar13 != (longlong *)0x0) {
            lVar10 = plVar13[1];
            if (lVar10 == 0) {
              uVar6 = FUN_1464af43e();
              lVar10 = FUN_14477b664(uVar6);
              plVar13[1] = lVar10;
            }
            if (plVar13[2] == 0) {
              if ((lVar10 != 0) && (*plVar13 != 0)) {
                plVar2 = *(longlong **)(lVar10 + 0xb8);
                if ((plVar2 == (longlong *)0x0) ||
                   (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
                  plVar13[2] = 0;
                }
                else {
                  uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
                  lVar10 = FUN_144aff482(uVar6,plVar13);
                  plVar13[2] = lVar10;
                  if (lVar10 != 0) goto LAB_14594602f;
                }
              }
            }
            else {
LAB_14594602f:
              if (lVar12 != 0) {
                thunk_FUN_14047a987(&local_58,&DAT_149eb5f2c,1);
              }
              plVar13 = *(longlong **)(local_78 + lVar12 * 8);
              lVar10 = plVar13[1];
              if (lVar10 == 0) {
                uVar6 = FUN_1464af43e();
                lVar10 = FUN_14477b664(uVar6);
                plVar13[1] = lVar10;
              }
              lVar8 = plVar13[2];
              if (lVar8 == 0) {
                if (lVar10 == 0) {
                  lVar8 = 0;
                }
                else {
                  lVar8 = 0;
                  if (*plVar13 != 0) {
                    plVar2 = *(longlong **)(lVar10 + 0xb8);
                    if ((plVar2 == (longlong *)0x0) ||
                       (cVar4 = (**(code **)(*plVar2 + 0x108))(), cVar4 == '\0')) {
                      lVar8 = 0;
                    }
                    else {
                      uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
                      lVar8 = FUN_144aff482(uVar6,plVar13);
                    }
                    plVar13[2] = lVar8;
                  }
                }
              }
              puVar7 = &DAT_14c9485f0;
              if (*(undefined4 **)(lVar8 + 8) != (undefined4 *)0x0) {
                puVar7 = *(undefined4 **)(lVar8 + 8);
              }
              FUN_141710b0e(puVar7,&local_90,1);
              iVar9 = (int)local_88 + -1;
              if ((int)local_88 == 0) {
                iVar9 = 0;
              }
              thunk_FUN_1400020e8(&local_58,local_90,iVar9);
              if (local_90 != 0) {
                FUN_1400020a8();
              }
            }
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 < (int)uStack_70);
      }
    }
    thunk_FUN_14047a987(&local_58,L"]Right Bracket",1);
    iVar9 = local_50 + -1;
    if (local_50 == 0) {
      iVar9 = 0;
    }
    FUN_1402980a2(param_3,local_58,iVar9);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_145945c4a:
  if (local_88 == 0) {
    uVar6 = FUN_1464d4ba6();
    local_88 = FUN_14477b664(uVar6);
  }
  lVar10 = local_80;
  if (local_80 == 0) {
    if (local_88 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = 0;
      if (local_90 != 0) {
        plVar2 = *(longlong **)(local_88 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
          lVar10 = 0;
          local_80 = lVar10;
        }
        else {
          uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar10 = FUN_144aff482(uVar6,&local_90);
          local_80 = lVar10;
        }
      }
    }
  }
  if (*(int *)(lVar10 + 0x38) <= lVar12) goto LAB_145945bdb;
  if (local_88 == 0) {
    uVar6 = FUN_1464d4ba6();
    local_88 = FUN_14477b664(uVar6);
    lVar10 = local_80;
  }
  if (lVar10 == 0) {
    local_80 = 0;
    if (local_88 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = 0;
      if (local_90 != 0) {
        plVar2 = *(longlong **)(local_88 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
          lVar10 = 0;
          local_80 = lVar10;
        }
        else {
          uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar10 = FUN_144aff482(uVar6,&local_90);
          local_80 = lVar10;
        }
      }
    }
  }
  lVar8 = lVar12 * 0x20;
  if ((longlong)(int)uStack_70 < 1) {
    lVar11 = 0;
LAB_145945ddc:
    if ((int)lVar11 == (int)uStack_70) goto LAB_145945cca;
  }
  else {
    lVar11 = 0;
    do {
      lVar1 = *(longlong *)(local_78 + lVar11 * 8);
      if ((lVar1 != 0) &&
         (*(int *)(*(longlong *)(lVar10 + 0x30) + 0x18 + lVar8) < *(int *)(lVar1 + 0x18))) {
        if (local_88 == 0) {
          uVar6 = FUN_1464d4ba6();
          local_88 = FUN_14477b664(uVar6);
          lVar10 = local_80;
        }
        if (lVar10 == 0) {
          local_80 = 0;
          if (local_88 == 0) {
            lVar10 = 0;
          }
          else {
            lVar10 = 0;
            if (local_90 != 0) {
              plVar2 = *(longlong **)(local_88 + 0xb8);
              if ((plVar2 == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
                lVar10 = 0;
                local_80 = lVar10;
              }
              else {
                uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
                lVar10 = FUN_144aff482(uVar6,&local_90);
                local_80 = lVar10;
              }
            }
          }
        }
        uVar3 = uStack_70;
        lVar10 = *(longlong *)(lVar10 + 0x30);
        iVar9 = (int)uStack_70;
        uVar5 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
        if (uStack_70._4_4_ < uVar5) {
          FUN_14881ca6a(&local_78,uVar3 & 0xffffffff);
        }
        memmove((void *)(local_78 + lVar11 * 8 + 8),(void *)(local_78 + lVar11 * 8),
                (ulonglong)(uint)(iVar9 - (int)lVar11) << 3);
        *(longlong *)(local_78 + lVar11 * 8) = lVar10 + lVar8;
        goto LAB_145945ddc;
      }
      lVar11 = lVar11 + 1;
    } while ((int)uStack_70 != lVar11);
LAB_145945cca:
    if (local_88 == 0) {
      uVar6 = FUN_1464d4ba6();
      local_88 = FUN_14477b664(uVar6);
    }
    lVar10 = local_80;
    if (local_80 == 0) {
      if (local_88 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        if (local_90 != 0) {
          plVar2 = *(longlong **)(local_88 + 0xb8);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar2 + 0x108))(), cVar4 == '\0')) {
            lVar10 = 0;
            local_80 = lVar10;
          }
          else {
            uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar10 = FUN_144aff482(uVar6,&local_90);
            local_80 = lVar10;
          }
        }
      }
    }
    uVar3 = uStack_70;
    lVar10 = *(longlong *)(lVar10 + 0x30);
    lVar11 = (longlong)(int)uStack_70;
    uVar5 = (int)uStack_70 + 1;
    uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
    if (uStack_70._4_4_ < uVar5) {
      FUN_14881ca6a(&local_78,uVar3 & 0xffffffff);
    }
    *(longlong *)(local_78 + lVar11 * 8) = lVar8 + lVar10;
  }
  lVar12 = lVar12 + 1;
  goto LAB_145945c4a;
}



// FUNCTION 14594626c FUN_14594626c body=145 status=ok
// SIG undefined FUN_14594626c(void)

void FUN_14594626c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x90);
  local_20 = *(undefined8 *)(param_1 + 0x70);
  local_18 = *(longlong **)(param_1 + 0x78);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_20,param_2,param_3);
  plVar3 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459462fe FUN_1459462fe body=174 status=ok
// SIG undefined FUN_1459462fe(void)

void FUN_1459462fe(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_78 [40];
  undefined *local_50;
  undefined4 *local_48;
  undefined1 local_3c [4];
  undefined4 local_38;
  undefined4 uStack_34;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *(undefined4 *)(param_1 + 100);
  puVar2 = &local_38;
  local_20 = 4;
  local_18 = 2;
  local_50 = &DAT_14cb8ae18;
  local_48 = puVar2;
  FUN_140881f5a(param_4,local_3c,&local_50,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_20) {
      puVar2 = (undefined4 *)CONCAT44(uStack_34,local_38);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(CONCAT44(uStack_34,local_38));
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459463b6 FUN_1459463b6 body=176 status=ok
// SIG undefined FUN_1459463b6(void)

undefined8 * FUN_1459463b6(undefined8 *param_1)

{
  FUN_145946466();
  *param_1 = &PTR_FUN_14bc55ab0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  FUN_14020fad6(param_1 + 0x23,L"WrapU");
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  FUN_14020fad6(param_1 + 0x25,L"WrapV");
  return param_1;
}



// FUNCTION 145946466 FUN_145946466 body=137 status=ok
// SIG undefined FUN_145946466(void)

undefined8 * FUN_145946466(undefined8 *param_1)

{
  FUN_1410832cc();
  *param_1 = &PTR_FUN_14bc46a70;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_14020fad6(param_1 + 0xc,L"SRGB");
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_14020fad6(param_1 + 0xe,L"bFlipGreenChannel");
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_14020fad6(param_1 + 0x10,L"Filter");
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_14020fad6(param_1 + 0x12,L"ColorSpace");
  return param_1;
}



// FUNCTION 1459464f0 FUN_1459464f0 body=242 status=ok
// SIG undefined FUN_1459464f0(void)

void FUN_1459464f0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1459465e4(param_1,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459465e4 FUN_1459465e4 body=14 status=ok
// SIG undefined FUN_1459465e4(void)

void FUN_1459465e4(longlong param_1,undefined8 param_2,byte param_3)

{
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) | param_3;
  }
  return;
}



// FUNCTION 1459465f2 FUN_1459465f2 body=46 status=ok
// SIG undefined FUN_1459465f2(void)

void FUN_1459465f2(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145946620(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ba3b390;
  puVar1[5] = &PTR_FUN_14ba3b790;
  return;
}



// FUNCTION 145946620 FUN_145946620 body=291 status=ok
// SIG undefined FUN_145946620(void)

undefined8 * FUN_145946620(undefined8 *param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  FUN_145946744();
  *param_1 = &PTR_FUN_14b4b7600;
  param_1[5] = &PTR_FUN_14b4b7a00;
  uVar4 = 0;
  param_1[0x3bd] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3be));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x3be),4000);
  param_1[0x3c3] = 0;
  param_1[0x3c4] = 0;
  param_1[0x3c5] = 0;
  param_1[0x3c6] = 0;
  param_1[0x3c7] = 0;
  param_1[0x3c8] = 0;
  param_1[0x3c9] = 0;
  param_1[0x3ca] = 0;
  param_1[0x3cb] = 0x40a0000000000000;
  param_1[0x3cc] = 0;
  param_1[0x3cd] = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *puVar3 = FUN_145a25f2a;
  puVar3[1] = 0;
  puVar3[2] = param_1 + 0x3bd;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x55) = 0;
  param_1[0x3ce] = puVar3 + 2;
  lVar1 = DAT_14cb957d0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) != 0x40000002) {
    bVar2 = FUN_144a61b4f();
    uVar4 = (ulonglong)(bVar2 ^ 1);
  }
  if (*(int *)(lVar1 + uVar4 * 4) != 0) {
    *(undefined1 *)(param_1[0x3ce] + 0x4c) = 1;
  }
  return param_1;
}



// FUNCTION 145946744 FUN_145946744 body=1645 status=ok
// SIG undefined FUN_145946744(void)

undefined8 * FUN_145946744(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_145946dc8();
  *param_1 = &PTR_FUN_14a9e3360;
  param_1[5] = &PTR_FUN_14a9e3760;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  lVar1 = FUN_1413dbcfa();
  param_1[0xc] = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(byte *)((longlong)param_1 + 0xa4) = *(byte *)((longlong)param_1 + 0xa4) & 0xe1;
  FUN_140810d00(param_1 + 0x15,0);
  param_1[0x26] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x2c] = &PTR_FUN_14a5af930;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x44] = 0;
  *(undefined2 *)(param_1 + 0x45) = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  param_1[0x4b] = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = 0;
  *(undefined2 *)(param_1 + 0x4e) = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  FUN_1413dbc9a(param_1 + 0x50);
  FUN_1447400e4(param_1 + 0x77,0x100,0);
  *(undefined4 *)(param_1 + 0x8f) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x47c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x484) = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4fc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x504) = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  FUN_145946dfc(param_1 + 0xaa);
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  FUN_1447400e4(param_1 + 0xc4,0,0);
  param_1[0x27b] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x27c) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x13e4) = 0;
  *(undefined4 *)(param_1 + 0x27d) = 0x7fff;
  param_1[0x28f] = 0;
  *(undefined4 *)(param_1 + 0x290) = 0;
  param_1[0x27e] = 0;
  param_1[0x27f] = 0;
  param_1[0x280] = 0;
  param_1[0x281] = 0;
  param_1[0x282] = 0;
  param_1[0x283] = 0;
  param_1[0x284] = 0;
  param_1[0x285] = 0;
  param_1[0x286] = 0;
  param_1[0x287] = 0;
  param_1[0x288] = 0;
  param_1[0x28b] = 0;
  param_1[0x28c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1484) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x148c) = 0;
  param_1[0x293] = 0;
  *(undefined4 *)(param_1 + 0x294) = 0;
  param_1[0x296] = DAT_14c89603c;
  *(undefined4 *)(param_1 + 0x297) = 1;
  *(undefined4 *)(param_1 + 0x298) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14c4) = 0;
  *(undefined4 *)(param_1 + 0x299) = 0;
  param_1[0x2a0] = 0;
  *(undefined4 *)(param_1 + 0x2a1) = 0;
  param_1[0x29a] = 0;
  param_1[0x29b] = 0;
  param_1[0x29c] = 0;
  param_1[0x29d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x150c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1514) = 0;
  param_1[0x2a4] = 0;
  *(undefined4 *)(param_1 + 0x2a5) = 0;
  param_1[0x2aa] = 0;
  *(undefined4 *)(param_1 + 0x2ab) = 0;
  param_1[0x2a6] = 0;
  param_1[0x2a7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x155c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1564) = 0;
  param_1[0x2ae] = 0;
  *(undefined4 *)(param_1 + 0x2af) = 0;
  param_1[0x2b4] = 0;
  *(undefined4 *)(param_1 + 0x2b5) = 0;
  param_1[0x2b0] = 0;
  param_1[0x2b1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x15ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x15b4) = 0;
  param_1[0x2b8] = 0;
  *(undefined4 *)(param_1 + 0x2b9) = 0;
  param_1[0x2be] = 0;
  *(undefined4 *)(param_1 + 0x2bf) = 0;
  param_1[0x2ba] = 0;
  param_1[699] = 0;
  *(undefined8 *)((longlong)param_1 + 0x15fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1604) = 0;
  param_1[0x2c2] = 0;
  *(undefined4 *)(param_1 + 0x2c3) = 0;
  param_1[0x2c8] = 0;
  *(undefined4 *)(param_1 + 0x2c9) = 0;
  param_1[0x2c4] = 0;
  param_1[0x2c5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x164c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1654) = 0;
  param_1[0x2cc] = 0;
  *(undefined4 *)(param_1 + 0x2cd) = 0;
  param_1[0x2d2] = 0;
  *(undefined4 *)(param_1 + 0x2d3) = 0;
  param_1[0x2ce] = 0;
  param_1[0x2cf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x169c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x16a4) = 0;
  param_1[0x2d6] = 0;
  *(undefined4 *)(param_1 + 0x2d7) = 0;
  *(undefined1 *)(param_1 + 0x2d8) = 0;
  param_1[0x2e6] = 0;
  *(undefined4 *)(param_1 + 0x2e7) = 0;
  param_1[0x2db] = 0;
  param_1[0x2dc] = 0;
  param_1[0x2d9] = 0;
  param_1[0x2da] = 0;
  param_1[0x2e3] = 0;
  param_1[0x2e1] = 0;
  param_1[0x2e2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x173c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1744) = 0;
  param_1[0x2ea] = 0;
  *(undefined4 *)(param_1 + 0x2eb) = 0;
  param_1[0x2f0] = 0;
  *(undefined4 *)(param_1 + 0x2f1) = 0;
  param_1[0x2ec] = 0;
  param_1[0x2ed] = 0;
  *(undefined8 *)((longlong)param_1 + 0x178c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1794) = 0;
  param_1[0x2f4] = 0;
  *(undefined4 *)(param_1 + 0x2f5) = 0;
  param_1[0x2fa] = 0;
  *(undefined4 *)(param_1 + 0x2fb) = 0;
  param_1[0x2f6] = 0;
  param_1[0x2f7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x17dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x17e4) = 0;
  param_1[0x2fe] = 0;
  *(undefined4 *)(param_1 + 0x2ff) = 0;
  param_1[0x305] = 0;
  *(undefined4 *)(param_1 + 0x306) = 0;
  param_1[0x302] = 0;
  param_1[0x300] = 0;
  param_1[0x301] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1834) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x183c) = 0;
  param_1[0x309] = 0;
  *(undefined4 *)(param_1 + 0x30a) = 0;
  param_1[0x30f] = 0;
  *(undefined4 *)(param_1 + 0x310) = 0;
  param_1[0x30b] = 0;
  param_1[0x30c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1884) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x188c) = 0;
  param_1[0x313] = 0;
  *(undefined4 *)(param_1 + 0x314) = 0;
  param_1[0x319] = 0;
  *(undefined4 *)(param_1 + 0x31a) = 0;
  param_1[0x315] = 0;
  param_1[0x316] = 0;
  *(undefined8 *)((longlong)param_1 + 0x18d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x18dc) = 0;
  param_1[0x31d] = 0;
  *(undefined4 *)(param_1 + 0x31e) = 0;
  param_1[0x324] = 0;
  *(undefined4 *)(param_1 + 0x325) = 0;
  param_1[800] = 0;
  param_1[0x321] = 0;
  *(undefined8 *)((longlong)param_1 + 0x192c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1934) = 0;
  param_1[0x328] = 0;
  *(undefined4 *)(param_1 + 0x329) = 0;
  param_1[0x32e] = 0;
  *(undefined4 *)(param_1 + 0x32f) = 0;
  param_1[0x32a] = 0;
  param_1[0x32b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x197c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1984) = 0;
  param_1[0x332] = 0;
  *(undefined4 *)(param_1 + 0x333) = 0;
  param_1[0x339] = 0;
  *(undefined4 *)(param_1 + 0x33a) = 0;
  param_1[0x335] = 0;
  param_1[0x336] = 0;
  *(undefined8 *)((longlong)param_1 + 0x19d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x19dc) = 0;
  param_1[0x33d] = 0;
  *(undefined4 *)(param_1 + 0x33e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a0c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a14) = 0;
  param_1[0x340] = 0;
  param_1[0x341] = 0;
  param_1[0x344] = 0;
  param_1[0x345] = 0;
  FUN_145946fd6(param_1 + 0x342,0x400);
  *(undefined4 *)(param_1 + 0x346) = 0xffffffff;
  FUN_145946e52(param_1 + 0x347);
  *(undefined4 *)(param_1 + 0x392) = 0xffffffff;
  param_1[0x394] = 0;
  *(undefined4 *)(param_1 + 0x395) = 0;
  *(undefined1 *)(param_1 + 0x399) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c94) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1c9c) = 0;
  param_1[0x39a] = 0;
  param_1[0x39b] = 0;
  param_1[0x39c] = 0;
  param_1[0x39d] = 0;
  param_1[0x39e] = 0;
  *(byte *)(param_1 + 0x39f) = *(byte *)(param_1 + 0x39f) & 0xfe;
  *(undefined1 *)((longlong)param_1 + 0x1d49) = 0;
  *(undefined1 *)(param_1 + 0x3bb) = 0;
  *(undefined2 *)(param_1 + 0x3bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d04) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d0c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d19) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d21) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1d34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d2c) = 0;
  *(undefined1 *)(param_1 + 0x3ac) = 0;
  param_1[0x3aa] = 0;
  param_1[0x3ab] = 0;
  param_1[0x3ad] = 0;
  param_1[0x3ae] = 0;
  uVar2 = FUN_145946db2();
  FUN_140670b3c(param_1 + 0x287,uVar2);
  return param_1;
}



// FUNCTION 145946db2 FUN_145946db2 body=21 status=ok
// SIG undefined FUN_145946db2(void)

undefined8 * FUN_145946db2(void)

{
  FUN_145946ebb();
  return &DAT_14c872e20;
}



// FUNCTION 145946dc8 FUN_145946dc8 body=51 status=ok
// SIG undefined FUN_145946dc8(void)

undefined8 * FUN_145946dc8(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14aa3b110;
  param_1[5] = &PTR_LAB_14aa3b3c0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 145946dfc FUN_145946dfc body=86 status=ok
// SIG undefined FUN_145946dfc(void)

void FUN_145946dfc(undefined8 *param_1)

{
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return;
}



// FUNCTION 145946e52 FUN_145946e52 body=105 status=ok
// SIG undefined FUN_145946e52(void)

undefined8 * FUN_145946e52(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0x8000000000;
  FUN_14594733c(param_1,0x40);
  param_1[0x44] = 0;
  *(undefined2 *)(param_1 + 0x45) = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  return param_1;
}



// FUNCTION 145946ebb FUN_145946ebb body=281 status=ok
// SIG undefined FUN_145946ebb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145946ebb(void)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c872e30) {
    FUN_144b3d300(&DAT_14c872e30);
    if (DAT_14c872e30 == -1) {
      DAT_14c872e20 = 0;
      _DAT_14c872e28 = 0;
      atexit((_func_5014 *)&LAB_14278662d);
      _Init_thread_footer(&DAT_14c872e30);
    }
  }
  if (DAT_14c872e34 == '\0') {
    FUN_1446f470e(&local_20,L"EngineNetworkVersion",1);
    local_38 = 0x62915ca3;
    uStack_34 = 0x1c8e4bf7;
    uStack_30 = 0xa30e12c7;
    uStack_2c = 0xc8219df7;
    FUN_1459476e6(&DAT_14c872e20,&local_38,0x24,local_20);
    FUN_1446f470e(&local_40,L"GameNetworkVersion",1);
    local_58 = 0xcc400d24;
    uStack_54 = 0xe0e94e7b;
    uStack_50 = 0x9bf9a283;
    uStack_4c = 0xdcc0c027;
    FUN_1459476e6(&DAT_14c872e20,&local_58,0,local_40);
    DAT_14c872e34 = '\x01';
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145946fd6 FUN_145946fd6 body=709 status=ok
// SIG undefined FUN_145946fd6(void)

void FUN_145946fd6(uint *param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  void *local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = param_2 + -1 + (ulonglong)(param_2 == 0);
  if (uVar3 == 0) {
    bVar1 = 0;
  }
  else {
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    bVar1 = (byte)lVar11 ^ 0x3f;
  }
  uVar6 = 1L << (-bVar1 & 0x3f);
  uVar8 = param_1[6];
  if (uVar6 == (longlong)(int)uVar8) goto LAB_145947201;
  uVar4 = *param_1;
  uVar10 = param_1[1];
  uVar7 = uVar4 - uVar10;
  if (uVar6 < uVar7) goto LAB_145947201;
  uVar5 = (uint)uVar6;
  if ((int)uVar8 < 1) {
    param_1[2] = uVar5 - 1;
    param_1[6] = uVar8 + uVar5;
    if (param_1[7] - uVar8 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
    }
    goto LAB_145947201;
  }
  local_58 = 0;
  uStack_50 = 0;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar6 & 0xffffffff);
  }
  if (uVar3 < 0x80000000) {
    FUN_147bce758(&local_58,uVar6 & 0xffffffff);
    uVar4 = *param_1;
    uVar10 = param_1[1];
    uVar7 = uVar4 - uVar10;
  }
  uVar3 = uStack_50;
  uVar9 = param_1[2] & uVar10;
  uVar8 = param_1[2] & uVar4;
  local_60 = *(void **)(param_1 + 4);
  iVar2 = (uint)uStack_50;
  if (uVar9 < uVar8 || uVar4 == uVar10) {
    local_68 = uStack_50 & 0xffffffff;
    iVar2 = (uint)uStack_50 + uVar7;
    uVar8 = uStack_50._4_4_ - (uint)uStack_50;
    uStack_50._0_4_ = iVar2;
    if (uVar8 < uVar7) {
      FUN_1459472b8(&local_58,local_68);
    }
    if (uVar4 != uVar10) {
      local_60 = (void *)((longlong)local_60 + (ulonglong)uVar9 * 4);
      uVar8 = uVar7;
      goto LAB_145947183;
    }
  }
  else {
    local_68 = CONCAT44(local_68._4_4_,param_1[6]);
    uVar4 = param_1[6] - uVar9;
    lVar11 = (longlong)(int)(uint)uStack_50;
    uStack_50 = CONCAT44(uStack_50._4_4_,(uint)uStack_50 + uVar4);
    if (uStack_50._4_4_ - iVar2 < uVar4) {
      FUN_1459472b8(&local_58,uVar3 & 0xffffffff);
    }
    if ((uint)local_68 != uVar9) {
      memcpy((void *)(lVar11 * 4 + local_58),(void *)((longlong)local_60 + (ulonglong)uVar9 * 4),
             (longlong)(int)uVar4 << 2);
    }
    local_68 = uStack_50 & 0xffffffff;
    iVar2 = (uint)uStack_50 + uVar8;
    if (uStack_50._4_4_ - (uint)uStack_50 < uVar8) {
      uStack_50._0_4_ = iVar2;
      FUN_1459472b8(&local_58,local_68);
    }
    else {
      uStack_50._0_4_ = iVar2;
      if (uVar8 == 0) goto LAB_1459471a2;
    }
LAB_145947183:
    memcpy((void *)((longlong)(int)(uint)local_68 * 4 + local_58),local_60,(longlong)(int)uVar8 << 2
          );
  }
LAB_1459471a2:
  iVar2 = (uint)uStack_50;
  uStack_50 = CONCAT44(uStack_50._4_4_,(uint)uStack_50 + (uVar5 - uVar7));
  if (uStack_50._4_4_ - iVar2 < uVar5 - uVar7) {
    FUN_1459472b8(&local_58);
  }
  if (param_1 + 4 == (uint *)&local_58) {
    param_1[2] = uVar5 - 1;
    param_1[1] = 0;
    *param_1 = uVar7;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 4) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 4) = local_58;
    param_1[6] = (uint)uStack_50;
    param_1[7] = uStack_50._4_4_;
    param_1[2] = uVar5 - 1;
    param_1[1] = 0;
    *param_1 = uVar7;
  }
LAB_145947201:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459472b8 FUN_1459472b8 body=132 status=ok
// SIG undefined FUN_1459472b8(void)

void FUN_1459472b8(longlong param_1,int param_2)

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



// FUNCTION 14594733c FUN_14594733c body=905 status=ok
// SIG undefined FUN_14594733c(void)

void FUN_14594733c(uint *param_1,longlong param_2)

{
  uint *_Dst;
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_288 [32];
  ulonglong local_268;
  uint *local_260;
  uint local_258 [128];
  uint *local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  uVar6 = (param_2 + (ulonglong)(param_2 == 0)) - 1;
  if (uVar6 == 0) {
    uVar3 = 0x40;
  }
  else {
    uVar3 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> uVar3 == 0; uVar3 = uVar3 - 1) {
      }
    }
    uVar3 = uVar3 ^ 0x3f;
  }
  uVar6 = 1L << (-(char)uVar3 & 0x3fU);
  uVar11 = param_1[0x86];
  if (uVar6 == (longlong)(int)uVar11) goto LAB_1459473d0;
  uVar9 = *param_1;
  uVar1 = param_1[1];
  uVar10 = uVar9 - uVar1;
  if (uVar6 < uVar10) goto LAB_1459473d0;
  _Dst = param_1 + 4;
  uVar8 = (uint)uVar6;
  if ((int)uVar11 < 1) {
    param_1[2] = uVar8 - 1;
    param_1[0x86] = uVar11 + uVar8;
    if (param_1[0x87] - uVar11 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_288);
    }
    goto LAB_1459473d0;
  }
  local_58 = (uint *)0x0;
  local_4c = 0x80;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar6 & 0xffffffff);
  }
  local_50 = 0;
  if (uVar3 != 0x39) {
    FUN_147be38b4(local_258,uVar6 & 0xffffffff);
    uVar9 = *param_1;
    uVar1 = param_1[1];
    uVar10 = uVar9 - uVar1;
  }
  uVar12 = param_1[2] & uVar1;
  uVar11 = param_1[2] & uVar9;
  local_260 = *(uint **)(param_1 + 0x84);
  if (*(uint **)(param_1 + 0x84) == (uint *)0x0) {
    local_260 = _Dst;
  }
  if (uVar12 < uVar11 || uVar9 == uVar1) {
    local_268 = (ulonglong)local_50;
    iVar4 = local_50 + uVar10;
    uVar11 = local_4c - local_50;
    local_50 = iVar4;
    if (uVar11 < uVar10) {
      FUN_147be39ae(local_258,local_268);
    }
    if (uVar9 != uVar1) {
      local_260 = local_260 + uVar12;
      uVar11 = uVar10;
      goto LAB_145947581;
    }
  }
  else {
    uVar9 = param_1[0x86];
    uVar7 = uVar9 - uVar12;
    local_268 = (ulonglong)(int)local_50;
    uVar1 = local_50 + uVar7;
    uVar2 = local_4c - local_50;
    local_50 = uVar1;
    if (uVar2 < uVar7) {
      FUN_147be39ae(local_258,local_268);
    }
    if (uVar9 != uVar12) {
      puVar5 = local_58;
      if (local_58 == (uint *)0x0) {
        puVar5 = local_258;
      }
      memcpy(puVar5 + local_268,local_260 + uVar12,(longlong)(int)uVar7 << 2);
    }
    local_268 = (ulonglong)local_50;
    iVar4 = local_50 + uVar11;
    if (local_4c - local_50 < uVar11) {
      local_50 = iVar4;
      FUN_147be39ae(local_258,local_268);
    }
    else {
      local_50 = iVar4;
      if (uVar11 == 0) goto LAB_1459475ae;
    }
LAB_145947581:
    puVar5 = local_58;
    if (local_58 == (uint *)0x0) {
      puVar5 = local_258;
    }
    memcpy(puVar5 + (int)local_268,local_260,(longlong)(int)uVar11 << 2);
  }
LAB_1459475ae:
  uVar9 = local_50 + (uVar8 - uVar10);
  uVar11 = local_4c - local_50;
  local_50 = uVar9;
  if (uVar11 < uVar8 - uVar10) {
    FUN_147be39ae(local_258);
  }
  puVar5 = local_58;
  if (_Dst == local_258) {
    param_1[2] = uVar8 - 1;
    param_1[1] = 0;
    *param_1 = uVar10;
    if (local_58 != (uint *)0x0) {
      FUN_1400020a8(local_58);
    }
  }
  else {
    if (local_58 == (uint *)0x0) {
      memcpy(_Dst,local_258,0x200);
    }
    if (*(longlong *)(param_1 + 0x84) != 0) {
      FUN_1400020a8();
      puVar5 = local_58;
    }
    *(uint **)(param_1 + 0x84) = puVar5;
    param_1[0x86] = local_50;
    param_1[0x87] = local_4c;
    param_1[2] = uVar8 - 1;
    param_1[1] = 0;
    *param_1 = uVar10;
  }
LAB_1459473d0:
  if ((local_48 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459476e6 FUN_1459476e6 body=258 status=ok
// SIG undefined FUN_1459476e6(void)

void FUN_1459476e6(undefined8 *param_1,int *param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2[3] != -0x662bf3f || ((param_2[1] != 0 || *param_2 != 0) || param_2[2] != 0)) {
    piVar2 = (int *)*param_1;
    iVar1 = *(int *)(param_1 + 1);
    lVar4 = (longlong)iVar1;
    if (lVar4 != 0) {
      lVar5 = lVar4 * 0x28;
      piVar3 = piVar2;
      do {
        if ((((*piVar3 == *param_2) && (piVar3[1] == param_2[1])) && (piVar3[2] == param_2[2])) &&
           (piVar3[3] == param_2[3])) {
          if (piVar3 != (int *)0x0) {
            piVar3[4] = param_3;
            *(undefined8 *)(piVar3 + 8) = param_4;
            goto LAB_1459477c6;
          }
          break;
        }
        piVar3 = piVar3 + 10;
        lVar5 = lVar5 + -0x28;
      } while (lVar5 != 0);
    }
    local_48 = *param_2;
    iStack_44 = param_2[1];
    iStack_40 = param_2[2];
    iStack_3c = param_2[3];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_14009063a(param_1,iVar1);
      piVar2 = (int *)*param_1;
    }
    piVar3 = piVar2 + lVar4 * 10;
    *piVar3 = local_48;
    piVar3[1] = iStack_44;
    piVar3[2] = iStack_40;
    piVar3[3] = iStack_3c;
    piVar2[lVar4 * 10 + 4] = param_3;
    piVar2[lVar4 * 10 + 5] = 1;
    (piVar2 + lVar4 * 10 + 6)[0] = 0;
    (piVar2 + lVar4 * 10 + 6)[1] = 0;
    *(undefined8 *)(piVar2 + lVar4 * 10 + 8) = param_4;
  }
LAB_1459477c6:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459477ea FUN_1459477ea body=189 status=ok
// SIG undefined FUN_1459477ea(void)

longlong FUN_1459477ea(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_1459478a8();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 1459478a8 FUN_1459478a8 body=228 status=ok
// SIG undefined FUN_1459478a8(void)

longlong FUN_1459478a8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb605e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_1486c5345;
    local_40 = FUN_141854633;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxMaterialParameterTemplateData",&DAT_14cb605e0,
                  &DAT_1486c5344);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb605e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145947998 FUN_145947998 body=189 status=ok
// SIG undefined FUN_145947998(void)

undefined8 * FUN_145947998(undefined8 *param_1)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [56];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140b96638();
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0x4000;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  *param_1 = &PTR_FUN_14b097860;
  param_1[5] = &PTR_FUN_14b097ed0;
  param_1[6] = &PTR_LAB_14b097f10;
  FUN_140440628(local_50,&DAT_14cb81b60,1);
  FUN_1403719a4(param_1 + 0x6b,local_50);
  FUN_144a2da94(local_50);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145947a56 FUN_145947a56 body=196 status=ok
// SIG undefined FUN_145947a56(void)

void FUN_145947a56(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x2c50) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x2c50) + 0x4460;
    if (param_2 == '\0') {
      FUN_145947b1c(&local_48);
      FUN_1409ca370(lVar1,param_1 + -0x3c00,local_48);
      FUN_144a7b126(lVar1,&local_38,1);
    }
    else {
      FUN_145947b1c(&local_40);
      local_38 = 0;
      FUN_14485c47a(&local_38,param_1 + -0x3c00);
      local_30 = local_40;
      FUN_14113f0c0(&local_38);
      FUN_14053c012(lVar1,&local_38);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145947b1c FUN_145947b1c body=196 status=ok
// SIG undefined FUN_145947b1c(void)

undefined8 * FUN_145947b1c(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc2010) {
    FUN_144b3d300(&DAT_14cbc2010);
    if (DAT_14cbc2010 == -1) {
      builtin_wcsncpy(local_48 + 0x10,L"rgetLock",9);
      builtin_wcsncpy(local_48 + 8,L"ash_AITa",8);
      builtin_wcsncpy(local_48,L"OnStartD",8);
      FUN_1446f470e(&DAT_14cbc2008,local_48,1);
      _Init_thread_footer(&DAT_14cbc2010);
    }
  }
  *param_1 = DAT_14cbc2008;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145947be2 FUN_145947be2 body=70 status=ok
// SIG undefined FUN_145947be2(void)

void FUN_145947be2(longlong param_1)

{
  longlong lVar1;
  
  FUN_145947c28();
  if (*(char *)(param_1 + 0x3b00) == '\x01') {
    lVar1 = FUN_145876332();
    if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x2e90) != 0)) {
      FUN_14480f766(lVar1 + 0x170);
      return;
    }
  }
  return;
}



// FUNCTION 145947c28 FUN_145947c28 body=75 status=ok
// SIG undefined FUN_145947c28(void)

void FUN_145947c28(longlong *param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x5b1) = 0;
  if (*(int *)((longlong)param_1 + 0x2d8c) != 0) {
    FUN_145947c74(param_1 + 0x5b0);
  }
  (**(code **)(*param_1 + 0x6d0))(param_1,param_2 == 0);
  FUN_1403d8a98(param_1,param_2);
  return;
}



// FUNCTION 145947c74 FUN_145947c74 body=48 status=ok
// SIG undefined FUN_145947c74(void)

void FUN_145947c74(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 145947ca4 FUN_145947ca4 body=267 status=ok
// SIG undefined FUN_145947ca4(void)

void FUN_145947ca4(void)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb25ab0 == '\x01') {
    plVar2 = (longlong *)FUN_144a7e30a();
    lVar4 = plVar2[0x22];
    if (lVar4 == 0) {
      (**(code **)(*plVar2 + 1000))(plVar2);
      lVar4 = plVar2[0x22];
    }
    local_38 = 0;
    iVar5 = *(int *)(lVar4 + 0x1d0);
    uVar1 = *(undefined8 *)(lVar4 + 0x1c8);
    local_30 = iVar5;
    if (iVar5 == 0) {
      local_2c = 0;
      iVar5 = 0;
    }
    else {
      FUN_140b856de(&local_38,iVar5,0);
      FUN_140b8566a(local_38,uVar1,iVar5);
      iVar5 = 0;
      if ((longlong)local_30 != 0) {
        lVar3 = (longlong)local_30 << 4;
        lVar4 = local_38;
        do {
          FUN_1413dbde0(lVar4);
          lVar4 = lVar4 + 0x10;
          lVar3 = lVar3 + -0x10;
          iVar5 = local_30;
        } while (lVar3 != 0);
      }
    }
    FUN_1447a1747(local_38,iVar5);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145947db0 FUN_145947db0 body=261 status=ok
// SIG undefined FUN_145947db0(void)

void FUN_145947db0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  iVar4 = *(int *)(param_1 + 0x40);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  local_30 = iVar4;
  if (iVar4 == 0) {
    local_2c = 0;
    uVar3 = 0;
  }
  else {
    FUN_145947ef4(&local_38,iVar4);
    FUN_145947eb6(local_38,uVar6,iVar4);
    uVar3 = *(undefined4 *)(param_1 + 0x40);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
  }
  FUN_144959b6a(uVar6,uVar3);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_145947f4c(param_1 + 0x38,0);
  }
  lVar2 = local_38;
  lVar7 = (longlong)local_30;
  if (lVar7 == 0) {
    iVar4 = 0;
  }
  else {
    lVar5 = 0;
    do {
      if ((*(int *)(lVar2 + 8 + lVar5) != 0) &&
         (plVar1 = *(longlong **)(lVar2 + lVar5), plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x60))();
      }
      lVar5 = lVar5 + 0x10;
      iVar4 = local_30;
    } while (lVar7 * 0x10 != lVar5);
  }
  FUN_144959b6a(local_38,iVar4);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145947eb6 FUN_145947eb6 body=61 status=ok
// SIG undefined FUN_145947eb6(void)

void FUN_145947eb6(undefined8 *param_1,longlong param_2,int param_3)

{
  do {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_14009d848(param_1,param_2);
    param_1 = param_1 + 2;
    param_2 = param_2 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 145947ef4 FUN_145947ef4 body=88 status=ok
// SIG undefined FUN_145947ef4(void)

void FUN_145947ef4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 145947f4c FUN_145947f4c body=96 status=ok
// SIG undefined FUN_145947f4c(void)

void FUN_145947f4c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
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



// FUNCTION 145947fac FUN_145947fac body=151 status=ok
// SIG undefined FUN_145947fac(void)

void FUN_145947fac(undefined8 param_1,longlong param_2)

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
  FUN_145948044(param_1,local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145948044 FUN_145948044 body=9 status=ok
// SIG undefined FUN_145948044(void)

void FUN_145948044(longlong param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  undefined8 uStack_20;
  ulonglong uStack_18;
  
  if (param_2 != '\0') {
    return;
  }
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 0x98) & 0x20) != 0) {
    *(byte *)(param_1 + 0x98) = *(byte *)(param_1 + 0x98) & 0xdf;
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x40),0);
    lVar4 = *(longlong *)(param_1 + 0x30);
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0x178) == '\x03')) {
      lVar4 = *(longlong *)(lVar4 + 0x1b0);
      if (lVar4 != 0) {
        uVar2 = FUN_144a7b040();
        plVar3 = (longlong *)FUN_144718840(lVar4,uVar2);
        if (plVar3 != (longlong *)0x0) {
          lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
          if (lVar4 != 0) {
            uStack_28 = 0;
            uStack_20 = 0;
            FUN_14592b5f4(lVar4);
          }
        }
      }
      lVar4 = param_1 + 0xa0;
      cVar1 = FUN_1403ae288(lVar4);
      if (cVar1 != '\0') {
        lVar5 = FUN_14008e0ae(lVar4);
        if (*(longlong *)(param_1 + 0xd0) != 0) {
          FUN_14480f766(lVar5 + 0x198);
        }
        lVar5 = FUN_14008e0ae(lVar4);
        if (*(longlong *)(param_1 + 0xd8) != 0) {
          FUN_14480f766(lVar5 + 0x240);
        }
        lVar5 = FUN_14008e0ae(lVar4);
        if (*(longlong *)(param_1 + 0xe0) != 0) {
          FUN_14480f766(lVar5 + 0x168);
        }
        lVar4 = FUN_14008e0ae(lVar4);
        if (*(longlong *)(param_1 + 0xe8) != 0) {
          FUN_14480f766(lVar4 + 0x138);
        }
      }
      if (((*(byte *)(param_1 + 0x98) & 8) != 0) &&
         ((*(char *)(*(longlong *)(param_1 + 0x60) + 0x144) != '\0' ||
          (*(char *)(param_1 + 0x99) == '\x01')))) {
        FUN_148f1516c(param_1);
      }
    }
    if (*(char *)(param_1 + 0x99) != '\x01') {
      FUN_1458d9b9a(param_1);
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145948056 FUN_145948056 body=145 status=ok
// SIG undefined FUN_145948056(void)

undefined8 * FUN_145948056(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1407f5d04(param_1,uVar1);
  *param_1 = &PTR_FUN_14afd1ad0;
  param_1[5] = &PTR_FUN_14afd25a0;
  param_1[6] = &PTR_LAB_14afd25e0;
  param_1[0x55] = &PTR_FUN_14afd2630;
  param_1[0x56] = &PTR_FUN_14afd26b0;
  param_1[0x57] = &PTR_FUN_14afd26c0;
  param_1[0x11e] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  *(undefined1 *)(param_1 + 0x11d) = 0;
  FUN_140388f42(param_1,0);
  return param_1;
}



// FUNCTION 1459480e8 FUN_1459480e8 body=311 status=ok
// SIG undefined FUN_1459480e8(void)

longlong * FUN_1459480e8(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar6 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b420e40;
  plVar1 = plVar6 + 2;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[8] = 0;
  plVar6[9] = 0;
  plVar6[2] = (longlong)&PTR_FUN_14b420e58;
  *(undefined8 *)((longlong)plVar6 + 0x4c) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x54) = 0;
  *(undefined4 *)((longlong)plVar6 + 0x5c) = 0;
  local_60 = plVar1;
  local_58 = plVar6;
  FUN_145948220(&local_60,plVar1);
  uVar3 = *(undefined1 *)(param_1 + 0x18);
  local_68 = *(undefined8 *)(param_4 + 0x20);
  uVar5 = FUN_140c57d2c(param_1,param_1 + 0x20);
  local_78 = uVar3;
  cVar4 = FUN_1413dbe2e(plVar1,param_4,param_1,uVar5);
  if (cVar4 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar6;
    if (plVar6 == (longlong *)0x0) goto LAB_1459481d6;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    plVar6 = local_58;
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
LAB_1459481d6:
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145948220 FUN_145948220 body=162 status=ok
// SIG undefined FUN_145948220(void)

void FUN_145948220(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14594825f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14594825f;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14594825f:
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
                    /* WARNING: Could not recover jumptable at 0x0001459482be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1459482c2 FUN_1459482c2 body=96 status=ok
// SIG undefined FUN_1459482c2(void)

void FUN_1459482c2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 param_5)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_4;
  uStack_24 = param_4[1];
  uStack_20 = param_4[2];
  uStack_1c = param_4[3];
  local_18 = *(undefined8 *)(param_4 + 4);
  local_38 = param_5;
  FUN_145948324(param_1 + -0x960,local_28,param_3,&local_28);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145948324 FUN_145948324 body=176 status=ok
// SIG undefined FUN_145948324(void)

void FUN_145948324(longlong *param_1,longlong *param_2,undefined1 param_3,undefined4 *param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  local_50 = 0x7013;
  local_48 = 0;
  if ((*param_2 != 0) || ((int)param_2[1] != 0x7013)) {
    local_58 = *param_2;
    local_50 = (int)param_2[1];
  }
  local_38 = *param_4;
  uStack_34 = param_4[1];
  uStack_30 = param_4[2];
  uStack_2c = param_4[3];
  local_28 = *(undefined8 *)(param_4 + 4);
  local_20 = param_5;
  local_40 = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cb61bd8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_58);
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1459483d5 FUN_1459483d5 body=115 status=ok
// SIG undefined FUN_1459483d5(void)

void FUN_1459483d5(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14108ad62(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ad2d030;
  puVar1[5] = &PTR_FUN_14ad2d2f0;
  *(undefined1 *)(puVar1 + 7) = 2;
  puVar1[8] = 0;
  FUN_145948448(puVar1 + 9);
  *(undefined1 *)(puVar1 + 0xd) = 2;
  puVar1[0xe] = 0;
  puVar1[0x10] = 0;
  *(undefined1 *)(puVar1 + 0x11) = 4;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  *(undefined1 *)(puVar1 + 0x14) = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0x41200000;
  return;
}



// FUNCTION 145948448 FUN_145948448 body=14 status=ok
// SIG undefined FUN_145948448(void)

undefined8 * FUN_145948448(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 145948456 FUN_145948456 body=40 status=ok
// SIG undefined FUN_145948456(void)

undefined8 FUN_145948456(undefined8 param_1,int param_2)

{
  FUN_14594847e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14594847e FUN_14594847e body=89 status=ok
// SIG undefined FUN_14594847e(void)

void FUN_14594847e(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bb80120;
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_144760e21(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1459484dc FUN_1459484dc body=228 status=ok
// SIG undefined FUN_1459484dc(void)

longlong FUN_1459484dc(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb64648 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14598ebf0;
    local_38 = &LAB_1487046e3;
    local_40 = FUN_145a9e771;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillComponentSetData",&DAT_14cb64648,&DAT_1487046e2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb64648;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459485ce FUN_1459485ce body=228 status=ok
// SIG undefined FUN_1459485ce(void)

longlong FUN_1459485ce(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba9e80 == 0) {
    local_30 = &local_10;
    local_10 = FUN_143d83bb4;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14650e910;
    local_38 = &LAB_148c0cc7d;
    local_40 = &LAB_145dc21cd;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0xbe0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakEcho4StandIn",&DAT_14cba9e80,&DAT_148c0cc7c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba9e80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1459486b4 FUN_1459486b4 body=40 status=ok
// SIG undefined FUN_1459486b4(void)

undefined8 FUN_1459486b4(undefined8 param_1,int param_2)

{
  FUN_1459486dc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1459486dc FUN_1459486dc body=233 status=ok
// SIG undefined FUN_1459486dc(void)

void FUN_1459486dc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_14b178ec0;
  plVar3 = (longlong *)param_1[0x10];
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
  FUN_145948812(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_14594885f(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  lVar4 = 0x48;
  do {
    FUN_1459487c5(*(undefined8 *)((longlong)param_1 + lVar4),
                  *(undefined4 *)((longlong)param_1 + lVar4 + 8));
    if (*(longlong *)((longlong)param_1 + lVar4) != 0) {
      FUN_1400020a8();
    }
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != 0x28);
  FUN_1459488ac(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1459487c5 FUN_1459487c5 body=77 status=ok
// SIG undefined FUN_1459487c5(void)

void FUN_1459487c5(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145948812 FUN_145948812 body=77 status=ok
// SIG undefined FUN_145948812(void)

void FUN_145948812(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14594885f FUN_14594885f body=77 status=ok
// SIG undefined FUN_14594885f(void)

void FUN_14594885f(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1459488ac FUN_1459488ac body=77 status=ok
// SIG undefined FUN_1459488ac(void)

void FUN_1459488ac(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145948904 FUN_145948904 body=215 status=ok
// SIG undefined FUN_145948904(void)

undefined8 * FUN_145948904(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14bc588d0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[10] = 2;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  FUN_144a5dc74(param_1 + 0x34);
  return param_1;
}



// FUNCTION 1459489dc FUN_1459489dc body=94 status=ok
// SIG undefined FUN_1459489dc(void)

void FUN_1459489dc(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 unaff_RBP;
  
  if (param_2 != 0) {
    lVar2 = FUN_1409e484c();
    cVar1 = *(char *)(lVar2 + 0x50);
    if (cVar1 != param_3) {
      if (*(char *)(param_1 + 0x178) == '\x03') {
        lVar2 = FUN_1409e484c(param_1,param_2);
        *(char *)(lVar2 + 0x50) = param_3;
      }
      FUN_145948a3a(&DAT_14cbd0a50,param_1,param_2,
                    CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar1) & 0xffffffff,param_3);
    }
  }
  return;
}



// FUNCTION 145948a3a FUN_145948a3a body=205 status=ok
// SIG undefined FUN_145948a3a(void)

void FUN_145948a3a(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar8 = false;
  do {
    lVar6 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar6) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar6), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4,param_5),
           cVar4 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar8) {
          return;
        }
        goto LAB_145948aed;
      }
    }
    uVar5 = uVar7 - 1;
    bVar8 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145948aed:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145948b08 FUN_145948b08 body=152 status=ok
// SIG undefined FUN_145948b08(void)

void FUN_145948b08(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(longlong *)(param_1 + 0x28) = param_3;
  uVar2 = FUN_14083f088(param_2);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x270);
  plVar1 = (longlong *)**(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,&local_38);
    *(undefined4 *)(param_1 + 0x30) = local_38;
    *(undefined4 *)(param_1 + 0x34) = uStack_34;
    *(undefined4 *)(param_1 + 0x38) = uStack_30;
    *(undefined4 *)(param_1 + 0x3c) = uStack_2c;
  }
  if (param_4 != 0) {
    uVar2 = FUN_1475e5c30(param_4,*(undefined2 *)(param_3 + 0x16));
    *(undefined8 *)(param_1 + 0x48) = uVar2;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145948bd4 FUN_145948bd4 body=186 status=ok
// SIG undefined FUN_145948bd4(void)

undefined8 * FUN_145948bd4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_14480568a(param_1,uVar1);
  *param_1 = &PTR_FUN_14aeb5eb0;
  param_1[5] = &PTR_FUN_14aeb68b0;
  param_1[6] = &PTR_LAB_14aeb68f0;
  param_1[0x55] = &PTR_FUN_14aeb6940;
  param_1[0x56] = &PTR_FUN_14aeb69c0;
  param_1[0x57] = &PTR_FUN_14aeb69d0;
  param_1[0xc4] = &PTR_FUN_14aeb6a00;
  param_1[0xc5] = 0x3f800000;
  param_1[0xc6] = 0x3f80000000000000;
  param_1[199] = 0x40e0000040000000;
  *(undefined2 *)(param_1 + 200) = 0;
  param_1[0xc9] = 0;
  *(undefined1 *)(param_1 + 0xca) = 0;
  *(byte *)((longlong)param_1 + 0x2de) = *(byte *)((longlong)param_1 + 0x2de) & 0xef;
  return param_1;
}



// FUNCTION 145948c8e FUN_145948c8e body=40 status=ok
// SIG undefined FUN_145948c8e(void)

undefined8 FUN_145948c8e(undefined8 param_1,int param_2)

{
  FUN_145948cb6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145948cb6 FUN_145948cb6 body=51 status=ok
// SIG undefined FUN_145948cb6(void)

void FUN_145948cb6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b551890;
  param_1[5] = &PTR_LAB_14b551b30;
  FUN_145948cea(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145948cea FUN_145948cea body=59 status=ok
// SIG undefined FUN_145948cea(void)

void FUN_145948cea(longlong *param_1)

{
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_145948d25(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145948d25 FUN_145948d25 body=44 status=ok
// SIG undefined FUN_145948d25(void)

void FUN_145948d25(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    do {
      FUN_1449db362(param_1);
      param_1 = param_1 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145948d52 FUN_145948d52 body=536 status=ok
// SIG undefined FUN_145948d52(void)

void FUN_145948d52(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  int local_15c;
  undefined1 local_158 [4];
  undefined4 local_154;
  undefined4 local_b4;
  undefined4 local_88;
  int local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_1446dcc8c();
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
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  iVar1 = local_54;
  memset(local_158,0,0x100);
  local_88 = 0xffffffff;
  local_154 = 0x3f800000;
  local_b4 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_158);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_158);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  local_15c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_15c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_15c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_168 = local_40;
  local_178 = local_50;
  uStack_174 = uStack_4c;
  uStack_170 = uStack_48;
  uStack_16c = uStack_44;
  local_188 = local_15c != 0;
  puVar4 = local_158;
  if (puVar3 != (undefined1 *)0x0) {
    puVar4 = puVar3;
  }
  puVar3 = (undefined1 *)0x0;
  if (iVar1 != 0) {
    puVar3 = puVar4;
  }
  uVar2 = FUN_1413dd462(param_1,&local_178,iVar1 != 0,puVar3);
  *param_3 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145948f6c FUN_145948f6c body=130 status=ok
// SIG undefined FUN_145948f6c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145948f6c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c83f0e0) {
    FUN_144b3d300(&DAT_14c83f0e0);
    if (DAT_14c83f0e0 == -1) {
      FUN_145948fee(&DAT_14c83efb8);
      _DAT_14c83efb8 = &PTR_FUN_149e055a0;
      _DAT_14c83f0d0 = 0;
      uRam000000014c83f0d8 = 0;
      atexit((_func_5014 *)&LAB_14274da38);
      _Init_thread_footer(&DAT_14c83f0e0);
    }
  }
  return &DAT_14c83efb8;
}



// FUNCTION 145948fee FUN_145948fee body=201 status=ok
// SIG undefined FUN_145948fee(void)

undefined8 * FUN_145948fee(undefined8 *param_1)

{
  FUN_144a81de8();
  *param_1 = &PTR_FUN_149e2df90;
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 7),4000);
  FUN_144a5dc74(param_1 + 0xc);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 2;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  return param_1;
}



// FUNCTION 1459490b7 FUN_1459490b7 body=95 status=ok
// SIG undefined FUN_1459490b7(void)

int FUN_1459490b7(ushort param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)((longlong)&DAT_14ca814d0 + (ulonglong)param_1 * 0x3c + 4);
  iVar4 = 0;
  if ((uVar1 >> 0x1b & 3) != 0) {
    iVar2 = FUN_1413dd778(param_2);
    iVar3 = FUN_1413dd778(param_3);
    if (((iVar3 != 0 || iVar2 != 0) && (iVar4 = 2, ((byte)(uVar1 >> 0x1b) & 3) != 1)) &&
       (iVar4 = iVar2, iVar3 != 0)) {
      iVar4 = iVar3;
    }
  }
  return iVar4;
}



// FUNCTION 145949116 FUN_145949116 body=441 status=ok
// SIG undefined FUN_145949116(void)

longlong * FUN_145949116(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_108 [32];
  undefined2 *local_e8;
  undefined1 local_e0 [16];
  longlong *local_d0;
  longlong *local_c8;
  undefined2 local_c0 [2];
  undefined4 local_bc;
  code *local_b8;
  undefined4 local_b0;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((param_3[1] != 0) && (param_3[2] != 0)) && (0 < *(int *)(param_3[2] + 8))) {
    plVar4 = (longlong *)FUN_1459492f6(param_3);
    plVar1 = plVar4 + 2;
    local_d0 = plVar1;
    local_c8 = plVar4;
    FUN_145949374(&local_d0,plVar1);
    lVar5 = FUN_1459492d0(*param_3);
    if (lVar5 != 0) {
      fVar6 = 1.1754944e-38;
      if (1.1754944e-38 <= *(float *)(param_1 + 0x20)) {
        fVar6 = *(float *)(param_1 + 0x20);
      }
      local_b8 = FUN_1458b4488;
      local_b0 = 0;
      FUN_145949416(local_e0,&local_d0,&local_b8);
      local_b8 = (code *)0x0;
      local_b0 = 0;
      FUN_14487d8d8(&local_b8,local_e0);
      local_78 = 1;
      local_e8 = local_c0;
      local_c0[0] = 0;
      local_bc = 0xbf800000;
      FUN_1406f4044(lVar5,plVar4 + 9,&local_b8,fVar6);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
      FUN_1449db362(local_e0);
    }
    plVar3 = local_c8;
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_c8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_c8)(local_c8);
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
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_108);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1459492d0 FUN_1459492d0 body=38 status=ok
// SIG undefined FUN_1459492d0(void)

undefined8 FUN_1459492d0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14479d2ce(*(longlong *)(param_1 + 8) + 0x50);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0xf0);
  }
  return uVar2;
}



// FUNCTION 1459492f6 FUN_1459492f6 body=126 status=ok
// SIG undefined FUN_1459492f6(void)

void FUN_1459492f6(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14b4195a0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[2] = &PTR_LAB_14b419c58;
  puVar2[5] = *param_1;
  puVar2[6] = param_1[1];
  lVar1 = param_1[2];
  puVar2[7] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined1 *)(puVar2 + 8) = 0;
  puVar2[2] = &PTR_FUN_14b4195b8;
  puVar2[9] = 0;
  return;
}



// FUNCTION 145949374 FUN_145949374 body=162 status=ok
// SIG undefined FUN_145949374(void)

void FUN_145949374(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1459493b3;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1459493b3;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1459493b3:
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
                    /* WARNING: Could not recover jumptable at 0x000145949412. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145949416 FUN_145949416 body=300 status=ok
// SIG undefined FUN_145949416(void)

longlong * FUN_145949416(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b4195d0;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b4195d0;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 145949542 FUN_145949542 body=40 status=ok
// SIG undefined FUN_145949542(void)

undefined8 FUN_145949542(undefined8 param_1,int param_2)

{
  FUN_14594956a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14594956a FUN_14594956a body=176 status=ok
// SIG undefined FUN_14594956a(void)

void FUN_14594956a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aee3120;
  param_1[5] = &PTR_FUN_14aee33c0;
  if (param_1[0x16] != 0) {
    plVar3 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = (longlong *)param_1[0x14];
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
  plVar3 = (longlong *)param_1[0x12];
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
  FUN_145a22d80(param_1 + 7);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145949626 FUN_145949626 body=31 status=ok
// SIG undefined FUN_145949626(void)

undefined8 FUN_145949626(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145949646 FUN_145949646 body=177 status=ok
// SIG undefined FUN_145949646(void)

void FUN_145949646(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4);
      if (lVar2 != 0) {
        FUN_1459496f8(lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar4);
  }
  lVar3 = param_1[4];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = param_1[3];
    lVar4 = 0;
    do {
      FUN_1401465ec(param_1[2],*(undefined8 *)(lVar1 + lVar4));
      lVar4 = lVar4 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar4);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459496f8 FUN_1459496f8 body=115 status=ok
// SIG undefined FUN_1459496f8(void)

void FUN_1459496f8(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_140146544(*(undefined8 *)(param_1 + 0xa0),*(longlong *)(param_1 + 0x30),
                  *(undefined4 *)(param_1 + 0xa8));
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_140146544(*(undefined8 *)(param_1 + 0xa0),*(longlong *)(param_1 + 0x38),
                  *(undefined4 *)(param_1 + 0xa8));
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_14594976c(param_1 + 0x50);
  FUN_1459497a2(param_1);
  return;
}



// FUNCTION 14594976c FUN_14594976c body=53 status=ok
// SIG undefined FUN_14594976c(void)

void FUN_14594976c(longlong *param_1)

{
  FUN_145949806();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1459497a2 FUN_1459497a2 body=99 status=ok
// SIG undefined FUN_1459497a2(void)

void FUN_1459497a2(longlong *param_1)

{
  FUN_140146dff(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_140146e36(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_14484f3ad(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145949806 FUN_145949806 body=374 status=ok
// SIG undefined FUN_145949806(void)

void FUN_145949806(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      plVar4 = *(longlong **)(*local_70 + 0x20 + (longlong)iStack_54 * 0xb0);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14594997e(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14594997e FUN_14594997e body=112 status=ok
// SIG undefined FUN_14594997e(void)

void FUN_14594997e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xb0,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xb0)) {
      uVar2 = uVar1 / 0xb0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xb0,0x10);
  }
  return;
}



// FUNCTION 1459499ee FUN_1459499ee body=132 status=ok
// SIG undefined FUN_1459499ee(void)

void FUN_1459499ee(longlong param_1,int param_2)

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



// FUNCTION 145949a74 FUN_145949a74 body=320 status=ok
// SIG undefined FUN_145949a74(void)

void FUN_145949a74(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined8 *local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_80 = *(longlong *)(param_2 + 8);
  local_78 = param_2;
  local_70 = param_3;
  if (local_80 != 0) {
    if (*(longlong *)(param_1 + 0x38) == 0) {
      FUN_145949bb6(&local_98);
      lVar1 = *(longlong *)(param_1 + 0x38);
      if (lVar1 == local_98) {
        if (local_90 != 0) {
          FUN_1470fbcb6(&local_98);
        }
      }
      else {
        if (lVar1 != 0) {
          FUN_1457087f8((longlong *)(param_1 + 0x38));
        }
        *(longlong *)(param_1 + 0x38) = local_98;
        *(longlong *)(param_1 + 0x40) = local_90;
        *(undefined8 *)(param_1 + 0x48) = local_88;
      }
    }
    else {
      FUN_142b5115e(param_1);
    }
    local_58 = 0;
    local_48 = &PTR_LAB_14a1decb0;
    local_40 = &local_70;
    local_38 = &local_78;
    local_30 = &local_80;
    local_68 = FUN_1413dd93e;
    AcquireSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x40));
    FUN_1413dd93e(&local_40,*(undefined8 *)(param_1 + 0x38));
    ReleaseSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x40));
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145949bb6 FUN_145949bb6 body=107 status=ok
// SIG undefined FUN_145949bb6(void)

undefined8 * FUN_145949bb6(undefined8 *param_1)

{
  undefined8 *puVar1;
  PSRWLOCK SRWLock;
  undefined4 *puVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *param_1 = puVar1;
  SRWLock = (PSRWLOCK)FUN_14001cc68(8,0x10);
  InitializeSRWLock(SRWLock);
  param_1[1] = SRWLock;
  puVar2 = (undefined4 *)FUN_14001cc68(4,0x10);
  *puVar2 = 1;
  param_1[2] = puVar2;
  return param_1;
}



// FUNCTION 145949c22 FUN_145949c22 body=63 status=ok
// SIG undefined FUN_145949c22(void)

void FUN_145949c22(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145949c62(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 145949c62 FUN_145949c62 body=91 status=ok
// SIG undefined FUN_145949c62(void)

ulonglong FUN_145949c62(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 145949cc4 FUN_145949cc4 body=221 status=ok
// SIG undefined FUN_145949cc4(void)

longlong FUN_145949cc4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9986d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_146f03ce1;
    local_40 = FUN_14628a71b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/IrisCore",L"NetObjectFilterConfig",&DAT_14c9986d8,&DAT_146f03ce0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9986d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145949da8 FUN_145949da8 body=221 status=ok
// SIG undefined FUN_145949da8(void)

longlong FUN_145949da8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9986f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_146f03ce5;
    local_40 = &LAB_14628a73e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/IrisCore",L"NetObjectFilter",&DAT_14c9986f0,&DAT_146f03ce4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9986f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145949e8c FUN_145949e8c body=221 status=ok
// SIG undefined FUN_145949e8c(void)

longlong FUN_145949e8c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9986c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_146f03cdd;
    local_40 = FUN_14628a6b8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000009;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/IrisCore",L"NetObjectFactory",&DAT_14c9986c0,&DAT_146f03cdc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9986c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145949f70 FUN_145949f70 body=221 status=ok
// SIG undefined FUN_145949f70(void)

longlong FUN_145949f70(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c99e9b0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1470459d7;
    local_40 = FUN_146297047;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/AudioExtensions",L"SoundfieldEffectBase",&DAT_14c99e9b0,&DAT_1470459d6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99e9b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594a054 FUN_14594a054 body=221 status=ok
// SIG undefined FUN_14594a054(void)

longlong FUN_14594a054(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c99f9a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147065011;
    local_40 = FUN_14629d402;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/AudioLinkCore",L"AudioLinkSettingsAbstract",&DAT_14c99f9a0,
                  &DAT_147065010);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99f9a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594a138 FUN_14594a138 body=221 status=ok
// SIG undefined FUN_14594a138(void)

longlong FUN_14594a138(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9ac2d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14712a0d1;
    local_40 = FUN_1462b4a3f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/MaterialShaderQualitySettings",L"ShaderPlatformQualitySettings",
                  &DAT_14c9ac2d0,&DAT_14712a0d0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9ac2d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594a21c FUN_14594a21c body=221 status=ok
// SIG undefined FUN_14594a21c(void)

longlong FUN_14594a21c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa18c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14744fd07;
    local_40 = FUN_146322b10;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeEditLayerBase",&DAT_14caa18c0,&DAT_14744fd06);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa18c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594a300 FUN_14594a300 body=221 status=ok
// SIG undefined FUN_14594a300(void)

longlong FUN_14594a300(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb113a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147db7f4b;
    local_40 = FUN_146410ba2;
    local_48 = L"Editor";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"HLODBuilder",&DAT_14cb113a0,&DAT_147db7f4a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb113a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594a3e4 FUN_14594a3e4 body=221 status=ok
// SIG undefined FUN_14594a3e4(void)

longlong FUN_14594a3e4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab2458 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147533137;
    local_40 = FUN_14633b578;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneSectionChannelOverrideRegistry",&DAT_14cab2458,
                  &DAT_147533136);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab2458;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594a4c8 FUN_14594a4c8 body=221 status=ok
// SIG undefined FUN_14594a4c8(void)

longlong FUN_14594a4c8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cabc248 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14780ce5f;
    local_40 = FUN_146364ee7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/MediaAssets",L"MediaTimeStampInfo",&DAT_14cabc248,&DAT_14780ce5e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabc248;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594a5ac FUN_14594a5ac body=221 status=ok
// SIG undefined FUN_14594a5ac(void)

longlong FUN_14594a5ac(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac6518 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14788c7f3;
    local_40 = &LAB_1458e3956;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/Engine",L"PlatformInterfaceBase",&DAT_14cac6518,&DAT_14788c7f2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac6518;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594a690 FUN_14594a690 body=221 status=ok
// SIG undefined FUN_14594a690(void)

longlong FUN_14594a690(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cabf978 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14786100f;
    local_40 = FUN_146371575;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"ContentBundleTypeFactory",&DAT_14cabf978,&DAT_14786100e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabf978;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594a774 FUN_14594a774 body=221 status=ok
// SIG undefined FUN_14594a774(void)

longlong FUN_14594a774(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac8ea0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478adcd1;
    local_40 = &LAB_1458fc233;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"VariableFrameStrippingSettings",&DAT_14cac8ea0,&DAT_1478adcd0)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac8ea0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594a858 FUN_14594a858 body=221 status=ok
// SIG undefined FUN_14594a858(void)

longlong FUN_14594a858(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac90d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478ae1ad;
    local_40 = &LAB_145a6f8cd;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xe0;
    FUN_14081cfa3(L"/Script/Engine",L"WorldPartitionRuntimeCellData",&DAT_14cac90d0,&DAT_1478ae1ac);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac90d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594a93c FUN_14594a93c body=221 status=ok
// SIG undefined FUN_14594a93c(void)

longlong FUN_14594a93c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caca050 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478c973b;
    local_40 = FUN_14639e925;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000b;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"NavigationSystemBase",&DAT_14caca050,&DAT_1478c973a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caca050;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594aa20 FUN_14594aa20 body=221 status=ok
// SIG undefined FUN_14594aa20(void)

longlong FUN_14594aa20(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cacb158 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478dec77;
    local_40 = FUN_1463a17dd;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/Engine",L"AnimBoneCompressionCodec",&DAT_14cacb158,&DAT_1478dec76);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacb158;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594ab04 FUN_14594ab04 body=221 status=ok
// SIG undefined FUN_14594ab04(void)

longlong FUN_14594ab04(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cacb3c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478e29ef;
    local_40 = FUN_1463a2229;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"AnimCurveCompressionSettings",&DAT_14cacb3c0,&DAT_1478e29ee);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacb3c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594abe8 FUN_14594abe8 body=221 status=ok
// SIG undefined FUN_14594abe8(void)

longlong FUN_14594abe8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cad6460 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a646fd;
    local_40 = FUN_1463c44ca;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/Engine",L"DialogueVoice",&DAT_14cad6460,&DAT_147a646fc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad6460;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594accc FUN_14594accc body=221 status=ok
// SIG undefined FUN_14594accc(void)

longlong FUN_14594accc(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cadaa88 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147aa3b6f;
    local_40 = FUN_1463ca42e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/Engine",L"TouchInterface",&DAT_14cadaa88,&DAT_147aa3b6e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cadaa88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594adb0 FUN_14594adb0 body=221 status=ok
// SIG undefined FUN_14594adb0(void)

longlong FUN_14594adb0(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cae46c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147af1551;
    local_40 = FUN_14352fa87;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/Engine",L"InheritableComponentHandler",&DAT_14cae46c0,&DAT_147af1550);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cae46c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594ae94 FUN_14594ae94 body=221 status=ok
// SIG undefined FUN_14594ae94(void)

longlong FUN_14594ae94(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caf2aa8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147be68a1;
    local_40 = FUN_1463eddd9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"OnlineEngineInterface",&DAT_14caf2aa8,&DAT_147be68a0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caf2aa8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594af78 FUN_14594af78 body=221 status=ok
// SIG undefined FUN_14594af78(void)

longlong FUN_14594af78(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caf7e88 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147c8aa33;
    local_40 = FUN_140396f1e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x420;
    FUN_14081cfa3(L"/Script/Engine",L"PhysicsConstraintTemplate",&DAT_14caf7e88,&DAT_147c8aa32);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caf7e88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594b05c FUN_14594b05c body=221 status=ok
// SIG undefined FUN_14594b05c(void)

longlong FUN_14594b05c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb01448 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147cdb063;
    local_40 = FUN_145c326e7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x458;
    FUN_14081cfa3(L"/Script/Engine",L"SpecularProfile",&DAT_14cb01448,&DAT_147cdb062);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb01448;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594b144 FUN_14594b144 body=221 status=ok
// SIG undefined FUN_14594b144(void)

longlong FUN_14594b144(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb0bdb8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147d73a73;
    local_40 = FUN_14640903c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xb8;
    FUN_14081cfa3(L"/Script/Engine",L"TimelineTemplate",&DAT_14cb0bdb8,&DAT_147d73a72);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0bdb8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594b228 FUN_14594b228 body=221 status=ok
// SIG undefined FUN_14594b228(void)

longlong FUN_14594b228(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1d270 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147e6cf9d;
    local_40 = FUN_146422b2a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/NavigationSystem",L"BaseGeneratedNavLinksProxy",&DAT_14cb1d270,
                  &DAT_147e6cf9c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1d270;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594b30c FUN_14594b30c body=221 status=ok
// SIG undefined FUN_14594b30c(void)

longlong FUN_14594b30c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb28fe8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147fcf48b;
    local_40 = &LAB_145a19c21;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/GameplayCameras",L"CameraRigProxyTable",&DAT_14cb28fe8,&DAT_147fcf48a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb28fe8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594b3f0 FUN_14594b3f0 body=221 status=ok
// SIG undefined FUN_14594b3f0(void)

longlong FUN_14594b3f0(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb29710 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147fe666f;
    local_40 = FUN_146458b0a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/GameplayCameras",L"CameraRigTransitionCondition",&DAT_14cb29710,
                  &DAT_147fe666e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb29710;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594b4d4 FUN_14594b4d4 body=221 status=ok
// SIG undefined FUN_14594b4d4(void)

longlong FUN_14594b4d4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb2be48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148042555;
    local_40 = FUN_14645f4c7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/NiagaraCore",L"NiagaraMergeable",&DAT_14cb2be48,&DAT_148042554);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb2be48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594b5b8 FUN_14594b5b8 body=221 status=ok
// SIG undefined FUN_14594b5b8(void)

longlong FUN_14594b5b8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb3e130 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1481bbc89;
    local_40 = FUN_146473d1a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraSignificanceHandler",&DAT_14cb3e130,&DAT_1481bbc88);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb3e130;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594b69c FUN_14594b69c body=221 status=ok
// SIG undefined FUN_14594b69c(void)

longlong FUN_14594b69c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb44d08 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14821f39e;
    local_40 = FUN_14647f708;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 0x10;
    local_68 = 0xe0;
    FUN_14081cfa3(L"/Script/CommonUI",L"CommonBorderStyle",&DAT_14cb44d08,FUN_14647f6e6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb44d08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594b780 FUN_14594b780 body=221 status=ok
// SIG undefined FUN_14594b780(void)

longlong FUN_14594b780(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb459d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14823711d;
    local_40 = FUN_146482abc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/CommonUI",L"CommonInputMetadata",&DAT_14cb459d8,&DAT_14823711c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb459d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594b864 FUN_14594b864 body=221 status=ok
// SIG undefined FUN_14594b864(void)

longlong FUN_14594b864(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb4a798 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14840d193;
    local_40 = FUN_14648a85a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"GizmoBaseVec2ParameterSource",
                  &DAT_14cb4a798,&DAT_14840d192);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4a798;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594b948 FUN_14594b948 body=221 status=ok
// SIG undefined FUN_14594b948(void)

longlong FUN_14594b948(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb4b358 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14843e87d;
    local_40 = FUN_14648df8e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"GizmoBaseTransformSource",&DAT_14cb4b358,
                  &DAT_14843e87c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4b358;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594ba2c FUN_14594ba2c body=221 status=ok
// SIG undefined FUN_14594ba2c(void)

longlong FUN_14594ba2c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb4b770 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148444781;
    local_40 = &LAB_145ccfe1d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0xc0;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"InteractiveGizmoManager",&DAT_14cb4b770,
                  &DAT_148444780);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4b770;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594bb10 FUN_14594bb10 body=221 status=ok
// SIG undefined FUN_14594bb10(void)

longlong FUN_14594bb10(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb4b8e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148450443;
    local_40 = &LAB_1460d1670;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x1b0;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"InteractiveToolManager",&DAT_14cb4b8e0,
                  &DAT_148450442);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4b8e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594bbf4 FUN_14594bbf4 body=221 status=ok
// SIG undefined FUN_14594bbf4(void)

longlong FUN_14594bbf4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb4b8f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1484517a5;
    local_40 = &LAB_1460d9b22;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 0x10;
    local_68 = 0x330;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"InteractiveToolsContext",&DAT_14cb4b8f8,
                  &DAT_1484517a4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4b8f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594bcd8 FUN_14594bcd8 body=221 status=ok
// SIG undefined FUN_14594bcd8(void)

longlong FUN_14594bcd8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb4c918 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1484cb5cd;
    local_40 = FUN_1464931af;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/ModelingComponents",L"DynamicMeshReplacementChangeTarget",&DAT_14cb4c918
                  ,&DAT_1484cb5cc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4c918;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594bdbc FUN_14594bdbc body=221 status=ok
// SIG undefined FUN_14594bdbc(void)

longlong FUN_14594bdbc(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb4cbb8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1484e44ab;
    local_40 = &LAB_145fed3e0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 0x10;
    local_68 = 0x170;
    FUN_14081cfa3(L"/Script/ModelingComponents",L"UVLayoutPreview",&DAT_14cb4cbb8,&DAT_1484e44aa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4cbb8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594bea0 FUN_14594bea0 body=221 status=ok
// SIG undefined FUN_14594bea0(void)

longlong FUN_14594bea0(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb512e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1485ef65d;
    local_40 = FUN_1464a5c58;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/GbxSpline",L"GbxSplineComponentControlPoint",&DAT_14cb512e8,
                  &DAT_1485ef65c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb512e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594bf84 FUN_14594bf84 body=221 status=ok
// SIG undefined FUN_14594bf84(void)

longlong FUN_14594bf84(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb620e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1486e0717;
    local_40 = &LAB_1464f66b8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x2c8;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxProfileProgressVault",&DAT_14cb620e0,&DAT_1486e0716);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb620e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594c068 FUN_14594c068 body=221 status=ok
// SIG undefined FUN_14594c068(void)

longlong FUN_14594c068(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb67e68 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14873fc0d;
    local_40 = FUN_146519626;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxTrickModifier",&DAT_14cb67e68,&DAT_14873fc0c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb67e68;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594c14c FUN_14594c14c body=221 status=ok
// SIG undefined FUN_14594c14c(void)

longlong FUN_14594c14c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb67fa8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14873fc37;
    local_40 = &LAB_1465199e7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x210;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxTrickOptions",&DAT_14cb67fa8,&DAT_14873fc36);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb67fa8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594c230 FUN_14594c230 body=221 status=ok
// SIG undefined FUN_14594c230(void)

longlong FUN_14594c230(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb902a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1489c48ff;
    local_40 = &LAB_145c54737;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x458;
    FUN_14081cfa3(L"/Script/CohtmlPlugin",L"CohtmlAudioWrapper",&DAT_14cb902a8,&DAT_1489c48fe);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb902a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594c314 FUN_14594c314 body=221 status=ok
// SIG undefined FUN_14594c314(void)

longlong FUN_14594c314(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb90b18 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1489cb023;
    local_40 = &LAB_145c51aca;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x170;
    FUN_14081cfa3(L"/Script/CohtmlPlugin",L"MultithreadAwareCompositorWrapper",&DAT_14cb90b18,
                  &DAT_1489cb022);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb90b18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594c3f8 FUN_14594c3f8 body=221 status=ok
// SIG undefined FUN_14594c3f8(void)

longlong FUN_14594c3f8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb91848 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1489f30c5;
    local_40 = FUN_14656a37c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/GbxUICore",L"GbxUIIconAction",&DAT_14cb91848,&DAT_1489f30c4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb91848;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594c4dc FUN_14594c4dc body=221 status=ok
// SIG undefined FUN_14594c4dc(void)

longlong FUN_14594c4dc(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb919c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1489f310b;
    local_40 = &LAB_145c38d37;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/GbxUICore",L"GbxUIIconData",&DAT_14cb919c8,&DAT_1489f310a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb919c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594c5c0 FUN_14594c5c0 body=221 status=ok
// SIG undefined FUN_14594c5c0(void)

longlong FUN_14594c5c0(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb921a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1489f8c5d;
    local_40 = &LAB_14656c463;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x118;
    FUN_14081cfa3(L"/Script/GbxUICoherent",L"GbxUISystem",&DAT_14cb921a8,&DAT_1489f8c5c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb921a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594c6a4 FUN_14594c6a4 body=221 status=ok
// SIG undefined FUN_14594c6a4(void)

longlong FUN_14594c6a4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb92210 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1489f8ca7;
    local_40 = &LAB_14656c630;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x188;
    FUN_14081cfa3(L"/Script/GbxUICoherent",L"GbxUIViewManager",&DAT_14cb92210,&DAT_1489f8ca6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb92210;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594c788 FUN_14594c788 body=221 status=ok
// SIG undefined FUN_14594c788(void)

longlong FUN_14594c788(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9b458 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148b21c3f;
    local_40 = FUN_14659880e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/ModelViewViewModel",L"MVVMViewModelContextResolver",&DAT_14cb9b458,
                  &DAT_148b21c3e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9b458;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594c86c FUN_14594c86c body=221 status=ok
// SIG undefined FUN_14594c86c(void)

longlong FUN_14594c86c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbf6f48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_149063609;
    local_40 = FUN_146675f12;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/GeometryCache",L"GeometryCacheCodecBase",&DAT_14cbf6f48,&DAT_149063608);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbf6f48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594c950 FUN_14594c950 body=221 status=ok
// SIG undefined FUN_14594c950(void)

longlong FUN_14594c950(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc01950 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1490fd5d5;
    local_40 = FUN_1466856e0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x98;
    FUN_14081cfa3(L"/Script/RigVM",L"RigVMUserWorkflowOptions",&DAT_14cc01950,FUN_1466856be);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc01950;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594ca34 FUN_14594ca34 body=221 status=ok
// SIG undefined FUN_14594ca34(void)

longlong FUN_14594ca34(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc07580 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1491d36bd;
    local_40 = FUN_1466ccc84;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/ControlRig",L"ModularRigRuleManager",&DAT_14cc07580,&DAT_1491d36bc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc07580;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594cb18 FUN_14594cb18 body=221 status=ok
// SIG undefined FUN_14594cb18(void)

longlong FUN_14594cb18(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc0b7e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1492dc625;
    local_40 = &LAB_145853621;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x170;
    FUN_14081cfa3(L"/Script/LiveLinkInterface",L"LiveLinkVirtualSubject",&DAT_14cc0b7e0,
                  &DAT_1492dc624);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc0b7e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594cbfc FUN_14594cbfc body=221 status=ok
// SIG undefined FUN_14594cbfc(void)

longlong FUN_14594cbfc(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc0dfd8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14935dc47;
    local_40 = &LAB_146144686;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 0x10;
    local_68 = 0x3d0;
    FUN_14081cfa3(L"/Script/InterchangeEngine",L"InterchangeManager",&DAT_14cc0dfd8,FUN_146724c72);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc0dfd8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594cce0 FUN_14594cce0 body=221 status=ok
// SIG undefined FUN_14594cce0(void)

longlong FUN_14594cce0(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc17258 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_149450a4d;
    local_40 = &LAB_1458d6a12;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/USDStage",L"UsdTransactor",&DAT_14cc17258,&DAT_149450a4c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc17258;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594cdc4 FUN_14594cdc4 body=221 status=ok
// SIG undefined FUN_14594cdc4(void)

longlong FUN_14594cdc4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc173a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_149456f75;
    local_40 = FUN_146730cc2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x98;
    FUN_14081cfa3(L"/Script/ComputeFramework",L"ComputeKernelSource",&DAT_14cc173a0,&DAT_149456f74);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc173a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594cea8 FUN_14594cea8 body=221 status=ok
// SIG undefined FUN_14594cea8(void)

longlong FUN_14594cea8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc1d900 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1494e7ef3;
    local_40 = FUN_14673c63e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OptimusCore",L"OptimusValueContainer",&DAT_14cc1d900,&DAT_1494e7ef2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc1d900;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594cf8c FUN_14594cf8c body=221 status=ok
// SIG undefined FUN_14594cf8c(void)

longlong FUN_14594cf8c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc2dd18 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14987f8d5;
    local_40 = &LAB_146143df4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x148;
    FUN_14081cfa3(L"/Script/IKRig",L"IKRigProcessor",&DAT_14cc2dd18,&DAT_14987f8d4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc2dd18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594d070 FUN_14594d070 body=221 status=ok
// SIG undefined FUN_14594d070(void)

longlong FUN_14594d070(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc2ddd8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_149883a67;
    local_40 = FUN_14676a6ec;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/IKRig",L"IKRig_FBIKEffector",&DAT_14cc2ddd8,&DAT_149883a66);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc2ddd8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594d154 FUN_14594d154 body=221 status=ok
// SIG undefined FUN_14594d154(void)

longlong FUN_14594d154(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cc2ddf0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_149883a6b;
    local_40 = &LAB_145c6f78e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/IKRig",L"IKRig_FBIKBoneSettings",&DAT_14cc2ddf0,&DAT_149883a6a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc2ddf0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594d232 FUN_14594d232 body=45 status=ok
// SIG undefined FUN_14594d232(void)

undefined8 FUN_14594d232(undefined8 param_1,int param_2)

{
  FUN_14594d260();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x310);
  }
  return param_1;
}



// FUNCTION 14594d260 FUN_14594d260 body=101 status=ok
// SIG undefined FUN_14594d260(void)

void FUN_14594d260(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b603c90;
  FUN_144a2da94(param_1 + 0x5b);
  FUN_144a2da94(param_1 + 0x54);
  FUN_144a2da94(param_1 + 0x4d);
  FUN_144a2da94(param_1 + 0x46);
  *param_1 = &PTR_FUN_14ac43f80;
  FUN_144a2da94(param_1 + 0x3d);
  FUN_140d29fd0(param_1);
  return;
}



// FUNCTION 14594d2c6 FUN_14594d2c6 body=457 status=ok
// SIG undefined FUN_14594d2c6(void)

void FUN_14594d2c6(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_88 [4];
  undefined8 local_84;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140cbebe8(param_1 + 0x30,1);
  *(undefined1 *)(param_1 + 0x2708) = 1;
  lVar3 = (**(code **)(*(longlong *)(param_1 + 0x2600) + 0x30))(param_1 + 0x2600);
  if (lVar3 == 0) {
    *(undefined4 *)(param_1 + 0x270c) = 0;
  }
  else {
    *(float *)(param_1 + 0x270c) = *(float *)(param_3 + 0x1cc) + *(float *)(param_3 + 0x1cc);
    lVar4 = FUN_144a7e30a();
    lVar9 = *(longlong *)(lVar4 + 0x110);
    if (lVar9 == 0) {
      FUN_140aa6c08(lVar4);
      lVar9 = *(longlong *)(lVar4 + 0x110);
      if (lVar9 == 0) goto LAB_14594d426;
    }
    if (param_2 == 0) {
      param_2 = DAT_14c997c50;
    }
    uVar5 = FUN_140849db6(lVar9,*(undefined1 *)(param_2 + 0x60));
    uVar8 = *(undefined8 *)(lVar3 + 0x170);
    uVar6 = FUN_14477b664(*(undefined8 *)(lVar3 + 0x178));
    uVar7 = FUN_14477b664(uVar6);
    uVar6 = *(undefined8 *)(lVar3 + 0x180);
    local_88[0] = 0;
    local_84 = 0;
    local_78 = uVar8;
    uVar8 = FUN_14477b664(uVar7);
    local_70 = FUN_14477b664(uVar8);
    local_60 = 0;
    local_98 = uVar5;
    local_68 = uVar6;
    FUN_140f7fb5b(&local_58,param_1,local_88,0);
    if ((undefined8 *)(param_1 + 10000) != &local_58) {
      *(undefined8 *)(param_1 + 10000) = local_58;
      local_58 = 0;
      plVar2 = *(longlong **)(param_1 + 0x2718);
      *(longlong **)(param_1 + 0x2718) = local_50;
      local_50 = (longlong *)0x0;
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
    *(undefined4 *)(param_1 + 0x2720) = local_48;
    *(undefined4 *)(param_1 + 0x2724) = uStack_44;
    *(undefined4 *)(param_1 + 0x2728) = uStack_40;
    *(undefined4 *)(param_1 + 0x272c) = uStack_3c;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))();
      }
    }
  }
LAB_14594d426:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14594d490 FUN_14594d490 body=307 status=ok
// SIG undefined FUN_14594d490(void)

void FUN_14594d490(longlong *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_68 [44];
  int local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0x3860a972;
  local_28 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar2 = (**(code **)(*param_1 + 0x828))(param_1,&local_38,local_3c != 0);
  if (cVar2 == '\0') {
    FUN_1468998ea(L"ServerEnteredWorldRegion_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x830))(param_1,&local_38,iVar1 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594d5d6 FUN_14594d5d6 body=38 status=ok
// SIG undefined FUN_14594d5d6(void)

undefined8 FUN_14594d5d6(undefined8 param_1,int param_2)

{
  FUN_14594d5fc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14594d5fc FUN_14594d5fc body=82 status=ok
// SIG undefined FUN_14594d5fc(void)

void FUN_14594d5fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba4bca0;
  FUN_1413df5e5(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_14127b1cd(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14594d64e FUN_14594d64e body=346 status=ok
// SIG undefined FUN_14594d64e(void)

void FUN_14594d64e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      uVar6 = (ulonglong)(int)param_1[1];
      if (0 < (longlong)uVar6) {
        lVar8 = uVar6 * 0x10 + -8;
        do {
          if ((*(int *)(*param_1 + lVar8) == 0) ||
             (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 == (longlong *)0x0)) {
LAB_14594d781:
            FUN_145adc7a0(param_1,(int)uVar6 + -1);
            FUN_145adc708(param_1);
          }
          else {
            cVar4 = (**(code **)(*plVar2 + 0x30))();
            if (cVar4 == '\0') goto LAB_14594d781;
          }
          lVar8 = lVar8 + -0x10;
          bVar3 = 1 < uVar6;
          uVar6 = uVar6 - 1;
        } while (bVar3);
      }
      if (((int)param_2[1] == 0) || (plVar2 = (longlong *)*param_2, plVar2 == (longlong *)0x0)) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      local_38 = local_30;
      iVar5 = FUN_14594d7a9(param_1);
      iVar1 = (int)param_1[1];
      if (iVar5 < 0 || iVar1 <= iVar5) {
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_14594d84c(param_1);
        }
        lVar8 = *param_1;
        lVar7 = (longlong)iVar1 * 0x10;
        *(undefined8 *)(lVar8 + lVar7) = 0;
        *(undefined4 *)(lVar8 + 8 + lVar7) = 0;
        FUN_1401aa3da(lVar8 + lVar7,param_2);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594d7a9 FUN_14594d7a9 body=162 status=ok
// SIG undefined FUN_14594d7a9(void)

int FUN_14594d7a9(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = param_1[1];
  iVar7 = -1;
  if ((longlong)(int)lVar4 != 0) {
    lVar1 = *param_1;
    lVar2 = *param_2;
    lVar8 = 0;
    iVar6 = 0;
    do {
      if (*(int *)(lVar1 + 8 + lVar8) == 0) {
        lVar5 = 0;
      }
      else {
        plVar3 = *(longlong **)(lVar1 + lVar8);
        lVar5 = 0;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,&local_48);
          lVar5 = local_48;
        }
      }
      iVar7 = iVar6;
      if (lVar5 == lVar2) break;
      iVar6 = iVar6 + 1;
      lVar8 = lVar8 + 0x10;
      iVar7 = -1;
    } while ((longlong)(int)lVar4 * 0x10 != lVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar7;
}



// FUNCTION 14594d84c FUN_14594d84c body=132 status=ok
// SIG undefined FUN_14594d84c(void)

void FUN_14594d84c(longlong param_1,int param_2)

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



// FUNCTION 14594d8d0 FUN_14594d8d0 body=72 status=ok
// SIG undefined FUN_14594d8d0(void)

undefined8 * FUN_14594d8d0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b7e2e10;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_14594d918(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14594d918 FUN_14594d918 body=80 status=ok
// SIG undefined FUN_14594d918(void)

void FUN_14594d918(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1ed4f0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_14594d968(param_1 + 6);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 14594d968 FUN_14594d968 body=53 status=ok
// SIG undefined FUN_14594d968(void)

void FUN_14594d968(longlong *param_1)

{
  FUN_14594d99e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14594d99e FUN_14594d99e body=88 status=ok
// SIG undefined FUN_14594d99e(void)

void FUN_14594d99e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14594da06 FUN_14594da06 body=447 status=ok
// SIG undefined FUN_14594da06(void)

undefined8 * FUN_14594da06(undefined8 *param_1)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140eb1504();
  *param_1 = &PTR_FUN_14b6778f0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x7109;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xf00000d0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xf00000d0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0xf00000d0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0x3002;
  param_1[0x2f] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0x200000000;
  *(undefined1 *)(param_1 + 0x38) = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_38 = L"/Script/OakGame.GrenadeBehavior_PayloadSingularity";
  local_30 = 0x32;
  FUN_14475bf92(&local_58);
  _Src = local_48;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = (undefined4)local_58;
  *(undefined4 *)((longlong)param_1 + 0x14) = local_58._4_4_;
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_50._4_4_;
  ppvVar1 = (void **)(param_1 + 4);
  if (ppvVar1 != &local_48) {
    iVar2 = (int)uStack_40;
    lVar3 = (longlong)(int)uStack_40;
    *(int *)(param_1 + 5) = (int)uStack_40;
    if ((int)uStack_40 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,uStack_40 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar1,_Src,lVar3 * 2);
      }
    }
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594dbc6 FUN_14594dbc6 body=493 status=ok
// SIG undefined FUN_14594dbc6(void)

void FUN_14594dbc6(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_38;
  int local_34;
  undefined8 local_30;
  undefined1 local_21;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_21 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
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
  FUN_1413e006c(local_20,local_21,local_30,iVar1 != 0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594ddb4 FUN_14594ddb4 body=258 status=ok
// SIG undefined FUN_14594ddb4(void)

void FUN_14594ddb4(longlong param_1,uint *param_2,longlong param_3,longlong param_4,longlong param_5
                  ,longlong param_6)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_98 [36];
  undefined8 local_74;
  undefined4 local_6c;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  byte local_50;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = param_2[1];
  if (**(int **)(param_1 + -0x28) != 0 || ((byte)uVar2 & 1) != 0) {
    uVar1 = *param_2;
    uVar3 = FUN_140732858();
    if (0 < (int)uVar1) {
      param_6 = param_6 + 8;
      uVar4 = 0;
      do {
        local_68 = *(longlong *)(param_5 + uVar4 * 8);
        if (local_68 != 0) {
          FUN_1413e04dc(param_1 + -0xd8,&local_74,&local_68,param_6);
          local_54 = *(undefined4 *)(param_4 + uVar4 * 4);
          local_4a = *(undefined2 *)(param_3 + uVar4 * 2);
          local_58 = local_6c;
          local_60 = local_74;
          local_50 = (byte)uVar2;
          FUN_1449da5a2(uVar3,&local_4a,&local_60);
        }
        uVar4 = uVar4 + 1;
        param_6 = param_6 + 0x14;
      } while (uVar1 != uVar4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594deb8 FUN_14594deb8 body=236 status=ok
// SIG undefined FUN_14594deb8(void)

int * FUN_14594deb8(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x38) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 14594dfa4 FUN_14594dfa4 body=432 status=ok
// SIG undefined FUN_14594dfa4(void)

void FUN_14594dfa4(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1413e0784();
  cVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  if (cVar1 != '\0') {
    local_48 = 0;
    FUN_14485c47a(&local_48,param_3);
    plVar4 = param_1 + 0xd;
    plVar5 = (longlong *)param_1[0x1d];
    if ((longlong *)param_1[0x1d] == (longlong *)0x0) {
      plVar5 = plVar4;
    }
    iVar6 = 0;
    uStack_40 = param_4;
    if ((longlong)(int)param_1[0x1e] != 0) {
      lVar3 = (longlong)(int)param_1[0x1e] << 4;
      do {
        if (plVar5[1] == uStack_40) {
          cVar1 = FUN_14038330a(plVar5,&local_48);
          if (cVar1 != '\0') goto LAB_14594e0e7;
        }
        plVar5 = plVar5 + 2;
        lVar3 = lVar3 + -0x10;
      } while (lVar3 != 0);
      iVar6 = (int)param_1[0x1e];
    }
    *(uint *)(param_1 + 0x1e) = iVar6 + 1U;
    if (*(uint *)((longlong)param_1 + 0xf4) < iVar6 + 1U) {
      FUN_148d39568(plVar4,iVar6);
    }
    if ((longlong *)param_1[0x1d] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x1d];
    }
    plVar4 = plVar4 + (longlong)iVar6 * 2;
    *(undefined4 *)plVar4 = (undefined4)local_48;
    *(undefined4 *)((longlong)plVar4 + 4) = local_48._4_4_;
    *(undefined4 *)(plVar4 + 1) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)plVar4 + 0xc) = uStack_40._4_4_;
    lVar3 = param_1[9];
    param_1 = param_1 + 0x1f;
    FUN_144729dda(param_1);
    uVar2 = FUN_14594e1e1(param_2);
    FUN_14485c47a(param_1,uVar2);
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 != '\0') {
      uVar2 = FUN_14479d2ce(param_1);
      FUN_14594e156(uVar2,lVar3 + 0x38);
      uVar2 = FUN_14479d2ce(param_1);
      FUN_14010ee68(param_2,uVar2);
      lVar3 = FUN_14479d2ce(param_1);
      if (((*(byte *)(lVar3 + 0x9c) & 1) == 0) && ((*(uint *)(param_2 + 8) & 0x20) == 0)) {
        lVar3 = FUN_1447210f0(param_2);
        if (lVar3 != 0) {
          uVar2 = FUN_14479d2ce(param_1);
          FUN_140b506a4(uVar2);
        }
      }
    }
  }
LAB_14594e0e7:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594e156 FUN_14594e156 body=139 status=ok
// SIG undefined FUN_14594e156(void)

void FUN_14594e156(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  *(undefined4 *)(param_1 + 0x140) = param_2[0xc];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = param_2[9];
  uVar10 = param_2[10];
  uVar11 = param_2[0xb];
  *(undefined4 *)(param_1 + 0x130) = param_2[8];
  *(undefined4 *)(param_1 + 0x134) = uVar9;
  *(undefined4 *)(param_1 + 0x138) = uVar10;
  *(undefined4 *)(param_1 + 0x13c) = uVar11;
  *(undefined4 *)(param_1 + 0x120) = uVar5;
  *(undefined4 *)(param_1 + 0x124) = uVar6;
  *(undefined4 *)(param_1 + 0x128) = uVar7;
  *(undefined4 *)(param_1 + 300) = uVar8;
  *(undefined4 *)(param_1 + 0x110) = uVar1;
  *(undefined4 *)(param_1 + 0x114) = uVar2;
  *(undefined4 *)(param_1 + 0x118) = uVar3;
  *(undefined4 *)(param_1 + 0x11c) = uVar4;
  FUN_14115e0ba(param_1 + 0x148,param_2 + 0xe);
  *(undefined4 *)(param_1 + 0x1d0) = param_2[0x30];
  FUN_14115e0ba(param_1 + 0x1d8,param_2 + 0x32);
  uVar12 = *(undefined8 *)(param_2 + 0x56);
  uVar13 = *(undefined8 *)(param_2 + 0x58);
  uVar14 = *(undefined8 *)(param_2 + 0x5a);
  *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_2 + 0x54);
  *(undefined8 *)(param_1 + 0x268) = uVar12;
  *(undefined8 *)(param_1 + 0x270) = uVar13;
  *(undefined8 *)(param_1 + 0x278) = uVar14;
  return;
}



// FUNCTION 14594e1e1 FUN_14594e1e1 body=176 status=ok
// SIG undefined FUN_14594e1e1(void)

undefined8 FUN_14594e1e1(undefined8 param_1)

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
  uVar1 = FUN_14594e292();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 0x100048;
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



// FUNCTION 14594e292 FUN_14594e292 body=228 status=ok
// SIG undefined FUN_14594e292(void)

longlong FUN_14594e292(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbaad58 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_143242436;
    local_38 = &LAB_148c179cb;
    local_40 = &LAB_14571266f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x290;
    FUN_14081cfa3(L"/Script/OakGame",L"OakGlideModifierComponent",&DAT_14cbaad58,FUN_1465da6f0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaad58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594e377 FUN_14594e377 body=66 status=ok
// SIG undefined FUN_14594e377(void)

void FUN_14594e377(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14594e3ba(puVar1,param_1);
  *puVar1 = &PTR_FUN_14aec93a0;
  puVar1[8] = 0;
  puVar1[10] = 0;
  puVar1[0x10] = 0;
  puVar1[0x12] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return;
}



// FUNCTION 14594e3ba FUN_14594e3ba body=32 status=ok
// SIG undefined FUN_14594e3ba(void)

undefined8 * FUN_14594e3ba(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14aea2ee0;
  return param_1;
}



// FUNCTION 14594e3da FUN_14594e3da body=196 status=ok
// SIG undefined FUN_14594e3da(void)

void FUN_14594e3da(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  memset(param_2,0,0xf8);
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  *param_2 = &PTR_FUN_14b938100;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  param_2[8] = 0;
  uVar1 = DAT_14c8464e8;
  param_2[9] = DAT_14c8464e0;
  param_2[10] = uVar1;
  param_2[0xb] = DAT_14c8464f0;
  *(undefined4 *)(param_2 + 0xc) = 0x447a0000;
  *(undefined4 *)(param_2 + 0xd) = 0;
  *(undefined1 *)((longlong)param_2 + 0x6c) = 0;
  param_2[0xe] = 0xbf80000000000000;
  *(undefined4 *)(param_2 + 0xf) = 0xc4750000;
  *(undefined1 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb9) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc1) = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  return;
}



// FUNCTION 14594e4a0 FUN_14594e4a0 body=40 status=ok
// SIG undefined FUN_14594e4a0(void)

undefined8 FUN_14594e4a0(undefined8 param_1,int param_2)

{
  FUN_14594e4c8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14594e4c8 FUN_14594e4c8 body=99 status=ok
// SIG undefined FUN_14594e4c8(void)

void FUN_14594e4c8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a521eb0;
  param_1[5] = &PTR_FUN_14a5221b0;
  plVar3 = (longlong *)param_1[0x7e];
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
  FUN_14594e52c(param_1 + 0x2e);
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 14594e52c FUN_14594e52c body=188 status=ok
// SIG undefined FUN_14594e52c(void)

void FUN_14594e52c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149eeb690;
  param_1[0x2e] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x42];
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
  param_1[0x18] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x2c];
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
  param_1[2] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x16];
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
                    /* WARNING: Could not recover jumptable at 0x00014594e5e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14594e5e8 FUN_14594e5e8 body=40 status=ok
// SIG undefined FUN_14594e5e8(void)

undefined8 FUN_14594e5e8(undefined8 param_1,int param_2)

{
  FUN_14594e610();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14594e610 FUN_14594e610 body=90 status=ok
// SIG undefined FUN_14594e610(void)

void FUN_14594e610(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f76c60;
  FUN_14594e66a(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1413e0d14(param_1);
  return;
}



// FUNCTION 14594e66a FUN_14594e66a body=40 status=ok
// SIG undefined FUN_14594e66a(void)

void FUN_14594e66a(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1448eac94(param_1);
    param_1 = param_1 + 0x28;
  }
  return;
}



// FUNCTION 14594e69a FUN_14594e69a body=471 status=ok
// SIG undefined FUN_14594e69a(void)

undefined8 * FUN_14594e69a(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_14007ca06();
  FUN_14131b9ca(param_1,uVar2);
  *param_1 = &PTR_FUN_14b1dcc20;
  param_1[7] = &PTR_FUN_14b1dcee0;
  param_1[8] = 0;
  param_1[0x18] = 0;
  param_1[0x20] = 0;
  uVar1 = FUN_14493c560();
  param_1[0x18] = param_1[0x18] & 0xfffffffffc000000 | (ulonglong)uVar1;
  param_1[0x20] = param_1[0x20] & 0xfffffffffc000000 | (ulonglong)uVar1;
  param_1[0x28] = 0;
  param_1[0x38] = 0;
  param_1[0x40] = 0;
  uVar1 = FUN_14493c560();
  param_1[0x38] = param_1[0x38] & 0xfffffffffc000000 | (ulonglong)uVar1;
  param_1[0x40] = param_1[0x40] & 0xfffffffffc000000 | (ulonglong)uVar1;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x254) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0;
  param_1[0x5e] = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x60),4000);
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(undefined8 *)((longlong)param_1 + 0x354) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x35c) = 0;
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  FUN_14594e872(param_1 + 0x72);
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8b) = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  *(undefined2 *)((longlong)param_1 + 0x45c) = 1;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  return param_1;
}



// FUNCTION 14594e872 FUN_14594e872 body=103 status=ok
// SIG undefined FUN_14594e872(void)

undefined8 * FUN_14594e872(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x3ff0000000000000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x3ff0000000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_14594e8da(param_1 + 0xc);
  FUN_14594e934(param_1 + 0x10);
  return param_1;
}



// FUNCTION 14594e8da FUN_14594e8da body=63 status=ok
// SIG undefined FUN_14594e8da(void)

int FUN_14594e8da(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14594e9a0(param_1,iVar1);
  }
  FUN_14594e919((longlong)iVar1 * 8 + *param_1,1);
  return iVar1;
}



// FUNCTION 14594e919 FUN_14594e919 body=26 status=ok
// SIG undefined FUN_14594e919(void)

void FUN_14594e919(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1 * 8) = 0xffffffff;
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 14594e934 FUN_14594e934 body=63 status=ok
// SIG undefined FUN_14594e934(void)

int FUN_14594e934(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14594ea24(param_1,iVar1);
  }
  FUN_14594e973((longlong)iVar1 * 0x4810 + *param_1,1);
  return iVar1;
}



// FUNCTION 14594e973 FUN_14594e973 body=45 status=ok
// SIG undefined FUN_14594e973(void)

void FUN_14594e973(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x480c;
    do {
      *(undefined8 *)(param_1 + -0xc) = 0;
      *(undefined8 *)(param_1 + -4) = 0x10000000000;
      param_1 = param_1 + 0x4810;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14594e9a0 FUN_14594e9a0 body=132 status=ok
// SIG undefined FUN_14594e9a0(void)

void FUN_14594e9a0(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14594ea24 FUN_14594ea24 body=136 status=ok
// SIG undefined FUN_14594ea24(void)

void FUN_14594ea24(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x4810,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x4810)) {
      uVar5 = uVar4 / 0x4810 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_140043092(param_1,param_2,uVar5,0x4810);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14594eb0e FUN_14594eb0e body=82 status=ok
// SIG undefined FUN_14594eb0e(void)

undefined8 * FUN_14594eb0e(undefined8 *param_1)

{
  FUN_140c2310e();
  *param_1 = &PTR_FUN_14b60b340;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  FUN_14112fbd2(param_1 + 0x35);
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0x43fa0000;
  *(undefined1 *)((longlong)param_1 + 0x41c) = 0;
  return param_1;
}



// FUNCTION 14594eb6c FUN_14594eb6c body=120 status=ok
// SIG undefined FUN_14594eb6c(void)

undefined8 * FUN_14594eb6c(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14ae39fe0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  FUN_144a5dc74(param_1 + 7);
  FUN_144a5dc74(param_1 + 9);
  FUN_144a5dc74(param_1 + 0xb);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  return param_1;
}



// FUNCTION 14594ebe4 FUN_14594ebe4 body=129 status=ok
// SIG undefined FUN_14594ebe4(void)

void FUN_14594ebe4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4eb3a0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_14594ec66(puVar1 + 1,param_1 + 8);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14b4eb330;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar2;
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 14594ec66 FUN_14594ec66 body=132 status=ok
// SIG undefined FUN_14594ec66(void)

void FUN_14594ec66(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594ecec FUN_14594ecec body=43 status=ok
// SIG undefined FUN_14594ecec(void)

void FUN_14594ecec(longlong *param_1)

{
  FUN_14594ed17(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14594ed17 FUN_14594ed17 body=65 status=ok
// SIG undefined FUN_14594ed17(void)

void FUN_14594ed17(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 14594ed58 Unwind@14594ed58 body=22 status=ok
// SIG undefined Unwind@14594ed58(void)

void Unwind_14594ed58(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14594ed70 FUN_14594ed70 body=463 status=ok
// SIG undefined FUN_14594ed70(void)

void FUN_14594ed70(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140b631de();
  FUN_140457ffc(uVar1,param_1);
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_144a126be(param_1);
    if (*(longlong *)(param_1 + 0x68) != 0) {
      FUN_14480f766(&DAT_14cb12228);
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa7aa0) {
    FUN_144b3d300(&DAT_14caa7aa0);
    if (DAT_14caa7aa0 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14caa7a98 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Nanite",1);
      _Init_thread_footer(&DAT_14caa7aa0);
    }
  }
  if (DAT_14caa7a98 != (longlong *)0x0) {
    uVar1 = (**(code **)(*DAT_14caa7a98 + 0xd0))();
    FUN_140457ffc(uVar1,param_1);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa7ab0) {
    FUN_144b3d300(&DAT_14caa7ab0);
    if (DAT_14caa7ab0 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14caa7aa8 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"landscape.RenderNanite",1);
      _Init_thread_footer(&DAT_14caa7ab0);
    }
  }
  if (DAT_14caa7aa8 != (longlong *)0x0) {
    uVar1 = (**(code **)(*DAT_14caa7aa8 + 0xd0))();
    FUN_140457ffc(uVar1,param_1);
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_14480f766(&DAT_14cb02738);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 100) != 0) {
    FUN_14594ef40(param_1 + 0x58);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_14594ef70(param_1 + 0x48);
  }
  FUN_1413e1940(param_1);
  return;
}



// FUNCTION 14594ef40 FUN_14594ef40 body=48 status=ok
// SIG undefined FUN_14594ef40(void)

void FUN_14594ef40(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14594ef70 FUN_14594ef70 body=48 status=ok
// SIG undefined FUN_14594ef70(void)

void FUN_14594ef70(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14594efa0 FUN_14594efa0 body=63 status=ok
// SIG undefined FUN_14594efa0(void)

void FUN_14594efa0(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_14594f17e(param_1);
    FUN_14594efe0(param_1);
    return;
  }
  FUN_14594efe0(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_140d3ca92(param_1);
  return;
}



// FUNCTION 14594efe0 FUN_14594efe0 body=376 status=ok
// SIG undefined FUN_14594efe0(void)

void FUN_14594efe0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14594f15a FUN_14594f15a body=36 status=ok
// SIG undefined FUN_14594f15a(void)

void FUN_14594f15a(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x68) == '\x01') {
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  if (*(char *)(param_1 + 0x5c) == '\x01') {
    *(undefined1 *)(param_1 + 0x5c) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 14594f17e FUN_14594f17e body=327 status=ok
// SIG undefined FUN_14594f17e(void)

void FUN_14594f17e(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14594f2c6 FUN_14594f2c6 body=58 status=ok
// SIG undefined FUN_14594f2c6(void)

void FUN_14594f2c6(longlong param_1)

{
  FUN_14594f300();
  *(undefined4 *)(param_1 + 0x280) = 0;
  if (*(int *)(param_1 + 0x284) == 0) {
    return;
  }
  FUN_148b5dff6(param_1 + 0x278);
  return;
}



// FUNCTION 14594f300 FUN_14594f300 body=158 status=ok
// SIG undefined FUN_14594f300(void)

void FUN_14594f300(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_14594f39e();
  lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
  if (((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x1f0), lVar2 != 0)) &&
     (iVar1 = *(int *)(lVar2 + 0x40), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(lVar2 + 0x38);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar2 + lVar5);
      if (lVar4 != 0) {
        lVar3 = FUN_1403f18c8(lVar4);
        if (lVar3 != 0) {
          FUN_140457ffc(lVar3 + 200,param_1);
        }
        lVar4 = FUN_140e94dc2(lVar4);
        if (lVar4 != 0) {
          FUN_140457ffc(lVar4 + 0x30,param_1);
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 14594f39e FUN_14594f39e body=98 status=ok
// SIG undefined FUN_14594f39e(void)

void FUN_14594f39e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14594f400(param_1 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  plVar3 = *(longlong **)(param_1 + 0x1b8);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1b8) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014594f3fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14594f400 FUN_14594f400 body=47 status=ok
// SIG undefined FUN_14594f400(void)

void FUN_14594f400(longlong param_1)

{
  if (*(int *)(param_1 + 0x40) == *(int *)(param_1 + 0x6c)) {
    return;
  }
  FUN_147702d44(param_1 + 0x38);
  FUN_147702e88(param_1 + 0x38);
  return;
}



// FUNCTION 14594f430 FUN_14594f430 body=178 status=ok
// SIG undefined FUN_14594f430(void)

longlong * FUN_14594f430(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140df52d6(param_1,&local_28);
  uVar4 = FUN_14594f4e6();
  if (local_28 != 0) {
    cVar3 = FUN_1448093f4(local_28,uVar4);
    if (cVar3 != '\0') {
      *param_2 = local_28;
      param_2[1] = (longlong)local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      goto LAB_14594f486;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_14594f486:
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594f4e6 FUN_14594f4e6 body=57 status=ok
// SIG undefined FUN_14594f4e6(void)

void FUN_14594f4e6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb64dc0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb64dc0 = FUN_140002ddd(FUN_146506bf6,uVar1,L"GbxSkillComponent_TimerEx");
  }
  return;
}



// FUNCTION 14594f520 FUN_14594f520 body=135 status=ok
// SIG undefined FUN_14594f520(void)

longlong FUN_14594f520(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1413e1950();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x28 != 0) goto LAB_14594f56d;
  }
  local_30 = param_3;
  FUN_14594f5a8(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_14594f56d:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + lVar2 * 0x28 + 0x10;
}



// FUNCTION 14594f5a8 FUN_14594f5a8 body=276 status=ok
// SIG undefined FUN_14594f5a8(void)

undefined4 * FUN_14594f5a8(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14594f738(param_1,local_48);
  uVar1 = ((undefined8 *)*param_4)[1];
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = uVar1;
  local_40[2] = 0;
  local_40[3] = 0;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  cVar2 = FUN_14594f6be(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar3 < 4) {
      iVar5 = 1;
    }
    else {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x24) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1413e19c0(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594f6be FUN_14594f6be body=122 status=ok
// SIG undefined FUN_14594f6be(void)

undefined8 FUN_14594f6be(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar11 = FUN_1413e1950(), iVar11 != -1)) {
    puVar2 = (undefined4 *)(*param_1 + (longlong)iVar11 * 0x28);
    plVar3 = *(longlong **)(puVar2 + 6);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    uVar4 = *param_3;
    uVar5 = param_3[1];
    uVar6 = param_3[2];
    uVar7 = param_3[3];
    uVar8 = param_3[5];
    uVar9 = param_3[6];
    uVar10 = param_3[7];
    puVar2[4] = param_3[4];
    puVar2[5] = uVar8;
    puVar2[6] = uVar9;
    puVar2[7] = uVar10;
    *puVar2 = uVar4;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    FUN_147071d02(param_1,*param_4);
    *param_4 = iVar11;
    return 1;
  }
  return 0;
}



// FUNCTION 14594f738 FUN_14594f738 body=243 status=ok
// SIG undefined FUN_14594f738(void)

int * FUN_14594f738(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 14594f834 FUN_14594f834 body=222 status=ok
// SIG undefined FUN_14594f834(void)

undefined8 * FUN_14594f834(undefined8 *param_1)

{
  param_1[1] = 0;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_14a7b51c0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3e4ccccd;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0x3f80000000000000;
  *(undefined1 *)((longlong)param_1 + 0x84) = 0;
  FUN_1404163bc(param_1 + 0xc);
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x15] = 0x3f800000;
  param_1[0x16] = &DAT_3f8000003f800000;
  param_1[0x17] = 0;
  param_1[0x18] = 0x412000003f800000;
  param_1[0x19] = &DAT_41200000;
  param_1[0x1a] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  return param_1;
}



// FUNCTION 14594f91a FUN_14594f91a body=56 status=ok
// SIG undefined FUN_14594f91a(void)

undefined8 * FUN_14594f91a(undefined8 *param_1)

{
  FUN_14594f952();
  *param_1 = &PTR_FUN_14b6cf3e0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  return param_1;
}



// FUNCTION 14594f952 FUN_14594f952 body=49 status=ok
// SIG undefined FUN_14594f952(void)

undefined8 * FUN_14594f952(undefined8 *param_1)

{
  FUN_14594f984();
  *param_1 = &PTR_FUN_14b14ca10;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  return param_1;
}



// FUNCTION 14594f984 FUN_14594f984 body=160 status=ok
// SIG undefined FUN_14594f984(void)

undefined8 * FUN_14594f984(undefined8 *param_1)

{
  FUN_14594fa24();
  *param_1 = &PTR_FUN_14a1903d0;
  param_1[0xab] = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x564) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x56c) = 0;
  param_1[0xaf] = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  param_1[0xb5] = 0;
  *(undefined4 *)(param_1 + 0xb6) = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5bc) = 0;
  param_1[0xb9] = 0;
  *(undefined4 *)(param_1 + 0xba) = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  return param_1;
}



// FUNCTION 14594fa24 FUN_14594fa24 body=105 status=ok
// SIG undefined FUN_14594fa24(void)

undefined8 * FUN_14594fa24(undefined8 *param_1)

{
  FUN_14594fa8e();
  *param_1 = &PTR_FUN_14a611960;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x9c));
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x514) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x51c) = 0;
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  return param_1;
}



// FUNCTION 14594fa8e FUN_14594fa8e body=629 status=ok
// SIG undefined FUN_14594fa8e(void)

undefined8 * FUN_14594fa8e(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14a7e1160;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  FUN_1413e28b0(param_1 + 0x3d);
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 99) = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined1 *)((longlong)param_1 + 0x357) = 1;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x394) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x39c) = 0;
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3ec) = 0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  *(undefined8 *)((longlong)param_1 + 0x434) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x43c) = 0;
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  *(undefined4 *)(param_1 + 0x8d) = 2;
  param_1[0x94] = 0;
  *(undefined4 *)(param_1 + 0x95) = 0;
  *(undefined8 *)((longlong)param_1 + 0x472) = 0;
  *(undefined8 *)((longlong)param_1 + 0x46c) = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 0;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  *(undefined1 *)((longlong)param_1 + 0x356) = 0;
  *(undefined1 *)((longlong)param_1 + 0x354) = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x35b) = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  *(undefined2 *)((longlong)param_1 + 0x35f) = 1;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0;
  return param_1;
}



// FUNCTION 14594fd04 FUN_14594fd04 body=37 status=ok
// SIG undefined FUN_14594fd04(void)

void FUN_14594fd04(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x160);
  FUN_14594fd2a(param_2);
  return;
}



// FUNCTION 14594fd2a FUN_14594fd2a body=220 status=ok
// SIG undefined FUN_14594fd2a(void)

undefined8 * FUN_14594fd2a(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 2;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[8] = 2;
  param_1[10] = 0;
  param_1[0xc] = 0;
  FUN_1412df474(param_1 + 0x12);
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  FUN_14594fe06(param_1 + 0x1a);
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x141) = 0;
  return param_1;
}



// FUNCTION 14594fe06 FUN_14594fe06 body=39 status=ok
// SIG undefined FUN_14594fe06(void)

void FUN_14594fe06(int *param_1)

{
  int iVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (DAT_14cb820d0 == 0) {
    DAT_14cb820d0 = 1;
  }
  iVar1 = DAT_14cb820d0 + 1;
  *param_1 = DAT_14cb820d0;
  DAT_14cb820d0 = iVar1;
  return;
}



// FUNCTION 14594fe2e FUN_14594fe2e body=132 status=ok
// SIG undefined FUN_14594fe2e(void)

void FUN_14594fe2e(longlong param_1,int param_2)

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



// FUNCTION 14594feb4 FUN_14594feb4 body=103 status=ok
// SIG undefined FUN_14594feb4(void)

void FUN_14594feb4(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_14016fae4();
  lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar4 != 0) {
    local_18 = *(undefined8 *)(lVar4 + 0x18);
    lVar4 = FUN_1413e2d1a();
    if (lVar4 != 0) {
      uVar1 = *(undefined4 *)(lVar4 + 0x74);
      uVar2 = *(undefined4 *)(lVar4 + 0x78);
      uVar3 = *(undefined4 *)(lVar4 + 0x7c);
      *(undefined4 *)(param_1 + 9) = *(undefined4 *)(lVar4 + 0x70);
      *(undefined4 *)((longlong)param_1 + 0x4c) = uVar1;
      *(undefined4 *)(param_1 + 10) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x54) = uVar3;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594ff1c FUN_14594ff1c body=177 status=ok
// SIG undefined FUN_14594ff1c(void)

void FUN_14594ff1c(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  switchD_143c3d4dc::caseD_21();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbc8);
  uVar2 = FUN_1448332aa(param_2,&DAT_149e3cbb8);
  cVar1 = FUN_1413e2d88(param_2,uVar2,0x77,1);
  if (cVar1 != '\0') {
    iVar3 = FUN_1448332aa(param_2,&DAT_149e3cbc8);
    if (6 < iVar3) {
      local_28 = 0;
      uStack_20 = 0;
      FUN_1402ac1b3(param_2);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14594fff0 FUN_14594fff0 body=153 status=ok
// SIG undefined FUN_14594fff0(void)

void FUN_14594fff0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_14595008a();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cc26638;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x20;
  return;
}



// FUNCTION 14595008a FUN_14595008a body=258 status=ok
// SIG undefined FUN_14595008a(void)

void FUN_14595008a(void)

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
              0x110) < DAT_14cc266b8) {
    FUN_144b3d300(&DAT_14cc266b8);
    if (DAT_14cc266b8 == -1) {
      FUN_14595018e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x1c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc26638,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14461cfc3);
      _Init_thread_footer(&DAT_14cc266b8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14595018e FUN_14595018e body=226 status=ok
// SIG undefined FUN_14595018e(void)

longlong * FUN_14595018e(longlong *param_1)

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
  pcVar13 = FUN_14675c532;
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


