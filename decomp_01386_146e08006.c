// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146e08006 FUN_146e08006 body=574 status=ok
// SIG undefined FUN_146e08006(void)

undefined8 FUN_146e08006(longlong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_58 [36];
  uint local_34;
  uint *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *param_1;
  iVar1 = *(int *)param_1[1];
  local_34 = param_2;
  if (*(int *)(lVar3 + 0x60) != *(int *)(lVar3 + 0x8c)) {
    lVar7 = lVar3 + 0x90;
    if (*(longlong *)(lVar3 + 0x98) != 0) {
      lVar7 = *(longlong *)(lVar3 + 0x98);
    }
    uVar12 = *(uint *)(lVar7 + (ulonglong)(*(int *)(lVar3 + 0xa0) - 1U & param_2) * 4);
    if (uVar12 != 0xffffffff) {
      do {
        puVar8 = (uint *)(*(longlong *)(lVar3 + 0x58) + (longlong)(int)uVar12 * 0x14);
        if (*puVar8 == param_2) {
          if ((puVar8 != (uint *)0x0) && (puVar8 + 1 != (uint *)0x0)) {
            uVar12 = puVar8[2];
            if (*(int *)(lVar3 + 0xe8) <= (int)uVar12) {
              uVar5 = 0;
              goto LAB_146e0810f;
            }
            uVar6 = puVar8[1];
            if ((int)uVar12 < 1) {
              piVar10 = (int *)((longlong)(int)uVar6 * 4 + *(longlong *)(lVar3 + 0xa8));
              goto LAB_146e081ec;
            }
            iVar2 = uVar6 + uVar12;
            lVar7 = *(longlong *)(lVar3 + 0xa8);
            iVar4 = uVar6 + iVar2 + -1;
            uVar11 = iVar4 / 2;
            iVar9 = *(int *)(lVar7 + (longlong)(int)uVar11 * 4);
            uVar5 = CONCAT71((int7)(int3)(iVar4 - (iVar4 >> 0x1f) >> 9),1);
            if (iVar9 == iVar1) goto LAB_146e0810f;
            uVar12 = (uVar12 + uVar6) - 1;
            goto LAB_146e0818e;
          }
          break;
        }
        uVar12 = puVar8[3];
      } while (uVar12 != 0xffffffff);
    }
  }
  local_30 = &local_34;
  FUN_146dee3ec((longlong *)(lVar3 + 0x58),&local_24,&local_30,0);
  lVar7 = *(longlong *)(lVar3 + 0x58) + (longlong)local_24 * 0x14;
  piVar10 = (int *)(lVar7 + 4);
  *piVar10 = *(int *)(lVar3 + 0xb0);
  *(undefined4 *)(lVar7 + 8) = 1;
  iVar2 = *(int *)(lVar3 + 0xb0);
  *(uint *)(lVar3 + 0xb0) = iVar2 + *(uint *)(lVar3 + 0xe8);
  if ((uint)(*(int *)(lVar3 + 0xb4) - iVar2) < *(uint *)(lVar3 + 0xe8)) {
    FUN_1446f48e2(lVar3 + 0xa8);
  }
  piVar10 = (int *)(longlong)*piVar10;
  *(int *)(*(longlong *)(lVar3 + 0xa8) + (longlong)piVar10 * 4) = iVar1;
  puVar8 = (uint *)(lVar3 + 0xec);
LAB_146e0810a:
  *puVar8 = *puVar8 + 1;
  uVar5 = CONCAT71((int7)((ulonglong)piVar10 >> 8),1);
  goto LAB_146e0810f;
  while( true ) {
    if (iVar9 < iVar1) {
      uVar6 = uVar11 + 1;
      iVar9 = uVar12 + uVar11 + 1;
    }
    else {
      if (uVar11 == uVar6) goto LAB_146e08203;
      uVar12 = uVar11 - 1;
      iVar9 = uVar11 + uVar6 + -1;
    }
    uVar11 = iVar9 / 2;
    iVar9 = *(int *)(lVar7 + (longlong)(int)uVar11 * 4);
    if (iVar9 == iVar1) break;
LAB_146e0818e:
    if (uVar6 == uVar12) {
      uVar6 = uVar6 + (iVar9 < iVar1);
LAB_146e08203:
      if (uVar6 != 0xffffffff) {
        if ((int)uVar6 < iVar2) {
          lVar7 = (longlong)iVar2;
          do {
            *(undefined4 *)(*(longlong *)(lVar3 + 0xa8) + lVar7 * 4) =
                 *(undefined4 *)(*(longlong *)(lVar3 + 0xa8) + -4 + lVar7 * 4);
            lVar7 = lVar7 + -1;
          } while ((int)uVar6 < lVar7);
          lVar7 = *(longlong *)(lVar3 + 0xa8);
        }
        piVar10 = (int *)(lVar7 + (longlong)(int)uVar6 * 4);
LAB_146e081ec:
        puVar8 = puVar8 + 2;
        *piVar10 = iVar1;
        goto LAB_146e0810a;
      }
      break;
    }
  }
LAB_146e0810f:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 146e08246 FUN_146e08246 body=320 status=ok
// SIG undefined FUN_146e08246(void)

undefined8 FUN_146e08246(longlong *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x60) != *(int *)(lVar3 + 0x8c)) {
    lVar6 = lVar3 + 0x90;
    if (*(longlong *)(lVar3 + 0x98) != 0) {
      lVar6 = *(longlong *)(lVar3 + 0x98);
    }
    uVar8 = *(uint *)(lVar6 + (ulonglong)(*(int *)(lVar3 + 0xa0) - 1U & param_2) * 4);
    if (uVar8 != 0xffffffff) {
      iVar2 = *(int *)param_1[1];
      do {
        puVar1 = (uint *)(*(longlong *)(lVar3 + 0x58) + (longlong)(int)uVar8 * 0x14);
        if (*puVar1 == param_2) {
          if ((puVar1 + 1 != (uint *)0x0 && puVar1 != (uint *)0x0) &&
             (uVar8 = puVar1[2], 0 < (int)uVar8)) {
            uVar10 = puVar1[1];
            uVar7 = (uVar8 + uVar10) - 1;
            uVar9 = (int)(uVar7 + uVar10) / 2;
            iVar4 = *(int *)(*(longlong *)(lVar3 + 0xa8) + (longlong)(int)uVar9 * 4);
            uVar5 = uVar7;
            if (iVar4 != iVar2) goto LAB_146e0833c;
            goto LAB_146e082fb;
          }
          break;
        }
        uVar8 = puVar1[3];
      } while (uVar8 != 0xffffffff);
    }
  }
  goto LAB_146e08259;
  while( true ) {
    if (iVar4 < iVar2) {
      uVar10 = uVar9 + 1;
      iVar4 = uVar5 + uVar9 + 1;
    }
    else {
      if (uVar9 == uVar10) goto LAB_146e08259;
      uVar5 = uVar9 - 1;
      iVar4 = uVar9 + uVar10 + -1;
    }
    uVar9 = iVar4 / 2;
    iVar4 = *(int *)(*(longlong *)(lVar3 + 0xa8) + (longlong)(int)uVar9 * 4);
    if (iVar4 == iVar2) break;
LAB_146e0833c:
    if (uVar10 == uVar5) goto LAB_146e08259;
  }
LAB_146e082fb:
  if (uVar9 != 0xffffffff) {
    if ((int)uVar9 < (int)uVar7) {
      lVar6 = (longlong)(int)uVar9;
      do {
        *(undefined4 *)(*(longlong *)(lVar3 + 0xa8) + lVar6 * 4) =
             *(undefined4 *)(*(longlong *)(lVar3 + 0xa8) + 4 + lVar6 * 4);
        lVar6 = lVar6 + 1;
      } while ((int)uVar7 != lVar6);
      uVar8 = puVar1[2];
    }
    puVar1[2] = uVar8 - 1;
  }
LAB_146e08259:
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 146e08386 FUN_146e08386 body=423 status=ok
// SIG undefined FUN_146e08386(void)

undefined8 *
FUN_146e08386(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6,undefined1 param_7,char param_8,
             undefined1 param_9)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x101;
  *param_1 = &PTR_FUN_149f5b050;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = param_7;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xffffffff;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x19] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x26) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x134) = param_4;
  param_1[0x27] = param_5;
  *(undefined4 *)(param_1 + 0x28) = param_6;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined2 *)(param_1 + 0x31) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x18a) = param_9;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  if (param_8 != '\0') {
    lVar2 = FUN_14001cc68(0x1e0,0x10);
    FUN_14008b51a(lVar2);
    lVar1 = param_1[0x19];
    param_1[0x19] = lVar2;
    if (lVar1 != 0) {
      FUN_140d9df70(lVar1);
      FUN_1400020a8(lVar1);
      lVar2 = param_1[0x19];
    }
    *(undefined1 *)(lVar2 + 0x48) = 1;
  }
  FUN_1429cd4e2(param_1,param_2);
  return param_1;
}



// FUNCTION 146e0852e FUN_146e0852e body=1402 status=ok
// SIG undefined FUN_146e0852e(void)

undefined8 * FUN_146e0852e(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x101;
  *param_1 = &PTR_FUN_149f5b050;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 0x18);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_140484ca8(param_1 + 2,iVar1,0);
    FUN_1449bab58(param_1[2],uVar7,iVar1);
  }
  FUN_146e08aa8(param_1 + 4,param_2 + 0x20);
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 0x40);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1446fc50a(param_1 + 7,iVar1,0);
    FUN_1446fc4ab(param_1[7],uVar7,iVar1);
  }
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 0x48);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_140484a40(param_1 + 0xb,param_2 + 0x58);
  param_1[0x15] = 0;
  iVar1 = *(int *)(param_2 + 0xb0);
  pvVar2 = *(void **)(param_2 + 0xa8);
  *(int *)(param_1 + 0x16) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x15,iVar1,0);
    memcpy((void *)param_1[0x15],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x17] = 0;
  iVar1 = *(int *)(param_2 + 0xc0);
  pvVar2 = *(void **)(param_2 + 0xb8);
  *(int *)(param_1 + 0x18) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x17,iVar1,0);
    memcpy((void *)param_1[0x17],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x19] = 0;
  param_1[0x1a] = *(undefined8 *)(param_2 + 0xd0);
  param_1[0x1b] = *(undefined8 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)((longlong)param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_2 + 0xe8);
  uVar7 = *(undefined8 *)(param_2 + 0xf4);
  *(undefined8 *)((longlong)param_1 + 0xec) = *(undefined8 *)(param_2 + 0xec);
  *(undefined8 *)((longlong)param_1 + 0xf4) = uVar7;
  uVar4 = *(undefined4 *)(param_2 + 0x100);
  uVar5 = *(undefined4 *)(param_2 + 0x104);
  uVar6 = *(undefined4 *)(param_2 + 0x108);
  *(undefined4 *)((longlong)param_1 + 0xfc) = *(undefined4 *)(param_2 + 0xfc);
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x104) = uVar5;
  *(undefined4 *)(param_1 + 0x21) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x10c) = *(undefined4 *)(param_2 + 0x10c);
  param_1[0x22] = 0;
  iVar1 = *(int *)(param_2 + 0x118);
  uVar7 = *(undefined8 *)(param_2 + 0x110);
  *(int *)(param_1 + 0x23) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  }
  else {
    FUN_1446fc50a(param_1 + 0x22,iVar1,0);
    FUN_1446fc4ab(param_1[0x22],uVar7,iVar1);
  }
  param_1[0x24] = 0;
  iVar1 = *(int *)(param_2 + 0x128);
  pvVar2 = *(void **)(param_2 + 0x120);
  *(int *)(param_1 + 0x25) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 300) = 0;
  }
  else {
    FUN_140484ede(param_1 + 0x24,iVar1,0);
    memcpy((void *)param_1[0x24],pvVar2,(longlong)iVar1 * 0x18);
  }
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)((longlong)param_1 + 0x134) = *(undefined4 *)(param_2 + 0x134);
  param_1[0x27] = *(undefined8 *)(param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x140);
  *(undefined4 *)((longlong)param_1 + 0x144) = *(undefined4 *)(param_2 + 0x144);
  param_1[0x29] = *(undefined8 *)(param_2 + 0x148);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(param_2 + 0x188);
  *(undefined1 *)((longlong)param_1 + 0x189) = *(undefined1 *)(param_2 + 0x189);
  *(undefined1 *)((longlong)param_1 + 0x18a) = *(undefined1 *)(param_2 + 0x18a);
  param_1[0x32] = 0;
  iVar1 = *(int *)(param_2 + 0x198);
  pvVar2 = *(void **)(param_2 + 400);
  *(int *)(param_1 + 0x33) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x32,iVar1,0);
    memcpy((void *)param_1[0x32],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x34] = 0;
  iVar1 = *(int *)(param_2 + 0x1a8);
  pvVar2 = *(void **)(param_2 + 0x1a0);
  *(int *)(param_1 + 0x35) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x34,iVar1,0);
    memcpy((void *)param_1[0x34],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x36] = 0;
  iVar1 = *(int *)(param_2 + 0x1b8);
  pvVar2 = *(void **)(param_2 + 0x1b0);
  *(int *)(param_1 + 0x37) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  }
  else {
    FUN_146deeb7a(param_1 + 0x36,iVar1,0);
    memcpy((void *)param_1[0x36],pvVar2,(longlong)iVar1 << 3);
  }
  param_1[0x38] = 0;
  iVar1 = *(int *)(param_2 + 0x1c8);
  pvVar2 = *(void **)(param_2 + 0x1c0);
  *(int *)(param_1 + 0x39) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x38,iVar1,0);
    memcpy((void *)param_1[0x38],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  FUN_14098bf12(param_1 + 0x3a,0x20);
  lVar3 = *(longlong *)(param_2 + 200);
  if (lVar3 != 0) {
    uVar7 = FUN_14001cc68(0x1e0,0x10);
    FUN_146e0852e(uVar7,lVar3);
    lVar3 = param_1[0x19];
    param_1[0x19] = uVar7;
    if (lVar3 != 0) {
      FUN_140d9df70(lVar3);
      FUN_1400020a8(lVar3);
    }
  }
  return param_1;
}



// FUNCTION 146e08aa8 FUN_146e08aa8 body=90 status=ok
// SIG undefined FUN_146e08aa8(void)

undefined8 * FUN_146e08aa8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_140484d90(param_1,iVar1,0);
    FUN_1449babb0(*param_1,uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 146e08b02 FUN_146e08b02 body=252 status=ok
// SIG undefined FUN_146e08b02(void)

longlong * FUN_146e08b02(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] * 0x70,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x70);
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
      FUN_14008b684(param_2);
    }
    FUN_146e08c00(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146e08d20(*param_2 + lVar3,param_1);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x70;
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



// FUNCTION 146e08c00 FUN_146e08c00 body=112 status=ok
// SIG undefined FUN_146e08c00(void)

void FUN_146e08c00(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14008b9bc(param_1,iVar1);
    }
    FUN_14479f3a2((longlong)iVar1 * 0x70 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146e08c72(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146e08c72 FUN_146e08c72 body=63 status=ok
// SIG undefined FUN_146e08c72(void)

void FUN_146e08c72(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146e08cb2(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x70,8);
  }
  return;
}



// FUNCTION 146e08cb2 FUN_146e08cb2 body=109 status=ok
// SIG undefined FUN_146e08cb2(void)

ulonglong FUN_146e08cb2(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x70) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x70,8);
      uVar1 = uVar1 / 0x70;
    }
  }
  return uVar1;
}



// FUNCTION 146e08d20 FUN_146e08d20 body=281 status=ok
// SIG undefined FUN_146e08d20(void)

void FUN_146e08d20(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulonglong *puVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar6 = 0;
  do {
    FUN_140d03e72(param_2,param_1 + lVar6);
    lVar6 = lVar6 + 0x30;
  } while (lVar6 != 0x60);
  lVar6 = 0;
  do {
    puVar2 = (undefined4 *)(param_1 + 0x60 + lVar6);
    puVar3 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,puVar2,4);
      }
      else {
        thunk_FUN_14572512c(param_2);
      }
    }
    else {
      *puVar2 = *puVar3;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    lVar6 = lVar6 + 4;
  } while (lVar6 != 8);
  puVar4 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_2c = *(byte *)(param_1 + 0x6c) & 1;
    (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
    uVar5 = local_2c;
    if (1 < local_2c) {
      FUN_14572541c(param_2);
      uVar5 = local_2c;
    }
  }
  else {
    uVar5 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
    *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfe | uVar5 != 0;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e08e3a FUN_146e08e3a body=209 status=ok
// SIG undefined FUN_146e08e3a(void)

void FUN_146e08e3a(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    local_48 = 0;
    uStack_40 = 0;
    FUN_146c9d76c(param_2,&local_48);
    lVar2 = local_48;
    lVar3 = (longlong)(int)uStack_40;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        iVar1 = *(int *)(lVar2 + 0x10 + lVar4);
        if ((int)param_1[1] <= iVar1) {
          FUN_14008b974(param_1,(iVar1 - (int)param_1[1]) + 1);
        }
        *(undefined1 *)(*param_1 + 0x14 + (longlong)iVar1 * 0x18) = 1;
        FUN_146def4bc((longlong)iVar1 * 0x18 + *param_1,param_2);
        lVar4 = lVar4 + 0x38;
      } while (lVar3 * 0x38 - lVar4 != 0);
    }
    if (local_48 != 0) {
      FUN_1400020a8(local_48);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e08f0c FUN_146e08f0c body=290 status=ok
// SIG undefined FUN_146e08f0c(void)

undefined8 *
FUN_146e08f0c(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x201;
  *param_1 = &PTR_FUN_149f5b100;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xffffffff;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0x25) = param_3;
  *(undefined4 *)((longlong)param_1 + 300) = param_4;
  param_1[0x26] = param_5;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined2 *)((longlong)param_1 + 0x181) = 0x101;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  FUN_1429cde24(param_1);
  return param_1;
}



// FUNCTION 146e0902e FUN_146e0902e body=353 status=ok
// SIG undefined FUN_146e0902e(void)

void FUN_146e0902e(undefined8 *param_1)

{
  double dVar1;
  int iVar2;
  double dVar3;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x201;
  *param_1 = &PTR_FUN_149f5b100;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xffffffff;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x25] = 0x100000000c;
  param_1[0x26] = 0x40f86a0000000000;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined2 *)((longlong)param_1 + 0x181) = 0x101;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  iVar2 = DAT_14c75efb8;
  dVar3 = (double)DAT_14c75efb8;
  param_1[0x19] = dVar3;
  dVar1 = 1.0;
  if (0 < iVar2) {
    dVar1 = 1.0 / dVar3;
  }
  param_1[0x1a] = dVar1;
  *(undefined4 *)(param_1 + 0x1b) = DAT_14c75efbc;
  *(undefined4 *)((longlong)param_1 + 0xdc) = DAT_14c75efc0;
  *(undefined4 *)(param_1 + 0x1c) = DAT_14c75efc4;
  return;
}



// FUNCTION 146e09190 FUN_146e09190 body=38 status=ok
// SIG undefined FUN_146e09190(void)

undefined8 FUN_146e09190(undefined8 param_1,int param_2)

{
  FUN_146e09caa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e091d2 FUN_146e091d2 body=886 status=ok
// SIG undefined FUN_146e091d2(void)

void FUN_146e091d2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  while( true ) {
    FUN_146e042b0(param_1);
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 300);
    *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
    *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
    *(undefined1 *)(param_1 + 0x181) = *(undefined1 *)(param_2 + 0x181);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    iVar2 = *(int *)(param_2 + 0x18);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x1c) < iVar2) {
      FUN_14008b684(param_1 + 0x10);
    }
    iVar2 = *(int *)(param_2 + 0x28);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x2c) < iVar2) {
      FUN_146e045c2(param_1 + 0x20);
    }
    iVar2 = *(int *)(param_2 + 0x38);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x3c) < iVar2) {
      FUN_14479f570(param_1 + 0x30);
    }
    uVar5 = (longlong)*(int *)(param_2 + 0x58) - (longlong)*(int *)(param_2 + 0x84);
    uVar4 = (uint)uVar5;
    if ((uint)(*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x84)) < uVar4) {
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b(uVar5);
      }
      FUN_146ded982(param_1 + 0x50,uVar5 & 0xffffffff);
      iVar2 = 1;
      if (3 < uVar4) {
        uVar4 = (uVar4 | 1) + 0xe;
        iVar2 = 0x1f;
        if (uVar4 != 0) {
          for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
          }
        }
        iVar2 = 1 << ((byte)iVar2 & 0x1f);
      }
      if ((*(int *)(param_1 + 0x98) == 0) || (*(int *)(param_1 + 0x98) < iVar2)) {
        *(int *)(param_1 + 0x98) = iVar2;
        FUN_146dedb2e(param_1 + 0x50);
      }
    }
    iVar2 = *(int *)(param_2 + 0xa8);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0xac) < iVar2) {
      FUN_14481578e(param_1 + 0xa0);
    }
    iVar2 = *(int *)(param_2 + 0xb8);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0xbc) < iVar2) {
      FUN_14481578e(param_1 + 0xb0);
    }
    iVar2 = *(int *)(param_2 + 0x110);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x114) < iVar2) {
      FUN_14479f570(param_1 + 0x108);
    }
    iVar2 = *(int *)(param_2 + 0x120);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x124) < iVar2) {
      FUN_14008b768(param_1 + 0x118);
    }
    iVar2 = *(int *)(param_2 + 400);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x194) < iVar2) {
      FUN_14481578e(param_1 + 0x188);
    }
    iVar2 = *(int *)(param_2 + 0x1a0);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x1a4) < iVar2) {
      FUN_14481578e(param_1 + 0x198);
    }
    iVar2 = *(int *)(param_2 + 0x1b0);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x1b4) < iVar2) {
      FUN_146dedcd2(param_1 + 0x1a8);
    }
    iVar2 = *(int *)(param_2 + 0x1c0);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x1c4) < iVar2) {
      FUN_14481578e(param_1 + 0x1b8);
    }
    *(undefined1 *)(param_1 + 0xc) = 0;
    lVar3 = *(longlong *)(param_1 + 0xc0);
    if (*(longlong *)(param_2 + 0xc0) == 0) {
      *(undefined8 *)(param_1 + 0xc0) = 0;
      if (lVar3 != 0) {
        FUN_146e09caa(lVar3);
        FUN_1400020a8(lVar3);
        return;
      }
      return;
    }
    if (lVar3 == 0) {
      lVar3 = FUN_14001cc68(0x1d8,0x10);
      FUN_146e0902e(lVar3);
      lVar1 = *(longlong *)(param_1 + 0xc0);
      *(longlong *)(param_1 + 0xc0) = lVar3;
      if (lVar1 != 0) {
        FUN_146e09caa(lVar1);
        FUN_1400020a8(lVar1);
        lVar3 = *(longlong *)(param_1 + 0xc0);
      }
    }
    param_2 = *(longlong *)(param_2 + 0xc0);
    param_1 = lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar2);
}



// FUNCTION 146e0954a FUN_146e0954a body=608 status=ok
// SIG undefined FUN_146e0954a(void)

void FUN_146e0954a(longlong param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_34;
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_1;
  local_34 = param_3;
  cVar1 = FUN_146e0b156(&local_40,param_3,0);
  if (cVar1 == '\0') {
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  else {
    if (ABS(*(double *)(param_1 + 0x140)) <= 1e-08) {
      QueryPerformanceCounter(&local_30);
      *(double *)(param_1 + 0x140) = (double)local_30.QuadPart * DAT_14c83f420 + 16777216.0;
    }
    cVar1 = FUN_146e0b23a(param_2 + 0x10,param_1 + 0x10,&local_34,&local_40);
    if ((((((cVar1 != '\0') &&
           (cVar1 = FUN_146e0b2b0(param_2 + 0x20,param_1 + 0x20,&local_34,&local_40), cVar1 != '\0')
           ) && (cVar1 = FUN_146e0b32a(param_2 + 0x30,param_1 + 0x30,&local_34,&local_40),
                cVar1 != '\0')) &&
         ((cVar1 = FUN_146e0b436(param_2 + 0xa0,param_1 + 0xa0,&local_34,&local_40), cVar1 != '\0'
          && (cVar1 = FUN_146e0b436(param_2 + 0xb0,param_1 + 0xb0,&local_34,&local_40),
             cVar1 != '\0')))) &&
        (((cVar1 = FUN_146e0b32a(param_2 + 0x108,param_1 + 0x108,&local_34,&local_40), cVar1 != '\0'
          && ((cVar1 = FUN_146e0b4d4(param_2 + 0x118,param_1 + 0x118,&local_34,&local_40),
              cVar1 != '\0' &&
              (cVar1 = FUN_146e0b436(param_2 + 0x188,param_1 + 0x188,&local_34,&local_40),
              cVar1 != '\0')))) &&
         (cVar1 = FUN_146e0b436(param_2 + 0x198,param_1 + 0x198,&local_34,&local_40), cVar1 != '\0')
         ))) && (((cVar1 = FUN_146e0b436(param_2 + 0x1b8,param_1 + 0x1b8,&local_34,&local_40),
                  cVar1 != '\0' &&
                  (cVar1 = FUN_146e0b594(param_2 + 0x1a8,param_1 + 0x1a8,&local_34,&local_40),
                  cVar1 != '\0')) &&
                 ((*(longlong *)(param_1 + 0xc0) == 0 ||
                  (FUN_146e0954a(*(longlong *)(param_1 + 0xc0),*(undefined8 *)(param_2 + 0xc0),
                                 param_3), *(char *)(*(longlong *)(param_1 + 0xc0) + 0xc) == '\x01')
                  ))))) {
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e097ac FUN_146e097ac body=79 status=ok
// SIG undefined FUN_146e097ac(void)

undefined8 * FUN_146e097ac(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *param_2 = 0;
  param_2[1] = 0;
  local_18 = param_2;
  FUN_146e0b70a(0,param_3);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e097fc FUN_146e097fc body=69 status=ok
// SIG undefined FUN_146e097fc(void)

void FUN_146e097fc(void)

{
  undefined8 in_stack_00000028;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = &local_10;
  local_10 = in_stack_00000028;
  FUN_146e0c7ac();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e09842 FUN_146e09842 body=253 status=ok
// SIG undefined FUN_146e09842(void)

void FUN_146e09842(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 *param_5,undefined8 param_6)

{
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [40];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_a0 = param_6;
  local_b8 = *param_5;
  uStack_b4 = param_5[1];
  uStack_b0 = param_5[2];
  uStack_ac = param_5[3];
  local_a8 = *(undefined8 *)(param_5 + 4);
  FUN_144b01d78(&local_68,param_3,param_4);
  local_c8 = local_38;
  local_d0 = local_60;
  local_e8 = &local_98;
  local_98 = 0x7fefffffffffffff;
  local_90 = 0x7fefffffffffffff;
  local_88 = 0x7fefffffffffffff;
  local_80 = 0xffefffffffffffff;
  local_78 = 0xffefffffffffffff;
  local_70 = 0xffefffffffffffff;
  local_d8 = local_68;
  local_e0 = &local_a0;
  FUN_146e00bc6(param_1,param_2,&local_68,&local_b8);
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e09940 FUN_146e09940 body=62 status=ok
// SIG undefined FUN_146e09940(void)

void FUN_146e09940(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_146e0365c(param_1,param_2,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e09980 FUN_146e09980 body=56 status=ok
// SIG undefined FUN_146e09980(void)

undefined8 * FUN_146e09980(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x1d8,0x10);
  FUN_146e0df9c(uVar1,param_1);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 146e099be FUN_146e099be body=747 status=ok
// SIG undefined FUN_146e099be(void)

void FUN_146e099be(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  double *pdVar2;
  uint uVar3;
  ulonglong *puVar4;
  undefined4 *puVar5;
  double *pdVar6;
  int iVar7;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cba8);
  iVar7 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (iVar7 < 0x28) {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    FUN_140d03e72(param_2);
  }
  FUN_146e08b02(param_2,param_1 + 0x10);
  FUN_146e0e55d(param_2,param_1 + 0x20);
  FUN_146c9d951(param_2,param_1 + 0x30);
  FUN_146c9d951(param_2,param_1 + 0x108);
  iVar7 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (0x1a < iVar7) {
    puVar4 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar4 + 1;
    if ((uint *)puVar4[1] < puVar1) {
      local_58 = local_58 & 0xffffffff00000000;
      (**(code **)(*param_2 + 0x170))(param_2,&local_58,4);
      uVar3 = (uint)(float)local_58;
      if (1 < (uint)(float)local_58) {
        FUN_14572541c(param_2);
        uVar3 = (uint)(float)local_58;
      }
    }
    else {
      uVar3 = *(uint *)*puVar4;
      *puVar4 = (ulonglong)puVar1;
    }
    if (uVar3 == 0) goto LAB_146e09abb;
  }
  FUN_146e08e3a(param_1 + 0x118,param_2);
LAB_146e09abb:
  puVar5 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x128),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x128) = *puVar5;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar5 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 300),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 300) = *puVar5;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  pdVar2 = (double *)(param_1 + 0x130);
  if (*(int *)((longlong)param_2 + 0x44) < 0x3ec) {
    local_58 = CONCAT44(local_58._4_4_,(float)*pdVar2);
    puVar4 = (ulonglong *)param_2[1];
    puVar5 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar5) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_58,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_58);
      }
    }
    else {
      local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar5;
    }
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      *pdVar2 = (double)(float)local_58;
    }
  }
  else {
    pdVar6 = *(double **)param_2[1];
    if ((double *)((undefined8 *)param_2[1])[1] < pdVar6 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,pdVar2,8);
      }
      else {
        thunk_FUN_146821949(param_2,pdVar2);
      }
    }
    else {
      *pdVar2 = *pdVar6;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
    }
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0x3ff0000000000000;
    *(undefined1 *)(param_1 + 0x181) = 1;
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      *(undefined1 *)(param_1 + 0x180) = 0;
      *(undefined1 *)(param_1 + 0x40) = 0;
      *(undefined1 *)(param_1 + 0x182) = 1;
      *(undefined8 *)(param_1 + 0x44) = 0xffffffffffffffff;
      *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e09caa FUN_146e09caa body=366 status=ok
// SIG undefined FUN_146e09caa(void)

void FUN_146e09caa(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_1400020a8();
  }
  FUN_146e04636(*(undefined8 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x178));
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (lVar1 != 0) {
    FUN_146e09caa(lVar1);
    FUN_1400020a8(lVar1);
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_140d9e122(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_146e04599(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146e09e18 FUN_146e09e18 body=82 status=ok
// SIG undefined FUN_146e09e18(void)

ulonglong FUN_146e09e18(longlong param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)(param_1 + 0x168);
  if ((longlong)iVar1 != 0) {
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x160) + -4 + (longlong)iVar1 * 4);
    *(int *)(param_1 + 0x168) = iVar1 + -1;
    FUN_14479f406(param_1 + 0x160);
    return (ulonglong)uVar2;
  }
  uVar3 = FUN_146e0a604(param_1 + 0x170,1);
  return uVar3;
}



// FUNCTION 146e09e6a FUN_146e09e6a body=1943 status=ok
// SIG undefined FUN_146e09e6a(void)

void FUN_146e09e6a(longlong param_1)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  double *pdVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  double dVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  char cVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong lVar22;
  int iVar23;
  longlong *plVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_138 [32];
  int local_118;
  double *local_110;
  int local_104;
  longlong *local_100;
  longlong *local_f8;
  longlong local_f0;
  int local_e4;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  int local_ac;
  int local_a8 [2];
  longlong local_a0;
  longlong *local_98;
  int local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar21 = (longlong *)(param_1 + 0x150);
  plVar24 = (longlong *)(param_1 + 0x170);
  lVar18 = param_1 + 0x10;
  local_d0 = param_1 + 0x118;
  local_d8 = param_1 + 0x20;
  local_e0 = param_1 + 0xf4;
  do {
    if (*(int *)(param_1 + 0x158) == 0) {
      *(undefined1 *)(param_1 + 0xc) = 1;
      break;
    }
    iVar16 = *(int *)(param_1 + 0x158) + -1;
    iVar8 = *(int *)(*plVar21 + (longlong)iVar16 * 4);
    lVar20 = (longlong)iVar8 * 0xf8;
    if (*(int *)(*plVar24 + lVar20) == 2) {
      *(int *)(param_1 + 0x158) = iVar16;
LAB_146e09f27:
      FUN_146e0a75a(param_1,iVar8);
      iVar16 = 2;
    }
    else {
      local_104 = *(int *)(*plVar24 + lVar20 + 0x7c);
      if (*(int *)(param_1 + 0x18) <= local_104) {
        FUN_14172ad8e(lVar18,(local_104 - *(int *)(param_1 + 0x18)) + 1);
      }
      cVar15 = FUN_146e0a874(param_1,1);
      if (cVar15 == '\0') break;
      local_a8[0] = local_104;
      local_a0 = local_d0;
      local_88 = local_d8;
      local_78 = local_e0;
      lVar17 = *(longlong *)(param_1 + 0x170);
      local_98 = plVar24;
      local_90 = iVar8;
      local_80 = lVar18;
      if ((*(int *)(lVar17 + 0x40 + lVar20) <= *(int *)(param_1 + 0x128)) ||
         (*(int *)(param_1 + 300) <= ((int *)(lVar17 + lVar20))[0x1e])) {
        FUN_146e0a968(local_a8);
        *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + -1;
        goto LAB_146e09f27;
      }
      iVar16 = *(int *)(lVar17 + lVar20);
      local_f8 = plVar21;
      local_f0 = lVar18;
      if (iVar16 == 0) {
        local_e4 = FUN_146e09e18(param_1);
        iVar16 = FUN_146e09e18();
        *(int *)(*(longlong *)(param_1 + 0x170) + 0xb8 + lVar20) = local_e4;
        *(int *)(*(longlong *)(param_1 + 0x170) + 0xf0 + lVar20) = iVar16;
        lVar18 = *(longlong *)(param_1 + 0x170) + lVar20;
        lVar17 = 0;
        do {
          *(undefined8 *)(lVar18 + 0x88 + lVar17) = 0x7fefffffffffffff;
          *(undefined8 *)(lVar18 + 0x90 + lVar17) = 0x7fefffffffffffff;
          *(undefined8 *)(lVar18 + 0x98 + lVar17) = 0x7fefffffffffffff;
          *(undefined8 *)(lVar18 + 0xa0 + lVar17) = 0xffefffffffffffff;
          *(undefined8 *)(lVar18 + 0xa8 + lVar17) = 0xffefffffffffffff;
          *(undefined8 *)(lVar18 + 0xb0 + lVar17) = 0xffefffffffffffff;
          lVar17 = lVar17 + 0x38;
        } while (lVar17 != 0x70);
        *(undefined4 *)(*plVar24 + 0x80 + lVar20) = 0;
        *(undefined4 *)(*plVar24 + lVar20) = 1;
        lVar18 = *plVar24;
        iVar9 = *(int *)(lVar18 + 0x40 + lVar20);
        iVar23 = iVar9 / 2;
        local_100 = plVar24;
        if (iVar9 < -1) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar23);
        }
        lVar17 = (longlong)local_e4 * 0xf8;
        if (*(int *)(lVar18 + lVar17 + 0x44) < iVar23) {
          FUN_14479f570(lVar18 + lVar17 + 0x38,iVar23);
          lVar18 = *local_100;
        }
        lVar19 = (longlong)iVar16 * 0xf8;
        if (*(int *)(lVar18 + 0x44 + lVar19) < iVar23) {
          FUN_14479f570(lVar18 + lVar19 + 0x38,iVar23);
          lVar18 = *local_100;
        }
        plVar24 = local_100;
        *(undefined8 *)(lVar18 + 0x58 + lVar17) = 0;
        puVar5 = (undefined8 *)(lVar18 + 0x48 + lVar17);
        *puVar5 = 0;
        puVar5[1] = 0;
        lVar18 = *(longlong *)(param_1 + 0x170);
        *(undefined8 *)(lVar18 + 0x70 + lVar17) = 0;
        puVar5 = (undefined8 *)(lVar18 + 0x60 + lVar17);
        *puVar5 = 0;
        puVar5[1] = 0;
        lVar18 = *(longlong *)(param_1 + 0x170);
        *(undefined8 *)(lVar18 + 0x58 + lVar19) = 0;
        puVar5 = (undefined8 *)(lVar18 + 0x48 + lVar19);
        *puVar5 = 0;
        puVar5[1] = 0;
        lVar18 = *(longlong *)(param_1 + 0x170);
        *(undefined8 *)(lVar18 + 0x70 + lVar19) = 0;
        puVar5 = (undefined8 *)(lVar18 + 0x60 + lVar19);
        *puVar5 = 0;
        puVar5[1] = 0;
        cVar15 = FUN_146e0a874(param_1,1);
        iVar16 = 1;
        plVar21 = local_f8;
        lVar18 = local_f0;
        if (cVar15 != '\0') {
          lVar17 = *plVar24;
          iVar16 = *(int *)(lVar17 + lVar20);
          goto LAB_146e0a020;
        }
      }
      else {
LAB_146e0a020:
        lVar18 = local_f0;
        plVar21 = local_f8;
        if (iVar16 == 1) {
          lVar19 = lVar17 + lVar20;
          if ((DAT_14c75efd0 == '\x01') || (*(int *)(param_1 + 0x138) < 1)) {
            local_ac = *(int *)(lVar17 + 0x40 + lVar20);
          }
          else {
            local_ac = (*(int *)(param_1 + 0x138) - *(int *)(param_1 + 0x13c)) +
                       *(int *)(lVar19 + 0x80);
            if (*(int *)(lVar19 + 0x40) <= local_ac) {
              local_ac = *(int *)(lVar19 + 0x40);
            }
          }
          if (DAT_14c75efc8 == 1) {
            dVar7 = *(double *)(lVar17 + 0x60 + lVar20);
            dVar25 = *(double *)(lVar17 + 0x68 + lVar20);
            dVar26 = *(double *)(lVar17 + 0x70 + lVar20);
            if (dVar7 <= dVar25) {
              local_118 = (dVar25 <= dVar26) + 1;
            }
            else {
              local_118 = (uint)(dVar7 <= dVar26) * 2;
            }
          }
          else {
            dVar7 = *(double *)(lVar17 + 0x30 + lVar20) - *(double *)(lVar17 + 0x18 + lVar20);
            dVar26 = *(double *)(lVar17 + 0x28 + lVar20) - *(double *)(lVar17 + 0x10 + lVar20);
            dVar25 = *(double *)(lVar17 + 0x20 + lVar20) - *(double *)(lVar17 + 8 + lVar20);
            local_118 = (dVar26 <= dVar7) + 1;
            if (dVar7 < dVar25 && dVar26 < dVar25) {
              local_118 = 0;
            }
          }
          if (DAT_14c75efcc == 1) {
            local_b8 = *(double *)(lVar17 + 0x58 + lVar20);
            pdVar4 = (double *)(lVar17 + 0x48 + lVar20);
            local_c8 = *pdVar4;
            dStack_c0 = pdVar4[1];
          }
          else {
            local_b8 = *(double *)(lVar17 + 0x18 + lVar20);
            local_c8 = *(double *)(lVar17 + 8 + lVar20);
            dStack_c0 = *(double *)(lVar17 + 0x10 + lVar20);
            local_b8 = (*(double *)(lVar17 + 0x30 + lVar20) - local_b8) * 0.5 + local_b8;
            dStack_c0 = (*(double *)(lVar17 + 0x28 + lVar20) - dStack_c0) * 0.5 + dStack_c0;
            local_c8 = (*(double *)(lVar17 + 0x20 + lVar20) - local_c8) * 0.5 + local_c8;
          }
          local_110 = &local_c8;
          FUN_146e0ac22(param_1,*(undefined4 *)(lVar19 + 0x80),&local_ac);
          *(int *)(*(longlong *)(param_1 + 0x170) + 0x80 + lVar20) = local_ac;
          cVar15 = FUN_146e0a874(param_1,1);
          iVar16 = 1;
          if (cVar15 == '\0') goto LAB_146e09f36;
          lVar17 = *plVar24;
        }
        iVar16 = *(int *)(lVar17 + 0xb8 + lVar20);
        lVar18 = (longlong)iVar16 * 0xf8;
        if (*(int *)(lVar17 + 0x40 + lVar18) != 0) {
          iVar9 = *(int *)(lVar17 + 0xf0 + lVar20);
          lVar19 = (longlong)iVar9 * 0xf8;
          if (*(int *)(lVar17 + 0x40 + lVar19) != 0) {
            lVar22 = (longlong)local_104 * 0x70;
            pbVar1 = (byte *)(*(longlong *)(param_1 + 0x10) + 0x6c + lVar22);
            *pbVar1 = *pbVar1 & 0xfe;
            lVar17 = *(longlong *)(param_1 + 0x10);
            lVar10 = *(longlong *)(param_1 + 0x170);
            *(undefined8 *)(lVar17 + 0x10 + lVar22) = *(undefined8 *)(lVar10 + 0x98 + lVar20);
            puVar5 = (undefined8 *)(lVar10 + 0x88 + lVar20);
            uVar14 = puVar5[1];
            *(undefined8 *)(lVar17 + lVar22) = *puVar5;
            ((undefined8 *)(lVar17 + lVar22))[1] = uVar14;
            *(undefined8 *)(lVar17 + 0x28 + lVar22) = *(undefined8 *)(lVar10 + 0xb0 + lVar20);
            puVar6 = (undefined8 *)(lVar10 + 0xa0 + lVar20);
            uVar14 = puVar6[1];
            puVar5 = (undefined8 *)(lVar17 + 0x18 + lVar22);
            *puVar5 = *puVar6;
            puVar5[1] = uVar14;
            lVar17 = *(longlong *)(param_1 + 0x10);
            lVar10 = *(longlong *)(param_1 + 0x170);
            *(undefined8 *)(lVar10 + 0x18 + lVar18) = *(undefined8 *)(lVar17 + 0x10 + lVar22);
            uVar14 = ((undefined8 *)(lVar17 + lVar22))[1];
            puVar5 = (undefined8 *)(lVar10 + 8 + lVar18);
            *puVar5 = *(undefined8 *)(lVar17 + lVar22);
            puVar5[1] = uVar14;
            *(undefined8 *)(lVar10 + 0x30 + lVar18) = *(undefined8 *)(lVar17 + 0x28 + lVar22);
            puVar5 = (undefined8 *)(lVar17 + 0x18 + lVar22);
            uVar14 = puVar5[1];
            puVar6 = (undefined8 *)(lVar10 + 0x20 + lVar18);
            *puVar6 = *puVar5;
            puVar6[1] = uVar14;
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x60 + lVar22) =
                 *(undefined4 *)(param_1 + 0x18);
            lVar17 = *(longlong *)(param_1 + 0x10);
            lVar10 = *(longlong *)(param_1 + 0x170);
            *(undefined8 *)(lVar17 + 0x40 + lVar22) = *(undefined8 *)(lVar10 + 0xd0 + lVar20);
            puVar6 = (undefined8 *)(lVar10 + 0xc0 + lVar20);
            uVar14 = puVar6[1];
            puVar5 = (undefined8 *)(lVar17 + 0x30 + lVar22);
            *puVar5 = *puVar6;
            puVar5[1] = uVar14;
            *(undefined8 *)(lVar17 + 0x58 + lVar22) = *(undefined8 *)(lVar10 + 0xe8 + lVar20);
            puVar6 = (undefined8 *)(lVar10 + 0xd8 + lVar20);
            uVar14 = puVar6[1];
            puVar5 = (undefined8 *)(lVar17 + 0x48 + lVar22);
            *puVar5 = *puVar6;
            puVar5[1] = uVar14;
            lVar17 = *(longlong *)(param_1 + 0x10);
            lVar10 = *(longlong *)(param_1 + 0x170);
            *(undefined8 *)(lVar10 + 0x18 + lVar19) = *(undefined8 *)(lVar17 + 0x40 + lVar22);
            puVar5 = (undefined8 *)(lVar17 + 0x30 + lVar22);
            uVar14 = puVar5[1];
            puVar6 = (undefined8 *)(lVar10 + 8 + lVar19);
            *puVar6 = *puVar5;
            puVar6[1] = uVar14;
            *(undefined8 *)(lVar10 + 0x30 + lVar19) = *(undefined8 *)(lVar17 + 0x58 + lVar22);
            puVar2 = (undefined4 *)(lVar17 + 0x48 + lVar22);
            uVar11 = puVar2[1];
            uVar12 = puVar2[2];
            uVar13 = puVar2[3];
            puVar3 = (undefined4 *)(lVar10 + 0x20 + lVar19);
            *puVar3 = *puVar2;
            puVar3[1] = uVar11;
            puVar3[2] = uVar12;
            puVar3[3] = uVar13;
            *(int *)(*(longlong *)(param_1 + 0x10) + 100 + lVar22) = *(int *)(param_1 + 0x18) + 1;
            *(int *)(*(longlong *)(param_1 + 0x170) + 0x78 + lVar18) =
                 *(int *)(*(longlong *)(param_1 + 0x170) + 0x78 + lVar20) + 1;
            *(int *)(*(longlong *)(param_1 + 0x170) + 0x78 + lVar19) =
                 *(int *)(*(longlong *)(param_1 + 0x170) + 0x78 + lVar20) + 1;
            *(undefined4 *)(*(longlong *)(param_1 + 0x170) + 0x7c + lVar18) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x60 + lVar22);
            *(undefined4 *)(*(longlong *)(param_1 + 0x170) + 0x7c + lVar19) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 100 + lVar22);
            iVar8 = *(int *)(param_1 + 0x158);
            *(uint *)(param_1 + 0x158) = iVar8 + 1U;
            local_100 = plVar24;
            if (*(uint *)(param_1 + 0x15c) < iVar8 + 1U) {
              FUN_1446f48e2(local_f8,iVar8);
            }
            plVar21 = local_f8;
            *(int *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar8 * 4) = iVar9;
            iVar8 = *(int *)(param_1 + 0x158);
            *(uint *)(param_1 + 0x158) = iVar8 + 1U;
            if (*(uint *)(param_1 + 0x15c) < iVar8 + 1U) {
              FUN_1446f48e2(local_f8,iVar8);
            }
            lVar18 = local_f0;
            *(int *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar8 * 4) = iVar16;
            FUN_14172ad8e(local_f0,(*(int *)(*(longlong *)(param_1 + 0x10) + 100 + lVar22) -
                                   *(int *)(param_1 + 0x18)) + 1);
            *(undefined4 *)(*(longlong *)(param_1 + 0x170) + lVar20) = 2;
            iVar16 = 0;
            plVar24 = local_100;
            goto LAB_146e09f36;
          }
        }
        FUN_146e0a968(local_a8);
        *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + -1;
        FUN_146e0a75a(param_1,iVar8);
        iVar16 = 0;
        plVar21 = local_f8;
        lVar18 = local_f0;
      }
    }
LAB_146e09f36:
  } while (iVar16 != 1);
  if ((local_70 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e0a604 FUN_146e0a604 body=68 status=ok
// SIG undefined FUN_146e0a604(void)

int FUN_146e0a604(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_146e0a6c2(param_1,iVar1);
  }
  FUN_146e0a648((longlong)iVar1 * 0xf8 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 146e0a648 FUN_146e0a648 body=121 status=ok
// SIG undefined FUN_146e0a648(void)

void FUN_146e0a648(undefined4 *param_1,int param_2)

{
  longlong lVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0x7fefffffffffffff;
    *(undefined8 *)(param_1 + 4) = 0x7fefffffffffffff;
    *(undefined8 *)(param_1 + 6) = 0x7fefffffffffffff;
    *(undefined8 *)(param_1 + 8) = 0xffefffffffffffff;
    *(undefined8 *)(param_1 + 10) = 0xffefffffffffffff;
    *(undefined8 *)(param_1 + 0xc) = 0xffefffffffffffff;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    lVar1 = 0xb0;
    do {
      *(undefined8 *)((longlong)param_1 + lVar1 + -0x28) = 0x7fefffffffffffff;
      *(undefined8 *)((longlong)param_1 + lVar1 + -0x20) = 0x7fefffffffffffff;
      *(undefined8 *)((longlong)param_1 + lVar1 + -0x18) = 0x7fefffffffffffff;
      *(undefined8 *)((longlong)param_1 + lVar1 + -0x10) = 0xffefffffffffffff;
      *(undefined8 *)((longlong)param_1 + lVar1 + -8) = 0xffefffffffffffff;
      *(undefined8 *)((longlong)param_1 + lVar1) = 0xffefffffffffffff;
      lVar1 = lVar1 + 0x38;
    } while (lVar1 != 0x120);
    param_1 = param_1 + 0x3e;
  }
  return;
}



// FUNCTION 146e0a6c2 FUN_146e0a6c2 body=150 status=ok
// SIG undefined FUN_146e0a6c2(void)

void FUN_146e0a6c2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xf8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xf8)) {
      uVar5 = uVar4 / 0xf8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xf8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146e0a75a FUN_146e0a75a body=280 status=ok
// SIG undefined FUN_146e0a75a(void)

void FUN_146e0a75a(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 auStack_148 [5];
  longlong local_120 [31];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_120[0]._0_4_ = 0;
  local_120[1] = 0x7fefffffffffffff;
  local_120[2] = 0x7fefffffffffffff;
  local_120[3] = 0x7fefffffffffffff;
  local_120[4] = 0xffefffffffffffff;
  local_120[5] = 0xffefffffffffffff;
  local_120[6] = 0xffefffffffffffff;
  local_120[7] = 0;
  local_120[8] = 0;
  lVar2 = 0xb0;
  do {
    *(undefined8 *)((longlong)auStack_148 + lVar2) = 0x7fefffffffffffff;
    *(undefined8 *)((longlong)auStack_148 + lVar2 + 8) = 0x7fefffffffffffff;
    *(undefined8 *)((longlong)auStack_148 + lVar2 + 0x10) = 0x7fefffffffffffff;
    *(undefined8 *)((longlong)auStack_148 + lVar2 + 0x18) = 0xffefffffffffffff;
    *(undefined8 *)((longlong)auStack_148 + lVar2 + 0x20) = 0xffefffffffffffff;
    *(undefined8 *)((longlong)local_120 + lVar2) = 0xffefffffffffffff;
    lVar2 = lVar2 + 0x38;
  } while (lVar2 != 0x120);
  FUN_146e0aff4((longlong)param_2 * 0xf8 + *(longlong *)(param_1 + 0x170),local_120);
  if (local_120[7] != 0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x168);
  *(uint *)(param_1 + 0x168) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x16c) < iVar1 + 1U) {
    FUN_1446f48e2((longlong *)(param_1 + 0x160),iVar1);
  }
  *(int *)(*(longlong *)(param_1 + 0x160) + (longlong)iVar1 * 4) = param_2;
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e0a874 FUN_146e0a874 body=242 status=ok
// SIG undefined FUN_146e0a874(void)

ulonglong FUN_146e0a874(longlong param_1,char param_2)

{
  int iVar1;
  int iVar2;
  uint3 uVar3;
  BOOL BVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  undefined7 uVar6;
  int iVar7;
  undefined1 auStack_38 [32];
  LARGE_INTEGER local_18;
  ulonglong local_10;
  
  iVar2 = DAT_14c75efd4;
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (DAT_14c75efd0 == '\x01') {
    if (param_2 == '\0') {
      iVar1 = *(int *)(param_1 + 0x148);
      uVar5 = CONCAT71((int7)(local_10 >> 8),1);
      iVar7 = 0;
      if (iVar1 < DAT_14c75efd4) {
        iVar7 = iVar1 + 1;
      }
      *(int *)(param_1 + 0x148) = iVar7;
      if (iVar1 < iVar2) goto LAB_146e0a946;
    }
    BVar4 = QueryPerformanceCounter(&local_18);
    uVar6 = (undefined7)(CONCAT44(extraout_var,BVar4) >> 8);
    uVar5 = CONCAT71(uVar6,1);
    if (0.0 < DAT_14c75efd8) {
      uVar5 = CONCAT71(uVar6,((double)local_18.QuadPart * DAT_14c83f420 + 16777216.0) -
                             *(double *)(param_1 + 0x140) <= (double)DAT_14c75efd8 ||
                             (ABS(*(double *)(param_1 + 0x140)) <= 1e-08 ||
                             *(int *)(param_1 + 0x138) < 1));
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x138);
    uVar3 = (uint3)((uint)iVar2 >> 8);
    if (iVar2 < 1) {
      uVar5 = CONCAT71((uint7)uVar3,1);
    }
    else {
      uVar5 = (ulonglong)CONCAT31(uVar3,*(int *)(param_1 + 0x13c) < iVar2);
    }
  }
LAB_146e0a946:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e0a968 FUN_146e0a968 body=696 status=ok
// SIG undefined FUN_146e0a968(void)

void FUN_146e0a968(int *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined **local_110;
  undefined4 local_108;
  undefined2 local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0 [11];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar9 = (longlong)*(int *)(**(longlong **)(param_1 + 4) + 0x40 + (longlong)param_1[6] * 0xf8);
  if (lVar9 != 0) {
    lVar4 = *(longlong *)(**(longlong **)(param_1 + 4) + 0x38 + (longlong)param_1[6] * 0xf8);
    lVar12 = 0;
    do {
      plVar5 = *(longlong **)(param_1 + 2);
      uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 8);
      iVar3 = *(int *)(lVar4 + 0x10 + lVar12);
      if ((int)plVar5[1] <= iVar3) {
        FUN_14008b974(plVar5,(iVar3 - (int)plVar5[1]) + 1);
      }
      lVar7 = (longlong)iVar3 * 0x18;
      *(undefined1 *)(*plVar5 + 0x14 + lVar7) = 1;
      lVar6 = *plVar5;
      *(undefined8 *)(lVar6 + lVar7) = 0xffffffffffffffff;
      *(undefined4 *)(lVar6 + 8 + lVar7) = uVar2;
      *(undefined8 *)(lVar6 + 0xc + lVar7) = 0xffffffffffffffff;
      lVar12 = lVar12 + 0x68;
    } while (lVar9 * 0x68 - lVar12 != 0);
  }
  pbVar1 = (byte *)(**(longlong **)(param_1 + 10) + 0x6c + (longlong)*param_1 * 0x70);
  *pbVar1 = *pbVar1 | 1;
  plVar5 = *(longlong **)(param_1 + 8);
  local_108 = 0;
  local_104 = 1;
  local_110 = &PTR_FUN_149f48460;
  local_98 = 0;
  local_90 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0x40f86a0000000000;
  local_118 = 0xf;
  FUN_1429d0aa8(&local_110,**(longlong **)(param_1 + 4) + (longlong)param_1[6] * 0xf8 + 0x38,0,0);
  iVar3 = (int)plVar5[1];
  *(uint *)(plVar5 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)plVar5 + 0xc) < iVar3 + 1U) {
    FUN_146e0b0be(plVar5,iVar3);
  }
  puVar8 = (undefined8 *)(*plVar5 + (longlong)iVar3 * 200);
  *(undefined4 *)(puVar8 + 1) = 0;
  *(undefined2 *)((longlong)puVar8 + 0xc) = 1;
  *puVar8 = &PTR_FUN_149f48460;
  puVar8[2] = 0;
  puVar8[2] = local_100;
  local_100 = 0;
  *(undefined4 *)(puVar8 + 3) = (undefined4)uStack_f8;
  *(undefined4 *)((longlong)puVar8 + 0x1c) = uStack_f8._4_4_;
  uStack_f8 = 0;
  puVar10 = local_f0;
  puVar11 = puVar8 + 4;
  for (lVar9 = 0xb; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined4 *)(puVar8 + 0x10) = local_90;
  puVar8[0xf] = local_98;
  puVar8[0x11] = 0;
  puVar8[0x11] = local_88;
  local_88 = 0;
  *(undefined4 *)(puVar8 + 0x12) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)puVar8 + 0x94) = uStack_80._4_4_;
  uStack_80 = 0;
  puVar8[0x13] = 0;
  puVar8[0x13] = local_78;
  local_78 = 0;
  *(undefined4 *)(puVar8 + 0x14) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)puVar8 + 0xa4) = uStack_70._4_4_;
  uStack_70 = 0;
  puVar8[0x15] = 0;
  puVar8[0x15] = local_68;
  local_68 = 0;
  *(undefined4 *)(puVar8 + 0x16) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar8 + 0xb4) = uStack_60._4_4_;
  uStack_60 = 0;
  puVar8[0x17] = local_58;
  *(undefined1 *)(puVar8 + 0x18) = local_50;
  *(int *)(**(longlong **)(param_1 + 10) + 0x60 + (longlong)*param_1 * 0x70) = iVar3;
  FUN_146ca5918(&local_110);
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e0ac22 FUN_146e0ac22 body=977 status=ok
// SIG undefined FUN_146e0ac22(void)

void FUN_146e0ac22(longlong param_1,int param_2,int *param_3,longlong param_4,int param_5,
                  longlong param_6)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  char cVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  double *pdVar20;
  longlong lVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  
  iVar13 = *param_3;
  if (param_2 < iVar13) {
    dVar3 = *(double *)(param_6 + (longlong)param_5 * 8);
    lVar15 = (longlong)param_2;
    lVar21 = lVar15 * 0x68 + 0x60;
    iVar18 = 0;
    do {
      lVar8 = *(longlong *)(param_4 + 0x38);
      dVar4 = *(double *)(lVar8 + -0x18 + lVar21);
      dVar5 = *(double *)(lVar8 + -0x28 + lVar21);
      dVar6 = *(double *)(lVar8 + -0x20 + lVar21);
      dVar4 = (*(double *)(lVar8 + lVar21) - dVar4) * 0.5 + dVar4;
      dVar6 = (*(double *)(lVar8 + -8 + lVar21) - dVar6) * 0.5 + dVar6;
      dVar5 = (*(double *)(lVar8 + -0x10 + lVar21) - dVar5) * 0.5 + dVar5;
      dVar27 = dVar4;
      if ((param_5 != 2) && (dVar27 = dVar5, param_5 == 1)) {
        dVar27 = dVar6;
      }
      lVar19 = (ulonglong)(dVar3 < dVar27) * 0x38;
      lVar17 = *(longlong *)(param_1 + 0x170);
      lVar14 = (longlong)*(int *)(param_4 + 0xb8 + lVar19) * 0xf8;
      iVar13 = *(int *)(lVar17 + 0x40 + lVar14);
      uVar16 = iVar13 + 1;
      *(uint *)(lVar17 + 0x40 + lVar14) = uVar16;
      if (*(uint *)(lVar17 + 0x44 + lVar14) < uVar16) {
        FUN_14479f6b8(lVar17 + lVar14 + 0x38,iVar13);
      }
      pdVar1 = (double *)(lVar21 + lVar8);
      pdVar20 = (double *)(lVar19 + param_4 + 0x88);
      lVar17 = lVar17 + lVar14;
      lVar8 = *(longlong *)(lVar17 + 0x38);
      lVar14 = (longlong)iVar13 * 0x68;
      *(double *)(lVar8 + 0x30 + lVar14) = pdVar1[-6];
      dVar27 = pdVar1[-0xc];
      dVar26 = pdVar1[-0xb];
      dVar9 = pdVar1[-10];
      dVar7 = pdVar1[-9];
      dVar10 = pdVar1[-7];
      pdVar2 = (double *)(lVar8 + 0x20 + lVar14);
      *pdVar2 = pdVar1[-8];
      pdVar2[1] = dVar10;
      pdVar2 = (double *)(lVar8 + 0x10 + lVar14);
      *pdVar2 = dVar9;
      pdVar2[1] = dVar7;
      *(double *)(lVar8 + lVar14) = dVar27;
      ((double *)(lVar8 + lVar14))[1] = dVar26;
      *(double *)(lVar8 + 0x48 + lVar14) = pdVar1[-3];
      dVar27 = pdVar1[-4];
      pdVar2 = (double *)(lVar8 + 0x38 + lVar14);
      *pdVar2 = pdVar1[-5];
      pdVar2[1] = dVar27;
      *(double *)(lVar8 + 0x60 + lVar14) = *pdVar1;
      dVar27 = pdVar1[-1];
      dVar9 = (double)(int)uVar16;
      pdVar2 = (double *)(lVar8 + 0x50 + lVar14);
      *pdVar2 = pdVar1[-2];
      pdVar2[1] = dVar27;
      dVar27 = pdVar20[2];
      uVar22 = SUB84(dVar27,0);
      uVar23 = (undefined4)((ulonglong)dVar27 >> 0x20);
      dVar26 = pdVar1[-3];
      if (dVar26 <= dVar27) {
        uVar22 = SUB84(dVar26,0);
        uVar23 = (undefined4)((ulonglong)dVar26 >> 0x20);
      }
      dVar27 = *pdVar20;
      uVar24 = SUB84(dVar27,0);
      uVar25 = (undefined4)((ulonglong)dVar27 >> 0x20);
      dVar26 = pdVar20[1];
      if (pdVar1[-4] <= pdVar20[1]) {
        dVar26 = pdVar1[-4];
      }
      dVar7 = pdVar1[-5];
      if (dVar7 <= dVar27) {
        uVar24 = SUB84(dVar7,0);
        uVar25 = (undefined4)((ulonglong)dVar7 >> 0x20);
      }
      *pdVar20 = (double)CONCAT44(uVar25,uVar24);
      pdVar20[1] = dVar26;
      pdVar20[2] = (double)CONCAT44(uVar23,uVar22);
      dVar27 = pdVar20[5];
      uVar22 = SUB84(dVar27,0);
      uVar23 = (undefined4)((ulonglong)dVar27 >> 0x20);
      dVar26 = *pdVar1;
      if (dVar27 <= dVar26) {
        uVar22 = SUB84(dVar26,0);
        uVar23 = (undefined4)((ulonglong)dVar26 >> 0x20);
      }
      dVar27 = pdVar20[4];
      uVar24 = SUB84(dVar27,0);
      uVar25 = (undefined4)((ulonglong)dVar27 >> 0x20);
      dVar26 = pdVar1[-1];
      if (dVar27 <= dVar26) {
        uVar24 = SUB84(dVar26,0);
        uVar25 = (undefined4)((ulonglong)dVar26 >> 0x20);
      }
      dVar27 = pdVar20[3];
      if (pdVar20[3] <= pdVar1[-2]) {
        dVar27 = pdVar1[-2];
      }
      pdVar20[3] = dVar27;
      pdVar20[4] = (double)CONCAT44(uVar25,uVar24);
      pdVar20[5] = (double)CONCAT44(uVar23,uVar22);
      dVar28 = dVar4 - *(double *)(lVar17 + 0x58);
      dVar27 = dVar6 - *(double *)(lVar17 + 0x50);
      dVar26 = dVar5 - *(double *)(lVar17 + 0x48);
      dVar10 = dVar26 / dVar9 + *(double *)(lVar17 + 0x48);
      *(double *)(lVar17 + 0x48) = dVar10;
      dVar7 = dVar27 / dVar9 + *(double *)(lVar17 + 0x50);
      *(double *)(lVar17 + 0x50) = dVar7;
      dVar9 = dVar28 / dVar9 + *(double *)(lVar17 + 0x58);
      *(double *)(lVar17 + 0x58) = dVar9;
      *(double *)(lVar17 + 0x60) = (dVar5 - dVar10) * dVar26 + *(double *)(lVar17 + 0x60);
      *(double *)(lVar17 + 0x68) = (dVar6 - dVar7) * dVar27 + *(double *)(lVar17 + 0x68);
      *(double *)(lVar17 + 0x70) = (dVar4 - dVar9) * dVar28 + *(double *)(lVar17 + 0x70);
      cVar12 = FUN_146e0a874(param_1,0);
      iVar13 = *param_3;
      if (cVar12 == '\0') {
        iVar11 = (param_2 - iVar18) + 1;
        if (param_2 - iVar18 == iVar13 + -1) {
          iVar11 = iVar13;
        }
        iVar13 = iVar11;
        *param_3 = iVar13;
        break;
      }
      lVar15 = lVar15 + 1;
      iVar18 = iVar18 + -1;
      lVar21 = lVar21 + 0x68;
    } while (lVar15 < iVar13);
  }
  *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + (iVar13 - param_2);
  return;
}



// FUNCTION 146e0aff4 FUN_146e0aff4 body=202 status=ok
// SIG undefined FUN_146e0aff4(void)

undefined4 * FUN_146e0aff4(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  
  *param_1 = *param_2;
  uVar6 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = uVar6;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  uVar3 = param_2[9];
  uVar4 = param_2[10];
  uVar5 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar3;
  param_1[10] = uVar4;
  param_1[0xb] = uVar5;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 0xe) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_2 + 0xe) = 0;
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  uVar6 = *(undefined8 *)(param_2 + 0x12);
  uVar7 = *(undefined8 *)(param_2 + 0x14);
  uVar8 = *(undefined8 *)(param_2 + 0x16);
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  uVar10 = *(undefined8 *)(param_2 + 0x1a);
  uVar11 = *(undefined8 *)(param_2 + 0x1c);
  uVar12 = *(undefined8 *)(param_2 + 0x1f);
  *(undefined8 *)(param_1 + 0x1d) = *(undefined8 *)(param_2 + 0x1d);
  *(undefined8 *)(param_1 + 0x1f) = uVar12;
  *(undefined8 *)(param_1 + 0x1a) = uVar10;
  *(undefined8 *)(param_1 + 0x1c) = uVar11;
  *(undefined8 *)(param_1 + 0x16) = uVar8;
  *(undefined8 *)(param_1 + 0x18) = uVar9;
  *(undefined8 *)(param_1 + 0x12) = uVar6;
  *(undefined8 *)(param_1 + 0x14) = uVar7;
  lVar13 = 0x88;
  do {
    *(undefined8 *)((longlong)param_1 + lVar13 + 0x10) =
         *(undefined8 *)((longlong)param_2 + lVar13 + 0x10);
    uVar6 = ((undefined8 *)((longlong)param_2 + lVar13))[1];
    *(undefined8 *)((longlong)param_1 + lVar13) = *(undefined8 *)((longlong)param_2 + lVar13);
    ((undefined8 *)((longlong)param_1 + lVar13))[1] = uVar6;
    puVar1 = (undefined8 *)((longlong)param_2 + lVar13 + 0x18);
    uVar6 = puVar1[1];
    puVar2 = (undefined8 *)((longlong)param_1 + lVar13 + 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    *(undefined8 *)((longlong)param_1 + lVar13 + 0x28) =
         *(undefined8 *)((longlong)param_2 + lVar13 + 0x28);
    *(undefined4 *)((longlong)param_1 + lVar13 + 0x30) =
         *(undefined4 *)((longlong)param_2 + lVar13 + 0x30);
    lVar13 = lVar13 + 0x38;
  } while (lVar13 != 0xf8);
  return param_1;
}



// FUNCTION 146e0b0be FUN_146e0b0be body=150 status=ok
// SIG undefined FUN_146e0b0be(void)

void FUN_146e0b0be(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 200,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 200)) {
      uVar5 = uVar4 / 200 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,200,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146e0b156 FUN_146e0b156 body=226 status=ok
// SIG undefined FUN_146e0b156(void)

ulonglong FUN_146e0b156(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  undefined7 uVar4;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar4 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if (param_2 != -1) {
    if (DAT_14c75efd0 == '\x01') {
      lVar2 = *param_1;
      iVar1 = *(int *)(lVar2 + 0x14c);
      *(int *)(lVar2 + 0x14c) = iVar1 + 1;
      if (iVar1 < DAT_14c75efdc) {
        QueryPerformanceCounter(&local_20);
        if (1e-08 < ABS(*(double *)(lVar2 + 0x140))) {
          if ((double)DAT_14c75efd8 <
              ((double)local_20.QuadPart * DAT_14c83f420 + 16777216.0) - *(double *)(lVar2 + 0x140))
          {
            uVar3 = 0;
          }
        }
      }
      else {
        *(undefined4 *)(lVar2 + 0x14c) = 0;
      }
    }
    else {
      uVar3 = CONCAT71(uVar4,param_3 < param_2 || param_2 < 0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e0b23a FUN_146e0b23a body=118 status=ok
// SIG undefined FUN_146e0b23a(void)

undefined4 FUN_146e0b23a(longlong param_1,longlong param_2,int *param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2 + 8);
  iVar3 = 0;
  if (iVar4 < *(int *)(param_1 + 8)) {
    iVar3 = 0;
    do {
      cVar1 = FUN_146e0b156(param_4,*param_3,iVar3);
      if (cVar1 == '\0') break;
      FUN_146e0b632(param_1,param_2,iVar4);
      iVar3 = iVar3 + 0x70;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 8));
  }
  iVar4 = *param_3;
  if (0 < iVar4) {
    iVar2 = iVar4 - iVar3;
    if (iVar4 < iVar3) {
      iVar2 = 0;
    }
    *param_3 = iVar2;
  }
  return CONCAT31((int3)((uint)*(int *)(param_2 + 8) >> 8),
                  *(int *)(param_2 + 8) == *(int *)(param_1 + 8));
}



// FUNCTION 146e0b2b0 FUN_146e0b2b0 body=121 status=ok
// SIG undefined FUN_146e0b2b0(void)

undefined4 FUN_146e0b2b0(longlong param_1,longlong param_2,int *param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2 + 8);
  iVar3 = 0;
  if (iVar4 < *(int *)(param_1 + 8)) {
    iVar3 = 0;
    do {
      cVar1 = FUN_146e0b156(param_4,*param_3,iVar3);
      if (cVar1 == '\0') break;
      FUN_146e0b6b4(param_1,param_2,iVar4);
      iVar3 = iVar3 + 200;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 8));
  }
  iVar4 = *param_3;
  if (0 < iVar4) {
    iVar2 = iVar4 - iVar3;
    if (iVar4 < iVar3) {
      iVar2 = 0;
    }
    *param_3 = iVar2;
  }
  return CONCAT31((int3)((uint)*(int *)(param_2 + 8) >> 8),
                  *(int *)(param_2 + 8) == *(int *)(param_1 + 8));
}



// FUNCTION 146e0b32a FUN_146e0b32a body=267 status=ok
// SIG undefined FUN_146e0b32a(void)

undefined4 FUN_146e0b32a(longlong *param_1,longlong *param_2,int *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char cVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  
  lVar20 = (longlong)(int)param_2[1];
  uVar21 = 0;
  if ((int)param_2[1] < (int)param_1[1]) {
    lVar19 = lVar20 * 0x68;
    uVar21 = 0;
    do {
      cVar16 = FUN_146e0b156(param_4,*param_3,uVar21 & 0xffffffff);
      if (cVar16 == '\0') break;
      lVar22 = *param_1;
      iVar5 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
        FUN_14479f6b8(param_2,iVar5);
      }
      lVar22 = lVar22 + lVar19 + 0x50;
      lVar6 = *param_2;
      lVar18 = (longlong)iVar5 * 0x68;
      *(undefined8 *)(lVar6 + 0x30 + lVar18) = *(undefined8 *)((uVar21 - 0x20) + lVar22);
      puVar1 = (undefined8 *)((uVar21 - 0x50) + lVar22);
      uVar14 = *puVar1;
      uVar15 = puVar1[1];
      puVar2 = (undefined4 *)((uVar21 - 0x40) + lVar22);
      uVar7 = *puVar2;
      uVar8 = puVar2[1];
      uVar9 = puVar2[2];
      uVar10 = puVar2[3];
      puVar2 = (undefined4 *)((uVar21 - 0x30) + lVar22);
      uVar11 = puVar2[1];
      uVar12 = puVar2[2];
      uVar13 = puVar2[3];
      puVar3 = (undefined4 *)(lVar6 + 0x20 + lVar18);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar3[2] = uVar12;
      puVar3[3] = uVar13;
      puVar2 = (undefined4 *)(lVar6 + 0x10 + lVar18);
      *puVar2 = uVar7;
      puVar2[1] = uVar8;
      puVar2[2] = uVar9;
      puVar2[3] = uVar10;
      *(undefined8 *)(lVar6 + lVar18) = uVar14;
      ((undefined8 *)(lVar6 + lVar18))[1] = uVar15;
      *(undefined8 *)(lVar6 + 0x48 + lVar18) = *(undefined8 *)((uVar21 - 8) + lVar22);
      puVar1 = (undefined8 *)((uVar21 - 0x18) + lVar22);
      uVar14 = puVar1[1];
      puVar4 = (undefined8 *)(lVar6 + 0x38 + lVar18);
      *puVar4 = *puVar1;
      puVar4[1] = uVar14;
      *(undefined8 *)(lVar6 + 0x60 + lVar18) = *(undefined8 *)(uVar21 + 0x10 + lVar22);
      puVar2 = (undefined4 *)(uVar21 + lVar22);
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar3 = (undefined4 *)(lVar6 + 0x50 + lVar18);
      *puVar3 = *puVar2;
      puVar3[1] = uVar7;
      puVar3[2] = uVar8;
      puVar3[3] = uVar9;
      lVar20 = lVar20 + 1;
      uVar21 = uVar21 + 0x68;
    } while (lVar20 < (int)param_1[1]);
  }
  iVar5 = *param_3;
  if (0 < iVar5) {
    iVar17 = iVar5 - (int)uVar21;
    if (iVar5 < (int)uVar21) {
      iVar17 = 0;
    }
    *param_3 = iVar17;
  }
  return CONCAT31((int3)((uint)(int)param_2[1] >> 8),(int)param_2[1] == (int)param_1[1]);
}



// FUNCTION 146e0b436 FUN_146e0b436 body=157 status=ok
// SIG undefined FUN_146e0b436(void)

undefined4 FUN_146e0b436(longlong *param_1,longlong *param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(int)param_2[1];
  iVar5 = 0;
  if ((int)param_2[1] < (int)param_1[1]) {
    iVar5 = 0;
    do {
      cVar3 = FUN_146e0b156(param_4,*param_3,iVar5);
      if (cVar3 == '\0') break;
      lVar2 = *param_1;
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1446f48e2(param_2,iVar1);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = *(undefined4 *)(lVar2 + lVar6 * 4);
      iVar5 = iVar5 + 4;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[1]);
  }
  iVar1 = *param_3;
  if (0 < iVar1) {
    iVar4 = iVar1 - iVar5;
    if (iVar1 < iVar5) {
      iVar4 = 0;
    }
    *param_3 = iVar4;
  }
  return CONCAT31((int3)((uint)(int)param_2[1] >> 8),(int)param_2[1] == (int)param_1[1]);
}



// FUNCTION 146e0b4d4 FUN_146e0b4d4 body=191 status=ok
// SIG undefined FUN_146e0b4d4(void)

undefined4 FUN_146e0b4d4(longlong *param_1,longlong *param_2,int *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar12 = (longlong)(int)param_2[1];
  iVar11 = 0;
  if ((int)param_2[1] < (int)param_1[1]) {
    lVar13 = lVar12 * 0x18;
    iVar11 = 0;
    do {
      cVar9 = FUN_146e0b156(param_4,*param_3,iVar11);
      if (cVar9 == '\0') break;
      lVar4 = *param_1;
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_14008bacc(param_2,iVar3);
      }
      lVar5 = *param_2;
      *(undefined8 *)(lVar5 + 0x10 + (longlong)iVar3 * 0x18) =
           *(undefined8 *)(lVar4 + 0x10 + lVar13);
      puVar1 = (undefined4 *)(lVar4 + lVar13);
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (undefined4 *)(lVar5 + (longlong)iVar3 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      iVar11 = iVar11 + 0x14;
      lVar12 = lVar12 + 1;
      lVar13 = lVar13 + 0x18;
    } while (lVar12 < (int)param_1[1]);
  }
  iVar3 = *param_3;
  if (0 < iVar3) {
    iVar10 = iVar3 - iVar11;
    if (iVar3 < iVar11) {
      iVar10 = 0;
    }
    *param_3 = iVar10;
  }
  return CONCAT31((int3)((uint)(int)param_2[1] >> 8),(int)param_2[1] == (int)param_1[1]);
}



// FUNCTION 146e0b594 FUN_146e0b594 body=157 status=ok
// SIG undefined FUN_146e0b594(void)

undefined4 FUN_146e0b594(longlong *param_1,longlong *param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(int)param_2[1];
  iVar5 = 0;
  if ((int)param_2[1] < (int)param_1[1]) {
    iVar5 = 0;
    do {
      cVar3 = FUN_146e0b156(param_4,*param_3,iVar5);
      if (cVar3 == '\0') break;
      lVar2 = *param_1;
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1400232c6(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + lVar6 * 8);
      iVar5 = iVar5 + 8;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[1]);
  }
  iVar1 = *param_3;
  if (0 < iVar1) {
    iVar4 = iVar1 - iVar5;
    if (iVar1 < iVar5) {
      iVar4 = 0;
    }
    *param_3 = iVar4;
  }
  return CONCAT31((int3)((uint)(int)param_2[1] >> 8),(int)param_2[1] == (int)param_1[1]);
}



// FUNCTION 146e0b632 FUN_146e0b632 body=129 status=ok
// SIG undefined FUN_146e0b632(void)

void FUN_146e0b632(longlong *param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = (longlong)param_3 * 0x70 + *param_1;
  iVar3 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_14008b9bc(param_2,iVar3);
  }
  lVar5 = (longlong)iVar3 * 0x70 + *param_2;
  lVar6 = 0x18;
  do {
    *(undefined8 *)(lVar5 + -8 + lVar6) = *(undefined8 *)(lVar7 + -8 + lVar6);
    puVar1 = (undefined8 *)(lVar7 + -0x18 + lVar6);
    uVar4 = puVar1[1];
    puVar2 = (undefined8 *)(lVar5 + -0x18 + lVar6);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    uVar4 = ((undefined8 *)(lVar7 + lVar6))[1];
    *(undefined8 *)(lVar5 + lVar6) = *(undefined8 *)(lVar7 + lVar6);
    ((undefined8 *)(lVar5 + lVar6))[1] = uVar4;
    *(undefined8 *)(lVar5 + 0x10 + lVar6) = *(undefined8 *)(lVar7 + 0x10 + lVar6);
    lVar6 = lVar6 + 0x30;
  } while (lVar6 != 0x78);
  uVar4 = *(undefined8 *)(lVar7 + 0x60);
  *(undefined8 *)(lVar5 + 0x65) = *(undefined8 *)(lVar7 + 0x65);
  *(undefined8 *)(lVar5 + 0x60) = uVar4;
  return;
}



// FUNCTION 146e0b6b4 FUN_146e0b6b4 body=85 status=ok
// SIG undefined FUN_146e0b6b4(void)

void FUN_146e0b6b4(longlong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_146e0b0be(param_2,iVar1);
  }
  FUN_146c9c5fa((longlong)iVar1 * 200 + *param_2,lVar2 + (longlong)param_3 * 200);
  return;
}



// FUNCTION 146e0b70a FUN_146e0b70a body=178 status=ok
// SIG undefined FUN_146e0b70a(void)

void FUN_146e0b70a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  undefined8 *local_c0;
  undefined2 *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c8 = local_30;
  local_c0 = &local_60;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_b8 = &local_38;
  local_38 = 0;
  local_36 = 0;
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_d8 = param_2;
  local_d0 = param_3;
  local_68 = local_c8;
  FUN_146e0b7be(0,&local_a8,&local_68);
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e0b7be FUN_146e0b7be body=1759 status=ok
// SIG undefined FUN_146e0b7be(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_146e0b7be(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       double *param_5,longlong *param_6,undefined8 param_7,undefined8 param_8,
                       undefined8 param_9)

{
  undefined4 *puVar1;
  double dVar2;
  undefined4 uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong **pplVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 *unaff_RSI;
  undefined8 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_1168 [32];
  double *local_1148;
  longlong *local_1140;
  undefined8 local_1138;
  undefined8 local_1130;
  undefined8 local_1128;
  longlong local_1118;
  undefined8 local_1110;
  undefined8 local_1108;
  undefined8 local_1100 [9];
  longlong local_10b8;
  double *local_10b0;
  double local_10a8 [7];
  longlong *local_1070;
  longlong *local_1068 [2];
  undefined8 local_1058;
  undefined8 uStack_1050;
  undefined8 local_1048;
  undefined8 uStack_1040;
  undefined8 local_1038;
  undefined8 local_1030;
  undefined8 *local_1028;
  longlong **local_78;
  uint local_70;
  uint local_6c;
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x146e0b7d4;
  local_1108 = param_9;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1168;
  local_1070 = (longlong *)0x0;
  local_1118 = param_1;
  local_1110 = param_3;
  if ((longlong)*(int *)(param_1 + 0x110) != 0) {
    puVar16 = *(undefined8 **)(param_1 + 0x108);
    unaff_RSI = puVar16 + (longlong)*(int *)(param_1 + 0x110) * 0xd;
    do {
      local_10a8[2] = (double)puVar16[9];
      local_10a8[0] = (double)puVar16[7];
      local_10a8[1] = (double)puVar16[8];
      local_10a8[5] = (double)puVar16[0xc];
      local_10a8[3] = (double)puVar16[10];
      local_10a8[4] = (double)puVar16[0xb];
      lVar7 = 0;
      do {
        if ((local_10a8[lVar7 + 3] <= param_5[lVar7] && param_5[lVar7] != local_10a8[lVar7 + 3]) ||
           (param_5[lVar7 + 3] <= local_10a8[lVar7] && local_10a8[lVar7] != param_5[lVar7 + 3]))
        goto LAB_146e0b948;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 3);
      local_1038 = puVar16[6];
      local_1048 = (double *)puVar16[4];
      uStack_1040 = puVar16[5];
      local_1058 = puVar16[2];
      uStack_1050 = (longlong **)puVar16[3];
      local_1068[0] = (longlong *)*puVar16;
      local_1068[1] = (longlong *)puVar16[1];
      plVar4 = (longlong *)*param_6;
      iVar6 = (int)plVar4[1];
      *(uint *)(plVar4 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)plVar4 + 0xc) < iVar6 + 1U) {
        FUN_140187932(plVar4,iVar6);
        param_1 = local_1118;
      }
      lVar7 = *plVar4;
      lVar12 = (longlong)iVar6 * 0x38;
      *(undefined8 *)(lVar7 + 0x30 + lVar12) = local_1038;
      puVar1 = (undefined4 *)(lVar7 + 0x20 + lVar12);
      *puVar1 = (undefined4)local_1048;
      puVar1[1] = local_1048._4_4_;
      puVar1[2] = (undefined4)uStack_1040;
      puVar1[3] = uStack_1040._4_4_;
      puVar1 = (undefined4 *)(lVar7 + 0x10 + lVar12);
      *puVar1 = (undefined4)local_1058;
      puVar1[1] = local_1058._4_4_;
      puVar1[2] = (undefined4)uStack_1050;
      puVar1[3] = uStack_1050._4_4_;
      *(undefined8 *)(lVar7 + lVar12) = local_1068[0];
      ((undefined8 *)(lVar7 + lVar12))[1] = local_1068[1];
LAB_146e0b948:
      puVar16 = puVar16 + 0xd;
    } while (puVar16 != unaff_RSI);
  }
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    local_1068[0] = param_6;
    local_1058 = local_1110;
    uStack_1050 = &local_1070;
    local_1048 = param_5;
    uStack_1040 = param_4;
    local_1038 = param_7;
    local_1030 = param_8;
    local_1028 = &param_9;
    local_1068[1] = (longlong *)param_2;
    if (0 < (int)*(uint *)(param_1 + 0x38)) {
      if ((((0.0 < *(double *)(local_1118 + 200)) &&
           (uVar13 = (ulonglong)*(int *)(local_1118 + 0xd8), 0 < (longlong)uVar13)) &&
          (0 < *(int *)(local_1118 + 0xdc))) &&
         ((0 < *(int *)(local_1118 + 0xe0) &&
          (*(int *)(local_1118 + 0x84) < *(int *)(local_1118 + 0x58))))) {
        dVar2 = *(double *)(local_1118 + 0xd0);
        auVar21._8_8_ = 0;
        auVar21._0_8_ = ABS(*param_5 * dVar2) * 2.220446049250313e-16 + *param_5 * dVar2;
        auVar21 = roundpd(auVar21,auVar21,1);
        lVar7 = (longlong)auVar21._0_8_;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = ABS(param_5[3] * dVar2) * 2.220446049250313e-16 + param_5[3] * dVar2;
        auVar21 = roundpd(auVar22,auVar22,1);
        lVar12 = (longlong)auVar21._0_8_;
        if (lVar7 <= lVar12) {
          auVar23._8_8_ = 0;
          auVar23._0_8_ = ABS(param_5[1] * dVar2) * 2.220446049250313e-16 + param_5[1] * dVar2;
          auVar21 = roundpd(auVar23,auVar23,1);
          lVar18 = (longlong)auVar21._0_8_;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = ABS(dVar2 * param_5[4]) * 2.220446049250313e-16 + dVar2 * param_5[4];
          auVar21 = roundpd(auVar20,auVar20,1);
          lVar15 = (longlong)auVar21._0_8_;
          if (((lVar18 <= lVar15) && (uVar14 = (lVar12 - lVar7) + 1, uVar14 <= uVar13)) &&
             ((uVar17 = (lVar15 - lVar18) + 1, uVar17 <= uVar13 &&
              (uVar17 = uVar17 * uVar14, uVar17 < uVar13 || uVar17 - uVar13 == 0)))) {
            local_10b0 = local_10a8;
            local_10a8[0] = 0.0;
            local_10a8[1] = 0.0;
            local_10b8 = local_1118;
            do {
              uVar10 = ((uint)lVar7 & 0xff00) << 8 | (uint)lVar7 & 0xff;
              uVar10 = (uVar10 << 4 | uVar10) & 0xf0f0f0f;
              uVar10 = (uVar10 * 4 | uVar10) & 0x33333333;
              lVar8 = lVar18;
              do {
                uVar11 = ((uint)lVar8 & 0xff00) << 8 | (uint)lVar8 & 0xff;
                uVar11 = (uVar11 << 4 | uVar11) & 0xf0f0f0f;
                uVar11 = (uVar11 * 4 | uVar11) & 0x33333333;
                cVar5 = FUN_146e0c0b2(&local_10b8,
                                      (uVar11 * 2 | uVar11 * 4) & 0xaaaaaaaa |
                                      (uVar10 * 2 | uVar10) & 0x55555555);
                if (cVar5 == '\0') goto LAB_146e0be56;
                lVar8 = lVar8 + 1;
              } while (lVar15 + 1 != lVar8);
              bVar19 = lVar7 != lVar12;
              lVar7 = lVar7 + 1;
            } while (bVar19);
LAB_146e0be56:
            pplVar9 = local_1068;
            puVar16 = local_1100;
            for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar16 = *pplVar9;
              pplVar9 = pplVar9 + 1;
              puVar16 = puVar16 + 1;
            }
            uVar13 = FUN_146e0be9e(local_1118,local_10a8);
            unaff_RSI = (undefined8 *)(uVar13 & 0xffffffff);
            if (local_10a8[0] != 0.0) {
              FUN_1400020a8();
            }
            cVar5 = (char)unaff_RSI;
            goto joined_r0x000146e0bd7c;
          }
        }
      }
      unaff_RSI = *(undefined8 **)(local_1118 + 0x30);
      lVar7 = (ulonglong)*(uint *)(param_1 + 0x38) * 0x68;
      do {
        cVar5 = FUN_146e0bfa2(local_1068,unaff_RSI);
        if (cVar5 == '\0') goto LAB_146e0bd82;
        unaff_RSI = unaff_RSI + 0xd;
        lVar7 = lVar7 + -0x68;
      } while (lVar7 != 0);
    }
  }
  else {
    local_1128 = local_1108;
    local_1130 = param_8;
    local_1138 = param_7;
    local_1140 = param_6;
    local_1148 = param_5;
    cVar5 = FUN_146e0b7be(*(longlong *)(param_1 + 0xc0),param_2,local_1110,param_4);
joined_r0x000146e0bd7c:
    if (cVar5 == '\0') {
LAB_146e0bd82:
      uVar13 = 0;
      goto LAB_146e0bd0c;
    }
  }
  local_78 = (longlong **)0x0;
  local_6c = 0xff;
  if (*(char *)(local_1118 + 0x40) == '\x01') {
    iVar6 = *(int *)(local_1118 + 0x44);
    if (iVar6 != -1) {
LAB_146e0bb8a:
      local_70 = 1;
      local_1068[0] = (longlong *)CONCAT44(local_1068[0]._4_4_,iVar6);
      local_1068[1] = (longlong *)0x0;
      local_70 = 1;
      lVar7 = local_1118;
      do {
        pplVar9 = local_78;
        if (local_78 == (longlong **)0x0) {
          pplVar9 = local_1068;
        }
        lVar15 = (longlong)(int)local_70;
        local_70 = local_70 - 1;
        lVar12 = *(longlong *)(lVar7 + 0x10) + (longlong)*(int *)(pplVar9 + lVar15 * 2 + -2) * 0x70;
        if ((*(byte *)(*(longlong *)(lVar7 + 0x10) + 0x6c +
                      (longlong)*(int *)(pplVar9 + lVar15 * 2 + -2) * 0x70) & 1) == 0) {
          lVar18 = 0;
          lVar15 = 0;
          do {
            uVar10 = local_70;
            plVar4 = local_1070;
            local_10a8[2] = (double)*(undefined8 *)(lVar12 + 0x10 + lVar15);
            local_10a8[0] = *(double *)(lVar12 + lVar15);
            local_10a8[1] = ((double *)(lVar12 + lVar15))[1];
            local_10a8[5] = (double)*(undefined8 *)(lVar12 + 0x28 + lVar15);
            puVar16 = (undefined8 *)(lVar12 + 0x18 + lVar15);
            local_10a8[3] = (double)*puVar16;
            local_10a8[4] = (double)puVar16[1];
            lVar8 = 0;
            do {
              if ((local_10a8[lVar8 + 3] <= param_5[lVar8] &&
                   param_5[lVar8] != local_10a8[lVar8 + 3]) ||
                 (param_5[lVar8 + 3] <= local_10a8[lVar8] && local_10a8[lVar8] != param_5[lVar8 + 3]
                 )) goto LAB_146e0bc98;
              lVar8 = lVar8 + 1;
            } while (lVar8 != 3);
            uVar3 = *(undefined4 *)(lVar12 + 0x60 + lVar18 * 4);
            lVar8 = (longlong)(int)local_70;
            local_70 = local_70 + 1;
            if (local_6c < local_70) {
              FUN_146e0c15e(local_1068,uVar10);
              lVar7 = local_1118;
            }
            pplVar9 = local_78;
            if (local_78 == (longlong **)0x0) {
              pplVar9 = local_1068;
            }
            *(undefined4 *)(pplVar9 + lVar8 * 2) = uVar3;
            pplVar9[lVar8 * 2 + 1] = plVar4;
LAB_146e0bc98:
            lVar18 = lVar18 + 1;
            lVar15 = lVar15 + 0x30;
          } while (lVar15 != 0x60);
        }
        else {
          cVar5 = FUN_146e0c274((longlong)*(int *)(lVar12 + 0x60) * 200 +
                                *(longlong *)(lVar7 + 0x20),param_5,param_6);
          lVar7 = local_1118;
          if (cVar5 == '\0') {
            uVar13 = 0;
            goto LAB_146e0bcfa;
          }
        }
      } while (local_70 != 0);
      uVar13 = CONCAT71((int7)((ulonglong)local_1068 >> 8),1);
LAB_146e0bcfa:
      if (local_78 != (longlong **)0x0) {
        FUN_1400020a8();
      }
      goto LAB_146e0bd0c;
    }
  }
  else {
    iVar6 = 0;
    if (*(int *)(local_1118 + 0x18) != 0) goto LAB_146e0bb8a;
  }
  uVar13 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
LAB_146e0bd0c:
  if ((local_60 ^ (ulonglong)auStack_1168) == DAT_14c707940) {
    return uVar13 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e0be9e FUN_146e0be9e body=259 status=ok
// SIG undefined FUN_146e0be9e(void)

undefined8 FUN_146e0be9e(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  bVar9 = false;
  iVar6 = 0;
  do {
    if ((bVar9) || ((longlong)(int)param_2[1] == 0)) {
LAB_146e0bf0b:
      if (*(int *)(param_1 + 0xb8) <= iVar6) {
        return 1;
      }
      iVar5 = *(int *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar6 * 4);
      iVar6 = iVar6 + 1;
      bVar9 = true;
    }
    else {
      iVar5 = 0x7fffffff;
      bVar9 = true;
      lVar8 = 0;
      do {
        if (0 < *(int *)(*param_2 + 4 + lVar8)) {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0xa0) + (longlong)*(int *)(*param_2 + lVar8) * 4)
          ;
          bVar3 = iVar5 <= iVar1;
          if (iVar1 < iVar5) {
            iVar5 = iVar1;
          }
          bVar9 = (bool)(bVar9 & bVar3);
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)(int)param_2[1] * 8 != lVar8);
      if (bVar9) goto LAB_146e0bf0b;
      lVar8 = param_2[1];
      if ((longlong)(int)lVar8 != 0) {
        lVar2 = *param_2;
        lVar7 = 0;
        do {
          iVar1 = *(int *)(lVar2 + 4 + lVar7);
          if ((0 < iVar1) &&
             (*(int *)(*(longlong *)(param_1 + 0xa0) + (longlong)*(int *)(lVar2 + lVar7) * 4) ==
              iVar5)) {
            *(int *)(lVar2 + lVar7) = *(int *)(lVar2 + lVar7) + 1;
            *(int *)(lVar2 + 4 + lVar7) = iVar1 + -1;
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)(int)lVar8 << 3 != lVar7);
      }
      bVar9 = false;
    }
    cVar4 = FUN_146e0bfa2(param_3,(longlong)iVar5 * 0x68 + *(longlong *)(param_1 + 0x30));
    if (cVar4 == '\0') {
      return 0;
    }
  } while( true );
}



// FUNCTION 146e0bfa2 FUN_146e0bfa2 body=270 status=ok
// SIG undefined FUN_146e0bfa2(void)

undefined8 FUN_146e0bfa2(undefined8 *param_1,undefined4 *param_2)

{
  double *pdVar1;
  undefined4 *puVar2;
  double dVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
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
  double local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48[2] = (double)*(undefined8 *)(param_2 + 0x12);
  local_48[0] = *(double *)(param_2 + 0xe);
  local_48[1] = (double)*(undefined8 *)(param_2 + 0x10);
  local_48[5] = (double)*(undefined8 *)(param_2 + 0x18);
  local_48[3] = (double)*(undefined8 *)(param_2 + 0x14);
  local_48[4] = (double)*(undefined8 *)(param_2 + 0x16);
  lVar6 = param_1[4];
  lVar7 = 0;
  do {
    dVar3 = *(double *)(lVar6 + lVar7 * 8);
    if (local_48[lVar7 + 3] <= dVar3 && dVar3 != local_48[lVar7 + 3]) goto LAB_146e0c08b;
    pdVar1 = (double *)(lVar6 + 0x18 + lVar7 * 8);
    if (*pdVar1 <= local_48[lVar7] && local_48[lVar7] != *pdVar1) goto LAB_146e0c08b;
    lVar7 = lVar7 + 1;
  } while (lVar7 != 3);
  local_58 = *(undefined8 *)(param_2 + 0xc);
  local_88 = *param_2;
  uStack_84 = param_2[1];
  uStack_80 = param_2[2];
  uStack_7c = param_2[3];
  local_78 = param_2[4];
  uStack_74 = param_2[5];
  uStack_70 = param_2[6];
  uStack_6c = param_2[7];
  local_68 = param_2[8];
  uStack_64 = param_2[9];
  uStack_60 = param_2[10];
  uStack_5c = param_2[0xb];
  plVar5 = *(longlong **)*param_1;
  iVar4 = (int)plVar5[1];
  *(uint *)(plVar5 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)plVar5 + 0xc) < iVar4 + 1U) {
    FUN_140187932(plVar5,iVar4);
  }
  lVar6 = *plVar5;
  lVar7 = (longlong)iVar4 * 0x38;
  *(undefined8 *)(lVar6 + 0x30 + lVar7) = local_58;
  puVar2 = (undefined4 *)(lVar6 + 0x20 + lVar7);
  *puVar2 = local_68;
  puVar2[1] = uStack_64;
  puVar2[2] = uStack_60;
  puVar2[3] = uStack_5c;
  puVar2 = (undefined4 *)(lVar6 + 0x10 + lVar7);
  *puVar2 = local_78;
  puVar2[1] = uStack_74;
  puVar2[2] = uStack_70;
  puVar2[3] = uStack_6c;
  puVar2 = (undefined4 *)(lVar6 + lVar7);
  *puVar2 = local_88;
  puVar2[1] = uStack_84;
  puVar2[2] = uStack_80;
  puVar2[3] = uStack_7c;
LAB_146e0c08b:
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e0c0b2 FUN_146e0c0b2 body=172 status=ok
// SIG undefined FUN_146e0c0b2(void)

undefined8 FUN_146e0c0b2(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = (uint *)*param_1;
  if (puVar3[0x16] != puVar3[0x21]) {
    puVar5 = puVar3 + 0x22;
    if (*(uint **)(puVar3 + 0x24) != (uint *)0x0) {
      puVar5 = *(uint **)(puVar3 + 0x24);
    }
    uVar4 = puVar5[puVar3[0x26] - 1 & param_2];
    if (uVar4 != 0xffffffff) {
      puVar3 = *(uint **)(puVar3 + 0x14);
      do {
        puVar5 = puVar3 + (longlong)(int)uVar4 * 5;
        if (*puVar5 == param_2) {
          puVar3 = puVar5 + 1;
          if (((ulonglong)puVar3 & 0xfffffffffffffffb) != 0) {
            puVar2 = (ulonglong *)param_1[1];
            iVar1 = (int)puVar2[1];
            *(uint *)(puVar2 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)puVar2 + 0xc) < iVar1 + 1U) {
              FUN_146dedd8c(puVar2,iVar1);
            }
            puVar3 = (uint *)*puVar2;
            puVar3[(longlong)iVar1 * 2] = puVar5[1];
            puVar3[(longlong)iVar1 * 2 + 1] = puVar5[2];
          }
          break;
        }
        uVar4 = puVar5[3];
      } while (uVar4 != 0xffffffff);
    }
  }
  return CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
}



// FUNCTION 146e0c15e FUN_146e0c15e body=131 status=ok
// SIG undefined FUN_146e0c15e(void)

void FUN_146e0c15e(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0xff8);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0xff;
    if (0xff < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0xff < *(uint *)(param_1 + 0xffc)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xffc) = (int)uVar4;
    FUN_146e0c1e2(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146e0c1e2 FUN_146e0c1e2 body=145 status=ok
// SIG undefined FUN_146e0c1e2(void)

void FUN_146e0c1e2(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xff0);
  if ((uint)param_3 < 0x100) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xff0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xff0),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xff0,param_2,param_3,param_4);
  return;
}



// FUNCTION 146e0c274 FUN_146e0c274 body=1334 status=ok
// SIG undefined FUN_146e0c274(void)

undefined8 FUN_146e0c274(longlong param_1,longlong param_2,longlong *param_3)

{
  uint *puVar1;
  double *pdVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  double dVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 auStack_148 [40];
  ulonglong local_120;
  ulonglong local_118;
  longlong *local_110;
  longlong local_108;
  ulonglong local_100;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined1 local_b4 [4];
  int local_b0;
  int local_ac;
  int local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_110 = param_3;
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    plVar17 = *(longlong **)(param_1 + 0x10);
    plVar16 = plVar17 + (longlong)*(int *)(param_1 + 0x18) * 0xd;
    do {
      lVar10 = -3;
      do {
        dVar5 = *(double *)(param_2 + 0x18 + lVar10 * 8);
        if (((double)plVar17[lVar10 + 0xd] <= dVar5 && dVar5 != (double)plVar17[lVar10 + 0xd]) ||
           (pdVar2 = (double *)(param_2 + 0x30 + lVar10 * 8),
           *pdVar2 <= (double)plVar17[lVar10 + 10] && (double)plVar17[lVar10 + 10] != *pdVar2))
        goto LAB_146e0c37c;
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0);
      uStack_68 = (undefined4)plVar17[6];
      iStack_64 = (int)((ulonglong)plVar17[6] >> 0x20);
      local_98 = *plVar17;
      uStack_90 = plVar17[1];
      local_88 = (undefined4)plVar17[2];
      uStack_84 = *(undefined4 *)((longlong)plVar17 + 0x14);
      uStack_80 = (undefined4)plVar17[3];
      uStack_7c = *(undefined4 *)((longlong)plVar17 + 0x1c);
      local_78 = plVar17[4];
      uStack_70 = (undefined4)plVar17[5];
      uStack_6c = *(undefined4 *)((longlong)plVar17 + 0x2c);
      plVar6 = (longlong *)*local_110;
      iVar11 = (int)plVar6[1];
      lVar10 = (longlong)iVar11;
      *(uint *)(plVar6 + 1) = iVar11 + 1U;
      if (*(uint *)((longlong)plVar6 + 0xc) < iVar11 + 1U) {
        FUN_140187932(plVar6,iVar11);
      }
      lVar18 = *plVar6;
      *(ulonglong *)(lVar18 + (lVar10 * 7 + 6) * 8) = CONCAT44(iStack_64,uStack_68);
      puVar3 = (undefined4 *)(lVar18 + (lVar10 * 7 + 4) * 8);
      *puVar3 = (undefined4)local_78;
      puVar3[1] = local_78._4_4_;
      puVar3[2] = uStack_70;
      puVar3[3] = uStack_6c;
      puVar3 = (undefined4 *)(lVar18 + (lVar10 * 7 + 2) * 8);
      *puVar3 = local_88;
      puVar3[1] = uStack_84;
      puVar3[2] = uStack_80;
      puVar3[3] = uStack_7c;
      puVar3 = (undefined4 *)(lVar18 + lVar10 * 0x38);
      *puVar3 = (undefined4)local_98;
      puVar3[1] = local_98._4_4_;
      puVar3[2] = (int)uStack_90;
      puVar3[3] = uStack_90._4_4_;
LAB_146e0c37c:
      plVar17 = plVar17 + 0xd;
    } while (plVar17 != plVar16);
  }
  if ((longlong)*(int *)(param_1 + 0xa0) != 0) {
    lVar10 = *(longlong *)(param_1 + 0x98);
    lVar18 = (longlong)*(int *)(param_1 + 0xa0) * 0x80 + lVar10;
    do {
      lVar13 = 0;
      do {
        dVar5 = *(double *)(param_2 + lVar13 * 8);
        pdVar2 = (double *)(lVar10 + 0x18 + lVar13 * 8);
        if ((*pdVar2 <= dVar5 && dVar5 != *pdVar2) ||
           (dVar5 = *(double *)(lVar10 + lVar13 * 8),
           pdVar2 = (double *)(param_2 + 0x18 + lVar13 * 8), *pdVar2 <= dVar5 && dVar5 != *pdVar2))
        goto LAB_146e0c468;
        lVar13 = lVar13 + 1;
      } while (lVar13 != 3);
      uStack_68 = (undefined4)*(undefined8 *)(lVar10 + 0x60);
      iStack_64 = (int)((ulonglong)*(undefined8 *)(lVar10 + 0x60) >> 0x20);
      local_98 = *(longlong *)(lVar10 + 0x30);
      uStack_90 = *(longlong *)(lVar10 + 0x38);
      local_88 = *(undefined4 *)(lVar10 + 0x40);
      uStack_84 = *(undefined4 *)(lVar10 + 0x44);
      uStack_80 = *(undefined4 *)(lVar10 + 0x48);
      uStack_7c = *(undefined4 *)(lVar10 + 0x4c);
      local_78 = *(longlong *)(lVar10 + 0x50);
      uStack_70 = *(undefined4 *)(lVar10 + 0x58);
      uStack_6c = *(undefined4 *)(lVar10 + 0x5c);
      plVar17 = (longlong *)*local_110;
      iVar11 = (int)plVar17[1];
      lVar13 = (longlong)iVar11;
      *(uint *)(plVar17 + 1) = iVar11 + 1U;
      if (*(uint *)((longlong)plVar17 + 0xc) < iVar11 + 1U) {
        FUN_140187932(plVar17,iVar11);
      }
      lVar14 = *plVar17;
      *(ulonglong *)(lVar14 + (lVar13 * 7 + 6) * 8) = CONCAT44(iStack_64,uStack_68);
      puVar3 = (undefined4 *)(lVar14 + (lVar13 * 7 + 4) * 8);
      *puVar3 = (undefined4)local_78;
      puVar3[1] = local_78._4_4_;
      puVar3[2] = uStack_70;
      puVar3[3] = uStack_6c;
      puVar3 = (undefined4 *)(lVar14 + (lVar13 * 7 + 2) * 8);
      *puVar3 = local_88;
      puVar3[1] = uStack_84;
      puVar3[2] = uStack_80;
      puVar3[3] = uStack_7c;
      puVar3 = (undefined4 *)(lVar14 + lVar13 * 0x38);
      *puVar3 = (undefined4)local_98;
      puVar3[1] = local_98._4_4_;
      puVar3[2] = (int)uStack_90;
      puVar3[3] = uStack_90._4_4_;
LAB_146e0c468:
      lVar10 = lVar10 + 0x80;
    } while (lVar10 != lVar18);
  }
  if (*(char *)(param_1 + 0xc0) == '\0') {
    FUN_146c9c584(param_1 + 0x20,&local_a4,param_2);
    FUN_146c9c584(param_1 + 0x20,&local_b0,param_2 + 0x18);
    local_78 = 0;
    uStack_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    uStack_6c = 0x80;
    uStack_68 = 0xffffffff;
    iStack_64 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    local_120 = (ulonglong)local_a4;
    if ((int)local_a4 <= local_b0) {
      iVar11 = local_b0;
      iVar8 = local_ac;
      local_108 = param_1;
      do {
        local_118 = (ulonglong)local_a0;
        iVar12 = local_a8;
        if ((int)local_a0 <= iVar8) {
          do {
            uVar9 = local_9c;
            if ((int)local_9c <= iVar12) {
              do {
                lVar10 = (longlong)
                         (int)((*(int *)(param_1 + 0x7c) * (int)local_120 + (int)local_118) *
                               *(int *)(param_1 + 0x80) + uVar9) * 0x10;
                lVar18 = (longlong)*(int *)(*(longlong *)(param_1 + 0x88) + 8 + lVar10);
                uVar19 = uVar9;
                if (lVar18 != 0) {
                  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x88) + lVar10);
                  lVar18 = lVar18 * 0x80 + lVar10;
                  local_100 = (ulonglong)uVar9;
                  do {
                    uVar9 = *(uint *)(lVar10 + 0x40);
                    if ((int)uStack_90 != iStack_64) {
                      puVar15 = local_58;
                      if (local_58 == (undefined1 *)0x0) {
                        puVar15 = local_60;
                      }
                      for (iVar11 = *(int *)(puVar15 + (ulonglong)(local_50 - 1U & uVar9) * 4);
                          iVar11 != -1; iVar11 = *(int *)(local_98 + (longlong)iVar11 * 0xc + 4)) {
                        if (*(uint *)(local_98 + (longlong)iVar11 * 0xc) == uVar9)
                        goto LAB_146e0c6c6;
                      }
                    }
                    local_f8 = uVar9;
                    FUN_14079e2ee(&local_98,local_b4,&local_f8,0);
                    lVar13 = 0;
                    do {
                      dVar5 = *(double *)(param_2 + lVar13 * 8);
                      pdVar2 = (double *)(lVar10 + 0x18 + lVar13 * 8);
                      if ((*pdVar2 <= dVar5 && dVar5 != *pdVar2) ||
                         (dVar5 = *(double *)(lVar10 + lVar13 * 8),
                         pdVar2 = (double *)(param_2 + 0x18 + lVar13 * 8),
                         *pdVar2 <= dVar5 && dVar5 != *pdVar2)) goto LAB_146e0c6c6;
                      lVar13 = lVar13 + 1;
                    } while (lVar13 != 3);
                    local_c8 = *(undefined8 *)(lVar10 + 0x60);
                    local_f8 = *(uint *)(lVar10 + 0x30);
                    uStack_f4 = *(uint *)(lVar10 + 0x34);
                    uStack_f0 = *(uint *)(lVar10 + 0x38);
                    uStack_ec = *(uint *)(lVar10 + 0x3c);
                    local_e8 = *(undefined4 *)(lVar10 + 0x40);
                    uStack_e4 = *(undefined4 *)(lVar10 + 0x44);
                    uStack_e0 = *(undefined4 *)(lVar10 + 0x48);
                    uStack_dc = *(undefined4 *)(lVar10 + 0x4c);
                    local_d8 = *(undefined4 *)(lVar10 + 0x50);
                    uStack_d4 = *(undefined4 *)(lVar10 + 0x54);
                    uStack_d0 = *(undefined4 *)(lVar10 + 0x58);
                    uStack_cc = *(undefined4 *)(lVar10 + 0x5c);
                    plVar17 = (longlong *)*local_110;
                    iVar11 = (int)plVar17[1];
                    *(uint *)(plVar17 + 1) = iVar11 + 1U;
                    if (*(uint *)((longlong)plVar17 + 0xc) < iVar11 + 1U) {
                      FUN_140187932(plVar17,iVar11);
                    }
                    lVar13 = *plVar17;
                    lVar14 = (longlong)iVar11 * 0x38;
                    *(undefined8 *)(lVar13 + 0x30 + lVar14) = local_c8;
                    puVar4 = (undefined8 *)(lVar13 + 0x20 + lVar14);
                    *puVar4 = CONCAT44(uStack_d4,local_d8);
                    puVar4[1] = CONCAT44(uStack_cc,uStack_d0);
                    puVar4 = (undefined8 *)(lVar13 + 0x10 + lVar14);
                    *puVar4 = CONCAT44(uStack_e4,local_e8);
                    puVar4[1] = CONCAT44(uStack_dc,uStack_e0);
                    puVar1 = (uint *)(lVar13 + lVar14);
                    *puVar1 = local_f8;
                    puVar1[1] = uStack_f4;
                    puVar1[2] = uStack_f0;
                    puVar1[3] = uStack_ec;
LAB_146e0c6c6:
                    lVar10 = lVar10 + 0x80;
                  } while (lVar10 != lVar18);
                  uVar19 = (uint)local_100;
                  param_1 = local_108;
                  iVar12 = local_a8;
                }
                uVar9 = uVar19 + 1;
                iVar8 = local_ac;
              } while ((int)uVar19 < iVar12);
            }
            iVar7 = (int)local_118;
            local_118 = (ulonglong)(iVar7 + 1);
            iVar11 = local_b0;
          } while (iVar7 < iVar8);
        }
        iVar12 = (int)local_120;
        local_120 = (ulonglong)(iVar12 + 1);
      } while (iVar12 < iVar11);
      local_50 = 0;
      if (local_58 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_140d9cca6(&local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e0c7ac FUN_146e0c7ac body=231 status=ok
// SIG undefined FUN_146e0c7ac(void)

void FUN_146e0c7ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [40];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b01d78(&local_60,param_3,param_4);
  local_b8 = local_30;
  local_c0 = local_58;
  local_d8 = &local_90;
  local_90 = 0x7fefffffffffffff;
  local_88 = 0x7fefffffffffffff;
  local_80 = 0x7fefffffffffffff;
  local_78 = 0xffefffffffffffff;
  local_70 = 0xffefffffffffffff;
  local_68 = 0xffefffffffffffff;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_c8 = local_60;
  local_d0 = param_5;
  FUN_146dfdfd0(param_1,param_2,&local_60);
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e0c894 FUN_146e0c894 body=320 status=ok
// SIG undefined FUN_146e0c894(void)

undefined8 FUN_146e0c894(longlong *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x58) != *(int *)(lVar3 + 0x84)) {
    lVar6 = lVar3 + 0x88;
    if (*(longlong *)(lVar3 + 0x90) != 0) {
      lVar6 = *(longlong *)(lVar3 + 0x90);
    }
    uVar8 = *(uint *)(lVar6 + (ulonglong)(*(int *)(lVar3 + 0x98) - 1U & param_2) * 4);
    if (uVar8 != 0xffffffff) {
      iVar2 = *(int *)param_1[1];
      do {
        puVar1 = (uint *)(*(longlong *)(lVar3 + 0x50) + (longlong)(int)uVar8 * 0x14);
        if (*puVar1 == param_2) {
          if ((puVar1 + 1 != (uint *)0x0 && puVar1 != (uint *)0x0) &&
             (uVar8 = puVar1[2], 0 < (int)uVar8)) {
            uVar10 = puVar1[1];
            uVar7 = (uVar8 + uVar10) - 1;
            uVar9 = (int)(uVar7 + uVar10) / 2;
            iVar4 = *(int *)(*(longlong *)(lVar3 + 0xa0) + (longlong)(int)uVar9 * 4);
            uVar5 = uVar7;
            if (iVar4 != iVar2) goto LAB_146e0c98a;
            goto LAB_146e0c949;
          }
          break;
        }
        uVar8 = puVar1[3];
      } while (uVar8 != 0xffffffff);
    }
  }
  goto LAB_146e0c8a7;
  while( true ) {
    if (iVar4 < iVar2) {
      uVar10 = uVar9 + 1;
      iVar4 = uVar5 + uVar9 + 1;
    }
    else {
      if (uVar9 == uVar10) goto LAB_146e0c8a7;
      uVar5 = uVar9 - 1;
      iVar4 = uVar9 + uVar10 + -1;
    }
    uVar9 = iVar4 / 2;
    iVar4 = *(int *)(*(longlong *)(lVar3 + 0xa0) + (longlong)(int)uVar9 * 4);
    if (iVar4 == iVar2) break;
LAB_146e0c98a:
    if (uVar10 == uVar5) goto LAB_146e0c8a7;
  }
LAB_146e0c949:
  if (uVar9 != 0xffffffff) {
    if ((int)uVar9 < (int)uVar7) {
      lVar6 = (longlong)(int)uVar9;
      do {
        *(undefined4 *)(*(longlong *)(lVar3 + 0xa0) + lVar6 * 4) =
             *(undefined4 *)(*(longlong *)(lVar3 + 0xa0) + 4 + lVar6 * 4);
        lVar6 = lVar6 + 1;
      } while ((int)uVar7 != lVar6);
      uVar8 = puVar1[2];
    }
    puVar1[2] = uVar8 - 1;
  }
LAB_146e0c8a7:
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 146e0c9d4 FUN_146e0c9d4 body=978 status=ok
// SIG undefined FUN_146e0c9d4(void)

undefined8 FUN_146e0c9d4(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int *piVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  ulonglong local_68;
  uint local_5c;
  uint *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *param_1;
  plVar1 = (longlong *)(lVar2 + 0x50);
  iVar10 = *(int *)(lVar2 + 0x58);
  iVar13 = *(int *)(lVar2 + 0x84);
  local_5c = param_2;
  if (iVar10 != iVar13) {
    lVar4 = *(longlong *)(lVar2 + 0x90);
    if (*(longlong *)(lVar2 + 0x90) == 0) {
      lVar4 = lVar2 + 0x88;
    }
    uVar12 = *(uint *)(lVar4 + (ulonglong)(*(int *)(lVar2 + 0x98) - 1U & param_2) * 4);
    if (uVar12 != 0xffffffff) {
      iVar6 = *(int *)param_1[1];
      do {
        puVar9 = (uint *)(*plVar1 + (longlong)(int)uVar12 * 0x14);
        if (*puVar9 == param_2) {
          if (puVar9 + 1 != (uint *)0x0 && puVar9 != (uint *)0x0) {
            uVar12 = puVar9[2];
            uVar7 = (ulonglong)uVar12;
            if (0 < (int)uVar12) {
              uVar3 = puVar9[1];
              uVar5 = (uVar12 + uVar3) - 1;
              local_68 = (ulonglong)uVar5;
              uVar15 = (int)(uVar5 + uVar3) / 2;
              iVar14 = *(int *)(*(longlong *)(lVar2 + 0xa0) + (longlong)(int)uVar15 * 4);
              uVar11 = uVar5;
              local_70 = uVar7;
              if (iVar14 != iVar6) goto LAB_146e0cce8;
              goto LAB_146e0cbcf;
            }
          }
          break;
        }
        uVar12 = puVar9[3];
      } while (uVar12 != 0xffffffff);
    }
    goto LAB_146e0ca61;
  }
  iVar6 = *(int *)param_1[2];
  goto LAB_146e0cc35;
  while( true ) {
    if (iVar13 < iVar6) {
      uVar3 = uVar11 + 1;
      iVar13 = uVar12 + uVar11 + 1;
    }
    else {
      if (uVar11 == uVar3) goto LAB_146e0cd46;
      uVar12 = uVar11 - 1;
      iVar13 = uVar11 + uVar3 + -1;
    }
    uVar11 = iVar13 / 2;
    iVar13 = *(int *)(lVar4 + (longlong)(int)uVar11 * 4);
    if (iVar13 == iVar6) break;
LAB_146e0cb1e:
    if (uVar3 == uVar12) {
      uVar3 = uVar3 + (iVar13 < iVar6);
LAB_146e0cd46:
      if (uVar3 != 0xffffffff) {
        if ((int)uVar3 < iVar10) {
          lVar4 = (longlong)iVar10;
          do {
            *(undefined4 *)(*(longlong *)(lVar2 + 0xa0) + lVar4 * 4) =
                 *(undefined4 *)(*(longlong *)(lVar2 + 0xa0) + -4 + lVar4 * 4);
            lVar4 = lVar4 + -1;
          } while ((int)uVar3 < lVar4);
          lVar4 = *(longlong *)(lVar2 + 0xa0);
        }
        piVar8 = (int *)(lVar4 + (longlong)(int)uVar3 * 4);
LAB_146e0cc20:
        puVar9 = puVar9 + 2;
        *piVar8 = iVar6;
        goto LAB_146e0ccba;
      }
      break;
    }
  }
  goto LAB_146e0ccbc;
  while( true ) {
    if (iVar14 < iVar6) {
      uVar3 = uVar15 + 1;
      iVar14 = uVar15 + uVar11 + 1;
    }
    else {
      if (uVar15 == uVar3) goto LAB_146e0ca61;
      uVar11 = uVar15 - 1;
      iVar14 = uVar15 + uVar3 + -1;
    }
    uVar15 = iVar14 / 2;
    iVar14 = *(int *)(*(longlong *)(lVar2 + 0xa0) + (longlong)(int)uVar15 * 4);
    if (iVar14 == iVar6) break;
LAB_146e0cce8:
    if (uVar3 == uVar11) goto LAB_146e0ca61;
  }
LAB_146e0cbcf:
  if (uVar15 != 0xffffffff) {
    if ((int)uVar15 < (int)uVar5) {
      lVar4 = (longlong)(int)uVar15;
      do {
        *(undefined4 *)(*(longlong *)(lVar2 + 0xa0) + lVar4 * 4) =
             *(undefined4 *)(*(longlong *)(lVar2 + 0xa0) + 4 + lVar4 * 4);
        lVar4 = lVar4 + 1;
      } while ((int)uVar5 != lVar4);
      uVar12 = puVar9[2];
    }
    puVar9[2] = uVar12 - 1;
    iVar10 = *(int *)(lVar2 + 0x58);
    iVar13 = *(int *)(lVar2 + 0x84);
  }
LAB_146e0ca61:
  iVar6 = *(int *)param_1[2];
  if (iVar10 != iVar13) {
    lVar4 = lVar2 + 0x88;
    if (*(longlong *)(lVar2 + 0x90) != 0) {
      lVar4 = *(longlong *)(lVar2 + 0x90);
    }
    uVar12 = *(uint *)(lVar4 + (ulonglong)(*(int *)(lVar2 + 0x98) - 1U & param_2) * 4);
    if (uVar12 != 0xffffffff) {
      do {
        puVar9 = (uint *)(*plVar1 + (longlong)(int)uVar12 * 0x14);
        if (*puVar9 == param_2) {
          if ((puVar9 != (uint *)0x0) && (puVar9 + 1 != (uint *)0x0)) {
            uVar12 = puVar9[2];
            if (*(int *)(lVar2 + 0xe0) <= (int)uVar12) goto LAB_146e0ccbc;
            uVar3 = puVar9[1];
            if ((int)uVar12 < 1) {
              piVar8 = (int *)((longlong)(int)uVar3 * 4 + *(longlong *)(lVar2 + 0xa0));
              goto LAB_146e0cc20;
            }
            iVar10 = uVar3 + uVar12;
            lVar4 = *(longlong *)(lVar2 + 0xa0);
            uVar11 = (int)(uVar3 + iVar10 + -1) / 2;
            iVar13 = *(int *)(lVar4 + (longlong)(int)uVar11 * 4);
            if (iVar13 == iVar6) goto LAB_146e0ccbc;
            uVar12 = (uVar12 + uVar3) - 1;
            goto LAB_146e0cb1e;
          }
          break;
        }
        uVar12 = puVar9[3];
      } while (uVar12 != 0xffffffff);
    }
  }
LAB_146e0cc35:
  local_58 = &local_5c;
  FUN_146dee3ec(plVar1,&local_4c,&local_58,0);
  lVar4 = *(longlong *)(lVar2 + 0x50) + (longlong)local_4c * 0x14;
  piVar8 = (int *)(lVar4 + 4);
  *piVar8 = *(int *)(lVar2 + 0xa8);
  *(undefined4 *)(lVar4 + 8) = 1;
  iVar10 = *(int *)(lVar2 + 0xa8);
  *(uint *)(lVar2 + 0xa8) = iVar10 + *(uint *)(lVar2 + 0xe0);
  if ((uint)(*(int *)(lVar2 + 0xac) - iVar10) < *(uint *)(lVar2 + 0xe0)) {
    FUN_1446f48e2(lVar2 + 0xa0);
  }
  *(int *)(*(longlong *)(lVar2 + 0xa0) + (longlong)*piVar8 * 4) = iVar6;
  puVar9 = (uint *)(lVar2 + 0xe4);
LAB_146e0ccba:
  *puVar9 = *puVar9 + 1;
LAB_146e0ccbc:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)puVar9 >> 8),1);
}



// FUNCTION 146e0cda8 FUN_146e0cda8 body=1277 status=ok
// SIG undefined FUN_146e0cda8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_146e0cda8(longlong param_1,double *param_2,undefined1 *param_3)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  byte bVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  
  *param_3 = 0;
  dVar11 = (double)_DAT_14c75efe0;
  dVar8 = *param_2 - dVar11;
  dVar9 = param_2[1] - dVar11;
  dVar10 = param_2[2] - dVar11;
  dVar12 = param_2[3] + dVar11;
  dVar13 = param_2[4] + dVar11;
  dVar11 = dVar11 + param_2[5];
  plVar1 = (longlong *)(param_1 + 0x1c8);
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  if (*(int *)(param_1 + 0x1d4) < 0) {
    FUN_14098bf12(plVar1,0);
  }
  uVar22 = (ulonglong)*(int *)(param_1 + 0x44);
  lVar24 = *(longlong *)(param_1 + 0x10);
  lVar18 = uVar22 * 0x70;
  dVar32 = *(double *)(lVar24 + 0x10 + lVar18);
  dVar27 = dVar10;
  if (dVar32 <= dVar10) {
    dVar27 = dVar32;
  }
  dVar32 = *(double *)(lVar24 + 8 + lVar18);
  dVar30 = dVar9;
  if (dVar32 <= dVar9) {
    dVar30 = dVar32;
  }
  dVar32 = dVar8;
  if (*(double *)(lVar24 + lVar18) <= dVar8) {
    dVar32 = *(double *)(lVar24 + lVar18);
  }
  lVar25 = lVar24 + lVar18;
  dVar2 = *(double *)(lVar24 + 0x28 + lVar18);
  dVar33 = dVar11;
  if (dVar11 <= dVar2) {
    dVar33 = dVar2;
  }
  dVar2 = *(double *)(lVar24 + 0x20 + lVar18);
  dVar28 = dVar13;
  if (dVar13 <= dVar2) {
    dVar28 = dVar2;
  }
  dVar2 = *(double *)(lVar24 + 0x18 + lVar18);
  dVar26 = dVar12;
  if (dVar12 <= dVar2) {
    dVar26 = dVar2;
  }
  if ((*(byte *)(lVar24 + 0x6c + lVar18) & 1) == 0) {
    if (*(double *)(lVar25 + 0x40) <= dVar27) {
      dVar27 = *(double *)(lVar25 + 0x40);
    }
    if (*(double *)(lVar25 + 0x38) <= dVar30) {
      dVar30 = *(double *)(lVar25 + 0x38);
    }
    if (*(double *)(lVar25 + 0x30) <= dVar32) {
      dVar32 = *(double *)(lVar25 + 0x30);
    }
    if (dVar33 <= *(double *)(lVar25 + 0x58)) {
      dVar33 = *(double *)(lVar25 + 0x58);
    }
    if (dVar28 <= *(double *)(lVar25 + 0x50)) {
      dVar28 = *(double *)(lVar25 + 0x50);
    }
    if (dVar26 <= *(double *)(lVar25 + 0x48)) {
      dVar26 = *(double *)(lVar25 + 0x48);
    }
  }
  iVar5 = *(int *)(param_1 + 0x1d0);
  lVar24 = (longlong)iVar5;
  *(uint *)(param_1 + 0x1d0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x1d4) < iVar5 + 1U) {
    FUN_14098c05e(plVar1,iVar5);
  }
  lVar18 = *(longlong *)(param_1 + 0x1c8);
  *(longlong *)(lVar18 + lVar24 * 0x18) = lVar25;
  *(undefined4 *)(lVar18 + 8 + lVar24 * 0x18) = *(undefined4 *)(param_1 + 0x44);
  *(undefined8 *)(lVar18 + 0x10 + lVar24 * 0x18) = 0;
  uVar23 = *(uint *)(param_1 + 0x1d0);
  if (uVar23 != 0) {
    dVar2 = (dVar13 - dVar9) * (dVar11 - dVar10) +
            (dVar12 - dVar8) * (dVar13 - dVar9) + (dVar12 - dVar8) * (dVar11 - dVar10);
    dVar32 = (dVar28 - dVar30) * (dVar33 - dVar27) +
             (dVar26 - dVar32) * (dVar28 - dVar30) + (dVar33 - dVar27) * (dVar26 - dVar32);
    dVar32 = dVar32 + dVar32;
    lVar24 = 0x10;
    uVar21 = 0;
    do {
      lVar18 = *plVar1;
      pdVar7 = *(double **)(lVar18 + -0x10 + lVar24);
      dVar27 = *pdVar7;
      uVar34 = SUB84(dVar27,0);
      uVar35 = (undefined4)((ulonglong)dVar27 >> 0x20);
      dVar30 = pdVar7[1];
      dVar33 = pdVar7[2];
      dVar28 = pdVar7[3];
      dVar26 = pdVar7[4];
      dVar3 = pdVar7[5];
      uVar36 = SUB84(dVar3,0);
      uVar37 = (undefined4)((ulonglong)dVar3 >> 0x20);
      bVar16 = *(byte *)((longlong)pdVar7 + 0x6c);
      if ((bVar16 & 1) == 0) {
        if (pdVar7[8] <= dVar33) {
          dVar33 = pdVar7[8];
        }
        if (pdVar7[7] <= dVar30) {
          dVar30 = pdVar7[7];
        }
        dVar31 = pdVar7[6];
        if (dVar31 <= dVar27) {
          uVar34 = SUB84(dVar31,0);
          uVar35 = (undefined4)((ulonglong)dVar31 >> 0x20);
        }
        dVar27 = pdVar7[0xb];
        if (dVar3 <= dVar27) {
          uVar36 = SUB84(dVar27,0);
          uVar37 = (undefined4)((ulonglong)dVar27 >> 0x20);
        }
        if (dVar26 <= pdVar7[10]) {
          dVar26 = pdVar7[10];
        }
        if (dVar28 <= pdVar7[9]) {
          dVar28 = pdVar7[9];
        }
        bVar20 = false;
      }
      else {
        bVar20 = 0 < DAT_14c75efe8;
      }
      dVar27 = dVar33;
      if (dVar10 <= dVar33) {
        dVar27 = dVar10;
      }
      dVar3 = dVar30;
      if (dVar9 <= dVar30) {
        dVar3 = dVar9;
      }
      dVar31 = (double)CONCAT44(uVar35,uVar34);
      if (dVar8 <= (double)CONCAT44(uVar35,uVar34)) {
        dVar31 = dVar8;
      }
      dVar29 = (double)CONCAT44(uVar37,uVar36);
      if ((double)CONCAT44(uVar37,uVar36) <= dVar11) {
        dVar29 = dVar11;
      }
      dVar15 = dVar26;
      if (dVar26 <= dVar13) {
        dVar15 = dVar13;
      }
      dVar14 = dVar28;
      if (dVar28 <= dVar12) {
        dVar14 = dVar12;
      }
      dVar4 = *(double *)(lVar18 + lVar24);
      dVar3 = (dVar15 - dVar3) * (dVar29 - dVar27) +
              (dVar14 - dVar31) * (dVar15 - dVar3) + (dVar29 - dVar27) * (dVar14 - dVar31);
      dVar3 = dVar3 + dVar3;
      dVar27 = dVar4 + dVar3;
      if (dVar27 < dVar32) {
        uVar22 = (ulonglong)*(uint *)(lVar18 + -8 + lVar24);
        *param_3 = bVar20;
        bVar16 = *(byte *)((longlong)pdVar7 + 0x6c);
        uVar23 = *(uint *)(param_1 + 0x1d0);
        dVar32 = dVar27;
      }
      if ((bVar16 & 1) == 0) {
        dVar33 = (double)CONCAT44(uVar37,uVar36) - dVar33;
        dVar28 = dVar28 - (double)CONCAT44(uVar35,uVar34);
        dVar27 = (dVar26 - dVar30) * dVar33 + dVar28 * (dVar26 - dVar30) + dVar33 * dVar28;
        dVar4 = dVar4 + (dVar3 - (dVar27 + dVar27));
        if (dVar2 + dVar2 + dVar4 < dVar32) {
          if ((int)uVar23 < -2) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(uVar23 + 2);
          }
          uVar17 = *(uint *)(param_1 + 0x1d4);
          if ((int)uVar17 < (int)(uVar23 + 2)) {
            FUN_14098bf12(plVar1);
            uVar23 = *(uint *)(param_1 + 0x1d0);
            uVar17 = *(uint *)(param_1 + 0x1d4);
          }
          iVar5 = *(int *)(pdVar7 + 0xc);
          lVar18 = *(longlong *)(param_1 + 0x10);
          *(uint *)(param_1 + 0x1d0) = uVar23 + 1;
          if (uVar17 < uVar23 + 1) {
            FUN_14098c05e(plVar1,uVar23);
          }
          lVar25 = *(longlong *)(param_1 + 0x1c8);
          lVar19 = (longlong)(int)uVar23;
          *(longlong *)(lVar25 + lVar19 * 0x18) = (longlong)iVar5 * 0x70 + lVar18;
          *(undefined4 *)(lVar25 + 8 + lVar19 * 0x18) = *(undefined4 *)(pdVar7 + 0xc);
          *(double *)(lVar25 + 0x10 + lVar19 * 0x18) = dVar4;
          iVar5 = *(int *)((longlong)pdVar7 + 100);
          lVar18 = *(longlong *)(param_1 + 0x10);
          iVar6 = *(int *)(param_1 + 0x1d0);
          lVar25 = (longlong)iVar6;
          *(uint *)(param_1 + 0x1d0) = iVar6 + 1U;
          if (*(uint *)(param_1 + 0x1d4) < iVar6 + 1U) {
            FUN_14098c05e(plVar1,iVar6);
          }
          lVar19 = *(longlong *)(param_1 + 0x1c8);
          *(longlong *)(lVar19 + lVar25 * 0x18) = (longlong)iVar5 * 0x70 + lVar18;
          *(undefined4 *)(lVar19 + 8 + lVar25 * 0x18) = *(undefined4 *)((longlong)pdVar7 + 100);
          *(double *)(lVar19 + 0x10 + lVar25 * 0x18) = dVar4;
          uVar23 = *(uint *)(param_1 + 0x1d0);
        }
      }
      uVar21 = uVar21 + 1;
      lVar24 = lVar24 + 0x18;
    } while (uVar21 != uVar23);
  }
  return uVar22 & 0xffffffff;
}



// FUNCTION 146e0d2a6 FUN_146e0d2a6 body=132 status=ok
// SIG undefined FUN_146e0d2a6(void)

undefined8 FUN_146e0d2a6(longlong *param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x58) != *(int *)(lVar2 + 0x84)) {
    lVar3 = lVar2 + 0x88;
    if (*(longlong *)(lVar2 + 0x90) != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x90);
    }
    uVar4 = *(uint *)(lVar3 + (ulonglong)(*(int *)(lVar2 + 0x98) - 1U & param_2) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(lVar2 + 0x50) + (longlong)(int)uVar4 * 0x14);
        if (*puVar1 == param_2) {
          if (((ulonglong)(puVar1 + 1) & 0xfffffffffffffffb) == 0) {
            return 1;
          }
          if ((int)puVar1[2] < *(int *)(lVar2 + 0xe0)) {
            return 1;
          }
          *(undefined1 *)param_1[1] = 0;
          return 0;
        }
        uVar4 = puVar1[3];
      } while (uVar4 != 0xffffffff);
    }
  }
  return 1;
}



// FUNCTION 146e0d32a FUN_146e0d32a body=560 status=ok
// SIG undefined FUN_146e0d32a(void)

undefined8 FUN_146e0d32a(longlong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_58 [36];
  uint local_34;
  uint *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *param_1;
  iVar1 = *(int *)param_1[1];
  local_34 = param_2;
  if (*(int *)(lVar3 + 0x58) != *(int *)(lVar3 + 0x84)) {
    lVar5 = lVar3 + 0x88;
    if (*(longlong *)(lVar3 + 0x90) != 0) {
      lVar5 = *(longlong *)(lVar3 + 0x90);
    }
    uVar9 = *(uint *)(lVar5 + (ulonglong)(*(int *)(lVar3 + 0x98) - 1U & param_2) * 4);
    if (uVar9 != 0xffffffff) {
      do {
        puVar6 = (uint *)(*(longlong *)(lVar3 + 0x50) + (longlong)(int)uVar9 * 0x14);
        if (*puVar6 == param_2) {
          if ((puVar6 != (uint *)0x0) && (puVar6 + 1 != (uint *)0x0)) {
            uVar9 = puVar6[2];
            if (*(int *)(lVar3 + 0xe0) <= (int)uVar9) goto LAB_146e0d42b;
            uVar4 = puVar6[1];
            if ((int)uVar9 < 1) {
              piVar7 = (int *)((longlong)(int)uVar4 * 4 + *(longlong *)(lVar3 + 0xa0));
              goto LAB_146e0d501;
            }
            iVar2 = uVar4 + uVar9;
            lVar5 = *(longlong *)(lVar3 + 0xa0);
            uVar8 = (int)(uVar4 + iVar2 + -1) / 2;
            iVar10 = *(int *)(lVar5 + (longlong)(int)uVar8 * 4);
            if (iVar10 == iVar1) goto LAB_146e0d42b;
            uVar9 = (uVar9 + uVar4) - 1;
            goto LAB_146e0d4a5;
          }
          break;
        }
        uVar9 = puVar6[3];
      } while (uVar9 != 0xffffffff);
    }
  }
  local_30 = &local_34;
  FUN_146dee3ec((longlong *)(lVar3 + 0x50),&local_24,&local_30,0);
  lVar5 = *(longlong *)(lVar3 + 0x50) + (longlong)local_24 * 0x14;
  piVar7 = (int *)(lVar5 + 4);
  *piVar7 = *(int *)(lVar3 + 0xa8);
  *(undefined4 *)(lVar5 + 8) = 1;
  iVar2 = *(int *)(lVar3 + 0xa8);
  *(uint *)(lVar3 + 0xa8) = iVar2 + *(uint *)(lVar3 + 0xe0);
  if ((uint)(*(int *)(lVar3 + 0xac) - iVar2) < *(uint *)(lVar3 + 0xe0)) {
    FUN_1446f48e2(lVar3 + 0xa0);
  }
  *(int *)(*(longlong *)(lVar3 + 0xa0) + (longlong)*piVar7 * 4) = iVar1;
  puVar6 = (uint *)(lVar3 + 0xe4);
LAB_146e0d429:
  *puVar6 = *puVar6 + 1;
  goto LAB_146e0d42b;
  while( true ) {
    if (iVar10 < iVar1) {
      uVar4 = uVar8 + 1;
      iVar10 = uVar9 + uVar8 + 1;
    }
    else {
      if (uVar8 == uVar4) goto LAB_146e0d519;
      uVar9 = uVar8 - 1;
      iVar10 = uVar8 + uVar4 + -1;
    }
    uVar8 = iVar10 / 2;
    iVar10 = *(int *)(lVar5 + (longlong)(int)uVar8 * 4);
    if (iVar10 == iVar1) break;
LAB_146e0d4a5:
    if (uVar4 == uVar9) {
      uVar4 = uVar4 + (iVar10 < iVar1);
LAB_146e0d519:
      if (uVar4 != 0xffffffff) {
        if ((int)uVar4 < iVar2) {
          lVar5 = (longlong)iVar2;
          do {
            *(undefined4 *)(*(longlong *)(lVar3 + 0xa0) + lVar5 * 4) =
                 *(undefined4 *)(*(longlong *)(lVar3 + 0xa0) + -4 + lVar5 * 4);
            lVar5 = lVar5 + -1;
          } while ((int)uVar4 < lVar5);
          lVar5 = *(longlong *)(lVar3 + 0xa0);
        }
        piVar7 = (int *)(lVar5 + (longlong)(int)uVar4 * 4);
LAB_146e0d501:
        puVar6 = puVar6 + 2;
        *piVar7 = iVar1;
        goto LAB_146e0d429;
      }
      break;
    }
  }
LAB_146e0d42b:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)puVar6 >> 8),1);
}



// FUNCTION 146e0d55c FUN_146e0d55c body=320 status=ok
// SIG undefined FUN_146e0d55c(void)

undefined8 FUN_146e0d55c(longlong *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x58) != *(int *)(lVar3 + 0x84)) {
    lVar6 = lVar3 + 0x88;
    if (*(longlong *)(lVar3 + 0x90) != 0) {
      lVar6 = *(longlong *)(lVar3 + 0x90);
    }
    uVar8 = *(uint *)(lVar6 + (ulonglong)(*(int *)(lVar3 + 0x98) - 1U & param_2) * 4);
    if (uVar8 != 0xffffffff) {
      iVar2 = *(int *)param_1[1];
      do {
        puVar1 = (uint *)(*(longlong *)(lVar3 + 0x50) + (longlong)(int)uVar8 * 0x14);
        if (*puVar1 == param_2) {
          if ((puVar1 + 1 != (uint *)0x0 && puVar1 != (uint *)0x0) &&
             (uVar8 = puVar1[2], 0 < (int)uVar8)) {
            uVar10 = puVar1[1];
            uVar7 = (uVar8 + uVar10) - 1;
            uVar9 = (int)(uVar7 + uVar10) / 2;
            iVar4 = *(int *)(*(longlong *)(lVar3 + 0xa0) + (longlong)(int)uVar9 * 4);
            uVar5 = uVar7;
            if (iVar4 != iVar2) goto LAB_146e0d652;
            goto LAB_146e0d611;
          }
          break;
        }
        uVar8 = puVar1[3];
      } while (uVar8 != 0xffffffff);
    }
  }
  goto LAB_146e0d56f;
  while( true ) {
    if (iVar4 < iVar2) {
      uVar10 = uVar9 + 1;
      iVar4 = uVar5 + uVar9 + 1;
    }
    else {
      if (uVar9 == uVar10) goto LAB_146e0d56f;
      uVar5 = uVar9 - 1;
      iVar4 = uVar9 + uVar10 + -1;
    }
    uVar9 = iVar4 / 2;
    iVar4 = *(int *)(*(longlong *)(lVar3 + 0xa0) + (longlong)(int)uVar9 * 4);
    if (iVar4 == iVar2) break;
LAB_146e0d652:
    if (uVar10 == uVar5) goto LAB_146e0d56f;
  }
LAB_146e0d611:
  if (uVar9 != 0xffffffff) {
    if ((int)uVar9 < (int)uVar7) {
      lVar6 = (longlong)(int)uVar9;
      do {
        *(undefined4 *)(*(longlong *)(lVar3 + 0xa0) + lVar6 * 4) =
             *(undefined4 *)(*(longlong *)(lVar3 + 0xa0) + 4 + lVar6 * 4);
        lVar6 = lVar6 + 1;
      } while ((int)uVar7 != lVar6);
      uVar8 = puVar1[2];
    }
    puVar1[2] = uVar8 - 1;
  }
LAB_146e0d56f:
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 146e0d69c FUN_146e0d69c body=574 status=ok
// SIG undefined FUN_146e0d69c(void)

undefined8 FUN_146e0d69c(longlong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_58 [36];
  uint local_34;
  uint *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *param_1;
  iVar1 = *(int *)param_1[1];
  local_34 = param_2;
  if (*(int *)(lVar3 + 0x58) != *(int *)(lVar3 + 0x84)) {
    lVar7 = lVar3 + 0x88;
    if (*(longlong *)(lVar3 + 0x90) != 0) {
      lVar7 = *(longlong *)(lVar3 + 0x90);
    }
    uVar12 = *(uint *)(lVar7 + (ulonglong)(*(int *)(lVar3 + 0x98) - 1U & param_2) * 4);
    if (uVar12 != 0xffffffff) {
      do {
        puVar8 = (uint *)(*(longlong *)(lVar3 + 0x50) + (longlong)(int)uVar12 * 0x14);
        if (*puVar8 == param_2) {
          if ((puVar8 != (uint *)0x0) && (puVar8 + 1 != (uint *)0x0)) {
            uVar12 = puVar8[2];
            if (*(int *)(lVar3 + 0xe0) <= (int)uVar12) {
              uVar5 = 0;
              goto LAB_146e0d7a5;
            }
            uVar6 = puVar8[1];
            if ((int)uVar12 < 1) {
              piVar10 = (int *)((longlong)(int)uVar6 * 4 + *(longlong *)(lVar3 + 0xa0));
              goto LAB_146e0d882;
            }
            iVar2 = uVar6 + uVar12;
            lVar7 = *(longlong *)(lVar3 + 0xa0);
            iVar4 = uVar6 + iVar2 + -1;
            uVar11 = iVar4 / 2;
            iVar9 = *(int *)(lVar7 + (longlong)(int)uVar11 * 4);
            uVar5 = CONCAT71((int7)(int3)(iVar4 - (iVar4 >> 0x1f) >> 9),1);
            if (iVar9 == iVar1) goto LAB_146e0d7a5;
            uVar12 = (uVar12 + uVar6) - 1;
            goto LAB_146e0d824;
          }
          break;
        }
        uVar12 = puVar8[3];
      } while (uVar12 != 0xffffffff);
    }
  }
  local_30 = &local_34;
  FUN_146dee3ec((longlong *)(lVar3 + 0x50),&local_24,&local_30,0);
  lVar7 = *(longlong *)(lVar3 + 0x50) + (longlong)local_24 * 0x14;
  piVar10 = (int *)(lVar7 + 4);
  *piVar10 = *(int *)(lVar3 + 0xa8);
  *(undefined4 *)(lVar7 + 8) = 1;
  iVar2 = *(int *)(lVar3 + 0xa8);
  *(uint *)(lVar3 + 0xa8) = iVar2 + *(uint *)(lVar3 + 0xe0);
  if ((uint)(*(int *)(lVar3 + 0xac) - iVar2) < *(uint *)(lVar3 + 0xe0)) {
    FUN_1446f48e2(lVar3 + 0xa0);
  }
  piVar10 = (int *)(longlong)*piVar10;
  *(int *)(*(longlong *)(lVar3 + 0xa0) + (longlong)piVar10 * 4) = iVar1;
  puVar8 = (uint *)(lVar3 + 0xe4);
LAB_146e0d7a0:
  *puVar8 = *puVar8 + 1;
  uVar5 = CONCAT71((int7)((ulonglong)piVar10 >> 8),1);
  goto LAB_146e0d7a5;
  while( true ) {
    if (iVar9 < iVar1) {
      uVar6 = uVar11 + 1;
      iVar9 = uVar12 + uVar11 + 1;
    }
    else {
      if (uVar11 == uVar6) goto LAB_146e0d899;
      uVar12 = uVar11 - 1;
      iVar9 = uVar11 + uVar6 + -1;
    }
    uVar11 = iVar9 / 2;
    iVar9 = *(int *)(lVar7 + (longlong)(int)uVar11 * 4);
    if (iVar9 == iVar1) break;
LAB_146e0d824:
    if (uVar6 == uVar12) {
      uVar6 = uVar6 + (iVar9 < iVar1);
LAB_146e0d899:
      if (uVar6 != 0xffffffff) {
        if ((int)uVar6 < iVar2) {
          lVar7 = (longlong)iVar2;
          do {
            *(undefined4 *)(*(longlong *)(lVar3 + 0xa0) + lVar7 * 4) =
                 *(undefined4 *)(*(longlong *)(lVar3 + 0xa0) + -4 + lVar7 * 4);
            lVar7 = lVar7 + -1;
          } while ((int)uVar6 < lVar7);
          lVar7 = *(longlong *)(lVar3 + 0xa0);
        }
        piVar10 = (int *)(lVar7 + (longlong)(int)uVar6 * 4);
LAB_146e0d882:
        puVar8 = puVar8 + 2;
        *piVar10 = iVar1;
        goto LAB_146e0d7a0;
      }
      break;
    }
  }
LAB_146e0d7a5:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 146e0d8dc FUN_146e0d8dc body=320 status=ok
// SIG undefined FUN_146e0d8dc(void)

undefined8 FUN_146e0d8dc(longlong *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x58) != *(int *)(lVar3 + 0x84)) {
    lVar6 = lVar3 + 0x88;
    if (*(longlong *)(lVar3 + 0x90) != 0) {
      lVar6 = *(longlong *)(lVar3 + 0x90);
    }
    uVar8 = *(uint *)(lVar6 + (ulonglong)(*(int *)(lVar3 + 0x98) - 1U & param_2) * 4);
    if (uVar8 != 0xffffffff) {
      iVar2 = *(int *)param_1[1];
      do {
        puVar1 = (uint *)(*(longlong *)(lVar3 + 0x50) + (longlong)(int)uVar8 * 0x14);
        if (*puVar1 == param_2) {
          if ((puVar1 + 1 != (uint *)0x0 && puVar1 != (uint *)0x0) &&
             (uVar8 = puVar1[2], 0 < (int)uVar8)) {
            uVar10 = puVar1[1];
            uVar7 = (uVar8 + uVar10) - 1;
            uVar9 = (int)(uVar7 + uVar10) / 2;
            iVar4 = *(int *)(*(longlong *)(lVar3 + 0xa0) + (longlong)(int)uVar9 * 4);
            uVar5 = uVar7;
            if (iVar4 != iVar2) goto LAB_146e0d9d2;
            goto LAB_146e0d991;
          }
          break;
        }
        uVar8 = puVar1[3];
      } while (uVar8 != 0xffffffff);
    }
  }
  goto LAB_146e0d8ef;
  while( true ) {
    if (iVar4 < iVar2) {
      uVar10 = uVar9 + 1;
      iVar4 = uVar5 + uVar9 + 1;
    }
    else {
      if (uVar9 == uVar10) goto LAB_146e0d8ef;
      uVar5 = uVar9 - 1;
      iVar4 = uVar9 + uVar10 + -1;
    }
    uVar9 = iVar4 / 2;
    iVar4 = *(int *)(*(longlong *)(lVar3 + 0xa0) + (longlong)(int)uVar9 * 4);
    if (iVar4 == iVar2) break;
LAB_146e0d9d2:
    if (uVar10 == uVar5) goto LAB_146e0d8ef;
  }
LAB_146e0d991:
  if (uVar9 != 0xffffffff) {
    if ((int)uVar9 < (int)uVar7) {
      lVar6 = (longlong)(int)uVar9;
      do {
        *(undefined4 *)(*(longlong *)(lVar3 + 0xa0) + lVar6 * 4) =
             *(undefined4 *)(*(longlong *)(lVar3 + 0xa0) + 4 + lVar6 * 4);
        lVar6 = lVar6 + 1;
      } while ((int)uVar7 != lVar6);
      uVar8 = puVar1[2];
    }
    puVar1[2] = uVar8 - 1;
  }
LAB_146e0d8ef:
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 146e0da1c FUN_146e0da1c body=417 status=ok
// SIG undefined FUN_146e0da1c(void)

undefined8 *
FUN_146e0da1c(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6,undefined1 param_7,char param_8,
             undefined1 param_9)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x201;
  *param_1 = &PTR_FUN_149f5b100;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = param_7;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xffffffff;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0x25) = param_3;
  *(undefined4 *)((longlong)param_1 + 300) = param_4;
  param_1[0x26] = param_5;
  *(undefined4 *)(param_1 + 0x27) = param_6;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined2 *)(param_1 + 0x30) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x182) = param_9;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  if (param_8 != '\0') {
    lVar2 = FUN_14001cc68(0x1d8,0x10);
    FUN_146e0902e(lVar2);
    lVar1 = param_1[0x18];
    param_1[0x18] = lVar2;
    if (lVar1 != 0) {
      FUN_146e09caa(lVar1);
      FUN_1400020a8(lVar1);
      lVar2 = param_1[0x18];
    }
    *(undefined1 *)(lVar2 + 0x40) = 1;
  }
  FUN_1429d29f6(param_1,param_2);
  return param_1;
}



// FUNCTION 146e0dbbe FUN_146e0dbbe body=716 status=ok
// SIG undefined FUN_146e0dbbe(void)

longlong FUN_146e0dbbe(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_1;
  while( true ) {
    *(undefined1 *)(lVar4 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    *(undefined4 *)(lVar4 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined1 *)(lVar4 + 0xc) = *(undefined1 *)(param_2 + 0xc);
    *(undefined4 *)(lVar4 + 0x158) = 0;
    if (*(int *)(lVar4 + 0x15c) != 0) {
      FUN_14481578e(lVar4 + 0x150,0);
    }
    FUN_146e04636(*(undefined8 *)(lVar4 + 0x170),*(undefined4 *)(lVar4 + 0x178));
    *(undefined4 *)(lVar4 + 0x178) = 0;
    if (*(int *)(lVar4 + 0x17c) != 0) {
      FUN_146e04668(lVar4 + 0x170,0);
    }
    *(undefined4 *)(lVar4 + 0x168) = 0;
    if (*(int *)(lVar4 + 0x16c) != 0) {
      FUN_14481578e(lVar4 + 0x160,0);
    }
    if (lVar4 == param_2) break;
    FUN_140484938(lVar4 + 0x10,param_2 + 0x10);
    FUN_146e0de8a(lVar4 + 0x20,param_2 + 0x20);
    FUN_1446fc45c(lVar4 + 0x30,param_2 + 0x30);
    *(undefined1 *)(lVar4 + 0x40) = *(undefined1 *)(param_2 + 0x40);
    *(undefined4 *)(lVar4 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(lVar4 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(lVar4 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    FUN_140484a40(lVar4 + 0x50,param_2 + 0x50);
    FUN_14054c6c4(lVar4 + 0xa0,param_2 + 0xa0);
    FUN_14054c6c4(lVar4 + 0xb0,param_2 + 0xb0);
    uVar2 = *(undefined8 *)(param_2 + 0xec);
    *(undefined8 *)(lVar4 + 0xe4) = *(undefined8 *)(param_2 + 0xe4);
    *(undefined8 *)(lVar4 + 0xec) = uVar2;
    *(undefined4 *)(lVar4 + 0x104) = *(undefined4 *)(param_2 + 0x104);
    uVar2 = *(undefined8 *)(param_2 + 0xfc);
    *(undefined8 *)(lVar4 + 0xf4) = *(undefined8 *)(param_2 + 0xf4);
    *(undefined8 *)(lVar4 + 0xfc) = uVar2;
    *(undefined8 *)(lVar4 + 200) = *(undefined8 *)(param_2 + 200);
    *(undefined8 *)(lVar4 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
    *(undefined4 *)(lVar4 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
    *(undefined4 *)(lVar4 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
    *(undefined4 *)(lVar4 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
    FUN_1446fc45c(lVar4 + 0x108,param_2 + 0x108);
    FUN_140484988(lVar4 + 0x118);
    *(undefined4 *)(lVar4 + 0x128) = *(undefined4 *)(param_2 + 0x128);
    *(undefined4 *)(lVar4 + 300) = *(undefined4 *)(param_2 + 300);
    *(undefined8 *)(lVar4 + 0x130) = *(undefined8 *)(param_2 + 0x130);
    *(undefined4 *)(lVar4 + 0x138) = *(undefined4 *)(param_2 + 0x138);
    *(undefined4 *)(lVar4 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
    *(undefined8 *)(lVar4 + 0x140) = *(undefined8 *)(param_2 + 0x140);
    *(undefined1 *)(lVar4 + 0x180) = *(undefined1 *)(param_2 + 0x180);
    *(undefined1 *)(lVar4 + 0x181) = *(undefined1 *)(param_2 + 0x181);
    *(undefined1 *)(lVar4 + 0x182) = *(undefined1 *)(param_2 + 0x182);
    lVar3 = *(longlong *)(lVar4 + 0xc0);
    if (*(longlong *)(param_2 + 0xc0) == 0) {
      *(undefined8 *)(lVar4 + 0xc0) = 0;
      if (lVar3 != 0) {
        FUN_146e09caa(lVar3);
        FUN_1400020a8(lVar3);
      }
      return param_1;
    }
    if (lVar3 == 0) {
      lVar3 = FUN_14001cc68(0x1d8);
      FUN_146e0902e(lVar3);
      lVar1 = *(longlong *)(lVar4 + 0xc0);
      *(longlong *)(lVar4 + 0xc0) = lVar3;
      if (lVar1 != 0) {
        FUN_146e09caa(lVar1);
        FUN_1400020a8(lVar1);
        lVar3 = *(longlong *)(lVar4 + 0xc0);
      }
    }
    param_2 = *(longlong *)(param_2 + 0xc0);
    lVar4 = lVar3;
  }
  return param_1;
}



// FUNCTION 146e0de8a FUN_146e0de8a body=95 status=ok
// SIG undefined FUN_146e0de8a(void)

undefined8 * FUN_146e0de8a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_146e04599(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_146e0deea(param_1,iVar1);
      FUN_146e0df60(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 146e0deea FUN_146e0deea body=118 status=ok
// SIG undefined FUN_146e0deea(void)

void FUN_146e0deea(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 200,8);
    iVar2 = (int)(uVar1 / 200);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,200,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146e0df60 FUN_146e0df60 body=60 status=ok
// SIG undefined FUN_146e0df60(void)

void FUN_146e0df60(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_146c9c5fa(param_1,param_2);
    param_1 = param_1 + 200;
    param_2 = param_2 + 200;
  }
  return;
}



// FUNCTION 146e0df9c FUN_146e0df9c body=1396 status=ok
// SIG undefined FUN_146e0df9c(void)

undefined8 * FUN_146e0df9c(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x201;
  *param_1 = &PTR_FUN_149f5b100;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 0x18);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_140484ca8(param_1 + 2,iVar1,0);
    FUN_1449bab58(param_1[2],uVar7,iVar1);
  }
  FUN_146e0e510(param_1 + 4,param_2 + 0x20);
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 0x38);
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  *(int *)(param_1 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446fc50a(param_1 + 6,iVar1,0);
    FUN_1446fc4ab(param_1[6],uVar7,iVar1);
  }
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0x40);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  FUN_140484a40(param_1 + 10,param_2 + 0x50);
  param_1[0x14] = 0;
  iVar1 = *(int *)(param_2 + 0xa8);
  pvVar2 = *(void **)(param_2 + 0xa0);
  *(int *)(param_1 + 0x15) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x14,iVar1,0);
    memcpy((void *)param_1[0x14],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x16] = 0;
  iVar1 = *(int *)(param_2 + 0xb8);
  pvVar2 = *(void **)(param_2 + 0xb0);
  *(int *)(param_1 + 0x17) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x16,iVar1,0);
    memcpy((void *)param_1[0x16],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x18] = 0;
  param_1[0x19] = *(undefined8 *)(param_2 + 200);
  param_1[0x1a] = *(undefined8 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0xe0);
  uVar7 = *(undefined8 *)(param_2 + 0xec);
  *(undefined8 *)((longlong)param_1 + 0xe4) = *(undefined8 *)(param_2 + 0xe4);
  *(undefined8 *)((longlong)param_1 + 0xec) = uVar7;
  uVar4 = *(undefined4 *)(param_2 + 0xf8);
  uVar5 = *(undefined4 *)(param_2 + 0xfc);
  uVar6 = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)((longlong)param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0x1f) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xfc) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
  param_1[0x21] = 0;
  iVar1 = *(int *)(param_2 + 0x110);
  uVar7 = *(undefined8 *)(param_2 + 0x108);
  *(int *)(param_1 + 0x22) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  }
  else {
    FUN_1446fc50a(param_1 + 0x21,iVar1,0);
    FUN_1446fc4ab(param_1[0x21],uVar7,iVar1);
  }
  param_1[0x23] = 0;
  iVar1 = *(int *)(param_2 + 0x120);
  pvVar2 = *(void **)(param_2 + 0x118);
  *(int *)(param_1 + 0x24) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  }
  else {
    FUN_140484ede(param_1 + 0x23,iVar1,0);
    memcpy((void *)param_1[0x23],pvVar2,(longlong)iVar1 * 0x18);
  }
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)((longlong)param_1 + 300) = *(undefined4 *)(param_2 + 300);
  param_1[0x26] = *(undefined8 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(param_2 + 0x138);
  *(undefined4 *)((longlong)param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
  param_1[0x28] = *(undefined8 *)(param_2 + 0x140);
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x180);
  *(undefined1 *)((longlong)param_1 + 0x181) = *(undefined1 *)(param_2 + 0x181);
  *(undefined1 *)((longlong)param_1 + 0x182) = *(undefined1 *)(param_2 + 0x182);
  param_1[0x31] = 0;
  iVar1 = *(int *)(param_2 + 400);
  pvVar2 = *(void **)(param_2 + 0x188);
  *(int *)(param_1 + 0x32) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x31,iVar1,0);
    memcpy((void *)param_1[0x31],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x33] = 0;
  iVar1 = *(int *)(param_2 + 0x1a0);
  pvVar2 = *(void **)(param_2 + 0x198);
  *(int *)(param_1 + 0x34) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x33,iVar1,0);
    memcpy((void *)param_1[0x33],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x35] = 0;
  iVar1 = *(int *)(param_2 + 0x1b0);
  pvVar2 = *(void **)(param_2 + 0x1a8);
  *(int *)(param_1 + 0x36) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  }
  else {
    FUN_146deeb7a(param_1 + 0x35,iVar1,0);
    memcpy((void *)param_1[0x35],pvVar2,(longlong)iVar1 << 3);
  }
  param_1[0x37] = 0;
  iVar1 = *(int *)(param_2 + 0x1c0);
  pvVar2 = *(void **)(param_2 + 0x1b8);
  *(int *)(param_1 + 0x38) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x37,iVar1,0);
    memcpy((void *)param_1[0x37],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  FUN_14098bf12(param_1 + 0x39,0x20);
  lVar3 = *(longlong *)(param_2 + 0xc0);
  if (lVar3 != 0) {
    uVar7 = FUN_14001cc68(0x1d8,0x10);
    FUN_146e0df9c(uVar7,lVar3);
    lVar3 = param_1[0x18];
    param_1[0x18] = uVar7;
    if (lVar3 != 0) {
      FUN_146e09caa(lVar3);
      FUN_1400020a8(lVar3);
    }
  }
  return param_1;
}



// FUNCTION 146e0e510 FUN_146e0e510 body=77 status=ok
// SIG undefined FUN_146e0e510(void)

undefined8 * FUN_146e0e510(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_146e0deea(param_1,iVar1,0);
    FUN_146e0df60(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 146e0e55d FUN_146e0e55d body=261 status=ok
// SIG undefined FUN_146e0e55d(void)

longlong * FUN_146e0e55d(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] * 200,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 200);
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
      FUN_146e045c2(param_2);
    }
    FUN_146e0e664(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146c9d41a(*param_2 + lVar3,param_1);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 200;
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



// FUNCTION 146e0e664 FUN_146e0e664 body=230 status=ok
// SIG undefined FUN_146e0e664(void)

void FUN_146e0e664(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_146e0b0be(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 200 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined2 *)((longlong)puVar2 + 0xc) = 1;
      *puVar2 = &PTR_FUN_149f48460;
      puVar2[0xf] = 0;
      *(undefined4 *)(puVar2 + 0x10) = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[0x11] = 0;
      puVar2[0x12] = 0;
      puVar2[0x13] = 0;
      puVar2[0x14] = 0;
      puVar2[0x15] = 0;
      puVar2[0x16] = 0;
      puVar2[0x17] = 0x40f86a0000000000;
      puVar2 = puVar2 + 0x19;
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (FUN_146e0e74c(param_1,param_2,iVar1 - param_2), param_3 == '\x01')) {
      FUN_146e0e7b2(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146e0e74c FUN_146e0e74c body=101 status=ok
// SIG undefined FUN_146e0e74c(void)

void FUN_146e0e74c(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 200 + *param_1);
  FUN_146e04599(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 200 + (longlong)_Dst),(longlong)iVar2 * 200);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146e0e7b2 FUN_146e0e7b2 body=63 status=ok
// SIG undefined FUN_146e0e7b2(void)

void FUN_146e0e7b2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146e0e7f2(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,200,8);
  }
  return;
}



// FUNCTION 146e0e7f2 FUN_146e0e7f2 body=119 status=ok
// SIG undefined FUN_146e0e7f2(void)

ulonglong FUN_146e0e7f2(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 200) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 200,8);
      uVar1 = uVar1 / 200;
    }
  }
  return uVar1;
}



// FUNCTION 146e0e86a FUN_146e0e86a body=114 status=ok
// SIG undefined FUN_146e0e86a(void)

void FUN_146e0e86a(longlong *param_1,int param_2)

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



// FUNCTION 146e0e91e FUN_146e0e91e body=79 status=ok
// SIG undefined FUN_146e0e91e(void)

void FUN_146e0e91e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = iVar1 - (param_3 + param_2);
    if (iVar2 != 0) {
      _Dst = (void *)((longlong)param_2 * 0x38 + *(longlong *)(param_1 + 8));
      memmove(_Dst,(void *)((longlong)param_3 * 0x38 + (longlong)_Dst),(longlong)iVar2 * 0x38);
      iVar1 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar1 - param_3;
  }
  return;
}



// FUNCTION 146e0e96e FUN_146e0e96e body=83 status=ok
// SIG undefined FUN_146e0e96e(void)

void FUN_146e0e96e(longlong param_1,uint param_2)

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
    memmove((void *)((longlong)(int)param_2 * 0x38 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar1 - iVar3) * 0x38 + *(longlong *)(param_1 + 8)),
            (longlong)iVar3 * 0x38);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  return;
}



// FUNCTION 146e0e9c8 FUN_146e0e9c8 body=187 status=ok
// SIG undefined FUN_146e0e9c8(void)

void FUN_146e0e9c8(longlong param_1,uint param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  undefined8 *puVar12;
  
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 0x38);
  iVar8 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar8 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar8 + 1U) {
    FUN_140187932((longlong *)(param_3 + 8),iVar8);
  }
  lVar2 = *(longlong *)(param_3 + 8);
  lVar10 = (longlong)iVar8 * 0x38;
  *(undefined8 *)(lVar2 + 0x30 + lVar10) = puVar12[6];
  uVar3 = *puVar12;
  uVar4 = puVar12[1];
  uVar5 = puVar12[2];
  uVar6 = puVar12[3];
  uVar7 = puVar12[5];
  puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar10);
  *puVar1 = puVar12[4];
  puVar1[1] = uVar7;
  puVar12 = (undefined8 *)(lVar2 + 0x10 + lVar10);
  *puVar12 = uVar5;
  puVar12[1] = uVar6;
  *(undefined8 *)(lVar2 + lVar10) = uVar3;
  ((undefined8 *)(lVar2 + lVar10))[1] = uVar4;
  iVar8 = *(int *)(param_1 + 0x10);
  iVar11 = ~param_2 + iVar8;
  if (iVar11 != 0) {
    iVar9 = 1;
    if (iVar11 < 1) {
      iVar9 = iVar11;
    }
    memmove((void *)((longlong)(int)param_2 * 0x38 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar8 - iVar9) * 0x38 + *(longlong *)(param_1 + 8)),
            (longlong)iVar9 * 0x38);
    iVar8 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar8 + -1;
  return;
}



// FUNCTION 146e0ea84 FUN_146e0ea84 body=47 status=ok
// SIG undefined FUN_146e0ea84(void)

longlong FUN_146e0ea84(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e0eab4 FUN_146e0eab4 body=48 status=ok
// SIG undefined FUN_146e0eab4(void)

void FUN_146e0eab4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 146e0eae4 FUN_146e0eae4 body=96 status=ok
// SIG undefined FUN_146e0eae4(void)

void FUN_146e0eae4(longlong param_1,int param_2)

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



// FUNCTION 146e0eb44 FUN_146e0eb44 body=63 status=ok
// SIG undefined FUN_146e0eb44(void)

void FUN_146e0eb44(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146e0eb84(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146e0eb84 FUN_146e0eb84 body=97 status=ok
// SIG undefined FUN_146e0eb84(void)

ulonglong FUN_146e0eb84(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 146e0ebe6 FUN_146e0ebe6 body=169 status=ok
// SIG undefined FUN_146e0ebe6(void)

void FUN_146e0ebe6(longlong param_1,longlong *param_2)

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
    FUN_146caff42(param_1);
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



// FUNCTION 146e0ec90 FUN_146e0ec90 body=295 status=ok
// SIG undefined FUN_146e0ec90(void)

undefined4 *
FUN_146e0ec90(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140c6259c(param_1,local_58);
  *local_50 = *(undefined8 *)*param_4;
  local_50[1] = 0;
  local_50[2] = 0;
  *(undefined4 *)(local_50 + 3) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_140c624da(param_1,param_3,local_50,local_58);
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
      *(uint *)((longlong)local_50 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_140c62772(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e0edb8 FUN_146e0edb8 body=30 status=ok
// SIG undefined FUN_146e0edb8(void)

void FUN_146e0edb8(longlong param_1)

{
  FUN_146d83806(param_1 + 0x10);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146e0edd6 FUN_146e0edd6 body=98 status=ok
// SIG undefined FUN_146e0edd6(void)

void FUN_146e0edd6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 146e0ee38 FUN_146e0ee38 body=23 status=ok
// SIG undefined FUN_146e0ee38(void)

void FUN_146e0ee38(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_2 + lVar1 * 8);
    lVar1 = lVar1 + 1;
  } while (param_3 != (int)lVar1);
  return;
}



// FUNCTION 146e0ee50 FUN_146e0ee50 body=223 status=ok
// SIG undefined FUN_146e0ee50(void)

void FUN_146e0ee50(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar1 = (int)param_2[1];
  uVar3 = uVar2 + iVar1;
  if (uVar2 < uVar3) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_1400c8826(param_1,uVar3);
    iVar1 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar1)) {
      *(int *)(param_1 + 0x48) = iVar1;
      FUN_1400c98fa(param_1);
    }
    iVar1 = (int)param_2[1];
  }
  if (iVar1 != 0) {
    lVar4 = *param_2;
    lVar5 = (longlong)iVar1 << 3;
    do {
      FUN_146e0ef46(param_1,local_34,lVar4);
      lVar4 = lVar4 + 8;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (-1 < *(int *)((longlong)param_2 + 0xc)) {
    if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
}



// FUNCTION 146e0ef46 FUN_146e0ef46 body=320 status=ok
// SIG undefined FUN_146e0ef46(void)

undefined4 * FUN_146e0ef46(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400c89ee(param_1,local_48);
  uVar3 = *param_3;
  *local_40 = uVar3;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_58 = 0;
  cVar1 = FUN_1400c8790(param_1,uVar2,local_40);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_40 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1400c98fa(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e0f088 FUN_146e0f088 body=114 status=ok
// SIG undefined FUN_146e0f088(void)

void FUN_146e0f088(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 146e0f0fa FUN_146e0f0fa body=90 status=ok
// SIG undefined FUN_146e0f0fa(void)

void FUN_146e0f0fa(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x3c + (longlong)param_2 * 0x40);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x38 + lVar5 * 0x40);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x40 + 0x38);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x40 + 0x38);
  FUN_146e0f088();
  return;
}



// FUNCTION 146e0f154 FUN_146e0f154 body=139 status=ok
// SIG undefined FUN_146e0f154(void)

void FUN_146e0f154(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 1;
  *(undefined8 *)(param_1 + 2) = 0;
  uVar2 = DAT_14c8464e8;
  uVar1 = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 8) = DAT_14c8464f0;
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined8 *)(param_1 + 6) = uVar2;
  uVar1 = DAT_14c8463e8;
  *(undefined8 *)(param_1 + 0x10) = DAT_14c8463e0;
  *(undefined8 *)(param_1 + 0x12) = uVar1;
  uVar1 = DAT_14c8463d8;
  *(undefined8 *)(param_1 + 0xc) = DAT_14c8463d0;
  *(undefined8 *)(param_1 + 0xe) = uVar1;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x14) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x16) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = DAT_14c8464f0;
  *(undefined8 *)(param_1 + 0x1e) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x1a) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x1c) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 146e0f1e0 FUN_146e0f1e0 body=146 status=ok
// SIG undefined FUN_146e0f1e0(void)

void FUN_146e0f1e0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xd0,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xd0)) {
      uVar5 = uVar4 / 0xd0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xd0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146e0f274 FUN_146e0f274 body=181 status=ok
// SIG undefined FUN_146e0f274(void)

longlong FUN_146e0f274(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_146e0f30c;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_146e0f32a(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_146e0f30c:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 146e0f32a FUN_146e0f32a body=277 status=ok
// SIG undefined FUN_146e0f32a(void)

undefined4 * FUN_146e0f32a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146e0f440(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_146e0f526(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_146e0f63a(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e0f440 FUN_146e0f440 body=229 status=ok
// SIG undefined FUN_146e0f440(void)

int * FUN_146e0f440(longlong *param_1,int *param_2)

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



// FUNCTION 146e0f526 FUN_146e0f526 body=161 status=ok
// SIG undefined FUN_146e0f526(void)

undefined8 FUN_146e0f526(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          if (*(longlong *)(puVar1 + 2) != 0) {
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
          FUN_146e0f5c8(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 146e0f5c8 FUN_146e0f5c8 body=114 status=ok
// SIG undefined FUN_146e0f5c8(void)

void FUN_146e0f5c8(longlong *param_1,int param_2)

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



// FUNCTION 146e0f63a FUN_146e0f63a body=477 status=ok
// SIG undefined FUN_146e0f63a(void)

void FUN_146e0f63a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
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
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 146e0f818 FUN_146e0f818 body=114 status=ok
// SIG undefined FUN_146e0f818(void)

void FUN_146e0f818(longlong *param_1,int param_2)

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



// FUNCTION 146e0f88a FUN_146e0f88a body=105 status=ok
// SIG undefined FUN_146e0f88a(void)

void FUN_146e0f88a(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + (longlong)(int)param_2 * 0x10) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + lVar1),
            (void *)((longlong)(iVar2 - iVar3) * 0x10 + lVar1),(longlong)iVar3 << 4);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 146e0f8f4 FUN_146e0f8f4 body=90 status=ok
// SIG undefined FUN_146e0f8f4(void)

void FUN_146e0f8f4(longlong *param_1,int param_2)

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
  FUN_146e0f94e();
  return;
}



// FUNCTION 146e0f94e FUN_146e0f94e body=52 status=ok
// SIG undefined FUN_146e0f94e(void)

void FUN_146e0f94e(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 8 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_146e0f5c8(param_1,param_2);
  return;
}



// FUNCTION 146e0f982 FUN_146e0f982 body=83 status=ok
// SIG undefined FUN_146e0f982(void)

undefined8 * FUN_146e0f982(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x15) = 0;
  FUN_146e0f9d6();
  while ((param_1[2] != 0 &&
         (*(char *)(*(longlong *)(param_1[2] + 0x230) + (longlong)*(int *)(param_1 + 3)) == '\x01'))
        ) {
    FUN_146dfbb08(param_1);
  }
  return param_1;
}



// FUNCTION 146e0f9d6 FUN_146e0f9d6 body=211 status=ok
// SIG undefined FUN_146e0f9d6(void)

void FUN_146e0f9d6(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  int *piVar9;
  ulonglong uVar10;
  
  plVar2 = (longlong *)*param_1;
  uVar1 = *(uint *)(param_1 + 4);
  uVar5 = (ulonglong)uVar1;
  if ((int)uVar1 < (int)plVar2[1]) {
    uVar8 = (longlong)(int)uVar1 << 4 | 8;
    uVar5 = (longlong)(int)uVar1;
    do {
      lVar6 = *(longlong *)(*plVar2 + uVar8);
      if (lVar6 == 0) {
        piVar9 = (int *)(*(longlong *)(*plVar2 + -8 + uVar8) + 0x18);
      }
      else {
        piVar9 = (int *)(lVar6 + 8);
      }
      if (*piVar9 != 0) goto LAB_146e0fa30;
      uVar10 = uVar5 + 1;
      *(int *)(param_1 + 4) = (int)uVar5 + 1;
      uVar8 = uVar8 + 0x10;
      uVar5 = uVar10;
    } while ((longlong)uVar10 < (longlong)(int)plVar2[1]);
    uVar5 = uVar10 & 0xffffffff;
  }
LAB_146e0fa30:
  *(undefined4 *)(param_1 + 5) = 0;
  if ((int)uVar5 < (int)plVar2[1]) {
    lVar6 = (longlong)(int)uVar5 * 0x10;
    puVar3 = *(undefined8 **)(*plVar2 + 8 + lVar6);
    param_1[1] = (longlong)puVar3;
    if (puVar3 == (undefined8 *)0x0) {
      lVar6 = *(longlong *)(*plVar2 + lVar6);
      uVar4 = 0;
    }
    else {
      uVar4 = (undefined4)(*(longlong **)*puVar3)[1];
      lVar6 = **(longlong **)*puVar3;
    }
    if (lVar6 == 0) {
      uVar7 = 0;
      lVar6 = 0;
    }
    else {
      uVar7 = *(undefined1 *)(lVar6 + 0x70);
    }
    param_1[2] = lVar6;
    *(undefined4 *)(param_1 + 3) = uVar4;
    *(undefined1 *)((longlong)param_1 + 0x1c) = uVar7;
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(lVar6 + 0x18);
    return;
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 146e0faaa FUN_146e0faaa body=201 status=ok
// SIG undefined FUN_146e0faaa(void)

void FUN_146e0faaa(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar5 = 0;
    bVar10 = *plVar2 == *(longlong *)*param_2;
    iVar7 = 0;
    do {
      iVar3 = iVar7 + 1;
      if (iVar7 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      iVar8 = iVar7;
      lVar6 = (longlong)iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar3;
        if (lVar4 <= lVar6) break;
        iVar8 = iVar8 + 1;
        iVar9 = iVar8;
      } while (bVar10 == (plVar2[lVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (iVar5 != iVar7) {
          memmove(plVar2 + iVar5,plVar2 + iVar7,(longlong)(iVar9 - iVar7) << 3);
        }
        iVar5 = iVar5 + (iVar9 - iVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar7 = iVar9;
    } while (lVar6 < lVar4);
    *(int *)(param_1 + 1) = iVar5;
  }
  return;
}



// FUNCTION 146e0fb73 FUN_146e0fb73 body=59 status=ok
// SIG undefined FUN_146e0fb73(void)

void FUN_146e0fb73(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_146cc37f0(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 146e0fbae FUN_146e0fbae body=68 status=ok
// SIG undefined FUN_146e0fbae(void)

void FUN_146e0fbae(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_146e0fb73(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_146e0fbf4(param_1,param_2);
  return;
}



// FUNCTION 146e0fbf4 FUN_146e0fbf4 body=112 status=ok
// SIG undefined FUN_146e0fbf4(void)

void FUN_146e0fbf4(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x50,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 146e0fc64 FUN_146e0fc64 body=147 status=ok
// SIG undefined FUN_146e0fc64(void)

void FUN_146e0fc64(longlong param_1,int param_2)

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



// FUNCTION 146e0fcf8 FUN_146e0fcf8 body=122 status=ok
// SIG undefined FUN_146e0fcf8(void)

longlong FUN_146e0fcf8(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_146e0fd72(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 146e0fd72 FUN_146e0fd72 body=121 status=ok
// SIG undefined FUN_146e0fd72(void)

undefined8 * FUN_146e0fd72(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_146cc3826(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 146e0fdec FUN_146e0fdec body=380 status=ok
// SIG undefined FUN_146e0fdec(void)

undefined4 * FUN_146e0fdec(longlong param_1,undefined4 *param_2,undefined4 *param_3)

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
  FUN_146ce9734(param_1,local_48);
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
  uVar6 = ((uint)(local_40[1] >> 0x14) & 0xffff ^ (uint)(local_40[1] >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar5 = (uVar5 >> 2) + uVar5 * 0x40 + (uVar6 >> 0x10 ^ uVar6) + 0x9e3779b9 ^ uVar5;
  cVar4 = FUN_146e0ff6a(param_1,uVar5,local_40,&local_4c);
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
      FUN_146e0fff8(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e0ff6a FUN_146e0ff6a body=142 status=ok
// SIG undefined FUN_146e0ff6a(void)

undefined8 FUN_146e0ff6a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
           (*(longlong *)(*param_1 + 8 + (longlong)iVar6 * 0x18) == param_3[1])) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_146ce98a0((int)lVar3,*param_4,1);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 146e0fff8 FUN_146e0fff8 body=557 status=ok
// SIG undefined FUN_146e0fff8(void)

void FUN_146e0fff8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
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
  uVar9 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar9 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar9,4);
    if (0 < (int)uVar9) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar9 != uVar8);
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
        lVar2 = *local_70;
        lVar6 = (longlong)iVar5;
        uVar11 = *(ulonglong *)(lVar2 + lVar6 * 0x18);
        uVar3 = *(ulonglong *)(lVar2 + 8 + lVar6 * 0x18);
        uVar9 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        uVar9 = uVar9 >> 0x10 ^ uVar9;
        uVar8 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar11 = (longlong)
                 (int)(uVar9 * 0x40 + (uVar8 >> 0x10 ^ uVar8) + (uVar9 >> 2) + 0x9e3779b9 ^ uVar9) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar2 + 0x14 + lVar6 * 0x18) = iVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5
        ;
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



// FUNCTION 146e10226 FUN_146e10226 body=380 status=ok
// SIG undefined FUN_146e10226(void)

undefined4 * FUN_146e10226(longlong param_1,undefined4 *param_2,undefined4 *param_3)

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
  FUN_146ce9734(param_1,local_48);
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
  uVar6 = ((uint)(local_40[1] >> 0x14) & 0xffff ^ (uint)(local_40[1] >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar5 = (uVar5 >> 2) + uVar5 * 0x40 + (uVar6 >> 0x10 ^ uVar6) + 0x9e3779b9 ^ uVar5;
  cVar4 = FUN_146e0ff6a(param_1,uVar5,local_40,&local_4c);
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
      FUN_146e0fff8(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e103a3 FUN_146e103a3 body=23 status=ok
// SIG undefined FUN_146e103a3(void)

void FUN_146e103a3(undefined8 *param_1,int param_2)

{
  do {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    param_1 = param_1 + 2;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 146e103ba FUN_146e103ba body=96 status=ok
// SIG undefined FUN_146e103ba(void)

void FUN_146e103ba(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_146ceabe0(param_1,param_2,1);
  return;
}



// FUNCTION 146e1045c FUN_146e1045c body=76 status=ok
// SIG undefined FUN_146e1045c(void)

void FUN_146e1045c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 146e104ae FUN_146e104ae body=136 status=ok
// SIG undefined FUN_146e104ae(void)

void FUN_146e104ae(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
    FUN_1400f108c((longlong *)(param_3 + 8),iVar2);
  }
  *(undefined8 *)(*(longlong *)(param_3 + 8) + (longlong)iVar2 * 8) =
       *(undefined8 *)(lVar1 + (longlong)(int)param_2 * 8);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = ~param_2 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar2 - iVar4) * 8),
            (longlong)iVar4 << 3);
    iVar2 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar2 + -1;
  return;
}



// FUNCTION 146e10536 FUN_146e10536 body=47 status=ok
// SIG undefined FUN_146e10536(void)

longlong FUN_146e10536(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e10566 FUN_146e10566 body=96 status=ok
// SIG undefined FUN_146e10566(void)

void FUN_146e10566(longlong param_1,int param_2)

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



// FUNCTION 146e105c6 FUN_146e105c6 body=63 status=ok
// SIG undefined FUN_146e105c6(void)

void FUN_146e105c6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146e10606(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146e10606 FUN_146e10606 body=97 status=ok
// SIG undefined FUN_146e10606(void)

ulonglong FUN_146e10606(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 146e106aa FUN_146e106aa body=99 status=ok
// SIG undefined FUN_146e106aa(void)

void FUN_146e106aa(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  if (param_3 != 0) {
    _Dst = (void *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 8));
    FUN_14006f3bd(_Dst,param_3);
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



// FUNCTION 146e10714 FUN_146e10714 body=104 status=ok
// SIG undefined FUN_146e10714(void)

void FUN_146e10714(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar1 + 1U) {
    FUN_1401911da((longlong *)(param_3 + 8),iVar1);
  }
  lVar3 = (longlong)param_2;
  *(undefined8 *)(*(longlong *)(param_3 + 8) + (longlong)iVar1 * 8) =
       *(undefined8 *)(lVar2 + lVar3 * 8);
  *(undefined8 *)(lVar2 + lVar3 * 8) = 0;
  FUN_14006f358(param_1 + 8,lVar3,1);
  return;
}



// FUNCTION 146e1077c FUN_146e1077c body=59 status=ok
// SIG undefined FUN_146e1077c(void)

longlong FUN_146e1077c(longlong param_1,int param_2)

{
  FUN_14006f3bd(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e107b8 FUN_146e107b8 body=96 status=ok
// SIG undefined FUN_146e107b8(void)

void FUN_146e107b8(longlong param_1,int param_2)

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



// FUNCTION 146e10818 FUN_146e10818 body=63 status=ok
// SIG undefined FUN_146e10818(void)

void FUN_146e10818(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146e10858(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146e10858 FUN_146e10858 body=97 status=ok
// SIG undefined FUN_146e10858(void)

ulonglong FUN_146e10858(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 146e108ba FUN_146e108ba body=169 status=ok
// SIG undefined FUN_146e108ba(void)

void FUN_146e108ba(longlong param_1,longlong *param_2)

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
    FUN_146e10964(param_1);
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



// FUNCTION 146e10964 FUN_146e10964 body=1014 status=ok
// SIG undefined FUN_146e10964(void)

void FUN_146e10964(longlong param_1,ulonglong *param_2)

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
    goto LAB_146e10b56;
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
            if (*(ulonglong *)(lVar8 + (longlong)iVar11 * 0x18) == local_58) goto LAB_146e10b3d;
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
      plVar5 = (longlong *)FUN_146e254c8(param_1,plVar10);
      if (plVar5 != (longlong *)0x0) {
        *param_2 = (ulonglong)plVar5;
        plVar10 = plVar5;
      }
      (**(code **)(*plVar10 + 0xa0))(plVar10,param_1);
      FUN_146ca4900(*(longlong *)(param_1 + 0x98) + 0x60,local_58);
    }
    goto LAB_146e10b56;
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
      if ((int)local_4c < 0) goto LAB_146e10c76;
      plVar10 = *(longlong **)(param_1 + 0x98);
      iVar11 = (int)plVar10[1];
    }
    if ((int)local_4c < iVar11) {
      uVar4 = *(ulonglong *)(*plVar10 + (ulonglong)local_4c * 8);
      if (uVar4 == 0) {
        plVar10 = (longlong *)*param_2;
        plVar5 = (longlong *)FUN_146e254c8(param_1,plVar10);
        if (plVar5 != (longlong *)0x0) {
          *param_2 = (ulonglong)plVar5;
          plVar10 = plVar5;
        }
        (**(code **)(*plVar10 + 0xa0))(plVar10,param_1);
        local_58 = *param_2;
        local_40 = &local_4c;
        *(ulonglong *)(**(longlong **)(param_1 + 0x98) + (longlong)(int)local_4c * 8) = local_58;
        local_48 = &local_58;
        FUN_14004a1c4(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      }
      else {
        *param_2 = uVar4;
      }
      goto LAB_146e10b56;
    }
  }
LAB_146e10c76:
  FUN_1468216ba(*(undefined8 *)(param_1 + 0x90));
LAB_146e10b56:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar7 = (int)puVar9[2], iVar7 != -1) {
LAB_146e10b3d:
    puVar9 = (ulonglong *)(lVar8 + (longlong)iVar7 * 0x18);
    if (*puVar9 == local_58) goto LAB_146e10bb2;
  }
  puVar9 = (ulonglong *)0x0;
LAB_146e10bb2:
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
  goto LAB_146e10b56;
}



// FUNCTION 146e10d5b FUN_146e10d5b body=633 status=ok
// SIG undefined FUN_146e10d5b(void)

void FUN_146e10d5b(longlong param_1)

{
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  longlong local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146e10fd6();
  FUN_140f62150(local_60,param_1 + 0x640);
  if (local_50 != 0) {
    do {
      FUN_140a1e69e(local_60);
    } while (local_50 != 0);
  }
  FUN_140056680(local_60,L"NonDisabledDynamicView");
  FUN_146e110e7(param_1 + 0x5e0);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_60,L"ActiveDynamicMovingKinematicParticlesView");
  FUN_146e110e7(param_1 + 0x688);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_60,L"NonDisabledView");
  FUN_146e112e5(param_1 + 0x5c8);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_60,L"NonDisabledClusteredView");
  FUN_146e114e3(param_1 + 0x5f8);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_60,L"ActiveParticlesView");
  FUN_146e110e7(param_1 + 0x610);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_60,L"DirtyParticlesView");
  FUN_146e110e7(param_1 + 0x628);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_60,L"AllParticlesView");
  FUN_146e112e5(param_1 + 0x640);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_60,L"ActiveKinematicParticlesView");
  FUN_146e116ec(param_1 + 0x658);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_60,L"ActiveMovingKinematicParticlesView");
  FUN_146e110e7(param_1 + 0x670);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_60,L"ActiveStaticParticlesView");
  FUN_146e112e5(param_1 + 0x6a0);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_60,L"ActiveDynamicMovingKinematicParticlesView");
  FUN_146e110e7(param_1 + 0x688);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e10fd6 FUN_146e10fd6 body=273 status=ok
// SIG undefined FUN_146e10fd6(void)

void FUN_146e10fd6(undefined8 *param_1)

{
  FUN_146e1252a(*param_1);
  FUN_146e1252a(param_1[1]);
  FUN_146e1263a(param_1[2]);
  FUN_146e1263a(param_1[3]);
  FUN_146e1274a(param_1[6]);
  FUN_146e1274a(param_1[4]);
  FUN_146e1274a(param_1[5]);
  FUN_146e1285a(param_1[7]);
  FUN_146e1296a(param_1[8]);
  FUN_146e12a7a(param_1 + 9);
  FUN_146e12a7a(param_1 + 0x16);
  FUN_146e12a7a(param_1 + 0x23);
  FUN_146e12a7a(param_1 + 0x30);
  FUN_146e12b8e(param_1 + 0x3d);
  FUN_146e12b8e(param_1 + 0x4a);
  FUN_146e12b8e(param_1 + 0x57);
  FUN_146e12b8e(param_1 + 100);
  FUN_146e12b8e(param_1 + 0x71);
  FUN_146e12b8e(param_1 + 0x7e);
  FUN_146e12ca2(param_1 + 0x8b);
  FUN_146e12db2(param_1 + 0x8e);
  FUN_146e12ec2(param_1 + 0x92);
  FUN_146e12ec2(param_1 + 0x9f);
  FUN_146e12ec2(param_1 + 0xac);
  return;
}



// FUNCTION 146e110e7 FUN_146e110e7 body=508 status=ok
// SIG undefined FUN_146e110e7(void)

void FUN_146e110e7(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 auStack_e8 [36];
  undefined1 local_c4 [4];
  ulonglong local_c0;
  undefined1 local_b8 [16];
  longlong local_a8;
  int local_a0;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  int local_54;
  undefined1 local_50 [8];
  undefined1 *local_48;
  int local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((longlong)(int)uVar3 != 0) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_146e1bebc(&local_88,uVar3);
    iVar2 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((local_40 == 0) || (local_40 < iVar2)) {
      local_40 = iVar2;
      FUN_146e1c052();
    }
  }
  FUN_14488ddfe(local_b8,param_1);
  if (local_a8 != 0) {
    do {
      uVar1 = *(ulonglong *)(*(longlong *)(local_a8 + 0x98) + (longlong)local_a0 * 8);
      if ((int)uStack_80 != local_54) {
        uVar3 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        puVar4 = local_48;
        if (local_48 == (undefined1 *)0x0) {
          puVar4 = local_50;
        }
        for (iVar2 = *(int *)(puVar4 + (ulonglong)(local_40 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
            iVar2 != -1; iVar2 = *(int *)((longlong)iVar2 * 0x10 + local_88 + 8)) {
          if (*(ulonglong *)(local_88 + (longlong)iVar2 * 0x10) == uVar1) goto LAB_146e1122c;
        }
      }
      local_c0 = uVar1;
      FUN_146e1c230(&local_88,local_c4,&local_c0);
LAB_146e1122c:
      FUN_144b02030(local_b8);
    } while (local_a8 != 0);
  }
  local_40 = 0;
  if (local_48 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_146e1c578(&local_88);
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e112e5 FUN_146e112e5 body=508 status=ok
// SIG undefined FUN_146e112e5(void)

void FUN_146e112e5(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 auStack_e8 [36];
  undefined1 local_c4 [4];
  ulonglong local_c0;
  undefined1 local_b8 [16];
  longlong local_a8;
  int local_a0;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  int local_54;
  undefined1 local_50 [8];
  undefined1 *local_48;
  int local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((longlong)(int)uVar3 != 0) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_146e1bebc(&local_88,uVar3);
    iVar2 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((local_40 == 0) || (local_40 < iVar2)) {
      local_40 = iVar2;
      FUN_146e1c052();
    }
  }
  FUN_140f62150(local_b8,param_1);
  if (local_a8 != 0) {
    do {
      uVar1 = *(ulonglong *)(*(longlong *)(local_a8 + 0x98) + (longlong)local_a0 * 8);
      if ((int)uStack_80 != local_54) {
        uVar3 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        puVar4 = local_48;
        if (local_48 == (undefined1 *)0x0) {
          puVar4 = local_50;
        }
        for (iVar2 = *(int *)(puVar4 + (ulonglong)(local_40 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
            iVar2 != -1; iVar2 = *(int *)((longlong)iVar2 * 0x10 + local_88 + 8)) {
          if (*(ulonglong *)(local_88 + (longlong)iVar2 * 0x10) == uVar1) goto LAB_146e1142a;
        }
      }
      local_c0 = uVar1;
      FUN_146e1c230(&local_88,local_c4,&local_c0);
LAB_146e1142a:
      FUN_140a1e69e(local_b8);
    } while (local_a8 != 0);
  }
  local_40 = 0;
  if (local_48 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_146e1c578(&local_88);
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e114e3 FUN_146e114e3 body=519 status=ok
// SIG undefined FUN_146e114e3(void)

void FUN_146e114e3(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 auStack_e8 [36];
  undefined1 local_c4 [4];
  ulonglong local_c0;
  undefined1 local_b8 [16];
  longlong local_a8;
  int local_a0;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  int local_54;
  undefined1 local_50 [8];
  undefined1 *local_48;
  int local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((longlong)(int)uVar3 != 0) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_146e1bebc(&local_88,uVar3);
    iVar2 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((local_40 == 0) || (local_40 < iVar2)) {
      local_40 = iVar2;
      FUN_146e1c052();
    }
  }
  FUN_146e0f982(local_b8,param_1);
  if (local_a8 != 0) {
    do {
      uVar1 = *(ulonglong *)(*(longlong *)(local_a8 + 0x98) + (longlong)local_a0 * 8);
      if ((int)uStack_80 != local_54) {
        uVar3 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        puVar4 = local_48;
        if (local_48 == (undefined1 *)0x0) {
          puVar4 = local_50;
        }
        for (iVar2 = *(int *)(puVar4 + (ulonglong)(local_40 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
            iVar2 != -1; iVar2 = *(int *)((longlong)iVar2 * 0x10 + local_88 + 8)) {
          if (*(ulonglong *)(local_88 + (longlong)iVar2 * 0x10) == uVar1) goto LAB_146e116a3;
        }
      }
      local_c0 = uVar1;
      FUN_146e1c230(&local_88,local_c4,&local_c0);
LAB_146e116a3:
      FUN_146dfbb08(local_b8);
    } while (local_a8 != 0);
  }
  local_40 = 0;
  if (local_48 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_146e1c578(&local_88);
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e116ec FUN_146e116ec body=526 status=ok
// SIG undefined FUN_146e116ec(void)

void FUN_146e116ec(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 auStack_e8 [36];
  undefined1 local_c4 [4];
  undefined8 local_c0;
  undefined1 local_b8 [16];
  longlong local_a8;
  undefined4 local_a0;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  int local_54;
  undefined1 local_50 [8];
  undefined1 *local_48;
  int local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((longlong)(int)uVar3 != 0) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_146e1bebc(&local_88,uVar3);
    iVar1 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((local_40 == 0) || (local_40 < iVar1)) {
      local_40 = iVar1;
      FUN_146e1c052();
    }
  }
  FUN_146d980ac(local_b8,param_1);
  if (local_a8 != 0) {
    do {
      uVar2 = FUN_146dd0720(local_a8,local_a0);
      if ((int)uStack_80 != local_54) {
        uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        puVar4 = local_48;
        if (local_48 == (undefined1 *)0x0) {
          puVar4 = local_50;
        }
        for (iVar1 = *(int *)(puVar4 + (ulonglong)(local_40 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
            iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x10 + local_88 + 8)) {
          if (*(ulonglong *)(local_88 + (longlong)iVar1 * 0x10) == uVar2) goto LAB_146e118b3;
        }
      }
      local_c0 = FUN_146dd0720(local_a8,local_a0);
      FUN_146e1c230(&local_88,local_c4,&local_c0);
LAB_146e118b3:
      FUN_146d8d3b0(local_b8);
    } while (local_a8 != 0);
  }
  local_40 = 0;
  if (local_48 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_146e1c578(&local_88);
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e118fc FUN_146e118fc body=96 status=ok
// SIG undefined FUN_146e118fc(void)

void FUN_146e118fc(longlong param_1)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  longlong local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14488ddfe(local_40,param_1 + 0x610);
  if (local_30 != 0) {
    do {
      FUN_144b02030(local_40);
    } while (local_30 != 0);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e1195e FUN_146e1195e body=301 status=ok
// SIG undefined FUN_146e1195e(void)

void FUN_146e1195e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = *(undefined4 *)(*(longlong *)(*param_2 + 0x80) + (longlong)(int)param_2[1] * 4);
  puVar7 = (undefined8 *)FUN_146e18dbc(param_1 + 0x58);
  lVar8 = param_2[1];
  lVar5 = *(longlong *)(*param_2 + 0x530);
  puVar7[2] = *(undefined8 *)(lVar5 + 0x10 + (longlong)(int)lVar8 * 0x18);
  puVar1 = (undefined8 *)(lVar5 + (longlong)(int)lVar8 * 0x18);
  uVar6 = puVar1[1];
  *puVar7 = *puVar1;
  puVar7[1] = uVar6;
  lVar5 = *(longlong *)(*param_2 + 0x548);
  lVar8 = (longlong)(int)param_2[1] * 0x10;
  fVar2 = *(float *)(lVar5 + 0xc + lVar8);
  fVar3 = *(float *)(lVar5 + 8 + lVar8);
  fVar4 = *(float *)(lVar5 + 4 + lVar8);
  puVar7[4] = (double)*(float *)(lVar5 + lVar8);
  puVar7[5] = (double)fVar4;
  puVar7[6] = (double)fVar3;
  puVar7[7] = (double)fVar2;
  lVar8 = (longlong)(int)param_2[1];
  lVar5 = *(longlong *)(*param_2 + 0x278);
  fVar2 = *(float *)(lVar5 + 8 + lVar8 * 0xc);
  fVar3 = *(float *)(lVar5 + 4 + lVar8 * 0xc);
  puVar7[8] = (double)*(float *)(lVar5 + lVar8 * 0xc);
  puVar7[9] = (double)fVar3;
  puVar7[10] = (double)fVar2;
  lVar8 = (longlong)(int)param_2[1];
  lVar5 = *(longlong *)(*param_2 + 0x290);
  fVar2 = *(float *)(lVar5 + 8 + lVar8 * 0xc);
  fVar3 = *(float *)(lVar5 + 4 + lVar8 * 0xc);
  puVar7[0xb] = (double)*(float *)(lVar5 + lVar8 * 0xc);
  puVar7[0xc] = (double)fVar3;
  puVar7[0xd] = (double)fVar2;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e11a8c FUN_146e11a8c body=129 status=ok
// SIG undefined FUN_146e11a8c(void)

undefined8 * FUN_146e11a8c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xb0,0x10);
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *puVar1 = &PTR_FUN_149f5d7b0;
  puVar1[0xf] = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x8c) = 0;
  puVar1[0x13] = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  *(undefined4 *)(puVar1 + 0x15) = 0;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 146e11b0e FUN_146e11b0e body=74 status=ok
// SIG undefined FUN_146e11b0e(void)

void FUN_146e11b0e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1447eb164(param_1 + 0xc70);
  lVar1 = *(longlong *)(*param_2 + 0x1d0);
  lVar2 = (longlong)(int)param_2[1] * 0x10;
  *(undefined4 *)(lVar1 + 8 + lVar2) = 0;
  if (-1 < *(int *)(lVar1 + 0xc + lVar2)) {
    return;
  }
  FUN_146d97e7a(lVar1 + lVar2,0);
  return;
}



// FUNCTION 146e11b58 FUN_146e11b58 body=173 status=ok
// SIG undefined FUN_146e11b58(void)

void FUN_146e11b58(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  longlong local_48;
  int local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140f62150(local_58,*(longlong *)(param_1 + 0x2c8) + 0x640);
  if (local_48 != 0) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(local_48 + 0x98) + (longlong)local_40 * 8);
      if (lVar1 != 0) {
        FUN_144aa56e0(param_1 + 0x100,lVar1,*(undefined4 *)(param_1 + 0xc60));
        FUN_146e11b0e(param_1,lVar1);
      }
      FUN_140a1e69e(local_58);
    } while (local_48 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e11c06 FUN_146e11c06 body=1297 status=ok
// SIG undefined FUN_146e11c06(void)

void FUN_146e11c06(longlong param_1,longlong *param_2,double *param_3,double *param_4,
                  undefined1 param_5)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
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
  char cVar15;
  longlong lVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_1b8 [32];
  double *local_198;
  double *local_190;
  double local_188;
  double *local_180;
  undefined8 local_178;
  double local_168;
  double local_160;
  double local_158;
  double local_100;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar3 = *param_2;
  lVar16 = (longlong)(int)param_2[1];
  if ((param_2 == (longlong *)0x0) || (*(byte *)((longlong)param_2 + 0xc) < 2)) {
    dVar20 = 0.0;
    dVar21 = 0.0;
    dVar22 = 0.0;
  }
  else {
    cVar15 = *(char *)(*(longlong *)(lVar3 + 0x2c0) + 0xb + lVar16 * 0x10);
    if (cVar15 != '\x04') {
      dVar20 = 0.0;
      dVar21 = 0.0;
      dVar22 = 0.0;
      if (cVar15 != '\x01') goto LAB_146e11ce8;
    }
    lVar4 = *(longlong *)(lVar3 + 0x3e0);
    dVar20 = *(double *)(lVar4 + lVar16 * 0x18);
    dVar21 = *(double *)(lVar4 + 8 + lVar16 * 0x18);
    dVar22 = *(double *)(lVar4 + 0x10 + lVar16 * 0x18);
  }
LAB_146e11ce8:
  dVar18 = param_4[2];
  dVar19 = *param_4;
  dVar1 = param_4[1];
  dVar6 = dVar19 * dVar21 - dVar20 * dVar1;
  dVar8 = dVar18 * dVar20 - dVar22 * dVar19;
  dVar10 = dVar1 * dVar22 - dVar21 * dVar18;
  dVar6 = dVar6 + dVar6;
  dVar8 = dVar8 + dVar8;
  dVar10 = dVar10 + dVar10;
  dVar2 = param_4[3];
  lVar4 = *(longlong *)(lVar3 + 0x48);
  lVar17 = lVar16 * 0x10;
  dVar7 = (double)*(float *)(lVar4 + 0xc + lVar17);
  dVar11 = (double)*(float *)(lVar4 + 8 + lVar17);
  dVar5 = (double)*(float *)(lVar4 + 4 + lVar17);
  dVar9 = (double)*(float *)(lVar4 + lVar17);
  dVar13 = dVar9 * dVar21 - dVar20 * dVar5;
  dVar12 = dVar11 * dVar20 - dVar22 * dVar9;
  dVar14 = dVar5 * dVar22 - dVar21 * dVar11;
  dVar13 = dVar13 + dVar13;
  dVar12 = dVar12 + dVar12;
  dVar14 = dVar14 + dVar14;
  lVar3 = *(longlong *)(lVar3 + 0x28);
  dVar22 = ((dVar19 * dVar8 - dVar10 * dVar1) + dVar2 * dVar6 + dVar22 + param_3[2]) -
           ((dVar9 * dVar12 - dVar14 * dVar5) + dVar13 * dVar7 + dVar22 +
           *(double *)(lVar3 + 0x10 + lVar16 * 0x18));
  dVar19 = ((dVar18 * dVar10 - dVar6 * dVar19) + dVar2 * dVar8 + dVar21 + param_3[1]) -
           ((dVar11 * dVar14 - dVar13 * dVar9) + dVar12 * dVar7 + dVar21 +
           *(double *)(lVar3 + 8 + lVar16 * 0x18));
  dVar18 = ((dVar1 * dVar6 - dVar8 * dVar18) + dVar10 * dVar2 + dVar20 + *param_3) -
           ((dVar5 * dVar13 - dVar12 * dVar11) + dVar7 * dVar14 + dVar20 +
           *(double *)(lVar3 + lVar16 * 0x18));
  dVar21 = dVar22 * dVar22 + dVar18 * dVar18 + dVar19 * dVar19;
  local_d0 = 0.0;
  uVar23 = 0;
  uVar24 = 0x3ff00000;
  local_d8 = 1.0;
  local_c8 = 0.0;
  dVar20 = 0.0;
  if (9.999999747378752e-05 <= dVar21) {
    dVar20 = SQRT(dVar21);
    local_c8 = dVar22 / dVar20;
    local_d0 = dVar19 / dVar20;
    local_d8 = dVar18 / dVar20;
  }
  local_e0 = param_3[2] - local_c8 * dVar20;
  local_e8 = param_3[1] - local_d0 * dVar20;
  local_f0 = *param_3 - local_d8 * dVar20;
  if (9.99999993922529e-09 < dVar20) {
    local_180 = &local_168;
    local_168 = 0.0;
    local_178 = 0x3f1a36e2e0000000;
    local_190 = &local_d8;
    local_198 = param_4;
    local_188 = dVar20;
    cVar15 = FUN_146d71733(*(undefined8 *)(param_1 + 0x2d8),param_1 + 0xdb0,param_2,&local_f0);
    if (cVar15 != '\0') {
      uVar23 = SUB84(local_100,0);
      uVar24 = (undefined4)((ulonglong)local_100 >> 0x20);
      if (local_100 <= 0.0) goto LAB_146e120a2;
    }
  }
  local_158 = (param_3[2] - local_e0) * (double)CONCAT44(uVar24,uVar23) + local_e0;
  local_160 = (param_3[1] - local_e8) * (double)CONCAT44(uVar24,uVar23) + local_e8;
  local_168 = (*param_3 - local_f0) * (double)CONCAT44(uVar24,uVar23) + local_f0;
  local_198 = (double *)CONCAT71(local_198._1_7_,param_5);
  FUN_1447eb820(param_1,param_2,&local_168,param_4);
LAB_146e120a2:
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e12118 FUN_146e12118 body=1040 status=ok
// SIG undefined FUN_146e12118(void)

longlong * FUN_146e12118(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong **pplVar11;
  longlong *plVar12;
  uint uVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong **pplVar17;
  longlong lVar18;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  int local_88;
  uint uStack_84;
  uint local_80;
  undefined *local_78;
  longlong **local_70;
  longlong lStack_68;
  undefined8 local_60;
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar10 = (ulonglong)(int)param_3[1];
  lVar7 = *(longlong *)(*param_3 + 0x1b8);
  local_90 = param_4;
  if (*(int *)(lVar7 + 8 + uVar10 * 0x10) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
  }
  local_88 = 0x100;
  uStack_84 = 0;
  local_80 = 0;
  local_78 = &DAT_14c7585e0;
  local_70 = (longlong **)0x0;
  lStack_68 = 0;
  local_60 = 0;
  iVar5 = 0;
  lVar18 = 0;
  plVar12 = param_3;
  local_98 = param_2;
LAB_146e1219f:
  pplVar11 = (longlong **)((longlong)(int)uVar10 * 0x10);
  lVar16 = (longlong)*(int *)(lVar7 + 8 + (longlong)pplVar11);
  if (lVar16 != 0) {
    plVar15 = *(longlong **)(lVar7 + (longlong)pplVar11);
    plVar1 = plVar15 + lVar16;
LAB_146e121bc:
    lVar7 = *plVar15;
    if (*(longlong *)(lVar7 + 8) != 0) {
      plVar14 = (longlong *)(*(longlong *)(lVar7 + 8) + 8);
      plVar6 = (longlong *)FUN_140f61df0();
      do {
        if (*plVar6 == *plVar14) {
          if (((((lVar7 != 0) && (cVar4 = FUN_144b06358(lVar7), cVar4 != '\0')) &&
               (cVar4 = FUN_146de94fc(lVar7), cVar4 == '\0')) &&
              ((lVar16 = FUN_140bba33a(lVar7), *(int *)(lVar16 + 0xfc) == 2 &&
               (*(int *)(lVar16 + 0x100) == 2)))) && (*(int *)(lVar16 + 0x104) == 2)) {
            pplVar11 = local_58;
            FUN_140bba352(lVar7,pplVar11);
            plVar14 = local_58[local_58[0] == plVar12];
            if ((plVar14 != param_3 && plVar14 != (longlong *)0x0) &&
               (1 < *(byte *)((longlong)plVar14 + 0xc))) {
              lVar7 = *plVar14;
              lVar16 = (longlong)(int)plVar14[1];
              cVar4 = *(char *)(*(longlong *)(lVar7 + 0x2c0) + 0xb + lVar16 * 0x10);
              if ((cVar4 == '\x04') || (pplVar11 = (longlong **)0x0, cVar4 == '\x01')) {
                uVar9 = *(uint *)(*(longlong *)(lVar7 + 0x80) + lVar16 * 4);
                uVar9 = (uVar9 >> 0x10 ^ uVar9) * -0x7a143595;
                uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
                uVar9 = *(uint *)(local_78 + (ulonglong)((uVar9 >> 0x10 ^ uVar9) & uStack_84) * 4);
                goto joined_r0x000146e12346;
              }
            }
          }
          break;
        }
        plVar14 = (longlong *)plVar14[1];
      } while (plVar14 != (longlong *)0x0);
    }
    goto LAB_146e121e2;
  }
  goto LAB_146e122a0;
joined_r0x000146e12346:
  if (uVar9 == 0xffffffff) goto LAB_146e12364;
  if (*(longlong **)(lStack_68 + (longlong)(int)uVar9 * 8) == plVar14) {
    pplVar11 = (longlong **)(lStack_68 + (longlong)(int)uVar9 * 8);
    if (pplVar11 != (longlong **)0x0) goto LAB_146e121e2;
    goto LAB_146e12364;
  }
  uVar9 = *(uint *)((longlong)local_70 + (ulonglong)uVar9 * 4);
  goto joined_r0x000146e12346;
LAB_146e12364:
  if ((longlong)(int)local_90[1] != 0) {
    uVar3 = *(undefined8 *)(*(longlong *)(lVar7 + 0x260) + lVar16 * 8);
    pplVar11 = (longlong **)((longlong)(int)local_90[1] << 3);
    pplVar17 = (longlong **)0x0;
    do {
      if ((*(int *)(*local_90 + (longlong)pplVar17) == (int)uVar3) &&
         (*(int *)(*local_90 + 4 + (longlong)pplVar17) == (int)((ulonglong)uVar3 >> 0x20)))
      goto LAB_146e121e2;
      pplVar17 = pplVar17 + 1;
    } while (pplVar11 != pplVar17);
  }
  uVar9 = (uint)local_60;
  uVar10 = local_60 & 0xffffffff;
  uVar13 = (uint)local_60 + 1;
  local_60 = CONCAT44(local_60._4_4_,uVar13);
  if (local_60._4_4_ < uVar13) {
    FUN_140125d6e(&lStack_68,uVar10);
  }
  *(longlong **)(lStack_68 + (longlong)(int)uVar9 * 8) = plVar14;
  uVar2 = *(uint *)(*(longlong *)(*plVar14 + 0x80) + (longlong)(int)plVar14[1] * 4);
  if (local_80 <= uVar9) {
    uVar8 = (ulonglong)(uVar9 + (uVar13 == 0)) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar7 & 0x1f);
    if (uVar13 < 0x21) {
      uVar13 = 0x20;
    }
    FUN_1404b04e2(&local_88,uVar13);
  }
  uVar13 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
  uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
  uVar8 = (ulonglong)((uVar13 >> 0x10 ^ uVar13) & uStack_84);
  *(undefined4 *)((longlong)local_70 + uVar10 * 4) = *(undefined4 *)(local_78 + uVar8 * 4);
  *(uint *)(local_78 + uVar8 * 4) = uVar9;
  pplVar11 = local_70;
LAB_146e121e2:
  plVar15 = plVar15 + 1;
  if (plVar15 == plVar1) goto LAB_146e1229c;
  goto LAB_146e121bc;
LAB_146e1229c:
  iVar5 = (uint)local_60;
LAB_146e122a0:
  if (iVar5 <= lVar18) {
    if (local_80 == 0) {
      *local_98 = lStack_68;
      *(int *)(local_98 + 1) = iVar5;
      *(uint *)((longlong)local_98 + 0xc) = local_60._4_4_;
      plVar12 = local_98;
    }
    else {
      memset(local_78,(int)CONCAT71((int7)((ulonglong)pplVar11 >> 8),0xff),
             (ulonglong)(uint)(local_88 << 2));
      plVar12 = local_98;
      *local_98 = lStack_68;
      lStack_68 = 0;
      *(uint *)(local_98 + 1) = (uint)local_60;
      *(uint *)((longlong)local_98 + 0xc) = local_60._4_4_;
      local_60 = 0;
      if (local_80 != 0) {
        uStack_84 = 0;
        local_80 = 0;
        if (local_78 != (undefined *)0x0) {
          thunk_FUN_1400020a8();
        }
        local_78 = &DAT_14c7585e0;
        if (local_70 != (longlong **)0x0) {
          thunk_FUN_1400020a8();
        }
      }
    }
    if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return plVar12;
  }
  plVar12 = *(longlong **)(lStack_68 + lVar18 * 8);
  lVar18 = lVar18 + 1;
  uVar10 = (ulonglong)*(uint *)(plVar12 + 1);
  lVar7 = *(longlong *)(*plVar12 + 0x1b8);
  goto LAB_146e1219f;
}



// FUNCTION 146e1252a FUN_146e1252a body=271 status=ok
// SIG undefined FUN_146e1252a(void)

void FUN_146e1252a(undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  longlong local_68;
  undefined8 *local_48;
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined8 *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar5 = 0;
  local_30 = (undefined8 *)0x0;
  local_28._0_4_ = 1;
  FUN_1447de2c0(&local_30,1,0);
  puVar2 = local_30;
  *local_30 = param_1;
  local_30[1] = 0;
  local_48 = local_30;
  local_30 = (undefined8 *)0x0;
  lVar3 = (longlong)(int)local_28;
  local_40 = (int)local_28;
  local_3c = local_28._4_4_;
  local_28 = 0;
  local_38 = 0;
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)((longlong)puVar2 + lVar4 + 8);
      if (lVar1 == 0) {
        piVar6 = (int *)(*(longlong *)((longlong)puVar2 + lVar4) + 0x18);
      }
      else {
        piVar6 = (int *)(lVar1 + 8);
      }
      iVar5 = iVar5 + *piVar6;
      lVar4 = lVar4 + 0x10;
      local_38 = iVar5;
    } while (lVar3 * 0x10 != lVar4);
  }
  FUN_140f62150(local_78,&local_48);
  if (local_68 != 0) {
    do {
      FUN_140a1e69e(local_78);
    } while (local_68 != 0);
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e1263a FUN_146e1263a body=271 status=ok
// SIG undefined FUN_146e1263a(void)

void FUN_146e1263a(undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  longlong local_68;
  undefined8 *local_48;
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined8 *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar5 = 0;
  local_30 = (undefined8 *)0x0;
  local_28._0_4_ = 1;
  FUN_1447de2c0(&local_30,1,0);
  puVar2 = local_30;
  *local_30 = param_1;
  local_30[1] = 0;
  local_48 = local_30;
  local_30 = (undefined8 *)0x0;
  lVar3 = (longlong)(int)local_28;
  local_40 = (int)local_28;
  local_3c = local_28._4_4_;
  local_28 = 0;
  local_38 = 0;
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)((longlong)puVar2 + lVar4 + 8);
      if (lVar1 == 0) {
        piVar6 = (int *)(*(longlong *)((longlong)puVar2 + lVar4) + 0x18);
      }
      else {
        piVar6 = (int *)(lVar1 + 8);
      }
      iVar5 = iVar5 + *piVar6;
      lVar4 = lVar4 + 0x10;
      local_38 = iVar5;
    } while (lVar3 * 0x10 != lVar4);
  }
  FUN_140f62150(local_78,&local_48);
  if (local_68 != 0) {
    do {
      FUN_140a1e69e(local_78);
    } while (local_68 != 0);
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e1274a FUN_146e1274a body=271 status=ok
// SIG undefined FUN_146e1274a(void)

void FUN_146e1274a(undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  longlong local_68;
  undefined8 *local_48;
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined8 *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar5 = 0;
  local_30 = (undefined8 *)0x0;
  local_28._0_4_ = 1;
  FUN_1447de2c0(&local_30,1,0);
  puVar2 = local_30;
  *local_30 = param_1;
  local_30[1] = 0;
  local_48 = local_30;
  local_30 = (undefined8 *)0x0;
  lVar3 = (longlong)(int)local_28;
  local_40 = (int)local_28;
  local_3c = local_28._4_4_;
  local_28 = 0;
  local_38 = 0;
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)((longlong)puVar2 + lVar4 + 8);
      if (lVar1 == 0) {
        piVar6 = (int *)(*(longlong *)((longlong)puVar2 + lVar4) + 0x18);
      }
      else {
        piVar6 = (int *)(lVar1 + 8);
      }
      iVar5 = iVar5 + *piVar6;
      lVar4 = lVar4 + 0x10;
      local_38 = iVar5;
    } while (lVar3 * 0x10 != lVar4);
  }
  FUN_140f62150(local_78,&local_48);
  if (local_68 != 0) {
    do {
      FUN_140a1e69e(local_78);
    } while (local_68 != 0);
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e1285a FUN_146e1285a body=271 status=ok
// SIG undefined FUN_146e1285a(void)

void FUN_146e1285a(undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  longlong local_68;
  undefined8 *local_48;
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined8 *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar5 = 0;
  local_30 = (undefined8 *)0x0;
  local_28._0_4_ = 1;
  FUN_1447de2c0(&local_30,1,0);
  puVar2 = local_30;
  *local_30 = param_1;
  local_30[1] = 0;
  local_48 = local_30;
  local_30 = (undefined8 *)0x0;
  lVar3 = (longlong)(int)local_28;
  local_40 = (int)local_28;
  local_3c = local_28._4_4_;
  local_28 = 0;
  local_38 = 0;
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)((longlong)puVar2 + lVar4 + 8);
      if (lVar1 == 0) {
        piVar6 = (int *)(*(longlong *)((longlong)puVar2 + lVar4) + 0x18);
      }
      else {
        piVar6 = (int *)(lVar1 + 8);
      }
      iVar5 = iVar5 + *piVar6;
      lVar4 = lVar4 + 0x10;
      local_38 = iVar5;
    } while (lVar3 * 0x10 != lVar4);
  }
  FUN_140f62150(local_78,&local_48);
  if (local_68 != 0) {
    do {
      FUN_140a1e69e(local_78);
    } while (local_68 != 0);
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e1296a FUN_146e1296a body=271 status=ok
// SIG undefined FUN_146e1296a(void)

void FUN_146e1296a(undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  longlong local_68;
  undefined8 *local_48;
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined8 *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar5 = 0;
  local_30 = (undefined8 *)0x0;
  local_28._0_4_ = 1;
  FUN_1447de2c0(&local_30,1,0);
  puVar2 = local_30;
  *local_30 = param_1;
  local_30[1] = 0;
  local_48 = local_30;
  local_30 = (undefined8 *)0x0;
  lVar3 = (longlong)(int)local_28;
  local_40 = (int)local_28;
  local_3c = local_28._4_4_;
  local_28 = 0;
  local_38 = 0;
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)((longlong)puVar2 + lVar4 + 8);
      if (lVar1 == 0) {
        piVar6 = (int *)(*(longlong *)((longlong)puVar2 + lVar4) + 0x18);
      }
      else {
        piVar6 = (int *)(lVar1 + 8);
      }
      iVar5 = iVar5 + *piVar6;
      lVar4 = lVar4 + 0x10;
      local_38 = iVar5;
    } while (lVar3 * 0x10 != lVar4);
  }
  FUN_140f62150(local_78,&local_48);
  if (local_68 != 0) {
    do {
      FUN_140a1e69e(local_78);
    } while (local_68 != 0);
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e12a7a FUN_146e12a7a body=275 status=ok
// SIG undefined FUN_146e12a7a(void)

void FUN_146e12a7a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  longlong local_68;
  undefined8 *local_48;
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined8 *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar5 = 0;
  local_30 = (undefined8 *)0x0;
  local_28._0_4_ = 1;
  FUN_1447de2c0(&local_30,1,0);
  puVar2 = local_30;
  *local_30 = 0;
  local_30[1] = param_1 + 0x50;
  local_48 = local_30;
  local_30 = (undefined8 *)0x0;
  lVar3 = (longlong)(int)local_28;
  local_40 = (int)local_28;
  local_3c = local_28._4_4_;
  local_28 = 0;
  local_38 = 0;
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)((longlong)puVar2 + lVar4 + 8);
      if (lVar1 == 0) {
        piVar6 = (int *)(*(longlong *)((longlong)puVar2 + lVar4) + 0x18);
      }
      else {
        piVar6 = (int *)(lVar1 + 8);
      }
      iVar5 = iVar5 + *piVar6;
      lVar4 = lVar4 + 0x10;
      local_38 = iVar5;
    } while (lVar3 * 0x10 != lVar4);
  }
  FUN_140f62150(local_78,&local_48);
  if (local_68 != 0) {
    do {
      FUN_140a1e69e(local_78);
    } while (local_68 != 0);
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e12b8e FUN_146e12b8e body=275 status=ok
// SIG undefined FUN_146e12b8e(void)

void FUN_146e12b8e(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  longlong local_68;
  undefined8 *local_48;
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined8 *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar5 = 0;
  local_30 = (undefined8 *)0x0;
  local_28._0_4_ = 1;
  FUN_1447de2c0(&local_30,1,0);
  puVar2 = local_30;
  *local_30 = 0;
  local_30[1] = param_1 + 0x50;
  local_48 = local_30;
  local_30 = (undefined8 *)0x0;
  lVar3 = (longlong)(int)local_28;
  local_40 = (int)local_28;
  local_3c = local_28._4_4_;
  local_28 = 0;
  local_38 = 0;
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)((longlong)puVar2 + lVar4 + 8);
      if (lVar1 == 0) {
        piVar6 = (int *)(*(longlong *)((longlong)puVar2 + lVar4) + 0x18);
      }
      else {
        piVar6 = (int *)(lVar1 + 8);
      }
      iVar5 = iVar5 + *piVar6;
      lVar4 = lVar4 + 0x10;
      local_38 = iVar5;
    } while (lVar3 * 0x10 != lVar4);
  }
  FUN_140f62150(local_78,&local_48);
  if (local_68 != 0) {
    do {
      FUN_140a1e69e(local_78);
    } while (local_68 != 0);
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e12ca2 FUN_146e12ca2 body=271 status=ok
// SIG undefined FUN_146e12ca2(void)

void FUN_146e12ca2(undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  longlong local_68;
  undefined8 *local_48;
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined8 *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar5 = 0;
  local_30 = (undefined8 *)0x0;
  local_28._0_4_ = 1;
  FUN_1447de2c0(&local_30,1,0);
  puVar2 = local_30;
  *local_30 = 0;
  local_30[1] = param_1;
  local_48 = local_30;
  local_30 = (undefined8 *)0x0;
  lVar3 = (longlong)(int)local_28;
  local_40 = (int)local_28;
  local_3c = local_28._4_4_;
  local_28 = 0;
  local_38 = 0;
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)((longlong)puVar2 + lVar4 + 8);
      if (lVar1 == 0) {
        piVar6 = (int *)(*(longlong *)((longlong)puVar2 + lVar4) + 0x18);
      }
      else {
        piVar6 = (int *)(lVar1 + 8);
      }
      iVar5 = iVar5 + *piVar6;
      lVar4 = lVar4 + 0x10;
      local_38 = iVar5;
    } while (lVar3 * 0x10 != lVar4);
  }
  FUN_140f62150(local_78,&local_48);
  if (local_68 != 0) {
    do {
      FUN_140a1e69e(local_78);
    } while (local_68 != 0);
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e12db2 FUN_146e12db2 body=271 status=ok
// SIG undefined FUN_146e12db2(void)

void FUN_146e12db2(undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  longlong local_68;
  undefined8 *local_48;
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined8 *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar5 = 0;
  local_30 = (undefined8 *)0x0;
  local_28._0_4_ = 1;
  FUN_1447de2c0(&local_30,1,0);
  puVar2 = local_30;
  *local_30 = 0;
  local_30[1] = param_1;
  local_48 = local_30;
  local_30 = (undefined8 *)0x0;
  lVar3 = (longlong)(int)local_28;
  local_40 = (int)local_28;
  local_3c = local_28._4_4_;
  local_28 = 0;
  local_38 = 0;
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)((longlong)puVar2 + lVar4 + 8);
      if (lVar1 == 0) {
        piVar6 = (int *)(*(longlong *)((longlong)puVar2 + lVar4) + 0x18);
      }
      else {
        piVar6 = (int *)(lVar1 + 8);
      }
      iVar5 = iVar5 + *piVar6;
      lVar4 = lVar4 + 0x10;
      local_38 = iVar5;
    } while (lVar3 * 0x10 != lVar4);
  }
  FUN_140f62150(local_78,&local_48);
  if (local_68 != 0) {
    do {
      FUN_140a1e69e(local_78);
    } while (local_68 != 0);
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e12ec2 FUN_146e12ec2 body=275 status=ok
// SIG undefined FUN_146e12ec2(void)

void FUN_146e12ec2(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  longlong local_68;
  undefined8 *local_48;
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined8 *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar5 = 0;
  local_30 = (undefined8 *)0x0;
  local_28._0_4_ = 1;
  FUN_1447de2c0(&local_30,1,0);
  puVar2 = local_30;
  *local_30 = 0;
  local_30[1] = param_1 + 0x50;
  local_48 = local_30;
  local_30 = (undefined8 *)0x0;
  lVar3 = (longlong)(int)local_28;
  local_40 = (int)local_28;
  local_3c = local_28._4_4_;
  local_28 = 0;
  local_38 = 0;
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)((longlong)puVar2 + lVar4 + 8);
      if (lVar1 == 0) {
        piVar6 = (int *)(*(longlong *)((longlong)puVar2 + lVar4) + 0x18);
      }
      else {
        piVar6 = (int *)(lVar1 + 8);
      }
      iVar5 = iVar5 + *piVar6;
      lVar4 = lVar4 + 0x10;
      local_38 = iVar5;
    } while (lVar3 * 0x10 != lVar4);
  }
  FUN_140f62150(local_78,&local_48);
  if (local_68 != 0) {
    do {
      FUN_140a1e69e(local_78);
    } while (local_68 != 0);
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e12fd6 FUN_146e12fd6 body=948 status=ok
// SIG undefined FUN_146e12fd6(void)

void FUN_146e12fd6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  float fVar12;
  undefined1 auStack_158 [32];
  undefined1 **local_138;
  longlong *local_130;
  undefined1 *local_128;
  longlong *local_120;
  longlong local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
  undefined8 *local_d8;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  plVar1 = (longlong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) < 0) {
    FUN_1401adc10(plVar1,0);
  }
  if ((*(int *)(param_1 + 0x2c) != 0) &&
     ((lVar11 = *(longlong *)(param_1 + 0x20), lVar11 == 0 ||
      (*(int *)(lVar11 + 8) != *(int *)(lVar11 + 0x34))))) {
    local_98 = 0;
    uStack_90 = 0;
    fVar12 = *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x18);
    local_a8 = param_2[5];
    local_a0 = (undefined4)param_2[6];
    if (lVar11 == 0) {
      FUN_146e1338c(&local_98);
      if (0 < *(int *)(param_1 + 0x2c)) {
        iVar10 = 0;
        do {
          uVar6 = uStack_90;
          iVar9 = *(int *)(param_1 + 0x28);
          lVar11 = (longlong)(int)uStack_90;
          uVar8 = (int)uStack_90 + 1;
          uStack_90 = CONCAT44(uStack_90._4_4_,uVar8);
          if (uStack_90._4_4_ < uVar8) {
            FUN_146e1c6a6(&local_98,uVar6 & 0xffffffff);
          }
          *(longlong **)(local_98 + lVar11 * 0x10) = &local_a8;
          *(int *)(local_98 + 8 + lVar11 * 0x10) = iVar9 + iVar10;
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(param_1 + 0x2c));
      }
    }
    else {
      local_130 = param_2;
      FUN_146e1338c(&local_98,*(int *)(lVar11 + 8) - *(int *)(lVar11 + 0x34));
      plVar4 = *(longlong **)(param_1 + 0x20);
      plVar2 = plVar4 + 2;
      local_80 = 0x100000000;
      local_70 = 0xffffffff;
      local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
      iVar10 = 0;
      local_78 = plVar2;
      if ((int)plVar4[5] != 0) {
        FUN_1449c0562(&local_80);
        iVar10 = (int)plVar4[5];
      }
      uStack_e0 = local_70;
      uVar7 = uStack_e0;
      local_d8 = local_68;
      uStack_f0 = local_80;
      local_e8 = local_78;
      uStack_e0._4_4_ = (int)((ulonglong)local_70 >> 0x20);
      iVar9 = uStack_e0._4_4_;
      local_f8 = plVar4;
      if ((uStack_e0._4_4_ != iVar10) || (param_2 = local_130, local_78 != plVar2)) {
        do {
          uStack_e0 = uVar7;
          uVar6 = uStack_90;
          iVar3 = *(int *)(param_1 + 0x28);
          iVar9 = *(int *)(*local_f8 + (longlong)iVar9 * 0xc);
          lVar11 = (longlong)(int)uStack_90;
          uVar8 = (int)uStack_90 + 1;
          uStack_90 = CONCAT44(uStack_90._4_4_,uVar8);
          if (uStack_90._4_4_ < uVar8) {
            FUN_146e1c6a6(&local_98,uVar6 & 0xffffffff);
          }
          *(longlong **)(local_98 + lVar11 * 0x10) = &local_a8;
          *(int *)(local_98 + 8 + lVar11 * 0x10) = iVar3 + iVar9;
          uStack_e0 = CONCAT44(uStack_e0._4_4_,(uint)uStack_e0 & ~uStack_f0._4_4_);
          FUN_1449c0562(&uStack_f0);
          param_2 = local_130;
          iVar9 = uStack_e0._4_4_;
          uVar7 = uStack_e0;
        } while (local_f8 != plVar4 || (local_e8 != plVar2 || uStack_e0._4_4_ != iVar10));
      }
    }
    local_e8 = (longlong *)0x0;
    uStack_e0 = 0;
    local_f8 = (longlong *)0x0;
    uStack_f0 = 0;
    local_d8 = (undefined8 *)0x0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = fVar12;
    fStack_cc = fVar12;
    fStack_c8 = fVar12;
    fStack_c4 = fVar12;
    FUN_1429d5c98(&local_f8,&local_98);
    puVar5 = *(undefined8 **)(param_1 + 0x30);
    if (puVar5 == (undefined8 *)0x0) {
      local_108 = 0;
      local_100 = 0;
    }
    else {
      local_108 = *puVar5;
      local_100 = *(undefined4 *)(puVar5 + 1);
    }
    local_68 = &local_108;
    local_120 = &local_80;
    local_70 = CONCAT44(local_70._4_4_,fVar12 * fVar12);
    local_138 = &local_128;
    local_128 = &LAB_146e1c80e;
    local_80 = param_1;
    local_78 = param_2;
    FUN_146d8c244(&local_f8,&local_118,1,(int)uStack_90 * 3);
    if (plVar1 == &local_118) {
      if (local_118 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 8) = local_118;
      local_118 = 0;
      *(undefined4 *)(param_1 + 0x10) = local_110;
      *(undefined4 *)(param_1 + 0x14) = local_10c;
    }
    FUN_146d8c34e(&local_f8);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e1338c FUN_146e1338c body=41 status=ok
// SIG undefined FUN_146e1338c(void)

void FUN_146e1338c(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_146e1c646();
  return;
}



// FUNCTION 146e133b6 FUN_146e133b6 body=977 status=ok
// SIG undefined FUN_146e133b6(void)

void FUN_146e133b6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  undefined1 auStack_158 [32];
  undefined1 **local_138;
  longlong *local_130;
  undefined1 *local_128;
  longlong *local_120;
  longlong local_118;
  undefined4 local_110;
  undefined4 local_10c;
  longlong local_108;
  undefined4 local_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  plVar1 = (longlong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) < 0) {
    FUN_1401adc10(plVar1,0);
  }
  if ((*(int *)(param_1 + 0x2c) != 0) &&
     ((lVar10 = *(longlong *)(param_1 + 0x20), lVar10 == 0 ||
      (*(int *)(lVar10 + 8) != *(int *)(lVar10 + 0x34))))) {
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = (longlong)(int)param_2[2] * 0xc + *(longlong *)(param_2[1] + 0x28);
    fVar11 = *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x18);
    local_a0 = *(undefined4 *)((longlong)param_2 + 0x14);
    if (lVar10 == 0) {
      FUN_146e1338c(&local_98);
      if (0 < *(int *)(param_1 + 0x2c)) {
        iVar9 = 0;
        do {
          uVar5 = uStack_90;
          iVar8 = *(int *)(param_1 + 0x28);
          lVar10 = (longlong)(int)uStack_90;
          uVar7 = (int)uStack_90 + 1;
          uStack_90 = CONCAT44(uStack_90._4_4_,uVar7);
          if (uStack_90._4_4_ < uVar7) {
            FUN_146e1c6a6(&local_98,uVar5 & 0xffffffff);
          }
          *(longlong **)(local_98 + lVar10 * 0x10) = &local_a8;
          *(int *)(local_98 + 8 + lVar10 * 0x10) = iVar8 + iVar9;
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)(param_1 + 0x2c));
      }
    }
    else {
      local_130 = param_2;
      FUN_146e1338c(&local_98,*(int *)(lVar10 + 8) - *(int *)(lVar10 + 0x34));
      plVar4 = *(longlong **)(param_1 + 0x20);
      plVar2 = plVar4 + 2;
      local_80 = 0x100000000;
      local_70 = 0xffffffff;
      local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);
      iVar9 = 0;
      local_78 = plVar2;
      if ((int)plVar4[5] != 0) {
        FUN_1449c0562(&local_80);
        iVar9 = (int)plVar4[5];
      }
      uStack_e0 = local_70;
      uVar6 = uStack_e0;
      local_d8 = local_68;
      uStack_f0 = local_80;
      local_e8 = local_78;
      uStack_e0._4_4_ = (int)((ulonglong)local_70 >> 0x20);
      iVar8 = uStack_e0._4_4_;
      local_f8 = plVar4;
      if ((uStack_e0._4_4_ != iVar9) || (param_2 = local_130, local_78 != plVar2)) {
        do {
          uStack_e0 = uVar6;
          uVar5 = uStack_90;
          iVar3 = *(int *)(param_1 + 0x28);
          iVar8 = *(int *)(*local_f8 + (longlong)iVar8 * 0xc);
          lVar10 = (longlong)(int)uStack_90;
          uVar7 = (int)uStack_90 + 1;
          uStack_90 = CONCAT44(uStack_90._4_4_,uVar7);
          if (uStack_90._4_4_ < uVar7) {
            FUN_146e1c6a6(&local_98,uVar5 & 0xffffffff);
          }
          *(longlong **)(local_98 + lVar10 * 0x10) = &local_a8;
          *(int *)(local_98 + 8 + lVar10 * 0x10) = iVar3 + iVar8;
          uStack_e0 = CONCAT44(uStack_e0._4_4_,(uint)uStack_e0 & ~uStack_f0._4_4_);
          FUN_1449c0562(&uStack_f0);
          param_2 = local_130;
          iVar8 = uStack_e0._4_4_;
          uVar6 = uStack_e0;
        } while (local_f8 != plVar4 || (local_e8 != plVar2 || uStack_e0._4_4_ != iVar9));
      }
    }
    local_e8 = (longlong *)0x0;
    uStack_e0 = 0;
    local_f8 = (longlong *)0x0;
    uStack_f0 = 0;
    local_d8 = (longlong *)0x0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = fVar11;
    fStack_cc = fVar11;
    fStack_c8 = fVar11;
    fStack_c4 = fVar11;
    FUN_1429d5c98(&local_f8,&local_98);
    if (*(longlong **)(param_1 + 0x30) == (longlong *)0x0) {
      local_108 = 0;
      local_100 = 0;
    }
    else {
      local_100 = *(undefined4 *)((longlong)param_2 + 0x14);
      local_108 = (longlong)(int)param_2[2] * 0xc + **(longlong **)(param_1 + 0x30);
    }
    local_68 = &local_108;
    local_120 = &local_80;
    local_70 = CONCAT44(local_70._4_4_,fVar11 * fVar11);
    local_138 = &local_128;
    local_128 = &LAB_146e1c8a8;
    local_80 = param_1;
    local_78 = param_2;
    FUN_146d8c244(&local_f8,&local_118,1,(int)uStack_90 * 3);
    if (plVar1 == &local_118) {
      if (local_118 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 8) = local_118;
      local_118 = 0;
      *(undefined4 *)(param_1 + 0x10) = local_110;
      *(undefined4 *)(param_1 + 0x14) = local_10c;
    }
    FUN_146d8c34e(&local_f8);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e13788 FUN_146e13788 body=483 status=ok
// SIG undefined FUN_146e13788(void)

void FUN_146e13788(longlong param_1,longlong param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    fVar11 = *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x18);
    piVar6 = *(int **)(param_1 + 8);
    piVar1 = piVar6 + (longlong)*(int *)(param_1 + 0x10) * 2;
    do {
      lVar10 = (longlong)piVar6[1];
      lVar5 = *(longlong *)(param_2 + 0xa8);
      lVar7 = (longlong)*piVar6 * 0x10;
      lVar9 = lVar10 * 0x10;
      fVar2 = *(float *)(lVar5 + 8 + lVar7);
      fVar12 = fVar2 - *(float *)(lVar5 + 8 + lVar9);
      fVar3 = *(float *)(lVar5 + 4 + lVar7);
      fVar13 = fVar3 - *(float *)(lVar5 + 4 + lVar9);
      fVar14 = *(float *)(lVar5 + lVar7) - *(float *)(lVar5 + lVar9);
      fVar16 = fVar12 * fVar12 + fVar14 * fVar14 + fVar13 * fVar13;
      if (fVar16 < fVar11 * fVar11) {
        fVar15 = *(float *)(*(longlong *)(param_2 + 0x90) + lVar10 * 4);
        fVar4 = *(float *)(*(longlong *)(param_2 + 0x90) + (longlong)*piVar6 * 4);
        fVar16 = SQRT(fVar16);
        fVar17 = (fVar15 + fVar4) * fVar16;
        fVar16 = (fVar16 - fVar11) * *(float *)(param_1 + 0x1c);
        fVar12 = (fVar12 * fVar16) / fVar17;
        fVar13 = (fVar13 * fVar16) / fVar17;
        fVar17 = (fVar14 * fVar16) / fVar17;
        if (0.0 < fVar4) {
          pfVar8 = (float *)(lVar7 + lVar5);
          *pfVar8 = *(float *)(lVar5 + lVar7) - fVar4 * fVar17;
          pfVar8[1] = fVar3 - fVar4 * fVar13;
          pfVar8[2] = fVar2 - fVar4 * fVar12;
          fVar15 = *(float *)(*(longlong *)(param_2 + 0x90) + lVar10 * 4);
        }
        if (0.0 < fVar15) {
          pfVar8 = (float *)(lVar5 + lVar9);
          *pfVar8 = fVar17 * fVar15 + *pfVar8;
          pfVar8[1] = fVar13 * fVar15 + pfVar8[1];
          pfVar8[2] = fVar12 * fVar15 + pfVar8[2];
        }
      }
      piVar6 = piVar6 + 2;
    } while (piVar6 != piVar1);
  }
  return;
}



// FUNCTION 146e1396c FUN_146e1396c body=512 status=ok
// SIG undefined FUN_146e1396c(void)

void FUN_146e1396c(longlong param_1,longlong param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    fVar14 = *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x18);
    piVar8 = *(int **)(param_1 + 8);
    piVar1 = piVar8 + (longlong)*(int *)(param_1 + 0x10) * 2;
    do {
      iVar5 = piVar8[1];
      lVar11 = (longlong)*piVar8 + (longlong)*(int *)(param_2 + 0x10);
      lVar13 = (longlong)*(int *)(param_2 + 0x10) + (longlong)iVar5;
      lVar6 = *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8);
      lVar9 = lVar11 * 0x10;
      lVar12 = lVar13 * 0x10;
      fVar2 = *(float *)(lVar6 + 8 + lVar9);
      fVar15 = fVar2 - *(float *)(lVar6 + 8 + lVar12);
      fVar3 = *(float *)(lVar6 + 4 + lVar9);
      fVar16 = fVar3 - *(float *)(lVar6 + 4 + lVar12);
      fVar17 = *(float *)(lVar6 + lVar9) - *(float *)(lVar6 + lVar12);
      fVar19 = fVar15 * fVar15 + fVar17 * fVar17 + fVar16 * fVar16;
      if (fVar19 < fVar14 * fVar14) {
        lVar7 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x90);
        fVar18 = *(float *)(lVar7 + lVar13 * 4);
        fVar4 = *(float *)(lVar7 + lVar11 * 4);
        fVar19 = SQRT(fVar19);
        fVar20 = (fVar18 + fVar4) * fVar19;
        fVar19 = (fVar19 - fVar14) * *(float *)(param_1 + 0x1c);
        fVar15 = (fVar15 * fVar19) / fVar20;
        fVar16 = (fVar16 * fVar19) / fVar20;
        fVar20 = (fVar17 * fVar19) / fVar20;
        if (0.0 < fVar4) {
          pfVar10 = (float *)(lVar9 + lVar6);
          *pfVar10 = *(float *)(lVar6 + lVar9) - fVar4 * fVar20;
          pfVar10[1] = fVar3 - fVar4 * fVar16;
          pfVar10[2] = fVar2 - fVar4 * fVar15;
          fVar18 = *(float *)(*(longlong *)(*(longlong *)(param_2 + 8) + 0x90) +
                             ((longlong)*(int *)(param_2 + 0x10) + (longlong)iVar5) * 4);
        }
        if (0.0 < fVar18) {
          pfVar10 = (float *)(lVar6 + lVar12);
          *pfVar10 = fVar20 * fVar18 + *pfVar10;
          pfVar10[1] = fVar16 * fVar18 + pfVar10[1];
          pfVar10[2] = fVar15 * fVar18 + pfVar10[2];
        }
      }
      piVar8 = piVar8 + 2;
    } while (piVar8 != piVar1);
  }
  return;
}



// FUNCTION 146e13b6c FUN_146e13b6c body=63 status=ok
// SIG undefined FUN_146e13b6c(void)

void FUN_146e13b6c(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  *param_1 = &PTR_FUN_149f5cdc0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = param_6;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_7;
  param_1[4] = param_4;
  *(undefined4 *)(param_1 + 5) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = param_3;
  param_1[6] = param_5;
  return;
}



// FUNCTION 146e13bac FUN_146e13bac body=65 status=ok
// SIG undefined FUN_146e13bac(void)

void FUN_146e13bac(longlong param_1,longlong param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(*(longlong *)(param_2 + 0x18) + (longlong)*(int *)(param_1 + 0x38) * 0xc);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x18) = fVar1;
  fVar1 = *(float *)(*(longlong *)(param_2 + 0x18) + (longlong)*(int *)(param_1 + 0x3c) * 0xc);
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x1c) = fVar1;
  return;
}



// FUNCTION 146e13bed FUN_146e13bed body=318 status=ok
// SIG undefined FUN_146e13bed(void)

void FUN_146e13bed(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
                  uint param_6,uint param_7)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  double dVar4;
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong local_88;
  longlong local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = param_2;
  local_88 = param_3;
  local_80 = param_4;
  if (0 < (int)param_6) {
    uVar3 = (ulonglong)param_6;
    uVar2 = 0;
    do {
      if ((param_7 >> ((uint)uVar2 & 0x1f) & 1) != 0) {
        local_68 = (double)*(float *)(param_2 + (ulonglong)(param_6 * 2) * 4 + uVar2 * 4);
        local_70 = (double)*(float *)(param_2 + uVar3 * 4 + uVar2 * 4);
        local_78 = (double)*(float *)(local_90 + uVar2 * 4);
        plVar1 = *(longlong **)
                  (*(longlong *)(*(longlong *)(param_1 + 8) + 0x60) +
                  ((longlong)*(int *)(param_1 + 0x10) + (longlong)param_5) * 8);
        dVar4 = (double)(**(code **)(*plVar1 + 0x70))(plVar1,&local_78,&local_60);
        *(float *)(local_80 + uVar2 * 4) = (float)dVar4;
        *(float *)(local_88 + uVar2 * 4) = (float)local_60;
        *(float *)(param_3 + uVar3 * 4 + uVar2 * 4) = (float)local_58;
        *(float *)(param_3 + (ulonglong)(param_6 * 2) * 4 + uVar2 * 4) = (float)local_50;
      }
      uVar2 = uVar2 + 1;
    } while (uVar3 != uVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e13d2c FUN_146e13d2c body=567 status=ok
// SIG undefined FUN_146e13d2c(void)

void FUN_146e13d2c(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,int param_6,float param_7,uint param_8,uint param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  double dVar8;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f0 = param_4;
  local_e8 = param_2;
  local_e0 = param_3;
  if (0 < (int)param_8) {
    uVar7 = (ulonglong)param_8;
    local_d8 = param_3 + (ulonglong)(param_8 * 2) * 4;
    uVar6 = 0;
    do {
      if ((param_9 >> ((uint)uVar6 & 0x1f) & 1) != 0) {
        fVar1 = *(float *)(local_e8 + uVar6 * 4);
        fVar2 = *(float *)(param_2 + uVar7 * 4 + uVar6 * 4);
        fVar3 = *(float *)(param_2 + (ulonglong)(param_8 * 2) * 4 + uVar6 * 4);
        *(int *)(param_5 + uVar6 * 4) = param_6;
        plVar4 = *(longlong **)
                  (*(longlong *)(*(longlong *)(param_1 + 8) + 0x60) +
                  ((longlong)*(int *)(param_1 + 0x10) + (longlong)param_6) * 8);
        if ((plVar4 == (longlong *)0x0) || (*(char *)((longlong)plVar4 + 0x1c) != '&')) {
          local_a8 = (double)fVar3;
          dStack_b0 = (double)fVar2;
          local_b8 = (double)fVar1;
          dVar8 = (double)(**(code **)(*plVar4 + 0x70))(plVar4,&local_b8,&local_88);
          *(float *)(local_f0 + uVar6 * 4) = (float)dVar8;
        }
        else {
          local_b8 = -NAN;
          dStack_b0 = -NAN;
          local_c0 = (double)fVar3;
          local_c8 = (double)fVar2;
          local_d0 = (double)fVar1;
          local_f8 = 0;
          dVar8 = (double)FUN_146e420d2(plVar4,&local_d0,&local_88,&local_b8);
          *(float *)(local_f0 + uVar6 * 4) = (float)dVar8;
          if ((float)dVar8 < param_7) {
            iVar5 = FUN_146df7e64(&local_b8,plVar4 + 0xf);
            if (iVar5 != -1) {
              *(undefined4 *)(param_5 + uVar6 * 4) =
                   *(undefined4 *)(plVar4[0x28] + (longlong)iVar5 * 4);
            }
          }
        }
        *(float *)(local_e0 + uVar6 * 4) = (float)local_88;
        *(float *)(param_3 + uVar7 * 4 + uVar6 * 4) = (float)local_80;
        *(float *)(local_d8 + uVar6 * 4) = (float)local_78;
      }
      uVar6 = uVar6 + 1;
    } while (uVar7 != uVar6);
  }
  if ((local_70 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e13f64 FUN_146e13f64 body=191 status=ok
// SIG undefined FUN_146e13f64(void)

void FUN_146e13f64(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = (longlong)*(int *)(param_1 + 0x6c);
  if ((lVar2 != -1) && ((*(byte *)(*(longlong *)(param_2 + 0x48) + lVar2) & 0x92) == 0x82)) {
    *(float *)(param_1 + 8) =
         *(float *)(param_1 + 0x68) * *(float *)(*(longlong *)(param_2 + 0x18) + lVar2 * 0xc);
  }
  lVar2 = (longlong)*(int *)(param_1 + 0x70);
  if ((lVar2 != -1) && ((*(byte *)(*(longlong *)(param_2 + 0x48) + lVar2) & 0x92) == 0x82)) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + lVar2 * 0xc);
  }
  lVar2 = (longlong)*(int *)(param_1 + 0x74);
  if ((lVar2 != -1) && ((*(byte *)(*(longlong *)(param_2 + 0x48) + lVar2) & 0x92) == 0x82)) {
    uVar1 = FUN_1429913ec(param_2,lVar2,param_2 + 0x18);
    *(undefined1 *)(param_1 + 0x10) = uVar1;
  }
  lVar2 = (longlong)*(int *)(param_1 + 0x78);
  if ((lVar2 != -1) && ((*(byte *)(*(longlong *)(param_2 + 0x48) + lVar2) & 0x92) == 0x82)) {
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + lVar2 * 0xc);
  }
  return;
}



// FUNCTION 146e14024 FUN_146e14024 body=156 status=ok
// SIG undefined FUN_146e14024(void)

void FUN_146e14024(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (longlong)*(int *)(param_2 + 0x10);
  lVar2 = lVar1 * 0xc + *(longlong *)*param_1;
  if (*(int *)(param_1 + 2) == *(int *)((longlong)param_1 + 0x1c)) {
    FUN_141b71c40(lVar1 * 0x10 + *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8),lVar2,param_1[1],
                  *(float *)(param_1 + 4) * *(float *)((longlong)param_1 + 0x24),
                  *(float *)(param_1 + 5) * *(float *)(param_1 + 4),*(undefined4 *)(param_1 + 3),
                  *(int *)(param_1 + 2));
  }
  else {
    FUN_141b71d40(lVar1 * 0x10 + *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8),lVar2,
                  *(float *)((longlong)param_1 + 0x24) * *(float *)(param_1 + 4),
                  *(undefined4 *)(param_1 + 3),*(int *)((longlong)param_1 + 0x1c));
  }
  return;
}



// FUNCTION 146e140c0 FUN_146e140c0 body=378 status=ok
// SIG undefined FUN_146e140c0(void)

void FUN_146e140c0(undefined8 *param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)*param_1;
  uVar5 = *(undefined8 *)param_1[1];
  iVar2 = *(int *)(param_1 + 3);
  iVar3 = *(int *)((longlong)param_1 + 0x34);
  if (iVar2 == iVar3) {
    if (*(int *)(param_1 + 5) == iVar2) {
      fVar1 = *(float *)(param_1 + 7);
      FUN_141b710b0(*(undefined8 *)(param_2 + 0xa8),uVar4,uVar5,param_1[4],param_1[2],
                    fVar1 * *(float *)((longlong)param_1 + 0x44),*(float *)(param_1 + 9) * fVar1,
                    *(float *)((longlong)param_1 + 0x3c) * fVar1,*(float *)(param_1 + 8) * fVar1,
                    *(undefined4 *)(param_1 + 6),iVar2);
    }
    else {
      fVar1 = *(float *)(param_1 + 7);
      FUN_141b71270(*(undefined8 *)(param_2 + 0xa8),uVar4,uVar5,param_1[2],
                    fVar1 * *(float *)((longlong)param_1 + 0x44),
                    *(float *)((longlong)param_1 + 0x3c) * fVar1,*(float *)(param_1 + 8) * fVar1,
                    *(undefined4 *)(param_1 + 6),iVar2);
    }
  }
  else if (*(int *)(param_1 + 5) == iVar3) {
    fVar1 = *(float *)(param_1 + 7);
    FUN_141b70f50(*(undefined8 *)(param_2 + 0xa8),uVar4,uVar5,param_1[4],
                  fVar1 * *(float *)((longlong)param_1 + 0x44),*(float *)(param_1 + 9) * fVar1,
                  *(float *)((longlong)param_1 + 0x3c) * fVar1,*(undefined4 *)(param_1 + 6),iVar3);
  }
  else {
    FUN_141b713d0(*(undefined8 *)(param_2 + 0xa8),uVar4,uVar5,
                  *(float *)(param_1 + 7) * *(float *)((longlong)param_1 + 0x44),
                  *(float *)((longlong)param_1 + 0x3c) * *(float *)(param_1 + 7),
                  *(undefined4 *)(param_1 + 6),iVar3);
  }
  return;
}



// FUNCTION 146e1423a FUN_146e1423a body=448 status=ok
// SIG undefined FUN_146e1423a(void)

void FUN_146e1423a(undefined8 *param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar4 = (longlong)*(int *)(param_2 + 0x10);
  lVar5 = *(longlong *)*param_1 + lVar4 * 0xc;
  lVar6 = lVar4 * 0xc + *(longlong *)param_1[1];
  iVar2 = *(int *)(param_1 + 3);
  iVar3 = *(int *)((longlong)param_1 + 0x34);
  if (iVar2 == iVar3) {
    if (*(int *)(param_1 + 5) == iVar2) {
      fVar1 = *(float *)(param_1 + 7);
      FUN_141b710b0(lVar4 * 0x10 + *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8),lVar5,lVar6,
                    param_1[4],param_1[2],fVar1 * *(float *)((longlong)param_1 + 0x44),
                    *(float *)(param_1 + 9) * fVar1,*(float *)((longlong)param_1 + 0x3c) * fVar1,
                    *(float *)(param_1 + 8) * fVar1,*(undefined4 *)(param_1 + 6),iVar2);
    }
    else {
      fVar1 = *(float *)(param_1 + 7);
      FUN_141b71270(lVar4 * 0x10 + *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8),lVar5,lVar6,
                    param_1[2],fVar1 * *(float *)((longlong)param_1 + 0x44),
                    *(float *)((longlong)param_1 + 0x3c) * fVar1,*(float *)(param_1 + 8) * fVar1,
                    *(undefined4 *)(param_1 + 6),iVar2);
    }
  }
  else if (*(int *)(param_1 + 5) == iVar3) {
    fVar1 = *(float *)(param_1 + 7);
    FUN_141b70f50(lVar4 * 0x10 + *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8),lVar5,lVar6,
                  param_1[4],fVar1 * *(float *)((longlong)param_1 + 0x44),
                  *(float *)(param_1 + 9) * fVar1,*(float *)((longlong)param_1 + 0x3c) * fVar1,
                  *(undefined4 *)(param_1 + 6),iVar3);
  }
  else {
    FUN_141b713d0(lVar4 * 0x10 + *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8),lVar5,lVar6,
                  *(float *)(param_1 + 7) * *(float *)((longlong)param_1 + 0x44),
                  *(float *)((longlong)param_1 + 0x3c) * *(float *)(param_1 + 7),
                  *(undefined4 *)(param_1 + 6),iVar3);
  }
  return;
}



// FUNCTION 146e143fa FUN_146e143fa body=448 status=ok
// SIG undefined FUN_146e143fa(void)

void FUN_146e143fa(undefined8 *param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar4 = (longlong)*(int *)(param_2 + 0x10);
  lVar5 = *(longlong *)*param_1 + lVar4 * 0xc;
  lVar6 = lVar4 * 0xc + *(longlong *)param_1[1];
  iVar2 = *(int *)(param_1 + 3);
  iVar3 = *(int *)((longlong)param_1 + 0x34);
  if (iVar2 == iVar3) {
    if (*(int *)(param_1 + 5) == iVar2) {
      fVar1 = *(float *)(param_1 + 7);
      FUN_141b71750(lVar4 * 0x10 + *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8),lVar5,lVar6,
                    param_1[4],param_1[2],fVar1 * *(float *)((longlong)param_1 + 0x44),
                    *(float *)(param_1 + 9) * fVar1,*(float *)((longlong)param_1 + 0x3c) * fVar1,
                    *(float *)(param_1 + 8) * fVar1,*(undefined4 *)(param_1 + 6),iVar2);
    }
    else {
      fVar1 = *(float *)(param_1 + 7);
      FUN_141b71910(lVar4 * 0x10 + *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8),lVar5,lVar6,
                    param_1[2],fVar1 * *(float *)((longlong)param_1 + 0x44),
                    *(float *)((longlong)param_1 + 0x3c) * fVar1,*(float *)(param_1 + 8) * fVar1,
                    *(undefined4 *)(param_1 + 6),iVar2);
    }
  }
  else if (*(int *)(param_1 + 5) == iVar3) {
    fVar1 = *(float *)(param_1 + 7);
    FUN_141b715f0(lVar4 * 0x10 + *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8),lVar5,lVar6,
                  param_1[4],fVar1 * *(float *)((longlong)param_1 + 0x44),
                  *(float *)(param_1 + 9) * fVar1,*(float *)((longlong)param_1 + 0x3c) * fVar1,
                  *(undefined4 *)(param_1 + 6),iVar3);
  }
  else {
    FUN_141b71a70(lVar4 * 0x10 + *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8),lVar5,lVar6,
                  *(float *)(param_1 + 7) * *(float *)((longlong)param_1 + 0x44),
                  *(float *)((longlong)param_1 + 0x3c) * *(float *)(param_1 + 7),
                  *(undefined4 *)(param_1 + 6),iVar3);
  }
  return;
}



// FUNCTION 146e145ba FUN_146e145ba body=639 status=ok
// SIG undefined FUN_146e145ba(void)

void FUN_146e145ba(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 auStack_b8 [32];
  int local_98;
  longlong local_88 [3];
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (100 < *(int *)(param_1 + 0x10)) {
    plVar1 = (longlong *)(param_1 + 8);
    local_98 = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x28);
    FUN_146d8e3b8(&local_58,plVar1,param_2);
    local_68 = 0;
    uStack_60 = 0;
    local_88[2] = 0;
    uStack_70 = 0;
    local_88[0] = 0;
    local_88[1] = 0;
    FUN_140bfb9f0(&local_68,*(undefined4 *)(param_1 + 0x10),1);
    FUN_144a12820(local_88 + 2,*(undefined4 *)(param_1 + 0x20),1);
    FUN_144a127d2(local_88,*(undefined4 *)(param_1 + 0x10),1);
    plVar2 = (longlong *)(param_1 + 0x78);
    FUN_144a9ff88(plVar2);
    if ((longlong)local_50 == 0) {
      uVar8 = 0;
    }
    else {
      plVar10 = local_58 + (longlong)local_50 * 2;
      lVar9 = 0;
      plVar12 = local_58;
      do {
        iVar3 = *(int *)(param_1 + 0x80);
        uVar6 = iVar3 + 1;
        *(uint *)(param_1 + 0x80) = uVar6;
        if (*(uint *)(param_1 + 0x84) < uVar6) {
          FUN_1446f48e2(plVar2);
        }
        *(int *)(*plVar2 + (longlong)iVar3 * 4) = (int)lVar9;
        lVar5 = plVar12[1];
        if ((longlong)(int)lVar5 != 0) {
          lVar4 = *plVar12;
          lVar9 = (longlong)(int)lVar9;
          lVar7 = 0;
          do {
            lVar11 = (longlong)*(int *)(lVar4 + lVar7);
            *(undefined8 *)(local_68 + lVar9 * 8) = *(undefined8 *)(*plVar1 + lVar11 * 8);
            *(undefined4 *)(local_88[2] + lVar9 * 4) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0x18) + lVar11 * 4);
            *(int *)(local_88[0] + lVar11 * 4) = (int)lVar9;
            lVar9 = lVar9 + 1;
            lVar7 = lVar7 + 4;
          } while ((longlong)(int)lVar5 * 4 != lVar7);
        }
        uVar8 = (undefined4)lVar9;
        plVar12 = plVar12 + 2;
      } while (plVar12 != plVar10);
    }
    iVar3 = *(int *)(param_1 + 0x80);
    *(uint *)(param_1 + 0x80) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x84) < iVar3 + 1U) {
      FUN_1446f48e2(plVar2,iVar3);
    }
    *(undefined4 *)(*plVar2 + (longlong)iVar3 * 4) = uVar8;
    if (plVar1 != &local_68) {
      if (*(longlong *)(param_1 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 8) = local_68;
      local_68 = 0;
      *(undefined4 *)(param_1 + 0x10) = (undefined4)uStack_60;
      *(undefined4 *)(param_1 + 0x14) = uStack_60._4_4_;
      uStack_60 = 0;
    }
    if ((longlong *)(param_1 + 0x18) != local_88 + 2) {
      if (*(longlong *)(param_1 + 0x18) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x18) = local_88[2];
      local_88[2] = 0;
      *(undefined4 *)(param_1 + 0x20) = (undefined4)uStack_70;
      *(undefined4 *)(param_1 + 0x24) = uStack_70._4_4_;
      uStack_70 = 0;
    }
    FUN_141729db6(param_1 + 0x30,local_88);
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    if (local_88[2] != 0) {
      FUN_1400020a8();
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    FUN_144716727(local_58,local_50);
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e1483a FUN_146e1483a body=305 status=ok
// SIG undefined FUN_146e1483a(void)

void FUN_146e1483a(longlong param_1,longlong param_2,int param_3,undefined4 param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  float local_2c;
  float local_28;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = *(int *)(*(longlong *)(param_1 + 8) + (longlong)param_3 * 8);
  iVar3 = *(int *)(*(longlong *)(param_1 + 8) + 4 + (longlong)param_3 * 8);
  local_38 = param_4;
  FUN_146e1e790(param_1,&local_2c,param_2);
  lVar4 = *(longlong *)(param_2 + 8);
  iVar5 = *(int *)(param_2 + 0x10);
  lVar7 = (longlong)iVar2 + (longlong)iVar5;
  lVar6 = *(longlong *)(lVar4 + 0x90);
  fVar1 = *(float *)(lVar6 + lVar7 * 4);
  if (0.0 < fVar1) {
    lVar4 = *(longlong *)(lVar4 + 0xa8);
    lVar7 = lVar7 * 0x10;
    *(float *)(lVar4 + lVar7) = *(float *)(lVar4 + lVar7) - local_2c * fVar1;
    *(float *)(lVar4 + 4 + lVar7) = *(float *)(lVar4 + 4 + lVar7) - local_28 * fVar1;
    *(float *)(lVar4 + 8 + lVar7) = *(float *)(lVar4 + 8 + lVar7) - fVar1 * local_24;
    lVar4 = *(longlong *)(param_2 + 8);
    iVar5 = *(int *)(param_2 + 0x10);
    lVar6 = *(longlong *)(lVar4 + 0x90);
  }
  lVar7 = (longlong)iVar5 + (longlong)iVar3;
  fVar1 = *(float *)(lVar6 + lVar7 * 4);
  if (0.0 < fVar1) {
    lVar4 = *(longlong *)(lVar4 + 0xa8);
    lVar7 = lVar7 * 0x10;
    *(float *)(lVar4 + lVar7) = local_2c * fVar1 + *(float *)(lVar4 + lVar7);
    *(float *)(lVar4 + 4 + lVar7) = local_28 * fVar1 + *(float *)(lVar4 + 4 + lVar7);
    *(float *)(lVar4 + 8 + lVar7) = fVar1 * local_24 + *(float *)(lVar4 + 8 + lVar7);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e1496c FUN_146e1496c body=1736 status=ok
// SIG undefined FUN_146e1496c(void)

void FUN_146e1496c(longlong *param_1,longlong param_2,longlong *param_3,char param_4,
                  longlong *param_5,char param_6)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  char local_151;
  longlong *local_150;
  longlong *local_148;
  longlong *local_140;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  undefined4 local_120;
  uint uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  uint local_110;
  int iStack_10c;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 local_fc;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  uint local_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  int local_a8;
  undefined1 local_a0 [24];
  int local_88;
  int local_7c;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  plVar1 = param_1 + 0x53;
  *(undefined4 *)(param_1 + 0x54) = 0;
  local_151 = param_4;
  if (*(int *)((longlong)param_1 + 0x2a4) < 0) {
    FUN_146e1ea86(plVar1);
  }
  local_148 = param_1 + 0x55;
  *(undefined4 *)(param_1 + 0x56) = 0;
  if (*(int *)((longlong)param_1 + 0x2b4) < 0) {
    FUN_14481578e(local_148,0);
  }
  local_150 = param_1 + 0x57;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)((longlong)param_1 + 0x2c4) < 0) {
    FUN_14481578e(local_150,0);
  }
  local_140 = param_1 + 0x59;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  if (*(int *)((longlong)param_1 + 0x2d4) < 0) {
    FUN_14481578e(local_140,0);
  }
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  if (param_6 == '\0') {
    iVar14 = *(int *)(*param_1 + 8);
    if (iVar14 < 0) goto LAB_146e1502d;
    if (iVar14 != 0) {
      FUN_1405c2e9e(&local_e8);
    }
  }
  iVar14 = (int)param_5[1] - *(int *)((longlong)param_5 + 0x34);
  if (-1 < iVar14) {
    if ((int)uStack_f0._4_4_ < iVar14) {
      FUN_1405c2e9e(&local_f8);
    }
    FUN_146e1ea0e(plVar1,*(undefined4 *)(*param_1 + 8));
    iVar14 = *(int *)(*param_1 + 8);
    if (iVar14 < 0) {
LAB_146e1502d:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar14);
    }
    if (*(int *)((longlong)param_1 + 0x2b4) < iVar14) {
      FUN_14481578e(local_148);
    }
    iVar14 = (int)param_5[1] - *(int *)((longlong)param_5 + 0x34);
    if (-1 < iVar14) {
      if (*(int *)((longlong)param_1 + 0x2c4) < iVar14) {
        FUN_14481578e(local_150);
      }
      plVar7 = (longlong *)*param_1;
      plVar12 = plVar7;
      if (0 < (int)plVar7[1]) {
        local_130 = param_3 + 7;
        local_138 = param_5 + 7;
        uVar16 = 0;
        do {
          uVar10 = uStack_e0;
          uVar9 = uStack_f0;
          uVar13 = (uint)uVar16;
          if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
            plVar12 = (longlong *)param_3[8];
            if ((longlong *)param_3[8] == (longlong *)0x0) {
              plVar12 = local_130;
            }
            iVar14 = *(int *)((longlong)plVar12 +
                             (ulonglong)(uVar13 & (int)param_3[9] + 0x7fffffffU) * 4);
            if (iVar14 != -1) {
              do {
                if (uVar16 == *(uint *)(*param_3 + (longlong)iVar14 * 0xc)) goto LAB_146e14d6a;
                iVar14 = *(int *)(*param_3 + (longlong)iVar14 * 0xc + 4);
              } while (iVar14 != -1);
            }
          }
          piVar2 = (int *)(*plVar7 + uVar16 * 0xc);
          lVar15 = *(longlong *)(param_2 + 0x90);
          fVar4 = *(float *)(lVar15 + (longlong)*piVar2 * 4);
          if (((((fVar4 != 0.0) || (NAN(fVar4))) ||
               (fVar4 = *(float *)(lVar15 + (longlong)piVar2[1] * 4), fVar4 != 0.0)) ||
              ((NAN(fVar4) || (fVar4 = *(float *)(lVar15 + (longlong)piVar2[2] * 4), fVar4 != 0.0)))
              ) || (NAN(fVar4))) {
            if (param_6 == '\0') {
              uVar8 = (uint)uStack_e0;
              lVar15 = (longlong)(int)(uint)uStack_e0;
              uVar11 = (uint)uStack_e0 + 1;
              uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar11);
              if (uStack_e0._4_4_ < uVar11) {
                FUN_141087970(&local_e8,uVar10 & 0xffffffff);
              }
              *(int *)(local_e8 + 8 + lVar15 * 0xc) = piVar2[2];
              *(undefined8 *)(local_e8 + lVar15 * 0xc) = *(undefined8 *)piVar2;
              iVar14 = (int)param_1[0x56];
              *(uint *)(param_1 + 0x56) = iVar14 + 1U;
              if (*(uint *)((longlong)param_1 + 0x2b4) < iVar14 + 1U) {
                FUN_1446f48e2(local_148,iVar14);
              }
              *(uint *)(*local_148 + (longlong)iVar14 * 4) = uVar13;
              *(uint *)(*plVar1 + uVar16 * 4) =
                   *(uint *)(*plVar1 + uVar16 * 4) & 0xc0000000 | uVar8 & 0x3fffffff;
              lVar15 = *plVar1;
              uVar13 = *(uint *)(lVar15 + uVar16 * 4) & 0x3fffffff | 0x40000000;
              goto LAB_146e14cf2;
            }
          }
          else if (local_151 == '\0') {
            if ((int)param_5[1] != *(int *)((longlong)param_5 + 0x34)) {
              plVar12 = (longlong *)param_5[8];
              if ((longlong *)param_5[8] == (longlong *)0x0) {
                plVar12 = local_138;
              }
              iVar14 = *(int *)((longlong)plVar12 +
                               (ulonglong)(uVar13 & (int)param_5[9] + 0x7fffffffU) * 4);
              if (iVar14 != -1) {
                do {
                  if (uVar16 == *(uint *)(*param_5 + (longlong)iVar14 * 0xc)) goto LAB_146e14b89;
                  iVar14 = *(int *)(*param_5 + (longlong)iVar14 * 0xc + 4);
                } while (iVar14 != -1);
              }
            }
LAB_146e14d6a:
            puVar3 = (uint *)(*plVar1 + uVar16 * 4);
            *puVar3 = *puVar3 & 0x3fffffff;
          }
          else {
LAB_146e14b89:
            uVar8 = (uint)uStack_f0;
            lVar15 = (longlong)(int)(uint)uStack_f0;
            uVar11 = (uint)uStack_f0 + 1;
            uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar11);
            if (uStack_f0._4_4_ < uVar11) {
              FUN_141087970(&local_f8,uVar9 & 0xffffffff);
            }
            *(int *)(local_f8 + 8 + lVar15 * 0xc) = piVar2[2];
            *(undefined8 *)(local_f8 + lVar15 * 0xc) = *(undefined8 *)piVar2;
            iVar14 = (int)param_1[0x58];
            *(uint *)(param_1 + 0x58) = iVar14 + 1U;
            if (*(uint *)((longlong)param_1 + 0x2c4) < iVar14 + 1U) {
              FUN_1446f48e2(local_150,iVar14);
            }
            *(uint *)(*local_150 + (longlong)iVar14 * 4) = uVar13;
            *(uint *)(*plVar1 + uVar16 * 4) =
                 *(uint *)(*plVar1 + uVar16 * 4) & 0xc0000000 | uVar8 & 0x3fffffff;
            lVar15 = *plVar1;
            uVar13 = *(uint *)(lVar15 + uVar16 * 4) & 0x3fffffff | 0x80000000;
LAB_146e14cf2:
            *(uint *)(lVar15 + uVar16 * 4) = uVar13;
          }
          uVar16 = uVar16 + 1;
          plVar12 = (longlong *)*param_1;
        } while ((longlong)uVar16 < (longlong)(int)plVar12[1]);
      }
      FUN_1429e249a(plVar12,&local_100);
      local_168 = 0;
      FUN_140dc1be2(param_1 + 1,&local_e8,local_100,local_fc);
      local_168 = 0;
      FUN_140dc1be2(param_1 + 0x2a,&local_f8,local_100,local_fc);
      FUN_1400ba9f8(param_1 + 1,&local_b0);
      iVar14 = local_a8 - local_7c;
      if (-1 < iVar14) {
        if (*(int *)((longlong)param_1 + 0x2d4) < iVar14) {
          FUN_14481578e(local_140);
        }
        local_d0 = 0x100000000;
        local_c0 = 0xffffffff;
        iStack_bc = 0;
        uStack_b8 = 0;
        uStack_c8 = local_a0;
        if (local_88 == 0) {
          iVar14 = 0;
        }
        else {
          FUN_1449c0562(&local_d0);
          iVar14 = local_88;
        }
        uStack_108 = CONCAT44(uStack_b4,uStack_b8);
        local_110 = local_c0;
        iStack_10c = iStack_bc;
        local_120 = (undefined4)local_d0;
        uStack_11c = local_d0._4_4_;
        uStack_118 = (undefined4)uStack_c8;
        uStack_114 = uStack_c8._4_4_;
        local_128 = &local_b0;
        if ((iStack_bc != iVar14) || (uStack_c8 != local_a0)) {
          do {
            iVar5 = *(int *)(*local_128 + (longlong)iStack_10c * 0xc);
            if (0.0 < *(float *)(*(longlong *)(param_2 + 0x90) + (longlong)iVar5 * 4)) {
              iVar6 = (int)param_1[0x5a];
              *(uint *)(param_1 + 0x5a) = iVar6 + 1U;
              if (*(uint *)((longlong)param_1 + 0x2d4) < iVar6 + 1U) {
                FUN_1446f48e2(local_140,iVar6);
              }
              *(int *)(*local_140 + (longlong)iVar6 * 4) = iVar5;
            }
            local_110 = local_110 & ~uStack_11c;
            FUN_1449c0562(&local_120);
          } while (local_128 != &local_b0 ||
                   ((undefined1 *)CONCAT44(uStack_114,uStack_118) != local_a0 ||
                   iStack_10c != iVar14));
        }
        local_68 = 0;
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        FUN_1447a082e(&local_b0);
        if (local_f8 != 0) {
          FUN_1400020a8();
        }
        if (local_e8 != 0) {
          FUN_1400020a8();
        }
        if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar14);
}



// FUNCTION 146e15036 FUN_146e15036 body=118 status=ok
// SIG undefined FUN_146e15036(void)

void FUN_146e15036(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146e1eb54(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_146e1ebda(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146e150ae FUN_146e150ae body=91 status=ok
// SIG undefined FUN_146e150ae(void)

void FUN_146e150ae(longlong param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_146e19bec(param_1,0);
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  FUN_146e19c5d(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    FUN_146e19cda(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146e1510a FUN_146e1510a body=1763 status=ok
// SIG undefined FUN_146e1510a(void)

void FUN_146e1510a(longlong *param_1,longlong param_2,longlong *param_3,char param_4,
                  longlong *param_5,char param_6)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  char local_151;
  longlong *local_150;
  longlong *local_148;
  longlong *local_140;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  undefined4 local_120;
  uint uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  uint local_110;
  int iStack_10c;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 local_fc;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  uint local_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  int local_a8;
  undefined1 local_a0 [24];
  int local_88;
  int local_7c;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  plVar1 = param_1 + 0x53;
  *(undefined4 *)(param_1 + 0x54) = 0;
  local_151 = param_4;
  if (*(int *)((longlong)param_1 + 0x2a4) < 0) {
    FUN_146e1ea86(plVar1);
  }
  local_148 = param_1 + 0x55;
  *(undefined4 *)(param_1 + 0x56) = 0;
  if (*(int *)((longlong)param_1 + 0x2b4) < 0) {
    FUN_14481578e(local_148,0);
  }
  local_150 = param_1 + 0x57;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)((longlong)param_1 + 0x2c4) < 0) {
    FUN_14481578e(local_150,0);
  }
  local_140 = param_1 + 0x59;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  if (*(int *)((longlong)param_1 + 0x2d4) < 0) {
    FUN_14481578e(local_140,0);
  }
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  if (param_6 == '\0') {
    iVar15 = *(int *)(*param_1 + 8);
    if (iVar15 < 0) goto LAB_146e157e6;
    if (iVar15 != 0) {
      FUN_1405c2e9e(&local_e8);
    }
  }
  iVar15 = (int)param_5[1] - *(int *)((longlong)param_5 + 0x34);
  if (-1 < iVar15) {
    if ((int)uStack_f0._4_4_ < iVar15) {
      FUN_1405c2e9e(&local_f8);
    }
    FUN_146e1ea0e(plVar1,*(undefined4 *)(*param_1 + 8));
    iVar15 = *(int *)(*param_1 + 8);
    if (iVar15 < 0) {
LAB_146e157e6:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar15);
    }
    if (*(int *)((longlong)param_1 + 0x2b4) < iVar15) {
      FUN_14481578e(local_148);
    }
    iVar15 = (int)param_5[1] - *(int *)((longlong)param_5 + 0x34);
    if (-1 < iVar15) {
      if (*(int *)((longlong)param_1 + 0x2c4) < iVar15) {
        FUN_14481578e(local_150);
      }
      plVar7 = (longlong *)*param_1;
      plVar13 = plVar7;
      if (0 < (int)plVar7[1]) {
        local_130 = param_3 + 7;
        local_138 = param_5 + 7;
        uVar17 = 0;
        do {
          uVar10 = uStack_e0;
          uVar9 = uStack_f0;
          uVar14 = (uint)uVar17;
          if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
            plVar13 = (longlong *)param_3[8];
            if ((longlong *)param_3[8] == (longlong *)0x0) {
              plVar13 = local_130;
            }
            iVar15 = *(int *)((longlong)plVar13 +
                             (ulonglong)(uVar14 & (int)param_3[9] + 0x7fffffffU) * 4);
            if (iVar15 != -1) {
              do {
                if (uVar17 == *(uint *)(*param_3 + (longlong)iVar15 * 0xc)) goto LAB_146e15519;
                iVar15 = *(int *)(*param_3 + (longlong)iVar15 * 0xc + 4);
              } while (iVar15 != -1);
            }
          }
          piVar2 = (int *)(*plVar7 + uVar17 * 0xc);
          lVar12 = (longlong)*(int *)(param_2 + 0x10);
          lVar16 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x90);
          fVar4 = *(float *)(lVar16 + (*piVar2 + lVar12) * 4);
          if (((((fVar4 != 0.0) || (NAN(fVar4))) ||
               (fVar4 = *(float *)(lVar16 + (piVar2[1] + lVar12) * 4), fVar4 != 0.0)) ||
              ((NAN(fVar4) || (fVar4 = *(float *)(lVar16 + (piVar2[2] + lVar12) * 4), fVar4 != 0.0))
              )) || (NAN(fVar4))) {
            if (param_6 == '\0') {
              uVar8 = (uint)uStack_e0;
              lVar16 = (longlong)(int)(uint)uStack_e0;
              uVar11 = (uint)uStack_e0 + 1;
              uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar11);
              if (uStack_e0._4_4_ < uVar11) {
                FUN_141087970(&local_e8,uVar10 & 0xffffffff);
              }
              *(int *)(local_e8 + 8 + lVar16 * 0xc) = piVar2[2];
              *(undefined8 *)(local_e8 + lVar16 * 0xc) = *(undefined8 *)piVar2;
              iVar15 = (int)param_1[0x56];
              *(uint *)(param_1 + 0x56) = iVar15 + 1U;
              if (*(uint *)((longlong)param_1 + 0x2b4) < iVar15 + 1U) {
                FUN_1446f48e2(local_148,iVar15);
              }
              *(uint *)(*local_148 + (longlong)iVar15 * 4) = uVar14;
              *(uint *)(*plVar1 + uVar17 * 4) =
                   *(uint *)(*plVar1 + uVar17 * 4) & 0xc0000000 | uVar8 & 0x3fffffff;
              lVar16 = *plVar1;
              uVar14 = *(uint *)(lVar16 + uVar17 * 4) & 0x3fffffff | 0x40000000;
              goto LAB_146e154a1;
            }
          }
          else if (local_151 == '\0') {
            if ((int)param_5[1] != *(int *)((longlong)param_5 + 0x34)) {
              plVar13 = (longlong *)param_5[8];
              if ((longlong *)param_5[8] == (longlong *)0x0) {
                plVar13 = local_138;
              }
              iVar15 = *(int *)((longlong)plVar13 +
                               (ulonglong)(uVar14 & (int)param_5[9] + 0x7fffffffU) * 4);
              if (iVar15 != -1) {
                do {
                  if (uVar17 == *(uint *)(*param_5 + (longlong)iVar15 * 0xc)) goto LAB_146e15338;
                  iVar15 = *(int *)(*param_5 + (longlong)iVar15 * 0xc + 4);
                } while (iVar15 != -1);
              }
            }
LAB_146e15519:
            puVar3 = (uint *)(*plVar1 + uVar17 * 4);
            *puVar3 = *puVar3 & 0x3fffffff;
          }
          else {
LAB_146e15338:
            uVar8 = (uint)uStack_f0;
            lVar16 = (longlong)(int)(uint)uStack_f0;
            uVar11 = (uint)uStack_f0 + 1;
            uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar11);
            if (uStack_f0._4_4_ < uVar11) {
              FUN_141087970(&local_f8,uVar9 & 0xffffffff);
            }
            *(int *)(local_f8 + 8 + lVar16 * 0xc) = piVar2[2];
            *(undefined8 *)(local_f8 + lVar16 * 0xc) = *(undefined8 *)piVar2;
            iVar15 = (int)param_1[0x58];
            *(uint *)(param_1 + 0x58) = iVar15 + 1U;
            if (*(uint *)((longlong)param_1 + 0x2c4) < iVar15 + 1U) {
              FUN_1446f48e2(local_150,iVar15);
            }
            *(uint *)(*local_150 + (longlong)iVar15 * 4) = uVar14;
            *(uint *)(*plVar1 + uVar17 * 4) =
                 *(uint *)(*plVar1 + uVar17 * 4) & 0xc0000000 | uVar8 & 0x3fffffff;
            lVar16 = *plVar1;
            uVar14 = *(uint *)(lVar16 + uVar17 * 4) & 0x3fffffff | 0x80000000;
LAB_146e154a1:
            *(uint *)(lVar16 + uVar17 * 4) = uVar14;
          }
          uVar17 = uVar17 + 1;
          plVar13 = (longlong *)*param_1;
        } while ((longlong)uVar17 < (longlong)(int)plVar13[1]);
      }
      FUN_1429e249a(plVar13,&local_100);
      local_168 = 0;
      FUN_140dc1be2(param_1 + 1,&local_e8,local_100,local_fc);
      local_168 = 0;
      FUN_140dc1be2(param_1 + 0x2a,&local_f8,local_100,local_fc);
      FUN_1400ba9f8(param_1 + 1,&local_b0);
      iVar15 = local_a8 - local_7c;
      if (-1 < iVar15) {
        if (*(int *)((longlong)param_1 + 0x2d4) < iVar15) {
          FUN_14481578e(local_140);
        }
        local_d0 = 0x100000000;
        local_c0 = 0xffffffff;
        iStack_bc = 0;
        uStack_b8 = 0;
        uStack_c8 = local_a0;
        if (local_88 == 0) {
          iVar15 = 0;
        }
        else {
          FUN_1449c0562(&local_d0);
          iVar15 = local_88;
        }
        uStack_108 = CONCAT44(uStack_b4,uStack_b8);
        local_110 = local_c0;
        iStack_10c = iStack_bc;
        local_120 = (undefined4)local_d0;
        uStack_11c = local_d0._4_4_;
        uStack_118 = (undefined4)uStack_c8;
        uStack_114 = uStack_c8._4_4_;
        local_128 = &local_b0;
        if ((iStack_bc != iVar15) || (uStack_c8 != local_a0)) {
          do {
            iVar5 = *(int *)(*local_128 + (longlong)iStack_10c * 0xc);
            if (0.0 < *(float *)(*(longlong *)(*(longlong *)(param_2 + 8) + 0x90) +
                                ((longlong)*(int *)(param_2 + 0x10) + (longlong)iVar5) * 4)) {
              iVar6 = (int)param_1[0x5a];
              *(uint *)(param_1 + 0x5a) = iVar6 + 1U;
              if (*(uint *)((longlong)param_1 + 0x2d4) < iVar6 + 1U) {
                FUN_1446f48e2(local_140,iVar6);
              }
              *(int *)(*local_140 + (longlong)iVar6 * 4) = iVar5;
            }
            local_110 = local_110 & ~uStack_11c;
            FUN_1449c0562(&local_120);
          } while (local_128 != &local_b0 ||
                   ((undefined1 *)CONCAT44(uStack_114,uStack_118) != local_a0 ||
                   iStack_10c != iVar15));
        }
        local_68 = 0;
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        FUN_1447a082e(&local_b0);
        if (local_f8 != 0) {
          FUN_1400020a8();
        }
        if (local_e8 != 0) {
          FUN_1400020a8();
        }
        if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar15);
}



// FUNCTION 146e157f0 FUN_146e157f0 body=57 status=ok
// SIG undefined FUN_146e157f0(void)

undefined8 * FUN_146e157f0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f5cdc0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e1582a FUN_146e1582a body=39 status=ok
// SIG undefined FUN_146e1582a(void)

undefined8 * FUN_146e1582a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f4b8e0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e15852 FUN_146e15852 body=723 status=ok
// SIG undefined FUN_146e15852(void)

undefined8 FUN_146e15852(longlong param_1,longlong *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  longlong lVar9;
  double *pdVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    lVar5 = *param_2;
    lVar13 = (longlong)(int)param_2[1];
    uVar11 = *(uint *)(*(longlong *)(lVar5 + 0x80) + lVar13 * 4);
    lVar9 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x98);
    }
    iVar12 = *(int *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0xa0) - 1U & uVar11) * 4);
    if (iVar12 != -1) {
      do {
        lVar9 = *(longlong *)(param_1 + 0x58) + (longlong)iVar12 * 0x90;
        if (*(uint *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar12 * 0x90) == uVar11) {
          pdVar10 = (double *)(lVar9 + 0x10);
          if (pdVar10 == (double *)0x0 || lVar9 == 0) {
            return 0;
          }
          pdVar1 = (double *)(*(longlong *)(lVar5 + 0x530) + lVar13 * 0x18);
          if ((*pdVar1 == *pdVar10) && (!NAN(*pdVar1) && !NAN(*pdVar10))) {
            if ((pdVar1[1] == *(double *)(lVar9 + 0x18)) &&
               (!NAN(pdVar1[1]) && !NAN(*(double *)(lVar9 + 0x18)))) {
              if ((pdVar1[2] == *(double *)(lVar9 + 0x20)) &&
                 (!NAN(pdVar1[2]) && !NAN(*(double *)(lVar9 + 0x20)))) {
                lVar6 = *(longlong *)(lVar5 + 0x548);
                lVar14 = lVar13 * 0x10;
                lVar15 = -(ulonglong)
                          ((double)*(float *)(lVar6 + 4 + lVar14) != *(double *)(lVar9 + 0x38));
                lVar16 = -(ulonglong)
                          ((double)*(float *)(lVar6 + 0xc + lVar14) != *(double *)(lVar9 + 0x48));
                auVar7._8_4_ = (int)lVar15;
                auVar7._0_8_ = -(ulonglong)
                                ((double)*(float *)(lVar6 + lVar14) != *(double *)(lVar9 + 0x30));
                auVar7._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
                iVar12 = movmskpd((int)lVar14,auVar7);
                auVar8._8_4_ = (int)lVar16;
                auVar8._0_8_ = -(ulonglong)
                                ((double)*(float *)(lVar6 + 8 + lVar14) != *(double *)(lVar9 + 0x40)
                                );
                auVar8._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
                uVar11 = movmskpd((int)lVar6,auVar8);
                if ((uVar11 & 0x3fffffff) == 0 && iVar12 == 0) {
                  lVar6 = *(longlong *)(lVar5 + 0x278);
                  dVar2 = (double)*(float *)(lVar6 + lVar13 * 0xc);
                  if ((*(double *)(lVar9 + 0x50) == dVar2) &&
                     (!NAN(*(double *)(lVar9 + 0x50)) && !NAN(dVar2))) {
                    dVar2 = (double)*(float *)(lVar6 + lVar13 * 0xc + 4);
                    if ((*(double *)(lVar9 + 0x58) == dVar2) &&
                       (!NAN(*(double *)(lVar9 + 0x58)) && !NAN(dVar2))) {
                      dVar2 = (double)*(float *)(lVar6 + 8 + lVar13 * 0xc);
                      if ((*(double *)(lVar9 + 0x60) == dVar2) &&
                         (!NAN(*(double *)(lVar9 + 0x60)) && !NAN(dVar2))) {
                        lVar5 = *(longlong *)(lVar5 + 0x290);
                        dVar2 = (double)*(float *)(lVar5 + lVar13 * 0xc);
                        if ((*(double *)(lVar9 + 0x68) == dVar2) &&
                           (!NAN(*(double *)(lVar9 + 0x68)) && !NAN(dVar2))) {
                          dVar2 = (double)*(float *)(lVar5 + lVar13 * 0xc + 4);
                          if ((*(double *)(lVar9 + 0x70) == dVar2) &&
                             (!NAN(*(double *)(lVar9 + 0x70)) && !NAN(dVar2))) {
                            dVar2 = (double)*(float *)(lVar5 + 8 + lVar13 * 0xc);
                            if ((*(double *)(lVar9 + 0x78) == dVar2) &&
                               (!NAN(*(double *)(lVar9 + 0x78)) && !NAN(dVar2))) {
                              return 0;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          pdVar1[2] = *(double *)(lVar9 + 0x20);
          dVar2 = *(double *)(lVar9 + 0x18);
          *pdVar1 = *pdVar10;
          pdVar1[1] = dVar2;
          dVar2 = *(double *)(lVar9 + 0x48);
          dVar3 = *(double *)(lVar9 + 0x40);
          dVar4 = *(double *)(lVar9 + 0x38);
          lVar5 = *(longlong *)(*param_2 + 0x548);
          lVar13 = (longlong)(int)param_2[1] * 0x10;
          *(float *)(lVar5 + lVar13) = (float)*(double *)(lVar9 + 0x30);
          *(float *)(lVar5 + 4 + lVar13) = (float)dVar4;
          *(float *)(lVar5 + 8 + lVar13) = (float)dVar3;
          *(float *)(lVar5 + 0xc + lVar13) = (float)dVar2;
          dVar2 = *(double *)(lVar9 + 0x60);
          dVar3 = *(double *)(lVar9 + 0x58);
          lVar13 = (longlong)(int)param_2[1];
          lVar5 = *(longlong *)(*param_2 + 0x278);
          *(float *)(lVar5 + lVar13 * 0xc) = (float)*(double *)(lVar9 + 0x50);
          *(float *)(lVar5 + 4 + lVar13 * 0xc) = (float)dVar3;
          *(float *)(lVar5 + 8 + lVar13 * 0xc) = (float)dVar2;
          dVar2 = *(double *)(lVar9 + 0x78);
          dVar3 = *(double *)(lVar9 + 0x70);
          lVar13 = (longlong)(int)param_2[1];
          lVar5 = *(longlong *)(*param_2 + 0x290);
          *(float *)(lVar5 + lVar13 * 0xc) = (float)*(double *)(lVar9 + 0x68);
          *(float *)(lVar5 + 4 + lVar13 * 0xc) = (float)dVar3;
          *(float *)(lVar5 + 8 + lVar13 * 0xc) = (float)dVar2;
          return CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
        }
        iVar12 = *(int *)(lVar9 + 0x80);
      } while (iVar12 != -1);
    }
  }
  return 0;
}



// FUNCTION 146e15b26 FUN_146e15b26 body=133 status=ok
// SIG undefined FUN_146e15b26(void)

void FUN_146e15b26(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  
  if (*(char *)((longlong)param_1 + 0x154) == '\0') {
    lVar1 = *param_1;
    if (*(int *)(lVar1 + 0x5f0) < *(int *)(lVar1 + 0x698)) {
      FUN_1429d9a40(param_1,lVar1 + 0x5e0,param_2,param_3,param_4,param_5);
    }
    else {
      FUN_1429d9c80(param_1,lVar1 + 0x688,param_2,param_3,param_4,param_5);
    }
  }
  else {
    FUN_1429d9ec0(param_1,param_6 + 0x10,param_2,param_3,param_4,param_5);
  }
  return;
}



// FUNCTION 146e15bac FUN_146e15bac body=133 status=ok
// SIG undefined FUN_146e15bac(void)

void FUN_146e15bac(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  
  if (*(char *)((longlong)param_1 + 0x154) == '\0') {
    lVar1 = *param_1;
    if (*(int *)(lVar1 + 0x5f0) < *(int *)(lVar1 + 0x698)) {
      FUN_1429da100(param_1,lVar1 + 0x5e0,param_2,param_3,param_4,param_5);
    }
    else {
      FUN_1429da340(param_1,lVar1 + 0x688,param_2,param_3,param_4,param_5);
    }
  }
  else {
    FUN_1429da580(param_1,param_6 + 0x10,param_2,param_3,param_4,param_5);
  }
  return;
}



// FUNCTION 146e15c32 FUN_146e15c32 body=133 status=ok
// SIG undefined FUN_146e15c32(void)

void FUN_146e15c32(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  
  if (*(char *)((longlong)param_1 + 0x154) == '\0') {
    lVar1 = *param_1;
    if (*(int *)(lVar1 + 0x5f0) < *(int *)(lVar1 + 0x698)) {
      FUN_1429da7c0(param_1,lVar1 + 0x5e0,param_2,param_3,param_4,param_5);
    }
    else {
      FUN_1429daa00(param_1,lVar1 + 0x688,param_2,param_3,param_4,param_5);
    }
  }
  else {
    FUN_1429dac40(param_1,param_6 + 0x10,param_2,param_3,param_4,param_5);
  }
  return;
}



// FUNCTION 146e15d0e FUN_146e15d0e body=464 status=ok
// SIG undefined FUN_146e15d0e(void)

void FUN_146e15d0e(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [88];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  bVar10 = false;
  if (param_2 == (longlong *)0x0) {
    bVar11 = false;
  }
  else {
    bVar11 = false;
    bVar10 = false;
    if (1 < *(byte *)((longlong)param_2 + 0xc)) {
      lVar9 = (longlong)(int)param_2[1] * 0x10;
      cVar2 = *(char *)(*(longlong *)(*param_2 + 0x2c0) + 0xb + lVar9);
      bVar11 = cVar2 == '\x01';
      bVar10 = (byte)(cVar2 - 3U) < 0xfe;
      if (*(char *)(*(longlong *)(*param_2 + 0x2c0) + 0xd + lVar9) != '\0') goto LAB_146e15e28;
    }
  }
  if ((bVar10 || bVar11) || (*(char *)(param_1 + 0x154) == '\x01')) {
    if (*(char *)(*(longlong *)(*param_2 + 0x158) + (longlong)(int)param_2[1]) == '\x01') {
      local_58 = 0;
      uStack_50 = 0;
      FUN_144b06a28(param_2,&local_58);
      lVar9 = *(longlong *)(*param_2 + 0x140);
      lVar6 = (longlong)(int)param_2[1] * 0x30;
      local_78 = *(undefined8 *)(lVar9 + 0x10 + lVar6);
      local_88 = *(undefined8 *)(lVar9 + lVar6);
      uStack_80 = ((undefined8 *)(lVar9 + lVar6))[1];
      puVar1 = (undefined4 *)(lVar9 + 0x18 + lVar6);
      local_70 = *puVar1;
      uStack_6c = puVar1[1];
      uStack_68 = puVar1[2];
      uStack_64 = puVar1[3];
      local_60 = *(undefined8 *)(lVar9 + 0x28 + lVar6);
      FUN_14030bbce(local_e0,param_2,&local_58,param_4);
      FUN_14172ab96(param_3,&local_88,local_e0);
    }
    else {
      iVar7 = *(int *)(param_3 + 0x118);
      if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar7);
      }
      if (*(int *)((longlong)param_4 + 0xc) < iVar7) {
        FUN_146e0520a(param_4);
        iVar7 = *(int *)(param_3 + 0x118);
      }
      if (iVar7 != 0) {
        lVar9 = *(longlong *)(param_3 + 0x110);
        lVar6 = 0;
        do {
          plVar4 = *(longlong **)(lVar9 + 8 + lVar6);
          if (plVar4 != param_2) {
            iVar3 = (int)param_4[1];
            lVar8 = (longlong)iVar3;
            *(uint *)(param_4 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
              FUN_1400f3dc4(param_4,iVar3);
            }
            lVar5 = *param_4;
            *(longlong **)(lVar5 + lVar8 * 0x18) = param_2;
            *(longlong **)(lVar5 + 8 + lVar8 * 0x18) = plVar4;
            *(undefined4 *)(lVar5 + 0x10 + lVar8 * 0x18) = 1;
            *(undefined1 *)(lVar5 + 0x14 + lVar8 * 0x18) = 1;
          }
          lVar6 = lVar6 + 0x68;
        } while ((longlong)iVar7 * 0x68 - lVar6 != 0);
      }
    }
  }
LAB_146e15e28:
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e15eea FUN_146e15eea body=123 status=ok
// SIG undefined FUN_146e15eea(void)

void FUN_146e15eea(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x18) < param_3) {
    FUN_145891588(lVar1 + 0x10,param_3,1);
  }
  if (param_3 < *(int *)(lVar1 + 0x150)) {
    param_3 = *(int *)(lVar1 + 0x150);
  }
  *(int *)(lVar1 + 0x150) = param_3;
  FUN_146e0575c(param_1[1],param_3);
  uVar2 = *(undefined8 *)(*(longlong *)(param_1[1] + 8) + (longlong)param_2 * 8);
  lVar3 = (longlong)param_2 * 0x38;
  *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x20 + lVar3) = param_1[2];
  *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x28 + lVar3) = uVar2;
  return;
}



// FUNCTION 146e16008 FUN_146e16008 body=437 status=ok
// SIG undefined FUN_146e16008(void)

void FUN_146e16008(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [88];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((param_2 != (longlong *)0x0) && (1 < *(byte *)((longlong)param_2 + 0xc))) {
    lVar3 = *(longlong *)(*param_2 + 0x2c0);
    lVar8 = (longlong)(int)param_2[1] * 0x10;
    if ((*(char *)(lVar3 + 0xd + lVar8) != '\0') ||
       ((*(char *)(lVar3 + 0xb + lVar8) == '\x01' && (*(char *)(param_1 + 0x154) != '\x01'))))
    goto LAB_146e16107;
  }
  if (*(char *)(*(longlong *)(*param_2 + 0x158) + (longlong)(int)param_2[1]) == '\x01') {
    local_58 = 0;
    uStack_50 = 0;
    FUN_144b06a28(param_2,&local_58);
    lVar3 = *(longlong *)(*param_2 + 0x140);
    lVar8 = (longlong)(int)param_2[1] * 0x30;
    local_78 = *(undefined8 *)(lVar3 + 0x10 + lVar8);
    local_88 = *(undefined8 *)(lVar3 + lVar8);
    uStack_80 = ((undefined8 *)(lVar3 + lVar8))[1];
    puVar1 = (undefined4 *)(lVar3 + 0x18 + lVar8);
    local_70 = *puVar1;
    uStack_6c = puVar1[1];
    uStack_68 = puVar1[2];
    uStack_64 = puVar1[3];
    local_60 = *(undefined8 *)(lVar3 + 0x28 + lVar8);
    FUN_14030bbce(local_e0,param_2,&local_58,param_4);
    FUN_14172ab96(param_3,&local_88,local_e0);
  }
  else {
    iVar6 = *(int *)(param_3 + 0x118);
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if (*(int *)((longlong)param_4 + 0xc) < iVar6) {
      FUN_146e0520a(param_4);
      iVar6 = *(int *)(param_3 + 0x118);
    }
    if (iVar6 != 0) {
      lVar3 = *(longlong *)(param_3 + 0x110);
      lVar8 = 0;
      do {
        plVar4 = *(longlong **)(lVar3 + 8 + lVar8);
        if (plVar4 != param_2) {
          iVar2 = (int)param_4[1];
          lVar7 = (longlong)iVar2;
          *(uint *)(param_4 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_4 + 0xc) < iVar2 + 1U) {
            FUN_1400f3dc4(param_4,iVar2);
          }
          lVar5 = *param_4;
          *(longlong **)(lVar5 + lVar7 * 0x18) = param_2;
          *(longlong **)(lVar5 + 8 + lVar7 * 0x18) = plVar4;
          *(undefined4 *)(lVar5 + 0x10 + lVar7 * 0x18) = 1;
          *(undefined1 *)(lVar5 + 0x14 + lVar7 * 0x18) = 1;
        }
        lVar8 = lVar8 + 0x68;
      } while ((longlong)iVar6 * 0x68 - lVar8 != 0);
    }
  }
LAB_146e16107:
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e161ca FUN_146e161ca body=123 status=ok
// SIG undefined FUN_146e161ca(void)

void FUN_146e161ca(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x18) < param_3) {
    FUN_145891588(lVar1 + 0x10,param_3,1);
  }
  if (param_3 < *(int *)(lVar1 + 0x150)) {
    param_3 = *(int *)(lVar1 + 0x150);
  }
  *(int *)(lVar1 + 0x150) = param_3;
  FUN_146e0575c(param_1[1],param_3);
  uVar2 = *(undefined8 *)(*(longlong *)(param_1[1] + 8) + (longlong)param_2 * 8);
  lVar3 = (longlong)param_2 * 0x38;
  *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x20 + lVar3) = param_1[2];
  *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x28 + lVar3) = uVar2;
  return;
}



// FUNCTION 146e162f2 FUN_146e162f2 body=123 status=ok
// SIG undefined FUN_146e162f2(void)

void FUN_146e162f2(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x18) < param_3) {
    FUN_145891588(lVar1 + 0x10,param_3,1);
  }
  if (param_3 < *(int *)(lVar1 + 0x150)) {
    param_3 = *(int *)(lVar1 + 0x150);
  }
  *(int *)(lVar1 + 0x150) = param_3;
  FUN_146e0575c(param_1[1],param_3);
  uVar2 = *(undefined8 *)(*(longlong *)(param_1[1] + 8) + (longlong)param_2 * 8);
  lVar3 = (longlong)param_2 * 0x38;
  *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x20 + lVar3) = param_1[2];
  *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x28 + lVar3) = uVar2;
  return;
}



// FUNCTION 146e16410 FUN_146e16410 body=466 status=ok
// SIG undefined FUN_146e16410(void)

void FUN_146e16410(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [88];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  bVar10 = false;
  if (param_2 == (longlong *)0x0) {
    bVar11 = false;
  }
  else {
    bVar11 = false;
    bVar10 = false;
    if (1 < *(byte *)((longlong)param_2 + 0xc)) {
      lVar8 = (longlong)(int)param_2[1] * 0x10;
      cVar2 = *(char *)(*(longlong *)(*param_2 + 0x2c0) + 0xb + lVar8);
      bVar11 = cVar2 == '\x01';
      bVar10 = (byte)(cVar2 - 3U) < 0xfe;
      if (*(char *)(*(longlong *)(*param_2 + 0x2c0) + 0xd + lVar8) != '\0') goto LAB_146e16519;
    }
  }
  if ((bVar10 || bVar11) || (*(char *)(param_1 + 0x154) == '\x01')) {
    if (*(char *)(*(longlong *)(*param_2 + 0x158) + (longlong)(int)param_2[1]) == '\x01') {
      local_58 = 0;
      uStack_50 = 0;
      FUN_144b06a28(param_2,&local_58);
      lVar8 = *(longlong *)(*param_2 + 0x140);
      lVar9 = (longlong)(int)param_2[1] * 0x30;
      local_78 = *(undefined8 *)(lVar8 + 0x10 + lVar9);
      local_88 = *(undefined8 *)(lVar8 + lVar9);
      uStack_80 = ((undefined8 *)(lVar8 + lVar9))[1];
      puVar1 = (undefined4 *)(lVar8 + 0x18 + lVar9);
      local_70 = *puVar1;
      uStack_6c = puVar1[1];
      uStack_68 = puVar1[2];
      uStack_64 = puVar1[3];
      local_60 = *(undefined8 *)(lVar8 + 0x28 + lVar9);
      FUN_14030bbce(local_e0,param_2,&local_58,param_4);
      FUN_146e165e4(param_3,&local_88,local_e0);
    }
    else {
      iVar6 = *(int *)(param_3 + 0x18);
      if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar6);
      }
      if (*(int *)((longlong)param_4 + 0xc) < iVar6) {
        FUN_146e0520a(param_4);
        iVar6 = *(int *)(param_3 + 0x18);
      }
      if (iVar6 != 0) {
        lVar8 = *(longlong *)(param_3 + 0x10);
        lVar9 = 0;
        do {
          plVar4 = *(longlong **)(lVar8 + 8 + lVar9);
          if (plVar4 != param_2) {
            iVar3 = (int)param_4[1];
            lVar7 = (longlong)iVar3;
            *(uint *)(param_4 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
              FUN_1400f3dc4(param_4,iVar3);
            }
            lVar5 = *param_4;
            *(longlong **)(lVar5 + lVar7 * 0x18) = param_2;
            *(longlong **)(lVar5 + 8 + lVar7 * 0x18) = plVar4;
            *(undefined4 *)(lVar5 + 0x10 + lVar7 * 0x18) = 1;
            *(undefined1 *)(lVar5 + 0x14 + lVar7 * 0x18) = 1;
          }
          lVar9 = lVar9 + 0x68;
        } while ((longlong)iVar6 * 0x68 - lVar9 != 0);
      }
    }
  }
LAB_146e16519:
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e165e4 FUN_146e165e4 body=1162 status=ok
// SIG undefined FUN_146e165e4(void)

void FUN_146e165e4(longlong param_1,longlong param_2,longlong *param_3)

{
  double *pdVar1;
  double dVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_108 [40];
  longlong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  longlong *local_c8;
  ulonglong local_c0;
  undefined1 local_b8 [4];
  uint local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e0 = param_1;
  local_c8 = param_3;
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar16 = *(longlong *)(param_1 + 0x10);
    lVar13 = (longlong)*(int *)(param_1 + 0x18) * 0x68 + lVar16;
    do {
      cVar7 = FUN_146e0527b(lVar16,param_3);
      if (cVar7 == '\0') {
        lVar17 = -3;
        do {
          dVar2 = *(double *)(param_2 + 0x18 + lVar17 * 8);
          pdVar1 = (double *)(lVar16 + 0x68 + lVar17 * 8);
          if ((*pdVar1 <= dVar2 && dVar2 != *pdVar1) ||
             (dVar2 = *(double *)(lVar16 + 0x50 + lVar17 * 8),
             pdVar1 = (double *)(param_2 + 0x30 + lVar17 * 8), *pdVar1 <= dVar2 && dVar2 != *pdVar1)
             ) goto LAB_146e16645;
          lVar17 = lVar17 + 1;
        } while (lVar17 != 0);
        uVar3 = *(undefined8 *)(lVar16 + 8);
        plVar4 = (longlong *)*param_3;
        lVar17 = param_3[5];
        iVar10 = (int)plVar4[1];
        lVar14 = (longlong)iVar10;
        *(uint *)(plVar4 + 1) = iVar10 + 1U;
        if (*(uint *)((longlong)plVar4 + 0xc) < iVar10 + 1U) {
          FUN_1400f3dc4(plVar4,iVar10);
        }
        lVar5 = *plVar4;
        *(longlong *)(lVar5 + lVar14 * 0x18) = lVar17;
        *(undefined8 *)(lVar5 + 8 + lVar14 * 0x18) = uVar3;
        *(undefined4 *)(lVar5 + 0x10 + lVar14 * 0x18) = 0;
        *(undefined1 *)(lVar5 + 0x14 + lVar14 * 0x18) = 1;
        param_3 = local_c8;
      }
LAB_146e16645:
      lVar16 = lVar16 + 0x68;
    } while (lVar16 != lVar13);
  }
  if ((longlong)*(int *)(local_e0 + 0xa0) != 0) {
    lVar16 = *(longlong *)(local_e0 + 0x98);
    lVar13 = (longlong)*(int *)(local_e0 + 0xa0) * 0x80 + lVar16;
    do {
      cVar7 = FUN_146e0527b(lVar16 + 0x30,param_3);
      if (cVar7 == '\0') {
        lVar17 = 0;
        do {
          dVar2 = *(double *)(param_2 + lVar17 * 8);
          pdVar1 = (double *)(lVar16 + 0x18 + lVar17 * 8);
          if ((*pdVar1 <= dVar2 && dVar2 != *pdVar1) ||
             (dVar2 = *(double *)(lVar16 + lVar17 * 8),
             pdVar1 = (double *)(param_2 + 0x18 + lVar17 * 8), *pdVar1 <= dVar2 && dVar2 != *pdVar1)
             ) goto LAB_146e16704;
          lVar17 = lVar17 + 1;
        } while (lVar17 != 3);
        uVar3 = *(undefined8 *)(lVar16 + 0x38);
        plVar4 = (longlong *)*param_3;
        lVar17 = param_3[5];
        iVar10 = (int)plVar4[1];
        lVar14 = (longlong)iVar10;
        *(uint *)(plVar4 + 1) = iVar10 + 1U;
        if (*(uint *)((longlong)plVar4 + 0xc) < iVar10 + 1U) {
          FUN_1400f3dc4(plVar4,iVar10);
        }
        lVar5 = *plVar4;
        *(longlong *)(lVar5 + lVar14 * 0x18) = lVar17;
        *(undefined8 *)(lVar5 + 8 + lVar14 * 0x18) = uVar3;
        *(undefined4 *)(lVar5 + 0x10 + lVar14 * 0x18) = 0;
        *(undefined1 *)(lVar5 + 0x14 + lVar14 * 0x18) = 1;
        param_3 = local_c8;
      }
LAB_146e16704:
      lVar16 = lVar16 + 0x80;
    } while (lVar16 != lVar13);
  }
  if (*(char *)(local_e0 + 0xc0) == '\0') {
    lVar16 = local_e0 + 0x20;
    FUN_146c9c584(lVar16,&local_a4,param_2);
    FUN_146c9c584(lVar16,&local_b0,param_2 + 0x18);
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    local_d8 = (ulonglong)local_a4;
    if ((int)local_a4 <= local_b0) {
      lVar16 = local_e0;
      iVar10 = local_b0;
      iVar8 = local_ac;
      do {
        local_d0 = (ulonglong)local_a0;
        iVar11 = local_a8;
        if ((int)local_a0 <= iVar8) {
          do {
            uVar9 = local_9c;
            if ((int)local_9c <= iVar11) {
              do {
                lVar13 = (longlong)
                         (int)((*(int *)(lVar16 + 0x7c) * (int)local_d8 + (int)local_d0) *
                               *(int *)(lVar16 + 0x80) + uVar9) * 0x10;
                lVar17 = (longlong)*(int *)(*(longlong *)(lVar16 + 0x88) + 8 + lVar13);
                uVar15 = uVar9;
                if (lVar17 != 0) {
                  lVar16 = *(longlong *)(*(longlong *)(lVar16 + 0x88) + lVar13);
                  lVar13 = lVar17 * 0x80 + lVar16;
                  local_c0 = (ulonglong)uVar9;
                  do {
                    cVar7 = FUN_146e0527b(lVar16 + 0x30,param_3);
                    if (cVar7 == '\0') {
                      uVar9 = *(uint *)(lVar16 + 0x40);
                      if ((int)uStack_90 != local_64) {
                        puVar12 = local_58;
                        if (local_58 == (undefined1 *)0x0) {
                          puVar12 = local_60;
                        }
                        for (iVar10 = *(int *)(puVar12 + (ulonglong)(local_50 - 1U & uVar9) * 4);
                            iVar10 != -1; iVar10 = *(int *)(local_98 + (longlong)iVar10 * 0xc + 4))
                        {
                          if (*(uint *)(local_98 + (longlong)iVar10 * 0xc) == uVar9)
                          goto LAB_146e168dc;
                        }
                      }
                      local_b4 = uVar9;
                      FUN_14079e2ee(&local_98,local_b8,&local_b4,0);
                      lVar17 = 0;
                      do {
                        dVar2 = *(double *)(param_2 + lVar17 * 8);
                        pdVar1 = (double *)(lVar16 + 0x18 + lVar17 * 8);
                        if ((*pdVar1 <= dVar2 && dVar2 != *pdVar1) ||
                           (dVar2 = *(double *)(lVar16 + lVar17 * 8),
                           pdVar1 = (double *)(param_2 + 0x18 + lVar17 * 8),
                           *pdVar1 <= dVar2 && dVar2 != *pdVar1)) goto LAB_146e168dc;
                        lVar17 = lVar17 + 1;
                      } while (lVar17 != 3);
                      uVar3 = *(undefined8 *)(lVar16 + 0x38);
                      plVar4 = (longlong *)*param_3;
                      lVar17 = param_3[5];
                      iVar10 = (int)plVar4[1];
                      lVar14 = (longlong)iVar10;
                      *(uint *)(plVar4 + 1) = iVar10 + 1U;
                      if (*(uint *)((longlong)plVar4 + 0xc) < iVar10 + 1U) {
                        FUN_1400f3dc4(plVar4,iVar10);
                      }
                      lVar5 = *plVar4;
                      *(longlong *)(lVar5 + lVar14 * 0x18) = lVar17;
                      *(undefined8 *)(lVar5 + 8 + lVar14 * 0x18) = uVar3;
                      *(undefined4 *)(lVar5 + 0x10 + lVar14 * 0x18) = 0;
                      *(undefined1 *)(lVar5 + 0x14 + lVar14 * 0x18) = 1;
                      param_3 = local_c8;
                    }
LAB_146e168dc:
                    lVar16 = lVar16 + 0x80;
                  } while (lVar16 != lVar13);
                  uVar15 = (uint)local_c0;
                  lVar16 = local_e0;
                  iVar11 = local_a8;
                }
                uVar9 = uVar15 + 1;
                iVar8 = local_ac;
              } while ((int)uVar15 < iVar11);
            }
            iVar6 = (int)local_d0;
            local_d0 = (ulonglong)(iVar6 + 1);
            iVar10 = local_b0;
          } while (iVar6 < iVar8);
        }
        iVar11 = (int)local_d8;
        local_d8 = (ulonglong)(iVar11 + 1);
      } while (iVar11 < iVar10);
      local_50 = 0;
      if (local_58 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_140d9cca6(&local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e16a7a FUN_146e16a7a body=123 status=ok
// SIG undefined FUN_146e16a7a(void)

void FUN_146e16a7a(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x18) < param_3) {
    FUN_145891588(lVar1 + 0x10,param_3,1);
  }
  if (param_3 < *(int *)(lVar1 + 0x150)) {
    param_3 = *(int *)(lVar1 + 0x150);
  }
  *(int *)(lVar1 + 0x150) = param_3;
  FUN_146e0575c(param_1[1],param_3);
  uVar2 = *(undefined8 *)(*(longlong *)(param_1[1] + 8) + (longlong)param_2 * 8);
  lVar3 = (longlong)param_2 * 0x38;
  *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x20 + lVar3) = param_1[2];
  *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x28 + lVar3) = uVar2;
  return;
}



// FUNCTION 146e16b98 FUN_146e16b98 body=439 status=ok
// SIG undefined FUN_146e16b98(void)

void FUN_146e16b98(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [88];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((param_2 != (longlong *)0x0) && (1 < *(byte *)((longlong)param_2 + 0xc))) {
    lVar3 = *(longlong *)(*param_2 + 0x2c0);
    lVar8 = (longlong)(int)param_2[1] * 0x10;
    if ((*(char *)(lVar3 + 0xd + lVar8) != '\0') ||
       ((*(char *)(lVar3 + 0xb + lVar8) == '\x01' && (*(char *)(param_1 + 0x154) != '\x01'))))
    goto LAB_146e16c86;
  }
  if (*(char *)(*(longlong *)(*param_2 + 0x158) + (longlong)(int)param_2[1]) == '\x01') {
    local_58 = 0;
    uStack_50 = 0;
    FUN_144b06a28(param_2,&local_58);
    lVar3 = *(longlong *)(*param_2 + 0x140);
    lVar8 = (longlong)(int)param_2[1] * 0x30;
    local_78 = *(undefined8 *)(lVar3 + 0x10 + lVar8);
    local_88 = *(undefined8 *)(lVar3 + lVar8);
    uStack_80 = ((undefined8 *)(lVar3 + lVar8))[1];
    puVar1 = (undefined4 *)(lVar3 + 0x18 + lVar8);
    local_70 = *puVar1;
    uStack_6c = puVar1[1];
    uStack_68 = puVar1[2];
    uStack_64 = puVar1[3];
    local_60 = *(undefined8 *)(lVar3 + 0x28 + lVar8);
    FUN_14030bbce(local_e0,param_2,&local_58,param_4);
    FUN_146e165e4(param_3,&local_88,local_e0);
  }
  else {
    iVar6 = *(int *)(param_3 + 0x18);
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if (*(int *)((longlong)param_4 + 0xc) < iVar6) {
      FUN_146e0520a(param_4);
      iVar6 = *(int *)(param_3 + 0x18);
    }
    if (iVar6 != 0) {
      lVar3 = *(longlong *)(param_3 + 0x10);
      lVar8 = 0;
      do {
        plVar4 = *(longlong **)(lVar3 + 8 + lVar8);
        if (plVar4 != param_2) {
          iVar2 = (int)param_4[1];
          lVar7 = (longlong)iVar2;
          *(uint *)(param_4 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_4 + 0xc) < iVar2 + 1U) {
            FUN_1400f3dc4(param_4,iVar2);
          }
          lVar5 = *param_4;
          *(longlong **)(lVar5 + lVar7 * 0x18) = param_2;
          *(longlong **)(lVar5 + 8 + lVar7 * 0x18) = plVar4;
          *(undefined4 *)(lVar5 + 0x10 + lVar7 * 0x18) = 1;
          *(undefined1 *)(lVar5 + 0x14 + lVar7 * 0x18) = 1;
        }
        lVar8 = lVar8 + 0x68;
      } while ((longlong)iVar6 * 0x68 - lVar8 != 0);
    }
  }
LAB_146e16c86:
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e16d5c FUN_146e16d5c body=123 status=ok
// SIG undefined FUN_146e16d5c(void)

void FUN_146e16d5c(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x18) < param_3) {
    FUN_145891588(lVar1 + 0x10,param_3,1);
  }
  if (param_3 < *(int *)(lVar1 + 0x150)) {
    param_3 = *(int *)(lVar1 + 0x150);
  }
  *(int *)(lVar1 + 0x150) = param_3;
  FUN_146e0575c(param_1[1],param_3);
  uVar2 = *(undefined8 *)(*(longlong *)(param_1[1] + 8) + (longlong)param_2 * 8);
  lVar3 = (longlong)param_2 * 0x38;
  *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x20 + lVar3) = param_1[2];
  *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x28 + lVar3) = uVar2;
  return;
}



// FUNCTION 146e16e84 FUN_146e16e84 body=123 status=ok
// SIG undefined FUN_146e16e84(void)

void FUN_146e16e84(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x18) < param_3) {
    FUN_145891588(lVar1 + 0x10,param_3,1);
  }
  if (param_3 < *(int *)(lVar1 + 0x150)) {
    param_3 = *(int *)(lVar1 + 0x150);
  }
  *(int *)(lVar1 + 0x150) = param_3;
  FUN_146e0575c(param_1[1],param_3);
  uVar2 = *(undefined8 *)(*(longlong *)(param_1[1] + 8) + (longlong)param_2 * 8);
  lVar3 = (longlong)param_2 * 0x38;
  *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x20 + lVar3) = param_1[2];
  *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x28 + lVar3) = uVar2;
  return;
}



// FUNCTION 146e16fa2 FUN_146e16fa2 body=475 status=ok
// SIG undefined FUN_146e16fa2(void)

void FUN_146e16fa2(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [88];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  bVar10 = false;
  if (param_2 == (longlong *)0x0) {
    bVar11 = false;
  }
  else {
    bVar11 = false;
    bVar10 = false;
    if (1 < *(byte *)((longlong)param_2 + 0xc)) {
      lVar8 = (longlong)(int)param_2[1] * 0x10;
      cVar2 = *(char *)(*(longlong *)(*param_2 + 0x2c0) + 0xb + lVar8);
      bVar11 = cVar2 == '\x01';
      bVar10 = (byte)(cVar2 - 3U) < 0xfe;
      if (*(char *)(*(longlong *)(*param_2 + 0x2c0) + 0xd + lVar8) != '\0') goto LAB_146e170b1;
    }
  }
  if ((bVar10 || bVar11) || (*(char *)(param_1 + 0x154) == '\x01')) {
    if (*(char *)(*(longlong *)(*param_2 + 0x158) + (longlong)(int)param_2[1]) == '\x01') {
      local_58 = 0;
      uStack_50 = 0;
      FUN_144b06a28(param_2,&local_58);
      lVar8 = *(longlong *)(*param_2 + 0x140);
      lVar9 = (longlong)(int)param_2[1] * 0x30;
      local_78 = *(undefined8 *)(lVar8 + 0x10 + lVar9);
      local_88 = *(undefined8 *)(lVar8 + lVar9);
      uStack_80 = ((undefined8 *)(lVar8 + lVar9))[1];
      puVar1 = (undefined4 *)(lVar8 + 0x18 + lVar9);
      local_70 = *puVar1;
      uStack_6c = puVar1[1];
      uStack_68 = puVar1[2];
      uStack_64 = puVar1[3];
      local_60 = *(undefined8 *)(lVar8 + 0x28 + lVar9);
      FUN_14030bbce(local_e0,param_2,&local_58,param_4);
      FUN_146e17180(param_3,&local_88,local_e0);
    }
    else {
      iVar6 = *(int *)(param_3 + 0x110);
      if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar6);
      }
      if (*(int *)((longlong)param_4 + 0xc) < iVar6) {
        FUN_146e0520a(param_4);
        iVar6 = *(int *)(param_3 + 0x110);
      }
      if (iVar6 != 0) {
        lVar8 = *(longlong *)(param_3 + 0x108);
        lVar9 = 0;
        do {
          plVar4 = *(longlong **)(lVar8 + 8 + lVar9);
          if (plVar4 != param_2) {
            iVar3 = (int)param_4[1];
            lVar7 = (longlong)iVar3;
            *(uint *)(param_4 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
              FUN_1400f3dc4(param_4,iVar3);
            }
            lVar5 = *param_4;
            *(longlong **)(lVar5 + lVar7 * 0x18) = param_2;
            *(longlong **)(lVar5 + 8 + lVar7 * 0x18) = plVar4;
            *(undefined4 *)(lVar5 + 0x10 + lVar7 * 0x18) = 1;
            *(undefined1 *)(lVar5 + 0x14 + lVar7 * 0x18) = 1;
          }
          lVar9 = lVar9 + 0x68;
        } while ((longlong)iVar6 * 0x68 - lVar9 != 0);
      }
    }
  }
LAB_146e170b1:
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e17180 FUN_146e17180 body=178 status=ok
// SIG undefined FUN_146e17180(void)

void FUN_146e17180(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  undefined8 *local_c0;
  undefined2 *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c8 = local_30;
  local_c0 = &local_60;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_b8 = &local_38;
  local_38 = 0;
  local_36 = 0;
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_d8 = param_2;
  local_d0 = param_3;
  local_68 = local_c8;
  FUN_146e17234(0,&local_a8,&local_68);
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e17234 FUN_146e17234 body=1734 status=ok
// SIG undefined FUN_146e17234(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_146e17234(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       double *param_5,longlong *param_6,undefined8 param_7,undefined8 param_8,
                       undefined8 param_9)

{
  undefined8 *puVar1;
  double dVar2;
  undefined4 uVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  longlong **pplVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  double *pdVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_1168 [32];
  double *local_1148;
  longlong *local_1140;
  undefined8 local_1138;
  undefined8 local_1130;
  undefined8 local_1128;
  longlong local_1118;
  undefined8 local_1110;
  undefined8 local_1108;
  undefined8 local_1100;
  double local_10f8 [6];
  double local_10c8 [9];
  longlong local_1080;
  double *local_1078;
  longlong *local_1070;
  longlong *local_1068 [3];
  longlong **local_1050;
  double *pdStack_1048;
  undefined8 local_1040;
  undefined8 local_1038;
  undefined8 local_1030;
  undefined8 *local_1028;
  longlong **local_78;
  uint local_70;
  uint local_6c;
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x146e1724a;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1168;
  local_1070 = (longlong *)0x0;
  local_1118 = param_1;
  local_1110 = param_2;
  local_1108 = param_3;
  local_1100 = param_4;
  if ((longlong)*(int *)(param_1 + 0x110) != 0) {
    lVar20 = *(longlong *)(param_1 + 0x108);
    lVar16 = (longlong)*(int *)(param_1 + 0x110) * 0x68 + lVar20;
    do {
      cVar5 = FUN_146e0527b(lVar20,param_6);
      if (cVar5 == '\0') {
        local_1068[2] = (longlong *)*(undefined8 *)(lVar20 + 0x48);
        local_1068[0] = *(longlong **)(lVar20 + 0x38);
        local_1068[1] = (longlong *)*(undefined8 *)(lVar20 + 0x40);
        local_1040 = *(undefined8 *)(lVar20 + 0x60);
        local_1050 = *(longlong ***)(lVar20 + 0x50);
        pdStack_1048 = *(double **)(lVar20 + 0x58);
        lVar15 = 0;
        do {
          if (((double)local_1068[lVar15 + 3] <= param_5[lVar15] &&
               param_5[lVar15] != (double)local_1068[lVar15 + 3]) ||
             (param_5[lVar15 + 3] <= (double)local_1068[lVar15] &&
              (double)local_1068[lVar15] != param_5[lVar15 + 3])) goto LAB_146e172d1;
          lVar15 = lVar15 + 1;
        } while (lVar15 != 3);
        uVar10 = *(undefined8 *)(lVar20 + 8);
        plVar4 = (longlong *)*param_6;
        lVar15 = param_6[5];
        iVar7 = (int)plVar4[1];
        lVar19 = (longlong)iVar7;
        *(uint *)(plVar4 + 1) = iVar7 + 1U;
        if (*(uint *)((longlong)plVar4 + 0xc) < iVar7 + 1U) {
          FUN_1400f3dc4(plVar4,iVar7);
        }
        lVar8 = *plVar4;
        *(longlong *)(lVar8 + lVar19 * 0x18) = lVar15;
        *(undefined8 *)(lVar8 + 8 + lVar19 * 0x18) = uVar10;
        *(undefined4 *)(lVar8 + 0x10 + lVar19 * 0x18) = 0;
        *(undefined1 *)(lVar8 + 0x14 + lVar19 * 0x18) = 1;
      }
LAB_146e172d1:
      lVar20 = lVar20 + 0x68;
    } while (lVar20 != lVar16);
  }
  if (*(longlong *)(local_1118 + 0xc0) == 0) {
    local_1068[0] = param_6;
    local_1068[1] = (longlong *)local_1110;
    local_1068[2] = (longlong *)local_1108;
    local_1050 = &local_1070;
    pdStack_1048 = param_5;
    local_1040 = local_1100;
    local_1038 = param_7;
    local_1030 = param_8;
    local_1028 = &param_9;
    if (0 < (int)*(uint *)(local_1118 + 0x38)) {
      if ((((0.0 < *(double *)(local_1118 + 200)) &&
           (uVar13 = (ulonglong)*(int *)(local_1118 + 0xd8), 0 < (longlong)uVar13)) &&
          (0 < *(int *)(local_1118 + 0xdc))) &&
         ((0 < *(int *)(local_1118 + 0xe0) &&
          (*(int *)(local_1118 + 0x84) < *(int *)(local_1118 + 0x58))))) {
        dVar2 = *(double *)(local_1118 + 0xd0);
        auVar23._8_8_ = 0;
        auVar23._0_8_ = ABS(*param_5 * dVar2) * 2.220446049250313e-16 + *param_5 * dVar2;
        auVar23 = roundpd(auVar23,auVar23,1);
        lVar20 = (longlong)auVar23._0_8_;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = ABS(param_5[3] * dVar2) * 2.220446049250313e-16 + param_5[3] * dVar2;
        auVar23 = roundpd(auVar24,auVar24,1);
        lVar16 = (longlong)auVar23._0_8_;
        if (lVar20 <= lVar16) {
          auVar25._8_8_ = 0;
          auVar25._0_8_ = ABS(param_5[1] * dVar2) * 2.220446049250313e-16 + param_5[1] * dVar2;
          auVar23 = roundpd(auVar25,auVar25,1);
          lVar19 = (longlong)auVar23._0_8_;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = ABS(dVar2 * param_5[4]) * 2.220446049250313e-16 + dVar2 * param_5[4];
          auVar23 = roundpd(auVar22,auVar22,1);
          lVar15 = (longlong)auVar23._0_8_;
          if (((lVar19 <= lVar15) && (uVar14 = (lVar16 - lVar20) + 1, uVar14 <= uVar13)) &&
             ((uVar18 = (lVar15 - lVar19) + 1, uVar18 <= uVar13 &&
              (uVar18 = uVar18 * uVar14, uVar18 < uVar13 || uVar18 - uVar13 == 0)))) {
            local_1078 = local_10f8;
            local_10f8[0] = 0.0;
            local_10f8[1] = 0.0;
            local_1080 = local_1118;
            do {
              uVar11 = ((uint)lVar20 & 0xff00) << 8 | (uint)lVar20 & 0xff;
              uVar11 = (uVar11 << 4 | uVar11) & 0xf0f0f0f;
              uVar11 = (uVar11 * 4 | uVar11) & 0x33333333;
              lVar8 = lVar19;
              do {
                uVar12 = ((uint)lVar8 & 0xff00) << 8 | (uint)lVar8 & 0xff;
                uVar12 = (uVar12 << 4 | uVar12) & 0xf0f0f0f;
                uVar12 = (uVar12 * 4 | uVar12) & 0x33333333;
                FUN_146e17b98(&local_1080,
                              (uVar12 * 2 | uVar12 * 4) & 0xaaaaaaaa |
                              (uVar11 * 2 | uVar11) & 0x55555555);
                lVar8 = lVar8 + 1;
              } while (lVar15 + 1 != lVar8);
              bVar21 = lVar20 != lVar16;
              lVar20 = lVar20 + 1;
            } while (bVar21);
            pplVar9 = local_1068;
            pdVar17 = local_10f8 + 6;
            for (lVar20 = 9; lVar20 != 0; lVar20 = lVar20 + -1) {
              *pdVar17 = (double)*pplVar9;
              pplVar9 = pplVar9 + 1;
              pdVar17 = pdVar17 + 1;
            }
            FUN_146e178fc(local_1118,local_10f8);
            if (local_10f8[0] != 0.0) {
              FUN_1400020a8();
            }
            goto LAB_146e17582;
          }
        }
      }
      lVar20 = *(longlong *)(local_1118 + 0x30);
      lVar16 = (ulonglong)*(uint *)(local_1118 + 0x38) * 0x68;
      do {
        FUN_146e179f4(local_1068,lVar20);
        lVar20 = lVar20 + 0x68;
        lVar16 = lVar16 + -0x68;
      } while (lVar16 != 0);
    }
  }
  else {
    local_1128 = param_9;
    local_1130 = param_8;
    local_1138 = param_7;
    local_1140 = param_6;
    local_1148 = param_5;
    cVar5 = FUN_146e17234(*(longlong *)(local_1118 + 0xc0),local_1110,local_1108,local_1100);
    if (cVar5 == '\0') {
      uVar13 = 0;
      goto LAB_146e17746;
    }
  }
LAB_146e17582:
  lVar20 = local_1118;
  bVar6 = *(byte *)(local_1118 + 0x40);
  if ((bVar6 == 1) && (*(int *)(local_1118 + 400) != 0)) {
    local_1068[0] = (longlong *)CONCAT71(local_1068[0]._1_7_,1);
    uVar10 = FUN_146e17ade(local_1118,param_5,param_6);
    if ((char)uVar10 != '\0') {
      uVar13 = CONCAT71((int7)((ulonglong)uVar10 >> 8),local_1068[0]._0_1_);
      goto LAB_146e17746;
    }
    bVar6 = *(byte *)(lVar20 + 0x40);
  }
  local_78 = (longlong **)0x0;
  local_6c = 0xff;
  if ((bVar6 & 1) == 0) {
    uVar10 = 0;
    iVar7 = 0;
    if (*(int *)(lVar20 + 0x18) != 0) goto LAB_146e175d3;
  }
  else {
    iVar7 = *(int *)(lVar20 + 0x44);
    if (iVar7 == -1) {
      uVar10 = 0xffffffff;
    }
    else {
LAB_146e175d3:
      local_70 = 1;
      local_1068[0] = (longlong *)CONCAT44(local_1068[0]._4_4_,iVar7);
      local_1068[1] = (longlong *)0x0;
      local_70 = 1;
      do {
        pplVar9 = local_78;
        if (local_78 == (longlong **)0x0) {
          pplVar9 = local_1068;
        }
        lVar15 = (longlong)(int)local_70;
        local_70 = local_70 - 1;
        lVar16 = *(longlong *)(lVar20 + 0x10) + (longlong)*(int *)(pplVar9 + lVar15 * 2 + -2) * 0x70
        ;
        if ((*(byte *)(*(longlong *)(lVar20 + 0x10) + 0x6c +
                      (longlong)*(int *)(pplVar9 + lVar15 * 2 + -2) * 0x70) & 1) == 0) {
          lVar15 = 0;
          lVar19 = 0;
          do {
            uVar11 = local_70;
            plVar4 = local_1070;
            local_10f8[2] = (double)*(undefined8 *)(lVar16 + 0x10 + lVar19);
            local_10f8[0] = *(double *)(lVar16 + lVar19);
            local_10f8[1] = ((double *)(lVar16 + lVar19))[1];
            local_10f8[5] = (double)*(undefined8 *)(lVar16 + 0x28 + lVar19);
            puVar1 = (undefined8 *)(lVar16 + 0x18 + lVar19);
            local_10f8[3] = (double)*puVar1;
            local_10f8[4] = (double)puVar1[1];
            lVar8 = 0;
            do {
              if ((local_10f8[lVar8 + 3] <= param_5[lVar8] &&
                   param_5[lVar8] != local_10f8[lVar8 + 3]) ||
                 (param_5[lVar8 + 3] <= local_10f8[lVar8] && local_10f8[lVar8] != param_5[lVar8 + 3]
                 )) goto LAB_146e176db;
              lVar8 = lVar8 + 1;
            } while (lVar8 != 3);
            uVar3 = *(undefined4 *)(lVar16 + 0x60 + lVar15 * 4);
            lVar8 = (longlong)(int)local_70;
            local_70 = local_70 + 1;
            if (local_6c < local_70) {
              FUN_146e17c42(local_1068,uVar11);
              lVar20 = local_1118;
            }
            pplVar9 = local_78;
            if (local_78 == (longlong **)0x0) {
              pplVar9 = local_1068;
            }
            *(undefined4 *)(pplVar9 + lVar8 * 2) = uVar3;
            pplVar9[lVar8 * 2 + 1] = plVar4;
LAB_146e176db:
            lVar15 = lVar15 + 1;
            lVar19 = lVar19 + 0x30;
          } while (lVar19 != 0x60);
        }
        else {
          FUN_146e165e4((longlong)*(int *)(lVar16 + 0x60) * 200 + *(longlong *)(lVar20 + 0x20),
                        param_5,param_6);
          lVar20 = local_1118;
        }
      } while (local_70 != 0);
      uVar10 = 0;
      if (local_78 != (longlong **)0x0) {
        uVar10 = FUN_1400020a8();
      }
    }
  }
  uVar13 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
LAB_146e17746:
  if ((local_60 ^ (ulonglong)auStack_1168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffffffffff01;
}



// FUNCTION 146e178fc FUN_146e178fc body=248 status=ok
// SIG undefined FUN_146e178fc(void)

void FUN_146e178fc(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  bVar8 = false;
  iVar5 = 0;
  do {
    if ((bVar8) || ((longlong)(int)param_2[1] == 0)) {
LAB_146e17969:
      if (*(int *)(param_1 + 0xb8) <= iVar5) {
        return;
      }
      iVar4 = *(int *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar5 * 4);
      iVar5 = iVar5 + 1;
      bVar8 = true;
    }
    else {
      iVar4 = 0x7fffffff;
      bVar8 = true;
      lVar7 = 0;
      do {
        if (0 < *(int *)(*param_2 + 4 + lVar7)) {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0xa0) + (longlong)*(int *)(*param_2 + lVar7) * 4)
          ;
          bVar3 = iVar4 <= iVar1;
          if (iVar1 < iVar4) {
            iVar4 = iVar1;
          }
          bVar8 = (bool)(bVar8 & bVar3);
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)(int)param_2[1] * 8 != lVar7);
      if (bVar8) goto LAB_146e17969;
      lVar7 = param_2[1];
      if ((longlong)(int)lVar7 != 0) {
        lVar2 = *param_2;
        lVar6 = 0;
        do {
          iVar1 = *(int *)(lVar2 + 4 + lVar6);
          if ((0 < iVar1) &&
             (*(int *)(*(longlong *)(param_1 + 0xa0) + (longlong)*(int *)(lVar2 + lVar6) * 4) ==
              iVar4)) {
            *(int *)(lVar2 + lVar6) = *(int *)(lVar2 + lVar6) + 1;
            *(int *)(lVar2 + 4 + lVar6) = iVar1 + -1;
          }
          lVar6 = lVar6 + 8;
        } while ((longlong)(int)lVar7 << 3 != lVar6);
      }
      bVar8 = false;
    }
    FUN_146e179f4(param_3,(longlong)iVar4 * 0x68 + *(longlong *)(param_1 + 0x30));
  } while( true );
}



// FUNCTION 146e179f4 FUN_146e179f4 body=232 status=ok
// SIG undefined FUN_146e179f4(void)

void FUN_146e179f4(longlong *param_1,longlong param_2)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  double local_58 [3];
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  double local_28;
  
  local_28 = (double)(DAT_14c707940 ^ (ulonglong)auStack_78);
  local_58[2] = *(double *)(param_2 + 0x48);
  local_58[0] = *(double *)(param_2 + 0x38);
  local_58[1] = *(double *)(param_2 + 0x40);
  local_40._0_4_ = *(undefined4 *)(param_2 + 0x50);
  local_40._4_4_ = *(undefined4 *)(param_2 + 0x54);
  uStack_38 = *(undefined4 *)(param_2 + 0x58);
  uStack_34 = *(undefined4 *)(param_2 + 0x5c);
  local_30 = *(undefined8 *)(param_2 + 0x60);
  cVar7 = FUN_146e0527b(param_2,*param_1);
  if (cVar7 == '\0') {
    lVar8 = -3;
    do {
      dVar2 = *(double *)(param_1[4] + 0x18 + lVar8 * 8);
      if ((&local_28)[lVar8] <= dVar2 && dVar2 != (&local_28)[lVar8]) goto LAB_146e17a47;
      pdVar1 = (double *)(param_1[4] + 0x30 + lVar8 * 8);
      if (*pdVar1 <= (double)(&local_40)[lVar8] && (double)(&local_40)[lVar8] != *pdVar1)
      goto LAB_146e17a47;
      lVar8 = lVar8 + 1;
    } while (lVar8 != 0);
    uVar4 = *(undefined8 *)(param_2 + 8);
    plVar5 = *(longlong **)*param_1;
    lVar8 = ((longlong *)*param_1)[5];
    iVar3 = (int)plVar5[1];
    lVar9 = (longlong)iVar3;
    *(uint *)(plVar5 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)plVar5 + 0xc) < iVar3 + 1U) {
      FUN_1400f3dc4(plVar5,iVar3);
    }
    lVar6 = *plVar5;
    *(longlong *)(lVar6 + lVar9 * 0x18) = lVar8;
    *(undefined8 *)(lVar6 + 8 + lVar9 * 0x18) = uVar4;
    *(undefined4 *)(lVar6 + 0x10 + lVar9 * 0x18) = 0;
    *(undefined1 *)(lVar6 + 0x14 + lVar9 * 0x18) = 1;
  }
LAB_146e17a47:
  if (((ulonglong)local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e17ade FUN_146e17ade body=186 status=ok
// SIG undefined FUN_146e17ade(void)

undefined8 FUN_146e17ade(longlong param_1,undefined8 param_2,longlong param_3,undefined1 *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_4 = 1;
  iVar1 = *(int *)(param_3 + 0x30);
  if (iVar1 < *(int *)(param_1 + 0x120)) {
    lVar2 = *(longlong *)(param_1 + 0x118) + (longlong)iVar1 * 0x18;
    if (lVar2 == 0) {
      return 0;
    }
    if (*(char *)(*(longlong *)(param_1 + 0x118) + 0x14 + (longlong)iVar1 * 0x18) == '\0') {
      return 0;
    }
    iVar1 = *(int *)(lVar2 + 8);
    lVar2 = (longlong)iVar1;
    if ((lVar2 != -1) && (iVar1 < *(int *)(param_1 + 0x1a0) + -1)) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x198) + lVar2 * 4);
      lVar3 = (longlong)iVar1;
      if (*(int *)(*(longlong *)(param_1 + 0x198) + 4 + lVar2 * 4) <= iVar1) {
        return 1;
      }
      do {
        FUN_146e165e4((longlong)*(int *)(*(longlong *)(param_1 + 0x188) + lVar3 * 4) * 200 +
                      *(longlong *)(param_1 + 0x20),param_2,param_3);
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(*(longlong *)(param_1 + 0x198) + 4 + lVar2 * 4));
      return 1;
    }
  }
  return 0;
}



// FUNCTION 146e17b98 FUN_146e17b98 body=170 status=ok
// SIG undefined FUN_146e17b98(void)

void FUN_146e17b98(longlong *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x58) != *(int *)(lVar3 + 0x84)) {
    lVar6 = lVar3 + 0x88;
    if (*(longlong *)(lVar3 + 0x90) != 0) {
      lVar6 = *(longlong *)(lVar3 + 0x90);
    }
    uVar5 = *(uint *)(lVar6 + (ulonglong)(*(int *)(lVar3 + 0x98) - 1U & param_2) * 4);
    if (uVar5 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(lVar3 + 0x50) + (longlong)(int)uVar5 * 0x14);
        if (*puVar1 == param_2) {
          if (((ulonglong)(puVar1 + 1) & 0xfffffffffffffffb) == 0) {
            return;
          }
          plVar4 = (longlong *)param_1[1];
          iVar2 = (int)plVar4[1];
          *(uint *)(plVar4 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
            FUN_146dedd8c(plVar4,iVar2);
          }
          lVar3 = *plVar4;
          *(uint *)(lVar3 + (longlong)iVar2 * 8) = puVar1[1];
          *(uint *)(lVar3 + 4 + (longlong)iVar2 * 8) = puVar1[2];
          return;
        }
        uVar5 = puVar1[3];
      } while (uVar5 != 0xffffffff);
    }
  }
  return;
}



// FUNCTION 146e17c42 FUN_146e17c42 body=125 status=ok
// SIG undefined FUN_146e17c42(void)

void FUN_146e17c42(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0xff8);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0xff;
    if (0xff < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0xff < *(uint *)(param_1 + 0xffc)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0xffc) = iVar5;
    FUN_146e17cc0(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146e17cc0 FUN_146e17cc0 body=144 status=ok
// SIG undefined FUN_146e17cc0(void)

void FUN_146e17cc0(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xff0);
  if ((uint)param_3 < 0x100) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xff0,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0xff0),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xff0,param_2,param_3,0x10);
  return;
}



// FUNCTION 146e17d5a FUN_146e17d5a body=123 status=ok
// SIG undefined FUN_146e17d5a(void)

void FUN_146e17d5a(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x18) < param_3) {
    FUN_145891588(lVar1 + 0x10,param_3,1);
  }
  if (param_3 < *(int *)(lVar1 + 0x150)) {
    param_3 = *(int *)(lVar1 + 0x150);
  }
  *(int *)(lVar1 + 0x150) = param_3;
  FUN_146e0575c(param_1[1],param_3);
  uVar2 = *(undefined8 *)(*(longlong *)(param_1[1] + 8) + (longlong)param_2 * 8);
  lVar3 = (longlong)param_2 * 0x38;
  *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x20 + lVar3) = param_1[2];
  *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x28 + lVar3) = uVar2;
  return;
}



// FUNCTION 146e17e78 FUN_146e17e78 body=448 status=ok
// SIG undefined FUN_146e17e78(void)

void FUN_146e17e78(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [88];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((param_2 != (longlong *)0x0) && (1 < *(byte *)((longlong)param_2 + 0xc))) {
    lVar3 = *(longlong *)(*param_2 + 0x2c0);
    lVar8 = (longlong)(int)param_2[1] * 0x10;
    if ((*(char *)(lVar3 + 0xd + lVar8) != '\0') ||
       ((*(char *)(lVar3 + 0xb + lVar8) == '\x01' && (*(char *)(param_1 + 0x154) != '\x01'))))
    goto LAB_146e17f6c;
  }
  if (*(char *)(*(longlong *)(*param_2 + 0x158) + (longlong)(int)param_2[1]) == '\x01') {
    local_58 = 0;
    uStack_50 = 0;
    FUN_144b06a28(param_2,&local_58);
    lVar3 = *(longlong *)(*param_2 + 0x140);
    lVar8 = (longlong)(int)param_2[1] * 0x30;
    local_78 = *(undefined8 *)(lVar3 + 0x10 + lVar8);
    local_88 = *(undefined8 *)(lVar3 + lVar8);
    uStack_80 = ((undefined8 *)(lVar3 + lVar8))[1];
    puVar1 = (undefined4 *)(lVar3 + 0x18 + lVar8);
    local_70 = *puVar1;
    uStack_6c = puVar1[1];
    uStack_68 = puVar1[2];
    uStack_64 = puVar1[3];
    local_60 = *(undefined8 *)(lVar3 + 0x28 + lVar8);
    FUN_14030bbce(local_e0,param_2,&local_58,param_4);
    FUN_146e17180(param_3,&local_88,local_e0);
  }
  else {
    iVar6 = *(int *)(param_3 + 0x110);
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if (*(int *)((longlong)param_4 + 0xc) < iVar6) {
      FUN_146e0520a(param_4);
      iVar6 = *(int *)(param_3 + 0x110);
    }
    if (iVar6 != 0) {
      lVar3 = *(longlong *)(param_3 + 0x108);
      lVar8 = 0;
      do {
        plVar4 = *(longlong **)(lVar3 + 8 + lVar8);
        if (plVar4 != param_2) {
          iVar2 = (int)param_4[1];
          lVar7 = (longlong)iVar2;
          *(uint *)(param_4 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_4 + 0xc) < iVar2 + 1U) {
            FUN_1400f3dc4(param_4,iVar2);
          }
          lVar5 = *param_4;
          *(longlong **)(lVar5 + lVar7 * 0x18) = param_2;
          *(longlong **)(lVar5 + 8 + lVar7 * 0x18) = plVar4;
          *(undefined4 *)(lVar5 + 0x10 + lVar7 * 0x18) = 1;
          *(undefined1 *)(lVar5 + 0x14 + lVar7 * 0x18) = 1;
        }
        lVar8 = lVar8 + 0x68;
      } while ((longlong)iVar6 * 0x68 - lVar8 != 0);
    }
  }
LAB_146e17f6c:
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e18044 FUN_146e18044 body=123 status=ok
// SIG undefined FUN_146e18044(void)

void FUN_146e18044(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x18) < param_3) {
    FUN_145891588(lVar1 + 0x10,param_3,1);
  }
  if (param_3 < *(int *)(lVar1 + 0x150)) {
    param_3 = *(int *)(lVar1 + 0x150);
  }
  *(int *)(lVar1 + 0x150) = param_3;
  FUN_146e0575c(param_1[1],param_3);
  uVar2 = *(undefined8 *)(*(longlong *)(param_1[1] + 8) + (longlong)param_2 * 8);
  lVar3 = (longlong)param_2 * 0x38;
  *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x20 + lVar3) = param_1[2];
  *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x28 + lVar3) = uVar2;
  return;
}



// FUNCTION 146e1816c FUN_146e1816c body=123 status=ok
// SIG undefined FUN_146e1816c(void)

void FUN_146e1816c(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x18) < param_3) {
    FUN_145891588(lVar1 + 0x10,param_3,1);
  }
  if (param_3 < *(int *)(lVar1 + 0x150)) {
    param_3 = *(int *)(lVar1 + 0x150);
  }
  *(int *)(lVar1 + 0x150) = param_3;
  FUN_146e0575c(param_1[1],param_3);
  uVar2 = *(undefined8 *)(*(longlong *)(param_1[1] + 8) + (longlong)param_2 * 8);
  lVar3 = (longlong)param_2 * 0x38;
  *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x20 + lVar3) = param_1[2];
  *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x28 + lVar3) = uVar2;
  return;
}



// FUNCTION 146e18234 FUN_146e18234 body=370 status=ok
// SIG undefined FUN_146e18234(void)

undefined8 FUN_146e18234(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  if ((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    uVar2 = *(ulonglong *)(*(longlong *)(*param_2 + 0x260) + (longlong)(int)param_2[1] * 8);
    uVar3 = *(ulonglong *)(*(longlong *)(*param_3 + 0x260) + (longlong)(int)param_3[1] * 8);
    uVar10 = uVar2 >> 0x20;
    if (uVar2 >> 0x20 == 0xffffffff) {
      uVar10 = uVar2;
    }
    bVar12 = (int)(uVar2 >> 0x20) == -1;
    uVar4 = (uint)(uVar3 >> 0x20);
    if (0xfffffffeffffffff < uVar3) {
      uVar4 = (uint)uVar3;
    }
    uVar9 = (uint)uVar10;
    uVar11 = uVar4;
    if (uVar9 < uVar4) {
      uVar11 = uVar9;
    }
    uVar7 = uVar4;
    if (uVar4 < uVar9) {
      uVar7 = uVar9;
    }
    bVar5 = bVar12;
    bVar6 = 0xfffffffeffffffff < uVar3;
    if (uVar9 < uVar4) {
      bVar5 = 0xfffffffeffffffff < uVar3;
      bVar6 = bVar12;
    }
    local_48 = CONCAT44((uint)!bVar5 << 0x1f | uVar7 & 0x7fffffff,
                        (uint)!bVar6 << 0x1f | uVar11 & 0x7fffffff);
  }
  uVar8 = FUN_141727fba(param_2,param_3);
  iVar1 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
    FUN_14018d2cc((longlong *)(param_1 + 0x20),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 8) = uVar8;
  local_58 = param_4;
  FUN_140198bec(uVar8,param_2,param_3,&local_48);
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 146e183a8 FUN_146e183a8 body=211 status=ok
// SIG undefined FUN_146e183a8(void)

void FUN_146e183a8(undefined8 param_1,longlong *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  if ((longlong)(int)param_2[1] != 0) {
    lVar6 = *param_2;
    lVar7 = (longlong)(int)param_2[1] * 0x660;
    do {
      uVar1 = *(undefined8 *)(lVar6 + 0xe0);
      uVar2 = *(undefined8 *)(lVar6 + 0xe8);
      cVar4 = FUN_146e18563(uVar1,uVar2);
      uVar8 = uVar2;
      uVar3 = uVar1;
      if (cVar4 != '\0') {
        uVar8 = uVar1;
        uVar3 = uVar2;
      }
      uVar2 = *(undefined8 *)(param_3 + 8);
      lVar5 = FUN_144b06e76(uVar2,uVar3,uVar8,uVar1);
      if (lVar5 == 0) {
        lVar5 = FUN_146e18234(uVar2,uVar3,uVar8,param_3);
        FUN_14068f02a(param_1);
        if (lVar5 != 0) goto LAB_146e18420;
      }
      else {
        FUN_14068f02a(param_1);
LAB_146e18420:
        FUN_146d5bb8c(lVar5,lVar6,param_3);
      }
      lVar6 = lVar6 + 0x660;
      lVar7 = lVar7 + -0x660;
    } while (lVar7 != 0);
  }
  FUN_14068f634(param_1);
  return;
}



// FUNCTION 146e1847c FUN_146e1847c body=230 status=ok
// SIG undefined FUN_146e1847c(void)

void FUN_146e1847c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_6c8 [32];
  undefined1 local_6a8 [1640];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_6c8;
  plVar1 = (longlong *)(param_1 + 0x38);
  FUN_146e1897c(plVar1,(int)param_2[1]);
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar3 = *param_2;
    lVar5 = 0;
    do {
      FUN_146d686ac(local_6a8,*(undefined8 *)(lVar3 + lVar5));
      iVar2 = *(int *)(param_1 + 0x40);
      *(uint *)(param_1 + 0x40) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x44) < iVar2 + 1U) {
        FUN_146e18bd6(plVar1,iVar2);
      }
      FUN_146d686e4((longlong)iVar2 * 0x660 + *plVar1,local_6a8);
      FUN_14026d15c(local_6a8);
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar5);
  }
  if (*(int *)(param_1 + 0x44) != *(int *)(param_1 + 0x40)) {
    FUN_146e18b66(plVar1);
  }
  FUN_146e189ba(plVar1,param_1 + 0x48);
  if ((local_40 ^ (ulonglong)auStack_6c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e18563 FUN_146e18563 body=220 status=ok
// SIG undefined FUN_146e18563(void)

undefined8 FUN_146e18563(longlong *param_1,longlong *param_2)

{
  undefined8 in_RAX;
  undefined7 uVar3;
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar4;
  char cVar5;
  bool bVar6;
  
  uVar3 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar5 = '\x03';
  uVar1 = CONCAT71(uVar3,3);
  if ((param_1 != (longlong *)0x0 && *(byte *)((longlong)param_1 + 0xc) != 0) &&
     (uVar1 = CONCAT71(uVar3,2), 1 < *(byte *)((longlong)param_1 + 0xc))) {
    uVar1 = CONCAT71((int7)((ulonglong)*(longlong *)(*param_1 + 0x2c0) >> 8),
                     *(undefined1 *)
                      (*(longlong *)(*param_1 + 0x2c0) + 0xb + (longlong)(int)param_1[1] * 0x10));
  }
  if ((param_2 != (longlong *)0x0 && *(byte *)((longlong)param_2 + 0xc) != 0) &&
     (cVar5 = '\x02', 1 < *(byte *)((longlong)param_2 + 0xc))) {
    cVar5 = *(char *)(*(longlong *)(*param_2 + 0x2c0) + 0xb + (longlong)(int)param_2[1] * 0x10);
  }
  if (((char)uVar1 == '\x04') ||
     (uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),1), ((uint)uVar1 & 0xff) == 1)) {
    uVar1 = *(undefined8 *)(*(longlong *)(*param_2 + 0x260) + (longlong)(int)param_2[1] * 8);
    uVar2 = *(undefined8 *)(*(longlong *)(*param_1 + 0x260) + (longlong)(int)param_1[1] * 8);
    iVar4 = (int)uVar2;
    bVar6 = (int)((ulonglong)uVar2 >> 0x20) <= (int)((ulonglong)uVar1 >> 0x20);
    if ((int)uVar1 != iVar4) {
      bVar6 = iVar4 <= (int)uVar1;
    }
    uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),(cVar5 == '\x01' || cVar5 == '\x04') & bVar6);
  }
  return uVar2;
}



// FUNCTION 146e18640 FUN_146e18640 body=182 status=ok
// SIG undefined FUN_146e18640(void)

void FUN_146e18640(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar5 = (ulonglong)*(int *)(param_1 + 8);
  if (0 < (longlong)uVar5) {
    lVar6 = uVar5 * 0x20 + -0x10;
    do {
      plVar1 = (longlong *)**(longlong **)(*param_2 + -0x10 + lVar6);
      if ((((plVar1 == (longlong *)0x0) ||
           (plVar2 = (longlong *)**(longlong **)(*param_2 + lVar6), plVar2 == (longlong *)0x0)) ||
          (*(char *)(*(longlong *)(*plVar1 + 0x188) + (longlong)(int)plVar1[1]) == '\x01')) ||
         (*(char *)(*(longlong *)(*plVar2 + 0x188) + (longlong)(int)plVar2[1]) == '\x01')) {
        iVar4 = (int)uVar5 + -1;
        FUN_146e186f6(param_1,iVar4);
        FUN_146e18766(param_1);
        FUN_146e18812(param_2,iVar4);
        FUN_146e1887c(param_2);
      }
      lVar6 = lVar6 + -0x20;
      bVar3 = 1 < uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar3);
  }
  return;
}



// FUNCTION 146e186f6 FUN_146e186f6 body=112 status=ok
// SIG undefined FUN_146e186f6(void)

void FUN_146e186f6(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x660 + lVar1);
  FUN_14026d15c(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x660),(longlong)iVar3 * 0x660);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 146e18766 FUN_146e18766 body=62 status=ok
// SIG undefined FUN_146e18766(void)

void FUN_146e18766(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146e187a4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x660,0x10);
  }
  return;
}



// FUNCTION 146e187a4 FUN_146e187a4 body=110 status=ok
// SIG undefined FUN_146e187a4(void)

ulonglong FUN_146e187a4(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x660) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_146e187dd;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x660,0x10);
      param_2 = param_2 / 0x660;
    }
  }
LAB_146e187dd:
  return param_2 & 0xffffffff;
}



// FUNCTION 146e18812 FUN_146e18812 body=106 status=ok
// SIG undefined FUN_146e18812(void)

void FUN_146e18812(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x20 + lVar1);
  FUN_146e188ba(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x20),(longlong)iVar3 << 5);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 146e1887c FUN_146e1887c body=62 status=ok
// SIG undefined FUN_146e1887c(void)

void FUN_146e1887c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146e1891e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 146e188ba FUN_146e188ba body=100 status=ok
// SIG undefined FUN_146e188ba(void)

void FUN_146e188ba(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
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
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000146e18912. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146e1891e FUN_146e1891e body=93 status=ok
// SIG undefined FUN_146e1891e(void)

ulonglong FUN_146e1891e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 146e1897c FUN_146e1897c body=61 status=ok
// SIG undefined FUN_146e1897c(void)

void FUN_146e1897c(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    FUN_146e18b2c(param_1);
    return;
  }
  FUN_146e18b03(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 146e189ba FUN_146e189ba body=328 status=ok
// SIG undefined FUN_146e189ba(void)

void FUN_146e189ba(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  longlong lStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_146e18c6a(param_2,(int)param_1[1]);
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_1;
    lVar7 = 0;
    do {
      puVar5 = *(undefined8 **)(lVar2 + 0xe0 + lVar7);
      puVar5 = (undefined8 *)FUN_146d8d9d4(*puVar5,*(undefined4 *)(puVar5 + 1));
      local_78 = *puVar5;
      lStack_70 = puVar5[1];
      if (lStack_70 != 0) {
        LOCK();
        *(int *)(lStack_70 + 8) = *(int *)(lStack_70 + 8) + 1;
        UNLOCK();
      }
      puVar5 = *(undefined8 **)(lVar2 + 0xe8 + lVar7);
      puVar5 = (undefined8 *)FUN_146d8d9d4(*puVar5,*(undefined4 *)(puVar5 + 1));
      local_68 = *puVar5;
      lStack_60 = puVar5[1];
      if (lStack_60 != 0) {
        LOCK();
        *(int *)(lStack_60 + 8) = *(int *)(lStack_60 + 8) + 1;
        UNLOCK();
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_146e18d36(param_2,iVar1);
      }
      lVar3 = *param_2;
      lVar6 = (longlong)iVar1 * 0x20;
      *(undefined8 *)(lVar3 + lVar6) = local_78;
      *(longlong *)(lVar3 + 8 + lVar6) = lStack_70;
      local_78 = 0;
      lStack_70 = 0;
      *(undefined8 *)(lVar3 + 0x10 + lVar6) = local_68;
      *(longlong *)(lVar3 + 0x18 + lVar6) = lStack_60;
      local_68 = 0;
      lStack_60 = 0;
      FUN_146e188ba(&local_78);
      lVar7 = lVar7 + 0x660;
    } while ((longlong)(int)lVar4 * 0x660 - lVar7 != 0);
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e18b03 FUN_146e18b03 body=41 status=ok
// SIG undefined FUN_146e18b03(void)

void FUN_146e18b03(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14026d15c(param_1);
    param_1 = param_1 + 0x660;
  }
  return;
}



// FUNCTION 146e18b2c FUN_146e18b2c body=57 status=ok
// SIG undefined FUN_146e18b2c(void)

void FUN_146e18b2c(undefined8 *param_1,int param_2)

{
  FUN_146e18b03(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_146e18b66(param_1,param_2);
  return;
}



// FUNCTION 146e18b66 FUN_146e18b66 body=112 status=ok
// SIG undefined FUN_146e18b66(void)

void FUN_146e18b66(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x660,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x660)) {
      uVar2 = uVar1 / 0x660 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x660,0x10);
  }
  return;
}



// FUNCTION 146e18bd6 FUN_146e18bd6 body=146 status=ok
// SIG undefined FUN_146e18bd6(void)

void FUN_146e18bd6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x660,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x660)) {
      uVar5 = uVar4 / 0x660 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x660,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146e18c6a FUN_146e18c6a body=68 status=ok
// SIG undefined FUN_146e18c6a(void)

void FUN_146e18c6a(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_146e18caf(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_146e18cd6(param_1,param_2);
  return;
}



// FUNCTION 146e18caf FUN_146e18caf body=38 status=ok
// SIG undefined FUN_146e18caf(void)

void FUN_146e18caf(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146e188ba(param_1);
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 146e18cd6 FUN_146e18cd6 body=95 status=ok
// SIG undefined FUN_146e18cd6(void)

void FUN_146e18cd6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 146e18d36 FUN_146e18d36 body=132 status=ok
// SIG undefined FUN_146e18d36(void)

void FUN_146e18d36(longlong param_1,int param_2)

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



// FUNCTION 146e18dbc FUN_146e18dbc body=191 status=ok
// SIG undefined FUN_146e18dbc(void)

longlong FUN_146e18dbc(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x90;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x90) == *param_3) {
          if (lVar3 != 0) goto LAB_146e18e5e;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x80);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_146e18e7c(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x90 + *param_1;
LAB_146e18e5e:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 0x10;
}



// FUNCTION 146e18e7c FUN_146e18e7c body=308 status=ok
// SIG undefined FUN_146e18e7c(void)

undefined4 * FUN_146e18e7c(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146e18fb2(param_1,local_48);
  *local_40 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_40 + 4) = 0;
  *(undefined8 *)(local_40 + 6) = 0;
  *(undefined8 *)(local_40 + 8) = 0;
  *(undefined8 *)(local_40 + 10) = 0;
  *(undefined8 *)(local_40 + 0xc) = 0;
  *(undefined8 *)(local_40 + 0xe) = 0;
  *(undefined8 *)(local_40 + 0x10) = 0;
  *(undefined8 *)(local_40 + 0x12) = 0;
  *(undefined8 *)(local_40 + 0x14) = 0;
  *(undefined8 *)(local_40 + 0x16) = 0;
  *(undefined8 *)(local_40 + 0x18) = 0;
  *(undefined8 *)(local_40 + 0x1a) = 0;
  *(undefined8 *)(local_40 + 0x1c) = 0;
  *(undefined8 *)(local_40 + 0x1e) = 0;
  local_40[0x20] = 0xffffffff;
  cVar1 = FUN_146e190a2(param_1,param_3,local_40,local_48);
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
      local_40[0x21] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_40[0x20] =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_146e191b2(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e18fb2 FUN_146e18fb2 body=240 status=ok
// SIG undefined FUN_146e18fb2(void)

int * FUN_146e18fb2(longlong *param_1,int *param_2)

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
      FUN_146ceb2ee(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x90);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x90) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x90 + *param_1;
  return param_2;
}



// FUNCTION 146e190a2 FUN_146e190a2 body=149 status=ok
// SIG undefined FUN_146e190a2(void)

undefined8 FUN_146e190a2(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x90);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x90) == *param_3) {
          memmove(_Dst,param_3,0x80);
          FUN_146e19138(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x80);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 146e19138 FUN_146e19138 body=122 status=ok
// SIG undefined FUN_146e19138(void)

void FUN_146e19138(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x90) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x90) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x90 + 4) = uVar4;
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



// FUNCTION 146e191b2 FUN_146e191b2 body=433 status=ok
// SIG undefined FUN_146e191b2(void)

void FUN_146e191b2(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x90;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x84 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x80 + lVar7) =
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



// FUNCTION 146e19364 FUN_146e19364 body=38 status=ok
// SIG undefined FUN_146e19364(void)

undefined8 FUN_146e19364(undefined8 param_1,int param_2)

{
  FUN_1457a7b16();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e19390 FUN_146e19390 body=62 status=ok
// SIG undefined FUN_146e19390(void)

undefined8 * FUN_146e19390(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *(undefined4 *)(puVar1 + 1) = param_3;
  *puVar1 = &PTR_FUN_149f5d620;
  puVar1[2] = param_1;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 146e193ce FUN_146e193ce body=29 status=ok
// SIG undefined FUN_146e193ce(void)

undefined8 FUN_146e193ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e193fa FUN_146e193fa body=66 status=ok
// SIG undefined FUN_146e193fa(void)

void FUN_146e193fa(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (0 < *(int *)(lVar1 + 0x30)) {
    lVar3 = 0;
    do {
      uVar2 = FUN_1448f7274(param_2,*(undefined8 *)(*(longlong *)(lVar1 + 0x28) + lVar3 * 8));
      *(undefined8 *)(*(longlong *)(lVar1 + 0x78) + lVar3 * 8) = uVar2;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(lVar1 + 0x30));
  }
  return;
}



// FUNCTION 146e1943e FUN_146e1943e body=42 status=ok
// SIG undefined FUN_146e1943e(void)

void FUN_146e1943e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (0 < *(int *)(lVar1 + 0x30)) {
    iVar2 = 0;
    do {
      FUN_140d61c24(lVar1,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(lVar1 + 0x30));
  }
  return;
}



// FUNCTION 146e1946a FUN_146e1946a body=42 status=ok
// SIG undefined FUN_146e1946a(void)

void FUN_146e1946a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (0 < *(int *)(lVar1 + 0x30)) {
    iVar2 = 0;
    do {
      FUN_1407d4be4(lVar1,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(lVar1 + 0x30));
  }
  return;
}



// FUNCTION 146e19494 FUN_146e19494 body=58 status=ok
// SIG undefined FUN_146e19494(void)

void FUN_146e19494(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (0 < *(int *)(lVar1 + 0x30)) {
    iVar2 = 0;
    do {
      FUN_1408db536(lVar1,iVar2,param_2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(lVar1 + 0x30));
  }
  return;
}



// FUNCTION 146e194ce FUN_146e194ce body=58 status=ok
// SIG undefined FUN_146e194ce(void)

void FUN_146e194ce(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (0 < *(int *)(lVar1 + 0x30)) {
    iVar2 = 0;
    do {
      FUN_140902f7e(lVar1,iVar2,param_2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(lVar1 + 0x30));
  }
  return;
}



// FUNCTION 146e1950c FUN_146e1950c body=64 status=ok
// SIG undefined FUN_146e1950c(void)

void FUN_146e1950c(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    lVar3 = *(longlong *)(param_1 + 0x18);
    lVar4 = 0;
    do {
      FUN_140d61c24(uVar2,*(undefined4 *)(lVar3 + lVar4));
      lVar4 = lVar4 + 4;
    } while ((longlong)iVar1 * 4 != lVar4);
  }
  return;
}



// FUNCTION 146e1954c FUN_146e1954c body=64 status=ok
// SIG undefined FUN_146e1954c(void)

void FUN_146e1954c(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    lVar3 = *(longlong *)(param_1 + 0x18);
    lVar4 = 0;
    do {
      FUN_1407d4be4(uVar2,*(undefined4 *)(lVar3 + lVar4));
      lVar4 = lVar4 + 4;
    } while ((longlong)iVar1 * 4 != lVar4);
  }
  return;
}



// FUNCTION 146e1958c FUN_146e1958c body=104 status=ok
// SIG undefined FUN_146e1958c(void)

void FUN_146e1958c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined1 *local_20;
  longlong *local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &local_10;
  local_18 = &local_38;
  local_20 = &LAB_146e19714;
  local_38 = param_2;
  local_28 = param_1;
  local_10 = param_3;
  FUN_1400bd65e(*(undefined4 *)(param_2 + 0x18),&local_20,0);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e195f6 FUN_146e195f6 body=104 status=ok
// SIG undefined FUN_146e195f6(void)

void FUN_146e195f6(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined1 *local_20;
  longlong *local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &local_10;
  local_18 = &local_38;
  local_20 = &LAB_146e19734;
  local_38 = param_2;
  local_28 = param_1;
  local_10 = param_3;
  FUN_1400bd65e(*(undefined4 *)(param_2 + 0x18),&local_20,0);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e19660 FUN_146e19660 body=104 status=ok
// SIG undefined FUN_146e19660(void)

void FUN_146e19660(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined1 *local_20;
  longlong *local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &local_10;
  local_18 = &local_38;
  local_20 = &LAB_146e19754;
  local_38 = param_2;
  local_28 = param_1;
  local_10 = param_3;
  FUN_1400bd65e(*(undefined4 *)(param_2 + 0x18),&local_20,0);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e196f6 FUN_146e196f6 body=29 status=ok
// SIG undefined FUN_146e196f6(void)

undefined8 FUN_146e196f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e19774 FUN_146e19774 body=29 status=ok
// SIG undefined FUN_146e19774(void)

undefined8 FUN_146e19774(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e19792 FUN_146e19792 body=38 status=ok
// SIG undefined FUN_146e19792(void)

undefined8 FUN_146e19792(undefined8 param_1,int param_2)

{
  FUN_146e19896();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e197b8 FUN_146e197b8 body=220 status=ok
// SIG undefined FUN_146e197b8(void)

void FUN_146e197b8(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x8c);
  uVar1 = (uint)ROUND(-0.5 - ((float)iVar3 * 0.1 + (float)iVar3 * 0.1));
  iVar4 = *(int *)(param_1 + 0xa8);
  if (*(int *)(param_1 + 0xa8) <= iVar3) {
    iVar4 = iVar3;
  }
  *(int *)(param_1 + 0xa8) = iVar4;
  iVar4 = (uVar1 & 0xfffffffe) + iVar4;
  iVar2 = 0;
  if (0 < iVar4) {
    iVar2 = iVar4;
  }
  if (iVar3 < iVar2) {
    iVar3 = iVar3 - ((int)uVar1 >> 1);
    FUN_146e199f0(param_1 + 0x58,iVar3);
    *(int *)(param_1 + 0xa8) = iVar3;
  }
  else {
    FUN_146e19ba8(param_1 + 0x58);
  }
  iVar4 = *(int *)(param_1 + 0x44);
  FUN_146e18b03(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((iVar4 < 0) && (*(int *)(param_1 + 0x44) != 0)) {
    FUN_146e18b66(param_1 + 0x38,0);
  }
  iVar4 = *(int *)(param_1 + 0x54);
  FUN_146e18caf(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((iVar4 < 0) && (*(int *)(param_1 + 0x54) != 0)) {
    FUN_146e18cd6(param_1 + 0x48,0);
    return;
  }
  return;
}



// FUNCTION 146e19896 FUN_146e19896 body=162 status=ok
// SIG undefined FUN_146e19896(void)

void FUN_146e19896(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f5d7b0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_146e19938(param_1 + 0xb);
  FUN_146e18caf(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_146e18b03(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_149f5d7c0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}


